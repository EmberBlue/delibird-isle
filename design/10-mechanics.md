# 10 — Mechanics

> Status: **FIRMED** (the core loop, the survey verb, the notebook, the
> certification ladder, and the state-transition model are firm — they follow
> necessarily from locked canon: the survey progression (§00), the four
> survey-states (§06), and the notebook artifact (§04). Items explicitly
> marked *PROPOSAL* below carry real design latitude and are flagged for a
> decision.) This is the document that turns "ecology-first" (§00, §06) into
> a verb the player performs, without gutting the Pokémon loop §00 protects.

## Reading guide

Three principles govern every mechanic here:

1. **Augment the loop, don't replace it.** §00 locks a *robust* catching /
   breeding / battling game. Surveying sits **on top** of the standard
   pokeemerald-expansion loop — it reframes what encounters *mean*, it is the
   progression spine, and it is the player's only real power. It does not
   delete the parts players expect.
2. **The survey is reading, and reading is the gameplay.** The skill the
   player develops is *interpretation* — naming a place's ecological state and
   the harm acting on it (§06). Combat is a tool the world occasionally
   demands; the survey is the thing the game is actually *about.*
3. **Every byte is contested.** The base ROM already uses ~87 % of EWRAM and
   IWRAM (§12). Each system below carries a RAM estimate. The discipline is a
   feature: small, packed save state and reused UI buffers keep the ambition
   shippable.

## The core loop (FIRMED)

§00's loop, stated mechanically: **observe → respond → document → act**, with
the standard Pokémon verbs threaded through it.

| Beat | What the player does | Standard-loop tie-in |
|------|----------------------|----------------------|
| **Observe** | Run a *survey* at a survey point: read the indicator guilds, abundance shape, condition, and disturbance signs (§06). | The survey surfaces the same wild-encounter data the catching loop uses — reframed as ecological signal. |
| **Respond** | Interpret: classify the state, name the disturbance, choose the right response (survey / restraint / response / remediation — §01). | Some responses are battles (distress calls, poachers, enforcers); most are *not.* |
| **Document** | Record the read in the **notebook**; the entry becomes part of Wren's case (§04) and decodes the mentor's marginalia. | The notebook is the Pokédex's narrative cousin — a living record, not a checklist. |
| **Act** | Earn the certification; carry the evidence forward. Occasionally a small authored intervention pays off. | Credentials gate progression the way badges do, but they are *competence*, not trophies (§00, §08). |

## System 1 — The Survey (FIRMED) · *the keystone verb*

> **Implementation status:** the **classifier is built and tested** —
> `src/survey.c` / `include/survey.h` (`ClassifySurveyState`,
> `RecommendedResponse`), 6 passing headless tests (`test/survey.c`), 104 B
> ROM / 0 B RAM (§12). The "reading" rules below are now executable code. Still
> to build: the survey *action* + report UI, per-point persistence, and the
> state→encounter wiring.

A **survey** is a structured field observation taken at a **survey point.**

- **Where.** Survey points are designated transect locations, anchored to
  **Ilex's red-cloth markers** (§05) — the same markers that hold the
  multi-decade baseline. Early points are scripted into the certification
  zones; later the player can survey at any marked point.
- **How (the action).** A field action — conceptually a sibling of Fish /
  Rock Smash / Headbutt, surfaced as **"Survey"** — initiates the read. It is
  not random: standing at a marked point and surveying always yields that
  point's current signal set.
- **What it surfaces.** The survey aggregates three signal sources into one
  read:
  1. **Encounter-derived signals** — which indicator guilds appear (amphibian
     / lichen-fungal / wading-bird / apex, §06), their **abundance shape**,
     and individual **condition** (healthy / stressed / deformed — the
     contamination tell). This is the wild-encounter table (§11), read as data
     rather than combat bait.
  2. **Map-authored disturbance signs** — environmental storytelling placed in
     the overworld: the forced culvert (§08), the oily sheen, thermokarst
     ponds and the drunken forest (§06/§09), stump-lines. Read from map flags,
     not encounters.
  3. **The baseline** — what *should* be here, from the red-cloth point's
     history (the notebook / §05 archive). A signal only means something
     against its baseline; this is why **abundance ≠ health** (§06) is legible
     at all.

### The interpretation layer (FIRMED framework; *PROPOSAL* on punishment)

Reading is the gameplay, so the survey ends in a **field report** the player
assembles — a short structured judgment:

```
SURVEY — [point name]
  State:        ( Reference / Stressed / Collapsing / Shifted )   §06
  Disturbance:  ( one of the six types )                          §06
  Response:     ( survey-only / restraint / response / remediation )  §01
```

- **Early game**, the notebook's decoded marginalia (§04) walks the player
  through the read — Dr. Heron, teaching posthumously-but-not, on Wren's
  schedule. The first surveys are guided.
