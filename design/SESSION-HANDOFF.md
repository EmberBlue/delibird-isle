# Session handoff — read this first, then delete the staleness

> **Purpose:** the *live state* a new session can't get from the durable docs.
> The durable docs carry the structure; this carries the moment. Last updated
> end of the session that shipped the Wetland Certification + Chapter-2 opener.
> **If this note disagrees with reality, reality wins — update or delete it.**

## The 60-second orientation

You are continuing **delibird-isle**, an ecology-first Pokémon Emerald romhack
(pokeemerald-expansion). Read order is unchanged:

1. `CLAUDE.md` (auto-loaded) — build/test/screenshot commands + gotchas.
2. `design/README.md` → `design/00-canon-lock.md` → the bible (§01–§12).
3. **`design/12-implementation.md`** — the authoritative "what exists in code"
   record: the 8-map graph, world-state vars/flags, systems, per-chapter scene
   inventory, and every hard-won build gotcha. *This is the most important file
   for a dev session.* Trust it over this note for anything structural.
4. The git log on `claude/emerald-romhack-planning-T2LgQ` (the working branch).

Then you have the full background. Nothing else is needed.

## What's playable right now (pointer, not duplicate)

The §07 prologue + §08 Chapter 1 + the Chapter 2 opener (Floodbasin) are
complete, capstoned (Forest + Wetland Certifications), tested, and CI'd.
Full inventory: §12 "Skaldmere content built". New game starts on the ferry;
9 maps; ~11 trainers; wild encounters; shop; two enterable buildings; the
survey classifier proven against Reference *and* Collapsing states with
headless tests. Full regression baseline: `make check DEBUG=0` = 2844 PASS,
4 FAILED (pre-existing inherited battle tests — tolerated), 0 ours.

## THE thing to know: the model situation

The user prefers **Fable 5 (1M context)** for this project's prose — it has a
better ear for the bible's "implies more than it states" register (§00). At
handoff time **Fable 5 is temporarily unavailable** for this project, and the
user chose to **wait for it before continuing the main story build** (which is
dialogue-heavy: Chapter 3 is Harland's people, farmland NPCs, dam-relic
narration).

**The agreed plan if building continues before Fable returns ("hybrid"):**
- Build *structure* on whatever model is active (maps, map.json, flags/vars,
  C specials + tests, quest wiring, encounter tables) — all no-prose.
- Leave dialogue strings as **marked placeholders**: `// PROSE-TBD: <intent>`.
- When Fable is back, it does a *voice pass* over flagged strings — a clean
  edit, not a re-architecture, because prose is isolated in `.pory` files.
- (Not yet built: a `design/prose-inventory.md` punch-list. Offered, not done.)

**So: confirm with the user which mode they want before doing prose-heavy
work.** Don't assume.

## Recently shipped (this branch)

