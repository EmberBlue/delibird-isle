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
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCavern_GateKelda_2
# 55 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_GateKelda_Text_1, MSGBOX_DEFAULT
# 56 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_GateKelda_2:
# 51 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_GateKelda_Text_0, MSGBOX_DEFAULT
# 52 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_EverfrostCache::
# 62 "data/maps/ParcelCavern/scripts.pory"
	lock
# 63 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 64 "data/maps/ParcelCavern/scripts.pory"
	playse SE_ICE_CRACK
# 65 "data/maps/ParcelCavern/scripts.pory"
	giveitem ITEM_NEVER_MELT_ICE
# 66 "data/maps/ParcelCavern/scripts.pory"
	giveitem ITEM_RARE_CANDY, 2
# 67 "data/maps/ParcelCavern/scripts.pory"
	setflag FLAG_SKALDMERE_CAVERN_REWARD
# 68 "data/maps/ParcelCavern/scripts.pory"
	removeobject 4
# 69 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_EverfrostCache_Text_0, MSGBOX_DEFAULT
# 70 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_Delibird::
# 76 "data/maps/ParcelCavern/scripts.pory"
	lock
# 77 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Delibird_Text_0, MSGBOX_DEFAULT
# 78 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Delibird_Text_1, MSGBOX_DEFAULT
# 79 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_Heart::
# 83 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Heart_Text_0, MSGBOX_SIGN
	end


ParcelCavern_ItemIceHeal::
# 86 "data/maps/ParcelCavern/scripts.pory"
	finditem ITEM_ICE_HEAL
	end


ParcelCavern_TechA::
# 89 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CAV_TECH_A, ParcelCavern_TechA_Text_0, ParcelCavern_TechA_Text_1, ParcelCavern_TechA_FirstWin
# 93 "data/maps/ParcelCavern/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 94 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCavern_TechA_3
ParcelCavern_TechA_1:
# 97 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCavern_TechA_8
ParcelCavern_TechA_6:
# 100 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCavern_TechA_13
ParcelCavern_TechA_11:
# 103 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCavern_TechA_18
ParcelCavern_TechA_16:
# 106 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_Text_2, MSGBOX_DEFAULT
	end

ParcelCavern_TechA_2:
# 95 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechA_R2
	goto ParcelCavern_TechA_1

ParcelCavern_TechA_3:
# 94 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_A_R2
	goto_if 0, ParcelCavern_TechA_2
	goto ParcelCavern_TechA_1

ParcelCavern_TechA_7:
# 98 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechA_R3
	goto ParcelCavern_TechA_6

ParcelCavern_TechA_8:
# 97 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_A_R3
	goto_if 0, ParcelCavern_TechA_7
	goto ParcelCavern_TechA_6

ParcelCavern_TechA_12:
# 101 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechA_R4
	goto ParcelCavern_TechA_11

ParcelCavern_TechA_13:
# 100 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_A_R4
	goto_if 0, ParcelCavern_TechA_12
	goto ParcelCavern_TechA_11

ParcelCavern_TechA_17:
# 104 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechA_R5
	goto ParcelCavern_TechA_16

ParcelCavern_TechA_18:
# 103 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_A_R5
	goto_if 0, ParcelCavern_TechA_17
	goto ParcelCavern_TechA_16


ParcelCavern_TechA_FirstWin::
# 110 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_Text_2, MSGBOX_DEFAULT
# 111 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechA_R2::
# 115 "data/maps/ParcelCavern/scripts.pory"
	lock
# 116 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 117 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_0, MSGBOX_YESNO
# 118 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechA_R2_2
# 123 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_A_R2, ParcelCavern_TechA_R2_Text_2
# 124 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_3, MSGBOX_DEFAULT
# 125 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechA_R2_2:
# 119 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_1, MSGBOX_DEFAULT
# 120 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechA_R3::
# 129 "data/maps/ParcelCavern/scripts.pory"
	lock
# 130 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 131 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R3_Text_0, MSGBOX_YESNO
# 132 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechA_R3_2
# 137 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_A_R3, ParcelCavern_TechA_R3_Text_1
# 138 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R3_Text_2, MSGBOX_DEFAULT
# 139 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechA_R3_2:
# 133 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_1, MSGBOX_DEFAULT
# 134 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechA_R4::
# 143 "data/maps/ParcelCavern/scripts.pory"
	lock