- **Later**, the player judges unaided. The certification tests are exactly
  this: *can you read a place you've never seen?*
- ***PROPOSAL — how much a mis-read costs.*** The game never game-overs a bad
  read. Options, in order of preference:
  - **(a, recommended)** The notebook records the player's *actual* call,
    right or wrong; the story can reflect a mis-read (an NPC acts on a wrong
    report; a later, correct re-survey lands harder). Competence/certification
    progress accrues for correct reads. *Soft, diegetic, on-theme.*
  - (b) A correct read is required to certify, with retries. *Cleaner gate,
    more "puzzle," slightly more gamey.*
  - (c) Purely cosmetic; reads never gate anything. *Lowest stakes; risks
    making the verb feel weightless.*
  Recommend **(a)** — it fits "the failure state is agreement, not inaction"
  (§08) and clear-eyed grief (§02): you can be honestly wrong, and the record
  remembers.
- **RAM:** the *report* is transient (a few bytes during the UI). What
  persists is a per-point "surveyed + your-classification" record — pack as a
  few bits per point (state 2 bits, disturbance 3 bits, response 2 bits,
  surveyed 1 bit ≈ 1 byte/point). ~80 points ≈ **~80 bytes** of save.

## System 2 — The Notebook (FIRMED) · *the central artifact*

The notebook (§04) is one object doing three jobs:

1. **The survey log.** Every completed survey writes an entry. Together they
   are Wren's accumulating case — the thing that forces the climax reckoning
   (§00, §02).
2. **The mentor's voice.** Layered **marginalia** that *decodes as competence
   grows* (§04): a note that reads as a cryptic squiggle in Act I resolves
   into a precise field cue in Act III. The relationship progresses by reading
   deeper.
3. **The progression display.** Certifications earned, competencies leveled,
   red-cloth points logged.

### The marginalia decode mechanic (FIRMED)

- Each marginal note has a **legibility threshold** keyed to a competency
  level (survey / restraint / response / remediation) or to story progress.
- Below threshold: the note renders as its *cryptic* form (partial, hinting).
  At/above: it renders as its *resolved* field cue.
- **Implementation:** two text variants per note, gated on a small competence
  integer. The "decoded" set is a **bitfield** — 1 bit per note. A few hundred
  notes ≈ **~32–64 bytes** of save. Text lives in ROM (cheap).
- **Why it matters:** this is the mentor's whole pre-climax presence (§04) and
  the game's tutorial delivery system — the ecology teaches itself through her
  hand, never through a lecture box (§06).

## System 3 — Certifications (FIRMED) · *progression as competence*

No gyms (§00). Progression is the **Ranger Certification ladder** (§01) —
credentials issued at the Regional Director's office, *prepared* at field
stations (§05). Each certification tests one or more of four competencies,
which map directly onto the four survey-states (§06):

| Competency | The skill | Survey-state it answers | Taught in |
|------------|-----------|-------------------------|-----------|
| **Survey** | Read the state correctly | all four | §08 Chapter 1 (habitat survey) |
| **Restraint** | Decline to intervene where the system will recover on its own | Stressed | §08 (the culvert — "the failure state is agreement") |
| **Response** | Act while a collapse can still be arrested | Collapsing | zones 3–5 (doing nothing stops being acceptable, §01) |
| **Remediation** | The slow succession work that *might* pull a system back | Collapsing → recovering | mid/late; ties to §06's "is any zone shown recovering?" |

- **Implementation:** a certification bitfield (~8 certs = 1–2 bytes) + a small
  per-competency level (4 × 1 byte = 4 bytes). Total **~6 bytes** of save.
- The credential is real, inter-regional, **and partly Mereholt-funded** (§05)
  — the game never resolves that tension; the certification UI can quietly
  carry the Foundation mark the player will later come to distrust.

## System 4 — Partner recognition (FIRMED) · *"starters choose you"*

The §08 Act II meadow scene, mechanized. **No selection menu** (§00).

- The player walks the holding meadow; edge species (§06) react
  **non-uniformly** — proximity-driven animation states (calm / recoil /
  freeze / approach), authored per species.
- Recognition triggers on the player's **stillness** near the species whose
  ecological fit lands — the prose follows Doduo, but the system supports any
  of the canonical seven (Shroomish, Seedot, Lotad, Carvanha, Numel,
  Electrike, Doduo). The chosen partner *approaches and enters the ball with
  no struggle* — recognition, not capture.
- ***PROPOSAL — how the partner is determined.*** Either **(a)** fully
  authored (one species, scripted — simplest, matches the prose exactly), or
  **(b)** lightly responsive to *how the player walked the meadow* (which
  species they lingered near / observed), so the recognition feels earned.
  Recommend **(b-lite):** a handful of branch points, not a simulation — it
  makes "they don't obey, you don't pick" *true* rather than decorative.
