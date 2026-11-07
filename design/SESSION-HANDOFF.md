# Session handoff — read this first, then delete the staleness

> **Purpose:** the *live state* a new session can't get from the durable docs.
> The durable docs carry the structure; this carries the moment. Last updated
> 2026-11-07, end of the "finish the game" session that rebuilt every outdoor
> zone on vanilla layouts and re-voiced the whole game in the plain Pokémon
> register. **If this note disagrees with reality, reality wins.**

## The 60-second orientation

You are continuing **delibird-isle** (working title *Skaldmere*), an
ecology-first Pokémon Emerald romhack (pokeemerald-expansion). Read order:

1. `CLAUDE.md` (auto-loaded) — build/test/screenshot commands + gotchas.
2. `design/README.md` → `design/00-canon-lock.md` → the bible (§01–§13).
3. **`design/12-implementation.md`** — what exists in code and the build
   gotchas; its "world graph" section (added this session) is the map of
   the game as built.
4. The git log on **`claude/emerald-romhack-planning-T2LgQ`** (the working
   branch). Every rebuild commit explains its choices.

**First command of every session:** `git branch --show-current`. Web
containers re-provision onto `claude/wizardly-noether-znwom5`. If you are
there: `git fetch origin claude/emerald-romhack-planning-T2LgQ && git checkout claude/emerald-romhack-planning-T2LgQ`.

## What's playable right now (the whole arc, end to end)

