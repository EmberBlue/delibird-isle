# Map reviews for the Codex handoff

Appendix to `design/CODEX-HANDOFF.md`. Written 2026-11-28.

Eight separate Claude Opus agents each rendered two or three maps with
`tools/skald/pal_tool.py render <Map> out.png 2`, looked at them whole and in crops, and wrote what follows.
They are the same family of model as the agent that made the maps, that agent wrote their brief, and they
read each map's header comment; they had not seen its opinion of how good the maps are. They were told the
owner is not satisfied and asked to be blunt. Their text is reproduced as returned, unedited. Coordinates
are tile (x,y) on the map as it stood at commit `5994d61a48`; in a scale-2 render tile (x,y) is at pixel
(32x, 32y).

Erratum found when the handoff was fact-checked: in the `ParcelFernwick` review the third pale patch is at
(15-16,57), not (15-16,52-53). Six other "broken" locations were spot-checked against renders and held.

Scale: 5 is about as good as a stock Emerald route; 8 or more is a map a player would screenshot.

## ParcelIsle: 5 / 10

*Saltwick, the first town. Made from: drawn (canvas). Secondary kit: brick_city.*

Saltwick is a neat brick-town grid with a canal, but it is ruled in straight lines, padded with lamp-post and bench spam, and the bottom third is a dead slab of water with a staircase-stepped deep-water rectangle.

**Weaknesses, most visible first**

- Bottom ~10 rows (y30-39, whole width) are empty water. The deep-water area (x7-51, y34-39) is a stepped pyramid of axis-aligned rectangles, and it reads as generated. There is no shoal gradient, foam, buoys, nets, moorings or sandbar. The four sailboats (x7,y31; x21,y30; x39,y31; x45,y34) are the same sprite at roughly even spacing, and the three triangular rocks (x8,y35; x24,y33; x35,y35) are also one repeated stamp.
- Everything is an exact grid. Main Street is a perfectly straight 2-row band from x6 to x59 (y18-19), the quay walk is another straight band (y26-27), and the canal (x30-34) is a straight vertical channel with no curve. All three are framed by straight kerbs. No street bends, there is no diagonal, and no building sits off-axis.
- Prop rhythm gives the generation away. There are about 25 identical lamp posts, about 15 identical signs and about 10 identical benches. Along the quay (y25-26, x6-54) the pattern lamp, sign, bench, lamp repeats house after house. Around the fountain square (x37-50, y10-17) lamps stand at all four corners and both sides in mirror symmetry.
- The canal has no source and no mouth. It starts at a stone frame at the top (x30-34, y5), which is a box of water in a lawn, and it runs into the harbour under a bridge whose orange brick stubs (x31,x33 at y20 and y28) look like mis-picked tiles over a darker water strip.
- The west channel (x2-4, y14-39) is a 3-tile water strip between a brown cliff stripe and the trees. It meets the north lawn at a flat stone cap (x2-4, y14) and serves no purpose.
- Stock Emerald buildings sit in the town's best spots: the Poké Mart (x23-26, y12-15) and the Pokémon Center (x39-42, y5-8) are vanilla and clash with the brick kit around them. The quay houses (x8-11, x18-21, x23-27, x38-41, x43-46 at y22-25) are five copies of the same brick cottage, so the quay row has no silhouette.
- The square pond on the quay lawn (x50-52, y22-24) is the same rounded-square stamp used on ParcelMeadow and ParcelRoute1. A freshwater pond on a harbour quay makes no sense.
- The tree border is a mechanical T#T# checkerboard (rows 0-1; columns 0-1; x56-59 from y20 down). There is no depth or mixed canopy.
- The east dock (x50-51, y28-33) is a plain 2-wide plank strip ending in open water. It has no posts, bollards or crates.
- There is no real landmark. The grand hall (x44-53, y2-9) is the only large building, but it is a flat brick box pushed into the NE corner. Nothing in town is visible from the arrival pier (x14-16, y28-35) as a focal point.

**What still reads as stock or machine-made**

The Mart and Center are stock Emerald, and the lamp posts and benches are the vanilla Lilycove/Slateport props. The brick kit is a common community tileset that many hacks use, so the town reads as 'a brick city tileset demo' rather than a Skaldmere harbour. The flat geometry and evenly spaced props read as machine-made.

**Worth keeping**

- The overall idea of a canal town split by Main Street, with a fountain square, a grand hall and a quay below a retaining wall with stairs
- The stone pier position (x14-16, y28-35), which the arrival scene and ferry warps depend on
- The gabled double row house (x8-15, y10-16) and the gabled inn (x52-57, y11-16). These are the only buildings with a silhouette.
- The retaining wall with stair cuts between Main Street and the quay (y21)

**What a redraw should do**

- Redraw the waterfront as a real working harbour. Use an irregular quay line with jetties at different lengths, mooring posts, crates, nets, barrels, a slipway, tide-line foam and a shallow-to-deep gradient that follows the coastline, not a stepped rectangle. Cut the open water from about 10 rows to 5-6 and use the space for a fish market or boat sheds.
- Bend Main Street, or let it fork at the square. Have the canal enter from a weir or culvert at the top and meander once. Put the buildings on varied setbacks and orientations.
- Cut lamps by at least 2/3 and place them only at bridges, the square and the pier head. Give each block a different prop set (drying racks, lobster pots, market stalls, a chandlery yard).
- Replace the stock Mart and Center with buildings in the town's brick/timber style, which needs new metatiles. Make the five quay cottages at least three distinct models (warehouse, net loft, narrow townhouse).
- Add a landmark set piece seen from the arrival pier: a lighthouse, a harbour-master's tower or a stone sea gate. This needs new pixel art (a 3x6 or larger tower metatile set).
- Remove the square pond from the quay lawn.
- Reaching 8+ needs a custom northern harbour tileset: weathered stone quays, tarred timber, slate/turf roofs, rope and net props, cold-water foam edges and seaweed rocks. The generic brick city kit alone will not get there.

## ParcelMeadow: 3 / 10

*The Holding Meadow, where the partner is chosen. Made from: drawn (canvas). Secondary kit: brick_city.*

A 24x20 rectangle of flat grass split down the middle by a ruler-straight path, with two empty fence boxes, a stamp pond, one stock cottage and random flowers: the starter-choice location looks like a placeholder.

**Weaknesses, most visible first**

- The sand path (x10-11, y0-19) is perfectly straight and uniform for the whole height of the map. It divides the map into two mirrored halves.
- Two empty fence rectangles (x3-8, y3-7 and x13-20, y3-7) take the top third. The left pen holds nothing. The right one holds a plain sand rectangle (x15-18, y4-6). They read as unfinished, and the gaps in the fence (x6, y7; x16, y7) look accidental.
- The pond (x4-6, y11-13) is the same rounded-square stamp as in Saltwick and Route 1. It has no reeds, rocks or shore detail.
- Flowers are scattered evenly with no clustering logic (x2-8, y8-10; x13-21, y8-11; x2-8, y14-18).
- The only building, the small brick cottage (x17-20, y12-15), is a copy of the Saltwick cottage. The bench (x6-7, y15), the planter (x13-15, y13) and the lamp post are town props dropped in a meadow.
- The tree ring is a uniform wall with no break in rhythm. Along the bottom (y17-19) the trees line up at even spacing.
- There is no focal point for the map's key moment, where a hurt Pokémon chooses you. There is no recovery pen, shelter, feeding station or care area with any character.

**What still reads as stock or machine-made**

Fully reads as machine-made: the axis-symmetric split, the empty rectangle pens and the scattered flower stamps. The tiles are generic Emerald/community grass, fence and pine with nothing local.

**Worth keeping**

- The concept of the Holding Meadow north of Saltwick, with the path running through
- The cottage as a keeper's house

**What a redraw should do**

- Redraw from scratch. Make the path enter at an angle and curve around a central care area instead of bisecting the map.
- Turn the pens into a real wildlife rehab yard: hutches, a straw-covered shelter, water troughs, a small aviary for the bird species, a shallow pool for Lotad/Carvanha and a warm stone or ash patch for Numel. Each of the seven species should get a hand-built habitat corner.
- Give the ground variety with mown versus long grass, worn dirt around troughs, a small stream feeding the pond with reeds, and stumps and logs. Break the tree edge with clearings and undergrowth.
- This needs new pixel art: hutch/pen/trough/aviary metatiles and a rehab-shelter building with its own roof style. A farm or ranch community tileset could be a base, recoloured to the northern palette.

## ParcelRoute1: 3 / 10

*Route 1, the bridge scene. Made from: drawn (canvas). Secondary kit: brick_city.*

A 30x48 open lawn with a straight sand corridor, rectangular grass blocks, one-tile ledge lines, a ruler-straight river box and the same pond and rock stamps: a generated layout with no composition.

**Weaknesses, most visible first**

- The river (x6-9, y27-47) is a perfectly straight, constant-width vertical rectangle with a dark rim. It starts abruptly under the plank bridge (x6-9, y26) with no source, so the bridge crosses into nothing. There are no banks, shallows, rocks, reeds or bends. The poacher/Poliwag scene happens here, and it looks like a swimming pool.
- Tall grass comes in hard-edged rectangles: x21-26, y6-9; x15-22, y14-17; x15-20, y37-39; x19-26, y40-44.
- The ledges are thin one-tile brown lines on flat grass (x13-18, y11; x14-26, y36) with no end caps and no change in ground. They read as drawn with a ruler, not as terrain.
- The path (x11-12) is a straight corridor with right-angle jogs (y10-11, y38-39) and an odd widened blob at x13-16, y3-10. There are no curves.
- Huge flat empty lawn: most of the area between y11 and y34 is bare single-tile grass with flowers sprinkled at even spacing.
- Repeated stamps: the square pond (x17-19, y29-31) again; three or four identical boulders (x20-21, y2-3; x6-7, y20-21; x15-16, y23-24; x24-25, y29-30); single pines dotted evenly.
- Benches in the wilderness (x2-3, y30; x21-22, y30) are town props on a route.
- The tree borders are slabs. The west wall (x0-5, y0-17) is a solid block and the bottom edge (y45-47) is an evenly spaced row. There is no elevation anywhere apart from the two ledge lines.

**What still reads as stock or machine-made**

It reads like the Emerald Route 101/103 kit placed by script: generic grass, pines, ledges and boulders, with no local identity. The geometry (rectangles, straight lines, even scatter) is the clearest sign of a machine-made map.

**Worth keeping**

- A river along the west side with a plank bridge at its head as the stage for the bridge scene
- The north-south flow from the Holding Meadow toward Mistwood

**What a redraw should do**

- Redraw the river as a real watercourse. Bring it in from the map edge, wind it, vary its width, add stony shallows, reeds, a gravel bar and a weir or ford. Put the plank bridge where the path actually has to cross it, with railings and posts.
- Build elevation in layers: at least two cliff tiers with proper corner and end pieces, stairs or ramps, and a hillside the path climbs. Swap the thin ledge lines for hops cut into slopes.
- Grow the tall grass in organic shapes along the river and under trees. Shape the path with curves and forks: one branch to the river scene, one to a hidden clearing.
- Add focal points: an old ruined bridge or mill, a hunter's hide, a cairn or waymarker, a fallen tree across a gully. Remove the benches and the square pond.
- This needs a northern woodland/river tileset: birch and spruce mixed canopy, mossy rocks, river shallows and gravel, wooden footbridge pieces, ferns and heather ground cover. Stock Emerald route tiles will cap this map at about 5.

## ParcelMistwood: 3.5 / 10

*Mistwood forest (zone 2). Made from: drawn (canvas). Secondary kit: shady_forest.*

A labyrinth made with a stamp: Shady Forest trees laid on a strict 2x2 grid with rectangular 2-tile corridors cut out, a generic hut, and a bottom strip in a different tileset that clashes with everything above it.

**Weaknesses, most visible first**

