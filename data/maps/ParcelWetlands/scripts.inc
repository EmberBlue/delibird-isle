ParcelWetlands_MapScripts::
# 30 "data/maps/ParcelWetlands/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelWetlands_OnTransition
	.byte 0


ParcelWetlands_OnTransition::
# 36 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlands_OnTransition_2
# 46 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_2
# 47 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 48 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 448
# 49 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 50 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ParcelWetlands_OnTransition_5
# 53 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
ParcelWetlands_OnTransition_4:
# 56 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 57 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 58 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 59 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_OnTransition_13
# 62 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_4
ParcelWetlands_OnTransition_12:
	end

ParcelWetlands_OnTransition_2:
# 37 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_OnTransition_9
# 40 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_2
ParcelWetlands_OnTransition_8:
# 42 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
# 43 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_4
	end

ParcelWetlands_OnTransition_5:
# 51 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_3
	goto ParcelWetlands_OnTransition_4

ParcelWetlands_OnTransition_9:
# 38 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_2
	goto ParcelWetlands_OnTransition_8

ParcelWetlands_OnTransition_13:
# 60 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_4
	goto ParcelWetlands_OnTransition_12


ParcelWetlands_Harland::
# 69 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 70 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 71 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_Harland_2
# 76 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlands_Harland_5
# 81 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 82 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 83 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 84 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_Harland_8
# 90 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_4, MSGBOX_DEFAULT
# 91 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_5, MSGBOX_DEFAULT
# 92 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_6, MSGBOX_DEFAULT
# 93 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 94 "data/maps/ParcelWetlands/scripts.pory"
	applymovement 1, Movement_WET_FaceLeft
# 95 "data/maps/ParcelWetlands/scripts.pory"
	waitmovement 0
# 96 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_7, MSGBOX_DEFAULT
# 97 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 3
# 98 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 99 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_1, 0
# 100 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Harland_2:
# 72 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_0, MSGBOX_DEFAULT
# 73 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Harland_5:
# 77 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_1, MSGBOX_DEFAULT
# 78 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Harland_8:
# 85 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_2, MSGBOX_DEFAULT
# 86 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_3, MSGBOX_DEFAULT
# 87 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Dorsey::
# 106 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 107 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 108 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_Dorsey_2
# 118 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_3, MSGBOX_DEFAULT
# 119 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_4, MSGBOX_DEFAULT
# 120 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 121 "data/maps/ParcelWetlands/scripts.pory"
	applymovement 2, Movement_WET_FaceUp
# 122 "data/maps/ParcelWetlands/scripts.pory"
	waitmovement 0
# 123 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_5, MSGBOX_DEFAULT
# 124 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 125 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 4
# 126 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 127 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_1, 0
# 128 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Dorsey_2:
# 109 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_0, MSGBOX_DEFAULT
# 110 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_1, MSGBOX_DEFAULT
# 111 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 112 "data/maps/ParcelWetlands/scripts.pory"
	applymovement 2, Movement_WET_FaceUp
# 113 "data/maps/ParcelWetlands/scripts.pory"
	waitmovement 0
# 114 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_2, MSGBOX_DEFAULT
# 115 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


# 132 "data/maps/ParcelWetlands/scripts.pory"
Movement_WET_FaceLeft:
# 132 "data/maps/ParcelWetlands/scripts.pory"
	face_left
	step_end

# 133 "data/maps/ParcelWetlands/scripts.pory"
Movement_WET_FaceUp:
# 133 "data/maps/ParcelWetlands/scripts.pory"
	face_up
	step_end

# 134 "data/maps/ParcelWetlands/scripts.pory"
Movement_WET_FaceDown:
# 134 "data/maps/ParcelWetlands/scripts.pory"
	face_down
	step_end

