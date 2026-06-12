#!/usr/bin/env python3
"""Generate the Skaldmere dock town map (§07 Scene 1 — arrival pier).

Writes data/layouts/ParcelIsle/map.bin + border.bin (83x60, frp_general +
frp_seafoam_islands). The town: forest wall north, grass field with a few
homes (v1.1), sandy track, sand shoreline, open sea south, and a wooden
ferry pier where the player arrives. Cold-coastal, not snowy (§07).

Metatile IDs were identified empirically from the rendered contact sheet
(tools/maptools/metatile_sheet.py). Map cell word = (elev<<12)|(col<<10)|id.

Run from repo root:  python3 tools/maptools/build_dock_town.py
Then rebuild the ROM (map data is packed at build time).
"""
import struct
from pathlib import Path

W, H = 83, 60

# --- frp_general metatile IDs (verified on the contact sheet) ---------------
GRASS = 1
TUFT_A, TUFT_B = 8, 9          # decorative grass tufts
FLOWERS = 4
BUSH = 5                        # round bush (blocked)
SAND = 261                      # plain sand (also used as the town's track)
SHORE_A, SHORE_B = 256, 257     # sand above -> water below edge
WATER = 282                     # open sea
PLANK_L, PLANK_M, PLANK_R = 313, 314, 315   # wooden pier planks
POST_A, POST_B = 309, 310       # pier pilings (pair)

# A *complete* tree is four metatiles assembled by quadrant; tiling the
# region by (x%2, y%2) parity makes whole trees repeat seamlessly into a
# forest mass (verified on the contact sheet + in-game). Anchored to the
# global grid (0,0) so adjacent forest regions always line up.
TREE_QUAD = {(0, 0): 28, (1, 0): 29, (0, 1): 36, (1, 1): 37}


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        grid[y][x] = word(mid, col, elev)

    def forest(x, y):
        # complete-tree fill, blocked; parity keeps trees whole across the region
        put(x, y, TREE_QUAD[(x % 2, y % 2)], col=1)

    # --- forest deep enough that the camera can never see past it ----------
    # The view extends 7 tiles past the player horizontally (4 up), so any
    # frame the player can stand beside must be >= 8 tiles deep, and every
    # forest region is even-aligned so quadrant parity yields whole trees.
    # North wall: rows 0-7. Side frames: x 0-7 and x 74-81 (x82 stays sea-
    # adjacent beyond view range), rows 8-39.
    for y in range(0, 8):
        for x in range(W):
            forest(x, y)
    for y in range(8, 40):
        for x in list(range(0, 8)) + list(range(74, 83)):
            if 74 <= x and 36 <= y <= 38:
                continue            # east corridor: the way to the long bridge
            forest(x, y)

    # --- grass field with sparse decoration (rows 8-39) ---------------------
    for y in range(8, 40):
        for x in range(8, 74):
            r = (x * 7 + y * 13) % 71
            if r == 0:
                put(x, y, FLOWERS)
            elif r in (17, 44):
                put(x, y, TUFT_A if (x + y) % 2 else TUFT_B)
            elif r == 60 and y < 36:
                put(x, y, BUSH, col=1)

    # --- sand shoreline strip (rows 40-43), full-width open beach ----------
    # The beach spans the whole south coast; the only place the sea border
    # is visible is past actual ocean/beach, where it reads as ocean.
    for y in range(40, 44):
        for x in range(W):
            put(x, y, SAND)

    # --- shore edge (row 44) and open sea (rows 45-59) ----------------------
    for x in range(W):
        put(x, 44, SHORE_A if x % 2 == 0 else SHORE_B, col=1)
    for y in range(45, H):
        for x in range(W):
            put(x, y, WATER, col=1, elev=1)

    # --- the ferry pier (x 40-42), planks from the sand into the sea --------
    for y in range(43, 54):
        put(40, y, PLANK_L)
        put(41, y, PLANK_M)
        put(42, y, PLANK_R)
    # pilings at the pier's end
    put(40, 54, POST_A, col=1, elev=1)
    put(41, 54, POST_B, col=1, elev=1)
    put(42, 54, POST_A, col=1, elev=1)

    # --- sandy track: pier head north into town, then a plaza ---------------    # --- tall grass (wild encounters; §06 saltmarsh-fringe guild) -----------
    for (x0, x1, y0, y1) in ((12, 21, 12, 18), (52, 62, 13, 19),
                             (55, 66, 29, 35), (13, 22, 28, 34)):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, 12)        # MB_TALL_GRASS


    for y in range(9, 43):
        put(41, y, SAND)
    for x in range(36, 47):           # small plaza mid-town
        for y in range(22, 27):
            put(x, y, SAND)
    for x in range(41, 83):           # east track: town to the long bridge
        put(x, 37, SAND)
    for x in range(74, 83):           # grass apron through the forest gap
        put(x, 36, GRASS)
        put(x, 38, GRASS)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelIsle")
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    # Border: open sea. Plain water tiles cleanly to itself in a 2x2 block,
    # and "island town surrounded by ocean" is internally coherent past
    # any edge - including where the forest meets it on the west/east.
    # The canopy-mass alternative reads as bumpy mush when tiled (it's only
    # the top half of a real tree); the FRP general tileset has no clean
    # 2x2 "proper tree" block that tiles to itself as endless forest.
    (out / "border.bin").write_bytes(
        struct.pack("<4H", *([word(WATER, col=1, elev=1)] * 4)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (water)")


if __name__ == "__main__":
    main()
