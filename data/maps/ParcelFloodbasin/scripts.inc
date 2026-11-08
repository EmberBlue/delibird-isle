ParcelFloodbasin_MapScripts::
# 32 "data/maps/ParcelFloodbasin/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelFloodbasin_OnTransition
# 33 "data/maps/ParcelFloodbasin/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelFloodbasin_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelFloodbasin_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 34 "data/maps/ParcelFloodbasin/scripts.pory"
	map_script_2 VAR_SKALD_EPILOGUE, 2, ParcelFloodbasin_Epilogue
	.2byte 0


ParcelFloodbasin_OnTransition::
# 42 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasin_OnTransition_2
# 45 "data/maps/ParcelFloodbasin/scripts.pory"
	clearflag FLAG_TEMP_2
ParcelFloodbasin_OnTransition_1:
	end

ParcelFloodbasin_OnTransition_2:
# 43 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_TEMP_2
	goto ParcelFloodbasin_OnTransition_1


ParcelFloodbasin_FirstEntry::
# 52 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_1, 1
# 53 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FLOODBASIN_ARRIVAL, ParcelFloodbasin_FirstEntry_2
# 56 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 57 "data/maps/ParcelFloodbasin/scripts.pory"
	bufferpartymonnick 0, 0
# 58 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_0, MSGBOX_DEFAULT
# 59 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_1, MSGBOX_DEFAULT
# 60 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_2, MSGBOX_DEFAULT
# 61 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_3, MSGBOX_DEFAULT
# 62 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALDMERE_FLOODBASIN_ARRIVAL
# 63 "data/maps/ParcelFloodbasin/scripts.pory"
	releaseall
	end

ParcelFloodbasin_FirstEntry_2:
	end


ParcelFloodbasin_ReliefScene::
# 70 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_FLD_RELIEF_DONE, ParcelFloodbasin_ReliefScene_2
# 70 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasin_ReliefScene_2
# 74 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 75 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_0, MSGBOX_DEFAULT
# 76 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_1, MSGBOX_DEFAULT
# 77 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_2, MSGBOX_DEFAULT
# 78 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 79 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 10, Movement_FLD_DorseyLookUp
# 80 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 81 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_3, MSGBOX_DEFAULT
# 82 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_4, MSGBOX_DEFAULT
# 83 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_5, MSGBOX_DEFAULT
# 84 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_6, MSGBOX_DEFAULT
# 85 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_7, MSGBOX_DEFAULT
# 86 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 87 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 10, Movement_FLD_DorseyFaceDown
# 88 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 89 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_8, MSGBOX_DEFAULT
# 90 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_FLD_RELIEF_DONE
# 91 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_3, 1
# 92 "data/maps/ParcelFloodbasin/scripts.pory"
	releaseall
	end

ParcelFloodbasin_ReliefScene_2:
# 71 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_3, 1
	end


# 96 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_DorseyLookUp:
# 96 "data/maps/ParcelFloodbasin/scripts.pory"
	face_up
# 96 "data/maps/ParcelFloodbasin/scripts.pory"
	delay_16
	step_end

# 97 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_DorseyFaceDown:
# 97 "data/maps/ParcelFloodbasin/scripts.pory"
	face_down
	step_end

ParcelFloodbasin_Dorsey::
# 100 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 101 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 102 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_Dorsey_2
# 107 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 108 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 5
# 109 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 110 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Dorsey_5
# 115 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_2, MSGBOX_DEFAULT
# 116 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Dorsey_2:
# 103 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_0, MSGBOX_DEFAULT
# 104 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Dorsey_5:
# 111 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_1, MSGBOX_DEFAULT
# 112 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Aide1::
# 120 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 121 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 122 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_Aide1_2
# 127 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_1, MSGBOX_DEFAULT
# 128 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide1_2:
# 123 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_0, MSGBOX_DEFAULT
# 124 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Aide2::
# 132 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 133 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 134 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_Aide2_2
# 139 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide2_Text_1, MSGBOX_DEFAULT
# 140 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide2_2:
# 135 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide2_Text_0, MSGBOX_DEFAULT
# 136 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilOldWoman::
# 144 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 145 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 146 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilOldWoman_2
# 151 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_FLD_RELIEF_DONE, ParcelFloodbasin_VilOldWoman_5
# 156 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_2, MSGBOX_DEFAULT
# 157 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_2:
# 147 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_0, MSGBOX_DEFAULT
# 148 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_5:
# 152 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_1, MSGBOX_DEFAULT
# 153 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilMan::
# 161 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 162 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 163 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilMan_2
# 168 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_1, MSGBOX_DEFAULT
# 169 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_2:
# 164 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_0, MSGBOX_DEFAULT
# 165 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilGirl::
# 173 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 174 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 175 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilGirl_2
# 180 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_1, MSGBOX_DEFAULT
# 181 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilGirl_2:
# 176 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_0, MSGBOX_DEFAULT
# 177 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilFisher::
# 185 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 186 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 187 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilFisher_2
# 192 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasin_VilFisher_5
# 197 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_2, MSGBOX_DEFAULT
# 198 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_2:
# 188 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_0, MSGBOX_DEFAULT
# 189 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_5:
# 193 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_1, MSGBOX_DEFAULT
# 194 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Discharge::
# 204 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 205 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 206 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 0
# 207 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 208 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Discharge_2
# 213 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Discharge_Text_1, MSGBOX_SIGN
# 214 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 215 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Discharge_2:
# 209 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Discharge_Text_0, MSGBOX_SIGN
# 210 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sheen::
# 219 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 220 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 221 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 1
# 222 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 223 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Sheen_2
# 228 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sheen_Text_1, MSGBOX_SIGN
# 229 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 230 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sheen_2:
# 224 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sheen_Text_0, MSGBOX_SIGN
# 225 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_DeadReeds::
# 234 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 235 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 236 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 2
# 237 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 238 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_DeadReeds_2
# 243 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeadReeds_Text_1, MSGBOX_SIGN
# 244 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 245 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_DeadReeds_2:
# 239 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeadReeds_Text_0, MSGBOX_SIGN
# 240 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_DeformedWooper::
# 251 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 252 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 253 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 3
# 254 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 255 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeformedWooper_Text_0, MSGBOX_DEFAULT
# 256 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_SickKarp::
# 260 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 261 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 262 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 4
# 263 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 264 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SickKarp_Text_0, MSGBOX_DEFAULT
# 265 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BoothSign::
# 271 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BoothSign_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Remediator::
# 276 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 277 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 278 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 279 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 5
# 280 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 281 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Remediator_2
# 286 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_1, MSGBOX_DEFAULT
# 287 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_2, MSGBOX_DEFAULT
# 288 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_3, MSGBOX_DEFAULT
# 289 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_4, MSGBOX_DEFAULT
# 290 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_5, MSGBOX_DEFAULT
# 291 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_6, MSGBOX_DEFAULT
# 292 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_7, MSGBOX_DEFAULT
# 293 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_8, MSGBOX_DEFAULT
# 294 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 295 "data/maps/ParcelFloodbasin/scripts.pory"
	delay 30
# 296 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_9, MSGBOX_DEFAULT
# 297 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_REMEDIATOR, ParcelFloodbasin_Remediator_Text_10, ParcelFloodbasin_Remediator_Text_11
# 300 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_12, MSGBOX_DEFAULT
# 301 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 302 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Remediator_2:
# 282 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_0, MSGBOX_DEFAULT
# 283 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer::
# 308 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BASIN_KID, ParcelFloodbasin_BasinKidTrainer_Text_0, ParcelFloodbasin_BasinKidTrainer_Text_1, ParcelFloodbasin_BasinKidTrainer_FirstWin
# 312 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 313 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_3
ParcelFloodbasin_BasinKidTrainer_1:
# 316 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_8
ParcelFloodbasin_BasinKidTrainer_6:
# 319 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_13
ParcelFloodbasin_BasinKidTrainer_11:
# 322 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_18
ParcelFloodbasin_BasinKidTrainer_16:
# 325 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_BasinKidTrainer_2:
# 314 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R2
	goto ParcelFloodbasin_BasinKidTrainer_1

ParcelFloodbasin_BasinKidTrainer_3:
# 313 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R2
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_2
	goto ParcelFloodbasin_BasinKidTrainer_1

ParcelFloodbasin_BasinKidTrainer_7:
# 317 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R3
	goto ParcelFloodbasin_BasinKidTrainer_6

ParcelFloodbasin_BasinKidTrainer_8:
# 316 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R3
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_7
	goto ParcelFloodbasin_BasinKidTrainer_6

ParcelFloodbasin_BasinKidTrainer_12:
# 320 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R4
	goto ParcelFloodbasin_BasinKidTrainer_11

ParcelFloodbasin_BasinKidTrainer_13:
# 319 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R4
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_12
	goto ParcelFloodbasin_BasinKidTrainer_11

ParcelFloodbasin_BasinKidTrainer_17:
# 323 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R5
	goto ParcelFloodbasin_BasinKidTrainer_16

ParcelFloodbasin_BasinKidTrainer_18:
# 322 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R5
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_17
	goto ParcelFloodbasin_BasinKidTrainer_16


ParcelFloodbasin_BasinKidTrainer_FirstWin::
# 329 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_Text_2, MSGBOX_DEFAULT
# 330 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R2::
# 334 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 335 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 336 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_0, MSGBOX_YESNO
# 337 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R2_2
# 342 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R2, ParcelFloodbasin_BasinKidTrainer_R2_Text_2
# 343 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_3, MSGBOX_DEFAULT
# 344 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R2_2:
# 338 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 339 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R3::
# 348 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 349 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 350 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R3_Text_0, MSGBOX_YESNO
# 351 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R3_2
# 356 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R3, ParcelFloodbasin_BasinKidTrainer_R3_Text_1
# 357 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R3_Text_2, MSGBOX_DEFAULT
# 358 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R3_2:
# 352 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 353 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R4::
# 362 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 363 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 364 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R4_Text_0, MSGBOX_YESNO
# 365 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R4_2
# 370 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R4, ParcelFloodbasin_BasinKidTrainer_R4_Text_1
# 371 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R4_Text_2, MSGBOX_DEFAULT
# 372 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R4_2:
# 366 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 367 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R5::
# 376 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 377 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 378 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R5_Text_0, MSGBOX_YESNO
# 379 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R5_2
# 384 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R5, ParcelFloodbasin_BasinKidTrainer_R2_Text_2
# 385 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R5_Text_1, MSGBOX_DEFAULT
# 386 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R5_2:
# 380 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 381 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve::
# 390 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ARVE, ParcelFloodbasin_Arve_Text_0, ParcelFloodbasin_Arve_Text_1, ParcelFloodbasin_Arve_FirstWin
# 394 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 395 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Arve_3
ParcelFloodbasin_Arve_1:
# 398 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Arve_8
ParcelFloodbasin_Arve_6:
# 401 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Arve_13
ParcelFloodbasin_Arve_11:
# 404 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Arve_18
ParcelFloodbasin_Arve_16:
# 407 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Arve_2:
# 396 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R2
	goto ParcelFloodbasin_Arve_1

ParcelFloodbasin_Arve_3:
# 395 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R2
	goto_if 0, ParcelFloodbasin_Arve_2
	goto ParcelFloodbasin_Arve_1

ParcelFloodbasin_Arve_7:
# 399 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R3
	goto ParcelFloodbasin_Arve_6

ParcelFloodbasin_Arve_8:
# 398 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R3
	goto_if 0, ParcelFloodbasin_Arve_7
	goto ParcelFloodbasin_Arve_6

ParcelFloodbasin_Arve_12:
# 402 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R4
	goto ParcelFloodbasin_Arve_11

ParcelFloodbasin_Arve_13:
# 401 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R4
	goto_if 0, ParcelFloodbasin_Arve_12
	goto ParcelFloodbasin_Arve_11

ParcelFloodbasin_Arve_17:
# 405 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R5
	goto ParcelFloodbasin_Arve_16

ParcelFloodbasin_Arve_18:
# 404 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R5
	goto_if 0, ParcelFloodbasin_Arve_17
	goto ParcelFloodbasin_Arve_16


