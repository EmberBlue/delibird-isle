#!/usr/bin/env python3
"""Plan a walk across a map for walktest.py.

  python3 tools/skald/route.py MAP x,y x2,y2            path inside one map
  python3 tools/skald/route.py MAP x,y edge:DIR          to the map's connection edge (up/down/left/right)
  python3 tools/skald/route.py MAP x,y warp:N            to the N-th warp event (a door: the path ends on it)
  python3 tools/skald/route.py MAP x,y x2,y2 --avoid-grass

Prints the --walk arguments: DIR:(k-1) for a straight run of k tiles, since the harness
holds a key for 16n+12 frames and so moves n+1 tiles (see the handoff). Walkable means
collision 0, no water or waterfall, no ledge jump, elevation continuous (0 and 15 bridge),
not an object event's tile (wandering NPCs can still wander into the way: re-plan from the
real end position when a segment stops short).
"""
import json
import sys
from collections import deque
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))
import audit  # noqa: E402

DIRS = {(1, 0): "RIGHT", (-1, 0): "LEFT", (0, 1): "DOWN", (0, -1): "UP"}
LEDGE_DIR = {"RIGHT": "EAST", "LEFT": "WEST", "DOWN": "SOUTH", "UP": "NORTH"}   # MB_JUMP_<compass>, keys are <d-pad>


def is_water(beh):
    return ("WATER" in beh or "SEAWEED" in beh or "CURRENT" in beh) and "SHALLOW" not in beh and "WATERFALL" not in beh and "BRIDGE" not in beh


