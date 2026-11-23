#!/usr/bin/env python3
"""Hand-drawn maps: an ASCII canvas + a tileset legend -> map.bin (+ anchors).

The drawing is the source of truth. Every character is one metatile; scripted
entities are anchor letters whose coordinates are written to anchors.json so
map.json / scripts / warps can follow the drawing.

Usage:
  python3 tools/skald/draw.py data/layouts/ParcelIsle/canvas.txt

Canvas file format:
  legend <name>             # tools/skald/legends/<name>.json (shared per tileset pair)
  size <W> <H>
  anchor <ch> <legend-ch>   # anchor letter drawn over that base tile
  tile <ch> <id> [col] [elev]   # per-map extra tile
  border <id> <id> <id> <id>    # optional 2x2 border override
  ---
  <H rows of exactly W characters; text after two spaces and '#' is a comment>
  --- levels                    # optional: the height of every cell, one digit each (see "terrain")
  <H rows of exactly W digits>
  --- over                      # optional: things hung over the ground ('.' = nothing; see "over")
  <H rows of exactly W characters>

Legend JSON:
  {"tiles": {".": [id, col, elev], ...},
   "stamps": {"H": {"rows": [[..ids..],[..]], "pass": [[r,c],...]}},
   "fill": "#", "border": [id,id,id,id]}
A stamp char marks the top-left of a multi-tile object; the cells it covers
must contain the fill char. Cells listed in "pass" are walkable (col 0, elev 3)
- arches, a roof one walks behind; everything else in a stamp is solid (col 1),
its door too: the engine opens a door the player walks north into when a warp
event sits on it, whatever its collision. "door": [row, col] has the door's
cell printed and written to anchors.json.

After the characters are laid down, the legend's optional passes finish the drawing. None of
them changes collision or elevation; they only choose the metatile for a cell from what lies
around it, so the canvas stays one character per cell:

  "paths"   [{"chars": "c", "join": "~AK", "pieces": {"plain": id, "N": id, "S", "W", "E",
              "NW", "NE", "SW", "SE", "iNW", "iNE", "iSW", "iSE"}}]
            A path set. N = the piece with open ground to its north, NW = the outer corner,
            iNW = the inner corner (optional). Each quarter of a cell is chosen by the three
            neighbours that touch it; where no shipped piece has those four quarters, one is
            put together from them (tools/skald/mtile.py). "join" lists characters (stamp
            letters included) the path runs up to without an edge: water, walls, another path.
            Optional "kerb": {"against": ":", "pieces": {same keys}}: where one of those
            characters (a road) touches a quarter, the quarter is the kerb piece instead.
  "runs"    {"H": [left, mid, right, single]}        a hedge: its ends follow the run
  "fences"  {"F": {"h", "tl", "tr", "bl", "br", "vl", "vr"}}   a paddock: corners and sides
  "wood"    {"N": [top, mid, bottom]}                a spruce wood: each column's run of cells
  "firs"    {"T": {"body": [l, r], "foot": [l, r], "foot_tip": [l, r]}}
            General's big fir as a 2x2 stamp: the foot carries the tip of the fir below it,
            and a tip is laid over whatever stands above a top-row fir
  "tall"    {"B": {"top_of": id} | {"top": [4 tile entries]}}
            something two cells tall on one solid cell: its head goes into the top layer of
            the cell above, so the player walks behind it
  "dress"   overlapping kit trees (see dress() below)
  "terrain" cliffs, shore and beach from the canvas's levels block (see terrain() below)
  "over"    {"*": {"run": [left, mid, right]}}: the canvas's over block marks cells with something
            overhead (a string of lights); the top layer of the named metatile is laid over
            whatever the cell turned out to be, the ends of each horizontal run with their own
"""
import json, struct, sys
from pathlib import Path

HERE = Path(__file__).resolve().parent


def wq(mid, col, elev):
    return (elev << 12) | (col << 10) | mid


def load_legend(name):
    return json.loads((HERE / "legends" / f"{name}.json").read_text())