# 144 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 145 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R4_Text_0, MSGBOX_YESNO
# 146 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechA_R4_2
# 151 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_A_R4, ParcelCavern_TechA_R4_Text_1
# 152 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R4_Text_2, MSGBOX_DEFAULT
# 153 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechA_R4_2:
# 147 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_1, MSGBOX_DEFAULT
# 148 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechA_R5::
# 157 "data/maps/ParcelCavern/scripts.pory"
	lock
# 158 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 159 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R5_Text_0, MSGBOX_YESNO
# 160 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechA_R5_2
# 165 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_A_R5, ParcelCavern_TechA_R5_Text_1
# 166 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R5_Text_2, MSGBOX_DEFAULT
# 167 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechA_R5_2:
# 161 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_1, MSGBOX_DEFAULT
# 162 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechB::
# 171 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CAV_TECH_B, ParcelCavern_TechB_Text_0, ParcelCavern_TechB_Text_1, ParcelCavern_TechB_FirstWin
# 175 "data/maps/ParcelCavern/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 176 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCavern_TechB_3
ParcelCavern_TechB_1:
# 179 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCavern_TechB_8
ParcelCavern_TechB_6:
# 182 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCavern_TechB_13
ParcelCavern_TechB_11:
# 185 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCavern_TechB_18
ParcelCavern_TechB_16:
# 188 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_Text_2, MSGBOX_DEFAULT
	end

ParcelCavern_TechB_2:
# 177 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechB_R2
	goto ParcelCavern_TechB_1

ParcelCavern_TechB_3:
# 176 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_B_R2
	goto_if 0, ParcelCavern_TechB_2
	goto ParcelCavern_TechB_1

ParcelCavern_TechB_7:
# 180 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechB_R3
	goto ParcelCavern_TechB_6

ParcelCavern_TechB_8:
# 179 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_B_R3
	goto_if 0, ParcelCavern_TechB_7
	goto ParcelCavern_TechB_6

ParcelCavern_TechB_12:
# 183 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechB_R4
	goto ParcelCavern_TechB_11

ParcelCavern_TechB_13:
# 182 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_B_R4
	goto_if 0, ParcelCavern_TechB_12
	goto ParcelCavern_TechB_11

ParcelCavern_TechB_17:
# 186 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechB_R5
	goto ParcelCavern_TechB_16

ParcelCavern_TechB_18:
# 185 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_B_R5
	goto_if 0, ParcelCavern_TechB_17
	goto ParcelCavern_TechB_16


ParcelCavern_TechB_FirstWin::
# 192 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_Text_2, MSGBOX_DEFAULT
# 193 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechB_R2::
# 197 "data/maps/ParcelCavern/scripts.pory"
	lock
# 198 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 199 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_0, MSGBOX_YESNO
# 200 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechB_R2_2
# 205 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_B_R2, ParcelCavern_TechB_R2_Text_2
# 206 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_3, MSGBOX_DEFAULT
# 207 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechB_R2_2:
# 201 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_1, MSGBOX_DEFAULT
# 202 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechB_R3::
# 211 "data/maps/ParcelCavern/scripts.pory"
	lock
# 212 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 213 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R3_Text_0, MSGBOX_YESNO
# 214 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechB_R3_2
# 219 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_B_R3, ParcelCavern_TechB_R2_Text_2
# 220 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R3_Text_1, MSGBOX_DEFAULT
# 221 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechB_R3_2:
# 215 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_1, MSGBOX_DEFAULT
# 216 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechB_R4::
# 225 "data/maps/ParcelCavern/scripts.pory"
	lock
# 226 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 227 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R4_Text_0, MSGBOX_YESNO
# 228 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechB_R4_2
# 233 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_B_R4, ParcelCavern_TechB_R4_Text_1
# 234 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R4_Text_2, MSGBOX_DEFAULT
# 235 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechB_R4_2:
# 229 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_1, MSGBOX_DEFAULT
# 230 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechB_R5::
# 239 "data/maps/ParcelCavern/scripts.pory"
	lock
# 240 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 241 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R5_Text_0, MSGBOX_YESNO
# 242 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechB_R5_2
# 247 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_B_R5, ParcelCavern_TechB_R5_Text_1
# 248 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R5_Text_2, MSGBOX_DEFAULT
# 249 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechB_R5_2:
# 243 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_1, MSGBOX_DEFAULT
# 244 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_Leave::
# 254 "data/maps/ParcelCavern/scripts.pory"
	lockall
