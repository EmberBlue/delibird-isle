#!/bin/bash
# clean ROM for delivery, then the probe ROM, then the whole playthrough from the ferry
cd /home/user/delibird-isle
S=${SKALD_SCRATCH:-$(ls -d /tmp/claude-0/-home-user-delibird-isle/*/scratchpad | head -1)}
touch data/event_scripts.s data/map_events.s data/maps.s src/tilesets.c
make -j$(nproc) modern > /tmp/build_clean3.log 2>&1 || { echo "clean build failed"; exit 1; }
cp pokeemerald.gba $S/skaldmere.gba
python3 tools/skald/probe_hook.py --on
make -j$(nproc) modern > /tmp/build_hook3.log 2>&1 || { python3 tools/skald/probe_hook.py --off; echo "hook build failed"; exit 1; }
cp pokeemerald.gba $S/probe/hookon.gba && cp pokeemerald.map $S/probe/hookon.map
python3 tools/skald/probe_hook.py --off
echo "builds done $(date +%H:%M:%S)"
bash $S/play/run_rest.sh