ParcelWetlands_ClueReeds::
# 138 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 139 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 140 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 0
# 141 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 142 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_ClueReeds_2
# 147 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueReeds_Text_1, MSGBOX_SIGN
# 148 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 149 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_ClueReeds_2:
# 143 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueReeds_Text_0, MSGBOX_SIGN
# 144 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_ClueCrate::
# 153 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 154 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 155 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 1
# 156 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 157 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_ClueCrate_2
# 162 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueCrate_Text_1, MSGBOX_SIGN
# 163 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 164 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_ClueCrate_2:
# 158 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueCrate_Text_0, MSGBOX_SIGN
# 159 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_ClueTag::
# 168 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 169 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 170 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 2
# 171 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 172 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_ClueTag_2
# 177 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueTag_Text_1, MSGBOX_SIGN
# 178 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 179 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_ClueTag_2:
# 173 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueTag_Text_0, MSGBOX_SIGN
# 174 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_PoisonTrigger::
# 189 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 190 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 24
# 191 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 192 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ne ParcelWetlands_PoisonTrigger_2
# 196 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 197 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 198 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_PoisonTrigger_5
# 202 "data/maps/ParcelWetlands/scripts.pory"
	lockall
# 203 "data/maps/ParcelWetlands/scripts.pory"
	playse SE_PIN
# 204 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_0, MSGBOX_DEFAULT
# 205 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 206 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_4
# 207 "data/maps/ParcelWetlands/scripts.pory"
	addobject 6
# 208 "data/maps/ParcelWetlands/scripts.pory"
	addobject 7
# 209 "data/maps/ParcelWetlands/scripts.pory"
	addobject 11
# 210 "data/maps/ParcelWetlands/scripts.pory"
	addobject 12
# 211 "data/maps/ParcelWetlands/scripts.pory"
	addobject 13
# 212 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_1, MSGBOX_DEFAULT
# 213 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_2, MSGBOX_DEFAULT
# 214 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_3, MSGBOX_DEFAULT
# 215 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 216 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 217 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_1, 1
# 218 "data/maps/ParcelWetlands/scripts.pory"
	releaseall
	end

ParcelWetlands_PoisonTrigger_2:
# 193 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_1, 2
	end

ParcelWetlands_PoisonTrigger_5:
# 199 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_1, 2
	end


ParcelWetlands_DeadFish::
# 223 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 224 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_DeadFish_Text_0, MSGBOX_DEFAULT
# 225 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Crowd1::
# 230 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 231 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 232 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd1_Text_0, MSGBOX_DEFAULT
# 233 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Crowd2::
# 237 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 238 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 239 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd2_Text_0, MSGBOX_DEFAULT
# 240 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Crowd3::
# 244 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 245 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 246 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd3_Text_0, MSGBOX_DEFAULT
# 247 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvResidue::
# 253 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 254 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 255 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvResidue_2
# 259 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 6
# 260 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 261 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvResidue_5
# 266 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvResidue_Text_1, MSGBOX_SIGN
# 267 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 268 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 269 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvResidue_2:
# 256 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvResidue_5:
# 262 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvResidue_Text_0, MSGBOX_SIGN
# 263 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvPipe::
# 273 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 274 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 275 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvPipe_2
# 279 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 7
# 280 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 281 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvPipe_5
# 286 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_1, MSGBOX_SIGN
# 287 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 288 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 289 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvPipe_2:
# 276 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvPipe_5:
# 282 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_0, MSGBOX_SIGN
# 283 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvManifest::
# 293 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 294 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 295 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvManifest_2
# 299 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 8
# 300 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 301 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvManifest_5
# 306 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvManifest_Text_1, MSGBOX_SIGN
# 307 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 308 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 309 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvManifest_2:
# 296 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvManifest_5:
# 302 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvManifest_Text_0, MSGBOX_SIGN
# 303 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_RequirePoison::
# 314 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 315 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 316 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 317 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_RequirePoison_2
ParcelWetlands_RequirePoison_1:
	return

ParcelWetlands_RequirePoison_2:
# 318 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_RequirePoison_Text_0, MSGBOX_SIGN
	goto ParcelWetlands_RequirePoison_1


ParcelWetlands_CheckEvidenceDone::
# 324 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 448
# 325 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 326 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ParcelWetlands_CheckEvidenceDone_2
ParcelWetlands_CheckEvidenceDone_1:
	return

