#!/usr/bin/env python3
"""Generate the River & Farmland (§01/§06 zone 4 — Chapter 3 opener).

Upstream of the Floodbasin: a working river, channelized in sections;
farm strips along its east bank; a broken beaver-dam relic that USED to
make a wetland pocket. The ecology and the human cost meet here -- this
is Harland's people's watershed. Eutrophication tells: a green tinge on
the slack water, runoff stains along the cropland edges.

84x44, frp_general + seafoam. Connects south to ParcelFloodbasin
(corridor rows 8-11 here = floodbasin rows 8-11, offset 0).

Run from repo root: python3 tools/maptools/build_river.py
"""
import struct
from pathlib import Path

W, H = 84, 44

GRASS = 1
TUFT_A, TUFT_B = 8, 9
FLOWERS = 4
BUSH = 5
SAND = 261
SHORE_A, SHORE_B = 256, 257
WATER = 282
PLANK_L, PLANK_M, PLANK_R = 313, 314, 315
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
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, WATER, col=1, elev=1)
        for x in range(x0, x1):
            put(x, y1, SHORE_A if x % 2 == 0 else SHORE_B, col=1)

    # --- forest frame with the south corridor (matches Floodbasin north) ---
    # Floodbasin opens to the north at x 30-37 (the discharge pipe is at
    # x 33-34 there, in WATER). We connect at x 30-37 so the river spills
    # SOUTH into the basin's pipe -- the river IS the source.
    for y in range(H):
        for x in range(W):
            if 30 <= x <= 37 and y >= H - 8:
                continue
            if x < 8 or x >= W - 8 or y < 8 or y >= H - 8:
                forest(x, y)
    # the river mouth at the south edge -- the water comes from upstream
    for y in range(H - 8, H):
        for x in range(30, 38):
            put(x, y, WATER, col=1, elev=1)
    # shoreline lip just inside the south corridor connector
    for x in range(30, 38):
        put(x, H - 8, SHORE_A if x % 2 == 0 else SHORE_B, col=1)

    # --- the main river: a wide channel snaking west-to-south ---------------
    # west reach: braided (clean, upstream)
    pool(10, 18, 12, 16)
    pool(18, 26, 14, 18)
    pool(26, 34, 16, 20)
    # the channelized middle: straight concrete cut (collision banks, sand)
    for y in range(20, 34):
        for x in range(31, 38):
            put(x, y, WATER, col=1, elev=1)
    # concrete banks (sand reads as cut-bank gravel)
    for y in range(20, 34):
        put(30, y, SAND)
        put(38, y, SAND)
    # the old beaver dam relic (a broken plank line across an oxbow east)
    pool(48, 60, 14, 22)   # the oxbow pond -- now slack, eutrophic feel
    for x in range(50, 58):
        put(x, 16, PLANK_M, col=1)  # the broken dam ridge

    # --- east-bank farmland: rectangular crop strips (worked land) ---------
    for stripe_y in (10, 15, 20, 25, 30, 34):
        for x in range(62, W - 8):
            for dy in range(2):
                put(x, stripe_y + dy, TUFT_A if (x + stripe_y) % 2 else TUFT_B)

    # --- track from the south river-mouth up the west bank ----------------
    for y in range(H - 8, 18):
        for dx in (-1, 0, 1):
            put(28 + dx, y, SAND)
    # cross-track east at y=22 toward the farmland
    for x in range(28, 62):
        put(x, 22, SAND)
    # north track to the broken-dam relic
    for y in range(16, 23):
        put(55, y, SAND) if (55, y) not in [(55, 16)] else None

    # --- tall grass (encounters: §06 zone-4 indicator + invertebrates) ----
    for (x0, x1, y0, y1) in ((10, 18, 22, 28),      # west bank, upstream-clean
                              (40, 50, 26, 32),     # mid, channelized-stressed
                              (62, 72, 12, 18),     # farmland edge, runoff
                              (62, 72, 28, 34)):    # farmland edge, runoff
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, 12)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelRiver")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", word(28, 1), word(29, 1), word(36, 1), word(37, 1)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
