#!/usr/bin/env python3
"""Dump any layout (vanilla or Parcel) as an ASCII grid of behaviour classes,
with rulers, so a rework can be planned by row/col before painting.

  python3 tools/skald/layoutascii.py LAYOUT_ROUTE119 [--rows 72-139] [--ids]

Legend: '.' walkable  '#' solid  '~' water  '"' tall/long grass  'b' bridge
        'v' '^' '<' '>' ledges  's' sand  'D' door/warp  'c' cave  ',' puddle/shallow
--ids prints the metatile id grid for the same rows instead (4 chars per cell).
"""
import json, re, struct, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "tools/skald"))
from audit import load_ts, decode, NUM_METATILES_IN_PRIMARY  # noqa: E402

def behaviours():
    txt = (ROOT / "include/constants/metatile_behaviors.h").read_text()
    body = txt[txt.index("enum"):]
    names, i = {}, 0
    for line in body.splitlines():
        m = re.match(r"\s*(MB_[A-Z0-9_]+)\s*(?:=\s*(\d+))?\s*,", line)
        if m:
            if m.group(2): i = int(m.group(2))
            names[i] = m.group(1); i += 1
    return names

CLS = {"MB_TALL_GRASS": '"', "MB_LONG_GRASS": '"', "MB_POND_WATER": "~", "MB_DEEP_WATER": "~",
       "MB_INTERIOR_DEEP_WATER": "~", "MB_WATERFALL": "W", "MB_OCEAN_WATER": "~", "MB_NO_SURFACING": "~",
       "MB_PUDDLE": ",", "MB_SHALLOW_WATER": ",", "MB_SAND": "s", "MB_JUMP_SOUTH": "v", "MB_JUMP_NORTH": "^",
       "MB_JUMP_EAST": ">", "MB_JUMP_WEST": "<", "MB_CAVE": "c", "MB_ANIMATED_DOOR": "D", "MB_NON_ANIMATED_DOOR": "D",
       "MB_LADDER": "D", "MB_EAST_ARROW_WARP": "D", "MB_WEST_ARROW_WARP": "D", "MB_NORTH_ARROW_WARP": "D",
       "MB_SOUTH_ARROW_WARP": "D", "MB_FORTREE_BRIDGE": "b", "MB_BRIDGE_OVER_POND_LOW": "b",
       "MB_BRIDGE_OVER_POND_MED": "b", "MB_BRIDGE_OVER_POND_HIGH": "b", "MB_PACIFIDLOG_VERTICAL_LOG_TOP": "b",
       "MB_PACIFIDLOG_VERTICAL_LOG_BOTTOM": "b", "MB_PACIFIDLOG_HORIZONTAL_LOG_LEFT": "b",
       "MB_PACIFIDLOG_HORIZONTAL_LOG_RIGHT": "b", "MB_IMPASSABLE_NORTH": "n", "MB_IMPASSABLE_SOUTH": "u",
       "MB_IMPASSABLE_EAST": "e", "MB_IMPASSABLE_WEST": "w", "MB_IMPASSABLE_SOUTH_AND_NORTH": "=",
       "MB_IMPASSABLE_WEST_AND_EAST": "|", "MB_IMPASSABLE_NORTHEAST": "n", "MB_IMPASSABLE_NORTHWEST": "n",
       "MB_IMPASSABLE_SOUTHEAST": "u", "MB_IMPASSABLE_SOUTHWEST": "u", "MB_SECRET_BASE_WALL": "#",
       "MB_SHALLOW_WATER_PUDDLE": ","}

def main():
    lid = sys.argv[1]
    rows = None; ids = "--ids" in sys.argv
    for a in sys.argv[2:]:
        if a.startswith("--rows"):
            r = a.split("=")[1] if "=" in a else sys.argv[sys.argv.index(a) + 1]
            lo, hi = r.split("-"); rows = (int(lo), int(hi))
    lay = {l["id"]: l for l in json.loads((ROOT / "data/layouts/layouts.json").read_text())["layouts"]}[lid]
    W, H = lay["width"], lay["height"]
    words = struct.unpack(f"<{W*H}H", (ROOT / lay["blockdata_filepath"]).read_bytes())
    tiles = dict(load_ts(lay["primary_tileset"], 0)); tiles.update(load_ts(lay["secondary_tileset"], NUM_METATILES_IN_PRIMARY))
    names = behaviours()
    lo, hi = rows or (0, H - 1)
    if ids:
        print("     " + "".join(f"{x:4d}" for x in range(W)))
        for y in range(lo, hi + 1):
            print(f"{y:4d} " + "".join(f"{decode(words[y*W+x])[0]:4d}" for x in range(W)))
        return
    print("    " + "".join(str(x // 10) if x % 10 == 0 else " " for x in range(W)))
    print("    " + "".join(str(x % 10) for x in range(W)))
    for y in range(lo, hi + 1):
        out = []
        for x in range(W):
            mid, col, el = decode(words[y * W + x])
            beh = names.get(tiles.get(mid, ((), 0, 0))[1], "")
            ch = CLS.get(beh)
            if ch is None:
                ch = "#" if col else "."
            elif col and ch not in "~W":
                ch = "#"      # solid regardless of behaviour (cave wall tops, blocked doors, ...)
            out.append(ch)
        print(f"{y:3d} " + "".join(out))

if __name__ == "__main__":
    main()
