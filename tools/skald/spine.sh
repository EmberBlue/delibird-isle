#!/bin/bash
# The certification spine, fought through in the emulator against a probe-hook ROM (see the skald-verify skill):
# every leader's exam + battle + badge, the five signings, Heron's confession and Cordelia's boardroom.
#   bash tools/skald/spine.sh /path/hookon.gba /path/hookon.map
set -u
ROM=$1; MAP=$2
cd "$(dirname "$0")/../.."
W="python3 tools/skald/walktest.py --rom $ROM --map $MAP --party SPECIES_MEWTWO --dismiss 0"
$W --spawn MAP_PARCEL_FERNWICK_HALL:5,5 --walk UP:0 --walk A:300 --check FLAG_BADGE01_GET 2>&1 | tail -1
$W --spawn MAP_PARCEL_CORRIDOR:43,12 --walk RIGHT:0 --walk A:300 --check FLAG_BADGE02_GET 2>&1 | tail -1
$W --spawn MAP_PARCEL_FLOODBASIN:20,1 --walk LEFT:0 --walk A:300 --check FLAG_BADGE03_GET 2>&1 | tail -1
$W --spawn MAP_PARCEL_RIVER_BOARD:12,13 --walk UP:0 --walk A:300 --check FLAG_BADGE04_GET 2>&1 | tail -1
$W --spawn MAP_PARCEL_HIGHLANDS:24,43 --walk UP:0 --walk A:300 --check FLAG_BADGE05_GET 2>&1 | tail -1
$W --spawn MAP_PARCEL_COAST:34,53 --walk RIGHT:0 --walk A:350 --check FLAG_BADGE06_GET 2>&1 | tail -1
$W --spawn MAP_PARCEL_WEATHER_INSTITUTE2_F:10,10 --flag TRAINER_SKALD_RAIN --flag TRAINER_SKALD_SUN --flag TRAINER_SKALD_SAND --flag TRAINER_SKALD_ICE --walk UP:0 --walk A:650 --check FLAG_BADGE07_GET 2>&1 | tail -1
$W --spawn MAP_PARCEL_DELIBIRD:11,12 --walk UP:0 --walk A:300 --check FLAG_BADGE08_GET 2>&1 | tail -1
$W --spawn MAP_PARCEL_FERNWICK_HQ:6,7 --flag FLAG_BADGE01_GET --walk TAP:UP --walk A:40 --walk WAIT:3000 --check FLAG_SKALDMERE_FOREST_CERT 2>&1 | tail -1
$W --spawn MAP_PARCEL_FERNWICK_HQ:6,7 --flag FLAG_SKALDMERE_FOREST_CERT --var VAR_SKALDMERE_CH2_EVIDENCE=0xFFFF --walk TAP:UP --walk A:40 --walk WAIT:4000 --check FLAG_SKALDMERE_WETLAND_CERT 2>&1 | tail -1
$W --spawn MAP_PARCEL_RIVER:54,7 --var VAR_SKALDMERE_CH3_EVIDENCE=0xFFFF --flag FLAG_BADGE04_GET --flag FLAG_SKALDMERE_WETLAND_CERT --flag TRAINER_SKALD_RIV_TRYGVE --walk TAP:UP --walk A:90 --walk WAIT:4000 --check FLAG_SKALDMERE_WATERSHED_CERT 2>&1 | tail -1
$W --spawn MAP_PARCEL_HIGHLANDS:34,13 --var VAR_SKALDMERE_CH4_EVIDENCE=0xFFFF --flag FLAG_BADGE05_GET --flag FLAG_SKALDMERE_WATERSHED_CERT --walk UP:0 --walk A:90 --walk WAIT:4000 --check FLAG_SKALDMERE_HIGHLAND_CERT 2>&1 | tail -1
$W --spawn MAP_PARCEL_COAST:29,54 --var VAR_SKALDMERE_CH6_EVIDENCE=0xFFFF --flag FLAG_BADGE06_GET --flag FLAG_SKALDMERE_HIGHLAND_CERT --walk UP:0 --walk A:110 --walk WAIT:4000 --check FLAG_SKALDMERE_COASTAL_CERT 2>&1 | tail -1
$W --spawn MAP_PARCEL_MARSH:19,11 --flag FLAG_SKALDMERE_HERON_MET --var VAR_SKALDMERE_CH7_EVIDENCE=0xFFFF --walk UP:0 --walk A:700 --check FLAG_SKALDMERE_FINALE_DONE 2>&1 | tail -1
$W --spawn MAP_PARCEL_BOARDROOM:17,7 --flag FLAG_SKALDMERE_FINALE_DONE --walk UP:0 --walk A:1300 --check FLAG_SKALDMERE_CORDELIA_DONE 2>&1 | tail -1