ParcelFloodbasin_Arve_FirstWin::
# 411 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_Text_2, MSGBOX_DEFAULT
# 412 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R2::
# 416 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 417 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 418 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_0, MSGBOX_YESNO
# 419 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R2_2
# 424 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R2, ParcelFloodbasin_Arve_R2_Text_2
# 425 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_3, MSGBOX_DEFAULT
# 426 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R2_2:
# 420 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 421 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R3::
# 430 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 431 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 432 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R3_Text_0, MSGBOX_YESNO
# 433 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R3_2
# 438 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R3, ParcelFloodbasin_Arve_R3_Text_1
# 439 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R3_Text_2, MSGBOX_DEFAULT
# 440 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R3_2:
# 434 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 435 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R4::
# 444 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 445 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 446 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R4_Text_0, MSGBOX_YESNO
# 447 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R4_2
# 452 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R4, ParcelFloodbasin_Arve_R3_Text_1
# 453 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R4_Text_1, MSGBOX_DEFAULT
# 454 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R4_2:
# 448 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 449 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R5::
# 458 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 459 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 460 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R5_Text_0, MSGBOX_YESNO
# 461 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R5_2
# 466 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R5, ParcelFloodbasin_Arve_R5_Text_1
# 467 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R5_Text_2, MSGBOX_DEFAULT
# 468 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R5_2:
# 462 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 463 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai::
# 472 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_KAI, ParcelFloodbasin_Kai_Text_0, ParcelFloodbasin_Kai_Text_1, ParcelFloodbasin_Kai_FirstWin
# 476 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 477 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Kai_3
ParcelFloodbasin_Kai_1:
# 480 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Kai_8
ParcelFloodbasin_Kai_6:
# 483 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Kai_13
ParcelFloodbasin_Kai_11:
# 486 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Kai_18
ParcelFloodbasin_Kai_16:
# 489 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Kai_2:
# 478 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R2
	goto ParcelFloodbasin_Kai_1

ParcelFloodbasin_Kai_3:
# 477 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R2
	goto_if 0, ParcelFloodbasin_Kai_2
	goto ParcelFloodbasin_Kai_1

ParcelFloodbasin_Kai_7:
# 481 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R3
	goto ParcelFloodbasin_Kai_6

ParcelFloodbasin_Kai_8:
# 480 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R3
	goto_if 0, ParcelFloodbasin_Kai_7
	goto ParcelFloodbasin_Kai_6

ParcelFloodbasin_Kai_12:
# 484 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R4
	goto ParcelFloodbasin_Kai_11

ParcelFloodbasin_Kai_13:
# 483 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R4
	goto_if 0, ParcelFloodbasin_Kai_12
	goto ParcelFloodbasin_Kai_11

ParcelFloodbasin_Kai_17:
# 487 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R5
	goto ParcelFloodbasin_Kai_16

ParcelFloodbasin_Kai_18:
# 486 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R5
	goto_if 0, ParcelFloodbasin_Kai_17
	goto ParcelFloodbasin_Kai_16


ParcelFloodbasin_Kai_FirstWin::
# 493 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_Text_2, MSGBOX_DEFAULT
# 494 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R2::
# 498 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 499 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 500 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_0, MSGBOX_YESNO
# 501 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R2_2
# 506 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R2, ParcelFloodbasin_Kai_R2_Text_2
# 507 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_3, MSGBOX_DEFAULT
# 508 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R2_2:
# 502 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 503 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R3::
# 512 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 513 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 514 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R3_Text_0, MSGBOX_YESNO
# 515 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R3_2
# 520 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R3, ParcelFloodbasin_Kai_R3_Text_1
# 521 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R3_Text_2, MSGBOX_DEFAULT
# 522 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R3_2:
# 516 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 517 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R4::
# 526 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 527 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 528 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R4_Text_0, MSGBOX_YESNO
# 529 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R4_2
# 534 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R4, ParcelFloodbasin_Kai_R4_Text_1
# 535 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R4_Text_2, MSGBOX_DEFAULT
# 536 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R4_2:
# 530 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 531 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R5::
# 540 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 541 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 542 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R5_Text_0, MSGBOX_YESNO
# 543 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R5_2
# 548 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R5, ParcelFloodbasin_Kai_R5_Text_1
# 549 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R5_Text_2, MSGBOX_DEFAULT
# 550 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R5_2:
# 544 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 545 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe::
# 554 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_SIGNE, ParcelFloodbasin_Signe_Text_0, ParcelFloodbasin_Signe_Text_1, ParcelFloodbasin_Signe_FirstWin
# 558 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 559 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Signe_3
ParcelFloodbasin_Signe_1:
# 562 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Signe_8
ParcelFloodbasin_Signe_6:
# 565 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Signe_13
ParcelFloodbasin_Signe_11:
# 568 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Signe_18
ParcelFloodbasin_Signe_16:
# 571 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Signe_2:
# 560 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R2
	goto ParcelFloodbasin_Signe_1

ParcelFloodbasin_Signe_3:
# 559 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R2
	goto_if 0, ParcelFloodbasin_Signe_2
	goto ParcelFloodbasin_Signe_1

ParcelFloodbasin_Signe_7:
# 563 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R3
	goto ParcelFloodbasin_Signe_6

ParcelFloodbasin_Signe_8:
# 562 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R3
	goto_if 0, ParcelFloodbasin_Signe_7
	goto ParcelFloodbasin_Signe_6

ParcelFloodbasin_Signe_12:
# 566 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R4
	goto ParcelFloodbasin_Signe_11

ParcelFloodbasin_Signe_13:
# 565 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R4
	goto_if 0, ParcelFloodbasin_Signe_12
	goto ParcelFloodbasin_Signe_11

ParcelFloodbasin_Signe_17:
# 569 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R5
	goto ParcelFloodbasin_Signe_16

ParcelFloodbasin_Signe_18:
# 568 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R5
	goto_if 0, ParcelFloodbasin_Signe_17
	goto ParcelFloodbasin_Signe_16


ParcelFloodbasin_Signe_FirstWin::
# 575 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_Text_2, MSGBOX_DEFAULT
# 576 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R2::
# 580 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 581 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 582 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_0, MSGBOX_YESNO
# 583 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R2_2
# 588 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R2, ParcelFloodbasin_Signe_R2_Text_2
# 589 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_3, MSGBOX_DEFAULT
# 590 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R2_2:
# 584 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 585 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R3::
# 594 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 595 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 596 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R3_Text_0, MSGBOX_YESNO
# 597 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R3_2
# 602 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R3, ParcelFloodbasin_Signe_R3_Text_1
# 603 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R3_Text_2, MSGBOX_DEFAULT
# 604 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R3_2:
# 598 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 599 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R4::
# 608 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 609 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 610 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R4_Text_0, MSGBOX_YESNO
# 611 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R4_2
# 616 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R4, ParcelFloodbasin_Signe_R3_Text_1
# 617 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R4_Text_1, MSGBOX_DEFAULT
# 618 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R4_2:
# 612 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 613 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R5::
# 622 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 623 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 624 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R5_Text_0, MSGBOX_YESNO
# 625 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R5_2
# 630 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R5, ParcelFloodbasin_Signe_R5_Text_1
# 631 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R5_Text_2, MSGBOX_DEFAULT
# 632 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R5_2:
# 626 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 627 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif::
# 636 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_LEIF, ParcelFloodbasin_Leif_Text_0, ParcelFloodbasin_Leif_Text_1, ParcelFloodbasin_Leif_FirstWin
# 640 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 641 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Leif_3
ParcelFloodbasin_Leif_1:
# 644 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Leif_8
ParcelFloodbasin_Leif_6:
# 647 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Leif_13
ParcelFloodbasin_Leif_11:
# 650 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Leif_18
ParcelFloodbasin_Leif_16:
# 653 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Leif_2:
# 642 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R2
	goto ParcelFloodbasin_Leif_1

ParcelFloodbasin_Leif_3:
# 641 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R2
	goto_if 0, ParcelFloodbasin_Leif_2
	goto ParcelFloodbasin_Leif_1

ParcelFloodbasin_Leif_7:
# 645 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R3
	goto ParcelFloodbasin_Leif_6

ParcelFloodbasin_Leif_8:
# 644 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R3
	goto_if 0, ParcelFloodbasin_Leif_7
	goto ParcelFloodbasin_Leif_6

ParcelFloodbasin_Leif_12:
# 648 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R4
	goto ParcelFloodbasin_Leif_11

ParcelFloodbasin_Leif_13:
# 647 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R4
	goto_if 0, ParcelFloodbasin_Leif_12
	goto ParcelFloodbasin_Leif_11

ParcelFloodbasin_Leif_17:
# 651 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R5
	goto ParcelFloodbasin_Leif_16

ParcelFloodbasin_Leif_18:
# 650 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R5
	goto_if 0, ParcelFloodbasin_Leif_17
	goto ParcelFloodbasin_Leif_16


ParcelFloodbasin_Leif_FirstWin::
# 657 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_Text_2, MSGBOX_DEFAULT
# 658 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R2::
# 662 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 663 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 664 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_0, MSGBOX_YESNO
# 665 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R2_2
# 670 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R2, ParcelFloodbasin_Leif_R2_Text_2
# 671 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_3, MSGBOX_DEFAULT
# 672 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R2_2:
# 666 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 667 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R3::
# 676 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 677 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 678 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R3_Text_0, MSGBOX_YESNO
# 679 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R3_2
# 684 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R3, ParcelFloodbasin_Leif_R3_Text_1
# 685 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R3_Text_2, MSGBOX_DEFAULT
# 686 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R3_2:
# 680 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 681 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R4::
# 690 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 691 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 692 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R4_Text_0, MSGBOX_YESNO
# 693 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R4_2
# 698 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R4, ParcelFloodbasin_Leif_R4_Text_1
# 699 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R4_Text_2, MSGBOX_DEFAULT
# 700 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R4_2:
# 694 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 695 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R5::
# 704 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 705 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 706 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R5_Text_0, MSGBOX_YESNO
# 707 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R5_2
# 712 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R5, ParcelFloodbasin_Leif_R3_Text_1
# 713 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R5_Text_1, MSGBOX_DEFAULT
# 714 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R5_2:
# 708 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 709 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls::
# 718 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_TRULS, ParcelFloodbasin_Truls_Text_0, ParcelFloodbasin_Truls_Text_1, ParcelFloodbasin_Truls_FirstWin
# 722 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 723 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Truls_3
ParcelFloodbasin_Truls_1:
# 726 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Truls_8
ParcelFloodbasin_Truls_6:
# 729 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Truls_13
ParcelFloodbasin_Truls_11:
# 732 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Truls_18
ParcelFloodbasin_Truls_16:
# 735 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Truls_2:
# 724 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R2
	goto ParcelFloodbasin_Truls_1

ParcelFloodbasin_Truls_3:
# 723 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R2
	goto_if 0, ParcelFloodbasin_Truls_2
	goto ParcelFloodbasin_Truls_1

ParcelFloodbasin_Truls_7:
# 727 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R3
	goto ParcelFloodbasin_Truls_6

ParcelFloodbasin_Truls_8:
# 726 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R3
	goto_if 0, ParcelFloodbasin_Truls_7
	goto ParcelFloodbasin_Truls_6

ParcelFloodbasin_Truls_12:
# 730 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R4
	goto ParcelFloodbasin_Truls_11

ParcelFloodbasin_Truls_13:
# 729 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R4
	goto_if 0, ParcelFloodbasin_Truls_12
	goto ParcelFloodbasin_Truls_11

ParcelFloodbasin_Truls_17:
# 733 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R5
	goto ParcelFloodbasin_Truls_16

ParcelFloodbasin_Truls_18:
# 732 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R5
	goto_if 0, ParcelFloodbasin_Truls_17
	goto ParcelFloodbasin_Truls_16


ParcelFloodbasin_Truls_FirstWin::
# 739 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_Text_2, MSGBOX_DEFAULT
# 740 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R2::
# 744 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 745 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 746 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_0, MSGBOX_YESNO
# 747 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R2_2
# 752 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R2, ParcelFloodbasin_Truls_R2_Text_2
# 753 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_3, MSGBOX_DEFAULT
# 754 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R2_2:
# 748 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 749 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R3::
# 758 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 759 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 760 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R3_Text_0, MSGBOX_YESNO
# 761 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R3_2
# 766 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R3, ParcelFloodbasin_Truls_R3_Text_1
# 767 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R3_Text_2, MSGBOX_DEFAULT
# 768 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R3_2:
# 762 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 763 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R4::
# 772 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 773 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 774 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R4_Text_0, MSGBOX_YESNO
# 775 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R4_2
# 780 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R4, ParcelFloodbasin_Truls_R4_Text_1
# 781 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R4_Text_2, MSGBOX_DEFAULT
# 782 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R4_2:
# 776 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 777 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R5::
# 786 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 787 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 788 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R5_Text_0, MSGBOX_YESNO
# 789 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R5_2
# 794 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R5, ParcelFloodbasin_Truls_R5_Text_1
# 795 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R5_Text_2, MSGBOX_DEFAULT
# 796 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R5_2:
# 790 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 791 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor::
# 800 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_HALVOR, ParcelFloodbasin_Halvor_Text_0, ParcelFloodbasin_Halvor_Text_1, ParcelFloodbasin_Halvor_FirstWin
# 804 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 805 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Halvor_3
ParcelFloodbasin_Halvor_1:
# 808 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Halvor_8
ParcelFloodbasin_Halvor_6:
# 811 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Halvor_13
ParcelFloodbasin_Halvor_11:
# 814 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Halvor_18
ParcelFloodbasin_Halvor_16:
# 817 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Halvor_2:
# 806 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R2
	goto ParcelFloodbasin_Halvor_1

ParcelFloodbasin_Halvor_3:
# 805 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R2
	goto_if 0, ParcelFloodbasin_Halvor_2
	goto ParcelFloodbasin_Halvor_1

