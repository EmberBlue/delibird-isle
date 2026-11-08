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
	goto_if_set FLAG_SKALD_Q_ROOF_DONE, ParcelFloodbasin_VilOldWoman_2
# 151 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOF_FOUND, ParcelFloodbasin_VilOldWoman_5
# 156 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOF, ParcelFloodbasin_VilOldWoman_8
# 161 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_FLD_RELIEF_DONE, ParcelFloodbasin_VilOldWoman_11
# 167 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilOldWoman_14
# 172 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_FLD_RELIEF_DONE, ParcelFloodbasin_VilOldWoman_17
# 177 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_6, MSGBOX_DEFAULT
# 178 "data/maps/ParcelFloodbasin/scripts.pory"
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

ParcelFloodbasin_VilOldWoman_8:
# 157 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_2, MSGBOX_DEFAULT
# 158 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_11:
# 162 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_3, MSGBOX_DEFAULT
# 163 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_ROOF
# 164 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_14:
# 168 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_4, MSGBOX_DEFAULT
# 169 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_17:
# 173 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_5, MSGBOX_DEFAULT
# 174 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilMan::
# 182 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 183 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 184 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilMan_2
# 189 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_1, MSGBOX_DEFAULT
# 190 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_2:
# 185 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_0, MSGBOX_DEFAULT
# 186 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilGirl::
# 194 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 195 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 196 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilGirl_2
# 201 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_1, MSGBOX_DEFAULT
# 202 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilGirl_2:
# 197 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_0, MSGBOX_DEFAULT
# 198 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilFisher::
# 206 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 207 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 208 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilFisher_2
# 213 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasin_VilFisher_5
# 218 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_2, MSGBOX_DEFAULT
# 219 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_2:
# 209 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_0, MSGBOX_DEFAULT
# 210 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_5:
# 214 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_1, MSGBOX_DEFAULT
# 215 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Discharge::
# 225 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 226 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 227 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 0
# 228 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 229 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Discharge_2
# 234 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Discharge_Text_1, MSGBOX_SIGN
# 235 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 236 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Discharge_2:
# 230 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Discharge_Text_0, MSGBOX_SIGN
# 231 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sheen::
# 240 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 241 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 242 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 1
# 243 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 244 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Sheen_2
# 249 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sheen_Text_1, MSGBOX_SIGN
# 250 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 251 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sheen_2:
# 245 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sheen_Text_0, MSGBOX_SIGN
# 246 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_DeadReeds::
# 255 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 256 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 257 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 2
# 258 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 259 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_DeadReeds_2
# 264 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeadReeds_Text_1, MSGBOX_SIGN
# 265 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 266 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_DeadReeds_2:
# 260 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeadReeds_Text_0, MSGBOX_SIGN
# 261 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_DeformedWooper::
# 272 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 273 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 274 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 3
# 275 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 276 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeformedWooper_Text_0, MSGBOX_DEFAULT
# 277 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_SickKarp::
# 281 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 282 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 283 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 4
# 284 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 285 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SickKarp_Text_0, MSGBOX_DEFAULT
# 286 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BoothSign::
# 292 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BoothSign_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Remediator::
# 297 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 298 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 299 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 300 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 5
# 301 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 302 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Remediator_2
# 307 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_1, MSGBOX_DEFAULT
# 308 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_2, MSGBOX_DEFAULT
# 309 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_3, MSGBOX_DEFAULT
# 310 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_4, MSGBOX_DEFAULT
# 311 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_5, MSGBOX_DEFAULT
# 312 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_6, MSGBOX_DEFAULT
# 313 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_7, MSGBOX_DEFAULT
# 314 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_8, MSGBOX_DEFAULT
# 315 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 316 "data/maps/ParcelFloodbasin/scripts.pory"
	delay 30
# 317 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_9, MSGBOX_DEFAULT
# 318 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_REMEDIATOR, ParcelFloodbasin_Remediator_Text_10, ParcelFloodbasin_Remediator_Text_11
# 321 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_12, MSGBOX_DEFAULT
# 322 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 323 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Remediator_2:
# 303 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_0, MSGBOX_DEFAULT
# 304 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer::
# 329 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BASIN_KID, ParcelFloodbasin_BasinKidTrainer_Text_0, ParcelFloodbasin_BasinKidTrainer_Text_1, ParcelFloodbasin_BasinKidTrainer_FirstWin
# 333 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 334 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_3
ParcelFloodbasin_BasinKidTrainer_1:
# 337 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_8
ParcelFloodbasin_BasinKidTrainer_6:
# 340 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_13
ParcelFloodbasin_BasinKidTrainer_11:
# 343 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_18
ParcelFloodbasin_BasinKidTrainer_16:
# 346 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_BasinKidTrainer_2:
# 335 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R2
	goto ParcelFloodbasin_BasinKidTrainer_1

ParcelFloodbasin_BasinKidTrainer_3:
# 334 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R2
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_2
	goto ParcelFloodbasin_BasinKidTrainer_1

ParcelFloodbasin_BasinKidTrainer_7:
# 338 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R3
	goto ParcelFloodbasin_BasinKidTrainer_6

ParcelFloodbasin_BasinKidTrainer_8:
# 337 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R3
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_7
	goto ParcelFloodbasin_BasinKidTrainer_6

ParcelFloodbasin_BasinKidTrainer_12:
# 341 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R4
	goto ParcelFloodbasin_BasinKidTrainer_11

ParcelFloodbasin_BasinKidTrainer_13:
# 340 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R4
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_12
	goto ParcelFloodbasin_BasinKidTrainer_11

ParcelFloodbasin_BasinKidTrainer_17:
# 344 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R5
	goto ParcelFloodbasin_BasinKidTrainer_16

ParcelFloodbasin_BasinKidTrainer_18:
# 343 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R5
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_17
	goto ParcelFloodbasin_BasinKidTrainer_16


ParcelFloodbasin_BasinKidTrainer_FirstWin::
# 350 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_Text_2, MSGBOX_DEFAULT
# 351 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R2::
# 355 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 356 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 357 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_0, MSGBOX_YESNO
# 358 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R2_2
# 363 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R2, ParcelFloodbasin_BasinKidTrainer_R2_Text_2
# 364 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_3, MSGBOX_DEFAULT
# 365 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R2_2:
# 359 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 360 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R3::
# 369 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 370 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 371 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R3_Text_0, MSGBOX_YESNO
# 372 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R3_2
# 377 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R3, ParcelFloodbasin_BasinKidTrainer_R3_Text_1
# 378 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R3_Text_2, MSGBOX_DEFAULT
# 379 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R3_2:
# 373 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 374 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R4::
# 383 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 384 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 385 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R4_Text_0, MSGBOX_YESNO
# 386 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R4_2
# 391 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R4, ParcelFloodbasin_BasinKidTrainer_R4_Text_1
# 392 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R4_Text_2, MSGBOX_DEFAULT
# 393 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R4_2:
# 387 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 388 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R5::
# 397 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 398 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 399 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R5_Text_0, MSGBOX_YESNO
# 400 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R5_2
# 405 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R5, ParcelFloodbasin_BasinKidTrainer_R2_Text_2
# 406 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R5_Text_1, MSGBOX_DEFAULT
# 407 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R5_2:
# 401 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 402 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve::
# 411 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ARVE, ParcelFloodbasin_Arve_Text_0, ParcelFloodbasin_Arve_Text_1, ParcelFloodbasin_Arve_FirstWin
# 415 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 416 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Arve_3
ParcelFloodbasin_Arve_1:
# 419 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Arve_8
ParcelFloodbasin_Arve_6:
# 422 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Arve_13
ParcelFloodbasin_Arve_11:
# 425 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Arve_18
ParcelFloodbasin_Arve_16:
# 428 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Arve_2:
# 417 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R2
	goto ParcelFloodbasin_Arve_1

ParcelFloodbasin_Arve_3:
# 416 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R2
	goto_if 0, ParcelFloodbasin_Arve_2
	goto ParcelFloodbasin_Arve_1

ParcelFloodbasin_Arve_7:
# 420 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R3
	goto ParcelFloodbasin_Arve_6

ParcelFloodbasin_Arve_8:
# 419 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R3
	goto_if 0, ParcelFloodbasin_Arve_7
	goto ParcelFloodbasin_Arve_6

ParcelFloodbasin_Arve_12:
# 423 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R4
	goto ParcelFloodbasin_Arve_11

ParcelFloodbasin_Arve_13:
# 422 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R4
	goto_if 0, ParcelFloodbasin_Arve_12
	goto ParcelFloodbasin_Arve_11

ParcelFloodbasin_Arve_17:
# 426 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R5
	goto ParcelFloodbasin_Arve_16

ParcelFloodbasin_Arve_18:
# 425 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R5
	goto_if 0, ParcelFloodbasin_Arve_17
	goto ParcelFloodbasin_Arve_16


ParcelFloodbasin_Arve_FirstWin::
# 432 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_Text_2, MSGBOX_DEFAULT
# 433 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R2::
# 437 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 438 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 439 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_0, MSGBOX_YESNO
# 440 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R2_2
# 445 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R2, ParcelFloodbasin_Arve_R2_Text_2
# 446 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_3, MSGBOX_DEFAULT
# 447 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R2_2:
# 441 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 442 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R3::
# 451 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 452 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 453 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R3_Text_0, MSGBOX_YESNO
# 454 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R3_2
# 459 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R3, ParcelFloodbasin_Arve_R3_Text_1
# 460 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R3_Text_2, MSGBOX_DEFAULT
# 461 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R3_2:
# 455 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 456 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R4::
# 465 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 466 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 467 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R4_Text_0, MSGBOX_YESNO
# 468 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R4_2
# 473 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R4, ParcelFloodbasin_Arve_R3_Text_1
# 474 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R4_Text_1, MSGBOX_DEFAULT
# 475 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R4_2:
# 469 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 470 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R5::
# 479 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 480 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 481 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R5_Text_0, MSGBOX_YESNO
# 482 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R5_2
# 487 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R5, ParcelFloodbasin_Arve_R5_Text_1
# 488 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R5_Text_2, MSGBOX_DEFAULT
# 489 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R5_2:
# 483 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 484 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai::
# 493 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_KAI, ParcelFloodbasin_Kai_Text_0, ParcelFloodbasin_Kai_Text_1, ParcelFloodbasin_Kai_FirstWin
# 497 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 498 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Kai_3
ParcelFloodbasin_Kai_1:
# 501 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Kai_8
ParcelFloodbasin_Kai_6:
# 504 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Kai_13
ParcelFloodbasin_Kai_11:
# 507 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Kai_18
ParcelFloodbasin_Kai_16:
# 510 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Kai_2:
# 499 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R2
	goto ParcelFloodbasin_Kai_1

ParcelFloodbasin_Kai_3:
# 498 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R2
	goto_if 0, ParcelFloodbasin_Kai_2
	goto ParcelFloodbasin_Kai_1

ParcelFloodbasin_Kai_7:
# 502 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R3
	goto ParcelFloodbasin_Kai_6

ParcelFloodbasin_Kai_8:
# 501 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R3
	goto_if 0, ParcelFloodbasin_Kai_7
	goto ParcelFloodbasin_Kai_6

ParcelFloodbasin_Kai_12:
# 505 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R4
	goto ParcelFloodbasin_Kai_11

ParcelFloodbasin_Kai_13:
# 504 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R4
	goto_if 0, ParcelFloodbasin_Kai_12
	goto ParcelFloodbasin_Kai_11

ParcelFloodbasin_Kai_17:
# 508 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R5
	goto ParcelFloodbasin_Kai_16

ParcelFloodbasin_Kai_18:
# 507 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R5
	goto_if 0, ParcelFloodbasin_Kai_17
	goto ParcelFloodbasin_Kai_16


