# 13 — Full-Game Plan: from a story skeleton to a game

> Status: **FIRMED** (the audit of the build as of 2026-09-25 and the plan to
> make it a full game. **Targets set by the user on 2026-09-25: 100,000+ words,
> 1,000+ trainers, a map count in the low hundreds.** Phase order is mine; the story-structure fixes touch §04 (a new minor-cast
> member) and must be locked in §00 before they are built.)

## The audit — what exists, measured

| Measure | This build | Vanilla Emerald (same repo) | Ratio |
|---|---|---|---|
| Dialogue words (map scripts) | **15,052** (626 strings) | ~79,500 | ~19 % |
| Trainer battles | **30** | 887 | ~3 % |
| Maps | **21** (12 outdoor, 9 interior) | ~470 | ~4 % |
| Enterable houses | 3 (+ station hall, lab, centre, boardroom, cabin, cave) | dozens per town | — |
| Player choices | 12 prompts, nearly all shop/ferry menus; 1 story choice (the corridor worker) | — | — |
| Side quests | 1 (the Delibird delivery) + the gift square | — | — |
| Residents per settlement | Dock Town 5 · Station 11 · River village 3 · Delibird 10 · Coast 5 | 15–30 | — |
| Recurring cast (maps they speak in) | Hale 5 · Ilex 4 · Harland 3 · Hollis 2 · **Dorsey 1** · **Rin 1** | — | — |
| Wild species used | 160 | ~400 | — |
| Estimated playtime | **3–5 h of content**, stretched by oversized maps | 30+ h | — |

Promised in the bible and **not built**: the survey *action* and report UI
(§10 System 1 — the "tells" are sign reads that set bits), the **notebook**
with the marginalia decode (§10 System 2 — no UI exists), the **Hollis
collateral choice** at the climax (§05, locked), the **epilogue "what now"**
(§04) and any credits, a post-game, "they" pronouns, and Delibird Isle's
Snowy Summit / Shoreline Cliffs areas (§09).

## The three questions, answered

**Is the story finished?** As a *skeleton*, yes: every locked main-line beat
from §01/§02 has a scene, ferry to boardroom, and the ending's emotional
note (clear-eyed grief) is on the page. As a *story the player lives
through*, no. It ends without landing — no epilogue, no credits, the world
simply resumes — and one locked beat (the Hollis choice) is missing.

**Is it good enough?** The set pieces are genuinely good at the sentence
level — the marsh and the boardroom hold up. The problem is structural:

1. **Monologue delivery.** Every major beat is one NPC talking for 8–12
   boxes while Wren stands still. The player never does anything *during* a
   scene.
2. **The template.** Chapters 2–6 all have the same shape: arrive → read
   4–8 tells (sign boxes) → meet the mask NPC → a certification is signed.
   Five times. Nothing in the middle of the game surprises.
3. **Nobody lives here.** Settlements have 3–11 people and one line each.
   No town has a life of its own, so the "economy, not a villain" thesis has
   no faces to wear.
4. **The cast doesn't recur.** Dorsey — the political face of every zone
   3–6 per §05 — has one scene. Rin has one. There is no peer, no foil, no
   one the player meets again and again.
5. **The core verb is not a verb.** The design's whole point (§10: *the
   survey is reading, and reading is the gameplay*) is delivered as
   signposts. The notebook the entire plot rests on is not an object the
   player can open.
6. **No agency.** One YES/NO in 5 hours.

**Is it big enough?** No. About a fifth of a Pokémon game's text and a
thirtieth of its battles. A romhack of this ambition wants 15–20 hours.

## Targets — what "a full game" means here

