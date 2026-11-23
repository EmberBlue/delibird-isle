#!/usr/bin/env python3
"""Delibird Isle's additions to leob0505's Lilycove kit (data/tilesets/secondary/leob_lilycove).

The island's three maps are drawn on Emerald General + the Lilycove kit. Canon asks for
candy-coloured cabins, string lights, a gift square, a festival banner, stakes with red cloth
and a point beacon (design/09-delibird-isle.md); the kit has one small house, blue-roofed, and
none of the rest. This adds them, reproducibly and without touching the kit's own tiles or
metatiles:

  palettes 10 and 11   (the kit leaves both free) palette 8 again with the roof's four blues
                       turned red (10) and yellow (11); entries 12-15 of palette 10, which no
                       roof tile uses, are the four bulb colours of the string lights
  tiles 944 and up     original art, drawn here as rows of palette indices or by a few lines of
                       code (PICTURES): the light string, a red cloth, the banner, the giving
                       table and its parcels, sandbags, a sunk sill, the beacon
  metatiles 863 and up, in the order of NAMES below (the legend
                       tools/skald/legends/general__leob_lilycove.json refers to them by id)

  python3 tools/skald/holiday_kit.py            make them (idempotent)
  python3 tools/skald/holiday_kit.py --check    exit 1 if anything is missing or sits elsewhere
  python3 tools/skald/holiday_kit.py --rebuild  drop the additions (and the pieces the drawing passes appended
                                                after them), make them again and redraw the island's three maps
  python3 tools/skald/holiday_kit.py --sheet OUT.png   the pictures at 6x, in their palettes
"""
import struct
import sys
from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))
import mtile  # noqa: E402

PRIM = ROOT / "data/tilesets/primary/leob_general"
KIT = ROOT / "data/tilesets/secondary/leob_lilycove"
BASE = ROOT / "tools/skald/palette_base/leob_lilycove"
KIT_METATILES = 351
KIT_TILES = 432                 # the kit's own sheet is 128x216: tiles 512-943
FIRST_TILE = 944
LAST_TILE = 1015                # 1016-1023 are where the engine draws an opening door
HEX = "0123456789ABCDEF"

RED = [(246, 205, 197), (238, 131, 115), (205, 82, 74), (148, 49, 57)]
YELLOW = [(255, 246, 189), (255, 222, 115), (230, 172, 65), (172, 115, 41)]
BULBS = [(238, 65, 65), (255, 230, 98), (98, 222, 131), (98, 172, 255)]      # palette 10, entries 12-15

MAPS = ["ParcelDelibird", "ParcelDelibirdSummit", "ParcelDelibirdCliffs"]      # drawn on the kit, in this order
HOUSE = [557, 558, 559, 565, 566, 567, 573, 574, 575, 589]      # the small house's roof, eave and upper wall metatiles

# ---------------------------------------------------------------------------------------------
# the pictures. Palette 10: 1-4 the red ramp (light to dark), 5 6 greys, 7 navy (outlines),
# 8 off-white, 9 A window blues, B white, C D E F the bulbs (red, yellow, green, blue).
# Palette 11: 1-4 the yellow ramp, 5-B as palette 10, C D E F a wood ramp (tan to dark brown).


def rows(*r):
    return [[0 if c == "." else HEX.index(c) for c in line] for line in r]


def blank(w, h):
    return [[0] * w for _ in range(h)]


def rect(g, x0, y0, x1, y1, fill, edge=None):
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1):
            g[y][x] = edge if edge is not None and (x in (x0, x1) or y in (y0, y1)) else fill


