#!/usr/bin/env python3
"""Extract Trainer Builder data from this project's own source tree.

The C data is read through the project's C preprocessor, using the same flags
the Makefile passes (`-iquote include -DMODERN=1 -DTESTING=0 -std=gnu17`) and
the same translation units the ROM is built from (src/pokemon.c, src/move.c,
src/item.c, src/battle_main.c, src/trainer_pools.c). Every config switch and
`#if` guard is therefore resolved exactly as in the build. Headers that only
exist after a build (map_groups.h, layouts.h, ...) are replaced by empty
stand-ins searched after the real include path, and the list of stand-ins is
recorded in the output so it is visible which ones were used.

Usage:
    python3 tools/trainer_builder/extract.py [-o out.json] [--baseline-ref REF]
"""

import argparse
import base64
import datetime
import glob
import json
import os
import re
import struct
import subprocess
import sys
import tempfile
import zlib

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
from cparse import (Brace, Evaluator, Expr, MacroEnv, Symbol, find_all_initializers,  # noqa: E402
                    find_initializer, parse_enums, parse_initializer, parse_macro_dump)

DEFAULT_ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
SOURCES = ["src/pokemon.c", "src/move.c", "src/item.c", "src/battle_main.c", "src/trainer_pools.c"]
CPPFLAGS = ["-iquote", "include", "-Wno-trigraphs", "-DMODERN=1", "-DTESTING=0", "-std=gnu17"]

# The stat order used everywhere in the app (and in trainers.party): HP Atk Def SpA SpD Spe.
ENGINE_STAT_TO_KEY = {0: "hp", 1: "atk", 2: "def", 3: "spe", 4: "spa", 5: "spd"}

CONFIG_KEYS = [
    "GEN_LATEST", "COMPETITIVE_PARTY_SYNTAX", "B_TRAINER_CLASS_POKE_BALLS", "B_TRAINER_MON_RANDOM_ABILITY",
    "B_FLAG_DYNAMAX_BATTLE", "B_FLAG_TERA_ORB_CHARGED", "B_FLAG_TERA_ORB_NO_COST", "B_VAR_DIFFICULTY",
    "B_CRIT_MULTIPLIER", "B_MULTIPLE_TARGETS_DMG", "B_FRIENDSHIP_BOOST", "B_LEVEL_CAP_TYPE",
    "B_UPDATED_TYPE_MATCHUPS", "B_POOL_SETTING_CONSISTENT_RNG", "B_POOL_RULE_SPECIES_CLAUSE",
    "B_POOL_RULE_EXCLUDE_FORMS", "B_POOL_RULE_ITEM_CLAUSE", "P_LVL_UP_LEARNSETS", "P_GEN_1_POKEMON",
    "P_GEN_2_POKEMON", "P_GEN_3_POKEMON", "P_GEN_4_POKEMON", "P_GEN_5_POKEMON", "P_GEN_6_POKEMON",
    "P_GEN_7_POKEMON", "P_GEN_8_POKEMON", "P_GEN_9_POKEMON", "P_TM_LITERACY", "B_SHOW_TERA_TYPE",
    "TRAINERS_COUNT", "MAX_TRAINERS_COUNT", "MAX_LEVEL", "MAX_PER_STAT_IVS", "MAX_PER_STAT_EVS",
    "MAX_TOTAL_EVS", "PARTY_SIZE", "MAX_MON_MOVES", "MAX_TRAINER_ITEMS", "TRAINER_NAME_LENGTH",
    "POKEMON_NAME_LENGTH", "MAX_FRIENDSHIP", "B_EXP_CAP_TYPE",
]

# Gen 1-4 roster boundary (National Dex). A species is "in scope" when its
# evolutionary family's root is in Gen 1-4, which keeps later-generation
# evolutions (Sylveon, Kleavor) and regional forms of Gen 1-4 families.
CANON_MAX_DEX = 493
GEN_CUTOFFS = {1: 151, 2: 251, 3: 386, 4: 493, 5: 649, 6: 721, 7: 809, 8: 905, 9: 1025}

# Shown as checkboxes without opening "More AI flags" (same set as v1).
COMMON_AI = {
    "AI_FLAG_CHECK_BAD_MOVE", "AI_FLAG_TRY_TO_FAINT", "AI_FLAG_CHECK_VIABILITY", "AI_FLAG_RISKY",
    "AI_FLAG_TRY_TO_2HKO", "AI_FLAG_HP_AWARE", "AI_FLAG_PREFER_STATUS_MOVES", "AI_FLAG_STALL",
    "AI_FLAG_SMART_SWITCHING", "AI_FLAG_ACE_POKEMON", "AI_FLAG_OMNISCIENT", "AI_FLAG_CONSERVATIVE",
    "AI_FLAG_BASIC_TRAINER", "AI_FLAG_SMART_TRAINER",
}


# ------------------------------------------------------------ preprocess ----