ParcelFloodbasin_Kai_FirstWin::
# 514 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_Text_2, MSGBOX_DEFAULT
# 515 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R2::
# 519 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 520 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 521 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_0, MSGBOX_YESNO
# 522 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R2_2
# 527 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R2, ParcelFloodbasin_Kai_R2_Text_2
# 528 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_3, MSGBOX_DEFAULT
# 529 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R2_2:
# 523 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 524 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R3::
# 533 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 534 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 535 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R3_Text_0, MSGBOX_YESNO
# 536 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R3_2
# 541 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R3, ParcelFloodbasin_Kai_R3_Text_1
# 542 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R3_Text_2, MSGBOX_DEFAULT
# 543 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R3_2:
# 537 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 538 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R4::
# 547 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 548 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 549 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R4_Text_0, MSGBOX_YESNO
# 550 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R4_2
# 555 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R4, ParcelFloodbasin_Kai_R4_Text_1
# 556 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R4_Text_2, MSGBOX_DEFAULT
# 557 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R4_2:
# 551 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 552 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R5::
# 561 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 562 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 563 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R5_Text_0, MSGBOX_YESNO
# 564 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R5_2
# 569 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R5, ParcelFloodbasin_Kai_R5_Text_1
# 570 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R5_Text_2, MSGBOX_DEFAULT
# 571 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R5_2:
# 565 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 566 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe::
# 575 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_SIGNE, ParcelFloodbasin_Signe_Text_0, ParcelFloodbasin_Signe_Text_1, ParcelFloodbasin_Signe_FirstWin
# 579 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 580 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Signe_3
ParcelFloodbasin_Signe_1:
# 583 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Signe_8
ParcelFloodbasin_Signe_6:
# 586 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Signe_13
ParcelFloodbasin_Signe_11:
# 589 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Signe_18
ParcelFloodbasin_Signe_16:
# 592 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Signe_2:
# 581 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R2
	goto ParcelFloodbasin_Signe_1

ParcelFloodbasin_Signe_3:
# 580 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R2
	goto_if 0, ParcelFloodbasin_Signe_2
	goto ParcelFloodbasin_Signe_1

ParcelFloodbasin_Signe_7:
# 584 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R3
	goto ParcelFloodbasin_Signe_6

ParcelFloodbasin_Signe_8:
# 583 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R3
	goto_if 0, ParcelFloodbasin_Signe_7
	goto ParcelFloodbasin_Signe_6

ParcelFloodbasin_Signe_12:
# 587 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R4
	goto ParcelFloodbasin_Signe_11

ParcelFloodbasin_Signe_13:
# 586 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R4
	goto_if 0, ParcelFloodbasin_Signe_12
	goto ParcelFloodbasin_Signe_11

ParcelFloodbasin_Signe_17:
# 590 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R5
	goto ParcelFloodbasin_Signe_16

ParcelFloodbasin_Signe_18:
# 589 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R5
	goto_if 0, ParcelFloodbasin_Signe_17
	goto ParcelFloodbasin_Signe_16


ParcelFloodbasin_Signe_FirstWin::
# 596 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_Text_2, MSGBOX_DEFAULT
# 597 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R2::
# 601 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 602 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 603 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_0, MSGBOX_YESNO
# 604 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R2_2
# 609 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R2, ParcelFloodbasin_Signe_R2_Text_2
# 610 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_3, MSGBOX_DEFAULT
# 611 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R2_2:
# 605 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 606 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R3::
# 615 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 616 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 617 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R3_Text_0, MSGBOX_YESNO
# 618 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R3_2
# 623 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R3, ParcelFloodbasin_Signe_R3_Text_1
# 624 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R3_Text_2, MSGBOX_DEFAULT
# 625 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R3_2:
# 619 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 620 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R4::
# 629 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 630 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 631 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R4_Text_0, MSGBOX_YESNO
# 632 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R4_2
# 637 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R4, ParcelFloodbasin_Signe_R3_Text_1
# 638 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R4_Text_1, MSGBOX_DEFAULT
# 639 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R4_2:
# 633 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 634 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R5::
# 643 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 644 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 645 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R5_Text_0, MSGBOX_YESNO
# 646 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R5_2
# 651 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R5, ParcelFloodbasin_Signe_R5_Text_1
# 652 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R5_Text_2, MSGBOX_DEFAULT
# 653 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R5_2:
# 647 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 648 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif::
# 657 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_LEIF, ParcelFloodbasin_Leif_Text_0, ParcelFloodbasin_Leif_Text_1, ParcelFloodbasin_Leif_FirstWin
# 661 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 662 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Leif_3
ParcelFloodbasin_Leif_1:
# 665 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Leif_8
ParcelFloodbasin_Leif_6:
# 668 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Leif_13
ParcelFloodbasin_Leif_11:
# 671 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Leif_18
ParcelFloodbasin_Leif_16:
# 674 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Leif_2:
# 663 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R2
	goto ParcelFloodbasin_Leif_1

ParcelFloodbasin_Leif_3:
# 662 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R2
	goto_if 0, ParcelFloodbasin_Leif_2
	goto ParcelFloodbasin_Leif_1

ParcelFloodbasin_Leif_7:
# 666 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R3
	goto ParcelFloodbasin_Leif_6

ParcelFloodbasin_Leif_8:
# 665 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R3
	goto_if 0, ParcelFloodbasin_Leif_7
	goto ParcelFloodbasin_Leif_6

ParcelFloodbasin_Leif_12:
# 669 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R4
	goto ParcelFloodbasin_Leif_11

ParcelFloodbasin_Leif_13:
# 668 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R4
	goto_if 0, ParcelFloodbasin_Leif_12
	goto ParcelFloodbasin_Leif_11

ParcelFloodbasin_Leif_17:
# 672 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R5
	goto ParcelFloodbasin_Leif_16

ParcelFloodbasin_Leif_18:
# 671 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R5
	goto_if 0, ParcelFloodbasin_Leif_17
	goto ParcelFloodbasin_Leif_16


ParcelFloodbasin_Leif_FirstWin::
# 678 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_Text_2, MSGBOX_DEFAULT
# 679 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R2::
# 683 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 684 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 685 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_0, MSGBOX_YESNO
# 686 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R2_2
# 691 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R2, ParcelFloodbasin_Leif_R2_Text_2
# 692 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_3, MSGBOX_DEFAULT
# 693 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R2_2:
# 687 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 688 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R3::
# 697 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 698 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 699 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R3_Text_0, MSGBOX_YESNO
# 700 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R3_2
# 705 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R3, ParcelFloodbasin_Leif_R3_Text_1
# 706 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R3_Text_2, MSGBOX_DEFAULT
# 707 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R3_2:
# 701 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 702 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R4::
# 711 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 712 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 713 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R4_Text_0, MSGBOX_YESNO
# 714 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R4_2
# 719 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R4, ParcelFloodbasin_Leif_R4_Text_1
# 720 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R4_Text_2, MSGBOX_DEFAULT
# 721 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R4_2:
# 715 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 716 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R5::
# 725 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 726 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 727 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R5_Text_0, MSGBOX_YESNO
# 728 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R5_2
# 733 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R5, ParcelFloodbasin_Leif_R3_Text_1
# 734 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R5_Text_1, MSGBOX_DEFAULT
# 735 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R5_2:
# 729 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 730 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls::
# 739 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_TRULS, ParcelFloodbasin_Truls_Text_0, ParcelFloodbasin_Truls_Text_1, ParcelFloodbasin_Truls_FirstWin
# 743 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 744 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Truls_3
ParcelFloodbasin_Truls_1:
# 747 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Truls_8
ParcelFloodbasin_Truls_6:
# 750 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Truls_13
ParcelFloodbasin_Truls_11:
# 753 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Truls_18
ParcelFloodbasin_Truls_16:
# 756 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Truls_2:
# 745 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R2
	goto ParcelFloodbasin_Truls_1

ParcelFloodbasin_Truls_3:
# 744 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R2
	goto_if 0, ParcelFloodbasin_Truls_2
	goto ParcelFloodbasin_Truls_1

ParcelFloodbasin_Truls_7:
# 748 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R3
	goto ParcelFloodbasin_Truls_6

ParcelFloodbasin_Truls_8:
# 747 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R3
	goto_if 0, ParcelFloodbasin_Truls_7
	goto ParcelFloodbasin_Truls_6

ParcelFloodbasin_Truls_12:
# 751 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R4
	goto ParcelFloodbasin_Truls_11

ParcelFloodbasin_Truls_13:
# 750 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R4
	goto_if 0, ParcelFloodbasin_Truls_12
	goto ParcelFloodbasin_Truls_11

ParcelFloodbasin_Truls_17:
# 754 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R5
	goto ParcelFloodbasin_Truls_16

ParcelFloodbasin_Truls_18:
# 753 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R5
	goto_if 0, ParcelFloodbasin_Truls_17
	goto ParcelFloodbasin_Truls_16


ParcelFloodbasin_Truls_FirstWin::
# 760 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_Text_2, MSGBOX_DEFAULT
# 761 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R2::
# 765 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 766 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 767 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_0, MSGBOX_YESNO
# 768 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R2_2
# 773 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R2, ParcelFloodbasin_Truls_R2_Text_2
# 774 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_3, MSGBOX_DEFAULT
# 775 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R2_2:
# 769 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 770 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R3::
# 779 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 780 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 781 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R3_Text_0, MSGBOX_YESNO
# 782 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R3_2
# 787 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R3, ParcelFloodbasin_Truls_R3_Text_1
# 788 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R3_Text_2, MSGBOX_DEFAULT
# 789 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R3_2:
# 783 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 784 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R4::
# 793 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 794 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 795 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R4_Text_0, MSGBOX_YESNO
# 796 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R4_2
# 801 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R4, ParcelFloodbasin_Truls_R4_Text_1
# 802 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R4_Text_2, MSGBOX_DEFAULT
# 803 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R4_2:
# 797 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 798 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R5::
# 807 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 808 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 809 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R5_Text_0, MSGBOX_YESNO
# 810 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R5_2
# 815 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R5, ParcelFloodbasin_Truls_R5_Text_1
# 816 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R5_Text_2, MSGBOX_DEFAULT
# 817 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R5_2:
# 811 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 812 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor::
# 821 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_HALVOR, ParcelFloodbasin_Halvor_Text_0, ParcelFloodbasin_Halvor_Text_1, ParcelFloodbasin_Halvor_FirstWin
# 825 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 826 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Halvor_3
ParcelFloodbasin_Halvor_1:
# 829 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Halvor_8
ParcelFloodbasin_Halvor_6:
# 832 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Halvor_13
ParcelFloodbasin_Halvor_11:
# 835 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Halvor_18
ParcelFloodbasin_Halvor_16:
# 838 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Halvor_2:
# 827 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R2
	goto ParcelFloodbasin_Halvor_1

ParcelFloodbasin_Halvor_3:
# 826 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R2
	goto_if 0, ParcelFloodbasin_Halvor_2
	goto ParcelFloodbasin_Halvor_1

ParcelFloodbasin_Halvor_7:
# 830 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R3
	goto ParcelFloodbasin_Halvor_6

ParcelFloodbasin_Halvor_8:
# 829 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R3
	goto_if 0, ParcelFloodbasin_Halvor_7
	goto ParcelFloodbasin_Halvor_6

ParcelFloodbasin_Halvor_12:
# 833 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R4
	goto ParcelFloodbasin_Halvor_11

ParcelFloodbasin_Halvor_13:
# 832 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R4
	goto_if 0, ParcelFloodbasin_Halvor_12
	goto ParcelFloodbasin_Halvor_11

ParcelFloodbasin_Halvor_17:
# 836 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R5
	goto ParcelFloodbasin_Halvor_16

ParcelFloodbasin_Halvor_18:
# 835 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R5
	goto_if 0, ParcelFloodbasin_Halvor_17
	goto ParcelFloodbasin_Halvor_16