ParcelFloodbasin_Halvor_7:
# 809 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R3
	goto ParcelFloodbasin_Halvor_6

ParcelFloodbasin_Halvor_8:
# 808 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R3
	goto_if 0, ParcelFloodbasin_Halvor_7
	goto ParcelFloodbasin_Halvor_6

ParcelFloodbasin_Halvor_12:
# 812 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R4
	goto ParcelFloodbasin_Halvor_11

ParcelFloodbasin_Halvor_13:
# 811 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R4
	goto_if 0, ParcelFloodbasin_Halvor_12
	goto ParcelFloodbasin_Halvor_11

ParcelFloodbasin_Halvor_17:
# 815 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R5
	goto ParcelFloodbasin_Halvor_16

ParcelFloodbasin_Halvor_18:
# 814 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R5
	goto_if 0, ParcelFloodbasin_Halvor_17
	goto ParcelFloodbasin_Halvor_16


ParcelFloodbasin_Halvor_FirstWin::
# 821 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_Text_2, MSGBOX_DEFAULT
# 822 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R2::
# 826 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 827 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 828 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_0, MSGBOX_YESNO
# 829 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R2_2
# 834 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R2, ParcelFloodbasin_Halvor_R2_Text_2
# 835 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_3, MSGBOX_DEFAULT
# 836 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R2_2:
# 830 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 831 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R3::
# 840 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 841 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 842 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R3_Text_0, MSGBOX_YESNO
# 843 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R3_2
# 848 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R3, ParcelFloodbasin_Halvor_R3_Text_1
# 849 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R3_Text_2, MSGBOX_DEFAULT
# 850 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R3_2:
# 844 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 845 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R4::
# 854 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 855 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 856 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R4_Text_0, MSGBOX_YESNO
# 857 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R4_2
# 862 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R4, ParcelFloodbasin_Halvor_R3_Text_1
# 863 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R4_Text_1, MSGBOX_DEFAULT
# 864 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R4_2:
# 858 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 859 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R5::
# 868 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 869 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 870 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R5_Text_0, MSGBOX_YESNO
# 871 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R5_2
# 876 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R5, ParcelFloodbasin_Halvor_R5_Text_1
# 877 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R5_Text_2, MSGBOX_DEFAULT
# 878 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R5_2:
# 872 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 873 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja::
# 882 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_MAJA, ParcelFloodbasin_Maja_Text_0, ParcelFloodbasin_Maja_Text_1, ParcelFloodbasin_Maja_FirstWin
# 886 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 887 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Maja_3
ParcelFloodbasin_Maja_1:
# 890 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Maja_8
ParcelFloodbasin_Maja_6:
# 893 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Maja_13
ParcelFloodbasin_Maja_11:
# 896 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Maja_18
ParcelFloodbasin_Maja_16:
# 899 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Maja_2:
# 888 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R2
	goto ParcelFloodbasin_Maja_1

ParcelFloodbasin_Maja_3:
# 887 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R2
	goto_if 0, ParcelFloodbasin_Maja_2
	goto ParcelFloodbasin_Maja_1

ParcelFloodbasin_Maja_7:
# 891 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R3
	goto ParcelFloodbasin_Maja_6

ParcelFloodbasin_Maja_8:
# 890 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R3
	goto_if 0, ParcelFloodbasin_Maja_7
	goto ParcelFloodbasin_Maja_6

ParcelFloodbasin_Maja_12:
# 894 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R4
	goto ParcelFloodbasin_Maja_11

ParcelFloodbasin_Maja_13:
# 893 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R4
	goto_if 0, ParcelFloodbasin_Maja_12
	goto ParcelFloodbasin_Maja_11

ParcelFloodbasin_Maja_17:
# 897 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R5
	goto ParcelFloodbasin_Maja_16

ParcelFloodbasin_Maja_18:
# 896 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R5
	goto_if 0, ParcelFloodbasin_Maja_17
	goto ParcelFloodbasin_Maja_16


ParcelFloodbasin_Maja_FirstWin::
# 903 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_Text_2, MSGBOX_DEFAULT
# 904 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R2::
# 908 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 909 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 910 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_0, MSGBOX_YESNO
# 911 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R2_2
# 916 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R2, ParcelFloodbasin_Maja_R2_Text_2
# 917 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_3, MSGBOX_DEFAULT
# 918 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R2_2:
# 912 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 913 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R3::
# 922 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 923 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 924 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R3_Text_0, MSGBOX_YESNO
# 925 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R3_2
# 930 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R3, ParcelFloodbasin_Maja_R3_Text_1
# 931 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R3_Text_2, MSGBOX_DEFAULT
# 932 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R3_2:
# 926 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 927 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R4::
# 936 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 937 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 938 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R4_Text_0, MSGBOX_YESNO
# 939 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R4_2
# 944 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R4, ParcelFloodbasin_Maja_R4_Text_1
# 945 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R4_Text_2, MSGBOX_DEFAULT
# 946 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R4_2:
# 940 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 941 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R5::
# 950 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 951 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 952 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R5_Text_0, MSGBOX_YESNO
# 953 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R5_2
# 958 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R5, ParcelFloodbasin_Maja_R5_Text_1
# 959 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R5_Text_2, MSGBOX_DEFAULT
# 960 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R5_2:
# 954 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 955 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn::
# 964 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_BJORN, ParcelFloodbasin_Bjorn_Text_0, ParcelFloodbasin_Bjorn_Text_1, ParcelFloodbasin_Bjorn_FirstWin
# 968 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 969 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Bjorn_3
ParcelFloodbasin_Bjorn_1:
# 972 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Bjorn_8
ParcelFloodbasin_Bjorn_6:
# 975 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Bjorn_13
ParcelFloodbasin_Bjorn_11:
# 978 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Bjorn_18
ParcelFloodbasin_Bjorn_16:
# 981 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Bjorn_2:
# 970 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R2
	goto ParcelFloodbasin_Bjorn_1

ParcelFloodbasin_Bjorn_3:
# 969 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R2
	goto_if 0, ParcelFloodbasin_Bjorn_2
	goto ParcelFloodbasin_Bjorn_1

ParcelFloodbasin_Bjorn_7:
# 973 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R3
	goto ParcelFloodbasin_Bjorn_6

ParcelFloodbasin_Bjorn_8:
# 972 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R3
	goto_if 0, ParcelFloodbasin_Bjorn_7
	goto ParcelFloodbasin_Bjorn_6

ParcelFloodbasin_Bjorn_12:
# 976 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R4
	goto ParcelFloodbasin_Bjorn_11

ParcelFloodbasin_Bjorn_13:
# 975 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R4
	goto_if 0, ParcelFloodbasin_Bjorn_12
	goto ParcelFloodbasin_Bjorn_11

ParcelFloodbasin_Bjorn_17:
# 979 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R5
	goto ParcelFloodbasin_Bjorn_16

ParcelFloodbasin_Bjorn_18:
# 978 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R5
	goto_if 0, ParcelFloodbasin_Bjorn_17
	goto ParcelFloodbasin_Bjorn_16


ParcelFloodbasin_Bjorn_FirstWin::
# 985 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_Text_2, MSGBOX_DEFAULT
# 986 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R2::
# 990 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 991 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 992 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_0, MSGBOX_YESNO
# 993 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R2_2
# 998 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R2, ParcelFloodbasin_Bjorn_R2_Text_2
# 999 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_3, MSGBOX_DEFAULT
# 1000 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R2_2:
# 994 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 995 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R3::
# 1004 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1005 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1006 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R3_Text_0, MSGBOX_YESNO
# 1007 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R3_2
# 1012 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R3, ParcelFloodbasin_Bjorn_R3_Text_1
# 1013 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R3_Text_2, MSGBOX_DEFAULT
# 1014 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R3_2:
# 1008 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1009 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R4::
# 1018 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1019 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1020 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R4_Text_0, MSGBOX_YESNO
# 1021 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R4_2
# 1026 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R4, ParcelFloodbasin_Bjorn_R4_Text_1
# 1027 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R4_Text_2, MSGBOX_DEFAULT
# 1028 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R4_2:
# 1022 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1023 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R5::
# 1032 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1033 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1034 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R5_Text_0, MSGBOX_YESNO
# 1035 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R5_2
# 1040 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R5, ParcelFloodbasin_Bjorn_R2_Text_2
# 1041 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R5_Text_1, MSGBOX_DEFAULT
# 1042 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R5_2:
# 1036 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1037 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig::
# 1046 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_SOLVEIG, ParcelFloodbasin_Solveig_Text_0, ParcelFloodbasin_Solveig_Text_1, ParcelFloodbasin_Solveig_FirstWin
# 1050 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1051 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Solveig_3
ParcelFloodbasin_Solveig_1:
# 1054 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Solveig_8
ParcelFloodbasin_Solveig_6:
# 1057 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Solveig_13
ParcelFloodbasin_Solveig_11:
# 1060 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Solveig_18
ParcelFloodbasin_Solveig_16:
# 1063 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Solveig_2:
# 1052 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R2
	goto ParcelFloodbasin_Solveig_1

ParcelFloodbasin_Solveig_3:
# 1051 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R2
	goto_if 0, ParcelFloodbasin_Solveig_2
	goto ParcelFloodbasin_Solveig_1

ParcelFloodbasin_Solveig_7:
# 1055 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R3
	goto ParcelFloodbasin_Solveig_6

ParcelFloodbasin_Solveig_8:
# 1054 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R3
	goto_if 0, ParcelFloodbasin_Solveig_7
	goto ParcelFloodbasin_Solveig_6

ParcelFloodbasin_Solveig_12:
# 1058 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R4
	goto ParcelFloodbasin_Solveig_11

ParcelFloodbasin_Solveig_13:
# 1057 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R4
	goto_if 0, ParcelFloodbasin_Solveig_12
	goto ParcelFloodbasin_Solveig_11

ParcelFloodbasin_Solveig_17:
# 1061 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R5
	goto ParcelFloodbasin_Solveig_16

ParcelFloodbasin_Solveig_18:
# 1060 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R5
	goto_if 0, ParcelFloodbasin_Solveig_17
	goto ParcelFloodbasin_Solveig_16


ParcelFloodbasin_Solveig_FirstWin::
# 1067 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_Text_2, MSGBOX_DEFAULT
# 1068 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R2::
# 1072 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1073 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1074 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_0, MSGBOX_YESNO
# 1075 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R2_2
# 1080 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R2, ParcelFloodbasin_Solveig_R2_Text_2
# 1081 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_3, MSGBOX_DEFAULT
# 1082 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R2_2:
# 1076 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1077 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R3::
# 1086 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1087 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1088 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R3_Text_0, MSGBOX_YESNO
# 1089 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R3_2
# 1094 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R3, ParcelFloodbasin_Solveig_R3_Text_1
# 1095 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R3_Text_2, MSGBOX_DEFAULT
# 1096 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R3_2:
# 1090 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1091 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R4::
# 1100 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1101 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1102 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R4_Text_0, MSGBOX_YESNO
# 1103 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R4_2
# 1108 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R4, ParcelFloodbasin_Solveig_R4_Text_1
# 1109 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R4_Text_2, MSGBOX_DEFAULT
# 1110 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R4_2:
# 1104 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1105 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R5::
# 1114 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1115 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1116 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R5_Text_0, MSGBOX_YESNO
# 1117 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R5_2
# 1122 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R5, ParcelFloodbasin_Solveig_R3_Text_1
# 1123 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R5_Text_1, MSGBOX_DEFAULT
# 1124 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R5_2:
# 1118 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1119 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils::
# 1128 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_NILS, ParcelFloodbasin_Nils_Text_0, ParcelFloodbasin_Nils_Text_1, ParcelFloodbasin_Nils_FirstWin
# 1132 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1133 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Nils_3
ParcelFloodbasin_Nils_1:
# 1136 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Nils_8
ParcelFloodbasin_Nils_6:
# 1139 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Nils_13
ParcelFloodbasin_Nils_11:
# 1142 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Nils_18
ParcelFloodbasin_Nils_16:
# 1145 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Nils_2:
# 1134 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R2
	goto ParcelFloodbasin_Nils_1

ParcelFloodbasin_Nils_3:
# 1133 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R2
	goto_if 0, ParcelFloodbasin_Nils_2
	goto ParcelFloodbasin_Nils_1

ParcelFloodbasin_Nils_7:
# 1137 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R3
	goto ParcelFloodbasin_Nils_6

ParcelFloodbasin_Nils_8:
# 1136 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R3
	goto_if 0, ParcelFloodbasin_Nils_7
	goto ParcelFloodbasin_Nils_6

ParcelFloodbasin_Nils_12:
# 1140 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R4
	goto ParcelFloodbasin_Nils_11

ParcelFloodbasin_Nils_13:
# 1139 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R4
	goto_if 0, ParcelFloodbasin_Nils_12
	goto ParcelFloodbasin_Nils_11

ParcelFloodbasin_Nils_17:
# 1143 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R5
	goto ParcelFloodbasin_Nils_16

