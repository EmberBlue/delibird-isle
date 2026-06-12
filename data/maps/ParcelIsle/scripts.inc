ParcelIsle_MapScripts::
# 14 "data/maps/ParcelIsle/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelIsle_SetVisited
# 15 "data/maps/ParcelIsle/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelIsle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelIsle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/ParcelIsle/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelIsle_Arrival
	.2byte 0


ParcelIsle_SetVisited::
# 21 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_VISITED_PARCEL_ISLE
	end


ParcelIsle_Arrival::
# 29 "data/maps/ParcelIsle/scripts.pory"
	setvar VAR_TEMP_0, 1
# 30 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_ARRIVAL_INTRO, ParcelIsle_Arrival_2
# 33 "data/maps/ParcelIsle/scripts.pory"
	lockall
# 34 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Arrival_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Arrival_Text_1, MSGBOX_DEFAULT
# 36 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 37 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 38 "data/maps/ParcelIsle/scripts.pory"
	delay 96
# 39 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Arrival_Text_2, MSGBOX_DEFAULT
# 40 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 41 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALDMERE_ARRIVAL_INTRO
# 42 "data/maps/ParcelIsle/scripts.pory"
	releaseall
	end

ParcelIsle_Arrival_2:
	end


ParcelIsle_HeavyCoat::
# 48 "data/maps/ParcelIsle/scripts.pory"
	lock
# 49 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 50 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_0, MSGBOX_DEFAULT
# 51 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_1, MSGBOX_DEFAULT
# 52 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_Fisher::
# 58 "data/maps/ParcelIsle/scripts.pory"
	lock
# 59 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 60 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_0, MSGBOX_DEFAULT
# 61 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_Shopkeeper::
# 67 "data/maps/ParcelIsle/scripts.pory"
	lock
# 68 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 69 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Shopkeeper_Text_0, MSGBOX_DEFAULT
# 70 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Shopkeeper_Text_1, MSGBOX_DEFAULT
# 71 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_Neighbor::
# 78 "data/maps/ParcelIsle/scripts.pory"
	lock
# 79 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 80 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_0, MSGBOX_DEFAULT
# 81 "data/maps/ParcelIsle/scripts.pory"
	applymovement 4, Movement_GlanceAway
# 82 "data/maps/ParcelIsle/scripts.pory"
	waitmovement 0
# 83 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_1, MSGBOX_DEFAULT
# 84 "data/maps/ParcelIsle/scripts.pory"
	release
	end


# 88 "data/maps/ParcelIsle/scripts.pory"
Movement_GlanceAway:
# 89 "data/maps/ParcelIsle/scripts.pory"
	face_right
# 90 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 91 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 92 "data/maps/ParcelIsle/scripts.pory"
	step_end

ParcelIsle_FerrySign::
# 96 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerrySign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_Arrival_Text_0:
# 34 "data/maps/ParcelIsle/scripts.pory"
	.string "In an age of unstable climates and\n"
	.string "shrinking wildlands, the bond between\l"
	.string "people and Pokémon has changed. Some\l"
	.string "work to restore balance. Others seek\l"
	.string "control.$"

ParcelIsle_Arrival_Text_1:
# 35 "data/maps/ParcelIsle/scripts.pory"
	.string "You've just arrived from Johto, leaving\n"
	.string "behind your old home and Pokémon. You\l"
	.string "carry only a bag, a notebook… and a\l"
	.string "memory.$"

ParcelIsle_Arrival_Text_2:
# 39 "data/maps/ParcelIsle/scripts.pory"
	.string "The ferry horn fades out across the\n"
	.string "water.\p"
	.string "The boards are damp under your boots.$"

ParcelIsle_HeavyCoat_Text_0:
# 50 "data/maps/ParcelIsle/scripts.pory"
	.string "Off the ferry, then. Lodging's up the\n"
	.string "track--the door with the lamp lit.$"

ParcelIsle_HeavyCoat_Text_1:
# 51 "data/maps/ParcelIsle/scripts.pory"
	.string "Mind the boards. They're slick when the\n"
	.string "fog sits.\p"
	.string "…And keep your questions for morning,\n"
	.string "eh?$"

ParcelIsle_Fisher_Text_0:
# 60 "data/maps/ParcelIsle/scripts.pory"
	.string "Currents have been wrong for weeks.\n"
	.string "The fish know it before we do.\p"
	.string "…You didn't hear that from me.$"

ParcelIsle_Shopkeeper_Text_0:
# 69 "data/maps/ParcelIsle/scripts.pory"
	.string "Wind's been coming off the water wrong\n"
	.string "all month. Strange weather inland,\l"
	.string "too--my supplier says the fog sits in\l"
	.string "the valleys till noon.$"

ParcelIsle_Shopkeeper_Text_1:
# 70 "data/maps/ParcelIsle/scripts.pory"
	.string "You get used to it.\n"
	.string "Mostly.$"

ParcelIsle_Neighbor_Text_0:
# 80 "data/maps/ParcelIsle/scripts.pory"
	.string "Oh--you're the one the scientist wrote\n"
	.string "about, aren't you? The young naturalist\l"
	.string "with the--$"

ParcelIsle_Neighbor_Text_1:
# 83 "data/maps/ParcelIsle/scripts.pory"
	.string "…Forget I said anything. It's cold out.\n"
	.string "You should get indoors, {PLAYER}.$"

ParcelIsle_FerrySign_Text_0:
# 96 "data/maps/ParcelIsle/scripts.pory"
	.string "FERRY LANDING\p"
	.string "The mainland schedule board is blank.\n"
	.string "It has been for a while.$"
