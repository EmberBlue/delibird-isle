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
	trainerbattle_single TRAINER_SKALD_CAV_TECH_A, ParcelCavern_TechA_Text_0, ParcelCavern_TechA_Text_1, ParcelCavern_TechA_FirstWin
# 88 "data/maps/ParcelCavern/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 89 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCavern_TechA_3
ParcelCavern_TechA_1:
# 92 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCavern_TechA_8
ParcelCavern_TechA_6:
# 95 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCavern_TechA_13
ParcelCavern_TechA_11:
# 98 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCavern_TechA_18
ParcelCavern_TechA_16:
# 101 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_Text_2, MSGBOX_DEFAULT
	end

ParcelCavern_TechA_2:
# 90 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechA_R2
	goto ParcelCavern_TechA_1

ParcelCavern_TechA_3:
# 89 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_A_R2
	goto_if 0, ParcelCavern_TechA_2
	goto ParcelCavern_TechA_1

ParcelCavern_TechA_7:
# 93 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechA_R3
	goto ParcelCavern_TechA_6

ParcelCavern_TechA_8:
# 92 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_A_R3
	goto_if 0, ParcelCavern_TechA_7
	goto ParcelCavern_TechA_6

ParcelCavern_TechA_12:
# 96 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechA_R4
	goto ParcelCavern_TechA_11

ParcelCavern_TechA_13:
# 95 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_A_R4
	goto_if 0, ParcelCavern_TechA_12
	goto ParcelCavern_TechA_11

ParcelCavern_TechA_17:
# 99 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechA_R5
	goto ParcelCavern_TechA_16

ParcelCavern_TechA_18:
# 98 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_A_R5
	goto_if 0, ParcelCavern_TechA_17
	goto ParcelCavern_TechA_16


ParcelCavern_TechA_FirstWin::
# 105 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_Text_2, MSGBOX_DEFAULT
# 106 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechA_R2::
# 110 "data/maps/ParcelCavern/scripts.pory"
	lock
# 111 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 112 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_0, MSGBOX_YESNO
# 113 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechA_R2_2
# 118 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_A_R2, ParcelCavern_TechA_R2_Text_2
# 119 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_3, MSGBOX_DEFAULT
# 120 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechA_R2_2:
# 114 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_1, MSGBOX_DEFAULT
# 115 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechA_R3::
# 124 "data/maps/ParcelCavern/scripts.pory"
	lock
# 125 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 126 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R3_Text_0, MSGBOX_YESNO
# 127 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechA_R3_2
# 132 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_A_R3, ParcelCavern_TechA_R3_Text_1
# 133 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R3_Text_2, MSGBOX_DEFAULT
# 134 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechA_R3_2:
# 128 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_1, MSGBOX_DEFAULT
# 129 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechA_R4::
# 138 "data/maps/ParcelCavern/scripts.pory"
	lock
# 139 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 140 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R4_Text_0, MSGBOX_YESNO
# 141 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechA_R4_2
# 146 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_A_R4, ParcelCavern_TechA_R4_Text_1
# 147 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R4_Text_2, MSGBOX_DEFAULT
# 148 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechA_R4_2:
# 142 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_1, MSGBOX_DEFAULT
# 143 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechA_R5::
# 152 "data/maps/ParcelCavern/scripts.pory"
	lock
# 153 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 154 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R5_Text_0, MSGBOX_YESNO
# 155 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechA_R5_2
# 160 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_A_R5, ParcelCavern_TechA_R5_Text_1
# 161 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R5_Text_2, MSGBOX_DEFAULT
# 162 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechA_R5_2:
# 156 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_1, MSGBOX_DEFAULT
# 157 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechB::
# 166 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CAV_TECH_B, ParcelCavern_TechB_Text_0, ParcelCavern_TechB_Text_1, ParcelCavern_TechB_FirstWin
# 170 "data/maps/ParcelCavern/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 171 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCavern_TechB_3
ParcelCavern_TechB_1:
# 174 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCavern_TechB_8
ParcelCavern_TechB_6:
# 177 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCavern_TechB_13
ParcelCavern_TechB_11:
# 180 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCavern_TechB_18
ParcelCavern_TechB_16:
# 183 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_Text_2, MSGBOX_DEFAULT
	end

ParcelCavern_TechB_2:
# 172 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechB_R2
	goto ParcelCavern_TechB_1

ParcelCavern_TechB_3:
# 171 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_B_R2
	goto_if 0, ParcelCavern_TechB_2
	goto ParcelCavern_TechB_1

