#!/usr/bin/env python3
"""Add the Delibird Isle snow-patch metatiles to the AzaleaTown secondary tileset.

The Johto tilesets have no snow. The Snowy Summit is drawn as grass, rock and
thaw ponds with the LAST patches of snow on them: thirteen metatiles (a full
snow tile, four straight melt edges, four outer and four inner corners) built
from five new 8x8 tiles painted into blank cells of tiles.png. They use the
primary palette 3 (whites / pale blues / the base grass green), occupy the
twelve empty metatile slots 564-575 plus 601, and get MB_NORMAL (the empties
carried MB_BATTLE_PYRAMID_WARP, which would have been a warp trap).

Idempotent: run after any tiles.png / metatiles.bin change of the tileset.
  python3 tools/skald/snowtiles.py
"""
import struct
from pathlib import Path
from PIL import Image

ROOT = Path(__file__).resolve().parents[2]
TS = ROOT / "data/tilesets/secondary/azaleatown"
GRASS = ROOT / "data/tilesets/primary/johtogeneral"

PAL = 3               # primary palette 3: 1 white, 2 pale blue, 3 grey-blue, 15 grass green
WHITE, PALE, SHADE, GRASS_IDX = 1, 2, 3, 15
TILE_BASE = 512 + 216  # first of the eight blank tiles in the last row of tiles.png
SLOTS = list(range(564, 576)) + [601]

# the grass metatile 1's four quadrant tiles (TL TR BL BR), from the primary
def grass_quads():
    mb = (GRASS / "metatiles.bin").read_bytes()
    w = struct.unpack_from("<12H", mb, 1 * 24)
    return list(w[4:8])          # middle layer words (tile | pal<<12)

def tile_full():
    px = [[WHITE] * 8 for _ in range(8)]
    for (x, y) in ((1, 2), (5, 1), (3, 5), (6, 6), (0, 7)):
        px[y][x] = PALE
    return px

def tile_edge_n():
    """snow above, grass below; a gentle wave that returns to row 5 at both ends
    so the corner tiles (D, E) line up with it."""
    px = [[WHITE] * 8 for _ in range(8)]
    cut = [5, 5, 4, 4, 4, 5, 5, 5]   # first grass row per column
    for x in range(8):
        for y in range(8):
            if y >= cut[x]:
                px[y][x] = GRASS_IDX
            elif y == cut[x] - 1:
                px[y][x] = SHADE
            elif y == cut[x] - 2:
                px[y][x] = PALE
    return px

def tile_edge_w():
    """snow left, grass right (transpose of the north edge)."""
    n = tile_edge_n()
    return [[n[x][y] for x in range(8)] for y in range(8)]

def tile_outer():
    """grass at top-left, snow at bottom-right: the patch's outer corner. The
    straight parts match the edge tiles (grass 3 px, shade, pale, white)."""
    px = [[GRASS_IDX] * 8 for _ in range(8)]
    for y in range(8):
        for x in range(8):
            if x >= 5 and y >= 5: px[y][x] = WHITE
            elif (x == 4 and y >= 4) or (y == 4 and x >= 4): px[y][x] = PALE
            elif (x == 3 and y >= 3) or (y == 3 and x >= 3): px[y][x] = SHADE
    px[3][3] = GRASS_IDX; px[4][4] = SHADE          # round the corner a little
    return px

def tile_inner():
    """snow everywhere except a grass bite at top-left: the patch's inner corner."""
    px = [[WHITE] * 8 for _ in range(8)]
    for y in range(8):
        for x in range(8):
            if x <= 2 and y <= 2: px[y][x] = GRASS_IDX
            elif (x == 3 and y <= 3) or (y == 3 and x <= 3): px[y][x] = SHADE
            elif (x == 4 and y <= 4) or (y == 4 and x <= 4): px[y][x] = PALE
    px[2][2] = SHADE                                   # round the bite a little
    return px

def main():
    im = Image.open(TS / "tiles.png")
    assert im.mode == "P", im.mode
    px = im.load()
    tiles = [tile_full(), tile_edge_n(), tile_edge_w(), tile_outer(), tile_inner()]
    for i, t in enumerate(tiles):
        rel = TILE_BASE - 512 + i
        x0, y0 = (rel % 16) * 8, (rel // 16) * 8
        for y in range(8):
            for x in range(8):
                px[x0 + x, y0 + y] = t[y][x]
    im.save(TS / "tiles.png")

    A, B, C, D, E = [TILE_BASE + i for i in range(5)]
    HF, VF = 1 << 10, 1 << 11
    def w(tile, h=False, v=False): return tile | (HF if h else 0) | (VF if v else 0) | (PAL << 12)
    g = grass_quads()  # TL TR BL BR of plain grass
    # quadrants are TL TR BL BR
    defs = {
        564: [w(A), w(A), w(A), w(A)],                                   # full snow
        565: [w(B), w(B), g[2], g[3]],                                   # edge: snow N, grass S
        566: [g[0], g[1], w(B, v=True), w(B, v=True)],                   # edge: grass N, snow S
        567: [w(C), g[1], w(C), g[3]],                                   # edge: snow W, grass E
        568: [g[0], w(C, h=True), g[2], w(C, h=True)],                   # edge: grass W, snow E
        569: [w(D), w(B, v=True), w(C, h=True), w(A)],                   # outer corner NW of a patch
        570: [w(B, v=True), w(D, h=True), w(A), w(C)],                   # outer corner NE
        571: [w(C, h=True), w(A), w(D, v=True), w(B)],                   # outer corner SW
        572: [w(A), w(C), w(B), w(D, h=True, v=True)],                   # outer corner SE
        573: [w(E), w(A), w(A), w(A)],                                   # inner corner: grass bite NW
        574: [w(A), w(E, h=True), w(A), w(A)],                           # inner corner: bite NE
        575: [w(A), w(A), w(E, v=True), w(A)],                           # inner corner: bite SW
        601: [w(A), w(A), w(A), w(E, h=True, v=True)],                   # inner corner: bite SE
    }
    mb = bytearray((TS / "metatiles.bin").read_bytes())
    ab = bytearray((TS / "metatile_attributes.bin").read_bytes())
    for mid, quads in defs.items():
        i = mid - 512
        words = [0, 0, 0, 0] + quads + [0, 0, 0, 0]
        struct.pack_into("<12H", mb, i * 24, *words)
        struct.pack_into("<H", ab, i * 2, 0x0000)
    (TS / "metatiles.bin").write_bytes(mb)
    (TS / "metatile_attributes.bin").write_bytes(ab)
    print(f"snow: 5 tiles at {TILE_BASE}-{TILE_BASE+4}, metatiles {sorted(defs)} written")

if __name__ == "__main__":
    main()