| | Now | Target |
|---|---|---|
| Playtime | 3–5 h | **30+ h** (vanilla scale) |
| Dialogue | 15k words | **100,000+ words** (user's target, 2026-09-25) |
| Trainers | 30 | **1,000+** (user's target; ceiling raised to 2048 ids) |
| Outdoor maps | 12 | **100+** ("many many more maps": each zone = a settlement + several route/area maps, each hand-drawn at real scale) |
| Interiors | 9 | **100+** (every settlement has enterable houses, a leader's building, one working interior — cannery floor, survey hut, community centre) |
| Residents | 3–11 per town | **10–20**, each with lines in three story states (before the zone's cert / after / post-finale) |
| Side quests | 1 | **20+** (2–4 per zone, each a small ecological story, never fetch-only) |
| Species | 160 | **200+**, with zone-exclusives and survey-state-dependent tables |
| Systems | classifier only | **notebook + survey action + marginalia decode** built and tested |
| Choices | 1 | the worker, **the Hollis choice**, the Mahogany preserve statement, and 4–6 small ones that change texture (who is at the epilogue), never the landing (§02 locks a single ending) |
| Ending | resumes | **epilogue sequence + credits + post-game** |

## The structural fixes (story, not sentence polish)

**A. Break the template.** Each mid-game chapter gets its own *shape* and
one event the player is inside, not told about:
- **Ch2 Floodbasin** — the flood pulse: a timed evacuation/sandbag sequence
  that ends at Dorsey's relief tent. Dorsey's first big scene; he is good at
  it, and that is the horror.
- **Ch3 River** — Harland's community: market day in the farm village, then
  a **town meeting** with six speakers arguing water rights (the first
  multi-voice scene), then a night on Harland's boat.
- **Ch4 Highlands** — a slope failure: a rescue with Ilex on the scree; the
  homesteader's house moved by hand; Hollis's community-centre opening
  (warm, sincere, her first scene).
- **Ch5 Delibird** — the festival *night* as a playable sequence, the
  delivery quest across a real island (Snowy Summit + Shoreline Cliffs
  built), the thaw mission that cannot be won.
- **Ch6 Coast** — a shift on Harland's boat (the catch is nothing), the
  cannery floor, tea in Hollis's office.

**B. Dorsey in every zone 2–6.** A public appearance per zone (a ribbon, a
tent, a podium) and one private moment where he is sincere. He steps aside
at zone 7 exactly as §05 says.

**C. A peer.** A fellow provisional ranger from Wren's cohort — friendly,
quicker, a little vain — who takes the Foundation path: *Hollis in the
making.* Met in every zone, battled 5–6 times (the game's only recurring
battle line), found in the boardroom's outer office in the coda. Not a
"rival" trope; the rhyme's fourth leg. **Needs a §04 entry and a §00 lock
before building (name proposal: Perrin).**

**D. Towns that are places.** One named settlement per zone (this is the
§01 naming pass), hand-drawn at real scale, with 10–20 residents in three
story states. This is where most of the added words go, and it is where the
"economy" thesis finally gets faces.

**E. The notebook and the survey verb, built.** A Notebook menu (survey
log, marginalia that decode with competence, certifications) and a
**Survey** field action at red-cloth points with a report screen. §10
already carries the RAM budget (~70 bytes of save). This replaces
sign-reading tells everywhere.

**F. The ending, landed.** The Hollis choice at the marsh (§05); an
epilogue sequence — the hearing's outcome told through the world tour, then
a last scene at the bridge with the Poliwag, then credits; a post-game
(the Weather station moved here, leader rematches, the late Smeargle beat
§04 left open).

**G. The battle game.** ~200 trainers on per-zone faction palettes and a
5→60 level curve; each leader gets a building and a small puzzle; the
Mereholt gate battles become a visible checkpoint line.

## Phases — each one a pushed, playable increment

| # | Phase | What ships |
|---|---|---|
| 0 | **Endgame playtest** | Station → marsh → coast aide → boardroom → reactions, walked in-emulator via Script 1; fixes. |
| 1 | **Dock Town, done properly** | Hand-drawn town + 2 route maps + 8 interiors, 15 residents ×3 states, 8 trainers, 2 side quests, the peer's first scene. **This is the template every zone then follows.** |
| 2 | **Notebook + Survey action** | The two systems, tested headless; Chapter 1's tells converted. |
| 3–8 | **Zones 2–7, one per phase** | Each: settlement + routes + interiors + residents + trainers + side quests + its chapter restructure (A) + Dorsey (B) + the peer (C). |
| 9 | **The climax and the ending** | Hollis choice, epilogue, credits, post-game. |
| 10 | **Balance and identity** | Trainer curve, encounter tables (200+ species), §01 names everywhere, title screen, "they" pronouns. |

Rough cost: phases 1 and 3–8 are one to two sessions each of the kind that
built the Delibird village; the whole plan is on the order of **14–18
sessions**. Every phase leaves the game playable and pushed.

## Recommended first move

Phase 0 (one session), then Phase 1 — because Dock Town is the first thing
the player sees, and because a finished zone 1 settles every question the
other zones will ask (scale, tileset pairing, resident density, how a side
quest is built, how the peer works) before they are asked six more times.

## Progress log

- **2026-09-25 — Phase 1 begun: Saltwick (Dock Town) shipped.** Hand-drawn
  44×36 on `frp_general + frp_vermilion_city` (the first FireRed-tileset zone),
  13 buildings, 8 new interiors (co-op hall, chandlery, harbour office, net
  loft, four houses), 16 outdoor + 14 indoor residents each in three story
  states, 3 side quests (Anni's net → Old Rod; Sigrun's gull count → Lucky
  Egg; Corwen's Delibird → Scope Lens), harbour surf + fishing tables, the
  town named. 360 → ~4,000 words for the town. The pipeline that built it
  (`tools/skald/`) is the template for every zone that follows.
- **2026-09-26 — the opening, done the vanilla way.** User verdict: maps
  weird, dialogue corny, structure a corridor of HM gates. Response: Saltwick
  re-voiced plain; the Holding Meadow (seven possible partners, minutes in);
  Route 1 with a played bridge scene and five trainers; Mistwood as a forest
  dungeon with six trainers and a snare quest that pays in Cut. Eleven
  trainers and three hand-drawn maps added (41 trainers, 37 maps).
- **2026-09-28 — Fernwick, the first vanilla-grade city.** User verdict:
  cities must look like the vanilla ones, big and complex; remix existing maps.
  Response: `import_layout.py` — copy a vanilla city on its upgraded tileset
  and rework it by script. Fernwick (from Rustboro): District Station, Hall
  (gym 1), Survey office, park and pond, ten interiors, thirteen residents,
  three trainers, the north checkpoint. 43 trainers, 48 maps.
- **2026-11-07 — every zone rebuilt vanilla-grade; the game has its shape.**
  User verdict: "finish the game, don't ask questions." Response, in one
  session: Reedmere (Route 119 south; the Poisoned Waters event on
  chokepoint triggers, Dorsey's ribbon, Gunnar's quest), the Corridor on
  Route 116 (a stream cut through the rock, Mirren's trigger gate, the
  Flash adit, the crew hut), the Floodbasin on Route 120 (Leirvik and
  Dorsey's relief line — his first set piece, structural fix A), Elvsund as
  a Route 117 / Mauville composite (market day, the six-voice water meeting
  — fix C's multi-voice scene — Harland's boat at night, Sluice in the
  Water Board office, Dell's lure quest), Haukfell on Route 115 with Route
  114's waterfall (the slide you clear with Rock Smash and Strength, the
  warming centre, Vale's gate, the bore), the Coast on Slateport (the quay,
  the fish market, the cannery, the plaque in the office, a shift on the
  boat), the Climate Station and the Marsh on Route 119's north halves (Vane
  upstairs; Aune's unavoidable audit, Heron's confession as a played battle,
  **the Hollis choice asked out loud** — fix F's missing beat), the Cavern
  on the Shoal Cave ice room. Dorsey now appears in zones 2, 3 and 4 (fix
  B). 96 trainers added (137 total), 33 maps added (78 total), ~14k words
  added (~29k total). All eight zones re-voiced plain. Remaining: volume
  (fix G and the 1,000-trainer target), the notebook UI (fix E), credits
  and the post-game (fix F's tail).
- **2026-11-07 (later) — volume, the peer, side quests, the walk test.** 45
  trainers added across every zone (182 reachable); PERRIN built as the peer
  (fix C: six scripted encounters down the chain and the desk in Hollis's
  office after the finale); seven side quests (Grettir's pond, the flow
  survey pages, Hedda's count, the beaver stump, the Swinub egg, the shell,
  the drawer) each paying in something the player wants (Net Balls, TM39,
  Exp. Share, Amulet Coin, an egg, Dive Balls, Rare Candies);
  `tools/skald/walktest.py` boots the ROM headless, spawns on any map,
  walks, and reads the save block -- every connection and script warp in
  the chain was crossed by it (it found a wrong Floodbasin→River offset and
  the audit's habit of counting water as a crossing, both fixed).
- **2026-11-07 (later still) — the ending, landed (fix F's tail).** The
  boardroom stairs start an epilogue: eight ON_FRAME vignettes chained on
  `VAR_SKALD_EPILOGUE` (Reedmere's channel, Leirvik without the tent,
  Elvsund's market, Haukfell's capped bore, Delibird's thaw, the Marsh with
  Heron's count and no Heron, the Coast with Hale's last line, and the
  Route 1 bridge with one Poliwag going downstream on its own), then
  `special(SkaldGameClear)` (heal, FLAG_SYS_GAME_CLEAR, continue-warp to
  the Fernwick Center, save, the credits -- rewritten in
  `src/data/credits.h` as 27 pages: the cast by town, the engine, the
  original game -- then the vanilla soft reset). Post-game: every leader
  offers a repeatable full-strength rematch (levels 58–63, nine new trainer
  ids) and Perrin asks for one more at his desk. The whole sequence was
  walked headlessly and traced frame by frame. Open: the notebook UI (fix
  E), post-epilogue resident lines, the Weather station move, volume.
- **2026-11-07 (the notebook) — fix E, the half that fits.** The Field
  Notebook is a Key Item (`ITEM_FIELD_NOTEBOOK`, its own icon, given in
  Hale's first brief): a four-page menu built in C from the story flags --
  the Assignment (Hale's own briefing logic, so it always says where the
  story wants you next), the Certifications and clearances, the Side work
  (twelve quests with open/done), and the Margins (Heron's marginalia, one
  line unlocking per clearance, the player's own line after the finale).
  Driven headlessly through the bag with the harness's new TAP/IDLE
  segments and `--item`. The Survey action at red-cloth points remains
  signposts.
- **2026-11-07 (rematch tiers) — fix G's volume leg, the first 584.** Every
  simple route/town trainer (146 of them) now has four rematch tiers
  (`tools/skald/rematch_tiers.py`): talked to after the first battle, they
  offer the lowest unfought tier the clearances unlock (tier 2 at three,
  3 at five, 4 at seven, 5 after the epilogue; levels 22/32/42/57, the
  first party evolved by the species data), each once, with a yes/no and
  plain lines keyed to the tier (the stamps, the lake, the hearing). The
  object scripts still open with `trainerbattle_single` because the
  sight-approach path parses the trainer id out of the script's first
  command, so the tier logic lives in the post-battle part behind
  `SkaldRematchTier` (which also refuses a rematch in the same script run as
  the first win). TRAINERS_COUNT 1638; 781 reachable battles. Not Match
  Call: that needs save-block room and a flag range this hack has boxed in.
- **2026-11-07 (side areas, and a game-breaking bug) — two of six optional
  areas.** The Hollowbend old workings (Altering Cave base; a cave mouth on
  the Corridor's east plaza; eight miners, hikers and a ruin maniac at
  17–20; a miner who carried the closure sign) and the Elvsund mill wood
  (Petalburg Woods base on the upgraded Rustboro set; a track off the river
  town's west edge; eight at 24–26, a sawyer, two signs, coppice and the
  still mill race). Each new simple trainer got its four tiers, so 80 new
  battles. Building them exposed a latent bug: map numbers were signed
  bytes, so the 128th map in the group and every one after it -- the
  Coast's union hall, hearing room, Center, Mart and three houses, both
  Climate Station floors (Vane's gym!), the Marsh hut -- hung the game on a
  black screen when entered through a door. `WarpData`, `HealLocation` and
  the warp-setting functions are `u8` now and all ten doors were walked.
  Also learned: arrow-warp exit tiles need warp events at elevation 0.
  Remaining areas: Reedmere hide, Leirvik upper sluice, Haukfell tarn,
  Mereholt breakwater.
- **2026-11-08 — the other four areas; 1,000 battles crossed.** The
  Reedmere hide (Route 102; a warden who remembers Heron's line on the wall,
  birders counting what's left, 14–16), the Leirvik upper sluice (Route
  118 as a true connection across the basin's open west edge; the ford
  where Phase 2 would start, six on the near bank at 22–24, two across the
  river at 32–33 for the Surf return, a Board surveyor), the Haukfell tarn
  (Shoal Cave's entrance room; the cold water the bore drilled into, eight
  at 30–33, a cadet learning the cold; mouth west of the bore door) and the
  Mereholt breakwater (Route 109 as the vanilla Slateport connection; the
  closed beach, tins with the crest, swimmers over the dredge line, a
  fisherman on the far island who isn't in the quota, 33–38). Each trainer
  got its tiers: 32 trainers, 160 battles. 84 maps, 1,021 reachable
  battles, TRAINERS_COUNT 1878.
- **2026-11-08 — 100 maps.** Fifteen houses painted into the towns (four in
  Fernwick, four in Elvsund, one in Leirvik, two in Haukfell, two in
  Reedmere, two on the Coast) and the breakwater's lifeguard hut, every
  one an enterable interior on a vanilla house layout with two or three
  residents who speak before and after the hearing (a retired ranger who
  was Hale's captain, the miller whose race ran for an hour, the cannery
  sorter whose eleven-fish line was read aloud, the lifeguard who says a
  true thing forty times a day). Houses go in with the General house block
  through each zone's build.py; the audit's reachability caught the three
  old objects the new walls landed on. 41,000 hand-written words.
- **2026-11-08 — the reaction pass.** Every named resident who lacked one
  (136 of them, from Saltwick's ferry captain to the Station's second
  technician) now has a post-finale line as the first branch of their
  script, each tied to the hearing's outcome as it reaches their town: the
  cod that come in different sizes, the review's inspector who weighs them
  herself, the forty-second signature on the relief sheet, the bore log's
  'exploratory' read aloud to laughter, the meter reader whose voice held,
  the drawer that's for sandwiches now, Hale sleeping a whole night, the
  poster going back up. Dorsey keeps his courtesy and his sluice. 45,000
  hand-written words (69,900 with the generated rematch lines).
- **2026-11-08 — Dorsey in zones 5 and 6 (fix B complete), eight more side
  quests, Heron's notes.** Dorsey stands in the Haukfell warming centre
  (the grant speech; then, privately, the mother he carried out with the
  roof already going) and on the Coast quay (forty true numbers; then the
  review board's local panel and the door that revolves because the
  building only has one), with a third, off-duty moment by the bathing
  sign he signed on the breakwater. Eight quests, one per zone, each on a
  resident the player already knows: the captain's missing marsh page in
  the Fernwick pond, the hide's dusk count, the miner's closure sign
  carried to the crew hut as exhibit one, Mrs. Aske's tarp roof moved to
  the top of the sheet, the beekeeper asleep against his hive, the
  shepherd's MAREEP standing on the scree, the beachcomber's thirty-one
  tins, the Station's CASTFORM raining on a box of files. Flags for all of
  it are aliased onto item flags of vanilla maps the hack never visits (the
  flag table is otherwise full). The Field Notebook gained "Her notes":
  one of Heron's survey notes decodes per certification, the marsh one
  after the finale. Fifteen side quests in all; 46,400 hand-written words.
- **2026-11-08 — Delibird Isle as a real island (fix A for Ch5).** Two new
  outdoor maps on the Johto tilesets: the **Snowy Summit** north of the
  village (three terraces of grass, rock and thaw ponds climbing to a tarn
  and Ingrid's hut; the tilesets have no snow, so thirteen snow-patch
  metatiles were added for the last of it) and the **Shoreline Cliffs**
  east of it (the cliff top to the point beacon, stairs down to a warm
  beach with Tomas's cabin at the cliff foot). The village's north belt
  and east ring open onto them as seamless connections; the village sea
  lost its rock-pair tile and the border tile (a wall piece) became water.
  The delivery quest is now **Marta's relief round**: three parcels, three
  doors across the island, then the Delibird and the lighting of the
  square at dusk. Ten trainers at 28–32 with rematch tiers, two encounter
  tables (the warming edge has CORSOLA and STARYU in the surf; the summit
  has the cold specialists), six item balls, four hidden presents, Einar's
  forty-year list, Kari's sledge run, two map sections. 102 maps, 1,071
  reachable battles, ~48,300 hand-written words (~74,400 with the tiers).
- **2026-11-08 — the Sketch thread (§04's locked memory, finally in the
  game) and the late Smeargle beat (fix F's last open item).** Six private
  touches in Wren's narration — the boards at Saltwick ("you came empty on
  purpose"), the meadow partner's decision ("the last time something small
  decided about you, it had a tail that painted"), Hale noticing the older
  notebook, the Reedmere discharge pipe, Ilex's brush line, and Heron's
  confession: the eleven-page letter Wren wrote the winter Sketch stopped
  painting, answered with a model. Post-game, a SMEARGLE sits on the
  Fernwick pond bank painting the line where the water was (ON_TRANSITION
  hide flag; YES/NO; Lv 45; "It is not Sketch. It does not try to be.").
  Wild SMEARGLE at 1% in the hide and the marsh.
- **2026-11-08 — the third story state (fix D's "three states"), zones
  1–3.** Sixty-four residents of Saltwick, Fernwick, Reedmere and the
  Corridor crew hut gained a mid-game line that fires after the Watershed
  certification and before the finale: the Elvsund water meeting reaches the
  coast — six people stood up and the Board wrote down what they said; the
  minutes pass hand to hand by lamp oil; the soil cores ride north in a crate
  marked EVIDENCE; the dredge crew is stood down "pending review"; Hale
  sleeps four hours in a chair; the reed cutter posts a number to the
  weather. Inserted as the branch after the post-finale one (or as the
  second leg of an if/elif chain), only in scripts without quest or story
  logic of their own. ~51,000 hand-written words.
- **2026-11-08 — the third story state, zones 4–6 (fix D complete).**
  Eighty-five more residents: Leirvik hears the river hall's vote against
  Phase 2 (vouchers "suspended", a pencil line on the door frame for a day
  with no water); Elvsund hears Haukfell's ground let go (meltwater on all
  fourteen meters, a hill farmer ordering a boat, the sawyer cutting two
  stands and not sleeping); Haukfell, the island and the Coast hear the
  coast survey (the bore log's 'exploratory' to stay 'exploratory', the
  cannery line held a day "pending the ranger", the inspector's second
  column, Harland's handshake on his own quay, the model coming off the
  Foundation's wall "for updating"). Every town now moves in three states.
  ~54,400 hand-written words.
- **2026-11-08 — readable furniture.** Seventy-six sign events on the
  dressers, shelves, drawers, fridges, pantries, a bed and two pots of
  thirty-seven house interiors, each text written for its residents: the
  skipper's cheque stub gone brown beside a brushed cap, Hale's tide table
  with HIGH in a child's hand, the miller's oiled key for a lock that is
  never turned, the relief vouchers in rubber bands, the boat-loan papers in
  the drawer that doesn't close with the pen on top of them, a child's
  mittens in sizes that were never worn. Three taken on screen.
  ~56,100 hand-written words.
- **2026-11-08 — eight more side quests, one per zone (twenty-four in all).**
  Halvar's Corps whistle, twenty-two years in the inlet, given back by low
  water (Soothe Bell); the Survey clerk's crate label on the river hall floor
  -- chain of custody (Focus Band); the reed cutter's count, nineteen stands
  taller than a person where there were fifty-one (Quick Claw); three
  scrapes off Leirvik's flood marks, and the shine under the brown (Max
  Elixir); a seasoned keel plank from the sawyer's one stand for a boat
  built for water that hasn't arrived (Amulet Coin); the geologist's brass
  tag 48-50 found at the tarn cave's old water line (Metal Coat); Kari's
  sledge worked loose from the leaning tree (Shell Bell); the nine-season
  objector's fourth carbon behind the clerk's bench (Leftovers). A started
  quest always resolves, even after the finale; the offer is the second leg
  after the post-finale line. The notebook's Side work page now lists open
  quests and a finished count, so it stays inside gStringVar4 at any length.
  ~58,000 hand-written words.
- **2026-11-09 — readables in the public rooms.** Thirty-five more sign
  events in sixteen public interiors: each Center's leaflet rack and wall
  map (the marsh's old shoreline pencilled a finger-width out; the reef in
  blue from memory; plot nine circled), each Mart's shelves (REPELS by the
  crate, NO REFUNDS ON WOOPER; a tin turned crest to the wall), the HQ's
  specimen case and duty ledger (WREN -- FIELD, and nothing after it), the
  Survey office blackboard and the soft-paged field guide with one plant
  ringed, the Flats' fridge note, the boatyard's steaming rib, Hollis's desk
  with the survey squared to its edge, the boardroom's framed recovery model
  signed in a younger version of the hand from the margins, the breakwater
  hut's bench of initials, the Tidewater office's fifth gauge drawn where
  the falls are not. ~58,800 hand-written words.