ParcelCavern_TechB_7:
# 175 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechB_R3
	goto ParcelCavern_TechB_6

ParcelCavern_TechB_8:
# 174 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_B_R3
	goto_if 0, ParcelCavern_TechB_7
	goto ParcelCavern_TechB_6

ParcelCavern_TechB_12:
# 178 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechB_R4
	goto ParcelCavern_TechB_11

ParcelCavern_TechB_13:
# 177 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_B_R4
	goto_if 0, ParcelCavern_TechB_12
	goto ParcelCavern_TechB_11

ParcelCavern_TechB_17:
# 181 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechB_R5
	goto ParcelCavern_TechB_16

ParcelCavern_TechB_18:
# 180 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_B_R5
	goto_if 0, ParcelCavern_TechB_17
	goto ParcelCavern_TechB_16


ParcelCavern_TechB_FirstWin::
# 187 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_Text_2, MSGBOX_DEFAULT
# 188 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechB_R2::
# 192 "data/maps/ParcelCavern/scripts.pory"
	lock
# 193 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 194 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_0, MSGBOX_YESNO
# 195 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechB_R2_2
# 200 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_B_R2, ParcelCavern_TechB_R2_Text_2
# 201 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_3, MSGBOX_DEFAULT
# 202 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechB_R2_2:
# 196 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_1, MSGBOX_DEFAULT
# 197 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechB_R3::
# 206 "data/maps/ParcelCavern/scripts.pory"
	lock
# 207 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 208 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R3_Text_0, MSGBOX_YESNO
# 209 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechB_R3_2
# 214 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_B_R3, ParcelCavern_TechB_R2_Text_2
# 215 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R3_Text_1, MSGBOX_DEFAULT
# 216 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechB_R3_2:
# 210 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_1, MSGBOX_DEFAULT
# 211 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechB_R4::
# 220 "data/maps/ParcelCavern/scripts.pory"
	lock
# 221 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 222 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R4_Text_0, MSGBOX_YESNO
# 223 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechB_R4_2
# 228 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_B_R4, ParcelCavern_TechB_R4_Text_1
# 229 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R4_Text_2, MSGBOX_DEFAULT
# 230 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechB_R4_2:
# 224 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_1, MSGBOX_DEFAULT
# 225 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechB_R5::
# 234 "data/maps/ParcelCavern/scripts.pory"
	lock
# 235 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 236 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R5_Text_0, MSGBOX_YESNO
# 237 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechB_R5_2
# 242 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_B_R5, ParcelCavern_TechB_R5_Text_1
# 243 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R5_Text_2, MSGBOX_DEFAULT
# 244 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechB_R5_2:
# 238 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_1, MSGBOX_DEFAULT
# 239 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_Leave::
# 249 "data/maps/ParcelCavern/scripts.pory"
	lockall
# 250 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Leave_Text_0, MSGBOX_DEFAULT
# 251 "data/maps/ParcelCavern/scripts.pory"
	closemessage
# 252 "data/maps/ParcelCavern/scripts.pory"
	warp MAP_PARCEL_DELIBIRD, 8, 4
# 253 "data/maps/ParcelCavern/scripts.pory"
	waitstate
	end


ParcelCavern_T_Brynjulf::
# 259 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CAV_BRYNJULF, ParcelCavern_T_Brynjulf_Text_0, ParcelCavern_T_Brynjulf_Text_1, ParcelCavern_T_Brynjulf_FirstWin
# 263 "data/maps/ParcelCavern/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 264 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCavern_T_Brynjulf_3
ParcelCavern_T_Brynjulf_1:
# 267 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCavern_T_Brynjulf_8
ParcelCavern_T_Brynjulf_6:
# 270 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCavern_T_Brynjulf_13
ParcelCavern_T_Brynjulf_11:
# 273 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCavern_T_Brynjulf_18
ParcelCavern_T_Brynjulf_16:
# 276 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_Text_2, MSGBOX_DEFAULT
	end

ParcelCavern_T_Brynjulf_2:
# 265 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Brynjulf_R2
	goto ParcelCavern_T_Brynjulf_1

ParcelCavern_T_Brynjulf_3:
# 264 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_BRYNJULF_R2
	goto_if 0, ParcelCavern_T_Brynjulf_2
	goto ParcelCavern_T_Brynjulf_1

ParcelCavern_T_Brynjulf_7:
# 268 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Brynjulf_R3
	goto ParcelCavern_T_Brynjulf_6

