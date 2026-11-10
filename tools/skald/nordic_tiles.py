#!/usr/bin/env python3
"""The Skaldmere outdoor tiles: original art drawn into the shared General tile sheet.

Every outdoor map on the Emerald kit reads its ground and trees from one sheet
(data/tilesets/primary/leob_general/tiles.png, palette 2 for everything green). A dozen
metatiles are sixty percent of what is on screen, and they are all built from the same thirty
8x8 tiles. Redrawing those tiles in place changes the whole region at once and moves nothing:
no metatile, layout, script or palette slot is touched, so every map, warp and audit stays as
it was.

What is drawn here (all palette 2, indices as that palette orders them):

  the spruce     tiles 6, 7, 22 (the crown of a standing tree, top layer, over the ground),
                 4, 20 (the same crown inside a wood: the next tree's tip in front, the row
                 behind showing between), 14, 30 (the lowest boughs, the trunk, the shadow)
  the big fir    palette 12, two metatiles wide and three tall: the tip 493-495 (top layer, it
                 overlaps the tree behind), the body 8, 9, 24, 25, the foot 40, 41, 56, 57.
                 The same small spruce in palette 12: 11, 26 (crown), 43, 59 and 42, 58 (foot)

Each drawing is the LEFT half of a 16-pixel-wide shape; the metatiles mirror it (4h, 20h, 22h,
14h, 30h), except the crown's top right (tile 7), which is its own tile and is written mirrored.

  python3 tools/skald/nordic_tiles.py            write the tiles (idempotent)
  python3 tools/skald/nordic_tiles.py --check    report drift only (exit 1 if the sheet differs)
  python3 tools/skald/nordic_tiles.py --sheet OUT.png   a design sheet of the shapes at 5x

See the result on real maps with: python3 tools/skald/pal_tool.py render ParcelRiver OUT.png 2
"""
import sys
from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parents[2]
GENERAL = ROOT / "data/tilesets/primary/leob_general"
HEX = "0123456789ABCDEF"

# Palette 2 roles: D grass, C/F/E grass lights and darks, 1 2 3 4 the green ramp light to dark,
# 5 trunk, 8 outline grey, B off-white. '.' is transparent (the ground shows through).

SPRUCE_TOP = [          # tiles 6 (rows 0-7) and 22 (rows 8-15); tile 7 is rows 0-7 mirrored
    "........",
    ".......4",
    "......41",
    "......41",
    ".....412",
    "....4123",
    ".....433",
    ".....411",
    "....4112",
    "...41122",
    "..412223",
    "...43233",
    "...41112",
    "..411122",
    ".4112222",
    "41122223",
]
SPRUCE_WOOD = [         # tiles 4 (rows 0-7) and 20 (rows 8-15): opaque, tiles in both directions
    "33323233",
    "32323344",
    "22332341",
    "23223412",
    "33334112",
    "33441123",
    "34444333",
    "33344112",
    "32341122",
    "33411222",
    "34112223",
    "34433233",
    "33411122",
    "34111222",
    "41112222",
    "41122223",
]
SPRUCE_BASE = [         # tiles 14 (rows 0-7) and 30 (rows 8-15): opaque, the grass is painted in
    "43323233",
    "44311123",
    "41111222",
    "41122223",
    "43223233",
    "D4343434",
    "DD4D4484",
    "DDDDDD85",
    "DDDDDD85",
    "DDDFFF85",
    "DDF33385",
    "DFF33333",
    "DDFFF333",
    "DDDDFFFF",
    "DDDDDDDD",
    "DDDDDDDD",
]


BIG_FIR = [            # palette 12 (the leob_* town kits); the LEFT half, 16 wide x 48 tall
    "0000000000000000",
    "0000000000000004",
    "0000000000000045",
    "0000000000000075",
    "0000000000000455",
    "0000000000044576",
    "0000000000047667",
    "0000000000049966",
    "0000000000044A98",
    "00000000000045A9",
    "000000000004757A",
    "0000000000455677",
    "0000000044755666",
    "0000000045777886",
    "0000000049968986",
    "0000000044498A98",
    "11111111114A95A9",
    "111111111475A77A",
    "1111111145555767",
    "1111111475776666",
    "1111144555877668",
    "1111147767666866",
    "1111149966986988",
    "1111144498A98A98",
    "11111111495A95A9",
    "111111147A55A77A",
    "1111144555777677",
    "1111457557767666",
    "1144755776666686",
    "1145777866868866",
    "1149986986986988",
    "1144496498A98A98",
    "11111494A95A97A9",
    "111114455A55A76A",
    "1111457555776677",
    "1114755777677668",
    "4445575667666866",
    "4575666666886866",
    "4977966988986988",
    "4496498498498498",
    "1149149149149149",
    "1FF4F34334334BCE",
    "FFFF333333333BCE",
    "FFFF333333333BDE",
    "1FFFF33333333BCD",
    "111FFFF333333BBB",
    "11111FFFFF333333",
    "1111111111111111",
]


def to12(rows, ground):
    """The small spruce again in palette 12's order, for the kits that draw their trees there.
    ground is what shows beside the trunk: '1' (grass painted in) or '0' (transparent)."""
    out = []
    for y, r in enumerate(rows):
        o = ""
        for c in r:
            if c == ".":
                o += "0"
            elif c == "D":
                o += ground
            elif c == "F":
                o += "F" if ground == "1" else "0"
            elif c == "3" and rows is SPRUCE_BASE and y >= 9:
                o += "3"                      # the shadow on the grass, not foliage
            else:
                o += {"1": "5", "2": "6", "3": "9", "4": "4", "5": "D", "8": "B"}[c]
        out.append(o)
    return out