ParcelFloodbasin_Halvor_FirstWin::
# 842 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_Text_2, MSGBOX_DEFAULT
# 843 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R2::
# 847 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 848 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 849 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_0, MSGBOX_YESNO
# 850 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R2_2
# 855 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R2, ParcelFloodbasin_Halvor_R2_Text_2
# 856 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_3, MSGBOX_DEFAULT
# 857 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R2_2:
# 851 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 852 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R3::
# 861 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 862 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 863 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R3_Text_0, MSGBOX_YESNO
# 864 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R3_2
# 869 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R3, ParcelFloodbasin_Halvor_R3_Text_1
# 870 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R3_Text_2, MSGBOX_DEFAULT
# 871 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R3_2:
# 865 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 866 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R4::
# 875 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 876 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 877 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R4_Text_0, MSGBOX_YESNO
# 878 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R4_2
# 883 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R4, ParcelFloodbasin_Halvor_R3_Text_1
# 884 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R4_Text_1, MSGBOX_DEFAULT
# 885 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R4_2:
# 879 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 880 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R5::
# 889 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 890 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 891 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R5_Text_0, MSGBOX_YESNO
# 892 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R5_2
# 897 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R5, ParcelFloodbasin_Halvor_R5_Text_1
# 898 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R5_Text_2, MSGBOX_DEFAULT
# 899 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R5_2:
# 893 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 894 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja::
# 903 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_MAJA, ParcelFloodbasin_Maja_Text_0, ParcelFloodbasin_Maja_Text_1, ParcelFloodbasin_Maja_FirstWin
# 907 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 908 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Maja_3
ParcelFloodbasin_Maja_1:
# 911 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Maja_8
ParcelFloodbasin_Maja_6:
# 914 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Maja_13
ParcelFloodbasin_Maja_11:
# 917 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Maja_18
ParcelFloodbasin_Maja_16:
# 920 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Maja_2:
# 909 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R2
	goto ParcelFloodbasin_Maja_1

ParcelFloodbasin_Maja_3:
# 908 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R2
	goto_if 0, ParcelFloodbasin_Maja_2
	goto ParcelFloodbasin_Maja_1

ParcelFloodbasin_Maja_7:
# 912 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R3
	goto ParcelFloodbasin_Maja_6

ParcelFloodbasin_Maja_8:
# 911 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R3
	goto_if 0, ParcelFloodbasin_Maja_7
	goto ParcelFloodbasin_Maja_6

ParcelFloodbasin_Maja_12:
# 915 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R4
	goto ParcelFloodbasin_Maja_11

ParcelFloodbasin_Maja_13:
# 914 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R4
	goto_if 0, ParcelFloodbasin_Maja_12
	goto ParcelFloodbasin_Maja_11

ParcelFloodbasin_Maja_17:
# 918 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R5
	goto ParcelFloodbasin_Maja_16

ParcelFloodbasin_Maja_18:
# 917 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R5
	goto_if 0, ParcelFloodbasin_Maja_17
	goto ParcelFloodbasin_Maja_16


ParcelFloodbasin_Maja_FirstWin::
# 924 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_Text_2, MSGBOX_DEFAULT
# 925 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R2::
# 929 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 930 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 931 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_0, MSGBOX_YESNO
# 932 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R2_2
# 937 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R2, ParcelFloodbasin_Maja_R2_Text_2
# 938 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_3, MSGBOX_DEFAULT
# 939 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R2_2:
# 933 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 934 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R3::
# 943 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 944 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 945 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R3_Text_0, MSGBOX_YESNO
# 946 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R3_2
# 951 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R3, ParcelFloodbasin_Maja_R3_Text_1
# 952 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R3_Text_2, MSGBOX_DEFAULT
# 953 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R3_2:
# 947 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 948 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R4::
# 957 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 958 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 959 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R4_Text_0, MSGBOX_YESNO
# 960 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R4_2
# 965 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R4, ParcelFloodbasin_Maja_R4_Text_1
# 966 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R4_Text_2, MSGBOX_DEFAULT
# 967 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R4_2:
# 961 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 962 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R5::
# 971 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 972 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 973 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R5_Text_0, MSGBOX_YESNO
# 974 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R5_2
# 979 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R5, ParcelFloodbasin_Maja_R5_Text_1
# 980 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R5_Text_2, MSGBOX_DEFAULT
# 981 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R5_2:
# 975 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 976 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn::
# 985 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_BJORN, ParcelFloodbasin_Bjorn_Text_0, ParcelFloodbasin_Bjorn_Text_1, ParcelFloodbasin_Bjorn_FirstWin
# 989 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 990 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Bjorn_3
ParcelFloodbasin_Bjorn_1:
# 993 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Bjorn_8
ParcelFloodbasin_Bjorn_6:
# 996 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Bjorn_13
ParcelFloodbasin_Bjorn_11:
# 999 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Bjorn_18
ParcelFloodbasin_Bjorn_16:
# 1002 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Bjorn_2:
# 991 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R2
	goto ParcelFloodbasin_Bjorn_1

ParcelFloodbasin_Bjorn_3:
# 990 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R2
	goto_if 0, ParcelFloodbasin_Bjorn_2
	goto ParcelFloodbasin_Bjorn_1

ParcelFloodbasin_Bjorn_7:
# 994 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R3
	goto ParcelFloodbasin_Bjorn_6

ParcelFloodbasin_Bjorn_8:
# 993 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R3
	goto_if 0, ParcelFloodbasin_Bjorn_7
	goto ParcelFloodbasin_Bjorn_6

ParcelFloodbasin_Bjorn_12:
# 997 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R4
	goto ParcelFloodbasin_Bjorn_11

ParcelFloodbasin_Bjorn_13:
# 996 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R4
	goto_if 0, ParcelFloodbasin_Bjorn_12
	goto ParcelFloodbasin_Bjorn_11

ParcelFloodbasin_Bjorn_17:
# 1000 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R5
	goto ParcelFloodbasin_Bjorn_16

ParcelFloodbasin_Bjorn_18:
# 999 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R5
	goto_if 0, ParcelFloodbasin_Bjorn_17
	goto ParcelFloodbasin_Bjorn_16


ParcelFloodbasin_Bjorn_FirstWin::
# 1006 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_Text_2, MSGBOX_DEFAULT
# 1007 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R2::
# 1011 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1012 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1013 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_0, MSGBOX_YESNO
# 1014 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R2_2
# 1019 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R2, ParcelFloodbasin_Bjorn_R2_Text_2
# 1020 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_3, MSGBOX_DEFAULT
# 1021 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R2_2:
# 1015 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1016 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R3::
# 1025 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1026 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1027 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R3_Text_0, MSGBOX_YESNO
# 1028 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R3_2
# 1033 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R3, ParcelFloodbasin_Bjorn_R3_Text_1
# 1034 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R3_Text_2, MSGBOX_DEFAULT
# 1035 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R3_2:
# 1029 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1030 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R4::
# 1039 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1040 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1041 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R4_Text_0, MSGBOX_YESNO
# 1042 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R4_2
# 1047 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R4, ParcelFloodbasin_Bjorn_R4_Text_1
# 1048 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R4_Text_2, MSGBOX_DEFAULT
# 1049 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R4_2:
# 1043 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1044 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R5::
# 1053 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1054 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1055 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R5_Text_0, MSGBOX_YESNO
# 1056 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R5_2
# 1061 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R5, ParcelFloodbasin_Bjorn_R2_Text_2
# 1062 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R5_Text_1, MSGBOX_DEFAULT
# 1063 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R5_2:
# 1057 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1058 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig::
# 1067 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_SOLVEIG, ParcelFloodbasin_Solveig_Text_0, ParcelFloodbasin_Solveig_Text_1, ParcelFloodbasin_Solveig_FirstWin
# 1071 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1072 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Solveig_3
ParcelFloodbasin_Solveig_1:
# 1075 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Solveig_8
ParcelFloodbasin_Solveig_6:
# 1078 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Solveig_13
ParcelFloodbasin_Solveig_11:
# 1081 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Solveig_18
ParcelFloodbasin_Solveig_16:
# 1084 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Solveig_2:
# 1073 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R2
	goto ParcelFloodbasin_Solveig_1

ParcelFloodbasin_Solveig_3:
# 1072 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R2
	goto_if 0, ParcelFloodbasin_Solveig_2
	goto ParcelFloodbasin_Solveig_1

ParcelFloodbasin_Solveig_7:
# 1076 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R3
	goto ParcelFloodbasin_Solveig_6

ParcelFloodbasin_Solveig_8:
# 1075 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R3
	goto_if 0, ParcelFloodbasin_Solveig_7
	goto ParcelFloodbasin_Solveig_6

ParcelFloodbasin_Solveig_12:
# 1079 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R4
	goto ParcelFloodbasin_Solveig_11

ParcelFloodbasin_Solveig_13:
# 1078 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R4
	goto_if 0, ParcelFloodbasin_Solveig_12
	goto ParcelFloodbasin_Solveig_11

ParcelFloodbasin_Solveig_17:
# 1082 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R5
	goto ParcelFloodbasin_Solveig_16

ParcelFloodbasin_Solveig_18:
# 1081 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R5
	goto_if 0, ParcelFloodbasin_Solveig_17
	goto ParcelFloodbasin_Solveig_16


ParcelFloodbasin_Solveig_FirstWin::
# 1088 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_Text_2, MSGBOX_DEFAULT
# 1089 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R2::
# 1093 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1094 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1095 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_0, MSGBOX_YESNO
# 1096 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R2_2
# 1101 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R2, ParcelFloodbasin_Solveig_R2_Text_2
# 1102 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_3, MSGBOX_DEFAULT
# 1103 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R2_2:
# 1097 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1098 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R3::
# 1107 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1108 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1109 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R3_Text_0, MSGBOX_YESNO
# 1110 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R3_2
# 1115 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R3, ParcelFloodbasin_Solveig_R3_Text_1
# 1116 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R3_Text_2, MSGBOX_DEFAULT
# 1117 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R3_2:
# 1111 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1112 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R4::
# 1121 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1122 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1123 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R4_Text_0, MSGBOX_YESNO
# 1124 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R4_2
# 1129 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R4, ParcelFloodbasin_Solveig_R4_Text_1
# 1130 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R4_Text_2, MSGBOX_DEFAULT
# 1131 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R4_2:
# 1125 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1126 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R5::
# 1135 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1136 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1137 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R5_Text_0, MSGBOX_YESNO
# 1138 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R5_2
# 1143 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R5, ParcelFloodbasin_Solveig_R3_Text_1
# 1144 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R5_Text_1, MSGBOX_DEFAULT
# 1145 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R5_2:
# 1139 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1140 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils::
# 1149 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_NILS, ParcelFloodbasin_Nils_Text_0, ParcelFloodbasin_Nils_Text_1, ParcelFloodbasin_Nils_FirstWin
# 1153 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1154 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Nils_3
ParcelFloodbasin_Nils_1:
# 1157 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Nils_8
ParcelFloodbasin_Nils_6:
# 1160 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Nils_13
ParcelFloodbasin_Nils_11:
# 1163 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Nils_18
ParcelFloodbasin_Nils_16:
# 1166 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Nils_2:
# 1155 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R2
	goto ParcelFloodbasin_Nils_1

ParcelFloodbasin_Nils_3:
# 1154 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R2
	goto_if 0, ParcelFloodbasin_Nils_2
	goto ParcelFloodbasin_Nils_1

ParcelFloodbasin_Nils_7:
# 1158 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R3
	goto ParcelFloodbasin_Nils_6

ParcelFloodbasin_Nils_8:
# 1157 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R3
	goto_if 0, ParcelFloodbasin_Nils_7
	goto ParcelFloodbasin_Nils_6

ParcelFloodbasin_Nils_12:
# 1161 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R4
	goto ParcelFloodbasin_Nils_11

ParcelFloodbasin_Nils_13:
# 1160 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R4
	goto_if 0, ParcelFloodbasin_Nils_12
	goto ParcelFloodbasin_Nils_11

ParcelFloodbasin_Nils_17:
# 1164 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R5
	goto ParcelFloodbasin_Nils_16

ParcelFloodbasin_Nils_18:
# 1163 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R5
	goto_if 0, ParcelFloodbasin_Nils_17
	goto ParcelFloodbasin_Nils_16