# 255 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Leave_Text_0, MSGBOX_DEFAULT
# 256 "data/maps/ParcelCavern/scripts.pory"
	closemessage
# 257 "data/maps/ParcelCavern/scripts.pory"
	warp MAP_PARCEL_DELIBIRD, 8, 4
# 258 "data/maps/ParcelCavern/scripts.pory"
	waitstate
	end


ParcelCavern_T_Brynjulf::
# 264 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CAV_BRYNJULF, ParcelCavern_T_Brynjulf_Text_0, ParcelCavern_T_Brynjulf_Text_1, ParcelCavern_T_Brynjulf_FirstWin
# 268 "data/maps/ParcelCavern/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 269 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCavern_T_Brynjulf_3
ParcelCavern_T_Brynjulf_1:
# 272 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCavern_T_Brynjulf_8
ParcelCavern_T_Brynjulf_6:
# 275 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCavern_T_Brynjulf_13
ParcelCavern_T_Brynjulf_11:
# 278 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCavern_T_Brynjulf_18
ParcelCavern_T_Brynjulf_16:
# 281 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_Text_2, MSGBOX_DEFAULT
	end

ParcelCavern_T_Brynjulf_2:
# 270 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Brynjulf_R2
	goto ParcelCavern_T_Brynjulf_1

ParcelCavern_T_Brynjulf_3:
# 269 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_BRYNJULF_R2
	goto_if 0, ParcelCavern_T_Brynjulf_2
	goto ParcelCavern_T_Brynjulf_1

ParcelCavern_T_Brynjulf_7:
# 273 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Brynjulf_R3
	goto ParcelCavern_T_Brynjulf_6

ParcelCavern_T_Brynjulf_8:
# 272 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_BRYNJULF_R3
	goto_if 0, ParcelCavern_T_Brynjulf_7
	goto ParcelCavern_T_Brynjulf_6

ParcelCavern_T_Brynjulf_12:
# 276 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Brynjulf_R4
	goto ParcelCavern_T_Brynjulf_11

ParcelCavern_T_Brynjulf_13:
# 275 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_BRYNJULF_R4
	goto_if 0, ParcelCavern_T_Brynjulf_12
	goto ParcelCavern_T_Brynjulf_11

ParcelCavern_T_Brynjulf_17:
# 279 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Brynjulf_R5
	goto ParcelCavern_T_Brynjulf_16

ParcelCavern_T_Brynjulf_18:
# 278 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_BRYNJULF_R5
	goto_if 0, ParcelCavern_T_Brynjulf_17
	goto ParcelCavern_T_Brynjulf_16


ParcelCavern_T_Brynjulf_FirstWin::
# 285 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_Text_2, MSGBOX_DEFAULT
# 286 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Brynjulf_R2::
# 290 "data/maps/ParcelCavern/scripts.pory"
	lock
# 291 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 292 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_0, MSGBOX_YESNO
# 293 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Brynjulf_R2_2
# 298 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_BRYNJULF_R2, ParcelCavern_T_Brynjulf_R2_Text_2
# 299 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_3, MSGBOX_DEFAULT
# 300 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Brynjulf_R2_2:
# 294 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_1, MSGBOX_DEFAULT
# 295 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Brynjulf_R3::
# 304 "data/maps/ParcelCavern/scripts.pory"
	lock
# 305 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 306 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R3_Text_0, MSGBOX_YESNO
# 307 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Brynjulf_R3_2
# 312 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_BRYNJULF_R3, ParcelCavern_T_Brynjulf_R3_Text_1
# 313 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R3_Text_2, MSGBOX_DEFAULT
# 314 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Brynjulf_R3_2:
# 308 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_1, MSGBOX_DEFAULT
# 309 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Brynjulf_R4::
# 318 "data/maps/ParcelCavern/scripts.pory"
	lock
# 319 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 320 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R4_Text_0, MSGBOX_YESNO
# 321 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Brynjulf_R4_2
# 326 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_BRYNJULF_R4, ParcelCavern_T_Brynjulf_R4_Text_1
# 327 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R4_Text_2, MSGBOX_DEFAULT
# 328 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Brynjulf_R4_2:
# 322 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_1, MSGBOX_DEFAULT
# 323 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Brynjulf_R5::
# 332 "data/maps/ParcelCavern/scripts.pory"
	lock