ParcelFloodbasin_Nils_18:
# 1142 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R5
	goto_if 0, ParcelFloodbasin_Nils_17
	goto ParcelFloodbasin_Nils_16


ParcelFloodbasin_Nils_FirstWin::
# 1149 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_Text_2, MSGBOX_DEFAULT
# 1150 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R2::
# 1154 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1155 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1156 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_0, MSGBOX_YESNO
# 1157 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R2_2
# 1162 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R2, ParcelFloodbasin_Nils_R2_Text_2
# 1163 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_3, MSGBOX_DEFAULT
# 1164 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R2_2:
# 1158 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1159 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R3::
# 1168 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1169 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1170 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R3_Text_0, MSGBOX_YESNO
# 1171 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R3_2
# 1176 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R3, ParcelFloodbasin_Nils_R3_Text_1
# 1177 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R3_Text_2, MSGBOX_DEFAULT
# 1178 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R3_2:
# 1172 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1173 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R4::
# 1182 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1183 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1184 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R4_Text_0, MSGBOX_YESNO
# 1185 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R4_2
# 1190 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R4, ParcelFloodbasin_Nils_R2_Text_2
# 1191 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R4_Text_1, MSGBOX_DEFAULT
# 1192 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R4_2:
# 1186 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1187 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R5::
# 1196 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1197 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1198 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R5_Text_0, MSGBOX_YESNO
# 1199 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R5_2
# 1204 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R5, ParcelFloodbasin_Nils_R5_Text_1
# 1205 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R5_Text_2, MSGBOX_DEFAULT
# 1206 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R5_2:
# 1200 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1201 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig::
# 1210 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_RANNVEIG, ParcelFloodbasin_Rannveig_Text_0, ParcelFloodbasin_Rannveig_Text_1, ParcelFloodbasin_Rannveig_FirstWin
# 1214 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1215 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Rannveig_3
ParcelFloodbasin_Rannveig_1:
# 1218 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Rannveig_8
ParcelFloodbasin_Rannveig_6:
# 1221 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Rannveig_13
ParcelFloodbasin_Rannveig_11:
# 1224 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Rannveig_18
ParcelFloodbasin_Rannveig_16:
# 1227 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Rannveig_2:
# 1216 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R2
	goto ParcelFloodbasin_Rannveig_1

ParcelFloodbasin_Rannveig_3:
# 1215 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R2
	goto_if 0, ParcelFloodbasin_Rannveig_2
	goto ParcelFloodbasin_Rannveig_1

ParcelFloodbasin_Rannveig_7:
# 1219 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R3
	goto ParcelFloodbasin_Rannveig_6

ParcelFloodbasin_Rannveig_8:
# 1218 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R3
	goto_if 0, ParcelFloodbasin_Rannveig_7
	goto ParcelFloodbasin_Rannveig_6

ParcelFloodbasin_Rannveig_12:
# 1222 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R4
	goto ParcelFloodbasin_Rannveig_11

ParcelFloodbasin_Rannveig_13:
# 1221 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R4
	goto_if 0, ParcelFloodbasin_Rannveig_12
	goto ParcelFloodbasin_Rannveig_11

ParcelFloodbasin_Rannveig_17:
# 1225 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R5
	goto ParcelFloodbasin_Rannveig_16

ParcelFloodbasin_Rannveig_18:
# 1224 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R5
	goto_if 0, ParcelFloodbasin_Rannveig_17
	goto ParcelFloodbasin_Rannveig_16


ParcelFloodbasin_Rannveig_FirstWin::
# 1231 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_Text_2, MSGBOX_DEFAULT
# 1232 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R2::
# 1236 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1237 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1238 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_0, MSGBOX_YESNO
# 1239 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R2_2
# 1244 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R2, ParcelFloodbasin_Rannveig_R2_Text_2
# 1245 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_3, MSGBOX_DEFAULT
# 1246 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R2_2:
# 1240 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1241 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R3::
# 1250 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1251 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1252 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R3_Text_0, MSGBOX_YESNO
# 1253 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R3_2
# 1258 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R3, ParcelFloodbasin_Rannveig_R3_Text_1
# 1259 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R3_Text_2, MSGBOX_DEFAULT
# 1260 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R3_2:
# 1254 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1255 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R4::
# 1264 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1265 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1266 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R4_Text_0, MSGBOX_YESNO
# 1267 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R4_2
# 1272 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R4, ParcelFloodbasin_Rannveig_R3_Text_1
# 1273 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R4_Text_1, MSGBOX_DEFAULT
# 1274 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R4_2:
# 1268 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1269 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R5::
# 1278 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1279 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1280 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R5_Text_0, MSGBOX_YESNO
# 1281 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R5_2
# 1286 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R5, ParcelFloodbasin_Rannveig_R5_Text_1
# 1287 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R5_Text_2, MSGBOX_DEFAULT
# 1288 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R5_2:
# 1282 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1283 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar::
# 1292 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_EINAR, ParcelFloodbasin_Einar_Text_0, ParcelFloodbasin_Einar_Text_1, ParcelFloodbasin_Einar_FirstWin
# 1296 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1297 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Einar_3
ParcelFloodbasin_Einar_1:
# 1300 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Einar_8
ParcelFloodbasin_Einar_6:
# 1303 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Einar_13
ParcelFloodbasin_Einar_11:
# 1306 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Einar_18
ParcelFloodbasin_Einar_16:
# 1309 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Einar_2:
# 1298 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R2
	goto ParcelFloodbasin_Einar_1

ParcelFloodbasin_Einar_3:
# 1297 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R2
	goto_if 0, ParcelFloodbasin_Einar_2
	goto ParcelFloodbasin_Einar_1

ParcelFloodbasin_Einar_7:
# 1301 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R3
	goto ParcelFloodbasin_Einar_6

ParcelFloodbasin_Einar_8:
# 1300 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R3
	goto_if 0, ParcelFloodbasin_Einar_7
	goto ParcelFloodbasin_Einar_6

ParcelFloodbasin_Einar_12:
# 1304 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R4
	goto ParcelFloodbasin_Einar_11

ParcelFloodbasin_Einar_13:
# 1303 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R4
	goto_if 0, ParcelFloodbasin_Einar_12
	goto ParcelFloodbasin_Einar_11

ParcelFloodbasin_Einar_17:
# 1307 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R5
	goto ParcelFloodbasin_Einar_16

ParcelFloodbasin_Einar_18:
# 1306 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R5
	goto_if 0, ParcelFloodbasin_Einar_17
	goto ParcelFloodbasin_Einar_16


ParcelFloodbasin_Einar_FirstWin::
# 1313 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_Text_2, MSGBOX_DEFAULT
# 1314 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R2::
# 1318 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1319 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1320 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_0, MSGBOX_YESNO
# 1321 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R2_2
# 1326 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R2, ParcelFloodbasin_Einar_R2_Text_2
# 1327 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_3, MSGBOX_DEFAULT
# 1328 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R2_2:
# 1322 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1323 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R3::
# 1332 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1333 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1334 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R3_Text_0, MSGBOX_YESNO
# 1335 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R3_2
# 1340 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R3, ParcelFloodbasin_Einar_R2_Text_2
# 1341 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R3_Text_1, MSGBOX_DEFAULT
# 1342 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R3_2:
# 1336 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1337 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R4::
# 1346 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1347 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1348 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R4_Text_0, MSGBOX_YESNO
# 1349 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R4_2
# 1354 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R4, ParcelFloodbasin_Einar_R2_Text_2
# 1355 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R4_Text_1, MSGBOX_DEFAULT
# 1356 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R4_2:
# 1350 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1351 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R5::
# 1360 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1361 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1362 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R5_Text_0, MSGBOX_YESNO
# 1363 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R5_2
# 1368 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R5, ParcelFloodbasin_Einar_R5_Text_1
# 1369 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R5_Text_2, MSGBOX_DEFAULT
# 1370 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R5_2:
# 1364 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1365 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla::
# 1374 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_STURLA, ParcelFloodbasin_Sturla_Text_0, ParcelFloodbasin_Sturla_Text_1, ParcelFloodbasin_Sturla_FirstWin
# 1378 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1379 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Sturla_3
ParcelFloodbasin_Sturla_1:
# 1382 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Sturla_8
ParcelFloodbasin_Sturla_6:
# 1385 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Sturla_13
ParcelFloodbasin_Sturla_11:
# 1388 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Sturla_18
ParcelFloodbasin_Sturla_16:
# 1391 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Sturla_2:
# 1380 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R2
	goto ParcelFloodbasin_Sturla_1

ParcelFloodbasin_Sturla_3:
# 1379 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R2
	goto_if 0, ParcelFloodbasin_Sturla_2
	goto ParcelFloodbasin_Sturla_1

ParcelFloodbasin_Sturla_7:
# 1383 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R3
	goto ParcelFloodbasin_Sturla_6

ParcelFloodbasin_Sturla_8:
# 1382 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R3
	goto_if 0, ParcelFloodbasin_Sturla_7
	goto ParcelFloodbasin_Sturla_6

ParcelFloodbasin_Sturla_12:
# 1386 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R4
	goto ParcelFloodbasin_Sturla_11

ParcelFloodbasin_Sturla_13:
# 1385 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R4
	goto_if 0, ParcelFloodbasin_Sturla_12
	goto ParcelFloodbasin_Sturla_11

ParcelFloodbasin_Sturla_17:
# 1389 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R5
	goto ParcelFloodbasin_Sturla_16

ParcelFloodbasin_Sturla_18:
# 1388 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R5
	goto_if 0, ParcelFloodbasin_Sturla_17
	goto ParcelFloodbasin_Sturla_16


ParcelFloodbasin_Sturla_FirstWin::
# 1395 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_Text_2, MSGBOX_DEFAULT
# 1396 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R2::
# 1400 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1401 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1402 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_0, MSGBOX_YESNO
# 1403 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R2_2
# 1408 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R2, ParcelFloodbasin_Sturla_R2_Text_2
# 1409 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_3, MSGBOX_DEFAULT
# 1410 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R2_2:
# 1404 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1405 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R3::
# 1414 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1415 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1416 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R3_Text_0, MSGBOX_YESNO
# 1417 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R3_2
# 1422 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R3, ParcelFloodbasin_Sturla_R3_Text_1
# 1423 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R3_Text_2, MSGBOX_DEFAULT
# 1424 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R3_2:
# 1418 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1419 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R4::
# 1428 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1429 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1430 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R4_Text_0, MSGBOX_YESNO
# 1431 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R4_2
# 1436 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R4, ParcelFloodbasin_Sturla_R4_Text_1
# 1437 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R4_Text_2, MSGBOX_DEFAULT
# 1438 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R4_2:
# 1432 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1433 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R5::
# 1442 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1443 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1444 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R5_Text_0, MSGBOX_YESNO
# 1445 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R5_2
# 1450 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R5, ParcelFloodbasin_Sturla_R5_Text_1
# 1451 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R5_Text_2, MSGBOX_DEFAULT
# 1452 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R5_2:
# 1446 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1447 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar::
# 1456 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_OSKAR, ParcelFloodbasin_Oskar_Text_0, ParcelFloodbasin_Oskar_Text_1, ParcelFloodbasin_Oskar_FirstWin
# 1460 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1461 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Oskar_3
ParcelFloodbasin_Oskar_1:
# 1464 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Oskar_8
ParcelFloodbasin_Oskar_6:
# 1467 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Oskar_13
ParcelFloodbasin_Oskar_11:
# 1470 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Oskar_18
ParcelFloodbasin_Oskar_16:
# 1473 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Oskar_2:
# 1462 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R2
	goto ParcelFloodbasin_Oskar_1

ParcelFloodbasin_Oskar_3:
# 1461 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R2
	goto_if 0, ParcelFloodbasin_Oskar_2
	goto ParcelFloodbasin_Oskar_1

ParcelFloodbasin_Oskar_7:
# 1465 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R3
	goto ParcelFloodbasin_Oskar_6

ParcelFloodbasin_Oskar_8:
# 1464 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R3
	goto_if 0, ParcelFloodbasin_Oskar_7
	goto ParcelFloodbasin_Oskar_6

ParcelFloodbasin_Oskar_12:
# 1468 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R4
	goto ParcelFloodbasin_Oskar_11

ParcelFloodbasin_Oskar_13:
# 1467 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R4
	goto_if 0, ParcelFloodbasin_Oskar_12
	goto ParcelFloodbasin_Oskar_11

ParcelFloodbasin_Oskar_17:
# 1471 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R5
	goto ParcelFloodbasin_Oskar_16

ParcelFloodbasin_Oskar_18:
# 1470 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R5
	goto_if 0, ParcelFloodbasin_Oskar_17
	goto ParcelFloodbasin_Oskar_16


