#!/usr/bin/env python3
"""Generate Delibird Isle (§01/§06/§09 zone 6 -- Chapter 5, the interlude).

The title location: festival cheer over an irreversible permafrost thaw. A warm
beach + ferry pier south, the holiday village + gift square at the centre, the
snowy summit (thermokarst pond, drunken forest, a sinking cabin) north. Rebuilt
on gTileset_General + gTileset_leob_dewford. 60x44. No edge connection -- ferry
warp in/out from ParcelIsle.

Run from repo root: python3 tools/maptools/build_delibird.py
"""
import struct
from pathlib import Path

W, H = 60, 44

# gTileset_General primary (shared) + gTileset_leob_dewford secondary
GRASS = 1
FLOWERS = 4
SAND = 292
OCEAN = 368                     # the sea / melt ponds (clean, elev 1)
DECK = 440  # general plank deck; its art was TOP-layer (covered sprites) until the tileset fix -- see general/metatiles.bin 440 (now COVERED: water bottom, planks middle)                      # village cabins
TALL_GRASS = 13
TREES = 579                     # forest (blocked, elev 0)

LAND_X0, LAND_X1 = 6, 54
LAND_Y0, LAND_Y1 = 6, 37
SUMMIT_Y = 14


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(OCEAN, 0, 1) for _ in range(W)] for _ in range(H)]   # the sea

    def put(x, y, mid, col=0, elev=3):
        if 0 <= x < W and 0 <= y < H:
            grid[y][x] = word(mid, col, elev)

    def water(x, y):
        put(x, y, OCEAN, col=0, elev=1)

    def pool(x0, x1, y0, y1):
        for y in range(y0, y1):
            for x in range(x0, x1):
                water(x, y)

    def cabin(x, y, door_dx=1):           # a 3x2 plank cabin with a walkable door
        for dy in range(2):
            for dx in range(3):
                put(x + dx, y + dy, DECK, col=1)
        put(x + door_dx, y + 2, SAND)

    def patch(x0, x1, y0, y1, tile):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, tile)

    # --- the island land: green village south, pale scree north ------------
    for y in range(LAND_Y0, LAND_Y1):
        for x in range(LAND_X0, LAND_X1):
            put(x, y, SAND if y < SUMMIT_Y else GRASS)
    for x in range(LAND_X0, LAND_X1):
        put(x, LAND_Y1 - 1, SAND); put(x, LAND_Y1 - 2, SAND)     # south beach
        put(x, LAND_Y0, SAND)                                    # north lip
    for y in range(LAND_Y0, LAND_Y1):
        put(LAND_X0, y, SAND)
        put(LAND_X1 - 1, y, SAND)

    # --- the ferry pier (south): you arrive here at (30,38) ----------------
    for y in range(LAND_Y1 - 1, 40):
        put(29, y, SAND); put(30, y, SAND); put(31, y, SAND)

    # --- the snowy summit (north): the thaw at its plainest ----------------
    pool(38, 45, 8, 11)                   # thermokarst melt pond on the peak
    for (tx, ty) in ((11, 9), (14, 8), (17, 10), (12, 11), (47, 9), (45, 12)):
        put(tx, ty, TREES, col=1, elev=0)  # the drunken forest, tilting
    patch(20, 28, 8, 12, TALL_GRASS)      # the last cold ground (encounters)

    # --- the thaw seeping into the village: a slump + a sinking cabin ------
    pool(11, 15, 16, 19)
    cabin(16, 16)                         # a cabin sinking toward the new pond

    # --- the Holiday Village: cabins around a central GIFT SQUARE -----------
    patch(24, 35, 24, 31, SAND)           # the gift square (the give economy)
    cabin(9, 22)
    cabin(44, 22)
    cabin(38, 31)
    cabin(10, 31)
    for y in range(SUMMIT_Y, LAND_Y1 - 2):
        for x in range(LAND_X0 + 1, LAND_X1 - 1):
            if (x * 5 + y * 3) % 17 == 0 and grid[y][x] == word(GRASS):
                put(x, y, FLOWERS)

    # --- shore encounters (range shift: warm-water birds too far north) ----
    patch(48, 53, 30, 35, TALL_GRASS)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelDelibird")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", *([word(OCEAN, col=0, elev=1)] * 4)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (sea)")


if __name__ == "__main__":
    main()
