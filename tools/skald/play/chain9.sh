#!/bin/bash
# Chapter 9 (after the finale: the boardroom, the epilogue tour, the credits, the post-game save) in savestate
# segments, continuing from chain8.sh's s71 (back in Fernwick at (11,16) with the record filed).
# Usage: chain9.sh [first_segment_name]
cd /home/user/delibird-isle
S=${SKALD_SCRATCH:-$(ls -d /tmp/claude-0/-home-user-delibird-isle/*/scratchpad | head -1)}
P=$S/play/run
W="python3 tools/skald/walktest.py --rom $S/probe/hookon.gba --map $S/probe/hookon.map --fight"
START=${1:-s72}
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
# HALE in the HQ (warp 1) names the next reader; then the road back down: the Mistwood deadfall from above
seg s72 s71 - --walk GOTOWARP:1 --walk WAIT:400 --walk GOTO:6,7 --walk UP:0 --walk TALK:8 --walk WAIT:400 \
  --walk GOTOWARP:0 --walk WAIT:400 --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 --expect MAP_PARCEL_MISTWOOD
seg s73 s72 - --walk GOTO:14,2 --walk DOWN:0 --walk TALK:2 --walk WAIT:1500 --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 \
  --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 --walk GOTOEDGE:down --walk DOWN:0 --walk WAIT:600 --expect MAP_PARCEL_ISLE
# the ferry to the Coast (second choice); the Mereholt aide on the quay (31,27) walks you up
seg s74 s73 - --walk GOTO:15,33 --walk DOWN:0 --walk MENU:1,14 --walk WAIT:900 --expect MAP_PARCEL_COAST
seg s75 s74 - --walk GOTO:31,28 --walk UP:0 --walk MENU:0,8 --walk WAIT:900 --expect MAP_PARCEL_BOARDROOM
# CORDELIA BROOKE (17,5) sits behind the desk: round it and speak from (17,4). The price, the battle, the room between you
seg s76 s75 FLAG_SKALDMERE_CORDELIA_DONE --walk GOTO:17,4 --walk DOWN:0 --walk TALKFIGHT:80 --walk TALK:20 --walk WAIT:600 \
  --check FLAG_SKALDMERE_CORDELIA_DONE --expect MAP_PARCEL_BOARDROOM
# the stairs (2,2): the eight-stop tour, the bridge, the credits, the soft reset, CONTINUE, and Fernwick again.
# One long A-mash (the tour is all text; A skips the intro and takes CONTINUE), a screenshot every 1200 frames.
seg s77 s76 FLAG_SYS_GAME_CLEAR --trace 1200 --walk GOTO:3,2 --walk LEFT:1 --walk TALK:150 \
  --check FLAG_SYS_GAME_CLEAR --check FLAG_SKALDMERE_EPILOGUE_DONE --check VAR_SKALD_EPILOGUE --expect MAP_PARCEL_FERNWICK
echo "=== the game is played through $(date +%H:%M:%S)"
