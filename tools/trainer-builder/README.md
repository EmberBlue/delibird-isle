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
   When you pick a species, the move pickers filter to **that Pokémon's learnset**,
   each move tagged by method and level — **Lv 13** / **Egg** / **TM** — pulled
   from your ROM's actual learnsets (level-up from the active `P_LVL_UP_LEARNSETS`
   generation, plus egg + teachable/tutor). Untick **Learnset moves only** to pick
   any move (trainers can legally run off-learnset sets). Leave moves blank to let
   the engine pick the mon's last four level-up moves. Learnsets are bundled for
   canon species (Gen 1–4); others fall back to the full move list.
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

## Private vs public build

`build.py` emits **two** files:

- **`trainer-builder.html`** — the full app for local use. Includes the
  **Design reference** panel (faction → species palette, level curve, §00/§05/§06
  notes) and a canon demo. This is design-bible-derived content; keep it private
  (it's fine in this private repo — just don't publish it).
- **`trainer-builder.public.html`** — a **sanitized** build: the design panel and
  region/faction naming are stripped and the demo is a generic bug-catcher, so it's
  a content-free dev tool (UI + public pokeemerald-expansion constant names only).
  This is the only build that's safe to publish — see **Hosting it yourself**.

If you add anything design-specific to the UI, wrap it in
`<!--PRIVATE--> … <!--/PRIVATE-->` so the public build strips it, and re-run the
leak check before publishing.

## Hosting it yourself

The tool isn't published anywhere by default (and an AI agent isn't permitted to
publish repo-derived content to a public URL — that decision is yours). To put
the **sanitized** build online with GitHub Pages, add this workflow yourself and
push it:

```yaml
# .github/workflows/pages.yml
name: Pages
on: { workflow_dispatch: {} }          # run it manually from the Actions tab
permissions: { contents: read, pages: write, id-token: write }
jobs:
  deploy:
    runs-on: ubuntu-latest
    environment: { name: github-pages, url: "${{ steps.d.outputs.page_url }}" }
    steps:
      - uses: actions/checkout@v4
      - run: mkdir -p _site && cp tools/trainer-builder/trainer-builder.public.html _site/index.html
      - uses: actions/configure-pages@v5
        with: { enablement: true }
      - uses: actions/upload-pages-artifact@v3
        with: { path: _site }
      - id: d
        uses: actions/deploy-pages@v4
```

It copies **only** `trainer-builder.public.html` into the published site, so no
game code, ROM, assets, or design content is exposed. Pages on a private repo
needs a paid plan; the URL will be `https://<you>.github.io/delibird-isle/`.
(Or skip hosting entirely: just open `trainer-builder.public.html` locally.)

## Files

| File | Role |
|---|---|
| `trainer-builder.html` | **The full app** (private). What you open locally. |
| `trainer-builder.public.html` | Sanitized build, served on GitHub Pages. |
| `build.py` | Extracts constants from `include/constants/*`; bundles both builds. |
| `src/serializer.js` | Pure trainer-object → `.party` text (shared with the self-test). |
| `src/app.js` | UI logic (comboboxes, party cards, preview, save list). |
| `src/template.html` | HTML shell + styles, with `{{DATA}}/{{SERIALIZER}}/{{APP}}` slots and a `<!--PRIVATE-->` region. |
| `selftest.js` | Round-trips serializer output through `trainerproc`. |
