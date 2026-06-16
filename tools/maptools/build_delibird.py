#!/usr/bin/env python3
"""Generate Delibird Isle (§01/§06/§09 zone 6 -- Chapter 5, the interlude).

The title location. The emotional breather that is secretly the whole game in
one place: festival cheer over an irreversible permafrost thaw, and the
give-vs-take thesis made literal in a gift economy. NOT a certification zone --
an interlude.

Reached by ferry from the dock town. A small island, warm at the edges and
cold at the heart, the temperature gradient inverted by what is happening to it:

  * south        -- a warm beach + the ferry pier (you arrive here)
  * centre       -- the HOLIDAY VILLAGE: candy cabins, a GIFT SQUARE where the
                    island runs on reciprocity; string lights; Foundation
                    storm-relief banners (the §05 mask)
  * north (summit)-- the snowy peak, where the thaw is plainest: a thermokarst
                    pond, the drunken forest, a village cabin sinking at one
                    corner as the frozen ground beneath it lets go

60x44, frp_general + seafoam. No edge connections -- ferry warp in/out from
ParcelIsle (the dock town). Snow is evoked by pale scree + prose (no snow
tileset exists yet).

Run from repo root: python3 tools/maptools/build_delibird.py
"""
import struct
from pathlib import Path

W, H = 60, 44

GRASS = 1
TUFT_A, TUFT_B = 8, 9
FLOWERS = 4
BUSH = 5
ENCOUNTER = 12
SAND = 261
SHORE_A, SHORE_B = 256, 257
WATER = 282
PLANK_L, PLANK_M, PLANK_R = 313, 314, 315
TREE_QUAD = {(0, 0): 28, (1, 0): 29, (0, 1): 36, (1, 1): 37}

LAND_X0, LAND_X1 = 6, 54      # the island's land box
LAND_Y0, LAND_Y1 = 6, 37
SUMMIT_Y = 14                 # north of this: snowy scree; south: green village


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(WATER, 1, 1) for _ in range(W)] for _ in range(H)]   # the sea

    def put(x, y, mid, col=0, elev=3):
        if 0 <= x < W and 0 <= y < H:
            grid[y][x] = word(mid, col, elev)

    def forest(x, y):
        put(x, y, TREE_QUAD[(x % 2, y % 2)], col=1)

    def water(x, y):
        put(x, y, WATER, col=1, elev=1)

    def pool(x0, x1, y0, y1):
        for y in range(y0, y1):
            for x in range(x0, x1):
                water(x, y)

    def cabin(x, y, door_dx=1):           # a 3x2 plank cabin with a walkable door
        for dy in range(2):
            for dx in range(3):
                put(x + dx, y + dy, PLANK_M, col=1)
        put(x + door_dx, y + 2, SAND)     # the threshold

    def patch(x0, x1, y0, y1, tile):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, tile)

    # --- the island land: green village south, snowy scree north ------------
    for y in range(LAND_Y0, LAND_Y1):
        for x in range(LAND_X0, LAND_X1):
            put(x, y, SAND if y < SUMMIT_Y else GRASS)
    # a warm sand beach around the south + a shore lip all round
    for x in range(LAND_X0, LAND_X1):
        put(x, LAND_Y1 - 1, SAND); put(x, LAND_Y1 - 2, SAND)     # south beach
        put(x, LAND_Y0, SHORE_A if x % 2 == 0 else SHORE_B)      # north lip
    for y in range(LAND_Y0, LAND_Y1):
        put(LAND_X0, y, SHORE_A if y % 2 == 0 else SHORE_B)
        put(LAND_X1 - 1, y, SHORE_A if y % 2 == 0 else SHORE_B)

    # --- the ferry pier (south): you arrive here at (30,38) -----------------
    for y in range(LAND_Y1 - 1, 40):
        put(29, y, SAND); put(30, y, SAND); put(31, y, SAND)

    # --- the snowy summit (north): the thaw at its plainest -----------------
    pool(38, 45, 8, 11)                   # a thermokarst melt pond on the peak
    for (tx, ty) in ((11, 9), (14, 8), (17, 10), (12, 11), (47, 9), (45, 12)):
        forest(tx, ty)                    # the drunken forest, tilting
    patch(20, 28, 8, 12, ENCOUNTER)       # the last cold ground (encounters)

    # --- the thaw seeping into the village: a slump + a sinking cabin -------
    pool(11, 15, 16, 19)                  # meltwater where the village green was
    cabin(16, 16)                         # a cabin sinking toward the new pond

    # --- the Holiday Village: cabins around a central GIFT SQUARE -----------
    patch(24, 35, 24, 31, SAND)           # the gift square (the give economy)
    cabin(9, 22)                          # the elder's cabin (west)
    cabin(44, 22)                         # a villager cabin (east)
    cabin(38, 31)                         # a villager cabin (south-east)
    cabin(10, 31)                         # a villager cabin (south-west)
    # a little festive growth on the green
    for y in range(SUMMIT_Y, LAND_Y1 - 2):
        for x in range(LAND_X0 + 1, LAND_X1 - 1):
            r = (x * 5 + y * 3) % 17
            if r == 0 and grid[y][x] == word(GRASS):
                put(x, y, FLOWERS)

    # --- shore encounters (range shift: warm-water birds too far north) -----
    patch(48, 53, 30, 35, ENCOUNTER)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelDelibird")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(struct.pack("<4H", word(WATER, 1, 1), word(WATER, 1, 1),
                                                 word(WATER, 1, 1), word(WATER, 1, 1)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (sea)")


if __name__ == "__main__":
    main()
