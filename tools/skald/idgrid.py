#!/usr/bin/env python3
"""Print a layout as a grid of metatile ids ('+' solid, '.' walkable)."""
import json, struct, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
name = sys.argv[1]
lay = json.loads((ROOT / "data/layouts/layouts.json").read_text())["layouts"]
L = next(l for l in lay if l["id"] == name or l["name"] == f"{name}_Layout")
W, H = L["width"], L["height"]
w = struct.unpack(f"<{W*H}H", (ROOT / L["blockdata_filepath"]).read_bytes())
print("     " + "".join(f"{x:4}" for x in range(W)))
for y in range(H):
    print(f"{y:3}  " + "".join(f"{w[y*W+x]&0x3ff:3d}{'+' if (w[y*W+x]>>10)&3 else '.'}" for x in range(W)))
