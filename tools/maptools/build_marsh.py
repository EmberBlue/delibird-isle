#!/usr/bin/env python3
"""Generate the Last Corridor's keystone marsh (§01/§04/§06 zone 8 -- the CLIMAX).

A small, unfragmented freshwater marsh at the heart of the deep wilderness --
the keystone habitat the whole region drains from, and it is dying. Not from one
insult but from cumulative upstream pressure and an encroaching cleared edge.
Its keystone-indicator is the Poliwag line: the same frogs from the prologue
bridge, the species Dr. Heron's noble lie once "saved," now failing here.

This is where Wren finds Dr. Heron alive, in voluntary exile, hand-cataloging
the decline of her own falsified prediction. The survey is the final credential;
the testimony is the ending. It mirrors the wetland where Sketch died (§04).

56x48, frp_general + seafoam. No edge connection -- warped in from the Station
(Hale walks the player to the threshold once the Coastal cert is earned).

Run from repo root: python3 tools/maptools/build_marsh.py
"""
import struct
from pathlib import Path

W, H = 56, 48

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

OPEN_X0, OPEN_X1 = 26, 31           # the south trail in (from the Station)


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

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
        for x in range(x0, x1):
            put(x, y1, SHORE_A if x % 2 == 0 else SHORE_B, col=1)

    def patch(x0, x1, y0, y1, tile):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, tile)

    # --- the deep-wilderness frame, with the south trail in -----------------
    for y in range(H):
        for x in range(W):
            if OPEN_X0 <= x < OPEN_X1 and y >= H - 8:
                continue
            if x < 8 or x >= W - 8 or y < 8 or y >= H - 8:
                forest(x, y)
    for y in range(H - 8, H):            # the trail
        for x in range(27, 30):
            put(x, y, SAND)

    # --- the marsh: reed flats and shallow water --------------------------
    for y in range(8, H - 8):
        for x in range(8, W - 8):
            r = (x * 11 + y * 7) % 21
            if r in (0, 11):
                put(x, y, TUFT_A if (x + y) % 2 else TUFT_B)
            elif r == 6:
                put(x, y, FLOWERS)
    pool(15, 27, 13, 19)                 # the central pool (Heron catalogs here)
    pool(31, 39, 25, 30)                 # an eastern pool
    # the stream mouth -- the Poliwag gather here, stuck (the prologue echo)
    for y in range(19, 31):
        water(22, y); water(23, y)

    # --- the dying tells ---------------------------------------------------
    # a drying channel: a streambed gone to cracked mud (sand) where water was
    for x in range(33, 46):
        put(x, 22, SAND); put(x, 23, SAND)
    # a band of dead reeds along the north (straw-pale: bare sand among grass)
    patch(11, 19, 10, 12, SAND)
    # the encroaching edge: a cleared, graded strip biting in from the east
    for y in range(10, H - 8):
        put(W - 9, y, SAND); put(W - 10, y, SAND)
    for x in range(W - 12, W - 8):       # survey-flagged clearing
        put(x, 14, SAND); put(x, 15, SAND)

    # --- tall grass (encounters: the thinning marsh guild) ----------------
    patch(10, 16, 22, 28, ENCOUNTER)
    patch(34, 42, 14, 19, ENCOUNTER)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelMarsh")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", word(28, 1), word(29, 1), word(36, 1), word(37, 1)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
