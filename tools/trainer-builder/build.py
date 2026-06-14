#!/usr/bin/env python3
"""Build the self-contained Trainer Builder app.

Reads the real constant headers in this repo (species, moves, abilities, items,
trainer classes, pics, encounter music, AI flags) and bundles them — together
with the UI template, the .party serializer, and the app logic — into a single
self-contained ``trainer-builder.html`` you can open in any browser.

Because every option offered by the app comes straight from these headers, and
the app emits *constant* forms (SPECIES_POOCHYENA, MOVE_TACKLE, ...), the .party
text it produces is guaranteed to refer to constants that actually exist — so it
compiles. See README.md.

Usage:  python3 tools/trainer-builder/build.py
Re-run whenever the dex / move list / classes change.
"""

import json
import os
import re
import sys
from datetime import datetime, timezone

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
INC = os.path.join(ROOT, "include", "constants")


def read(path):
    with open(path, "r", encoding="utf-8", errors="replace") as f:
        return f.read()


def pretty(const, prefix):
    name = const[len(prefix):].lstrip("_")
    if not name:
        return const
    return " ".join(p.capitalize() for p in name.split("_"))


def parse_defines(text, prefix, want_value=False):
    """Return list of (CONST, value-or-None) for ``#define PREFIX...`` lines."""
    out = []
    pat = re.compile(r"^\s*#define\s+(" + re.escape(prefix) + r"[A-Z0-9_]+)\b[ \t]*(.*)$")
    for line in text.splitlines():
        m = pat.match(line)
        if not m:
            continue
        const = m.group(1)
        rest = m.group(2).strip()
        val = None
        if want_value:
            vm = re.match(r"(\d+)", rest)
            if vm:
                val = int(vm.group(1))
        out.append((const, val))
    return out


def species_list():
    text = read(os.path.join(INC, "species.h"))
    seen = {}
    for const, val in parse_defines(text, "SPECIES_", want_value=True):
        if const == "SPECIES_NONE":
            continue
        if val is None:           # alias define (e.g. SPECIES_DEOXYS -> ..._NORMAL)
            continue
        if val == 0:
            continue
        # First numeric definition wins (base species, not later form aliases).
        if const in seen:
            continue
        seen[const] = val
    items = []
    for const, val in sorted(seen.items(), key=lambda kv: kv[1]):
        items.append({"c": const, "n": pretty(const, "SPECIES_"), "v": val})
    return items


def simple_list(filename, prefix, exclude=()):
    text = read(os.path.join(INC, filename))
    out, seen = [], set()
    for const, _ in parse_defines(text, prefix):
        if const in seen or const in exclude:
            continue
        if const.endswith("_COUNT") or const.endswith("_NONE"):
            continue
        seen.add(const)
        out.append({"c": const, "n": pretty(const, prefix)})
    return out


def class_list():
    text = read(os.path.join(INC, "trainers.h"))
    out, seen = [], set()
    for const, _ in parse_defines(text, "TRAINER_CLASS_"):
        if const in seen or const.endswith("_COUNT"):
            continue
        seen.add(const)
        out.append({"c": const, "n": pretty(const, "TRAINER_CLASS_")})
    return out


def pic_list():
    text = read(os.path.join(INC, "trainers.h"))
    out, seen = [], set()
    for const, _ in parse_defines(text, "TRAINER_PIC_"):
        if const.startswith("TRAINER_PIC_NAME_LENGTH") or const.endswith("_COUNT"):
            continue
        if const in seen:
            continue
        seen.add(const)
        out.append({"c": const, "n": pretty(const, "TRAINER_PIC_")})
    return out


def music_list():
    text = read(os.path.join(INC, "trainers.h"))
    out = []
    for const, _ in parse_defines(text, "TRAINER_ENCOUNTER_MUSIC_"):
        out.append({"c": const, "n": pretty(const, "TRAINER_ENCOUNTER_MUSIC_")})
    return out


def ai_list():
    text = read(os.path.join(INC, "battle_ai.h"))
    common = {
        "AI_FLAG_BASIC_TRAINER", "AI_FLAG_SMART_TRAINER", "AI_FLAG_TRY_TO_FAINT",
        "AI_FLAG_CHECK_BAD_MOVE", "AI_FLAG_CHECK_VIABILITY", "AI_FLAG_RISKY",
        "AI_FLAG_HP_AWARE", "AI_FLAG_SMART_SWITCHING", "AI_FLAG_ACE_POKEMON",
        "AI_FLAG_OMNISCIENT", "AI_FLAG_CONSERVATIVE", "AI_FLAG_PREFER_STATUS_MOVES",
        "AI_FLAG_STALL", "AI_FLAG_TRY_TO_2HKO",
    }
    out, seen = [], set()
    for const, _ in parse_defines(text, "AI_FLAG_"):
        if const in seen or const.endswith("_COUNT") or const == "AI_FLAG_NONE":
            continue
        if const.startswith("AI_FLAG_ID"):
            continue
        seen.add(const)
        out.append({"c": const, "n": pretty(const, "AI_FLAG_"),
                    "common": const in common})
    return out


def build_data():
    data = {
        "species": species_list(),
        "moves": simple_list("moves.h", "MOVE_", exclude=("MOVE_UNAVAILABLE",)),
        "abilities": simple_list("abilities.h", "ABILITY_"),
        "items": simple_list("items.h", "ITEM_"),
        "classes": class_list(),
        "pics": pic_list(),
        "music": music_list(),
        "aiFlags": ai_list(),
        "meta": {
            "generated": datetime.now(timezone.utc).strftime("%Y-%m-%d %H:%M UTC"),
            # National-dex value cutoffs (verified in species.h): canon = Gens 1-3
            # plus Gen 4 continuations -> internal values 1..493.
            "canonMaxValue": 493,
            "genCutoffs": {"1": 151, "2": 251, "3": 386, "4": 493},
        },
    }
    return data


def main():
    data = build_data()
    data["meta"]["count"] = {k: len(v) for k, v in data.items() if isinstance(v, list)}

    serializer = read(os.path.join(HERE, "src", "serializer.js"))
    app = read(os.path.join(HERE, "src", "app.js"))
    template = read(os.path.join(HERE, "src", "template.html"))

    data_js = "globalThis.TBDATA = " + json.dumps(data, separators=(",", ":")) + ";"

    html = (template
            .replace("/*{{DATA}}*/", data_js)
            .replace("/*{{SERIALIZER}}*/", serializer)
            .replace("/*{{APP}}*/", app))

    out_path = os.path.join(HERE, "trainer-builder.html")
    with open(out_path, "w", encoding="utf-8") as f:
        f.write(html)

    # Also emit data.js so the Node self-test and ad-hoc tooling can use it.
    with open(os.path.join(HERE, "src", "data.js"), "w", encoding="utf-8") as f:
        f.write(data_js + "\nif(typeof module!=='undefined')module.exports=globalThis.TBDATA;\n")

    counts = data["meta"]["count"]
    print("Built", os.path.relpath(out_path, ROOT))
    for k in ("species", "moves", "abilities", "items", "classes", "pics", "music", "aiFlags"):
        print("  %-10s %5d" % (k, counts[k]))
    print("  size       %5d KB" % (len(html.encode("utf-8")) // 1024))


if __name__ == "__main__":
    sys.exit(main())
