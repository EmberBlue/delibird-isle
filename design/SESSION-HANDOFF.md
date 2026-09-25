# Session handoff — read this first, then delete the staleness

> **Purpose:** the *live state* a new session can't get from the durable docs.
> The durable docs carry the structure; this carries the moment. Last updated
> 2026-09-25, end of the session that set the full-game targets (§13:
> 100k+ words, 1,000+ trainers, 100+ maps), built the map pipeline
> (`tools/skald/`), and shipped Saltwick — the dock town rebuilt by hand on
> the FireRed harbour tileset with 8 new interiors and ~4,000 words.
> **If this note disagrees with reality, reality wins — update or delete it.**

## The 60-second orientation

You are continuing **delibird-isle** (working title *Skaldmere*), an
ecology-first Pokémon Emerald romhack (pokeemerald-expansion). Read order:

1. `CLAUDE.md` (auto-loaded) — build/test/screenshot commands + gotchas.
2. `design/README.md` → `design/00-canon-lock.md` → the bible (§01–§12).
3. **`design/12-implementation.md`** — the "what exists in code" record and
   the hard-won build gotchas. Trust it over this note for anything
   structural, **except** its "map graph" subsection, which still describes
   the original 8–11 maps and an 864-trainer ceiling — both long stale (see
   "What's playable" below for the real numbers; the per-zone history is in
   the appendix at the bottom of this file until §12 absorbs it).
4. The git log on **`claude/emerald-romhack-planning-T2LgQ`** (the working
   branch). Commit messages carry the reasoning.

**First command of every session:** `git branch --show-current`. Web
containers re-provision onto `claude/wizardly-noether-znwom5` (the Trainer
Builder branch — see below). If you are there, run
`git fetch origin claude/emerald-romhack-planning-T2LgQ && git checkout claude/emerald-romhack-planning-T2LgQ`
before touching anything. This bit us three times in one session.

## What's playable right now

**The main story is complete, end to end.** Prologue (ferry) → forest → basin
→ river → highlands → Delibird Isle (interlude) → Industrial Coast → the Last
Corridor climax (Dr. Heron) → Hale's summons → the marsh → the coast aide →
the **Cordelia boardroom coda** (the last main-line beat) → a post-finale
reaction pass over the cast (Rin, Hale, Ilex, Hollis, Harland, Dorsey, the
Delibird elder). The CI run on the branch tip is **green** (build + the
Skaldmere test families).

- **21 maps**: 12 outdoor zones (Isle/dock town, Bridge, Station, Wetlands,
  Corridor, Floodbasin, River, Highlands, Delibird, Coast, Marsh, Weather)
  + 9 interiors (ferry cabin, lodging, lab, Pokémon Center, **Station Hall**,
  **two Isle houses**, the **Mereholt boardroom**, the Crystal Cavern).
- **30 Skald trainers**: 7 numbered certification leaders (GYM1–6, GYM8),
  the 4 Weather-station leaders + the Director, 4 Mereholt gate battles
  (Station / Isle / Cavern / Marsh), Heron, Cordelia, and the route trainers.
  Early route trainers are still thin (1–2 mons); the leaders run 3–4.
- **6 HM traversal gates** (Cut, Rock Smash, Strength, Surf, Waterfall,
  Flash) are real obstacles; HM sources exist for all six.
- **Region map + Fly** work for every custom MAPSEC (13 rows in
  `src/region_map.c` `sMapHealLocations`; Delibird/Coast/Weather have their
  own heal spots, the mainland zones fly to the dock town).
- **Cheat start**: debug menu (`R+START`) → Scripts → **Script 1** gives all
  badges/certs, the PokéNav, HM01–08, ¥100k, and a field crew with the HMs
  pre-learnt: Dodrio (Fly), Linoone (Cut/Rock Smash/Strength/Flash),
  Azumarill (Surf/Waterfall/Dive). `data/scripts/debug.inc`.
