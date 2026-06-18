ParcelCavern_MapScripts::
# 15 "data/maps/ParcelCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelCavern_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelCavern_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/ParcelCavern/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelCavern_SetMapVar
	.2byte 0


ParcelCavern_SetMapVar::
# 21 "data/maps/ParcelCavern/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


ParcelCavern_FirstEntry::
# 26 "data/maps/ParcelCavern/scripts.pory"
	setvar VAR_TEMP_1, 1
# 27 "data/maps/ParcelCavern/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CAVERN_ARRIVAL, ParcelCavern_FirstEntry_2
# 30 "data/maps/ParcelCavern/scripts.pory"
	lockall
# 31 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_FirstEntry_Text_0, MSGBOX_DEFAULT
# 32 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_FirstEntry_Text_1, MSGBOX_DEFAULT
# 33 "data/maps/ParcelCavern/scripts.pory"
	setflag FLAG_SKALDMERE_CAVERN_ARRIVAL
# 34 "data/maps/ParcelCavern/scripts.pory"
	releaseall
	end

ParcelCavern_FirstEntry_2:
	end


ParcelCavern_Debris::
# 40 "data/maps/ParcelCavern/scripts.pory"
	lock
# 41 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 42 "data/maps/ParcelCavern/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CAVERN_REWARD, ParcelCavern_Debris_2
# 47 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Debris_Text_1, MSGBOX_DEFAULT
# 48 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Debris_Text_2, MSGBOX_DEFAULT
# 49 "data/maps/ParcelCavern/scripts.pory"
	playse SE_ICE_CRACK
# 50 "data/maps/ParcelCavern/scripts.pory"
	closemessage
# 51 "data/maps/ParcelCavern/scripts.pory"
	delay 20
# 52 "data/maps/ParcelCavern/scripts.pory"
	giveitem ITEM_NEVER_MELT_ICE
# 53 "data/maps/ParcelCavern/scripts.pory"
	giveitem ITEM_RARE_CANDY, 2
# 54 "data/maps/ParcelCavern/scripts.pory"
	setflag FLAG_SKALDMERE_CAVERN_REWARD
# 55 "data/maps/ParcelCavern/scripts.pory"
	removeobject 1
# 56 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Debris_Text_3, MSGBOX_DEFAULT
# 57 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_Debris_2:
# 43 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Debris_Text_0, MSGBOX_DEFAULT
# 44 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_Delibird::
# 63 "data/maps/ParcelCavern/scripts.pory"
	lock
# 64 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Delibird_Text_0, MSGBOX_DEFAULT
# 65 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Delibird_Text_1, MSGBOX_DEFAULT
# 66 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_Heart::
# 71 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Heart_Text_0, MSGBOX_SIGN
	end


ParcelCavern_Leave::
# 76 "data/maps/ParcelCavern/scripts.pory"
	lockall
# 77 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Leave_Text_0, MSGBOX_DEFAULT
# 78 "data/maps/ParcelCavern/scripts.pory"
	closemessage
# 79 "data/maps/ParcelCavern/scripts.pory"
	warp MAP_PARCEL_DELIBIRD, 20, 10
# 80 "data/maps/ParcelCavern/scripts.pory"
	waitstate
	end


ParcelCavern_GateKelda::
# 92 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GATE_CAVERN, ParcelCavern_GateKelda_Text_0, ParcelCavern_GateKelda_Text_1, ParcelCavern_GateKelda_Defeated
# 96 "data/maps/ParcelCavern/scripts.pory"
	lock
# 97 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 98 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_GateKelda_Text_2, MSGBOX_DEFAULT
# 99 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_GateKelda_Defeated::
# 104 "data/maps/ParcelCavern/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_CAVERN
# 105 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_GateKelda_Defeated_Text_0, MSGBOX_DEFAULT
# 106 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_FirstEntry_Text_0:
# 31 "data/maps/ParcelCavern/scripts.pory"
	.string "Your ranger lamp throws a long cold\n"
	.string "light, and the cavern answers it --\l"
	.string "walls of old blue ice, crystal hung from\l"
	.string "the dark like frozen rain.\p"
	.string "The air bites here. Truly bites. It is\n"
	.string "the only place on the whole island that\l"
	.string "still can.$"

