# Trainer Builder

A small, self-contained web app for **building Skaldmere trainers by hand** —
pick the class, sprite, music, AI, a team (species / level / ability / held item
/ IVs / up to four moves each), and jot a little backstory. It hands you a
ready-to-paste `trainers.party` block.

> Why a tool and not hand-editing? Every dropdown is populated from this repo's
> real constant headers, and the app emits **constant forms**
> (`SPECIES_POOCHYENA`, `MOVE_TACKLE`, `TRAINER_CLASS_HIKER`, …). `trainerproc`
> passes those through verbatim, so anything you build refers to constants that
> actually exist — it compiles. You can't typo a move name.

## Use it

Open **`trainer-builder.html`** in any browser (double-click it — no server, no
install, works offline). On the web/mobile app, download that one file from the
repo and open it locally.

1. Fill in the **Trainer ID** (e.g. `TRAINER_SKALD_FISHER`), **Name**, **Class**,
   and a **Pic** (auto-fills from the class for standard classes). Name + Pic are
   required by the engine; the preview warns you if either is missing.
2. **Add Pokémon** (up to 6). Search species/abilities/items/moves by typing.
   Leave moves blank to let the engine pick the mon's last four level-up moves.
3. Write a line or two of **backstory** — it's saved as a `/* */` comment above
   the block (the build strips it before compiling; it's there for whoever reads
   `trainers.party`).
4. **Copy block** (or Download). Optionally **Save to list** to keep several
   trainers in your browser and **Copy all** at once.

Append `#demo` to the file URL to load a worked example (the Ch.1 enforcer, Voss).

## Wire it into the game

The app's checklist repeats this per trainer:

1. Paste the block into `src/data/trainers.party`.
2. Add `#define <TRAINER_ID>  <next free id>` in
   `include/constants/opponents.h`, and bump `TRAINERS_COUNT` past it
   (`MAX_TRAINERS_COUNT` is the ceiling — raising it costs saveblock space).
3. Reference it from a map script:
   `trainerbattle_single(<TRAINER_ID>, ...)` in a `.pory` file, or give an
   overworld object `trainer_type: TRAINER_TYPE_NORMAL` + a sight radius.
4. `make tools && make -j$(nproc) modern` to build.

See `design/trainers-guide.md` for the canon guardrails (faction → species
palette, level curve, "no cartoon-evil rosters") — a condensed version is in the
app's **Design reference** panel.

## Maintaining the app

The option lists are baked into `trainer-builder.html` at build time. Regenerate
after the dex / move list / classes change:

```bash
python3 tools/trainer-builder/build.py     # rewrites trainer-builder.html
node    tools/trainer-builder/selftest.js   # round-trips sample output through trainerproc
```

`selftest.js` serializes sample trainers and pushes them through the real
`cpp | trainerproc` pipeline (the same rule the ROM build uses) — a green run
means the app's output parses.

## Files

| File | Role |
|---|---|
| `trainer-builder.html` | **The app.** Self-contained, committed, what you open. |
| `build.py` | Extracts constants from `include/constants/*` and bundles the app. |
| `src/serializer.js` | Pure trainer-object → `.party` text (shared with the self-test). |
| `src/app.js` | UI logic (comboboxes, party cards, preview, save list). |
| `src/template.html` | HTML shell + styles, with `{{DATA}}/{{SERIALIZER}}/{{APP}}` slots. |
| `selftest.js` | Round-trips serializer output through `trainerproc`. |
