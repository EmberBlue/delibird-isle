#!/usr/bin/env python3
"""Cross-map reachability: from the new-game spawn, what can a player physically reach?

The per-map audits (audit.py, connectivity.py) each look at one map. This walks the whole
game as one graph, the way a player experiences it:

  * map connections join edge tiles to the neighbouring map at the connection offset;
  * warp events teleport (a mat is stepped on; a solid door is entered from the tile below);
  * warp(MAP, x, y) in a map's scripts.pory counts as reachable once any tile of that map is;
  * ledges jump one way (the ledge's direction), landing two tiles on;
  * the muddy slope only slides down (there is no Mach Bike in Skaldmere);
  * elevation must match between adjacent tiles unless one is 0 or 15;
  * NPCs are solid; item balls are passable (they can be picked up);
  * trees, rocks and boulders are passable when their HM is in --hm (a boulder also needs a
    free tile beyond it); water needs surf, a waterfall needs waterfall.

  python3 tools/skald/reach.py                        every unreachable door, edge, NPC, sign (all HMs, epilogue too)
  python3 tools/skald/reach.py --hm none              chapter 1: before any HM
  python3 tools/skald/reach.py --hm cut               chapter 2 (the HM list doubles as the story stage: see SCRIPT_STAGE)
  python3 tools/skald/reach.py --hm cut,flash,rocksmash,strength   chapter 4; maps of later chapters read NEVER REACHED
  python3 tools/skald/reach.py --grid ParcelHighlands reach map: R reached, . not, # solid, ~ water
  python3 tools/skald/reach.py --frontier ParcelHighlands   where the reach stops on that map, and why
  python3 tools/skald/reach.py --trainers            trainers whose walk-up would park them on a chokepoint
  python3 tools/skald/reach.py --from MAP_PARCEL_RIVER:20,20
  python3 tools/skald/reach.py --why ParcelWeather 16,22   the route the flood took to that tile

Optimistic where the engine is path-dependent: a pushed boulder's new position is not tracked,
ice is treated as floor, and a trainer who walks up to the player still blocks their own tile
afterwards (so a trainer standing on the only link is reported, which is the point).
"""
import json
import re
import sys
from collections import deque
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))
import audit  # noqa: E402

HM_GFX = {"OBJ_EVENT_GFX_CUTTABLE_TREE": "cut", "OBJ_EVENT_GFX_BREAKABLE_ROCK": "rocksmash",
          "OBJ_EVENT_GFX_PUSHABLE_BOULDER": "strength"}
ALL_HM = {"cut", "flash", "rocksmash", "strength", "surf", "fly", "waterfall", "dive", "epilogue"}
# Script warps that a story flag gates, named by the HM the player holds by then (the HMs arrive in
# chapter order: cut, flash+rocksmash, strength, surf, fly, waterfall, dive). Anything else in a
# scripts.pory is taken as open travel (ferries back, cave exits, the Mistwood shortcut).
SCRIPT_STAGE = {
    ("ParcelFernwickHQ_Hale", "MAP_PARCEL_MARSH"): "waterfall",     # the finale: HALE walks the player in after all five certifications
    ("ParcelDelibird_CaveMouth", "MAP_PARCEL_CAVERN"): "flash",     # checkpartymove(MOVE_FLASH)
    ("ParcelIsle_FerryCaptain", "MAP_PARCEL_COAST"): "surf",        # chapter 5, after the Highland certification
    ("ParcelIsle_FerryCaptain", "MAP_PARCEL_DELIBIRD"): "fly",      # chapter 6
    ("ParcelIsle_FerryCaptain", "MAP_PARCEL_WEATHER"): "waterfall", # chapter 7
    ("ParcelCoast_MereholtAide", "MAP_PARCEL_BOARDROOM"): "fly",    # the hearing, after the Coastal certification
}
# NPCs a script moves for good once a stage is passed (map, local_id) -> (stage, new tile or None if gone).
OBJ_AFTER = {
    ("ParcelFloodbasin", "LOCALID_FLOODBASIN_GYM"): ("rocksmash", (15, 2)),   # BREEN steps out of the river neck after his exam
}
DIRS = {"north": (0, -1), "south": (0, 1), "east": (1, 0), "west": (-1, 0)}
CONN_DIR = {"north": "up", "south": "down", "west": "left", "east": "right"}
WATER_WORDS = ("POND_WATER", "DEEP_WATER", "OCEAN_WATER", "NO_SURFACING", "SEAWEED", "CURRENT", "UNDERWATER")
UNMODELLED = ("MB_ICE", "THIN_ICE", "CRACKED_ICE", "MB_WALK_", "MB_SLIDE_", "BUMPY_SLOPE", "CRACKED_FLOOR", "MB_HOLE")
WARP_RE = re.compile(r"(?<![A-Za-z_])warp\w*\(\s*(MAP_\w+)\s*,\s*(\d+)\s*(?:,\s*(\d+))?\s*\)")


