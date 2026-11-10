#!/usr/bin/env python3
"""The northern grade: one colour transform over every outdoor tileset palette.

Skaldmere is a cold temperate coast drawn with tropical Hoenn's palettes. This
applies one deterministic grade to all of them (the three primaries and every
secondary an outdoor Skaldmere layout pairs with them), so the maps keep one
hand: greens lean blue-green, sand and ash lose their yellow heat, saturation
comes down a notch, and the shadows take a slate cast. Index 0 is untouched.

State: tools/skald/palette_base/<tileset>/NN.pal holds the ungraded palettes.
The live palette is always grade(base). If a live entry differs from grade(base)
(kit_restyle.py or a hand edit wrote an absolute colour), that entry is taken
as a new base value first, so edits compose and the grade never stacks.

  python3 tools/skald/grade.py --preview MAP OUT.png [variant]   render a map with the grade, write nothing
  python3 tools/skald/grade.py --apply [variant]                 grade every outdoor palette (idempotent)
  python3 tools/skald/grade.py --check                           report drift, write nothing
"""
import colorsys
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))
BASE = ROOT / "tools/skald/palette_base"

OUTDOOR_TYPES = {"MAP_TYPE_TOWN", "MAP_TYPE_CITY", "MAP_TYPE_ROUTE", "MAP_TYPE_OCEAN_ROUTE", "MAP_TYPE_UNDERWATER"}


def clamp(x):
    return max(0, min(255, int(round(x))))


def grade_v1(rgb):
    r, g, b = (c / 255 for c in rgb)
    h, s, v = colorsys.rgb_to_hsv(r, g, b)
    hue = h * 360
    if 60 <= hue <= 170:                      # greens lean blue-green, most at the leafy middle
        hue += 10 * (1 - abs(hue - 115) / 55)
    if 30 <= hue < 60:                        # sand, ash, yellow soil: less heat
        s *= 0.8
        hue += 4
    s *= 0.9
    r, g, b = colorsys.hsv_to_rgb((hue % 360) / 360, min(s, 1), v)
    shadow = (1 - v) ** 2 * 0.3               # the darker the colour, the more slate in it
    r = r * (1 - shadow) + 0.14 * shadow
    g = g * (1 - shadow) + 0.18 * shadow
    b = b * (1 - shadow) + 0.32 * shadow
    r *= 0.97
    b = min(1.0, b * 1.03)
    return (clamp(r * 255), clamp(g * 255), clamp(b * 255))


def grade_v2(rgb):
    """Gentler: half the hue move, saturation 0.93, lighter shadow cast."""
    r, g, b = (c / 255 for c in rgb)
    h, s, v = colorsys.rgb_to_hsv(r, g, b)
    hue = h * 360
    if 60 <= hue <= 170:
        hue += 6 * (1 - abs(hue - 115) / 55)
    if 30 <= hue < 60:
        s *= 0.85
        hue += 3
    s *= 0.93
    r, g, b = colorsys.hsv_to_rgb((hue % 360) / 360, min(s, 1), v)
    shadow = (1 - v) ** 2 * 0.2
    r = r * (1 - shadow) + 0.14 * shadow
    g = g * (1 - shadow) + 0.18 * shadow
    b = b * (1 - shadow) + 0.32 * shadow
    r *= 0.98
    b = min(1.0, b * 1.02)
    return (clamp(r * 255), clamp(g * 255), clamp(b * 255))


def grade_v3(rgb):
    """v1's hue move and slate shadows, saturation 0.92 (v1 read a notch too grey in Fernwick)."""
    r, g, b = (c / 255 for c in rgb)
    h, s, v = colorsys.rgb_to_hsv(r, g, b)
    hue = h * 360
    if 60 <= hue <= 170:
        hue += 10 * (1 - abs(hue - 115) / 55)
    if 30 <= hue < 60:
        s *= 0.82
        hue += 4
    s *= 0.92
    r, g, b = colorsys.hsv_to_rgb((hue % 360) / 360, min(s, 1), v)
    shadow = (1 - v) ** 2 * 0.3
    r = r * (1 - shadow) + 0.14 * shadow
    g = g * (1 - shadow) + 0.18 * shadow
    b = b * (1 - shadow) + 0.32 * shadow
    r *= 0.97
    b = min(1.0, b * 1.03)
    return (clamp(r * 255), clamp(g * 255), clamp(b * 255))