ParcelCavern_T_Brynjulf_8:
# 267 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_BRYNJULF_R3
	goto_if 0, ParcelCavern_T_Brynjulf_7
	goto ParcelCavern_T_Brynjulf_6

ParcelCavern_T_Brynjulf_12:
# 271 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Brynjulf_R4
	goto ParcelCavern_T_Brynjulf_11

ParcelCavern_T_Brynjulf_13:
# 270 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_BRYNJULF_R4
	goto_if 0, ParcelCavern_T_Brynjulf_12
	goto ParcelCavern_T_Brynjulf_11

ParcelCavern_T_Brynjulf_17:
# 274 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Brynjulf_R5
	goto ParcelCavern_T_Brynjulf_16

ParcelCavern_T_Brynjulf_18:
# 273 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_BRYNJULF_R5
	goto_if 0, ParcelCavern_T_Brynjulf_17
	goto ParcelCavern_T_Brynjulf_16


ParcelCavern_T_Brynjulf_FirstWin::
# 280 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_Text_2, MSGBOX_DEFAULT
# 281 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Brynjulf_R2::
# 285 "data/maps/ParcelCavern/scripts.pory"
	lock
# 286 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 287 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_0, MSGBOX_YESNO
# 288 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Brynjulf_R2_2
# 293 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_BRYNJULF_R2, ParcelCavern_T_Brynjulf_R2_Text_2
# 294 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_3, MSGBOX_DEFAULT
# 295 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Brynjulf_R2_2:
# 289 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_1, MSGBOX_DEFAULT
# 290 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Brynjulf_R3::
# 299 "data/maps/ParcelCavern/scripts.pory"
	lock
# 300 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 301 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R3_Text_0, MSGBOX_YESNO
# 302 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Brynjulf_R3_2
# 307 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_BRYNJULF_R3, ParcelCavern_T_Brynjulf_R3_Text_1
# 308 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R3_Text_2, MSGBOX_DEFAULT
# 309 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Brynjulf_R3_2:
# 303 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_1, MSGBOX_DEFAULT
# 304 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Brynjulf_R4::
# 313 "data/maps/ParcelCavern/scripts.pory"
	lock
# 314 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 315 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R4_Text_0, MSGBOX_YESNO
# 316 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Brynjulf_R4_2
# 321 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_BRYNJULF_R4, ParcelCavern_T_Brynjulf_R4_Text_1
# 322 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R4_Text_2, MSGBOX_DEFAULT
# 323 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Brynjulf_R4_2:
# 317 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_1, MSGBOX_DEFAULT
# 318 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Brynjulf_R5::
# 327 "data/maps/ParcelCavern/scripts.pory"
	lock
# 328 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 329 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R5_Text_0, MSGBOX_YESNO
# 330 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Brynjulf_R5_2
# 335 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_BRYNJULF_R5, ParcelCavern_T_Brynjulf_R5_Text_1
# 336 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R5_Text_2, MSGBOX_DEFAULT
# 337 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Brynjulf_R5_2:
# 331 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_1, MSGBOX_DEFAULT
# 332 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Aslaug::
# 341 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CAV_ASLAUG, ParcelCavern_T_Aslaug_Text_0, ParcelCavern_T_Aslaug_Text_1, ParcelCavern_T_Aslaug_FirstWin
# 345 "data/maps/ParcelCavern/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 346 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCavern_T_Aslaug_3
ParcelCavern_T_Aslaug_1:
# 349 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCavern_T_Aslaug_8
ParcelCavern_T_Aslaug_6:
# 352 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCavern_T_Aslaug_13
ParcelCavern_T_Aslaug_11:
# 355 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCavern_T_Aslaug_18
ParcelCavern_T_Aslaug_16:
# 358 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_Text_2, MSGBOX_DEFAULT
	end

ParcelCavern_T_Aslaug_2:
# 347 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Aslaug_R2
	goto ParcelCavern_T_Aslaug_1

ParcelCavern_T_Aslaug_3:
# 346 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_ASLAUG_R2
	goto_if 0, ParcelCavern_T_Aslaug_2
	goto ParcelCavern_T_Aslaug_1

ParcelCavern_T_Aslaug_7:
# 350 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Aslaug_R3
	goto ParcelCavern_T_Aslaug_6

ParcelCavern_T_Aslaug_8:
# 349 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_ASLAUG_R3
	goto_if 0, ParcelCavern_T_Aslaug_7
	goto ParcelCavern_T_Aslaug_6

