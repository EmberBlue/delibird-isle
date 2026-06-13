ParcelFerry_MapScripts::
# 10 "data/maps/ParcelFerry/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelFerry_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelFerry_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/ParcelFerry/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelFerry_Opening
	.2byte 0


ParcelFerry_Opening::
# 16 "data/maps/ParcelFerry/scripts.pory"
	setvar VAR_TEMP_0, 1
# 17 "data/maps/ParcelFerry/scripts.pory"
	lockall
# 18 "data/maps/ParcelFerry/scripts.pory"
	msgbox ParcelFerry_Opening_Text_0, MSGBOX_DEFAULT
# 19 "data/maps/ParcelFerry/scripts.pory"
	msgbox ParcelFerry_Opening_Text_1, MSGBOX_DEFAULT
# 20 "data/maps/ParcelFerry/scripts.pory"
	closemessage
# 21 "data/maps/ParcelFerry/scripts.pory"
	delay 30
# 22 "data/maps/ParcelFerry/scripts.pory"
	msgbox ParcelFerry_Opening_Text_2, MSGBOX_DEFAULT
# 23 "data/maps/ParcelFerry/scripts.pory"
	msgbox ParcelFerry_Opening_Text_3, MSGBOX_DEFAULT
# 24 "data/maps/ParcelFerry/scripts.pory"
	multichoice 20, 6, MULTI_SKALD_MANIFEST, FALSE
# 25 "data/maps/ParcelFerry/scripts.pory"
	switch VAR_RESULT
# 26 "data/maps/ParcelFerry/scripts.pory"
	case 0, ParcelFerry_Opening_3
# 28 "data/maps/ParcelFerry/scripts.pory"
	case 1, ParcelFerry_Opening_4
# 31 "data/maps/ParcelFerry/scripts.pory"
	setvar VAR_0x8004, 0
ParcelFerry_Opening_1:
# 33 "data/maps/ParcelFerry/scripts.pory"
	special SkaldmereSetGender
# 34 "data/maps/ParcelFerry/scripts.pory"
	msgbox ParcelFerry_Opening_Text_4, MSGBOX_DEFAULT
# 35 "data/maps/ParcelFerry/scripts.pory"
	closemessage
# 36 "data/maps/ParcelFerry/scripts.pory"
	delay 40
# 37 "data/maps/ParcelFerry/scripts.pory"
	playse SE_SHIP
# 38 "data/maps/ParcelFerry/scripts.pory"
	delay 60
# 39 "data/maps/ParcelFerry/scripts.pory"
	warp MAP_PARCEL_ISLE, 41, 48
# 40 "data/maps/ParcelFerry/scripts.pory"
	waitstate
	end

ParcelFerry_Opening_3:
# 27 "data/maps/ParcelFerry/scripts.pory"
	setvar VAR_0x8004, 0
	goto ParcelFerry_Opening_1

ParcelFerry_Opening_4:
# 29 "data/maps/ParcelFerry/scripts.pory"
	setvar VAR_0x8004, 1
	goto ParcelFerry_Opening_1


ParcelFerry_Attendant::
# 45 "data/maps/ParcelFerry/scripts.pory"
	lock
# 46 "data/maps/ParcelFerry/scripts.pory"
	faceplayer
# 47 "data/maps/ParcelFerry/scripts.pory"
	msgbox ParcelFerry_Attendant_Text_0, MSGBOX_DEFAULT
# 48 "data/maps/ParcelFerry/scripts.pory"
	release
	end


ParcelFerry_Opening_Text_0:
# 18 "data/maps/ParcelFerry/scripts.pory"
	.string "In an age of unstable climates and\n"
	.string "shrinking wildlands, the bond between\l"
	.string "people and Pokémon has changed. Some\l"
	.string "work to restore balance. Others seek\l"
	.string "control.$"

ParcelFerry_Opening_Text_1:
# 19 "data/maps/ParcelFerry/scripts.pory"
	.string "You've just arrived from Johto, leaving\n"
	.string "behind your old home and Pokémon. You\l"
	.string "carry only a bag, a notebook… and a\l"
	.string "memory.$"

ParcelFerry_Opening_Text_2:
# 22 "data/maps/ParcelFerry/scripts.pory"
	.string "The cabin sways. Beyond the porthole,\n"
	.string "gray water and grayer sky.\p"
	.string "The attendant works down the aisle,\n"
	.string "checking the manifest against the\l"
	.string "faces.$"

ParcelFerry_Opening_Text_3:
# 23 "data/maps/ParcelFerry/scripts.pory"
	.string "Attendant: Wren, off at the island\n"
	.string "stop, yes?\p"
	.string "The ink's run. Says here…$"

ParcelFerry_Opening_Text_4:
# 34 "data/maps/ParcelFerry/scripts.pory"
	.string "The attendant marks the page and\n"
	.string "moves on.\p"
	.string "Attendant: We're coming in.\n"
	.string "Mind the boards--they'll be slick.$"

ParcelFerry_Attendant_Text_0:
# 47 "data/maps/ParcelFerry/scripts.pory"
	.string "Attendant: Island stop's next.\n"
	.string "Gather your things.$"
