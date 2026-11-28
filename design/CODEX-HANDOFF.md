# Handoff to Codex: the maps and tilesets of Skaldmere

Written 2026-11-28 by Claude, the agent that has built this project so far,
at the owner's request. Branch `claude/emerald-romhack-planning-T2LgQ`,
commit `5994d61a48` at the time of writing (plus the commit that adds this
file).

## 1. Why you are reading this

The owner of this project is not satisfied with the work I produced, and is
handing it to you. Their words, 2026-11-28:

> "I have not been satisfied with your (claudes) performance/products. I
> want them to make it a very detailed new maps maybe new textiles."

I read "textiles" as tilesets. So your brief, as far as I have it:

1. **Make very detailed new maps.** New, not touched up.
2. **Possibly new tilesets** to make them with.

The owner said "performance/products" in general, not only the maps. They
did not list what else falls short and I have not put words in their mouth
below. Ask them, or show them work early and let them tell you. Short of
asking, the best guide I have is what they said to me about maps before
today (their messages, verbatim; the tileset questions came first):

- "are you going to make/remake maps with like cooler tilesets like people
  use when they make cool unique roms?"
- "do you need me to get any new tilesets? Which would you like?"
- "can you find the tilesets/roms on github and i can download?"
- "how do i download the heart and soul tilesets for you?"
- "hey are you going to continue? go for it. use the cool tilesets."
- "Make sure the maps are complex and cool, you should go all out with
  design!"

My reading of these together, and it is only mine: the owner asked several
times for the look of a distinctive ROM hack, and I take today's message
to mean the maps still do not have it.

Their standing instructions for the whole project:

- "finish the game, dont ask me questions. Just go forward, be incredibly
  smart and accurate when making the game please. You got this!"
- (my summary of earlier instructions, not a quotation) Targets: 100,000+
  hand-written words, 1,000+ trainers, 100+ maps. Maps of vanilla quality
  that do not look vanilla. Plain, Pokémon-style dialogue.

## 2. My own account of where this fell short

This section is my assessment, not the owner's. Section 5 holds a review
of every outdoor map by separate agents who had not seen my opinion of my
own work; it says exactly who they were and what that is worth.

1. **Looks came last.** I treated a map as data to be proven correct
   (reachable, warps land, scripts fire) and stopped when the audits read
   zero and a render looked tidy. For most of the project the outdoor maps
   were slices of vanilla Hoenn routes and cities with patches on them.
   Fourteen of the twenty-three live outdoor maps still are.