Saltwick (dock town) → the Holding Meadow (seven partners) → Route 1 (the
bridge scene) → Mistwood (the forest dungeon, Cut) → **Fernwick** (Corps
district town, gym 1 Tarn) → **Reedmere** (the backwater landing: Harland,
Dorsey's ribbon, the Poisoned Waters event, Voss) → **the Corridor /
Hollowbend Spur** (the culvert scene, Mirren's gate = gym 2/Flash, the adit)
→ **the Floodbasin / Leirvik** (Dorsey's relief line, the bridge tells,
Kole, Breen's gate = gym 3/Rock Smash) → **Elvsund** (the River: market day,
the water meeting in the hall, Harland's boat at night, Sluice = gym
4/Strength in the Water Board office, Ilex signs the Watershed cert) →
**Haukfell** (the Highlands: the slide, Vale's gate = gym 5/Surf, Hollis at
the bore, Ilex's band, Hale's witness cert at the summit, the waterfall for
later) → by ferry from Saltwick: **Delibird Isle** (+ the Crystal Cavern:
Kelda, the everfrost) and the **Mereholt Coast** (the quay, the fish market,
the cannery, the plaque, Hollis's tea, Harland = gym 6/Fly) and the
**Climate Station** (Vane = gym 7/Dive) → Hale walks you from Fernwick to
**the Last Corridor** (the Marsh: Aune's gate, Heron's confession and
battle, the Hollis choice, the final survey, Hale's coda) → the coast aide
→ the **boardroom coda** → the post-finale reaction pass.

**Numbers (2026-11-07):** 78 maps (16 outdoor, 62 interiors), ~32,700 words
of dialogue (quoted strings in `data/maps/Parcel*/scripts.pory`), 188 reachable
Skald trainers (gyms 1–8 + 4 Mereholt gates + Heron + Cordelia + the Weather
four + Perrin ×6 + ~160 route/town trainers; TRAINERS_COUNT 1045), seven
side quests (Grettir's pond, the Corridor satchel, Hedda's mask, the beaver
stump, the Highland egg, the Coast shell, Gaute's board), seven field HMs
wired as real traversal, 8 Skald map sections on the region map with heal
spots at Saltwick, Fernwick, Elvsund, Delibird, the Coast and the Station.
The user's targets (§13) are 100k words / 1,000 trainers / 100+ maps: the
*shape* of the game is now right; the remaining gap is volume.

## THE recipe (every zone was built this way; keep using it)

1. **Pick a vanilla base** and slice/compose it: `data/layouts/<Zone>/base.bin`
   is a copy or row-slice of a vanilla `map.bin` (Route 119 south half →
   Reedmere, Route 116 → the Corridor, Route 120 → the Floodbasin, Route
   117 over Mauville → Elvsund, Route 115 + Route 114's waterfall → Haukfell,
   Slateport → the Coast, Route 119 north halves → the Station and the
   Marsh, the Shoal Cave ice room → the Cavern). `build.py` beside it is the
   map source: paint ops with raw ids, `paste_*` for blocks, the General
   house (ids 8–34, door 33) for any small building, canopy 199 for tree
   fills. **Never use the 2×2 Hoenn tree blocks (468–477) outside the
   leob_* secondaries — they render black (no palette) under Fortree,
   vanilla Rustboro, Mauville.** Render first: `tools/maptools/render_map.py`
   (needs `python3 -m pip install pillow` on a fresh container).
2. **Plan on text:** `python3 tools/skald/layoutascii.py LAYOUT_X [--rows a-b] [--ids]`.
3. **Objects/scripts** by hand (map.json via a python dict; `scripts.pory`
   plain voice: uppercase names, no narrator, no "You feel…"). Scenes that
   must not be skippable live on **trigger lines across a chokepoint** or
   on an **ON_FRAME table** when the player arrives by warp. Gym leaders in
   the field are **trigger gates** (Mirren, Breen, Vale, Kelda) or
   buildings (Tarn, Sluice, Vane).
4. **Every coord/bg event uses elevation 0** (wildcard) — the audit enforces
   it. Connection edge tiles get elevation 0 where levels differ.
5. `python3 tools/skald/audit.py` before every commit (reachability is
   seeded from warps, connections, door thresholds and the script-warp
   arrival list; water counts on the Surf-era maps).
6. Build → **TEMP spawn** (`src/new_game.c` `SetWarpDestination(... MAP_PARCEL_X ..., x, y); // TEMP TEST ONLY`)
   → `tools/screenshot/capture.py` (new game: START@4500 A@4700 A@4900, B
   every 70 frames to 8000, capture ≥8600; walking: 16 frames per tile + a
   few for the turn) → **revert the spawn** (`grep -c "TEMP TEST" src/new_game.c` = 0) → commit.

## Verified by walking (2026-11-07)

`tools/skald/walktest.py` needs the TEMP probe hook in `src/new_game.c`
(an `EWRAM_DATA u16 gProbe[4]` the harness pokes at frame 4400; the
`WarpToTruck` branch reads it). With it, every connection and script warp
below was crossed headlessly and the save block read back: Isle↔Meadow↔
Route 1↔Mistwood↔Fernwick↔Reedmere↔Corridor↔Floodbasin↔Elvsund↔Haukfell
(both ways), Coast/Station/Marsh/Delibird arrivals, Marsh→Fernwick,
Cavern→Delibird. Also seen frame by frame (`--trace`): the Elvsund and
Haukfell first-entry scenes, Perrin's Fernwick ambush up to the battle
screen, and Grettir's quest talk (`--walk A`).
Harness rules: a trigger scene fired mid-segment eats the rest of that
segment, so walk onto the trigger as its own `--walk DIR:1` with
`--dismiss 1800` (text prints at ~300 frames a page), then continue; the
harness party is empty, so any trainer battle ends in a whiteout — spawn
out of sight lines and treat "reached the battle screen" as the pass.

## Known-open (honest list)

- **Volume.** 188 reachable trainers vs the 1,000 target; ~32.7k words vs 100k. The
  cheapest next wins: a trainer-dense optional area per zone (a "Corps
  field exam" tower, the old Weather gauntlet style), more residents in
  three story states per town, and more side quests (one per zone exists;
  Grettir's pond and Hedda's mask are the templates).
- **Not playtested end to end in an emulator** since the rebuilds: each zone
  was screenshot-checked at its arrival and one scene; the gym gates fire;
  the Floodbasin relief line fires. Walk the whole game with Script 1
  (debug menu → Scripts) when there is time; the connection offsets and
  the ferry/Hale warps were audited, not walked.
- `ParcelStation` and `ParcelBridge` are retired (unreachable); delete when
  nothing references them. The old Delibird summit-mouth pocket at (3–6,3–4)
  is sealed (cosmetic).
- The notebook UI / survey action (§10) is still signposts; the §13 fixes
  **E** (notebook) and the Weather station post-game move are open.
- Vanilla trainers 0–861 still exist in the data (unreachable); ids are
  pinned, `MAX_TRAINERS_COUNT` 2048 must not move.
- Title screen, "they" pronouns, `Parcel*` folder names (placeholders; the
  in-game names are the real ones: Saltwick, Fernwick, Reedmere, Hollowbend
  Spur, Leirvik, Elvsund, Haukfell, Mereholt Coast, the Climate Station).

## Top gotchas from this session (full list in §12)

- **Palettes:** the leob_general primary's 2×2 trees only have a palette
  under the leob_* secondaries. Use canopy 199 elsewhere, and target
  `gTileset_leob_rustboro` rather than vanilla Rustboro when a map only
  uses a few secondary tiles.
- **Elevation:** coord/bg events match the player's elevation unless the
  event's is 0; Route 120's hamlet ground is elevation 5. Painted paths must
  match neighbours; connection edges need a 0 tile between levels.
- **Arrival by warp onto a trigger tile does not fire it** — use the
  ON_FRAME table (the Coast, Marsh, Station, Cavern all do).
- Trainer classes must be Hoenn's: `Swimmer M/F`, `Tuber M/F`, `Ruin Maniac`
  (no `Scientist`), pics `Pokemon Ranger M/F`, `Pokemon Breeder M/F`.
- `MUS_ROUTE111` does not exist; `MUS_ROUTE113` / `MUS_ROUTE119` / `MUS_ROUTE120` do.
- The region-map constants and names are generated from
  `src/data/region_map/region_map_sections.json` — never edit
  `include/constants/region_map_sections.h`.
- A fresh container needs `python3 -m pip install --break-system-packages mgba pillow`
  (plain `pip3` targets another interpreter).
