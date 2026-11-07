#!/usr/bin/env python3
"""Rematch tiers for the simple route/town trainers (volume, the §13 G leg).

Every script of the exact shape

    script X {
        trainerbattle_single(TRAINER_SKALD_X,
            format("intro"),
            format("defeat"))
        msgbox(format("post"), MSGBOX_DEFAULT)
        end
    }

gains four rematch tiers: after the first battle, talking to the trainer
again offers the lowest unfought tier the player's clearances unlock
(SkaldRematchTier: 2 at three clearances, 3 at five, 4 at seven, 5 after the
epilogue), each tier fought once. The object script still *starts* with
trainerbattle_single, which the sight-approach path requires.

Tier parties are the first party evolved for the tier's level (species data
from src/data/pokemon/species_info; level evolutions at their level, every
other method at 36) with new ids TRAINER_SKALD_X_R2..R5 appended to
include/constants/opponents.h and src/data/trainers.party.

Idempotent: a script that already carries SkaldRematchTier is skipped, and
ids that already exist are not re-added.

    python3 tools/skald/rematch_tiers.py            # apply
    python3 tools/skald/rematch_tiers.py --dry-run  # report only
"""
import re, sys, glob, hashlib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SKIP_MAPS = {"ParcelStation", "ParcelBridge"}          # retired maps
TIERS = {2: 22, 3: 32, 4: 42, 5: 57}                   # tier -> base level
OTHER_METHOD_LEVEL = 36                                # stones, trade, friendship...

PAT = re.compile(r'script (\w+) \{\n    trainerbattle_single\((TRAINER_SKALD_\w+),\n'
                 r'        format\("((?:[^"\\]|\\.)*)"\),\n        format\("((?:[^"\\]|\\.)*)"\)\)\n'
                 r'    msgbox\(format\("((?:[^"\\]|\\.)*)"\), MSGBOX_DEFAULT\)\n    end\n\}')

OFFER = {
    2: ["{N}: You again. I've had time to think about last time. Go again?",
        "{N}: Back this way? I've not been idle. Rematch?",
        "{N}: I kept the team up for this. Again?",
        "{N}: Clearances or not, I want that one back. Go?",
        "{N}: Didn't think you'd come back through. Good. Again?"],
    3: ["{N}: Word gets up the river. Half a region signed off on you. Show me?",
        "{N}: I've been training against the lake. You're the test. Yes?",
        "{N}: Three stamps, then five. Fine. Me next?",
        "{N}: I moved the whole team on. Let's see if you have?",
        "{N}: They say you don't lose any more. Let's check?"],
    4: ["{N}: Nearly the top, they say. Not past me. Again?",
        "{N}: Seven stamps. I've one more fight in me that's worth the name. Yes?",
        "{N}: I don't care about the paper. I care about the one I lost. Go?",
        "{N}: Full strength, no excuses, mine or yours. Rematch?",
        "{N}: I've watched you walk past twice. Not a third time. Battle?"],
    5: ["{N}: I heard what you filed. Then show me what filed it?",
        "{N}: After everything, one more. For the ledger. Yes?",
        "{N}: They read your name at the hearing. I'd like to read it myself. Battle?",
        "{N}: Last one. I've put everything I've got into this team. Go?",
        "{N}: The region's different now. Let's see if you are?"],
}
NO = ["{N}: Suit yourself. I'm here.", "{N}: Another time, then.", "{N}: No hurry. The water keeps.",
      "{N}: Fine. Same spot.", "{N}: Later, then. I'm not going anywhere."]
DEFEAT = ["{N}: …Fair.", "{N}: Still yours.", "{N}: That's the one I wanted to see.",
          "{N}: Right. That's the whole of it.", "{N}: …Again, then. Later.", "{N}: Noted. Properly, this time."]
