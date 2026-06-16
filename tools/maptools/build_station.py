#!/usr/bin/env python3
"""Generate the mainland ranger station + Holding Meadow (§08 Acts I-II).

East of the long bridge: the first Climate Corps field station and the Holding
Meadow, a designed ecosystem where the §08 partner-recognition scene plays.
Rebuilt on gTileset_General + gTileset_leob_dewford to match the isle/bridge
(clean water channels, a real station building) instead of the old seafoam
grid. 50x40.

Geometry (forest frame, west corridor rows 13-17, north corridor x23-27, the
yard, the meadow decoration + channels) is preserved so all 16 object events
and the recognition cutscene still line up. The one addition is the station
office building in the yard.

Run from repo root: python3 tools/maptools/build_station.py
"""
import struct
from pathlib import Path

W, H = 50, 40

# gTileset_General primary (shared) + gTileset_leob_dewford secondary
GRASS = 1
FLOWERS = 4
SAND = 292                       # packed yard / track sand
OCEAN = 368                      # water channel (clean, elev 1)
TALL_GRASS = 13
TREES = 579                      # forest wall (blocked, elev 0)

# station office building, copied verbatim from Dewford (door at rel (1,3))
DEW_W = 20
_dew = struct.unpack(
    f"<{DEW_W*DEW_W}H", Path("data/layouts/DewfordTown/map.bin").read_bytes())
HOUSE = (16, 11, 4, 4, 1, 3)


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        grid[y][x] = word(mid, col, elev)

    def channel(x0, x1, y0, y1):
        """Shallow water channel with a sand lip on its south edge."""
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, OCEAN, col=0, elev=1)
        for x in range(x0, x1):
            put(x, y1, SAND)

    def stamp(stampdef, ax, ay):
        sx, sy, w, h, ddx, ddy = stampdef
        ox, oy = ax - ddx, ay - ddy
        for j in range(h):
            for i in range(w):
                grid[oy + j][ox + i] = _dew[(sy + j) * DEW_W + (sx + i)]

    # --- forest frame, except the west corridor (rows 13-17) and the north
    #     corridor to the wetlands (x 23-27) ---------------------------------
    for y in range(H):
        for x in range(W):
            if x < 8 and 13 <= y <= 17:
                continue
            if 23 <= x <= 27 and y < 8:
                continue
            if x < 8 or x >= W - 8 or y < 8 or y >= H - 8:
                put(x, y, TREES, col=1, elev=0)
    for y in range(0, 8):           # north corridor to the wetlands
        for x in range(23, 28):
            put(x, y, GRASS)
    for y in range(0, 8):
        for x in range(24, 27):
            put(x, y, SAND)

    # --- track in from the bridge (rows 14-16) ------------------------------
    for y in range(13, 18):
        for x in range(0, 12):
            put(x, y, GRASS)
    for y in range(14, 17):
        for x in range(0, 12):
            put(x, y, SAND)

    # --- station yard (packed sand) + the station office --------------------
    for y in range(11, 21):
        for x in range(11, 21):
            put(x, y, SAND)
    stamp(HOUSE, 18, 14)            # office, door at (18,14); Hale stands west

    # --- the Holding Meadow: irregular clearing, sparse decoration ----------
    for y in range(8, 32):
        for x in range(21, 42):
            r = (x * 11 + y * 7) % 53
            if r == 0:
                put(x, y, FLOWERS)

    channel(26, 30, 10, 12)         # the shaded pool (Lotad)
    channel(33, 35, 14, 24)         # the long shallow channel Rin tends
    channel(37, 41, 25, 28)         # the deeper channel (Carvanha)

    # tall grass on the meadow fringe (wild encounters)
    for (x0, x1, y0, y1) in ((9, 16, 22, 29), (28, 36, 28, 31), (37, 41, 14, 19)):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, TALL_GRASS)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelStation")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", *([word(TREES, col=1, elev=0)] * 4)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