ParcelFloodbasin_Nils_FirstWin::
# 1170 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_Text_2, MSGBOX_DEFAULT
# 1171 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R2::
# 1175 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1176 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1177 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_0, MSGBOX_YESNO
# 1178 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R2_2
# 1183 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R2, ParcelFloodbasin_Nils_R2_Text_2
# 1184 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_3, MSGBOX_DEFAULT
# 1185 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R2_2:
# 1179 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1180 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R3::
# 1189 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1190 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1191 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R3_Text_0, MSGBOX_YESNO
# 1192 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R3_2
# 1197 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R3, ParcelFloodbasin_Nils_R3_Text_1
# 1198 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R3_Text_2, MSGBOX_DEFAULT
# 1199 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R3_2:
# 1193 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1194 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R4::
# 1203 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1204 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1205 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R4_Text_0, MSGBOX_YESNO
# 1206 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R4_2
# 1211 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R4, ParcelFloodbasin_Nils_R2_Text_2
# 1212 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R4_Text_1, MSGBOX_DEFAULT
# 1213 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R4_2:
# 1207 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1208 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R5::
# 1217 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1218 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1219 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R5_Text_0, MSGBOX_YESNO
# 1220 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R5_2
# 1225 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R5, ParcelFloodbasin_Nils_R5_Text_1
# 1226 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R5_Text_2, MSGBOX_DEFAULT
# 1227 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R5_2:
# 1221 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1222 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig::
# 1231 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_RANNVEIG, ParcelFloodbasin_Rannveig_Text_0, ParcelFloodbasin_Rannveig_Text_1, ParcelFloodbasin_Rannveig_FirstWin
# 1235 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1236 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Rannveig_3
ParcelFloodbasin_Rannveig_1:
# 1239 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Rannveig_8
ParcelFloodbasin_Rannveig_6:
# 1242 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Rannveig_13
ParcelFloodbasin_Rannveig_11:
# 1245 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Rannveig_18
ParcelFloodbasin_Rannveig_16:
# 1248 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Rannveig_2:
# 1237 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R2
	goto ParcelFloodbasin_Rannveig_1

ParcelFloodbasin_Rannveig_3:
# 1236 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R2
	goto_if 0, ParcelFloodbasin_Rannveig_2
	goto ParcelFloodbasin_Rannveig_1

ParcelFloodbasin_Rannveig_7:
# 1240 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R3
	goto ParcelFloodbasin_Rannveig_6

ParcelFloodbasin_Rannveig_8:
# 1239 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R3
	goto_if 0, ParcelFloodbasin_Rannveig_7
	goto ParcelFloodbasin_Rannveig_6

ParcelFloodbasin_Rannveig_12:
# 1243 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R4
	goto ParcelFloodbasin_Rannveig_11

ParcelFloodbasin_Rannveig_13:
# 1242 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R4
	goto_if 0, ParcelFloodbasin_Rannveig_12
	goto ParcelFloodbasin_Rannveig_11

ParcelFloodbasin_Rannveig_17:
# 1246 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R5
	goto ParcelFloodbasin_Rannveig_16

ParcelFloodbasin_Rannveig_18:
# 1245 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R5
	goto_if 0, ParcelFloodbasin_Rannveig_17
	goto ParcelFloodbasin_Rannveig_16


ParcelFloodbasin_Rannveig_FirstWin::
# 1252 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_Text_2, MSGBOX_DEFAULT
# 1253 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R2::
# 1257 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1258 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1259 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_0, MSGBOX_YESNO
# 1260 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R2_2
# 1265 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R2, ParcelFloodbasin_Rannveig_R2_Text_2
# 1266 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_3, MSGBOX_DEFAULT
# 1267 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R2_2:
# 1261 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1262 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R3::
# 1271 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1272 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1273 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R3_Text_0, MSGBOX_YESNO
# 1274 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R3_2
# 1279 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R3, ParcelFloodbasin_Rannveig_R3_Text_1
# 1280 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R3_Text_2, MSGBOX_DEFAULT
# 1281 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R3_2:
# 1275 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1276 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R4::
# 1285 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1286 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1287 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R4_Text_0, MSGBOX_YESNO
# 1288 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R4_2
# 1293 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R4, ParcelFloodbasin_Rannveig_R3_Text_1
# 1294 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R4_Text_1, MSGBOX_DEFAULT
# 1295 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R4_2:
# 1289 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1290 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R5::
# 1299 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1300 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1301 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R5_Text_0, MSGBOX_YESNO
# 1302 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R5_2
# 1307 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R5, ParcelFloodbasin_Rannveig_R5_Text_1
# 1308 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R5_Text_2, MSGBOX_DEFAULT
# 1309 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R5_2:
# 1303 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1304 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar::
# 1313 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_EINAR, ParcelFloodbasin_Einar_Text_0, ParcelFloodbasin_Einar_Text_1, ParcelFloodbasin_Einar_FirstWin
# 1317 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1318 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Einar_3
ParcelFloodbasin_Einar_1:
# 1321 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Einar_8
ParcelFloodbasin_Einar_6:
# 1324 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Einar_13
ParcelFloodbasin_Einar_11:
# 1327 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Einar_18
ParcelFloodbasin_Einar_16:
# 1330 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Einar_2:
# 1319 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R2
	goto ParcelFloodbasin_Einar_1

ParcelFloodbasin_Einar_3:
# 1318 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R2
	goto_if 0, ParcelFloodbasin_Einar_2
	goto ParcelFloodbasin_Einar_1

ParcelFloodbasin_Einar_7:
# 1322 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R3
	goto ParcelFloodbasin_Einar_6

ParcelFloodbasin_Einar_8:
# 1321 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R3
	goto_if 0, ParcelFloodbasin_Einar_7
	goto ParcelFloodbasin_Einar_6

ParcelFloodbasin_Einar_12:
# 1325 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R4
	goto ParcelFloodbasin_Einar_11

ParcelFloodbasin_Einar_13:
# 1324 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R4
	goto_if 0, ParcelFloodbasin_Einar_12
	goto ParcelFloodbasin_Einar_11

ParcelFloodbasin_Einar_17:
# 1328 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R5
	goto ParcelFloodbasin_Einar_16

ParcelFloodbasin_Einar_18:
# 1327 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R5
	goto_if 0, ParcelFloodbasin_Einar_17
	goto ParcelFloodbasin_Einar_16


ParcelFloodbasin_Einar_FirstWin::
# 1334 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_Text_2, MSGBOX_DEFAULT
# 1335 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R2::
# 1339 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1340 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1341 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_0, MSGBOX_YESNO
# 1342 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R2_2
# 1347 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R2, ParcelFloodbasin_Einar_R2_Text_2
# 1348 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_3, MSGBOX_DEFAULT
# 1349 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R2_2:
# 1343 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1344 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R3::
# 1353 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1354 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1355 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R3_Text_0, MSGBOX_YESNO
# 1356 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R3_2
# 1361 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R3, ParcelFloodbasin_Einar_R2_Text_2
# 1362 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R3_Text_1, MSGBOX_DEFAULT
# 1363 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R3_2:
# 1357 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1358 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R4::
# 1367 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1368 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1369 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R4_Text_0, MSGBOX_YESNO
# 1370 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R4_2
# 1375 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R4, ParcelFloodbasin_Einar_R2_Text_2
# 1376 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R4_Text_1, MSGBOX_DEFAULT
# 1377 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R4_2:
# 1371 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1372 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R5::
# 1381 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1382 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1383 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R5_Text_0, MSGBOX_YESNO
# 1384 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R5_2
# 1389 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R5, ParcelFloodbasin_Einar_R5_Text_1
# 1390 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R5_Text_2, MSGBOX_DEFAULT
# 1391 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R5_2:
# 1385 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1386 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla::
# 1395 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_STURLA, ParcelFloodbasin_Sturla_Text_0, ParcelFloodbasin_Sturla_Text_1, ParcelFloodbasin_Sturla_FirstWin
# 1399 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1400 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Sturla_3
ParcelFloodbasin_Sturla_1:
# 1403 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Sturla_8
ParcelFloodbasin_Sturla_6:
# 1406 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Sturla_13
ParcelFloodbasin_Sturla_11:
# 1409 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Sturla_18
ParcelFloodbasin_Sturla_16:
# 1412 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Sturla_2:
# 1401 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R2
	goto ParcelFloodbasin_Sturla_1

ParcelFloodbasin_Sturla_3:
# 1400 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R2
	goto_if 0, ParcelFloodbasin_Sturla_2
	goto ParcelFloodbasin_Sturla_1

ParcelFloodbasin_Sturla_7:
# 1404 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R3
	goto ParcelFloodbasin_Sturla_6

ParcelFloodbasin_Sturla_8:
# 1403 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R3
	goto_if 0, ParcelFloodbasin_Sturla_7
	goto ParcelFloodbasin_Sturla_6

ParcelFloodbasin_Sturla_12:
# 1407 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R4
	goto ParcelFloodbasin_Sturla_11

ParcelFloodbasin_Sturla_13:
# 1406 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R4
	goto_if 0, ParcelFloodbasin_Sturla_12
	goto ParcelFloodbasin_Sturla_11

ParcelFloodbasin_Sturla_17:
# 1410 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R5
	goto ParcelFloodbasin_Sturla_16

ParcelFloodbasin_Sturla_18:
# 1409 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R5
	goto_if 0, ParcelFloodbasin_Sturla_17
	goto ParcelFloodbasin_Sturla_16


ParcelFloodbasin_Sturla_FirstWin::
# 1416 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_Text_2, MSGBOX_DEFAULT
# 1417 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R2::
# 1421 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1422 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1423 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_0, MSGBOX_YESNO
# 1424 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R2_2
# 1429 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R2, ParcelFloodbasin_Sturla_R2_Text_2
# 1430 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_3, MSGBOX_DEFAULT
# 1431 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R2_2:
# 1425 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1426 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R3::
# 1435 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1436 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1437 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R3_Text_0, MSGBOX_YESNO
# 1438 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R3_2
# 1443 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R3, ParcelFloodbasin_Sturla_R3_Text_1
# 1444 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R3_Text_2, MSGBOX_DEFAULT
# 1445 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R3_2:
# 1439 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1440 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R4::
# 1449 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1450 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1451 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R4_Text_0, MSGBOX_YESNO
# 1452 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R4_2
# 1457 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R4, ParcelFloodbasin_Sturla_R4_Text_1
# 1458 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R4_Text_2, MSGBOX_DEFAULT
# 1459 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R4_2:
# 1453 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1454 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R5::
# 1463 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1464 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1465 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R5_Text_0, MSGBOX_YESNO
# 1466 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R5_2
# 1471 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R5, ParcelFloodbasin_Sturla_R5_Text_1
# 1472 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R5_Text_2, MSGBOX_DEFAULT
# 1473 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R5_2:
# 1467 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1468 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar::
# 1477 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_OSKAR, ParcelFloodbasin_Oskar_Text_0, ParcelFloodbasin_Oskar_Text_1, ParcelFloodbasin_Oskar_FirstWin
# 1481 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1482 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Oskar_3
ParcelFloodbasin_Oskar_1:
# 1485 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Oskar_8
ParcelFloodbasin_Oskar_6:
# 1488 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Oskar_13
ParcelFloodbasin_Oskar_11:
# 1491 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Oskar_18
ParcelFloodbasin_Oskar_16:
# 1494 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Oskar_2:
# 1483 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R2
	goto ParcelFloodbasin_Oskar_1

ParcelFloodbasin_Oskar_3:
# 1482 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R2
	goto_if 0, ParcelFloodbasin_Oskar_2
	goto ParcelFloodbasin_Oskar_1

ParcelFloodbasin_Oskar_7:
# 1486 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R3
	goto ParcelFloodbasin_Oskar_6

ParcelFloodbasin_Oskar_8:
# 1485 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R3
	goto_if 0, ParcelFloodbasin_Oskar_7
	goto ParcelFloodbasin_Oskar_6

ParcelFloodbasin_Oskar_12:
# 1489 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R4
	goto ParcelFloodbasin_Oskar_11

ParcelFloodbasin_Oskar_13:
# 1488 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R4
	goto_if 0, ParcelFloodbasin_Oskar_12
	goto ParcelFloodbasin_Oskar_11

ParcelFloodbasin_Oskar_17:
# 1492 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R5
	goto ParcelFloodbasin_Oskar_16

ParcelFloodbasin_Oskar_18:
# 1491 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R5
	goto_if 0, ParcelFloodbasin_Oskar_17
	goto ParcelFloodbasin_Oskar_16