ParcelWetlands_CheckEvidenceDone_2:
# 327 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_CheckEvidenceDone_Text_0, MSGBOX_DEFAULT
# 328 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_3
# 329 "data/maps/ParcelWetlands/scripts.pory"
	addobject 5
# 330 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_CheckEvidenceDone_Text_1, MSGBOX_DEFAULT
	goto ParcelWetlands_CheckEvidenceDone_1


ParcelWetlands_Enforcer::
# 337 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ENFORCER, ParcelWetlands_Enforcer_Text_0, ParcelWetlands_Enforcer_Text_1
# 340 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 341 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 342 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_2, MSGBOX_DEFAULT
# 343 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_3, MSGBOX_DEFAULT
# 344 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 345 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 5
# 346 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
# 347 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_4, MSGBOX_DEFAULT
# 348 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 2
# 349 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_2
# 350 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 11
# 351 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 12
# 352 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 13
# 353 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 6
# 354 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 7
# 355 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_4
# 356 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Gunnar::
# 362 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 363 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 364 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR_DONE, ParcelWetlands_Gunnar_2
# 369 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR_SEEN, ParcelWetlands_Gunnar_5
# 383 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR, ParcelWetlands_Gunnar_8
# 388 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_5, MSGBOX_DEFAULT
# 389 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_6, MSGBOX_DEFAULT
# 390 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_GUNNAR
# 391 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_2:
# 365 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_0, MSGBOX_DEFAULT
# 366 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_5:
# 370 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_1, MSGBOX_DEFAULT
# 371 "data/maps/ParcelWetlands/scripts.pory"
	checkitem ITEM_GOOD_ROD
# 372 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_Gunnar_11
# 376 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_3, MSGBOX_DEFAULT
# 377 "data/maps/ParcelWetlands/scripts.pory"
	giveitem ITEM_GOOD_ROD
ParcelWetlands_Gunnar_10:
# 379 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_GUNNAR_DONE
# 380 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_8:
# 384 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_4, MSGBOX_DEFAULT
# 385 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_11:
# 373 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_2, MSGBOX_DEFAULT
# 374 "data/maps/ParcelWetlands/scripts.pory"
	giveitem ITEM_NET_BALL, 3
	goto ParcelWetlands_Gunnar_10


ParcelWetlands_Surskit::
# 396 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 397 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 398 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR, ParcelWetlands_Surskit_3
ParcelWetlands_Surskit_1:
# 404 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Surskit_Text_1, MSGBOX_DEFAULT
# 405 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Surskit_2:
# 399 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Surskit_Text_0, MSGBOX_DEFAULT
# 400 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_GUNNAR_SEEN
# 401 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Surskit_3:
# 398 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_GUNNAR_DONE, ParcelWetlands_Surskit_2
	goto ParcelWetlands_Surskit_1


ParcelWetlands_Selt::
# 411 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_SELT, ParcelWetlands_Selt_Text_0, ParcelWetlands_Selt_Text_1
# 414 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Mora::
# 418 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_POACHER_B, ParcelWetlands_Mora_Text_0, ParcelWetlands_Mora_Text_1
# 421 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Bran::
# 425 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FORAGER, ParcelWetlands_Bran_Text_0, ParcelWetlands_Bran_Text_1
# 428 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Kalle::
# 434 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_KALLE, ParcelWetlands_Kalle_Text_0, ParcelWetlands_Kalle_Text_1
# 437 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Liv::
# 441 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_LIV, ParcelWetlands_Liv_Text_0, ParcelWetlands_Liv_Text_1
# 444 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Toke::
# 448 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_TOKE, ParcelWetlands_Toke_Text_0, ParcelWetlands_Toke_Text_1
# 451 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Jorun::
# 455 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_JORUN, ParcelWetlands_Jorun_Text_0, ParcelWetlands_Jorun_Text_1
# 458 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Stian::
# 462 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_STIAN, ParcelWetlands_Stian_Text_0, ParcelWetlands_Stian_Text_1
# 465 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Asta::
# 469 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_ASTA, ParcelWetlands_Asta_Text_0, ParcelWetlands_Asta_Text_1
# 472 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Bjarte::
# 476 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_BJARTE, ParcelWetlands_Bjarte_Text_0, ParcelWetlands_Bjarte_Text_1
# 479 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Odd::
# 483 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_ODD, ParcelWetlands_Odd_Text_0, ParcelWetlands_Odd_Text_1
# 486 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Haakon::
# 490 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_HAAKON, ParcelWetlands_Haakon_Text_0, ParcelWetlands_Haakon_Text_1
# 493 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Eirik::
# 497 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_EIRIK, ParcelWetlands_Eirik_Text_0, ParcelWetlands_Eirik_Text_1
# 500 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Siv::
# 504 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_SIV, ParcelWetlands_Siv_Text_0, ParcelWetlands_Siv_Text_1
# 507 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_ItemAntidote::
# 512 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_ANTIDOTE
	end


