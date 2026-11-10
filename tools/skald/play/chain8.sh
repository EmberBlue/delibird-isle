#!/bin/bash
# Chapter 8 (the finale: HALE walks you into the Last Corridor) in savestate segments, continuing from
# chain7.sh's s64 (back in Saltwick at the ferry landing (15,31)).
# Usage: chain8.sh [first_segment_name]
cd /home/user/delibird-isle
S=${SKALD_SCRATCH:-$(ls -d /tmp/claude-0/-home-user-delibird-isle/*/scratchpad | head -1)}
P=$S/play/run
W="python3 tools/skald/walktest.py --rom $S/probe/hookon.gba --map $S/probe/hookon.map --fight"
START=${1:-s65}
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
# north through the Meadow and Route 1 to Mistwood; the deadfall has grown back: cut it from below and go on to Fernwick
seg s65 s64 - --walk GOTOEDGE:up --walk UP:0 --walk WAIT:600 --walk GOTOEDGE:up --walk UP:0 --walk WAIT:600 \
  --walk GOTOEDGE:up --walk UP:0 --walk WAIT:600 --expect MAP_PARCEL_MISTWOOD
seg s66 s65 - --walk GOTO:14,4 --walk UP:0 --walk TALK:2 --walk WAIT:1500 --walk UP:3 --walk UP:0 --walk WAIT:900 --expect MAP_PARCEL_FERNWICK
# the HQ (warp 1), HALE (6,6): five certifications, "Ready?", the walk into the Last Corridor
seg s67 s66 - --walk GOTOWARP:1 --walk WAIT:400 --walk GOTO:6,7 --walk UP:0 --walk TALK:30 --walk WAIT:3000 \
  --expect MAP_PARCEL_MARSH
# AUNE at the gate (36,23) from below: the last Mereholt clearance; the graded edge (35,27) from the road
seg s68 s67 FLAG_SKALDMERE_GATE_MARSH --walk GOTO:36,24 --walk UP:0 --walk TALK:6 --walk WAIT:900 --walk GOTO:36,27 --walk LEFT:0 --walk TALK:3 --walk WAIT:300 \
  --check FLAG_SKALDMERE_GATE_MARSH --expect MAP_PARCEL_MARSH
# the river is the only way in: SURF from the landing (34,24) west, the drying channel (23,1) from (24,1) on its
# islet, SURF again from the islet's shore (24,6), the
# Poliwag (20,9) from below, HERON (19,9) once to be met, the dead reeds (10,21), then HERON again: COLLAPSING, the
# notebook, the finale
seg s69 s68 FLAG_SKALDMERE_HERON_MET --walk GOTO:34,24 --walk LEFT:0 --walk TALK:1 --walk WAIT:400 \
  --walk GOTO:24,1 --walk LEFT:0 --walk TALK:3 --walk WAIT:300 \
  --walk GOTO:24,6 --walk LEFT:0 --walk TALK:1 --walk WAIT:400 \
  --walk GOTO:18,8 --walk RIGHT:0 --walk TALK:4 --walk WAIT:300 \
  --walk GOTO:19,10 --walk UP:0 --walk TALK:6 --walk WAIT:400 --check FLAG_SKALDMERE_HERON_MET --expect MAP_PARCEL_MARSH
seg s70 s69 FLAG_SKALDMERE_FINALE_DONE --walk GOTO:10,20 --walk DOWN:0 --walk TALK:3 --walk WAIT:300 --check VAR_SKALDMERE_CH7_EVIDENCE \
  --walk GOTO:19,10 --walk UP:0 --walk TALKFIGHT:120 --walk TALK:130 --walk WAIT:600 --check FLAG_SKALDMERE_FINALE_DONE --check FLAG_SKALD_CH_HOLLIS_NAMED --expect MAP_PARCEL_MARSH
# the road out (trigger column 39, rows 25-29) warps to Fernwick
seg s71 s70 - --walk GOTO:18,8 --walk UP:0 --walk TALK:1 --walk WAIT:400 --walk GOTO:38,27 --walk RIGHT:0 --walk WAIT:1500 --expect MAP_PARCEL_FERNWICK
echo "=== the finale is done $(date +%H:%M:%S)"
