ParcelIsle_MapScripts::
# 17 "data/maps/ParcelIsle/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelIsle_SetVisited
# 18 "data/maps/ParcelIsle/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelIsle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelIsle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 19 "data/maps/ParcelIsle/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelIsle_Arrival
	.2byte 0


ParcelIsle_SetVisited::
# 24 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_VISITED_PARCEL_ISLE
	end


ParcelIsle_Arrival::
# 32 "data/maps/ParcelIsle/scripts.pory"
	setvar VAR_TEMP_0, 1
# 33 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_ARRIVAL_INTRO, ParcelIsle_Arrival_2
# 36 "data/maps/ParcelIsle/scripts.pory"
	lockall
# 37 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 38 "data/maps/ParcelIsle/scripts.pory"
	delay 96
# 39 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Arrival_Text_0, MSGBOX_DEFAULT
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
	msgbox ParcelIsle_Shopkeeper_Text_1, MSGBOX_YESNO
# 71 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelIsle_Shopkeeper_2
ParcelIsle_Shopkeeper_1:
# 74 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Shopkeeper_Text_2, MSGBOX_DEFAULT
# 75 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Shopkeeper_2:
# 72 "data/maps/ParcelIsle/scripts.pory"
	pokemart ParcelIsle_MartItems
	goto ParcelIsle_Shopkeeper_1


# 79 "data/maps/ParcelIsle/scripts.pory"

# 80 "data/maps/ParcelIsle/scripts.pory"
	.align 2
# 81 "data/maps/ParcelIsle/scripts.pory"
ParcelIsle_MartItems::
# 82 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_POKE_BALL
# 83 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_POTION
# 84 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 85 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 86 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_REPEL
# 87 "data/maps/ParcelIsle/scripts.pory"
	.2byte ITEM_NONE

ParcelIsle_KidTrainer::
# 91 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_KID, ParcelIsle_KidTrainer_Text_0, ParcelIsle_KidTrainer_Text_1
# 94 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidTrainer_Text_2, MSGBOX_DEFAULT
	end


ParcelIsle_ItemPotion::
# 99 "data/maps/ParcelIsle/scripts.pory"
	finditem ITEM_POTION
	end


ParcelIsle_Neighbor::
# 106 "data/maps/ParcelIsle/scripts.pory"
	lock
# 107 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 108 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_0, MSGBOX_DEFAULT
# 109 "data/maps/ParcelIsle/scripts.pory"
	applymovement 4, Movement_GlanceAway
# 110 "data/maps/ParcelIsle/scripts.pory"
	waitmovement 0
# 111 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_1, MSGBOX_DEFAULT
# 112 "data/maps/ParcelIsle/scripts.pory"
	release
	end


# 116 "data/maps/ParcelIsle/scripts.pory"
Movement_GlanceAway:
# 117 "data/maps/ParcelIsle/scripts.pory"
	face_right
# 118 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 119 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 120 "data/maps/ParcelIsle/scripts.pory"
	step_end

ParcelIsle_FerrySign::
# 124 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerrySign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_FerryCaptain::
# 135 "data/maps/ParcelIsle/scripts.pory"
	lock
# 136 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 137 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_HIGHLAND_CERT, ParcelIsle_FerryCaptain_2
# 142 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_1, MSGBOX_DEFAULT
# 143 "data/maps/ParcelIsle/scripts.pory"
	multichoice 1, 1, MULTI_SKALD_FERRY, FALSE
# 144 "data/maps/ParcelIsle/scripts.pory"
	switch VAR_RESULT
# 145 "data/maps/ParcelIsle/scripts.pory"
	case 0, ParcelIsle_FerryCaptain_6
# 152 "data/maps/ParcelIsle/scripts.pory"
	case 1, ParcelIsle_FerryCaptain_7
# 164 "data/maps/ParcelIsle/scripts.pory"
	case 2, ParcelIsle_FerryCaptain_8
# 177 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_4, MSGBOX_DEFAULT
# 178 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_2:
# 138 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_0, MSGBOX_DEFAULT
# 139 "data/maps/ParcelIsle/scripts.pory"
	release
	end

	end

ParcelIsle_FerryCaptain_6:
# 146 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 147 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 148 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 149 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_DELIBIRD, 30, 38
# 150 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_7:
# 153 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_DELIBIRD_ARRIVAL, ParcelIsle_FerryCaptain_11
# 158 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 159 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 160 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 161 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_COAST, 38, 38
# 162 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_8:
# 165 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_COASTAL_CERT, ParcelIsle_FerryCaptain_14
# 170 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 171 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 172 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 173 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_WEATHER, 23, 36
# 174 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_11:
# 154 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_2, MSGBOX_DEFAULT
# 155 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_14:
# 166 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_3, MSGBOX_DEFAULT
# 167 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_LabSign::
# 186 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LabSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_GateMoore::
# 197 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GATE_ISLE, ParcelIsle_GateMoore_Text_0, ParcelIsle_GateMoore_Text_1, ParcelIsle_GateMoore_Defeated
# 201 "data/maps/ParcelIsle/scripts.pory"
	lock