ParcelWetlands_ItemGreatBall::
# 513 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelWetlands_ItemSuperPotion::
# 514 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelWetlands_ItemNetBall::
# 515 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_NET_BALL
	end


ParcelWetlands_SignLanding::
# 518 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_SignLanding_Text_0, MSGBOX_SIGN
	end


ParcelWetlands_SignOffice::
# 522 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_SignOffice_Text_0, MSGBOX_SIGN
	end


ParcelWetlands_SignRoute::
# 526 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_SignRoute_Text_0, MSGBOX_SIGN
	end


ParcelWetlands_Harland_Text_0:
# 72 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: They read your report out on\n"
	.string "the radio. My name was in it. My father's,\l"
	.string "too.\p"
	.string "First time anyone said his name on a\n"
	.string "radio.\p"
	.string "Go on. I've got nets to mend.$"

ParcelWetlands_Harland_Text_1:
# 77 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: …Maybe I was wrong about you.\p"
	.string "But I still don't trust your people.$"

ParcelWetlands_Harland_Text_2:
# 85 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: Look at this! You said you\n"
	.string "were protecting the water!$"

ParcelWetlands_Harland_Text_3:
# 86 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: Don't stand there writing.\n"
	.string "READ it, then.\p"
	.string "The residue, up the channel. The pipe\n"
	.string "under the falls.\p"
	.string "There's a soaked manifest washed up on\n"
	.string "the south bank. Read all of it.$"

ParcelWetlands_Harland_Text_4:
# 90 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: My father fished these\n"
	.string "waters. His father too.\p"
	.string "And now you show up with rules and\n"
	.string "paperwork and tell me the water belongs\l"
	.string "to you?$"

ParcelWetlands_Harland_Text_5:
# 91 "data/maps/ParcelWetlands/scripts.pory"
	.string "{PLAYER}: It doesn't belong to me.$"

ParcelWetlands_Harland_Text_6:
# 92 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: Then why does it feel like it\n"
	.string "does?$"

ParcelWetlands_Harland_Text_7:
# 96 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: You want to talk? Talk to\n"
	.string "COUNCILMAN DORSEY. He's down at the\l"
	.string "new office, cutting a ribbon.\p"
	.string "Someone who actually listens.$"

ParcelWetlands_Dorsey_Text_0:
# 109 "data/maps/ParcelWetlands/scripts.pory"
	.string "DORSEY: RANGER! The very person.\p"
	.string "You'll have seen the Council's\n"
	.string "statement. We welcome the findings.\l"
	.string "Welcome them.\p"
	.string "Some of us were calling for an\n"
	.string "independent review years ago. Check\l"
	.string "the record.$"

ParcelWetlands_Dorsey_Text_1:
# 110 "data/maps/ParcelWetlands/scripts.pory"
	.string "DORSEY: Development that listens.\n"
	.string "Relief that reaches. It's what I've\l"
	.string "always stood for out here.\p"
	.string "The review board will want local\n"
	.string "liaisons, you know. People who\l"
	.string "understand both sides. I've put my name\l"
	.string "forward.\p"
	.string "Somebody sensible has to.$"

ParcelWetlands_Dorsey_Text_2:
# 114 "data/maps/ParcelWetlands/scripts.pory"
	.string "DORSEY: People need someone to thank.\n"
	.string "Better it's us.$"