ParcelFloodbasin_Oskar_FirstWin::
# 1477 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_Text_2, MSGBOX_DEFAULT
# 1478 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R2::
# 1482 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1483 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1484 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_0, MSGBOX_YESNO
# 1485 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R2_2
# 1490 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R2, ParcelFloodbasin_Oskar_R2_Text_2
# 1491 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_3, MSGBOX_DEFAULT
# 1492 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R2_2:
# 1486 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1487 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R3::
# 1496 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1497 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1498 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R3_Text_0, MSGBOX_YESNO
# 1499 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R3_2
# 1504 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R3, ParcelFloodbasin_Oskar_R3_Text_1
# 1505 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R3_Text_2, MSGBOX_DEFAULT
# 1506 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R3_2:
# 1500 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1501 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R4::
# 1510 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1511 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1512 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R4_Text_0, MSGBOX_YESNO
# 1513 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R4_2
# 1518 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R4, ParcelFloodbasin_Oskar_R4_Text_1
# 1519 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R4_Text_2, MSGBOX_DEFAULT
# 1520 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R4_2:
# 1514 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1515 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R5::
# 1524 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1525 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1526 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R5_Text_0, MSGBOX_YESNO
# 1527 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R5_2
# 1532 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R5, ParcelFloodbasin_Oskar_R3_Text_1
# 1533 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R5_Text_1, MSGBOX_DEFAULT
# 1534 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R5_2:
# 1528 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1529 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_ItemRevive::
# 1539 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_REVIVE
	end


ParcelFloodbasin_ItemSuperPotion::
# 1540 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelFloodbasin_ItemGreatBall::
# 1541 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelFloodbasin_SignHamlet::
# 1544 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SignHamlet_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Checkpoint::
# 1552 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ParcelFloodbasin_Checkpoint_2
# 1556 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 1557 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_0, MSGBOX_DEFAULT
# 1558 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 1559 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 6, Movement_FLD_BreenApproach
# 1560 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 1561 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_FLD_FaceLeft
# 1562 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 1563 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_1, MSGBOX_DEFAULT
# 1564 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM3, ParcelFloodbasin_Checkpoint_Text_2
# 1565 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_BADGE03_GET
# 1566 "data/maps/ParcelFloodbasin/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 1567 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_3, MSGBOX_DEFAULT
# 1568 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_HM06
# 1569 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_4, MSGBOX_DEFAULT
# 1570 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 1571 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 6, Movement_FLD_BreenAside
# 1572 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 1573 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_4, 1
# 1574 "data/maps/ParcelFloodbasin/scripts.pory"
	releaseall
	end

ParcelFloodbasin_Checkpoint_2:
# 1553 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_4, 1
	end


ParcelFloodbasin_GymBreen::
# 1578 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1579 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1580 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_GymBreen_2
ParcelFloodbasin_GymBreen_1:
# 1583 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Text_0, MSGBOX_DEFAULT
# 1584 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_GymBreen_2:
# 1581 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_GymBreen_Rematch
	goto ParcelFloodbasin_GymBreen_1


# 1587 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_BreenApproach:
# 1587 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_right
# 1587 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_right
	step_end

# 1588 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_BreenAside:
# 1588 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 1588 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 1588 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 1588 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_down
# 1588 "data/maps/ParcelFloodbasin/scripts.pory"
	face_up
	step_end

# 1589 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_FaceLeft:
# 1589 "data/maps/ParcelFloodbasin/scripts.pory"
	face_left
	step_end

ParcelFloodbasin_T_Anders::
# 1593 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ANDERS, ParcelFloodbasin_T_Anders_Text_0, ParcelFloodbasin_T_Anders_Text_1, ParcelFloodbasin_T_Anders_FirstWin
# 1597 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1598 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_T_Anders_3
ParcelFloodbasin_T_Anders_1:
# 1601 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_T_Anders_8
ParcelFloodbasin_T_Anders_6:
# 1604 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_T_Anders_13
ParcelFloodbasin_T_Anders_11:
# 1607 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_T_Anders_18
ParcelFloodbasin_T_Anders_16:
# 1610 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_T_Anders_2:
# 1599 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R2
	goto ParcelFloodbasin_T_Anders_1

ParcelFloodbasin_T_Anders_3:
# 1598 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R2
	goto_if 0, ParcelFloodbasin_T_Anders_2
	goto ParcelFloodbasin_T_Anders_1

ParcelFloodbasin_T_Anders_7:
# 1602 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R3
	goto ParcelFloodbasin_T_Anders_6

ParcelFloodbasin_T_Anders_8:
# 1601 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R3
	goto_if 0, ParcelFloodbasin_T_Anders_7
	goto ParcelFloodbasin_T_Anders_6

ParcelFloodbasin_T_Anders_12:
# 1605 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R4
	goto ParcelFloodbasin_T_Anders_11

ParcelFloodbasin_T_Anders_13:
# 1604 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R4
	goto_if 0, ParcelFloodbasin_T_Anders_12
	goto ParcelFloodbasin_T_Anders_11

ParcelFloodbasin_T_Anders_17:
# 1608 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R5
	goto ParcelFloodbasin_T_Anders_16

ParcelFloodbasin_T_Anders_18:
# 1607 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R5
	goto_if 0, ParcelFloodbasin_T_Anders_17
	goto ParcelFloodbasin_T_Anders_16


ParcelFloodbasin_T_Anders_FirstWin::
# 1614 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_Text_2, MSGBOX_DEFAULT
# 1615 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R2::
# 1619 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1620 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1621 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_0, MSGBOX_YESNO
# 1622 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R2_2
# 1627 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R2, ParcelFloodbasin_T_Anders_R2_Text_2
# 1628 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_3, MSGBOX_DEFAULT
# 1629 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R2_2:
# 1623 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1624 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R3::
# 1633 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1634 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1635 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R3_Text_0, MSGBOX_YESNO
# 1636 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R3_2
# 1641 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R3, ParcelFloodbasin_T_Anders_R3_Text_1
# 1642 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R3_Text_2, MSGBOX_DEFAULT
# 1643 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R3_2:
# 1637 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1638 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R4::
# 1647 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1648 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1649 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R4_Text_0, MSGBOX_YESNO
# 1650 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R4_2
# 1655 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R4, ParcelFloodbasin_T_Anders_R4_Text_1
# 1656 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R4_Text_2, MSGBOX_DEFAULT
# 1657 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R4_2:
# 1651 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1652 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R5::
# 1661 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1662 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1663 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R5_Text_0, MSGBOX_YESNO
# 1664 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R5_2
# 1669 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R5, ParcelFloodbasin_T_Anders_R4_Text_1
# 1670 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R5_Text_1, MSGBOX_DEFAULT
# 1671 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R5_2:
# 1665 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1666 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald::
# 1675 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ROALD, ParcelFloodbasin_T_Roald_Text_0, ParcelFloodbasin_T_Roald_Text_1, ParcelFloodbasin_T_Roald_FirstWin
# 1679 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1680 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_T_Roald_3
ParcelFloodbasin_T_Roald_1:
# 1683 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_T_Roald_8
ParcelFloodbasin_T_Roald_6:
# 1686 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_T_Roald_13
ParcelFloodbasin_T_Roald_11:
# 1689 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_T_Roald_18
ParcelFloodbasin_T_Roald_16:
# 1692 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_T_Roald_2:
# 1681 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R2
	goto ParcelFloodbasin_T_Roald_1

ParcelFloodbasin_T_Roald_3:
# 1680 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R2
	goto_if 0, ParcelFloodbasin_T_Roald_2
	goto ParcelFloodbasin_T_Roald_1

ParcelFloodbasin_T_Roald_7:
# 1684 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R3
	goto ParcelFloodbasin_T_Roald_6

ParcelFloodbasin_T_Roald_8:
# 1683 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R3
	goto_if 0, ParcelFloodbasin_T_Roald_7
	goto ParcelFloodbasin_T_Roald_6

ParcelFloodbasin_T_Roald_12:
# 1687 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R4
	goto ParcelFloodbasin_T_Roald_11

ParcelFloodbasin_T_Roald_13:
# 1686 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R4
	goto_if 0, ParcelFloodbasin_T_Roald_12
	goto ParcelFloodbasin_T_Roald_11

ParcelFloodbasin_T_Roald_17:
# 1690 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R5
	goto ParcelFloodbasin_T_Roald_16

ParcelFloodbasin_T_Roald_18:
# 1689 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R5
	goto_if 0, ParcelFloodbasin_T_Roald_17
	goto ParcelFloodbasin_T_Roald_16


ParcelFloodbasin_T_Roald_FirstWin::
# 1696 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_Text_2, MSGBOX_DEFAULT
# 1697 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R2::
# 1701 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1702 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1703 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_0, MSGBOX_YESNO
# 1704 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R2_2
# 1709 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R2, ParcelFloodbasin_T_Roald_R2_Text_2
# 1710 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_3, MSGBOX_DEFAULT
# 1711 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R2_2:
# 1705 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1706 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R3::
# 1715 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1716 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1717 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R3_Text_0, MSGBOX_YESNO
# 1718 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R3_2
# 1723 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R3, ParcelFloodbasin_T_Roald_R2_Text_2
# 1724 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R3_Text_1, MSGBOX_DEFAULT
# 1725 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R3_2:
# 1719 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1720 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R4::
# 1729 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1730 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1731 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R4_Text_0, MSGBOX_YESNO
# 1732 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R4_2
# 1737 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R4, ParcelFloodbasin_T_Roald_R4_Text_1
# 1738 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R4_Text_2, MSGBOX_DEFAULT
# 1739 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R4_2:
# 1733 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1734 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R5::
# 1743 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1744 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1745 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R5_Text_0, MSGBOX_YESNO
# 1746 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R5_2
# 1751 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R5, ParcelFloodbasin_T_Roald_R5_Text_1
# 1752 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R5_Text_2, MSGBOX_DEFAULT
# 1753 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R5_2:
# 1747 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1748 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein::
# 1757 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_STEIN, ParcelFloodbasin_T_Stein_Text_0, ParcelFloodbasin_T_Stein_Text_1, ParcelFloodbasin_T_Stein_FirstWin
# 1761 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1762 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_T_Stein_3
ParcelFloodbasin_T_Stein_1:
# 1765 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_T_Stein_8
ParcelFloodbasin_T_Stein_6:
# 1768 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_T_Stein_13
ParcelFloodbasin_T_Stein_11:
# 1771 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_T_Stein_18
ParcelFloodbasin_T_Stein_16:
# 1774 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_T_Stein_2:
# 1763 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R2
	goto ParcelFloodbasin_T_Stein_1

ParcelFloodbasin_T_Stein_3:
# 1762 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R2
	goto_if 0, ParcelFloodbasin_T_Stein_2
	goto ParcelFloodbasin_T_Stein_1

ParcelFloodbasin_T_Stein_7:
# 1766 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R3
	goto ParcelFloodbasin_T_Stein_6

ParcelFloodbasin_T_Stein_8:
# 1765 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R3
	goto_if 0, ParcelFloodbasin_T_Stein_7
	goto ParcelFloodbasin_T_Stein_6

ParcelFloodbasin_T_Stein_12:
# 1769 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R4
	goto ParcelFloodbasin_T_Stein_11

ParcelFloodbasin_T_Stein_13:
# 1768 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R4
	goto_if 0, ParcelFloodbasin_T_Stein_12
	goto ParcelFloodbasin_T_Stein_11

ParcelFloodbasin_T_Stein_17:
# 1772 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R5
	goto ParcelFloodbasin_T_Stein_16

ParcelFloodbasin_T_Stein_18:
# 1771 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R5
	goto_if 0, ParcelFloodbasin_T_Stein_17
	goto ParcelFloodbasin_T_Stein_16


ParcelFloodbasin_T_Stein_FirstWin::
# 1778 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_Text_2, MSGBOX_DEFAULT
# 1779 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R2::
# 1783 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1784 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1785 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_0, MSGBOX_YESNO
# 1786 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R2_2
# 1791 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R2, ParcelFloodbasin_T_Stein_R2_Text_2
# 1792 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_3, MSGBOX_DEFAULT
# 1793 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R2_2:
# 1787 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1788 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R3::
# 1797 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1798 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1799 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R3_Text_0, MSGBOX_YESNO
# 1800 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R3_2
# 1805 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R3, ParcelFloodbasin_T_Stein_R3_Text_1
# 1806 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R3_Text_2, MSGBOX_DEFAULT
# 1807 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R3_2:
# 1801 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1802 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R4::
# 1811 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1812 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1813 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R4_Text_0, MSGBOX_YESNO
# 1814 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R4_2
# 1819 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R4, ParcelFloodbasin_T_Stein_R3_Text_1
# 1820 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R4_Text_1, MSGBOX_DEFAULT
# 1821 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R4_2:
# 1815 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1816 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R5::
# 1825 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1826 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1827 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R5_Text_0, MSGBOX_YESNO
# 1828 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R5_2
# 1833 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R5, ParcelFloodbasin_T_Stein_R5_Text_1
# 1834 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R5_Text_2, MSGBOX_DEFAULT
# 1835 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R5_2:
# 1829 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1830 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Epilogue::
# 1841 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 1842 "data/maps/ParcelFloodbasin/scripts.pory"
	delay 20
# 1843 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Epilogue_Text_0, MSGBOX_DEFAULT
# 1844 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 1845 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 3
# 1846 "data/maps/ParcelFloodbasin/scripts.pory"
	warp MAP_PARCEL_RIVER, 16, 30
