#!/bin/bash
# Chapters 3 and 4 in savestate segments, continuing from chain2.sh's s25 (the Wetland signing, inside the HQ).
# Usage: chain3.sh [first_segment_name]
cd /home/user/delibird-isle
S=${SKALD_SCRATCH:-$(ls -d /tmp/claude-0/-home-user-delibird-isle/*/scratchpad | head -1)}
P=$S/play/run
W="python3 tools/skald/walktest.py --rom $S/probe/hookon.gba --map $S/probe/hookon.map --fight"
START=${1:-s26}
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
# back out to the river: HQ -> Fernwick -> Wetlands -> Corridor -> Floodbasin -> the rock gap -> River
seg s26 s25 - --walk GOTOWARP:0 --walk WAIT:400 --walk GOTOEDGE:up --walk UP:0 --walk WAIT:900 --expect MAP_PARCEL_WETLANDS
seg s27 s26 - --walk GOTOEDGE:right --walk RIGHT:0 --walk WAIT:900 --expect MAP_PARCEL_CORRIDOR
seg s28 s27 - --walk GOTOEDGE:up --walk UP:0 --walk WAIT:900 --expect MAP_PARCEL_FLOODBASIN
# the rocks grow back when the map reloads: smash the three again (ROCK SMASH is already taught)
seg s29 s28 - --walk GOTO:12,1 --walk LEFT:0 --walk TALK:2 --walk WAIT:500 \
  --walk LEFT:0 --walk LEFT:0 --walk TALK:2 --walk WAIT:500 --walk LEFT:0 --walk LEFT:0 --walk TALK:2 --walk WAIT:500 \
  --walk UP:0 --walk UP:0 --walk WAIT:1200 --expect MAP_PARCEL_RIVER
# Elvsund: SLUICE's exam in the Water Board office (door (8,25) = warp 2; SLUICE at (12,11)), badge 4, HM04
seg s30 s29 FLAG_BADGE04_GET --walk GOTOWARP:2 --walk WAIT:400 --walk GOTO:12,12 --walk UP:0 --walk TALK:30 --walk WAIT:1500 \
  --walk GOTOWARP:0 --walk WAIT:400 --check FLAG_BADGE04_GET --expect MAP_PARCEL_RIVER
# the six Elvsund readings and TRYGVE on the east bank, then ILEX at (54,6) signs the Watershed certification
# HM04 STRENGTH onto the partner (bag: HM01 Cut, HM04 Strength, HM05 Flash, HM06 Rock Smash -> index 1)
seg s30b s30 - --walk TEACHHM:HM04,2 --walk WAIT:200 --expect MAP_PARCEL_RIVER
seg s31 s30b - --walk GOTO:54,33 --walk RIGHT:0 --walk TALK:2 --walk WAIT:300 \
  --walk GOTO:49,27 --walk UP:0 --walk TALK:2 --walk WAIT:300 \
  --walk GOTO:54,28 --walk UP:0 --walk TALK:5 --walk WAIT:400 \
  --walk GOTO:54,24 --walk RIGHT:0 --walk TALK:2 --walk WAIT:300 \
  --walk GOTO:54,10 --walk RIGHT:0 --walk TALK:2 --walk WAIT:300 \
  --walk GOTO:54,2 --walk RIGHT:0 --walk TALK:2 --walk WAIT:300 \
  --check VAR_SKALDMERE_CH3_EVIDENCE --check TRAINER_SKALD_RIV_TRYGVE --expect MAP_PARCEL_RIVER
seg s32 s31 FLAG_SKALDMERE_WATERSHED_CERT --walk GOTO:54,7 --walk UP:0 --walk TALK:16 --walk WAIT:1200 --check FLAG_SKALDMERE_WATERSHED_CERT --expect MAP_PARCEL_RIVER
# north into the Highlands (Haukfell); the slide scene and the rock/boulder row below VALE's gate
seg s33 s32 - --walk GOTOEDGE:up --walk UP:0 --walk WAIT:1500 --expect MAP_PARCEL_HIGHLANDS
echo "=== chapter 3 complete, Highlands reached $(date +%H:%M:%S)"
