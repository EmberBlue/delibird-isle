# The playthrough chains

`walktest.py` plays Skaldmere headlessly, one savestate segment at a time. These scripts string
the segments into a whole game, chapter by chapter, from the ferry to the credits and the post-game save. Each segment
loads the previous segment's state, walks (`GOTO`, `GOTOEDGE`, `GOTOWARP`, `TALK`, `TEACHHM`,
`TALKFIGHT`, `TAP`, `WAIT`), fights what it meets (`--fight`), saves its own state and a screenshot, and
checks a flag or var that proves the beat happened. A failed check stops the chain, and the
segment's log and `.png` in `$S/play/run/` say where and why.

| script | chapter | from | to |
|---|---|---|---|
| `chain_all.sh` | 1 | the ferry (new game) | TARN's badge, the Forest certification |
| `chain2.sh` | 2 | Fernwick | the Wetlands, MIRREN, the Floodbasin readings, BREEN, HM06, the Wetland signing |
| `chain3.sh` | 3 | the HQ | the River, SLUICE, HM04, the Watershed signing, into the Highlands |
| `chain4.sh` | 4 | the Highlands' south edge | the readings, STRENGTH through the slide, VALE, SURF to HALE |
| `chain5.sh` | 5 | the summit | the walk back to Saltwick, the ferry, Delibird Isle, ILEX, the gifts |
| `chain6.sh` | 6 | the Coast quay | HARLAND's shift and exam, the readings, the plaque, HALE's signing |
| `chain7.sh` | 7 | the climate station | the four divisions, VANE upstairs |
| `chain8.sh` | 8 | Saltwick | Fernwick, HALE's walk into the Last Corridor, AUNE, HERON, the finale |
| `chain9.sh` | 9 | Fernwick, the record filed | the ferry to the Coast, the boardroom, the eight-stop epilogue, the credits, CONTINUE into the post-game |
| `chain10.sh` | post-game | Fernwick after CONTINUE | the SMEARGLE at the pond, TARN's rematch, the ferry again, PERRIN's last battle |

`run_all.sh` runs them all in order; `run_rest.sh` is the tail after a fix (edit its first line to
the segment to resume from); `rebuild_and_run.sh` builds the clean ROM and the probe ROM first.

## Running

The probe ROM is the current tree built with `tools/skald/probe_hook.py --on` (never commit it on),
stashed as `$S/probe/hookon.gba` + `.map`, where `$S` is the session scratchpad
(`SKALD_SCRATCH` overrides it). Copy these scripts to `$S/play/` or run them in place:

```bash
export SKALD_SCRATCH=/tmp/claude-0/-home-user-delibird-isle/<id>/scratchpad
mkdir -p $SKALD_SCRATCH/play/run
bash tools/skald/play/rebuild_and_run.sh      # ~4 min of builds, then ~17 min of play
tail -f $SKALD_SCRATCH/play/run/run_rest.log
```

## Rules the chains taught (also in skald-verify)

- A savestate pins the current map's NPCs and its layout (the RAM copies). After changing a
  map's objects or tiles, resume from the state saved on the previous map so the crossing
  reloads them.
- Script changes shift ROM addresses and invalidate every state; layout and object edits only
  invalidate states saved on that map.
- `GOTO` plans on the live map (ledges, surf) and B's through scenes before calling a tile
  blocked; it still cannot read menus, so a choice box is picked with `TAP:DOWN` + `A:1`
  repeated (see `PICK1` in chain5, `PICK2` in chain6).
- The HM index in `TEACHHM:i,slot` is the position in the TMs & HMs pocket, which is sorted by
  item id: HM01 Cut, HM03 Surf, HM04 Strength, HM05 Flash, HM06 Rock Smash as they arrive.
- Rocks and trees grow back on map reload; every return trip smashes or cuts again.
- Never rebuild the probe ROM while a chain is running: mGBA maps the file, and replacing it
  under a live segment kills it with SIGBUS (exit 135). Stop the chain, build, resume.
- `WAIT` mashes B, and B answers NO. A scene with a YES/NO after its battle (HERON's "Will you
  file it true?") is driven with `TALKFIGHT:n` (A until the battle starts, fight it, stop) and
  then `TALK:n` (A only).
- The last segment runs through a soft reset: A skips the boot logo and the title and takes
  CONTINUE, and the harness keeps the save-block offsets it read before the reset, because
  the reset clears the probe block and CONTINUE does not run the hook again. `--trace 1200`
  on that segment leaves a screenshot of every epilogue stop and the credits.
- An NPC's elevation is re-read from its tile at spawn, so a fish in water is at 1 whatever the
  template says; the tile under it is set to elevation 0 so it reads as a wildcard.
