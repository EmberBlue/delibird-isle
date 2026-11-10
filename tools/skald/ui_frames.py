#!/usr/bin/env python3
"""Restyle the dialogue box and the default menu border for Skaldmere.

* graphics/text_window/message_box.png  -- the speech box keeps its shape; its
  three border colours (Emerald's teal / green / blue, palette indices 13-15)
  become ice, slate and dark slate. Text colours (1-3) and the coloured-text
  entries (4-9) are untouched, so every {COLOR} in the scripts still reads.
* graphics/text_window/1.png            -- the default window frame (menus,
  the start menu, yes/no boxes) is redrawn as a slate band with an ice rule,
  rounded at the corners.

Deterministic; run from anywhere:  python3 tools/skald/ui_frames.py
"""
from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parents[2]
TW = ROOT / "graphics" / "text_window"


def g(r, gg, b):
    return (r & ~7, gg & ~7, b & ~7)


ICE = g(176, 208, 224)
SLATE = g(96, 128, 160)
DARK = g(40, 56, 80)


def restyle_message_box():
    im = Image.open(TW / "message_box.png")
    assert im.mode == "P"
    pal = im.getpalette()
    for idx, rgb in ((13, ICE), (14, SLATE), (15, DARK)):
        pal[idx * 3:idx * 3 + 3] = list(rgb)
    im.putpalette(pal)
    im.save(TW / "message_box.png")


def draw_frame1():
    """24x24: nine 8x8 tiles -- corners, edges and the (white) centre."""
    n = 24
    colours = {
        0: g(96, 200, 96),    # transparent
        1: DARK,              # outer line
        2: SLATE,             # band
        3: g(72, 96, 128),    # band shadow (bottom/right)
        4: ICE,               # inner rule
        5: g(128, 160, 192),  # band highlight (top/left)
        6: g(248, 248, 248),  # interior
    }
    im = Image.new("P", (n, n), 0)
    im.putpalette([c for i in range(16) for c in colours.get(i, (0, 0, 0))])
    for y in range(n):
        for x in range(n):
            d = min(x, y, n - 1 - x, n - 1 - y)          # distance from the outer edge
            # round the corners: the tip pixel and its two neighbours stay transparent
            corner = (min(x, n - 1 - x) + min(y, n - 1 - y))
            if corner <= 1:
                v = 0
            elif d == 0:
                v = 1
            elif d in (1, 2, 3):
                v = 5 if (y <= 3 or x <= 3) and not (y > n - 5 or x > n - 5) else (3 if (y > n - 5 or x > n - 5) else 2)
                if d == 3:
                    v = 2
            elif d == 4:
                v = 4
            elif d == 5:
                v = 1
            else:
                v = 6
            im.putpixel((x, y), v)
    # the corner tips: a dark pixel closes the rounded outline
    for (x, y) in ((2, 0), (0, 2), (n - 3, 0), (n - 1, 2), (2, n - 1), (0, n - 3), (n - 3, n - 1), (n - 1, n - 3)):
        im.putpixel((x, y), 1)
    im.save(TW / "1.png", bits=4)


def main():
    restyle_message_box()
    draw_frame1()
    print("restyled", TW / "message_box.png", "and", TW / "1.png")


if __name__ == "__main__":
    main()
