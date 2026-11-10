#!/usr/bin/env python3
"""Skaldmere building kits: restyle the vanilla town tilesets in place.

Every town in Skaldmere is drawn with a stock building kit (FireRed's Vermilion,
Rustboro, Fortree, Mauville, Fallarbor, Slateport, Petalburg, Azalea). The
metatiles and the maps stay as they are; this rewrites the palette entries the
kit's roofs, walls and trims use, so the same shapes read as one region:
dark slate roofs everywhere, and a wall colour per town (falu-red timber on
the fishing coasts, ochre in the Survey's town, white render on the river,
weathered grey timber on stilts in the wetlands, turf and dark timber on the
fell). Entries were chosen with the pixel-tracking renderer (every visible map
pixel knows its palette entry), so nothing outside the buildings moves unless
it is listed here on purpose.

Idempotent: python3 tools/skald/kit_restyle.py            (apply)
            python3 tools/skald/kit_restyle.py --check    (report drift only)
"""
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SEC = ROOT / "data/tilesets/secondary"
PRI = ROOT / "data/tilesets/primary"

# --- the Skaldmere ramps (light -> dark) -------------------------------------
SLATE = [(172, 184, 200), (120, 136, 160), (80, 92, 116)]        # roofs, the regional constant
SLATE_DARK = [(132, 148, 168), (88, 104, 128), (56, 66, 88)]     # roofs in the shade / second house type
SLATE4 = [(176, 188, 204), (128, 144, 168), (96, 110, 136), (60, 70, 92)]   # four-step slate (General's red ramp)
TEAL_SLATE = [(124, 156, 164), (84, 116, 128), (52, 76, 88)]     # a second roof colour where a kit has two
FALU = [(188, 80, 68), (150, 54, 46), (104, 36, 32)]             # falu-red timber (fishing towns)
OCHRE = [(224, 184, 112), (188, 144, 80), (140, 100, 52)]        # ochre render (the Survey's town)
WHITE = [(240, 236, 224), (204, 200, 188), (156, 152, 140)]      # white render (the river town)
GREY_TIMBER = [(168, 160, 144), (124, 116, 100), (84, 78, 66)]   # weathered stilt timber (wetlands)
TURF = [(132, 148, 84), (96, 112, 56), (64, 76, 36)]             # turf roofs (the fell)
DARK_TIMBER = [(120, 92, 64), (88, 64, 44), (56, 40, 28)]        # dark-stained timber (the fell)

# kit -> palette number -> {index: rgb}
SPEC = {
    # Saltwick, the Meadow, Route 1 (FireRed Vermilion kit): the fishing town.
    "frp_vermilion_city": {
        8: {2: SLATE[0], 3: SLATE[1], 4: SLATE[2],              # house roofs
            10: FALU[0], 11: FALU[1], 12: FALU[2]},             # house walls
        10: {2: SLATE[0], 3: SLATE[1], 4: SLATE[2],             # the planter-roof house
             11: FALU[0], 12: FALU[1]},
        9: {9: TEAL_SLATE[0], 8: TEAL_SLATE[1], 10: TEAL_SLATE[2]},   # the two blue-roofed houses
    },
    # Delibird village (Johto Azalea kit): shingle roofs in two slate tones, falu-red walls.
    "azaleatown": {
        8: {5: SLATE[0], 4: SLATE[1], 1: SLATE[2],                  # shingle rows, brown -> slate
            13: (196, 206, 218), 12: (176, 188, 204), 11: (152, 166, 184),   # the light shingle rows
            8: (176, 72, 62), 10: (140, 50, 44), 6: (120, 44, 40), 9: (88, 30, 28)},  # grey walls -> falu
    },
    # Elvsund (Mauville kit): the river town, white render under slate.
    "mauville": {
        7: {1: (250, 248, 240), 2: WHITE[0], 3: WHITE[1], 4: WHITE[2],       # yellow walls -> white
            11: SLATE4[0], 12: SLATE4[1], 13: SLATE4[2], 14: SLATE4[3]},     # purple roofs -> slate
        10: {2: (228, 224, 212), 3: (188, 184, 172),                          # teal walls -> warm white
             11: SLATE4[0], 12: SLATE4[1], 13: SLATE4[2], 14: SLATE4[3]},    # the big hall's roof
    },
    # Mereholt Coast (Slateport kit): lavender roofs -> slate; the market keeps its canvas,
    # the museum its verdigris dome, the cannery its olive sheet roof.
    "slateport": {
        6: {4: (168, 180, 196), 11: (184, 196, 210), 12: (140, 154, 176), 13: (112, 126, 150), 14: (72, 84, 108)},
    },
    # Fernwick (leob Rustboro kit): the Survey's town, ochre render under slate.
    "leob_rustboro": {
        10: {11: (226, 192, 128), 13: (198, 152, 92), 14: (150, 108, 62)},   # tan walls -> ochre
        9: {3: (180, 192, 208), 4: (136, 150, 172)},                        # pale roofs -> slate
    },
    # The breakwater hut (leob Slateport kit): its blue roof -> slate, lavender walls -> white.
    "leob_slateport": {
        6: {2: (236, 232, 224), 4: (196, 192, 184),
            11: SLATE4[0], 12: SLATE4[1], 13: SLATE4[2], 14: SLATE4[3]},
    },
    # The Climate Station (Fortree kit's institute): white render, slate roof.
    "fortree": {
        8: {2: WHITE[0], 3: (212, 208, 196), 4: (184, 180, 168), 5: (150, 146, 134),
            8: SLATE[0], 9: SLATE[1], 11: SLATE[2]},
    },
}