def parse_canvas(path):
    head, rows, in_rows = {}, [], False
    anchors, extra, border = {}, {}, None
    levels = head.setdefault("levels", [])
    for line in Path(path).read_text().splitlines():
        if in_rows and line.strip() == "--- levels":
            in_rows = "levels"
            continue
        if in_rows and line.strip() == "--- over":
            in_rows = "over"
            continue
        if in_rows == "levels":
            if line.strip():
                levels.append(line.rstrip("\n"))
            continue
        if in_rows == "over":
            if line.strip():
                head.setdefault("over", []).append(line.rstrip("\n"))
            continue
        if in_rows:
            if "  #" in line:
                line = line[: line.index("  #")]
            if line.strip() == "":
                continue
            rows.append(line.rstrip("\n"))
            continue
        if line.strip() == "---":
            in_rows = True
            continue
        if not line.strip() or line.startswith("#"):
            continue
        parts = line.split()
        if parts[0] == "legend":
            head["legend"] = parts[1]
        elif parts[0] == "size":
            head["w"], head["h"] = int(parts[1]), int(parts[2])
        elif parts[0] == "anchor":
            anchors[parts[1]] = parts[2]
        elif parts[0] == "tile":
            mid = int(parts[2])
            col = int(parts[3]) if len(parts) > 3 else 0
            elev = int(parts[4]) if len(parts) > 4 else (3 if col == 0 else 0)
            extra[parts[1]] = [mid, col, elev]
        elif parts[0] == "border":
            border = [int(x) for x in parts[1:5]]
        else:
            raise SystemExit(f"unknown header line: {line}")
    return head, anchors, extra, border, rows


def dress(grid, spec, W, H):
    """Trees that overlap. A kit whose trees are drawn as overlapping parts (a crown row, then a row
    that is this tree's foot AND the tip of the tree in front of it) cannot be a fixed 2x2 stamp:
    the second row depends on what stands below, and the tip sits in the open cell above. The
    legend's "dress" block says how, and the canvas keeps one stamp per tree:

      "dress": {"kinds":  {"D": [crownL, crownR], "L": [...]},       2x2 stamps, crown row first
                "bottom": {"D>D": [l, r], "D>L": [l, r], "D>": [l, r], ...},   this kind > kind below ("" = open)
                "tip":    {"D": {"512": [l, r], "527": [l, r]}, ...}}  the cell above a crown: id -> tip over it

    Collision and elevation of every touched cell are kept; only the metatile id changes."""
    if not spec:
        return
    kinds = {tuple(v): k for k, v in spec["kinds"].items()}

    def mid(x, y):
        return grid[y][x] & 0x3FF if 0 <= x < W and 0 <= y < H and grid[y][x] is not None else None

    def put(x, y, m):
        grid[y][x] = (grid[y][x] & ~0x3FF) | m

    def kind_at(x, y):
        return kinds.get((mid(x, y), mid(x + 1, y)))

    blocks = [(x, y, kind_at(x, y)) for y in range(H - 1) for x in range(W - 1) if kind_at(x, y)]
    bottoms = set()
    for x, y, k in blocks:                                  # the foot row first, for every tree
        below = kind_at(x, y + 2) if y + 2 < H else None
        l, r = spec["bottom"][f"{k}>{below or ''}"]
        put(x, y + 1, l); put(x + 1, y + 1, r)
        bottoms.update({(x, y + 1), (x + 1, y + 1)})
    for x, y, k in blocks:                                  # then the tips, over open ground only
        if y == 0:
            continue
        for i in (0, 1):
            if (x + i, y - 1) in bottoms:
                continue
            tip = spec["tip"].get(k, {}).get(str(mid(x + i, y - 1)))
            if tip:
                put(x + i, y - 1, tip[i])


OFFS = {"N": (0, -1), "E": (1, 0), "S": (0, 1), "W": (-1, 0), "NE": (1, -1), "SE": (1, 1), "SW": (-1, 1), "NW": (-1, -1)}
QUARTERS = (("N", "W", "NW"), ("N", "E", "NE"), ("S", "W", "SW"), ("S", "E", "SE"))    # TL, TR, BL, BR
# which quarters a shipped piece is made of, so the piece itself is used when a cell needs exactly those
WHOLE = {"plain": ("plain",) * 4, "N": ("N", "N", "plain", "plain"), "S": ("plain", "plain", "S", "S"),
         "W": ("W", "plain", "W", "plain"), "E": ("plain", "E", "plain", "E"),
         "NW": ("NW", "N", "W", "plain"), "NE": ("N", "NE", "plain", "E"),
         "SW": ("W", "plain", "SW", "S"), "SE": ("plain", "E", "S", "SE"),
         "iNW": ("iNW", "plain", "plain", "plain"), "iNE": ("plain", "iNE", "plain", "plain"),
         "iSW": ("plain", "plain", "iSW", "plain"), "iSE": ("plain", "plain", "plain", "iSE")}


