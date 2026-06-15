#!/usr/bin/env python3
"""Generate the River & Farmland (§01/§06 zone 4 -- Chapter 3 opener).

Upstream of the Floodbasin: a working river the player walks beside. The §06
lesson made geography:

  * west / north -- braided CLEAN reaches (what a river should look like)
  * centre       -- a CHANNELIZED cut: straight water between sand "concrete"
                    banks (hydrological alteration you can see)
  * east-centre  -- a broken BEAVER-DAM relic across an oxbow: the riparian
                    engineer USED to make a wetland here; without it the slack
                    water has gone green (eutrophic)
  * east         -- FARMLAND strip-crops, with runoff stains along the edges

The river reads STRESSED, not Collapsing: strained, but the window is open.

84x44, frp_general + seafoam. Walkable bank network so every survey point,
Harland, the farmer and the dam are reachable on foot. The player enters at
the SOUTH on a dry bank (x34-36) that connects up into the Floodbasin's north
trail (offset 0); the river mouth runs just west of that bank.

Run from repo root: python3 tools/maptools/build_river.py
"""
import struct
from pathlib import Path

W, H = 84, 44

GRASS = 1
TUFT_A, TUFT_B = 8, 9
FLOWERS = 4
BUSH = 5
ENCOUNTER = 12          # the tall-grass encounter tile (walkable)
SAND = 261
SHORE_A, SHORE_B = 256, 257
WATER = 282
PLANK_L, PLANK_M, PLANK_R = 313, 314, 315
TREE_QUAD = {(0, 0): 28, (1, 0): 29, (0, 1): 36, (1, 1): 37}

# The connection seam: the south opening (and the Floodbasin trail it meets).
OPEN_X0, OPEN_X1 = 33, 38     # walkable bank columns at the south edge


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        grid[y][x] = word(mid, col, elev)

    def forest(x, y):
        put(x, y, TREE_QUAD[(x % 2, y % 2)], col=1)

    def water(x, y):
        put(x, y, WATER, col=1, elev=1)

    def pool(x0, x1, y0, y1):
        for y in range(y0, y1):
            for x in range(x0, x1):
                water(x, y)
        for x in range(x0, x1):           # south shore lip
            put(x, y1, SHORE_A if x % 2 == 0 else SHORE_B, col=1)

    def grass_patch(x0, x1, y0, y1, tile=ENCOUNTER):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, tile)

    # --- forest frame, with the walkable south opening --------------------
    for y in range(H):
        for x in range(W):
            if OPEN_X0 <= x < OPEN_X1 and y >= H - 8:
                continue
            if x < 8 or x >= W - 8 or y < 8 or y >= H - 8:
                forest(x, y)
    # the south entrance: a sand track on a dry bank (player arrives here)
    for y in range(H - 8, H):
        for x in range(OPEN_X0, OPEN_X1):
            put(x, y, GRASS)
    for y in range(H - 8, H):
        for x in range(34, 37):
            put(x, y, SAND)

    # --- the river: a single channel down the west-centre -----------------
    # Upstream braided clean reaches (NW), narrowing into the channelized cut,
    # down to the mouth just west of the entrance. It never walls the map: the
    # whole east side and the far-west bank stay walkable, joined by a ford.
    pool(11, 19, 12, 16)                  # upper braided reach (clean)
    pool(17, 25, 14, 18)                  # mid braided reach
    pool(23, 30, 16, 20)                  # the reaches gather toward the cut
    # the channelized straight cut: water x29-32 with sand "concrete" banks
    for y in range(20, 35):
        for x in range(29, 33):
            water(x, y)
        put(28, y, SAND)                  # west cut-bank (gravel/concrete)
        put(33, y, SAND)                  # east cut-bank
    # the mouth: the cut drains south, ending at the seam just west of the bank
    for y in range(35, H):
        for x in range(29, 33):
            water(x, y)
    # a shallow FORD across the cut (sand over water) so west bank <-> east bank
    for x in range(28, 34):
        put(x, 31, SAND)

    # --- the broken beaver-dam oxbow (east-centre) ------------------------
    pool(45, 58, 12, 20)                  # the oxbow pond -- slack, eutrophic
    for x in range(48, 56):
        put(x, 14, PLANK_M, col=1)        # the broken dam ridge (relic)

    # --- east-bank farmland: rectangular strip-crops ----------------------
    for row_y in (10, 14, 18, 22, 26, 30):
        for x in range(62, W - 9):
            for dy in range(2):
                put(x, row_y + dy, TUFT_A if (x + row_y) % 2 else TUFT_B)

    # --- a sand bank-track linking the entrance to every feature ----------
    for y in range(18, H - 8):             # entrance up the east bank of the cut
        put(35, y, SAND)
    for x in range(35, 62):                # east across to the farmland
        put(x, 23, SAND)
    for x in range(34, 45):                # spur to the dam oxbow
        put(x, 17, SAND)
    for y in range(17, 24):
        put(44, y, SAND)
    for x in range(20, 35):                # west across the ford to the reaches
        put(x, 27, SAND)

    # --- tall grass (encounters, §06 state-keyed) -------------------------
    grass_patch(10, 18, 20, 26)            # west bank -- clean, upstream
    grass_patch(38, 46, 26, 32)            # mid -- channelized, stressed
    grass_patch(60, 68, 11, 16)            # farmland edge -- runoff
    grass_patch(60, 68, 28, 33)            # farmland edge -- runoff

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
