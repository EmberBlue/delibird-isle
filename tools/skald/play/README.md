# The playthrough chains

`walktest.py` plays Skaldmere headlessly, one savestate segment at a time. These scripts string
the segments into a whole game, chapter by chapter, from the ferry to the finale. Each segment
loads the previous segment's state, walks (`GOTO`, `GOTOEDGE`, `GOTOWARP`, `TALK`, `TEACHHM`,
`TAP`, `WAIT`), fights what it meets (`--fight`), saves its own state and a screenshot, and
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

`run_all.sh` runs them all in order; `run_rest.sh` is the tail after a fix (edit its first line to
the segment to resume from); `rebuild_and_run.sh` builds the clean ROM and the probe ROM first.

## Running

The probe ROM is the current tree built with `tools/skald/probe_hook.py --on` (never commit it on),
stashed as `$S/probe/hookon.gba` + `.map`, where `$S` is the session scratchpad
(`SKALD_SCRATCH` overrides it). Copy these scripts to `$S/play/` or run them in place:

```bash
export SKALD_SCRATCH=/tmp/claude-0/-home-user-delibird-isle/<id>/scratchpad
mkdir -p $SKALD_SCRATCH/play/run
bash tools/skald/play/rebuild_and_run.sh      # ~4 min of builds, then ~30 min of play
tail -f $SKALD_SCRATCH/play/run/run_rest.log
```

## Rules the chains taught (also in skald-verify)

- A savestate pins the current map's NPCs. After changing a map's objects, resume from the
  state saved on the previous map so the crossing reloads them.
- Script changes shift ROM addresses and invalidate every state; layout and object edits do not.
- `GOTO` plans on the live map (ledges, surf) and B's through scenes before calling a tile
  blocked; it still cannot read menus, so a choice box is picked with `TAP:DOWN` + `A:1`
  repeated (see `PICK1` in chain5, `PICK2` in chain6).
- The HM index in `TEACHHM:i,slot` is the position in the TMs & HMs pocket, which is sorted by
  item id: HM01 Cut, HM03 Surf, HM04 Strength, HM05 Flash, HM06 Rock Smash as they arrive.
- Rocks and trees grow back on map reload; every return trip smashes or cuts again.