class Map:
    def __init__(self, name, hm=frozenset()):
        self.name = name
        self.mj, self.lay, self.W, self.H, self.words, self.tiles = audit.load_map(name)
        self.id = self.mj["id"]
        self.objs = {}
        for e in self.mj.get("object_events", []):
            stage, where = OBJ_AFTER.get((name, e.get("local_id")), (None, None))
            if stage and stage in hm:
                if where is None:
                    continue
                e = dict(e, x=where[0], y=where[1])
            self.objs[(e["x"], e["y"])] = e
        self.warps = {(e["x"], e["y"]): (i, e) for i, e in enumerate(self.mj.get("warp_events", []))}
        self.conns = {c["direction"]: c for c in (self.mj.get("connections") or [])
                      if c["direction"] in ("up", "down", "left", "right")}
        self.script_warps = []          # (dest map id, a, b, stage) -- b None means a is a warp id
        pory = ROOT / "data/maps" / name / "scripts.pory"
        if pory.exists():
            script = ""
            for line in pory.read_text().splitlines():
                m = re.match(r"(?:script|mapscripts)\s+(\w+)", line)
                if m:
                    script = m.group(1)
                for w in WARP_RE.finditer(line):
                    stage = "epilogue" if "Epilogue" in script else SCRIPT_STAGE.get((script, w.group(1)))
                    self.script_warps.append((w.group(1), int(w.group(2)), int(w.group(3)) if w.group(3) else None, stage))

    def beh(self, x, y):
        mid, col, elev = audit.decode(self.words[y * self.W + x])
        return col, elev, audit.BEH.get(self.tiles.get(mid, ((), 0, 0))[1], "")

    def inside(self, x, y):
        return 0 <= x < self.W and 0 <= y < self.H


def tile_kind(m, x, y, hm):
    """None when the tile cannot be stood on, else (kind, elevation) with kind one of
    land, water, fall, slope, boulder, or ledge:<dir>."""
    col, elev, beh = m.beh(x, y)
    if beh.startswith("MB_JUMP_"):
        d = beh[8:].lower()
        return (f"ledge:{d}", elev) if d in DIRS else None
    if col != 0:
        return None                 # MB_IMPASSABLE_<dir> tiles are floor with one walled edge: see dir_blocked()
    if beh == "MB_WATERFALL":
        return ("fall", elev) if "waterfall" in hm else None
    if any(w in beh for w in WATER_WORDS):
        return ("water", elev) if "surf" in hm else None
    o = m.objs.get((x, y))
    if o and o.get("flag") != "FLAG_SYS_POKEMON_GET":      # that one hides once the player has a Pokémon
        g = o["graphics_id"]
        if g in HM_GFX:
            if HM_GFX[g] not in hm:
                return None
            if g == "OBJ_EVENT_GFX_PUSHABLE_BOULDER":
                return ("boulder", elev)
        elif g != "OBJ_EVENT_GFX_ITEM_BALL":
            return None
    if beh == "MB_MUDDY_SLOPE":
        return ("slope", elev)
    return ("land", elev)


def elev_ok(a, b):
    return a is None or b is None or a in (0, 15) or b in (0, 15) or a == b


OPPOSITE = {"north": "south", "south": "north", "east": "west", "west": "east"}


def dir_blocked(beh_here, beh_there, dname):
    """pokeemerald's directional impassables (cave ledge lips): a tile marked IMPASSABLE_<D> cannot
    be entered heading D, and cannot be left heading the opposite way. NORTHEAST etc. combine."""
    d, o = dname.upper(), OPPOSITE[dname].upper()
    return ("IMPASSABLE" in beh_there and d in beh_there) or ("IMPASSABLE" in beh_here and o in beh_here)


