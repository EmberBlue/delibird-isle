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
	msgbox ParcelCavern_Audit_Text_1, MSGBOX_DEFAULT
# 41 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GATE_CAVERN, ParcelCavern_Audit_Text_2
# 42 "data/maps/ParcelCavern/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_CAVERN
# 43 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Audit_Text_3, MSGBOX_DEFAULT
# 44 "data/maps/ParcelCavern/scripts.pory"
	setvar VAR_TEMP_3, 1
# 45 "data/maps/ParcelCavern/scripts.pory"
	releaseall
	end

ParcelCavern_Audit_2:
# 35 "data/maps/ParcelCavern/scripts.pory"
	setvar VAR_TEMP_3, 1
	end


ParcelCavern_GateKelda::
# 49 "data/maps/ParcelCavern/scripts.pory"
	lock
# 50 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 51 "data/maps/ParcelCavern/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCavern_GateKelda_2
# 56 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_GateKelda_Text_1, MSGBOX_DEFAULT
# 57 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_GateKelda_2:
# 52 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_GateKelda_Text_0, MSGBOX_DEFAULT
# 53 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_EverfrostCache::
# 63 "data/maps/ParcelCavern/scripts.pory"
	lock
# 64 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 65 "data/maps/ParcelCavern/scripts.pory"
	playse SE_ICE_CRACK
# 66 "data/maps/ParcelCavern/scripts.pory"
	giveitem ITEM_NEVER_MELT_ICE
# 67 "data/maps/ParcelCavern/scripts.pory"
	giveitem ITEM_RARE_CANDY, 2
# 68 "data/maps/ParcelCavern/scripts.pory"
	setflag FLAG_SKALDMERE_CAVERN_REWARD
# 69 "data/maps/ParcelCavern/scripts.pory"
	removeobject 4
# 70 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_EverfrostCache_Text_0, MSGBOX_DEFAULT
# 71 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_Delibird::
# 77 "data/maps/ParcelCavern/scripts.pory"
	lock
# 78 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Delibird_Text_0, MSGBOX_DEFAULT
# 79 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Delibird_Text_1, MSGBOX_DEFAULT
# 80 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_Heart::
# 84 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Heart_Text_0, MSGBOX_SIGN
	end


ParcelCavern_ItemIceHeal::
# 87 "data/maps/ParcelCavern/scripts.pory"
	finditem ITEM_ICE_HEAL
	end


ParcelCavern_TechA::
# 90 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CAV_TECH_A, ParcelCavern_TechA_Text_0, ParcelCavern_TechA_Text_1, ParcelCavern_TechA_FirstWin
# 94 "data/maps/ParcelCavern/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 95 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCavern_TechA_3
ParcelCavern_TechA_1:
# 98 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCavern_TechA_8
ParcelCavern_TechA_6:
# 101 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCavern_TechA_13
ParcelCavern_TechA_11:
# 104 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCavern_TechA_18
ParcelCavern_TechA_16:
# 107 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_Text_2, MSGBOX_DEFAULT
	end

ParcelCavern_TechA_2:
# 96 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechA_R2
	goto ParcelCavern_TechA_1

ParcelCavern_TechA_3:
# 95 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_A_R2
	goto_if 0, ParcelCavern_TechA_2
	goto ParcelCavern_TechA_1

ParcelCavern_TechA_7:
# 99 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechA_R3
	goto ParcelCavern_TechA_6

ParcelCavern_TechA_8:
# 98 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_A_R3
	goto_if 0, ParcelCavern_TechA_7
	goto ParcelCavern_TechA_6

ParcelCavern_TechA_12:
# 102 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechA_R4
	goto ParcelCavern_TechA_11

ParcelCavern_TechA_13:
# 101 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_A_R4
	goto_if 0, ParcelCavern_TechA_12
	goto ParcelCavern_TechA_11

ParcelCavern_TechA_17:
# 105 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechA_R5
	goto ParcelCavern_TechA_16

ParcelCavern_TechA_18:
# 104 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_A_R5
	goto_if 0, ParcelCavern_TechA_17
	goto ParcelCavern_TechA_16


