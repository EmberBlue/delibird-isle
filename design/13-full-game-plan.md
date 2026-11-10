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
- **2026-11-09 — the survey stakes (fix E, the field half).** One red-cloth
  stake per zone, on the landing turf, by the checkpoint, by the hamlet
  sign, at the edge of the market ground, outside the warming centre, in a
  crack of the quay stones, at the marsh edge over a much older stake. Each
  reads the chapter's evidence bits back to the player -- what has been
  logged, what is still to read, and when every counted bit is set, "All of
  it read. Put a name on it." (`SkaldSurveyStake`, a table of bit names per
  zone in `src/survey_scripting.c`). The tells stay; the stakes make the
  reading visible as a list the player can check against.
- **2026-11-09 — the remix pass (no zone is a vanilla slice with new
  content on top any more).** Measured against each `base.bin`: the Coast
  was Slateport at 1%, the Marsh 1%, the Station exterior 0%, and the seven
  side areas 0%. Each now carries its own story in the ground, with every
  placed event still reachable (audit) and walked in the emulator: the
  Coast is an industrial port (21%: crate yard of wooden and metal crates
  behind a low wall, quay walls and dark concrete, the park paved, the
  south quay with boats landed); the Marsh's river is low with a puddled
  bed and dead-reed beds (8%); the Station yard is gravel inside a fence
  with a gate, stakes along the slope (10%); the Floodbasin, Haukfell and
  Reedmere routes have dead-reed beds, standing water, the drunken stand
  and a drained pond (7 / 5 / 13%); the Breakwater is the beach the
  breakwater killed -- furniture gone, the south lobe and both flanks
  drowned and re-edged by a sand/sea autotiler, tide pools, a line of posts
  with one gap, the quay apron and crates (12%); the Sluice is the old
  ford with the river two hands down -- walkable shelves of shallow water
  along both beaches, the deep channel kept for the Surf gate (5%); the
  Hide's pond has drawn down a row onto a mud margin behind a hide screen
  (9%); the Mill Wood is a coppice -- two stands felled to bare earth with
  the stools sprouting, cordwood at the rides (5%); the Workings and the
  Tarn have sand spills with walkable shallow pools and roof-fall (6 /
  3%); the Cavern's ice has gone to bare rock in patches (6%). The
  vocabulary lives in each `build.py` (`bed`, `puddle2`, `shallow`,
  `spill`, `mound`, `fence_h`, `solid`, the Breakwater's `retile`); the
  build line prints the measured difference.
- **2026-11-10 — the papers, the dex, and the sweep.** Twenty-eight
  documents on the desks of the offices, halls and back rooms, each a
  narrated glance with the text quoted: the clerk's tray (the order of
  business before the sitting; the record of it after), the board's minute
  that conditioned the grant and the covenant page the chair turns to, the
  Water Board's gauge book (NORMAL was never crossed out; they moved the
  mark), the river minutes pinned where the poster was, Heron's three
  letters to the Survey and the Survey's sheet index with its GONE lines,
  the certification register and the syllabus in Tarn's hall, the
  Foundation's annual report with no axis on its chart, the remediation
  leaflet in four printings, Hollis's grant file (three letters a year
  apart, and after the sitting a fourth, unsent), the programme ledger
  (the Foundation does not have money; it has a parent), the fisher's nine
  carbons read one a year (ten after the sitting, the tenth typed), the
  cannery's catch book and grading sheets, the harbour log's two entries
  three lines apart, the lab's lease file, the Tidewater programme with
  the fifth gauge drawn at the falls, the relief ledger's CAUSE OF NEED
  column, the works' consent UNDER REVIEW, the centre's plaque and its
  suggestion box, the drill log's gas column, the Station's ice-out book,
  Heron's survey sheet (and the line in a different hand), the
  ratepayers' petition, the grate order form re-dated five times. ~4,200
  words. Plus **eighty-one Skaldmere dex entries** (`dex.py` over
  `species_info`): every species in the region's tables described as the
  Survey reads it -- what it indicates, not what it eats (~2,200 words).
  And the **sweep**: every warp and connection walked in the emulator; the
  one real break (the Coast office stairs, map number 127) fixed in the
  engine. ~62,500 hand-written words (every `_R2`–`_R5` and `_FirstWin`
  rematch script excluded; the earlier "~58,800" used a looser cut).