def plan(map_name, start, goal=None, edge=None, warp=None, avoid_grass=False, allow_grass_goal=True, blocked=(), surf=False, objects=None):
    """blocked: extra tiles to treat as solid (an NPC who walked over to battle and stayed).
    surf: the player is already surfing, so water is floor (land is still fine: riding onto a shore dismounts).
    objects: the live NPC tiles (from gObjectEvents) instead of map.json's -- a leader who stepped aside,
    a trainer who walked up, an item already picked up."""
    mj, lay, W, H, words, tiles = audit.load_map(map_name)
    objs = (set(objects) if objects is not None else {(e["x"], e["y"]) for e in mj.get("object_events", [])}) | set(blocked)
    warps = {(e["x"], e["y"]) for e in mj.get("warp_events", [])}

    def info(x, y):
        mid, col, elev = audit.decode(words[y * W + x])
        beh = audit.BEH.get(tiles.get(mid, ((), 0, 0))[1], "")
        return col, elev, beh

    def passable(x, y, is_goal=False):
        if not (0 <= x < W and 0 <= y < H):
            return False
        col, elev, beh = info(x, y)
        if col != 0 and (x, y) not in warps:
            return False
        if (x, y) in warps and not is_goal:
            return False                      # stepping on a door mid-path would warp
        if is_water(beh):
            return bool(surf)
        if any(k in beh for k in ("WATERFALL", "JUMP", "SAND_DUNE")):
            return False
        if avoid_grass and "GRASS" in beh and not is_goal:
            return False
        if (x, y) in objs and not is_goal:
            return False
        return True

    if edge:
        goals = set()
        if edge in ("left", "right"):
            x = 0 if edge == "left" else W - 1
            goals = {(x, y) for y in range(H) if passable(x, y, True)}
        else:
            y = 0 if edge == "up" else H - 1
            goals = {(x, y) for x in range(W) if passable(x, y, True)}
        # keep only edge tiles whose counterpart across the connection is walkable land
        conn = next((c for c in (mj.get("connections") or []) if c["direction"] == edge), None)
        if conn:
            other = next((p.name for p in (ROOT / "data/maps").iterdir() if (p / "map.json").exists()
                          and json.loads((p / "map.json").read_text()).get("id") == conn["map"]), None)
            if other:
                omj, olay, oW, oH, owords, otiles = audit.load_map(other)
                off = conn["offset"]

                def other_ok(gx, gy):
                    if edge in ("left", "right"):
                        ox, oy = (oW - 1 if edge == "left" else 0), gy - off
                    else:
                        ox, oy = gx - off, (oH - 1 if edge == "up" else 0)
                    if not (0 <= ox < oW and 0 <= oy < oH):
                        return False
                    mid, col, elev = audit.decode(owords[oy * oW + ox])
                    beh = audit.BEH.get(otiles.get(mid, ((), 0, 0))[1], "")
                    return col == 0 and "WATER" not in beh
                linked = {g for g in goals if other_ok(*g)}
                if linked:
                    goals = linked
    elif warp is not None:
        if warp >= len(mj.get("warp_events", [])):
            return None, None            # no such warp on this map (the caller is probably still indoors)
        e = mj["warp_events"][warp]
        goals = {(e["x"], e["y"])}
    else:
        goals = {tuple(goal)}

    def elev_ok(a, b):
        return a in (0, 15) or b in (0, 15) or a == b

    # State is (x, y, surfing). A surfing player rides water and may land anywhere (which ends the
    # ride); a walking player never enters water, because the planner cannot press A to surf. So a
    # route found while surfing stays on the water until the shore it lands on reaches the goal.
    start_mode = bool(surf) and is_water(info(*start)[2])
    s0 = (start[0], start[1], start_mode)
    prev = {s0: None}
    q = deque([s0])
    found = None
    while q:
        cur = q.popleft()
        cx, cy, mode = cur
        if (cx, cy) in goals:
            found = cur
            break
        ce, cbeh = info(cx, cy)[1], info(cx, cy)[2]
        for (dx, dy) in DIRS:
            nx, ny = cx + dx, cy + dy
            n = (nx, ny)
            if not (0 <= nx < W and 0 <= ny < H):
                continue
            ncol, nelev, nbeh = info(nx, ny)
            if nbeh == f"MB_JUMP_{LEDGE_DIR[DIRS[(dx, dy)]]}":
                land = (nx + dx, ny + dy)           # a ledge: one press, the player lands two tiles on
                st = (land[0], land[1], False)
                if not mode and st not in prev and passable(*land, land in goals) and not is_water(info(*land)[2]):
                    prev[st] = cur
                    q.append(st)
                continue
            if is_water(nbeh):
                if not mode or ncol != 0 or n in objs:
                    continue
                st = (nx, ny, True)
            else:
                if not passable(nx, ny, n in goals):
                    continue
                if not mode and not elev_ok(ce, nelev):
                    continue
                if mode and nelev != 3:
                    continue                      # CanStopSurfing: a surfer lands only on elevation-3 ground
                # MB_IMPASSABLE_<D>: a cave ledge lip -- not entered heading D, not left heading the other way
                dn, opp = DIRS[(dx, dy)], DIRS[(-dx, -dy)]
                if ("IMPASSABLE" in nbeh and dn in nbeh) or ("IMPASSABLE" in cbeh and opp in cbeh):
                    continue
                st = (nx, ny, False)
            if st in prev:
                continue
            prev[st] = cur
            q.append(st)
    if not found:
        return None, None
    path = []
    c = found
    while c is not None:
        path.append((c[0], c[1]))
        c = prev[c]
    path.reverse()
    # compress into runs; a ledge jump (two tiles in one step) is its own one-press run, since the
    # game finishes the jump by itself and the harness re-plans from wherever it lands
    runs = []
    for a, b in zip(path, path[1:]):
        dx, dy = b[0] - a[0], b[1] - a[1]
        if abs(dx) + abs(dy) == 2:
            runs.append([DIRS[(dx // 2, dy // 2)], 1])
            runs.append(None)                     # break the run after the jump
            continue
        d = DIRS[(dx, dy)]
        if runs and runs[-1] is not None and runs[-1][0] == d:
            runs[-1][1] += 1
        else:
            runs.append([d, 1])
    runs = [r for r in runs if r is not None]
    return path, runs


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    avoid = "--avoid-grass" in sys.argv
    m, s = args[0], tuple(int(v) for v in args[1].split(","))
    goal = edge = warp = None
    if args[2].startswith("edge:"):
        edge = args[2][5:]
    elif args[2].startswith("warp:"):
        warp = int(args[2][5:])
    else:
        goal = tuple(int(v) for v in args[2].split(","))
    path, runs = plan(m, s, goal, edge, warp, avoid)
    if not path:
        print("no path"); sys.exit(1)
    print(f"{len(path) - 1} tiles, ends at {path[-1]}")
    print(" ".join(f"--walk {d}:{max(n - 1, 0)}" for d, n in runs))


if __name__ == "__main__":
    main()
