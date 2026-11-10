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
→ the **boardroom coda** → **the ending** (the boardroom stairs start the
epilogue: eight ON_FRAME vignettes chained on `VAR_SKALD_EPILOGUE` through
Reedmere, Leirvik, Elvsund, Haukfell, Delibird, the Marsh without Heron,
the Coast with Hale, and the Route 1 bridge with one Poliwag going
downstream; then `special(SkaldGameClear)` heals, sets the game-clear flag,
points "continue" at the Fernwick Center, saves, and rolls the Skaldmere
credits into a soft reset) → **the post-game** (every leader offers a
full-strength rematch, repeatable; Perrin's last battle at his desk; the
post-finale reaction pass).

**Numbers (2026-11-08, evening):** **102 maps** (24 outdoor incl. six side
areas and the two new Delibird Isle maps, 78 interiors: fifteen houses
painted into Fernwick, Elvsund, Leirvik, Haukfell, Reedmere and the Coast
plus the breakwater's lifeguard hut, each with residents in two story
states), ~85,000 words in `data/maps/Parcel*/scripts.pory` (of which
~26.2k are the generated rematch-tier lines; **~58,800 hand-written**,
every named resident with a post-finale line and **three story states** in
every town (a mid-game line: the river meeting reaches zones 1–3 after the
Watershed cert, Haukfell's slide reaches Elvsund after the Highland cert,
the coast's survey reaches Haukfell, the island and the quay itself after
the Coastal cert), Dorsey in zones 2–6,
twenty-four side quests incl. Marta's three-door relief round and the
eight of 2026-11-08 (Halvar's whistle, the crate label, the reed count,
the brown water, the keel plank, core tag 48-50, Kari's sledge, the fourth
carbon), the Sketch
thread, the notebook's "Her notes" page, and 111 readable pieces of
furniture in 53 interiors -- dressers, shelves, drawers, a bed, two pots,
the Centers' wall maps, the Marts' shelves, the HQ's duty ledger, the
boardroom's framed model -- each written for the people who use it), **1,071 reachable Skald trainer battles** (gyms 1–8 + 4
Mereholt gates + Heron + Cordelia + the Weather four + Perrin ×7 + 8 leader
rematches + ~218 route/town/side-area trainers + **816 rematch tiers**:
every simple trainer fought again at tiers 2–5 as the clearances come in,
`tools/skald/rematch_tiers.py`; TRAINERS_COUNT 1928), a real ending
(epilogue, credits, post-game), the Field Notebook, six side areas (the
Reedmere hide west of the landing, the Hollowbend old workings off the
Corridor's east plaza, the Leirvik upper sluice across the basin's west
edge, the Elvsund mill wood off the river town's west edge, the Haukfell
tarn under the slope west of the bore, the Mereholt breakwater south of
the quay), seven
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

## Map provenance — measured (2026-11-09)

Every `build.py` prints how many tiles differ from its `base.bin`. The
question "are the maps just vanilla with new content on top?" was fair
until 2026-11-09 (the Coast was Slateport at 1%, the Marsh 1%, the Station
0%, the side areas 0%). Current state:

