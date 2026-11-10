#!/usr/bin/env python3
"""Text dump of a map's walkability: collision, elevation, behaviour, events.

  python3 tools/skald/grid.py ParcelDelibird 0,0 24,12        cols 0-24, rows 0-12
  python3 tools/skald/grid.py ParcelHighlands --comp          whole map, walkable components

Each cell is two characters. The first is the elevation (hex digit) or '#' when the
metatile is solid; with --comp it is instead a letter naming the walkable component the
tile belongs to (a = largest, then b, c, ...; '-' solid, '~' water), so two areas that
look joined but carry different letters are cut off from each other (an NPC on the only
tile, an elevation step, a ledge). The second is a marker: O object event (NPC, tree, rock, boulder),
D warp, B bg event (sign, hidden item), ~ water, " grass, ^ ledge, = stairs/slope,
C counter, . nothing. The elevation rule (a==b, or either is 0 or 15) decides whether
two adjacent passable tiles connect, so a 5 next to a 3 is a wall even when both are '.'.
"""
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import audit  # noqa: E402


LETTERS = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"


def components(mj, W, H, words, tiles):
    """Component id per passable tile, same rules as connectivity.py (objects and water solid,
    ledges solid, elevation must match unless one side is 0 or 15). Ids are in size order."""
    from collections import deque
    objs = {(e["x"], e["y"]) for e in mj.get("object_events", [])}

    def info(x, y):
        mid, col, elev = audit.decode(words[y * W + x])
        return col, elev, audit.BEH.get(tiles.get(mid, ((), 0, 0))[1], "")

    def passable(x, y):
        if not (0 <= x < W and 0 <= y < H):
            return False
        col, elev, beh = info(x, y)
        return col == 0 and not any(k in beh for k in ("WATER", "WATERFALL", "JUMP", "IMPASSABLE")) and (x, y) not in objs

    comp, sizes = {}, {}
    for sy in range(H):
        for sx in range(W):
            if (sx, sy) in comp or not passable(sx, sy):
                continue
            cid = len(sizes)
            sizes[cid] = 0
            q = deque([(sx, sy)]); comp[(sx, sy)] = cid
            while q:
                x, y = q.popleft(); sizes[cid] += 1
                for dx, dy in ((1, 0), (-1, 0), (0, 1), (0, -1)):
                    n = (x + dx, y + dy)
                    if n in comp or not passable(*n):
                        continue
                    a, b = info(x, y)[1], info(*n)[1]
                    if a in (0, 15) or b in (0, 15) or a == b:
                        comp[n] = cid; q.append(n)
    order = sorted(sizes, key=lambda c: -sizes[c])
    rank = {c: i for i, c in enumerate(order)}
    return {t: rank[c] for t, c in comp.items()}, [sizes[c] for c in order]


def dump(name, x0, y0, x1, y1, show_comp=False):
    mj, lay, W, H, words, tiles = audit.load_map(name)
    objs = {(e["x"], e["y"]): e for e in mj.get("object_events", [])}
    warps = {(e["x"], e["y"]) for e in mj.get("warp_events", [])}
    bgs = {(e["x"], e["y"]) for e in mj.get("bg_events", [])}
    x1, y1 = min(x1, W - 1), min(y1, H - 1)
    comp, sizes = components(mj, W, H, words, tiles) if show_comp else ({}, [])
    print(f"{name} {W}x{H}  cols {x0}-{x1}  rows {y0}-{y1}" + (f"  components by size: {sizes[:12]}" if show_comp else ""))
    print("     " + "".join(f"{x % 100:2d}" for x in range(x0, x1 + 1)))
    for y in range(y0, y1 + 1):
        row = []
        for x in range(x0, x1 + 1):
            mid, col, elev = audit.decode(words[y * W + x])
            beh = audit.BEH.get(tiles.get(mid, ((), 0, 0))[1], "")
            if show_comp:
                a = LETTERS[comp[(x, y)] % len(LETTERS)] if (x, y) in comp else ("#" if col else "~" if "WATER" in beh else "-")
            else:
                a = "#" if col else f"{elev:x}"
            if (x, y) in objs:
                b = "O"
            elif (x, y) in warps:
                b = "D"
            elif (x, y) in bgs:
                b = "B"
            elif "WATER" in beh or "WATERFALL" in beh:
                b = "~"
            elif "JUMP" in beh:
                b = "^"
            elif "GRASS" in beh:
                b = '"'
            elif "STAIR" in beh or "SLOPE" in beh:
                b = "="
            elif "COUNTER" in beh:
                b = "C"
            else:
                b = "."
            row.append(a + b)
        print(f"{y:4d} " + "".join(row))
    if objs:
        print("objects: " + ", ".join(f"({x},{y}) {e['graphics_id'][14:]}" for (x, y), e in sorted(objs.items(), key=lambda kv: (kv[0][1], kv[0][0]))
                                     if x0 <= x <= x1 and y0 <= y <= y1))


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    name = args[0]
    x0, y0 = (int(v) for v in args[1].split(",")) if len(args) > 1 else (0, 0)
    x1, y1 = (int(v) for v in args[2].split(",")) if len(args) > 2 else (999, 999)
    dump(name, x0, y0, x1, y1, show_comp="--comp" in sys.argv)


if __name__ == "__main__":
    main()
