# Trainer Builder

A trainer design workbench for this project. It reads the game's own data from
this repo, edits trainers with every field `trainerproc` supports, checks them
against the engine's real behaviour, measures difficulty, and writes the
results back into `src/data/trainers.party` and `include/constants/opponents.h`.

Open `tools/trainer_builder/dist/trainer_builder.html` in a browser. It is one
self-contained file (data, sprites and the game font inlined) and works
offline from disk, including on a phone.

## Workflow

1. **Workbench**: pick or create a trainer. The project starts with the
   trainers this repo added on top of the expansion (found by diffing
   `opponents.h` against the `Expansion 1.12.0` commit). Edit the trainer,
   its party, battle settings, story notes and dialogue. Dialogue previews
   are drawn with the game's font and wrap exactly where poryscript will.
2. **Checks** (inspector) update as you type. See *Checks* below.
3. **Balance**: plot every trainer by badge stage against the level caps in
   `src/caps.c`, test one-on-one matchups against the Pokémon a player can
   catch on chosen maps, and see type coverage.
4. **Project & data > Copy apply bundle**, save it as `bundle.json` in the
   repo root, then:

   ```bash
   python3 tools/trainer_builder/apply.py bundle.json
   python3 tools/trainer_builder/apply.py bundle.json --write
   ```

   The first command previews a diff; `--write` changes the files and writes
   each battle script to `tools/trainer_builder/out/<ID>.pory`.

The project autosaves in the browser. Export it (Project & data) to keep a
copy; browser storage can be cleared.

## Commands

| Command | What it does |
| --- | --- |
| `python3 tools/trainer_builder/build.py` | Re-extract data from this repo and rebuild `dist/trainer_builder.html`. Run after changing species, moves, learnsets, trainers or maps. |
| `python3 tools/trainer_builder/extract.py -o out.json` | Extract the data only. |
| `python3 tools/trainer_builder/apply.py bundle.json [--write]` | Merge a bundle into the repo, verified with `trainerproc`. |
| `./tools/trainer_builder/test.sh` | Rebuild and run every test, including a headless-browser smoke test when Playwright is installed. |

Requirements: Python 3, a C preprocessor (`cpp`), `make` and a C compiler for
`tools/trainerproc`, and Node 18+ for the tests.

## How the data is read

`extract.py` runs the C preprocessor over the same translation units the ROM
is built from (`src/pokemon.c`, `src/move.c`, `src/item.c`,
`src/battle_main.c`, `src/trainer_pools.c`) with the Makefile's flags, so every
config switch and `#if` is resolved as in the build. For example, the level-up
learnsets come from whichever generation `P_LVL_UP_LEARNSETS` selects. The
expanded C initializers are parsed in Python (`cparse.py`, with C integer
semantics). Constant names come from each family's defining header, in
definition order, so aliases such as `ITEM_BLACKBELT` resolve to their
canonical name.

Headers that only exist after a build (`map_groups.h`, `layouts.h`, ...) are
replaced by empty stand-ins placed after the real include path. The page lists
which ones were used under *Where the data comes from*. Every build records
the commit, branch, uncommitted-changes flag, expansion version and time.

## Checks

* **Error**: the build fails, or the game silently does something other than
  what is written. Examples: an unknown constant; a name longer than 10
  characters; characters missing from `charmap.txt`; more than 6 Pokémon
  without a Party Size; an ID past `MAX_TRAINERS_COUNT`. Also an ability the
  species can't have: `CreateNPCTrainerPartyFromTrainer` then quietly uses
  ability slot 1, and the message names the substitute.
* **Warning**: compiles, but a player couldn't have this. Examples: below the
  level the species evolves at; a move the species can't learn, or not yet at
  this level (pre-evolution learnsets count); above the level cap for the
  trainer's stage; EVs over the player limits.
* **Note**: engine defaults and design observations. Examples: no moves listed
  (the card shows the four the engine will pick); no AI flags; ace not last;
  three or more Pokémon sharing a weakness.

