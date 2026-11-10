#!/bin/bash
# Chapter 2 in savestate segments, continuing from chain_all.sh's s13 (the Forest signing, inside the HQ).
# Usage: chain2.sh [first_segment_name]
cd /home/user/delibird-isle
S=${SKALD_SCRATCH:-$(ls -d /tmp/claude-0/-home-user-delibird-isle/*/scratchpad | head -1)}
P=$S/play/run
W="python3 tools/skald/walktest.py --rom $S/probe/hookon.gba --map $S/probe/hookon.map --fight"
START=${1:-s14}
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
# out of the HQ, north through Fernwick into the Wetlands (Reedmere)
seg s14 s13 - --walk GOTOWARP:0 --walk WAIT:400 --walk GOTOEDGE:up --walk UP:0 --walk WAIT:1200 --expect MAP_PARCEL_WETLANDS
# across the Wetlands to its east edge, into the Corridor (scenes on the way are dismissed)
seg s15 s14 - --walk GOTOEDGE:right --walk RIGHT:0 --walk WAIT:1200 --expect MAP_PARCEL_CORRIDOR
# MIRREN's checkpoint at (44,12): step onto it from (43,12); she approaches, battle, badge 2, HM05
seg s16 s15 FLAG_BADGE02_GET --walk GOTO:43,12 --walk RIGHT:0 --walk WAIT:4500 --check FLAG_BADGE02_GET --expect MAP_PARCEL_CORRIDOR
# east along the Corridor (the culvert scene), then north into the Floodbasin
seg s17 s16 FLAG_SKALDMERE_FLOODBASIN_ARRIVAL --walk GOTOEDGE:up --walk UP:0 --walk WAIT:600 --walk GOTO:8,92 --walk WAIT:1500 --check FLAG_SKALDMERE_FLOODBASIN_ARRIVAL --expect MAP_PARCEL_FLOODBASIN
# the six Leirvik readings: Discharge (8,18), Sheen (14,14), Dead reeds (22,17) are signs; the WOOPER (10,29),
# the MAGIKARP (18,17) and the remediator (28,18) are objects -- stand south of each, face up, read
seg s18 s17 - --walk GOTO:10,30 --walk UP:0 --walk TALK:3 --walk WAIT:300 \
  --walk GOTO:7,18 --walk RIGHT:0 --walk TALK:2 --walk WAIT:300 \
  --walk GOTO:14,15 --walk UP:0 --walk TALK:2 --walk WAIT:300 \
  --walk GOTO:22,16 --walk DOWN:0 --walk TALK:2 --walk WAIT:300 \
  --walk GOTO:18,16 --walk DOWN:0 --walk TALK:3 --walk WAIT:300 \
  --walk GOTO:28,17 --walk DOWN:0 --walk TALK:12 --walk WAIT:1800 --walk TALK:14 --walk WAIT:900 \
  --check VAR_SKALDMERE_CH2_EVIDENCE --expect MAP_PARCEL_FLOODBASIN
# BREEN's checkpoint at (19,1): step onto it from (20,1); exam, badge 3, HM06
seg s19 s18 FLAG_BADGE03_GET --walk GOTO:20,1 --walk LEFT:0 --walk WAIT:4500 --check FLAG_BADGE03_GET --expect MAP_PARCEL_FLOODBASIN
echo "=== chapter 2 to BREEN complete $(date +%H:%M:%S)"
# teach ROCK SMASH (HM06 is the second item of the TMs & HMs pocket) to the partner, smash the three rocks at
# (9..11,1) from the east, then step north off the top row into the River
seg s20 s19 - --walk TEACHHM:HM06,2 --walk WAIT:200 --walk GOTO:12,1 --walk LEFT:0 --walk TALK:2 --walk WAIT:500 \
  --walk LEFT:0 --walk LEFT:0 --walk TALK:2 --walk WAIT:500 --walk LEFT:0 --walk LEFT:0 --walk TALK:2 --walk WAIT:500 \
  --walk UP:0 --walk UP:0 --walk WAIT:1200 --expect MAP_PARCEL_RIVER
# the walk back for the Wetland signing: River -> Floodbasin -> Corridor -> Wetlands -> Fernwick, ILEX's report
# at the Survey office (door = warp 4; ILEX at (6,3)), then HALE at the HQ (warp 1; HALE at (6,6))
seg s21 s20 - --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 --expect MAP_PARCEL_FLOODBASIN
# back in the Floodbasin's neck the rocks have grown back: smash the one below, then south to the Corridor
seg s22 s21 - --walk DOWN:0 --walk TALK:2 --walk WAIT:500 --walk DOWN:0 --walk WAIT:100 --walk RIGHT:0 --walk TALK:2 --walk WAIT:500 --walk RIGHT:0 --walk WAIT:100 \
  --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 --expect MAP_PARCEL_CORRIDOR
seg s23 s22 - --walk GOTOEDGE:left --walk LEFT:0 --walk WAIT:600 --expect MAP_PARCEL_WETLANDS
seg s24 s23 - --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 --expect MAP_PARCEL_FERNWICK
seg s25 s24 FLAG_SKALDMERE_WETLAND_CERT --walk GOTOWARP:4 --walk WAIT:400 --walk GOTO:7,3 --walk LEFT:0 --walk TALK:8 --walk WAIT:600 \
  --walk GOTOWARP:0 --walk WAIT:400 --walk GOTOWARP:1 --walk WAIT:400 --walk GOTO:6,7 --walk UP:0 --walk TALK:20 --walk WAIT:900 \
  --check VAR_SKALDMERE_CH2_EVIDENCE --check FLAG_SKALDMERE_WETLAND_CERT --expect MAP_PARCEL_FERNWICK_HQ
echo "=== chapter 2 complete $(date +%H:%M:%S)"