def read_pal(p):
    lines = p.read_text().splitlines()
    assert lines[0].strip() == "JASC-PAL", p
    return lines


# --- the General primary: the stock cottage and the Pokémon Center ------------
# Every General-kit town (Fernwick, Reedmere, Leirvik, Elvsund, Haukfell, the
# marsh) is full of General's own 3x3 cottage: red roof (palette 1, 11-14) and
# yellow walls (palette 5, 11-14). The red ramp is shared with the Pokémon
# Center's roof and the Coast's two halls; the yellow ramp is also the sand.
# So: the red ramp itself turns slate (cottages, halls, the leob cottages),
# the Center's red roof tiles are duplicated into free tile slots, repointed at
# palette 4 (water; six entries unused) and given their red back there, and
# the cottage wall tiles are remapped pixel by pixel onto the white-render
# shades (1-4) that every primary palette carries -- the Center's own walls.
GENERAL = PRI / "leob_general"   # gTileset_General's tiles, palettes and metatiles all come from here (headers.h)
PC_MTS =[66, 67, 72, 73, 74, 75, 80, 81, 82, 83, 88, 89, 90, 91, 98, 99]
RED = {11, 12, 13, 14}
PC_RED =[(238, 148, 115), (214, 100, 83), (202, 86, 78), (162, 48, 40)]    # the Center's red, kept in pal 4
PC_REMAP = {1: 1, 2: 1, 3: 11, 4: 12, 5: 15, 6: 15, 7: 15, 11: 3, 12: 4, 13: 5, 14: 7}
PC_PAL4 = {1: (247, 255, 255), 3: PC_RED[0], 4: PC_RED[1], 5: PC_RED[2], 7: PC_RED[3], 15: (53, 62, 72)}
COTTAGE_WALL_TILES = [166, 182, 226, 227, 228, 229, 242, 243, 244]
WALL_REMAP = {11: 1, 12: 2, 13: 3, 14: 4}
WALL_PALS_OK = {0, 1, 3, 5}   # primary palettes whose entries 1-4 are the white-render ramp


def _tiles_png():
    from PIL import Image
    im = Image.open(GENERAL / "tiles.png")
    assert im.mode == "P" and im.size == (128, 256), im
    return im


