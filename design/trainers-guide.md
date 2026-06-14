# Trainers guide — building teams & movesets

> A working reference for authoring trainer parties. Trainer teams are
> **pure data** (no prose), so this is good work to do at any time — including
> while waiting on a prose-focused model, since it touches none of the
> dialogue layer. Everything here is verified against this repo's pipeline.

## Where teams live & how they build

- **Source of truth:** `src/data/trainers.party` — one file, Pokémon-Showdown
  export syntax, processed by `tools/trainerproc` into `src/data/trainers.h`
  at build time. **Never edit `trainers.h`** (it's generated).
- **Register the ID first:** every `=== TRAINER_FOO ===` needs a matching
  `#define TRAINER_FOO <n>` in `include/constants/opponents.h`, and
  `TRAINERS_COUNT` must exceed the highest id. We currently sit at
  `TRAINERS_COUNT 866`, `MAX_TRAINERS_COUNT 872` — six free slots before the
  ceiling needs raising again (raising it costs saveblock space; there's a
  note in `opponents.h`).
- **Validate:** `make -j$(nproc) modern`. trainerproc errors surface there
  with a file:line. A team that builds is a team that works.
- **See it fight:** wire the trainer to an overworld object (`trainer_type:
  TRAINER_TYPE_NORMAL`, a sight radius) or a `trainerbattle_single(...)` in a
  `.pory` script, then screenshot/playtest. (Existing examples: the Skald
  route trainers.)

## Showdown syntax — the cheat sheet

A trainer block, with everything optional shown:

```
=== TRAINER_SKALD_EXAMPLE ===
Name: NELLA                  # shown in battle ("CLASS NELLA")
Class: Fisherman             # multi-word classes: drop the gender suffix!
                             #   "Cooltrainer", NOT "Cooltrainer M"
                             #   (the gender variant goes in Pic)
Pic: Fisherman               # the battle sprite (Pic can be e.g. "Expert M")
Gender: Male                 # Male/Female — affects default party gender
Music: Male                  # battle music bucket (Male/Female/Intense/...)
Double Battle: No
AI: Basic Trainer / Try To Faint   # see include/constants/battle_ai.h
Items: Potion / Potion             # the trainer's in-battle item bag

Poochyena                    # species: "Poochyena" or SPECIES_POOCHYENA
Level: 9                     # defaults to 100 if omitted — ALWAYS set it
Ability: Run Away            # optional
IVs: 10 HP / 10 Atk / 10 Def / 10 SpA / 10 SpD / 10 Spe   # 0-31; default 31
- Tackle                     # up to 4 moves; "- Tackle" or "- MOVE_TACKLE"
- Howl                       # if you omit moves, it uses the last 4 it would
                             #   know by level-up at this level (handy default)

Wingull (F) @ Oran Berry     # gender + held item inline on the species line
Level: 9
- Water Gun
- Growl
```

**Rules that bite (banked from real build failures):**
- A blank line between the header and the first Pokémon, and between Pokémon.
- Multi-word `Class:` is parsed token-by-token: `Cooltrainer M` →
  `TRAINER_CLASS_COOLTRAINER_M` (doesn't exist → build error). Use
  `Class: Cooltrainer` and put the variant in `Pic: Cooltrainer M`.
- `// comments` do NOT work in this file; use `/* C-style */` blocks.
- Always set `Level:` — the default is 100.

## Design guardrails (so teams stay canon)

From §00 / §05 / §06 — these are what keep teams feeling like *this* game:

- **No cartoon/stereotyped evil-team rosters** (§00). Antagonists use
  plausible, *locally-appropriate* Pokémon — the kind that would actually be
  here.
- **Species placement is ecological** (§06). A trainer's team reads like the
  habitat they're standing in. Poachers/working folk use opportunistic
  generalists and water-edge species; they are *the cost, not the enemy.*
- **The marquee antagonists are characterized through their rosters** (§05):
  - **Cordelia Brooke** (Mereholt CEO, final-act boardroom battle) — curated
    for *boardroom-photo neutrality*, not combat advantage. (Specific roster:
    §06/§11 territory — design it when zones 7–8 exist.)
  - **Councilman Dorsey** — *political-image-coded*: a Slowking (sage
    statesman), a Pidgeot (seen from a distance, never on the ground with
    anyone). Press-photo Pokémon.
- **Keep it Gens 1–3 + related Gen-4 continuations/babies** (§00 roster scope).

## Faction → species palette (the coherence key)

Use these as the default well to draw from so teams stay in voice:

| Faction / archetype | Palette |
|---|---|
| Poachers / opportunists | Poochyena→Mightyena, Zigzagoon, Wurmple, Wingull, Carvanha |
| Working folk (fishers, foragers) | Lotad, Surskit, Wooper, Croagunk, Magikarp, Shroomish |
| Climate Corps rangers (allies) | edge-species (Lotad/Seedot/Numel/Electrike/Doduo), grounded |
| Foundation / corporate staff | clean, "neutral" picks — Slowpoke line, normal-types, Pelipper |
| Highland (zone 5) | cold specialists — Snover, Sneasel, Swinub, Cubchoo |
| Industrial Coast (zone 7) | marine — Sharpedo, Tentacool, Wingull/Pelipper, Gyarados |

## Provisional level curve (retune freely)

Levels are the *one* thing to not over-polish yet — they depend on the final
encounter/level design (§11), and they're trivially changed later. Rough
targets matching current content:

| Zone | Wild | Trainers |
|---|---|---|
| 1 Saltmarsh / town | 2–8 | 3–5 |
| 2 Forest / station | 3–8 | 4–6 |
| (Ch1 enforcer) | — | 6 |
| 3 Floodbasin | 6–13 | 7–9 |
| 4 River & Farmland | ~10–16 | ~10–14 |
| … rising ~+4–6 per zone toward the zone-8 climax | | |

## Existing roster (reference / edit targets)

In `trainers.party` today (ids in `opponents.h`):
`TRAINER_SKALD_LOOKOUT` (857), `_ENFORCER` (860, Expert — Ch1 boss),
`_POACHER_A/_B` (858/859), `_KID/_BIRDER/_FORAGER` (861–863, route trainers),
`_REMEDIATOR` (864, Ch2 — the Foundation booth), `_BASIN_KID` (865).
Most have 1–2 Pokémon with 2 moves — **good first targets to flesh out** to
fuller, more characterful teams (3–4 thematic moves, abilities, a held item
on the "boss" mons).

## A good first session of trainer work

1. Flesh out the ~9 existing Skald trainers to full movesets (pure edits to
   `trainers.party`; `make modern` to validate).
2. Draft the **archetype** teams for each faction above as reusable templates.
3. Leave the **named-antagonist** rosters (Cordelia, Dorsey) as design notes
   until their zones + §05/§11 detail exist — those are design, not data.
