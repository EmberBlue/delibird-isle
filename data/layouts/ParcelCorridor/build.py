#!/usr/bin/env python3
"""ParcelCorridor (the Old Service Cut / Hollowbend Spur): reworked from vanilla
LAYOUT_ROUTE116 (General + Rustboro, 100x20). This script is the map source --
run it after editing to regenerate map.bin.
  python3 tools/skald/layoutascii.py LAYOUT_PARCEL_CORRIDOR
"""
import struct
from pathlib import Path

HERE = Path(__file__).resolve().parent
W, H = 100, 20
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

GRASS, SIGN, DOOR, CANOPY, MTN_TOP = 1, 3, 33, 199, 113
# General pond set: 176/177/178 top rim, 184/161/186 left/open/right, 510/511 bottom rim
WL, WO, WR, WTL, WTR, WBL, WBR = 184, 161, 186, 176, 178, 510, 511

# ---- edits ------------------------------------------------------------------
# The cut: a logging service road through thinned forest. The rock mass north
# of the road (with the Rusturf mouth) becomes dense canopy, and a stream is
# cut through it: wide and braided above the road, one fast channel below --
# the road over it is the culvert of the Act V scene.

# 1. rock mass x 41-56 rows 0-8 -> canopy; the stray nub at (40,0-1) too
rect(41, 0, 56, 8, CANOPY, 1, 3)
put(40, 0, CANOPY, 1, 3); put(40, 1, CANOPY, 1, 3)

# 2. the stream, x 48-51: upstream rows 0-10 (4 wide), the road rows 11-12 over
#    it, downstream rows 13-17 (2 wide, x 50-51)
for y in range(0, 10):
    put(48, y, WL, 0, 1); put(49, y, WO, 0, 1); put(50, y, WO, 0, 1); put(51, y, WR, 0, 1)
put(48, 10, WL, 0, 1); put(49, 10, WBL, 0, 1); put(50, 10, WBR, 0, 1); put(51, 10, WR, 0, 1)
rect(48, 11, 51, 12, GRASS, 0, 3)
put(50, 13, WTL, 0, 1); put(51, 13, WTR, 0, 1)
for y in range(14, 18):
    put(50, y, WL, 0, 1); put(51, y, WR, 0, 1)

# 3. MIRREN's checkpoint gate: the road narrows to rows 11-12 at x 44-45
rect(44, 9, 45, 10, CANOPY, 1, 3)
rect(44, 13, 45, 13, CANOPY, 1, 3)   # row 13 is walkable grass under the tree tops: close it too
rect(44, 11, 45, 11, CANOPY, 1, 3)   # one-tile gate on row 12: MIRREN's checkpoint

# 4. the site hut (the Route 116 house) gets a real door
put(38, 8, DOOR, 0)

# 5. the north exit to the Floodbasin: x 71-73 rows 0-4 opened over the plateau
e_top = words[5 * W + 72] >> 12
rect(71, 0, 73, 4, MTN_TOP, 0, e_top)

# 6. the route sign at the west entry
put(3, 7, SIGN, 1)

# the old workings' mouth on the east plaza (General cave entrance; bottom walkable at the floor's elevation)
put(78, 5, 0x09F, 1, 0)
put(78, 6, 0x0A7, 0, 3)


# 7. the terrace joins the east plaza (2026-11-10, found by the first real playthrough): the terrace is an
#    L -- the stair at (52,11), the ledge (52-55, 9-10), the column x 55 down to row 14, then rows 14-16 east
#    to x 59/60 -- and ended against rock four tiles short of the plaza. Row 15 now continues through the
#    rock (x 61-63, terrace top at elevation 4), climbs to (63,14) and (63,13) is a stair down onto the
#    plaza's row 13 (elevation 3), so the road from MIRREN's gate reaches the adit, the old workings and
#    the north exit. Without it the Floodbasin could not be reached on foot. (DAG moved off (55,10), the
#    one tile between the ledge and the column, to (54,9) in map.json.)
terrace_top = words[15 * W + 57] & 0x3FF
stair = words[11 * W + 52] & 0x3FF
rect(61, 15, 63, 15, terrace_top, 0, 4)
put(63, 14, terrace_top, 0, 4)
put(63, 13, stair, 0, 0)

# ---- write ------------------------------------------------------------------
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
print(f"ParcelCorridor: wrote {W}x{H} map.bin")
