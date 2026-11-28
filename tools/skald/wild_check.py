#!/usr/bin/env python3
"""Encounter tables against the ground that can trigger them.

A table is met only where the map has the ground for it: tall or long grass, soft sand, a cave floor for
the land table; water one can surf for the water table; water one can face from a bank or surf on for the
fishing table. This walks the whole game the way reach.py does (every HM) and lists, for every Parcel map:

  ground with no table    grass that never rustles, water where a rod never bites
  a table with no ground  species the Pokedex places on a map where they cannot be met

Both were found on 2026-11-23: ten maps with reachable water or grass and no table (the Climate Station's
whole grounds, the Corridor's stream, Route 1's river, the Summit's sea), and four tables nothing could
trigger (land tables in two towns and on the Breakwater's plain sand, a water table in a cavern of ice).

  python3 tools/skald/wild_check.py        must print "0 table(s) at odds with the ground"
"""
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import audit
import reach

ROOT = Path(__file__).resolve().parents[2]
LAND = {"MB_TALL_GRASS", "MB_LONG_GRASS", "MB_DEEP_SAND", "MB_CAVE", "MB_INDOOR_ENCOUNTER", "MB_ASHGRASS", "MB_FOOTPRINTS"}
WATER = {"MB_POND_WATER", "MB_INTERIOR_DEEP_WATER", "MB_DEEP_WATER", "MB_OCEAN_WATER", "MB_SEAWEED", "MB_SEAWEED_NO_SURFACING"}
# a floor that could hold encounters in a room that is somebody's workplace: no table is the intent
QUIET = {"ParcelRiverBoatyard": "the boatwright's shed (a shop layout whose floor is an encounter floor)"}


def main():
    hm = set(reach.ALL_HM)
    maps, byid = reach.load_all(hm)
    seen = reach.reach(maps, byid, (byid["MAP_PARCEL_FERRY"], 4, 6), hm)
    reached = {}
    for m, x, y in seen:
        reached.setdefault(m.name, set()).add((x, y))
    tables = {}
    for grp in json.loads((ROOT / "src/data/wild_encounters.json").read_text())["wild_encounter_groups"]:
        for e in grp.get("encounters", []):
            if e.get("map", "").startswith("MAP_PARCEL"):
                tables.setdefault(e["map"], set()).update(k for k in e if k.endswith("_mons"))
    bad = 0
    for name in sorted(maps):
        if name in audit.RETIRED_MAPS:
            continue
        m, r = maps[name], reached.get(name, set())
        land = sum(1 for (x, y) in r if m.beh(x, y)[2] in LAND)
        water = sum(1 for (x, y) in r if m.beh(x, y)[2] in WATER)
        t = tables.get(m.mj["id"], set())
        out = []
        if land and "land_mons" not in t and name not in QUIET:
            out.append(f"{land} tile(s) of encounter ground reached, no land table")
        if water and "water_mons" not in t:
            out.append(f"{water} tile(s) of water surfed, no water table")
        if water and "fishing_mons" not in t:
            out.append(f"{water} tile(s) of water, no fishing table")
        if "land_mons" in t and not land:
            out.append("a land table, and no grass, soft sand or cave floor to meet it on")
        if "water_mons" in t and not water:
            out.append("a water table, and no water to surf")
        if "fishing_mons" in t and not water:
            out.append("a fishing table, and no water")
        if out:
            bad += len(out)
            print(f"{name}:")
            for s in out:
                print("   " + s)
    print(f"{bad} table(s) at odds with the ground")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