def put(grid, x, y, m):
    grid[y][x] = (grid[y][x] & ~0x3FF) | m


def paths(grid, owner, specs, W, H, d):
    import mtile
    for spec in specs:
        chars, join, pc = set(spec["chars"]), set(spec.get("join", "")), dict(spec["pieces"])
        kerb = spec.get("kerb")                       # paving beside a road: {"against": ":", "pieces": {...}}
        against = set(kerb["against"]) if kerb else set()
        if kerb:
            pc.update({"k" + k: v for k, v in kerb["pieces"].items()})
        whole = {k: sig for k, sig in WHOLE.items()}
        whole.update({"k" + k: tuple(q if q == "plain" else "k" + q for q in sig) for k, sig in WHOLE.items() if k != "plain"})

        def at(x, y):
            return owner[y][x] if 0 <= x < W and 0 <= y < H else None

        def same(x, y):
            o = at(x, y)
            return o is None or o in chars or o in join

        for y in range(H):
            for x in range(W):
                if owner[y][x] not in chars:
                    continue
                keys = []
                for vert, horiz, diag in QUARTERS:
                    nb = [(x + OFFS[k][0], y + OFFS[k][1]) for k in (vert, horiz, diag)]
                    rv, rh, rd = [at(*n) in against for n in nb]
                    if rv or rh or rd:                # a road touches this quarter: a kerb, whatever else does
                        k = diag if rv and rh else vert if rv else horiz if rh else "i" + diag
                        keys.append("k" + k if "k" + k in pc else "plain")
                        continue
                    v, h, g = [not same(*n) for n in nb]
                    keys.append(diag if v and h else vert if v else horiz if h
                                else "i" + diag if g and "i" + diag in pc else "plain")
                hit = [k for k, sig in whole.items() if sig == tuple(keys) and k in pc]
                if hit:
                    put(grid, x, y, pc[hit[0]])
                    continue
                # an edge quarter beside a corner quarter comes from the corner piece (its own edge variant)
                src = []
                for q, k in enumerate(keys):
                    pre, kind = ("k", k[1:]) if k.startswith("k") else ("", k)
                    for other in (keys[q ^ 1], keys[q ^ 2]):
                        opre, okind = ("k", other[1:]) if other.startswith("k") else ("", other)
                        if opre == pre and len(okind) == 2 and not okind.startswith("i") and len(kind) == 1 and kind in okind:
                            k = other
                            break
                    src.append(pc[k])
                m = mtile.quad(d, src, like=pc["plain"])
                if m is None:
                    raise SystemExit(f"path piece at {x},{y}: no room left for a new metatile")
                put(grid, x, y, m)


def runs(grid, owner, spec, W, H):
    for ch, (left, mid, right, single) in spec.items():
        for y in range(H):
            for x in range(W):
                if owner[y][x] != ch:
                    continue
                w = x > 0 and owner[y][x - 1] == ch
                e = x < W - 1 and owner[y][x + 1] == ch
                put(grid, x, y, mid if w and e else left if e else right if w else single)


def fences(grid, owner, spec, W, H):
    for ch, f in spec.items():
        def is_f(x, y):
            return 0 <= x < W and 0 <= y < H and owner[y][x] == ch

        for y in range(H):
            for x in range(W):
                if not is_f(x, y):
                    continue
                n, e, s, w = is_f(x, y - 1), is_f(x + 1, y), is_f(x, y + 1), is_f(x - 1, y)
                if e or w:
                    m = (f["tl"] if s and e and not w else f["tr"] if s and w and not e else
                         f["bl"] if n and e and not w else f["br"] if n and w and not e else f["h"])
                else:                       # a side: which one? follow it to its corner and see where the rail goes
                    side = None
                    for step in (-1, 1):
                        yy = y
                        while is_f(x, yy + step):
                            yy += step
                        ce, cw = is_f(x + 1, yy), is_f(x - 1, yy)
                        if ce != cw:
                            side = "vl" if ce else "vr"
                            break
                    m = f[side or "vl"]
                put(grid, x, y, m)


