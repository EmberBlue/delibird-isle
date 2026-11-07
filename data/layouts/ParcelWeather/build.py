#!/usr/bin/env python3
"""ParcelWeather: the base is a vanilla slice (see the commit); this script is the map
source -- edit the ops and run it to regenerate map.bin."""
import struct
from pathlib import Path
HERE = Path(__file__).resolve().parent
raw = (HERE / "base.bin").read_bytes()
words = list(struct.unpack(f"<{len(raw)//2}H", raw))
import json
lay = next(l for l in json.load(open(HERE.parents[1] / "layouts/layouts.json"))["layouts"] if l["name"] == "ParcelWeather_Layout")
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
# ---- write ------------------------------------------------------------------
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
print(f"ParcelWeather: wrote {W}x{H} map.bin")