# 1847 "data/maps/ParcelFloodbasin/scripts.pory"
	waitstate
	end


ParcelFloodbasin_GymBreen_Rematch::
# 1853 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1854 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1855 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Rematch_Text_0, MSGBOX_YESNO
# 1856 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_GymBreen_Rematch_2
# 1861 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM3_R, ParcelFloodbasin_GymBreen_Rematch_Text_2
# 1862 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Rematch_Text_3, MSGBOX_DEFAULT
# 1863 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_GymBreen_Rematch_2:
# 1857 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Rematch_Text_1, MSGBOX_DEFAULT
# 1858 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_FirstEntry_Text_0:
# 58 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The trees open onto a low, wide basin.\n"
	.string "Rain ticks on the reeds.\p"
	.string "Something is wrong with the smell.$"

ParcelFloodbasin_FirstEntry_Text_1:
# 59 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{STR_VAR_1} walks on, but slower,\n"
	.string "and keeps to the middle of the path.$"

ParcelFloodbasin_FirstEntry_Text_2:
# 60 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALE's brief, on paper: LEGACY\n"
	.string "CONTAMINATION. OWNERSHIP\l"
	.string "UNCONTESTED. ACTIVE REMEDIATION\l"
	.string "CITED.\p"
	.string "Walk the upstream. Read it for yourself.$"

ParcelFloodbasin_FirstEntry_Text_3:
# 61 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Voices, off to the east. A lot of them.\n"
	.string "Somebody is giving a speech in the rain.$"

ParcelFloodbasin_ReliefScene_Text_0:
# 75 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: --and the Council hears you.\n"
	.string "Third flood in two years. You've been\l"
	.string "patient. Patience should be paid for.$"

ParcelFloodbasin_ReliefScene_Text_1:
# 76 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Fuel vouchers. Dry goods. The\n"
	.string "FOUNDATION's boat runs to FERNWICK\l"
	.string "twice a day until the road's clear.\l"
	.string "Nobody pays.\p"
	.string "MRS. ASKE. Your roof. I haven't\n"
	.string "forgotten. Thursday.$"

ParcelFloodbasin_ReliefScene_Text_2:
# 77 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OLD WOMAN: Bless you, councilman. Bless\n"
	.string "you.$"

ParcelFloodbasin_ReliefScene_Text_3:
# 81 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: And there's our RANGER. Good.\n"
	.string "Come down, come down. Witness this.\l"
	.string "That's your job, isn't it? Witnessing.$"

ParcelFloodbasin_ReliefScene_Text_4:
# 82 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: The CORPS sends a report. I\n"
	.string "send a boat.\p"
	.string "No, don't argue, I'm not blaming you. I'm\n"
	.string "telling you what people remember. They\l"
	.string "remember the boat.$"

ParcelFloodbasin_ReliefScene_Text_5:
# 83 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: The water goes down by\n"
	.string "Thursday. It always does. Then the\l"
	.string "smell goes. Then they forget, until the\l"
	.string "next one.\p"
	.string "That's the basin. That's just the basin.$"

ParcelFloodbasin_ReliefScene_Text_6:
# 84 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: Mister DORSEY, is the water bad?\n"
	.string "Gran says don't touch it.$"

ParcelFloodbasin_ReliefScene_Text_7:
# 85 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Your gran's right, sweetheart.\n"
	.string "Not until it's gone down. Here. Take two,\l"
	.string "one for your brother.$"

ParcelFloodbasin_ReliefScene_Text_8:
# 89 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Walk the basin, RANGER. Read\n"
	.string "your stakes. When you're done, the\l"
	.string "booth by the bridge will have the\l"
	.string "remediation file ready for you. All of it.\l"
	.string "We've nothing to hide.$"

ParcelFloodbasin_Dorsey_Text_0:
# 103 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: You'll write that the\n"
	.string "FOUNDATION's man was courteous after\l"
	.string "the hearing. I was. I am. Phase 2 goes\l"
	.string "ahead, RANGER. Dry sheds. You'd have\l"
	.string "built them too. You'd just have built\l"
	.string "them slower.$"

ParcelFloodbasin_Dorsey_Text_1:
# 111 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: I heard KOLE lost his temper.\n"
	.string "He's young. I'll have a word.\p"
	.string "You'll write that the FOUNDATION's man\n"
	.string "was uncooperative. Write also that the\l"
	.string "FOUNDATION's boat ran twice a day. Both\l"
	.string "are true.$"

ParcelFloodbasin_Dorsey_Text_2:
# 115 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Vouchers are for residents,\n"
	.string "RANGER. You've got a CORPS stipend. Try\l"
	.string "the booth by the bridge if you want\l"
	.string "paperwork.$"

ParcelFloodbasin_Aide1_Text_0:
# 123 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Fuel vouchers are finished. The\n"
	.string "relief sheet went to the hearing as an\l"
	.string "exhibit. Forty-one signatures. The\l"
	.string "councilman's name was the\l"
	.string "forty-second. I'd not noticed that\l"
	.string "before.$"

ParcelFloodbasin_Aide1_Text_1:
# 127 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Fuel vouchers on the left, dry\n"
	.string "goods on the right. Sign the sheet. Yes,\l"
	.string "the FOUNDATION keeps the sheet. For\l"
	.string "the records.$"

ParcelFloodbasin_Aide2_Text_0:
# 135 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Forty-one households. The\n"
	.string "hearing asked how many were consulted\l"
	.string "on Phase 2. I said forty-one signed.\l"
	.string "They said that wasn't the question. It\l"
	.string "wasn't.$"

ParcelFloodbasin_Aide2_Text_1:
# 139 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Forty-one households. Forty-one\n"
	.string "signatures. The councilman likes a full\l"
	.string "sheet.$"

ParcelFloodbasin_VilOldWoman_Text_0:
# 147 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: He knows my name. He said it\n"
	.string "at the hearing, into a microphone, as an\l"
	.string "example of local partnership. Eleven\l"
	.string "years, and I was an example.$"

ParcelFloodbasin_VilOldWoman_Text_1:
# 152 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: He knows my name. Eleven\n"
	.string "years on the Council and he knows my\l"
	.string "name.\p"
	.string "The CORPS man before you didn't. I'm not\n"
	.string "saying that to be unkind.$"

ParcelFloodbasin_VilOldWoman_Text_2:
# 156 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: Wait your turn, dear. We've\n"
	.string "all been flooded.$"

ParcelFloodbasin_VilMan_Text_0:
# 164 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three floods, three times the\n"
	.string "vouchers, and the water still comes up\l"
	.string "brown. Your paper says why. In the\l"
	.string "hearing they read the why aloud. The\l"
	.string "water didn't change colour. I did.$"

ParcelFloodbasin_VilMan_Text_1:
# 168 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three floods. Three times the\n"
	.string "vouchers. Nobody's asked why the water\l"
	.string "comes up brown now.\p"
	.string "I asked. I got vouchers.$"

ParcelFloodbasin_VilGirl_Text_0:
# 176 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: The WOOPER with the wrong feet is\n"
	.string "still in the puddle. A CORPS lady came\l"
	.string "and drew it. She said it's in a report\l"
	.string "now. It doesn't know. It's a WOOPER.$"

ParcelFloodbasin_VilGirl_Text_1:
# 180 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: My brother found a WOOPER with\n"
	.string "the wrong feet. Gran made him put it\l"
	.string "back. It didn't go anywhere. It just\l"
	.string "sat.$"

ParcelFloodbasin_VilFisher_Text_0:
# 188 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: Does writing fix anything, I\n"
	.string "asked you. The vouchers are still\l"
	.string "stopped. The boat's still stopped. But a\l"
	.string "Board man came and measured the water\l"
	.string "instead of telling me about it. Writing\l"
	.string "did that.$"

ParcelFloodbasin_VilFisher_Text_1:
# 193 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: Vouchers stopped. Boat\n"
	.string "stopped. Water's the same.\p"
	.string "Your lot wrote something down, I hear.\n"
	.string "Does writing it down dry anything out?$"

ParcelFloodbasin_VilFisher_Text_2:
# 197 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: I don't fish the lake anymore. I\n"
	.string "fish the top lake, past the bridge. The\l"
	.string "water's clearer up there.\p"
	.string "Clearer. Not clear.$"

ParcelFloodbasin_Discharge_Text_0:
# 209 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The discharge pipe. In the notebook.$"

ParcelFloodbasin_Discharge_Text_1:
# 213 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A concrete pipe in the bank, mouth\n"
	.string "fouled with brown crust. Stamped:\l"
	.string "DISCHARGE -- AUTHORIZED USE ONLY.\p"
	.string "The authorization is decades old. The\n"
	.string "crust is fresher than that. Written\l"
	.string "down.$"

ParcelFloodbasin_Sheen_Text_0:
# 224 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The sheen. In the notebook.$"

ParcelFloodbasin_Sheen_Text_1:
# 228 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A faint iridescence crawls on the lake,\n"
	.string "bending the rain wrong.\p"
	.string "It is not new. The cattails downstream\n"
	.string "carry the same stain at their bases.\l"
	.string "Written down.$"

ParcelFloodbasin_DeadReeds_Text_0:
# 239 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The dead reed band. Photographed.$"

ParcelFloodbasin_DeadReeds_Text_1:
# 243 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A band of dead reeds along the bank,\n"
	.string "straw-pale. The reeds above and below\l"
	.string "it are fine.\p"
	.string "The kill line is exactly the height of\n"
	.string "the flood six months ago. Written down.$"

ParcelFloodbasin_DeformedWooper_Text_0:
# 255 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A WOOPER, low in the puddle. Two left\n"
	.string "feet.\p"
	.string "It doesn't flinch. It has been like this\n"
	.string "since it hatched, and that was recent.\l"
	.string "Written down.$"

ParcelFloodbasin_SickKarp_Text_0:
# 264 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A grown MAGIKARP lists against the\n"
	.string "bridge piling, scales greying.\p"
	.string "It was never in the pipe. It was at the\n"
	.string "top of the food web. Poison climbs.\l"
	.string "Written down.$"

ParcelFloodbasin_BoothSign_Text_0:
# 271 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MEREHOLT FOUNDATION COMMUNITY\n"
	.string "OUTREACH\p"
	.string "Remediation underway. Please report\n"
	.string "concerns to your local representative.\p"
	.string "The paint is wet from the rain. The sign\n"
	.string "is older.$"

ParcelFloodbasin_Remediator_Text_0:
# 282 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Write up whatever you write up.$"

ParcelFloodbasin_Remediator_Text_1:
# 286 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Oh. RANGER! Welcome to the active\n"
	.string "remediation site.\p"
	.string "We've been at it… some time now. The\n"
	.string "FOUNDATION does great work.$"

ParcelFloodbasin_Remediator_Text_2:
# 287 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: When was the last reading?$"

ParcelFloodbasin_Remediator_Text_3:
# 288 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: …A quarter or two. We're due.$"

ParcelFloodbasin_Remediator_Text_4:
# 289 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: The councilman said you'd\n"
	.string "have the remediation file for me.$"

ParcelFloodbasin_Remediator_Text_5:
# 290 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Did he. Well. It's at the office.\n"
	.string "The coast office.$"

ParcelFloodbasin_Remediator_Text_6:
# 291 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: Who signed off on the\n"
	.string "discharge stamp on that pipe?$"

ParcelFloodbasin_Remediator_Text_7:
# 292 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: You'd have to ask the office. I\n"
	.string "just check the boxes.$"

ParcelFloodbasin_Remediator_Text_8:
# 293 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: I'm asking. The WOOPER has\n"
	.string "two left feet.$"

ParcelFloodbasin_Remediator_Text_9:
# 296 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Move along, RANGER. This isn't\n"
	.string "your patch.$"

ParcelFloodbasin_Remediator_Text_10:
# 298 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Tch. Fine. We'll do this the loud\n"
	.string "way.$"

ParcelFloodbasin_Remediator_Text_11:
# 299 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Hmph.$"

ParcelFloodbasin_Remediator_Text_12:
# 300 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Write up whatever you write up.\p"
	.string "This basin ran sick before you got here.\n"
	.string "It'll run sick after.$"

ParcelFloodbasin_BasinKidTrainer_Text_0:
# 309 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Gran fishes here. Used to. Wanna\n"
	.string "battle?$"

ParcelFloodbasin_BasinKidTrainer_Text_1:
# 310 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Ohh. You're good!$"

ParcelFloodbasin_BasinKidTrainer_Text_2:
# 325 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: She doesn't eat what she\n"
	.string "catches anymore. Sells it to the people\l"
	.string "who don't ask.$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_0:
# 336 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_1:
# 338 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Another time, then.$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_2:
# 342 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: That's the one I wanted to see.$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_3:
# 343 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_BasinKidTrainer_R3_Text_0:
# 350 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_BasinKidTrainer_R3_Text_1:
# 356 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Noted. Properly, this time.$"