AFTER = {
    2: ["{N}: Come back with more clearances. I'll have more for you.", "{N}: That's two to you. Get the next stamp and come back."],
    3: ["{N}: One more in me. After the high ground.", "{N}: Three. I'll be stronger when the coast's done with you."],
    4: ["{N}: When it's all filed, come and find me. Once more.", "{N}: Four. There's one more, after. Whatever after is."],
    5: ["{N}: That's all I've got. It was enough to see it done.", "{N}: Five. Write that one down too. I'll know you did."],
}

def pick(pool, key, salt):
    h = int(hashlib.md5(f"{key}:{salt}".encode()).hexdigest(), 16)
    return pool[h % len(pool)]

def load_evos():
    evos = {}
    for f in glob.glob(str(ROOT / "src/data/pokemon/species_info/gen_*_families.h")):
        cur = None; buf = None
        for line in open(f):
            m = re.match(r"\s*\[SPECIES_(\w+)\]\s*=", line)
            if m: cur = m.group(1); continue
            if cur and ".evolutions" in line: buf = line
            elif buf is not None: buf += line
            if buf is not None and buf.rstrip().endswith("),"):
                entries = re.findall(r"\{(EVO_\w+),\s*([A-Z_0-9]+|\d+),\s*SPECIES_(\w+)", buf)
                if entries: evos[cur] = entries
                buf = None
    return evos

def const_of(display):   # "Mr. Mime" -> MR_MIME ; "Farfetch'd" -> FARFETCHD
    return re.sub(r"[^A-Z0-9]+", "_", display.upper().replace("'", "").replace(".", "")).strip("_")

def display_of(const):   # LINOONE -> Linoone ; MR_MIME -> Mr. Mime (good enough for the species here)
    words = const.lower().split("_")
    return " ".join(w.capitalize() for w in words)

def evolve(species_const, level, evos):
    seen = set()
    while species_const in evos and species_const not in seen:
        seen.add(species_const)
        nxt = None
        for method, param, target in evos[species_const]:
            if method == "EVO_SPLIT_FROM_EVO": continue
            if method.startswith("EVO_LEVEL") and param.isdigit() and int(param) > 0:
                if level >= int(param): nxt = target; break
            elif level >= OTHER_METHOD_LEVEL:
                nxt = target; break
        if not nxt: break
        species_const = nxt
    return species_const

def load_parties():
    party, header, cur = {}, {}, None
    for line in open(ROOT / "src/data/trainers.party"):
        m = re.match(r"=== (TRAINER_\w+) ===", line)
        if m: cur = m.group(1); party[cur] = []; header[cur] = []; continue
        if not cur: continue
        if re.match(r"^(Name|Class|Pic|Gender|Music|Double Battle|AI):", line): header[cur].append(line.rstrip("\n"))
        elif re.match(r"^[A-Z][A-Za-z.' -]*$", line.strip()) and line.strip() and not line.startswith(("Level", "Item", "Moves", "Ability", "Nature", "IVs", "EVs", "Ball", "Shiny", "Nickname", "Happiness", "Dynamax", "Gigantamax", "Tera")):
            party[cur].append([line.strip(), None])
        elif line.startswith("Level:") and party[cur]:
            party[cur][-1][1] = int(line.split(":")[1])
    return party, header