2. **The world still reads as Hoenn.** Every outdoor map sits on one
   primary tileset, Emerald's General (in leob0505's ORAS-style redraw).
   Two secondaries come from outside Emerald (Brick City and Shady
   Forest, from Team Aqua's Asset Repo); the rest are Emerald's own city
   kits or leob0505's redraws of them. Restyled roofs and a colour grade
   do not change that.
3. **The method I drew with is mechanical.** Nine maps are "canvases":
   ASCII, one character per tile, expanded by rules (`tools/skald/draw.py`).
   It is good at being correct and repeatable. It produces rectangles,
   regular spacing and thin detail. It cannot place two overlapping
   objects by eye. The maps look like what they are.
4. **Almost no original pixel art.** A spruce and a fir, a handful of
   props for the island, plank tiles, a title screen, recoloured sprites.
   No original building set, no original terrain.
5. **Interiors were never designed.** All 82 are stock Emerald layouts
   with new people in them.
6. **Things that looked finished were not.** In the last session alone: a
   pond drawn solid on a map whose fisherman says he fishes it; a shore
   tile that made a story-required reading unreachable until a full replay
   caught it; ten maps whose grass and water had never had wild Pokémon.
   Each is fixed. The pattern, not any one instance, is the problem.
7. **I worked in long silences.** Turns ran for an hour or more between
   pictures. The owner's instruction was "dont ask me questions"; I
   behaved as if it meant "don't show me anything until it's done". Those
   are different.

## 3. What exists

A complete, playable game: Pokémon Anthropocene, region Skaldmere, on
pokeemerald-expansion. Eight zones, eight certifications, a finale, an
epilogue, credits, post-game. 101,806 hand-written words
(`python3 tools/skald/wordcount.py`), 1,071 trainer battles, 107 maps.
A headless harness plays the whole game from the ferry to the post-game in
about twenty minutes and checks a flag at every beat.

Where things are:

| what | where |
|---|---|
| Canon: world, cast, ecology, the island | `design/00-canon-lock.md`, `01`, `02`, `04`-`06`, `09` |
| Running state, history, every decision | `design/SESSION-HANDOFF.md` (long; search it) |
| Architecture, tools, build traps | `design/12-implementation.md` (its "world graph" is dated 2026-11-07 and is stale for tilesets and for the maps drawn since; sections 5 and 6 here are current, and each map's `connections` in `map.json` are the truth) |
| Build and project rules | `CLAUDE.md` (applies to any agent) |
| Checklists learned the hard way | `.claude/skills/skald-add-content/SKILL.md`, `.claude/skills/skald-verify/SKILL.md` (plain markdown; read both) |
| Maps: events and scripts | `data/maps/Parcel*/map.json`, `scripts.pory` (compiled to `scripts.inc`) |
| Maps: tiles | `data/layouts/Parcel*/map.bin`, `border.bin`; registry `data/layouts/layouts.json` |
| Tilesets | `data/tilesets/primary/`, `data/tilesets/secondary/`; bindings in `src/data/tilesets/headers.h`, `graphics.h`, `metatiles.h` |
| Map tools, audits, harness | `tools/skald/` (48 scripts), `tools/skald/play/` (the replay) |

In my opinion the story, the scripts and the test harness are the part of
this project worth keeping. That is the opinion of the agent whose work
was just rejected; the owner has not said it, and it is their call.

## 4. Setting up

`CLAUDE.md` has the build. Its toolchain note assumes my environment: the
hook in `.claude/hooks/session-start.sh` only runs in Claude's web
sessions. Elsewhere, install by hand:

```bash
apt-get install -y build-essential pkg-config libpng-dev \
    binutils-arm-none-eabi gcc-arm-none-eabi libnewlib-arm-none-eabi
make tools && make -j$(nproc) modern          # -> pokeemerald.gba
bash tools/screenshot/setup.sh                # libmgba + python mgba, pillow (for the harness)
```

Binary map and tileset data is not in make's dependency graph. After
changing a `map.bin`, a `map.json`, a script or a tileset, remove the stale
objects or the ROM silently keeps the old data:

```bash
rm -f build/modern-debug/data/{maps,map_events,event_scripts}.o build/modern-debug/src/tilesets.o
```

See a map without building, in seconds, with its real palettes:

```bash
python3 tools/skald/pal_tool.py render ParcelIsle /tmp/isle.png 2
```

## 5. The maps today, reviewed

For this handoff I had eight separate Claude Opus agents each render two
or three of the 23 live outdoor maps, look at them whole and in crops, and
score the look. Know what that is and is not: they are the same family of
model as me, I wrote their brief, and they read each map's header comment
(my description of the place). They had not seen my opinion of how good
the maps are. They were told the owner is not satisfied and asked to be
blunt. A human mapper, or you, may judge differently. The scale: **5 is
about as good as a stock Emerald route; 8 is a map a player would
screenshot.**

**No map scored above 5. The average is 3.4.** Their full text, with tile
coordinates for every weakness and what a redraw should do, is in
`design/CODEX-HANDOFF-map-reviews.md`. Read it for any map before you
touch it.

| map | what it is | made from | kit | score | the reviewer's verdict |
|---|---|---|---|---|---|
| `ParcelIsle` | Saltwick, the first town | drawn (canvas) | brick_city | **5** | Saltwick is a neat brick-town grid with a canal, but it is ruled in straight lines, padded with lamp-post and bench spam, and the bottom third is a dead slab of water with a staircase-stepped deep-water rectangle. |
| `ParcelMeadow` | the Holding Meadow, where the partner is chosen | drawn (canvas) | brick_city | **3** | A 24x20 rectangle of flat grass split down the middle by a ruler-straight path, with two empty fence boxes, a stamp pond, one stock cottage and random flowers: the starter-choice location looks like a placeholder. |
| `ParcelRoute1` | Route 1, the bridge scene | drawn (canvas) | brick_city | **3** | A 30x48 open lawn with a straight sand corridor, rectangular grass blocks, one-tile ledge lines, a ruler-straight river box and the same pond and rock stamps: a generated layout with no composition. |
| `ParcelMistwood` | Mistwood forest (zone 2) | drawn (canvas) | shady_forest | **3.5** | A labyrinth made with a stamp: Shady Forest trees laid on a strict 2x2 grid with rectangular 2-tile corridors cut out, a generic hut, and a bottom strip in a different tileset that clashes with everything above it. |
| `ParcelFernwick` | Fernwick, the Corps town | Rustboro City, patched | leob_rustboro | **3.5** | This is Rustboro City with its signs relabelled. A player who knows Emerald will recognise it instantly, and the edits added broken-looking white patches and a boxy pond. |
| `ParcelWetlands` | the Wetlands and Reedmere | Route 119 south, patched | Fortree | **3.5** | This is vanilla Route 119's south half with Emerald's Weather Institute in the middle. Pale-blue 'bare earth' blobs over it read as snow or a palette bug, and two copy-paste houses are dropped into a sea of tall grass. It does not read as a backwater landing or a village. |
| `ParcelWetlandsHide` | the Reedmere bird hide | drawn (canvas) | leob_petalburg | **3** | A flat lawn boxed in by a 4-tile tree wall: a rectangular pond, two dead-straight plank lines, a stock cottage as the 'hide', and pale blocks scattered for texture. It reads as an ASCII drawing, which is what it is. |
| `ParcelCorridor` | the Corridor (the culvert) | Route 116, patched | leob_rustboro | **3** | Vanilla Route 116 with a ruler-straight blue channel stamped across it and a flat block of canopy texture. The east 40% is stock Rusturf-side rock mass the player never uses. |
| `ParcelCorridorWorkings` | the Hollowbend old workings | Altering Cave, patched | Cave | **3** | This is Altering Cave with three blobs of pale green 'spill' and three 2x2 blue puddles stamped in, plus a row of grid-aligned rocks. Only 51 of 768 tiles changed. It does not read as a mine gallery, a ballast quarry or anything the Corps ever closed. |
| `ParcelFloodbasin` | the Floodbasin (zone 3) | Route 120, patched | Fortree | **4** | Vanilla Route 120 kept almost intact, with pale ice-looking blobs and bare single water squares stamped on to mean 'sick wetland'. It reads as a damaged Hoenn route, not a contaminated northern floodplain. |
| `ParcelFloodbasinSluice` | the upper sluice | Route 118, patched | Mauville | **4** | A recognisable chunk of vanilla Route 118's beach and rock plateau, with a ruler-straight ledge and decorative junk. There is no sluice, no ford and no gauge anywhere on the map that is literally named after them. |
| `ParcelRiver` | the River and Elvsund (zone 4) | Route 117 over Mauville, patched | Mauville | **3** | Vanilla Route 117 stacked on vanilla Mauville with a ruler-straight blue canal painted down the east edge. The river the chapter is named for is the least designed thing on the map. |
| `ParcelRiverMillWood` | the mill wood | Petalburg Woods, patched | leob_rustboro | **3** | Petalburg Woods with its interior stripped out and replaced by randomly scattered sand patches, short mud ledges and shrub blocks. It has no mill, no mill race, no coppice: just a flat field of identical spruces with clearings. |
| `ParcelHighlands` | the Highlands and Haukfell (zone 5) | Route 115 with Route 114's fall, patched | leob_fallarbor | **3** | Vanilla Route 115 with a pasted Route 114 waterfall box. Half the map is a monotone beige terrace maze, and the bottom third is generic houses on flat grass beside a mass of identical trees. |
| `ParcelHighlandsTarn` | the tarn cave | Shoal Cave entrance room, patched | Cave | **2** | Shoal Cave's low-tide entrance room with the stock warm-brown palette. The 'tarn' the room is named for is a 7x6 stepped puddle. |
| `ParcelDelibird` | the Holiday Village, the title location (zone 6) | drawn (canvas) | leob_lilycove | **4.5** | A stock Lilycove/Emerald kit town laid out on a ruler: three ruler-straight terraces, a 2-tile canal cut down the middle, and a parade of identical Emerald houses. It does not look like a title location, a festival, or the north. |
| `ParcelDelibirdSummit` | the Snowy Summit | drawn (canvas) | leob_lilycove | **3.5** | A wedding-cake of nested rectangles with pale squares stamped on it for 'snow'. It is the flattest, most obviously generated of the three maps, and it does not read as a summit at all. |
| `ParcelDelibirdCliffs` | the Shoreline Cliffs | drawn (canvas) | leob_lilycove | **3.5** | Two flat green shelves and a sand strip separated by full-width ruler cliffs, with grass clumps sprinkled in. The 'beacon' is a tiny stock lighthouse in an open-topped box. It does not read as sea cliffs. |
| `ParcelCavern` | the Crystal Cavern | Shoal Cave ice room, patched | Cave | **3.5** | This is the Shoal Cave ice room with five rectangular 'melt' patches stamped on it. Only 40 of 600 tiles differ from vanilla, and the whole map is one shade of flat blue with no landmark, no cache set piece and no sense of 'the last cold room on the island'. |
| `ParcelCoast` | the Mereholt Coast (zone 7) | Slateport City, patched | Slateport | **3.5** | Vanilla Slateport City with its grass paved over and crates dropped on top; Emerald's layout and buildings are all still there, with nothing added that reads as a northern, collapsing industrial coast. |
| `ParcelCoastBreakwater` | the Breakwater | drawn (canvas) | Slateport | **3** | An L-shaped concrete strip and blobby sand islands on a flat field of shallow-water tile, ringed by a metronome row of identical rocks; reads as a procedurally filled bay, not a place. |
| `ParcelWeather` | the Climate Station | Route 119 north end, patched | Fortree | **4** | Route 119's north end and the Weather Institute recoloured: Hoenn bridge fragments now floating in a lake, a pale 'snow' path drawn as blocky rectangles, and the institute jammed against the bottom edge. |
| `ParcelMarsh` | the Last Corridor: the marsh, the finale (zone 8) | Route 119 north, patched | Fortree | **3** | The game's climax is set on Route 119's north half with a checkerboard of white and blue squares where the river should be, white blobs over the grass, and a stock house for Dr. Heron. It is neither a marsh nor a finale. |

What the reviews agree on:

1. **Fourteen maps are a Hoenn map with patches, and it shows.** The
   "made from" column is literal. Fernwick is Rustboro City down to the
   Devon tower and a gym that still says GYM on its front. The Coast is
   Slateport's street plan and every one of its landmark buildings. The
   Marsh, where the game ends, is Route 119. Anyone who has played
   Emerald will know where they are standing.
2. **The nine maps I drew read as machine-made.** Ruler-straight rivers,
   streets and cliffs; rectangles of tall grass; terraces as nested boxes;
   tree borders on a checkerboard; the same pond, rock and cottage stamped
   map after map; lamps and benches at fixed intervals. The reviewers
   called the Hide "an ASCII drawing, which is what it is".
3. **The damage I drew to tell the story looks like snow or a bug.** The
   pale "dead reed" and "bare earth" patches, the dry-channel squares, the
   melt patches: hard-edged blocks with no edge pieces, in a colour that
   reads as frost. The ecology the game is about is not legible in its
   ground.
4. **Places are missing the thing they are named for.** The Sluice has no
   sluice, the mill wood no mill, the old workings no props or rails, the
   tarn cave barely a tarn, the Cliffs no cliffs, the Summit no summit.
5. **The buildings are Emerald's.** Stock houses, Mart, Center, the
   Weather Institute, the lighthouse. Several sit unchanged in a town's
   best spot.
6. **Nothing is a landmark.** No set piece a player would remember, no
   focal point seen on arrival, almost no original terrain art.
7. **The tiles are a ceiling.** Ten of the 23 reviews say outright that
   the map cannot reach 8 on its current tiles; nearly all the rest call
   for new or community tile art; two (Mistwood, River) think existing
   community kits could cover much of it. What they name as missing: a
   northern harbour set (weathered
   stone quays, tarred timber, slate and turf roofs, nets and rope), a
   northern wood and river set (birch and spruce in mixed canopy, mossy
   rock, gravel shallows, ferns and heather), a marsh set (reeds, mud,
   straw-tan litter, real water edges), an alpine and tundra set (heath,
   scree, snow-edge transitions, a grey cliff face, turf-roofed houses),
   an ice cave, mine workings, an industrial port.
8. **The palettes do not carry the story.** The northern colour grade
   reads as washed-out (Coast) or as a slightly cooled Emerald (Delibird);
   the sick maps are as bright as the healthy ones (Wetlands, Floodbasin);
   the Cavern is one flat blue. Colour was a pass I ran at the end, and it
   looks like one.

One thing the reviews say in a place's favour, and nearly all of them say
it: the idea of the place, from its header and its scripts, is worth
keeping; what fails is the drawing. Read a map's "Worth keeping" before
you throw it out.

The most visible things the reviewers found that look plainly broken
(each review has more), worth knowing even on maps you will replace:

- `ParcelFernwick`: pale wrong-looking tiles in the avenue at (20-21,21-22),
  (16,48), (15-16,57). (The review says (15-16,52-53) for the last; a
  second check of the tile data puts it at row 57.)
- `ParcelRiverMillWood`: spruces on dark squares inside sand patches at
  (9,13), (12,14), (18,21), (20,22); sand patches with square unfinished ends.
- `ParcelFloodbasinSluice`: orphan water fragments on the sand at
  (14-16,9-11) and (32-33,11-12).
- `ParcelFloodbasin`: raw single water tiles with no shore, lower half.
- `ParcelMarsh`: a near-checkerboard of white and blue squares in the river
  at (20-33,25-35).
- `ParcelWeather`: fragments of Route 119's bridges floating in the lake;
  the institute and a bridge cut off at the bottom edge; a stray dark tile
  at (16,28).
- `ParcelWetlands`: the dark backwater ends in ragged notches cut into the
  grass with no shore pieces at (17-23,37-39).
- `ParcelHighlands`: fragments on the beach at (14-16,49) and (12-13,51).
- `ParcelDelibirdCliffs`: the beacon knoll has no north wall (row 9); the
  east edge is cropped at x38-39; a seam stub at (0-1,17).
- `ParcelDelibird`: the square's pale paving reads as shallow water.
- `ParcelCoast`: a pale paved rectangle in a sand frame at (22-27,53-56);
  two sailboats stacked on each other at (33-35,36-39).
- `ParcelIsle`: bridge stubs over the canal at x31 and x33, rows 20 and 28.

I have not fixed these. They are recorded so you start from the truth.

Not reviewed: the 82 interiors (every one a stock Emerald layout) and two
retired maps (`ParcelBridge`, `ParcelStation`; unreachable, kept only
until nothing references them).

## 6. Tilesets: what is here, how much room, where more can come from

One primary serves every outdoor map: `gTileset_General`, which binds to
`data/tilesets/primary/leob_general` (not `primary/general`; a tileset
symbol does not always load the directory of its name, so check
`src/data/tilesets/headers.h`). **It is full: 0 free metatiles of 512, 0
free tiles of 512.** Anything new goes in a secondary, or in a new primary.
In the table, "free tiles" is 512 minus the sheet's size; the last 8 tile
slots of a secondary (16 under a two-tall door) are overwritten by door
frames at run time, so a kit with animated doors has that many fewer.

| kit (symbol) | directory under `data/tilesets/secondary/` | origin | free metatiles / tiles | maps |
|---|---|---|---|---|
| `gTileset_brick_city` | `brick_city` | Team Aqua's Asset Repo (Ekat99's Brick City) | 76 / 0 | Isle, Meadow, Route1 |
| `gTileset_shady_forest` | `shady_forest` | Team Aqua's Asset Repo | 0 (326 blank) / 0 | Mistwood |
| `gTileset_leob_rustboro` | `leob_rustboro` | leob0505, ORAS-style | 158 / 0 | Fernwick, Corridor, RiverMillWood |
| `gTileset_leob_petalburg` | `leob_petalburg` | leob0505 | 352 / 336 | WetlandsHide |
| `gTileset_leob_fallarbor` | `leob_fallarbor` | leob0505 | 145 / 64 | Highlands |
| `gTileset_leob_lilycove` | `leob_lilycove` | leob0505 | 72 / 16 | Delibird, Summit, Cliffs |
| `gTileset_Fortree` | `fortree` | stock Emerald | 232 / 16 | Wetlands, Marsh, Floodbasin, Weather |
| `gTileset_Mauville` | `mauville` | stock Emerald | 2 / 0 | River, FloodbasinSluice |
| `gTileset_Slateport` | `slateport` | stock Emerald | 105 / 0 | Coast, CoastBreakwater |
| `gTileset_Cave` | `cave` | stock Emerald | 98 / 80 | Cavern, CorridorWorkings, HighlandsTarn |

So: one Emerald primary under everything, four stock Emerald secondaries,
four redraws of Emerald cities, and two kits from outside. That is the
measurable form of "it still looks like Hoenn".

What I changed in them: roof and wall palettes (`tools/skald/kit_restyle.py`),
a colour grade (`grade.py`), two original trees drawn into General
(`nordic_tiles.py`), festival props for the island (`holiday_kit.py`), two
plank tiles and four plank metatiles (`hide_kit.py`). That is all the
original tile art in the game. Two more scripts add metatiles without new
pixels: `brick_city.py` assembles some from the kit's own tiles, and
`breakwater_kit.py` gives General's sand a soft-sand behaviour.

**The owner asked about Heart & Soul's tilesets by name** ("how do i
download the heart and soul tilesets for you?"). I ported its Johto pair
(`johtogeneral` + `azaleatown`, still in the tree with their legend) and
drew the island on it, then moved the island to General + `leob_lilycove`
on 2026-11-23 so the three island maps could share the terrain rules I had
written for General. No live map uses the Heart & Soul tiles now. I do not
know whether the owner noticed or minded; ask.

Where more tiles can come from. All three were cloned into my session's
scratch space, which you will not have; clone them again:

- **Team Aqua's Asset Repo**, `github.com/TeamAquasHideout/Team-Aquas-Asset-Repo`
  (I used commit `2701923`). The insertable kits are in
  `Tilesets/The Great Tileset Exchange/Full Tilesets/`: mostly
  triple-layer, "free to use and edit by default" with credit to each
  kit's creators (each folder says whom). Not yet used here and relevant
  to what the reviewers asked for: *Alternative General Primary* and
  *Bright General Primary* (whole replacement primaries), *Small town with
  lab*, *Emerald Slide* (snow palettes for General), *Gen 4 Cave*, *Caves
  Alt*, *Beach Cave*, *Autumn Ruins*, *Gatehouse*, *Sewer*, several
  interior sets (*Gen 4 Interior*, *Brick Cafe*, *Little Office*,
  *Alternative Pokecenter*). Raw sheets, not insertable as they stand, are
  under `Tilesets/Other Tilesets/` (Droid779's snow tiles, Roger
  Wrightshoe's trees, stairs and greenery, the Ewraz and Voluptuas
  collections) and `Tilesets/The Great Tileset Exchange/Individual Tiles/`
  (Rahtak's greenery). Some kits need an expanded tile or palette count;
  their readmes say.
- **leob0505's ORAS-style sets**, `github.com/lbsbezerra/pokeemerald-modern-oras`
  (the source of every `leob_*` kit here; free with credit).
- **Pokémon Heart & Soul**, `github.com/PokemonHnS-Development/pokemonHnS`,
  `data/tilesets` (`johto_general`, `kanto_general` and many secondaries).
  Open source; asks that its credit chain be kept (it is in `CREDITS.md`).

Or draw new ones. The reviewers' lists in section 5 are, in effect, a
specification for five or six original northern sets, and nothing off the
shelf is a northern harbour or a tundra.

Adding a tileset in this fork: the directory (`tiles.png` 128 px wide,
`palettes/NN.pal`, `metatiles.bin` at 24 bytes a metatile,
`metatile_attributes.bin` at 2), then a `struct Tileset` in
`src/data/tilesets/headers.h`, the INCBINs in `graphics.h` and
`metatiles.h`, and the layout's fields in `data/layouts/layouts.json`. The
generic make rules build the rest. A 16-byte vanilla-format kit must go
through `triple_layer_converter.py` first. Doors need a per-kit table in
`src/field_door.c`; animated tiles need an `InitTilesetAnim_X` in
`src/tileset_anims.c` (never give a foreign kit a vanilla callback: it
overwrites the kit's tiles). The step-by-step, with every trap I hit
porting Brick City, is "Porting a community tileset" in
`.claude/skills/skald-add-content/SKILL.md`.

Nothing in the repository records Porymap ever opening this fork
(`porymap.*.cfg` is git-ignored and none exists). The kits from Team
Aqua's repo are made for Porymap. If you or the owner want to draw by
hand, try it early; I never did, which may be part of why the maps look
the way they do. Metatiles here are triple-layer, which is not Porymap's
default: turn on its triple-layer setting for the project
(`enable_triple_layer_metatiles` in `porymap.project.cfg`) before opening
anything, and check that a known map looks like its `pal_tool.py render`
before you save, or a saved tileset can be written in the wrong format.

## 7. How maps are made here, and what you may throw away

A layout is `map.bin`: one little-endian u16 per tile. Bits 0-9 are the
metatile id (0-511 primary, 512-1023 secondary), bits 10-11 collision
(0 = passable), bits 12-15 elevation. Metatiles in this fork are **triple
layer**: 12 tile entries, 24 bytes, in `metatiles.bin`; attributes are 2
bytes each (behaviour in the low byte) in `metatile_attributes.bin`.

Three kinds of layout exist:

1. **Canvases** (9 maps: Isle, Meadow, Route1, Mistwood, WetlandsHide,
   CoastBreakwater, Delibird, DelibirdSummit, DelibirdCliffs).
   `data/layouts/<Map>/canvas.txt` plus a legend in
   `tools/skald/legends/` is the source; `tools/skald/draw.py` writes
   `map.bin`. Five have a placement script in `tools/skald/compose/`.
2. **Vanilla slices** (14 maps). `build.py` cuts a piece of a Hoenn map
   (`base.bin`) and patches it; `fixes.json` holds hand edits.
3. **Stock interiors** (82 maps). They point at Emerald's own
   `LAYOUT_*` and have no files of their own.

`python3 tools/skald/layout_fixes.py --check` fails if a `map.bin` is not
what its generator writes. **You do not have to use my generators.** If
you draw a map another way (by hand, in Porymap, with your own tool),
delete that layout's `canvas.txt` / `build.py` / `base.bin` / `fixes.json`
/ `anchors.json` and its `tools/skald/compose/` script in the same commit.
Then `map.bin` is the source and the check leaves it alone. The legends
are still worth reading as a record of which metatile is what.

One trap when you take over a canvas map. `draw.py` builds some metatiles
as it draws (a fir's tip over whatever stands behind it, a lamp's head,
path corners) and appends them to the secondary kit's `metatiles.bin`, so
the map's `map.bin` points at ids that exist only because the canvas was
drawn. The kit scripts' `--rebuild` (`holiday_kit.py`, `hide_kit.py`,
`breakwater_kit.py`, `brick_city.py`) cut the kit back to its fixed part
and redraw the canvases that remain. After you delete a canvas, do not
run its kit's `--rebuild`, or the hand-owned map loses metatiles and
nothing reports it. `brick_city.py` also has a fixed `CANVASES` list that
must lose the map.

**A new map**: `python3 tools/skald/newmap.py --name <Name> ...` registers
everything (map.json, scripts, groups, layout); `import_layout.py` starts
one from a vanilla layout. The checklist is "New map / interior" in
`.claude/skills/skald-add-content/SKILL.md`. `newmap.py` writes a
`canvas.txt`: delete it if you will not draw with `draw.py`. To redesign
an interior, give it its own layout first. The 82 interiors point at
stock `LAYOUT_*` that several maps share; editing one's `map.bin` edits
them all.

The engine's rules that bite mapmakers, all learned by breaking them:

- Maps joined by a seamless connection must share the primary tileset
  (only the secondary reloads on a crossing). Different primaries meet at
  a warp: a step trigger at the edge that warps both ways (live examples:
  `ParcelRiver/scripts.pory` to the mill wood, `ParcelMarsh/scripts.pory`
  to Fernwick). All 23 outdoor maps are on General today. The connected
  strips are:
  - Isle, Meadow, Route1, Mistwood
  - Fernwick, Wetlands, Corridor, Floodbasin, FloodbasinSluice, River,
    Highlands
  - Delibird, DelibirdSummit, DelibirdCliffs
  - Coast, CoastBreakwater
  - on their own, entered by warp: WetlandsHide, Marsh, RiverMillWood,
    HighlandsTarn, Weather, Cavern, CorridorWorkings
- A new primary is more than a field in `layouts.json`. Most metatiles in
  every secondary here draw tiles that live in the primary, so a strip
  moved to a new primary needs its secondaries rebuilt against it or
  replaced, every `map.bin` in the strip redrawn, its own animation
  callback or none, and the tree and walk-behind checks (`trees.py`,
  `audit.py`) taught about it; they know only General. Do not rebind
  `gTileset_General` itself unless you mean to move every map on it,
  caves and interiors included.
- Near a seam between two different secondaries (five rows in from a
  north or south edge, seven columns in from an east or west one, around
  every cell that can be crossed) use only primary metatiles in palettes
  0-5, or pieces whose palette slot holds the same colours in both kits.
  `tools/skald/seams.py` has the exact rule.
- Slot 12 of the outdoor secondaries holds the palette of the big fir
  (the tree is drawn in General's tiles but coloured from the loaded
  secondary). A new kit either carries it (copy
  `tools/skald/palette_base/leob_rustboro/12.pal`, then `grade.py --apply`)
  or shows only the small palette-2 spruce; otherwise every fir on the map
  is grey and yellow. "Trees and ground" in the add-content skill has it.
- A walker is kept off water by elevation, not behaviour. Ground is
  elevation 3, surfable water 1, 0 is "any". Decor painted into raised
  ground must carry that ground's elevation or it is an invisible wall.
- Top-layer art over a walkable tile hides the player. Bridges and
  walk-behind roofs are the exceptions (`audit.py` knows which).
- An animated door is a solid tile with a warp on it and an entry in the
  kit's table in `src/field_door.c`. A door that does not animate must be
  passable. Secondary tiles 1016-1023 are overwritten by door frames.
- Sand, paving and plain floor have no wild Pokémon. Tall and long grass,
  cave floor and `MB_DEEP_SAND` do. Every map with such ground or with
  water needs its tables (`tools/skald/wild_check.py`).
- 13 palettes: 0-5 belong to the primary, 6-12 to the secondary. Outdoor
  palettes are colour-graded: the source is
  `tools/skald/palette_base/<tileset>/NN.pal`, `grade.py --apply` writes
  the live file, `grade.py --check` must read 0 drift. A new kit with a
  finished palette goes in that tool's `UNGRADED` list.
- RAM is tight (EWRAM 86.73 %, IWRAM 86.64 %); ROM is not (87 % of 32 MB).

## 8. What a redraw must not break

Scripts address the world by coordinate. A new map with the same name has
to honour, or deliberately move, all of these:

- **Events** in `map.json`: people, item balls, warps (the interior's
  return warp names the exterior warp by index), step triggers, signs.
- **Scripted arrivals**: 25 `warp(MAP_X, x, y)` calls land on bare
  coordinates (ferries, walk-in scenes, the eight epilogue stops).
  `tools/skald/warp_dest.py` checks each.
- **Scenes that walk**: `applymovement` paths in cutscenes assume the
  ground under them (the Route 1 bridge, HALE's walk into the Marsh, the
  boardroom, the epilogue). Only playing them shows a break.
- **Map-changing scripts**: `setmetatile` under story flags names metatile
  ids and coordinates (`ParcelDelibird_OnLoad`, `ParcelDelibirdSummit_OnLoad`).
- **Evidence**: each chapter's certification needs readings from signs and
  people at particular places (`VAR_SKALDMERE_CHn_EVIDENCE`; bit tables
  head each zone's `scripts.pory`). Lose one and the chapter cannot be
  signed.
- **What the text says is there.** Signs and people describe their
  surroundings ("the end of the wall", "keep to the boards", "the reed cut
  on the far bank"). Grep a map's `scripts.pory` for its nouns before you
  draw it. The best maps I made came from doing that.
- **The replay's coordinates**: `tools/skald/play/chain*.sh` and
  `tools/skald/spine.sh`. Paths are planned on the live map, so they
  survive a redraw. What does not: every `GOTO:x,y` that names the tile
  beside a person or a sign and the facing key after it; `GOTOWARP:n`,
  which is the warp's index in `map.json` (keep the order of
  `warp_events`, as the interiors' return warps need anyway);
  `spine.sh`'s `--spawn MAP:x,y`. Find the segments with
  `grep -n MAP_PARCEL_X tools/skald/play/*.sh tools/skald/spine.sh`, and
  resume the replay from the state saved before that map.
- **Heal and fly points** (`src/data/heal_locations.json`), the region map
  (`src/data/region_map/region_map_sections.json`), `ARRIVALS` in both
  `audit.py` and `connectivity.py`, `SCRIPT_STAGE` and `OBJ_AFTER` in
  `reach.py`.

Never change `MAX_TRAINERS_COUNT` (pinned at 2048; moving it shifts the
save layout). A flag is free only if nothing references it. Keep the
repository private and never commit a ROM: a build contains Nintendo's
assets. Every artist whose tiles go in must be credited in `CREDITS.md`
and in `src/data/credits.h` (its page count must stay a multiple of 9).
Open-source decomp repositories are the legitimate source of tiles; do not
take art out of commercial ROMs or from hacks that have not released it.

## 9. Proving a change

On the commit you are starting from these read zero or "ok", with two
exceptions marked:

```bash
python3 tools/skald/audit.py                 # exits 1 on 2 known warnings (a retired map, the ferry's exit)
python3 tools/skald/reach.py                 # 0 issue(s) with every HM; --trainers also 0
                                             # staged runs are baselines, not zero (later chapters read
                                             # NEVER REACHED): --hm none 89, cut 67, cut,flash,rocksmash 81,
                                             # +strength 70, +surf 16. Compare before and after.
python3 tools/skald/event_elev.py            # and --sides
python3 tools/skald/layout_fixes.py --check
python3 tools/skald/seams.py <maps you touched>
python3 tools/skald/trees.py
python3 tools/skald/warp_dest.py
python3 tools/skald/gates.py
python3 tools/skald/wild_check.py
python3 tools/skald/curve.py
python3 tools/skald/grade.py --check
python3 tools/skald/holiday_kit.py --check; python3 tools/skald/hide_kit.py --check
python3 tools/skald/breakwater_kit.py --check; python3 tools/skald/brick_city.py --check
grep -c "TEMP TEST" src/new_game.c           # 0: the test hook must never be committed
```

Then in the emulator. `tools/skald/walktest.py` drives a headless mGBA:
spawn anywhere, walk, talk, fight, screenshot, read flags.
`tools/skald/sweep.py` walks every warp and connection (`--only PARCEL_X`
for one family). The full replay is in `tools/skald/play/`:

```bash
export SKALD_ROOT=$PWD SKALD_SCRATCH=/some/dir/outside/the/repo
mkdir -p $SKALD_SCRATCH/play/run $SKALD_SCRATCH/probe
cp tools/skald/play/*.sh $SKALD_SCRATCH/play/
bash $SKALD_SCRATCH/play/rebuild_and_run.sh   # clean ROM, probe ROM, then all ten chains from the ferry
tail -f $SKALD_SCRATCH/play/run/chain1.log    # one log per chain; "all chains done" ends a good run
```

`run_all.sh` is the whole game; `run_rest.sh` resumes from saved states
after a fix (edit its first line). The probe ROM is the tree built with
`tools/skald/probe_hook.py --on`; the script turns the hook off again.
Never rebuild it while a chain runs. CI (`.github/workflows/build.yml`)
builds the ROM and runs four test families on every push.

The audits and the replay prove a map works. They say nothing about
whether it is good to look at. That was my blind spot; do not inherit it.

## 10. Delivering to the owner

They play on an emulator from a zip I send after each milestone: the clean
ROM renamed `skaldmere.gba` inside `skaldmere-rom.zip`. The same file name
keeps their save. A save standing on a redrawn map keeps the old ground
until they leave by a door or a map edge once; tell them. Ship only a ROM
built with the test hook off (`grep -c "TEMP TEST" src/new_game.c` is 0,
then `make`): after a probe build the `pokeemerald.gba` left in the tree
is the probe ROM. `rebuild_and_run.sh` keeps the clean one as
`$SKALD_SCRATCH/skaldmere.gba`.

I would send a render of the map and two or three in-game screenshots
with every delivery, and send them early. I did not do that often enough;
section 2, point 7.

## 11. What I would do in your place

Recommendations only. The owner decides.

1. **Settle the tileset question first, with pictures.** Show the owner
   two or three candidate looks as rendered mock-ups of one small place
   before redrawing anything large. The choice between a new primary (the
   whole world stops being Hoenn, every outdoor map moves) and richer
   secondaries on General (cheaper, still Hoenn's grass, trees and water)
   is the biggest decision here and it is theirs.
2. **One map to the standard, then stop and show it.** Saltwick
   (`ParcelIsle`) is the first thing a player sees. Whatever the bar is,
   find it there before doing twenty-two more.
3. **Then in the order of section 5's scores, worst first**, keeping
   section 8's contracts and running section 9 on each.
4. **Interiors after the outdoors.** They are the cheapest large win:
   small, self-contained, and none has been designed.
5. **Draw by eye.** If you keep my canvas tool, use it for the ground plan
   and then edit the result; do not let one-character-per-tile set the
   level of detail.
