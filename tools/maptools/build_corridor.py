#!/usr/bin/env python3
"""Generate the Old Service Cut / Hollowbend Spur (§08 Act V).

The corridor that shrank: a long, quiet route where the forest thins
unnaturally, a cracked service road half-reclaimed by weeds, ending at the
culvert that forced a braided stream into a single fast channel. Rebuilt on
gTileset_General + gTileset_leob_dewford to match the chain. 70x20.

Geometry preserved (west corridor from the wetlands, north connector to the
floodbasin, the road, the drainage cuts, the culvert) so events + connections
line up.

Run from repo root: python3 tools/maptools/build_corridor.py
"""
import struct
from pathlib import Path

W, H = 70, 20

# gTileset_General primary (shared) + gTileset_leob_dewford secondary
GRASS = 1
FLOWERS = 4
SAND = 292                       # the cracked service road / track
OCEAN = 368                      # water (drainage cuts, the culvert channel)
TALL_GRASS = 13
TREES = 579                      # forest wall (blocked, elev 0)


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        grid[y][x] = word(mid, col, elev)

    def forest(x, y):
        put(x, y, TREES, col=1, elev=0)

    # north/south forest walls -- dense west, visibly thinning east. Carve a
    # corridor at x4-9 for the connector up to the Floodbasin.
    for y in range(0, 6):
        for x in range(W):
            if 4 <= x <= 9:
                continue
            if x < 20 or (x < 44 and (x * 7 + y * 3) % 9 < 5) or (x >= 44 and (x * 7 + y * 3) % 9 < 2):
                forest(x, y)
    for y in range(0, 9):           # connector track up to the floodbasin
        for x in range(5, 9):
            put(x, y, SAND)
    for y in range(14, H):
        for x in range(W):
            if x < 20 or (x < 44 and (x * 5 + y * 3) % 9 < 5) or (x >= 44 and (x * 5 + y * 3) % 9 < 2):
                forest(x, y)
    # west entry frame except the corridor (rows 8-12)
    for y in range(H):
        for x in range(0, 8):
            if not (8 <= y <= 12):
                forest(x, y)
    for y in range(8, 13):
        for x in range(0, 8):
            put(x, y, GRASS)

    # the old service road (rows 9-11): packed sand
    for x in range(0, 64):
        for y in (9, 10, 11):
            put(x, y, SAND)

    # drainage cuts: sharp little channels slicing south
    for cx in (26, 36):
        for y in range(12, 16):
            put(cx, y, OCEAN, col=0, elev=1)
        put(cx, 16, SAND)

    # sparse tall grass in the thinned stretches (degraded; fewer encounters)
    for (x0, x1, y0, y1) in ((24, 34, 6, 9), (42, 52, 12, 14), (50, 58, 6, 8)):
        for y in range(y0, y1):
            for x in range(x0, x1):
                if not (9 <= y <= 11):
                    put(x, y, TALL_GRASS)

    # the culvert: the braided stream forced into one channel under the road.
    for y in range(0, H):
        for x in range(64, 68):
            put(x, y, OCEAN, col=0, elev=1)
    for x in range(64, 68):         # the embankment carries the road over it
        for y in (9, 10, 11):
            put(x, y, SAND)
    # far bank: a sliver of grass on the east edge (the excluded side)
    for y in range(0, H):
        put(68, y, GRASS, col=1)
        put(69, y, GRASS, col=1)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelCorridor")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", *([word(TREES, col=1, elev=0)] * 4)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
