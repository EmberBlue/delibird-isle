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


def plan(map_name, start, goal=None, edge=None, warp=None, avoid_grass=False, allow_grass_goal=True, blocked=()):
    """blocked: extra tiles to treat as solid (an NPC who walked over to battle and stayed)."""
    mj, lay, W, H, words, tiles = audit.load_map(map_name)
    objs = {(e["x"], e["y"]) for e in mj.get("object_events", [])} | set(blocked)
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
        if any(k in beh for k in ("WATER", "WATERFALL", "JUMP", "IMPASSABLE", "SAND_DUNE")):
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
    elif warp is not None:
        e = mj["warp_events"][warp]
        goals = {(e["x"], e["y"])}
    else:
        goals = {tuple(goal)}

    def elev_ok(a, b):
        return a in (0, 15) or b in (0, 15) or a == b

    prev = {tuple(start): None}
    q = deque([tuple(start)])
    found = None
    while q:
        cur = q.popleft()
        if cur in goals:
            found = cur
            break
        cx, cy = cur
        ce = info(cx, cy)[1]
        for (dx, dy) in DIRS:
            nx, ny = cx + dx, cy + dy
            n = (nx, ny)
            if n in prev or not passable(nx, ny, n in goals):
                continue
            if not elev_ok(ce, info(nx, ny)[1]):
                continue
            prev[n] = cur
            q.append(n)
    if not found:
        return None, None
    path = []
    c = found
    while c is not None:
        path.append(c)
        c = prev[c]
    path.reverse()
    # compress into runs
    runs = []
    for a, b in zip(path, path[1:]):
        d = DIRS[(b[0] - a[0], b[1] - a[1])]
        if runs and runs[-1][0] == d:
            runs[-1][1] += 1
        else:
            runs.append([d, 1])
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
