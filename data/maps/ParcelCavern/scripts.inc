ParcelCavern_MapScripts::
# 14 "data/maps/ParcelCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelCavern_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelCavern_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/ParcelCavern/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ParcelCavern_FirstEntry
	.2byte 0


ParcelCavern_FirstEntry::
# 20 "data/maps/ParcelCavern/scripts.pory"
	setvar VAR_TEMP_1, 1
# 21 "data/maps/ParcelCavern/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CAVERN_ARRIVAL, ParcelCavern_FirstEntry_2
# 24 "data/maps/ParcelCavern/scripts.pory"
	lockall
# 25 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_FirstEntry_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_FirstEntry_Text_1, MSGBOX_DEFAULT
# 27 "data/maps/ParcelCavern/scripts.pory"
	setflag FLAG_SKALDMERE_CAVERN_ARRIVAL
# 28 "data/maps/ParcelCavern/scripts.pory"
	releaseall
	end

ParcelCavern_FirstEntry_2:
	end


ParcelCavern_Audit::
# 34 "data/maps/ParcelCavern/scripts.pory"
	goto_if_set FLAG_SKALDMERE_GATE_CAVERN, ParcelCavern_Audit_2
# 38 "data/maps/ParcelCavern/scripts.pory"
	lockall
# 39 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Audit_Text_0, MSGBOX_DEFAULT
# 40 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GATE_CAVERN, ParcelCavern_Audit_Text_1
# 41 "data/maps/ParcelCavern/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_CAVERN
# 42 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Audit_Text_2, MSGBOX_DEFAULT
# 43 "data/maps/ParcelCavern/scripts.pory"
	setvar VAR_TEMP_3, 1
# 44 "data/maps/ParcelCavern/scripts.pory"
	releaseall
	end

ParcelCavern_Audit_2:
# 35 "data/maps/ParcelCavern/scripts.pory"
	setvar VAR_TEMP_3, 1
	end


ParcelCavern_GateKelda::
# 48 "data/maps/ParcelCavern/scripts.pory"
	lock
# 49 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 50 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_GateKelda_Text_0, MSGBOX_DEFAULT
# 51 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_EverfrostCache::
# 57 "data/maps/ParcelCavern/scripts.pory"
	lock
# 58 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 59 "data/maps/ParcelCavern/scripts.pory"
	playse SE_ICE_CRACK
# 60 "data/maps/ParcelCavern/scripts.pory"
	giveitem ITEM_NEVER_MELT_ICE
# 61 "data/maps/ParcelCavern/scripts.pory"
	giveitem ITEM_RARE_CANDY, 2
# 62 "data/maps/ParcelCavern/scripts.pory"
	setflag FLAG_SKALDMERE_CAVERN_REWARD
# 63 "data/maps/ParcelCavern/scripts.pory"
	removeobject 4
# 64 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_EverfrostCache_Text_0, MSGBOX_DEFAULT
# 65 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_Delibird::
# 71 "data/maps/ParcelCavern/scripts.pory"
	lock
# 72 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Delibird_Text_0, MSGBOX_DEFAULT
# 73 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Delibird_Text_1, MSGBOX_DEFAULT
# 74 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_Heart::
# 78 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Heart_Text_0, MSGBOX_SIGN
	end


ParcelCavern_ItemIceHeal::
# 81 "data/maps/ParcelCavern/scripts.pory"
	finditem ITEM_ICE_HEAL
	end


ParcelCavern_TechA::
# 84 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CAV_TECH_A, ParcelCavern_TechA_Text_0, ParcelCavern_TechA_Text_1
# 87 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_Text_2, MSGBOX_DEFAULT
	end


ParcelCavern_TechB::
# 91 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CAV_TECH_B, ParcelCavern_TechB_Text_0, ParcelCavern_TechB_Text_1
# 94 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_Text_2, MSGBOX_DEFAULT
	end


ParcelCavern_Leave::
# 99 "data/maps/ParcelCavern/scripts.pory"
	lockall
# 100 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Leave_Text_0, MSGBOX_DEFAULT
# 101 "data/maps/ParcelCavern/scripts.pory"
	closemessage
# 102 "data/maps/ParcelCavern/scripts.pory"
	warp MAP_PARCEL_DELIBIRD, 8, 4
# 103 "data/maps/ParcelCavern/scripts.pory"
	waitstate
	end


