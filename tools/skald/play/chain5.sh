#!/bin/bash
# Chapter 5 (the walk back to Saltwick, the ferry, Delibird Isle) in savestate segments, continuing from
# chain4.sh's s40 (the Highland certification at the summit).
# Usage: chain5.sh [first_segment_name]
cd /home/user/delibird-isle
S=${SKALD_SCRATCH:-$(ls -d /tmp/claude-0/-home-user-delibird-isle/*/scratchpad | head -1)}
P=$S/play/run
W="python3 tools/skald/walktest.py --rom $S/probe/hookon.gba --map $S/probe/hookon.map --fight"
START=${1:-s41}
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
# a menu pick: DOWN then A, repeated so it lands whenever the choice box appears
PICK1="--walk TAP:DOWN --walk IDLE:20 --walk A:1 --walk IDLE:300"
# down off the summit: surf back is not needed -- the stairs, JARLE's plateau, the lake shore, then the sea south to
# the village beach is the same water; the planner rides it while surfing. Then the River.
seg s41 s40 - --walk GOTO:13,36 --walk DOWN:0 --walk TALK:1 --walk WAIT:400 --walk GOTO:12,60 --walk WAIT:300 \
  --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:900 --expect MAP_PARCEL_RIVER
# the River south into the Floodbasin's neck: the rocks have grown back; smash down through them from the north
seg s42 s41 - --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 --walk DOWN:0 --walk TALK:2 --walk WAIT:500 --walk DOWN:0 --walk WAIT:100 \
  --walk RIGHT:0 --walk TALK:2 --walk WAIT:500 --walk RIGHT:0 --walk WAIT:300 --expect MAP_PARCEL_FLOODBASIN
seg s43 s42 - --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 --expect MAP_PARCEL_CORRIDOR
seg s44 s43 - --walk GOTOEDGE:left --walk LEFT:0 --walk WAIT:600 --expect MAP_PARCEL_WETLANDS
seg s45 s44 - --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 --expect MAP_PARCEL_FERNWICK
# Fernwick's south gate warps to Mistwood (14,1); the deadfall at (14,3) has grown back: cut it from above
seg s46 s45 - --walk GOTO:14,58 --walk DOWN:0 --walk WAIT:900 --walk GOTO:14,2 --walk DOWN:0 --walk TALK:2 --walk WAIT:1500 \
  --walk DOWN:0 --walk DOWN:0 --walk WAIT:200 --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 --expect MAP_PARCEL_ROUTE1
seg s47 s46 - --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:900 --expect MAP_PARCEL_ISLE
# the ferry captain (15,34), first choice = DELIBIRD ISLE (open after the Highland certification)
seg s48 s47 FLAG_SKALDMERE_DELIBIRD_ARRIVAL --walk GOTO:15,33 --walk DOWN:0 --walk MENU:0,14 --walk WAIT:1500 \
  --check FLAG_SKALDMERE_DELIBIRD_ARRIVAL --expect MAP_PARCEL_DELIBIRD
# ILEX in the square (11,10) through the north gap: the aerial-survey competency test, badge 8, HM07
seg s49 s48 FLAG_BADGE08_GET --walk GOTO:10,10 --walk RIGHT:0 --walk TALK:30 --walk WAIT:2500 --check FLAG_BADGE08_GET --expect MAP_PARCEL_DELIBIRD
# the gift square: the two item balls, the reveler, then the keeper; the elder's parcel to the relief man, and the
# Delibird itself; a heal at the warming hut
seg s50 s49 - --walk GOTO:15,4 --walk UP:0 --walk TALK:1 --walk WAIT:400 --walk GOTO:25,21 --walk UP:0 --walk TALK:1 --walk WAIT:400 \
  --walk GOTO:9,13 --walk RIGHT:0 --walk TALK:1 --walk WAIT:600 --walk GOTO:9,11 --walk LEFT:0 --walk TALK:10 --walk WAIT:600 \
  --check FLAG_SKALD_DEL_GIFT_SQUARE --expect MAP_PARCEL_DELIBIRD
seg s51 s50 - --walk GOTO:6,16 --walk UP:0 --walk TALK:8 --walk WAIT:400 --walk GOTO:20,17 --walk UP:0 --walk TALK:8 --walk WAIT:400 \
  --walk GOTO:8,10 --walk LEFT:0 --walk TALK:10 --walk WAIT:600 --walk GOTO:8,19 --walk UP:0 --walk TALK:4 --walk WAIT:900 --expect MAP_PARCEL_DELIBIRD
# the sailor (9,23) back to Saltwick, then the captain's second choice = the MEREHOLT COAST
seg s52 s51 - --walk GOTO:9,22 --walk DOWN:0 --walk MENU:0,8 --walk WAIT:900 --expect MAP_PARCEL_ISLE
seg s53 s52 FLAG_SKALDMERE_COAST_ARRIVAL --walk GOTO:15,33 --walk DOWN:0 --walk MENU:1,14 \
  --walk WAIT:1500 --check FLAG_SKALDMERE_COAST_ARRIVAL --expect MAP_PARCEL_COAST
echo "=== chapter 5 complete, the Coast reached $(date +%H:%M:%S)"