# 202 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 203 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_GateMoore_Text_2, MSGBOX_DEFAULT
# 204 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_GateMoore_Defeated::
# 209 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_ISLE
# 210 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_GateMoore_Defeated_Text_0, MSGBOX_DEFAULT
# 211 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_Arrival_Text_0:
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
	.string "Mostly.\p"
	.string "Need supplies? The shelf's stocked,\n"
	.string "when the boat remembers us.$"

ParcelIsle_Shopkeeper_Text_2:
# 74 "data/maps/ParcelIsle/scripts.pory"
	.string "Mind the fog out there.$"

ParcelIsle_KidTrainer_Text_0:
# 92 "data/maps/ParcelIsle/scripts.pory"
	.string "Timo: You came off the ferry!\n"
	.string "Mainlanders always have neat Pokémon.\l"
	.string "Battle me!$"

ParcelIsle_KidTrainer_Text_1:
# 93 "data/maps/ParcelIsle/scripts.pory"
	.string "Timo: Whoa. Okay.$"

ParcelIsle_KidTrainer_Text_2:
# 94 "data/maps/ParcelIsle/scripts.pory"
	.string "Timo: Gran says don't go past the\n"
	.string "bridge.\p"
	.string "She won't say why.$"

ParcelIsle_Neighbor_Text_0:
# 108 "data/maps/ParcelIsle/scripts.pory"
	.string "Oh--you're the one the scientist wrote\n"
	.string "about, aren't you? The young naturalist\l"
	.string "with the--$"

ParcelIsle_Neighbor_Text_1:
# 111 "data/maps/ParcelIsle/scripts.pory"
	.string "…Forget I said anything. It's cold out.\n"
	.string "You should get indoors, {PLAYER}.$"

ParcelIsle_FerrySign_Text_0:
# 124 "data/maps/ParcelIsle/scripts.pory"
	.string "FERRY LANDING\p"
	.string "The mainland schedule board is blank.\n"
	.string "It has been for a while.$"

ParcelIsle_FerryCaptain_Text_0:
# 138 "data/maps/ParcelIsle/scripts.pory"
	.string "Captain: Passage out? The open\n"
	.string "channel's no crossing to make without a\l"
	.string "reason worth the cold.\p"
	.string "Come back when the Corps has sent you\n"
	.string "up the mountains. You'll know when.$"

ParcelIsle_FerryCaptain_Text_1:
# 142 "data/maps/ParcelIsle/scripts.pory"
	.string "Captain: Harbour's open. Where am I\n"
	.string "taking you?$"

ParcelIsle_FerryCaptain_Text_2:
# 154 "data/maps/ParcelIsle/scripts.pory"
	.string "Captain: The coast run opens once\n"
	.string "you've made the Delibird crossing.\n"
	.string "One island at a time.$"

ParcelIsle_FerryCaptain_Text_3:
# 166 "data/maps/ParcelIsle/scripts.pory"
	.string "Captain: The climate station? That\n"
	.string "route opens once you've worked the\l"
	.string "coast.\n"
	.string "Not before.$"

ParcelIsle_FerryCaptain_Text_4:
# 177 "data/maps/ParcelIsle/scripts.pory"
	.string "Captain: Suit yourself. I'll be on the\n"
	.string "water.$"

ParcelIsle_LabSign_Text_0:
# 186 "data/maps/ParcelIsle/scripts.pory"
	.string "FIELD RESEARCH ANNEX\n"
	.string "Skaldmere Survey cooperative site\p"
	.string "A strip of red cloth is nailed under the\n"
	.string "plate, faded gray.$"

ParcelIsle_GateMoore_Text_0:
# 198 "data/maps/ParcelIsle/scripts.pory"
	.string "Moore: Harbour-master. Every hull and\n"
	.string "every hand that moves through here is\l"
	.string "logged.\p"
	.string "You want clearance on this water? Earn\n"
	.string "the entry.$"

ParcelIsle_GateMoore_Text_1:
# 199 "data/maps/ParcelIsle/scripts.pory"
	.string "Moore: …Noted. The harbour knows your\n"
	.string "name now.$"

ParcelIsle_GateMoore_Text_2:
# 203 "data/maps/ParcelIsle/scripts.pory"
	.string "Moore: You're cleared through the\n"
	.string "landing. The ferry runs answer to the\l"
	.string "log,\n"
	.string "and the log answers for you.$"

ParcelIsle_GateMoore_Defeated_Text_0:
# 210 "data/maps/ParcelIsle/scripts.pory"
	.string "Moore: Harbour clearance: entered\n"
	.string "against your card. Filed with the\l"
	.string "manifest.\p"
	.string "Nobody hands that out. You took it.$"
