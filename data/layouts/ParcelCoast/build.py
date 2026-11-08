#!/usr/bin/env python3
"""ParcelCoast: Slateport City verbatim as the Mereholt Coast, plus the houses added
2026-11-08 (interiors with residents). Run after editing to regenerate map.bin."""
import struct
from pathlib import Path
HERE = Path(__file__).resolve().parent
W, H = 40, 60
words = list(struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes()))

def put(x, y, mid, c=None, e=None):
    old = words[y * W + x]
    if c is None: c = (old >> 10) & 3
    if e is None: e = old >> 12
    words[y * W + x] = (e << 12) | (c << 10) | mid
HOUSE = [[8, 9, 9, 10], [16, 17, 17, 18], [24, 25, 11, 26], [32, 33, 19, 34]]   # General's small house; 33 is the door
def house(x, y):
    for j, row in enumerate(HOUSE):
        for i, mid in enumerate(row):
            put(x + i, y + j, mid, 0 if mid == 33 else 1, 0)

# ---- edits ------------------------------------------------------------------
house(16, 39)   # ParcelCoastHouse4: the cannery sorter and the line worker
house(15, 50)   # ParcelCoastHouse5: the retired skipper and his granddaughter

# ---- write ------------------------------------------------------------------
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
print(f"ParcelCoast: wrote {W}x{H} map.bin")
