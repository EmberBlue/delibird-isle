#!/usr/bin/env python3
"""ParcelFloodbasin: reworked from vanilla LAYOUT_ROUTE120 (General + Fortree,
40x100). This script is the map source -- run it after editing to regenerate
map.bin.   python3 tools/skald/layoutascii.py LAYOUT_PARCEL_FLOODBASIN
"""
import struct
from pathlib import Path

HERE = Path(__file__).resolve().parent
W, H = 40, 100
words = list(struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes()))

def get(x, y): return words[y * W + x] & 0x3FF
def put(x, y, mid, c=None, e=None):
    old = words[y * W + x]
    if c is None: c = (old >> 10) & 3
    if e is None: e = old >> 12
    words[y * W + x] = (e << 12) | (c << 10) | mid
def rect(x0, y0, x1, y1, mid, c=None, e=None):
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1): put(x, y, mid, c, e)

GRASS, SIGN = 1, 3
HOUSE = [[8, 9, 9, 10], [16, 17, 17, 18], [24, 25, 11, 26], [32, 33, 19, 34]]   # General's small house; 33 is the door
def house(x, y):
    for j, row in enumerate(HOUSE):
        for i, mid in enumerate(row):
            put(x + i, y + j, mid, 0 if mid == 33 else 1, 0)

# ---- edits ------------------------------------------------------------------
# The Floodbasin: Route 120 as the sick wetland. You arrive from the Corridor
# at the bottom-left, the hamlet LEIRVIK sits on the open ground above the
# south lake, the upper lake with the long bridge carries the survey tells,
# the works door (the Scorched Slab mouth) is the old Mereholt pump house,
# and the top-left pocket is BREEN's checkpoint and the rubble to the River.

# 1. the entry path from the Corridor: x 6-8, rows 93-99 (trees -> ground)
rect(6, 93, 8, 98, GRASS, 0, 5)      # the hamlet ground is elevation 5
rect(6, 99, 8, 99, GRASS, 0, 0)      # edge tiles at 0: transition to the Corridor's level

# 2. LEIRVIK: three houses on the open ground (doors at (15,91) (23,91) (34,91))
house(14, 88); house(22, 88); house(33, 88)
put(19, 91, SIGN, 1)

# 3. the River exit: row 0 x 9-11 opened; the pocket widened at row 1 x 12-14
rect(9, 0, 11, 0, GRASS, 0, 0)      # edge tiles at 0: transition to the River's level
rect(12, 1, 14, 1, GRASS, 0, 3)


# houses added 2026-11-08 (interiors with residents)
house(18, 84)

# ---- write ------------------------------------------------------------------
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
print(f"ParcelFloodbasin: wrote {W}x{H} map.bin")