def wood(grid, owner, spec, W, H):
    for ch, (top, mid, bottom) in spec.items():
        for x in range(W):
            y = 0
            while y < H:
                if owner[y][x] != ch:
                    y += 1
                    continue
                y0 = y
                while y < H and owner[y][x] == ch:
                    y += 1
                for yy in range(y0, y):
                    # a run that leaves the map goes on in the next map or the border: no crown row, no foot row there
                    put(grid, x, yy, top if yy == y0 and y0 > 0 else bottom if yy == y - 1 and y < H else mid)


def firs(grid, owner, spec, W, H, d):
    import mtile, trees
    for ch, f in spec.items():
        body = {f["body"][0]: 0, f["body"][1]: 1}

        def half(x, y):
            if 0 <= x < W and 0 <= y < H and owner[y][x] == ch:
                return body.get(grid[y][x] & 0x3FF)
            return None

        feet = set()
        cells = [(x, y, half(x, y)) for y in range(H) for x in range(W) if half(x, y) is not None]
        for x, y, i in cells:                               # the foot: with the next fir's tip when one stands below
            if y + 1 >= H:
                continue
            below = half(x, y + 2) == i or y + 2 >= H        # past the last row the border's firs go on
            put(grid, x, y + 1, (f["foot_tip"] if below else f["foot"])[i])
            feet.add((x, y + 1))
        for x, y, i in cells:                               # the tip, over whatever stands above
            if y == 0 or (x, y - 1) in feet:
                continue
            m = mtile.with_top(d, grid[y - 1][x] & 0x3FF, trees.TIP["LR"[i]], why="a fir tip over it")
            if m is None:
                print(f"  warning: no room for a fir tip at {x},{y - 1}")
            else:
                put(grid, x, y - 1, m)


def tall(grid, owner, spec, W, H, d):
    import mtile
    for ch, t in spec.items():
        top = tuple(t["top"]) if "top" in t else tuple(d["mts"][t["top_of"]][8:12])
        for y in range(1, H):
            for x in range(W):
                if owner[y][x] != ch:
                    continue
                m = mtile.with_top(d, grid[y - 1][x] & 0x3FF, top, why=f"the head of {ch!r} over it")
                if m is None:
                    print(f"  warning: no room for the head of {ch!r} at {x},{y - 1}")
                else:
                    put(grid, x, y - 1, m)