- Every tree sits on a perfect 2x2 grid (whole map, rows 0-35). Every wall of the maze is a straight row or column of identical trunks, so it looks like graph paper, not a forest. There are no clumps, no single trees standing in clearings, no ragged edges, and no canopy that overlaps the path.
- The corridors are all exactly 2 tiles wide and turn at right angles, for example the gallery at rows 6-7 (x4-23), the gallery at rows 20-21 (x4-25), the long east-west corridor at rows 30-31 (x2-25), and the vertical shafts at x4-5 (rows 22-29) and x24-25 (rows 8-19). Together they read as a maze generated in ASCII, which is how it was made (canvas.txt).
- The tall grass comes in perfect rectangles: (10-15,6-7), (22-23,10-11), (12-15,20-21), (4-5,24-27), (6-9,30-31) and (18-21,30-31). Each one fills its corridor from wall to wall, then stops on a hard straight line.
- Light and dark trees are mixed by a random sprinkle with no pattern (for example (0,2), (6,2), (8,2), (16,16), (2,8)). The mix gives no sense of a grove, a dying stand or a path of light.
- Hard tileset seam at row 36. From row 36 down, the map switches to stock General-tileset bright green pine wall plus a sand track (x0-11 and x18-29, rows 36-43). Its saturated green and flat texture clash with the teal Shady Forest above. Rows 32-35 have a pale cobble strip at (14-15,32-35) that ends abruptly at both ends.
- The floor of the corridors is bare teal fill. There are no logs, stumps, mushrooms, ferns, puddles, rocks, roots, fallen branches or light shafts anywhere, even in the 'clearing' around the ranger post (19-27,12-21).
- The ranger post at (21-23,15-18) is a tiny generic 3-wide house with a barrel, a stump and a dead tree tacked on its west side at (20,15-18). It is not a landmark. The sign at (25,14) floats in empty floor.
- The north exit at (14-15,0-3) is a 2-tile dark slot plus one odd narrow tree at (15,1-3). The Cut deadfall, which is the map's story beat, has no visual staging.
- The map has no elevation at all: no ledges, banks, stream, ravine, or raised root platforms. Everything sits on one flat plane.

**What still reads as stock or machine-made**

The bottom entrance strip (rows 36-43) is stock Emerald Route-style pine wall and sand path. Above it, the borrowed Shady Forest kit is used as a single-tree stamp on a grid, which reads as machine-made rather than as a crafted forest. The maze layout is plainly ASCII-generated.

**Worth keeping**

- The teal, misty palette of the Shady Forest kit fits a northern forest, but extend it to the entrance strip.
- The concept: a maze of galleries with dead ends, snared Pokemon to find, and a ranger post in a clearing.

**What a redraw should do**

- Redraw by hand. Drop the 2x2 lattice: offset tree rows by 1 tile and stagger the canopies so they overlap. Use clumps of 3-7 trees with single specimens standing in the open. Paths should be 1-4 tiles wide and curve diagonally, with ragged canopy edges that hang over them.
- Do the whole map, entrance included, on one forest tileset. Kill the General-tileset pine strip at rows 36-43, or blend it with transition tiles.
- Add forest-floor detail tiles: mossy logs, stumps, mushrooms, fern clusters, roots, boulders, puddles, leaf litter, and light shafts / mist overlays. If the Shady Forest kit lacks these, it needs new pixel art or a richer community forest tileset (Gen 4/5-style forest packs).
- Add elevation: a stream or ravine with a bridge, root ledges, and a raised mossy bank the player hops down. That gives the maze real one-way structure instead of 2-wide hallways.
- Make the ranger post a set piece: a custom timber cabin or lookout with a fenced yard, a woodpile, a notice board, a lantern and a cleared patch of trodden dirt.
- Stage the north deadfall exit as a visible landmark: a fallen trunk across a gap, a broken canopy and a path visible beyond it.
- Break grass into organic blobs that hug the trees, not wall-to-wall rectangles.

## ParcelFernwick: 3.5 / 10

*Fernwick, the Corps town. Made from: Rustboro City, patched. Secondary kit: leob_rustboro.*

This is Rustboro City with its signs relabelled. A player who knows Emerald will recognise it instantly, and the edits added broken-looking white patches and a boxy pond.

**Weaknesses, most visible first**

- The whole layout is LAYOUT_RUSTBORO_CITY: the Devon Corporation tower at (7-16,7-15) as the 'District Station', the Rustboro gym at (24-29,15-19) still showing 'GYM' text on its facade and its stock gym sign at (23,18-19), and the Pokemon School at (24-30,30-34). Also stock are the herringbone paving, the cobble avenues, the Center (15-18,35-38), the Mart (15-18,41-45), the fountain (27-29,38-40), the paired lamp posts and the iron fences. Nothing in the silhouette says 'Skaldmere'.
- Broken-looking light/white tiles at (20-21,21-22) in the middle of the main avenue crossing, at (16,48) and at (15-16,52-53) on the south road. They read as wrong-tile seams or a missing metatile.
- Lamp posts are placed in mechanical pairs flanking the x19-22 avenue every ~7 rows: (19,15)/(22,15), (19,23)/(22,23), (19,30)/(22,30), (19,37)/(22,37), (19,44)/(22,44). On the west plaza there is another formulaic ring of 4 at (8,17),(15,17),(9,19),(14,19).
- The park pond at (10-15,26-29) is a hard rectangle. Three trees stand on its bottom rim at (10-15,28-30), half in the water. Flowers are dotted at even spacing around it.
- The dark-paving 'shadow' patches step in clumsy blocks that do not match building footprints: under the Devon tower at (7-17,15-18) the stair-steps make a jagged dark stain, and there are similar steps at (3-4,54-55) and (10-11,46-55) beside the apartment block and at (35-36,41-49).
- The sea on the west (0-5,0-33) is flat stock water with stock Emerald rocks, behind a stair-stepped cliff edge that descends in identical 1-tile diagonal steps at (1-6,5-34). The town does not interact with the water at all: no harbour, steps, pier or bluff overlook.
- Empty, featureless grass at the north (19-25,0-6) and in the NE tree field. The tree belts on the east (37-39,7-50) and south (rows 50-59) are a single repeated pine stamp placed on a regular checker.
- Buildings are all stock Emerald city kit: the gabled grey 'dark roof' houses at (19-23,8-11), (20-23,39-42), (11-14,46-49) and (20-23,46-49) are identical copies. The flat-roof grey and tan blocks also repeat. No custom architecture marks the Corps district.
- The south exit (15-17,55-59) is just a gap in the fence with flowers at the corners.

**What still reads as stock or machine-made**

Almost all of it. It is Rustboro City: the Devon building, the gym with 'GYM' lettering, the school, the herringbone plaza, the fountain, the iron fence perimeter and the paired lamp posts. The edits (a closed east road, a pond, moved trees) are visible as additions and in places as errors.

**Worth keeping**

- The idea of a terraced civic town on a bluff above water, with the Station as the dominant building.
- The waterfront edge on the west is a strong natural feature that could be exploited.

**What a redraw should do**

- Throw out the Rustboro base and draw a new town. Give it a distinct silhouette: a bluff-top town that steps down to the marsh water, with real cliff terraces, stairs, a boardwalk and pier on the west shore.
- This needs new or different building art. Make the District Station a custom northern civic building (timber or stone, steep roof, flagpole, notice boards), not the Devon tower. The Certification Hall should not carry 'GYM' text: it needs a custom facade. Use northern-style houses (steep pitched roofs, timber cladding, chimneys, snow-dusted eaves) from a community tileset or new pixel art.
- Replace the uniform herringbone with mixed surfaces: cobble lanes, dirt yards, boardwalk and grass verges. Vary lamp, bench, crate, planter, barrel, notice-board and market-stall placement around real activity points.
- Fix the white wrong-tile patches at (20-21,21-22), (16,48) and (15-16,52-53).
- Make the pond organic (irregular shoreline, reeds, a footbridge), or replace it with a marsh inlet that ties to the sea.
- Break the tree belts into irregular stands with undergrowth and a varied edge.

## ParcelWetlands: 3.5 / 10

*The Wetlands and Reedmere. Made from: Route 119 south, patched. Secondary kit: Fortree.*

This is vanilla Route 119's south half with Emerald's Weather Institute in the middle. Pale-blue 'bare earth' blobs over it read as snow or a palette bug, and two copy-paste houses are dropped into a sea of tall grass. It does not read as a backwater landing or a village.

**Weaknesses, most visible first**

- The white 'dead reed / bare earth' patches look like snow or broken tiles, not mud or bleached reeds. They are pale icy blue-white, and every one has a blocky stair-stepped outline with no edge pieces: about (3-12,22-29) with a bush stuck in the middle at (5-7,26-27), (12-18,48-53), (30-37,50-55), (5-7,15-18), and a C-shape at (27-29,15-20). They are the loudest thing on the map.
- The Mereholt Tidewater office at (26-36,40-47) is the stock Hoenn Weather Institute, domes and all, pasted in unchanged on a flat grass rectangle. Its top edge cuts straight across the cliff line at row 40. Every Emerald player will recognise it at once.
- The 'poisoned' backwater pond (13-23,24-36) is a dark-water rectangle laid over the light river. The light/dark border runs in square stair steps at (12-14,28-33) and (17-23,33-36). At about (17-23,37-39) the dark water ends in ragged blue notches cut into the grass with no shore pieces, which looks broken.
- Six rocks stand in an evenly spaced row at about (14-23,24-25) and another four in a diagonal at (4-6,32-37). The spacing is mechanical, a row of buoys rather than a riverbed.
- Rows 40-61 are almost all one flat field of tall grass with filler trees. The houses at (9-12,52-55) and (22-25,52-55) are the same stock General small house, sitting in tall grass with no yard, path, fence or dock. There is no village silhouette, and nothing says 'landing'.
- The log bridge on rows 11-13 (x 7-31) and the waterfall at (19-22,7-10) are Route 119 unchanged. The cliff terraces in the north-west (0-10,0-14) and north-east (27-39,2-24) are vanilla geometry. The two stepped dirt hills at the bottom (1-14,58-67) and (20-39,58-67) are stock rock mounds that fill the edge.
- Small round ponds at (7-8,4-5) and (11-13,15-17) are stock pond stamps dropped on lawn, with no reeds or mud around them, which is odd on a wetland map.
- Paths are hard-edged sand strips (27-29,24-36) and (16-20,36-38) that end abruptly. The Fernwick funnel path at (17-19,58-62) is a plain sand rectangle running into the bottom edge.
- The colours are wrong for a 'sick backwater'. It is a saturated, cheerful Emerald teal-green, with no murk, grey-brown water or dead vegetation that actually reads as dead.

**What still reads as stock or machine-made**

Almost all of it: the shape and cliffs of Route 119 south, the Weather Institute, the log bridge and waterfall, the General houses and the stock rock mounds. The 'remix' layer (white blobs, dark-water rectangle) reads as machine-applied rectangles: build.py runs rect() and put() over a vanilla base.bin.

**Worth keeping**

- The general story layout: river down from the north, the pond as the heart of the landing, the office facing it, the exit south to Fernwick and east over the bridge to the Corridor
- The idea that the pond's colour changes where the discharge reaches it (it needs to be drawn properly)

**What a redraw should do**

- Throw away build.py's vanilla base and draw the map from scratch. Do not start from Route 119.
- Needs new pixel art: a wetland tileset (mudflat with grass-to-mud transition edges in all 8 directions plus inner corners, reed-bed tiles in living green and dead tan, cattails, lily pads, a shallow-water/mud shoreline, a boardwalk on stilts, mooring posts, small rowboats or punts, eel/fish traps, drying racks).
- Needs a polluted-water variant with real edge transitions: an oily sheen, brown-grey murk, scum along the shore. Use a separate palette slot for it, not dark Emerald water stamped in squares.
- Make the 'bare earth' a warm grey-brown cracked mud with proper grass-lipped edges, never pale blue-white.
- Replace the Weather Institute with a custom small modern utility office (prefab block, chain-link fence, company sign, pipe outfall running to the pond as the landmark that explains the poison).
- Build Reedmere as a real landing: 4-6 distinct stilt or timber houses on the waterline with docks, a slipway, net sheds, stacked crates (the crate-imprint clue), and a narrow boardwalk linking them. Give it a recognisable silhouette.
- Break up the tall-grass sea into reed beds that follow the water: irregular shapes, channels you can see through, a few dead-reed islands.
- Shape the river with irregular banks, sandbars and fallen logs, and put rocks where currents would make them, not in rows.
- Keep the north edge, but redraw the cliff with varied heights and ledges rather than vanilla terraces.

## ParcelWetlandsHide: 3 / 10

*The Reedmere bird hide. Made from: drawn (canvas). Secondary kit: leob_petalburg.*

A flat lawn boxed in by a 4-tile tree wall: a rectangular pond, two dead-straight plank lines, a stock cottage as the 'hide', and pale blocks scattered for texture. It reads as an ASCII drawing, which is what it is.

**Weaknesses, most visible first**

