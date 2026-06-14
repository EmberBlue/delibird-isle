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


# --- per-species learnsets (so the move picker reflects the actual ROM) -------
POKE = os.path.join(ROOT, "src", "data", "pokemon")
SKIP_MOVES = {"MOVE_NONE", "MOVE_UNAVAILABLE"}


def active_levelup_gen():
    """Resolve P_LVL_UP_LEARNSETS to the gen_N.h file actually compiled in."""
    cfg = read(os.path.join(ROOT, "include", "config", "pokemon.h"))
    m = re.search(r"#define\s+P_LVL_UP_LEARNSETS\s+(\w+)", cfg)
    val = m.group(1) if m else "GEN_LATEST"
    lu_dir = os.path.join(POKE, "level_up_learnsets")
    avail = sorted(int(re.match(r"gen_(\d+)\.h", f).group(1))
                   for f in os.listdir(lu_dir) if re.match(r"gen_\d+\.h$", f))
    if val == "GEN_LATEST":
        return max(avail)
    m2 = re.match(r"GEN_(\d+)", val)
    want = int(m2.group(1)) if m2 else max(avail)
    return max([g for g in avail if g <= want] or avail)   # dispatch picks highest <= want


def parse_levelup(path):
    text = read(path)
    out = {}
    for m in re.finditer(r"(s\w+LevelUpLearnset)\[\]\s*=\s*\{(.*?)\};", text, re.S):
        out[m.group(1)] = [(int(lvl), mv) for lvl, mv in
                           re.findall(r"LEVEL_UP_MOVE\(\s*(\d+)\s*,\s*(MOVE_\w+)\)", m.group(2))]
    return out


def parse_movelist(path, suffix):
    text = read(path)
    out = {}
    for m in re.finditer(r"(s\w+" + suffix + r")\[\]\s*=\s*\{(.*?)\};", text, re.S):
        out[m.group(1)] = re.findall(r"MOVE_\w+", m.group(2))
    return out


def parse_species_info():
    """Map SPECIES_X -> its level-up / egg / teachable array names (authoritative)."""
    out = {}
    sidir = os.path.join(POKE, "species_info")
    files = [os.path.join(sidir, f) for f in os.listdir(sidir) if f.endswith("_families.h")] \
        if os.path.isdir(sidir) else []
    for path in files:
        text = read(path)
        marks = [(m.group(1), m.end()) for m in re.finditer(r"\[SPECIES_(\w+)\]\s*=\s*\{", text)]
        for i, (sp, start) in enumerate(marks):
            end = marks[i + 1][1] if i + 1 < len(marks) else len(text)
            chunk = text[start:end]
            def field(name):
                mm = re.search(r"\." + name + r"\s*=\s*(s\w+)", chunk)
                return mm.group(1) if mm else None
            out[sp] = {"lvl": field("levelUpLearnset"),
                       "egg": field("eggMoveLearnset"),
                       "tm": field("teachableLearnset")}
    return out


def build_learnsets(move_index, species_consts):
    gen = active_levelup_gen()
    lv_store = parse_levelup(os.path.join(POKE, "level_up_learnsets", "gen_%d.h" % gen))
    egg_store = parse_movelist(os.path.join(POKE, "egg_moves.h"), "EggMoveLearnset")
    tm_store = parse_movelist(os.path.join(POKE, "teachable_learnsets.h"), "TeachableLearnset")
    info = parse_species_info()

    def idxs(moves):
        return [move_index[mv] for mv in moves if mv in move_index and mv not in SKIP_MOVES]

    learn = {}
    for sp_const in species_consts:
        suffix = sp_const[len("SPECIES_"):]
        rec = info.get(suffix)
        if not rec:
            continue
        entry = {}
        lv = lv_store.get(rec["lvl"]) if rec["lvl"] else None
        if lv:
            lst = [[lvl, move_index[mv]] for lvl, mv in lv if mv in move_index and mv not in SKIP_MOVES]
            if lst:
                entry["lv"] = lst
        egg = idxs(egg_store.get(rec["egg"], [])) if rec["egg"] else []
        if egg:
            entry["egg"] = egg
        tm = idxs(tm_store.get(rec["tm"], [])) if rec["tm"] else []
        if tm:
            entry["tm"] = tm
        if entry:
            learn[suffix] = entry
    return learn, gen


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
    # Per-species learnsets (move indices into data["moves"]). Built for canon
    # species (Gen 1-4) to keep the bundle lean; others fall back to "all moves".
    move_index = {m["c"]: i for i, m in enumerate(data["moves"])}
    canon = [s["c"] for s in data["species"] if s["v"] <= data["meta"]["canonMaxValue"]]
    learn, gen = build_learnsets(move_index, canon)
    data["learn"] = learn
    data["meta"]["learnGen"] = gen
    data["meta"]["learnCount"] = len(learn)
    return data


