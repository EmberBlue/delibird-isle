#!/usr/bin/env python3
"""Generate Delibird Isle -- the arrival town (§07 Scene 1).

A real coastal town now, not a tile-grid: green commons, dirt paths, a sand
beach where the ferry lands, open sea south, and iconic buildings (a Pokemon
Center for real healing, the shuttered lab, the lodging, town houses) stamped
*verbatim* from Dewford so they render correctly on the same tileset
(gTileset_General + gTileset_leob_dewford).

Kept at 83x60 so the existing right-connection to the long bridge (offset 26)
and the ferry-arrival/heal coordinates stay valid. Building footprints and
terrain IDs were read off data/layouts/DewfordTown/map.bin and OldaleTown
(shared primary) -- see tools/maptools for the decoders.

Run from repo root:  python3 tools/maptools/build_dock_town.py
"""
import struct
from pathlib import Path

W, H = 83, 60

# --- terrain metatiles -------------------------------------------------------
# Primary (gTileset_General, id < 512) -- shared with every secondary:
GRASS = 1                       # green commons (walkable)
PATH = 473                      # packed dirt path (walkable)
# Secondary (gTileset_leob_dewford):
SAND = 292                      # beach / track sand (walkable)
TALL_GRASS = 13                 # wild-encounter grass (walkable)
TREES = 579                     # forest wall (blocked, elev 0)
OCEAN = 368                     # open sea (surf water, elev 1)


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


# --- building stamps, copied verbatim from Dewford --------------------------
# (src_x, src_y, w, h, door_dx, door_dy) in DewfordTown/map.bin. Copying the
# full 16-bit word (mid|collision|elevation) reproduces each building exactly.
DEW_W, DEW_H = 20, 20
_dew = struct.unpack(
    f"<{DEW_W*DEW_H}H", Path("data/layouts/DewfordTown/map.bin").read_bytes())

POKECENTER = (1, 7, 4, 4, 1, 3)     # red-roof Center; door tile at rel (1,3)
GYMHOUSE = (5, 13, 6, 5, 3, 4)      # the gym shell (used for the future gym)
HOUSE = (16, 11, 4, 4, 1, 3)        # clean 4x4 town house


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        grid[y][x] = word(mid, col, elev)

    def fill(x0, x1, y0, y1, mid, col=0, elev=3):
        for y in range(y0, y1):
            for x in range(x0, x1):
                grid[y][x] = word(mid, col, elev)

    def stamp(stampdef, ax, ay):
        """Place a building so its door lands at world (ax, ay); copy words
        verbatim from Dewford. Returns the door world coordinate."""
        sx, sy, w, h, ddx, ddy = stampdef
        ox, oy = ax - ddx, ay - ddy
        for j in range(h):
            for i in range(w):
                grid[oy + j][ox + i] = _dew[(sy + j) * DEW_W + (sx + i)]
        return (ax, ay)

    # --- the isle: forest wall inland, open sea + beach to the south --------
    # You arrive by ferry onto the south beach; forest frames the north/west/
    # east (the bridge punches east at y36-38 toward the station). A sand
    # fringe softens the tree line.
    fill(0, W, 50, H, OCEAN, col=0, elev=1)         # open sea (south)
    fill(0, W, 44, 50, SAND)                        # south beach (ferry lands)
    fill(0, W, 0, 3, TREES, col=1, elev=0)          # north forest wall
    fill(0, 3, 0, 44, TREES, col=1, elev=0)         # west forest wall
    fill(W - 3, W, 0, 44, TREES, col=1, elev=0)     # east forest wall
    fill(3, 6, 3, 44, SAND)                         # west sand fringe
    fill(W - 6, W - 3, 3, 44, SAND)                 # east sand fringe
    fill(3, W - 3, 3, 6, SAND)                      # north sand fringe
    # east exit to the bridge: punch a dirt path through the forest wall
    fill(W - 6, W, 36, 39, PATH)

    # --- dirt paths: the town's spine ---------------------------------------
    fill(39, 43, 22, 49, PATH)                      # beach -> plaza promenade
    fill(28, 58, 27, 31, PATH)                      # central plaza (E-W)
    fill(28, 58, 22, 23, PATH)                      # north plaza edge
    for x in range(56, W - 3):                      # plaza -> east bridge path
        put(x, 37, PATH)
    fill(56, 58, 31, 38, PATH)                      # plaza down to the east path
    fill(39, 43, 37, 38, PATH)                      # link promenade to east path

    # --- buildings ----------------------------------------------------------
    pc_door = stamp(POKECENTER, 33, 26)             # Pokemon Center (heals)
    lab_door = stamp(HOUSE, 47, 26)                 # the shuttered lab
    lodging_door = stamp(HOUSE, 52, 21)             # the lodging
    stamp(HOUSE, 30, 20)                            # town house (decor)
    stamp(HOUSE, 62, 26)                            # town house (decor)

    # a stub of path in front of each enterable door so you can reach it
    for (dx, dy) in (pc_door, lab_door, lodging_door):
        put(dx, dy + 1, PATH)

    # --- tall grass (wild encounters; the saltmarsh-fringe guild, §06) ------
    for (x0, x1, y0, y1) in ((9, 19, 13, 20), (63, 72, 13, 21), (9, 18, 33, 41)):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, TALL_GRASS)

    return grid, dict(pc=pc_door, lab=lab_door, lodging=lodging_door)


def main():
    grid, doors = build()
    out = Path("data/layouts/ParcelIsle")
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    # Border: open sea (the isle sits in ocean; off-map reads as water).
    (out / "border.bin").write_bytes(
        struct.pack("<4H", *([word(OCEAN, col=0, elev=1)] * 4)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin")
    print("door coords:", doors)


if __name__ == "__main__":
    main()