def terrain(grid, owner, levels, spec, W, H):
    """Cliffs, shore and beach, Emerald's way, from a height for every cell.

    The canvas only says what the ground is ('.' grass, '~' sea, 'w' shallows, 's' sand ...) and,
    in its levels block, how high each cell stands. This pass does what a mapper does by hand:

      * the outermost cells of every higher area become its cliff. Where the drop is to the south
        the cell is a rock face (and the cell below it, if that is land, the face's second row,
        the base); to the west or east it is the side wall; to the NORTH it is only the rim, the
        far edge of the top seen from the front (a pale line: "N", "NW", "NE"). All are solid.
      * a side wall and a base end are chosen by what lies beside them: "W_grass" / "W_sand"
        beside lower grass or sand, plain "W" beside water or more rock; "E_land" beside land;
        the base ends "left"/"right" on grass, "left_sand"/"right_sand" on sand, the plain
        corner beside water
      * deep water beside land gets the bank's shadow (a brook is deep water at the land's own
        height); deep water beside shallows gets the shelf's edge; shallows beside sand get the
        tide line
      * fresh water ("fresh") gets a bank ("bank") on every side that is not water ("wet")
    The legend's "terrain" block names the characters and the pieces:

      "terrain": {"ground": ".,f", "deep": "~", "shallow": "w", "sand": "s",
                  "wall": {"S", "W", "E", "SW", "SE", "iSW", "iSE", "endW", "endE",
                           "W_grass", "W_sand", "E_land", "N", "NW", "NE"},
                  "base": {"mid", "left", "right", "left_sand", "right_sand"},
                  "rim": {"N", "E", "W", "NE", "NW", "iNE", "iNW"},
                  "tide": {...}, "shelf": {...}, "drop": {...}, "through": "=C"}
    Stairs and anything else that is not a "ground" character is left alone, so a stair drawn
    across a wall's two rows stays a stair. "through" lists what interrupts a wall without ending
    it (a stair, a cave mouth, a waterfall): the wall beside it keeps its plain piece.
    Outside the map the ground is taken to go on as it is at the edge (a connection carries it), so a
    cliff that runs off the map keeps its plain piece in the last column."""
    if not spec:
        return
    if len(levels) != H or any(len(r) != W for r in levels):
        raise SystemExit("terrain: the canvas needs a '--- levels' block of the map's size")
    L = [[int(c) if c.isdigit() else 0 for c in r] for r in levels]
    ground, deep, shallow, sand = set(spec["ground"]), set(spec["deep"]), set(spec.get("shallow", "")), set(spec.get("sand", ""))
    wall, base, rim, through = spec["wall"], spec.get("base"), spec["rim"], set(spec.get("through", ""))
    south = ("S", "SW", "SE", "endW", "endE")

    def lower(x, y, h):
        # past the map's edge the ground goes on as it is at the edge (a connected map carries the same profile)
        return L[min(max(y, 0), H - 1)][min(max(x, 0), W - 1)] < h

    def solid(x, y, m):
        grid[y][x] = wq(m, 1, 0)

    walls = {}
    for y in range(H):
        for x in range(W):
            if owner[y][x] not in ground or L[y][x] == 0:
                continue
            h = L[y][x]
            lo = {k: lower(x + dx, y + dy, h) for k, (dx, dy) in OFFS.items()}
            if lo["N"]:
                if "N" not in wall:
                    print(f"  warning: the ground drops to the north at {x},{y}; this set has no rim piece")
                    continue
                if lo["S"]:
                    print(f"  warning: a one-row ridge at {x},{y} (lower ground both north and south)")
                k = "NW" if lo["W"] else "NE" if lo["E"] else "N"
            else:
                k = ("SW" if lo["S"] and lo["W"] else "SE" if lo["S"] and lo["E"] else
                     ("endW" if lo["SE"] and not lo["SW"] else "endE" if lo["SW"] and not lo["SE"] else "S") if lo["S"] else
                     "W" if lo["W"] else "E" if lo["E"] else "iSW" if lo["SW"] else "iSE" if lo["SE"] else None)
            if k:
                walls[(x, y)] = k

    def beside(x, y):
        """What a wall at the neighbouring cell would stand against: grass, sand, or neither (water, rock)."""
        if not (0 <= x < W and 0 <= y < H) or (x, y) in walls:
            return None
        o = owner[y][x]
        return "grass" if o in ground else "sand" if o in sand else None

    for (x, y), k in walls.items():
        m = wall[k]
        if k == "W":
            m = wall.get({"grass": "W_grass", "sand": "W_sand"}.get(beside(x - 1, y)), m)
        elif k == "E" and beside(x + 1, y):
            m = wall.get("E_land", m)
        solid(x, y, m)
    for (x, y) in walls:
        owner[y][x] = "%"                       # a cliff: nothing joins it, nothing walks on it
    if base:
        made = []
        for (x, y), k in walls.items():
            if k not in south or y + 1 >= H or (x, y + 1) in walls:
                continue
            o = owner[y + 1][x]
            if o in ground or o in sand:
                on = lambda xx: not 0 <= xx < W or walls.get((xx, y)) in south or owner[y][xx] in through
                left, right = not on(x - 1), not on(x + 1)
                m = base["mid"]
                if left != right:
                    side = beside(x - 1 if left else x + 1, y + 1)
                    end = "left" if left else "right"
                    m = (base.get(end + "_sand", base[end]) if side == "sand" else base[end] if side == "grass"
                         else wall["SW" if left else "SE"])
                made.append((x, y + 1, m))
        for x, y, m in made:
            solid(x, y, m)
            owner[y][x] = "%"
    tide, shelf, drop = spec.get("tide", {}), spec.get("shelf", {}), spec.get("drop", {})
    fresh, bank = set(spec.get("fresh", "")), spec.get("bank", {})
    wet = set(spec.get("wet", "")) | deep | shallow | fresh
    plain = set(spec.get("plain", ""))          # wet or sandy things that keep their own picture (a rock, a stake)
    is_land = lambda x, y: 0 <= x < W and 0 <= y < H and owner[y][x] not in wet and owner[y][x] not in sand
    is_in = lambda x, y, chars: 0 <= x < W and 0 <= y < H and owner[y][x] in chars

    def pick(table, at):
        """at(dir) -> bool. The piece for which sides are 'there': a corner pair first, then a side, then a lone diagonal."""
        for a, b in (("N", "W"), ("N", "E"), ("S", "W"), ("S", "E")):
            if at(a) and at(b) and a + b in table:
                return table[a + b]
        for a in "NSWE":
            if at(a) and a in table:
                return table[a]
        for dg in ("NW", "NE", "SW", "SE"):
            if at(dg) and "i" + dg in table:
                return table["i" + dg]
        return None

    for y in range(H):
        for x in range(W):
            o = owner[y][x]
            if o in plain:
                continue
            here = lambda chars: (lambda k: is_in(x + OFFS[k][0], y + OFFS[k][1], chars))
            m = None
            if o in deep:
                m = pick(rim, lambda k: is_land(x + OFFS[k][0], y + OFFS[k][1])) or pick(drop, here(shallow))
            elif o in shallow:
                m = pick(tide, here(sand)) or pick(shelf, here(deep))
            elif o in fresh:                      # a brook or a pool: a bank wherever the neighbour is not water
                m = pick(bank, lambda k: 0 <= x + OFFS[k][0] < W and 0 <= y + OFFS[k][1] < H
                         and owner[y + OFFS[k][1]][x + OFFS[k][0]] not in wet)
            if m:
                put(grid, x, y, m)