VARIANTS = {"v1": grade_v1, "v2": grade_v2, "v3": grade_v3}
GRADE = "v3"   # the one applied; --preview/--apply take another name to compare


def grade_palette(colours, fn):
    return [colours[0]] + [fn(c) for c in colours[1:]]


def read_pal(p):
    lines = p.read_text().splitlines()
    assert lines[0].strip() == "JASC-PAL", p
    return lines, [tuple(int(x) for x in l.split()) for l in lines[3:19]]


def write_pal(p, lines, colours):
    # .gitattributes: *.pal text eol=crlf -- write what the checkout has, so git stays quiet
    p.write_text("\n".join(lines[:3] + [f"{c[0]} {c[1]} {c[2]}" for c in colours]) + "\n", newline="\r\n")


def outdoor_tilesets():
    import audit
    lay = {l["id"]: l for l in json.load(open(ROOT / "data/layouts/layouts.json"))["layouts"]}
    dirs = {}
    for mj in sorted((ROOT / "data/maps").glob("Parcel*/map.json")):
        m = json.load(open(mj))
        if m.get("map_type") not in OUTDOOR_TYPES or m["name"] in audit.RETIRED_MAPS:
            continue
        l = lay[m["layout"]]
        for sym, kind in ((l["primary_tileset"], "primary"), (l["secondary_tileset"], "secondary")):
            d = audit.tileset_dir(sym)
            if not d:
                d = ROOT / "data/tilesets" / kind / sym.replace("gTileset_", "").replace("Primary_", "").lower()
            dirs[sym] = d
    return dirs


def apply(check_only=False, variant=GRADE):
    fn = VARIANTS[variant]
    changes = 0
    for sym, d in sorted(outdoor_tilesets().items()):
        kind = d.parent.name
        pal_dir = d / "palettes"
        n = 6 if kind == "primary" else 13
        rng = range(0, 6) if kind == "primary" else range(6, 13)
        for i in rng:
            live_p = pal_dir / f"{i:02}.pal"
            if not live_p.exists():
                continue
            base_p = BASE / d.name / f"{i:02}.pal"
            lines, live = read_pal(live_p)
            if base_p.exists():
                _, base = read_pal(base_p)
                expected = grade_palette(base, fn)
                # an entry that is not grade(base) was written as an absolute colour: new base value
                new_base = [b if l == e else l for b, l, e in zip(base, live, expected)]
            else:
                new_base = live
            graded = grade_palette(new_base, fn)
            if new_base != (read_pal(base_p)[1] if base_p.exists() else None) or graded != live:
                changes += 1
                if check_only:
                    diff = sum(1 for a, b in zip(graded, live) if a != b)
                    print(f"{d.name}/{i:02}.pal: {diff} entries would change")
                else:
                    base_p.parent.mkdir(parents=True, exist_ok=True)
                    write_pal(base_p, lines, new_base)
                    write_pal(live_p, lines, graded)
    print(("drift" if check_only else "graded") + f": {changes} palettes ({variant})")
    return changes


def preview(map_name, out, variant=GRADE):
    import pal_tool
    fn = VARIANTS[variant]
    d = pal_tool.load(map_name)
    d["pals"] = [grade_palette(p, fn) for p in d["pals"]]
    pal_tool.to_rgb(pal_tool.code_map(d), d["pals"]).save(out)
    print("preview", map_name, variant, "->", out)


if __name__ == "__main__":
    a = sys.argv[1:]
    if a and a[0] == "--preview":
        preview(a[1], a[2], a[3] if len(a) > 3 else GRADE)
    elif a and a[0] == "--apply":
        apply(variant=a[1] if len(a) > 1 else GRADE)
    elif a and a[0] == "--check":
        apply(check_only=True)
    else:
        print(__doc__)