ParcelWetlands_Dorsey_Text_3:
# 118 "data/maps/ParcelWetlands/scripts.pory"
	.string "DORSEY: Ah. The new provisional.\n"
	.string "Welcome to REEDMERE.\p"
	.string "This is the TIDEWATER office. MEREHOLT\n"
	.string "put it up in eight weeks. A gauge on\l"
	.string "every channel, a boat for the landing,\l"
	.string "four local jobs.\p"
	.string "We can protect POKéMON and protect\n"
	.string "jobs. We don't need fear-based\l"
	.string "restrictions.$"

ParcelWetlands_Dorsey_Text_4:
# 119 "data/maps/ParcelWetlands/scripts.pory"
	.string "DORSEY: These people work hard. The\n"
	.string "CORPS means well, I'm sure. But rules\l"
	.string "written far away land hard out here.\p"
	.string "Good to meet you. That's a firm grip.\n"
	.string "They teach you that at the station?$"

ParcelWetlands_Dorsey_Text_5:
# 123 "data/maps/ParcelWetlands/scripts.pory"
	.string "DORSEY: People need someone to blame.\n"
	.string "Better it isn't us.$"

ParcelWetlands_ClueReeds_Text_0:
# 143 "data/maps/ParcelWetlands/scripts.pory"
	.string "The dragged reeds. Already in the\n"
	.string "notebook.$"

ParcelWetlands_ClueReeds_Text_1:
# 147 "data/maps/ParcelWetlands/scripts.pory"
	.string "The reeds here are bent in a swath, all\n"
	.string "one direction. Dragged, not blown.\p"
	.string "The swath is a crate's width. Written\n"
	.string "down.$"

ParcelWetlands_ClueCrate_Text_0:
# 158 "data/maps/ParcelWetlands/scripts.pory"
	.string "The crate imprint. Already in the\n"
	.string "notebook.$"

ParcelWetlands_ClueCrate_Text_1:
# 162 "data/maps/ParcelWetlands/scripts.pory"
	.string "A rectangular imprint pressed deep in\n"
	.string "the mud. Slats. Corner braces.\p"
	.string "A crate sat here long enough to matter\n"
	.string "and left recently enough to be wet.\l"
	.string "Written down.$"

ParcelWetlands_ClueTag_Text_0:
# 173 "data/maps/ParcelWetlands/scripts.pory"
	.string "The trade tag. Bagged, and in the\n"
	.string "notebook.$"

ParcelWetlands_ClueTag_Text_1:
# 177 "data/maps/ParcelWetlands/scripts.pory"
	.string "A plastic tag snagged on the mooring\n"
	.string "post, snapped off its loop. A lot\l"
	.string "number. No license field.\p"
	.string "The kind of tag that isn't supposed to\n"
	.string "exist. Enough to point. Not enough to\l"
	.string "convict.$"

ParcelWetlands_PoisonTrigger_Text_0:
# 204 "data/maps/ParcelWetlands/scripts.pory"
	.string "Shouting, down at the backwater.$"

ParcelWetlands_PoisonTrigger_Text_1:
# 212 "data/maps/ParcelWetlands/scripts.pory"
	.string "WOMAN: They're all coming up! Look at\n"
	.string "them, they're all coming up!$"

ParcelWetlands_PoisonTrigger_Text_2:
# 213 "data/maps/ParcelWetlands/scripts.pory"
	.string "MAN: There's a shine on the water. Don't\n"
	.string "let the kids near it.$"

ParcelWetlands_PoisonTrigger_Text_3:
# 214 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: RANGER! Get down here!\p"
	.string "Look at this! You said you were\n"
	.string "protecting the water!$"

ParcelWetlands_DeadFish_Text_0:
# 224 "data/maps/ParcelWetlands/scripts.pory"
	.string "It drifts against the piling and does\n"
	.string "not right itself.$"

ParcelWetlands_Crowd1_Text_0:
# 232 "data/maps/ParcelWetlands/scripts.pory"
	.string "WOMAN: My husband drank from that\n"
	.string "channel this morning. He's fine. He's\l"
	.string "fine, isn't he?$"

