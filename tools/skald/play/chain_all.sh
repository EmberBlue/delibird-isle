#!/bin/bash
# Chapter 1 from a real new game, in savestate segments. Usage: chain_all.sh [first_segment_name]
# Each segment loads the previous state; a segment whose --check flag or --expect fails stops the chain.
cd /home/user/delibird-isle
S=${SKALD_SCRATCH:-$(ls -d /tmp/claude-0/-home-user-delibird-isle/*/scratchpad | head -1)}
P=$S/play/run
mkdir -p $P
W="python3 tools/skald/walktest.py --rom $S/probe/hookon.gba --map $S/probe/hookon.map --fight"
START=${1:-s01}
go=0
seg() {  # seg NAME PREV must_have_flag_or_- walktest-args...
  name=$1; prev=$2; need=$3; shift 3
  [ "$name" = "$START" ] && go=1
  [ $go = 1 ] || return 0
  echo "=== $name  $(date +%H:%M:%S)"
  if [ "$prev" = "-" ]; then
    timeout 560 $W --save-state $P/$name.state --out $P/$name.png "$@" > $P/$name.log 2>&1
  else
    timeout 560 $W --load-state $P/$prev.state --save-state $P/$name.state --out $P/$name.png "$@" > $P/$name.log 2>&1
  fi
  rc=$?
  grep -v "GOTO .*: at\|TAP " $P/$name.log | tail -5
  if [ $rc -ne 0 ]; then echo "!!! $name failed (exit $rc)"; exit 1; fi
  if [ "$need" != "-" ] && ! grep -q "$need = 1" $P/$name.log; then echo "!!! $name: $need not set"; exit 1; fi
}
seg s01 -   FLAG_SKALDMERE_ARRIVAL_INTRO --spawn MAP_PARCEL_FERRY:4,6 --party SPECIES_MEWTWO --walk WAIT:4500 --check FLAG_SKALDMERE_ARRIVAL_INTRO
seg s02 s01 FLAG_SKALD_MEADOW_INTRO --walk GOTOEDGE:up --walk UP:0 --walk WAIT:1500 --expect MAP_PARCEL_MEADOW --check FLAG_SKALD_MEADOW_INTRO
seg s03 s02 FLAG_SYS_POKEMON_GET --walk GOTO:13,9 --walk RIGHT:0 --walk A:1 --walk IDLE:150 --walk A:1 --walk IDLE:150 --walk A:1 --walk IDLE:150 --walk A:1 --walk A:40 --walk WAIT:1500 --check FLAG_SYS_POKEMON_GET --check FLAG_SKALD_PARTNER_SEEDOT
seg s04 s03 - --walk GOTO:10,3 --walk UP:3 --walk WAIT:600 --expect MAP_PARCEL_ROUTE1
seg s05 s04 - --walk GOTO:11,27 --walk UP:0 --walk WAIT:4000 --expect MAP_PARCEL_ROUTE1
seg s06 s05 FLAG_SKALD_ROUTE1_SCENE_DONE --walk GOTOEDGE:up --walk UP:0 --walk WAIT:600 --expect MAP_PARCEL_MISTWOOD --check FLAG_SKALD_ROUTE1_SCENE_DONE
seg s07a s06 FLAG_SKALD_SNARE_FREED_1 --walk GOTO:3,30 --walk LEFT:0 --walk TALK:4 --walk WAIT:300 --check FLAG_SKALD_SNARE_FREED_1
seg s07b s07a FLAG_SKALD_SNARE_FREED_3 --walk GOTO:3,7 --walk UP:0 --walk TALK:4 --walk WAIT:300 --check FLAG_SKALD_SNARE_FREED_3
seg s07c s07b FLAG_SKALD_SNARE_FREED_2 --walk GOTO:25,10 --walk RIGHT:0 --walk TALK:4 --walk WAIT:300 --check FLAG_SKALD_SNARE_FREED_2
seg s08 s07c FLAG_SKALD_MISTWOOD_CUT_GIVEN --walk GOTOWARP:1 --walk WAIT:300 --walk GOTO:6,5 --walk UP:0 --walk TALK:10 --walk WAIT:900 --check FLAG_SKALD_MISTWOOD_CUT_GIVEN --expect MAP_PARCEL_MISTWOOD_POST
# teach CUT: Bag (2nd menu item) -> TMs & HMs (two pockets right) -> HM01 -> USE -> text -> YES -> party: DOWN to the partner -> learn
seg s09 s08 - --walk GOTOWARP:0 --walk WAIT:400 --walk TEACHHM:0,2 --walk WAIT:200 --expect MAP_PARCEL_MISTWOOD
seg s10 s09 - --walk GOTO:14,4 --walk UP:0 --walk TALK:2 --walk WAIT:1500 --walk UP:3 --walk UP:0 --walk WAIT:900 --expect MAP_PARCEL_FERNWICK
seg s11 s10 FLAG_SKALDMERE_STATION_BRIEF --walk GOTOWARP:1 --walk WAIT:400 --walk GOTO:6,7 --walk UP:0 --walk TALK:16 --walk WAIT:900 --check FLAG_SKALDMERE_STATION_BRIEF --check FLAG_SYS_POKEDEX_GET --expect MAP_PARCEL_FERNWICK_HQ
# heal at Fernwick's Center before the exam (the Center door is warp 6; the nurse stands at (7,2))
seg s11b s11 - --walk GOTOWARP:0 --walk WAIT:400 --walk GOTOWARP:6 --walk WAIT:400 --walk GOTO:7,4 --walk UP:0 --walk TALK:5 --walk WAIT:900 --walk GOTOWARP:0 --walk WAIT:400 --expect MAP_PARCEL_FERNWICK
seg s12 s11b FLAG_BADGE01_GET --walk GOTOWARP:3 --walk WAIT:400 --walk GOTO:5,4 --walk UP:0 --walk TALK:30 --walk WAIT:1200 --check FLAG_BADGE01_GET --expect MAP_PARCEL_FERNWICK_HALL
seg s13 s12 FLAG_SKALDMERE_FOREST_CERT --walk GOTOWARP:0 --walk WAIT:400 --walk GOTOWARP:1 --walk WAIT:400 --walk GOTO:6,7 --walk UP:0 --walk TALK:20 --walk WAIT:900 --check FLAG_SKALDMERE_FOREST_CERT --expect MAP_PARCEL_FERNWICK_HQ
echo "=== chapter 1 complete $(date +%H:%M:%S)"