ParcelCavern_TechA_FirstWin::
# 111 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_Text_2, MSGBOX_DEFAULT
# 112 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechA_R2::
# 116 "data/maps/ParcelCavern/scripts.pory"
	lock
# 117 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 118 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_0, MSGBOX_YESNO
# 119 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechA_R2_2
# 124 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_A_R2, ParcelCavern_TechA_R2_Text_2
# 125 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_3, MSGBOX_DEFAULT
# 126 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechA_R2_2:
# 120 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_1, MSGBOX_DEFAULT
# 121 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechA_R3::
# 130 "data/maps/ParcelCavern/scripts.pory"
	lock
# 131 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 132 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R3_Text_0, MSGBOX_YESNO
# 133 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechA_R3_2
# 138 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_A_R3, ParcelCavern_TechA_R3_Text_1
# 139 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R3_Text_2, MSGBOX_DEFAULT
# 140 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechA_R3_2:
# 134 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_1, MSGBOX_DEFAULT
# 135 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechA_R4::
# 144 "data/maps/ParcelCavern/scripts.pory"
	lock
# 145 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 146 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R4_Text_0, MSGBOX_YESNO
# 147 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechA_R4_2
# 152 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_A_R4, ParcelCavern_TechA_R4_Text_1
# 153 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R4_Text_2, MSGBOX_DEFAULT
# 154 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechA_R4_2:
# 148 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_1, MSGBOX_DEFAULT
# 149 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechA_R5::
# 158 "data/maps/ParcelCavern/scripts.pory"
	lock
# 159 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 160 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R5_Text_0, MSGBOX_YESNO
# 161 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechA_R5_2
# 166 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_A_R5, ParcelCavern_TechA_R5_Text_1
# 167 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R5_Text_2, MSGBOX_DEFAULT
# 168 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechA_R5_2:
# 162 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechA_R2_Text_1, MSGBOX_DEFAULT
# 163 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechB::
# 172 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CAV_TECH_B, ParcelCavern_TechB_Text_0, ParcelCavern_TechB_Text_1, ParcelCavern_TechB_FirstWin
# 176 "data/maps/ParcelCavern/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 177 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCavern_TechB_3
ParcelCavern_TechB_1:
# 180 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCavern_TechB_8
ParcelCavern_TechB_6:
# 183 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCavern_TechB_13
ParcelCavern_TechB_11:
# 186 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCavern_TechB_18
ParcelCavern_TechB_16:
# 189 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_Text_2, MSGBOX_DEFAULT
	end

ParcelCavern_TechB_2:
# 178 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechB_R2
	goto ParcelCavern_TechB_1

ParcelCavern_TechB_3:
# 177 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_B_R2
	goto_if 0, ParcelCavern_TechB_2
	goto ParcelCavern_TechB_1

ParcelCavern_TechB_7:
# 181 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechB_R3
	goto ParcelCavern_TechB_6

ParcelCavern_TechB_8:
# 180 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_B_R3
	goto_if 0, ParcelCavern_TechB_7
	goto ParcelCavern_TechB_6

ParcelCavern_TechB_12:
# 184 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechB_R4
	goto ParcelCavern_TechB_11

ParcelCavern_TechB_13:
# 183 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_B_R4
	goto_if 0, ParcelCavern_TechB_12
	goto ParcelCavern_TechB_11

ParcelCavern_TechB_17:
# 187 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_TechB_R5
	goto ParcelCavern_TechB_16

ParcelCavern_TechB_18:
# 186 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_TECH_B_R5
	goto_if 0, ParcelCavern_TechB_17
	goto ParcelCavern_TechB_16


ParcelCavern_TechB_FirstWin::
# 193 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_Text_2, MSGBOX_DEFAULT
# 194 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechB_R2::
# 198 "data/maps/ParcelCavern/scripts.pory"
	lock
# 199 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 200 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_0, MSGBOX_YESNO
# 201 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechB_R2_2
# 206 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_B_R2, ParcelCavern_TechB_R2_Text_2
# 207 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_3, MSGBOX_DEFAULT
# 208 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechB_R2_2:
# 202 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_1, MSGBOX_DEFAULT
# 203 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechB_R3::
# 212 "data/maps/ParcelCavern/scripts.pory"
	lock