ParcelCavern_FirstEntry_Text_0:
# 25 "data/maps/ParcelCavern/scripts.pory"
	.string "Light blooms from the lamp and the\n"
	.string "cavern answers it: walls of old blue ice,\l"
	.string "crystal hung from the dark like frozen\l"
	.string "rain.\p"
	.string "The air bites here. Truly bites. It's the\n"
	.string "only place on the whole island that\l"
	.string "still does.$"

ParcelCavern_FirstEntry_Text_1:
# 26 "data/maps/ParcelCavern/scripts.pory"
	.string "This is the cold the festival is named\n"
	.string "for, all of it, retreated into one room\l"
	.string "under the mountain. What the island\l"
	.string "used to be, kept in a jar against the\l"
	.string "thaw.\p"
	.string "The floor is ice. Mind your feet.$"

ParcelCavern_Audit_Text_0:
# 39 "data/maps/ParcelCavern/scripts.pory"
	.string "KELDA: Deepwater Ops. Even the cold is\n"
	.string "logged down here, provisional.\p"
	.string "You want clearance to read the heart of\n"
	.string "this place? Earn the audit first.$"

ParcelCavern_Audit_Text_1:
# 40 "data/maps/ParcelCavern/scripts.pory"
	.string "KELDA: …Recorded. You read the cold;\n"
	.string "now the cold reads you.$"

ParcelCavern_Audit_Text_2:
# 42 "data/maps/ParcelCavern/scripts.pory"
	.string "KELDA: Cavern clearance, logged and\n"
	.string "filed. Deepwater keeps a close ledger.\l"
	.string "No one is granted the cold. You took it.$"

ParcelCavern_GateKelda_Text_0:
# 50 "data/maps/ParcelCavern/scripts.pory"
	.string "KELDA: You're entered against your\n"
	.string "card. The everfrost is on MEREHOLT's\l"
	.string "books. And now, so is your competence\l"
	.string "to stand near it.$"

ParcelCavern_EverfrostCache_Text_0:
# 64 "data/maps/ParcelCavern/scripts.pory"
	.string "In the hollow the slab kept shut: a\n"
	.string "knot of true everfrost, and supplies an\l"
	.string "old surveyor cached here and never\l"
	.string "came back for. The date on the tin is\l"
	.string "older than you are.$"

ParcelCavern_Delibird_Text_0:
# 72 "data/maps/ParcelCavern/scripts.pory"
	.string "A single DELIBIRD sits at the deep end,\n"
	.string "very still, watching the ice it can no\l"
	.string "longer count on.\p"
	.string "It isn't delivering anything. There's no\n"
	.string "one down here to deliver to. It looks at\l"
	.string "you, and at the lamp, and seems to\l"
	.string "decide you are not the thaw.$"

ParcelCavern_Delibird_Text_1:
# 73 "data/maps/ParcelCavern/scripts.pory"
	.string "It goes back to watching the ice. You\n"
	.string "leave it the cold. It's the only gift the\l"
	.string "cavern has left to give, and it's giving\l"
	.string "it to one bird.$"

ParcelCavern_Heart_Text_0:
# 78 "data/maps/ParcelCavern/scripts.pory"
	.string "The oldest ice, blue to black. A mark\n"
	.string "scratched on the wall at head height,\l"
	.string "and a newer one a hand's width lower.\l"
	.string "The islanders measure their winters\l"
	.string "against it. You don't need the notebook\l"
	.string "to read this one.$"

ParcelCavern_TechA_Text_0:
# 85 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Deepwater survey. We core the\n"
	.string "ice. The cores are getting shorter.\l"
	.string "Battle me, it's warmer than standing\l"
	.string "still.$"

ParcelCavern_TechA_Text_1:
# 86 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Still cold.$"

ParcelCavern_TechA_Text_2:
# 87 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Twenty metres of ice when they\n"
	.string "first cored it. Fourteen now. Deepwater\l"
	.string "calls that 'accessible'.$"

ParcelCavern_TechB_Text_0:
# 92 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Corps cadet, posted to watch the\n"
	.string "posted. KELDA watches me. I watch her.\l"
	.string "Spar, it passes the shift.$"

ParcelCavern_TechB_Text_1:
# 93 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Shift passed.$"

ParcelCavern_TechB_Text_2:
# 94 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: There's a DELIBIRD at the far end\n"
	.string "that never leaves. KELDA logged it as\l"
	.string "an asset. I logged it as a bird.$"

ParcelCavern_Leave_Text_0:
# 100 "data/maps/ParcelCavern/scripts.pory"
	.string "The ladder up to the summit, and the\n"
	.string "bright thin daylight beyond.$"
