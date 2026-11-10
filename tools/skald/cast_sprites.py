#!/usr/bin/env python3
"""Build the Skaldmere cast's overworld sprites from the stock people sheets.

Each sprite is a stock 144x32 nine-frame sheet (down, up, left, 2x walk down,
2x walk up, 2x walk left; right is mirrored by the engine) with a new palette,
a palette-index remap (so a dress becomes a field coat, hair goes grey) and a
few pixel patches (a scarf, a collar). Two new 16-colour palettes carry the
factions' colours:

  skald_survey    olive field gear, the Survey's red marker cloth, greys
  skald_mereholt  Mereholt teal, charcoal suiting, silver

Outputs:
  graphics/object_events/pics/people/skald/<name>.png     (indexed, 16 colours)
  graphics/object_events/palettes/skald_{survey,mereholt}.pal
  $SKALD_PREVIEW_DIR/cast_sheet.png                        (6x contact sheet)

Run from anywhere:  python3 tools/skald/cast_sprites.py
"""
import os
from pathlib import Path

from PIL import Image, ImageDraw

ROOT = Path(__file__).resolve().parents[2]
PEOPLE = ROOT / "graphics" / "object_events" / "pics" / "people"
OUT = PEOPLE / "skald"
PAL_DIR = ROOT / "graphics" / "object_events" / "palettes"

FRAME_W, FRAME_H, FRAMES = 16, 32, 9


def g(r, gg, b):
    return (r & ~7, gg & ~7, b & ~7)


SKIN = [g(255, 213, 180), g(255, 197, 148), g(222, 148, 115), g(123, 65, 65)]
BG = g(115, 197, 164)

PALETTES = {
    "skald_survey": [BG] + SKIN + [
        g(160, 160, 96), g(104, 108, 56), g(56, 60, 32),        # 5-7 olive
        g(232, 88, 80), g(184, 32, 40), g(112, 8, 24),          # 8-10 red cloth
        g(208, 208, 216), g(144, 144, 152), g(72, 72, 88),      # 11-13 grey
        g(248, 248, 248), g(16, 16, 16)],
    "skald_mereholt": [BG] + SKIN + [
        g(128, 200, 200), g(56, 136, 144), g(24, 72, 88),       # 5-7 teal
        g(128, 128, 144), g(72, 72, 88), g(32, 32, 48),         # 8-10 charcoal
        g(232, 232, 240), g(176, 176, 192), g(104, 104, 120),   # 11-13 silver
        g(248, 248, 248), g(16, 16, 16)],
}

# Shorthands for the stock palettes' three colour triads (light, mid, dark).
A, B, Cc = (5, 6, 7), (8, 9, 10), (11, 12, 13)
OLIVE, RED, GREY = (5, 6, 7), (8, 9, 10), (11, 12, 13)        # skald_survey
TEAL, CHARCOAL, SILVER = (5, 6, 7), (8, 9, 10), (11, 12, 13)  # skald_mereholt
DARK_HAIR = (12, 13, 15)                                        # grey mid, grey dark, black
DARK_HAIR_M = (9, 10, 15)                                       # charcoal, charcoal dark, black


def triad(src, dst):
    return dict(zip(src, dst))


def load(name):
    im = Image.open(PEOPLE / (name + ".png"))
    assert im.mode == "P" and im.size == (FRAME_W * FRAMES, FRAME_H), name
    return [[im.getpixel((x, y)) for x in range(im.width)] for y in range(im.height)]


def frames(px):
    for f in range(FRAMES):
        yield f, f * FRAME_W


