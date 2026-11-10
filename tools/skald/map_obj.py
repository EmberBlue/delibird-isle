#!/usr/bin/env python3
"""Move an object event (NPC, item ball) in a map.json without disturbing the file's layout.

  python3 tools/skald/map_obj.py MAP x,y --to x2,y2 [--face down|up|left|right]
  python3 tools/skald/map_obj.py MAP LOCALID_NAME --to x2,y2 [--face ...]
  python3 tools/skald/map_obj.py MAP list

The object is found by its current tile or its local_id. Only the position (and, with
--face, the MOVEMENT_TYPE_FACE_* direction) change; the rest of the entry is untouched and
the JSON is rewritten with the same two-space indent porymap uses.
"""
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]


def main():
    name = sys.argv[1]
    path = ROOT / "data/maps" / name / "map.json"
    mj = json.loads(path.read_text())
    objs = mj.get("object_events", [])
    if sys.argv[2] == "list":
        for e in objs:
            print(f"({e['x']},{e['y']}) {e['local_id']} {e['graphics_id'][14:]} {e['movement_type'][14:]} {e.get('script') or ''}")
        return
    key = sys.argv[2]
    if "," in key:
        x, y = (int(v) for v in key.split(","))
        hits = [e for e in objs if e["x"] == x and e["y"] == y]
    else:
        hits = [e for e in objs if e.get("local_id") == key]
    if len(hits) != 1:
        sys.exit(f"{len(hits)} objects match {key}")
    e = hits[0]
    args = sys.argv[3:]
    if "--to" in args:
        tx, ty = (int(v) for v in args[args.index("--to") + 1].split(","))
        print(f"{e['local_id']} {e['graphics_id'][14:]}: ({e['x']},{e['y']}) -> ({tx},{ty})")
        e["x"], e["y"] = tx, ty
    if "--face" in args:
        d = args[args.index("--face") + 1].upper()
        print(f"{e['local_id']}: {e['movement_type']} -> MOVEMENT_TYPE_FACE_{d}")
        e["movement_type"] = f"MOVEMENT_TYPE_FACE_{d}"
    path.write_text(json.dumps(mj, indent=2, ensure_ascii=False) + "\n")


if __name__ == "__main__":
    main()