ParcelWetlands_Crowd2_Text_0:
# 239 "data/maps/ParcelWetlands/scripts.pory"
	.string "MAN: Somebody did this. Water doesn't\n"
	.string "go bad on its own in a night.\p"
	.string "And I don't see anybody from the CORPS\n"
	.string "writing THAT down.$"

ParcelWetlands_Crowd3_Text_0:
# 246 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOY: Dad says it's your fault. Is it your\n"
	.string "fault?$"

ParcelWetlands_EvResidue_Text_0:
# 262 "data/maps/ParcelWetlands/scripts.pory"
	.string "The residue sample. Sealed.$"

ParcelWetlands_EvResidue_Text_1:
# 266 "data/maps/ParcelWetlands/scripts.pory"
	.string "Upstream of the landing the residue\n"
	.string "collects in the reed roots. Greasy.\l"
	.string "Faintly sweet.\p"
	.string "It did not start here. A sample, sealed\n"
	.string "and labelled.$"

ParcelWetlands_EvPipe_Text_0:
# 282 "data/maps/ParcelWetlands/scripts.pory"
	.string "The pipe segment. Photographed and\n"
	.string "noted.$"

ParcelWetlands_EvPipe_Text_1:
# 286 "data/maps/ParcelWetlands/scripts.pory"
	.string "A broken discharge pipe, half-buried\n"
	.string "under the falls. The break is old. The\l"
	.string "staining inside it is not.\p"
	.string "Photographed where it lies.$"

ParcelWetlands_EvManifest_Text_0:
# 302 "data/maps/ParcelWetlands/scripts.pory"
	.string "The manifest. Drying between notebook\n"
	.string "pages.$"

ParcelWetlands_EvManifest_Text_1:
# 306 "data/maps/ParcelWetlands/scripts.pory"
	.string "A transport manifest, soaked but\n"
	.string "readable. Tonnage. Dates. A carrier code\l"
	.string "that isn't in any register.\p"
	.string "The consignee field has been inked out\n"
	.string "by hand.$"

ParcelWetlands_RequirePoison_Text_0:
# 318 "data/maps/ParcelWetlands/scripts.pory"
	.string "The water is quiet. HARLAND's boats sit\n"
	.string "low on their lines.$"

ParcelWetlands_CheckEvidenceDone_Text_0:
# 327 "data/maps/ParcelWetlands/scripts.pory"
	.string "Residue. Pipe. Manifest.\p"
	.string "Enough to point. Not enough to convict.\n"
	.string "All of it written down.$"

ParcelWetlands_CheckEvidenceDone_Text_1:
# 330 "data/maps/ParcelWetlands/scripts.pory"
	.string "Someone is standing at the landing.\n"
	.string "Watching.$"

ParcelWetlands_Enforcer_Text_0:
# 338 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: You think you're saving\n"
	.string "something?\p"
	.string "The land's already dead.\n"
	.string "We're just the first to admit it.$"

ParcelWetlands_Enforcer_Text_1:
# 339 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: Hm.$"

ParcelWetlands_Enforcer_Text_2:
# 342 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: Your mentor tried.\n"
	.string "Look how that went.$"

ParcelWetlands_Enforcer_Text_3:
# 343 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: Keep the manifest. Frame it.\n"
	.string "Nobody who matters can read.$"

ParcelWetlands_Enforcer_Text_4:
# 347 "data/maps/ParcelWetlands/scripts.pory"
	.string "MAN: Where'd the councilman go? He was\n"
	.string "right there by the office.\p"
	.string "His car's gone.$"

ParcelWetlands_Gunnar_Text_0:
# 365 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Twice as far out. You remember\n"
	.string "that for me, when you write your\l"
	.string "reports.$"

ParcelWetlands_Gunnar_Text_1:
# 370 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Still there? Skating about?\p"
	.string "Good. Good. Then it's not all gone bad.\n"
	.string "Not yet.$"

ParcelWetlands_Gunnar_Text_2:
# 373 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Take these. My son's. He's not\n"
	.string "coming back for them.$"

ParcelWetlands_Gunnar_Text_3:
# 376 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Take this. My son's rod. He's\n"
	.string "not coming back for it.$"