class Preprocessor:
    def __init__(self, root, workdir, cpp):
        self.root = root
        self.cpp = cpp
        self.stubdir = os.path.join(workdir, "generated-header-stubs")
        os.makedirs(self.stubdir, exist_ok=True)
        self.stubbed = set()

    def run(self, src, extra=()):
        for _ in range(80):
            cmd = [self.cpp, *CPPFLAGS, "-idirafter", self.stubdir, *extra, src]
            p = subprocess.run(cmd, cwd=self.root, capture_output=True, text=True)
            if p.returncode == 0:
                return p.stdout
            m = re.search(r"fatal error: ([^:\n]+): No such file or directory", p.stderr)
            if not m:
                raise RuntimeError("cpp failed on %s:\n%s" % (src, p.stderr[-3000:]))
            header = m.group(1).strip()
            path = os.path.join(self.stubdir, header)
            os.makedirs(os.path.dirname(path), exist_ok=True)
            open(path, "w").close()
            self.stubbed.add(header)
        raise RuntimeError("too many missing headers while preprocessing " + src)


def git(root, *args):
    try:
        return subprocess.run(["git", *args], cwd=root, capture_output=True, text=True, check=True).stdout
    except (subprocess.CalledProcessError, FileNotFoundError):
        return None


# ------------------------------------------------------------- constants ----

# Where each constant family is defined. Canonical names are taken from these
# headers in definition order, so the first name defined for a value wins and
# later aliases (ITEM_BLACKBELT -> ITEM_BLACK_BELT) are kept only as aliases.
# Restricting to the defining header also keeps unrelated macros that happen
# to share a prefix (MOVE_EFFECT_*, SPECIES_INFO_*) out of the lookups.
CONST_HEADERS = {
    "SPECIES_": "include/constants/species.h",
    "MOVE_": "include/constants/moves.h",
    "ITEM_": "include/constants/items.h",
    "ABILITY_": "include/constants/abilities.h",
    "TYPE_": "include/constants/pokemon.h",
    "NATURE_": "include/constants/pokemon.h",
    "EVO_": "include/constants/pokemon.h",
    "IF_": "include/constants/pokemon.h",
    "TRAINER_CLASS_": "include/constants/trainers.h",
    "TRAINER_PIC_": "include/constants/trainers.h",
    "TRAINER_ENCOUNTER_MUSIC_": "include/constants/trainers.h",
    "EFFECT_": "include/constants/battle_move_effects.h",
    "HOLD_EFFECT_": "include/constants/hold_effects.h",
    "BALL_": "include/pokeball.h",
    "MUGSHOT_COLOR_": "include/battle_transition.h",
    "STARTING_STATUS_": "include/constants/battle.h",
    "POOL_RULESET_": "include/trainer_pools.h",
    "POOL_PICK_": "include/trainer_pools.h",
    "POOL_PRUNE_": "include/trainer_pools.h",
    "MON_POOL_TAG_": "include/trainer_pools.h",
    "DIFFICULTY_": "include/constants/difficulty.h",
}

# Headers whose enums the five translation units do not pull in.
EXTRA_HEADERS = ["include/battle_transition.h", "include/pokeball.h", "include/trainer_pools.h",
                 "include/constants/difficulty.h", "include/constants/battle.h"]


class Consts:
    """Value <-> constant-name lookups rebuilt from macros and enums."""

    def __init__(self, root, env):
        self.root = root
        self.env = env
        self._cache = {}

    def _ordered(self, prefix):
        if prefix in self._cache:
            return self._cache[prefix]
        text = open(os.path.join(self.root, CONST_HEADERS[prefix]), encoding="utf-8").read()
        text = re.sub(r"//[^\n]*|/\*.*?\*/", "", text, flags=re.S)
        names = []
        for m in re.finditer(r"^\s*(?:#define\s+)?(%s\w*)\b\s*(?:[,=]|$|\s+\S)" % re.escape(prefix), text, re.M):
            if m.group(1) not in names:
                names.append(m.group(1))
        self._cache[prefix] = names
        return names

    def table(self, prefix, skip=()):
        out = {}
        for name in self._ordered(prefix):
            if name in skip or name.endswith("_COUNT") or name.endswith("_END"):
                continue
            v = self.env.get(name)
            if isinstance(v, int) and v not in out:
                out[v] = name
        return out

    def aliases(self, prefix):
        canon = self.table(prefix)
        out = {}
        for name in self._ordered(prefix):
            v = self.env.get(name)
            if isinstance(v, int) and v in canon and canon[v] != name:
                out[name] = canon[v]
        return out


def humanize(const, prefix):
    s = const[len(prefix):] if const.startswith(prefix) else const
    return " ".join(w.capitalize() for w in s.split("_"))


def fix_text(s):
    if not isinstance(s, str):
        return None
    s = s.replace("{PKMN}", "Pkmn").replace("\n", " ")
    return re.sub(r"\s+", " ", s).strip()


# --------------------------------------------------------------- png io ----

def _png_chunks(data):
    if data[:8] != b"\x89PNG\r\n\x1a\n":
        raise ValueError("not a png")
    pos = 8
    while pos < len(data):
        (length,) = struct.unpack(">I", data[pos:pos + 4])
        yield data[pos + 4:pos + 8], data[pos + 8:pos + 8 + length]
        pos += 12 + length