def load_all(hm=frozenset()):
    maps, byid = {}, {}
    for p in sorted((ROOT / "data/maps").iterdir()):
        if (p / "map.json").exists() and p.name.startswith("Parcel"):
            m = Map(p.name, hm)
            maps[m.name] = m
            byid[m.id] = m
    return maps, byid


def warp_dest(byid, e):
    dm = byid.get(e["dest_map"])
    if not dm:
        return None
    try:
        i = int(e["dest_warp_id"])
    except (TypeError, ValueError):
        return None
    ws = dm.mj.get("warp_events", [])
    if i >= len(ws):
        return None
    return (dm, ws[i]["x"], ws[i]["y"])


def reach(maps, byid, start, hm):
    seen = set()
    q = deque()
    cur = [None]                 # the node being expanded: recorded as the parent of whatever it reaches
    reach.parent = {}

    def visit(node):
        if node not in seen:
            seen.add(node)
            reach.parent[node] = cur[0]
            q.append(node)

    def script_dest(sw):
        mid, a, b, stage = sw
        dm = byid.get(mid)
        if not dm or (stage and stage not in hm):
            return None
        if b is None:
            ws = dm.mj.get("warp_events", [])
            return (dm, ws[a]["x"], ws[a]["y"]) if a < len(ws) else None
        return (dm, a, b)

    maps_seen = set()
    visit(start)
    while q:
        m, x, y = q.popleft()
        cur[0] = (m, x, y)
        if m.name not in maps_seen:
            maps_seen.add(m.name)
            for sw in m.script_warps:
                d = script_dest(sw)
                if d and d[0].inside(d[1], d[2]):
                    visit(d)
        here = tile_kind(m, x, y, hm)
        helev = here[1] if here and here[0] in ("land", "boulder") else None
        for dname, (dx, dy) in DIRS.items():
            nm, nx, ny = m, x + dx, y + dy
            if not m.inside(nx, ny):
                c = m.conns.get(CONN_DIR[dname])
                if not c or c["map"] not in byid:
                    continue
                nm, off = byid[c["map"]], c["offset"]
                if dname == "north":
                    nx, ny = x - off, nm.H - 1
                elif dname == "south":
                    nx, ny = x - off, 0
                elif dname == "west":
                    nx, ny = nm.W - 1, y - off
                else:
                    nx, ny = 0, y - off
                if not nm.inside(nx, ny):
                    continue
            w = nm.warps.get((nx, ny))
            if w:
                col = nm.beh(nx, ny)[0]
                if col != 0 and dname != "north":
                    continue                      # a solid door is entered from below
                d = warp_dest(byid, w[1])
                if d:
                    visit(d)
                continue
            nk = tile_kind(nm, nx, ny, hm)
            if nk is None:
                continue
            if dir_blocked(m.beh(x, y)[2], nm.beh(nx, ny)[2], dname):
                continue
            kind, nelev = nk
            if kind.startswith("ledge:"):
                if kind[6:] != dname:
                    continue
                lx, ly = nx + dx, ny + dy
                if nm.inside(lx, ly):
                    lk = tile_kind(nm, lx, ly, hm)
                    if lk and lk[0] in ("land", "water", "slope"):
                        visit((nm, lx, ly))
                continue
            if kind == "slope":
                if dname != "south":
                    continue
                sy = ny
                while nm.inside(nx, sy + 1) and (tile_kind(nm, nx, sy + 1, hm) or ("", 0))[0] == "slope":
                    sy += 1
                if nm.inside(nx, sy + 1):
                    bk = tile_kind(nm, nx, sy + 1, hm)
                    if bk and bk[0] == "land":
                        visit((nm, nx, sy + 1))
                continue
            if kind == "boulder":
                bx, by = nx + dx, ny + dy
                if not nm.inside(bx, by) or (bx, by) in nm.objs or (bx, by) in nm.warps:
                    continue
                bk = tile_kind(nm, bx, by, hm)
                if not bk or bk[0] != "land" or not elev_ok(nelev, bk[1]):
                    continue
                visit((nm, nx, ny))
                continue
            if kind in ("water", "fall") and here and here[0] in ("land", "boulder", "slope"):
                # starting to surf: the engine wants the player at elevation 3 exactly
                # (IsPlayerFacingSurfableFishableWater), so not from a bridge deck or a raised terrace
                if here[1] != 3 or "BRIDGE" in m.beh(x, y)[2]:
                    continue
            if kind == "land" and here and here[0] in ("water", "fall"):
                if nelev != 3:                     # CanStopSurfing: a surfer lands only on elevation-3 ground
                    continue
            elif kind == "land" and not elev_ok(helev, nelev):
                continue
            visit((nm, nx, ny))
    return seen