- The whole map is a flat single-elevation lawn (levels are all '1'). Nothing rises, falls or overlaps, and there is no sense of a reedy pond edge.
- The tree border is 2-4 tiles thick on every side: rows 0-1, rows 16-19, x 0-3 and x 46-49. It uses one repeated spruce on a perfect checker rhythm ('T#T#'), so it reads as a frame, not a forest.
- The pond (10-27,4-11) has a dead-straight south edge (row 12) and east edge (x 27-28), as the header admits ('dug straight'). The only irregular part is a 3-step staircase on the north-west (10-14,4-7). The pier (17-19,9-11) is a T of planks floating with no posts.
- The boards are two ruler-straight plank strips: row 12 from x 8 to 29, and row 10 from x 29 to 49. They are joined by a 1-tile offset at (29,10-12). They sit on grass, not over water or marsh. A boardwalk across dry lawn has no reason to exist.
- The second pond at (12-14,13-15) is a 3x3 square with rounded corners stuck under the boardwalk, which looks like a stamp.
- The 'hide' (30-33,5-8) is a stock brown-roofed cottage with a porch. A bird hide should be a low timber blind with viewing slits, ideally on stilts at the water.
- The pale 'reed litter' patches (15-17,2-3), (37-41,3-5) and (43-44,6-7) are icy white blocks again. The pale-green squares 'g' at (31-33,13-15) and (42-44,12-14) are flat rectangles that look like missing textures. The mud 'm' at (38-40,13-15) is a lone brown blob.
- Decoration is sprinkled evenly: flowers and shrub clumps every few tiles along rows 13-14 (x 6-45), plant clumps in a 2-wide column grid at (4-7,3-11), a vertical hedge column at (35,6-8) and (35,12-13), and single fence posts at (35,9) and (35,11). None of it has a purpose.
- The east entrance (46-49,10-11) is just the plank line poking through the tree wall.

**What still reads as stock or machine-made**

Less obviously a Hoenn route, but completely machine-made: canvas.txt character art expanded 1:1, a checkerboard tree border, straight lines, square ponds, uniform sprinkles. The cottage is a stock Emerald/Petalburg house.

**Worth keeping**

- The concept: a quiet hide on the last clean pond, boardwalk approach from the landing, a reed cut on the far bank for the dusk count, fishing from a pier
- The entry point on the east edge at rows 10-11 (warp pairing with the Wetlands)

**What a redraw should do**

- Redraw it as a marsh, not a lawn. Most of the map should be shallow water, reed beds and mud, with the boardwalk weaving over them on posts, bending and forking. Dry ground should be the exception.
- Needs new pixel art: a raised-boardwalk tileset (planks on posts over water, corners, T-junctions, railings, steps down), a timber bird-hide building (low roof, slit windows, ramp), reed and cattail tiles with water-edge variants, lily pads, half-submerged logs, nest boxes and count posts, and an info board.
- Make the pond outline organic on every side, with inlets, a reed island and a mud spit. If the 'dug' side must stay straight, sell it with a timber revetment edge tile rather than a plain straight shoreline.
- Replace the uniform tree border with a mixed edge: alder/willow scrub, dead snags, reeds running into the trees, varied depth. Let the forest come into the map in tongues.
- Give it one focal set piece: the hide on stilts at the water with the reed cut opening in front of it, framed so the player sees the view the warden sees.
- Use a moody palette (cool early-morning greys, olive reeds). Never use pale white-blue for litter; use a straw-tan reed litter tile.

## ParcelCorridor: 3 / 10

*The Corridor (the culvert). Made from: Route 116, patched. Secondary kit: leob_rustboro.*

Vanilla Route 116 with a ruler-straight blue channel stamped across it and a flat block of canopy texture. The east 40% is stock Rusturf-side rock mass the player never uses.

**Weaknesses, most visible first**

- The stream at x48-51 rows 0-10 and x50-51 rows 13-17 is a perfectly straight vertical rectangle of flat water. It has no bank variation, no rocks, no foam, no bend and no culvert art where the road crosses it (rows 11-12 are just grass). The downstream channel ends flat against the trees at row 17. For the map's one story set piece (the culvert), there is nothing to look at.
- A flat block of dense canopy texture fills x40-47 and x52-56, rows 0-8, with hard straight edges and a notch at (44-45,9-10) and (44-45,13). It reads as a texture fill, not trees, and its scale clashes with the separate large pines next to it.
- x57-99 (about 40% of the map) is stock Route 116 / Rusturf mountainside: brown rock mass, staircase cliffs, cave mouths at ~(65,10) and (78,6), the boulder and rocks at (73-76,7-10), and the stair tiles. Any Emerald player recognises it. Most of it is solid unwalkable rock in bands of identical diagonal cliff edges (x88-99).
- The west half is stock Route 116 layout: the tall-grass blobs at (5-15,4-14) and (15-28,8-12), the pine borders and the house at (36-40,5-8) are all vanilla. The flowerbed (37-39,9-10) and the sign/box clutter are unchanged.
- A one-tile ledge line runs (16,2)-(16,7), then (16-21,7), then (21,7-12), then (21-35,12). It is a thin wiggly line with no reason on the ground. There is a floating brown dirt patch at (18-22,2) with nothing around it.
- Signs are scattered without purpose: boxes at (3,7) and (5,10) side by side in open grass, and wooden signs at (16,12) and (29,10).
- Large flat grass areas without detail: (0-10,5-12), (55-70,11-14) in front of the rock, and around the stream crossing (40-56,9-13).
- The 'thinned logging forest' concept is not shown at all: no stumps, cut logs, timber stacks, skid trails, machinery, a checkpoint barrier or a service hut.

**What still reads as stock or machine-made**

Plainly vanilla Route 116 including the Rusturf Tunnel mountainside. The only additions (stream, canopy block) look procedurally pasted and are the least natural shapes on the map.

**Worth keeping**

- The story setup: a service road through cut forest, a culvert over a stream, and a checkpoint gate. These are good anchors for a composed route.
- The narrowing of the road at the checkpoint as a gameplay beat.

**What a redraw should do**

- Redraw from scratch with no Route 116 base. Make the route a logging service cut: a gravel or dirt road with wheel ruts, stump fields, log piles, felled trunks, a skid trail, and a cleared slope regrowing in low brush.
- The culvert is the focal point. It needs custom art: a road embankment over a stone or concrete culvert pipe with water pouring out, a debris dam or scour pool below, and an eroded bank. This is new pixel art (or a community tileset with bridges/culverts and cascade water).
- Make the stream meander: variable width, rocks, rapids and foam, gravel bars, reeds, and banks that change. It should come down from a visible source or a fall at the north edge.
- Replace the stock Rusturf rock mass with a smaller, meaningful landform: a hillside the road was cut into, with a cut bank face, a retaining wall and exposed strata. Use the freed space for a playable side area.
- The checkpoint (x44-45, rows 11-12) needs a set piece: a gate barrier, a hut, cones, a sign board and fencing.
- The tileset needs tree variety beyond one pine stamp plus a canopy fill: birch, dead snags, young conifers, stumps, slash piles. That means a community northern-forest tileset or new pixel art.

## ParcelCorridorWorkings: 3 / 10

*The Hollowbend old workings. Made from: Altering Cave, patched. Secondary kit: Cave.*

This is Altering Cave with three blobs of pale green 'spill' and three 2x2 blue puddles stamped in, plus a row of grid-aligned rocks. Only 51 of 768 tiles changed. It does not read as a mine gallery, a ballast quarry or anything the Corps ever closed.

**Weaknesses, most visible first**

- None of it is mine workings. There are no timber props or pit-props (the trainer dialogue literally says 'Mind the props' and there are none), no rails or carts, no spoil heaps, no cut faces, no ladders, lamps, shoring or barred-off adits. It is a natural cave floor with ledges.
- The pale yellow-green spill blobs at (3-8,11-16), (16-21,14-17) and (25-29,10-13) are near-rectangles with clipped corners (build.py spill()). Their colour clashes with the brown cave palette and reads as a lawn indoors.
- The water puddles at (5-6,13-14), (17-18,15-16) and (27-28,11-12) are the same 2x2 jagged stamp, centred in each green blob. They are identical, symmetrical and obviously copy-pasted. The jagged bottom edges also read as broken tiles.
- There are huge flat floor fields with no dressing: the whole top strip (0-31,0-1), the upper right (16-31,0-7), the bottom left (0-12,19-23) and the bottom right (23-31,18-23). That is roughly 40% of the map in one tile.
- The rock pile at (18-21,11-12) is seven identical 1x1 boulders in two grid-aligned rows, which looks generated. Elsewhere, single boulders are sprinkled at even spacing: (5,2), (4,3), (8,3), (9,3), (7,4), (5,6), (10,7), (2,10), (1,11), (11,10), (11,11), (13,9), (1,16), (2,17), (13,13), (14,16-17), (14,21) and others. There are two shades of boulder, and nothing about where they sit is motivated.
- The scuff/crack decals (614/592/610) at (12,10), (11,11), (7,4), (21,19), (14,21), (23,17), (24,16) are faint scratch marks sprinkled one per area. They read as noise, not as cart ruts or cut marks.
- The ledge walls are stock Altering Cave rectangles: the boxes at (3-10,1-7), (0-6,9-18), (10-14,10-15), (23-30,8-14) and (14-16,5-10). They have square corners and parallel runs, with no varied wall heights and no erosion.
- The stairs at (26-27,14) are the only elevation change and are a bare stock piece. The exit at (18,23) is a tiny hole with no mouth framing for a door the road crew reopened.

**What still reads as stock or machine-made**

Recognisably Altering Cave, both in shape and tileset (93% untouched). The added green spill blobs and puddle stamps read as machine-placed: the same shape centred in the same rounded box three times.

**Worth keeping**

- One-room, Flash-dark gallery with eight trainers is a fine gameplay frame.
- The east-plaza mouth placement on the Corridor and the closed-in-'98 / reopened-for-ballast story give a strong art brief; use it.

**What a redraw should do**

- Redraw from scratch as a mine, not a cave. It needs new pixel art or a community mine/quarry tileset (there are well-known free Gen 3 mine/cave packs with timber shoring, minecart rails and lanterns) adapted to the brown palette.
- New metatiles needed: timber pit-props and lintel frames (1x2 posts, 3-wide beam over a corridor); minecart rails with straights, curves, junctions and buffer stops, plus a cart object; spoil and ballast heaps (2x2 and 3x2, graded gravel); cut rock faces with drill marks; a boarded-up 1998 adit with Corps signage; hanging lamps or a lantern post with a warm light pool; ladders and timber stairs between levels; ore-sorting chute or screen; puddle and seep edge sets in brown-water tones (not the stock blue).
- Composition: a main haulage tunnel running from the mouth at (18,23) with rails, side galleries (stopes) branching off at irregular angles, one big worked-out chamber as the focal point (with a collapsed section, props snapped and a dramatic rubble fall), and the old sealed '98 face deeper in. Put trainers at work stations: at the cart, at the screen, at the prop line.
- Use two or three elevation tiers with timber ladders, so the eight trainers are spread across levels rather than all on one floor.
- Delete the green spill entirely. If vegetation is wanted, use sparse pale cave moss at seeps only, in a palette that sits inside the brown range.
- Fill the empty fields with real mass (rock pillars left as supports, spoil heaps, rails). No region larger than about 4x4 should be one bare tile.

## ParcelFloodbasin: 4 / 10

*The Floodbasin (zone 3). Made from: Route 120, patched. Secondary kit: Fortree.*

Vanilla Route 120 kept almost intact, with pale ice-looking blobs and bare single water squares stamped on to mean 'sick wetland'. It reads as a damaged Hoenn route, not a contaminated northern floodplain.

**Weaknesses, most visible first**