ParcelFloodbasin_Oskar_FirstWin::
# 1498 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_Text_2, MSGBOX_DEFAULT
# 1499 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R2::
# 1503 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1504 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1505 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_0, MSGBOX_YESNO
# 1506 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R2_2
# 1511 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R2, ParcelFloodbasin_Oskar_R2_Text_2
# 1512 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_3, MSGBOX_DEFAULT
# 1513 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R2_2:
# 1507 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1508 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R3::
# 1517 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1518 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1519 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R3_Text_0, MSGBOX_YESNO
# 1520 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R3_2
# 1525 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R3, ParcelFloodbasin_Oskar_R3_Text_1
# 1526 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R3_Text_2, MSGBOX_DEFAULT
# 1527 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R3_2:
# 1521 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1522 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R4::
# 1531 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1532 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1533 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R4_Text_0, MSGBOX_YESNO
# 1534 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R4_2
# 1539 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R4, ParcelFloodbasin_Oskar_R4_Text_1
# 1540 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R4_Text_2, MSGBOX_DEFAULT
# 1541 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R4_2:
# 1535 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1536 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R5::
# 1545 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1546 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1547 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R5_Text_0, MSGBOX_YESNO
# 1548 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R5_2
# 1553 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R5, ParcelFloodbasin_Oskar_R3_Text_1
# 1554 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R5_Text_1, MSGBOX_DEFAULT
# 1555 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R5_2:
# 1549 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1550 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_ItemRevive::
# 1560 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_REVIVE
	end


ParcelFloodbasin_ItemSuperPotion::
# 1561 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelFloodbasin_ItemGreatBall::
# 1562 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelFloodbasin_SignHamlet::
# 1565 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SignHamlet_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Checkpoint::
# 1573 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ParcelFloodbasin_Checkpoint_2
# 1577 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 1578 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_0, MSGBOX_DEFAULT
# 1579 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 1580 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 6, Movement_FLD_BreenApproach
# 1581 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 1582 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_FLD_FaceLeft
# 1583 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 1584 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_1, MSGBOX_DEFAULT
# 1585 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM3, ParcelFloodbasin_Checkpoint_Text_2
# 1586 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_BADGE03_GET
# 1587 "data/maps/ParcelFloodbasin/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 1588 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_3, MSGBOX_DEFAULT
# 1589 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_HM06
# 1590 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_4, MSGBOX_DEFAULT
# 1591 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 1592 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 6, Movement_FLD_BreenAside
# 1593 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 1594 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_4, 1
# 1595 "data/maps/ParcelFloodbasin/scripts.pory"
	releaseall
	end

ParcelFloodbasin_Checkpoint_2:
# 1574 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_4, 1
	end


ParcelFloodbasin_GymBreen::
# 1599 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1600 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1601 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_GymBreen_2
ParcelFloodbasin_GymBreen_1:
# 1604 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Text_0, MSGBOX_DEFAULT
# 1605 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_GymBreen_2:
# 1602 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_GymBreen_Rematch
	goto ParcelFloodbasin_GymBreen_1


# 1608 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_BreenApproach:
# 1608 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_right
# 1608 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_right
	step_end

# 1609 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_BreenAside:
# 1609 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 1609 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 1609 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 1609 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_down
# 1609 "data/maps/ParcelFloodbasin/scripts.pory"
	face_up
	step_end

# 1610 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_FaceLeft:
# 1610 "data/maps/ParcelFloodbasin/scripts.pory"
	face_left
	step_end

ParcelFloodbasin_T_Anders::
# 1614 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ANDERS, ParcelFloodbasin_T_Anders_Text_0, ParcelFloodbasin_T_Anders_Text_1, ParcelFloodbasin_T_Anders_FirstWin
# 1618 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1619 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_T_Anders_3
ParcelFloodbasin_T_Anders_1:
# 1622 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_T_Anders_8
ParcelFloodbasin_T_Anders_6:
# 1625 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_T_Anders_13
ParcelFloodbasin_T_Anders_11:
# 1628 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_T_Anders_18
ParcelFloodbasin_T_Anders_16:
# 1631 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_T_Anders_2:
# 1620 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R2
	goto ParcelFloodbasin_T_Anders_1

ParcelFloodbasin_T_Anders_3:
# 1619 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R2
	goto_if 0, ParcelFloodbasin_T_Anders_2
	goto ParcelFloodbasin_T_Anders_1

ParcelFloodbasin_T_Anders_7:
# 1623 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R3
	goto ParcelFloodbasin_T_Anders_6

ParcelFloodbasin_T_Anders_8:
# 1622 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R3
	goto_if 0, ParcelFloodbasin_T_Anders_7
	goto ParcelFloodbasin_T_Anders_6

ParcelFloodbasin_T_Anders_12:
# 1626 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R4
	goto ParcelFloodbasin_T_Anders_11

ParcelFloodbasin_T_Anders_13:
# 1625 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R4
	goto_if 0, ParcelFloodbasin_T_Anders_12
	goto ParcelFloodbasin_T_Anders_11

ParcelFloodbasin_T_Anders_17:
# 1629 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R5
	goto ParcelFloodbasin_T_Anders_16

ParcelFloodbasin_T_Anders_18:
# 1628 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R5
	goto_if 0, ParcelFloodbasin_T_Anders_17
	goto ParcelFloodbasin_T_Anders_16


ParcelFloodbasin_T_Anders_FirstWin::
# 1635 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_Text_2, MSGBOX_DEFAULT
# 1636 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R2::
# 1640 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1641 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1642 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_0, MSGBOX_YESNO
# 1643 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R2_2
# 1648 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R2, ParcelFloodbasin_T_Anders_R2_Text_2
# 1649 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_3, MSGBOX_DEFAULT
# 1650 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R2_2:
# 1644 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1645 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R3::
# 1654 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1655 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1656 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R3_Text_0, MSGBOX_YESNO
# 1657 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R3_2
# 1662 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R3, ParcelFloodbasin_T_Anders_R3_Text_1
# 1663 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R3_Text_2, MSGBOX_DEFAULT
# 1664 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R3_2:
# 1658 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1659 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R4::
# 1668 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1669 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1670 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R4_Text_0, MSGBOX_YESNO
# 1671 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R4_2
# 1676 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R4, ParcelFloodbasin_T_Anders_R4_Text_1
# 1677 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R4_Text_2, MSGBOX_DEFAULT
# 1678 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R4_2:
# 1672 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1673 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R5::
# 1682 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1683 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1684 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R5_Text_0, MSGBOX_YESNO
# 1685 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R5_2
# 1690 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R5, ParcelFloodbasin_T_Anders_R4_Text_1
# 1691 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R5_Text_1, MSGBOX_DEFAULT
# 1692 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R5_2:
# 1686 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1687 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald::
# 1696 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ROALD, ParcelFloodbasin_T_Roald_Text_0, ParcelFloodbasin_T_Roald_Text_1, ParcelFloodbasin_T_Roald_FirstWin
# 1700 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1701 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_T_Roald_3
ParcelFloodbasin_T_Roald_1:
# 1704 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_T_Roald_8
ParcelFloodbasin_T_Roald_6:
# 1707 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_T_Roald_13
ParcelFloodbasin_T_Roald_11:
# 1710 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_T_Roald_18
ParcelFloodbasin_T_Roald_16:
# 1713 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_T_Roald_2:
# 1702 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R2
	goto ParcelFloodbasin_T_Roald_1

ParcelFloodbasin_T_Roald_3:
# 1701 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R2
	goto_if 0, ParcelFloodbasin_T_Roald_2
	goto ParcelFloodbasin_T_Roald_1

ParcelFloodbasin_T_Roald_7:
# 1705 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R3
	goto ParcelFloodbasin_T_Roald_6

ParcelFloodbasin_T_Roald_8:
# 1704 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R3
	goto_if 0, ParcelFloodbasin_T_Roald_7
	goto ParcelFloodbasin_T_Roald_6

ParcelFloodbasin_T_Roald_12:
# 1708 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R4
	goto ParcelFloodbasin_T_Roald_11

ParcelFloodbasin_T_Roald_13:
# 1707 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R4
	goto_if 0, ParcelFloodbasin_T_Roald_12
	goto ParcelFloodbasin_T_Roald_11

ParcelFloodbasin_T_Roald_17:
# 1711 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R5
	goto ParcelFloodbasin_T_Roald_16

ParcelFloodbasin_T_Roald_18:
# 1710 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R5
	goto_if 0, ParcelFloodbasin_T_Roald_17
	goto ParcelFloodbasin_T_Roald_16


ParcelFloodbasin_T_Roald_FirstWin::
# 1717 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_Text_2, MSGBOX_DEFAULT
# 1718 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R2::
# 1722 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1723 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1724 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_0, MSGBOX_YESNO
# 1725 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R2_2
# 1730 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R2, ParcelFloodbasin_T_Roald_R2_Text_2
# 1731 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_3, MSGBOX_DEFAULT
# 1732 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R2_2:
# 1726 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1727 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R3::
# 1736 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1737 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1738 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R3_Text_0, MSGBOX_YESNO
# 1739 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R3_2
# 1744 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R3, ParcelFloodbasin_T_Roald_R2_Text_2
# 1745 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R3_Text_1, MSGBOX_DEFAULT
# 1746 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R3_2:
# 1740 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1741 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R4::
# 1750 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1751 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1752 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R4_Text_0, MSGBOX_YESNO
# 1753 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R4_2
# 1758 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R4, ParcelFloodbasin_T_Roald_R4_Text_1
# 1759 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R4_Text_2, MSGBOX_DEFAULT
# 1760 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R4_2:
# 1754 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1755 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R5::
# 1764 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1765 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1766 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R5_Text_0, MSGBOX_YESNO
# 1767 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R5_2
# 1772 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R5, ParcelFloodbasin_T_Roald_R5_Text_1
# 1773 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R5_Text_2, MSGBOX_DEFAULT
# 1774 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R5_2:
# 1768 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1769 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein::
# 1778 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_STEIN, ParcelFloodbasin_T_Stein_Text_0, ParcelFloodbasin_T_Stein_Text_1, ParcelFloodbasin_T_Stein_FirstWin
# 1782 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1783 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_T_Stein_3
ParcelFloodbasin_T_Stein_1:
# 1786 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_T_Stein_8
ParcelFloodbasin_T_Stein_6:
# 1789 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_T_Stein_13
ParcelFloodbasin_T_Stein_11:
# 1792 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_T_Stein_18
ParcelFloodbasin_T_Stein_16:
# 1795 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_T_Stein_2:
# 1784 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R2
	goto ParcelFloodbasin_T_Stein_1

ParcelFloodbasin_T_Stein_3:
# 1783 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R2
	goto_if 0, ParcelFloodbasin_T_Stein_2
	goto ParcelFloodbasin_T_Stein_1

ParcelFloodbasin_T_Stein_7:
# 1787 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R3
	goto ParcelFloodbasin_T_Stein_6

ParcelFloodbasin_T_Stein_8:
# 1786 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R3
	goto_if 0, ParcelFloodbasin_T_Stein_7
	goto ParcelFloodbasin_T_Stein_6

ParcelFloodbasin_T_Stein_12:
# 1790 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R4
	goto ParcelFloodbasin_T_Stein_11

ParcelFloodbasin_T_Stein_13:
# 1789 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R4
	goto_if 0, ParcelFloodbasin_T_Stein_12
	goto ParcelFloodbasin_T_Stein_11

ParcelFloodbasin_T_Stein_17:
# 1793 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R5
	goto ParcelFloodbasin_T_Stein_16

ParcelFloodbasin_T_Stein_18:
# 1792 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R5
	goto_if 0, ParcelFloodbasin_T_Stein_17
	goto ParcelFloodbasin_T_Stein_16