def _tile_px(im, t):
    x0, y0 = (t % 16) * 8, (t // 16) * 8
    return [im.getpixel((x0 + x, y0 + y)) & 0xF for y in range(8) for x in range(8)]


def _put_tile(im, t, px):
    x0, y0 = (t % 16) * 8, (t // 16) * 8
    for i, v in enumerate(px):
        im.putpixel((x0 + i % 8, y0 + i // 8), v)


def _save_png(im, path):
    im.save(path, bits=4)


GENERAL_KITS = ["fortree", "leob_rustboro", "mauville", "leob_fallarbor", "slateport", "leob_petalburg",
                "leob_slateport", "cave", "leob_dewford"]   # every secondary a Skaldmere layout pairs with General


def _all_cells():
    """Every metatile cell of General and of the secondaries paired with it (tile id, palette)."""
    import struct
    out = []
    for d in [GENERAL] + [SEC / k for k in GENERAL_KITS]:
        mb = d / "metatiles.bin"
        if not mb.exists():
            continue
        data = mb.read_bytes()
        for i in range(len(data) // 24):
            for e in struct.unpack_from("<12H", data, i * 24):
                out.append((e & 0x3FF, (e >> 12) & 0xF, d.name, i))
    return out


def general(check_only=False):
    import struct
    changes = 0
    # 1. palette 1: the red roof ramp becomes slate; palette 4: the Center's red lives in the free entries
    for pn, entries in ((1, {11 + i: c for i, c in enumerate(SLATE4)}), (4, PC_PAL4)):
        p = pal_path(GENERAL.name, pn)
        lines = read_pal(p)
        dirty = False
        for idx, rgb in entries.items():
            want = f"{rgb[0]} {rgb[1]} {rgb[2]}"
            if lines[3 + idx].strip() != want:
                if check_only:
                    print(f"general pal {pn} idx {idx}: {lines[3 + idx].strip()} -> {want}")
                lines[3 + idx] = want
                dirty = True
                changes += 1
        if dirty and not check_only:
            p.write_text("\n".join(lines) + "\n")
            print(f"wrote {p.relative_to(ROOT)}")
    # 2. the Center's red roof tiles -> duplicates in free slots, palette 4
    im = _tiles_png()
    mb = GENERAL / "metatiles.bin"
    data = bytearray(mb.read_bytes())
    cells = _all_cells()
    referenced = {t for t, _, _, _ in cells if t}
    # unreferenced slots below the animated tiles (General's animations land at 432+); blank ones first
    free = sorted((t for t in range(1, 400) if t not in referenced), key=lambda t: (any(_tile_px(im, t)), t))
    dup = {}
    png_dirty = False
    for mid in PC_MTS:
        for c in range(12):
            off = mid * 24 + c * 2
            e = struct.unpack_from("<H", data, off)[0]
            tid, pal = e & 0x3FF, (e >> 12) & 0xF
            if pal != 1 or not (set(_tile_px(im, tid)) & RED):
                continue
            if tid not in dup:
                dup[tid] = free.pop(0)
                _put_tile(im, dup[tid], [PC_REMAP.get(v, v) for v in _tile_px(im, tid)])
                png_dirty = True
            e = (e & 0x0C00) | dup[tid] | (4 << 12)
            if not check_only:
                struct.pack_into("<H", data, off, e)
            changes += 1
    if dup:
        print(f"general: Center roof tiles duplicated {dict(sorted(dup.items()))}")
    # 3. cottage walls: yellow pixels -> the white-render shades, in place
    bad = [(t, pal, kit, i) for t, pal, kit, i in cells if t in COTTAGE_WALL_TILES and pal not in WALL_PALS_OK]
    if bad:
        print("general: cottage wall tiles used under an unexpected palette:", bad[:8])
    for t in COTTAGE_WALL_TILES:
        px = _tile_px(im, t)
        if set(px) & RED:
            _put_tile(im, t, [WALL_REMAP.get(v, v) for v in px])
            png_dirty = True
            changes += 1
    if not check_only:
        if png_dirty:
            _save_png(im, GENERAL / "tiles.png")
            print(f"wrote {(GENERAL / 'tiles.png').relative_to(ROOT)}")
        if dup:
            mb.write_bytes(bytes(data))
            print(f"wrote {mb.relative_to(ROOT)}")
    return changes


BASE = ROOT / "tools/skald/palette_base"   # grade.py's ungraded palettes; once a kit has them, edits go there


def pal_path(kit, pn):
    """The file an absolute colour belongs in: the grade's base palette when the kit has one
    (grade.py --apply then regenerates the live palette), else the live palette itself."""
    b = BASE / kit / f"{pn:02}.pal"
    if b.exists():
        return b
    d = SEC / kit / "palettes"
    if not d.exists():
        d = PRI / kit / "palettes"
    return d / f"{pn:02}.pal"


def apply(check_only=False):
    drift = 0
    for kit, pals in SPEC.items():
        for pn, entries in pals.items():
            p = pal_path(kit, pn)
            lines = read_pal(p)
            changed = False
            for idx, rgb in entries.items():
                want = f"{rgb[0]} {rgb[1]} {rgb[2]}"
                if lines[3 + idx].strip() != want:
                    if check_only:
                        print(f"{kit} pal {pn} idx {idx}: {lines[3 + idx].strip()} -> {want}")
                    lines[3 + idx] = want
                    changed = True
                    drift += 1
            if changed and not check_only:
                p.write_text("\n".join(lines) + "\n")
                print(f"wrote {p.relative_to(ROOT)}")
    if check_only:
        print("drift:", drift)
    return drift


if __name__ == "__main__":
    check = "--check" in sys.argv
    n = apply(check_only=check) + general(check_only=check)
    if check:
        print("total drift:", n)
    elif n and BASE.exists():
        print("palettes written to the grade base: run  python3 tools/skald/grade.py --apply")