def over(grid, rows, spec, W, H, d):
    import mtile
    if not rows:
        return
    if len(rows) != H or any(len(r) != W for r in rows):
        raise SystemExit("over: the block must be the map's size")
    for y in range(H):
        for x in range(W):
            ch = rows[y][x]
            if ch not in spec:
                continue
            left, mid, right = spec[ch]["run"]
            w = x > 0 and rows[y][x - 1] == ch
            e = x < W - 1 and rows[y][x + 1] == ch
            piece = mid if (w and e) or not (w or e) else left if e else right
            m = mtile.with_top(d, grid[y][x] & 0x3FF, d["mts"][piece][8:12], why=f"{ch!r} hung over it")
            if m is None:
                print(f"  warning: no room to hang {ch!r} over {x},{y}")
            else:
                put(grid, x, y, m)


def tileset_pair(canvas_path):
    """The loaded metatiles of the tilesets this canvas's layout uses (for the passes that may add one)."""
    import mtile, pal_tool
    rel = str(Path(canvas_path).resolve().parent.relative_to(HERE.parents[1]))
    for lay in json.loads((HERE.parents[1] / "data/layouts/layouts.json").read_text())["layouts"]:
        if str(Path(lay.get("blockdata_filepath", "")).parent) == rel:
            return mtile.load(pal_tool.tdir(lay["primary_tileset"], "primary"),
                              pal_tool.tdir(lay["secondary_tileset"], "secondary"))
    raise SystemExit(f"{canvas_path}: no layout in layouts.json draws from this folder")


