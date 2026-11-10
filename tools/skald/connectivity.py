#!/usr/bin/env python3
"""Connectivity audit: can a player walk between every entry of every outdoor map?

The audit's flood fill seeds from all entries at once, so a map split in two still
passes if each half has an entry. This asks the stronger question the Corridor
failed: starting from each entry (connection edge, door threshold, script arrival),
with NPCs and water as solid, is every other entry reachable? Prints the maps whose
entries fall into more than one component, with the entries in each.

  python3 tools/skald/connectivity.py            all outdoor Skaldmere maps
  python3 tools/skald/connectivity.py ParcelX    one map, verbose
"""
import json
import sys
from collections import deque
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))
import audit  # noqa: E402

OUTDOOR = {"MAP_TYPE_TOWN", "MAP_TYPE_CITY", "MAP_TYPE_ROUTE", "MAP_TYPE_OCEAN_ROUTE", "MAP_TYPE_UNDERGROUND"}
ARRIVALS = {"ParcelMarsh": [(37, 27)], "ParcelCavern": [(16, 10)], "ParcelWeather": [(9, 34)],
            "ParcelCoast": [(30, 55), (31, 28)], "ParcelDelibird": [(9, 22), (8, 4)],
            "ParcelCorridorWorkings": [(18, 21)], "ParcelRiverMillWood": [(36, 37)],
            "ParcelWetlandsHide": [(47, 10)], "ParcelDelibirdSummit": [(4, 35)], "ParcelDelibirdCliffs": [(0, 5)]}


def analyse(name, verbose=False):
    mj, lay, W, H, words, tiles = audit.load_map(name)
    objs = {(e["x"], e["y"]) for e in mj.get("object_events", [])}

    def info(x, y):
        mid, col, elev = audit.decode(words[y * W + x])
        return col, elev, audit.BEH.get(tiles.get(mid, ((), 0, 0))[1], "")

    def passable(x, y):
        if not (0 <= x < W and 0 <= y < H):
            return False
        col, elev, beh = info(x, y)
        return col == 0 and not any(k in beh for k in ("WATER", "WATERFALL", "JUMP", "IMPASSABLE")) and (x, y) not in objs

    def elev_ok(a, b):
        return a in (0, 15) or b in (0, 15) or a == b

    entries = {}   # label -> set of tiles
    for c in mj.get("connections") or []:
        d = c["direction"]
        if d in ("left", "right"):
            x = 0 if d == "left" else W - 1
            tiles_ = {(x, y) for y in range(H) if passable(x, y)}
        else:
            y = 0 if d == "up" else H - 1
            tiles_ = {(x, y) for x in range(W) if passable(x, y)}
        if tiles_:
            entries[f"conn {d} {c['map'][11:]}"] = tiles_
    for i, e in enumerate(mj.get("warp_events", [])):
        thr = {(e["x"] + dx, e["y"] + dy) for dx, dy in ((0, 1), (0, -1), (1, 0), (-1, 0))} | {(e["x"], e["y"])}
        thr = {t for t in thr if passable(*t)}
        if thr:
            entries[f"warp{i} {e['dest_map'][11:]}"] = thr
    for i, (x, y) in enumerate(ARRIVALS.get(name, [])):
        if passable(x, y):
            entries[f"arrival{i} ({x},{y})"] = {(x, y)}
    # components over passable tiles
    comp = {}
    cid = 0
    for sy in range(H):
        for sx in range(W):
            if (sx, sy) in comp or not passable(sx, sy):
                continue
            cid += 1
            q = deque([(sx, sy)]); comp[(sx, sy)] = cid
            while q:
                x, y = q.popleft()
                for dx, dy in ((1, 0), (-1, 0), (0, 1), (0, -1)):
                    n = (x + dx, y + dy)
                    if n in comp or not passable(*n) or not elev_ok(info(x, y)[1], info(*n)[1]):
                        continue
                    comp[n] = cid; q.append(n)
    groups = {}
    for label, tiles_ in entries.items():
        cs = {comp[t] for t in tiles_ if t in comp}
        for c in cs:
            groups.setdefault(c, set()).add(label)
    if verbose or len(groups) > 1:
        print(f"{name}: {len(groups)} component(s) among {len(entries)} entries")
        for c, labels in sorted(groups.items()):
            size = sum(1 for v in comp.values() if v == c)
            print(f"   component {c} ({size} tiles): {sorted(labels)}")
    return len(groups)


def main():
    if len(sys.argv) > 1:
        analyse(sys.argv[1], verbose=True)
        return
    bad = 0
    for mj in sorted((ROOT / "data/maps").glob("Parcel*/map.json")):
        m = json.loads(mj.read_text())
        if m.get("map_type") not in OUTDOOR or m["name"] in audit.RETIRED_MAPS:
            continue
        if analyse(m["name"]) > 1:
            bad += 1
    print(f"\n{bad} outdoor map(s) with disconnected entries")


if __name__ == "__main__":
    main()