| Layout | Vanilla base | Changed | What the change says |
|---|---|---|---|
| `ParcelDelibird` | Azalea-style village | 27% | the village opened to the summit and cliffs; sea tile and border fixed |
| `ParcelCoast` | Slateport | 21% | an industrial port: crate yard (822/823), quay walls, the park paved, boats landed |
| `ParcelRiver` | Route 117 / Mauville | 15% | Elvsund's market ground and river |
| `ParcelWetlands` | Route 119 south | 13% | dead-reed beds, standing water, the drained pond |
| `ParcelCoastBreakwater` | Route 109 | 12% | the beach the breakwater killed: furniture gone, south lobe drowned, posts, apron |
| `ParcelWeather` | Route 119 north | 10% | the Station yard: gravel inside a fence, stakes on the slope |
| `ParcelCorridor` | Route 116 | 9% | the culvert route |
| `ParcelWetlandsHide` | Route 102 | 9% | the pond drawn down a row onto mud; a hide screen |
| `ParcelMarsh` | Route 119 north | 8% | the river low, puddled bed, dead-reed beds, a ledge |
| `ParcelFernwick` | Rustboro | 7% | the Survey town |
| `ParcelFloodbasin` | Route 120 | 7% | dead-reed beds, puddles on the flats |
| `ParcelCavern` | Shoal Cave ice room | 6% | the ice gone to bare rock in patches (a stop never loses a reachable tile) |
| `ParcelCorridorWorkings` | Altering Cave | 6% | sand spills with walkable shallow pools, roof-fall |
| `ParcelHighlands` | Route 115 (+114 falls) | 5% | the drunken stand, mounds, puddles |
| `ParcelFloodbasinSluice` | Route 118 | 5% | the old ford: shallow shelves along both beaches, the deep channel kept for Surf |
| `ParcelRiverMillWood` | Petalburg Woods | 5% | a coppice: two stands felled, stools sprouting, cordwood |
| `ParcelHighlandsTarn` | Shoal Cave | 3% | meltwater: the tarn up a row, pools on the sand, sand spills |

Drawn from scratch on a canvas (no vanilla base): `ParcelIsle`,
`ParcelMeadow`, `ParcelRoute1`, `ParcelMistwood`, `ParcelDelibirdSummit`,
`ParcelDelibirdCliffs`. Interiors are vanilla room layouts with Skaldmere
furniture scripts (§13 "readables").

**The remix vocabulary** (in each `build.py`, General-tileset ids): `bed`
(TAN 280–298 bare earth / PALE 256–274 bleached litter, grass-lipped
edges), `puddle2` (the 2×2 grass-rimmed puddle 200/202/216/218), `shallow`
(walkable shallow water 414 with sand rims 398/422/397/415/413/405/406/407
-- only over sand 292/673), `spill` (cave sand 664–682 over the brown
floor), `mound` (331–333 cordwood/spoil, solid), `fence_h` (312–314),
`solid` (one prop: cave boulders 592/610/614, coppice stools 206, Slateport
posts 619/620 and crates 822/823). The Breakwater's `retile` is a sand/sea
autotiler (283/284/285/291/293/299/300/301 edges, 317/318/325/326 inner
corners); it reports shapes the tileset cannot draw. Do not use 653 for
crates (it is a produce basket) or 331–333 on sand or cave floor (grass
rims). Puddle centre 209 alone is a flat blue square -- use the set.

## Verified by walking (2026-11-07)