# 213 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 214 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R3_Text_0, MSGBOX_YESNO
# 215 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechB_R3_2
# 220 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_B_R3, ParcelCavern_TechB_R2_Text_2
# 221 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R3_Text_1, MSGBOX_DEFAULT
# 222 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechB_R3_2:
# 216 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_1, MSGBOX_DEFAULT
# 217 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechB_R4::
# 226 "data/maps/ParcelCavern/scripts.pory"
	lock
# 227 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 228 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R4_Text_0, MSGBOX_YESNO
# 229 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechB_R4_2
# 234 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_B_R4, ParcelCavern_TechB_R4_Text_1
# 235 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R4_Text_2, MSGBOX_DEFAULT
# 236 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechB_R4_2:
# 230 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_1, MSGBOX_DEFAULT
# 231 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_TechB_R5::
# 240 "data/maps/ParcelCavern/scripts.pory"
	lock
# 241 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 242 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R5_Text_0, MSGBOX_YESNO
# 243 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_TechB_R5_2
# 248 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_TECH_B_R5, ParcelCavern_TechB_R5_Text_1
# 249 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R5_Text_2, MSGBOX_DEFAULT
# 250 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_TechB_R5_2:
# 244 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_TechB_R2_Text_1, MSGBOX_DEFAULT
# 245 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_Leave::
# 255 "data/maps/ParcelCavern/scripts.pory"
	lockall
# 256 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_Leave_Text_0, MSGBOX_DEFAULT
# 257 "data/maps/ParcelCavern/scripts.pory"
	closemessage
# 258 "data/maps/ParcelCavern/scripts.pory"
	warp MAP_PARCEL_DELIBIRD, 8, 4
# 259 "data/maps/ParcelCavern/scripts.pory"
	waitstate
	end


ParcelCavern_T_Brynjulf::
# 265 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CAV_BRYNJULF, ParcelCavern_T_Brynjulf_Text_0, ParcelCavern_T_Brynjulf_Text_1, ParcelCavern_T_Brynjulf_FirstWin
# 269 "data/maps/ParcelCavern/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 270 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCavern_T_Brynjulf_3
ParcelCavern_T_Brynjulf_1:
# 273 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCavern_T_Brynjulf_8
ParcelCavern_T_Brynjulf_6:
# 276 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCavern_T_Brynjulf_13
ParcelCavern_T_Brynjulf_11:
# 279 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCavern_T_Brynjulf_18
ParcelCavern_T_Brynjulf_16:
# 282 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_Text_2, MSGBOX_DEFAULT
	end

ParcelCavern_T_Brynjulf_2:
# 271 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Brynjulf_R2
	goto ParcelCavern_T_Brynjulf_1

ParcelCavern_T_Brynjulf_3:
# 270 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_BRYNJULF_R2
	goto_if 0, ParcelCavern_T_Brynjulf_2
	goto ParcelCavern_T_Brynjulf_1

ParcelCavern_T_Brynjulf_7:
# 274 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Brynjulf_R3
	goto ParcelCavern_T_Brynjulf_6

ParcelCavern_T_Brynjulf_8:
# 273 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_BRYNJULF_R3
	goto_if 0, ParcelCavern_T_Brynjulf_7
	goto ParcelCavern_T_Brynjulf_6

ParcelCavern_T_Brynjulf_12:
# 277 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Brynjulf_R4
	goto ParcelCavern_T_Brynjulf_11

ParcelCavern_T_Brynjulf_13:
# 276 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_BRYNJULF_R4
	goto_if 0, ParcelCavern_T_Brynjulf_12
	goto ParcelCavern_T_Brynjulf_11

ParcelCavern_T_Brynjulf_17:
# 280 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Brynjulf_R5
	goto ParcelCavern_T_Brynjulf_16

ParcelCavern_T_Brynjulf_18:
# 279 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_BRYNJULF_R5
	goto_if 0, ParcelCavern_T_Brynjulf_17
	goto ParcelCavern_T_Brynjulf_16


ParcelCavern_T_Brynjulf_FirstWin::
# 286 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_Text_2, MSGBOX_DEFAULT
# 287 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Brynjulf_R2::
# 291 "data/maps/ParcelCavern/scripts.pory"
	lock
