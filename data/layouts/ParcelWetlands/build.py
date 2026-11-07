#!/usr/bin/env python3
"""ParcelWetlands (Reedmere): reworked from the south 68 rows of LAYOUT_ROUTE119
(rows 72-139 of the vanilla map, General + Fortree). This script is the map
source -- run it after editing to regenerate map.bin.
  python3 tools/skald/layoutascii.py LAYOUT_PARCEL_WETLANDS   (see the result)
"""
import struct
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[2]
W, H = 40, 68
words = list(struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes()))
R119 = struct.unpack("<5600H", (ROOT / "data/layouts/Route119/map.bin").read_bytes())  # 40x140 source for blocks

def get(x, y): return words[y * W + x] & 0x3FF
def put(x, y, mid, c=None, e=None):
    old = words[y * W + x]
    if c is None: c = (old >> 10) & 3
    if e is None: e = old >> 12
    words[y * W + x] = (e << 12) | (c << 10) | mid
def rect(x0, y0, x1, y1, mid, c=None, e=None):
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1): put(x, y, mid, c, e)
def paste_from_r119(sx, sy, w, h, dx, dy):
    """Copy a block of the full vanilla Route 119 (its own coords) into this map."""
    for j in range(h):
        for i in range(w): words[(dy + j) * W + (dx + i)] = R119[(sy + j) * 40 + (sx + i)]

GRASS, TALL, SIGN, DOOR = 1, 21, 3, 33
def tree_block(x, y):
    put(x, y, 468, 1); put(x + 1, y, 469, 1); put(x, y + 1, 476, 1); put(x + 1, y + 1, 477, 1)

# ---- edits ------------------------------------------------------------------
# Reedmere: the backwater landing. The pond is the backwater; the house on its
# east bank is HARLAND's; the Mereholt Tidewater office (the Weather Institute
# building) faces the landing from the south; the bridge row runs east to the
# Corridor; Fernwick is through the funnel at the bottom.

# 1. the east exit: the bridge row continues over the rock top to the map edge
for y in (12, 13):
    e = words[y * W + 37] >> 12
    put(33, y, 113, 0, e)
    put(38, y, 113, 0, 0); put(39, y, 113, 0, 0)   # elevation 0 = transition to the Corridor's ground level
# stray edge tiles that would only be enterable from the Corridor side
put(39, 18, get(39, 18), 1); put(39, 19, get(39, 19), 1); put(0, 14, get(0, 14), 1)

# 2. the landing: HARLAND's house gets a real door; a signpost by the water
put(33, 37, DOOR, 0)
put(28, 39, SIGN, 1)

# 3. the Tidewater office (Weather Institute block, vanilla rows 26-33, x 1-11)
#    on flattened ground south of the landing, its sign kept at (34,47)
e_land = words[38 * W + 30] >> 12
rect(26, 40, 36, 48, GRASS, 0, e_land)
paste_from_r119(1, 26, 11, 8, 26, 40)
put(26, 47, GRASS, 0, e_land); put(27, 47, GRASS, 0, e_land)    # the block's two tree cells
rect(26, 48, 36, 48, GRASS, 0, e_land)

# 4. the funnel from the reed beds into the landing: trees either side of x 20-22
for x in (17, 23):
    tree_block(x, 40)
put(19, 40, 468, 1); put(19, 41, 476, 1)
put(25, 40, 469, 1); put(25, 41, 477, 1)
put(37, 40, 468, 1); put(37, 41, 476, 1)

# 5. the route sign at the Fernwick funnel
put(15, 62, SIGN, 1)

# ---- write ------------------------------------------------------------------
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
print(f"ParcelWetlands: wrote {W}x{H} map.bin")