def neighbours(x, y):
    return [(x + dx, y + dy) for dx, dy in DIRS.values()]


def approachable(m, x, y, r):
    """A tile the player can stand next to, or face across a counter (nurses, clerks, charts)."""
    if (x, y) in r:
        return True
    for dx, dy in DIRS.values():
        n = (x + dx, y + dy)
        if n in r:
            return True
        if m.inside(*n) and "COUNTER" in m.beh(*n)[2] and (x + 2 * dx, y + 2 * dy) in r:
            return True
    return False


def frontier(maps, seen, name, hm):
    """Every reached tile of one map next to a passable tile that was not reached, with why."""
    m = maps[name]
    r = {(x, y) for mm, x, y in seen if mm is m}
    seen_pairs = set()
    print(f"{name}: frontier of the {len(r)} reached tiles")
    for (x, y) in sorted(r, key=lambda t: (t[1], t[0])):
        here = tile_kind(m, x, y, hm)
        for dname, (dx, dy) in DIRS.items():
            n = (x + dx, y + dy)
            if n in r or not m.inside(*n) or n in m.warps or (n, (x, y)) in seen_pairs:
                continue
            col, elev, beh = m.beh(*n)
            o = m.objs.get(n)
            why = None
            if o and o.get("flag") != "FLAG_SYS_POKEMON_GET" and o["graphics_id"] not in HM_GFX and o["graphics_id"] != "OBJ_EVENT_GFX_ITEM_BALL":
                why = f"NPC {o['graphics_id'][14:]} {o.get('script') or ''}"
            elif beh.startswith("MB_JUMP_"):
                why = f"ledge jumps {beh[8:].lower()}"
            elif beh == "MB_MUDDY_SLOPE":
                why = "muddy slope (down only)"
            elif col == 0 and here and here[0] in ("land", "boulder") and not elev_ok(here[1], elev) and not any(w in beh for w in WATER_WORDS):
                why = f"elevation {here[1]} -> {elev}"
            elif o and o["graphics_id"] in HM_GFX:
                why = f"{HM_GFX[o['graphics_id']]} obstacle"
            elif col == 0 and any(w in beh for w in WATER_WORDS):
                why = "water"
            if why:
                seen_pairs.add(((x, y), n))
                print(f"   ({x},{y}) {dname} -> ({n[0]},{n[1]}): {why}")


def report(maps, byid, seen, hm, only=None):
    reached = {}
    for m, x, y in seen:
        reached.setdefault(m.name, set()).add((x, y))
    total_issues = 0
    for name in sorted(maps):
        if name in audit.RETIRED_MAPS or (only and name != only):
            continue
        m = maps[name]
        r = reached.get(name, set())
        issues = []
        if not r:
            issues.append("NEVER REACHED")
        else:
            for (x, y), (i, e) in sorted(m.warps.items(), key=lambda kv: kv[1][0]):
                if not any(t in r for t in neighbours(x, y) + [(x, y)]):
                    issues.append(f"warp{i} at ({x},{y}) -> {e['dest_map'][11:]}: no reachable approach")
            for d, c in m.conns.items():
                if d in ("left", "right"):
                    edge = [(0 if d == "left" else m.W - 1, yy) for yy in range(m.H)]
                else:
                    edge = [(xx, 0 if d == "up" else m.H - 1) for xx in range(m.W)]
                if not any(t in r for t in edge):
                    issues.append(f"connection {d} -> {c['map'][11:]}: no reachable edge tile")
            for (x, y), o in sorted(m.objs.items(), key=lambda kv: (kv[0][1], kv[0][0])):
                g = o["graphics_id"]
                if g in HM_GFX:
                    continue
                ok = approachable(m, x, y, r)
                if not ok and o.get("trainer_type", "TRAINER_TYPE_NONE") != "TRAINER_TYPE_NONE":
                    mt = o.get("movement_type", "")
                    facing = [d for d in ("down", "up", "left", "right") if mt.endswith("_" + d.upper())]
                    rng = int(o.get("trainer_sight_or_berry_tree_id", 0) or 0)
                    for f in facing:
                        dx, dy = {"down": (0, 1), "up": (0, -1), "left": (-1, 0), "right": (1, 0)}[f]
                        if any((x + dx * k, y + dy * k) in r for k in range(1, rng + 1)):
                            ok = True
                if not ok:
                    what = "trainer" if o.get("trainer_type", "TRAINER_TYPE_NONE") != "TRAINER_TYPE_NONE" else \
                           "item" if g == "OBJ_EVENT_GFX_ITEM_BALL" else "npc"
                    issues.append(f"{what} {g[14:]} at ({x},{y}) {o.get('script') or ''}: unreachable")
            for b in m.mj.get("bg_events", []):
                if not approachable(m, b["x"], b["y"], r):
                    issues.append(f"sign/hidden ({b['x']},{b['y']}) {b.get('script') or b.get('item', '')}: unreachable")
            for sw in m.script_warps:
                dm = byid.get(sw[0])
                if sw[3] and sw[3] not in hm:
                    continue
                if dm and sw[2] is not None and dm.inside(sw[1], sw[2]) and (sw[1], sw[2]) not in reached.get(dm.name, set()):
                    issues.append(f"script warp -> {sw[0][11:]} ({sw[1]},{sw[2]}): destination tile not reachable (solid?)")
        odd = {}
        for yy in range(m.H):
            for xx in range(m.W):
                beh = m.beh(xx, yy)[2]
                for u in UNMODELLED:
                    if u in beh:
                        odd[beh] = odd.get(beh, 0) + 1
        if issues or only:
            total_issues += len(issues)
            print(f"{name}: {len(r)} tiles reached" + (f"; unmodelled {odd}" if odd else ""))
            for s in issues:
                print("   " + s)
    print(f"\n{total_issues} issue(s) with hm={sorted(hm) if hm else 'none'}")