ParcelCavern_T_Aslaug_12:
# 353 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Aslaug_R4
	goto ParcelCavern_T_Aslaug_11

ParcelCavern_T_Aslaug_13:
# 352 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_ASLAUG_R4
	goto_if 0, ParcelCavern_T_Aslaug_12
	goto ParcelCavern_T_Aslaug_11

ParcelCavern_T_Aslaug_17:
# 356 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Aslaug_R5
	goto ParcelCavern_T_Aslaug_16

ParcelCavern_T_Aslaug_18:
# 355 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_ASLAUG_R5
	goto_if 0, ParcelCavern_T_Aslaug_17
	goto ParcelCavern_T_Aslaug_16


ParcelCavern_T_Aslaug_FirstWin::
# 362 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_Text_2, MSGBOX_DEFAULT
# 363 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Aslaug_R2::
# 367 "data/maps/ParcelCavern/scripts.pory"
	lock
# 368 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 369 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_0, MSGBOX_YESNO
# 370 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Aslaug_R2_2
# 375 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_ASLAUG_R2, ParcelCavern_T_Aslaug_R2_Text_2
# 376 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_3, MSGBOX_DEFAULT
# 377 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Aslaug_R2_2:
# 371 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_1, MSGBOX_DEFAULT
# 372 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Aslaug_R3::
# 381 "data/maps/ParcelCavern/scripts.pory"
	lock
# 382 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 383 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R3_Text_0, MSGBOX_YESNO
# 384 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Aslaug_R3_2
# 389 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_ASLAUG_R3, ParcelCavern_T_Aslaug_R3_Text_1
# 390 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R3_Text_2, MSGBOX_DEFAULT
# 391 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Aslaug_R3_2:
# 385 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_1, MSGBOX_DEFAULT
# 386 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Aslaug_R4::
# 395 "data/maps/ParcelCavern/scripts.pory"
	lock
# 396 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 397 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R4_Text_0, MSGBOX_YESNO
# 398 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Aslaug_R4_2
# 403 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_ASLAUG_R4, ParcelCavern_T_Aslaug_R4_Text_1
# 404 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R4_Text_2, MSGBOX_DEFAULT
# 405 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Aslaug_R4_2:
# 399 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_1, MSGBOX_DEFAULT
# 400 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Aslaug_R5::
# 409 "data/maps/ParcelCavern/scripts.pory"
	lock
# 410 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 411 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R5_Text_0, MSGBOX_YESNO
# 412 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Aslaug_R5_2
# 417 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_ASLAUG_R5, ParcelCavern_T_Aslaug_R5_Text_1
# 418 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R5_Text_2, MSGBOX_DEFAULT
# 419 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Aslaug_R5_2:
# 413 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_1, MSGBOX_DEFAULT
# 414 "data/maps/ParcelCavern/scripts.pory"
	release
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
# 101 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Twenty metres of ice when they\n"
	.string "first cored it. Fourteen now. Deepwater\l"
	.string "calls that 'accessible'.$"

ParcelCavern_TechA_R2_Text_0:
# 112 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelCavern_TechA_R2_Text_1:
# 114 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCavern_TechA_R2_Text_2:
# 118 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Noted. Properly, this time.$"

ParcelCavern_TechA_R2_Text_3:
# 119 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCavern_TechA_R3_Text_0:
# 126 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelCavern_TechA_R3_Text_1:
# 132 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: That's the one I wanted to see.$"

ParcelCavern_TechA_R3_Text_2:
# 133 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: One more in me. After the high\n"
	.string "ground.$"

ParcelCavern_TechA_R4_Text_0:
# 140 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCavern_TechA_R4_Text_1:
# 146 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: …Fair.$"

ParcelCavern_TechA_R4_Text_2:
# 147 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCavern_TechA_R5_Text_0:
# 154 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCavern_TechA_R5_Text_1:
# 160 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Right. That's the whole of it.$"

ParcelCavern_TechA_R5_Text_2:
# 161 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCavern_TechB_Text_0:
# 167 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Corps cadet, posted to watch the\n"
	.string "posted. KELDA watches me. I watch her.\l"
	.string "Spar, it passes the shift.$"

ParcelCavern_TechB_Text_1:
# 168 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Shift passed.$"

ParcelCavern_TechB_Text_2:
# 183 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: There's a DELIBIRD at the far end\n"
	.string "that never leaves. KELDA logged it as\l"
	.string "an asset. I logged it as a bird.$"

