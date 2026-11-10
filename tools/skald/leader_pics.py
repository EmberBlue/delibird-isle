#!/usr/bin/env python3
"""Battle-sprite palettes for the Skaldmere leaders and Cordelia.

The leaders fight with stock trainer pictures; this gives each a palette of
their own so the battle sprite matches the overworld sprite from
cast_sprites.py (Survey olive and red cloth, Mereholt charcoal and silver).
The pixel data is untouched -- a TRAINER_SPRITE entry pairs the stock
picture with the new palette (src/data/graphics/trainers.h).

Writes graphics/trainers/palettes/skald_<name>.pal (JASC) and a preview
sheet to $SKALD_PREVIEW_DIR/leader_pics.png.

Run from anywhere:  python3 tools/skald/leader_pics.py
"""
import os
from pathlib import Path

from PIL import Image, ImageDraw

ROOT = Path(__file__).resolve().parents[2]
PICS = ROOT / "graphics" / "trainers" / "front_pics"
PALS = ROOT / "graphics" / "trainers" / "palettes"


def g(r, gg, b):
    return (r & ~7, gg & ~7, b & ~7)


OLIVE = [g(160, 160, 96), g(104, 108, 56), g(56, 60, 32)]
RED = [g(232, 88, 80), g(184, 32, 40), g(112, 8, 24)]
GREY = [g(208, 208, 216), g(144, 144, 152), g(72, 72, 88)]
TEAL = [g(128, 200, 200), g(56, 136, 144), g(24, 72, 88)]
CHARCOAL = [g(128, 128, 144), g(72, 72, 88), g(32, 32, 48)]
SILVER = [g(232, 232, 240), g(176, 176, 192), g(104, 104, 120)]
NAVY = [g(72, 96, 128), g(40, 56, 80), g(24, 32, 48)]

# name -> (stock picture, {palette index: new colour})
# expert_m / expert_f share one palette: 6,7 the blue hakama; 11 gold; 12,13 red.
# ranger_f: 10 yellow, 11-13 the orange jacket (light, mid, dark).
# glacia: 6-8 the purple gown; 9-11 blonde hair and gold; 12,13 pale trim.
# gentleman: 4 hat brown; 5-8 the brown suit (light..dark); 12,13 blue.
# fisherman: 7,8 yellow; 12,13 the orange vest.
LEADERS = {
    "mirren": ("expert_m", {6: OLIVE[1], 7: OLIVE[2]}),
    "breen": ("expert_m", {6: RED[1], 7: RED[2]}),
    "sluice": ("expert_f", {6: OLIVE[1], 7: OLIVE[2]}),
    "vale": ("expert_f", {6: RED[1], 7: RED[2]}),
    "ilex": ("pokemon_ranger_f", {10: GREY[2], 11: OLIVE[0], 12: OLIVE[1], 13: OLIVE[2],
                                  4: g(72, 72, 88), 5: g(40, 40, 56)}),
    "harland": ("fisherman", {12: NAVY[1], 13: NAVY[2], 7: g(200, 176, 112), 8: g(152, 128, 80)}),
    "vane": ("gentleman", {4: CHARCOAL[2], 5: SILVER[1], 6: CHARCOAL[0], 7: CHARCOAL[1], 8: CHARCOAL[2]}),
    "cordelia": ("elite_four_glacia", {6: CHARCOAL[0], 7: CHARCOAL[1], 8: CHARCOAL[2],
                                       9: SILVER[0], 10: SILVER[1], 11: SILVER[2],
                                       12: TEAL[0], 13: TEAL[1]}),
}


def main():
    PALS.mkdir(parents=True, exist_ok=True)
    prev_dir = Path(os.environ.get("SKALD_PREVIEW_DIR", "/tmp"))
    sheet = Image.new("RGBA", (len(LEADERS) * 200, 2 * 200 + 16), (40, 40, 40, 255))
    d = ImageDraw.Draw(sheet)
    for i, (name, (base, changes)) in enumerate(LEADERS.items()):
        im = Image.open(PICS / (base + ".png"))
        assert im.mode == "P"
        pal = im.getpalette()[:48]
        colours = [tuple(pal[k * 3:k * 3 + 3]) for k in range(16)]
        before = im.convert("RGBA")
        for idx, rgb in changes.items():
            colours[idx] = rgb
        with open(PALS / ("skald_%s.pal" % name), "w", newline="\r\n") as f:
            f.write("JASC-PAL\n0100\n16\n")
            for r, gg, b in colours:
                f.write("%d %d %d\n" % (r, gg, b))
        after = im.copy()
        after.putpalette([c for rgb in colours for c in rgb])
        d.text((i * 200 + 2, 2), "%s (%s)" % (name, base), fill=(255, 255, 255, 255))
        sheet.paste(before.resize((192, 192), Image.NEAREST), (i * 200, 16))
        sheet.paste(after.convert("RGBA").resize((192, 192), Image.NEAREST), (i * 200, 216))
    sheet.save(prev_dir / "leader_pics.png")
    print("wrote %d palettes to %s; preview %s" % (len(LEADERS), PALS, prev_dir / "leader_pics.png"))


if __name__ == "__main__":
    main()