# 292 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 293 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_0, MSGBOX_YESNO
# 294 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Brynjulf_R2_2
# 299 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_BRYNJULF_R2, ParcelCavern_T_Brynjulf_R2_Text_2
# 300 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_3, MSGBOX_DEFAULT
# 301 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Brynjulf_R2_2:
# 295 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_1, MSGBOX_DEFAULT
# 296 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Brynjulf_R3::
# 305 "data/maps/ParcelCavern/scripts.pory"
	lock
# 306 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 307 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R3_Text_0, MSGBOX_YESNO
# 308 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Brynjulf_R3_2
# 313 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_BRYNJULF_R3, ParcelCavern_T_Brynjulf_R3_Text_1
# 314 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R3_Text_2, MSGBOX_DEFAULT
# 315 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Brynjulf_R3_2:
# 309 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_1, MSGBOX_DEFAULT
# 310 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Brynjulf_R4::
# 319 "data/maps/ParcelCavern/scripts.pory"
	lock
# 320 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 321 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R4_Text_0, MSGBOX_YESNO
# 322 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Brynjulf_R4_2
# 327 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_BRYNJULF_R4, ParcelCavern_T_Brynjulf_R4_Text_1
# 328 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R4_Text_2, MSGBOX_DEFAULT
# 329 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Brynjulf_R4_2:
# 323 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_1, MSGBOX_DEFAULT
# 324 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Brynjulf_R5::
# 333 "data/maps/ParcelCavern/scripts.pory"
	lock
# 334 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 335 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R5_Text_0, MSGBOX_YESNO
# 336 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Brynjulf_R5_2
# 341 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_BRYNJULF_R5, ParcelCavern_T_Brynjulf_R5_Text_1
# 342 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R5_Text_2, MSGBOX_DEFAULT
# 343 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Brynjulf_R5_2:
# 337 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Brynjulf_R2_Text_1, MSGBOX_DEFAULT
# 338 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Aslaug::
# 347 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CAV_ASLAUG, ParcelCavern_T_Aslaug_Text_0, ParcelCavern_T_Aslaug_Text_1, ParcelCavern_T_Aslaug_FirstWin
# 351 "data/maps/ParcelCavern/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 352 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCavern_T_Aslaug_3
ParcelCavern_T_Aslaug_1:
# 355 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCavern_T_Aslaug_8
ParcelCavern_T_Aslaug_6:
# 358 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCavern_T_Aslaug_13
ParcelCavern_T_Aslaug_11:
# 361 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCavern_T_Aslaug_18
ParcelCavern_T_Aslaug_16:
# 364 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_Text_2, MSGBOX_DEFAULT
	end

ParcelCavern_T_Aslaug_2:
# 353 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Aslaug_R2
	goto ParcelCavern_T_Aslaug_1

ParcelCavern_T_Aslaug_3:
# 352 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_ASLAUG_R2
	goto_if 0, ParcelCavern_T_Aslaug_2
	goto ParcelCavern_T_Aslaug_1

ParcelCavern_T_Aslaug_7:
# 356 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Aslaug_R3
	goto ParcelCavern_T_Aslaug_6

ParcelCavern_T_Aslaug_8:
# 355 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_ASLAUG_R3
	goto_if 0, ParcelCavern_T_Aslaug_7
	goto ParcelCavern_T_Aslaug_6

ParcelCavern_T_Aslaug_12:
# 359 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Aslaug_R4
	goto ParcelCavern_T_Aslaug_11

ParcelCavern_T_Aslaug_13:
# 358 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_ASLAUG_R4
	goto_if 0, ParcelCavern_T_Aslaug_12
	goto ParcelCavern_T_Aslaug_11

ParcelCavern_T_Aslaug_17:
# 362 "data/maps/ParcelCavern/scripts.pory"
	goto ParcelCavern_T_Aslaug_R5
	goto ParcelCavern_T_Aslaug_16

ParcelCavern_T_Aslaug_18:
# 361 "data/maps/ParcelCavern/scripts.pory"
	checktrainerflag TRAINER_SKALD_CAV_ASLAUG_R5
	goto_if 0, ParcelCavern_T_Aslaug_17
	goto ParcelCavern_T_Aslaug_16