ParcelFloodbasin_T_Stein_FirstWin::
# 1799 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_Text_2, MSGBOX_DEFAULT
# 1800 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R2::
# 1804 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1805 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1806 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_0, MSGBOX_YESNO
# 1807 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R2_2
# 1812 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R2, ParcelFloodbasin_T_Stein_R2_Text_2
# 1813 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_3, MSGBOX_DEFAULT
# 1814 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R2_2:
# 1808 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1809 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R3::
# 1818 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1819 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1820 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R3_Text_0, MSGBOX_YESNO
# 1821 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R3_2
# 1826 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R3, ParcelFloodbasin_T_Stein_R3_Text_1
# 1827 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R3_Text_2, MSGBOX_DEFAULT
# 1828 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R3_2:
# 1822 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1823 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R4::
# 1832 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1833 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1834 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R4_Text_0, MSGBOX_YESNO
# 1835 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R4_2
# 1840 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R4, ParcelFloodbasin_T_Stein_R3_Text_1
# 1841 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R4_Text_1, MSGBOX_DEFAULT
# 1842 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R4_2:
# 1836 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1837 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R5::
# 1846 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1847 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1848 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R5_Text_0, MSGBOX_YESNO
# 1849 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R5_2
# 1854 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R5, ParcelFloodbasin_T_Stein_R5_Text_1
# 1855 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R5_Text_2, MSGBOX_DEFAULT
# 1856 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R5_2:
# 1850 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1851 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Epilogue::
# 1862 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 1863 "data/maps/ParcelFloodbasin/scripts.pory"
	delay 20
# 1864 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Epilogue_Text_0, MSGBOX_DEFAULT
# 1865 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 1866 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 3
# 1867 "data/maps/ParcelFloodbasin/scripts.pory"
	warp MAP_PARCEL_RIVER, 16, 30
# 1868 "data/maps/ParcelFloodbasin/scripts.pory"
	waitstate
	end


ParcelFloodbasin_GymBreen_Rematch::
# 1874 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1875 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1876 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Rematch_Text_0, MSGBOX_YESNO
# 1877 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_GymBreen_Rematch_2
# 1882 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM3_R, ParcelFloodbasin_GymBreen_Rematch_Text_2
# 1883 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Rematch_Text_3, MSGBOX_DEFAULT
# 1884 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_GymBreen_Rematch_2:
# 1878 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Rematch_Text_1, MSGBOX_DEFAULT
# 1879 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_TarpRoof::
# 1889 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_ROOF, ParcelFloodbasin_TarpRoof_2
# 1892 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_TarpRoof_Text_0, MSGBOX_SIGN
# 1893 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_ROOF_FOUND
	end

ParcelFloodbasin_TarpRoof_2:
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
	.string "MRS. ASKE: They came Tuesday. Not\n"
	.string "Thursday. Tuesday. Eleven years and it\l"
	.string "took a stranger looking at a tarp.$"

ParcelFloodbasin_VilOldWoman_Text_1:
# 152 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: You looked? Then go and tell\n"
	.string "the aide you looked. Say it like you\l"
	.string "mean to write it down. They move faster\l"
	.string "for the writing down.$"

ParcelFloodbasin_VilOldWoman_Text_2:
# 157 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: The house behind the third\n"
	.string "one, dear. Blue tarp. You can't miss it.\l"
	.string "Everyone misses it.$"

ParcelFloodbasin_VilOldWoman_Text_3:
# 162 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: Thursday, he said. It's been\n"
	.string "four Thursdays. The tarp's on the house\l"
	.string "behind the third one.\p"
	.string "Go and look at it, dear. And then go and\n"
	.string "tell the aide you looked.$"

ParcelFloodbasin_VilOldWoman_Text_4:
# 168 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: He knows my name. He said it\n"
	.string "at the hearing, into a microphone, as an\l"
	.string "example of local partnership. Eleven\l"
	.string "years, and I was an example.$"

ParcelFloodbasin_VilOldWoman_Text_5:
# 173 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: He knows my name. Eleven\n"
	.string "years on the Council and he knows my\l"
	.string "name.\p"
	.string "The CORPS man before you didn't. I'm not\n"
	.string "saying that to be unkind.$"

ParcelFloodbasin_VilOldWoman_Text_6:
# 177 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: Wait your turn, dear. We've\n"
	.string "all been flooded.$"

ParcelFloodbasin_VilMan_Text_0:
# 185 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three floods, three times the\n"
	.string "vouchers, and the water still comes up\l"
	.string "brown. Your paper says why. In the\l"
	.string "hearing they read the why aloud. The\l"
	.string "water didn't change colour. I did.$"

ParcelFloodbasin_VilMan_Text_1:
# 189 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three floods. Three times the\n"
	.string "vouchers. Nobody's asked why the water\l"
	.string "comes up brown now.\p"
	.string "I asked. I got vouchers.$"

ParcelFloodbasin_VilGirl_Text_0:
# 197 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: The WOOPER with the wrong feet is\n"
	.string "still in the puddle. A CORPS lady came\l"
	.string "and drew it. She said it's in a report\l"
	.string "now. It doesn't know. It's a WOOPER.$"

ParcelFloodbasin_VilGirl_Text_1:
# 201 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: My brother found a WOOPER with\n"
	.string "the wrong feet. Gran made him put it\l"
	.string "back. It didn't go anywhere. It just\l"
	.string "sat.$"

ParcelFloodbasin_VilFisher_Text_0:
# 209 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: Does writing fix anything, I\n"
	.string "asked you. The vouchers are still\l"
	.string "stopped. The boat's still stopped. But a\l"
	.string "Board man came and measured the water\l"
	.string "instead of telling me about it. Writing\l"
	.string "did that.$"

ParcelFloodbasin_VilFisher_Text_1:
# 214 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: Vouchers stopped. Boat\n"
	.string "stopped. Water's the same.\p"
	.string "Your lot wrote something down, I hear.\n"
	.string "Does writing it down dry anything out?$"

ParcelFloodbasin_VilFisher_Text_2:
# 218 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: I don't fish the lake anymore. I\n"
	.string "fish the top lake, past the bridge. The\l"
	.string "water's clearer up there.\p"
	.string "Clearer. Not clear.$"

ParcelFloodbasin_Discharge_Text_0:
# 230 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The discharge pipe. In the notebook.$"

ParcelFloodbasin_Discharge_Text_1:
# 234 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A concrete pipe in the bank, mouth\n"
	.string "fouled with brown crust. Stamped:\l"
	.string "DISCHARGE -- AUTHORIZED USE ONLY.\p"
	.string "The authorization is decades old. The\n"
	.string "crust is fresher than that. Written\l"
	.string "down.$"

ParcelFloodbasin_Sheen_Text_0:
# 245 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The sheen. In the notebook.$"

ParcelFloodbasin_Sheen_Text_1:
# 249 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A faint iridescence crawls on the lake,\n"
	.string "bending the rain wrong.\p"
	.string "It is not new. The cattails downstream\n"
	.string "carry the same stain at their bases.\l"
	.string "Written down.$"

ParcelFloodbasin_DeadReeds_Text_0:
# 260 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The dead reed band. Photographed.$"

ParcelFloodbasin_DeadReeds_Text_1:
# 264 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A band of dead reeds along the bank,\n"
	.string "straw-pale. The reeds above and below\l"
	.string "it are fine.\p"
	.string "The kill line is exactly the height of\n"
	.string "the flood six months ago. Written down.$"

ParcelFloodbasin_DeformedWooper_Text_0:
# 276 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A WOOPER, low in the puddle. Two left\n"
	.string "feet.\p"
	.string "It doesn't flinch. It has been like this\n"
	.string "since it hatched, and that was recent.\l"
	.string "Written down.$"

ParcelFloodbasin_SickKarp_Text_0:
# 285 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A grown MAGIKARP lists against the\n"
	.string "bridge piling, scales greying.\p"
	.string "It was never in the pipe. It was at the\n"
	.string "top of the food web. Poison climbs.\l"
	.string "Written down.$"

ParcelFloodbasin_BoothSign_Text_0:
# 292 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MEREHOLT FOUNDATION COMMUNITY\n"
	.string "OUTREACH\p"
	.string "Remediation underway. Please report\n"
	.string "concerns to your local representative.\p"
	.string "The paint is wet from the rain. The sign\n"
	.string "is older.$"

ParcelFloodbasin_Remediator_Text_0:
# 303 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Write up whatever you write up.$"

ParcelFloodbasin_Remediator_Text_1:
# 307 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Oh. RANGER! Welcome to the active\n"
	.string "remediation site.\p"
	.string "We've been at it… some time now. The\n"
	.string "FOUNDATION does great work.$"

ParcelFloodbasin_Remediator_Text_2:
# 308 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: When was the last reading?$"

ParcelFloodbasin_Remediator_Text_3:
# 309 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: …A quarter or two. We're due.$"

ParcelFloodbasin_Remediator_Text_4:
# 310 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: The councilman said you'd\n"
	.string "have the remediation file for me.$"

ParcelFloodbasin_Remediator_Text_5:
# 311 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Did he. Well. It's at the office.\n"
	.string "The coast office.$"

ParcelFloodbasin_Remediator_Text_6:
# 312 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: Who signed off on the\n"
	.string "discharge stamp on that pipe?$"

ParcelFloodbasin_Remediator_Text_7:
# 313 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: You'd have to ask the office. I\n"
	.string "just check the boxes.$"

ParcelFloodbasin_Remediator_Text_8:
# 314 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: I'm asking. The WOOPER has\n"
	.string "two left feet.$"

ParcelFloodbasin_Remediator_Text_9:
# 317 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Move along, RANGER. This isn't\n"
	.string "your patch.$"

ParcelFloodbasin_Remediator_Text_10:
# 319 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Tch. Fine. We'll do this the loud\n"
	.string "way.$"

ParcelFloodbasin_Remediator_Text_11:
# 320 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Hmph.$"

ParcelFloodbasin_Remediator_Text_12:
# 321 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Write up whatever you write up.\p"
	.string "This basin ran sick before you got here.\n"
	.string "It'll run sick after.$"

ParcelFloodbasin_BasinKidTrainer_Text_0:
# 330 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Gran fishes here. Used to. Wanna\n"
	.string "battle?$"

ParcelFloodbasin_BasinKidTrainer_Text_1:
# 331 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Ohh. You're good!$"

ParcelFloodbasin_BasinKidTrainer_Text_2:
# 346 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: She doesn't eat what she\n"
	.string "catches anymore. Sells it to the people\l"
	.string "who don't ask.$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_0:
# 357 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_1:
# 359 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Another time, then.$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_2:
# 363 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: That's the one I wanted to see.$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_3:
# 364 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_BasinKidTrainer_R3_Text_0:
# 371 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_BasinKidTrainer_R3_Text_1:
# 377 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Noted. Properly, this time.$"

ParcelFloodbasin_BasinKidTrainer_R3_Text_2:
# 378 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_BasinKidTrainer_R4_Text_0:
# 385 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasin_BasinKidTrainer_R4_Text_1:
# 391 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Still yours.$"

ParcelFloodbasin_BasinKidTrainer_R4_Text_2:
# 392 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_BasinKidTrainer_R5_Text_0:
# 399 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelFloodbasin_BasinKidTrainer_R5_Text_1:
# 406 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Arve_Text_0:
# 412 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: The DUSTOX here have spots in\n"
	.string "the wrong places. I've been drawing\l"
	.string "them. Battle first.$"

ParcelFloodbasin_Arve_Text_1:
# 413 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Drawn and beaten.$"

ParcelFloodbasin_Arve_Text_2:
# 428 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Wrong spots, extra spots, no\n"
	.string "spots. All in the same field. My teacher\l"
	.string "says that's just variety.$"

ParcelFloodbasin_Arve_R2_Text_0:
# 439 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_Arve_R2_Text_1:
# 441 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: No hurry. The water keeps.$"

ParcelFloodbasin_Arve_R2_Text_2:
# 445 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: That's the one I wanted to see.$"

ParcelFloodbasin_Arve_R2_Text_3:
# 446 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Arve_R3_Text_0:
# 453 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasin_Arve_R3_Text_1:
# 459 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Still yours.$"

ParcelFloodbasin_Arve_R3_Text_2:
# 460 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Arve_R4_Text_0:
# 467 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelFloodbasin_Arve_R4_Text_1:
# 474 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Arve_R5_Text_0:
# 481 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasin_Arve_R5_Text_1:
# 487 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Noted. Properly, this time.$"

ParcelFloodbasin_Arve_R5_Text_2:
# 488 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFloodbasin_Kai_Text_0:
# 494 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Nobody sees me in the tall grass.\n"
	.string "Nobody except you, apparently.$"

ParcelFloodbasin_Kai_Text_1:
# 495 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Seen and beaten.$"

ParcelFloodbasin_Kai_Text_2:
# 510 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: The grass by the top lake is the\n"
	.string "tallest. It's also the only grass that\l"
	.string "smells like that.$"