- **Implementation:** an overworld scripted sequence + 1 byte (chosen
  species). Negligible RAM.

## System 5 — Survey-state transitions (FIRMED) · *resolves a §06 open item*

§06 asked: are state transitions **scripted to the plot clock** or **responsive
to player action?** Decision:

> **Primarily plot-clock scripted, with a small set of authored responsive
> exceptions.**

Rationale:
- The macro story is a **single authored arc** with no branching ending (§02).
  The world's degradation runs on a narrative clock; the player **documents**
  it, they do not gameplay-reverse it. A live ecological simulation the player
  could "win" would contradict **clear-eyed grief** (§02) and *"we don't win,
  we reduce harm"* (§04).
- So most survey-states are a **function of story flags**: a point reads
  Stressed in Act I and Collapsing in Act III because the plot advanced, and
  the red-cloth baseline lets the player *prove the place moved* (§06).
- **The authored exceptions matter, though.** A few places — the **Mistwood
  snare/culvert restoration** is the prime candidate (§06's "is any zone shown
  recovering?" open item) — transition *toward recovery* in response to the
  player's correct restraint/remediation. Rare, hand-placed, and earned. They
  are what keep the documentation work from feeling futile without lying about
  what testimony can do.
- **Resolves §06's open transition question and advances its "any zone shown
  recovering?" item** → *yes, a small authored few; Mistwood is the lead
  candidate.*
- **Implementation:** state = a function evaluated from existing story flags +
  a tiny per-point override table for the authored exceptions. Near-zero
  *additional* save cost (reuses flags that already exist); the per-point
  surveyed-record from System 1 covers the rest.

## How the standard Pokémon loop coexists (FIRMED)

§00 protects the full game. Concretely:

- **Catching** — unchanged mechanically; you catch from surveyed populations.
  *PROPOSAL:* over-catching a Stressed/Collapsing population could surface a
  light notebook note (not a punishment) — on-theme, optional, decide late.
- **Battling** — standard. Encounters are wild battles; story battles use
  **plausible, locally-appropriate rosters** (poachers as laborers, the
  enforcer, Dorsey's political-image team, Cordelia's boardroom team — §00,
  §05). **No gym battles.**
- **Breeding** — standard and available; Delibird Isle even rewards an Egg
  (§09). Breeding is leisure, not gated progression.
- **Roster scope** — Gens 1–3 + related Gen 4 continuations/babies (§00).
  Encounter placement is ecological, never filler (§00, §06).

## RAM & implementation summary (bridge to §12)

Total *new persistent* save state for all five systems is small — on the order
of **~120–160 bytes** (survey records ~80, marginalia bits ~48, certs ~6,
partner 1, misc). That comfortably fits the EWRAM headroom (§12: ~34 KB), with
the real cost being **transient UI buffers** (the notebook and survey screens),
which should **reuse existing menu/UI tile infrastructure** rather than
allocate new EWRAM. Levers if pressure appears: disable unused expansion
features (§12), pack bitfields, ROM-store all static text/data.

Likely engine hooks (details → §12 as code lands):

| System | Probable implementation |
|--------|-------------------------|
| Survey action | Field-action menu entry + a new UI screen (model on Pokédex / region-map UI) |
| Survey-state | A per-point value derived from story flags; drives `wild_encounters.json` selection (§11) |
| Notebook | New UI screen + save bitfields (decoded marginalia, logged surveys) |
| Certifications | Save flags + a credential UI |
| Partner recognition | Authored overworld script + 1-byte result |
| State-by-encounter | Swappable encounter groups *or* map-version selection keyed on state (§11/§12 call) |

## Open / proposals to settle

- ***PROPOSAL (System 1):*** how much a mis-read costs — recommend the soft,
  diegetic option (a).
- ***PROPOSAL (System 4):*** authored vs. lightly-responsive partner
  recognition — recommend b-lite.
- ***PROPOSAL (loop):*** whether over-catching a stressed population surfaces a
  notebook note — decide late, keep it non-punitive.
- **Survey UI shape** — the exact on-screen form of a survey/report (defer to
  a UI pass with §12; should reuse existing menu tilework).
- **Encounter-by-state delivery** — swappable encounter groups vs. map
  versions (joint §11/§12 decision; affects how §11 is authored).
- **Whether surveys consume anything** (time, a kit item) or are free — leaning
  free, to encourage looking; confirm with the first playable slice.

## Cross-references

- The four survey-states and indicator guilds this verb reads: §06.
- The notebook, the marginalia, Dr. Heron's posthumous teaching: §04.
- The certification ladder, competencies, "credentials not trophies": §01, §00.
- The partner-recognition scene in fiction: §08 (Act II).
- The authored recovery exception (Mistwood): §06, §08.
- RAM budget, engine hooks, build state: §12.
- Encounter tables this drives: §11 (to be written; hard-depends on this).
