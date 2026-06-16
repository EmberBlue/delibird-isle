ParcelIsle_MapScripts::
# 15 "data/maps/ParcelIsle/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelIsle_SetVisited
# 16 "data/maps/ParcelIsle/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelIsle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelIsle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/ParcelIsle/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelIsle_Arrival
	.2byte 0


ParcelIsle_SetVisited::
# 22 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_VISITED_PARCEL_ISLE
	end


ParcelIsle_Arrival::
# 30 "data/maps/ParcelIsle/scripts.pory"
	setvar VAR_TEMP_0, 1
# 31 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_ARRIVAL_INTRO, ParcelIsle_Arrival_2
# 34 "data/maps/ParcelIsle/scripts.pory"
	lockall
# 35 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 36 "data/maps/ParcelIsle/scripts.pory"
	delay 96
# 37 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Arrival_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 39 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALDMERE_ARRIVAL_INTRO
# 40 "data/maps/ParcelIsle/scripts.pory"
	releaseall
	end

ParcelIsle_Arrival_2:
	end


ParcelIsle_HeavyCoat::
# 46 "data/maps/ParcelIsle/scripts.pory"
	lock
# 47 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 48 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_0, MSGBOX_DEFAULT
# 49 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_1, MSGBOX_DEFAULT
# 50 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_Fisher::
# 56 "data/maps/ParcelIsle/scripts.pory"
	lock
# 57 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 58 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_0, MSGBOX_DEFAULT
# 59 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_Shopkeeper::
# 65 "data/maps/ParcelIsle/scripts.pory"
	lock
# 66 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 67 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Shopkeeper_Text_0, MSGBOX_DEFAULT
# 68 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Shopkeeper_Text_1, MSGBOX_YESNO
# 69 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelIsle_Shopkeeper_2
ParcelIsle_Shopkeeper_1:
# 72 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Shopkeeper_Text_2, MSGBOX_DEFAULT
# 73 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Shopkeeper_2:
# 70 "data/maps/ParcelIsle/scripts.pory"
	pokemart ParcelIsle_MartItems
	goto ParcelIsle_Shopkeeper_1


# 77 "data/maps/ParcelIsle/scripts.pory"

# 78 "data/maps/ParcelIsle/scripts.pory"
	.align 2
# 79 "data/maps/ParcelIsle/scripts.pory"
ParcelIsle_MartItems::
# 80 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_POKE_BALL
# 81 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_POTION
# 82 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 83 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 84 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_REPEL
# 85 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_NONE

ParcelIsle_KidTrainer::
# 89 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_KID, ParcelIsle_KidTrainer_Text_0, ParcelIsle_KidTrainer_Text_1
# 92 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidTrainer_Text_2, MSGBOX_DEFAULT
	end


ParcelIsle_ItemPotion::
# 97 "data/maps/ParcelIsle/scripts.pory"
	finditem ITEM_POTION
	end


ParcelIsle_Neighbor::
# 104 "data/maps/ParcelIsle/scripts.pory"
	lock
# 105 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 106 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_0, MSGBOX_DEFAULT
# 107 "data/maps/ParcelIsle/scripts.pory"
	applymovement 4, Movement_GlanceAway
# 108 "data/maps/ParcelIsle/scripts.pory"
	waitmovement 0
# 109 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_1, MSGBOX_DEFAULT
# 110 "data/maps/ParcelIsle/scripts.pory"
	release
	end


# 114 "data/maps/ParcelIsle/scripts.pory"
Movement_GlanceAway:
# 115 "data/maps/ParcelIsle/scripts.pory"
	face_right
# 116 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 117 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 118 "data/maps/ParcelIsle/scripts.pory"
	step_end

ParcelIsle_FerrySign::
# 122 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerrySign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_FerryCaptain::
# 129 "data/maps/ParcelIsle/scripts.pory"
	lock
# 130 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 131 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_HIGHLAND_CERT, ParcelIsle_FerryCaptain_2
# 136 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_1, MSGBOX_YESNO
# 137 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_FerryCaptain_5
# 142 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 143 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 144 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 145 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_DELIBIRD, 30, 38
# 146 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_2:
# 132 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_0, MSGBOX_DEFAULT
# 133 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_5:
# 138 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_2, MSGBOX_DEFAULT
# 139 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_LabSign::
# 152 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LabSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_Arrival_Text_0:
# 37 "data/maps/ParcelIsle/scripts.pory"
	.string "The ferry horn fades out across the\n"
	.string "water.\p"
	.string "The boards are damp under your boots.$"