ParcelCavern_T_Aslaug_FirstWin::
# 368 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_Text_2, MSGBOX_DEFAULT
# 369 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Aslaug_R2::
# 373 "data/maps/ParcelCavern/scripts.pory"
	lock
# 374 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 375 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_0, MSGBOX_YESNO
# 376 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Aslaug_R2_2
# 381 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_ASLAUG_R2, ParcelCavern_T_Aslaug_R2_Text_2
# 382 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_3, MSGBOX_DEFAULT
# 383 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Aslaug_R2_2:
# 377 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_1, MSGBOX_DEFAULT
# 378 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Aslaug_R3::
# 387 "data/maps/ParcelCavern/scripts.pory"
	lock
# 388 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 389 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R3_Text_0, MSGBOX_YESNO
# 390 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Aslaug_R3_2
# 395 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_ASLAUG_R3, ParcelCavern_T_Aslaug_R3_Text_1
# 396 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R3_Text_2, MSGBOX_DEFAULT
# 397 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Aslaug_R3_2:
# 391 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_1, MSGBOX_DEFAULT
# 392 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Aslaug_R4::
# 401 "data/maps/ParcelCavern/scripts.pory"
	lock
# 402 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 403 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R4_Text_0, MSGBOX_YESNO
# 404 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Aslaug_R4_2
# 409 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_ASLAUG_R4, ParcelCavern_T_Aslaug_R4_Text_1
# 410 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R4_Text_2, MSGBOX_DEFAULT
# 411 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Aslaug_R4_2:
# 405 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_1, MSGBOX_DEFAULT
# 406 "data/maps/ParcelCavern/scripts.pory"
	release
	end


ParcelCavern_T_Aslaug_R5::
# 415 "data/maps/ParcelCavern/scripts.pory"
	lock
# 416 "data/maps/ParcelCavern/scripts.pory"
	faceplayer
# 417 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R5_Text_0, MSGBOX_YESNO
# 418 "data/maps/ParcelCavern/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCavern_T_Aslaug_R5_2
# 423 "data/maps/ParcelCavern/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CAV_ASLAUG_R5, ParcelCavern_T_Aslaug_R5_Text_1
# 424 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R5_Text_2, MSGBOX_DEFAULT
# 425 "data/maps/ParcelCavern/scripts.pory"
	release
	end

ParcelCavern_T_Aslaug_R5_2:
# 419 "data/maps/ParcelCavern/scripts.pory"
	msgbox ParcelCavern_T_Aslaug_R2_Text_1, MSGBOX_DEFAULT
# 420 "data/maps/ParcelCavern/scripts.pory"
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
	.string "KELDA: For the ledger: the everfrost is\n"
	.string "an asset. It has a line, a value, and a\l"
	.string "depreciation schedule that assumes it\l"
	.string "will still be here.\p"
	.string "The schedule was drawn up on the Coast\n"
	.string "by someone who has not stood in this\l"
	.string "room. I stand in it every day. Both of\l"
	.string "those are in the ledger too.$"

ParcelCavern_Audit_Text_2:
# 41 "data/maps/ParcelCavern/scripts.pory"
	.string "KELDA: …Recorded. You read the cold;\n"
	.string "now the cold reads you.$"

ParcelCavern_Audit_Text_3:
# 43 "data/maps/ParcelCavern/scripts.pory"
	.string "KELDA: Cavern clearance, logged and\n"
	.string "filed. Deepwater keeps a close ledger.\l"
	.string "No one is granted the cold. You took it.$"

ParcelCavern_GateKelda_Text_0:
# 52 "data/maps/ParcelCavern/scripts.pory"
	.string "KELDA: The everfrost is still on\n"
	.string "MEREHOLT's books. The books are under\l"
	.string "review. I hold a gate for a page that's\l"
	.string "being rewritten. I'll hold it properly\l"
	.string "anyway.$"

ParcelCavern_GateKelda_Text_1:
# 56 "data/maps/ParcelCavern/scripts.pory"
	.string "KELDA: You're entered against your\n"
	.string "card. The everfrost is on MEREHOLT's\l"
	.string "books. And now, so is your competence\l"
	.string "to stand near it.$"