- The 'dead reed / standing floodwater' overlay reads as snow or frost, not sickness. Big pale-white blobs with rounded rectangle corners sit on the tall-grass terraces at (18-21,47-51), (25-30,40-43), (32-35,45-48), (35-43,51-55), (18-21,54-57), (11-13,25-30), (5-8,31-35), (31-36,24-27), and also across the hamlet front at (19-23,94) and around the bridge ends at (6-7,16-19) and (28-29,15-18). They have the same soft-rectangle shape every time, have no relation to where water would collect, and on a wetland map the eye reads them as snowdrifts.
- Water squares with no shore edges are scattered all over the lower half: single raw tiles at about (4,60), (5,61), (9,65), (10,73), (7,77), (2,79), (9,79), (12,83), (12,89) and (21,92). They look like missing tiles or seams, not puddles. Next to the properly edged round ponds they look broken.
- Round 'puddle' ponds are stamped at regular spacing through the middle meadow (x5-20, y18-24) and down the x11-14 corridor (y67-82). They are all the same one- or two-tile rounded blob, so they read as polka dots, not as a drainage pattern.
- There is a long, dead-straight, quadruple-stacked cliff wall at x14-17, y38-66. It runs nearly 30 tiles with no break, no erosion, no ledge or stair variation, and splits the map into two unrelated strips.
- The upper lake (x8-28, y10-24) is stock Route 120's rectangular cliff-walled pool. The long log bridge across row 15-16 runs from cliff to cliff, and its ends dump onto the white blobs. The cave mound in the water at (17-21,20-23) is a stock Emerald 'secret base boulder'.
- The 'old pump house' / works door at (5-8,51-54) is a stock rock mound with a cave mouth. Around it, six identical small boulders sit in a symmetrical ring at (3,50), (11,50), (1,54), (12,54), (3,58), (11,58), which reads as a placeholder pattern, not a landmark. Nothing says 'decades-old Mereholt pumping works': no pipe, no concrete, no outfall, no rusted machinery.
- The lower-right lake (x24-29, y62-78) is a hard rectangle with a flat pink rubble shelf at (24-29,62-64). The orphan cliff stub at (20-21,60-64) starts and ends on open grass for no reason.
- The lower-left lake (x0-8, y80-87) is a near-perfect rectangle with a single notch. Its shoreline has no reeds, mud or transition.
- LEIRVIK (x9-37, y84-93): four identical stock-kit 4x4 houses with flat grey roofs, set on a sand strip, with puddles touching doorsteps at (13,91) and (19-20,91). The sign at (19,91) stands in water. There is no fence, garden, drying rack, jetty or anything else that gives the hamlet a silhouette, and the houses face a dark fence/ledge stub at (29-33,92).
- The sand path at the top (x4-20, y2-7) is a two-step staircase of flat rectangles. It reads as Route 120's original path with nothing added.
- The tall-grass terraces on the right (x18-39, y40-60) are stock Route 120 horizontal grass bands. Their dark leading edges repeat every 2 rows, a grid rhythm that the white blobs only make worse.
- Tree mass: huge undifferentiated spruce fill along the whole left (x0-8, y4-30 and y38-45) and right (x30-39, y8-40) edges. There is no understory and no clearing shaping, so it is dead border.
- The colour story is wrong for the premise. The map is the same bright, healthy teal-green everywhere, so the only 'sick' signal is white blobs. There is no discoloured water, no sheen, no brown die-off band, no dead trees.

**What still reads as stock or machine-made**

Unmistakably vanilla Route 120 (the layout is a 40x100 slice of LAYOUT_ROUTE120 patched by build.py): the rectangular upper bridge lake with its boulder, the stacked western cliff, the grass terraces, the scattered cave-mound, the lower lakes. The remix layer (puddle blobs, white 'dead reed' patches, mud strips via a blob() helper with clipped corners) is clearly procedural. Same shapes, clipped-rectangle outlines, regular spacing, unedged single tiles.

**Worth keeping**

