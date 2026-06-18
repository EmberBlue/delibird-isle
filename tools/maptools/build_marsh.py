#!/usr/bin/env python3
"""Generate the Last Corridor's keystone marsh (§01/§04/§06 zone 8 -- the CLIMAX).

A small, unfragmented freshwater marsh at the heart of the deep wilderness --
the keystone habitat the whole region drains from, and it is dying. Where Wren
finds Dr. Heron alive, hand-cataloging the decline of her own falsified
prediction. Rebuilt on gTileset_General + gTileset_leob_dewford. 56x48. No edge
connection -- warped in from the Station.

Run from repo root: python3 tools/maptools/build_marsh.py
"""
import struct
from pathlib import Path

W, H = 56, 48

# gTileset_General primary (shared) + gTileset_leob_dewford secondary
GRASS = 1
FLOWERS = 4
SAND = 292
OCEAN = 368                     # the marsh water (clean, elev 1)
TALL_GRASS = 13
TREES = 579                     # deep-wilderness frame (blocked, elev 0)

OPEN_X0, OPEN_X1 = 26, 31           # the south trail in (from the Station)


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        if 0 <= x < W and 0 <= y < H:
            grid[y][x] = word(mid, col, elev)

    def water(x, y):
        put(x, y, OCEAN, col=0, elev=1)

    def pool(x0, x1, y0, y1):
        for y in range(y0, y1):
            for x in range(x0, x1):
                water(x, y)
        for x in range(x0, x1):
            put(x, y1, SAND)

    def patch(x0, x1, y0, y1, tile):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, tile)

    # --- the deep-wilderness frame, with the south trail in ----------------
    for y in range(H):
        for x in range(W):
            if OPEN_X0 <= x < OPEN_X1 and y >= H - 8:
                continue
            if x < 8 or x >= W - 8 or y < 8 or y >= H - 8:
                put(x, y, TREES, col=1, elev=0)
    for y in range(H - 8, H):
        for x in range(27, 30):
            put(x, y, SAND)

    # --- the marsh: reed flats (sparse flowers) and shallow water ----------
    for y in range(8, H - 8):
        for x in range(8, W - 8):
            if (x * 11 + y * 7) % 21 == 6:
                put(x, y, FLOWERS)
    pool(15, 27, 13, 19)                 # the central pool (Heron catalogs here)
    pool(31, 39, 25, 30)                 # an eastern pool
    for y in range(19, 31):              # the stream mouth (Poliwag gather, stuck)
        water(22, y); water(23, y)

    # --- the dying tells ---------------------------------------------------
    for x in range(33, 46):              # a drying channel gone to cracked mud
        put(x, 22, SAND); put(x, 23, SAND)
    patch(11, 19, 10, 12, SAND)          # a band of dead reeds (bare ground)
    for y in range(10, H - 8):           # the encroaching cleared edge (east)
        put(W - 9, y, SAND); put(W - 10, y, SAND)
    for x in range(W - 12, W - 8):       # survey-flagged clearing
        put(x, 14, SAND); put(x, 15, SAND)

    # --- tall grass (encounters: the thinning marsh guild) -----------------
    patch(10, 16, 22, 28, TALL_GRASS)
    patch(34, 42, 14, 19, TALL_GRASS)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelMarsh")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", *([word(TREES, col=1, elev=0)] * 4)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
