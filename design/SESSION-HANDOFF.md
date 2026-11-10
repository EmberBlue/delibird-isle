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
The user's targets (§13) are 100k words / 1,000 trainers / 100+ maps: all
three are met as of 2026-11-10 (100,080 hand-written words by
`tools/skald/wordcount.py`, 1,071 battles, 102 maps). What remains is
polish and depth, not volume.

**Added 2026-11-10 (see §13's log for each):** the remix pass (no zone is a
vanilla slice any more; measured in `build.py`), the survey stakes, every
warp and connection walked by `sweep.py` and the map-127 engine fix,
twenty-eight documents on the desks, eighty-one Skaldmere dex entries, five
remembered choices (Hollis's name, the Mahogany correction, the meeting,
the blanket, the tea) and the examinations at every leader, forty-seven
overheard conversations in the towns and on the routes, INGER of the
Courier at seven doors and her front page in every Center, eighteen more
side quests (forty-two), Rin across the arc and the unchosen after the
hearing, three books (Heron's field guide, the Corps handbook, the harbour
almanac), household papers in twenty-three houses, the lab after the
hearing, the epilogue seen closer, and the post-game second readings
(Ilex's red cloth), eighty more dex entries (every species a trainer
carries; 161 in all), and forty-four Survey boards, two in every outdoor
map, each a field note in the Survey's voice grounded in §06 (the WOOPER
counted at the culvert, the SHROOMISH as air gauge, the CROAGUNK tested to
test the water, the summit's thirteen snow patches), and nine more books
(the Council's register of objections, Heron's marsh notebook, the Mahogany
model with Ilex's margins, the Foundation's annual report, the Survey's
nine rules, the Station's forty-year register, the lodging's visitors'
book, the Courier bound, the Board's water-rights ledger), and a fourth
story state for every named resident: 203 post-epilogue lines (the
post-game as a settled "what now"; quest givers speak theirs only once
their quest is done), twenty more overheard pairs (rounds four and five,
the side maps and the towns), side quests round five (eight; fifty-three
in all), ninety-nine Survey boards in all, seven more documents, seven
notices and a page two for every Courier front page. **100,187
hand-written words** (~131,000 with the rematch-tier lines;
`tools/skald/wordcount.py` is the counter, and it excludes the three
retired maps), 737 objects, 496 readable events, 67 overheard pairs, 102
maps, 1,071 battles. The certification spine was fought
through headlessly with the harness's new `--party`/`--var` (every leader,
every signing, the confession, the boardroom: `tools/skald/spine.sh`).

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

**The spine, fought through (2026-11-10).** The hook now takes
`--party SPECIES_X` (a level-100 partner with ICE BEAM forced into slot 1,
so mashing A always ends a fight; no type is immune to Ice) and up to two
`--var VAR_X=value`. With those, every certification was earned in the
emulator and its flag read back: all eight leaders (exam → battle → badge
→ field-craft), Hale's Forest and Wetland signings at the HQ
(`--flag FLAG_BADGE01_GET`; `--var VAR_SKALDMERE_CH2_EVIDENCE=0xFFFF`),
Hale's Highland signing on the slope and the Coastal one on the quay,
Heron's confession with the Hollis choice, her battle and the final survey
(`FLAG_SKALDMERE_FINALE_DONE` = 1 from `--flag FLAG_SKALDMERE_HERON_MET
--var VAR_SKALDMERE_CH7_EVIDENCE=0xFFFF`), and Cordelia's boardroom
(`FLAG_SKALDMERE_CORDELIA_DONE` = 1; her pages are long -- `A:1300`).
Leader scenes need `A:300`-`A:350`, Vane `A:650`. The probe commands are in
`tools/skald/sweep.py`'s neighbour, the scratch `gates.sh`, and the skill.

## Art (2026-11-10) — what is custom now, and how to redo it

Three generators under `tools/skald/` produce every custom graphic; the
PNGs they write are committed, so the build never runs them. Re-run one,
rebuild, look at the result in the emulator (the vanilla asset the generator
replaces is gone from the tree).

