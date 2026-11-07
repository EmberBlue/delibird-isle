#!/usr/bin/env python3
"""ParcelMarsh: the base is a vanilla slice (see the commit); this script is the map
source -- edit the ops and run it to regenerate map.bin."""
import struct
from pathlib import Path
HERE = Path(__file__).resolve().parent
raw = (HERE / "base.bin").read_bytes()
words = list(struct.unpack(f"<{len(raw)//2}H", raw))
import json
lay = next(l for l in json.load(open(HERE.parents[1] / "layouts/layouts.json"))["layouts"] if l["name"] == "ParcelMarsh_Layout")
W, H = lay["width"], lay["height"]
def get(x, y): return words[y * W + x] & 0x3FF
def put(x, y, mid, c=None, e=None):
    old = words[y * W + x]
    if c is None: c = (old >> 10) & 3
    if e is None: e = old >> 12
    words[y * W + x] = (e << 12) | (c << 10) | mid
def rect(x0, y0, x1, y1, mid, c=None, e=None):
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1): put(x, y, mid, c, e)
# ---- edits ------------------------------------------------------------------
# Heron's hut on the pond's west shore (door (17,4)): rows 1-4, x 16-19 of the
# grass pocket -- the General house (primary ids), door col 1 as in vanilla
HOUSE = [[8, 9, 9, 10], [16, 17, 17, 18], [24, 25, 11, 26], [32, 33, 19, 34]]
for j, row in enumerate(HOUSE):
    for i, mid in enumerate(row): put(10 + i, 1 + j, mid, 1, 0)
# ---- write ------------------------------------------------------------------
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
print(f"ParcelMarsh: wrote {W}x{H} map.bin")
