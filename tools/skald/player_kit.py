#!/usr/bin/env python3
"""The player in the Survey's field kit.

Both avatars keep their stock pixels (walking, running, surfing, bikes, fishing,
the battle back sprite, the trainer-card picture) and change clothes through
their palettes: the Hoenn green (hat band and bag on one, bandana and bag on
the other) becomes the Survey's red marker cloth, and the red shirt becomes the
Survey's olive -- the same olive and red the cast wears (skald_survey.pal).
Skin, hair, whites and the dark trousers are untouched. The reflection palettes
follow the base palettes by the same per-entry offset the stock pair had.

Idempotent:  python3 tools/skald/player_kit.py  [--check]
"""
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
OW = ROOT / "graphics/object_events/palettes"
TR = ROOT / "graphics/trainers/palettes"

RED_CLOTH = [(212, 70, 60), (156, 30, 34)]     # replaces the green pair (10, 11); a shade deeper than the
                                               # cast's cloth because here it covers the whole pack
OLIVE = [(168, 168, 104), (112, 112, 64)]      # replaces the red pair (12, 13)
KIT = {10: RED_CLOTH[0], 11: RED_CLOTH[1], 12: OLIVE[0], 13: OLIVE[1]}

# stock values the offsets of the reflection palettes are measured against
STOCK = {
    "brendan": {10: (115, 205, 115), 11: (74, 148, 82), 12: (255, 98, 90), 13: (197, 65, 65)},
    "may": {10: (106, 213, 65), 11: (65, 172, 32), 12: (255, 98, 90), 13: (197, 65, 65)},
}


def read_pal(p):
    lines = p.read_text().splitlines()
    assert lines[0].strip() == "JASC-PAL", p
    return lines, [tuple(int(x) for x in l.split()) for l in lines[3:19]]


def write_pal(p, lines, colours):
    # .gitattributes: *.pal text eol=crlf
    p.write_text("\n".join(lines[:3] + [f"{c[0]} {c[1]} {c[2]}" for c in colours]) + "\n", newline="\r\n")


def clamp(c):
    return tuple(max(0, min(255, int(round(v)))) for v in c)


def main(check=False):
    changed = 0
    for who in ("brendan", "may"):
        base_p, refl_p, tr_p = OW / f"{who}.pal", OW / f"{who}_reflection.pal", TR / f"{who}.pal"
        for p in (base_p, tr_p):
            lines, cols = read_pal(p)
            new = list(cols)
            for i, c in KIT.items():
                new[i] = c
            if new != cols:
                changed += 1
                if check:
                    print(f"{p.relative_to(ROOT)} would change")
                else:
                    write_pal(p, lines, new)
                    print(f"wrote {p.relative_to(ROOT)}")
        # reflection: stock offset (reflection - stock base) carried onto the kit colours
        lines, refl = read_pal(refl_p)
        new = list(refl)
        for i, c in KIT.items():
            s = STOCK[who][i]
            # the stock reflection entry is recovered from the current one only if the base is still
            # stock; otherwise the offset was already applied, so recompute from the stock table
            off = tuple(r - b for r, b in zip(STOCK_REFL[who][i], s))
            new[i] = clamp(tuple(a + o for a, o in zip(c, off)))
        if new != refl:
            changed += 1
            if check:
                print(f"{refl_p.relative_to(ROOT)} would change")
            else:
                write_pal(refl_p, lines, new)
                print(f"wrote {refl_p.relative_to(ROOT)}")
    print(("drift" if check else "changed") + f": {changed} palettes")


# the stock reflection entries 10-13 (graphics/object_events/palettes/*_reflection.pal as shipped)
STOCK_REFL = {
    "brendan": {10: (164, 246, 156), 11: (123, 205, 123), 12: (255, 156, 156), 13: (230, 123, 139)},
    "may": {10: (164, 246, 156), 11: (123, 205, 123), 12: (255, 156, 156), 13: (230, 123, 139)},
}

if __name__ == "__main__":
    main(check="--check" in sys.argv)