- Systems: survey classifier (5 certifications, 4 states seen), DNS,
  wild tables on every route, shops, healing, item pickups.
- Two project skills: `.claude/skills/skald-verify` (freeze/warp/tile
  audits) and `.claude/skills/skald-add-content` (map/NPC/trainer recipe).

## THE thing to know: the user's verdict on the maps

The user has played the build and the feedback is blunt and correct: the
world reads as *"a trick room of wide boring areas that all look the same."*
Every outdoor zone except Delibird is a generated `build_*.py` field on the
same `General + leob_dewford` tileset pair, far too large for its content
(Isle 83×60, River 84×44, Floodbasin 72×44, Corridor 70×20, Highlands 64×56,
Coast 64×44, Marsh 56×48, Station 50×40, Wetlands 50×44, Weather 48×40).
Generated fills are **no longer acceptable** — the user asked for manual
design, and the rebuild must be visible in screenshots, not just green in CI.

**The reference workflow is the Delibird village**
(`tools/maptools/build_delibird.py`): a 30×26 ASCII drawing where every
character is one tile and scripted-entity anchors are letters; the script
asserts anchors unique/walkable, writes `map.bin`, and prints the
coordinates you flow into `map.json` and the scripts. Read that file before
drawing anything else. Zone identity comes from tileset pairing too —
Delibird is on `JohtoGeneral + AzaleaTown`; the other pairings wired in
`src/data/tilesets/headers.h` are unused and waiting. The user can also open
any map in Porymap locally (same file format) and push the result back.

