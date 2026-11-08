#!/usr/bin/env python3
"""ParcelHighlands (HAUKFELL): reworked from vanilla LAYOUT_ROUTE115 (General +
leob_fallarbor, 40x80) with Route 114's waterfall grafted into the north-west
pocket. This script is the map source -- run it after editing to regenerate
map.bin.   python3 tools/skald/layoutascii.py LAYOUT_PARCEL_HIGHLANDS
"""
import struct
from pathlib import Path

HERE = Path(__file__).resolve().parent
W, H = 40, 80
words = list(struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes()))
R114 = struct.unpack("<3200H", (HERE.parent / "Route114/map.bin").read_bytes())

def get(x, y): return words[y * W + x] & 0x3FF
def put(x, y, mid, c=None, e=None):
    old = words[y * W + x]
    if c is None: c = (old >> 10) & 3
    if e is None: e = old >> 12
    words[y * W + x] = (e << 12) | (c << 10) | mid
def rect(x0, y0, x1, y1, mid, c=None, e=None):
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1): put(x, y, mid, c, e)
def paste_r114(sx, sy, w, h, dx, dy):
    for j in range(h):
        for i in range(w): words[(dy + j) * W + (dx + i)] = R114[(sy + j) * 40 + (sx + i)]

GRASS, SIGN = 1, 3
WL, WO, WR = 184, 161, 186
HOUSE = [[8, 9, 9, 10], [16, 17, 17, 18], [24, 25, 11, 26], [32, 33, 19, 34]]
def house(x, y):
    for j, row in enumerate(HOUSE):
        for i, mid in enumerate(row): put(x + i, y + j, mid, 1, 0)

# ---- edits ------------------------------------------------------------------
# 1. the meltwater fall: Route 114's waterfall block (its rows 5-13, x 8-13:
#    pool / three rows of fall / river) into the NW pocket at (5,5), then a
#    channel down to the sea so the fall's foot is reached by Surf
paste_r114(8, 5, 6, 9, 5, 5)
for y in range(14, 19):
    put(6, y, WL, 0, 1); put(7, y, WO, 0, 1); put(8, y, WO, 0, 1); put(9, y, WR, 0, 1)

# 2. the foothills: the homestead (door (16,65)) and the warming centre
#    (door (25,69), facing the meadow row 70)
house(15, 62)
house(24, 66)
put(22, 70, SIGN, 1)        # the centre's banner board

# 3. the pool above the fall is reached only by the fall: close its east bank
rect(11, 5, 11, 7, 199, 1)

# the tarn cave's mouth west of the bore (Fallarbor brown cave entrance; bottom walkable at the floor's elevation)
put(24, 36, 0x259, 1, 0)
put(24, 37, 0x261, 0, 3)


# houses added 2026-11-08 (interiors with residents)
house(10, 64)
house(24, 58)

# ---- write ------------------------------------------------------------------
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
print(f"ParcelHighlands: wrote {W}x{H} map.bin")
