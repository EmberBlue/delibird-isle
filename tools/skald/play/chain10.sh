#!/bin/bash
# The post-game, continuing from chain9.sh's s77 (CONTINUE after the credits: Fernwick, outside the Centre):
# the SMEARGLE at the pond, TARN's rematch, the road and the ferry again, PERRIN's last battle.
# Usage: chain10.sh [first_segment_name]
cd /home/user/delibird-isle
S=${SKALD_SCRATCH:-$(ls -d /tmp/claude-0/-home-user-delibird-isle/*/scratchpad | head -1)}
P=$S/play/run
W="python3 tools/skald/walktest.py --rom $S/probe/hookon.gba --map $S/probe/hookon.map --fight"
START=${1:-s78}
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
# the SMEARGLE on the pond bank (9,27), from the east: "Let it come?" YES
seg s78 s77 FLAG_SKALD_SMEARGLE_DONE --walk GOTO:10,27 --walk LEFT:0 --walk TALK:14 --walk WAIT:300 \
  --check FLAG_SKALD_SMEARGLE_DONE --expect MAP_PARCEL_FERNWICK
# the Certification Hall (warp 3): TARN at full strength
seg s79 s78 "TRAINER_SKALD_GYM1_R defeated" --walk GOTOWARP:3 --walk WAIT:400 --walk GOTO:5,4 --walk UP:0 --walk TALKFIGHT:10 --walk TALK:4 --walk WAIT:300 \
  --check TRAINER_SKALD_GYM1_R --expect MAP_PARCEL_FERNWICK_HALL
# out, down through Mistwood (the deadfall from above), Route 1, the Meadow, Saltwick, the ferry to the Coast
seg s80 s79 - --walk GOTOWARP:0 --walk WAIT:400 --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 \
  --walk GOTO:14,2 --walk DOWN:0 --walk TALK:2 --walk WAIT:1500 --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 \
  --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 --expect MAP_PARCEL_ISLE
seg s81 s80 - --walk GOTO:15,33 --walk DOWN:0 --walk MENU:1,14 --walk WAIT:900 --expect MAP_PARCEL_COAST
# the Mereholt office (warp 1), upstairs (warp 2): PERRIN at the desk by the window (12,6), from above
seg s82 s81 FLAG_SKALD_PERRIN_7_DONE --walk GOTOWARP:1 --walk WAIT:400 --walk GOTOWARP:2 --walk WAIT:400 --walk GOTO:12,5 --walk DOWN:0 \
  --walk TALKFIGHT:10 --walk TALK:6 --walk WAIT:300 --check FLAG_SKALD_PERRIN_7_DONE --expect MAP_PARCEL_COAST_OFFICE2_F
echo "=== the post-game beats are played $(date +%H:%M:%S)"