# 333 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 334 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R5_Text_0, MSGBOX_YESNO
# 335 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Brynjulf_R5_2
# 340 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_BRYNJULF_R5, ParcelCavern_T_Brynjulf_R5_Text_1
# 341 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R5_Text_2, MSGBOX_DEFAULT
# 342 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Brynjulf_R5_2:
# 336 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_1, MSGBOX_DEFAULT
# 337 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Aslaug::
# 346 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CAV_ASLAUG, ParcelCavern_T_Aslaug_Text_0, ParcelCavern_T_Aslaug_Text_1, ParcelCavern_T_Aslaug_FirstWin
# 350 "data/maps/ParcelCavern/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 351 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCavern_T_Aslaug_3
ParcelCavern_T_Aslaug_1:
# 354 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCavern_T_Aslaug_8
ParcelCavern_T_Aslaug_6:
# 357 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCavern_T_Aslaug_13
ParcelCavern_T_Aslaug_11:
# 360 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCavern_T_Aslaug_18
ParcelCavern_T_Aslaug_16:
# 363 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_Text_2, MSGBOX_DEFAULT
	end

ParcelCavern_T_Aslaug_2:
# 352 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Aslaug_R2
	goto ParcelCavern_T_Aslaug_1

ParcelCavern_T_Aslaug_3:
# 351 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_ASLAUG_R2
	goto_if 0, ParcelCavern_T_Aslaug_2
	goto ParcelCavern_T_Aslaug_1

ParcelCavern_T_Aslaug_7:
# 355 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Aslaug_R3
	goto ParcelCavern_T_Aslaug_6

ParcelCavern_T_Aslaug_8:
# 354 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_ASLAUG_R3
	goto_if 0, ParcelCavern_T_Aslaug_7
	goto ParcelCavern_T_Aslaug_6

ParcelCavern_T_Aslaug_12:
# 358 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Aslaug_R4
	goto ParcelCavern_T_Aslaug_11

ParcelCavern_T_Aslaug_13:
# 357 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_ASLAUG_R4
	goto_if 0, ParcelCavern_T_Aslaug_12
	goto ParcelCavern_T_Aslaug_11

ParcelCavern_T_Aslaug_17:
# 361 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Aslaug_R5
	goto ParcelCavern_T_Aslaug_16

ParcelCavern_T_Aslaug_18:
# 360 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_ASLAUG_R5
	goto_if 0, ParcelCavern_T_Aslaug_17
	goto ParcelCavern_T_Aslaug_16


ParcelCavern_T_Aslaug_FirstWin::
# 367 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_Text_2, MSGBOX_DEFAULT
# 368 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Aslaug_R2::
# 372 "data/maps/ParcelCavern/scripts.pory"
	lock
# 373 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 374 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_0, MSGBOX_YESNO
# 375 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Aslaug_R2_2
# 380 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_ASLAUG_R2, ParcelCavern_T_Aslaug_R2_Text_2
# 381 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_3, MSGBOX_DEFAULT
# 382 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Aslaug_R2_2:
# 376 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_1, MSGBOX_DEFAULT
# 377 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Aslaug_R3::
# 386 "data/maps/ParcelCavern/scripts.pory"
	lock
# 387 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 388 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R3_Text_0, MSGBOX_YESNO
# 389 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Aslaug_R3_2
# 394 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_ASLAUG_R3, ParcelCavern_T_Aslaug_R3_Text_1
# 395 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R3_Text_2, MSGBOX_DEFAULT
# 396 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Aslaug_R3_2:
# 390 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_1, MSGBOX_DEFAULT
# 391 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Aslaug_R4::
# 400 "data/maps/ParcelCavern/scripts.pory"
	lock
# 401 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 402 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R4_Text_0, MSGBOX_YESNO
# 403 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Aslaug_R4_2
# 408 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_ASLAUG_R4, ParcelCavern_T_Aslaug_R4_Text_1
# 409 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R4_Text_2, MSGBOX_DEFAULT
# 410 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Aslaug_R4_2:
# 404 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_1, MSGBOX_DEFAULT
# 405 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Aslaug_R5::
# 414 "data/maps/ParcelCavern/scripts.pory"
	lock
