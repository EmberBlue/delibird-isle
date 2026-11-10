#!/usr/bin/env python3
"""ParcelDelibird (the Holiday Village): base.bin is the hand-built village;
this script opens it onto the rest of the island -- the summit trail through
the north tree belt (x 3-5), the shore trail through the east ring (rows
10-12), plain sea instead of the rock-pair water tile, and the border fixed to
sea. Run after editing to regenerate map.bin (and border.bin)."""
import struct
from pathlib import Path

HERE = Path(__file__).resolve().parent
W, H = 30, 26
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

GRASS, TREE, SEA, ROCKS, SIGN = 1, 36, 473, 265, 3

# ---- the sea: plain water everywhere, a few rock pairs left for texture -----
for y in range(H):
    for x in range(W):
        if get(x, y) == ROCKS:
            put(x, y, SEA, 0, 1)
for x, y in ((0, 7), (1, 18), (28, 3), (29, 20), (14, 25), (22, 24), (5, 0)):
    put(x, y, ROCKS, 1, 0)

# ---- north: the tree belt rises into the summit ----------------------------
rect(2, 0, 27, 1, TREE, 1, 0)          # rows 0-1 were sea; now the belt
rect(3, 0, 5, 2, GRASS, 0, 3)          # the summit trail (joins ParcelDelibirdSummit x 3-5)
rect(5, 5, 6, 5, GRASS, 0, 3)          # open the pocket to the square
put(6, 3, SIGN, 1, 0)                  # SUMMIT TRAIL signpost

# ---- east: the shore trail through the ring --------------------------------
rect(27, 10, 29, 12, GRASS, 0, 3)      # joins ParcelDelibirdCliffs rows 4-6
rect(27, 9, 29, 9, TREE, 1, 0)        # (27,9) was an inlet
rect(28, 13, 29, 13, TREE, 1, 0)
put(26, 13, SIGN, 1, 0)                # SHORE TRAIL signpost

# ---- write ------------------------------------------------------------------
import sys; sys.path.insert(0, str(HERE.parents[2] / "tools/skald")); import layout_fixes
layout_fixes.apply(HERE, words, W)                   # fixes.json: tile fixes that survive regeneration
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
(HERE / "border.bin").write_bytes(struct.pack("<4H", *([(1 << 10) | SEA] * 4)))
print(f"ParcelDelibird: wrote {W}x{H} map.bin + border.bin")