**The pipeline (use it, don't rebuild it):** `tools/skald/newmap.py` scaffolds
and registers a map; `tools/skald/draw.py <canvas.txt>` builds `map.bin` from
an ASCII drawing + a legend (stamps for buildings, anchors for scripted
entities, door coordinates printed); `tools/skald/audit.py` is the whole
skald-verify playbook automated (run it before every commit);
`tools/skald/newtrainer.py` allocates ids; `tools/skald/tileascii.py` shows
any tile as text. Worked example: `data/layouts/ParcelIsle/canvas.txt`.

**Done: Saltwick (Dock Town)** — 44×36 on `frp_general + frp_vermilion_city`,
13 doors, 8 new interiors, 30 residents in three story states, 3 side quests,
harbour fishing. **Next, one zone per pass, same recipe:**
1. **Saltmarsh routes** out of Saltwick: the preserve gate north (fence at
   (20–22,2)) is the hook for a coastal route; the bridge east stays.
2. The Station and its route (`ParcelStation` 50×40 → a real station village).
3. Wetlands/Corridor, then Coast (`frp_island_harbor`), Highlands (rock),
   forest zones (`frp_viridian_forest`).
Each zone: settlement + routes + interiors + 10–20 residents × 3 states +
20–25 trainers + side quests. Trainers are the biggest gap (30 of 1,000).

Model note: Fable 5 was available and did the prose this session. The old
"hybrid" rule (structure on any model, prose strings left as
`// PROSE-TBD: <intent>`) still applies whenever it isn't.

## Known-open (honest list)

- **Endgame chain not playtested in an emulator** (Station → Hale → Marsh →
  Coast aide → boardroom → reactions). Build+test clean, every coord trigger
  audited for re-fire, but nobody has walked it. Do this with Script 1 before
  more endgame edits; the `trainerbattle_single`-from-`TRAINER_TYPE_NONE`
  pattern (Heron, Director, Cordelia) is the thing to confirm.
- Early trainers thin; `design/trainers-guide.md` has the recipe.
- Vanilla Rayquaza title screen; "they" pronouns not wired; `Parcel*` map
  names still placeholders (§01 naming pass); cave/snow tilesets deferred.
- §12 "map graph" / trainer-ceiling subsection needs reconciling with the
  numbers above.

## The loop (so you don't relearn it)

Build `make tools && make -j$(nproc) modern`. Test `make check DEBUG=0
TESTS="<prefix>"` (prefixes: Survey, Cert, Meadow, DNS, Floodbasin; baseline
4 inherited battle-test fails, 0 ours). After editing any `map.bin`,
`map.json`, `.pory` or tileset binary:
`rm build/modern-debug/data/{maps,map_events,event_scripts}.o build/modern-debug/src/tilesets.o`
or the INCBINs go stale. See it: `bash tools/screenshot/setup.sh` once, then
`tools/screenshot/capture.py --frames N --press KEY@FRAME:HOLD` (new game:
`START@4500 A@4700 A@4900`, then **mash B, not A**, every ~130 frames; use
savestates to reach deep maps). `grep -c "TEMP TEST" src/new_game.c` must
be 0 before commit.

## Top gotchas from this session (full list in §12)

- **Coord triggers must set their guard var on *every* exit path**, including
  early `end`s — otherwise the trigger re-fires every frame and the game
  freezes in place. This was the Wetlands poison trigger *and* the Corridor
  culvert. `skald-verify` audits it.
- **`MAX_TRAINERS_COUNT` is pinned at 2048 (raised once, deliberately, 2026-09-25; old saves died) and must not move again**:
  `SYSTEM_FLAGS = TRAINER_FLAGS_START + MAX_TRAINERS_COUNT`, so changing it
  shifts every system flag and corrupts existing saves (that was the
  "freezes in some places" bug). `TRAINERS_COUNT` can grow to 2047 freely.
- **Metatile layering:** cells 0–3 → BG3, 4–7 → BG2 (under sprites), 8–11 →
  BG1 (**covers** sprites). A walkable tile with art in cells 8–11 hides the
  player (the bridge-deck bug). `gTileset_General` binds
  `data/tilesets/primary/leob_general/` — `primary/general/` is a ghost
  directory; patching it does nothing.
- **Free-flag check:** grep the existing `FLAG_UNUSED_0x…` name outside
  `flags.h` before claiming it — vanilla scripts still reference low ones
  (0x20–0x23), and 0x1AC is Deoxys. Claimed this session: 0x68, 0xE9,
  0x1AA, 0x1AB, 0x1DA.
- Fly to a MAPSEC with no `sMapHealLocations` row lands in Littleroot's
  bedroom (map 0,0). Add the row when you add a MAPSEC.
- Spawning directly via `WarpToTruck` for a test leaves the avatar invisible
  until the first warp — cosmetic, not a bug.
- If git credentials vanish mid-session, the GitHub MCP `push_files` can
  carry text files (not binaries); regenerate `map.bin` from its builder on
  the other side instead of shipping it. Never `rebase --skip` your way out —
  that silently dropped whole commits once (recovered from the reflog).

## Trainer Builder (the "shiny trainers app")

Lives on branch `claude/wizardly-noether-znwom5` under `tools/trainer-builder/`
(`trainer-builder.html` is the single-file build; `build.py` regenerates it
from `src/`). It was **never hosted anywhere** — no Pages workflow, no
artifact; the user downloads the HTML from the private repo and opens it
locally. Publish only if asked.

## Immediate menu (the user picks)

**Read `design/13-full-game-plan.md` first** — the audit (15k words of
dialogue, 30 trainers, ~4 h of content) and the phased plan to a 15–20 h game.
The menu below is that plan's phases 0 and 1.

1. **Dock Town rebuilt by hand** (ASCII drawing, town scale, harbour identity,
   enterable houses) — the stated next step.
2. **Endgame playtest** in the emulator via Script 1, fix what breaks.
3. **Trainer depth pass** for the early route trainers.
4. **§12 reconciliation** + the §01 naming pass (real town/zone names).

---

## Appendix — per-zone build history (kept until §12 absorbs it)

> Older bullets below describe HMs as *reframed ranger tools* ("Lamp"/"Winch")
> and the gyms/HMs as an *open fork*. That is no longer the design: the user
> chose **traditional gyms + HMs**, it is built and shipped (§00's amended
> "No gyms" lock). The ranger-tool bullets are historical record only.

- **Traditional gyms + HMs — BUILT (the fork, resolved).** The user chose real
  gyms and real HMs over the ranger-tools reframe. Now live:
  - **12-leader ladder** on the engine's 8-badge + HM spine, *reframed* as
    Ranger Certifications + Mereholt clearances (§00 amended): 8 certification
    leaders (Tarn/Mirren/Breen/Sluice/Vale/Harland/Vane/Ilex) each grant the HM
    they authorize, + 4 clearance gatekeepers (Ward/Moore/Kelda/Aune) on the
    water. Parties in `trainers.party`; IDs 875–885.
  - **All six field moves wired as real traversal**: **Cut** deadfall sealing
    the Corridor's west road (forces Tarn's HM01); **Rock Smash** rubble
    sealing the Floodbasin→River channel (forces Breen's HM06); **Flash**
    (Cavern `requires_flash` + the Delibird summit mouth gates on `MOVE_FLASH`);
    **Strength** (the Cavern "winch" is now a real `EventScript_StrengthBoulder`
    over an everfrost cache); **Surf** (a surfable thaw-pond + reward islet in
    the Highlands, HM03 from Vale right there); **Waterfall** (a real climb on
    the Highlands headwall, vanilla Route124 tiles, PP Max at the crest).
    Each chokepoint was decoded from `map.bin` to prove a full seal + a reachable
    HM source first — no soft-locks. Hale's "we don't cut, we don't smash"
    briefing reconciled to license the field work while keeping the ethos.
  - **Custom Skaldmere archipelago region map** + 13 per-zone MAPSECs, and a
    **Dock Town ferry hub** (a clean destination menu, routes open by cert).
- **The Cordelia boardroom coda** — `ParcelBoardroom` off the Coast quay;
  an aide summons the player post-testimony; Cordelia's Lady-class
  photo-neutral roster (`TRAINER_SKALD_CORDELIA` 886); Hollis's no-second-cup
  closer. `FLAG_SKALDMERE_CORDELIA_DONE` 0x1AA. Followed by the post-finale
  reaction pass (Dorsey back at the landing, Harland, Ilex, Rin, Hollis×2,
  the Delibird elder + festival texture, `FLAG_SKALD_DEL_GIFT_SQUARE` 0x1AB).
- **The Ranger-tools + the Crystal Cavern** (historical). `ParcelCavern`
  (40×36, §09's Crystal Cavern): an icy grotto under the Delibird Isle summit
  with a Strength boulder clearing a fallen ice-jam to a reward (NeverMeltIce
  + 2 Rare Candy), a quiet §09 beat, and rarer Ice encounters
  (Snorunt/Sneasel/Glalie, Walrein/Lapras on water). Flags 0x45–0x47. The
  cave "walls" are forest tiles (a true cave/snow tileset is deferred art).
- **The weather-division gauntlet.** `ParcelWeather` (48×40) — the Mereholt
  Climate Station: four climatologists who each command a weather (RAIN
  Pelipper/Ludicolo/Kingdra · SUN Ninetales/Tropius/Camerupt · SAND
  Cacturne/Flygon/Tyranitar · ICE Sealeo/Glalie/Walrein) + the DIRECTOR (Vane)
  who commands all four. Clear the four (sight battles), the Director gates on
  all four defeated, beat him for the four weather rocks. Reached by the
  dock-town captain's **third ferry route** (gated on the Coastal cert).
  Trainers 870–874; flags 0x43–0x44.
- **Chapter 7 — The Last Corridor (zone 8), THE CLIMAX.** `ParcelMarsh`
  (56×48): the dying keystone freshwater marsh, warped in from the Station
  (Hale walks you to the treeline, gated on the Coastal cert). The Poliwag
  keystone at the stream mouth; four tells in `VAR_SKALDMERE_CH7_EVIDENCE`.
  **Dr. Heron** found alive in exile, the full reveal (coerced via the double
  leash; Hollis the hand), a grounded battle that IS the conversation
  (`TRAINER_SKALD_HERON` 869 — Politoed/Quagsire/Pelipper), "finish it," the
  survey as the final credential (`SkaldmereClassifyCorridor` → COLLAPSING,
  tested), the choice to testify with maximum collateral, clear-eyed grief.
  Flags 0x3F–0x42 + var 0x40A1.
- **Chapter 6 — the Industrial Coast (zone 7).** `ParcelCoast` (64×44): a
  working harbour (cannery + Mereholt office, the overfished sea to the east,
  Harland's boat at the quay), reached by **ferry** (second route, gated
  behind `FLAG_SKALDMERE_DELIBIRD_ARRIVAL`). Survey reads **COLLAPSING**
  (`SkaldmereClassifyCoast`, tested — a live trophic cascade). Beats: **the
  collaboration reveal** (the Board's "sustainable harvest" model is Dr.
  Heron's methods in her own hand) and **Harland's arc home**; Hollis Aune's
  kindest threat; Hale signs the **Coastal Certification**. Flags 0x3A–0x3E,
  var 0x409D.
- **Trainers for zones 4–6:** `TRAINER_SKALD_ANGLER` (River),
  `TRAINER_SKALD_SURVEYOR` (Highlands), `TRAINER_SKALD_REVELER` (Delibird
  Isle). IDs 866–868. Parties omit moves (trainerproc auto-fills level-up
  moves — always learnset-valid).
- **Chapter 5 — Delibird Isle (zone 6), the interlude** — NOT a cert zone.
  §09 adapted to a playable Holiday Village where the give-vs-take thesis is
  a literal **gift economy**. Reached by **ferry** (gated on
  `FLAG_SKALDMERE_HIGHLAND_CERT`; `warp` both ways). Beats: the elder's
  storm-relief **delivery quest** → a free **Delibird** + a Ranger
  commendation; a gift NPC; the thaw made playable; thaw signs; the Foundation
  festival banner. Encounters: Delibird/Stantler/Snorunt/Sneasel + Lapras on
  the surf. Flags 0x31–0x35, 0x37–0x39. (Now hand-drawn at 30×26 on
  `JohtoGeneral + AzaleaTown`; the gift square and warming hut exist.)
  **GOTCHA:** `0x36` is TestTown's — low `FLAG_UNUSED` must be grep-verified.
- **Chapter 4 — the Highlands (zone 5).** The tonal turn: the first zone that
  reads **SHIFTED** (`SkaldmereClassifyHighlands`, tested) — witness, not
  repair. `ParcelHighlands` (64×56), connected **up** from the River. Six
  tells feed `VAR_SKALDMERE_CH4_EVIDENCE`; **Ilex** measures the shrinking
  cold band, **Hollis Aune** is the warm sincere mask, **Hale signs the
  Highland Certification at the summit**. Flags 0x2E–0x30, var 0x409B.
- **Chapter 3 — the River & Farmland (zone 4).** `ParcelRiver` (84×44)
  connects **up** from the Floodbasin. Survey reads **STRESSED**
  (`SkaldmereClassifyRiver`, tested). Four tells + the Water-Board mask +
  Harland feed `VAR_SKALDMERE_CH3_EVIDENCE`; **Ilex signs the Watershed
  Certification in the field**. Flags 0x2B–0x2D, var 0x4091. The
  riparian-engineer keystone species stays OPEN (§06).
- **Chapters 0–2** (prologue, forest certification, the Floodbasin): see
  §12 "Skaldmere content built" — that part of §12 is accurate.