- **Title screen** — `title_art.py`. Night coast: seven-band sky with stars,
  Delibird Isle on the horizon (snowy summit, a harbour light whose colour
  pulses from `UpdateHarbourLampColor`, BG palette 10 colour 15), sea with
  ripples, a dark headland with a Delibird and a Surveyor's red-cloth stake,
  and an aurora with its reflection on the old clouds layer (BG1, alpha
  7/16, scanline wave 2/3, drifting east). The wordmark keeps its stock
  pixels with the palette compacted to 160 colours (palettes 0-9); the
  scene owns palettes 10-14 (one per region: sky, sea, land, delibird,
  horizon; tiles are assigned the first palette that holds all their
  colours, strays remapped to the nearest), the aurora palette 15. The
  "ANTHROPOCENE" banner is three 64x32 8bpp sprites (Inter ExtraBold,
  outlined, ice gradient). VRAM: wordmark charblock 0 / screen 31, scene
  charblock 1 / screen 22, aurora charblock 3 / screen 23. Verify with
  `python3 tools/screenshot/capture.py --frames 900` (no input needed: the
  boot goes copyright, the expansion's pret x RHH splash, then the title; the
  Hoenn intro film is gone).
- **Cast sprites** — `cast_sprites.py`. Nine 16x32 nine-frame sheets in
  `graphics/object_events/pics/people/skald/` on two new palettes
  (`skald_survey`: olive, red marker cloth, greys; `skald_mereholt`: teal,
  charcoal, silver). Each is a stock sheet with a triad remap and a collar
  patch: ILEX (woman_2, red cloth at the throat), HERON (old_woman in a dark
  oilskin), INGER (reporter_f in red), MIRREN/BREEN (expert_m in olive/red;
  TARN keeps the stock steel blue), SLUICE/VALE (expert_f in olive/red),
  HOLLIS (woman_5 in teal), CORDELIA (expert_f, silver hair, charcoal, teal
  scarf). Registered as `OBJ_EVENT_GFX_SKALD_*` (245-253) through the
  `SKALD_CAST_GRAPHICS_INFO` macro in `object_event_graphics_info.h`, the
  pattern rule in `spritesheet_rules.mk`, and the palette table in
  `event_object_movement.c`; the 22 map objects point at them (Ilex used to
  be three different stock sprites across six maps).
