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
	playse SE_SHIP
# 35 "data/maps/ParcelIsle/scripts.pory"
	delay 96
# 36 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Arrival_Text_0, MSGBOX_DEFAULT
# 37 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 38 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALDMERE_ARRIVAL_INTRO
# 39 "data/maps/ParcelIsle/scripts.pory"
	releaseall
	end

ParcelIsle_Arrival_2:
	end


ParcelIsle_HeavyCoat::
# 45 "data/maps/ParcelIsle/scripts.pory"
	lock
# 46 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 47 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_0, MSGBOX_DEFAULT
# 48 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_1, MSGBOX_DEFAULT
# 49 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_Fisher::
# 55 "data/maps/ParcelIsle/scripts.pory"
	lock
# 56 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 57 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_0, MSGBOX_DEFAULT
# 58 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_Shopkeeper::
# 64 "data/maps/ParcelIsle/scripts.pory"
	lock
# 65 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 66 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Shopkeeper_Text_0, MSGBOX_DEFAULT
# 67 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Shopkeeper_Text_1, MSGBOX_YESNO
# 68 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelIsle_Shopkeeper_2
ParcelIsle_Shopkeeper_1:
# 71 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Shopkeeper_Text_2, MSGBOX_DEFAULT
# 72 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Shopkeeper_2:
# 69 "data/maps/ParcelIsle/scripts.pory"
	pokemart ParcelIsle_MartItems
	goto ParcelIsle_Shopkeeper_1


# 76 "data/maps/ParcelIsle/scripts.pory"

# 77 "data/maps/ParcelIsle/scripts.pory"
	.align 2
# 78 "data/maps/ParcelIsle/scripts.pory"
ParcelIsle_MartItems::
# 79 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_POKE_BALL
# 80 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_POTION
# 81 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 82 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 83 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_REPEL
# 84 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_NONE

ParcelIsle_KidTrainer::
# 88 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_KID, ParcelIsle_KidTrainer_Text_0, ParcelIsle_KidTrainer_Text_1
# 91 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidTrainer_Text_2, MSGBOX_DEFAULT
	end


ParcelIsle_ItemPotion::
# 96 "data/maps/ParcelIsle/scripts.pory"
	finditem ITEM_POTION
	end


ParcelIsle_Neighbor::
# 103 "data/maps/ParcelIsle/scripts.pory"
	lock
# 104 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 105 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_0, MSGBOX_DEFAULT
# 106 "data/maps/ParcelIsle/scripts.pory"
	applymovement 4, Movement_GlanceAway
# 107 "data/maps/ParcelIsle/scripts.pory"
	waitmovement 0
# 108 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_1, MSGBOX_DEFAULT
# 109 "data/maps/ParcelIsle/scripts.pory"
	release
	end


# 113 "data/maps/ParcelIsle/scripts.pory"
Movement_GlanceAway:
# 114 "data/maps/ParcelIsle/scripts.pory"
	face_right
# 115 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 116 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 117 "data/maps/ParcelIsle/scripts.pory"
	step_end

ParcelIsle_FerrySign::
# 121 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerrySign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_LabSign::
# 127 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LabSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_Arrival_Text_0:
# 36 "data/maps/ParcelIsle/scripts.pory"
	.string "The ferry horn fades out across the\n"
	.string "water.\p"
	.string "The boards are damp under your boots.$"

ParcelIsle_HeavyCoat_Text_0:
# 47 "data/maps/ParcelIsle/scripts.pory"
	.string "Off the ferry, then. Lodging's up the\n"
	.string "track--the door with the lamp lit.$"

ParcelIsle_HeavyCoat_Text_1:
# 48 "data/maps/ParcelIsle/scripts.pory"
	.string "Mind the boards. They're slick when the\n"
	.string "fog sits.\p"
	.string "…And keep your questions for morning,\n"
	.string "eh?$"

ParcelIsle_Fisher_Text_0:
# 57 "data/maps/ParcelIsle/scripts.pory"
	.string "Currents have been wrong for weeks.\n"
	.string "The fish know it before we do.\p"
	.string "…You didn't hear that from me.$"

ParcelIsle_Shopkeeper_Text_0:
# 66 "data/maps/ParcelIsle/scripts.pory"
	.string "Wind's been coming off the water wrong\n"
	.string "all month. Strange weather inland,\l"
	.string "too--my supplier says the fog sits in\l"
	.string "the valleys till noon.$"

ParcelIsle_Shopkeeper_Text_1:
# 67 "data/maps/ParcelIsle/scripts.pory"
	.string "You get used to it.\n"
	.string "Mostly.\p"
	.string "Need supplies? The shelf's stocked,\n"
	.string "when the boat remembers us.$"

ParcelIsle_Shopkeeper_Text_2:
# 71 "data/maps/ParcelIsle/scripts.pory"
	.string "Mind the fog out there.$"

ParcelIsle_KidTrainer_Text_0:
# 89 "data/maps/ParcelIsle/scripts.pory"
	.string "Timo: You came off the ferry!\n"
	.string "Mainlanders always have neat Pokémon.\l"
	.string "Battle me!$"

ParcelIsle_KidTrainer_Text_1:
# 90 "data/maps/ParcelIsle/scripts.pory"
	.string "Timo: Whoa. Okay.$"

ParcelIsle_KidTrainer_Text_2:
# 91 "data/maps/ParcelIsle/scripts.pory"
	.string "Timo: Gran says don't go past the\n"
	.string "bridge.\p"
	.string "She won't say why.$"

ParcelIsle_Neighbor_Text_0:
# 105 "data/maps/ParcelIsle/scripts.pory"
	.string "Oh--you're the one the scientist wrote\n"
	.string "about, aren't you? The young naturalist\l"
	.string "with the--$"

ParcelIsle_Neighbor_Text_1:
# 108 "data/maps/ParcelIsle/scripts.pory"
	.string "…Forget I said anything. It's cold out.\n"
	.string "You should get indoors, {PLAYER}.$"

ParcelIsle_FerrySign_Text_0:
# 121 "data/maps/ParcelIsle/scripts.pory"
	.string "FERRY LANDING\p"
	.string "The mainland schedule board is blank.\n"
	.string "It has been for a while.$"

ParcelIsle_LabSign_Text_0:
# 127 "data/maps/ParcelIsle/scripts.pory"
	.string "FIELD RESEARCH ANNEX\n"
	.string "Skaldmere Survey cooperative site\p"
	.string "A strip of red cloth is nailed under the\n"
	.string "plate, faded gray.$"
