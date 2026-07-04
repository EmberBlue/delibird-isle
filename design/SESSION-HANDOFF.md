# Session handoff — read this first, then delete the staleness

> **Purpose:** the *live state* a new session can't get from the durable docs.
> The durable docs carry the structure; this carries the moment. Last updated
> end of the session that shipped the **traditional-HM traversal pass** (all six
> field moves wired as real gates/nooks) + the 12-gym ladder + the archipelago
> region map + the ferry hub.
> **If this note disagrees with reality, reality wins — update or delete it.**

> ⚠️ **SUPERSEDED (this session):** older bullets below describe HMs as
> *reframed ranger tools* ("Lamp"/"Winch", "no Cut/Rock Smash") and the gyms/HMs
> as an *open fork*. That is no longer the design. The user chose **traditional
> gyms + HMs**; it is **built and shipped**. See the top "Recently shipped"
> entry and §00's amended "No gyms" lock. The ranger-tool bullets are kept only
> as historical record.

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

- **Traditional gyms + HMs — BUILT (the fork, resolved).** The user chose real
  gyms and real HMs over the ranger-tools reframe. Now live:
  - **12-leader ladder** on the engine's 8-badge + HM spine, *reframed* as
    Ranger Certifications + Mereholt clearances (§00 amended): 8 certification
    leaders (Tarn/Mirren/Breen/Sluice/Vale/Harland/Vane/Ilex) each grant the HM
    they authorize, + 4 clearance gatekeepers (Ward/Moore/Kelda/Aune) on the
    water. Parties in `trainers.party`; IDs 875–885.
  - **All six field moves wired as real traversal** (this pass): **Cut** deadfall
    sealing the Corridor's west road (forces Tarn's HM01); **Rock Smash** rubble
    sealing the Floodbasin→River channel (forces Breen's HM06); **Flash**
    (Cavern `requires_flash` + the Delibird summit mouth gates on `MOVE_FLASH`);
    **Strength** (the Cavern "winch" is now a real `EventScript_StrengthBoulder`
    over an everfrost cache); **Surf** (a surfable thaw-pond + reward islet in
    the Highlands, HM03 from Vale right there); **Waterfall** (a real climb on
    the Highlands headwall, vanilla Route124 tiles, PP Max at the crest).
    Each chokepoint was decoded from `map.bin` to prove a full seal + a reachable
    HM source first — no soft-locks. Hale's "we don't cut, we don't smash"
    briefing reconciled to license the field work while keeping the ethos.
  - **Custom Skaldmere archipelago region map** + 13 per-zone MAPSECs, and a
    **Dock Town ferry hub** (a clean destination menu, routes open by cert).
  - Item-flag gotcha **re-confirmed**: `0x20–0x23` are live in vanilla Littleroot/
    Birch — claimed `0x68`/`0xE9` instead (grep-verified unreferenced).
- **The Ranger-tools + the Crystal Cavern** (the "HMs" half of the fork, DONE —
  HMs reframed as ranger gear, no Pokémon move, no soft-lock, no Cut/Rock Smash).
  Hale grants the **field kit** (a flag) in the Watershed dispatch — a **Lamp**
  (Flash) and a **Winch** (Strength). `ParcelCavern` (40×36, §09's Crystal
  Cavern): an icy grotto under the Delibird Isle summit, **entered via the Lamp**
  (the cave-mouth sign on the Delibird peak refuses you without the kit), with
  the **Winch** clearing a fallen ice-jam to a reward (NeverMeltIce + 2 Rare
  Candy), a quiet §09 beat (the last Delibird of the cold, the deep pool a hand
  lower than the old mark), and rarer Ice encounters (Snorunt/Sneasel/Glalie,
  Walrein/Lapras on water). Flags 0x45–0x47. Renders + builds clean; the cave
  "walls" are forest tiles (a true cave/snow tileset is the deferred art pass,
  same as the Highlands). **Both halves of the gyms/HMs fork are now shipped.**
- **The weather-division gauntlet** (the "gyms" half of the user's fork) is
  BUILT. `ParcelWeather` (48×40) — the Mereholt Climate Station, an on-theme
  optional challenge: four climatologists who each command a weather (RAIN
  Pelipper/Ludicolo/Kingdra · SUN Ninetales/Tropius/Camerupt · SAND
  Cacturne/Flygon/Tyranitar · ICE Sealeo/Glalie/Walrein) + the DIRECTOR (Vane)
  who commands all four — the climate-management-hubris theme made into a
  gauntlet. Clear the four (sight battles), the Director gates on all four
  defeated, beat him for the four weather rocks. Reached by the dock-town
  captain's **third ferry route** (gated on the Coastal cert). New trainers
  870–874 (`MAX_TRAINERS_COUNT` raised 872→877, RAM unchanged); flags 0x43–0x44.
  NB: the Director's battle is a `trainerbattle_single` from a `TRAINER_TYPE_NONE`
  object (same pattern as Heron) — render + sight confirmed, full battle not yet
  playtested. **STILL OPEN from the fork: the HM/ranger-tools half** (Strength to
  clear a slump, Flash for a cave; disable Cut/Rock Smash) — not started.
- **Chapter 7 — The Last Corridor (zone 8), THE CLIMAX,** is BUILT — the 8-zone
  main story is now complete end to end. `ParcelMarsh` (56×48): the dying
  keystone freshwater marsh, warped in from the Station (Hale walks you to the
  treeline, gated on the Coastal cert, and doesn't follow; a leave-trigger walks
  you back). The Poliwag keystone (the prologue's stuck frogs) at the stream
  mouth; four tells (drying channel / dead reeds / encroaching edge / the
  Poliwag) in `VAR_SKALDMERE_CH7_EVIDENCE`. **Dr. Heron** found alive in exile,
  the full reveal (coerced via the double leash; Hollis the hand), a grounded
  battle that IS the conversation (`TRAINER_SKALD_HERON` 869 — Politoed/Quagsire/
  Pelipper), "finish it," the survey as the final credential
  (`SkaldmereClassifyCorridor` → COLLAPSING, tested), the choice to testify with
  maximum collateral, clear-eyed grief. Flags 0x3F–0x42 + var 0x40A1.
  **UNVERIFIED IN-EMULATOR:** the climax is build+test-clean but NOT yet
  playtested — esp. `trainerbattle_single` from Heron's `TRAINER_TYPE_NONE`
  object (mid-conversation battle); confirm it triggers, and screenshot the
  marsh. **Cordelia Brooke (the §02 boardroom 2nd boss) is designed but NOT
  built.**
- **Chapter 6 — the Industrial Coast (zone 7)** is BUILT and integrated. The
  endgame ramp; the extraction economy unmasked. `ParcelCoast` (64×44): a
  working harbour (cannery + Mereholt office on the land, the overfished sea to
  the east, Harland's boat at the quay), reached by **ferry** — the dock-town
  captain now runs a second route to the coast, gated behind
  `FLAG_SKALDMERE_DELIBIRD_ARRIVAL` so the island interlude comes first (§01
  order). Survey reads **COLLAPSING** (`SkaldmereClassifyCoast` → SURVEY_COLLAPSING,
  tested — a live trophic cascade: keystone grazer FAILING + mesopredator swarm).
  Two big beats land: **the collaboration reveal** — the notebook's marginalia
  finally decode, and the Board's "sustainable harvest" model is Dr. Heron's
  methods in her own hand (she was never silenced; she's the citation) — and
  **Harland's arc home** (the lever fully visible, his boat note Mereholt's, no
  redemption, he endorses the testimony and names its futility). Hollis Aune
  delivers the kindest threat; Hale debriefs + signs the **Coastal Certification**
  and turns the player toward **zone 8, the Last Corridor** (the climax — Heron
  found). Encounters encode the collapse (harbour generalists/scavengers; a
  Tentacool swarm + fished-rare Sharpedo on the surf). Flags 0x3A–0x3E, var
  0x409D (all grep-verified free this time).
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

(All 8 zones / the whole main story (Chapters 0–7) are BUILT, Opus prose. Survey
spine complete: Reference / Stressed / Collapsing (×3: basin, coast, corridor) /
Shifted, the interlude, the collaboration reveal, and the climax. What's left is
depth, verification, and polish — not main-line story.)

**RESOLVED design fork: gyms & HMs.** The user chose **traditional gyms + HMs**.
Built and shipped: the 12-leader certification/clearance ladder + all six HMs
wired as real traversal gates/nooks (see "Recently shipped" + §00's amended
"No gyms" lock). The leaders are still framed as competence/access tests, not
power-fantasy. *Remaining polish:* the leaders are sight-line/optional except
where an HM gate forces them (Cut→Tarn, Rock Smash→Breen are the two hard ones);
more hard gates could be added, and an in-emulator pass should confirm the
surf/waterfall/strength feel. The **Cordelia boardroom coda is now BUILT** (`ParcelBoardroom`; aide summons
on the Coast quay post-testimony; Hollis's no-second-cup closer) -- the main
story is complete end to end, coda included.

1. **Playtest + harden the endgame chain** (highest priority): the climax
   (Heron), the boardroom coda (Cordelia), and the post-finale reaction pass
   (Dorsey back at the landing / Harland / Ilex / Rin / Hollis×2) all share the
   unplaytested `trainerbattle_single`-from-NONE-object + flag-branch pattern.
   Walk Station→marsh→ending→Coast aide→boardroom→world-tour in-emulator.
   A parked savestate harness would make this repeatable.
2. ~~Cordelia Brooke — the §02 boardroom finale~~ **BUILT** (this session):
   `ParcelBoardroom` off the Coast quay, post-testimony summons, Lady-class
   photo-neutral roster, Hollis arc-closer. Playtest it along with the climax.
3. **Deepen the zones** (the "make it much longer" work): more trainers +
   gatekeeper battles; the full Delibird Isle areas (Snowy Summit / Shoreline
   Cliffs; the Crystal Cavern exists); environmental puzzles; a snow/ice
   tileset. ~~Gift-trade~~ + ~~heal-NPC~~ BUILT (the gift square + the
   warming hut, this session).
4. **Flesh the ~9 original Skald trainer teams** (still 1–2 mons / 2 moves each).
