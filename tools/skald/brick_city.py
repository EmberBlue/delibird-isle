#!/usr/bin/env python3
"""The Brick City kit's few extra metatiles (data/tilesets/secondary/brick_city).

The kit (Ekat99's Brick City, imported to pokeemerald by Kumatora; see the CREDITS.md beside it)
ships a quay wall on three sides of the water, lamp heads over kerbs only, and plank pieces for a
deck two rows deep. Saltwick needs the fourth side, a lamp on open flagstones and a one-row plank
walk. Each is put together from tile entries the kit already has (tools/skald/mtile.py) and
appended after the kit's own 375 metatiles, in this order, so their ids are fixed:

  887 quay_w      water with the quay wall on its west side (758 mirrored)
  888 quay_ne     water in a corner of the quay: wall to the north and to the east
  889 quay_nw     the same, north and west
  890 lamp_flag   a lamp's head over plain flagstones (top layer: the player walks behind it)
  891 plank_row   a plank walk one row deep on grass

One adaptation of the kit's own metatiles: it was drawn against stock Emerald General, where
tiles 490/491/506/507 are plain grass, and puts them under every paving edge, lamp foot and
bin. In this game's General those four slots hold the pale meadow patch, so the edges came out
with a pale halo. They are repointed to the grass every map here uses (tiles 2 and 3).

And one move in its tile sheet: the engine plays a door's animation by writing the frame over
the last eight tile slots of the secondary sheet (field_door.c, DOOR_TILE_START_SIZE1) and
leaves it there, and the kit keeps the stone lip of its quay in three of them. Open any door
in Saltwick and the whole quay edge turned into door fragments. Those three tiles are moved to
empty slots of the sheet (1020 -> 524, 1021 -> 603, 1022 -> 736) and the metatiles follow.

  python3 tools/skald/brick_city.py            make them (idempotent)
  python3 tools/skald/brick_city.py --check    exit 1 if one is missing or sits at another id
"""
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))
import mtile  # noqa: E402

PRIM = ROOT / "data/tilesets/primary/leob_general"
KIT = ROOT / "data/tilesets/secondary/brick_city"
OCEAN = 0x15


def e(tile, pal, h=False, v=False):
    return tile | (0x400 if h else 0) | (0x800 if v else 0) | (pal << 12)


WATER = (e(454, 4), e(455, 4), e(455, 4), e(454, 4))
FLAG = (e(644, 7), e(645, 7), e(660, 7), e(661, 7))
GRASS = (e(2, 2), e(3, 2), e(3, 2), e(2, 2))
LEDGE_N = (e(603, 10), e(736, 10), 0, 0)             # the quay's stone lip, after the move off the door slots
LAMP_HEAD = (e(798, 5), e(799, 5), e(814, 5), e(815, 5))
NONE = (0, 0, 0, 0)

EXTRA = [
    (887, "quay_w", WATER + (e(671, 7), 0, e(671, 7), 0) + NONE, OCEAN),
    (888, "quay_ne", WATER + LEDGE_N + (0, e(671, 7, h=True), 0, e(671, 7, h=True)), OCEAN),
    (889, "quay_nw", WATER + LEDGE_N + (e(671, 7), 0, e(671, 7), 0), OCEAN),
    (890, "lamp_flag", FLAG + NONE + LAMP_HEAD, 0),
    (891, "plank_row", GRASS + (e(555, 5), e(555, 5, h=True), e(523, 5), e(523, 5, h=True)) + NONE, 0),
]


STOCK_GRASS = {490: 2, 491: 3, 506: 3, 507: 2}       # stock General's plain grass block -> this General's


def repoint_grass(check):
    """Kit metatiles that draw stock General's grass tiles (palette 2) draw this game's instead. Returns the count changed."""
    import struct
    f = KIT / "metatiles.bin"
    data = bytearray(f.read_bytes())
    n = 0
    for i in range(len(data) // 2):
        e = struct.unpack_from("<H", data, i * 2)[0]
        if (e >> 12) == 2 and (e & 0x3FF) in STOCK_GRASS:
            struct.pack_into("<H", data, i * 2, (e & ~0x3FF) | STOCK_GRASS[e & 0x3FF])
            n += 1
    if n and not check:
        f.write_bytes(bytes(data))
    return n


DOOR_SLOT_MOVES = {1020: 524, 1021: 603, 1022: 736}     # tiles the door animation would overwrite -> free slots


def move_off_door_slots(check):
    """Returns how many things were (or, with check, still are) out of place."""
    import struct
    from PIL import Image
    im = Image.open(KIT / "tiles.png")
    assert im.mode == "P" and im.size == (128, 256), im

    def box(t):
        x0, y0 = ((t - 512) % 16) * 8, ((t - 512) // 16) * 8
        return (x0, y0, x0 + 8, y0 + 8)

    n = 0
    for old, new in DOOR_SLOT_MOVES.items():
        src = im.crop(box(old))
        if len(set(src.tobytes())) > 1:                      # still in the door slot
            assert len(set(im.crop(box(new)).tobytes())) == 1, f"tile {new} is not empty"
            n += 1
            if not check:
                im.paste(src, box(new)[:2])
                im.paste(0, box(old))
    if n and not check:
        im.save(KIT / "tiles.png", bits=4)
    f = KIT / "metatiles.bin"
    data = bytearray(f.read_bytes())
    m = 0
    for i in range(len(data) // 2):
        e = struct.unpack_from("<H", data, i * 2)[0]
        if (e & 0x3FF) in DOOR_SLOT_MOVES and e:
            struct.pack_into("<H", data, i * 2, (e & ~0x3FF) | DOOR_SLOT_MOVES[e & 0x3FF])
            m += 1
    if m and not check:
        f.write_bytes(bytes(data))
    return n + m


def main():
    check = "--check" in sys.argv
    bad = 0
    n = move_off_door_slots(check)
    if n:
        print(f"door animation slots: {n} tile(s) or entr{'y' if n == 1 else 'ies'} " + ("still there" if check else "moved off them"))
        bad += 1 if check else 0
    n = repoint_grass(check)
    if n:
        print(f"grass under the kit's edges: {n} tile entr{'y' if n == 1 else 'ies'} " + ("still on the stock slots" if check else "repointed"))
        bad += 1 if check else 0
    d = mtile.load(PRIM, KIT)
    for want, name, entries, attr in EXTRA:
        have = [m for m, w in d["mts"].items() if tuple(w) == tuple(entries) and d["attrs"].get(m, 0) == attr and m >= 512 + 375]
        if have:
            if have[0] != want:
                print(f"{name}: at {have[0]}, the legends expect {want}"); bad += 1
            continue
        if check:
            print(f"{name}: missing"); bad += 1
            continue
        got = mtile.ensure(d, entries, attr=attr, why=name)
        if got != want:
            print(f"{name}: made at {got}, the legends expect {want}"); bad += 1
    print("brick_city extras:", "ok" if not bad else f"{bad} problem(s)")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
