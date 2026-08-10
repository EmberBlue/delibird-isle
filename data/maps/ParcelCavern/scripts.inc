ParcelCavern_MapScripts::
# 17 "data/maps/ParcelCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelCavern_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelCavern_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 18 "data/maps/ParcelCavern/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelCavern_SetMapVar
	.2byte 0


ParcelCavern_SetMapVar::
# 23 "data/maps/ParcelCavern/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


ParcelCavern_FirstEntry::
# 28 "data/maps/ParcelCavern/scripts.pory"
	setvar VAR_TEMP_1, 1
# 29 "data/maps/ParcelCavern/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CAVERN_ARRIVAL, ParcelCavern_FirstEntry_2
# 32 "data/maps/ParcelCavern/scripts.pory"
	lockall
# 33 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_FirstEntry_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_FirstEntry_Text_1, MSGBOX_DEFAULT
# 35 "data/maps/ParcelCavern/scripts.pory"
	setflag FLAG_SKALDMERE_CAVERN_ARRIVAL
# 36 "data/maps/ParcelCavern/scripts.pory"
	releaseall
	end

ParcelCavern_FirstEntry_2:
	end


ParcelCavern_EverfrostCache::
# 44 "data/maps/ParcelCavern/scripts.pory"
	lock
# 45 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 46 "data/maps/ParcelCavern/scripts.pory"
	playse SE_ICE_CRACK
# 47 "data/maps/ParcelCavern/scripts.pory"
	giveitem ITEM_NEVER_MELT_ICE
# 48 "data/maps/ParcelCavern/scripts.pory"
	giveitem ITEM_RARE_CANDY, 2
# 49 "data/maps/ParcelCavern/scripts.pory"
	setflag FLAG_SKALDMERE_CAVERN_REWARD
# 50 "data/maps/ParcelCavern/scripts.pory"
	removeobject 4
# 51 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_EverfrostCache_Text_0, MSGBOX_DEFAULT
# 52 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_Delibird::
# 58 "data/maps/ParcelCavern/scripts.pory"
	lock
# 59 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Delibird_Text_0, MSGBOX_DEFAULT
# 60 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Delibird_Text_1, MSGBOX_DEFAULT
# 61 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_Heart::
# 66 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Heart_Text_0, MSGBOX_SIGN
	end


ParcelCavern_Leave::
# 71 "data/maps/ParcelCavern/scripts.pory"
	lockall
# 72 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Leave_Text_0, MSGBOX_DEFAULT
# 73 "data/maps/ParcelCavern/scripts.pory"
	closemessage
# 74 "data/maps/ParcelCavern/scripts.pory"
	warp MAP_PARCEL_DELIBIRD, 8, 4
# 75 "data/maps/ParcelCavern/scripts.pory"
	waitstate
	end


ParcelCavern_GateKelda::
# 87 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GATE_CAVERN, ParcelCavern_GateKelda_Text_0, ParcelCavern_GateKelda_Text_1, ParcelCavern_GateKelda_Defeated
# 91 "data/maps/ParcelCavern/scripts.pory"
	lock
# 92 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 93 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_GateKelda_Text_2, MSGBOX_DEFAULT
# 94 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_GateKelda_Defeated::
# 99 "data/maps/ParcelCavern/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_CAVERN
# 100 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_GateKelda_Defeated_Text_0, MSGBOX_DEFAULT
# 101 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_FirstEntry_Text_0:
# 33 "data/maps/ParcelCavern/scripts.pory"
	.string "Light blooms from your Pokémon and the\n"
	.string "cavern answers it -- walls of old blue\l"
	.string "ice, crystal hung from the dark like\l"
	.string "frozen rain.\p"
	.string "The air bites here. Truly bites. It is\n"
	.string "the only place on the whole island that\l"
	.string "still can.$"

ParcelCavern_FirstEntry_Text_1:
# 34 "data/maps/ParcelCavern/scripts.pory"
	.string "This is the cold the festival is named\n"
	.string "for, all of it, retreated into one room\l"
	.string "under the mountain.\p"
	.string "What the island used to be, kept in a jar\n"
	.string "against the thaw. You walk softly. It\l"
	.string "feels like a held breath.$"

ParcelCavern_EverfrostCache_Text_0:
# 51 "data/maps/ParcelCavern/scripts.pory"
	.string "In the hollow the slab kept shut: a\n"
	.string "knot of true everfrost, and supplies an\l"
	.string "old surveyor cached here and never\l"
	.string "came back for.\p"
	.string "You take them, and note the date on the\n"
	.string "tin. It is older than you are.$"

ParcelCavern_Delibird_Text_0:
# 59 "data/maps/ParcelCavern/scripts.pory"
	.string "A single Delibird sits at the lip of the\n"
	.string "deep pool, very still, watching the ice\l"
	.string "it can no longer count on.\p"
	.string "It is not delivering anything. There is\n"
	.string "no one down here to deliver to. It has\l"
	.string "simply come to where the cold still is,\l"
	.string "the way the old come home.$"

ParcelCavern_Delibird_Text_1:
# 60 "data/maps/ParcelCavern/scripts.pory"
	.string "It looks at you, and at the lamp, and\n"
	.string "seems to decide you are not the thaw.\p"
	.string "It goes back to watching the water. You\n"
	.string "leave it the cold. It is the only gift\l"
	.string "the cavern has left to give, and it is\l"
	.string "giving it to a bird.$"

ParcelCavern_Heart_Text_0:
# 66 "data/maps/ParcelCavern/scripts.pory"
	.string "The deepest pool. The water here has\n"
	.string "not been warm in ten thousand years,\l"
	.string "and the islanders measure their winters\l"
	.string "against it.\p"
	.string "It is a hand's-width lower than the old\n"
	.string "mark on the wall. You do not need a\l"
	.string "survey to read that one. You write it\l"
	.string "down anyway. That is the job.$"

ParcelCavern_Leave_Text_0:
# 72 "data/maps/ParcelCavern/scripts.pory"
	.string "The mouth of the cavern, and the bright\n"
	.string "thin daylight of the summit beyond.$"

ParcelCavern_GateKelda_Text_0:
# 88 "data/maps/ParcelCavern/scripts.pory"
	.string "Kelda: Deepwater Ops. Even the cold is\n"
	.string "logged down here, provisional.\p"
	.string "You want clearance to read the heart of\n"
	.string "this place? Earn the audit first.$"

ParcelCavern_GateKelda_Text_1:
# 89 "data/maps/ParcelCavern/scripts.pory"
	.string "Kelda: …Recorded. You read the cold;\n"
	.string "now the cold reads you.$"

ParcelCavern_GateKelda_Text_2:
# 93 "data/maps/ParcelCavern/scripts.pory"
	.string "Kelda: You're entered against your\n"
	.string "card. The everfrost is on Mereholt's\l"
	.string "books--\n"
	.string "and now, so is your competence to stand\l"
	.string "near it.$"

ParcelCavern_GateKelda_Defeated_Text_0:
# 100 "data/maps/ParcelCavern/scripts.pory"
	.string "Kelda: Cavern clearance: logged and\n"
	.string "filed. Deepwater keeps a close ledger.\p"
	.string "No one is granted the cold. You took it.$"
