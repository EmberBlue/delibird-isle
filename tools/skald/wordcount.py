#!/usr/bin/env python3
"""Count the hand-written words in Skaldmere's dialogue and documents.

What counts: every string inside format(...) or msgbox(...) in the Parcel*
map scripts and the shared skald_*.pory scripts, except in scripts whose
names mark the rematch tiers (_R2.._R9, _FirstWin, _Rematch); the _("...")
strings of the Field Notebook (src/survey_scripting.c); and the Pokédex
descriptions the project rewrote (the species named in tools/skald/dex_species.txt,
one per line, if that file exists; otherwise every description in the
gen_*_families.h files that mentions Skaldmere places is skipped and the
total is reported without them).

Usage:  python3 tools/skald/wordcount.py [--rematch]   (--rematch includes the tiers)
"""
import glob
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SKIP = re.compile(r"_R[2-9]\b|_FirstWin\b|_Rematch\b")
STR = re.compile(r'"((?:[^"\\]|\\.)*)"')


def clean(s):
    s = re.sub(r"\{[A-Z_0-9]+\}", " ", s)            # {STR_VAR_1}, {PLAYER}, {COLOR ...}
    s = s.replace("\\p", " ").replace("\\n", " ").replace("\\l", " ")
    s = s.replace("\\\"", " ").replace("--", " ")
    return s


def words(s):
    return len([w for w in re.split(r"\s+", clean(s)) if re.search(r"[A-Za-z0-9]", w)])


def count_pory(path, include_rematch):
    total = 0
    text = path.read_text(encoding="utf-8")
    # split into top-level blocks: script/text/mapscripts/movement ... { ... }
    for m in re.finditer(r"^(script|text)\s+(?:\([^)]*\)\s*)?(\w+)\s*\{(.*?)^\}", text, re.S | re.M):
        kind, name, body = m.groups()
        if not include_rematch and SKIP.search(name):
            continue
        # every string literal in a script or text block is dialogue
        # (format(), msgbox(), trainerbattle lines); count each once
        body = re.sub(r"//[^\n]*", "", body)
        for s in STR.findall(body):
            total += words(s)
    return total


def count_c_strings(path):
    text = Path(path).read_text(encoding="utf-8")
    return sum(words(s) for s in re.findall(r'_\("((?:[^"\\]|\\.)*)"\)', text))


def count_dex():
    names_file = ROOT / "tools" / "skald" / "dex_species.txt"
    if not names_file.exists():
        return 0, 0
    names = [l.strip() for l in names_file.read_text().splitlines() if l.strip()]
    total = 0
    found = 0
    for f in glob.glob(str(ROOT / "src/data/pokemon/species_info/gen_*_families.h")):
        text = Path(f).read_text(encoding="utf-8")
        for n in names:
            m = re.search(r"\[SPECIES_%s\]\s*=\s*\{(.*?)\n    \},?\n" % re.escape(n), text, re.S)
            if not m:
                continue
            d = re.search(r"\.description\s*=\s*COMPOUND_STRING\((.*?)\)\s*,", m.group(1), re.S)
            if d:
                found += 1
                total += sum(words(s) for s in STR.findall(d.group(1)))
    return total, found


def main():
    include_rematch = "--rematch" in sys.argv
    # the retired, unreachable maps (see tools/skald/audit.py RETIRED_MAPS) do not count
    retired = {"ParcelStation", "ParcelBridge", "ParcelStationHall"}
    scripts = sorted(p for p in glob.glob(str(ROOT / "data/maps/Parcel*/scripts.pory")) if Path(p).parent.name not in retired) + sorted(glob.glob(str(ROOT / "data/scripts/skald_*.pory")))
    pory = sum(count_pory(Path(p), include_rematch) for p in scripts)
    notebook = count_c_strings(ROOT / "src/survey_scripting.c")
    dex, species = count_dex()
    print("scripts   %7d words in %d files%s" % (pory, len(scripts), " (rematch tiers included)" if include_rematch else ""))
    print("notebook  %7d words" % notebook)
    print("dex       %7d words in %d species" % (dex, species))
    print("total     %7d" % (pory + notebook + dex))


if __name__ == "__main__":
    main()
