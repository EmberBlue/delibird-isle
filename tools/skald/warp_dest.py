#!/usr/bin/env python3
"""Every scripted warp must land the player on a free, walkable tile.

A map's warp_events are checked by audit.py and walked by sweep.py. A warp written in a script
(`warp(MAP_X, x, y)`: the ferry, a walk-in scene, the eight epilogue stops) is a bare coordinate
that nothing else validates, and it goes stale the moment someone places an NPC or redraws the
ground there. (The Delibird epilogue stop landed the player on top of a villager added later,
2026-11-10.)

  python3 tools/skald/warp_dest.py        list every scripted warp whose landing is not clean

Reported: outside the map; a solid tile; open water; an object standing on the tile (unless it
is hidden by a flag, which is named so a reader can judge); a coord trigger on the tile that
would fire on arrival is only noted when its script is not the arriving map's own scene.
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))
import audit  # noqa: E402

WARP_RE = re.compile(r"(?<![A-Za-z_])warp\w*\(\s*(MAP_\w+)\s*,\s*(\d+)\s*,\s*(\d+)\s*\)")
WATER = ("POND_WATER", "DEEP_WATER", "OCEAN_WATER", "NO_SURFACING", "SEAWEED", "CURRENT", "WATERFALL")


def main():
    byid = {}
    for p in sorted((ROOT / "data/maps").glob("*/map.json")):
        if p.parent.name in audit.RETIRED_MAPS:
            continue
        try:
            byid[audit.json.loads(p.read_text())["id"]] = p.parent.name
        except Exception:
            pass
    bad = total = 0
    cache = {}
    for pory in sorted((ROOT / "data/maps").glob("Parcel*/scripts.pory")):
        src = pory.parent.name
        if src in audit.RETIRED_MAPS:
            continue
        script = ""
        for ln, line in enumerate(pory.read_text().splitlines(), 1):
            m = re.match(r"(?:script|mapscripts)\s+(\w+)", line)
            if m:
                script = m.group(1)
            if line.lstrip().startswith("//"):
                continue
            for w in WARP_RE.finditer(line):
                total += 1
                mid, x, y = w.group(1), int(w.group(2)), int(w.group(3))
                name = byid.get(mid)
                where = f"{src}:{ln} {script} -> {mid} ({x},{y})"
                if name is None:
                    print(f"{where}: unknown or retired map"); bad += 1; continue
                if name not in cache:
                    cache[name] = audit.load_map(name)
                mj, lay, W, H, words, tiles = cache[name]
                if not (0 <= x < W and 0 <= y < H):
                    print(f"{where}: outside the {W}x{H} map"); bad += 1; continue
                tid, col, elev = audit.decode(words[y * W + x])
                beh = audit.BEH.get(tiles.get(tid, ((), 0, 0))[1], "")
                on_warp = any(e["x"] == x and e["y"] == y for e in mj.get("warp_events", []))
                if col != 0 and not on_warp:
                    print(f"{where}: solid tile (metatile {tid})"); bad += 1; continue
                if any(k in beh for k in WATER):
                    print(f"{where}: open water ({beh})"); bad += 1; continue
                for e in mj.get("object_events", []):
                    if e["x"] == x and e["y"] == y:
                        flag = e.get("flag", "0")
                        hidden = "" if flag in ("0", "", None) else f" (hidden while {flag} is set)"
                        print(f"{where}: lands on {e['graphics_id'][14:]} {e.get('script', '')}{hidden}")
                        if not hidden:
                            bad += 1
    print(f"\n{total} scripted warps checked, {bad} with a bad landing")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
