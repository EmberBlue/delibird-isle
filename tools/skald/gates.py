#!/usr/bin/env python3
"""Script gates: is a main-path function sitting behind a side quest or a post-story line?

Two bugs the 2026-11-10 playthrough found, both invisible to the map audits:

  * a side quest written ahead of an NPC's real job (the ferry captain's pier-post tally ran
    before the ferry menu and ended the talk; the Homesteader's errand ran before the reading
    HALE's certification needs);
  * a post-finale / post-epilogue reaction line that ends the talk of an NPC who also carries a
    function (the three return sailors stopped sailing after the hearing).

For every script that contains an essential action (a warp, a choice menu, a heal, a shop, an
exam battle, an HM, a certification, an evidence mark) this lists the top-level branches that
end the script before that action when their condition is a side-quest flag (FLAG_SKALD_Q_*)
or the finale / epilogue flag. One-time story gates (a badge already won, a certification
already signed) are expected and not listed.

  python3 tools/skald/gates.py          must print "0 suspicious gate(s)"
  python3 tools/skald/gates.py --all    every early-ending branch, for review
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]

ESSENTIAL = [(r"\bwarp\w*\(", "warp"), (r"\bmultichoice\(", "menu"), (r"special\(HealPlayerParty\)", "heal"),
             (r"\bpokemart\(", "mart"), (r"trainerbattle_no_intro\(TRAINER_SKALD_GYM", "exam"),
             (r"giveitem\(ITEM_HM", "HM"), (r"setflag\(FLAG_SKALDMERE_\w+_CERT\)", "cert"),
             (r"special\(SkaldmereCertTaskMark\)", "evidence")]
# functions that must keep working after the story ends (a reading or an exam is one-time)
LASTING = {"warp", "menu", "heal", "mart"}
# a talk that ends after the story for a function that is itself over by then
ALLOW = {
    ("ParcelFernwickHQ_Hale", "warp"),       # the walk into the Marsh is the finale; there is no second one
    ("ParcelCoast_MereholtAide", "warp"),    # the boardroom visit happens once
}


def scan(show_all=False):
    found = 0
    for f in sorted((ROOT / "data/maps").glob("Parcel*/scripts.pory")):
        text = f.read_text()
        for m in re.finditer(r"^script (\w+) \{\n(.*?)^\}", text, re.S | re.M):
            name, body = m.group(1), m.group(2)
            hits = [(re.search(p, body).start(), lab) for p, lab in ESSENTIAL if re.search(p, body)]
            if not hits:
                continue
            pos, lab = min(hits)
            pre = body[:pos]
            for g in re.finditer(r"^    (?:if|\} elif) \((.*?)\) \{\n(.*?)(?=^    \})", pre, re.S | re.M):
                cond, blk = g.group(1).strip(), g.group(2)
                if not re.search(r"^\s+end\s*$", blk, re.M):
                    continue
                if any(re.search(p, blk) for p, _ in ESSENTIAL):
                    continue
                after_story = bool(re.search(r"(?<!!)flag\(FLAG_SKALDMERE_(FINALE|EPILOGUE)_DONE\)", cond))
                # a quest flag AND the story being over, in front of a one-time function, is only a
                # late reaction line (the reading or exam was needed to get that far)
                quest = "FLAG_SKALD_Q_" in cond and not (after_story and lab not in LASTING)
                story = after_story and lab in LASTING
                suspicious = (quest or story) and (name, lab) not in ALLOW
                if suspicious or show_all:
                    found += suspicious
                    why = "side quest" if quest else "post-story line" if story else "story gate"
                    print(f"{f.parent.name}: {name} [{lab}] ends early when {cond[:100]}  ({why})")
    print(f"\n{found} suspicious gate(s)")
    return found


if __name__ == "__main__":
    sys.exit(1 if scan("--all" in sys.argv) else 0)