def quarter(rows, x0, y0):
    return [0 if c == "." else HEX.index(c) for r in rows[y0:y0 + 8] for c in r[x0:x0 + 8]]


def rows_to_px(rows, mirror=False):
    out = []
    for r in rows:
        assert len(r) == 8, r
        v = [0 if c == "." else HEX.index(c) for c in r]
        out.extend(v[::-1] if mirror else v)
    return out


def tiles():
    """tile index -> 64 palette indices."""
    t = {}
    t[6] = rows_to_px(SPRUCE_TOP[:8])
    t[7] = rows_to_px(SPRUCE_TOP[:8], mirror=True)
    t[22] = rows_to_px(SPRUCE_TOP[8:])
    t[4] = rows_to_px(SPRUCE_WOOD[:8])
    t[20] = rows_to_px(SPRUCE_WOOD[8:])
    t[14] = rows_to_px(SPRUCE_BASE[:8])
    t[30] = rows_to_px(SPRUCE_BASE[8:])
    # the big fir, palette 12: the tip (top layer, over whatever stands behind), the body, the foot
    t[493] = quarter(BIG_FIR, 8, 0)
    t[494] = quarter(BIG_FIR, 0, 8)
    t[495] = quarter(BIG_FIR, 8, 8)
    t[8], t[9] = quarter(BIG_FIR, 0, 16), quarter(BIG_FIR, 8, 16)
    t[24], t[25] = quarter(BIG_FIR, 0, 24), quarter(BIG_FIR, 8, 24)
    t[40], t[41] = quarter(BIG_FIR, 0, 32), quarter(BIG_FIR, 8, 32)
    t[56], t[57] = quarter(BIG_FIR, 0, 40), quarter(BIG_FIR, 8, 40)
    # the small spruce in palette 12: crown (11, 26), foot on grass (43, 59), foot over anything (42, 58)
    crown = to12(SPRUCE_TOP, "0")
    t[11], t[26] = quarter(crown, 0, 0), quarter(crown, 0, 8)
    foot = to12(SPRUCE_BASE, "1")
    t[43], t[59] = quarter(foot, 0, 0), quarter(foot, 0, 8)
    bare = to12(SPRUCE_BASE, "0")
    t[42], t[58] = quarter(bare, 0, 0), quarter(bare, 0, 8)
    # the scrap of tree-top two town kits lay over a fence or a kerb (palette 2): a small spruce tip now
    cap = ["........", "........", "........", "........", ".......4", "......41", ".....412", "....4123"]
    t[204] = rows_to_px(cap)
    t[205] = rows_to_px(cap, mirror=True)
    for k in (4, 20, 14, 30, 8, 9, 24, 25, 40, 41, 56, 57, 43, 59):
        assert 0 not in t[k], f"tile {k} sits on an empty bottom layer and must be opaque"
    return t


def get_tile(im, t):
    x0, y0 = (t % 16) * 8, (t // 16) * 8
    return [im.getpixel((x0 + x, y0 + y)) & 0xF for y in range(8) for x in range(8)]


def put_tile(im, t, px):
    x0, y0 = (t % 16) * 8, (t // 16) * 8
    for i, v in enumerate(px):
        im.putpixel((x0 + i % 8, y0 + i // 8), v)


def apply(check_only=False):
    im = Image.open(GENERAL / "tiles.png")
    assert im.mode == "P" and im.size == (128, 256), im
    drift = 0
    for t, px in sorted(tiles().items()):
        if get_tile(im, t) != px:
            drift += 1
            if not check_only:
                put_tile(im, t, px)
    if drift and not check_only:
        im.save(GENERAL / "tiles.png", bits=4)
    print(("drift" if check_only else "drew") + f": {drift} tile(s)")
    return drift


def sheet(out):
    pal = []
    for line in (GENERAL / "palettes/02.pal").read_text().split("\n")[3:19]:
        pal.append(tuple(int(v) for v in line.split()))

    def cell(rows):
        h = [[0 if c == "." else HEX.index(c) for c in r] for r in rows]
        return [r + r[::-1] for r in h]

    top, wood, base = cell(SPRUCE_TOP), cell(SPRUCE_WOOD), cell(SPRUCE_BASE)
    W, H = 12, 8
    canvas = [[13] * (W * 16) for _ in range(H * 16)]

    def blit(c, mx, my):
        for y in range(16):
            for x in range(16):
                if c[y][x]:
                    canvas[my * 16 + y][mx * 16 + x] = c[y][x]

    blit(top, 1, 1); blit(base, 1, 2)
    for x in (3, 4, 5):
        blit(top, x, 1); blit(base, x, 2)
    for x in range(7, 11):
        blit(top, x, 0)
        for y in (1, 2, 3):
            blit(wood, x, y)
        blit(base, x, 4)
    blit(top, 1, 4); blit(wood, 1, 5); blit(base, 1, 6)
    for x, y0 in ((3, 4), (4, 5), (5, 4)):
        blit(top, x, y0); blit(base, x, y0 + 1)
    im = Image.new("RGB", (W * 16, H * 16))
    im.putdata([pal[v] for row in canvas for v in row])
    im.resize((im.width * 5, im.height * 5), Image.NEAREST).save(out)
    print("sheet ->", out)


if __name__ == "__main__":
    a = sys.argv[1:]
    if a and a[0] == "--sheet":
        sheet(a[1])
    elif a and a[0] == "--check":
        sys.exit(1 if apply(check_only=True) else 0)
    else:
        apply()
