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
