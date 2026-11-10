#!/usr/bin/env python3
"""Events only work at the player's elevation. Check (and fix) every map's events against its tiles.

pokeemerald matches a coord trigger, a sign/hidden item and a talkable object to the player only when
the event's elevation is 0 (wildcard) or equals the player's current elevation, which is the elevation
of the tile the player stands on. An elevation-5 village with its triggers, boards and villagers left
at the default 3 is silent: the first-entry scene never fires, the boards say nothing, the people
cannot be spoken to. (The Floodbasin hamlet, 2026-11-10.)

  python3 tools/skald/event_elev.py            list every mismatch
  python3 tools/skald/event_elev.py --fix      rewrite them: objects and triggers take their tile's
                                               elevation (0 on a 0/15 transition tile); signs and
                                               hidden items take 0, since they are read from a
                                               neighbouring tile of whatever height

audit.py calls check() so the standard audit keeps catching this.
"""
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))
import audit  # noqa: E402

NEIGHBOURS = ((1, 0), (-1, 0), (0, 1), (0, -1))


def check(name, fix=False):
    """Returns the list of mismatch descriptions for one map (and rewrites map.json when fix)."""
    mj, lay, W, H, words, tiles = audit.load_map(name)

    def tile_elev(x, y):
        if not (0 <= x < W and 0 <= y < H):
            return None
        mid, col, elev = audit.decode(words[y * W + x])
        return elev if col == 0 else None

    out, changed = [], False

    def want(x, y):
        e = tile_elev(x, y)
        return None if e is None else (0 if e in (0, 15) else e)

    for e in mj.get("object_events", []):
        ev = int(e.get("elevation", 0) or 0)
        w = want(e["x"], e["y"])
        if w is None or ev == 0 or ev == w or w == 0:
            continue
        out.append(f"object {e.get('local_id', '')} {e['graphics_id'][14:]} at ({e['x']},{e['y']}): elevation {ev}, tile {w}")
        if fix:
            e["elevation"] = w; changed = True
    for c in mj.get("coord_events", []):
        ev = int(c.get("elevation", 0) or 0)
        w = want(c["x"], c["y"])
        if w is None or ev == 0 or ev == w or w == 0:
            continue
        out.append(f"trigger {c.get('script', '')} at ({c['x']},{c['y']}): elevation {ev}, tile {w}")
        if fix:
            c["elevation"] = w; changed = True
    for b in mj.get("bg_events", []):
        ev = int(b.get("elevation", 0) or 0)
        if ev == 0:
            continue
        around = {tile_elev(b["x"] + dx, b["y"] + dy) for dx, dy in NEIGHBOURS} - {None}
        here = tile_elev(b["x"], b["y"])
        if here is not None:
            around.add(here)
        if not around or ev in around or 0 in around or 15 in around:
            continue
        out.append(f"sign/hidden {b.get('script') or b.get('item', '')} at ({b['x']},{b['y']}): elevation {ev}, read from {sorted(around)}")
        if fix:
            b["elevation"] = 0; changed = True
    if changed:
        (ROOT / "data/maps" / name / "map.json").write_text(json.dumps(mj, indent=2, ensure_ascii=False) + "\n")
    return out


def main():
    fix = "--fix" in sys.argv
    total = 0
    for p in sorted((ROOT / "data/maps").glob("Parcel*/map.json")):
        name = p.parent.name
        if name in audit.RETIRED_MAPS:
            continue
        for line in check(name, fix):
            total += 1
            print(f"{name}: {line}")
    print(f"\n{total} event(s) at an elevation the player never has" + (" -- fixed" if fix and total else ""))


if __name__ == "__main__":
    main()