def grid(maps, seen, name):
    m = maps[name]
    r = {(x, y) for mm, x, y in seen if mm is m}
    print(f"{name} {m.W}x{m.H}: R reached, . passable but not, # solid, ~ water, O object, D warp")
    print("     " + "".join(f"{x % 100:2d}" for x in range(m.W)))
    for y in range(m.H):
        row = []
        for x in range(m.W):
            col, elev, beh = m.beh(x, y)
            a = "R" if (x, y) in r else ("#" if col else "~" if any(w in beh for w in WATER_WORDS) or beh == "MB_WATERFALL" else ".")
            b = "O" if (x, y) in m.objs else "D" if (x, y) in m.warps else \
                {"north": "^", "south": "v", "east": ">", "west": "<"}.get(beh[8:].lower(), "") if beh.startswith("MB_JUMP_") else \
                "=" if "SLOPE" in beh else "."
            row.append(a + (b or "."))
        print(f"{y:4d} " + "".join(row))


FACING = {"DOWN": (0, 1), "UP": (0, -1), "LEFT": (-1, 0), "RIGHT": (1, 0)}


def articulation_points(adj):
    """Cut vertices of an undirected graph (iterative Tarjan)."""
    index, low, aps, counter = {}, {}, set(), 0
    for root in adj:
        if root in index:
            continue
        index[root] = low[root] = counter; counter += 1
        root_children = 0
        stack = [(root, None, iter(adj[root]))]
        while stack:
            v, parent, it = stack[-1]
            advanced = False
            for w in it:
                if w == parent:
                    continue
                if w not in index:
                    index[w] = low[w] = counter; counter += 1
                    if v == root:
                        root_children += 1
                    stack.append((w, v, iter(adj[w]))); advanced = True
                    break
                low[v] = min(low[v], index[w])
            if not advanced:
                stack.pop()
                if stack:
                    u = stack[-1][0]
                    low[u] = min(low[u], low[v])
                    if u != root and low[v] >= index[u]:
                        aps.add(u)
        if root_children > 1:
            aps.add(root)
    return aps