ParcelWetlands_Gunnar_Text_4:
# 384 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: The puddles past the bridge,\n"
	.string "west end. Little blue thing on long legs.\l"
	.string "Go and look.$"

ParcelWetlands_Gunnar_Text_5:
# 388 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: The reed beds used to go twice\n"
	.string "as far out. Ask anyone old enough to\l"
	.string "remember.\p"
	.string "Nobody asks.$"

ParcelWetlands_Gunnar_Text_6:
# 389 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: You're a RANGER, aren't you?\n"
	.string "Then count something for me.\p"
	.string "There used to be SURSKIT on the\n"
	.string "puddles up past the bridge, west end. If\l"
	.string "there's still one, the water's not all\l"
	.string "gone bad.\p"
	.string "Go and look. Then come and tell me.$"

ParcelWetlands_Surskit_Text_0:
# 399 "data/maps/ParcelWetlands/scripts.pory"
	.string "The SURSKIT skates a circle on the\n"
	.string "puddle, then another.\p"
	.string "One. Still here. Written down.$"

ParcelWetlands_Surskit_Text_1:
# 404 "data/maps/ParcelWetlands/scripts.pory"
	.string "A SURSKIT skates a circle on the\n"
	.string "puddle, then another.$"

ParcelWetlands_Selt_Text_0:
# 412 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Nothing illegal about standing by\n"
	.string "the water, kid.$"

ParcelWetlands_Selt_Text_1:
# 413 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Fine, fine. Moving along.$"

ParcelWetlands_Selt_Text_2:
# 414 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: A man's got to eat. You want\n"
	.string "villains, look further up the money.$"

ParcelWetlands_Mora_Text_0:
# 419 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: This patch is spoken for. Walk on.$"

ParcelWetlands_Mora_Text_1:
# 420 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Ugh. Whatever.$"

ParcelWetlands_Mora_Text_2:
# 421 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Spoken for by WHO? Mind your own\n"
	.string "business.$"

ParcelWetlands_Bran_Text_0:
# 426 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Mind your boots. Mudcaps grow\n"
	.string "where you least want them.\p"
	.string "And trainers, apparently. C'mon then.$"

ParcelWetlands_Bran_Text_1:
# 427 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Heh. Soft hands, hard hits.$"

ParcelWetlands_Bran_Text_2:
# 428 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: There's a path up to the office\n"
	.string "from here. Mind the ledge, it's higher\l"
	.string "than it looks.$"

ParcelWetlands_Kalle_Text_0:
# 435 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: The reeds are full of cocoons.\n"
	.string "Hundreds! Don't step on them!$"

ParcelWetlands_Kalle_Text_1:
# 436 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Aw. They'll hatch anyway.$"

ParcelWetlands_Kalle_Text_2:
# 437 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: WURMPLE pick the reed stems.\n"
	.string "When the reeds go, where do they pick?$"

ParcelWetlands_Liv_Text_0:
# 442 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Nobody comes out this far. So\n"
	.string "you're either lost or you're a RANGER.$"

ParcelWetlands_Liv_Text_1:
# 443 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: RANGER, then.$"

ParcelWetlands_Liv_Text_2:
# 444 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: I come out here for the quiet. It's\n"
	.string "less quiet than it was. Engines on the\l"
	.string "water, at night.$"

ParcelWetlands_Toke_Text_0:
# 449 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: You didn't see me. Nobody sees me.$"

ParcelWetlands_Toke_Text_1:
# 450 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: You saw me.$"

ParcelWetlands_Toke_Text_2:
# 451 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: The grass is tallest by the water.\n"
	.string "That's where I hide. That's where the\l"
	.string "SURSKIT hide, too.$"

ParcelWetlands_Jorun_Text_0:
# 456 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Camped here three nights. My\n"
	.string "WOOPER found something in the mud\l"
	.string "yesterday. Let's see what you've found.$"

ParcelWetlands_Jorun_Text_1:
# 457 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Found out, is what.$"

ParcelWetlands_Jorun_Text_2:
# 458 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: It was a crate slat. Green paint.\n"
	.string "Nobody paints crates green round here.$"

