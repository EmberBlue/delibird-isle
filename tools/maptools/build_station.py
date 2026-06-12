#!/usr/bin/env python3
"""Generate the mainland ranger station + Holding Meadow (§08 Acts I-II).

East of the long bridge: the first Climate Corps field station (exterior
staging for now -- interiors come with the building pass) and the Holding
Meadow, a designed ecosystem where the §08 partner-recognition scene plays:
trees thinning into a wide irregular clearing, mixed soil, shallow water
channels. 50x40, frp_general + seafoam. Connects west to ParcelBridge
(corridor rows 14-16 here = bridge rows 10-12, offset +4/-4).

Run from repo root: python3 tools/maptools/build_station.py
"""
import struct
from pathlib import Path

W, H = 50, 40

GRASS = 1
TUFT_A, TUFT_B = 8, 9
FLOWERS = 4
SAND = 261
SHORE_A, SHORE_B = 256, 257
WATER = 282
TREE_QUAD = {(0, 0): 28, (1, 0): 29, (0, 1): 36, (1, 1): 37}


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        grid[y][x] = word(mid, col, elev)

    def forest(x, y):
        put(x, y, TREE_QUAD[(x % 2, y % 2)], col=1)

    def pool(x0, x1, y0, y1):
        """Shallow water channel with a shore lip on its south edge."""
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, WATER, col=1, elev=1)
        for x in range(x0, x1):
            put(x, y1, SHORE_A if x % 2 == 0 else SHORE_B, col=1)

    # --- forest frame, 8 deep, except the west corridor (rows 13-17)
    # and the north corridor to the wetlands (x 23-27) ----------------------
    for y in range(H):
        for x in range(W):
            if x < 8 and 13 <= y <= 17:
                continue
            if 23 <= x <= 27 and y < 8:
                continue
            if x < 8 or x >= W - 8 or y < 8 or y >= H - 8:
                forest(x, y)
    for y in range(0, 8):
        for x in range(23, 28):
            put(x, y, GRASS)
    for y in range(0, 8):
        for x in range(24, 27):
            put(x, y, SAND)

    # --- the track in from the bridge (rows 14-16) --------------------------
    for y in range(13, 18):
        for x in range(0, 12):
            put(x, y, GRASS)
    for y in range(14, 17):
        for x in range(0, 12):
            put(x, y, SAND)

    # --- station yard (packed sand; exterior staging for Act I) ------------
    for y in range(11, 21):
        for x in range(11, 21):
            put(x, y, SAND)

    # --- the Holding Meadow: irregular clearing with water channels --------
    # sparse decoration; "mixed soil, shallow water channels, broken sunlight"
    for y in range(8, 32):
        for x in range(21, 42):
            r = (x * 11 + y * 7) % 53
            if r == 0:
                put(x, y, FLOWERS)
            elif r in (13, 31):
                put(x, y, TUFT_A if (x + y) % 2 else TUFT_B)

    pool(26, 30, 10, 12)    # the shaded pool (Lotad)
    pool(33, 35, 14, 24)    # the long shallow channel Rin tends
    pool(37, 41, 25, 28)    # the deeper channel (Carvanha)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelStation")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    # interior clearing in deep forest: the border is endless trees,
    # and the frame is deeper than the camera sees, so it never shows wrong
    (out / "border.bin").write_bytes(
        struct.pack("<4H", word(28, 1), word(29, 1), word(36, 1), word(37, 1)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
