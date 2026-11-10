#!/usr/bin/env python3
"""Relabel the PokéNav's map option and header from HOENN MAP to SKALDMERE.

The PokéNav draws its menu labels and left-hand headers from images, in a
6px-pitch pixel font (white fill, dark outline, grey shade). This script
cuts the glyphs it needs out of the stock labels (RIBBONS, TOUGH, CONDITION,
MATCH CALL, SEARCH, HOENN MAP), draws the one letter the stock set lacks (K)
in the same style, and rewrites:

  graphics/pokenav/options/hoenn_map.png      the menu button (four 32x16
                                              strips that form a 128x16 bar)
  graphics/pokenav/left_headers/hoenn_map.png the map screen header (the top
                                              64x32 banner; FULL VIEW and ZOOM
                                              VIEW below it are untouched)

Deterministic; run from anywhere:  python3 tools/skald/pokenav_labels.py
"""
import os
from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parents[2]
OPT = ROOT / "graphics" / "pokenav" / "options"
HDR = ROOT / "graphics" / "pokenav" / "left_headers"

WHITE, OUTLINE, SHADE = 1, 2, 3
TEXT = {WHITE, OUTLINE, SHADE}
PITCH = 6
GLYPH_W, GLYPH_ROWS = 6, (3, 15)   # slice width (the pitch); rows of the 16px strip that hold a glyph


def virtual(path):
    """The four 32x16 strips of an option image, laid side by side."""
    im = Image.open(path)
    assert im.mode == "P" and im.size == (32, 64), path
    out = Image.new("P", (128, 16))
    out.putpalette(im.getpalette())
    for k in range(4):
        out.paste(im.crop((0, k * 16, 32, (k + 1) * 16)), (k * 32, 0))
    return out


def unvirtual(bar, path, palette):
    out = Image.new("P", (32, 64))
    out.putpalette(palette)
    for k in range(4):
        out.paste(bar.crop((k * 32, 0, (k + 1) * 32, 16)), (0, k * 16))
    out.save(path)


def cut(bar, x):
    """A 7x12 glyph mask (palette indices, 0 = transparent) from a label bar."""
    px = bar.load()
    y0, y1 = GLYPH_ROWS
    return [[px[x + dx, y] if px[x + dx, y] in TEXT else 0 for dx in range(GLYPH_W)] for y in range(y0, y1)]


def harvest():
    glyphs = {}

    def word(path, x, letters):
        bar = virtual(path)
        for i, ch in enumerate(letters):
            glyphs.setdefault(ch, cut(bar, x + i * PITCH))
    word(OPT / "hoenn_map.png", 16, "HOENN")
    word(OPT / "hoenn_map.png", 49, "MAP")
    word(OPT / "ribbons.png", 16, "RIBBONS")
    word(OPT / "tough.png", 8, "TOUGH")
    word(OPT / "condition.png", 16, "CONDITION")
    word(OPT / "match_call.png", 49, "CALL")
    word(OPT / "search.png", 16, "SEARCH")
    # K is not in any stock label. The font is a 5x9 white fill with a dark
    # drop shadow at (+1,0), (0,+1) and (+1,+1); build K the same way.
    fill = [
        "#...#",
        "#...#",
        "#..#.",
        "#.#..",
        "##...",
        "#.#..",
        "#..#.",
        "#...#",
        "#...#",
    ]
    g = [[0] * GLYPH_W for _ in range(GLYPH_ROWS[1] - GLYPH_ROWS[0])]
    for r, row in enumerate(fill):
        for c, ch in enumerate(row):
            if ch == "#":
                g[1 + r][c] = WHITE
    for r in range(len(g)):
        for c in range(GLYPH_W):
            if g[r][c] == WHITE:
                for dr, dc in ((0, 1), (1, 0), (1, 1)):
                    rr, cc = r + dr, c + dc
                    if rr < len(g) and cc < GLYPH_W and g[rr][cc] == 0:
                        g[rr][cc] = OUTLINE
    glyphs["K"] = g
    return glyphs


def draw(bar, glyphs, text, x, top):
    """Draw text at 6px pitch; `top` is the bar row that glyph row 0 lands on."""
    px = bar.load()
    for ch in text:
        if ch == " ":
            x += 3
            continue
        g = glyphs[ch]
        for gy, row in enumerate(g):
            for gx, v in enumerate(row):
                if v:
                    px[x + gx, top + gy] = v
        x += PITCH
    return x


def clear(bar, x0, x1, y0, y1, base_of_row):
    px = bar.load()
    for y in range(y0, y1):
        for x in range(x0, x1):
            if px[x, y] in TEXT:
                px[x, y] = base_of_row(y)


def relabel_option(glyphs):
    path = OPT / "hoenn_map.png"
    palette = Image.open(path).getpalette()
    bar = virtual(path)
    # rows 0-1 highlight, 2-13 body, 14-15 shadow (measured on the stock bar)
    clear(bar, 15, 76, 3, 16, lambda y: 5 if y < 2 else (4 if y < 14 else 6))
    draw(bar, glyphs, "SKALDMERE", 16, GLYPH_ROWS[0])
    unvirtual(bar, path, palette)


def relabel_header(glyphs):
    path = HDR / "hoenn_map.png"
    im = Image.open(path)
    assert im.mode == "P" and im.size == (64, 96), path
    px = im.load()
    # the stock bar ends at column 55; SKALDMERE needs four more, so extend it
    for x in range(56, 60):
        for y in range(0, 24):
            px[x, y] = px[50, y]
    clear(im, 3, 60, 6, 19, lambda y: px[2, y] if px[2, y] not in TEXT else 8)
    # text sits at rows 7-17 in the header, i.e. glyph row 0 on row 6
    draw(im, glyphs, "SKALDMERE", 4, 6)
    im.save(path)


def main():
    glyphs = harvest()
    relabel_option(glyphs)
    relabel_header(glyphs)
    prev = Path(os.environ.get("SKALD_PREVIEW_DIR", "/tmp"))
    k = 6
    bar = virtual(OPT / "hoenn_map.png")
    hdr = Image.open(HDR / "hoenn_map.png").crop((0, 0, 64, 32))
    sheet = Image.new("RGBA", (128 * k, 16 * k + 32 * k + 8), (40, 40, 40, 255))
    sheet.paste(bar.convert("RGBA").resize((128 * k, 16 * k), Image.NEAREST), (0, 0))
    sheet.paste(hdr.convert("RGBA").resize((64 * k, 32 * k), Image.NEAREST), (0, 16 * k + 8))
    sheet.save(prev / "pokenav_labels_new.png")
    print("relabelled; preview", prev / "pokenav_labels_new.png")


if __name__ == "__main__":
    main()