ParcelIsle_HeavyCoat_Text_0:
# 48 "data/maps/ParcelIsle/scripts.pory"
	.string "Off the ferry, then. Lodging's up the\n"
	.string "track--the door with the lamp lit.$"

ParcelIsle_HeavyCoat_Text_1:
# 49 "data/maps/ParcelIsle/scripts.pory"
	.string "Mind the boards. They're slick when the\n"
	.string "fog sits.\p"
	.string "…And keep your questions for morning,\n"
	.string "eh?$"

ParcelIsle_Fisher_Text_0:
# 58 "data/maps/ParcelIsle/scripts.pory"
	.string "Currents have been wrong for weeks.\n"
	.string "The fish know it before we do.\p"
	.string "…You didn't hear that from me.$"

ParcelIsle_Shopkeeper_Text_0:
# 67 "data/maps/ParcelIsle/scripts.pory"
	.string "Wind's been coming off the water wrong\n"
	.string "all month. Strange weather inland,\l"
	.string "too--my supplier says the fog sits in\l"
	.string "the valleys till noon.$"

ParcelIsle_Shopkeeper_Text_1:
# 68 "data/maps/ParcelIsle/scripts.pory"
	.string "You get used to it.\n"
	.string "Mostly.\p"
	.string "Need supplies? The shelf's stocked,\n"
	.string "when the boat remembers us.$"

ParcelIsle_Shopkeeper_Text_2:
# 72 "data/maps/ParcelIsle/scripts.pory"
	.string "Mind the fog out there.$"

ParcelIsle_KidTrainer_Text_0:
# 90 "data/maps/ParcelIsle/scripts.pory"
	.string "Timo: You came off the ferry!\n"
	.string "Mainlanders always have neat Pokémon.\l"
	.string "Battle me!$"

ParcelIsle_KidTrainer_Text_1:
# 91 "data/maps/ParcelIsle/scripts.pory"
	.string "Timo: Whoa. Okay.$"

ParcelIsle_KidTrainer_Text_2:
# 92 "data/maps/ParcelIsle/scripts.pory"
	.string "Timo: Gran says don't go past the\n"
	.string "bridge.\p"
	.string "She won't say why.$"

ParcelIsle_Neighbor_Text_0:
# 106 "data/maps/ParcelIsle/scripts.pory"
	.string "Oh--you're the one the scientist wrote\n"
	.string "about, aren't you? The young naturalist\l"
	.string "with the--$"

ParcelIsle_Neighbor_Text_1:
# 109 "data/maps/ParcelIsle/scripts.pory"
	.string "…Forget I said anything. It's cold out.\n"
	.string "You should get indoors, {PLAYER}.$"

ParcelIsle_FerrySign_Text_0:
# 122 "data/maps/ParcelIsle/scripts.pory"
	.string "FERRY LANDING\p"
	.string "The mainland schedule board is blank.\n"
	.string "It has been for a while.$"

ParcelIsle_FerryCaptain_Text_0:
# 132 "data/maps/ParcelIsle/scripts.pory"
	.string "Captain: Delibird Isle? She's out past\n"
	.string "the channel ice, and that's no crossing\l"
	.string "to make without a reason worth the\l"
	.string "cold.\p"
	.string "Come back when the Corps has sent you\n"
	.string "up the coast. You'll know when.$"

ParcelIsle_FerryCaptain_Text_1:
# 136 "data/maps/ParcelIsle/scripts.pory"
	.string "Captain: Off to the island, then? Good.\n"
	.string "They could use a face that isn't there\l"
	.string "to sell them something.\p"
	.string "Midwinter's on out there. Climb aboard\n"
	.string "-- mind the spray.$"

ParcelIsle_FerryCaptain_Text_2:
# 138 "data/maps/ParcelIsle/scripts.pory"
	.string "Captain: I'll keep her warm. Come back\n"
	.string "when you're ready.$"

ParcelIsle_LabSign_Text_0:
# 152 "data/maps/ParcelIsle/scripts.pory"
	.string "FIELD RESEARCH ANNEX\n"
	.string "Skaldmere Survey cooperative site\p"
	.string "A strip of red cloth is nailed under the\n"
	.string "plate, faded gray.$"