ParcelCavern_TechB_R2_Text_0:
# 194 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: I kept the team up for this. Again?$"

ParcelCavern_TechB_R2_Text_1:
# 196 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Fine. Same spot.$"

ParcelCavern_TechB_R2_Text_2:
# 200 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Still yours.$"

ParcelCavern_TechB_R2_Text_3:
# 201 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCavern_TechB_R3_Text_0:
# 208 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCavern_TechB_R3_Text_1:
# 215 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCavern_TechB_R4_Text_0:
# 222 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCavern_TechB_R4_Text_1:
# 228 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: …Again, then. Later.$"

ParcelCavern_TechB_R4_Text_2:
# 229 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCavern_TechB_R5_Text_0:
# 236 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCavern_TechB_R5_Text_1:
# 242 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: That's the one I wanted to see.$"

ParcelCavern_TechB_R5_Text_2:
# 243 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCavern_Leave_Text_0:
# 250 "data/maps/ParcelCavern/scripts.pory"
	.string "The ladder up to the summit, and the\n"
	.string "bright thin daylight beyond.$"

ParcelCavern_T_Brynjulf_Text_0:
# 260 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Deepwater core crew. The ice\n"
	.string "is shorter every season. Battle, it's\l"
	.string "warmer.$"

ParcelCavern_T_Brynjulf_Text_1:
# 261 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Warmer. Briefly.$"

ParcelCavern_T_Brynjulf_Text_2:
# 276 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Twenty metres when they\n"
	.string "first cored it. Fourteen now.\l"
	.string "'Accessible', the log says.$"

ParcelCavern_T_Brynjulf_R2_Text_0:
# 287 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Clearances or not, I want\n"
	.string "that one back. Go?$"

ParcelCavern_T_Brynjulf_R2_Text_1:
# 289 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: No hurry. The water keeps.$"

ParcelCavern_T_Brynjulf_R2_Text_2:
# 293 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: …Fair.$"

ParcelCavern_T_Brynjulf_R2_Text_3:
# 294 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCavern_T_Brynjulf_R3_Text_0:
# 301 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelCavern_T_Brynjulf_R3_Text_1:
# 307 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Still yours.$"

ParcelCavern_T_Brynjulf_R3_Text_2:
# 308 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelCavern_T_Brynjulf_R4_Text_0:
# 315 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelCavern_T_Brynjulf_R4_Text_1:
# 321 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: That's the one I wanted to\n"
	.string "see.$"

ParcelCavern_T_Brynjulf_R4_Text_2:
# 322 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCavern_T_Brynjulf_R5_Text_0:
# 329 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCavern_T_Brynjulf_R5_Text_1:
# 335 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Noted. Properly, this time.$"

ParcelCavern_T_Brynjulf_R5_Text_2:
# 336 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCavern_T_Aslaug_Text_0:
# 342 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Cadet ASLAUG, posted to watch\n"
	.string "the posted. Spar. It passes the shift.$"

ParcelCavern_T_Aslaug_Text_1:
# 343 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Shift passed.$"

ParcelCavern_T_Aslaug_Text_2:
# 358 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: The DELIBIRD at the deep end\n"
	.string "never leaves. KELDA logged it as an\l"
	.string "asset. I logged it as a bird.$"

ParcelCavern_T_Aslaug_R2_Text_0:
# 369 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelCavern_T_Aslaug_R2_Text_1:
# 371 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Another time, then.$"

ParcelCavern_T_Aslaug_R2_Text_2:
# 375 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: …Again, then. Later.$"

ParcelCavern_T_Aslaug_R2_Text_3:
# 376 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCavern_T_Aslaug_R3_Text_0:
# 383 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCavern_T_Aslaug_R3_Text_1:
# 389 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: …Fair.$"

ParcelCavern_T_Aslaug_R3_Text_2:
# 390 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: One more in me. After the high\n"
	.string "ground.$"

ParcelCavern_T_Aslaug_R4_Text_0:
# 397 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCavern_T_Aslaug_R4_Text_1:
# 403 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Still yours.$"

ParcelCavern_T_Aslaug_R4_Text_2:
# 404 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCavern_T_Aslaug_R5_Text_0:
# 411 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCavern_T_Aslaug_R5_Text_1:
# 417 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Noted. Properly, this time.$"

ParcelCavern_T_Aslaug_R5_Text_2:
# 418 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: That's all I've got. It was\n"
	.string "enough to see it done.$"