# Demo trainer loaded by the app's #demo link. The private build uses a canon
# example; the public build uses a generic, content-free one so nothing from the
# design bible is ever published.
PRIVATE_DEMO = {
    "id": "TRAINER_SKALD_ENFORCER", "name": "VOSS",
    "trainerClass": "TRAINER_CLASS_EXPERT", "pic": "TRAINER_PIC_EXPERT_M",
    "gender": "Male", "music": "TRAINER_ENCOUNTER_MUSIC_INTENSE",
    "ai": ["AI_FLAG_BASIC_TRAINER", "AI_FLAG_TRY_TO_FAINT"],
    "backstory": "A Mereholt enforcer. Sells despair as realism:\n\"The land's already dead -- we're just the first to admit it.\"",
    "party": [
        {"species": "SPECIES_POOCHYENA", "level": 6, "ability": "ABILITY_QUICK_FEET",
         "ivs": {"hp": 18, "atk": 18, "def": 18, "spa": 18, "spd": 18, "spe": 18},
         "moves": ["MOVE_TACKLE", "MOVE_HOWL", "MOVE_SAND_ATTACK", "MOVE_BITE"]},
        {"species": "SPECIES_CARVANHA", "gender": "M", "item": "ITEM_ORAN_BERRY",
         "level": 6, "ability": "ABILITY_ROUGH_SKIN",
         "moves": ["MOVE_AQUA_JET", "MOVE_LEER", "MOVE_BITE", "MOVE_FOCUS_ENERGY"]},
    ],
}
PUBLIC_DEMO = {
    "id": "TRAINER_ROUTE3_BUG_CATCHER", "name": "WADE",
    "trainerClass": "TRAINER_CLASS_BUG_CATCHER", "pic": "TRAINER_PIC_BUG_CATCHER",
    "gender": "Male", "music": "TRAINER_ENCOUNTER_MUSIC_MALE",
    "ai": ["AI_FLAG_BASIC_TRAINER"],
    "backstory": "A friendly kid who will not stop talking about bugs.",
    "party": [
        {"species": "SPECIES_CATERPIE", "level": 6, "ability": "ABILITY_SHIELD_DUST",
         "moves": ["MOVE_TACKLE", "MOVE_STRING_SHOT"]},
        {"species": "SPECIES_WEEDLE", "level": 6, "ability": "ABILITY_SHIELD_DUST",
         "moves": ["MOVE_POISON_STING", "MOVE_STRING_SHOT"]},
    ],
}


def render(template, serializer, app, data_js, demo, public):
    dj = data_js + "globalThis.TBDEMO=" + json.dumps(demo, separators=(",", ":")) + ";"
    html = (template
            .replace("/*{{DATA}}*/", dj)
            .replace("/*{{SERIALIZER}}*/", serializer)
            .replace("/*{{APP}}*/", app))
    if public:
        # Strip the design-bible-derived panel and region-specific naming so the
        # published page is a generic dev tool with no proprietary content.
        html = re.sub(r"\s*<!--PRIVATE-->.*?<!--/PRIVATE-->", "", html, flags=re.S)
        html = (html
                .replace("Skaldmere Trainer Builder", "Trainer Builder")
                .replace("TRAINER_SKALD_FISHER", "TRAINER_ROUTE3_YOUNGSTER")
                .replace("TRAINER_SKALD_FOO", "TRAINER_ROUTE3_YOUNGSTER"))
    return html


def main():
    data = build_data()
    data["meta"]["count"] = {k: len(v) for k, v in data.items() if isinstance(v, list)}

    serializer = read(os.path.join(HERE, "src", "serializer.js"))
    app = read(os.path.join(HERE, "src", "app.js"))
    template = read(os.path.join(HERE, "src", "template.html"))
    data_js = "globalThis.TBDATA=" + json.dumps(data, separators=(",", ":")) + ";"

    builds = [
        ("trainer-builder.html", PRIVATE_DEMO, False),         # full, in-repo, private
        ("trainer-builder.public.html", PUBLIC_DEMO, True),    # sanitized, for Pages
    ]
    for fname, demo, public in builds:
        html = render(template, serializer, app, data_js, demo, public)
        path = os.path.join(HERE, fname)
        with open(path, "w", encoding="utf-8") as f:
            f.write(html)
        print("Built %-30s %4d KB%s" % (os.path.relpath(path, ROOT),
              len(html.encode("utf-8")) // 1024, "  (public/sanitized)" if public else ""))

    # Also emit data.js so the Node self-test and ad-hoc tooling can use it.
    with open(os.path.join(HERE, "src", "data.js"), "w", encoding="utf-8") as f:
        f.write(data_js + "\nif(typeof module!=='undefined')module.exports=globalThis.TBDATA;\n")

    counts = data["meta"]["count"]
    for k in ("species", "moves", "abilities", "items", "classes", "pics", "music", "aiFlags"):
        print("  %-10s %5d" % (k, counts[k]))


if __name__ == "__main__":
    sys.exit(main())