def trainer_chokepoints(maps, hm):
    """Trainers who, after walking up to the player along their sight line, would stand on a tile
    whose loss cuts the map: the tile is a cut vertex of the walkable graph and the smaller side has
    more than a couple of tiles. A trainer stays where the battle started, so this is a soft-lock."""
    found = 0
    for name in sorted(maps):
        if name in audit.RETIRED_MAPS:
            continue
        m = maps[name]
        adj = {}
        for y in range(m.H):
            for x in range(m.W):
                k = tile_kind(m, x, y, hm)
                if not k or k[0] not in ("land", "boulder"):
                    continue
                adj[(x, y)] = []
        for (x, y) in adj:
            for dname, (dx, dy) in DIRS.items():
                n = (x + dx, y + dy)
                if n in adj and elev_ok(tile_kind(m, x, y, hm)[1], tile_kind(m, *n, hm)[1]) \
                        and not dir_blocked(m.beh(x, y)[2], m.beh(*n)[2], dname):
                    adj[(x, y)].append(n)
        aps = articulation_points(adj)
        for (x, y), o in sorted(m.objs.items(), key=lambda kv: (kv[0][1], kv[0][0])):
            if o.get("trainer_type", "TRAINER_TYPE_NONE") == "TRAINER_TYPE_NONE":
                continue
            r = int(o.get("trainer_sight_or_berry_tree_id", 0) or 0)
            mt = o.get("movement_type", "")
            if "WANDER" in mt or "WALK" in mt:
                continue                                    # moves anyway; placed by hand, judged by eye
            faces = [FACING[d] for d in FACING if mt.endswith("_" + d)]
            if not faces or o["trainer_type"] == "TRAINER_TYPE_SEE_ALL_DIRECTIONS" or "LOOK_AROUND" in mt or "ROTATE" in mt:
                faces = list(FACING.values())
            for dx, dy in faces:
                for k in range(1, r):                       # where the trainer can stop: 1..r-1 tiles along the line
                    p = (x + dx * k, y + dy * k)
                    if p not in adj:
                        break
                    if p in aps:
                        # size of the side cut off: BFS from each neighbour without p
                        sizes = []
                        seen = {p}
                        for nb in adj[p]:
                            if nb in seen:
                                continue
                            comp = {nb}; q = deque([nb]); seen.add(nb)
                            while q:
                                c = q.popleft()
                                for w in adj[c]:
                                    if w not in seen:
                                        seen.add(w); comp.add(w); q.append(w)
                            sizes.append(len(comp))
                        small = min(sizes) if len(sizes) > 1 else 0
                        if small >= 3:
                            found += 1
                            print(f"{name}: trainer {o['graphics_id'][14:]} {o.get('script') or ''} at ({x},{y}) {mt[14:]} range {r} "
                                  f"can stop on ({p[0]},{p[1]}), a chokepoint cutting off {small} tiles")
    print(f"\n{found} trainer(s) who could block a chokepoint after approaching")


def main():
    args = sys.argv[1:]
    hm = set(ALL_HM)
    start_spec = "MAP_PARCEL_FERRY:4,6"
    grid_map = only = front = why = None
    i = 0
    while i < len(args):
        a = args[i]
        if a == "--hm":
            v = args[i + 1]; i += 1
            hm = set() if v == "none" else set(ALL_HM) if v == "all" else set(v.split(","))
        elif a == "--from":
            start_spec = args[i + 1]; i += 1
        elif a == "--grid":
            grid_map = args[i + 1]; i += 1
        elif a == "--frontier":
            front = args[i + 1]; i += 1
        elif a == "--map":
            only = args[i + 1]; i += 1
        elif a == "--why":
            why = (args[i + 1], tuple(int(v) for v in args[i + 2].split(","))); i += 2
        i += 1
    maps, byid = load_all(hm)
    if "--trainers" in args:
        trainer_chokepoints(maps, hm)
        return
    mid, xy = start_spec.split(":")
    sx, sy = (int(v) for v in xy.split(","))
    seen = reach(maps, byid, (byid[mid], sx, sy), hm)
    if why:
        node = (maps[why[0]], why[1][0], why[1][1])
        if node not in seen:
            print(f"{why[0]} {why[1]} is not reached"); return
        chain = []
        while node is not None:
            chain.append(node); node = reach.parent.get(node)
        chain.reverse()
        print(f"how the walk gets to {why[0]} {why[1]} ({len(chain)} steps); map changes and water entries:")
        prev = None
        for m, x, y in chain:
            k = tile_kind(m, x, y, hm)
            tag = (m.name, k[0] if k else "door")
            if prev is None or tag != prev:
                print(f"   {m.name} ({x},{y}) {tag[1]}")
            prev = tag
        return
    if grid_map:
        grid(maps, seen, grid_map)
    elif front:
        frontier(maps, seen, front, hm)
    else:
        report(maps, byid, seen, hm, only)


if __name__ == "__main__":
    main()