ParcelCavern_EverfrostCache_Text_0:
# 70 "data/maps/ParcelCavern/scripts.pory"
	.string "In the hollow the slab kept shut: a\n"
	.string "knot of true everfrost, and supplies an\l"
	.string "old surveyor cached here and never\l"
	.string "came back for. The date on the tin is\l"
	.string "older than you are.$"

ParcelCavern_Delibird_Text_0:
# 78 "data/maps/ParcelCavern/scripts.pory"
	.string "A single DELIBIRD sits at the deep end,\n"
	.string "very still, watching the ice it can no\l"
	.string "longer count on.\p"
	.string "It isn't delivering anything. There's no\n"
	.string "one down here to deliver to. It looks at\l"
	.string "you, and at the lamp, and seems to\l"
	.string "decide you are not the thaw.$"

ParcelCavern_Delibird_Text_1:
# 79 "data/maps/ParcelCavern/scripts.pory"
	.string "It goes back to watching the ice. You\n"
	.string "leave it the cold. It's the only gift the\l"
	.string "cavern has left to give, and it's giving\l"
	.string "it to one bird.$"

ParcelCavern_Heart_Text_0:
# 84 "data/maps/ParcelCavern/scripts.pory"
	.string "The oldest ice, blue to black. A mark\n"
	.string "scratched on the wall at head height,\l"
	.string "and a newer one a hand's width lower.\l"
	.string "The islanders measure their winters\l"
	.string "against it. You don't need the notebook\l"
	.string "to read this one.$"

ParcelCavern_TechA_Text_0:
# 91 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Deepwater survey. We core the\n"
	.string "ice. The cores are getting shorter.\l"
	.string "Battle me, it's warmer than standing\l"
	.string "still.$"

ParcelCavern_TechA_Text_1:
# 92 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Still cold.$"

ParcelCavern_TechA_Text_2:
# 107 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Twenty metres of ice when they\n"
	.string "first cored it. Fourteen now. Deepwater\l"
	.string "calls that 'accessible'.$"

ParcelCavern_TechA_R2_Text_0:
# 118 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelCavern_TechA_R2_Text_1:
# 120 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCavern_TechA_R2_Text_2:
# 124 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Noted. Properly, this time.$"

ParcelCavern_TechA_R2_Text_3:
# 125 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCavern_TechA_R3_Text_0:
# 132 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelCavern_TechA_R3_Text_1:
# 138 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: That's the one I wanted to see.$"

ParcelCavern_TechA_R3_Text_2:
# 139 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: One more in me. After the high\n"
	.string "ground.$"

ParcelCavern_TechA_R4_Text_0:
# 146 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCavern_TechA_R4_Text_1:
# 152 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: …Fair.$"

ParcelCavern_TechA_R4_Text_2:
# 153 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCavern_TechA_R5_Text_0:
# 160 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCavern_TechA_R5_Text_1:
# 166 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Right. That's the whole of it.$"

ParcelCavern_TechA_R5_Text_2:
# 167 "data/maps/ParcelCavern/scripts.pory"
	.string "ROLF: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCavern_TechB_Text_0:
# 173 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Corps cadet, posted to watch the\n"
	.string "posted. KELDA watches me. I watch her.\l"
	.string "Spar, it passes the shift.$"

ParcelCavern_TechB_Text_1:
# 174 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Shift passed.$"

ParcelCavern_TechB_Text_2:
# 189 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: There's a DELIBIRD at the far end\n"
	.string "that never leaves. KELDA logged it as\l"
	.string "an asset. I logged it as a bird.$"

ParcelCavern_TechB_R2_Text_0:
# 200 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: I kept the team up for this. Again?$"

ParcelCavern_TechB_R2_Text_1:
# 202 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Fine. Same spot.$"

ParcelCavern_TechB_R2_Text_2:
# 206 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Still yours.$"

ParcelCavern_TechB_R2_Text_3:
# 207 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCavern_TechB_R3_Text_0:
# 214 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCavern_TechB_R3_Text_1:
# 221 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCavern_TechB_R4_Text_0:
# 228 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCavern_TechB_R4_Text_1:
# 234 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: …Again, then. Later.$"