ParcelCavern_FirstEntry_Text_1:
# 32 "data/maps/ParcelCavern/scripts.pory"
	.string "This is the cold the festival is named\n"
	.string "for, all of it, retreated into one room\l"
	.string "under the mountain.\p"
	.string "What the island used to be, kept in a jar\n"
	.string "against the thaw. You walk softly. It\l"
	.string "feels like a held breath.$"

ParcelCavern_Debris_Text_0:
# 43 "data/maps/ParcelCavern/scripts.pory"
	.string "The slab is winched aside. Cold air pours\n"
	.string "from the hollow it kept shut.$"

ParcelCavern_Debris_Text_1:
# 47 "data/maps/ParcelCavern/scripts.pory"
	.string "A slab of ceiling-ice has sheared off\n"
	.string "and jammed the mouth of a side hollow\l"
	.string "-- too heavy to shift, too solid to\l"
	.string "break, and you wouldn't break it in here\l"
	.string "if you could.$"

ParcelCavern_Debris_Text_2:
# 48 "data/maps/ParcelCavern/scripts.pory"
	.string "You unfold the ranger winch from the\n"
	.string "field kit, set the hook, and lean into it.\l"
	.string "Slow, no sudden force. The slab grinds\l"
	.string "aside.\p"
	.string "This is what the tool is FOR -- moving\n"
	.string "the heavy thing without shattering the\l"
	.string "place it's in.$"

ParcelCavern_Debris_Text_3:
# 56 "data/maps/ParcelCavern/scripts.pory"
	.string "In the hollow: a knot of true everfrost,\n"
	.string "and supplies an old surveyor cached\l"
	.string "here and never came back for.\p"
	.string "You take them, and note the date on the\n"
	.string "tin. It is older than you are.$"

ParcelCavern_Delibird_Text_0:
# 64 "data/maps/ParcelCavern/scripts.pory"
	.string "A single Delibird sits at the lip of the\n"
	.string "deep pool, very still, watching the ice\l"
	.string "it can no longer count on.\p"
	.string "It is not delivering anything. There is\n"
	.string "no one down here to deliver to. It has\l"
	.string "simply come to where the cold still is,\l"
	.string "the way the old come home.$"

ParcelCavern_Delibird_Text_1:
# 65 "data/maps/ParcelCavern/scripts.pory"
	.string "It looks at you, and at the lamp, and\n"
	.string "seems to decide you are not the thaw.\p"
	.string "It goes back to watching the water. You\n"
	.string "leave it the cold. It is the only gift\l"
	.string "the cavern has left to give, and it is\l"
	.string "giving it to a bird.$"

ParcelCavern_Heart_Text_0:
# 71 "data/maps/ParcelCavern/scripts.pory"
	.string "The deepest pool. The water here has\n"
	.string "not been warm in ten thousand years,\l"
	.string "and the islanders measure their winters\l"
	.string "against it.\p"
	.string "It is a hand's-width lower than the old\n"
	.string "mark on the wall. You do not need a\l"
	.string "survey to read that one. You write it\l"
	.string "down anyway. That is the job.$"

ParcelCavern_Leave_Text_0:
# 77 "data/maps/ParcelCavern/scripts.pory"
	.string "The mouth of the cavern, and the bright\n"
	.string "thin daylight of the summit beyond.$"

ParcelCavern_GateKelda_Text_0:
# 93 "data/maps/ParcelCavern/scripts.pory"
	.string "Kelda: Deepwater Ops. Even the cold is\n"
	.string "logged down here, provisional.\p"
	.string "You want clearance to read the heart of\n"
	.string "this place? Earn the audit first.$"

ParcelCavern_GateKelda_Text_1:
# 94 "data/maps/ParcelCavern/scripts.pory"
	.string "Kelda: …Recorded. You read the cold;\n"
	.string "now the cold reads you.$"

ParcelCavern_GateKelda_Text_2:
# 98 "data/maps/ParcelCavern/scripts.pory"
	.string "Kelda: You're entered against your\n"
	.string "card. The everfrost is on Mereholt's\l"
	.string "books--\n"
	.string "and now, so is your competence to stand\l"
	.string "near it.$"

ParcelCavern_GateKelda_Defeated_Text_0:
# 105 "data/maps/ParcelCavern/scripts.pory"
	.string "Kelda: Cavern clearance: logged and\n"
	.string "filed. Deepwater keeps a close ledger.\p"
	.string "No one is granted the cold. You took it.$"