def table():
    """The giving table: a white cloth, four wrapped parcels. Two cells wide."""
    g = blank(32, 16)
    rect(g, 1, 4, 30, 9, 0xB, 7)                         # the top
    rect(g, 1, 9, 30, 13, 8, 7)                          # the cloth hanging in front
    for x in range(5, 30, 4):
        for y in (10, 11, 12):
            g[y][x] = 5                                  # its folds
    for x in (3, 4, 27, 28):
        g[14][x] = g[15][x] = 6                          # legs
    for x, y, w, h, c, r in ((4, 1, 5, 5, 3, 0xD), (11, 3, 4, 4, 0xE, 0xB), (17, 1, 6, 5, 0xF, 0xD), (25, 2, 4, 5, 0xD, 3)):
        rect(g, x - 1, y - 1, x + w, y + h, c, 7)
        for i in range(w):
            g[y + h // 2][x + i] = r                     # the ribbon
        for i in range(h):
            g[y + i][x + w // 2] = r
    return g


def sandbags():
    g = blank(16, 16)

    def sack(x0, y0, x1, y1):
        for y in range(y0, y1 + 1):
            for x in range(x0, x1 + 1):
                if x in (x0, x1) and y in (y0, y1):
                    continue
                g[y][x] = 0xF if x in (x0, x1) or y in (y0, y1) else 0xD if y >= y1 - 1 else 0xC
        g[(y0 + y1) // 2][x1 - 1] = 0xE
    sack(0, 9, 7, 14)
    sack(8, 9, 15, 14)
    sack(4, 4, 11, 9)
    return g


def beacon():
    """The point beacon: a short white tower with a red band, a lantern and a red cap. 2 cells by 3."""
    W, H = 32, 48
    g = blank(W, H)

    def shade(x, x0, x1, ramp, cuts):
        rel = (x - x0) / max(1, x1 - x0)
        return ramp[0] if rel < cuts[0] else ramp[1] if rel < cuts[1] else ramp[2]

    for y in range(19, 44):                               # the shaft, a little wider at the foot
        hw = 6 + (y - 19) * 3 // 24
        x0, x1 = 16 - hw, 15 + hw
        for x in range(x0, x1 + 1):
            g[y][x] = shade(x, x0, x1, (2, 3, 4), (0.3, 0.75)) if 25 <= y <= 30 else shade(x, x0, x1, (0xB, 8, 5), (0.5, 0.8))
        g[y][x0] = g[y][x1] = 7
    for y in range(34, 37):                               # a window
        g[y][15] = g[y][16] = 7
    rect(g, 14, 39, 17, 43, 6, 7)                         # the door
    rect(g, 6, 44, 25, 46, 5, 7)                          # the plinth
    for x in range(7, 25):
        g[45][x] = 8 if x < 17 else 5
    for x in range(8, 24):
        g[47][x] = 7
    for x in range(7, 25):                                # the gallery
        g[17][x] = 7 if x in (7, 24) else 8 if x < 17 else 5
        g[18][x] = 7
    rect(g, 10, 9, 21, 16, 9, 7)                          # the lantern room
    for y in range(10, 16):
        g[y][13] = g[y][18] = 7
    rect(g, 14, 11, 17, 14, 0xD, 0xD)
    g[12][15] = g[12][16] = g[13][15] = g[13][16] = 0xB   # the lamp
    for y in range(2, 9):                                 # the cap
        hw = 1 + (y - 2) * 8 // 6
        x0, x1 = 16 - hw, 15 + hw
        for x in range(x0, x1 + 1):
            g[y][x] = shade(x, x0, x1, (2, 3, 4), (0.3, 0.7))
        g[y][x0] = g[y][x1] = 7
    for x in range(7, 25):
        g[8][x] = 7
    g[0][15] = g[0][16] = g[1][15] = g[1][16] = 7         # the finial
    return g


def lean():
    """General's small spruce (tiles 6 7 22 over 14 30, palette 2), pushed over: every row above the trunk's
    foot slides right, the tip the furthest. The drunken forest's tree; its mirror image leans left. The upper
    16 rows are the crown (nothing behind it), the lower 16 the foot on its own grass (index D)."""
    im = Image.open(PRIM / "tiles.png")

    def tile(t, h=False):
        x0, y0 = (t % 16) * 8, (t // 16) * 8
        r = [[im.getpixel((x0 + x, y0 + y)) & 15 for x in range(8)] for y in range(8)]
        return [list(reversed(a)) for a in r] if h else r

    cat = lambda a, b: [x + y for x, y in zip(a, b)]
    src = cat(tile(6), tile(7)) + cat(tile(22), tile(22, True)) + cat(tile(14), tile(14, True)) + cat(tile(30), tile(30, True))
    g = []
    for y, r in enumerate(src):
        sh = round(5 * (22 - y) / 21) if y < 22 else 0
        back = 0 if y < 16 else 0xD
        g.append(([back] * sh + r)[:16])
    return g


def cairn():
    """A cairn: four courses of stones, one added by everyone who reaches it."""
    g = blank(16, 16)

    def stone(x0, y0, x1, y1):
        for y in range(y0, y1 + 1):
            for x in range(x0, x1 + 1):
                edge = x in (x0, x1) or y in (y0, y1)
                g[y][x] = 8 if edge else 2 if (x - x0) + (y - y0) <= 3 else 4 if (x1 - x) + (y1 - y) <= 2 else 3
    for box in ((0, 12, 4, 15), (4, 12, 8, 15), (8, 12, 11, 15), (11, 12, 15, 15),
                (2, 8, 6, 12), (6, 8, 9, 12), (9, 8, 13, 12), (4, 4, 7, 8), (7, 4, 11, 8), (6, 1, 9, 4)):
        stone(*box)
    return g


PICTURES = {     # name: (palette, rows of palette indices)
    "lights": (10, rows("................", "................", "................", "7..............7",
                        ".77..........77.", "..C777....777E..", "..C..D7777F..E..", ".....D....F.....")),
    "lights_from": (10, rows("........", "........", "..7.....", "..77....", "...7....", "...E77..", "...E.F77", ".....F..")),
    "lights_to": (10, rows("........", "........", ".....7..", "....77..", "....7...", "..77C...", "77D.C...", "..D.....")),
    "cloth": (10, rows("........", "33......", "3233....", "432233..", ".443223.", "...4433.", ".....4..", "........")),
    "banner": (10, rows("........", "22222222", "33333333", "B3BB3B3B", "33333333", "44444444", "........", "........")),
    "banner_end": (10, rows("........", "7.222222", ".7333333", "..33B3B3", "..333333", "..444444", "........", "........")),
    "table": (10, table()),
    "sandbags": (11, sandbags()),
    "sill": (11, rows("................", "................", "................", "................",
                      "................", ".FFFFFFFFFFFFFF.", ".FCCDCCCDCC56CF.", ".FDDDDDDDDD56DF.",
                      ".FFFFFFFFFFFFFF.", "..FEEEEEEEEEEF..", "...FF.FFFF.FFF..", "................",
                      "................", "................", "................", "................")),
    "beacon": (10, beacon()),
    "lean": (2, lean()),
    "cairn": (3, cairn()),
}


def slice_tiles():
    """Every picture cut into 8x8 tiles, empty ones dropped, equal ones shared. -> ({(name, tx, ty): tile id},
    [tile pixels in id order])"""
    where, tiles = {}, []
    for name, (_pal, g) in PICTURES.items():
        for ty in range(len(g) // 8):
            for tx in range(len(g[0]) // 8):
                t = tuple(g[ty * 8 + y][tx * 8 + x] for y in range(8) for x in range(8))
                if not any(t):
                    continue
                if t not in tiles:
                    tiles.append(t)
                where[(name, tx, ty)] = FIRST_TILE + tiles.index(t)
    if FIRST_TILE + len(tiles) - 1 > LAST_TILE:
        raise SystemExit(f"holiday kit: {len(tiles)} tiles, room for {LAST_TILE - FIRST_TILE + 1}")
    return where, tiles


def e(tile, pal, h=False, v=False):
    return tile | (0x400 if h else 0) | (0x800 if v else 0) | (pal << 12)


WATER = (e(454, 4), e(455, 4), e(455, 4), e(454, 4))          # General's sea
POND = (e(286, 1),) * 4                                       # General's still water
GRASS = (e(2, 2), e(3, 2), e(3, 2), e(2, 2))
SAND = (e(264, 5), e(280, 5), e(280, 5), e(264, 5))           # General's beach sand, as metatile 292 draws it
COBBLE = (e(548, 6), e(549, 6), e(564, 6), e(565, 6))         # the kit's cobble, metatile 563
PLANKS = (e(729, 5),) * 4                                     # the kit's plank tile (the thatched hall's wall)
POST = (e(271, 1), 0, e(398, 1), 0)                           # General's grey post
NONE = (0, 0, 0, 0)


def wanted(d, where):
    """[(name, 12 entries, attribute)] in id order from 512 + KIT_METATILES."""
    roofs = roof_tiles()

    def pic(name, cx, cy):
        pal = PICTURES[name][0]
        return tuple(e(where[k], pal) if (k := (name, cx * 2 + q % 2, cy * 2 + q // 2)) in where else 0 for q in range(4))

    want = []
    for pal in (10, 11):
        for m in HOUSE:
            w = tuple((en & 0x0FFF) | (pal << 12) if (en & 0x3FF) in roofs and (en >> 12) == 8 else en for en in d["mts"][m])
            want.append((f"roof {m} in palette {pal}", w, d["attrs"].get(m, 0)))
    want += [(n, WATER + PLANKS + NONE, 0) for n in ("jetty head", "jetty run", "jetty foot")]
    want += [("lights from a post", NONE + NONE + (e(where["lights_from", 0, 0], 10), e(where["lights", 1, 0], 10), 0, 0), 0),
             ("lights", NONE + NONE + pic("lights", 0, 0)[:2] + (0, 0), 0),
             ("lights to a post", NONE + NONE + (e(where["lights", 0, 0], 10), e(where["lights_to", 0, 0], 10), 0, 0), 0)]
    cloth, ban, end = e(where["cloth", 0, 0], 10), e(where["banner", 0, 0], 10), where["banner_end", 0, 0]
    want += [("planks over the pond", POND + PLANKS + NONE, 0),
             ("stake in sand", SAND + POST + NONE, 0),
             ("board in sand", SAND + (e(414, 3), e(415, 3), e(430, 3), e(431, 3)) + NONE, 0),
             ("red-cloth stake in sand", SAND + POST + (0, cloth, 0, 0), 0),
             ("red-cloth stake", GRASS + POST + (0, cloth, 0, 0), 0),
             ("banner from a post", NONE + NONE + (e(end, 10), ban, 0, 0), 0),
             ("banner", NONE + NONE + (ban, ban, 0, 0), 0),
             ("banner to a post", NONE + NONE + (ban, e(end, 10, h=True), 0, 0), 0),
             ("giving table, left", COBBLE + pic("table", 0, 0) + NONE, 0x80),      # MB_COUNTER: one talks across it
             ("giving table, right", COBBLE + pic("table", 1, 0) + NONE, 0x80)]
    want += [(f"beacon {r} {c}", GRASS + (NONE + pic("beacon", i, j) if j == 0 else pic("beacon", i, j) + NONE), 0)
             for j, r in enumerate(("top", "middle", "foot")) for i, c in enumerate(("left", "right"))]
    want += [("sandbags", GRASS + pic("sandbags", 0, 0) + NONE, 0),
             ("sill in sand", SAND + pic("sill", 0, 0) + NONE, 0),
             ("stage deck", GRASS + PLANKS + NONE, 0),
             ("rock in the sea", WATER + (e(141, 1), e(142, 1), e(157, 1), e(158, 1)) + NONE, 0)]    # 404's rock on open water
    flip = lambda four: tuple((en ^ 0x400) if en else 0 for en in (four[1], four[0], four[3], four[2]))
    want += [("leaning spruce, right: foot", NONE + pic("lean", 0, 1) + NONE, 0),
             ("leaning spruce, right: crown over grass", NONE + GRASS + pic("lean", 0, 0), 0),
             ("leaning spruce, left: foot", NONE + flip(pic("lean", 0, 1)) + NONE, 0),
             ("leaning spruce, left: crown over grass", NONE + GRASS + flip(pic("lean", 0, 0)), 0),
             ("cairn", GRASS + pic("cairn", 0, 0) + NONE, 0)]
    return want


NAMES = """863-872 red roofs (557 558 559 565 566 567 573 574 575 589), 873-882 the same in yellow, 883-885 jetty,
886-888 lights (from a post, run, to a post), 889 planks over the pond, 890 stake in sand, 891 board in sand,
892 red-cloth stake in sand, 893 red-cloth stake on grass, 894-896 banner (from a post, run, to a post),
897 898 giving table, 899-904 beacon (top l r, middle l r, foot l r), 905 sandbags, 906 sill in sand, 907 stage deck,
908 rock in the sea, 909 910 leaning spruce right (foot, crown over grass), 911 912 the same leaning left, 913 cairn"""


def read_pal(p):
    lines = p.read_text().splitlines()
    return lines, [tuple(int(x) for x in l.split()) for l in lines[3:19]]


def write_pal(p, lines, colours):
    p.write_text("\n".join(lines[:3] + [f"{c[0]} {c[1]} {c[2]}" for c in colours]) + "\n", newline="\r\n")


def want_palettes():
    """Palettes 10 and 11 from palette 8's base colours. -> {n: 16 colours}"""
    src = BASE / "08.pal" if (BASE / "08.pal").exists() else KIT / "palettes/08.pal"
    lines, p8 = read_pal(src)
    out = {}
    for n, ramp, extra in ((10, RED, BULBS), (11, YELLOW, None)):
        want = list(p8)
        want[1:5] = ramp
        if extra:
            want[12:16] = extra
        out[n] = want
    return lines, out


def palettes(check):
    """Written as plain (ungraded) colours: grade.py --apply takes a colour it has not graded as the new
    base and grades it, as it does for every outdoor palette. Once a base exists, it is the reference."""
    lines, want = want_palettes()
    bad = 0
    for n, colours in want.items():
        base_p = BASE / f"{n:02}.pal"
        have = read_pal(base_p)[1] if base_p.exists() else read_pal(KIT / f"palettes/{n:02}.pal")[1]
        if have != colours:
            bad += 1
            if not check:
                write_pal(KIT / f"palettes/{n:02}.pal", lines, colours)
                if base_p.exists():
                    write_pal(base_p, lines, colours)
    return bad


def tiles(check, rebuild=False):
    where, pics = slice_tiles()
    im = Image.open(KIT / "tiles.png")
    assert im.mode == "P" and im.size[0] == 128, im
    need = (FIRST_TILE + len(pics) - 1 - 512) // 16 + 1
    have_rows = im.size[1] // 8
    if rebuild or have_rows < need:
        if check and have_rows < need:
            return 1
        if not check:
            big = Image.new("P", (128, max(need, KIT_TILES // 16) * 8), 0)
            big.putpalette(im.getpalette())
            big.paste(im.crop((0, 0, 128, KIT_TILES // 16 * 8)), (0, 0))
            im = big
    drift = 0
    for i, t in enumerate(pics):
        n = FIRST_TILE + i - 512
        x0, y0 = (n % 16) * 8, (n // 16) * 8
        for j, v in enumerate(t):
            if im.getpixel((x0 + j % 8, y0 + j // 8)) != v:
                drift += 1
                if not check:
                    im.putpixel((x0 + j % 8, y0 + j // 8), v)
    if not check and (drift or rebuild or have_rows < need):
        im.save(KIT / "tiles.png", bits=4)
    return 1 if drift and check else 0


def roof_tiles():
    """The house's tiles that are roof and nothing else: they use the four roof blues (palette 8, entries 1-4)
    and otherwise only the greys (5-7), never the wall or window-frame entries (8 and up)."""
    im = Image.open(KIT / "tiles.png")
    d = mtile.load(PRIM, KIT)
    out = set()
    for m in HOUSE:
        for en in d["mts"][m]:
            t = en & 0x3FF
            if t < 512 or (en >> 12) != 8:
                continue
            x0, y0 = ((t - 512) % 16) * 8, ((t - 512) // 16) * 8
            px = {im.getpixel((x0 + x, y0 + y)) & 15 for y in range(8) for x in range(8)}
            if px & {1, 2, 3, 4} and px <= {0, 1, 2, 3, 4, 5, 6, 7}:
                out.add(t)
    return out


def metatiles(check):
    d = mtile.load(PRIM, KIT)
    where, _ = slice_tiles()
    bad = 0
    mfile, afile = KIT / "metatiles.bin", KIT / "metatile_attributes.bin"
    for i, (name, w, attr) in enumerate(wanted(d, where)):
        slot = 512 + KIT_METATILES + i
        if d["mts"].get(slot) == tuple(w) and d["attrs"].get(slot, 0) == attr:
            continue
        if check:
            print(f"{name}: not at {slot}"); bad += 1
            continue
        if slot in d["mts"]:
            print(f"{name}: slot {slot} holds something else; run with --rebuild"); bad += 1
            continue
        if len(mfile.read_bytes()) // 24 != slot - 512:
            print(f"{name}: the kit has {len(mfile.read_bytes()) // 24} metatiles, expected {slot - 512}"); bad += 1
            continue
        mfile.write_bytes(mfile.read_bytes() + struct.pack("<12H", *w))      # appended as is: equal ones stay apart
        afile.write_bytes(afile.read_bytes() + struct.pack("<H", attr))
        d = mtile.load(PRIM, KIT)
    return bad


def sheet(out):
    lines, want = want_palettes()
    for n in (2, 3):
        want[n] = read_pal(PRIM / f"palettes/{n:02}.pal")[1]
    names = list(PICTURES)
    sc = 6
    wid = sum(len(PICTURES[n][1][0]) for n in names) + 4 * len(names)
    im = Image.new("RGB", (wid * sc, 52 * sc), (72, 160, 120))
    x = 2
    for n in names:
        pal, g = PICTURES[n]
        for yy, r in enumerate(g):
            for xx, v in enumerate(r):
                if v:
                    im.paste(want[pal][v], ((x + xx) * sc, (2 + yy) * sc, (x + xx + 1) * sc, (3 + yy) * sc))
        x += len(g[0]) + 4
    im.save(out)


def main():
    if "--sheet" in sys.argv:
        sheet(sys.argv[sys.argv.index("--sheet") + 1])
        return 0
    check, rebuild = "--check" in sys.argv, "--rebuild" in sys.argv
    if rebuild:
        for name, per in (("metatiles.bin", 24), ("metatile_attributes.bin", 2)):
            f = KIT / name
            f.write_bytes(f.read_bytes()[:KIT_METATILES * per])
    bad = palettes(check)
    if not check:
        bad = 0
    bad += tiles(check, rebuild)
    bad += metatiles(check)
    print("holiday kit:", "ok" if not bad else f"{bad} problem(s)")
    if rebuild and not bad:
        # the drawing passes append their own metatiles after these (a fir tip over a roof, lights over a rail),
        # in the order the maps are drawn: draw the island's maps again, always in this order
        import subprocess
        for name in MAPS:
            canvas = ROOT / "data/layouts" / name / "canvas.txt"
            if canvas.exists() and "general__leob_lilycove" in canvas.read_text().split("\n", 1)[0]:
                subprocess.run([sys.executable, str(ROOT / "tools/skald/draw.py"), str(canvas)], check=True,
                               stdout=subprocess.DEVNULL)
                print("  redrawn:", name)
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
