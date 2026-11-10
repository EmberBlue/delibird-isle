#!/bin/bash
# Chapter 6 (the Mereholt Coast) in savestate segments, continuing from chain5.sh's s53 (the ferry lands at the
# lighthouse quay, (30,55)).
# Usage: chain6.sh [first_segment_name]
cd /home/user/delibird-isle
S=${SKALD_SCRATCH:-$(ls -d /tmp/claude-0/-home-user-delibird-isle/*/scratchpad | head -1)}
P=$S/play/run
W="python3 tools/skald/walktest.py --rom $S/probe/hookon.gba --map $S/probe/hookon.map --fight"
START=${1:-s54}
go=0
seg() {
  name=$1; prev=$2; need=$3; shift 3
  [ "$name" = "$START" ] && go=1
  [ $go = 1 ] || return 0
  echo "=== $name  $(date +%H:%M:%S)"
  timeout 560 $W --load-state $P/$prev.state --save-state $P/$name.state --out $P/$name.png "$@" > $P/$name.log 2>&1
  rc=$?
  grep -v "GOTO .*: at\|TAP " $P/$name.log | tail -5
  if [ $rc -ne 0 ]; then echo "!!! $name failed (exit $rc)"; exit 1; fi
  if [ "$need" != "-" ] && ! grep -q "$need = 1" $P/$name.log; then echo "!!! $name: $need not set"; exit 1; fi
}
PICK2="--walk TAP:DOWN --walk IDLE:20 --walk TAP:DOWN --walk IDLE:20 --walk A:1 --walk IDLE:300"
# PERRIN on the quay (trigger row 54), then HARLAND (36,53) from above: one shift out on the water
seg s54 s53 FLAG_SKALD_COAST_SHIFT_DONE --walk GOTO:30,53 --walk WAIT:2500 --walk GOTO:36,52 --walk DOWN:0 --walk TALK:16 --walk WAIT:3000 \
  --check FLAG_SKALD_COAST_SHIFT_DONE --expect MAP_PARCEL_COAST
# HARLAND again: the forty-jobs question, the battle, badge 6, HM02
seg s55 s54 FLAG_BADGE06_GET --walk GOTO:36,52 --walk DOWN:0 --walk TALK:30 --walk WAIT:2500 --check FLAG_BADGE06_GET --expect MAP_PARCEL_COAST
# the four readings on the ground: the urchin barren (36,57), the dredge scar (7,58), the one-size catch (7,36),
# the empty pilings (32,44) behind the item ball at (31,44)
seg s56 s55 - --walk GOTO:35,57 --walk RIGHT:0 --walk TALK:3 --walk WAIT:300 \
  --walk GOTO:7,57 --walk DOWN:0 --walk TALK:3 --walk WAIT:300 \
  --walk GOTO:7,37 --walk UP:0 --walk TALK:3 --walk WAIT:300 \
  --walk GOTO:31,43 --walk DOWN:0 --walk TALK:1 --walk WAIT:400 --walk GOTO:31,44 --walk RIGHT:0 --walk TALK:3 --walk WAIT:300 \
  --check VAR_SKALDMERE_CH6_EVIDENCE --expect MAP_PARCEL_COAST
# the Foundation's coast office (door (30,26) = warp 1): the plaque on the back wall (12,1), the Heron reveal
seg s57 s56 - --walk GOTOWARP:1 --walk WAIT:400 --walk GOTO:12,2 --walk UP:0 --walk TALK:12 --walk WAIT:800 \
  --walk GOTOWARP:0 --walk WAIT:400 --check VAR_SKALDMERE_CH6_EVIDENCE --expect MAP_PARCEL_COAST
# HALE on the quay (29,52): the Coastal certification
seg s58 s57 FLAG_SKALDMERE_COASTAL_CERT --walk GOTO:29,53 --walk UP:0 --walk TALK:26 --walk WAIT:1500 --check FLAG_SKALDMERE_COASTAL_CERT --expect MAP_PARCEL_COAST
# the sailor (33,56) back to Saltwick; the captain's third choice = the climate station
seg s59 s58 - --walk GOTO:33,55 --walk DOWN:0 --walk TALK:3 --walk WAIT:2500 --expect MAP_PARCEL_ISLE
seg s60 s59 FLAG_VISITED_PARCEL_WEATHER --walk GOTO:15,33 --walk DOWN:0 --walk A:1 --walk IDLE:420 $PICK2 $PICK2 $PICK2 $PICK2 $PICK2 \
  --walk WAIT:2500 --check FLAG_VISITED_PARCEL_WEATHER --expect MAP_PARCEL_WEATHER
echo "=== chapter 6 complete, the climate station reached $(date +%H:%M:%S)"