ParcelFloodbasin_BasinKidTrainer_R3_Text_2:
# 357 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_BasinKidTrainer_R4_Text_0:
# 364 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasin_BasinKidTrainer_R4_Text_1:
# 370 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Still yours.$"

ParcelFloodbasin_BasinKidTrainer_R4_Text_2:
# 371 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_BasinKidTrainer_R5_Text_0:
# 378 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelFloodbasin_BasinKidTrainer_R5_Text_1:
# 385 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Arve_Text_0:
# 391 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: The DUSTOX here have spots in\n"
	.string "the wrong places. I've been drawing\l"
	.string "them. Battle first.$"

ParcelFloodbasin_Arve_Text_1:
# 392 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Drawn and beaten.$"

ParcelFloodbasin_Arve_Text_2:
# 407 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Wrong spots, extra spots, no\n"
	.string "spots. All in the same field. My teacher\l"
	.string "says that's just variety.$"

ParcelFloodbasin_Arve_R2_Text_0:
# 418 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_Arve_R2_Text_1:
# 420 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: No hurry. The water keeps.$"

ParcelFloodbasin_Arve_R2_Text_2:
# 424 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: That's the one I wanted to see.$"

ParcelFloodbasin_Arve_R2_Text_3:
# 425 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Arve_R3_Text_0:
# 432 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasin_Arve_R3_Text_1:
# 438 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Still yours.$"

ParcelFloodbasin_Arve_R3_Text_2:
# 439 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Arve_R4_Text_0:
# 446 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelFloodbasin_Arve_R4_Text_1:
# 453 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Arve_R5_Text_0:
# 460 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasin_Arve_R5_Text_1:
# 466 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Noted. Properly, this time.$"

ParcelFloodbasin_Arve_R5_Text_2:
# 467 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFloodbasin_Kai_Text_0:
# 473 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Nobody sees me in the tall grass.\n"
	.string "Nobody except you, apparently.$"

ParcelFloodbasin_Kai_Text_1:
# 474 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Seen and beaten.$"

ParcelFloodbasin_Kai_Text_2:
# 489 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: The grass by the top lake is the\n"
	.string "tallest. It's also the only grass that\l"
	.string "smells like that.$"

ParcelFloodbasin_Kai_R2_Text_0:
# 500 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelFloodbasin_Kai_R2_Text_1:
# 502 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Suit yourself. I'm here.$"

ParcelFloodbasin_Kai_R2_Text_2:
# 506 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: …Fair.$"

ParcelFloodbasin_Kai_R2_Text_3:
# 507 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Kai_R3_Text_0:
# 514 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_Kai_R3_Text_1:
# 520 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Right. That's the whole of it.$"

ParcelFloodbasin_Kai_R3_Text_2:
# 521 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Kai_R4_Text_0:
# 528 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFloodbasin_Kai_R4_Text_1:
# 534 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: That's the one I wanted to see.$"

ParcelFloodbasin_Kai_R4_Text_2:
# 535 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_Kai_R5_Text_0:
# 542 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Last one. I've put everything I've\n"
	.string "got into this team. Go?$"

ParcelFloodbasin_Kai_R5_Text_1:
# 548 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Still yours.$"

ParcelFloodbasin_Kai_R5_Text_2:
# 549 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFloodbasin_Signe_Text_0:
# 555 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: A picnic in the rain is still a\n"
	.string "picnic. A battle in the rain is still a\l"
	.string "battle.$"

ParcelFloodbasin_Signe_Text_1:
# 556 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Soggy on both counts.$"

ParcelFloodbasin_Signe_Text_2:
# 571 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: I don't let my MARILL in the\n"
	.string "lower lake. It came out itchy once. Just\l"
	.string "once was enough.$"

ParcelFloodbasin_Signe_R2_Text_0:
# 582 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasin_Signe_R2_Text_1:
# 584 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFloodbasin_Signe_R2_Text_2:
# 588 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Noted. Properly, this time.$"

ParcelFloodbasin_Signe_R2_Text_3:
# 589 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Signe_R3_Text_0:
# 596 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelFloodbasin_Signe_R3_Text_1:
# 602 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: …Fair.$"

ParcelFloodbasin_Signe_R3_Text_2:
# 603 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Signe_R4_Text_0:
# 610 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasin_Signe_R4_Text_1:
# 617 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Signe_R5_Text_0:
# 624 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFloodbasin_Signe_R5_Text_1:
# 630 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Still yours.$"

ParcelFloodbasin_Signe_R5_Text_2:
# 631 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Leif_Text_0:
# 637 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I camp on the high ground. The low\n"
	.string "ground floods. Everybody knows.\l"
	.string "Battle?$"

ParcelFloodbasin_Leif_Text_1:
# 638 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Should've camped higher.$"

ParcelFloodbasin_Leif_Text_2:
# 653 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Every year the high ground's a bit\n"
	.string "higher. The water, I mean. Not the\l"
	.string "ground.$"

ParcelFloodbasin_Leif_R2_Text_0:
# 664 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_Leif_R2_Text_1:
# 666 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Another time, then.$"

ParcelFloodbasin_Leif_R2_Text_2:
# 670 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Still yours.$"

ParcelFloodbasin_Leif_R2_Text_3:
# 671 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Leif_R3_Text_0:
# 678 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasin_Leif_R3_Text_1:
# 684 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: …Again, then. Later.$"

ParcelFloodbasin_Leif_R3_Text_2:
# 685 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Leif_R4_Text_0:
# 692 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelFloodbasin_Leif_R4_Text_1:
# 698 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Noted. Properly, this time.$"

ParcelFloodbasin_Leif_R4_Text_2:
# 699 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Leif_R5_Text_0:
# 706 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFloodbasin_Leif_R5_Text_1:
# 713 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasin_Truls_Text_0:
# 719 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: You walked right into my sight\n"
	.string "line. Rookie.$"

ParcelFloodbasin_Truls_Text_1:
# 720 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: …Not a rookie.$"

ParcelFloodbasin_Truls_Text_2:
# 735 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: The councilman's boat goes past\n"
	.string "twice a day. Nobody's ever asked what it\l"
	.string "brings back.$"

ParcelFloodbasin_Truls_R2_Text_0:
# 746 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_Truls_R2_Text_1:
# 748 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Suit yourself. I'm here.$"

ParcelFloodbasin_Truls_R2_Text_2:
# 752 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Right. That's the whole of it.$"

ParcelFloodbasin_Truls_R2_Text_3:
# 753 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Truls_R3_Text_0:
# 760 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_Truls_R3_Text_1:
# 766 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: That's the one I wanted to see.$"

ParcelFloodbasin_Truls_R3_Text_2:
# 767 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Truls_R4_Text_0:
# 774 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Truls_R4_Text_1:
# 780 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Still yours.$"

ParcelFloodbasin_Truls_R4_Text_2:
# 781 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Truls_R5_Text_0:
# 788 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFloodbasin_Truls_R5_Text_1:
# 794 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Noted. Properly, this time.$"

ParcelFloodbasin_Truls_R5_Text_2:
# 795 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Halvor_Text_0:
# 801 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: The pond's got a boardwalk\n"
	.string "because the pond used to be a field.\l"
	.string "Think about that. Then battle me.$"

ParcelFloodbasin_Halvor_Text_1:
# 802 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Thought about it, did you.$"

ParcelFloodbasin_Halvor_Text_2:
# 817 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: My father planted this field. I\n"
	.string "fish it. That's the basin in one family.$"

ParcelFloodbasin_Halvor_R2_Text_0:
# 828 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_Halvor_R2_Text_1:
# 830 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Fine. Same spot.$"

ParcelFloodbasin_Halvor_R2_Text_2:
# 834 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: …Again, then. Later.$"

ParcelFloodbasin_Halvor_R2_Text_3:
# 835 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasin_Halvor_R3_Text_0:
# 842 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasin_Halvor_R3_Text_1:
# 848 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: That's the one I wanted to see.$"

ParcelFloodbasin_Halvor_R3_Text_2:
# 849 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Halvor_R4_Text_0:
# 856 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Halvor_R4_Text_1:
# 863 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasin_Halvor_R5_Text_0:
# 870 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFloodbasin_Halvor_R5_Text_1:
# 876 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Still yours.$"

ParcelFloodbasin_Halvor_R5_Text_2:
# 877 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Maja_Text_0:
# 883 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The puddles never dry out here\n"
	.string "anymore. My MARILL loves it. I don't.\l"
	.string "Battle!$"

ParcelFloodbasin_Maja_Text_1:
# 884 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: MARILL still loves it.$"

ParcelFloodbasin_Maja_Text_2:
# 899 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The puddles have a shine on them\n"
	.string "in the morning. Rainbow colours. Gran\l"
	.string "says don't look at it too long.$"

ParcelFloodbasin_Maja_R2_Text_0:
# 910 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasin_Maja_R2_Text_1:
# 912 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Fine. Same spot.$"

ParcelFloodbasin_Maja_R2_Text_2:
# 916 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: That's the one I wanted to see.$"

ParcelFloodbasin_Maja_R2_Text_3:
# 917 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Maja_R3_Text_0:
# 924 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_Maja_R3_Text_1:
# 930 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Still yours.$"

ParcelFloodbasin_Maja_R3_Text_2:
# 931 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Maja_R4_Text_0:
# 938 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFloodbasin_Maja_R4_Text_1:
# 944 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: …Fair.$"

ParcelFloodbasin_Maja_R4_Text_2:
# 945 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Maja_R5_Text_0:
# 952 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasin_Maja_R5_Text_1:
# 958 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: …Again, then. Later.$"

ParcelFloodbasin_Maja_R5_Text_2:
# 959 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasin_Bjorn_Text_0:
# 965 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: The pump house door's open\n"
	.string "again. I didn't open it. Did you? Battle\l"
	.string "me and we'll call it even.$"

ParcelFloodbasin_Bjorn_Text_1:
# 966 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Even, then.$"

ParcelFloodbasin_Bjorn_Text_2:
# 981 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: MEREHOLT pumped this whole\n"
	.string "basin for twenty years. Then they\l"
	.string "stopped. Then the water came back.\l"
	.string "Then the smell.$"

ParcelFloodbasin_Bjorn_R2_Text_0:
# 992 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasin_Bjorn_R2_Text_1:
# 994 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Another time, then.$"

ParcelFloodbasin_Bjorn_R2_Text_2:
# 998 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: …Fair.$"

ParcelFloodbasin_Bjorn_R2_Text_3:
# 999 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Bjorn_R3_Text_0:
# 1006 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_Bjorn_R3_Text_1:
# 1012 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Noted. Properly, this time.$"

ParcelFloodbasin_Bjorn_R3_Text_2:
# 1013 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Bjorn_R4_Text_0:
# 1020 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasin_Bjorn_R4_Text_1:
# 1026 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Right. That's the whole of it.$"

ParcelFloodbasin_Bjorn_R4_Text_2:
# 1027 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Bjorn_R5_Text_0:
# 1034 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFloodbasin_Bjorn_R5_Text_1:
# 1041 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Solveig_Text_0:
# 1047 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Cadet SOLVEIG. HALE said a\n"
	.string "provisional would come through. Spar.\l"
	.string "Then I'll tell you where the stakes are.$"

ParcelFloodbasin_Solveig_Text_1:
# 1048 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Good. The stakes.$"

ParcelFloodbasin_Solveig_Text_2:
# 1063 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Red cloth stakes are ours. The\n"
	.string "bare ones are the FOUNDATION's. They\l"
	.string "put theirs on the clean bank. We put\l"
	.string "ours where the water is.$"

ParcelFloodbasin_Solveig_R2_Text_0:
# 1074 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelFloodbasin_Solveig_R2_Text_1:
# 1076 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Fine. Same spot.$"

ParcelFloodbasin_Solveig_R2_Text_2:
# 1080 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Noted. Properly, this time.$"

ParcelFloodbasin_Solveig_R2_Text_3:
# 1081 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelFloodbasin_Solveig_R3_Text_0:
# 1088 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelFloodbasin_Solveig_R3_Text_1:
# 1094 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: …Again, then. Later.$"

ParcelFloodbasin_Solveig_R3_Text_2:
# 1095 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelFloodbasin_Solveig_R4_Text_0:
# 1102 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelFloodbasin_Solveig_R4_Text_1:
# 1108 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: …Fair.$"

ParcelFloodbasin_Solveig_R4_Text_2:
# 1109 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasin_Solveig_R5_Text_0:
# 1116 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelFloodbasin_Solveig_R5_Text_1:
# 1123 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Nils_Text_0:
# 1129 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: The north meadow's the only dry\n"
	.string "bit. Everyone comes up here. Everyone\l"
	.string "battles.$"

ParcelFloodbasin_Nils_Text_1:
# 1130 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Everyone loses to you,\n"
	.string "apparently.$"

ParcelFloodbasin_Nils_Text_2:
# 1145 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: My WURMPLE won't eat the reeds\n"
	.string "from the low ground. Only the high. I\l"
	.string "thought they ate anything.$"

ParcelFloodbasin_Nils_R2_Text_0:
# 1156 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelFloodbasin_Nils_R2_Text_1:
# 1158 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Another time, then.$"