def build(canvas_path):
    canvas_path = Path(canvas_path)
    head, anchors_def, extra, border, rows = parse_canvas(canvas_path)
    legend = load_legend(head["legend"])
    tiles = dict(legend.get("tiles", {}))
    tiles.update(extra)
    stamps = legend.get("stamps", {})
    fill = legend.get("fill", "#")
    W, H = head["w"], head["h"]
    if len(rows) != H:
        raise SystemExit(f"{canvas_path}: {len(rows)} rows, size says {H}")
    for y, r in enumerate(rows):
        if len(r) != W:
            raise SystemExit(f"{canvas_path}: row {y} is {len(r)} wide, size says {W}")

    grid = [[None] * W for _ in range(H)]
    owner = [[None] * W for _ in range(H)]      # the legend character each cell belongs to (a stamp's letter for all its cells)
    anchors = {}
    doors = []
    covered = set()
    # pass 1: stamps (so their fill cells are claimed before single tiles)
    for y, r in enumerate(rows):
        for x, ch in enumerate(r):
            if ch in stamps and ch not in anchors_def:     # a canvas's own anchor letter wins over a legend stamp of that name
                st = stamps[ch]
                passable = {tuple(p) for p in st.get("pass", [])}
                water = {tuple(p) for p in st.get("water", [])}
                for dy, srow in enumerate(st["rows"]):
                    for dx, mid in enumerate(srow):
                        xx, yy = x + dx, y + dy
                        if yy >= H or xx >= W:
                            raise SystemExit(f"stamp {ch!r} at {x},{y} runs off the map")
                        if (dx, dy) != (0, 0) and rows[yy][xx] != fill:
                            raise SystemExit(f"stamp {ch!r} at {x},{y}: cell {xx},{yy} must be {fill!r}, is {rows[yy][xx]!r}")
                        if (dy, dx) in passable:
                            grid[yy][xx] = wq(mid, 0, 3)
                        elif (dy, dx) in water:
                            grid[yy][xx] = wq(mid, 0, 1)
                        else:
                            grid[yy][xx] = wq(mid, 1, 0)
                        owner[yy][xx] = ch
                        covered.add((xx, yy))
                if "door" in st:
                    ddy, ddx = st["door"]
                    doors.append({"stamp": ch, "x": x + ddx, "y": y + ddy})
    # pass 2: everything else
    for y, r in enumerate(rows):
        for x, ch in enumerate(r):
            if (x, y) in covered:
                continue
            if ch == fill:
                raise SystemExit(f"stray fill char at {x},{y} (no stamp covers it)")
            base = ch
            if ch in anchors_def:
                if ch in anchors:
                    raise SystemExit(f"duplicate anchor {ch!r} at {x},{y} (first at {anchors[ch]})")
                anchors[ch] = (x, y)
                base = anchors_def[ch]
            if base not in tiles:
                raise SystemExit(f"unknown char {base!r} at {x},{y}")
            mid, col, elev = tiles[base]
            grid[y][x] = wq(mid, col, elev)
            owner[y][x] = base
    missing = [a for a in anchors_def if a not in anchors]
    if missing:
        raise SystemExit(f"anchors declared but not drawn: {missing}")

    terrain(grid, owner, head.get("levels") or [], legend.get("terrain"), W, H)
    if any(k in legend for k in ("paths", "firs", "tall", "over")):
        d = tileset_pair(canvas_path)
    if "paths" in legend:
        paths(grid, owner, legend["paths"], W, H, d)
    runs(grid, owner, legend.get("runs", {}), W, H)
    fences(grid, owner, legend.get("fences", {}), W, H)
    wood(grid, owner, legend.get("wood", {}), W, H)
    if "firs" in legend:
        firs(grid, owner, legend["firs"], W, H, d)
    dress(grid, legend.get("dress"), W, H)
    if "tall" in legend:
        tall(grid, owner, legend["tall"], W, H, d)
    if "over" in legend:
        over(grid, head.get("over") or [], legend["over"], W, H, d)

    out_dir = canvas_path.parent
    import layout_fixes
    layout_fixes.apply_grid(out_dir, grid)                # fixes.json: tile fixes that survive regeneration
    (out_dir / "map.bin").write_bytes(b"".join(struct.pack(f"<{W}H", *row) for row in grid))
    b = border or legend.get("border") or [tiles[list(tiles)[0]][0]] * 4
    (out_dir / "border.bin").write_bytes(struct.pack("<4H", *[wq(m, 1, 0) for m in b]))
    (out_dir / "anchors.json").write_text(json.dumps(
        {"anchors": {k: list(v) for k, v in anchors.items()}, "doors": doors}, indent=1))
    print(f"{out_dir.name}: wrote {W}x{H} map.bin; {len(anchors)} anchors, {len(doors)} doors -> anchors.json")
    for k, v in anchors.items():
        print(f"  {k}: {v}")
    for i, d in enumerate(doors):
        print(f"  door {i}: {d['stamp']} at ({d['x']},{d['y']})")
    return anchors


if __name__ == "__main__":
    for p in sys.argv[1:]:
        build(p)