- **Leader battle sprites** — `leader_pics.py`. The eight leaders and
  Cordelia fight with stock pictures on their own palettes, matched to the
  overworld sprites: MIRREN/BREEN (Expert M, olive/red hakama), SLUICE/VALE
  (Expert F, olive/red), ILEX (Pokémon Ranger F in Survey olive, dark hair),
  HARLAND (Fisherman, navy oilskin), VANE (Gentleman in grey with a charcoal
  hat), CORDELIA (Glacia's picture in charcoal with silver hair and teal).
  TARN keeps stock Expert M. `TRAINER_PIC_SKALD_*` (94-101) pair the stock
  `gTrainerFrontPic_*` with `gTrainerPalette_Skald*` in
  `src/data/graphics/trainers.h`; `trainers.party` says `Pic: Skald Mirren`
  etc. on all 15 leader entries (first fights and rematches). Checked in
  battle by tracing the Mirren exam (`walktest.py --trace 100`).
- **Region map (PokéNav)** — the Skaldmere archipelago drawn in an earlier
  session had never rendered: `map.bin` was written as a 16-bit text
  tilemap, but the region map BG is affine (8-bit, 64x64 bytes), so the
  PokéNav showed vertical garbage stripes. Converted in place (the 37
  180°-flipped entries became 15 rotated copies, tiles 186-200; max 233
  tiles allowed). Town markers (tile 162) added at Fernwick, Elvsund, the
  Coast and Delibird; MISTWOOD/SUMMIT/CLIFFS cells added to
  `region_map_layout.h`. Fly: Fernwick, Elvsund, the Coast, Delibird and the
  Climate Station are now `MAPSECTYPE_CITY_CANFLY` once visited
  (`FLAG_VISITED_PARCEL_*` alias Hoenn's unreachable visited flags; set in
  each town's on-transition script). The PokéNav's "HOENN MAP" option and
  "HOENN MAP FULL VIEW" header are image labels: `tools/skald/pokenav_labels.py`
  rewrites them to SKALDMERE in the stock 6px-pitch font (glyphs harvested
  from the other labels, K drawn to match). Checked in the PokéNav itself:
  `TAP:START, IDLE:40, TAP:DOWN, IDLE:15, TAP:A, IDLE:220, TAP:A, IDLE:260`.
- **Trainer classes** — the examiners fight under their own titles:
  INSTRUCTOR TARN, EXAMINER MIRREN, RELIEF CHIEF BREEN, KEEPER SLUICE,
  WARDEN VALE, CAPTAIN HARLAND, DIRECTOR VANE, SURVEYOR ILEX, CHAIR
  (Cordelia). `TRAINER_CLASS_*` 0x42-0x4a in `include/constants/trainers.h`,
  rows (name, payout, ball) in `gTrainerClasses` (`src/battle_main.c`),
  `Class: Relief Chief` etc. on all 17 leader entries in `trainers.party`.
  Checked in battle ("CAPTAIN HARLAND sent out Gyarados!"). The Pokédex
  labels read SKALD DEX / SKALDMERE region's POKéDEX and the diploma says
  SKALDMERE (`src/strings.c`).
- **UI** — `ui_frames.py`. The dialogue box keeps its shape with ice/slate/
  dark-slate border colours (palette 13-15 of `message_box.png`; text
  colours untouched), and window frame 1 (the default menu border) is a
  slate band with an ice rule.
- **Building kits** — `kit_restyle.py`. Every town was a stock building kit
  (FireRed's Vermilion in Saltwick, Rustboro in Fernwick, Fortree on the
  wetlands, Mauville in Elvsund, Fallarbor on the fell, Slateport on the
  Coast, Azalea on Delibird) and General's own red-roofed cottage stood in
  all of them. The metatiles and maps are unchanged; the palette entries
  the roofs and walls use were rewritten so the kits read as one region:
  slate roofs everywhere, falu-red timber on the fishing coasts (Saltwick,
  Delibird), ochre render in Fernwick, white render on the river and in
  the General cottage, the Climate Station in white and slate. General's
  red ramp (palette 1, 11-14) is shared by the cottage, the Coast's halls
  and the Pokémon Center, so the ramp went slate and the Center alone got
  its red back: its 23 roof tiles are duplicated into unreferenced tile
  slots and pointed at palette 4 (the water palette, six entries unused),
  where the red lives. The cottage's yellow walls share their ramp with
  the sand, so those nine tiles were remapped pixel by pixel onto the
  white-render shades (1-4) every primary palette carries. All of it is
  one idempotent script; `pal_tool.py` is the renderer that made it safe
  (every visible pixel knows its palette entry; `mask` shows exactly what
  an entry change would touch). Checked in-emulator in eight towns.
- **Northern grade** — `grade.py`. One colour transform over all 88
  outdoor palettes (the three primaries and the ten secondaries outdoor
  Skaldmere layouts use; caves and interiors untouched): greens lean
  blue-green (+10° at the leafy middle), sand and ash lose a fifth of
  their saturation and warm 4° toward olive, saturation ×0.92 overall,
  dark colours take a slate cast, a hair less red and more blue
  everywhere. Chosen from three candidates on side-by-side renders
  (v1 too grey in Fernwick's plaza, v2 invisible; v3 is v1 at 0.92).
  Pipeline: `tools/skald/palette_base/<tileset>/NN.pal` holds the
  ungraded palettes; the live `.pal` is always `grade(base)`. An
  absolute colour written to a live palette is detected as a new base
  value, so `kit_restyle.py` (which now writes into the base when it
  exists) and hand edits compose and the grade never stacks.
  `--preview MAP OUT.png v1` renders a candidate without writing.
- **Boot** — copyright, the expansion's pret x RHH splash, then the title.
  The Hoenn intro film no longer plays (both handoffs into it, in
  `intro.c` and `expansion_intro.c`, go to `CB2_InitTitleScreen`).
- **The player** — `player_kit.py`. Both avatars keep their stock pixels
  and change clothes through six palettes (overworld, reflection, and the
  trainer palette the back sprite and trainer-card picture share): the
  Hoenn green pair (headband and pack on one, bandana and pack on the
  other) is the Survey's red marker cloth, the red pair (shirt panels on
  one, the shirt on the other) is the Survey's olive. Skin, hair, whites
  and trousers untouched. Checked in-emulator: walking, the battle intro's
  back sprite, the trainer card.
- Verified in-emulator: the title at three moments, all nine sprites in
  their maps via `walktest.py --out`, a dialogue box. `TAP:START` did not
  open the start menu under the harness, so frame 1 was checked from its
  PNG only.

## Known-open (honest list)

- **Volume -- met.** 1,071 reachable trainer battles (255 distinct
  opponents + 816 rematch tiers) against the 1,000 target; **100,187
  hand-written words** by `python3 tools/skald/wordcount.py` (every
  `_R2`–`_R9`/`_FirstWin`/`_Rematch` script excluded, the three retired
  maps excluded, the notebook's C strings and the 161 dex entries
  included; ~131k with the rematch tiers); 737 objects, 496 readable
  events, 53 side quests, 67 overheard pairs, 99 Survey boards. The
  counter is the record; do not recount by hand. The rematch tiers
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
- **Not played end to end as one continuous run.** Every warp and
  connection has been walked by `tools/skald/sweep.py`, the whole
  certification spine fought through by `tools/skald/spine.sh`, and each
  content pass spot-checked from the harness (boards, pairs, books, quest
  finds, post-epilogue lines, the PokéNav map, the title). Re-run on
  2026-11-10 after every content and art pass: sweep 252 OK / 0 BAD,
  spine all fifteen flags. **Now being played for real** (2026-11-10):
  `walktest.py` keeps savestates across runs (`--save-state` /
  `--load-state`), fights or runs from battles (`--fight`), plans walks on
  the live map (`GOTO`) and talks (`TALK`); the chapter chains live in
  `tools/skald/play/` (README there; `chain_all.sh` is chapter 1: ferry → Saltwick → RIN → the
  SEEDOT → Route 1 → the bridge → Mistwood → the snares → HM01 → CUT →
  Fernwick → HALE → TARN → the signing). First real finding: no Meadow
  partner could learn CUT, and most could not learn ROCK SMASH or
  STRENGTH either, the two other field moves the main path needs (fixed,
  `partner_hms.py`; the five remaining HMs open side areas only). Second
  finding, one step later: the engine's tree script refused CUT without
  badge 1, which is on the far side of the tree (fixed: the tree, rock
  and boulder scripts no longer check badges, matching
  `OW_FIELD_MOVES_NEED_BADGES`). Third finding, from planning chapter 2
  on the map data: the Corridor road dead-ended short of its east plaza
  with DAG on the one connecting tile (fixed in `build.py` step 7).
  Fourth, the general case: `tools/skald/reach.py` now floods the whole
  game as one graph (connections, warps, staged script warps, one-way
  ledges, the down-only slope, elevation, NPCs solid) and reported 158
  places nobody could stand next to; the real breaks were the Floodbasin
  village sealed from its basin, HALE's summit trail reachable only by a
  Mach-Bike slope, the Weather zone's forecourt walled in by elevation,
  the Delibird cavern exit and square, and a handful of NPCs on the only
  tile through (details §13 log, rules in skald-add-content). All fixed
  in place; the audit reads 0 with every HM and, staged per chapter, only
  the intended gates. Chapter 1 replays clean on the fixed build;
  chapters 2-3 (`play/chain2.sh`, `play/chain3.sh`: the Wetlands, MIRREN,
  the Floodbasin readings and BREEN, the River and SLUICE, ILEX's two
  signings, into the Highlands) are the live run, `play/chain4.sh` (the
  Highlands: readings, STRENGTH through the slide, VALE, SURF up the coast
  to HALE) is scripted and queued; 5-8 still to script. Rules the run
  taught: `reach.py --trainers` (a spotted-you trainer parks on its stop
  tile), savestates pin a map's NPCs (replay from the previous map after
  an NPC change), SURF is main-path so VALE lends a MARILL to parties with
  no swimmer, and **events only work at the player's elevation**
  (`event_elev.py`: 33 NPCs/triggers/items in the elevation-5 and -4
  zones were silent, 19 water-standing NPCs need the wildcard 0).
  **Played so far (2026-11-10):** chapters 1-3 end to end on one build
  (three badges, the Forest, Wetland and Watershed signings, into the
  Highlands); chapter 4 onward is the live run. It found the ferry and a
  required reading locked behind side quests and the return ferries dead
  after the finale (all fixed; `gates.py` now scans for the pattern), and
  three battles whose rewards needed a second talk (continuation scripts
  now). Chapters 5-6 followed (Delibird Isle, the Coast and its signing);
  chapter 7 found the climate station's west plots and the Floodbasin
  works unreachable (fixed; the audit no longer surfs off bridges).
  Standing audits before any map or script work is called done:
  `audit.py` (2 known warnings), `reach.py` (0), `reach.py --trainers`
  (0), `event_elev.py` (0), `gates.py` (0), `layout_fixes.py --check`
  (0 differ: hand tile fixes live in each layout's `fixes.json`).
- **The retired maps** `ParcelStation`, `ParcelBridge` and
  `ParcelStationHall` are unreachable and excluded from the audit and the
  word count. Content placed there by mistake on 2026-11-10 was moved to
  the Climate Station grounds and Route 1 (`relocate.py`). **Do not delete
  them:** they are maps 61 and 62 of the 162-map `gMapGroup_TownsAndRoutes`
  group, so removing them would renumber every later Skaldmere map and
  break existing saves (a save stores its map by group and number). They
  stay as unreachable stubs; the two audit warnings they cause are known.
- **Delibird Isle is a real island now** (§09 *Built*): `ParcelDelibird`
  connects north to `ParcelDelibirdSummit` (x 3–5 through the tree belt;
  the old sealed pocket is the trailhead) and east to `ParcelDelibirdCliffs`
  (rows 10–12). Both are drawn canvases on the Johto legend
  (`tools/skald/legends/johtogeneral__azaleatown.json`); the summit's snow
  patches are thirteen metatiles `tools/skald/snowtiles.py` adds to the
  AzaleaTown tileset. The village's own map is now `build.py` over
  `base.bin` (its sea tile had a rock pair on every tile and its border was
  a wall piece; both fixed).
- **The Pokédex is the SKALD DEX.** `FLAG_SYS_POKEDEX_GET` was never set
  before 2026-11-10, so the 161 Skaldmere dex entries were unreachable;
  Hale's brief now sets it with the notebook, and opening the notebook sets
  it too (older saves). The regional dex (`HOENN_DEX_*` /
  `sHoennToNationalOrder`) is rewritten by `tools/skald/regional_dex.py` to
  exactly the Skaldmere species, south to north, families together; the
  national dex stays off.
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
- "They" pronouns, `Parcel*` folder names (placeholders; the in-game names
  are the real ones: Saltwick, Fernwick, Reedmere, Hollowbend Spur, Leirvik,
  Elvsund, Haukfell, Mereholt Coast, the Climate Station). The title screen
  stopped being a placeholder on 2026-11-10 (see "Art" below).
- Art still vanilla: route trainers' battle pictures (the leaders have
  their own palettes; everyone else is a stock class) and the player
  avatars' *pixels* (Brendan/May silhouettes in the Survey's colours; a
  "they" avatar would be a third sprite set and a third gender in the save
  block, which nothing in the engine supports). Building exteriors, the
  outdoor palettes and the player's clothes stopped being vanilla on
  2026-11-10 (see Art).

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