ParcelFloodbasin_Nils_R2_Text_2:
# 1162 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: …Again, then. Later.$"

ParcelFloodbasin_Nils_R2_Text_3:
# 1163 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Nils_R3_Text_0:
# 1170 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelFloodbasin_Nils_R3_Text_1:
# 1176 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: That's the one I wanted to see.$"

ParcelFloodbasin_Nils_R3_Text_2:
# 1177 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Nils_R4_Text_0:
# 1184 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Nils_R4_Text_1:
# 1191 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_Nils_R5_Text_0:
# 1198 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasin_Nils_R5_Text_1:
# 1204 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Noted. Properly, this time.$"

ParcelFloodbasin_Nils_R5_Text_2:
# 1205 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasin_Rannveig_Text_0:
# 1211 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: My GLOOM smells better than\n"
	.string "the basin does. That's a low bar.\l"
	.string "Battle?$"

ParcelFloodbasin_Rannveig_Text_1:
# 1212 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Still smells better.$"

ParcelFloodbasin_Rannveig_Text_2:
# 1227 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: The road north is a haul road.\n"
	.string "Trucks come down it at night. Nobody's\l"
	.string "told us what they haul.$"

ParcelFloodbasin_Rannveig_R2_Text_0:
# 1238 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_Rannveig_R2_Text_1:
# 1240 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Fine. Same spot.$"

ParcelFloodbasin_Rannveig_R2_Text_2:
# 1244 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Still yours.$"

ParcelFloodbasin_Rannveig_R2_Text_3:
# 1245 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasin_Rannveig_R3_Text_0:
# 1252 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelFloodbasin_Rannveig_R3_Text_1:
# 1258 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: That's the one I wanted to\n"
	.string "see.$"

ParcelFloodbasin_Rannveig_R3_Text_2:
# 1259 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: One more in me. After the\n"
	.string "high ground.$"

ParcelFloodbasin_Rannveig_R4_Text_0:
# 1266 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelFloodbasin_Rannveig_R4_Text_1:
# 1273 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Rannveig_R5_Text_0:
# 1280 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: After everything, one more.\n"
	.string "For the ledger. Yes?$"

ParcelFloodbasin_Rannveig_R5_Text_1:
# 1286 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Noted. Properly, this time.$"

ParcelFloodbasin_Rannveig_R5_Text_2:
# 1287 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Einar_Text_0:
# 1293 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: My MIGHTYENA's the strongest\n"
	.string "thing in the basin. Prove me wrong.$"

ParcelFloodbasin_Einar_Text_1:
# 1294 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: …Proved.$"

ParcelFloodbasin_Einar_Text_2:
# 1309 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Strongest thing in the basin.\n"
	.string "Not saying much, these days.$"

ParcelFloodbasin_Einar_R2_Text_0:
# 1320 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasin_Einar_R2_Text_1:
# 1322 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Suit yourself. I'm here.$"

ParcelFloodbasin_Einar_R2_Text_2:
# 1326 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: …Again, then. Later.$"

ParcelFloodbasin_Einar_R2_Text_3:
# 1327 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Einar_R3_Text_0:
# 1334 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelFloodbasin_Einar_R3_Text_1:
# 1341 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Einar_R4_Text_0:
# 1348 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasin_Einar_R4_Text_1:
# 1355 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Einar_R5_Text_0:
# 1362 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFloodbasin_Einar_R5_Text_1:
# 1368 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Noted. Properly, this time.$"

ParcelFloodbasin_Einar_R5_Text_2:
# 1369 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Sturla_Text_0:
# 1375 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: I came for the NUZLEAF. Stayed\n"
	.string "for the rain. Nobody stays for the rain.\l"
	.string "Battle.$"

ParcelFloodbasin_Sturla_Text_1:
# 1376 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Should've left with the\n"
	.string "NUZLEAF.$"

ParcelFloodbasin_Sturla_Text_2:
# 1391 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: It rains here more than it used\n"
	.string "to. Not more days. More water. Ask\l"
	.string "anyone with a roof.$"

ParcelFloodbasin_Sturla_R2_Text_0:
# 1402 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_Sturla_R2_Text_1:
# 1404 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Another time, then.$"

ParcelFloodbasin_Sturla_R2_Text_2:
# 1408 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Still yours.$"

ParcelFloodbasin_Sturla_R2_Text_3:
# 1409 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasin_Sturla_R3_Text_0:
# 1416 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_Sturla_R3_Text_1:
# 1422 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Right. That's the whole of it.$"

ParcelFloodbasin_Sturla_R3_Text_2:
# 1423 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Sturla_R4_Text_0:
# 1430 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Sturla_R4_Text_1:
# 1436 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: That's the one I wanted to see.$"

ParcelFloodbasin_Sturla_R4_Text_2:
# 1437 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasin_Sturla_R5_Text_0:
# 1444 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelFloodbasin_Sturla_R5_Text_1:
# 1450 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: …Again, then. Later.$"

ParcelFloodbasin_Sturla_R5_Text_2:
# 1451 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Oskar_Text_0:
# 1457 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: The puddle field used to be the\n"
	.string "best grazing in the district. Now it's\l"
	.string "the best puddles. Battle.$"

ParcelFloodbasin_Oskar_Text_1:
# 1458 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Best puddles. Worst battle.$"

ParcelFloodbasin_Oskar_Text_2:
# 1473 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: The ground here doesn't drain\n"
	.string "anymore. Something underneath it is\l"
	.string "full.$"

ParcelFloodbasin_Oskar_R2_Text_0:
# 1484 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelFloodbasin_Oskar_R2_Text_1:
# 1486 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFloodbasin_Oskar_R2_Text_2:
# 1490 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: …Again, then. Later.$"

ParcelFloodbasin_Oskar_R2_Text_3:
# 1491 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Oskar_R3_Text_0:
# 1498 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_Oskar_R3_Text_1:
# 1504 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Noted. Properly, this time.$"

ParcelFloodbasin_Oskar_R3_Text_2:
# 1505 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Oskar_R4_Text_0:
# 1512 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasin_Oskar_R4_Text_1:
# 1518 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Still yours.$"

ParcelFloodbasin_Oskar_R4_Text_2:
# 1519 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_Oskar_R5_Text_0:
# 1526 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFloodbasin_Oskar_R5_Text_1:
# 1533 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_SignHamlet_Text_0:
# 1544 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIRVIK\p"
	.string "Flood line marked on the chapel wall.\n"
	.string "Boat times posted at the relief store.$"

ParcelFloodbasin_Checkpoint_Text_0:
# 1557 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Stop there.$"

ParcelFloodbasin_Checkpoint_Text_1:
# 1563 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Logistics. This is a haul road,\n"
	.string "not a hiking trail. Nobody moves up to\l"
	.string "the river neck on my road without\l"
	.string "clearing me first.\p"
	.string "MIRREN cleared you? MIRREN clears\n"
	.string "anyone who can read. I need people who\l"
	.string "can carry.$"

ParcelFloodbasin_Checkpoint_Text_2:
# 1564 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: …Fine. You can carry weight.\n"
	.string "Move up.$"

ParcelFloodbasin_Checkpoint_Text_3:
# 1567 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Quarry clearance. Logs you fit\n"
	.string "to move earth on division ground. Tool's\l"
	.string "bonded to it.$"

ParcelFloodbasin_Checkpoint_Text_4:
# 1569 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: ROCK SMASH. The slide past me's\n"
	.string "been there since spring. Nobody's\l"
	.string "cleared it because nobody's needed to\l"
	.string "go up.\p"
	.string "Mind the loads coming down. They don't\n"
	.string "stop for paperwork.$"

ParcelFloodbasin_GymBreen_Text_0:
# 1583 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Cleared. The neck's open to you.\n"
	.string "Mind the loads coming down.$"

ParcelFloodbasin_T_Anders_Text_0:
# 1594 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: The MASQUERAIN by the lake\n"
	.string "have wings like oil on water. Pretty.\l"
	.string "Battle!$"

ParcelFloodbasin_T_Anders_Text_1:
# 1595 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Pretty and useless.$"

ParcelFloodbasin_T_Anders_Text_2:
# 1610 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Oil on water. I said it as a\n"
	.string "compliment. Then I saw the lake.$"

ParcelFloodbasin_T_Anders_R2_Text_0:
# 1621 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_T_Anders_R2_Text_1:
# 1623 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Fine. Same spot.$"

ParcelFloodbasin_T_Anders_R2_Text_2:
# 1627 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Noted. Properly, this time.$"

ParcelFloodbasin_T_Anders_R2_Text_3:
# 1628 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_T_Anders_R3_Text_0:
# 1635 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelFloodbasin_T_Anders_R3_Text_1:
# 1641 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Right. That's the whole of it.$"

ParcelFloodbasin_T_Anders_R3_Text_2:
# 1642 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_T_Anders_R4_Text_0:
# 1649 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasin_T_Anders_R4_Text_1:
# 1655 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Still yours.$"

ParcelFloodbasin_T_Anders_R4_Text_2:
# 1656 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_T_Anders_R5_Text_0:
# 1663 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelFloodbasin_T_Anders_R5_Text_1:
# 1670 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_T_Roald_Text_0:
# 1676 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Camped on the one dry rise in\n"
	.string "the puddle field. Room for one. Battle\l"
	.string "for it.$"

ParcelFloodbasin_T_Roald_Text_1:
# 1677 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Room for two, I suppose.$"

ParcelFloodbasin_T_Roald_Text_2:
# 1692 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: The puddles join up in spring.\n"
	.string "Then it's not a field. Then the\l"
	.string "councilman's boat comes. Then the\l"
	.string "puddles go. Then it's a field. It's a\l"
	.string "cycle, he says.$"

ParcelFloodbasin_T_Roald_R2_Text_0:
# 1703 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasin_T_Roald_R2_Text_1:
# 1705 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Another time, then.$"

ParcelFloodbasin_T_Roald_R2_Text_2:
# 1709 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: …Fair.$"

ParcelFloodbasin_T_Roald_R2_Text_3:
# 1710 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_T_Roald_R3_Text_0:
# 1717 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_T_Roald_R3_Text_1:
# 1724 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_T_Roald_R4_Text_0:
# 1731 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelFloodbasin_T_Roald_R4_Text_1:
# 1737 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: …Again, then. Later.$"

ParcelFloodbasin_T_Roald_R4_Text_2:
# 1738 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_T_Roald_R5_Text_0:
# 1745 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelFloodbasin_T_Roald_R5_Text_1:
# 1751 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Noted. Properly, this time.$"

ParcelFloodbasin_T_Roald_R5_Text_2:
# 1752 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_T_Stein_Text_0:
# 1758 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: You swam out here? Into THIS?\n"
	.string "Battle. Then get out of the water,\l"
	.string "seriously.$"

ParcelFloodbasin_T_Stein_Text_1:
# 1759 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Seriously. Out.$"

ParcelFloodbasin_T_Stein_Text_2:
# 1774 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: I swim the lake for the\n"
	.string "FOUNDATION. Sampling. The samples go to\l"
	.string "the coast. The results don't come back.$"

ParcelFloodbasin_T_Stein_R2_Text_0:
# 1785 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasin_T_Stein_R2_Text_1:
# 1787 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: No hurry. The water keeps.$"

ParcelFloodbasin_T_Stein_R2_Text_2:
# 1791 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Still yours.$"

ParcelFloodbasin_T_Stein_R2_Text_3:
# 1792 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_T_Stein_R3_Text_0:
# 1799 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_T_Stein_R3_Text_1:
# 1805 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: …Again, then. Later.$"

ParcelFloodbasin_T_Stein_R3_Text_2:
# 1806 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_T_Stein_R4_Text_0:
# 1813 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelFloodbasin_T_Stein_R4_Text_1:
# 1820 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_T_Stein_R5_Text_0:
# 1827 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFloodbasin_T_Stein_R5_Text_1:
# 1833 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: …Fair.$"

ParcelFloodbasin_T_Stein_R5_Text_2:
# 1834 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Epilogue_Text_0:
# 1843 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIRVIK. The relief tent is gone. The\n"
	.string "sandbags are stacked where DORSEY's\l"
	.string "photographer stood.\p"
	.string "Phase 2 goes ahead. Dry sheds, like\n"
	.string "PERRIN said. The next pulse will come\l"
	.string "from somewhere, and now there's a page\l"
	.string "that says where.$"

ParcelFloodbasin_GymBreen_Rematch_Text_0:
# 1855 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Carry weight, you said. I'm\n"
	.string "asking again, heavier.\p"
	.string "Nothing to clear. Just me, the whole\n"
	.string "crew's worth. Yes?$"

ParcelFloodbasin_GymBreen_Rematch_Text_1:
# 1857 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Mind the loads, then.$"

ParcelFloodbasin_GymBreen_Rematch_Text_2:
# 1861 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: …Fine. You can carry it.$"

ParcelFloodbasin_GymBreen_Rematch_Text_3:
# 1862 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Any time the loads are down. Mind\n"
	.string "them.$"