`tools/skald/walktest.py` needs the TEMP probe hook in `src/new_game.c`:
`python3 tools/skald/probe_hook.py --on` patches it (an `EWRAM_DATA u16
gProbe[12]` the harness pokes at frame 4400: map, x, y, up to five flags to
set; `WarpToTruck` reads it and writes back the save-block offsets of
`flags` and `vars` so `--check FLAG_X|VAR_X` can read them), `--off`
removes it before the commit. With it, every connection and script warp
below was crossed headlessly and the save block read back: Isle↔Meadow↔
Route 1↔Mistwood↔Fernwick↔Reedmere↔Corridor↔Floodbasin↔Elvsund↔Haukfell
(both ways), Coast/Station/Marsh/Delibird arrivals, Marsh→Fernwick,
Cavern→Delibird, **Delibird village→Summit (north belt, x 3–5) and
village→Cliffs (rows 10–12)**, the whole Summit route (trail → both
staircases → Ingrid's hut, the five summit trainers pre-flagged) and the
whole Cliffs route (cliff top → Rune → the east stairs → Tomas), with
`FLAG_SKALD_DEL_RUNE_DONE`, `FLAG_SKALDMERE_DELIBIRD_DELIVERED`,
`FLAG_SKALD_DEL_INGRID_DONE` and Marta's `FLAG_SKALDMERE_DELIBIRD_GIFT`
(the lighting scene) all read back 1; the post-game SMEARGLE at the Fernwick
pond (talk, YES, `FLAG_SKALD_SMEARGLE_DONE`), the Saltwick arrival scene
with its new last line, and Ilex's re-talk. Also seen frame by frame (`--trace`): the Elvsund and
Haukfell first-entry scenes, Perrin's Fernwick ambush up to the battle
screen, Grettir's quest talk (`--walk A`), **the whole ending** (spawn in
the boardroom with `--flag FLAG_SKALDMERE_CORDELIA_DONE`, walk onto the
stairs, `--walk WAIT:9000`: all eight vignettes, the bridge Poliwag, the
fade, the credits' first pages; `VAR_SKALD_EPILOGUE` read back 0), and
Tarn's post-game rematch to "EXPERT TARN sent out Azumarill Lv58"
(`--walk A:14 --dismiss 0` answers YES to the prompt). The six side areas
were each entered and left (the hide and the mill wood by step triggers and
door tiles, the sluice and the breakwater by true connections, the workings
and the tarn by cave mouths), Kalle's tier-2 rematch was taken to the battle
screen, and the ten interiors numbered 128–137 were entered by their doors
after the `u8` map-number fix.
Harness rules: a trigger scene fired mid-segment eats the rest of that
segment, so walk onto the trigger as its own `--walk DIR:1` with
`--dismiss 1800` (text prints at ~300 frames a page), then continue; the
harness party is empty, so any trainer battle ends in a whiteout — spawn
out of sight lines and treat "reached the battle screen" as the pass.

**The sweep (2026-11-10).** `tools/skald/sweep.py` walks *every* warp event
and *every* map connection of the 102 maps in the emulator (257 probes,
about two seconds each with `--jobs 3`), against a probe-hook ROM stashed
outside the tree so the sources stay clean:

```
python3 tools/skald/probe_hook.py --on && make -j modern
cp pokeemerald.gba $SP/hookon.gba && cp pokeemerald.map $SP/hookon.map
python3 tools/skald/probe_hook.py --off
python3 tools/skald/sweep.py --rom $SP/hookon.gba --map $SP/hookon.map --jobs 3 --log $SP/sweep.log
```

It approaches door tiles from the walkable side, arrow mats from behind,
arrival-only warps by walking onto the trigger beside them, and crosses
connections where both edge tiles share an elevation. First run: 252/257.
The one real break it found was the **Coast office stairs landing in
Petalburg City**: `MAP_PARCEL_COAST_OFFICE2_F` is map *number 127* in its
group and the engine's `SetupWarp` tested `mapNum == MAP_NUM(MAP_DYNAMIC)`
alone (0x7F), so every warp into that map became a dynamic warp to map
(0,0). Fixed in `src/field_control_avatar.c` (both bytes of `MAP_DYNAMIC`
must match). The audit now also flags a warp event on a plain tile with no
trigger within one tile (arrival-only; the engine fires warps only from
door/arrow/ladder tiles). After the fixes: every warp and connection
passes except the retired Station's.

## Known-open (honest list)

- **Volume.** 1,071 reachable trainer battles (255 distinct opponents + 816
  rematch tiers) against the 1,000 target -- met; **~66,800 hand-written
  words** (every `_R2`–`_R5`/`_FirstWin` rematch script excluded; ~94k
  with them; 655 objects, 323 readable/hidden events) against 100k -- the
  remaining gap. Recount with the snippet in §13's 2026-11-10 entries
  (script bodies minus the rematch scripts, plus the notebook's C strings
  and the 81 dex entries). The rematch tiers
  are the custom "ledger" system, not Match Call (the save block has 28
  bytes of headroom and the registered-flag range 0x15C–0x1A9 is boxed in
  by our flags; `FREE_*` options in `include/config/save.h` would buy room
  if Match Call is ever wanted). Cheapest next wins: a trainer-dense
  optional area per zone (a "Corps field exam" tower, the old Weather
  gauntlet style), more residents in three story states per town, and more
  side quests (one per zone exists; Grettir's pond and Hedda's mask are the
  templates). New simple trainers get their tiers by re-running
  `python3 tools/skald/rematch_tiers.py` (idempotent).
- **The post-game** has the leader rematches, Perrin's last battle, the
  post-finale resident lines, and the late Smeargle beat (the Fernwick pond,
  after the epilogue; `ParcelFernwick_Smeargle`). The "Weather station
  move" in §13 F is superseded: the Climate Station is zone 7's gym in the
  main path. **The Sketch thread** (§04's locked memory) now runs as private
  narration from the Saltwick boards to Heron's confession.
- **Not playtested end to end in an emulator** since the rebuilds: each zone
  was screenshot-checked at its arrival and one scene; the gym gates fire;
  the Floodbasin relief line fires. Walk the whole game with Script 1
  (debug menu → Scripts) when there is time; the connection offsets and
  the ferry/Hale warps were audited, not walked.
- `ParcelStation` and `ParcelBridge` are retired (unreachable); delete when
  nothing references them.
- **Delibird Isle is a real island now** (§09 *Built*): `ParcelDelibird`
  connects north to `ParcelDelibirdSummit` (x 3–5 through the tree belt;
  the old sealed pocket is the trailhead) and east to `ParcelDelibirdCliffs`
  (rows 10–12). Both are drawn canvases on the Johto legend
  (`tools/skald/legends/johtogeneral__azaleatown.json`); the summit's snow
  patches are thirteen metatiles `tools/skald/snowtiles.py` adds to the
  AzaleaTown tileset. The village's own map is now `build.py` over
  `base.bin` (its sea tile had a rock pair on every tile and its border was
  a wall piece; both fixed).
- The **Field Notebook** is a Key Item now (`ITEM_FIELD_NOTEBOOK`, given in
  Hale's first brief): Assignment (where the story wants you next, from
  Hale's own flag logic), Certifications, Side work, Margins (Heron's
  marginalia, one line per clearance, plus the player's own line after the
  finale). Pages are built in `src/survey_scripting.c` (`SkaldNotebookBuffer`)
  and shown by `data/scripts/skald_notebook.pory`. The **survey stakes**
  (§13 fix E's other half) stand one per zone -- Reedmere's landing, the
  Hollowbend checkpoint, the Leirvik hamlet, Elvsund's market ground, the
  Haukfell warming centre, the Mereholt quay, the marsh edge -- and read the
  chapter's evidence bitfield back (`SkaldSurveyStake`: logged, still to
  read, "all of it read, put a name on it").
- **Harness lessons (2026-11-08):** `--walk DIR:n` holds the key for
  16n+12 frames, so an unobstructed segment moves **n+1** tiles — plan
  routes against walls/objects or pass n−1. **Sighted trainer approaches
  cannot be probed**: `CheckForTrainersWantingBattle` returns early when
  the party is empty, and the harness party is empty; verify trainer wiring
  through the talk path (post-battle line with the TRAINER_ flag set)
  instead. A `giveitem` scene needs `WAIT:3000` before its flag reads back.
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
- **Map number 127 of any group is poison for warp events** unless the
  engine patch of 2026-11-10 is in place (`SetupWarp` read `0x7F` as
  `MAP_DYNAMIC` by number alone). With the patch it is fine; the sweep
  proves it.
- **A warp event only fires from a door / arrow-mat / ladder tile.** On a
  plain tile it is an arrival point only; the way back is a step trigger
  beside it (Fernwick's south road, the River's west edge) or an arrow mat
  (516 in leob_rustboro is the woods' south mat). `audit.py` warns.
- Trainer classes must be Hoenn's: `Swimmer M/F`, `Tuber M/F`, `Ruin Maniac`
  (no `Scientist`), pics `Pokemon Ranger M/F`, `Pokemon Breeder M/F`.
- `MUS_ROUTE111` does not exist; `MUS_ROUTE113` / `MUS_ROUTE119` / `MUS_ROUTE120` do.
- The region-map constants and names are generated from
  `src/data/region_map/region_map_sections.json` — never edit
  `include/constants/region_map_sections.h`.
- A fresh container needs `python3 -m pip install --break-system-packages mgba pillow`
  (plain `pip3` targets another interpreter).