def _paeth(a, b, c):
    p = a + b - c
    pa, pb, pc = abs(p - a), abs(p - b), abs(p - c)
    if pa <= pb and pa <= pc:
        return a
    return b if pb <= pc else c


def png_indexed_transparent(path, crop_h=None, transparent=(0,)):
    """Return a data: URI of an indexed PNG with palette index 0 transparent.

    The GBA treats colour 0 as transparent; the source PNGs paint it as a
    solid backdrop. Optionally keep only the top crop_h rows (first frame of
    a 2-frame icon sheet). Non-indexed or interlaced files pass through.
    """
    raw = open(path, "rb").read()
    ihdr = plte = None
    idat = b""
    for typ, body in _png_chunks(raw):
        if typ == b"IHDR":
            ihdr = body
        elif typ == b"PLTE":
            plte = body
        elif typ == b"IDAT":
            idat += body
    w, h, depth, ctype, _c, _f, interlace = struct.unpack(">IIBBBBB", ihdr)
    if ctype != 3 or interlace or plte is None:
        return "data:image/png;base64," + base64.b64encode(raw).decode()
    stride = (w * depth + 7) // 8
    data = zlib.decompress(idat)
    rows, prev, pos = [], bytearray(stride), 0
    for _ in range(h):
        ftype = data[pos]
        line = bytearray(data[pos + 1:pos + 1 + stride])
        pos += 1 + stride
        for i in range(stride):
            a = line[i - 1] if i else 0
            b = prev[i]
            c = prev[i - 1] if i else 0
            if ftype == 1:
                line[i] = (line[i] + a) & 255
            elif ftype == 2:
                line[i] = (line[i] + b) & 255
            elif ftype == 3:
                line[i] = (line[i] + ((a + b) >> 1)) & 255
            elif ftype == 4:
                line[i] = (line[i] + _paeth(a, b, c)) & 255
        rows.append(bytes(line))
        prev = line
    if crop_h and crop_h < h:
        rows, h = rows[:crop_h], crop_h
    out = b"\x89PNG\r\n\x1a\n"

    def chunk(t, b):
        return struct.pack(">I", len(b)) + t + b + struct.pack(">I", zlib.crc32(t + b) & 0xFFFFFFFF)

    out += chunk(b"IHDR", struct.pack(">IIBBBBB", w, h, depth, 3, 0, 0, 0))
    out += chunk(b"PLTE", plte)
    alpha = bytearray(b"\xff" * (max(transparent) + 1))
    for k in transparent:
        alpha[k] = 0
    out += chunk(b"tRNS", bytes(alpha))
    out += chunk(b"IDAT", zlib.compress(b"".join(b"\x00" + r for r in rows), 9))
    out += chunk(b"IEND", b"")
    return "data:image/png;base64," + base64.b64encode(out).decode()


def incbin_pngs(root, rel_files):
    """Map C symbol -> source .png path from INCBIN declarations."""
    out = {}
    for rel in rel_files:
        text = open(os.path.join(root, rel), encoding="utf-8").read()
        for m in re.finditer(r"\b(g\w+)\s*\[\]\s*=\s*INCBIN_U(?:8|16|32)\(\s*\"([^\"]+)\"", text):
            path = re.sub(r"\.(4bpp|8bpp|gbapal)(\.(lz|smol|fastSmol|smolTM))?$", ".png", m.group(2))
            out[m.group(1)] = path
    return out


# ---------------------------------------------------------------- main ----

