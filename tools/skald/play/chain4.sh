#!/bin/bash
# Chapter 4 (Haukfell, the Highlands) in savestate segments, continuing from chain3.sh's s33 (arrival at the
# Highlands' south edge; FirstEntry has fired).
# Usage: chain4.sh [first_segment_name]
cd /home/user/delibird-isle
S=${SKALD_SCRATCH:-$(ls -d /tmp/claude-0/-home-user-delibird-isle/*/scratchpad | head -1)}
P=$S/play/run
W="python3 tools/skald/walktest.py --rom $S/probe/hookon.gba --map $S/probe/hookon.map --fight"
START=${1:-s34}
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
# the village: PERRIN's scene on the way north (row 73), the HOMESTEADER (18,66) from below, the drunken forest sign
# (9,66) from the shore path, then up the new stair (31,69) to the thermokarst sign (29,52)
seg s34 s33 - --walk GOTO:20,74 --walk UP:0 --walk WAIT:2500 --walk GOTO:18,67 --walk UP:0 --walk TALK:8 --walk WAIT:400 \
  --walk GOTO:8,66 --walk RIGHT:0 --walk TALK:3 --walk WAIT:300 --expect MAP_PARCEL_HIGHLANDS
seg s35 s34 - --walk GOTO:28,52 --walk RIGHT:0 --walk TALK:3 --walk WAIT:300 --check VAR_SKALDMERE_CH4_EVIDENCE --expect MAP_PARCEL_HIGHLANDS
# the slide: ILEX's voice from above (trigger row 49), STRENGTH on the east boulder (26,48) and through the gap
seg s36 s35 - --walk GOTO:26,50 --walk UP:0 --walk WAIT:2500 --walk UP:0 --walk TALK:1 --walk WAIT:400 \
  --walk UP:0 --walk WAIT:60 --walk UP:0 --walk WAIT:60 --walk UP:0 --walk WAIT:60 --walk UP:0 --walk WAIT:200 --expect MAP_PARCEL_HIGHLANDS
# the drill sign (28,38) from (27,38), then VALE's gate (trigger (24,42)/(25,42)): the exam, badge 5, HM03
seg s37 s36 FLAG_BADGE05_GET --walk GOTO:27,38 --walk RIGHT:0 --walk TALK:3 --walk WAIT:300 \
  --walk GOTO:24,44 --walk UP:0 --walk UP:0 --walk WAIT:5000 --check FLAG_BADGE05_GET --expect MAP_PARCEL_HIGHLANDS
# SURF onto the lead (bag: HM01 Cut, HM03 Surf, HM04 Strength, HM05 Flash, HM06 Rock Smash -> index 1; slot 1 has a free move)
seg s38 s37 - --walk TEACHHM:HM03,1 --walk WAIT:200 --expect MAP_PARCEL_HIGHLANDS
# the sea for SURF: from the village beach (12,60) north up the coast and the lake to the summit trail's shore (13,36),
# then the lowlander (33,20), the band stakes (25,14) and ILEX (25,13) on the plateau
seg s39 s38 - --walk GOTO:12,60 --walk UP:0 --walk TALK:1 --walk WAIT:400 --walk GOTO:13,36 --walk WAIT:300 \
  --walk GOTO:32,20 --walk RIGHT:0 --walk TALK:4 --walk WAIT:300 \
  --walk GOTO:24,14 --walk RIGHT:0 --walk TALK:3 --walk WAIT:300 \
  --walk GOTO:24,13 --walk RIGHT:0 --walk TALK:8 --walk WAIT:300 --check VAR_SKALDMERE_CH4_EVIDENCE --expect MAP_PARCEL_HIGHLANDS
# JARLE's tile, the stairs where the slope was, HALE at the summit (34,11): the Highland certification
seg s40 s39 FLAG_SKALDMERE_HIGHLAND_CERT --walk GOTO:34,12 --walk UP:0 --walk TALK:26 --walk WAIT:1500 --check FLAG_SKALDMERE_HIGHLAND_CERT --expect MAP_PARCEL_HIGHLANDS
echo "=== chapter 4 complete $(date +%H:%M:%S)"
