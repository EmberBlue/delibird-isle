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
CANOPY_A, CANOPY_B = 12, 13     # dense tree canopy mass
TRUNK_A, TRUNK_B = 20, 21       # canopy bottom edge w/ trunks on grass
SAND = 261                      # plain sand (also used as the town's track)
SHORE_A, SHORE_B = 256, 257     # sand above -> water below edge
WATER = 282                     # open sea
PLANK_L, PLANK_M, PLANK_R = 313, 314, 315   # wooden pier planks
POST_A, POST_B = 309, 310       # pier pilings (pair)
TREE_OVERHANG_A, TREE_OVERHANG_B = 266, 267  # tree hanging over water


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        grid[y][x] = word(mid, col, elev)

    # --- north forest wall (rows 0-7 canopy, row 8 trunk edge) -------------
    for y in range(0, 8):
        for x in range(W):
            put(x, y, CANOPY_A if (x + y) % 2 == 0 else CANOPY_B, col=1)
    for x in range(W):
        put(x, 8, TRUNK_A if x % 2 == 0 else TRUNK_B, col=1)

    # --- side forest frames (rows 9-41) -------------------------------------
    for y in range(9, 42):
        for x in (0, 1, 2, 80, 81, 82):
            put(x, y, CANOPY_A if (x + y) % 2 == 0 else CANOPY_B, col=1)

    # --- grass field with sparse decoration (rows 9-39) ---------------------
    for y in range(9, 40):
        for x in range(3, 80):
            r = (x * 7 + y * 13) % 71
            if r == 0:
                put(x, y, FLOWERS)
            elif r in (17, 44):
                put(x, y, TUFT_A if (x + y) % 2 else TUFT_B)
            elif r == 60 and y < 36:
                put(x, y, BUSH, col=1)

    # --- sand shoreline strip (rows 40-43) ----------------------------------
    for y in range(40, 44):
        for x in range(3, 80):
            put(x, y, SAND)

    # --- shore edge (row 44) and open sea (rows 45-59) ----------------------
    for x in range(W):
        put(x, 44, SHORE_A if x % 2 == 0 else SHORE_B, col=1)
    for y in range(45, H):
        for x in range(W):
            put(x, y, WATER, col=1, elev=1)

    # trees overhanging the water, sparse accents
    for x in (12, 61):
        put(x, 44, TREE_OVERHANG_A, col=1)
        put(x + 1, 44, TREE_OVERHANG_B, col=1)

    # --- the ferry pier (x 40-42), planks from the sand into the sea --------
    for y in range(43, 54):
        put(40, y, PLANK_L)
        put(41, y, PLANK_M)
        put(42, y, PLANK_R)
    # pilings at the pier's end
    put(40, 54, POST_A, col=1, elev=1)
    put(41, 54, POST_B, col=1, elev=1)
    put(42, 54, POST_A, col=1, elev=1)

    # --- sandy track: pier head north into town, then a plaza ---------------
    for y in range(9, 43):
        put(41, y, SAND)
    for x in range(36, 47):           # small plaza mid-town
        for y in range(22, 27):
            put(x, y, SAND)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelIsle")
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    # Border: endless tree canopy. The forest frames the map north/east/west,
    # so the repeating out-of-bounds block must be canopy, not sea — the only
    # open edge is south, and the pier never sees past the water rows
    # (southmost standable y=53; view reaches y=58 < H). Matches the in-map
    # (x+y) parity checker.
    border = [CANOPY_A, CANOPY_B, CANOPY_B, CANOPY_A]
    (out / "border.bin").write_bytes(
        struct.pack("<4H", *[word(m, col=1) for m in border]))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (canopy)")


if __name__ == "__main__":
    main()
