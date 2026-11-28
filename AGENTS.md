# delibird-isle: instructions for agents

This repository is **Pokémon Anthropocene** (region: Skaldmere), a ROM hack
of Pokémon Emerald on pokeemerald-expansion.

**Read `design/CODEX-HANDOFF.md` first.** It is the handoff from the agent
that built the project so far (Claude) to you. The owner was not satisfied
with that work and wants very detailed new maps, possibly on new tilesets.
The handoff holds their words, an independent review of every outdoor map,
the tileset situation, what a redraw must not break, and how to prove a
change.

Then:

- `CLAUDE.md` is the project's standing instruction file. Despite the name
  it applies to any agent: the build, the RAM budget, how the design bible
  is kept, what "done" means. Where it says the toolchain installs itself,
  that is only true in Claude's web sessions; see section 4 of the handoff.
- `.claude/skills/skald-add-content/SKILL.md` and
  `.claude/skills/skald-verify/SKILL.md` are plain-markdown checklists of
  everything that has gone wrong here before. Read both before touching a
  map, a tileset or a script.
- `design/` is canon. If the bible and the code disagree, the bible wins
  until a committed change says otherwise.

Rules that are easy to break and expensive to get wrong:

- Keep the repository private and never commit a ROM (`*.gba`).
- Never change `MAX_TRAINERS_COUNT`; never reuse a flag something reads.
- Credit every artist whose tiles you add, in `CREDITS.md` and
  `src/data/credits.h`. Take tiles only from sources that release them.
- `grep -c "TEMP TEST" src/new_game.c` must be 0 in every commit.
- Do not open pull requests unless the owner asks.
- Show the owner pictures early and often. Long silences were one of the
  things that went wrong before you.