def patch_collar(px, garment, colours, rows=2, light_center=True):
    """Turn the top rows of a garment into a scarf/collar in the given triad."""
    light, mid, _dark = colours
    for _f, x0 in frames(px):
        top = None
        for y in range(FRAME_H):
            if any(px[y][x] in garment for x in range(x0, x0 + FRAME_W)):
                top = y
                break
        if top is None:
            continue
        for y in range(top, min(FRAME_H, top + rows)):
            xs = [x for x in range(x0, x0 + FRAME_W) if px[y][x] in garment]
            for x in xs:
                px[y][x] = mid
            if light_center and xs and y == top:
                px[y][xs[len(xs) // 2]] = light


def patch_hat_band(px, hat, colours):
    """Recolour the lowest row of a hat (its brim/band) to the triad's mid tone."""
    for _f, x0 in frames(px):
        rows = [y for y in range(FRAME_H) if any(px[y][x] in hat for x in range(x0, x0 + FRAME_W))]
        if rows:
            y = rows[-1]
            for x in range(x0, x0 + FRAME_W):
                if px[y][x] in hat:
                    px[y][x] = colours[1]


def splice(head_px, body_px, cut_row):
    """Rows above cut_row from the head sheet, the rest from the body sheet."""
    return [list(head_px[y]) if y < cut_row else list(body_px[y]) for y in range(FRAME_H)]


def remap(px, mapping):
    return [[mapping.get(v, v) for v in row] for row in px]


def save(name, px, palette):
    OUT.mkdir(parents=True, exist_ok=True)
    im = Image.new("P", (FRAME_W * FRAMES, FRAME_H))
    im.putpalette([c for rgb in PALETTES[palette] for c in rgb])
    for y in range(FRAME_H):
        for x in range(FRAME_W * FRAMES):
            im.putpixel((x, y), px[y][x])
    im.save(OUT / (name + ".png"), bits=4)
    return im


def write_pal(name):
    with open(PAL_DIR / (name + ".pal"), "w", newline="\r\n") as f:
        f.write("JASC-PAL\n0100\n16\n")
        for r, gg, b in PALETTES[name]:
            f.write("%d %d %d\n" % (r, gg, b))


def build():
    out = []

    # ILEX -- Skaldmere Survey. woman_2's bob and dress: dress to an olive field
    # coat, hair dark, the lavender trim to grey, and the Survey's red cloth at
    # the throat.
    px = remap(load("woman_2"), {**triad(B, OLIVE), **triad(Cc, DARK_HAIR), **triad(A, GREY)})
    patch_collar(px, set(OLIVE), RED)
    out.append(("ilex", save("ilex", px, "skald_survey"), "skald_survey"))

    # HERON -- old_woman: her hair was already lavender-grey, so it goes to the
    # greys; the green dress becomes a dark oilskin, the rust apron a red one.
    px = remap(load("old_woman"), {**triad(A, GREY), 8: 6, 9: 7, 10: 7, **triad(Cc, RED)})
    out.append(("heron", save("heron", px, "skald_survey"), "skald_survey"))

    # INGER -- the stringer. reporter_f: dark hair stays dark, the skirt goes
    # olive, the shirt goes red so she reads at a glance in a crowd.
    px = remap(load("reporter_f"), {**triad(A, DARK_HAIR), **triad(B, OLIVE), **triad(Cc, RED)})
    out.append(("inger", save("inger", px, "skald_survey"), "skald_survey"))

    # MIRREN and BREEN -- the two leaders who shared expert_m with Tarn. The
    # steel-blue coat goes olive (Mirren) or red (Breen); beard and hair grey.
    base = load("expert_m")
    px = remap(base, {**triad(A, OLIVE), **triad(Cc, GREY), **triad(B, GREY)})
    out.append(("mirren", save("mirren", px, "skald_survey"), "skald_survey"))
    px = remap(base, {**triad(A, RED), **triad(Cc, GREY), **triad(B, GREY)})
    out.append(("breen", save("breen", px, "skald_survey"), "skald_survey"))

    # SLUICE and VALE -- shared expert_f with Ilex. Olive for the River Board,
    # red for the Highlands; grey hair for both.
    base = load("expert_f")
    px = remap(base, {**triad(B, OLIVE), **triad(Cc, GREY), **triad(A, GREY)})
    out.append(("sluice", save("sluice", px, "skald_survey"), "skald_survey"))
    px = remap(base, {**triad(B, RED), **triad(Cc, GREY), **triad(A, GREY)})
    out.append(("vale", save("vale", px, "skald_survey"), "skald_survey"))

    # HOLLIS -- Mereholt Foundation. woman_5's bun and dress: a teal blazer-
    # dress, dark hair, silver trim.
    px = remap(load("woman_5"), {**triad(B, TEAL), **triad(Cc, DARK_HAIR_M), **triad(A, SILVER)})
    out.append(("hollis", save("hollis", px, "skald_mereholt"), "skald_mereholt"))

    # CORDELIA -- Chair and CEO. expert_f: silver hair, charcoal suit, a teal
    # scarf at the collar.
    px = remap(load("expert_f"), {**triad(B, CHARCOAL), **triad(Cc, SILVER), **triad(A, TEAL)})
    patch_collar(px, set(CHARCOAL), TEAL)
    out.append(("cordelia", save("cordelia", px, "skald_mereholt"), "skald_mereholt"))

    for name in PALETTES:
        write_pal(name)
    return out


def contact_sheet(sheets, path, k=6):
    sheet = Image.new("RGBA", (FRAME_W * FRAMES * k + 16, len(sheets) * (FRAME_H * k + 18)), (40, 40, 40, 255))
    d = ImageDraw.Draw(sheet)
    for i, (name, im, pal) in enumerate(sheets):
        y = i * (FRAME_H * k + 18)
        d.text((4, y + 2), "%s  (%s)" % (name, pal), fill=(255, 255, 255, 255))
        sheet.paste(im.convert("RGBA").resize((FRAME_W * FRAMES * k, FRAME_H * k), Image.NEAREST), (8, y + 16))
    sheet.save(path)


def main():
    sheets = build()
    prev = Path(os.environ.get("SKALD_PREVIEW_DIR", "/tmp"))
    contact_sheet(sheets, prev / "cast_sheet.png")
    print("wrote %d sheets to %s; preview %s" % (len(sheets), OUT, prev / "cast_sheet.png"))


if __name__ == "__main__":
    main()
