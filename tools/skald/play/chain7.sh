#!/bin/bash
# Chapter 7 (the Mereholt climate station) in savestate segments, continuing from chain6.sh's s60 (the ferry lands
# at (9,34); the first-entry scene has fired).
# Usage: chain7.sh [first_segment_name]
cd /home/user/delibird-isle
S=${SKALD_SCRATCH:-$(ls -d /tmp/claude-0/-home-user-delibird-isle/*/scratchpad | head -1)}
P=$S/play/run
W="python3 tools/skald/walktest.py --rom $S/probe/hookon.gba --map $S/probe/hookon.map --fight"
START=${1:-s61}
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
# the four divisions: over the bridge to ICE (30,16), RAIN (16,21), then the west yard: SUN (6,16), SAND (6,5)
seg s61 s60 - --walk GOTO:30,17 --walk UP:0 --walk TALK:1 --walk WAIT:900 --walk GOTO:16,22 --walk UP:0 --walk TALK:1 --walk WAIT:900 \
  --expect MAP_PARCEL_WEATHER
seg s62 s61 - --walk GOTO:7,16 --walk LEFT:0 --walk TALK:1 --walk WAIT:900 --walk GOTO:7,5 --walk LEFT:0 --walk TALK:1 --walk WAIT:900 \
  --check TRAINER_SKALD_RAIN --check TRAINER_SKALD_SUN --check TRAINER_SKALD_SAND --check TRAINER_SKALD_ICE --expect MAP_PARCEL_WEATHER
# the Institute (door (6,32) = warp 0 of the map? the door tile itself), the stairs (1F warp 2 at (17,1)), VANE (10,8)
seg s63 s62 FLAG_BADGE07_GET --walk GOTO:6,33 --walk UP:0 --walk WAIT:400 --walk GOTOWARP:2 --walk WAIT:400 \
  --walk GOTO:10,9 --walk UP:0 --walk TALK:30 --walk WAIT:2500 --check FLAG_BADGE07_GET --check FLAG_SKALDMERE_WEATHER_CLEARED --expect MAP_PARCEL_WEATHER_INSTITUTE2_F
# back down and out, the sailor (10,34) home to Saltwick
seg s64 s63 - --walk GOTOWARP:0 --walk WAIT:400 --walk GOTOWARP:0 --walk WAIT:400 --walk GOTO:10,33 --walk DOWN:0 --walk TALK:3 --walk WAIT:2500 --expect MAP_PARCEL_ISLE
echo "=== chapter 7 complete, back in Saltwick $(date +%H:%M:%S)"