ParcelFloodbasin_Kai_R2_Text_0:
# 521 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelFloodbasin_Kai_R2_Text_1:
# 523 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Suit yourself. I'm here.$"

ParcelFloodbasin_Kai_R2_Text_2:
# 527 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: …Fair.$"

ParcelFloodbasin_Kai_R2_Text_3:
# 528 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Kai_R3_Text_0:
# 535 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_Kai_R3_Text_1:
# 541 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Right. That's the whole of it.$"

ParcelFloodbasin_Kai_R3_Text_2:
# 542 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Kai_R4_Text_0:
# 549 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFloodbasin_Kai_R4_Text_1:
# 555 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: That's the one I wanted to see.$"

ParcelFloodbasin_Kai_R4_Text_2:
# 556 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_Kai_R5_Text_0:
# 563 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Last one. I've put everything I've\n"
	.string "got into this team. Go?$"

ParcelFloodbasin_Kai_R5_Text_1:
# 569 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Still yours.$"

ParcelFloodbasin_Kai_R5_Text_2:
# 570 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFloodbasin_Signe_Text_0:
# 576 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: A picnic in the rain is still a\n"
	.string "picnic. A battle in the rain is still a\l"
	.string "battle.$"

ParcelFloodbasin_Signe_Text_1:
# 577 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Soggy on both counts.$"

ParcelFloodbasin_Signe_Text_2:
# 592 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: I don't let my MARILL in the\n"
	.string "lower lake. It came out itchy once. Just\l"
	.string "once was enough.$"

ParcelFloodbasin_Signe_R2_Text_0:
# 603 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasin_Signe_R2_Text_1:
# 605 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFloodbasin_Signe_R2_Text_2:
# 609 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Noted. Properly, this time.$"

ParcelFloodbasin_Signe_R2_Text_3:
# 610 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Signe_R3_Text_0:
# 617 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelFloodbasin_Signe_R3_Text_1:
# 623 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: …Fair.$"

ParcelFloodbasin_Signe_R3_Text_2:
# 624 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Signe_R4_Text_0:
# 631 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasin_Signe_R4_Text_1:
# 638 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Signe_R5_Text_0:
# 645 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFloodbasin_Signe_R5_Text_1:
# 651 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Still yours.$"

ParcelFloodbasin_Signe_R5_Text_2:
# 652 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Leif_Text_0:
# 658 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I camp on the high ground. The low\n"
	.string "ground floods. Everybody knows.\l"
	.string "Battle?$"

ParcelFloodbasin_Leif_Text_1:
# 659 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Should've camped higher.$"

ParcelFloodbasin_Leif_Text_2:
# 674 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Every year the high ground's a bit\n"
	.string "higher. The water, I mean. Not the\l"
	.string "ground.$"

ParcelFloodbasin_Leif_R2_Text_0:
# 685 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_Leif_R2_Text_1:
# 687 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Another time, then.$"

ParcelFloodbasin_Leif_R2_Text_2:
# 691 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Still yours.$"

ParcelFloodbasin_Leif_R2_Text_3:
# 692 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Leif_R3_Text_0:
# 699 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasin_Leif_R3_Text_1:
# 705 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: …Again, then. Later.$"

ParcelFloodbasin_Leif_R3_Text_2:
# 706 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Leif_R4_Text_0:
# 713 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelFloodbasin_Leif_R4_Text_1:
# 719 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Noted. Properly, this time.$"

ParcelFloodbasin_Leif_R4_Text_2:
# 720 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Leif_R5_Text_0:
# 727 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFloodbasin_Leif_R5_Text_1:
# 734 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasin_Truls_Text_0:
# 740 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: You walked right into my sight\n"
	.string "line. Rookie.$"

ParcelFloodbasin_Truls_Text_1:
# 741 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: …Not a rookie.$"

ParcelFloodbasin_Truls_Text_2:
# 756 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: The councilman's boat goes past\n"
	.string "twice a day. Nobody's ever asked what it\l"
	.string "brings back.$"

ParcelFloodbasin_Truls_R2_Text_0:
# 767 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_Truls_R2_Text_1:
# 769 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Suit yourself. I'm here.$"

ParcelFloodbasin_Truls_R2_Text_2:
# 773 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Right. That's the whole of it.$"

ParcelFloodbasin_Truls_R2_Text_3:
# 774 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Truls_R3_Text_0:
# 781 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_Truls_R3_Text_1:
# 787 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: That's the one I wanted to see.$"

ParcelFloodbasin_Truls_R3_Text_2:
# 788 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Truls_R4_Text_0:
# 795 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Truls_R4_Text_1:
# 801 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Still yours.$"

ParcelFloodbasin_Truls_R4_Text_2:
# 802 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Truls_R5_Text_0:
# 809 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFloodbasin_Truls_R5_Text_1:
# 815 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Noted. Properly, this time.$"

ParcelFloodbasin_Truls_R5_Text_2:
# 816 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Halvor_Text_0:
# 822 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: The pond's got a boardwalk\n"
	.string "because the pond used to be a field.\l"
	.string "Think about that. Then battle me.$"

ParcelFloodbasin_Halvor_Text_1:
# 823 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Thought about it, did you.$"

ParcelFloodbasin_Halvor_Text_2:
# 838 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: My father planted this field. I\n"
	.string "fish it. That's the basin in one family.$"

ParcelFloodbasin_Halvor_R2_Text_0:
# 849 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_Halvor_R2_Text_1:
# 851 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Fine. Same spot.$"

ParcelFloodbasin_Halvor_R2_Text_2:
# 855 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: …Again, then. Later.$"

ParcelFloodbasin_Halvor_R2_Text_3:
# 856 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasin_Halvor_R3_Text_0:
# 863 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasin_Halvor_R3_Text_1:
# 869 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: That's the one I wanted to see.$"

ParcelFloodbasin_Halvor_R3_Text_2:
# 870 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Halvor_R4_Text_0:
# 877 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Halvor_R4_Text_1:
# 884 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasin_Halvor_R5_Text_0:
# 891 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFloodbasin_Halvor_R5_Text_1:
# 897 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Still yours.$"

ParcelFloodbasin_Halvor_R5_Text_2:
# 898 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Maja_Text_0:
# 904 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The puddles never dry out here\n"
	.string "anymore. My MARILL loves it. I don't.\l"
	.string "Battle!$"

ParcelFloodbasin_Maja_Text_1:
# 905 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: MARILL still loves it.$"

ParcelFloodbasin_Maja_Text_2:
# 920 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The puddles have a shine on them\n"
	.string "in the morning. Rainbow colours. Gran\l"
	.string "says don't look at it too long.$"

ParcelFloodbasin_Maja_R2_Text_0:
# 931 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasin_Maja_R2_Text_1:
# 933 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Fine. Same spot.$"

ParcelFloodbasin_Maja_R2_Text_2:
# 937 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: That's the one I wanted to see.$"

ParcelFloodbasin_Maja_R2_Text_3:
# 938 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Maja_R3_Text_0:
# 945 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_Maja_R3_Text_1:
# 951 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Still yours.$"

ParcelFloodbasin_Maja_R3_Text_2:
# 952 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Maja_R4_Text_0:
# 959 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFloodbasin_Maja_R4_Text_1:
# 965 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: …Fair.$"

ParcelFloodbasin_Maja_R4_Text_2:
# 966 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Maja_R5_Text_0:
# 973 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasin_Maja_R5_Text_1:
# 979 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: …Again, then. Later.$"

ParcelFloodbasin_Maja_R5_Text_2:
# 980 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasin_Bjorn_Text_0:
# 986 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: The pump house door's open\n"
	.string "again. I didn't open it. Did you? Battle\l"
	.string "me and we'll call it even.$"

ParcelFloodbasin_Bjorn_Text_1:
# 987 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Even, then.$"

ParcelFloodbasin_Bjorn_Text_2:
# 1002 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: MEREHOLT pumped this whole\n"
	.string "basin for twenty years. Then they\l"
	.string "stopped. Then the water came back.\l"
	.string "Then the smell.$"

ParcelFloodbasin_Bjorn_R2_Text_0:
# 1013 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasin_Bjorn_R2_Text_1:
# 1015 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Another time, then.$"

ParcelFloodbasin_Bjorn_R2_Text_2:
# 1019 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: …Fair.$"

ParcelFloodbasin_Bjorn_R2_Text_3:
# 1020 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Bjorn_R3_Text_0:
# 1027 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_Bjorn_R3_Text_1:
# 1033 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Noted. Properly, this time.$"

ParcelFloodbasin_Bjorn_R3_Text_2:
# 1034 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Bjorn_R4_Text_0:
# 1041 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasin_Bjorn_R4_Text_1:
# 1047 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Right. That's the whole of it.$"

ParcelFloodbasin_Bjorn_R4_Text_2:
# 1048 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Bjorn_R5_Text_0:
# 1055 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFloodbasin_Bjorn_R5_Text_1:
# 1062 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Solveig_Text_0:
# 1068 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Cadet SOLVEIG. HALE said a\n"
	.string "provisional would come through. Spar.\l"
	.string "Then I'll tell you where the stakes are.$"

ParcelFloodbasin_Solveig_Text_1:
# 1069 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Good. The stakes.$"

ParcelFloodbasin_Solveig_Text_2:
# 1084 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Red cloth stakes are ours. The\n"
	.string "bare ones are the FOUNDATION's. They\l"
	.string "put theirs on the clean bank. We put\l"
	.string "ours where the water is.$"

ParcelFloodbasin_Solveig_R2_Text_0:
# 1095 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelFloodbasin_Solveig_R2_Text_1:
# 1097 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Fine. Same spot.$"

ParcelFloodbasin_Solveig_R2_Text_2:
# 1101 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Noted. Properly, this time.$"

ParcelFloodbasin_Solveig_R2_Text_3:
# 1102 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelFloodbasin_Solveig_R3_Text_0:
# 1109 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelFloodbasin_Solveig_R3_Text_1:
# 1115 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: …Again, then. Later.$"

ParcelFloodbasin_Solveig_R3_Text_2:
# 1116 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelFloodbasin_Solveig_R4_Text_0:
# 1123 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelFloodbasin_Solveig_R4_Text_1:
# 1129 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: …Fair.$"

ParcelFloodbasin_Solveig_R4_Text_2:
# 1130 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasin_Solveig_R5_Text_0:
# 1137 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelFloodbasin_Solveig_R5_Text_1:
# 1144 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Nils_Text_0:
# 1150 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: The north meadow's the only dry\n"
	.string "bit. Everyone comes up here. Everyone\l"
	.string "battles.$"

ParcelFloodbasin_Nils_Text_1:
# 1151 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Everyone loses to you,\n"
	.string "apparently.$"

ParcelFloodbasin_Nils_Text_2:
# 1166 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: My WURMPLE won't eat the reeds\n"
	.string "from the low ground. Only the high. I\l"
	.string "thought they ate anything.$"

ParcelFloodbasin_Nils_R2_Text_0:
# 1177 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelFloodbasin_Nils_R2_Text_1:
# 1179 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Another time, then.$"

ParcelFloodbasin_Nils_R2_Text_2:
# 1183 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: …Again, then. Later.$"

ParcelFloodbasin_Nils_R2_Text_3:
# 1184 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Nils_R3_Text_0:
# 1191 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelFloodbasin_Nils_R3_Text_1:
# 1197 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: That's the one I wanted to see.$"

ParcelFloodbasin_Nils_R3_Text_2:
# 1198 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Nils_R4_Text_0:
# 1205 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Nils_R4_Text_1:
# 1212 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_Nils_R5_Text_0:
# 1219 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasin_Nils_R5_Text_1:
# 1225 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Noted. Properly, this time.$"

ParcelFloodbasin_Nils_R5_Text_2:
# 1226 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasin_Rannveig_Text_0:
# 1232 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: My GLOOM smells better than\n"
	.string "the basin does. That's a low bar.\l"
	.string "Battle?$"

ParcelFloodbasin_Rannveig_Text_1:
# 1233 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Still smells better.$"

ParcelFloodbasin_Rannveig_Text_2:
# 1248 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: The road north is a haul road.\n"
	.string "Trucks come down it at night. Nobody's\l"
	.string "told us what they haul.$"