def extract(root, baseline_ref=None, cpp="cpp", with_images=True):
    root = os.path.abspath(root)
    t0 = datetime.datetime.now(datetime.timezone.utc)
    work = tempfile.mkdtemp(prefix="tb-extract-")
    pp = Preprocessor(root, work, cpp)

    texts = {src: pp.run(src) for src in SOURCES}
    extra_src = os.path.join(work, "extra_headers.c")
    with open(extra_src, "w") as f:
        f.write('#include "global.h"\n' + "".join('#include "%s"\n' % h[len("include/"):] for h in EXTRA_HEADERS))
    enum_texts = list(texts.values()) + [pp.run(extra_src)]
    bodies = {}
    for src in SOURCES + [extra_src]:
        bodies.update(parse_macro_dump(pp.run(src, ["-dM"])))
    env = MacroEnv(bodies)
    for text in enum_texts:
        parse_enums(text, env)
    env._miss.clear()  # macros that referred to enums parsed later
    consts = Consts(root, env)
    ev = Evaluator(env)

    def val(node, default=None):
        """Evaluate an initializer value (Expr or Brace) to a python value."""
        if node is None:
            return default
        if isinstance(node, Brace):
            return node
        try:
            v = ev.eval(node)
        except Exception:
            return default
        return default if v is None else v

    def ival(node, default=0):
        v = val(node)
        if isinstance(v, bool):
            return int(v)
        if isinstance(v, (int, float)):
            return int(v)
        return default

    def sym(node):
        v = val(node)
        if isinstance(v, Symbol):
            return v.name
        return None

    def table(src, name):
        text = find_initializer(texts[src], name)
        if text is None:
            raise RuntimeError("could not find %s in %s" % (name, src))
        node = parse_initializer(text)
        out = {}
        for i, (desig, value) in enumerate(node.items):
            idx = ival(desig[1], None) if desig and desig[0] == "index" else i
            out[idx] = value
        return out

    def stat_key(engine_idx):
        return ENGINE_STAT_TO_KEY.get(engine_idx)

    # ---- constants ----
    sp_names = consts.table("SPECIES_", skip={"SPECIES_EGG"})
    mv_names = consts.table("MOVE_", skip={"MOVE_UNAVAILABLE"})
    it_names = consts.table("ITEM_")
    ab_names = consts.table("ABILITY_")
    ty_names = consts.table("TYPE_")
    na_names = consts.table("NATURE_")
    evo_names = consts.table("EVO_")
    cond_names = consts.table("IF_")
    eff_names = consts.table("EFFECT_")
    he_names = consts.table("HOLD_EFFECT_")
    ball_names = consts.table("BALL_")

    # ---- types & chart ----
    types_t = table("src/battle_main.c", "gTypesInfo")
    types = []
    for i in sorted(types_t):
        b = types_t[i]
        types.append({"i": i, "c": ty_names.get(i, "TYPE_%d" % i), "n": val(b.field("name"), "?"),
                      "special": ival(b.field("isSpecialCaseType"))})
    chart_t = table("src/battle_main.c", "gTypeEffectivenessTable")
    n_types = len(types)
    chart = [[1.0] * n_types for _ in range(n_types)]
    for atk, row in chart_t.items():
        for dfn, cell in enumerate(row.positional()):
            if dfn < n_types and atk < n_types:
                chart[atk][dfn] = ival(cell) / 4096.0

    # ---- natures ----
    natures = []
    nat_t = table("src/pokemon.c", "gNaturesInfo")
    for i in sorted(nat_t):
        b = nat_t[i]
        up, down = ival(b.field("statUp")), ival(b.field("statDown"))
        natures.append({"i": i, "c": na_names.get(i, "NATURE_%d" % i), "n": val(b.field("name"), "?"),
                        "up": stat_key(up) if up != down else None,
                        "down": stat_key(down) if up != down else None})

    # ---- abilities ----
    abilities = []
    ab_t = table("src/pokemon.c", "gAbilitiesInfo")
    for i in sorted(ab_t):
        if i == 0 or i not in ab_names:
            continue
        b = ab_t[i]
        abilities.append({"i": i, "c": ab_names[i], "n": fix_text(val(b.field("name"))) or humanize(ab_names[i], "ABILITY_"),
                          "d": fix_text(val(b.field("description")))})

    # ---- moves ----
    moves_count = env.get("MOVES_COUNT") or 10 ** 9
    mv_t = table("src/move.c", "gMovesInfo")
    moves = []
    for i in sorted(mv_t):
        if i == 0 or i >= moves_count or i not in mv_names:
            continue
        b = mv_t[i]
        arg = b.field("argument")
        fixed = ival(arg.field("fixedDamage")) if isinstance(arg, Brace) else 0
        eff = ival(b.field("effect"), -1)
        moves.append({
            "i": i, "c": mv_names[i], "n": fix_text(val(b.field("name"))) or humanize(mv_names[i], "MOVE_"),
            "t": ival(b.field("type")), "p": ival(b.field("power")), "a": ival(b.field("accuracy")),
            "pp": ival(b.field("pp")), "cat": ival(b.field("category")), "pri": ival(b.field("priority")),
            "e": eff_names.get(eff, "EFFECT_%d" % eff), "hits": ival(b.field("strikeCount")) or 1,
            "fd": fixed, "crit": ival(b.field("criticalHitStage")), "ct": ival(b.field("makesContact")),
            "d": fix_text(val(b.field("description"))),
        })

    # ---- items ----
    pocket_balls = env.get("POCKET_POKE_BALLS")
    it_t = table("src/item.c", "gItemsInfo")
    items = []
    for i in sorted(it_t):
        if i == 0 or i not in it_names:
            continue
        b = it_t[i]
        name = fix_text(val(b.field("name")))
        if not name or name.startswith("?"):
            continue
        he = ival(b.field("holdEffect"), 0)
        items.append({"i": i, "c": it_names[i], "n": name, "pk": ival(b.field("pocket")),
                      "he": he_names.get(he) if he else None, "d": fix_text(val(b.field("description")))})
    balls = [it for it in items if it["pk"] == pocket_balls]

    # ---- learnsets ----
    pk_text = texts["src/pokemon.c"]
    move_unavailable = env.get("MOVE_UNAVAILABLE", 0xFFFF)
    lvl_end = env.get("LEVEL_UP_MOVE_END", 0xFFFF)
    learn_lv, learn_tm, learn_egg = {}, {}, {}
    for name, text in find_all_initializers(pk_text, r"s\w+LevelUpLearnset"):
        out = []
        for e in parse_initializer(text).positional():
            if not isinstance(e, Brace):
                continue
            mv = ival(e.field("move"))
            if mv == lvl_end:
                break
            out += [ival(e.field("level")), mv]
        learn_lv[name] = out
    for name, text in find_all_initializers(pk_text, r"s\w+TeachableLearnset"):
        learn_tm[name] = [m for m in (ival(e) for e in parse_initializer(text).positional()) if m and m != move_unavailable]
    for name, text in find_all_initializers(pk_text, r"s\w+EggMoveLearnset"):
        learn_egg[name] = [m for m in (ival(e) for e in parse_initializer(text).positional()) if m and m != move_unavailable]

    raw_tms = open(os.path.join(root, "include/constants/tms_hms.h"), encoding="utf-8").read()

    def foreach(macro):
        m = re.search(r"#define\s+%s\(F\)((?:.*\\\n)*.*)" % macro, raw_tms)
        return ["MOVE_" + x for x in re.findall(r"F\((\w+)\)", m.group(1))] if m else []

    tms, hms = foreach("FOREACH_TM"), foreach("FOREACH_HM")

    # ---- species ----
    sp_t = table("src/pokemon.c", "gSpeciesInfo")
    icon_png = incbin_pngs(root, ["src/data/graphics/pokemon.h"]) if with_images else {}
    species, images = [], {}
    for i in sorted(sp_t):
        b = sp_t[i]
        if i == 0 or i not in sp_names or not isinstance(b, Brace):
            continue
        name = val(b.field("speciesName"))
        if not isinstance(name, str) or name.startswith("?") or b.field("baseHP") is None:
            continue
        evos = []
        evo_node = val(b.field("evolutions"))
        if isinstance(evo_node, Brace):
            for e in evo_node.positional():
                if not isinstance(e, Brace):
                    continue
                pos = e.positional()
                method = ival(pos[0]) if pos else 0xFFFF
                if method == 0xFFFF or len(pos) < 3:
                    continue
                conds = []
                if len(pos) > 3:
                    c = val(pos[3])
                    if isinstance(c, Brace):
                        for ce in c.positional():
                            if isinstance(ce, Brace):
                                cp = ce.positional()
                                cid = ival(cp[0]) if cp else 0
                                cn = cond_names.get(cid)
                                if cn and cn != "IF_NONE" and not cn.endswith("_END"):
                                    conds.append([cn] + [ival(x) if not isinstance(val(x), Symbol) else val(x).name for x in cp[1:]])
                evos.append([evo_names.get(method, "EVO_%d" % method), ival(pos[1]), ival(pos[2]), conds])
        flags = "".join(code for code, field in (("M", "isMegaEvolution"), ("P", "isPrimalReversion"),
                                                  ("G", "isGigantamax"), ("T", "isTotem"), ("U", "isUltraBurst"),
                                                  ("L", "isLegendary"), ("Y", "isMythical"), ("B", "isUltraBeast"),
                                                  ("R", "isParadox"), ("C", "isCosmetic"), ("Z", "isTeraForm"))
                        if ival(b.field(field)))
        icon_sym = sym(b.field("iconSprite"))
        icon_key = None
        if with_images and icon_sym and icon_sym in icon_png:
            p = os.path.join(root, icon_png[icon_sym])
            if os.path.exists(p):
                icon_key = "i:" + icon_sym[len("gMonIcon_"):]
                if icon_key not in images:
                    images[icon_key] = png_indexed_transparent(p, crop_h=32)
        types_v = val(b.field("types"))
        tpos = [ival(x) for x in types_v.positional()] if isinstance(types_v, Brace) else [0, 0]
        ab_v = val(b.field("abilities"))
        apos = [ival(x) for x in ab_v.positional()] if isinstance(ab_v, Brace) else [0, 0, 0]
        species.append({
            "i": i, "c": sp_names[i], "n": fix_text(name), "dex": ival(b.field("natDexNum")),
            "b": [ival(b.field(f)) for f in ("baseHP", "baseAttack", "baseDefense", "baseSpAttack",
                                              "baseSpDefense", "baseSpeed")],
            "t": (tpos + [tpos[0]])[:2], "a": (apos + [0, 0, 0])[:3],
            "g": ival(b.field("genderRatio")), "w": ival(b.field("weight")),
            "ev": evos, "lu": sym(b.field("levelUpLearnset")), "tm": sym(b.field("teachableLearnset")),
            "egg": sym(b.field("eggMoveLearnset")), "f": flags, "icon": icon_key,
        })

    # Family roots for the Gen 1-4 scope (follow pre-evolutions back to the base).
    by_index = {s["i"]: s for s in species}
    prevo = {}
    for s in species:
        for e in s["ev"]:
            if e[0] != "EVO_NONE":  # EVO_NONE links battle-only/totem forms, not evolutions
                prevo.setdefault(e[2], s["i"])
    for s in species:
        root_i, seen = s["i"], set()
        while root_i in prevo and root_i not in seen:
            seen.add(root_i)
            root_i = prevo[root_i]
        s["root"] = root_i
        root_dex = by_index[root_i]["dex"] if root_i in by_index else s["dex"]
        s["_rootdex"] = root_dex
        s["gen"] = next((g for g, top in sorted(GEN_CUTOFFS.items()) if 0 < s["dex"] <= top), 0)
        s["pre"] = prevo.get(s["i"])
    # Forms share a National Dex number with their base form (Ursaluna Bloodmoon
    # with Ursaluna), so a form is in scope when any species with its number is.
    scope_dex = {s["dex"] for s in species if 0 < s["_rootdex"] <= CANON_MAX_DEX}
    for s in species:
        battle_only = any(c in s["f"] for c in "MPGTUZ")
        s["sc"] = int(s.pop("_rootdex") and s["dex"] in scope_dex and not battle_only)

    used = {s[k] for s in species for k in ("lu", "tm", "egg") if s.get(k)}
    learn_lv = {k: v for k, v in learn_lv.items() if k in used}
    learn_tm = {k: v for k, v in learn_tm.items() if k in used}
    learn_egg = {k: v for k, v in learn_egg.items() if k in used}

    # ---- trainer classes, pics, music, AI ----
    cls_names = consts.table("TRAINER_CLASS_")
    cls_t = table("src/battle_main.c", "gTrainerClasses")
    classes = []
    for i in sorted(cls_t):
        if i not in cls_names:
            continue
        b = cls_t[i]
        pos = b.positional() if isinstance(b, Brace) else []
        fields = b.fields() if isinstance(b, Brace) else {}
        nm = val(fields.get("name", pos[0] if pos else None))
        money = ival(fields.get("money", pos[1] if len(pos) > 1 else None))
        ball = ival(fields.get("ball", pos[2] if len(pos) > 2 else None), 0)
        ball_item = None
        if ball and ball in ball_names:
            cand = "ITEM_" + ball_names[ball][len("BALL_"):] + "_BALL"
            ball_item = cand if any(it["c"] == cand for it in items) else None
        classes.append({"i": i, "c": cls_names[i], "n": humanize(cls_names[i], "TRAINER_CLASS_"),
                        "game": fix_text(nm), "money": money, "ball": ball_item})

    pic_names = consts.table("TRAINER_PIC_", skip={"TRAINER_PIC_NONE"})
    sprite_src = open(os.path.join(root, "src/data/graphics/trainers.h"), encoding="utf-8").read()
    pic_png = incbin_pngs(root, ["src/data/graphics/trainers.h"])
    pic_sym = dict(re.findall(r"TRAINER_SPRITE\(\s*(TRAINER_PIC_\w+)\s*,\s*(gTrainerFrontPic_\w+)", sprite_src))
    pics = []
    for i in sorted(pic_names):
        c = pic_names[i]
        img = None
        if with_images and c in pic_sym and pic_sym[c] in pic_png:
            p = os.path.join(root, pic_png[pic_sym[c]])
            if os.path.exists(p):
                img = "p:" + c[len("TRAINER_PIC_"):]
                images[img] = png_indexed_transparent(p)
        pics.append({"i": i, "c": c, "n": humanize(c, "TRAINER_PIC_"), "img": img})

    music = [{"c": c, "n": humanize(c, "TRAINER_ENCOUNTER_MUSIC_")}
             for _v, c in sorted(consts.table("TRAINER_ENCOUNTER_MUSIC_").items())]

    ai_src = open(os.path.join(root, "include/constants/battle_ai.h"), encoding="utf-8").read()
    ai_desc = {m.group(1): m.group(2).strip() for m in re.finditer(r"#define\s+(AI_FLAG_\w+)\s+[^/\n]*//\s*(.*)", ai_src)}
    ai_flags = []
    for m in re.finditer(r"#define\s+(AI_FLAG_\w+)\s+([^\n/]+)", ai_src):
        c = m.group(1)
        v = env.get(c)
        if not isinstance(v, int) or v == 0 or c.endswith("_COUNT") or c in ("AI_FLAG_DYNAMIC_FUNC",):
            continue
        ai_flags.append({"c": c, "n": humanize(c, "AI_FLAG_"), "d": ai_desc.get(c, ""),
                         "composite": int(v & (v - 1) != 0), "common": int(c in COMMON_AI)})

    def simple(prefix, skip=()):
        return [{"c": c, "n": humanize(c, prefix)} for _v, c in sorted(consts.table(prefix, skip).items())]

    lists = {
        "mugshots": simple("MUGSHOT_COLOR_", {"MUGSHOT_COLOR_NONE"}),
        "startingStatuses": simple("STARTING_STATUS_", {"STARTING_STATUS_NONE"}),
        "poolRules": simple("POOL_RULESET_"),
        "poolPicks": simple("POOL_PICK_"),
        "poolPrunes": simple("POOL_PRUNE_"),
        "poolTags": simple("MON_POOL_TAG_"),
        "difficulties": simple("DIFFICULTY_", {"DIFFICULTY_MIN", "DIFFICULTY_MAX"}),
    }

    # ---- project facts: level caps, opponents, maps, encounters ----
    caps_src = open(os.path.join(root, "src/caps.c"), encoding="utf-8").read()
    cap_block = re.search(r"sLevelCapFlagMap\[\]\[2\]\s*=\s*\{(.*?)\};", caps_src, re.S)
    level_caps = [{"flag": f, "level": int(l)} for f, l in
                  re.findall(r"\{\s*(FLAG_\w+)\s*,\s*(\d+)\s*\}", cap_block.group(1))] if cap_block else []

    opp_src = open(os.path.join(root, "include/constants/opponents.h"), encoding="utf-8").read()
    opp_ids = {m.group(1): int(m.group(2)) for m in re.finditer(r"#define\s+(TRAINER_\w+)\s+(\d+)\s*$", opp_src, re.M)}
    for k in ("TRAINERS_COUNT", "MAX_TRAINERS_COUNT"):
        opp_ids.pop(k, None)

    baseline = {"ref": None, "subject": None, "ids": []}
    if baseline_ref is None:
        log = git(root, "log", "--format=%H%x09%s") or ""
        for line in log.splitlines():
            h, _, subj = line.partition("\t")
            if re.match(r"^Expansion \d+\.\d+", subj):
                baseline_ref, baseline["subject"] = h, subj
                break
    if baseline_ref:
        base_opp = git(root, "show", "%s:include/constants/opponents.h" % baseline_ref)
        if base_opp:
            baseline["ref"] = baseline_ref[:12]
            baseline["ids"] = sorted(set(re.findall(r"#define\s+(TRAINER_\w+)\s+\d+\s*$", base_opp, re.M))
                                     - {"TRAINERS_COUNT", "MAX_TRAINERS_COUNT"})

    maps, trainer_maps = {}, {}
    for mj in sorted(glob.glob(os.path.join(root, "data/maps/*/map.json"))):
        folder = os.path.basename(os.path.dirname(mj))
        try:
            m = json.load(open(mj, encoding="utf-8"))
        except ValueError:
            continue
        maps[m.get("id", folder)] = {"n": m.get("name", folder), "folder": folder,
                                     "sec": m.get("region_map_section"),
                                     "conn": [[c.get("direction"), c.get("map")] for c in (m.get("connections") or [])]}
        for sf in glob.glob(os.path.join(os.path.dirname(mj), "scripts.*")):
            for line in open(sf, encoding="utf-8", errors="replace"):
                if "trainerbattle" in line:
                    for tid in re.findall(r"\b(TRAINER_(?!BATTLE_)[A-Z0-9_]+)", line):
                        if tid in opp_ids:
                            lst = trainer_maps.setdefault(tid, [])
                            if m.get("id", folder) not in lst:
                                lst.append(m.get("id", folder))

    sp_by_const = {s["c"]: s["i"] for s in species}
    enc_json = json.load(open(os.path.join(root, "src/data/wild_encounters.json"), encoding="utf-8"))
    groups = enc_json["wild_encounter_groups"]
    main = next((g for g in groups if g.get("for_maps")), groups[0])
    rates = {f["type"]: f["encounter_rates"] for f in main.get("fields", [])}
    encounters = []
    for e in main.get("encounters", []):
        rec = {"map": e.get("map"), "label": e.get("base_label"), "f": {}}
        for field, r in rates.items():
            if field not in e:
                continue
            mons = []
            for slot, mon in enumerate(e[field].get("mons", [])):
                sp = sp_by_const.get(mon.get("species"))
                if sp is None:
                    continue
                pct = r[slot] if slot < len(r) else 0
                mons.append([sp, mon.get("min_level", 1), mon.get("max_level", 1), pct])
            rec["f"][field] = mons
        encounters.append(rec)

    font_cfg = json.load(open(os.path.join(root, "tools/poryscript/font_config.json"), encoding="utf-8"))
    font_id = font_cfg.get("defaultFontId") or next(iter(font_cfg["fonts"]))
    font = font_cfg["fonts"][font_id]
    font_out = {"id": font_id, "maxLineLength": int(font.get("maxLineLength", 208)),
                "numLines": int(font.get("numLines", 2)), "cursorOverlapWidth": int(font.get("cursorOverlapWidth", 0)),
                "widths": font.get("widths") if isinstance(font.get("widths"), dict) else json.loads(font["widths"].replace("'", '"'))}

    # Characters and {CODES} the text preprocessor can encode (charmap.txt).
    cm_chars, cm_codes, cm_bytes = set(), set(), {}
    for line in open(os.path.join(root, "charmap.txt"), encoding="utf-8"):
        m = re.match(r"^'(\\.|[^'\\]+)'\s*=\s*([0-9A-Fa-f]{2})\b", line)
        if m:
            ch = {"\\'": "'", "\\\\": "\\"}.get(m.group(1), m.group(1))
            cm_chars.add(ch)
            if len(ch) == 1 and ch not in cm_bytes:
                cm_bytes[ch] = int(m.group(2), 16)
            continue
        m = re.match(r"^([A-Z_][A-Z_0-9]*)\s*=", line)
        if m:
            cm_codes.add(m.group(1))
    charmap = {"chars": "".join(sorted(c for c in cm_chars if len(c) == 1)), "codes": sorted(cm_codes),
               "bytes": cm_bytes}
    # The game's own text font: 16x16 cells indexed by charmap byte. Used to
    # draw dialogue previews exactly as the textbox renders them.
    font_png = os.path.join(root, "graphics/fonts/latin_normal.png")
    if with_images and os.path.exists(font_png):
        # Index 0 is the sheet backdrop and 3 the cell fill; only text (1) and shadow (2) are drawn.
        images["font:normal"] = png_indexed_transparent(font_png, transparent=(0, 3))

    party_text = open(os.path.join(root, "src/data/trainers.party"), encoding="utf-8").read()

    head = (git(root, "rev-parse", "HEAD") or "").strip()
    dirty = bool((git(root, "status", "--porcelain", "--untracked-files=no") or "").strip())
    exp_src = open(os.path.join(root, "include/constants/expansion.h"), encoding="utf-8").read() \
        if os.path.exists(os.path.join(root, "include/constants/expansion.h")) else ""
    ver = [re.search(r"EXPANSION_VERSION_%s\s+(\d+)" % k, exp_src) for k in ("MAJOR", "MINOR", "PATCH")]
    expansion = ".".join(m.group(1) for m in ver) if all(ver) else None
    cpp_ver = (subprocess.run([cpp, "--version"], capture_output=True, text=True).stdout.splitlines() or ["?"])[0]

    config = {k: env.get(k) for k in CONFIG_KEYS}

    return {
        "schema": 2,
        "meta": {
            "generated": t0.strftime("%Y-%m-%d %H:%M UTC"),
            "commit": head[:12] or None, "dirty": dirty,
            "branch": (git(root, "rev-parse", "--abbrev-ref", "HEAD") or "").strip() or None,
            "expansion": expansion, "cpp": cpp_ver, "sources": SOURCES,
            "stubbedHeaders": sorted(pp.stubbed),
            "canonMaxDex": CANON_MAX_DEX, "genCutoffs": GEN_CUTOFFS,
            "counts": {"species": len(species), "inScope": sum(s["sc"] for s in species), "moves": len(moves),
                       "abilities": len(abilities), "items": len(items), "classes": len(classes), "pics": len(pics),
                       "aiFlags": len(ai_flags), "levelUpLearnsets": len(learn_lv), "teachableLearnsets": len(learn_tm),
                       "eggLearnsets": len(learn_egg), "encounterTables": len(encounters), "maps": len(maps),
                       "images": len(images)},
        },
        "config": config,
        "types": types, "typeChart": chart, "natures": natures, "abilities": abilities, "moves": moves,
        "items": items, "balls": [b["c"] for b in balls], "species": species,
        "learn": {"lv": learn_lv, "tm": learn_tm, "egg": learn_egg}, "tms": tms, "hms": hms,
        "classes": classes, "pics": pics, "music": music, "aiFlags": ai_flags, **lists,
        "aliases": {p: consts.aliases(p) for p in ("SPECIES_", "MOVE_", "ITEM_", "ABILITY_", "NATURE_", "TYPE_",
                                                   "TRAINER_CLASS_", "TRAINER_PIC_", "TRAINER_ENCOUNTER_MUSIC_")},
        "levelCaps": level_caps,
        "opponents": {"ids": opp_ids, "count": env.get("TRAINERS_COUNT"), "max": env.get("MAX_TRAINERS_COUNT")},
        "baseline": baseline, "maps": maps, "trainerMaps": trainer_maps,
        "encounters": encounters, "encounterRates": rates, "font": font_out, "charmap": charmap,
        "partyText": party_text, "images": images,
    }


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--root", default=DEFAULT_ROOT, help="project root (default: this repo)")
    ap.add_argument("-o", "--output", default=os.path.join(HERE, "build", "data.json"))
    ap.add_argument("--baseline-ref", help="git ref whose opponents.h lists the stock trainers "
                                           "(default: newest commit titled 'Expansion X.Y')")
    ap.add_argument("--cpp", default=os.environ.get("CPP", "cpp"), help="C preprocessor (default: cpp)")
    ap.add_argument("--no-images", action="store_true", help="skip embedded sprites")
    args = ap.parse_args()
    data = extract(args.root, args.baseline_ref, args.cpp, not args.no_images)
    os.makedirs(os.path.dirname(os.path.abspath(args.output)), exist_ok=True)
    with open(args.output, "w", encoding="utf-8") as f:
        json.dump(data, f, ensure_ascii=False, separators=(",", ":"))
    m = data["meta"]
    print("wrote %s (%.1f MB)" % (args.output, os.path.getsize(args.output) / 1e6))
    print("commit %s%s, expansion %s" % (m["commit"], " (dirty)" if m["dirty"] else "", m["expansion"]))
    print("counts:", json.dumps(m["counts"]))
    if m["stubbedHeaders"]:
        print("generated headers stubbed:", ", ".join(m["stubbedHeaders"]))


if __name__ == "__main__":
    main()
