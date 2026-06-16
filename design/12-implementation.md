# 12 — Implementation Notes

> Status: **LIVING** (this section is the running map between the design
> bible and the actual repo — what's built, where it lives, how to verify
> it, and what the constraints are. Update it as code lands.) The design
> bible is the *intent*; this section is the *state.*

## Verified build (current)

Working build recipe in this environment, exit-0 verified:

```bash
make tools                        # builds host tools (preproc, gbagfx, ...)
make -j$(nproc) modern            # produces pokeemerald.gba
```

## Headless testing (verified working)

The in-tree test suite runs against a built ROM via the vendored
`mgba-rom-test-hydra`. **Run tests with `DEBUG=0`:**

```bash
make check DEBUG=0 -j$(nproc)                 # build + run the whole suite
make check DEBUG=0 TESTS="DNS" -j$(nproc)     # run only tests whose name matches
```

**Why `DEBUG=0` matters (a real gotcha — don't lose this):** the Makefile
defaults `DEBUG ?= 1`, which forces *both* the normal build and the test build
to share the `build/modern-debug/` object directory. But the test build needs
`-DTESTING=1` and the normal build uses `-DTESTING=0`; several `src/` files
(`battle_message.c`, `generational_changes.c`, …) gate symbols on
`#if TESTING`. If you `make modern` (TESTING=0) and then `make check`
(TESTING=1) into the *same* dir, make reuses the stale TESTING=0 objects and
the test ELF fails to link (`undefined reference to TestInitConfigData`,
`sBattlerAbilities`, …). `DEBUG=0` routes the test build to its own
`build/modern-test/` dir, so everything compiles fresh with `TESTING=1` and
links cleanly. (Alternative: `rm -rf build/modern-debug` before `make check`.)

**Verified test:** `test/dns.c` — drives the day/night system with
`SetTimeOfDay()` and asserts `GetTimeOfDay()` returns the correct phase
(morning/day/evening/night) for representative clock hours. Both tests **PASS**
in headless mGBA. This is the model for future mechanic tests (survey-state
classification, certification gating, etc., §10).

**Full-suite baseline (recorded so regressions are detectable):**
`make check DEBUG=0` over the whole tree: **2841 PASS / 21 KNOWN_FAILING /
615 TO_DO / 4 FAILED** (3481 total). The 4 failures are **pre-existing fork
inheritance, not ours** — verified by rebuilding at the last design-only
commit (no Skaldmere code) in a clean worktree: the same test fails
identically there. All four are deep upstream battle-mechanics cases
(Weather Ball typing in sun ×3 — `aerilate.c:43`, `weather_ball.c:23`,
`normalize.c:200` — plus one AI damage-preference case, `ai.c:162`), far
from anything Skaldmere touches. Disposition: **tolerated baseline**; do
not chase unless battle correctness for those moves starts to matter.
A future suite run is *clean for our purposes* if FAILED ≤ these 4 and
our prefixes (`DNS`, `Survey`, …) are all PASS.

## Visual verification (headless screenshots)

`tools/screenshot/capture.py` renders the built ROM to a PNG via a **headless
mGBA core** (mGBA Python bindings + Pillow — no display server). This closes
the "can build/test but can't see it" gap: the same ROM that passes
`make check` can be rendered frame-by-frame and inspected. Verified working —
boots our ROM through the GAME FREAK intro to the Emerald title screen, with
input injection (`--press`) functional.

```bash
bash tools/screenshot/setup.sh                                   # one-time deps
python3 tools/screenshot/capture.py --frames 4500 --out shot.png # capture
```

For a *specific* map, use a savestate parked there or the expansion's debug
warp rather than scripting the whole intro (see `tools/screenshot/README.md`).
This is how UI / map / cutscene work (§09, §10's survey & notebook UIs) gets
visually confirmed in a remote session.

## Confirmed-active engine features (relevant to design)

- **Day/night system (DNS)** — `OW_ENABLE_DNS TRUE` (`include/config/overworld.h`),
  implemented across `overworld.c` / `palette.c` / `field_weather.c` / `rtc.c`.
  Tints outdoor maps only (`MapHasNaturalLight`: town/city/route/ocean) — indoor
  maps are intentionally untinted. Runs on **fake RTC** (`OW_USE_FAKE_RTC TRUE`):
  the cycle advances with playtime, so every player sees the full
  dawn→day→dusk→night regardless of real-world clock — the right choice for a
  narrative game. Schedule is GEN_8+ (morning 6–10, day 10–19, evening 19–20,
  night 20–6). **Functionally verified** (see `test/dns.c` above).
- **Time-of-day encounters** — `OW_TIME_OF_DAY_ENCOUNTERS TRUE`: the engine
  natively supports multiple encounter tables per map keyed on a runtime
  condition. This is the **architectural precedent for survey-state encounters**
  (§10 System 5 / §11) — a state-keyed variant of an existing, tested mechanism.

## Skaldmere systems implemented (so far)

The first custom game code, built and verified (not just config):

- **Survey-state classifier** (`src/survey.c`, `include/survey.h`,
  `test/survey.c`). The core "reading" verb (§10 System 1): observed signals →
  ecological state, plus the state → recommended-response mapping. Pure,
  deterministic, 6 passing headless tests. **104 B ROM, 0 B RAM.** Not yet
  wired to UI, save, or encounters — those are the next survey increments, and
  they will *call* this function rather than reimplement the rules.

  This proves the bigger point: custom systems for this game are buildable and
  fully testable here, the same way the DNS was verified.

- **Opening warps into Skaldmere, not Hoenn** (interim scaffolding). The game
  now starts at the coastal arrival map instead of the Emerald truck:
  - `src/new_game.c` — `WarpToTruck()` spawns at `MAP_PARCEL_ISLE` (41, 48 —
    mid-pier) and starts the fake RTC at 10:00 (the ferry arrives in
    daylight, §07; otherwise a new game opens under the DNS night tint).
  - `src/overworld.c` — `CB2_NewGame` no longer runs `ExecuteTruckSequence`.
  - `src/main_menu.c` — NEW GAME routes straight to `CB2_NewGame`, skipping the
    Hoenn Birch speech.
  - `data/maps/ParcelIsle/map.json` — fog weather + a quiet island theme for the
    §07 "salt, fog, gull cries" arrival mood.

  All marked `INTERIM (Skaldmere)` in-code: the proper §07 prologue cutscene
  (ferry horn, the letter, gender select) replaces them later. Verified
  end-to-end via the screenshot tool.

- **The arrival scene — scripts, dialogue, NPCs** (§07 Scene 1), all
  verified in-engine:
  - `ParcelIsle_Arrival` — a one-time `ON_FRAME_TABLE` script fires the §07
    opening on spawn: the two canonical scroll paragraphs (verbatim), the
    ferry horn (`SE_SHIP`), "boots on damp wood." Gated by
    `FLAG_SKALDMERE_ARRIVAL_INTRO` (SYSTEM_FLAGS + 0x25). The in-world half
    of the prologue; the full cutscene (letter, pronoun select) replaces the
    Birch-skip later.
  - Four held-breath townsfolk with §07 dialogue (`data/maps/ParcelIsle/
    scripts.pory`): the heavy-coat greeter at the pier head, a fisher
    ("currents have been wrong for weeks"), a shopkeeper ("strange weather
    inland"), and a neighbor ("the one the scientist wrote about" → glances
    away). Plus a blank-board ferry sign. Subtly evasive, never hostile (§07).
  - **Wren is named canonically** at new game (`src/new_game.c`,
    `SetSkaldmereDefaultIdentity`) so `{PLAYER}` resolves and the menu isn't
    blank — interim until pronoun select lands.
  - **Charmap note:** the GBA charmap has no em-dash (U+2014) — use `--`.
    `…` (U+2026) is fine (maps to 0xB0). Never repurpose a low
    `FLAG_UNUSED_0x0xx`; vanilla filler scripts reference them — claim a
    verified-unreferenced SYSTEM_FLAGS slot instead.

- **The bridge set-piece — §07 Scenes 4–6** (`data/maps/ParcelBridge/`),
  the load-bearing scene, verified in-engine beat by beat:
  - New map: the long bridge east of town (60×24, generated by
    `tools/maptools/build_bridge.py`), connected via a carved corridor in
    the town's east forest (map connection, offset 26/-26). Stream-mouth
    embankment below the bridge's south side.
  - **Real Poliwag overworld sprites** via `OBJ_EVENT_GFX_SPECIES(POLIWAG)`
    (`OW_POKEMON_OBJECT_EVENTS` is TRUE) — the macro form works in
    `map.json` and links/renders correctly. The cluster waits at the
    embankment, visible from the bridge on approach, exactly as §07 stages
    it.
  - Coord-triggered cutscene mid-bridge (`VAR_TEMP_1` triggers ×3 rows,
    gated by `FLAG_SKALDMERE_BRIDGE_SCENE`, SYSTEM_FLAGS + 0x26): the
    quiet Poliwag staging → poacher trio enters (functional, not cartoon:
    MANIAC + 2 HIKERs) with the canonical "stock" exchange verbatim →
    Hale (CAMPER sprite, interim) with "Step away from the water." /
    "It's a living corridor. That's enough." → the witnessed battle as an
    authored fade+SE approximation (**no spectator battles in the engine**;
    recorded decision) → "You think you're early? You're late." → the
    Poliwag slip upstream → "This region doesn't need heroes. It needs
    witnesses."
  - Pre/post states via ON_TRANSITION temp flags; post-scene Hale stays at
    the east landing with a repeat line. Scripts include per-map
    `scripts.inc` **must be added to `data/event_scripts.s`** (gotcha:
    new maps don't auto-include their scripts).
  - Hale's sprite, the town/bridge names, and a proper spectate-battle
    presentation are all flagged interim pending later passes.
  Generated by `tools/maptools/build_dock_town.py` (**the map is code**:
  tweak parameters, regenerate, rebuild). Ferry pier over open sea, sand
  shoreline, fog-bound grass field, sandy track, forest wall. Player spawns
  mid-pier. Buildings (homes, general store, pier shelter) are v1.1.
  Verified by walking it in the built ROM (pier spawn + the full walk north).

## Skaldmere content built — the playable game so far (Chapters 0–4)

**Status:** the §07 prologue + §08 Chapter 1 + Chapter 2 (the Floodbasin) +
**Chapter 3 (the River & Farmland)** + **Chapter 4 (the Highlands)** are
playable, plus a density layer (wild encounters, a shop, trainers, item pickups,
healing, two enterable buildings). Each chapter's survey reads a different state
via the one tested classifier — and all four states are now on the board:
Meadow→Reference, Floodbasin→Collapsing, River→Stressed, **Highlands→Shifted**.
Certifications: Forest, Wetland, Watershed, **Highland** (the last two signed in
the field — Ilex at the river, Hale at the summit). Regression: `make check
DEBUG=0` = the inherited-battle-test baseline (4 pre-existing fails), 0 of ours.
*The map graph + register/scene detail below predates Chapters 2–4 — trust the
SESSION-HANDOFF "Recently shipped" note and the git log for those zones until
this section is reconciled.*

### The map graph (now 11 maps — §12 detail below is the original 8)

```
ParcelFerry (cabin, new-game start)
   └─warp→ ParcelIsle (the dock town) ──west connect→ (none)
              ├─ buildings: ParcelTownLodging (HOUSE1), ParcelLab (HOUSE2)
              └─east connect→ ParcelBridge ─east→ ParcelStation ─up→ ParcelWetlands ─east→ ParcelCorridor
```

Routes are connected (seamless edges); buildings use warps. Town↔bridge
offset 26/-26, bridge↔station 4/-4, station↔wetlands 0/0 (vertical),
wetlands↔corridor 11/-11. Each `Parcel*` map is generated by a
`tools/maptools/build_*.py` (the map is code); `ParcelFerry`, `ParcelLab`,
`ParcelTownLodging` reuse vanilla indoor layouts (HOUSE3/HOUSE2/HOUSE1) to
dodge interior art.

### World-state registers (the save-backed scene memory)

- **`VAR_SKALDMERE_CERT_TASKS`** (0x404E) — §08 Act III, 7-bit task bitfield
  (snares 0–2, stakes 3–5, water 6).
- **`VAR_SKALDMERE_CH1_EVIDENCE`** (0x4083) — §08 Acts IV–V, 11-bit
  investigation machine (clues 0–2, Harland/Dorsey 3–4, poison-seen 5,
  evidence 6–8, culvert 9, worker 10).
- Story flags: `FLAG_SKALDMERE_ARRIVAL_INTRO`, `_STATION_BRIEF`,
  `_BRIDGE_SCENE`, `_FOREST_CERT`, `_LAB_SEEN`, `FLAG_SKALD_ITEM_*` (4
  pickups). Trainers `TRAINER_SKALD_*` (LOOKOUT/ENFORCER/POACHER_A/B/KID/
  BIRDER/FORAGER, ids 857–863 — **`TRAINERS_COUNT` is now 864 == MAX, so the
  next trainer must raise `MAX_TRAINERS_COUNT`**).

### Systems wired to gameplay

- **Survey classifier** (`src/survey.c`) — the §06 state model; 6 headless
  tests. Called in-game by `SkaldmereClassifyMeadow` (Ilex's Act III
  habitat read).
- **Generic var-bitfield specials** (`src/survey_scripting.c`):
  `SkaldmereCertTaskMark/Get/Count` take the var id in `VAR_0x8005` and
  bit/mask in `VAR_0x8004` — **one tested path** reused by both the Act III
  tasks and the Act IV–V evidence machine. `SkaldmereSetGender` applies the
  ferry pronoun choice. 3 headless tests (`test/survey_scripting.c`).
  *Gotcha: specials return their value (the table maps it into the result
  var); don't write `gSpecialVar_Result` directly. And don't use
  `VAR_0x8005` as script scratch near these calls — it's the var-id register.*

### Per-chapter scene inventory (all verbatim-canon where quoted)

- **§07 prologue (complete):** ferry crossing + scroll + manifest/pronoun
  choice (ParcelFerry) → dock arrival, 4 held-breath townsfolk, the letter
  (lodging), the erased lab + official/resident → the long bridge set-piece
  (Poliwag cluster, poacher trio, Hale, witnessed fade-battle, "you're
  late").
- **§08 Chapter 1 (complete):** station briefing + provisional kit → the
  Holding Meadow with all 7 edge species + Doduo recognition (givemon) →
  Act III training loop (3 snares, 3 stakes, water sample, Ilex
  classification) → lookout battle → wetlands (Harland/Dorsey, Poisoned
  Waters event, 3-clue+3-evidence machine, VOSS enforcer) → corridor audit
  (culvert scene, the worker YES/NO, "mask of improvement") → Forest
  Certification → "We're going west."

### Density layer

Tall grass + §06-faithful encounter tables on all 4 routes (corridor
deliberately degraded — one mesopredator swarms); town pokemart;
Hale's kit gifts (5+10 Poké Balls, Potions); Rin + the lodging keeper
heal the party; 3 route trainers; 4 item pickups.

### Interim scaffolds still standing (intentional, marked in-code)

- The vanilla Rayquaza **title screen** (the one remaining player-facing
  placeholder).
- **`Parcel*` map names** + `MAPSEC_PARCEL_ISLE` — pending the §01 detail
  pass (real town/zone names).
- **Building exteriors + the lab interior** are rough first assemblies
  (the lab reuses a *furnished* layout that fights its "emptied" text) —
  flagged for a Porymap art pass.
- The bridge **spectate-battle** is a fade+SE approximation (engine has no
  NPC-vs-NPC battle).
- **"They" pronouns** — §04 wants three; only he/she wired (needs a third
  avatar sprite-set).

## Map & tileset work — hard-won facts (do not rediscover)

- **This fork uses the triple-layer metatile system.**
  `NUM_TILES_PER_METATILE == 12` (`include/fieldmap.h`): each metatile is
  **24 bytes** — three layers (bottom, middle, top) × 4 quad tiles.
  **Bottom and middle render under sprites; top renders OVER sprites**
  (walk-behind: tree canopy, eaves). `triple_layer_converter.py` at the repo
  root converts vanilla 16-byte tilesets; it is idempotent (a size-ratio
  guard skips converted sets). All 61 previously-vanilla tilesets (every
  `frp_*` port + `johtogeneral`) are now converted — an unconverted tileset
  renders as scrambled garbage because the engine reads 24-byte strides.
- **FR-port floor tiles can end up with their surface art in the top layer**
  (the converter maps vanilla layer-type-0 art to middle+top). Symptom: the
  player walks invisibly *under* the floor. Fix with
  `tools/maptools/lower_floor_layers.py <tileset_dir> <ids…>` — explicit ID
  list only; canopy/eaves tiles must keep their top art.
- **Do not give FR-port tilesets vanilla anim callbacks.** The vanilla
  `InitTilesetAnim_General` DMA-stomps vanilla water/flower/sand frames over
  the port's tiles at the vanilla offsets. `gTileset_Primary_frp_general.callback`
  is NULL on purpose; wiring the port's own `anim/` frames needs a dedicated
  callback (open task).
- **Picking metatile IDs:** `tools/maptools/metatile_sheet.py` renders a
  labeled contact sheet of any tileset pair straight from disk (triple-layer
  aware). Read the sheet, pick IDs, build maps programmatically.
- **Stale-object traps in the build.** Changes to `data/layouts/**/map.bin`
  or `map.json` are NOT tracked by make — delete
  `build/<dir>/data/{maps.o,map_events.o}` before rebuilding. Same for
  `data/tilesets/**/metatiles.bin` → delete `build/<dir>/src/tilesets.o`.
  **Always verify in-ROM** after building (read `pokeemerald.map` for the
  symbol address and byte-compare the ROM against the disk file) before
  trusting a screenshot — two debugging hours went to screenshots of a ROM
  that silently hadn't changed.
- **Map cell format** (`map.bin`, u16 little-endian, row-major):
  `(elevation << 12) | (collision << 10) | metatile_id`. Land elevation 3,
  water elevation 1 + collision 1. Border = `border.bin` (2×2 metatiles).

Toolchain: `arm-none-eabi-gcc 13.2.1` (Ubuntu package
`gcc-arm-none-eabi`), installed automatically by the SessionStart hook
(`.claude/hooks/session-start.sh`). No devkitARM dependency for the
modern target.

Last known good build (base expansion, no Skaldmere content yet):

| Region | Used | Capacity | % | Headroom |
|--------|------|----------|---|----------|
| EWRAM  | 227,220 B | 256 KB | **86.68 %** | ~34 KB |
| IWRAM  |  28,393 B |  32 KB | **86.65 %** | ~4.4 KB |
| ROM    | 27,671,048 B | 32 MB | 82.47 % | ~5.6 MB |

ROM artifact: `pokeemerald.gba`, 33,554,432 bytes, header
`POKEMON EMER` / `BPEE`.

## RAM budget (the binding constraint)

ROM is comfortable; the GBA's RAM is the hard limit. The base expansion
already uses ~87 % of both EWRAM and IWRAM. Every custom mechanic in the
bible has a RAM footprint, and several add up fast. Rough budgeting:

| System (design §) | Expected RAM site | Notes |
|------------------|-------------------|-------|
| Survey-state model (§06, §10) | EWRAM, save block | Per-route ecological state (Reference/Stressed/Collapsing/Shifted); a few bits per route × ~50–80 routes is cheap, but a *log of red-cloth observations* could grow. |
| Notebook UI (§04) | EWRAM tile buffers + save block | Marginalia-decoded state is a bitfield per annotation; UI buffers are the bigger ask. |
| Certification tracker (§01) | Save block | Small (8 certs + per-cert sub-flags). |
| Day/night & weather hooks | EWRAM | Already present from prior WIP (see git log). |

When pressure starts to bite, the standard levers are:

1. Disable unused pokeemerald-expansion features behind flags in
   `include/config/` (a substantial fraction of EWRAM is consumed by
   features Skaldmere may not need).
2. Move static-after-init data to ROM (`const` it).
3. Pack flag/bitfield save state instead of per-byte.

**Update this table** as each new system lands, with its actual
post-build delta.

## Repo layout (the parts that matter for Skaldmere)

| Concern | Where |
|---------|-------|
| Maps (rooms, routes) | `data/maps/<MapName>/` (one dir per map; `map.json` + `scripts.pory`) |
| Tilesets | `data/tilesets/` (compiled via `tools/porytiles`) |
| Object event graphics | `graphics/object_events/` |
| Wild encounter tables | `src/data/wild_encounters.json` (single source of truth) |
| Trainer parties | `data/trainers/` (compiled by `tools/trainerproc`) |
| Species data | `src/data/pokemon/` (expanded format; learnsets, base stats, etc.) |
| Items | `src/data/items.h` |
| Text & dialogue | mostly inline in `.pory` scripts, plus `data/text/` |
| Save block layout | `include/save_location.h`, `include/global.h` |
| Config (features on/off) | `include/config/*.h` |
| Tests | `test/` (uses `mgba-rom-test-hydra`) |
| Asset conversion rules | `*_rules.mk` at repo root |

## Tooling notes

- **`poryscript`** compiles `.pory` → `.inc` (event scripts). Use this for
  dialogue and cutscenes; do not hand-write `.inc`.
- **`porytiles`** compiles tileset PNGs + metatile data into the engine
  format. The `_porytiles/` dir at the root holds the porytiles source
  format used in this fork.
- **`wild_encounters`** (`tools/wild_encounters/`) generates the C tables
  from `src/data/wild_encounters.json`. Always edit the JSON.
- **`trainerproc`** generates trainer parties from `data/trainers/`.
- **`mgba-rom-test-hydra`** drives `mgba-rom-test` for the in-tree test
  suite. This is how we'll regression-test ROM behavior in CI-style.

## Pre-Skaldmere WIP — audit results (DONE)

Audited against the locked design. Everything below sits in the shared
history both branches inherit (the working branch is identical to
`pre-day-night-system` apart from `design/`, infra, and `.gitignore`), so
none of it is at risk of being lost.

**Reusable assets (keep):**

- **FireRed Tileset Port (FRP)** — a complete ~60-tileset library vendored
  under `data/tilesets/{primary,secondary}/frp_*`. High-value for Skaldmere's
  cold-temperate coastal look: `frp_seafoam_islands` (ice cave —
  §09 Crystal Cavern candidate), `frp_island_harbor` (docks/ferry — §07
  arrival, §01 zone 7), `frp_sevii_islands_*` (cold islands). The
  `extern/Firered-Tileset-Port` submodule is **uninitialized and not needed**
  — the verified build succeeds without it; the vendored copies in
  `data/tilesets/` are authoritative.
- **Custom snow-grass animation** —
  `data/tilesets/secondary/frp_seafoam_islands/anim_snow_grass.png`, a custom
  addition to the Seafoam tileset. Reusable for §09 Delibird Isle / zone 5
  Highlands.
- **Delibird overworld sprite** —
  `graphics/object_events/pics/pokemon_ow/delibird.{png,pal}` + shiny palette.
  Directly reusable for §09's delivery questline / follower moments.
- **`johtogeneral` primary tileset** (with flower/sandy/water anims) — fits
  the Johto-arrival framing (§04/§07); keep available.

**Prototype debris (scrap or rename when zone work starts):**

- **`ParcelIsle`** — a throwaway prototype, *not* a real Delibird Isle:
  volcanic-ash weather, `MUS_DUMMY` music, one Delibird NPC
  (`Delibird_Interact`), and a warp to `MAP_TEST_DESERT_ROUTE`. Verdict:
  **build §09 fresh.** The registered IDs (`MAP_PARCEL_ISLE`,
  `LAYOUT_PARCEL_ISLE`, `MAPSEC_PARCEL_ISLE`) can be renamed/reused as the
  Delibird Isle shell. The `scripts.pory` confirms the poryscript pipeline
  has been exercised end-to-end.
- **`TestTown`, `Littleroot_TestTown_Connector`, `TestDesertRoute`** —
  prototyping leftovers; remove once real zones exist.

**Corrections to earlier assumptions:**

- **There is no custom day/night system.** The branch name
  `pre-day-night-system` marks a snapshot taken *before* that work started;
  it never landed. What exists is the **expansion's built-in time-of-day
  system**, already configured on: `OW_USE_FAKE_RTC TRUE`,
  `OW_TIMES_OF_DAY`, and — the key find — **`OW_TIME_OF_DAY_ENCOUNTERS
  TRUE`**.
- **Architectural precedent for §10/§11:** `OW_TIME_OF_DAY_ENCOUNTERS` means
  the engine *natively* supports multiple encounter tables per map selected
  by a runtime condition (time of day). Survey-state encounter switching
  (§10 System 5, §11) can follow this exact pattern — a state-keyed variant
  of an existing, tested mechanism rather than a novel system.

## How design sections map to code (forward-looking)

Filled in as each system lands. Empty rows = not yet implemented.

| Design § | What it specifies | Where it will live in code |
|----------|-------------------|----------------------------|
| §01 zone 6 | Delibird Isle map | `data/maps/ParcelIsle*` (rename pending) + new connected maps |
| §04 notebook | Marginalia-decoded reveals | New UI screen (`src/notebook.c`-equivalent — TBD); save bitfield |
| §05 Mereholt motif | Foundation crest on signage | Object event graphics; sign script text |
| §05 red-cloth points | Surveyor measurement markers | Object events with field-survey interaction |
| §06 survey states | Ecological state per route | New routine driving `src/data/wild_encounters.json` selection; save state |
| §06 indicator guilds | Species placement logic | `src/data/wild_encounters.json`, organized by guild per §06 |
| §10 survey verb — **state classifier** | **DONE & tested**: `src/survey.c` + `include/survey.h`. `ClassifySurveyState()` reads observed signals → Reference/Stressed/Collapsing/Shifted (the §06 table); `RecommendedResponse()` maps state → record/restrain/intervene/witness. 6 headless tests in `test/survey.c` (PASS). Cost: **104 B ROM, 0 B RAM** (pure logic). |
| §10 survey verb — UI + persistence | Field-action "Survey" + report UI; per-point save records (still to build) | New field-action menu entry + UI screen (model on Pokédex / region-map UI); ~80 B save; calls `ClassifySurveyState()` |
| §10 notebook | Survey log + marginalia decode + progression (designed in §10) | New UI screen; ~48 B save (decoded-marginalia bitfield + logged surveys); text in ROM |
| §10 certifications | Credential ladder + 4 competencies (designed in §10) | Save flags + per-competency levels (~6 B); credential UI |
| §10 partner recognition | "Starters choose you" meadow (designed in §10) | Authored overworld script + 1-byte result |
| §11 (pending) | Full encounter tables per state | `src/data/wild_encounters.json` |

## Open / next actions (implementation track)

- ✅ **Audit pre-Skaldmere WIP** — done; results above. Key outcomes: FRP
  tileset library + snow-grass anim + Delibird OW sprite are reusable;
  ParcelIsle is a scrap-and-rename prototype; no custom day/night exists but
  the expansion's `OW_TIME_OF_DAY_ENCOUNTERS` is the architectural precedent
  for survey-state encounters.
- ✅ **§10 Mechanics design** — done. The survey verb, notebook, certification
  ladder, partner recognition, and state-transition model are specified, each
  with a RAM estimate. The survey/notebook/certification systems are now ready
  for C scaffolding when development starts.
- ✅ **§07 prologue + §08 Chapter 1 + density layer** — built and playable;
  see "Skaldmere content built" above for the authoritative inventory.
- **Next content frontier: zone 3, the Floodbasin** (§01/§06 — "the wetlands
  are sick"). Chapter 2: legacy contamination, the §06 contamination
  signature matures, "recovery" first exposed as a lie. The map graph extends
  west from a new exit (Hale's "We're going west" already sets the hook).
- **Trainer ceiling**: raise `MAX_TRAINERS_COUNT` (and mind the saveblock
  note in `opponents.h`) before adding the next trainer — currently at 864.
- **Polish backlog** (any time, much of it Porymap-friendly for the user):
  building-exterior + ransacked-lab art, real town/zone names (§01 pass),
  the title screen, the spectate-battle presentation, "they" pronouns.
- ✅ **CI** — `.github/workflows/build.yml` builds the ROM + runs the
  Skaldmere test families on every push and uploads `pokeemerald.gba` as a
  downloadable artifact (Actions tab → delibird-isle-rom). Mirrors the
  verified local recipe; **not yet confirmed green on a GitHub runner** — the
  first run should be watched (this container can't trigger Actions). Keep the
  repo private (ROM = Nintendo assets).

## Updating this file

When a system lands:

1. Add it to "Currently implemented" with a one-line description and a
   pointer to the primary source files.
2. Update the design→code mapping table with the actual file paths.
3. Update the RAM-budget table with the measured delta from the build's
   memory-region report.
4. If the bible changed in flight, note the design § that drove the change.
