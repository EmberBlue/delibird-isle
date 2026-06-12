#!/usr/bin/env python3
"""Generate the long bridge east of the arrival town (§07 Scenes 4-6).

The island town connects to the mainland by one long bridge -- the first
gate and the first set-piece: the stuck Poliwag at the stream mouth below,
the poacher ambush, Hale's intervention. 60x24, frp_general + seafoam,
connects west to ParcelIsle (corridor rows 10-12 here = town rows 36-38,
offset 26).

Run from repo root: python3 tools/maptools/build_bridge.py
"""
import struct
from pathlib import Path

W, H = 60, 24

GRASS = 1
SAND = 261
SHORE_A, SHORE_B = 256, 257
WATER = 282
PLANK_L, PLANK_M, PLANK_R = 313, 314, 315
TREE_QUAD = {(0, 0): 28, (1, 0): 29, (0, 1): 36, (1, 1): 37}


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    # default: open sea
    grid = [[word(WATER, col=1, elev=1) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        grid[y][x] = word(mid, col, elev)

    def forest(x, y):
        put(x, y, TREE_QUAD[(x % 2, y % 2)], col=1)

    # --- west shoulder: forest wall with the corridor from town -------------
    # Corridor rows 10-12 align with the town's east gap (rows 36-38 there).
    for y in range(H):
        for x in range(0, 8):
            if not (9 <= y <= 13):
                forest(x, y)
    for y in range(9, 14):          # grass apron around the corridor
        for x in range(0, 8):
            put(x, y, GRASS)
    for y in range(10, 13):         # the sandy track itself
        for x in range(0, 8):
            put(x, y, SAND)

    # --- the long bridge (rows 10-12, x 8-46) -------------------------------
    for x in range(8, 47):
        put(x, 10, PLANK_L)
        put(x, 11, PLANK_M)
        put(x, 12, PLANK_R)

    # --- stream-mouth embankment below the bridge (south side, mid-span) ----
    # Where the §07 Poliwag cluster waits: a sand pocket at the water's edge.
    for y in range(13, 17):
        for x in range(24, 33):
            put(x, y, SAND)
    for x in range(24, 33):         # its waterline
        put(x, 17, SHORE_A if x % 2 == 0 else SHORE_B, col=1)

    # --- east landing: grass headland, track onward, forest beyond ----------
    for y in range(8, 17):
        for x in range(47, W):
            put(x, y, GRASS)
    for y in range(10, 13):
        for x in range(47, 56):
            put(x, y, SAND)
    for y in range(H):
        for x in range(56, W):
            if not (9 <= y <= 13):
                forest(x, y)
    for y in range(0, 8):           # north-east forest cap
        for x in range(48, W):
            forest(x, y)
    for y in range(17, H):          # south-east forest cap
        for x in range(48, W):
            forest(x, y)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelBridge")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    # open sea border: every non-connected edge is water or deep forest
    (out / "border.bin").write_bytes(
        struct.pack("<4H", *([word(WATER, col=1, elev=1)] * 4)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin")


if __name__ == "__main__":
    main()