- **2026-11-10 — the choices (problem 6, "no agency").** Five remembered
  choices, none of which moves the landing. The two the bible locked: at
  the confession Heron asks whether HOLLIS's name goes into the record
  ("Neither one is mercy. Which?"), and at the road Hale asks whether the
  MAHOGANY correction is filed in Wren's own hand or left for the lawyers
  to find ("It's a question of whose hand"). Three for texture: say your
  piece at the Elvsund water meeting, take the FOUNDATION blanket at
  Leirvik, drink HOLLIS's tea. Each is read back later by the world
  rather than announced: the clerk's record of the sitting changes its
  items 10 and 11, Hollis's last lines and the secretary's change, the
  pinned minutes gain a seventh name, the relief ledger's last line is
  filled or ruled empty, Cordelia notices who keeps their own accounts.
  Plus "Sit?" in the boardroom, because the chair was made lower on
  purpose. Flags `FLAG_SKALD_CH_*` (aliases of unreachable item flags).
- **2026-11-10 — town life (problems 3 and 4: "nobody lives here", "the
  cast doesn't recur").** Two people talking in every settlement, backs
  to a wall, overheard in three story states -- the Saltwick net-mender
  and the old woman (the lab's new light), the docker and the chandler
  (the east berth cleared by six), Fernwick's clerk and neighbour (eight
  honest stations), the old man and the boy at the pond (the stone that
  didn't move), Reedmere's fisher and boatwright (nothing washes up in
  the open on a mud bank), the mother and the girl on the turf (it cracks
  when you jump on it), Mrs Aske and her neighbour (a drawer of blankets),
  the ferryman and the lad (who pays the Foundation), Elvsund's farmer and
  miller (the wet column and the honest one), Dell and the
  granddaughter (one fish in a river is a chance), Haukfell's roadman and
  postmistress (funny old weather), the old man and his son (warm's warm;
  I'll go and I'll know, both), the island's grandmother and boy (you
  don't cheer a lamp in a storm), the wife and husband (a ruler, not
  comfort), the Coast's docker and fisher (how they get you both ends),
  the secretary and the accountant (line forty, hospitality), the
  Station's technician and keeper (the brackets are the series), the cook
  and the cadet (the ones who read the yard walk slower). ~3,000 words,
  36 objects (`pairs.py`). And **INGER of the Skaldmere Courier**, a
  stringer whose desk is a bench: outside the lodging, the HQ, the
  Tidewater office, the relief office, the hall, the centre, the hearing
  room, with two or three states each; at Reedmere she asks for one
  sentence on the record (`FLAG_SKALD_CH_QUOTE`), and at the Coast after
  the sitting she tells you what she ran at the top. ~1,200 words. The
  two interiors that had no readable (the Fernwick fisher's tide table,
  the ferry's manifest board) have one.
- **2026-11-10 — the examinations (problem 5, "the core verb is not a
  verb", at the leaders).** The eight certification leaders were the
  thinnest scenes in the game (Breen's whole gate was twelve words). Each
  now asks one reading question before the battle, and the answer gates
  nothing -- competence is tested, never domination -- but the notebook's
  Certifications page counts the ones read right ("Read right at the
  examinations: N of 8", flags `FLAG_SKALD_EXAM_1..8`). Tarn: twenty-eight
  pairs on the pond, the same count as her notebook -- healthy? (no: same
  number, half the water). Mirren: the culvert crew says grates next
  month -- do we stop the work? (no: we write it where it can't be rounded
  up, and we don't sign). Breen: the basin runs brown -- lake water? (no:
  upstream soil off the cut banks). Sluice: the gauge reads NORMAL -- is
  the river normal? (no: they moved the mark). Vale: the slide -- a
  weather event? (no: the ground went soft under a casing). Harland:
  forty jobs -- a true number? (**yes**: they're all true numbers; the lie
  is never in the numbers). Vane: the fifth gauge drawn at the falls --
  is there a falls? (no: not since the sluice). Ilex: thirteen snow
  patches -- more than last year? (no: nineteen). The three Mereholt
  gatekeepers get a line of procedure each instead (the card, the form
  with the small box for the reason, the everfrost's depreciation
  schedule). Tarn and Ilex are talked-to leaders now rather than sight
  trainers, so the reading comes before the water.
- **2026-11-10 — side quests, round three (one per settlement; thirty-three
  in all), and the epilogue seen closer.** Each is a small act of reading
  for someone who cannot make themselves do it: the Saltwick oysterman's
  father's ground (the Survey's stake in the shallows says GONE; Surf to
  reach it), the Fernwick gardener's high-water stone (dry, twelve paces
  from the pond), the Reedmere turf cutter's worst crack (the spade stays
  out of the north edge), the Leirvik woman's pump-house plate (DISCHARGE
  LICENSED; what her husband wouldn't say), the Elvsund boy's kept book
  (the floods didn't stop; the book stopped), the Haukfell carrier's
  letter to the homestead above the slide (hand, not box; the box went
  down the hill), the island lamp-stringer's scratch on the hut wall (two
  hands in nine years; it isn't the ladder), the Coast inspector's
  carbon copy (under the clerk's tray, RECEIVED, not filed), and Moss's
  page forty-one from the ice-out book (NO ICE, underlined twice, blown
  into the yard). Flags `FLAG_SKALD_Q_*`, listed on the notebook's
  side-work page; several hook into existing readables (the plate, the
  gauge book) and residents (the grandson, the inspector, Moss). The
  seven epilogue vignettes each gained one more thing seen, not told:
  Harland scraping his own hull, Mrs Aske's roof with a man on it, the
  two boards on the ford gauge and Dell watching for a red flank, the
  slips under glass and the capped casing with a stake beside it, Marta's
  list with the player's name by a door never entered, the POLITOED in
  the hut doorway and the stone holding the player's sheet, the dredge
  padlocked and the office above the docks with or without its
  nameplate (`FLAG_SKALD_CH_HOLLIS_NAMED`).
- **2026-11-10 — route life.** Eleven more pairs, on the routes and in
  the side areas, three states each (`pairs2.py`): the angler and the
  cadet at the Route 1 bridge (one is the number you start with), two
  snare cadets in Mistwood (paid by the snare, paid by the pelt), the
  roadman and the survey hand at the culvert (a date in a notebook is
  worse than a shout), the angler and the old man at the ford (you'd
  swim it in August and read NORMAL), the two birders at the hide (the
  Survey takes the honest one), the woodcutter and apprentice in the
  coppice (the only count that's supposed to go down and come back), the
  old and young crew in the workings (the hole filling in from
  underneath), the geologist and the guide at the tarn (the ice is
  leaving; the slope is what it leaves behind), Cadet Liv and the old
  woman at the summit stakes (zero meant snow to the top, once), the
  girl and her mother on the warm beach (being right about it is not
  the same as wanting it), the dredge hand and the old lifeguard on the
  closed beach (you can't close a beach that's already gone). ~1,800
  words, 22 objects. Forty-seven conversations in the world now.
- **2026-11-10 — Rin, the unchosen, the Courier, two more residents.**
  Rin has six states across the arc now (a cadet comes for the SEEDOT in
  the rain; the CARVANHA bites the fence at the Board's bulletin; the
  NUMEL walks north on its own and is let; "I've stopped calling them the
  ones that wait. They're the ones that stay"), and each of the seven
  partners has a line after the hearing (the DODUO still watches the gate
  for somebody else; the NUMEL's dent in the turf closing over). The
  Skaldmere Courier's front page is pinned by the door of every Center
  (`Skald_EventScript_Courier`, one shared script, seven states: the lab
  cleared overnight, first FOREST in nine years, the ratio of page two to
  page four, WHICH YEAR?, the slide and the ribbon on one page, FORTY
  JOBS and THIRTY-ONE, ITEM SEVEN TOOK THE AFTERNOON). The Fernwick dredge
  house has its sister (Corps, provisional, two years; he fixes her
  spelling now) and the baker her granddaughter (a loaf is a day).
- **2026-11-10 — books, and the second readings.** Three books: Heron's
  own field guide on the lodging shelf (her honest early voice -- the
  WOOPER count as the gauge, the WINGULL warning that a count that does
  not change while the water does is a crowd, the dusk count's method, a
  DELIBIRD she declines to explain -- and the POLITOED page with the
  appendix she later corrects in pencil: "The appendix is wrong. The
  frogs were not. H."), the Corps handbook on the HQ counter (Section 9,
  WHEN THE WORK IS WRONG, is where every spine is broken), and the
  harbour almanac in the Saltwick hall (first frost, last ice, the
  herring walking backwards up the calendar, storms named for the boats
  they took). And the post-game's closing thread: after the hearing Ilex
  asks for **the second readings** -- the seven stakes read again, after
  ("a first reading is a claim; a second is a record"). Each stake adds
  its after-line (Reedmere up four and no trend; two frogs through the
  grates; Leirvik grey, STRESSED not COLLAPSING; two boards on the ford
  gauge and REPORTED, which is what the Survey does with hope; Haukfell
  SHIFTED with a date on both sides; the padlock on the dredge as data;
  forty-two in the marsh, in your hand). All seven back to Ilex earns the
  Survey's red cloth (`ITEM_RED_SCARF`): "tie it to something that needs
  reading." The notebook counts them (`FLAG_SKALD_SECOND_*`).
- **2026-11-10 — the spine fought through; six more papers; the lab after;
  the stringer's name.** The probe hook takes a party now (`--party`, a
  level-100 partner with ICE BEAM forced into slot 1) and two vars
  (`--var`), so for the first time the whole certification ladder was
  *played* headlessly and every flag read back: eight leaders (exam,
  battle, badge, field-craft), five signings (the Watershed one only after
  marking the sight trainer TRYGVE defeated -- his line of sight crosses
  the bank where Ilex stands, which is a probe lesson, not a bug), Heron's
  confession through the Hollis choice, her battle and the final survey,
  and Cordelia's boardroom (`tools/skald/spine.sh`). Six more documents:
  the depot's weigh book (the Foundation rate is the only straight line),
  the Station's three scenarios and the pencilled fourth (WHAT HAPPENED),
  the boatyard's order book (REPAIRS ONLY, for now), the chandler's credit
  ledger (two lines marked PAID that nobody paid), Grette's net gauge (a
  size larger than the fish), the union's membership roll (whoever the sea
  has taken something from). The erased lab has its after-the-hearing
  state; the adit its pump plate; Rin's hut its register. The stringer is
  **INGER** (MAREN was already Harland's household; SOLVEIG a Cliffs
  trainer). ~74,900 hand-written words, 344 readable events.
- **2026-11-10 — household papers.** One more readable in twenty-three
  houses, each with a before-and-after-the-hearing state: three wage slips
  and one crest; the clerk's framed lease (the rent went up; he stayed);
  the line rota with TINS underlined; a cousin's letter from the Coast and
  a reply that stops at the pond; a filing-cabinet requisition DENIED then
  APPROVED; the old man's pond book with a third column, WHO READ IT;
  Hedda's scale chart with a fifth square left blank; the relief sheet
  carbon and, under it, the petition; an insurer's definition of FLOOD;
  the relocation grant marked VOID PENDING SURVEY with a house drawn on
  the back, legs braced; the allocation notice with "who" written three
  times and then six names; the meter book nobody read and then everyone
  did; the stall licence's box that says FAIR; the gauge round sheet's
  "told you"; the six names over the table; the catch diary's downstream
  column with FIRST SINCE; the reed tally's twenty-three in a boy's hand;
  Aud's bundle of envelopes and one unopened; the ferry timetable's
  circled sailing; Timo's lines and the other answer; the neighbour's
  window book with the 02:10 entry; Piet's list with the fog counted in
  days without; the Flats' rent card. ~2,200 words.
- **2026-11-10 — side quests, round four (forty-two in all), and the last
  mid-game lines.** Nine more, hooked into residents who had none: the
  ferry captain's LAPRAS notches on the rotting pier post (eleven, four,
  one), the Fernwick scientist's sample jar nine days on the kerb, the
  Leirvik fisher's line of dead fish past the big stone (a reed stake,
  because there was no cloth), the Elvsund pond fisher's red-lead depth
  mark under the Board's white (the water below both), the Haukfell
  homesteader's lambing-field crack (water in the bottom, not ice; not
  even cold), Ketil's sill two planks under the shore (set a hand above
  his father's frost line), the gull man's sixty-one WINGULL on the wall
  built to kill the beach, Einar's first TENTACOOL dated in a child's
  chalk with one letter backwards, and the reed cutter's heron, sat. The
  River Hall's five and the Station's reception and technician got their
  mid-game lines, so every named resident now speaks in three states.
  ~1,600 words; the notebook's side-work page lists forty-two.
- **2026-11-10 — a third pair in every settlement (fifty-six
  conversations).** The Saltwick councillor and schoolteacher (a thing
  done at two in the morning; "it's already up"), the Fernwick cadet and
  old woman (count the stations with a light on; the saying why), the
  Reedmere fisher and boy at the south landing (clean is a colour, safe
  is a test; a ranger, a jar and a clock), the Leirvik laundress and
  bargeman (brown sheets hung in the hall behind the blankets; nobody
  asked the laundress), the Elvsund beekeeper and student (write down the
  honey, then the trend), the Haukfell mother and boy at the thaw ponds
  (they're the ground letting go; hold my hand on the soft bit), the
  island netman and old man on the shore (three steps; I've decided to
  prefer true), the Coast stallholder and buyer (one length means one
  year of fish left; I pack fish, I'm learning to read them), the
  Station modeller and cadet (after isn't in the scenario, that's a
  scope; what happened is a technical term now). ~1,400 words.
- **2026-11-10 — the art pass (the user asked whether the "cool art" of
  other hacks was within reach; this is the answer).** The Rayquaza title
  screen is gone: the Pokémon wordmark now sits over an "ANTHROPOCENE"
  banner and a night coast — Delibird Isle on the horizon with its snowy
  summit and a harbour light that breathes, a Delibird and a Surveyor's
  red-cloth stake on the near headland, stars, ripples, and an aurora with
  its reflection on the sea, drifting and shimmering on the layer that used
  to carry Emerald's clouds (`tools/skald/title_art.py`; all layers
  generated, tile-quantized into five scene palettes, verified by
  screenshot at three moments). Nine cast members got their own overworld
  sprites on two faction palettes — Survey olive with the red marker cloth,
  Mereholt teal and charcoal — so ILEX is one person across six maps instead
  of three stock sprites, HERON reads as a field scientist in an oilskin,
  CORDELIA as a silver-haired chair with a teal scarf, HOLLIS in Mereholt
  teal, INGER in red, and the leaders who shared a sprite (MIRREN/BREEN,
  SLUICE/VALE) no longer do (`tools/skald/cast_sprites.py`; all nine
  walked to and screenshotted in their maps). The dialogue box border went
  from Emerald teal to ice and slate and the default menu frame was redrawn
  to match (`tools/skald/ui_frames.py`). Then the battle screen caught up:
  the eight leaders and Cordelia fight on their own palettes over stock
  pictures (`tools/skald/leader_pics.py`) -- olive and red hakama for the
  Survey's old examiners, ILEX as a ranger in Survey olive, HARLAND in a
  navy oilskin, VANE grey-suited, CORDELIA in charcoal and silver -- so the
  person in the battle matches the person on the map; checked by tracing
  the Mirren exam frame by frame. And the PokéNav, opened for the first
  time in the emulator, turned out to have been showing garbage stripes all
  along: the archipelago drawn for it earlier was saved as a 16-bit tilemap
  for an 8-bit affine layer. Converted; town markers at Fernwick, Elvsund,
  the Coast and Delibird; the three missing sections placed; "HOENN MAP"
  relettered SKALDMERE in the stock pixel font; and fly now reaches every
  Centre town once visited instead of only Saltwick. Deferred: a northern
  retint of the outdoor tileset palettes, building exteriors, custom trainer
  classes.
- **2026-11-10 — dex round two and the Survey boards.** Eighty more
  Pokédex entries, for every species a Skaldmere trainer carries but the
  wild tables don't hold (the bore-hole MAGNETON, the STEELIX that was an
  ONIX when the Corridor was whole, TARN's KINGDRA above a weir built not
  to ask whether it could go back down, the POLITOED dusk count from dozens
  to one): 161 species now read as Skaldmere. Then forty-four Survey
  boards, two in every outdoor map on tiles scouted for a clear stand-tile
  south of a solid one, each a field note in the Survey's register and
  grounded in §06's per-zone keystone, indicator read and mask: the WOOPER
  counted at the culvert and not the pool, the SHROOMISH as the Mistwood's
  air gauge, three frogs as three gauges on the Reedmere turf, the
  CROAGUNK tested to test the Floodbasin's water, the slope readings beside
  the bore in hands downslope, the summit's thirty-one snow patches become
  thirteen, the Fernwick pond's twenty-eight pairs with the warning under
  the number. Six boards read in the emulator from their stand tiles.
  `tools/skald/wordcount.py` is now the counter: 85,093 hand-written
  words (~115,700 with the rematch tiers). ~4,700 words.
- **2026-11-10 — books, round two.** Nine multi-page readables on
  scouted shelf tiles, each a document the world would actually hold: the
  Council's REGISTER OF OBJECTIONS at the hearing (nine entries on the
  dredging consent, each with its disposal, from "counts are not the
  Council's to assess" to "out of scope"; a tenth after the finale, and
  "ten" in the fisher's hand), Heron's marsh notebook in the hut (the real
  numbers first, then the sitting with them; the two curves she modelled;
  "I feel accurate. That will do."), the Mahogany recovery model in the
  Survey's archive with ILEX's margins ("figure 3 is where the Foundation
  lives"; "we stake, we do not model, this is why"), the Foundation's
  annual report in Hollis's office (the Officer photographed smiling at a
  stake that is the Survey's; after the finale, "ninth edition. Withdrawn."
  in her hand), RED CLOTH, the Survey's method in nine rules on the Corps
  counter, the Station's forty-year register (first frost walking down the
  column, the tarn that did not fully come), the lodging's visitors' book
  (the provisional who wrote "not at all, not this year"; the hand from the
  notebook's margins the night before the marsh), the Courier bound (the
  years before Wren came, down to the correction about whose WOOPER figure
  it was), and the Board's water-rights ledger ("when the sum is larger
  than the river, the river decides"). Three read in the emulator. 87,257
  hand-written words. ~2,200 words.