def main():
    dry = "--dry-run" in sys.argv
    evos = load_evos()
    party, header = load_parties()
    opp_path = ROOT / "include/constants/opponents.h"
    opp = opp_path.read_text()
    existing_ids = set(re.findall(r"#define (TRAINER_SKALD_\w+)", opp))
    count = int(re.search(r"#define TRAINERS_COUNT\s+(\d+)", opp).group(1))
    new_defs, new_parties, rewritten, skipped = [], [], 0, 0
    next_id = count
    for f in sorted(glob.glob(str(ROOT / "data/maps/Parcel*/scripts.pory"))):
        mapname = Path(f).parent.name
        if mapname in SKIP_MAPS: continue
        src = open(f).read()
        if "SkaldRematchTier" in src: skipped += 1; continue
        out = src
        for m in PAT.finditer(src):
            name, tid, intro, defeat, post = m.groups()
            if tid not in party or any(f"{tid}_R{t}" in existing_ids for t in TIERS): continue
            speaker = re.match(r"([A-Z][A-Z' .-]{0,16}?):", intro)
            n = speaker.group(1) if speaker else next((h.split(":",1)[1].strip() for h in header[tid] if h.startswith("Name:")), "THEY")
            branches, scripts = [], []
            for t, base in TIERS.items():
                rid = f"{tid}_R{t}"
                mons = party[tid]
                k = len(mons)
                levels = [base - 1 + i for i in range(k)] if k <= 3 else [base - 1, base, base + 1] + [base + 1] * (k - 3)
                lines = [h for h in header[tid]]
                body = f"\n=== {rid} ===\n" + "\n".join(lines) + "\n"
                for (sp, lv), L in zip(mons, levels):
                    body += f"\n{display_of(evolve(const_of(sp), L, evos))}\nLevel: {L}\n"
                new_parties.append(body)
                new_defs.append(f"#define {rid:<34}{next_id}"); next_id += 1
                branches.append(f"    if (var(VAR_RESULT) >= {t} && !defeated({rid})) {{\n        goto({name}_R{t})\n    }}\n")
                offer = pick(OFFER[t], tid, t).replace("{N}", n)
                no = pick(NO, tid, "no").replace("{N}", n)
                lose = pick(DEFEAT, tid, f"d{t}").replace("{N}", n)
                after = pick(AFTER[t], tid, f"a{t}").replace("{N}", n)
                scripts.append(
                    f"script {name}_R{t} {{\n    lock\n    faceplayer\n"
                    f"    msgbox(format(\"{offer}\"), MSGBOX_YESNO)\n"
                    f"    if (var(VAR_RESULT) == 0) {{\n        msgbox(format(\"{no}\"), MSGBOX_DEFAULT)\n        release\n        end\n    }}\n"
                    f"    trainerbattle_no_intro({rid}, format(\"{lose}\"))\n"
                    f"    msgbox(format(\"{after}\"), MSGBOX_DEFAULT)\n    release\n    end\n}}\n")
            # The continue script runs after the first win, so the part after the
            # trainerbattle command is only reached when the trainer is already
            # defeated (talked to again): that is where the tiers are offered.
            new_script = (f"script {name} {{\n    trainerbattle_single({tid},\n        format(\"{intro}\"),\n        format(\"{defeat}\"),\n        {name}_FirstWin)\n"
                          f"    specialvar(VAR_RESULT, SkaldRematchTier)\n"
                          + "".join(branches) +
                          f"    msgbox(format(\"{post}\"), MSGBOX_DEFAULT)\n    end\n}}\n"
                          f"script {name}_FirstWin {{\n    msgbox(format(\"{post}\"), MSGBOX_DEFAULT)\n    release\n    end\n}}\n"
                          + "".join(scripts)).rstrip("\n")
            out = out.replace(m.group(0), new_script, 1)
            rewritten += 1
        if out != src and not dry:
            open(f, "w").write(out)
    if not dry and new_defs:
        block = "\n// Route-trainer rematch tiers (generated by tools/skald/rematch_tiers.py; tier 2..5)\n" + "\n".join(new_defs) + "\n"
        opp = opp.replace("\n#define TRAINERS_COUNT", block + "\n#define TRAINERS_COUNT", 1)
        opp = re.sub(r"#define TRAINERS_COUNT\s+\d+", f"#define TRAINERS_COUNT                      {next_id}", opp)
        opp_path.write_text(opp)
        with open(ROOT / "src/data/trainers.party", "a") as fp: fp.write("".join(new_parties))
    print(f"{'would rewrite' if dry else 'rewrote'} {rewritten} trainers ({len(new_defs)} tier ids, TRAINERS_COUNT {count} -> {next_id}); {skipped} files already done")

if __name__ == "__main__":
    main()
