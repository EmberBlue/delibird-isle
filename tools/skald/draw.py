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

Legend JSON:
  {"tiles": {".": [id, col, elev], ...},
   "stamps": {"H": {"rows": [[..ids..],[..]], "pass": [[r,c],...]}},
   "fill": "#", "border": [id,id,id,id]}
A stamp char marks the top-left of a multi-tile object; the cells it covers
must contain the fill char. Cells listed in "pass" are walkable (col 0, elev 3)
- doors, arches; everything else in a stamp is solid (col 1).
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
    for line in Path(path).read_text().splitlines():
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
    anchors = {}
    doors = []
    covered = set()
    # pass 1: stamps (so their fill cells are claimed before single tiles)
    for y, r in enumerate(rows):
        for x, ch in enumerate(r):
            if ch in stamps:
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
    missing = [a for a in anchors_def if a not in anchors]
    if missing:
        raise SystemExit(f"anchors declared but not drawn: {missing}")

    out_dir = canvas_path.parent
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
