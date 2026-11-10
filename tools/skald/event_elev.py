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

  python3 tools/skald/event_elev.py --sides    people who answer from one side and are silent from another:
                                               an NPC on a raised tile (a dais, a deck, a terrace lip) whose
                                               neighbouring floor is at another height. The player standing
                                               there presses A and nothing happens. (Cordelia Brooke behind
                                               her desk, 2026-11-10.) Fix: give the NPC's own tile elevation 0
                                               (layout_edit.py MAP elev x,y 0) so the object spawns as a
                                               wildcard, or level the floor around it.

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
        if 0 <= e["x"] < W and 0 <= e["y"] < H:
            mid_, col_, _ = audit.decode(words[e["y"] * W + e["x"]])
            beh_ = audit.BEH.get(tiles.get(mid_, ((), 0, 0))[1], "")
            g = e["graphics_id"][14:]
            swims = g.startswith(("SWIMMER", "TUBER", "SPECIES(")) or "ITEM_BALL" in g
            if col_ == 0 and ("WATER" in beh_ or "SEAWEED" in beh_) and "SHALLOW" not in beh_ and not swims:
                # water tiles have collision 0, so a placement pass that asks "is it walkable?" puts
                # villagers in lakes (seven in the Floodbasin, two in the Coast basin, 2026-11-10)
                out.append(f"object {e.get('local_id', '')} {g} at ({e['x']},{e['y']}) stands in open water: move it ashore")
                continue
        if w == 1 and ev != 0:
            # standing in water (a sick fish, a swimmer): spoken to from a bridge or a boardwalk, where
            # the player's elevation is whatever the ramp gave them -- only the wildcard works
            out.append(f"object {e.get('local_id', '')} {e['graphics_id'][14:]} at ({e['x']},{e['y']}): elevation {ev} in water, needs 0")
            if fix:
                e["elevation"] = 0; changed = True
            continue
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


def silent_sides():
    """Every talkable object with a reachable neighbouring tile whose elevation does not match the
    object's own (the elevation of the tile it stands on, re-read at spawn). Returns the lines."""
    import reach
    hm = set(reach.ALL_HM)
    maps, byid = reach.load_all(hm)
    seen = reach.reach(maps, byid, (byid["MAP_PARCEL_FERRY"], 4, 6), hm)
    out = []
    for name in sorted(maps):
        m = maps[name]
        r = {(x, y) for mm, x, y in seen if mm is m}
        for (x, y), e in sorted(m.objs.items()):
            if not m.inside(x, y) or not e.get("script") or e.get("script") == "0x0" or e.get("script") == "NULL":
                continue
            g = e["graphics_id"]
            if "ITEM_BALL" in g or g in reach.HM_GFX or "BERRY_TREE" in g:
                continue
            col, oe, beh = m.beh(x, y)
            if oe in (0, 15):
                continue
            good, bad = [], []
            for dx, dy in NEIGHBOURS:
                n = (x + dx, y + dy)
                if n not in r or n in m.objs or n in m.warps:
                    continue
                ncol, ne, nbeh = m.beh(*n)
                if any(w in nbeh for w in reach.WATER_WORDS):
                    continue                      # a surfer has elevation 1 everywhere; water NPCs are check()'s rule
                if ne in (0, 15) or ne == oe:
                    good.append(n)
                else:
                    bad.append((n, ne))
            if bad:
                out.append(f"{name}: {g[14:]} {e.get('script')} at ({x},{y}) stands at elevation {oe}; silent from "
                           + ", ".join(f"({n[0]},{n[1]}) [elev {ne}]" for n, ne in bad)
                           + (f"; answers from {len(good)} side(s)" if good else "; answers from NO side"))
    return out


def main():
    if "--sides" in sys.argv:
        lines = silent_sides()
        for line in lines:
            print(line)
        print(f"\n{len(lines)} talkable object(s) silent from a reachable side")
        return
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
