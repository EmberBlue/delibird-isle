#!/usr/bin/env python3
"""ParcelCoastBreakwater: reworked from LAYOUT_ROUTE109. This script is the map source -- run it after
editing to regenerate map.bin. Paint ops use raw metatile ids (see the id grid:
python3 tools/skald/idgrid.py ParcelCoastBreakwater)."""
import struct
from pathlib import Path

HERE = Path(__file__).resolve().parent
W, H = 40, 63
words = list(struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes()))

def get(x, y): return words[y * W + x] & 0x3FF
def col(x, y): return (words[y * W + x] >> 10) & 3
def put(x, y, mid, c=None, e=None):
    """Set a tile. c/e default: keep the base tile's collision/elevation."""
    old = words[y * W + x]
    if c is None: c = (old >> 10) & 3
    if e is None: e = old >> 12
    words[y * W + x] = (e << 12) | (c << 10) | mid
def rect(x0, y0, x1, y1, mid, c=None, e=None):
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1): put(x, y, mid, c, e)
def copy_block(sx, sy, w, h, dx, dy):
    """Move a rectangle of the base (buildings, ponds) to a new place."""
    block = [[words[(sy + j) * W + (sx + i)] for i in range(w)] for j in range(h)]
    for j in range(h):
        for i in range(w): words[(dy + j) * W + (dx + i)] = block[j][i]

# ---- edits ------------------------------------------------------------------

# ---- write ------------------------------------------------------------------
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
print(f"ParcelCoastBreakwater: wrote {W}x{H} map.bin")