# 415 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 416 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R5_Text_0, MSGBOX_YESNO
# 417 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Aslaug_R5_2
# 422 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_ASLAUG_R5, ParcelCavern_T_Aslaug_R5_Text_1
# 423 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R5_Text_2, MSGBOX_DEFAULT
# 424 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Aslaug_R5_2:
# 418 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_1, MSGBOX_DEFAULT
# 419 "data/maps/ParcelCavern/scripts.pory"
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
# 51 "data/maps/ParcelCavern/scripts.pory"
	.string "KELDA: The everfrost is still on\n"
	.string "MEREHOLT's books. The books are under\l"
	.string "review. I hold a gate for a page that's\l"
	.string "being rewritten. I'll hold it properly\l"
	.string "anyway.$"

ParcelCavern_GateKelda_Text_1:
# 55 "data/maps/ParcelCavern/scripts.pory"
	.string "KELDA: You're entered against your\n"
	.string "card. The everfrost is on MEREHOLT's\l"
	.string "books. And now, so is your competence\l"
	.string "to stand near it.$"

ParcelCavern_EverfrostCache_Text_0:
# 69 "data/maps/ParcelCavern/scripts.pory"
	.string "In the hollow the slab kept shut: a\n"
	.string "knot of true everfrost, and supplies an\l"
	.string "old surveyor cached here and never\l"
	.string "came back for. The date on the tin is\l"
	.string "older than you are.$"

ParcelCavern_Delibird_Text_0:
# 77 "data/maps/ParcelCavern/scripts.pory"
	.string "A single DELIBIRD sits at the deep end,\n"
	.string "very still, watching the ice it can no\l"
	.string "longer count on.\p"
	.string "It isn't delivering anything. There's no\n"
	.string "one down here to deliver to. It looks at\l"
	.string "you, and at the lamp, and seems to\l"
	.string "decide you are not the thaw.$"

ParcelCavern_Delibird_Text_1:
# 78 "data/maps/ParcelCavern/scripts.pory"
	.string "It goes back to watching the ice. You\n"
	.string "leave it the cold. It's the only gift the\l"
	.string "cavern has left to give, and it's giving\l"
	.string "it to one bird.$"

ParcelCavern_Heart_Text_0:
# 83 "data/maps/ParcelCavern/scripts.pory"
	.string "The oldest ice, blue to black. A mark\n"
	.string "scratched on the wall at head height,\l"
	.string "and a newer one a hand's width lower.\l"
	.string "The islanders measure their winters\l"
	.string "against it. You don't need the notebook\l"
	.string "to read this one.$"

ParcelCavern_TechA_Text_0:
# 90 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Deepwater survey. We core the\n"
	.string "ice. The cores are getting shorter.\l"
	.string "Battle me, it's warmer than standing\l"
	.string "still.$"

ParcelCavern_TechA_Text_1:
# 91 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Still cold.$"

ParcelCavern_TechA_Text_2:
# 106 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Twenty metres of ice when they\n"
	.string "first cored it. Fourteen now. Deepwater\l"
	.string "calls that 'accessible'.$"

ParcelCavern_TechA_R2_Text_0:
# 117 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelCavern_TechA_R2_Text_1:
# 119 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCavern_TechA_R2_Text_2:
# 123 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Noted. Properly, this time.$"

ParcelCavern_TechA_R2_Text_3:
# 124 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCavern_TechA_R3_Text_0:
# 131 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelCavern_TechA_R3_Text_1:
# 137 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: That's the one I wanted to see.$"

ParcelCavern_TechA_R3_Text_2:
# 138 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: One more in me. After the high\n"
	.string "ground.$"

ParcelCavern_TechA_R4_Text_0:
# 145 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCavern_TechA_R4_Text_1:
# 151 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: …Fair.$"

ParcelCavern_TechA_R4_Text_2:
# 152 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCavern_TechA_R5_Text_0:
# 159 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCavern_TechA_R5_Text_1:
# 165 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Right. That's the whole of it.$"

ParcelCavern_TechA_R5_Text_2:
# 166 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCavern_TechB_Text_0:
# 172 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Corps cadet, posted to watch the\n"
	.string "posted. KELDA watches me. I watch her.\l"
	.string "Spar, it passes the shift.$"

ParcelCavern_TechB_Text_1:
# 173 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Shift passed.$"

ParcelCavern_TechB_Text_2:
# 188 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: There's a DELIBIRD at the far end\n"
	.string "that never leaves. KELDA logged it as\l"
	.string "an asset. I logged it as a bird.$"

ParcelCavern_TechB_R2_Text_0:
# 199 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: I kept the team up for this. Again?$"