ParcelWetlands_Stian_Text_0:
# 463 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: WINGULL used to roost on the\n"
	.string "reed islands. There's fewer islands\l"
	.string "every year. Battle?$"

ParcelWetlands_Stian_Text_1:
# 464 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Fewer WINGULL, too.$"

ParcelWetlands_Stian_Text_2:
# 465 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: They moved to the landing roofs.\n"
	.string "HARLAND hates it.$"

ParcelWetlands_Asta_Text_0:
# 470 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Cadet ASTA, Corps patrol.\n"
	.string "Provisional? Then you'll spar. HALE's\l"
	.string "orders.$"

ParcelWetlands_Asta_Text_1:
# 471 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Good. HALE will want to hear that.$"

ParcelWetlands_Asta_Text_2:
# 472 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: The office people won't let us\n"
	.string "gauge the channels ourselves.\l"
	.string "'Duplication of effort.'\p"
	.string "We write down their numbers and we\n"
	.string "write down ours.$"

ParcelWetlands_Bjarte_Text_0:
# 477 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Cadet BJARTE. The bridge is my\n"
	.string "post. Nobody crosses without a battle,\l"
	.string "HALE says.$"

ParcelWetlands_Bjarte_Text_1:
# 478 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: HALE doesn't actually say that.$"

ParcelWetlands_Bjarte_Text_2:
# 479 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: There's an old road east, over\n"
	.string "the bridge and through the trees. The\l"
	.string "culvert road. HALE said you'd be going\l"
	.string "that way.$"

ParcelWetlands_Odd_Text_0:
# 484 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: These cliffs are the only dry\n"
	.string "ground for a mile. I'm not sharing them.$"

ParcelWetlands_Odd_Text_1:
# 485 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Fine. Share.$"

ParcelWetlands_Odd_Text_2:
# 486 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: The rock's wet all year now. Used\n"
	.string "to dry out by midsummer.$"

ParcelWetlands_Haakon_Text_0:
# 491 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Shh. You'll scare them. Too late.\n"
	.string "Battle.$"

ParcelWetlands_Haakon_Text_1:
# 492 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Scared them anyway.$"

ParcelWetlands_Haakon_Text_2:
# 493 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: The channel above the landing\n"
	.string "still runs clean. Mostly. I fish here, not\l"
	.string "down there.$"

ParcelWetlands_Eirik_Text_0:
# 498 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Three MAGIKARP today. Three!\n"
	.string "Last year it'd be thirty. Take it out on\l"
	.string "me, go on.$"

ParcelWetlands_Eirik_Text_1:
# 499 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Thirty-one, then.$"

ParcelWetlands_Eirik_Text_2:
# 500 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: HARLAND says the CORPS counts\n"
	.string "the fish wrong. I say there's nothing\l"
	.string "left to count.$"

ParcelWetlands_Siv_Text_0:
# 505 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: I like it up here. You can see the\n"
	.string "whole marsh. Including you, coming.$"

ParcelWetlands_Siv_Text_1:
# 506 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Should've looked harder.$"

ParcelWetlands_Siv_Text_2:
# 507 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: From up here you can see the shine\n"
	.string "on the water some mornings. Rainbow\l"
	.string "colours. Pretty, if you don't think\l"
	.string "about it.$"

ParcelWetlands_SignLanding_Text_0:
# 518 "data/maps/ParcelWetlands/scripts.pory"
	.string "REEDMERE LANDING\p"
	.string "Boats moored past sundown pay the\n"
	.string "landing fee. Fish counts to the office.\l"
	.string "No nets in the channel.$"

ParcelWetlands_SignOffice_Text_0:
# 522 "data/maps/ParcelWetlands/scripts.pory"
	.string "MEREHOLT TIDEWATER DIVISION\n"
	.string "Reedmere Gauging Office\p"
	.string "Opening ceremony by COUNCILMAN\n"
	.string "DORSEY. All welcome.$"

ParcelWetlands_SignRoute_Text_0:
# 526 "data/maps/ParcelWetlands/scripts.pory"
	.string "REEDMERE\p"
	.string "North: the landing and the backwater.\n"
	.string "South: FERNWICK.$"