- **2026-11-10 — the fourth state: 203 post-epilogue lines.** Every named
  resident who had no `FLAG_SKALDMERE_EPILOGUE_DONE` branch now has one,
  inserted straight after `faceplayer`, so the post-game is a settled
  "what now" instead of the hearing's week repeated: BRAM's board with
  dates three weeks out, TOBIN counted in front of the inspector, NILS
  looking up THRESHOLD ("the step of a door"), the Fernwick boy counting
  the pond before school, the Elvsund race that ran all spring and the
  flour too good to sell, the HAUKFELL boy's hand in the beaver pool ("not
  soft"), HOLLIS checking the injunction the way she used to check the
  renewals, the dredge still parked and counted ("still one"), the Union
  that couldn't guess the vote, the lifeguard's two-arrow sign, the
  Institute's one logbook. Quest givers speak theirs only once their quest
  is done, so no side path is blocked. Three scratchpad scripts
  (epilogue1-3.py), all 103 scripts compile, two lines checked in the
  emulator with the flag forced. 93,285 hand-written words. ~6,000 words.
- **2026-11-10 — one hundred thousand.** The last six thousand: thirteen
  overheard pairs in the side maps (the marsh edge where the alder stopped
  at one pace, the cut's mechanic who has stood in the water, the saltmarsh
  samphire pickers, the sluice gate on the marsh's calendar, the summit
  cairn, the breakwater's dredge hand photographing a pink CORSOLA, the
  bridge rail as a hide) and seven more in the towns (the quay coopers
  moving what's there, the Fernwick post with the thin letter, the turf
  stackers, the levee's day, the cheesemaker's cows, the net menders' tie
  it loose, the dry well's line); side quests round five, eight more
  (PELL's sealed crate 417, the fountain's small plate ON LOAN, the
  monitor's twelve jars, the Survey's red flow mark the pour stopped a
  finger short of, the voucher box's two hundred and twelve counterfoils,
  DELL's shoebox filed ANECDOTAL, the old house's step a hand down on the
  uphill side, the quay scale certified the year the numbers turned); a
  third Survey board in every outdoor map and a fourth in eleven, then
  six more; seven documents in the thin interiors (TARN's bench book, the
  homestead's seed tin, RIN's kit list with courage added later, SKELD's
  snare book and its third column, the depot's grading card with HILL
  priced below two, VANE's weather glass, the gate hut's sheet); and a
  page two for all seven of INGER's front pages. Verified in the
  emulator: a find, a pair, a board, the Courier. The first count over
  the line (100,080) included words in the two retired, unreachable maps
  (`ParcelStation`, `ParcelBridge`), where four boards and two pairs had
  been placed by mistake and where ~2,000 older words had always sat.
  Those were moved to the Climate Station grounds and Route 1, the
  counter now excludes retired maps, and the shortfall was made up in the
  live maps: twelve more boards, ten more pairs (two of the round's pairs
  had silently collided with older pair names and were placed again under
  new ones), seven notices in the Centres, the Hall, the offices and the
  HQ, then six more boards and the two recovered pairs. **100,187
  hand-written words, all reachable** (`tools/skald/wordcount.py`;
  ~131,000 with the rematch tiers). Audit: 102 maps, the 2 known
  warnings. The §13 target is met.
- **2026-11-10 — titles.** The examiners fight under their own trainer
  classes instead of EXPERT: INSTRUCTOR TARN, EXAMINER MIRREN, RELIEF
  CHIEF BREEN, KEEPER SLUICE, WARDEN VALE, CAPTAIN HARLAND (the bible's
  "Captain Harland" at last), DIRECTOR VANE, SURVEYOR ILEX, and CHAIR for
  Cordelia; nine classes with their own payouts and balls, on all
  seventeen leader entries including rematches ("CAPTAIN HARLAND sent
  out Gyarados!" in the emulator). The Pokédex now says SKALD DEX and
  SKALDMERE region's POKéDEX, and the diploma SKALDMERE.
- **2026-11-10 — the SKALD DEX exists.** Checking the start menu for the
  dex label found no POKéDEX entry: `FLAG_SYS_POKEDEX_GET` had never
  been set, so the 161 Skaldmere entries were unreachable. Hale's brief
  now sets it with the notebook, and opening the notebook sets it too for
  older saves. Then the regional dex itself: the stock Hoenn list
  (`HOENN_DEX_*`, `sHoennToNationalOrder`) is regenerated by
  `tools/skald/regional_dex.py` as the 160 species that live in
  Skaldmere, ordered south to north by first appearance (wild tables,
  then trainers by zone) with evolution families together: LOTAD to
  TOGEKISS. The national dex stays off; nothing in the code indexes a
  specific regional number. Same day, the regression after all the
  passes: sweep 252 OK / 0 BAD, spine all fifteen flags.
- **2026-11-10 — the towns stop being Hoenn's kits.** Rendering every
  town straight from its tile data showed what the player sees: Saltwick
  was FireRed's Vermilion with orange Kanto roofs, Fernwick was Rustboro,
  Elvsund Mauville, Haukfell Fallarbor, Mereholt Slateport, and General's
  red-roofed, yellow-walled cottage stood in all of them. One pass over
  the palette entries (`tools/skald/kit_restyle.py`): slate roofs across
  the region, falu-red timber in the two fishing towns, ochre in the
  Survey's town, white render on the river and for every cottage, the
  Climate Station in white and slate. The Pokémon Center keeps its red
  roof (duplicated tiles on the water palette's free entries) and the
  Mart its blue, so wayfinding is untouched. Checked in the emulator in
  eight towns. The renderer (`pal_tool.py`) that made this safe is in the
  tree; the outdoor colour grade it now makes possible is the next pass.
- **2026-11-10 — the northern grade.** The "same hand across fifteen
  tilesets" problem that had deferred a cooler palette became one
  function (`tools/skald/grade.py`) over all 88 outdoor palettes:
  blue-leaning greens, cooler sand and ash, saturation down a notch,
  slate in the shadows. Three candidates were compared on side-by-side
  renders of Fernwick, Saltwick, Haukfell and Reedmere before one was
  applied; checked in the emulator in the same eight towns. The ungraded
  palettes stay in the tree as the base, so the grade can be retuned or
  removed in one run.
- **2026-11-10 — the player wears the Survey's kit.** Six palettes
  (`tools/skald/player_kit.py`), no new pixels: the Hoenn green on the
  headband, bandana and pack is the Survey's red marker cloth, the red
  shirt is the Survey's olive, so the cadet matches the Surveyors they
  walk beside. Checked walking, in the battle intro and on the trainer
  card. A third, "they" avatar stays out of reach: it would need a third
  gender in the save block, which nothing in the engine supports; the
  text already says they.
- **2026-11-10 — no Hoenn film on boot.** Every launch still ran
  Emerald's intro (BIRCH in the grass, the bike, the three legends)
  between the pret x RHH splash and our title screen unless the player
  pressed START. Both handoffs into it now go to the title. Boot to title
  is about ten seconds with no input; the splash stays as the expansion's
  credit.
- **2026-11-10 — the first real playthrough finds a soft-lock.** The
  harness can now play the game in savestate segments from a real new
  game (`walktest.py --save-state/--load-state`, `--fight`, `GOTO`,
  `TALK`; see the verify skill). Ferry, Saltwick, RIN and the SEEDOT,
  Route 1 with its trainers and the poacher bridge, Mistwood's three
  snares and SKELD's HM01 all play as written. Then the deadfall: in the
  expansion's Gen 9 learnsets none of the seven Meadow partners could
  learn CUT, while SKELD says "Teach it to your partner" -- a player who
  had caught nothing (ZIGZAGOON is the only local wild CUT user) was
  stuck in the forest. `tools/skald/partner_hms.py` adds CUT to the
  seven partner lines -- and, from the HM audit the finding prompted,
  ROCK SMASH and STRENGTH too, since the Floodbasin's three rocks are the
  only way north and a row of rocks and boulders sits below VALE's gate;
  the other five HMs open side areas only. Then, one step later, the
  second soft-lock behind the first: with CUT taught, pressing A on the
  deadfall still said only "This tree looks like it can be CUT down!",
  because Emerald's tree script refuses CUT without the first badge, and
  TARN's exam is on the far side of the tree. The party menu had already
  been freed of badge checks (`OW_FIELD_MOVES_NEED_BADGES` is FALSE, with
  a comment saying exactly this); the three field scripts -- the tree,
  the breakable rock, the boulder -- had not. They are now. Every player
  would have been stuck in Mistwood. The spine never saw this because it spawns past
  the gate; the sweep never saw it because the tree is a cuttable object,
  not a warp. This is what the honest "not played end to end" bullet in
  the handoff was for.