- The overall route concept: entry from the Corridor bottom-left, hamlet above the south lake, a crossing over the upper lake, a checkpoint pocket at the top-left exit to the River
- The bridge over the upper lake as a set-piece location for the evidence tells (just redraw it)
- Event placement logic (doors at the hamlet, the works door, Breen's checkpoint): positions can move, but the beats are sound

**What a redraw should do**

- Throw away the Route 120 base. Redraw from scratch as a real northern floodbasin: a braided, low, flat wetland with irregular channels, oxbows, mud flats and reed beds whose edges follow water levels. Avoid cliff-walled rectangular pools entirely.
- This needs NEW TILES to reach 8+: (1) proper reed-bed / cattail tiles in healthy and dead (brown/grey, broken stems) variants with full edge sets onto water and grass; (2) mud flat and wet-mud tiles with water edges; (3) a polluted-water variant (oily sheen animation, rust-brown or grey-green tint), with shore edges so the contamination visibly spreads from a source; (4) dead/bare spruce and snag trees; (5) industrial ruin pieces for the Mereholt pump house: concrete sump, pipe outfall, rusted valve wheel, broken sluice gate, chain-link. Do not use the Fortree 'puddle' tile as dead reeds. It reads as snow.
- Build a visible source-to-sink composition: the discharge pipe/pump house at one end, the sheen spreading downstream, a dead reed band along the plume, healthy reeds away from it. The evidence bits (pipe, sheen, dead reeds, deformed Wooper, sick Karp) should each have a drawn place on the map.
- Replace the bridge with a boardwalk on piles that winds through reeds over shallow water: Northern wetland boardwalk pieces (new tiles) with railings and missing planks.
- Leirvik: give it 3-4 buildings with a distinct silhouette (raised on stilts or plinths against flooding, turf or tarred-plank roofs, a boat shed, drying racks, a jetty, sandbags at doors). That needs a custom building set, not the stock 4x4 house.
- Kill the 30-tile straight cliff wall at x14-17. Use a low, broken river terrace with stairs, slumps and wet seeps if a level change is needed at all.
- No raw single water tiles anywhere. Every water body needs an edge set.

## ParcelFloodbasinSluice: 4 / 10

*The upper sluice. Made from: Route 118, patched. Secondary kit: Mauville.*

A recognisable chunk of vanilla Route 118's beach and rock plateau, with a ruler-straight ledge and decorative junk. There is no sluice, no ford and no gauge anywhere on the map that is literally named after them.

**Weaknesses, most visible first**

- The map has no sluice, ford or gauge. Its premise (an old ford the Board gauged and called a sluice, where Phase 2 would start) is not drawn at all. There is no weir, gate, gauge post, stepping stones, ford stones, or survey stakes, and the only hint is a sign at (13,6) and another at (26,8).
- The sea is broken by pale translucent 'shallow' tiles laid in stair-step zigzag ribbons at about (17-21,7-16), (26-28,7-14) and (29-31,11-15), plus a horizontal bar at (30-32,15). They read as rendering errors or misplaced tiles: hard stair-step outlines, no shore logic, running out into open water.
- Orphan water/shallow fragments sit on the sand at (14-16,9-11) and (32-33,11-12): small blue-grey shapes with no edges, floating on the beach. They look plainly broken.
- There are ripple rocks in the sea in two almost evenly spaced rows: (9-18,16-19) along the bottom and (20-29,3-5) across the top. Repeated at fixed intervals, they read as a stamped pattern.
- A single straight ledge runs across most of the map's width on row 8, from about x39 to x76, with only one gap. It is the clearest 'generated' line on the map.
- Large stock rock plateaus (x6-14, y0-6; x39-56, y0-6; x61-78, y0-7): Route 118 / generic Emerald mountain blocks with terraced pink tops. They are flat, featureless, and fill a third of the map.
- The cave-mound boulders at (17-19,5-7), (28-31,3-5) and (46-49,13-15) are the same stock secret-base mound, used three times, each with tiny boulders placed beside it.
- There are two cross-shaped sand blobs at (41-46,9-12) and (51-55,9-11), with a third square at (63-65,5-7). Symmetric plus-shapes with unshaped corners: clearly blobbed, not natural.
- Inside the ledge, the green shrub clumps are arranged in tidy blocks and a perfect inverted triangle at (63-73,9-14). The triangle in particular reads as procedural.
- The bottom-right is a solid wall of identical spruce (x60-79, y12-19). That is roughly 160 tiles of dead fill.
- The house at (0-3,14-17) is a stock Emerald small house half sunk into the water's edge, with water touching its wall on two sides. Nothing explains a house there (no pier or boat), and it is cut against the map's left edge.
- There is a small flower-and-pond garden fenced by short ledges at (3-9,9-14) with two tiny ponds at (2-3,6-7) and (7-8,9-10): unconnected, purposeless set dressing.

**What still reads as stock or machine-made**

Route 118: the sand beach sweeping into the sea with ripple-rock rows, the rock plateaus, the shrub patches, the long ledge, the berry-ish flower clusters. The build.py slices a vanilla layout and patches it; the patches (cross-shaped sand blobs, shrub triangle, stair-stepped shallows) are the machine-made part.

**Worth keeping**

- The idea of a shore/ford crossing with near-bank and far-bank trainer groups split by Surf
- The diagonal of the beach running down to the water at the left third: the only place with any natural composition
- The board surveyor and proposal sign beats

**What a redraw should do**

- Redraw it as an actual river ford turned engineering site: a wide, shallow, braided river crossing with a stony ford (new stepping-stone and riffle tiles), an old stone weir partly breached, a new concrete gauge station and sluice gate (new tiles: concrete walls, steel gate, gauge board with painted numbers, handrails, a small control hut), and survey stakes or flags marking the Phase 2 line. The map's name must be visible from the first screen.
- Make it a river, not a sea: replace the ocean/ripple-rock set with river water that has flow animation, gravel bars, sandbars with proper edges, and eroded banks. NEW TILES are needed for the gravel bars and riffles. Emerald has no good set for them.
- Kill the straight row-8 ledge. Use a bank terrace that follows the river's meander, with breaks for paths.
- Replace the plateaus with low northern river-bluff terrain: lichen rock, birch and willow along the banks, not three-tier pink mesas.
- Every water shape needs edges. Remove the zigzag shallow ribbons and the floating fragments on the sand.
- Give the far bank (the level 32-33 trainers) its own identity: a fenced works compound or an old drovers' hut. Do not leave it as a mirror of the near bank.

## ParcelRiver: 3 / 10

*The River and Elvsund (zone 4). Made from: Route 117 over Mauville, patched. Secondary kit: Mauville.*

Vanilla Route 117 stacked on vanilla Mauville with a ruler-straight blue canal painted down the east edge. The river the chapter is named for is the least designed thing on the map.

**Weaknesses, most visible first**

- The river (x55-58, y0-39) is a 4-tile-wide straight stripe running the full 40-tile height with no bend, no width change, no bars, shallows, reeds, rapids, bank erosion, mouth or source. A one-tile grass strip sits on each side (x54 and x59), also full height. The chapter's theme is 'the river is stressed' (channelized cut, broken dam relic), and none of that shows in the terrain. It reads as a filled rectangle.
- Hard horizontal seam at rows 18-20. A continuous spruce wall runs the whole width from x0 to x53 where the Route 117 slice was cut and Mauville was pasted under it. The map looks like two screenshots glued together because that is how it was made.
- The town (x0-39, y20-39) is Mauville almost tile for tile: stock Pokemon Center (21-24,22-25), stock blue Mart (22-25,31-34), Wattson's gym footprint (5-11,30-34), Rydel's Cycles bike racks (26-32,23-24) and the stock Mauville house kit. The paved road is a pale blue-white slab with blobby rounded edges and reads like snow or a missing texture. A player who knows Emerald will name it on sight.
- East farmland (x40-53, y20-39) is mostly empty flat grass. The two fenced plots (41-49,22-26) and (41-49,31-35) are the same Route 117 flower-bed block pasted twice, pixel-identical, stacked vertically and aligned on one column. The farmhouses (50-53,2-5) and (50-53,30-33) are the same stock 4x4 house. Big dead areas at (40-53,27-30) and (40-53,36-39).
- The 'farmland' is pastel flower beds (Route 117's flower garden), not crops. There are no furrows, irrigation ditches, field drains, hedgerows or barns. The irrigation sign at (49,26) stands on bare grass.
- The racetrack-shaped sand loop (34-53, 7-17) around a block of trees with a mud rectangle in the middle (41-44,13-14) has no purpose a viewer can read. It is a vanilla shape with no focal point.
- Ponds cut off by the map edge: the top pond (42-46,0-4) and the pond at the bottom of town (36-39,38-39). They look like cropping, not composition.
- The rock outcrop (32-37,0-4) is a lone stock brown boulder cluster dropped onto grass with no ground transition.
- Tall grass at (0-7,8-12) and wild-grass clumps scattered in loose blocks with no edge shaping.
- Signs are spread evenly across empty grass at (16,6), (49,12), (33,26), (19,27), (11,35), (49,26) and (49,26-27 plots), so they read as markers rather than placed objects.
- Stone-wall stubs at the bottom-left (around x11 and x19, y38-39) and the tree line breaks around (14-19,36-39) look like leftovers from the slice.

**What still reads as stock or machine-made**

Nearly all of it. Rows 0-19 are recognisably Route 117 (the stepped ponds, the flower plots, the day-care sand path). Rows 20-39 are Mauville City (PC, Mart, gym, bike shop, house kit). The river and the east field are flat fills painted by script (rect() calls in data/layouts/ParcelRiver/build.py), and you can see the generation in the straight full-height stripes and the twice-pasted plot.

**Worth keeping**

- The concept of the town sitting on a river with farmland between them, and the boat and bank placement for the story beats
- The pond shapes in the NW quadrant (22-30,1-7) and (20-27,10-17) have decent stepped outlines and could work as oxbow or wetland remnants of a real river

**What a redraw should do**

- Redraw from scratch. Do not slice Route 117 or Mauville. Make the river the spine and focal point: let it enter top-right, meander west across the middle, widen into a slack pool by the town, and leave by the bottom. Vary the width from 3 to 7 tiles and add gravel bars, a riffle, an eroded cut bank and a slip-off sandbank.
- Show the story in the terrain. Put a visibly channelized straight concrete reach (stone-edged banks, a weir) beside an unstraightened natural reach, add the broken dam relic as a set piece (timber or stone ruins across a side channel), and add a silted backwater.
- Build the town as a riverside market town: a quay with mooring posts and HARLAND's boat, a bridge (stone or timber, at least 2 tiles wide with railings), a market square with stalls, and a Water Board office that is not a stock Emerald gym.
- Replace the flower-bed 'farms' with real fields: tilled rows, crop stripes in 2-3 colours, hedgerows, drainage ditches feeding the river, a barn and a silo.
- New tiles needed: river edge and gravel-bar pieces, a weir/sluice, quay stonework, crop-field metatiles, and a riverside building kit (half-timbered or northern turf/timber houses). A community Gen 3 tileset with farm and riverside pieces would get most of the way; buildings need new pixel art.
- Replace the pale road with a cobble or packed-earth path tile that has proper edge pieces.

## ParcelRiverMillWood: 3 / 10

*The mill wood. Made from: Petalburg Woods, patched. Secondary kit: leob_rustboro.*

Petalburg Woods with its interior stripped out and replaced by randomly scattered sand patches, short mud ledges and shrub blocks. It has no mill, no mill race, no coppice: just a flat field of identical spruces with clearings.

**Weaknesses, most visible first**

- Visibly broken tiles: spruce trees drawn on dark brown squares inside the sand patches at (9,13), (12,14), (18,21) and (20,22). The tree's underlay does not match the sand, so each one has a hard dark box around it.
- Sand patches with open, unfinished ends where the edge set stops: the bar at (17-25,17-18) ends square on the right at x25; (7-12,33-34) ends square at its bottom-left; (25-26,10) is a bare 2x1 sand rectangle with no edge at all; the broken 'arch' at (34-38,24-26) is three disconnected sand pieces, one of them a raw 1x2 column at (38,25-26). They read as erased or half-placed patches.
- There are short, purposeless mud/dirt 'ledge' strips (3-5 tiles each, one tile tall) at (14-18,14), (12-15,22), (16-21,30), (41-45,8), (42-45,20) and (32-35,32). Floating in grass, joined to nothing, they look like stray stamps.
- Little mud mounds are dropped at (15,16), (21,24) and (25,34) with no context.
- Three identical stone-fence-with-flowers gates at (12-17,5), (14-19,38) and (34-39,38). The same prefab repeated reads as copy-paste, and the 'gates' lead into tree walls.
- Shrub/fern blocks are laid as rectangular beds of the identical bush tile: (4-10,8-12), (4-13,25-32), (21-26,32-35), (36-41,34-37), (43-46,10-18). Their hard grid edges and uniform fill read as generated.
- The tree mass is one tree type on a regular 2-tile grid across the whole map, with no size variation, dead wood, stumps, coppice stools or mixed species. The interior 'rows' of trees at (19-40,11-15) and (28-40,15-22) are straight bands.
- The whole map is the same flat grass shade with nothing breaking it. There are only two tiny round ponds at (21-22,25-26) and (17-18,31-32), stamped and isolated.
- The premise (the coppice that fed the mill race, a sawyer working there) is absent. There is no mill race, no stream, no sawpit, no log stacks, no cut stumps, no cart track, no woodpile, no charcoal clamp, no sawyer's hut. The two signs at (11,8) and (14,32) are doing all the storytelling.
- There are no focal points. Clearings are the same size, nothing draws the eye or the path, and the route from the exit to the trainers is a meander through equal open grass.
- The south exit corridor (x14-17, y38-44) is a straight two-tile lane between walls of trees. The top lane (x13-16, y0-5) is the same.

**What still reads as stock or machine-made**

Petalburg Woods: the border of dense trees, the grid of individual trees, the open grass interior, the stone-fence gates, the generic shrub tiles. The edits (sand blobs, short ledges, mounds, tree-on-dirt) are all machine-placed and several are malformed.

**Worth keeping**

- The idea of a working coppice wood tied to Elvsund's mill: it is a strong, grounded concept that just has not been drawn
- Trainer count and the sawyer NPC

**What a redraw should do**

- Redraw from scratch as a managed coppice and mill race: a stone-lined leat (narrow water channel with a stone or timber edge set: NEW TILES) running through the wood towards Elvsund, crossed by plank footbridges, with a small sluice gate where it leaves a millpond.
- Make the coppice readable. Use NEW TILES/metatiles for coppice stools (cut stumps sprouting multi-stem regrowth) in at least three growth stages (fresh-cut, 3-5 years, 12 years, matching Halle's 'twelve years old' line), and arrange them in compartments, each a different age. Then the woodland has a pattern that means something instead of a uniform spruce grid. Mix in birch, alder and willow near the water (new tree art: Emerald has nothing suitable).
- Add working set pieces: a sawpit with a log over it, stacked cordwood and brash piles, a charcoal clamp, a sawyer's hut with a lean-to, a cart track with wheel ruts (new dirt-track tiles with edge sets). One clear focal point: the millpond with the gate and the leat mouth.
- Remove every short floating ledge, every mud mound, the duplicate fence gates, and every sand patch with a missing edge. Fix the four tree-on-dark-square tiles if anything of this map survives.
- Vary the tree canopy: overlapping canopy tiles at the border so the wood edge is irregular, not a 2-tile grid; dappled-shade ground tiles under the canopy; leaf-litter and moss variants instead of one flat grass shade.

## ParcelHighlands: 3 / 10

*The Highlands and Haukfell (zone 5). Made from: Route 115 with Route 114's fall, patched. Secondary kit: leob_fallarbor.*

Vanilla Route 115 with a pasted Route 114 waterfall box. Half the map is a monotone beige terrace maze, and the bottom third is generic houses on flat grass beside a mass of identical trees.

**Weaknesses, most visible first**

- The plateau (x15-39, y0-38) is about 25x38 tiles of one beige rock-top tile in the Fallarbor palette, cut into nested concentric terraces. It reads as a featureless maze, not a mountain. Nothing stands out: no summit landmark (HALE's summit is unmarked), no bore or Survey Station building, no cold-band marker. The only detail is stock stairs at (14-15,12), (27-28,12), (28,8), (24-25,42) and (26-27,49).
- Secret-base hollows (black squares in dome mounds) repeat across the plateau at roughly (23,8), (34,7), (21,18), (26,15), (32,29), (32,15) and more. They are stock Emerald set dressing, scattered without purpose, and look like broken tiles to anyone who doesn't know the base mechanic.
- The waterfall pocket (x5-10, y5-18) is Route 114's pool-fall-channel block pasted in. The channel runs straight down to y18 and ends in a hard rectangle. A dirt patch beside it (12-15,5) is a leftover. The fall should be the map's hero shot and it is boxed into a 4-wide slot in a tree wall.
- The sea on the west (x0-16, y12-79) is a flat blue field with sea rocks dropped at regular intervals. The rocks switch from grey-green (y15-60) to brown (y60-79), which is a visible palette or tileset mismatch on one coastline.
- Broken-looking fragments on the beach: a square grass patch with a dirt mound on sand at (14-16,49) and a floating grass-ledge stub at (12-13,51). Neither has edge pieces.
- Flat white rectangles at (26-27,50-58), (23-24,63-66) and (26-27,62-65) have hard square edges and no transition. They read as unfinished or missing tiles, or as snow painted with a rect().
- The village (x8-29, y46-70) is four identical stock 4x4 Emerald houses on open grass. The homestead and the warming centre are indistinguishable from each other and from every other house in the game.
- Ledges in the south are long, thin, straight horizontal strokes across flat grass at about (15-19,71), (23-29,72), (17-21,75) and (24-29,75). They are pure rhythm with no terrain logic.
- The eastern forest (x32-39, y48-79) and the south-west tree block are a uniform grid of the same spruce, so the area has no edge and no depth.
- The fenced corral (16-24,40-49) is a lone stock white-picket rectangle on bare grass.
- The 'slide across the trail' (rocks and boulders for HM06/HM04) is not readable as a landslide. It is a few boulders sitting on beige ground.

**What still reads as stock or machine-made**

Recognisably Route 115: the west sea with rocks, the beach strip, the stepped mountain mass on the east and the Fallarbor palette. The waterfall is Route 114's. The village is stock house kit, and the white rectangles and grass patches show script painting.

**Worth keeping**

- The overall composition (sea west, highland east, foothill village south) suits Haukfell
- The cave mouths in the cliff face at roughly (24,37) and (27,37), and the sign between them, work as an entrance to the tarn
- The brown cliff edge along the beach has decent irregularity

**What a redraw should do**

- Redraw as a real upland. Show 'SHIFTED' permafrost ground through thermokarst ponds (irregular small pools with slumped edges), a drunken forest (spruce leaning at angles, which needs new tree art), a fresh landslide scar of rubble fanning across the trail, and a snow line that climbs with elevation using proper snow-edge transitions.
- Give the plateau three or four distinct terraces of different materials (heath, scree, bare rock, snowfield), not a dozen copies of one. Put a landmark at the summit, such as a cairn, a survey trig pillar or a weather mast, and make Survey Station Six an actual building with a bore rig, pipes and fencing on the plateau.
- Make the waterfall the centrepiece: a tall fall down the plateau cliff into a plunge pool, a stream that winds to the sea, mist and spray tiles.
- Build Haukfell homesteads with turf-roofed or timber buildings, stone walls, woodpiles and drying racks. The warming centre should be visibly different and larger.
- Remove every secret-base hollow.
- New tileset needed: a northern alpine or tundra set with heath, scree, snow-edge transitions, permafrost pools, leaning trees, turf-roof houses and a rig or station set piece. The Fallarbor palette and Route 115 rock tile cannot reach 8+. Fix the sea-rock palette so one rock style is used throughout.

## ParcelHighlandsTarn: 2 / 10

*The tarn cave. Made from: Shoal Cave entrance room, patched. Secondary kit: Cave.*

Shoal Cave's low-tide entrance room with the stock warm-brown palette. The 'tarn' the room is named for is a 7x6 stepped puddle.

**Weaknesses, most visible first**

- The tarn (16-23,25-31) is a small stair-stepped block of water tiles placed straight onto sand with no shore, rim, ice or depth pieces. It should be the room's reason to exist and it is barely bigger than the decorative puddles.
- Three identical tiny puddle blobs at (13-14,16-17), (24-25,17-18) and (10-11,25-26), all the same shape. Copy-paste is obvious.
- The palette is warm brown and khaki (Shoal Cave). The room is described as 'cold enough to stop a clock', but nothing reads as cold: no ice, frost, blue-grey rock or meltwater sheen.
- The layout is the vanilla Shoal Cave entrance: concentric brown ledges around the edge, cave mouths at (6,1), (19,4) and (27,1), and the stock ladders at (12,6), (12,12), (8,18), (18,17) and (25,8). Anyone who has played Emerald will recognise it at once.
- Pale sand patches (e.g. 3-13,3-9; 17-20,7-10; 22-26,11-12; 29-31,6-12; 3-5,24-28) are flat blobs with no meaning, and some are plus-shaped rectangles.
- The south and east sides (x26-34, y20-34) are bare wide terraces of one tile.
- Two lone boulders at (3,22) and (5,22), and no other props.

**What still reads as stock or machine-made**

All of it. This is LAYOUT_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM with minimal edits, palette included.

**Worth keeping**

- A cave room off the Highlands that holds the cold groundwater the bore drilled into is a good story location
- The cliff mouth on the Highlands that leads in

**What a redraw should do**

- Redraw as a cold cavern built around one large still tarn, 12-16 tiles across, with an irregular shoreline, shelf-ice edges, dark deep-water centre tiles, and a drip or meltwater inflow from a crack in the ceiling.
- Add the story evidence as a set piece: a capped borehole casing or survey pipe intruding through the wall into the tarn, with a gauge or marker post.
- Retint to cold blue-grey rock with frost highlights, and add icicles, frozen puddles and a few rimed boulders. Rebalance so trainers stand on ledges around the tarn rather than in a maze.
- New pixel art needed: an ice-cave tileset (blue-grey rock walls, ice-edge water pieces, frost and icicle decals, a pipe or casing set piece). Shoal Cave's ice-room tiles are a starting point at best. A purpose-made or community ice-cave set is needed for 8+.

## ParcelDelibird: 4.5 / 10

*The Holiday Village, the title location (zone 6). Made from: drawn (canvas). Secondary kit: leob_lilycove.*

A stock Lilycove/Emerald kit town laid out on a ruler: three ruler-straight terraces, a 2-tile canal cut down the middle, and a parade of identical Emerald houses. It does not look like a title location, a festival, or the north.

**Weaknesses, most visible first**

- The whole map is horizontal bands. Cliff faces run as unbroken straight lines across the full width at rows 10-11, 24-25 and 32-33. The terrace edges never curve, step or overhang. It reads as a layer cake, not a hillside village.
- The brook is a perfectly straight 2-tile channel at x31-32 from row 0 to row 40. It runs at constant width and splits the map into two mirrored halves. Its 'falls' are stock waterfall tiles dropped into each cliff band (rows 10, 24, 32). On the beach (x31-32, rows 33-40) it becomes a shallow-water stripe with no delta, no gravel and no spreading out.
- The town square paving ('c', the Lilycove pale-blue stone, rows 17-24, x15-30, plus both streets on rows 17 and 22) reads as shallow water at normal scale. The festival square, the focal point of the game's title location, looks flooded. The same tile runs north from the cave mouth (x7, rows 11-16), where it looks like a stream coming out of the tunnel.
- The festival set pieces are tiny and generic: one small fir at (21-22, 19-20), a few-tile 'giving table' of stock gift boxes near (18-19, 21), plank 'stage' tiles at (24-26, 20-21), stock gold bars at (27-28, 21), and a 1-tile red 'banner' over the stair at about (21-22, 24). Nothing tells a player this is the Holiday Village. There are no lanterns strung across streets, no market stalls, no big tree, no bonfire, no Delibird statue or gift house.
- The buildings are unmodified stock Emerald houses in red, blue and yellow roof variants, in rigid rows: x6-9 and x12-15 on row 18, then mirrored on the east at x34-37 and x39-42, plus x6-9/x35-38 on row 26. The 'hall' at about (19-23, 12-16) and the store at about (35-39, 12-16) are recognisable Lilycove/Emerald pieces. There is no Nordic architecture: no turf roofs, no timber gables, no boathouses or drying racks.
- Ornamental fences run as dead-straight rails along rows 23 and 30-31 between every building block, which emphasises the grid.
- The beach (rows 33-40, x10-31) is roughly 200 tiles of flat sand with four bollards, one tiny bench and two boulders. The tide line is a stair-stepped staircase of shallow-water squares (rows 37-42). There is no shingle, kelp, driftwood, nets, boats, rock pools or wet-sand band.
- The pier (x21-22, rows 39-44, T at row 44 x19-24) is a plank stub with no posts, moored boats or crane. It does not read as an island's lifeline harbour.
- The north forest strip (rows 0-3) is the T#/## tree stamp repeated on a strict 2-tile grid: x4-13, x18-29, x34-37. These are uniform blocks with hard rectangular edges, and the sand trail cuts through as a straight 2-wide band at x15-16.
- The top-right sea notch (x39-43, rows 0-3) is a hard rectangle of water cutting into the land, with a ruler-straight cliff below it.
- Rectangular ponds and mud patches look like placeholders: the 'slump pond' near (8-9, 6-7) inside tall grass, the 2x2 mud squares at about (19,7) and (27,7), the rectangular pond at (22-24, 5-7), and the cross-shaped canal widening at (30-33, 13-14).
- Snowman lamps and flowers are spread at near-regular intervals along every street edge (rows 16, 23, 24). This is filler, not composition.
- No snow and no permafrost cue anywhere. The design intends a thaw, but the result is plain Hoenn summer grass. The palette is a slightly cooled Emerald, and nothing reads as a cold island going warm.

**What still reads as stock or machine-made**

The tileset is literally general + Lilycove, and it shows. Lilycove's pale-blue paving, its lamps and its building kit; stock Emerald houses in palette-swapped roofs; the stock Emerald waterfall, beach sand, shallow water, ledge-cliff and sea-rock tiles. The layout reads as machine-composed: a canvas expanded from ASCII, with every feature aligned to rows and columns, mirrored blocks east and west of the brook, and even spacing of decorations.

**Worth keeping**

- The concept of a crescent bay with stacked terraces, a brook falling through them, and a pier at the foot is a good skeleton.
- The rough placement of the village square at the centre terrace, with the stair down to the beach as the main axis (x21-22), is a sensible focal line.
- The entrance logic (summit trail north at x15-16, cliffs east on rows 17 and 31) can stay for connection compatibility.

**What a redraw should do**

- Redraw from scratch by hand. Do not re-expand the ASCII canvas. Break every terrace edge: make the rows 10/24/32 cliffs curve, jog and overlap, put the square on a bulging terrace, and let the beach terrace wrap around the bay instead of spanning the map.
- Make the brook meander. Vary it from 1 to 3 tiles wide, give it rocky banks, a plunge pool under each fall, stepping stones and a footbridge with railings. On the beach, give it a gravel fan or delta spreading into the bay.
- Replace the Lilycove paving with a cobble or flagstone tile that cannot be mistaken for water (warm grey-brown). Paint snow-melt mud and frost-heaved edges around the square.
- Build the festival as a landmark set piece: a large multi-tile festival fir (4x6 or larger) with ornaments, string lights crossing streets as an overlay layer, market stalls with awnings, a stage with a backdrop, the giving table as a real 3-4 tile object, and a Delibird figure or gift-post.
- New tileset needed: a Nordic coastal village kit. Timber houses with turf/sod roofs and steep gables, red/ochre painted plank walls, boathouses, fish-drying racks (hjell), a stave-style festival hall, a stone quay with mooring posts and boats. Stock Emerald houses cannot reach 8+.
- Beach and shore tileset: shingle and pebble beach, wet-sand band, kelp wrack line, driftwood, rock pools, nets and upturned boats, and irregular curving shallows with proper edge pieces instead of stair-stepped squares.
- Ground tileset: tundra/heath grass with dwarf shrubs, crowberry and heather, patchy late snow, mud and thermokarst slump edges, and leaning ('drunken') spruce for the thaw story. Use varied tree clusters instead of the T# grid stamp.
- Compose around three focal points: the fir in the square, the falls, and the pier. Leave deliberate negative space, but give every empty field a reason.

## ParcelDelibirdSummit: 3.5 / 10

*The Snowy Summit. Made from: drawn (canvas). Secondary kit: leob_lilycove.*

A wedding-cake of nested rectangles with pale squares stamped on it for 'snow'. It is the flattest, most obviously generated of the three maps, and it does not read as a summit at all.

**Weaknesses, most visible first**

- The terraces are concentric rectangles: level 6 at x16-27 rows 2-8, level 5 at x8-35 rows 4-17, level 4 at x4-37 rows 7-27. The shoulders are stepped symmetrically left and right (rows 4-7). It looks like a stepped pyramid or a level-select screen, not a mountain.
- The 'thirteen patches of snow' ('i') are hard-edged 2x2 and 3x2 pale-blue squares, for example (16-17, 3-4), (18-19, 5-6), (24-26, 4-5), (9-10, 6-7), (29-30, 6-7), (32-33, 7-8), (5-6, 9-10) and (18-19, 15-16). They read as missing-texture placeholders or ice blocks, not snow. The pale-green 'g' rectangles at (15-16, 11-12), (17-19, 15-16), (28-30, 8-9), (11-12, 19-20), (19-21, 20-21), (26-28, 20-22) and (34-36, 20-21) read the same way: flat tinted rectangles.
- Paths are right-angle L-turns: the row 14 run from x12 to x24, the row 24-25 run from x9 to x36, and the 2-wide vertical at x9-10 and x21-22. They are mechanically routed.
- The tarn, the climax at the top, is a cross or stair-stepped rectangle of deep water at (26-32, 11-14) with one rock tile at (29, 12) and no shore detail.
- The brook is again a straight 2-tile channel, at x31-32 from row 15 to row 39, with stock falls at rows 17 and 27. It is the same treatment as the village, so the two maps look copy-pasted.
- The peak plateau (x16-27, rows 2-8) is an empty flat rectangle containing one sign, a small cairn and two snow squares. There is no summit marker, no rock outcrop, no wind-blasted ground, no view.
- The 'drunken forest' (rows 28-39) is the standard upright Emerald pine on the T#/## grid at x4-13, x16-29 and x34-37, plus a few scattered single pines. Nothing is tilted or drowned, which is the entire ecological point of the place.
- The large lower terrace (x4-37, rows 18-27) is mostly empty grass with a few stakes, flowers and boulders scattered at random, and no composition.
- The watcher's hut (W###, x11-14, rows 9-12) is a stock Emerald dark-roof house dropped on the terrace.
- The north side is a ring of plain sea and a 1-tile grass rim. A summit that drops to the strait needs crags and a dramatic north face, not a smooth rectangle edge.
- The cliff walls on the west and east sides (x4 and x37) are uninterrupted vertical lines running 20+ tiles.

**What still reads as stock or machine-made**

Same general + Lilycove pair: stock Emerald grass, tall grass, ledge cliffs, pines, waterfalls and a stock house. The terrace geometry and the square snow patches are the clearest giveaway that this was generated from an ASCII grid; no human mapmaker would paint snow as 2x2 tiles.

**Worth keeping**

- The story-beat sequence is good: drunken forest and slump pond, then the stake field with its cairn, then the tarn and hut, then the peak with Ingrid.
- The south connection points (trail x15-16, brook x31-32) for seams with the village.

**What a redraw should do**

- Rebuild the mountain shape: an irregular ridge or massif climbing diagonally (for example from SW to NE), with switchback trails, ledges of varying height, scree slopes, boulder fields, and a crag at the top instead of a centred box.
- New pixel art needed for snow: a proper patchy-snow autotile set (snow-to-grass transition edges, corners and inner corners, thin crust, melt puddles). Without it, 'almost no snow' cannot be shown convincingly. Paint the snow as ragged, shrinking drifts in shaded hollows and on north faces.
- New pixel art needed for the drunken forest: leaning spruce at several angles, dead grey snags, trees standing in water, and slumped mossy ground. This is the map's signature image and should be its focal point.
- Make the tarn a real alpine lake: an irregular shoreline with rock and gravel edges, sedges, an outlet stream over rocks, and the hut beside it as a turf-roofed stone or timber hytte (new building art).
- Make the stake field a visible line of survey stakes climbing the slope, with snow lingering only above the highest stake, so the thaw reads in one screenshot.
- Make the peak a rocky summit: cairn as a 2x2 or larger set piece, wind-scoured stone tiles, lichen, a view edge over the strait with sea stacks below.
- Tileset: alpine and tundra kit with heath, rock, scree, lichen, snow transitions, exposed permafrost mud, and a cliff set with a different face (grey basalt or gneiss) from the village's brown Emerald ledge.

## ParcelDelibirdCliffs: 3.5 / 10

*The Shoreline Cliffs. Made from: drawn (canvas). Secondary kit: leob_lilycove.*

Two flat green shelves and a sand strip separated by full-width ruler cliffs, with grass clumps sprinkled in. The 'beacon' is a tiny stock lighthouse in an open-topped box. It does not read as sea cliffs.

**Weaknesses, most visible first**

- The 'cliffs' of the title are two straight horizontal ledge bands running the full map width at rows 24-25 and 31-32. Stairs are punched straight through at x4-5 and x27-28. No headland, cove, overhang, arch or cliff-face drama: the sea cliff is just the Emerald town ledge.
- The east edge is a single straight cliff at x38 running from row 4 to row 32, with a 1-tile strip of water at x39 behind it. It looks like the map was cropped, not like the island's horn.
- The beacon knoll (x30-36, rows 9-16) is a rectangle walled only on the west, east and south. The north side (row 9) is just a grass rim line, so the elevated knoll reads flat or broken. The lighthouse itself (E#, at about (33, 10)) is a small stock 1x2 sprite-like lighthouse, far too small to be the destination landmark of the map.
- The west seam at (0-1, 17) is a stub of the village's pale-blue paving ('cc') floating in grass. It reads as a puddle, or as a cut-off object at the map edge.
- The north rim has an odd cliff stub at about (16-17, 4-5): a lone wall piece where the rim jogs. The rim jogs (x7-16 at row 3, then row 4 east of x17) are rectangular notches.
- The heath (rows 4-23) is flat grass with tall-grass clumps stamped as blobs at (1-5, 7-11), (14-20, 7-12), (22-28, 7-11) and (7-11, 20-22). Single pines, boulders, flowers and the pale-green 'g' rectangles at (6-8, 13-14), (24-26, 14-15), (17-19, 20-21) and (31-33, 21-22) are sprinkled evenly. There is no heather, no wind-bent scrub, no bench vista composition.
- Sea stacks are a single small stock rock-mound tile repeated: (20-22, 0-2), (5-7, 42-44), (30-31, 43-44), (15-16, 44-45), and also on land at (26-27, 13-14) and (33-34, 5-6). Same sprite, same size, with no surf around them.
- Paths are 1-2 tile right-angle tracks: the row 17 main line, the x12 vertical north to the bench, the x37 vertical down the east edge, and the row 19 and row 29 runs.
- The beach (rows 33-40) is mostly empty sand with two rectangular shallow-water 'tide pools' at about (11-14, 36-37) and (19-24, 36-37), drawn as hard squares, plus stair-stepped shallows. The 'warm beach' (range shift) has nothing living on it.
- Tomas's cabin (H###, x31-34, rows 34-37) is a stock blue-roof Emerald house sitting on a rectangular patch of grass cut out of the sand.
- Fences along the top of the lower cliff (rows 30-31) are straight Lilycove rail segments with gaps only at the stairs.

**What still reads as stock or machine-made**

The same general + Lilycove kit: stock ledge cliffs, the stock lighthouse, stock house, stock sea rocks and rock mounds, Lilycove rails, and Emerald beach and shallow tiles. The layout is a near-copy of the village's horizontal band structure, so the three island maps feel like one template run three times.

**Worth keeping**

- The intent (heath cliff-top, beacon on a knoll, warm beach below, cabin at the foot of the stair, sea stacks offshore) is a strong, screenshot-worthy brief if it is actually drawn.
- The connection rows on the west edge (row 17 street, row 31 shore trail) to keep seams with the village.

**What a redraw should do**

- Draw real sea cliffs: a tall vertical cliff face (4-6 tiles of rock face, not a 2-row ledge) along the north and east coast, with coves biting in, a natural arch, wave-cut platforms, surf foam at the foot, and the cliff-top path winding close to the edge.
- New pixel art needed: a sea-cliff face set (basalt or gneiss, with strata, bird ledges and guano streaks), surf/foam edges, larger multi-tile sea stacks in two or three sizes, and a real lighthouse or beacon tower (3x5 or larger, with a keeper's shed) as the focal landmark on a properly walled knoll.
- Heath tileset: heather, crowberry and dwarf willow, wind-bent scrub, rocky outcrops and lichen, so the cliff-top has texture instead of flat grass with stamped clumps.
- Make the beach organic: shingle grading to sand, a curving tide line with wet-sand and foam edges, rock pools as irregular basins with weed, driftwood, and visible out-of-place warm-water life (an ecology cue) near the cabin.
- Replace the cabin with a fisherman's cabin or naust (new building art), and give it a boat, nets and a slipway.
- Fix the east crop (x38-39) and the west seam stub at (0-1, 17), and close the knoll's north wall at row 9.

## ParcelCavern: 3.5 / 10

*The Crystal Cavern. Made from: Shoal Cave ice room, patched. Secondary kit: Cave.*

This is the Shoal Cave ice room with five rectangular 'melt' patches stamped on it. Only 40 of 600 tiles differ from vanilla, and the whole map is one shade of flat blue with no landmark, no cache set piece and no sense of 'the last cold room on the island'.

**Weaknesses, most visible first**

- The palette is a single blue across floor, ice, walls and rocks. Walls, walkable floor and slide-ice differ only in hatch pattern, so the room reads as one blue smear in both halves of the render. It has no warm accent, no dark depth, no light source and no crystal colour, even though the map is called the CRYSTAL CAVERN.
- The melt patches are straight rectangles from build.py melt(): (3-6,4-6), (12-14,12-14), (4-7,24-25), (15-17,19-21) and (9-11,2-3). Each is a rough-floor box cut into the ice with square corners and no edge transition, which gives the generator away at once (look at (9-11,2-3) at the top and the strip at (12-13,11)).
- Straight one-row ice strips at (15-17,22) and (12-13,11) sit in the floor like pasted bars. Cracked or broken ice has no edge pieces anywhere.
- Top-right block (17-19,0-8) and the right column (18-19,8-29): textured floor fill outside the wall ring that reads as walkable space and is not dressed as rock mass. The bottom band (0-10,27-29) is the same: a flat floor field under the last wall, with no composition.
- The ice-boulder decoration is scattered at near-even spacing (2,3), (6,2), (9,2), (11,4), (13,3-4), (7,6), (13,7), (14,7), then the same again on the lower half (2,16), (4,17), (5,22), (7,22), (4,26), (7,27), (10,26), (12,17). It is the same 2x2 sprite every time, with no clusters, sizes or purpose.
- There are no set pieces. The everfrost cache behind the sheared slab, Kelda's audit post at the mouth and the 'last Delibird' deep end have no unique tiles at all: no frozen strata, no crystal columns, no survey stakes or rope, no meltwater pool, no nest. Story beats happen on generic ice tiles.
- Cliff ledges at (6-10,7-12) and the lower inner block (8-14,15-23) use stock Shoal Cave rounded wall lumps with plain right-angle corners. The jagged notch at (8-10,19-21) is the vanilla shape, untouched.
- The ladder at (17,9) and the stairs at (4,13) are bare stock pieces with no landing dressing.

**What still reads as stock or machine-made**

All of it. Anyone who has played Emerald will recognise this as the Shoal Cave low-tide ice room (93% of tiles are untouched vanilla). The only additions, the melt rectangles, are visibly machine-placed boxes.

**Worth keeping**

- The idea of sliding-ice lanes between pockets of floor, with a Strength boulder gating the cache, is a sound puzzle skeleton.
- The overall 20x30 vertical descent (mouth at the top, deep end at the bottom) is a reasonable flow to redraw over.

**What a redraw should do**

- Throw the layout away and draw a new cave. Don't patch the Shoal Cave room any further.
- It needs a new tileset, or at least a heavily extended Shoal Cave secondary, to reach 8+. Draw: (a) a two-tone or three-tone ice-cave palette (deep navy rock, teal old ice, white-cyan fresh ice, plus one warm accent such as a survey lamp or orange marker tape); (b) crystal and ice-column metatiles in 1x2 and 2x3 sizes as the cave's signature landmark; (c) layered blue ice strata on the wall faces, so walls are visibly different from floor; (d) cracked-ice and melt edge sets (inner and outer corners) so meltwater can take organic shapes; (e) a meltwater pool with animated drip tiles; (f) a frozen-in Delibird nest, a sheared-slab cache alcove, and human props for Kelda's audit (tripod, survey stakes, rope line, crate).
- Composition: one big central chamber with a visible frozen waterfall or crystal formation as the focal point, ice-slide lanes that are readable shapes (curves and diagonals made with corner pieces), and side pockets of different sizes. Use elevation: a raised ledge ring around a lower ice basin.
- Use darkness as composition. Since Flash is required, put the strongest landmark where the Flash radius first reveals it.
- Fill everything outside the walkable area with solid rock mass or a dark void tile. Leave no textured floor beyond the walls.

## ParcelCoast: 3.5 / 10

*The Mereholt Coast (zone 7). Made from: Slateport City, patched. Secondary kit: Slateport.*

Vanilla Slateport City with its grass paved over and crates dropped on top; Emerald's layout and buildings are all still there, with nothing added that reads as a northern, collapsing industrial coast.

**Weaknesses, most visible first**

- The whole street grid is Slateport's. The boulevard runs x16-17 from y8 to y57, the cross streets are at y13-20 and y27-30, and the PC at (18-21,16-19), the Mart at (12-15,23-26), the Battle Tent/'hearing hall' at (28-33,23-27), the Museum/'coast office' at (25-31,7-12), the Contest-style dome at (8-12,8-12), the shipyard/'cannery' at (24-31,32-38) and the market tents at (2-14,32-50) all sit exactly where they do in Slateport. Anyone who has played Emerald will recognise it straight away.
- Huge flat paved areas. The plaza at (4-23,13-30) is one pale pavement tile, with a faint grid of lighter pavement-edge lines that makes it look like a bathroom floor. The container yard at (24-37,12-22) is a flat sheet of paving with 2x2 crate blocks set out on a near-perfect grid at (26,14) (30,14) (34,14) (26,19) (31,18) (34,19), which looks generated. The quay at (20-38,39-47) is also empty paving.
- The bottom of the map is broken-looking. At (22-27,53-56) a pale rectangle of paving sits inside a sand frame with no edge pieces: it is the old Slateport beach pocket filled in, and it reads as a hole. The crate stacks at (8-10,57-59) and (28-33,57-59) run into the bottom map edge and get cut off. The wall at (8-16,56-57) ends in a stray cap.
- Boats overlap. At (33-35,36-39) two sailboat sprites are stacked on top of each other, and the boats at (34-37,37-39), (34-36,44-46) and (35-37,48-50) are the same 3x2 metatile pasted on water, all facing the same way. Nobody moored them: they are stamps.
- The NW 'truck park' at (2-13,1-6) is a walled rectangle of paving holding three crate blocks in a row. It is a blank box with a fence. The tree mass at (22-36,0-8) is one flat block of identical pines with a straight bottom edge at y8.
- Building variety is all stock Emerald. The four grey-roof houses at (4-7,16-19), (16-19,39-42), (20-29,41-44) and (15-18,50-53) are the same Emerald house, two of them glued side by side. Nothing looks like a cannery, a union hall or a dredge yard.
- The west shore at x0-2 is a uniform cliff strip with a straight water edge. The notch of water at (23-24,22-26) is a leftover square inlet with no reason to be there.
- The palette is a cool grey retint of Slateport. It reads as washed-out rather than as a deliberate northern grade: the grass, paving and roofs all sit at the same mid-value, so nothing stands out.

**What still reads as stock or machine-made**

Almost all of it. This is Slateport City: the street plan, every landmark building (Pokémon Center, Mart, Oceanic Museum, Battle Tent, Stern's shipyard, the market stalls, the round dome, the lighthouse-like tower at (32-33,32-34) south plaza), the sea rocks and the sailboats. The edits on top (paving over grass, grid-spaced crate stamps, a sand frame around a filled hole) look machine-made, not hand-placed.

**Worth keeping**

- The ideas from the header: lighthouse quay as the ferry landing, the fish market, the cannery, the Foundation office with the plaque, the union hall, the hearing hall. Those are good set-piece briefs.
- Door and event positions only, if that saves script work. Otherwise redraw freely and move the warps.
- The market cluster (2-14,32-50) has the most hand-placed clutter (baskets, tents, crates). Treat it as a starting density, not the finished look.

**What a redraw should do**

- Throw the Slateport base out completely. Draw the coast from scratch with an irregular, eroded shoreline: slumped quay walls, a half-collapsed pier, rubble at the waterline, tidal mud where the sea has taken paving.
- This needs a new tileset to reach 8+. Wanted: a northern industrial-harbour kit with timber and steel piers on piles, a quay wall with mooring bollards and ladders, rust-streaked corrugated sheds and a cannery with chimneys, conveyor/hopper pieces, fish-drying racks, nets, buoys, oil drums, stacked lobster pots, a crane or gantry set piece, a dredge barge moored at the quay, puddled and cracked concrete, and weeds through the pavement. Community tilesets of the 'harbour/port' type (Gen 4/5-style docks) are the right reference.
- Replace every stock Emerald house with custom pixel buildings: a long cannery shed, the union hall, a Foundation office that looks newer and cleaner than everything around it (the visual point of the chapter), and timber or stone fishermen's cottages with steep roofs.
- Give the map two or three focal points: the lighthouse quay at the south (big landmark, visible on arrival), the cannery with a working crane over the water, and the hearing hall as a civic building on a small square. Route the main street diagonally or in a bend toward them, not as a straight Slateport boulevard.
- Break up every paved field with surface variety: oil stains, drain covers, cracks, tyre tracks, puddles, weeds, kerbs, painted lines, rubbish, and pallets placed in uneven, asymmetric groups.
- Fix the bottom edge. Nothing should be cut off at y59: let the quay end in water or a breakwater root that matches ParcelCoastBreakwater row 0.
- Boats: use varied, distinct boat sprites (trawlers, a dredge, rowboats pulled up on a slip), placed as moored at real bollards, never overlapping.

## ParcelCoastBreakwater: 3 / 10

*The Breakwater. Made from: drawn (canvas). Secondary kit: Slateport.*

An L-shaped concrete strip and blobby sand islands on a flat field of shallow-water tile, ringed by a metronome row of identical rocks; reads as a procedurally filled bay, not a place.

**Weaknesses, most visible first**

- The whole west and east edges (x0-3 and x35-39, y0-62) are one repeating pattern of big rock, small rock and whirlpool rock, roughly every 2-3 tiles, the full length of the map. It is the most obviously generated thing in the set and the first thing the eye sees.
- The basin (x3-29,y2-42) is a huge flat sheet of a single shallow-water tile. The shallow/deep boundaries are staircased pixel blobs (for example (3-6,2-30), (11-24,30-35)) with no edge transitions, foam or tide lines. The deep-water notch at (22-24,35-38) is a square hole in the shallows.
- The sand islands at (7-17,22-29), (24-29,24-28), (3-10,49-53), (14-23,52-60) and (24-32,50-55) are all the same rounded octagonal blob with a one-tile shallow ring. They look stamped and give no read of a 'spoil bank' or 'bar'.
- The breakwater wall itself, (30-34,2-48) then west across (12-34,42-48), is two straight lines of flat pale paving with a plain brown rim. No blocks, tetrapods, wave splash, weathering or variety along roughly 70 tiles of wall. The inner rim at (30,15-39) is only on part of the inner face and stops abruptly at (30,40).
- The 'old wall' is a line of five rocks evenly spaced on x18 at y19-27, plus a row of evenly spaced bollard dots at (13-25,43). Both are perfect grids.
- The beach (7-29,2-19) is a flat sand field holding one umbrella (13,6-7), one cooler (15,11), three posts on a straight line at (18,12-16), a stock Emerald house at (21-25,3-6) and signs. It is empty, and the 'tins with the crest on every tide' from the header are not shown anywhere.
- Three sailboats at (36-38,6-8), (36-38,14-16) and (36-38,24-26) are the same metatile, evenly spaced on open sea, facing the same way.
- Seam at the top: rows 0-1 are pavement from ParcelCoast with crates jammed against the edge at (16-17,1). The transition from quay to beach is a straight horizontal line at y2.
- Bottom edge: rocks and whirlpools at (4-35,60-62) are cut off by the map border.

**What still reads as stock or machine-made**

The tiles are stock Emerald (shallow-water, sand, sea rock, Slateport paving, the stock house). The layout does not copy a Hoenn route. It reads as machine-made instead: canvas-drawn blobs, a rock border at a fixed rhythm, flat single-tile fills and evenly spaced props.

**Worth keeping**

- The concept in the header is strong and should survive. A real breakwater rooted at the beach that runs south, then west across the bay mouth, ending at 'the end of the wall'. Silted shallows you wade through behind it, a dredged channel, a spoil bank of soft ground with its own encounter table, the old wall as posts and rocks awash, and a fisherman on the far bar.
- The general L shape of the wall, as a composition idea.

**What a redraw should do**

- Redraw by hand. The shoreline, shallows and bars should have tide-line edge tiles, wet sand, foam and ripples: shapes that follow currents (long spits and bars angled to the swell), not blobs.
- This needs a new tileset to reach 8+. Wanted: a coastal kit with breakwater armour stone and concrete tetrapods, wave-splash animation against the wall, weathered concrete blocks with cracks and moss, rusted ladders, bollards, a navigation light at the end of the wall (the map's landmark), a channel with marker buoys and posts, a distinct dark silty mud tile for the spoil bank, kelp and wrack lines, and washed-up tins and debris pieces so the 'crest on every tide' is visible. Animated shoreline foam would lift it a lot.
- Make the dredged channel a visible deep-blue cut with straight dredged edges through the shallows, contrasted with the natural silt shapes. It is the story of the map and is currently invisible.
- Delete the rock border. Bound the map with a natural headland or cliff on one side and open sea fading to deep water on the other, using a few large, deliberately placed rock clusters.
- Give the old wall a ruined line: broken stub pillars, slumped block, a gap, irregular spacing.
- Replace the stock house with a custom lifeguard hut or tide-station shack, boarded up with 'closed to bathing' signage.
- Give the far bar real character: a stranded fishing boat, nets and a fire ring where the unlicensed fisherman camps.

## ParcelWeather: 4 / 10

*The Climate Station. Made from: Route 119 north end, patched. Secondary kit: Fortree.*

Route 119's north end and the Weather Institute recoloured: Hoenn bridge fragments now floating in a lake, a pale 'snow' path drawn as blocky rectangles, and the institute jammed against the bottom edge.

**Weaknesses, most visible first**

- The institute at (1-11,26-33) is the stock Emerald Weather Institute, unchanged apart from the palette. It sits 2-3 tiles from the bottom map edge. The bridge at (14-22,33-35) and the boulder at (0-4,35) are cut off by the border.
- The white path/snow ribbon (29-37,7-31) and the patches at (34,11-12), (34-35,17), (32-33,21-22), (32,24-25), (24-27,30-35) and (3-13,33-35) are hard-edged rectangles with no transition tiles into grass. Some have a dashed outline at (24-27,32-35) that looks like a selection box. Every one of these reads as a paint-bucket fill.
- In the lake (1-19,3-16), Route 119's long bridges have been cut into fragments that float. See the planks at (8-10,5-6), the five posts in a row at (6-9,10-11), the vertical plank at (5,7-10) and (9,10-15), the free-floating segments at (17-19,16-18), and the long spans at (10-18,7-8) and (11-18,10-11). The spans run into the cliff at x19 and stop at the other end in the water. They connect nothing.
- Tree mass: everything outside x1-37 and y0-24 is a solid flat carpet of the same pine with no clearings, a straight cut at the top, and blocky stair-step edges at (21-29,7-23).
- Stray and broken bits: a dark one-tile square at (16,28) next to the waterfall, lone fence posts at (38,6) and (36,10), a vertical fence line at (32,15-19) standing in grass, two brown bare-dirt rectangles at (24-27,5-6) and (8-10,22-23), and a one-tile ledge strip at (7-10,19) that ends in grass.
- The cliff band at y24-35 is Route 119's ledge cliffs. The stairs at (13,22), (27,26-27) and (25,31) are stock. The waterfall at (17-19,25-28) is the Route 119 waterfall.
- The tall-grass block at (31-36,13-26) is a solid rectangle against the trees.
- No sign of 'four climatologists each running a plot of private weather on the slopes'. The plots are not visible on the map: no rain gauges, anemometers, Stevenson screens or plot fences. The only weather apparatus is the stock institute.

**What still reads as stock or machine-made**

Route 119 (north section) plus the Weather Institute, recognisably so: the river and waterfall, the cliffs, the stairs, the bridge pieces and the institute itself. The edits (rectangular snow fills, floating bridge fragments, dirt rectangles) read as machine-made.

**Worth keeping**

- The premise: a climate station on a slope above a river, with four climatologists' plots each under its own weather. This is a great set-piece brief and could be the best-looking map in the game.
- A river with a waterfall dividing the slope is a good spine. Keep it, but redraw it.

**What a redraw should do**

- Redraw from scratch. Put the station on a high point in the middle third of the map, with clear space around it and a winding approach road, so it is a silhouette landmark and not wedged into a corner.
- This needs new art to reach 8+. Wanted: a custom station building (a modest northern research station: timber or prefab with a radar or weather dome, an antenna mast and a wind-vane tower), instrument props (Stevenson screens, rain gauges, anemometer masts, a balloon-launch shed, solar panels, fenced instrument enclosures), and a proper snow and frost kit with snow-to-grass edge transitions, snow-laden pines, frozen puddles, drifts and icy rock, so the four weather plots are visually distinct biomes (wet and rain-darkened, frosted, wind-scoured heath, sunlit meadow).
- Make each of the four plots a fenced, hand-shaped enclosure with its own ground tiles and props, linked by a footpath that climbs with switchbacks and stairs.
- Replace the floating bridge fragments with one or two purposeful crossings: a footbridge below the falls and a jetty with a moored boat or a gauge station on the lake.
- Break the tree mass into clumps with clearings, fallen logs, boulders and undergrowth. Use 2-3 tree variants and stagger the edges.
- Fix the borders: nothing important should be within 4 tiles of the edge, and nothing should be cut off.

## ParcelMarsh: 3 / 10

*The Last Corridor: the marsh, the finale (zone 8). Made from: Route 119 north, patched. Secondary kit: Fortree.*

The game's climax is set on Route 119's north half with a checkerboard of white and blue squares where the river should be, white blobs over the grass, and a stock house for Dr. Heron. It is neither a marsh nor a finale.

**Weaknesses, most visible first**

- The 'drying channel' in the river (20-33,25-35) is the worst tile work in the set. White 'dry earth' squares alternate with leftover light-blue water squares in a near-checkerboard: (23-29,26-28), (24-27,29-31), (21-26,32-35). It looks like corrupted tiles, not a dried riverbed.
- The white 'dead reed' patches over the grass and tall grass read as snow: (8-11,9-12), (13-17,19-22), (26-29,15-17), (8-11,30-32) and (33-34,31-33). Each is a blocky cross or plus shape with no edge pieces.
- The river (16-35,0-24) is Route 119's channel unchanged: the same banks, the same three evenly spaced rocks at (34,15), (31,18) and (32,26), and the same vanilla cliff terraces with stairs at (21-22,12) and (19-20,17). This is the climax map and it is a recolour of a mid-game Hoenn route.
- Dr. Heron's hut (10-13,1-4) is the stock General small house again, the same one used three times in the Wetlands. It sits at the top edge with a sand patch (5-8,0-1) cut off by the map border.
- Most of the 'keystone freshwater marsh' is tall grass and filler spruce. The ponds at (4-6,21-23), (6-7,25-26) and (11-12,31-33) are tiny stock pond stamps on lawn. No reeds, no open marsh water, no wildlife set piece. The Poliwag pond that should be the emotional focus is not readable as a place.
- The stepped rock shelf (15-27,12-17) and the cliff stair at (6,18-19) are vanilla geometry. The cliff in the west (0-5,8-20) is a plain double wall.
- The graded east road where Hale waits does not read as graded or as a road. The east side (35-39,4-35) is a solid block of spruce with a strip of tall grass at (36-39,24-27).
- There is no composition: no sightline to the pond, no framing of the Mereholt gate, nothing a player would stop and look at.

**What still reads as stock or machine-made**

The layout is Route 119 north, rows 36-71: river, terraces, stairs, rocks and tree masses. The overlay (dry-earth crosses, checkered bed) is rect()/put() from build.py and looks generated. The hut is a stock house.

**Worth keeping**

- The story beats and their geography: arrival on the east road, Aune at the last gate, the river as the Surf-only way in, the stream mouth feeding the pond where Heron kneels with the Poliwag
- The idea of a half-dried channel next to living water as the visual argument of the climax

**What a redraw should do**

- Redraw it from scratch as a real freshwater marsh: braided shallow channels, reed islands, open pools, peat banks, alder carr at the edges. Surf through channels should feel like threading a maze, not crossing one river.
- Needs new pixel art: dried riverbed tiles (cracked mud, stranded stones, dead weed lines, a water-to-dry transition with all edges and corners), healthy marsh water with lily pads and reeds, dead and alive reed variants, a heron/frog spawn set piece, and a field-station shed for Heron (small timber hut with instruments, waders hanging, a survey staked line).
- Needs a construction edge tileset for the graded road: raw cut earth, gravel, survey stakes, a machine track, an orange fence or Mereholt gate. That contrast (bulldozed edge against living marsh) should be the landmark of the climax.
- Compose around one focal point: the pond under the stream mouth, visible from the arrival road across open water, with Heron's spot framed by reeds.
- Use a palette shift between the healthy marsh (rich greens, clear water) and the dying half (ochre, grey, dull water). Never use pale icy blue for dry ground.
- Make it bigger and denser than any route before it. This is the final map, and it should look like the most hand-placed screen in the game.
