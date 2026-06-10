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
- **§11 Routes & encounters** — the JSON is the spec; can be drafted now that
  §06 (guilds/states) and §10 (state→encounter delivery) both exist. Settle the
  encounter-by-state delivery mechanism (swappable groups vs. map versions)
  first — it shapes how the JSON is authored.
- **CI** — set up a workflow that runs `make modern` + `mgba-rom-test`
  on push. Catches regressions before they compound. Defer until the
  first real mechanic lands.

## Updating this file

When a system lands:

1. Add it to "Currently implemented" with a one-line description and a
   pointer to the primary source files.
2. Update the design→code mapping table with the actual file paths.
3. Update the RAM-budget table with the measured delta from the build's
   memory-region report.
4. If the bible changed in flight, note the design § that drove the change.