A warning or note can be accepted; it is stored as `@ok CODE#slot` in the
trainer's comment.

Engine defaults the app applies (from `trainerproc` and `battle_main.c`):

* Level 100, IVs 31, EVs 0, nature Hardy, friendship 0.
* Ability slot 1.
* The trainer class's Poké Ball.
* The last four level-up moves at the mon's level (`GiveBoxMonInitialMoveset`).

Run over the 857 trainers already in `trainers.party`, the checks report:
* 115 moves the species can't learn under the current (Gen 9) learnsets,
  mostly Gen 3 moves such as Magneton's Sonic Boom;
* 55 moves learned above the mon's level;
* 40 Pokémon below their evolution level.

## Design notes stored in trainers.party

Stage (badges held), role, map, dialogue and accepted checks are written as
`@key value` lines in the comment directly above each trainer's `===` header.
`cpp` strips the comment before `trainerproc` runs, so the game is unaffected.
Importing `trainers.party` restores them.

## Balance model

Matchups are one-on-one, with no switching:
* Each side uses its best damaging move, by expected damage × accuracy.
* Turns-to-KO is the first number of hits with at least a 50% chance to KO,
  computed exactly from all 16 damage rolls.
* Fewer turns wins; on equal turns, priority and then Speed decide who moves first.

Not modelled: crits, status moves, stat stages, items, weather, switching, and
abilities other than a short listed set (Levitate-style immunities, Thick Fat,
Huge/Pure Power, Wonder Guard, Adaptability).

Variable-power moves are modelled where power depends only on the two
Pokémon: Return, Frustration, Low Kick, Heavy Slam, Gyro Ball, Electro Ball,
Eruption, Flail. Present and Magnitude use the engine's odds. Other moves
whose power depends on the battle state are reported as not modelled.

Player Pokémon come from the selected maps' wild encounter tables, or are added
by hand. They use default moves, ability slot 1, a neutral nature and the
chosen IVs.

## Evidence

| Claim | Test |
| --- | --- |
| The importer/exporter matches `trainerproc` | All 857 trainers parsed, re-exported and run through `cpp \| trainerproc`: generated C identical to the original (`roundtrip.test.js`), plus a fixture using every field |
| Dialogue wraps like poryscript | 4,000 lines of the game's dialogue re-wrapped by the repo's poryscript binary and by the app: identical (`format.test.js`) |
| Stats and damage follow the engine | Bulbapedia's worked examples: Lv 78 Garchomp's stats; Lv 75 Glaceon's Ice Fang vs Garchomp for 168–196 (`core.test.js`) |
| Learnsets are complete | Level-up, TM/tutor and egg learnsets agree 584/584, 584/584 and 221/221 with the v1 builder's independently built data |
| `apply.py` is safe | Replaces only the target block, numbers new IDs, is idempotent, refuses past `MAX_TRAINERS_COUNT`, and refuses a file `trainerproc` rejects (`test_apply.py`) |

## Layout

```
extract.py   cparse.py        data extraction (C preprocessor + parser)
build.py                      bundles app/ + data into dist/trainer_builder.html
apply.py                      bundle -> trainers.party, opponents.h, out/*.pory
app/core/                     DOM-free logic, shared with the Node tests
  party.js   trainers.party parser/serializer (trainerproc grammar)
  data.js    lookups, learnsets, evolutions, default movesets
  calc.js    stats, damage, KO odds, matchups
  checks.js  errors / warnings / notes
  emit.js    poryscript format(), battle script, opponents.h, bundle
  project.js project model, import/export
app/ui/                       views: workbench, roster, balance, project
tests/                        node --test, unittest, browser smoke test
```

The v1 builder (EmberBlue/trainer-builder) saved trainers in browser storage
under `tb_saved_v1`. If this page runs at the same origin and finds that key,
it imports those trainers on first load.
