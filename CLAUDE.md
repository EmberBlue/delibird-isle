# Delibird Isle — agent onboarding

You are working inside **delibird-isle**, a ROM hack of Pokémon Emerald built
on **pokeemerald-expansion**. The project is an ecology-first, grounded
narrative game (working title implied by the repo name). Story-wise, the
ground beneath everything is in `design/`.

## Read first, in this order

0. `design/SESSION-HANDOFF.md` — **live state for continuing sessions**: the
   current model situation, decisions in flight, WIP, and the immediate menu.
   Read it before starting work; trust `design/12-implementation.md` over it
   for anything structural.
1. `design/README.md` — table of contents, status legend.
2. `design/00-canon-lock.md` — "do not contradict" rules. The locked facts
   here are the spine; anything you write must agree with them.
3. The remaining bible sections (`design/01-…` through `design/06-…`) for
   the world, conflict, cast, organizations, and ecology. §07–§09 are
   long-form prose (prologue, chapter 1, Delibird Isle).
4. The git log on the active feature branch — recent design commits carry
   the reasoning behind decisions and often resolve "open" items in flight.

The design bible is **canon**. If a design decision and the code disagree,
the bible wins until a deliberate, committed update changes it.

## Build

The toolchain (ARM cross-compiler) is installed automatically by
`.claude/hooks/session-start.sh` on every web session. To produce a ROM:

```bash
make tools                  # builds host tools (preproc, gbagfx, ...)
make -j$(nproc) modern      # builds the ROM → pokeemerald.gba
```

The modern target uses `arm-none-eabi-gcc` (no devkitARM needed). A clean
build takes a few minutes; incremental builds are seconds.

### Headless ROM testing

`tools/mgba-rom-test` and `tools/mgba-rom-test-hydra` are vendored — these
let you run the in-tree test suite against a built ROM without an emulator
window. Useful for CI-style verification of mechanics.

```bash
make check DEBUG=0 -j$(nproc)              # run the whole test suite
make check DEBUG=0 TESTS="DNS" -j$(nproc)  # run only matching tests
```

**Always pass `DEBUG=0` to `make check`.** The Makefile defaults `DEBUG=1`,
which makes the normal build and the test build share `build/modern-debug/`.
Tests need `-DTESTING=1` but the normal build uses `-DTESTING=0`, and some
`src/` files gate symbols on `#if TESTING`; sharing the dir reuses stale
objects and the test ELF fails to link. `DEBUG=0` routes tests to their own
`build/modern-test/` dir. See `design/12-implementation.md` for the full
explanation. `test/dns.c` is a worked example (day/night verification).

### Seeing the game (headless screenshots)

Building is not playing, but you are not blind either: `tools/screenshot/`
renders the built ROM to a PNG via a headless mGBA core (no display server).
Run `bash tools/screenshot/setup.sh` once, then
`python3 tools/screenshot/capture.py --frames 4500 --out /tmp/shot.png` and
open the PNG. Supports input injection (`--press START@4500:8`) and savestates
for reaching specific maps. Use this to actually verify any UI / map / cutscene
change, not just that it compiles.

### Continuous integration

`.github/workflows/build.yml` builds the ROM and runs the Skaldmere test
families on every push, and uploads the ROM as an artifact (Actions tab).
Keep the repo private — a built ROM contains Nintendo's copyrighted assets.

## RAM budget (important)

The base pokeemerald-expansion ROM already uses **~87 % of EWRAM (256 KB)
and ~87 % of IWRAM (32 KB)**. ROM space is comfortable; the GBA's RAM is
not, and it is the hard limit on how much new game state custom mechanics
can hold. When adding systems (e.g. survey state, notebook UI, certification
tracking — see `design/06-ecology.md` and §10–§11 once they exist), plan
for the RAM cost up front. Common levers when space is tight: disable
unused expansion features behind config flags in `include/config/`, or
move static-after-init data to ROM.

## Working in this codebase

- This is decompiled C (pokeemerald-expansion fork). Edit
  `src/`, `include/`, `data/`, `graphics/`, `gflib/`, etc. directly.
- **Maps** live in `data/maps/<MapName>/` — `map.json`, scripts via
  `poryscript` (compiled by `tools/poryscript`), and metatile/tileset
  assets converted via `tools/porytiles` and `tools/gbagfx`.
- **Wild encounters** are in `src/data/wild_encounters.json` (a single
  authoritative file — the `tools/wild_encounters` tool generates the
  C tables from it).
- **Trainer parties** use `tools/trainerproc` on `data/trainers/`.
- **Dialogue and scripts** are `.pory` files compiled by
  `tools/poryscript` to `.inc`.

When unclear about the build pipeline for a given asset type, the
`*_rules.mk` files at repo root (`graphics_file_rules.mk`,
`spritesheet_rules.mk`, `map_data_rules.mk`, etc.) are the authoritative
record of how each file type is converted.

## Working with the design bible

When you add a section or firm an "open" item:

1. Update the section file with content. Use the status header
   (`LOCKED` / `FIRMED` / `DRAFT` / `OPEN`).
2. Update `design/00-canon-lock.md` — record new locks under "Resolved
   (was open)" and update the "Open questions" list.
3. Update `design/README.md`'s status table.
4. Cross-link related sections (`§04`, `§05`, etc.) — readers should be
   able to traverse the bible.
5. Commit with a `design: §XX …` prefix matching the existing log style.

## Branch policy

Default development branch for ongoing work:
`claude/emerald-romhack-planning-T2LgQ`.

Push to that branch; do not create PRs unless the user explicitly asks.

## What "done" means

For design work: a committed, cross-linked section with status updated in
`§00` and `README.md`.

For code work: builds cleanly (`make -j modern` → exit 0, ROM produced),
RAM budget not exceeded, and where possible a `mgba-rom-test` covers the
new behavior. *Building is not the same as playing — the ROM should also
be confirmed working in an emulator for any UI/feel change.*
