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

## Currently implemented (from prior WIP — pre-Skaldmere)

Established by git history before the design bible was started; these
features survive on the current branch:

- Delibird species tiles and a snow-grass animated tile.
- A WIP **day/night system** (see `WIP: pre-day-night-system changes`
  commit).
- A "Parcel Isle" map (working name for what is now zone 6, Delibird Isle,
  per §01) with Seafoam-derived tilesets.
- Backup snapshots of fly cleanup and `.pal` restorations.

**Action item:** audit these against the locked design (§01 zone map,
§09 Delibird Isle) and document which parts are reusable vs. which need
renaming/rework. This audit is not yet done.

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
| §10 (pending) | Survey/transect mechanic | TBD — new field menu + UI |
| §10 (pending) | Certification system | TBD — save flags + a credential UI |
| §11 (pending) | Full encounter tables per state | `src/data/wild_encounters.json` |

## Open / next actions (implementation track)

- **Audit pre-Skaldmere WIP** — what survives, what gets renamed, what
  gets discarded. Should produce a short list in this section.
- **§10 Mechanics design** before any of the survey/notebook/certification
  systems get C scaffolding — we need the verb defined before we build it.
- **§11 Routes & encounters** — the JSON is the spec; can be drafted
  side-by-side with §11 once the survey-state model has a runtime story
  from §10.
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
