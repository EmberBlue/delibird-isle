#!/usr/bin/env python3
"""Generate the long bridge east of Delibird Isle (§07 Scenes 4-6).

The island connects to the mainland by one long wooden bridge -- the first
gate and first set-piece: the stuck Poliwag at the stream mouth below, the
poacher ambush, Hale's intervention. Rebuilt on gTileset_General +
gTileset_leob_dewford to match the isle (clean ocean, real plank deck) instead
of the old noisy seafoam grid. 60x24.

Geometry is unchanged from the original so the §07 cutscene movements and the
Isle/Station connections still line up exactly: deck at rows 10-12, Poliwag
embankment x24-32 / y13-16, west corridor + east landing at rows 9-13.

Run from repo root: python3 tools/maptools/build_bridge.py
"""
import struct
from pathlib import Path

W, H = 60, 24

# gTileset_General primary (shared) + gTileset_leob_dewford secondary
GRASS = 1
SAND = 292                       # beach / track sand
OCEAN = 368                      # open sea (clean waves, elev 1)
DECK = 440  # general plank deck; its art was TOP-layer (covered sprites) until the tileset fix -- see general/metatiles.bin 440 (now COVERED: water bottom, planks middle)                       # wooden plank bridge deck
TREES = 579                      # forest wall (blocked, elev 0)


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(OCEAN, col=0, elev=1) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        grid[y][x] = word(mid, col, elev)

    def deck(x, y):
        put(x, y, DECK)

    # --- west shoulder: forest wall with the corridor from the isle ---------
    # Corridor rows 9-13 align with the isle's east gap (offset 26).
    for y in range(H):
        for x in range(0, 8):
            if not (9 <= y <= 13):
                put(x, y, TREES, col=1, elev=0)
    for y in range(9, 14):          # grass apron
        for x in range(0, 8):
            put(x, y, GRASS)
    for y in range(10, 13):         # the sandy track onto the bridge
        for x in range(0, 8):
            put(x, y, SAND)

    # --- the long bridge (rows 10-12, x 8-46) -------------------------------
    for x in range(8, 47):
        for y in range(10, 13):
            deck(x, y)

    # --- stream-mouth embankment below the bridge (Poliwag wait, mid-span) --
    for y in range(13, 17):
        for x in range(24, 33):
            put(x, y, SAND)

    # --- east landing: grass headland, track onward, forest beyond ----------
    for y in range(8, 17):
        for x in range(47, W):
            put(x, y, GRASS)
    for y in range(10, 13):
        for x in range(47, 56):
            put(x, y, SAND)
    for y in range(H):
        for x in range(56, W):
            if not (9 <= y <= 13):
                put(x, y, TREES, col=1, elev=0)
    for y in range(0, 8):           # north-east forest cap
        for x in range(48, W):
            put(x, y, TREES, col=1, elev=0)
    for y in range(17, H):          # south-east forest cap
        for x in range(48, W):
            put(x, y, TREES, col=1, elev=0)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelBridge")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", *([word(OCEAN, col=0, elev=1)] * 4)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin")


if __name__ == "__main__":
    main()