ParcelCavern_TechB_R4_Text_2:
# 235 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCavern_TechB_R5_Text_0:
# 242 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCavern_TechB_R5_Text_1:
# 248 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: That's the one I wanted to see.$"

ParcelCavern_TechB_R5_Text_2:
# 249 "data/maps/ParcelCavern/scripts.pory"
	.string "UNN: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCavern_Leave_Text_0:
# 256 "data/maps/ParcelCavern/scripts.pory"
	.string "The ladder up to the summit, and the\n"
	.string "bright thin daylight beyond.$"

ParcelCavern_T_Brynjulf_Text_0:
# 266 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Deepwater core crew. The ice\n"
	.string "is shorter every season. Battle, it's\l"
	.string "warmer.$"

ParcelCavern_T_Brynjulf_Text_1:
# 267 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Warmer. Briefly.$"

ParcelCavern_T_Brynjulf_Text_2:
# 282 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Twenty metres when they\n"
	.string "first cored it. Fourteen now.\l"
	.string "'Accessible', the log says.$"

ParcelCavern_T_Brynjulf_R2_Text_0:
# 293 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Clearances or not, I want\n"
	.string "that one back. Go?$"

ParcelCavern_T_Brynjulf_R2_Text_1:
# 295 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: No hurry. The water keeps.$"

ParcelCavern_T_Brynjulf_R2_Text_2:
# 299 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: …Fair.$"

ParcelCavern_T_Brynjulf_R2_Text_3:
# 300 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCavern_T_Brynjulf_R3_Text_0:
# 307 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelCavern_T_Brynjulf_R3_Text_1:
# 313 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Still yours.$"

ParcelCavern_T_Brynjulf_R3_Text_2:
# 314 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelCavern_T_Brynjulf_R4_Text_0:
# 321 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelCavern_T_Brynjulf_R4_Text_1:
# 327 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: That's the one I wanted to\n"
	.string "see.$"

ParcelCavern_T_Brynjulf_R4_Text_2:
# 328 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCavern_T_Brynjulf_R5_Text_0:
# 335 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCavern_T_Brynjulf_R5_Text_1:
# 341 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: Noted. Properly, this time.$"

ParcelCavern_T_Brynjulf_R5_Text_2:
# 342 "data/maps/ParcelCavern/scripts.pory"
	.string "BRYNJULF: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCavern_T_Aslaug_Text_0:
# 348 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Cadet ASLAUG, posted to watch\n"
	.string "the posted. Spar. It passes the shift.$"

ParcelCavern_T_Aslaug_Text_1:
# 349 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Shift passed.$"

ParcelCavern_T_Aslaug_Text_2:
# 364 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: The DELIBIRD at the deep end\n"
	.string "never leaves. KELDA logged it as an\l"
	.string "asset. I logged it as a bird.$"

ParcelCavern_T_Aslaug_R2_Text_0:
# 375 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelCavern_T_Aslaug_R2_Text_1:
# 377 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Another time, then.$"

ParcelCavern_T_Aslaug_R2_Text_2:
# 381 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: …Again, then. Later.$"

ParcelCavern_T_Aslaug_R2_Text_3:
# 382 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCavern_T_Aslaug_R3_Text_0:
# 389 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCavern_T_Aslaug_R3_Text_1:
# 395 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: …Fair.$"

ParcelCavern_T_Aslaug_R3_Text_2:
# 396 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: One more in me. After the high\n"
	.string "ground.$"

ParcelCavern_T_Aslaug_R4_Text_0:
# 403 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCavern_T_Aslaug_R4_Text_1:
# 409 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Still yours.$"

ParcelCavern_T_Aslaug_R4_Text_2:
# 410 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCavern_T_Aslaug_R5_Text_0:
# 417 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCavern_T_Aslaug_R5_Text_1:
# 423 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: Noted. Properly, this time.$"

ParcelCavern_T_Aslaug_R5_Text_2:
# 424 "data/maps/ParcelCavern/scripts.pory"
	.string "ASLAUG: That's all I've got. It was\n"
	.string "enough to see it done.$"