ParcelCavern_TechB_R2_Text_1:
# 201 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Fine. Same spot.$"

ParcelCavern_TechB_R2_Text_2:
# 205 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Still yours.$"

ParcelCavern_TechB_R2_Text_3:
# 206 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCavern_TechB_R3_Text_0:
# 213 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCavern_TechB_R3_Text_1:
# 220 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCavern_TechB_R4_Text_0:
# 227 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCavern_TechB_R4_Text_1:
# 233 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: …Again, then. Later.$"

ParcelCavern_TechB_R4_Text_2:
# 234 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCavern_TechB_R5_Text_0:
# 241 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCavern_TechB_R5_Text_1:
# 247 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: That's the one I wanted to see.$"

ParcelCavern_TechB_R5_Text_2:
# 248 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCavern_Leave_Text_0:
# 255 "data/maps/ParcelCavern/scripts.pory"
	.string "The ladder up to the summit, and the\n"
	.string "bright thin daylight beyond.$"

ParcelCavern_T_Brynjulf_Text_0:
# 265 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Deepwater core crew. The ice\n"
	.string "is shorter every season. Battle, it's\l"
	.string "warmer.$"

ParcelCavern_T_Brynjulf_Text_1:
# 266 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Warmer. Briefly.$"

ParcelCavern_T_Brynjulf_Text_2:
# 281 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Twenty metres when they\n"
	.string "first cored it. Fourteen now.\l"
	.string "'Accessible', the log says.$"

ParcelCavern_T_Brynjulf_R2_Text_0:
# 292 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Clearances or not, I want\n"
	.string "that one back. Go?$"

ParcelCavern_T_Brynjulf_R2_Text_1:
# 294 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: No hurry. The water keeps.$"

ParcelCavern_T_Brynjulf_R2_Text_2:
# 298 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: …Fair.$"

ParcelCavern_T_Brynjulf_R2_Text_3:
# 299 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCavern_T_Brynjulf_R3_Text_0:
# 306 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelCavern_T_Brynjulf_R3_Text_1:
# 312 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Still yours.$"

ParcelCavern_T_Brynjulf_R3_Text_2:
# 313 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelCavern_T_Brynjulf_R4_Text_0:
# 320 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelCavern_T_Brynjulf_R4_Text_1:
# 326 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: That's the one I wanted to\n"
	.string "see.$"

ParcelCavern_T_Brynjulf_R4_Text_2:
# 327 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCavern_T_Brynjulf_R5_Text_0:
# 334 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCavern_T_Brynjulf_R5_Text_1:
# 340 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Noted. Properly, this time.$"

ParcelCavern_T_Brynjulf_R5_Text_2:
# 341 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCavern_T_Aslaug_Text_0:
# 347 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Cadet ASLAUG, posted to watch\n"
	.string "the posted. Spar. It passes the shift.$"

ParcelCavern_T_Aslaug_Text_1:
# 348 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Shift passed.$"

ParcelCavern_T_Aslaug_Text_2:
# 363 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: The DELIBIRD at the deep end\n"
	.string "never leaves. KELDA logged it as an\l"
	.string "asset. I logged it as a bird.$"

ParcelCavern_T_Aslaug_R2_Text_0:
# 374 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelCavern_T_Aslaug_R2_Text_1:
# 376 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Another time, then.$"

ParcelCavern_T_Aslaug_R2_Text_2:
# 380 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: …Again, then. Later.$"

ParcelCavern_T_Aslaug_R2_Text_3:
# 381 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCavern_T_Aslaug_R3_Text_0:
# 388 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCavern_T_Aslaug_R3_Text_1:
# 394 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: …Fair.$"

ParcelCavern_T_Aslaug_R3_Text_2:
# 395 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: One more in me. After the high\n"
	.string "ground.$"

ParcelCavern_T_Aslaug_R4_Text_0:
# 402 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCavern_T_Aslaug_R4_Text_1:
# 408 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Still yours.$"

ParcelCavern_T_Aslaug_R4_Text_2:
# 409 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCavern_T_Aslaug_R5_Text_0:
# 416 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCavern_T_Aslaug_R5_Text_1:
# 422 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Noted. Properly, this time.$"

ParcelCavern_T_Aslaug_R5_Text_2:
# 423 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: That's all I've got. It was\n"
	.string "enough to see it done.$"