ParcelFloodbasin_Rannveig_R2_Text_0:
# 1259 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_Rannveig_R2_Text_1:
# 1261 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Fine. Same spot.$"

ParcelFloodbasin_Rannveig_R2_Text_2:
# 1265 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Still yours.$"

ParcelFloodbasin_Rannveig_R2_Text_3:
# 1266 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasin_Rannveig_R3_Text_0:
# 1273 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelFloodbasin_Rannveig_R3_Text_1:
# 1279 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: That's the one I wanted to\n"
	.string "see.$"

ParcelFloodbasin_Rannveig_R3_Text_2:
# 1280 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: One more in me. After the\n"
	.string "high ground.$"

ParcelFloodbasin_Rannveig_R4_Text_0:
# 1287 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelFloodbasin_Rannveig_R4_Text_1:
# 1294 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Rannveig_R5_Text_0:
# 1301 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: After everything, one more.\n"
	.string "For the ledger. Yes?$"

ParcelFloodbasin_Rannveig_R5_Text_1:
# 1307 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Noted. Properly, this time.$"

ParcelFloodbasin_Rannveig_R5_Text_2:
# 1308 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Einar_Text_0:
# 1314 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: My MIGHTYENA's the strongest\n"
	.string "thing in the basin. Prove me wrong.$"

ParcelFloodbasin_Einar_Text_1:
# 1315 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: …Proved.$"

ParcelFloodbasin_Einar_Text_2:
# 1330 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Strongest thing in the basin.\n"
	.string "Not saying much, these days.$"

ParcelFloodbasin_Einar_R2_Text_0:
# 1341 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasin_Einar_R2_Text_1:
# 1343 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Suit yourself. I'm here.$"

ParcelFloodbasin_Einar_R2_Text_2:
# 1347 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: …Again, then. Later.$"

ParcelFloodbasin_Einar_R2_Text_3:
# 1348 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Einar_R3_Text_0:
# 1355 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelFloodbasin_Einar_R3_Text_1:
# 1362 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Einar_R4_Text_0:
# 1369 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasin_Einar_R4_Text_1:
# 1376 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Einar_R5_Text_0:
# 1383 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFloodbasin_Einar_R5_Text_1:
# 1389 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Noted. Properly, this time.$"

ParcelFloodbasin_Einar_R5_Text_2:
# 1390 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Sturla_Text_0:
# 1396 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: I came for the NUZLEAF. Stayed\n"
	.string "for the rain. Nobody stays for the rain.\l"
	.string "Battle.$"

ParcelFloodbasin_Sturla_Text_1:
# 1397 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Should've left with the\n"
	.string "NUZLEAF.$"

ParcelFloodbasin_Sturla_Text_2:
# 1412 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: It rains here more than it used\n"
	.string "to. Not more days. More water. Ask\l"
	.string "anyone with a roof.$"

ParcelFloodbasin_Sturla_R2_Text_0:
# 1423 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_Sturla_R2_Text_1:
# 1425 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Another time, then.$"

ParcelFloodbasin_Sturla_R2_Text_2:
# 1429 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Still yours.$"

ParcelFloodbasin_Sturla_R2_Text_3:
# 1430 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasin_Sturla_R3_Text_0:
# 1437 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_Sturla_R3_Text_1:
# 1443 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Right. That's the whole of it.$"

ParcelFloodbasin_Sturla_R3_Text_2:
# 1444 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Sturla_R4_Text_0:
# 1451 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Sturla_R4_Text_1:
# 1457 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: That's the one I wanted to see.$"

ParcelFloodbasin_Sturla_R4_Text_2:
# 1458 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasin_Sturla_R5_Text_0:
# 1465 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelFloodbasin_Sturla_R5_Text_1:
# 1471 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: …Again, then. Later.$"

ParcelFloodbasin_Sturla_R5_Text_2:
# 1472 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Oskar_Text_0:
# 1478 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: The puddle field used to be the\n"
	.string "best grazing in the district. Now it's\l"
	.string "the best puddles. Battle.$"

ParcelFloodbasin_Oskar_Text_1:
# 1479 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Best puddles. Worst battle.$"

ParcelFloodbasin_Oskar_Text_2:
# 1494 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: The ground here doesn't drain\n"
	.string "anymore. Something underneath it is\l"
	.string "full.$"

ParcelFloodbasin_Oskar_R2_Text_0:
# 1505 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelFloodbasin_Oskar_R2_Text_1:
# 1507 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFloodbasin_Oskar_R2_Text_2:
# 1511 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: …Again, then. Later.$"

ParcelFloodbasin_Oskar_R2_Text_3:
# 1512 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Oskar_R3_Text_0:
# 1519 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_Oskar_R3_Text_1:
# 1525 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Noted. Properly, this time.$"

ParcelFloodbasin_Oskar_R3_Text_2:
# 1526 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Oskar_R4_Text_0:
# 1533 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasin_Oskar_R4_Text_1:
# 1539 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Still yours.$"

ParcelFloodbasin_Oskar_R4_Text_2:
# 1540 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_Oskar_R5_Text_0:
# 1547 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFloodbasin_Oskar_R5_Text_1:
# 1554 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_SignHamlet_Text_0:
# 1565 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIRVIK\p"
	.string "Flood line marked on the chapel wall.\n"
	.string "Boat times posted at the relief store.$"

ParcelFloodbasin_Checkpoint_Text_0:
# 1578 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Stop there.$"

ParcelFloodbasin_Checkpoint_Text_1:
# 1584 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Logistics. This is a haul road,\n"
	.string "not a hiking trail. Nobody moves up to\l"
	.string "the river neck on my road without\l"
	.string "clearing me first.\p"
	.string "MIRREN cleared you? MIRREN clears\n"
	.string "anyone who can read. I need people who\l"
	.string "can carry.$"

ParcelFloodbasin_Checkpoint_Text_2:
# 1585 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: …Fine. You can carry weight.\n"
	.string "Move up.$"

ParcelFloodbasin_Checkpoint_Text_3:
# 1588 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Quarry clearance. Logs you fit\n"
	.string "to move earth on division ground. Tool's\l"
	.string "bonded to it.$"

ParcelFloodbasin_Checkpoint_Text_4:
# 1590 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: ROCK SMASH. The slide past me's\n"
	.string "been there since spring. Nobody's\l"
	.string "cleared it because nobody's needed to\l"
	.string "go up.\p"
	.string "Mind the loads coming down. They don't\n"
	.string "stop for paperwork.$"

ParcelFloodbasin_GymBreen_Text_0:
# 1604 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Cleared. The neck's open to you.\n"
	.string "Mind the loads coming down.$"

ParcelFloodbasin_T_Anders_Text_0:
# 1615 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: The MASQUERAIN by the lake\n"
	.string "have wings like oil on water. Pretty.\l"
	.string "Battle!$"

ParcelFloodbasin_T_Anders_Text_1:
# 1616 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Pretty and useless.$"

ParcelFloodbasin_T_Anders_Text_2:
# 1631 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Oil on water. I said it as a\n"
	.string "compliment. Then I saw the lake.$"

ParcelFloodbasin_T_Anders_R2_Text_0:
# 1642 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_T_Anders_R2_Text_1:
# 1644 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Fine. Same spot.$"

ParcelFloodbasin_T_Anders_R2_Text_2:
# 1648 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Noted. Properly, this time.$"

ParcelFloodbasin_T_Anders_R2_Text_3:
# 1649 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_T_Anders_R3_Text_0:
# 1656 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelFloodbasin_T_Anders_R3_Text_1:
# 1662 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Right. That's the whole of it.$"

ParcelFloodbasin_T_Anders_R3_Text_2:
# 1663 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_T_Anders_R4_Text_0:
# 1670 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasin_T_Anders_R4_Text_1:
# 1676 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Still yours.$"

ParcelFloodbasin_T_Anders_R4_Text_2:
# 1677 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_T_Anders_R5_Text_0:
# 1684 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelFloodbasin_T_Anders_R5_Text_1:
# 1691 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_T_Roald_Text_0:
# 1697 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Camped on the one dry rise in\n"
	.string "the puddle field. Room for one. Battle\l"
	.string "for it.$"

ParcelFloodbasin_T_Roald_Text_1:
# 1698 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Room for two, I suppose.$"

ParcelFloodbasin_T_Roald_Text_2:
# 1713 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: The puddles join up in spring.\n"
	.string "Then it's not a field. Then the\l"
	.string "councilman's boat comes. Then the\l"
	.string "puddles go. Then it's a field. It's a\l"
	.string "cycle, he says.$"

ParcelFloodbasin_T_Roald_R2_Text_0:
# 1724 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasin_T_Roald_R2_Text_1:
# 1726 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Another time, then.$"

ParcelFloodbasin_T_Roald_R2_Text_2:
# 1730 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: …Fair.$"

ParcelFloodbasin_T_Roald_R2_Text_3:
# 1731 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_T_Roald_R3_Text_0:
# 1738 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_T_Roald_R3_Text_1:
# 1745 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_T_Roald_R4_Text_0:
# 1752 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelFloodbasin_T_Roald_R4_Text_1:
# 1758 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: …Again, then. Later.$"

ParcelFloodbasin_T_Roald_R4_Text_2:
# 1759 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_T_Roald_R5_Text_0:
# 1766 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelFloodbasin_T_Roald_R5_Text_1:
# 1772 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Noted. Properly, this time.$"

ParcelFloodbasin_T_Roald_R5_Text_2:
# 1773 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_T_Stein_Text_0:
# 1779 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: You swam out here? Into THIS?\n"
	.string "Battle. Then get out of the water,\l"
	.string "seriously.$"

ParcelFloodbasin_T_Stein_Text_1:
# 1780 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Seriously. Out.$"

ParcelFloodbasin_T_Stein_Text_2:
# 1795 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: I swim the lake for the\n"
	.string "FOUNDATION. Sampling. The samples go to\l"
	.string "the coast. The results don't come back.$"

ParcelFloodbasin_T_Stein_R2_Text_0:
# 1806 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasin_T_Stein_R2_Text_1:
# 1808 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: No hurry. The water keeps.$"

ParcelFloodbasin_T_Stein_R2_Text_2:
# 1812 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Still yours.$"

ParcelFloodbasin_T_Stein_R2_Text_3:
# 1813 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_T_Stein_R3_Text_0:
# 1820 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_T_Stein_R3_Text_1:
# 1826 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: …Again, then. Later.$"

ParcelFloodbasin_T_Stein_R3_Text_2:
# 1827 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_T_Stein_R4_Text_0:
# 1834 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelFloodbasin_T_Stein_R4_Text_1:
# 1841 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_T_Stein_R5_Text_0:
# 1848 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFloodbasin_T_Stein_R5_Text_1:
# 1854 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: …Fair.$"

ParcelFloodbasin_T_Stein_R5_Text_2:
# 1855 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Epilogue_Text_0:
# 1864 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIRVIK. The relief tent is gone. The\n"
	.string "sandbags are stacked where DORSEY's\l"
	.string "photographer stood.\p"
	.string "Phase 2 goes ahead. Dry sheds, like\n"
	.string "PERRIN said. The next pulse will come\l"
	.string "from somewhere, and now there's a page\l"
	.string "that says where.$"

ParcelFloodbasin_GymBreen_Rematch_Text_0:
# 1876 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Carry weight, you said. I'm\n"
	.string "asking again, heavier.\p"
	.string "Nothing to clear. Just me, the whole\n"
	.string "crew's worth. Yes?$"

ParcelFloodbasin_GymBreen_Rematch_Text_1:
# 1878 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Mind the loads, then.$"

ParcelFloodbasin_GymBreen_Rematch_Text_2:
# 1882 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: …Fine. You can carry it.$"

ParcelFloodbasin_GymBreen_Rematch_Text_3:
# 1883 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Any time the loads are down. Mind\n"
	.string "them.$"

ParcelFloodbasin_TarpRoof_Text_0:
# 1892 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A blue tarp weighted with stones over\n"
	.string "half a roof. Four Thursdays of weather\l"
	.string "on it.\p"
	.string "The stones have shifted. Somebody\n"
	.string "re-stacks them every morning.$"