- **Trainers for the new zones (z4–z6).** Each of the three previously
  trainer-less zones now has one themed, roster-legal trainer (sight-3 overworld
  object + a `trainerbattle_single` + a thematic post-battle line):
  `TRAINER_SKALD_ANGLER` (River — Goldeen/Marill, the decline + the Board's
  empty promises), `TRAINER_SKALD_SURVEYOR` (Highlands — Sneasel/Geodude, the
  Foundation mask off the record: "they pay me to call it opportunity"),
  `TRAINER_SKALD_REVELER` (Delibird Isle — Snorunt/Stantler/Delibird, festival
  warmth with the dread in a child's offhand line). IDs 866–868; `TRAINERS_COUNT`
  → 869 (3 free slots left before the 872 ceiling). Parties omit moves
  (trainerproc auto-fills level-up moves — clean + always learnset-valid).
- **Chapter 5 — Delibird Isle (zone 6)** is BUILT and integrated. The title
  location and the **interlude** — NOT a cert zone (no survey/classifier). §09
  adapted to a playable Holiday Village where the give-vs-take thesis is a
  literal **gift economy**. `ParcelDelibird` (60×44) is a sea-framed island
  reached by **ferry** (a gated captain at the dock town, unlocks after
  `FLAG_SKALDMERE_HIGHLAND_CERT`; `warp(MAP, x, y)` both ways — no edge
  connection). Beats: the elder's storm-relief **delivery quest** → a free
  **Delibird** + a Ranger commendation (a grace note, not a credential); a
  give-economy gift NPC; the thaw made playable (a flood-relief beat you help
  but cannot win — reduce harm); environmental-storytelling thaw signs (sinking
  cabin, summit thermokarst); the Foundation festival banner (the §05 mask).
  Encounters: cold/festive (Delibird/Stantler/Snorunt/Sneasel) + shore range-
  shift + Lapras on the surf. Claimed flags 0x31–0x35, 0x37–0x39.
  **GOTCHA RELEARNED:** low `FLAG_UNUSED_0x0xx` must be grep-verified
  unreferenced before claiming — `0x36` is TestTown's and broke the link until
  restored (and `rm build/modern-debug/data/{map_events,maps}.o` after a
  flags.h fix or the stale object keeps the bad symbol).
- **Chapter 4 — the Highlands (zone 5)** is BUILT and integrated. The tonal
  turn: the first zone that reads **SHIFTED** (`SkaldmereClassifyHighlands` →
  SURVEY_SHIFTED, tested) — the response is **witness, not repair**.
  `ParcelHighlands` (64×56) is a vertical climb (green foothills → bare scree →
  a dead-end headwall), connected **up** from the River (offset 0; a causeway+
  trail carved at x21-22 through the river's north forest — `build_highlands.py`
  + a `build_river.py` edit). Six tells (thermokarst / drunken forest /
  compression band / lowlander-upslope / the "exploratory" drill / the
  homesteader) feed `VAR_SKALDMERE_CH4_EVIDENCE`; **Ilex** measures the
  shrinking cold band, **Hollis Aune** (Foundation) is the warm sincere mask /
  kindest threat, and **Hale signs the Highland Certification at the summit** and
  points to the Delibird Isle ferry (zone 6). Encounters encode the shift
  (generalists own the common slots; cold-specialists pushed to the rare ones; a
  stray Numel upslope). Claimed: `FLAG_SKALDMERE_HIGHLAND_ARRIVAL` 0x2E,
  `FLAG_SKALDMERE_HIGHLAND_CERT` 0x2F, `FLAG_SKALD_ITEM_HIGHLANDS` 0x30,
  `VAR_SKALDMERE_CH4_EVIDENCE` 0x409B. Cold visuals are evoked by layout+prose on
  the shared frp tileset — a snow/ice tileset is a deferred art pass.
- **Chapter 3 — the River & Farmland (zone 4)** is BUILT and integrated. The
  old `build_river.py` WIP shell was rewritten into a walkable map; everything
  in commit `23576965`'s 9-step plan is now done. `ParcelRiver` (84×44)
  connects **up** from the Floodbasin (offset 0; a trail carved through the
  basin's north forest at x34–36, beside the discharge plume — see
  `build_floodbasin.py`). Survey reads **STRESSED** (`SkaldmereClassifyRiver`,
  tested; STRAINED keystone + SKEWED + sensitive guild still present +
  disturbance). Four tells (cut / broken dam / runoff / clean reach) + the
  Foundation Water-Board mask + Harland (the lever made local) feed
  `VAR_SKALDMERE_CH3_EVIDENCE`; **Ilex signs the Watershed Certification in the
  field**. Claimed: `FLAG_SKALDMERE_RIVER_ARRIVAL` 0x2B,
  `FLAG_SKALDMERE_WATERSHED_CERT` 0x2C, `FLAG_SKALD_ITEM_RIVER` 0x2D,
  `VAR_SKALDMERE_CH3_EVIDENCE` 0x4091. The riparian-engineer **keystone species
  stays OPEN** (§06) — carried by the broken-dam relic + narration, no sprite
  committed (Bibarel is roster-questionable).
- **Trainer Builder app** lives on the *other* branch
  `claude/wizardly-noether-znwom5` (`tools/trainer-builder/`): a self-contained
  web app for authoring trainers by hand (learnsets / abilities / wild items /
  balls). A side-quest; not on this game branch.

## Chosen "while waiting" work: trainer teams (pure data, no Fable)

`design/trainers-guide.md` is the full how-to (Showdown `.party` syntax,
ID registration, faction→species palette, level curve, gotchas). The
suggested first pass — **flesh out the ~9 existing Skald trainers** (currently
1–2 mons / 2 moves each) — was offered but **not yet done**. This is the
ideal no-prose task to pick up.

## The loop (so you don't relearn it)

Build `make -j$(nproc) modern`. Test `make check DEBUG=0 TESTS="<prefix>"`
(single prefix, not OR; our prefixes: Survey, Cert, Meadow, DNS, Floodbasin).
See it: `tools/screenshot/capture.py` (drive inputs with `--press`; **mash B
not A** to advance scripted dialogue — A re-engages NPCs). Temp-spawn for
testing via `WarpToTruck()` in `src/new_game.c` marked `// TEMP TEST ONLY`,
then **always revert before commit** (`grep -c "TEMP TEST" src/new_game.c`
must be 0). Stale-object traps + the full gotcha list: §12.

## Top gotchas (full list in §12 — these bite hardest)

- `make check` **requires `DEBUG=0`** (shared obj-dir / TESTING flag).
- New map's `scripts.inc` must be hand-added to `data/event_scripts.s`.
- After editing `map.bin`/`map.json`: `rm build/modern-debug/data/{maps,map_events}.o`.
- poryscript `format()` can't hold escaped `"`; charmap has no em-dash (use `--`).
- Don't reuse low `FLAG_UNUSED_0x0xx` (vanilla scripts ref them) — verify free.
- Script specials *return* their value (table maps it into the result var).

## Immediate menu (the user picks)

(Zones 3–6 / Chapters 2–5 are done, Opus prose. All four survey states are on
the board (Reference, Collapsing, Stressed, Shifted) and the interlude is built.
Playable spine now runs ferry → town → … → basin → river → highlands, plus the
Delibird Isle ferry hop.)

1. **Zone 7 — the Coast (Mereholt Coastal, Chapter 6)**: the back half opens —
   the extraction hub at its source, Harland's economy where it's run from.
   Check §01/§05 for the coast's design (likely less-drafted than §09 was).
2. **Delibird Isle expansion**: the Crystal Cavern (the §09 quiet climax — an
   elder/a loss, not a boss); the Snowy Summit / Shoreline Cliffs as their own
   areas; a real randomized gift-trade at the square.
3. **A snow/ice tileset** (would lift the Highlands *and* the Delibird summit —
   both currently evoke cold via pale scree + prose).
4. **Flesh the ~9 Skald trainer teams** (still 1–2 mons / 2 moves each); add a
   second trainer to z4–z6 (one each now) and a generous islander heal-NPC on
   Delibird Isle (no heal point out there yet).
