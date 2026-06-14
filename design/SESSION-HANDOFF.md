# Session handoff — read this first, then delete the staleness

> **Purpose:** the *live state* a new session can't get from the durable docs.
> The durable docs carry the structure; this carries the moment. Last updated
> end of the session that shipped the Wetland Certification + Chapter-2 opener.
> **If this note disagrees with reality, reality wins — update or delete it.**

## The 60-second orientation

You are continuing **delibird-isle**, an ecology-first Pokémon Emerald romhack
(pokeemerald-expansion). Read order is unchanged:

1. `CLAUDE.md` (auto-loaded) — build/test/screenshot commands + gotchas.
2. `design/README.md` → `design/00-canon-lock.md` → the bible (§01–§12).
3. **`design/12-implementation.md`** — the authoritative "what exists in code"
   record: the 8-map graph, world-state vars/flags, systems, per-chapter scene
   inventory, and every hard-won build gotcha. *This is the most important file
   for a dev session.* Trust it over this note for anything structural.
4. The git log on `claude/emerald-romhack-planning-T2LgQ` (the working branch).

Then you have the full background. Nothing else is needed.

## What's playable right now (pointer, not duplicate)

The §07 prologue + §08 Chapter 1 + the Chapter 2 opener (Floodbasin) are
complete, capstoned (Forest + Wetland Certifications), tested, and CI'd.
Full inventory: §12 "Skaldmere content built". New game starts on the ferry;
9 maps; ~11 trainers; wild encounters; shop; two enterable buildings; the
survey classifier proven against Reference *and* Collapsing states with
headless tests. Full regression baseline: `make check DEBUG=0` = 2844 PASS,
4 FAILED (pre-existing inherited battle tests — tolerated), 0 ours.

## THE thing to know: the model situation

The user prefers **Fable 5 (1M context)** for this project's prose — it has a
better ear for the bible's "implies more than it states" register (§00). At
handoff time **Fable 5 is temporarily unavailable** for this project, and the
user chose to **wait for it before continuing the main story build** (which is
dialogue-heavy: Chapter 3 is Harland's people, farmland NPCs, dam-relic
narration).

**The agreed plan if building continues before Fable returns ("hybrid"):**
- Build *structure* on whatever model is active (maps, map.json, flags/vars,
  C specials + tests, quest wiring, encounter tables) — all no-prose.
- Leave dialogue strings as **marked placeholders**: `// PROSE-TBD: <intent>`.
- When Fable is back, it does a *voice pass* over flagged strings — a clean
  edit, not a re-architecture, because prose is isolated in `.pory` files.
- (Not yet built: a `design/prose-inventory.md` punch-list. Offered, not done.)

**So: confirm with the user which mode they want before doing prose-heavy
work.** Don't assume.

## In flight (WIP on the branch)

- **`tools/maptools/build_river.py`** + `data/layouts/ParcelRiver/*` — a
  **partial** zone-4 (River & Farmland) map generator. Map shell only; NOT
  integrated (no layouts.json/map_groups/map.json/scripts/connection/
  encounters). The **9-step pickup plan is in commit `23576965`'s message** —
  read it before touching zone 4. Free resources reserved there:
  `FLAG_UNUSED_0x02B`, `VAR_UNUSED_0x4091`.

## Chosen "while waiting" work: trainer teams (pure data, no Fable)

`design/trainers-guide.md` is the full how-to (Showdown `.party` syntax,
ID registration, faction→species palette, level curve, gotchas). The
suggested first pass — **flesh out the ~9 existing Skald trainers** (currently
1–2 mons / 2 moves each) — was offered but **not yet done**. This is the
ideal no-prose task to pick up.

## The loop (so you don't relearn it)

Build `make -j$(nproc) modern`. Test `make check DEBUG=0 TESTS="<prefix>"`
(single prefix, not OR; our prefixes: Survey, Cert, Meadow, DNS, Floodbasin).
See it: `tools/screenshot/capture.py` (drive inputs with `--press`; **mash B
not A** to advance scripted dialogue — A re-engages NPCs). Temp-spawn for
testing via `WarpToTruck()` in `src/new_game.c` marked `// TEMP TEST ONLY`,
then **always revert before commit** (`grep -c "TEMP TEST" src/new_game.c`
must be 0). Stale-object traps + the full gotcha list: §12.

## Top gotchas (full list in §12 — these bite hardest)

- `make check` **requires `DEBUG=0`** (shared obj-dir / TESTING flag).
- New map's `scripts.inc` must be hand-added to `data/event_scripts.s`.
- After editing `map.bin`/`map.json`: `rm build/modern-debug/data/{maps,map_events}.o`.
- poryscript `format()` can't hold escaped `"`; charmap has no em-dash (use `--`).
- Don't reuse low `FLAG_UNUSED_0x0xx` (vanilla scripts ref them) — verify free.
- Script specials *return* their value (table maps it into the result var).

## Immediate menu (the user picks)

1. **Wait** for Fable (clean pause; this is the user's current lean).
2. **Trainer-team pass** (no-prose; guide ready; first target = existing 9).
3. **Zone 4 structure** in placeholder-prose mode (river starter + 9-step plan).
4. **Polish** (Porymap art on building/lab/town exteriors; title screen).
