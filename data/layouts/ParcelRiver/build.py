#!/usr/bin/env python3
"""ParcelRiver (ELVSUND and the farmland): a 60x40 composite -- vanilla Route 117
(rows 0-19) over Mauville City (rows 20-39, x 0-39) with painted farmland east
of the town, and a river down the east side. General + Mauville. This script
is the map source -- run it after editing to regenerate map.bin.
  python3 tools/skald/layoutascii.py LAYOUT_PARCEL_RIVER
"""
import struct
from pathlib import Path

HERE = Path(__file__).resolve().parent
W, H = 60, 40
words = list(struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes()))
R117 = struct.unpack("<1200H", (HERE.parent / "Route117/map.bin").read_bytes())

def get(x, y): return words[y * W + x] & 0x3FF
def put(x, y, mid, c=None, e=None):
    old = words[y * W + x]
    if c is None: c = (old >> 10) & 3
    if e is None: e = old >> 12
    words[y * W + x] = (e << 12) | (c << 10) | mid
def rect(x0, y0, x1, y1, mid, c=None, e=None):
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1): put(x, y, mid, c, e)
def paste_r117(sx, sy, w, h, dx, dy):
    for j in range(h):
        for i in range(w): words[(dy + j) * W + (dx + i)] = R117[(sy + j) * 60 + (sx + i)]

GRASS, SIGN = 1, 3
WL, WO, WR, WTL, WT, WTR, WBL, WBR = 184, 161, 186, 176, 177, 178, 510, 511
HOUSE = [[8, 9, 9, 10], [16, 17, 17, 18], [24, 25, 11, 26], [32, 33, 19, 34]]
def house(x, y):
    for j, row in enumerate(HOUSE):
        for i, mid in enumerate(row): put(x + i, y + j, mid, 1, 0)

# ---- edits ------------------------------------------------------------------
# 1. the river, x 55-58, top edge to bottom edge (it runs off both ends)
for y in range(0, 40):
    put(55, y, WL, 0, 1); put(56, y, WO, 0, 1); put(57, y, WO, 0, 1); put(58, y, WR, 0, 1)
rect(59, 0, 59, 39, GRASS, 0, 3)          # the far bank, one tile wide
rect(54, 0, 54, 39, GRASS, 0, 3)          # the near bank: a clear walk along the water

# 2. the farmland east of the town: two fenced plots (Route 117's SW plot block,
#    rows 13-17 x 8-16) and the farmhouse
paste_r117(8, 13, 9, 5, 41, 22)
paste_r117(8, 13, 9, 5, 41, 31)
house(50, 30)                              # door (51,33)
put(49, 26, SIGN, 1)                       # the irrigation board (bg)

# 3. the town-to-farm gap: the tree line at x 40 rows 20-39 is Mauville's east
#    edge; open a road through it at rows 27-30 (the main street continues east)
rect(40, 27, 41, 30, GRASS, 0, 3)

# 4. bottom four rows primary-only (the Floodbasin previews them with the
#    Fortree secondary): any Mauville tile there becomes grass or a tree
for y in range(36, 40):
    for x in range(0, 40):
        mid = get(x, y); col = (words[y * W + x] >> 10) & 3
        if mid >= 512: put(x, y, 199 if col else GRASS, col, 3)   # 199 = canopy; the 2x2 tree ids have no palette here


# houses added 2026-11-08 (interiors with residents)
house(30, 8)
house(3, 27)
house(22, 27)
house(13, 20)

# ---- write ------------------------------------------------------------------
import sys; sys.path.insert(0, str(HERE.parents[2] / "tools/skald")); import layout_fixes
layout_fixes.apply(HERE, words, W)                   # fixes.json: tile fixes that survive regeneration
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
print(f"ParcelRiver: wrote {W}x{H} map.bin")
