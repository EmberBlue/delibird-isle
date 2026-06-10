# Pokémon Anthropocene — Design Bible

> An ecology-first, grounded Pokémon ROM hack (pokeemerald-expansion).
> You arrive as an outsider with a bag, a notebook, and a memory. You don't
> save the world. You witness it, document it, and slowly become accountable
> for it.

This directory is the living design bible. It is version-controlled so nothing
is ever lost. Every decision lives here in plain text and drives the actual
game built in this repo.

## Status legend

- **LOCKED** — decided; do not contradict without an explicit change.
- **FIRMED** — content is firm; small revisions still welcome.
- **DRAFT** — written, open to revision.
- **OPEN** — not yet decided; needs discussion.
- **LIVING** — kept up to date as code lands (e.g. §12).

## Table of contents

| # | Section | File | Status |
|---|---------|------|--------|
| 00 | Canon Lock — the foundation & "do not contradict" rules | `00-canon-lock.md` | LOCKED |
| 01 | Region & Journey Skeleton — Skaldmere, full-game arc, biomes, certification ladder | `01-region-skeleton.md` | FIRMED |
| 02 | The Conflict — Industrialists, the endgame, the climax | `02-conflict.md` | LOCKED |
| 03 | Myth & Legendaries — resolved: none (fully grounded) | `00-canon-lock.md` | LOCKED |
| 04 | Cast Bible — characters, arcs, the mentor mystery | `04-cast.md` | DRAFT |
| 05 | Organizations — Mereholt, the Council, Climate Corps, Skaldmere Survey | `05-organizations.md` | FIRMED |
| 06 | Ecology Bible — indicator/keystone logic, the resilience crux, disturbance taxonomy, survey-states | `06-ecology.md` | FIRMED |
| 07 | Prologue — Arrival at the Edge of Change (long-form, verbatim canon) | `07-prologue.md` | FIRMED |
| 08 | Chapter 1 — Forest Certification & the Mentor's Legacy (long-form) | `08-chapter-01.md` | FIRMED |
| 09 | Delibird Isle (zone 6) — festival cheer over a permafrost crisis | `09-delibird-isle.md` | DRAFT |
| 10 | Mechanics — the survey verb, the notebook, certifications, state transitions | `10-mechanics.md` | FIRMED |
| 11 | Routes & Encounter Tables — ecological placement | `11-routes.md` | OPEN |
| 12 | Implementation Notes — engine mapping (pokeemerald-expansion), build state, RAM budget | `12-implementation.md` | LIVING |

## Sources

- `sources/chatgpt-anthropocene-design-export.txt` — the original ChatGPT
  design conversation (Delibird Island concept, long-form Prologue + Chapter 1,
  proposed bible structure). Preserved verbatim as the seed material.
