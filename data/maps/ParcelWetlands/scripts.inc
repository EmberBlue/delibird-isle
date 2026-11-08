ParcelWetlands_MapScripts::
# 32 "data/maps/ParcelWetlands/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelWetlands_OnTransition
# 33 "data/maps/ParcelWetlands/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelWetlands_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelWetlands_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 34 "data/maps/ParcelWetlands/scripts.pory"
	map_script_2 VAR_SKALD_EPILOGUE, 1, ParcelWetlands_Epilogue
	.2byte 0


ParcelWetlands_OnTransition::
# 41 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlands_OnTransition_2
# 51 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_2
# 52 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 53 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 448
# 54 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 55 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ParcelWetlands_OnTransition_5
# 58 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
ParcelWetlands_OnTransition_4:
# 61 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 62 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 63 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 64 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_OnTransition_13
# 67 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_4
ParcelWetlands_OnTransition_12:
	end

ParcelWetlands_OnTransition_2:
# 42 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_OnTransition_9
# 45 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_2
ParcelWetlands_OnTransition_8:
# 47 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
# 48 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_4
	end

ParcelWetlands_OnTransition_5:
# 56 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_3
	goto ParcelWetlands_OnTransition_4

ParcelWetlands_OnTransition_9:
# 43 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_2
	goto ParcelWetlands_OnTransition_8

ParcelWetlands_OnTransition_13:
# 65 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_4
	goto ParcelWetlands_OnTransition_12


ParcelWetlands_Harland::
# 74 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 75 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 76 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_Harland_2
# 81 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlands_Harland_5
# 86 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 87 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 88 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 89 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_Harland_8
# 95 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_4, MSGBOX_DEFAULT
# 96 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_5, MSGBOX_DEFAULT
# 97 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_6, MSGBOX_DEFAULT
# 98 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 99 "data/maps/ParcelWetlands/scripts.pory"
	applymovement 1, Movement_WET_FaceLeft
# 100 "data/maps/ParcelWetlands/scripts.pory"
	waitmovement 0
# 101 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_7, MSGBOX_DEFAULT
# 102 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 3
# 103 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 104 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_1, 0
# 105 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Harland_2:
# 77 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_0, MSGBOX_DEFAULT
# 78 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Harland_5:
# 82 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_1, MSGBOX_DEFAULT
# 83 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Harland_8:
# 90 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_2, MSGBOX_DEFAULT
# 91 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_3, MSGBOX_DEFAULT
# 92 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Dorsey::
# 111 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 112 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 113 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_Dorsey_2
# 123 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_3, MSGBOX_DEFAULT
# 124 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_4, MSGBOX_DEFAULT
# 125 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 126 "data/maps/ParcelWetlands/scripts.pory"
	applymovement 2, Movement_WET_FaceUp
# 127 "data/maps/ParcelWetlands/scripts.pory"
	waitmovement 0
# 128 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_5, MSGBOX_DEFAULT
# 129 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 130 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 4
# 131 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 132 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_1, 0
# 133 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Dorsey_2:
# 114 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_0, MSGBOX_DEFAULT
# 115 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_1, MSGBOX_DEFAULT
# 116 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 117 "data/maps/ParcelWetlands/scripts.pory"
	applymovement 2, Movement_WET_FaceUp
# 118 "data/maps/ParcelWetlands/scripts.pory"
	waitmovement 0
# 119 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_2, MSGBOX_DEFAULT
# 120 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


# 137 "data/maps/ParcelWetlands/scripts.pory"
Movement_WET_FaceLeft:
# 137 "data/maps/ParcelWetlands/scripts.pory"
	face_left
	step_end

# 138 "data/maps/ParcelWetlands/scripts.pory"
Movement_WET_FaceUp:
# 138 "data/maps/ParcelWetlands/scripts.pory"
	face_up
	step_end

# 139 "data/maps/ParcelWetlands/scripts.pory"
Movement_WET_FaceDown:
# 139 "data/maps/ParcelWetlands/scripts.pory"
	face_down
	step_end

ParcelWetlands_ClueReeds::
# 143 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 144 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 145 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 0
# 146 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 147 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_ClueReeds_2
# 152 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueReeds_Text_1, MSGBOX_SIGN
# 153 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 154 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_ClueReeds_2:
# 148 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueReeds_Text_0, MSGBOX_SIGN
# 149 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_ClueCrate::
# 158 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 159 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 160 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 1
# 161 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 162 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_ClueCrate_2
# 167 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueCrate_Text_1, MSGBOX_SIGN
# 168 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 169 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_ClueCrate_2:
# 163 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueCrate_Text_0, MSGBOX_SIGN
# 164 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_ClueTag::
# 173 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 174 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 175 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 2
# 176 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 177 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_ClueTag_2
# 182 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueTag_Text_1, MSGBOX_SIGN
# 183 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 184 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_ClueTag_2:
# 178 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueTag_Text_0, MSGBOX_SIGN
# 179 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_PoisonTrigger::
# 194 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 195 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 24
# 196 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 197 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ne ParcelWetlands_PoisonTrigger_2
# 201 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 202 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 203 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_PoisonTrigger_5
# 207 "data/maps/ParcelWetlands/scripts.pory"
	lockall
# 208 "data/maps/ParcelWetlands/scripts.pory"
	playse SE_PIN
# 209 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_0, MSGBOX_DEFAULT
# 210 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 211 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_4
# 212 "data/maps/ParcelWetlands/scripts.pory"
	addobject 6
# 213 "data/maps/ParcelWetlands/scripts.pory"
	addobject 7
# 214 "data/maps/ParcelWetlands/scripts.pory"
	addobject 11
# 215 "data/maps/ParcelWetlands/scripts.pory"
	addobject 12
# 216 "data/maps/ParcelWetlands/scripts.pory"
	addobject 13
# 217 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_1, MSGBOX_DEFAULT
# 218 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_2, MSGBOX_DEFAULT
# 219 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_3, MSGBOX_DEFAULT
# 220 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 221 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 222 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_1, 1
# 223 "data/maps/ParcelWetlands/scripts.pory"
	releaseall
	end

ParcelWetlands_PoisonTrigger_2:
# 198 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_1, 2
	end

ParcelWetlands_PoisonTrigger_5:
# 204 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_1, 2
	end


ParcelWetlands_DeadFish::
# 228 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 229 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_DeadFish_Text_0, MSGBOX_DEFAULT
# 230 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Crowd1::
# 235 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 236 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 237 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_Crowd1_2
# 242 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd1_Text_1, MSGBOX_DEFAULT
# 243 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Crowd1_2:
# 238 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd1_Text_0, MSGBOX_DEFAULT
# 239 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Crowd2::
# 247 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 248 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 249 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_Crowd2_2
# 254 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd2_Text_1, MSGBOX_DEFAULT
# 255 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Crowd2_2:
# 250 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd2_Text_0, MSGBOX_DEFAULT
# 251 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Crowd3::
# 259 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 260 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 261 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_Crowd3_2
# 266 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd3_Text_1, MSGBOX_DEFAULT
# 267 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Crowd3_2:
# 262 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd3_Text_0, MSGBOX_DEFAULT
# 263 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvResidue::
# 273 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 274 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 275 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvResidue_2
# 279 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 6
# 280 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 281 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvResidue_5
# 286 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvResidue_Text_1, MSGBOX_SIGN
# 287 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 288 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 289 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvResidue_2:
# 276 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvResidue_5:
# 282 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvResidue_Text_0, MSGBOX_SIGN
# 283 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvPipe::
# 293 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 294 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 295 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvPipe_2
# 299 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 7
# 300 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 301 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvPipe_5
# 306 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_1, MSGBOX_SIGN
# 307 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_2, MSGBOX_DEFAULT
# 308 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 309 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 310 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvPipe_2:
# 296 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvPipe_5:
# 302 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_0, MSGBOX_SIGN
# 303 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvManifest::
# 314 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 315 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 316 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvManifest_2
# 320 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 8
# 321 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 322 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvManifest_5
# 327 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvManifest_Text_1, MSGBOX_SIGN
# 328 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 329 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 330 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvManifest_2:
# 317 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvManifest_5:
# 323 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvManifest_Text_0, MSGBOX_SIGN
# 324 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_RequirePoison::
# 335 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 336 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 337 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 338 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_RequirePoison_2
ParcelWetlands_RequirePoison_1:
	return

ParcelWetlands_RequirePoison_2:
# 339 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_RequirePoison_Text_0, MSGBOX_SIGN
	goto ParcelWetlands_RequirePoison_1


ParcelWetlands_CheckEvidenceDone::
# 345 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 448
# 346 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 347 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ParcelWetlands_CheckEvidenceDone_2
ParcelWetlands_CheckEvidenceDone_1:
	return

ParcelWetlands_CheckEvidenceDone_2:
# 348 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_CheckEvidenceDone_Text_0, MSGBOX_DEFAULT
# 349 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_3
# 350 "data/maps/ParcelWetlands/scripts.pory"
	addobject 5
# 351 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_CheckEvidenceDone_Text_1, MSGBOX_DEFAULT
	goto ParcelWetlands_CheckEvidenceDone_1


ParcelWetlands_Enforcer::
# 358 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ENFORCER, ParcelWetlands_Enforcer_Text_0, ParcelWetlands_Enforcer_Text_1
# 361 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 362 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 363 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_2, MSGBOX_DEFAULT
# 364 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_3, MSGBOX_DEFAULT
# 365 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 366 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 5
# 367 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
# 368 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_4, MSGBOX_DEFAULT
# 369 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 2
# 370 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_2
# 371 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 11
# 372 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 12
# 373 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 13
# 374 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 6
# 375 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 7
# 376 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_4
# 377 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Gunnar::
# 383 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 384 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 385 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_Gunnar_2
# 390 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR_DONE, ParcelWetlands_Gunnar_5
# 395 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR_SEEN, ParcelWetlands_Gunnar_8
# 409 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR, ParcelWetlands_Gunnar_11
# 414 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_6, MSGBOX_DEFAULT
# 415 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_7, MSGBOX_DEFAULT
# 416 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_GUNNAR
# 417 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_2:
# 386 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_0, MSGBOX_DEFAULT
# 387 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_5:
# 391 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_1, MSGBOX_DEFAULT
# 392 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_8:
# 396 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_2, MSGBOX_DEFAULT
# 397 "data/maps/ParcelWetlands/scripts.pory"
	checkitem ITEM_GOOD_ROD
# 398 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_Gunnar_14
# 402 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_4, MSGBOX_DEFAULT
# 403 "data/maps/ParcelWetlands/scripts.pory"
	giveitem ITEM_GOOD_ROD
ParcelWetlands_Gunnar_13:
# 405 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_GUNNAR_DONE
# 406 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_11:
# 410 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_5, MSGBOX_DEFAULT
# 411 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_14:
# 399 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_3, MSGBOX_DEFAULT
# 400 "data/maps/ParcelWetlands/scripts.pory"
	giveitem ITEM_NET_BALL, 3
	goto ParcelWetlands_Gunnar_13


ParcelWetlands_Surskit::
# 422 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 423 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 424 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR, ParcelWetlands_Surskit_3
ParcelWetlands_Surskit_1:
# 430 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Surskit_Text_1, MSGBOX_DEFAULT
# 431 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Surskit_2:
# 425 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Surskit_Text_0, MSGBOX_DEFAULT
# 426 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_GUNNAR_SEEN
# 427 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Surskit_3:
# 424 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_GUNNAR_DONE, ParcelWetlands_Surskit_2
	goto ParcelWetlands_Surskit_1


ParcelWetlands_Selt::
# 437 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_SELT, ParcelWetlands_Selt_Text_0, ParcelWetlands_Selt_Text_1, ParcelWetlands_Selt_FirstWin
# 441 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 442 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Selt_3
ParcelWetlands_Selt_1:
# 445 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Selt_8
ParcelWetlands_Selt_6:
# 448 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Selt_13
ParcelWetlands_Selt_11:
# 451 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Selt_18
ParcelWetlands_Selt_16:
# 454 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Selt_2:
# 443 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Selt_R2
	goto ParcelWetlands_Selt_1

ParcelWetlands_Selt_3:
# 442 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SELT_R2
	goto_if 0, ParcelWetlands_Selt_2
	goto ParcelWetlands_Selt_1

ParcelWetlands_Selt_7:
# 446 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Selt_R3
	goto ParcelWetlands_Selt_6

ParcelWetlands_Selt_8:
# 445 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SELT_R3
	goto_if 0, ParcelWetlands_Selt_7
	goto ParcelWetlands_Selt_6

ParcelWetlands_Selt_12:
# 449 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Selt_R4
	goto ParcelWetlands_Selt_11

ParcelWetlands_Selt_13:
# 448 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SELT_R4
	goto_if 0, ParcelWetlands_Selt_12
	goto ParcelWetlands_Selt_11

ParcelWetlands_Selt_17:
# 452 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Selt_R5
	goto ParcelWetlands_Selt_16

ParcelWetlands_Selt_18:
# 451 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SELT_R5
	goto_if 0, ParcelWetlands_Selt_17
	goto ParcelWetlands_Selt_16


ParcelWetlands_Selt_FirstWin::
# 458 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_Text_2, MSGBOX_DEFAULT
# 459 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Selt_R2::
# 463 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 464 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 465 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R2_Text_0, MSGBOX_YESNO
# 466 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Selt_R2_2
# 471 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SELT_R2, ParcelWetlands_Selt_R2_Text_2
# 472 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R2_Text_3, MSGBOX_DEFAULT
# 473 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Selt_R2_2:
# 467 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R2_Text_1, MSGBOX_DEFAULT
# 468 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Selt_R3::
# 477 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 478 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 479 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R3_Text_0, MSGBOX_YESNO
# 480 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Selt_R3_2
# 485 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SELT_R3, ParcelWetlands_Selt_R3_Text_1
# 486 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R3_Text_2, MSGBOX_DEFAULT
# 487 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Selt_R3_2:
# 481 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R2_Text_1, MSGBOX_DEFAULT
# 482 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Selt_R4::
# 491 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 492 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 493 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R4_Text_0, MSGBOX_YESNO
# 494 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Selt_R4_2
# 499 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SELT_R4, ParcelWetlands_Selt_R3_Text_1
# 500 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R4_Text_1, MSGBOX_DEFAULT
# 501 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Selt_R4_2:
# 495 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R2_Text_1, MSGBOX_DEFAULT
# 496 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Selt_R5::
# 505 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 506 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 507 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R5_Text_0, MSGBOX_YESNO
# 508 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Selt_R5_2
# 513 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SELT_R5, ParcelWetlands_Selt_R5_Text_1
# 514 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R5_Text_2, MSGBOX_DEFAULT
# 515 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Selt_R5_2:
# 509 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R2_Text_1, MSGBOX_DEFAULT
# 510 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Mora::
# 519 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_POACHER_B, ParcelWetlands_Mora_Text_0, ParcelWetlands_Mora_Text_1, ParcelWetlands_Mora_FirstWin
# 523 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 524 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Mora_3
ParcelWetlands_Mora_1:
# 527 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Mora_8
ParcelWetlands_Mora_6:
# 530 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Mora_13
ParcelWetlands_Mora_11:
# 533 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Mora_18
ParcelWetlands_Mora_16:
# 536 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Mora_2:
# 525 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Mora_R2
	goto ParcelWetlands_Mora_1

ParcelWetlands_Mora_3:
# 524 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_POACHER_B_R2
	goto_if 0, ParcelWetlands_Mora_2
	goto ParcelWetlands_Mora_1

ParcelWetlands_Mora_7:
# 528 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Mora_R3
	goto ParcelWetlands_Mora_6

ParcelWetlands_Mora_8:
# 527 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_POACHER_B_R3
	goto_if 0, ParcelWetlands_Mora_7
	goto ParcelWetlands_Mora_6

ParcelWetlands_Mora_12:
# 531 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Mora_R4
	goto ParcelWetlands_Mora_11

ParcelWetlands_Mora_13:
# 530 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_POACHER_B_R4
	goto_if 0, ParcelWetlands_Mora_12
	goto ParcelWetlands_Mora_11

ParcelWetlands_Mora_17:
# 534 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Mora_R5
	goto ParcelWetlands_Mora_16

ParcelWetlands_Mora_18:
# 533 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_POACHER_B_R5
	goto_if 0, ParcelWetlands_Mora_17
	goto ParcelWetlands_Mora_16


ParcelWetlands_Mora_FirstWin::
# 540 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_Text_2, MSGBOX_DEFAULT
# 541 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Mora_R2::
# 545 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 546 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 547 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R2_Text_0, MSGBOX_YESNO
# 548 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Mora_R2_2
# 553 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_POACHER_B_R2, ParcelWetlands_Mora_R2_Text_2
# 554 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R2_Text_3, MSGBOX_DEFAULT
# 555 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Mora_R2_2:
# 549 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R2_Text_1, MSGBOX_DEFAULT
# 550 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Mora_R3::
# 559 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 560 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 561 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R3_Text_0, MSGBOX_YESNO
# 562 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Mora_R3_2
# 567 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_POACHER_B_R3, ParcelWetlands_Mora_R3_Text_1
# 568 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R3_Text_2, MSGBOX_DEFAULT
# 569 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Mora_R3_2:
# 563 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R2_Text_1, MSGBOX_DEFAULT
# 564 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Mora_R4::
# 573 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 574 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 575 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R4_Text_0, MSGBOX_YESNO
# 576 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Mora_R4_2
# 581 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_POACHER_B_R4, ParcelWetlands_Mora_R3_Text_1
# 582 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R4_Text_1, MSGBOX_DEFAULT
# 583 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Mora_R4_2:
# 577 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R2_Text_1, MSGBOX_DEFAULT
# 578 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Mora_R5::
# 587 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 588 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 589 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R5_Text_0, MSGBOX_YESNO
# 590 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Mora_R5_2
# 595 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_POACHER_B_R5, ParcelWetlands_Mora_R5_Text_1
# 596 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R5_Text_2, MSGBOX_DEFAULT
# 597 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Mora_R5_2:
# 591 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R2_Text_1, MSGBOX_DEFAULT
# 592 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bran::
# 601 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FORAGER, ParcelWetlands_Bran_Text_0, ParcelWetlands_Bran_Text_1, ParcelWetlands_Bran_FirstWin
# 605 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 606 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Bran_3
ParcelWetlands_Bran_1:
# 609 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Bran_8
ParcelWetlands_Bran_6:
# 612 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Bran_13
ParcelWetlands_Bran_11:
# 615 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Bran_18
ParcelWetlands_Bran_16:
# 618 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Bran_2:
# 607 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bran_R2
	goto ParcelWetlands_Bran_1

ParcelWetlands_Bran_3:
# 606 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_FORAGER_R2
	goto_if 0, ParcelWetlands_Bran_2
	goto ParcelWetlands_Bran_1

ParcelWetlands_Bran_7:
# 610 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bran_R3
	goto ParcelWetlands_Bran_6

ParcelWetlands_Bran_8:
# 609 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_FORAGER_R3
	goto_if 0, ParcelWetlands_Bran_7
	goto ParcelWetlands_Bran_6

ParcelWetlands_Bran_12:
# 613 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bran_R4
	goto ParcelWetlands_Bran_11

ParcelWetlands_Bran_13:
# 612 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_FORAGER_R4
	goto_if 0, ParcelWetlands_Bran_12
	goto ParcelWetlands_Bran_11

ParcelWetlands_Bran_17:
# 616 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bran_R5
	goto ParcelWetlands_Bran_16

ParcelWetlands_Bran_18:
# 615 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_FORAGER_R5
	goto_if 0, ParcelWetlands_Bran_17
	goto ParcelWetlands_Bran_16


ParcelWetlands_Bran_FirstWin::
# 622 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_Text_2, MSGBOX_DEFAULT
# 623 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bran_R2::
# 627 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 628 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 629 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R2_Text_0, MSGBOX_YESNO
# 630 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bran_R2_2
# 635 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FORAGER_R2, ParcelWetlands_Bran_R2_Text_2
# 636 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R2_Text_3, MSGBOX_DEFAULT
# 637 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bran_R2_2:
# 631 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R2_Text_1, MSGBOX_DEFAULT
# 632 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bran_R3::
# 641 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 642 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 643 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R3_Text_0, MSGBOX_YESNO
# 644 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bran_R3_2
# 649 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FORAGER_R3, ParcelWetlands_Bran_R3_Text_1
# 650 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R3_Text_2, MSGBOX_DEFAULT
# 651 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bran_R3_2:
# 645 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R2_Text_1, MSGBOX_DEFAULT
# 646 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bran_R4::
# 655 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 656 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 657 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R4_Text_0, MSGBOX_YESNO
# 658 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bran_R4_2
# 663 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FORAGER_R4, ParcelWetlands_Bran_R4_Text_1
# 664 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R4_Text_2, MSGBOX_DEFAULT
# 665 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bran_R4_2:
# 659 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R2_Text_1, MSGBOX_DEFAULT
# 660 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bran_R5::
# 669 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 670 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 671 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R5_Text_0, MSGBOX_YESNO
# 672 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bran_R5_2
# 677 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FORAGER_R5, ParcelWetlands_Bran_R5_Text_1
# 678 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R5_Text_2, MSGBOX_DEFAULT
# 679 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bran_R5_2:
# 673 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R2_Text_1, MSGBOX_DEFAULT
# 674 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Kalle::
# 685 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_KALLE, ParcelWetlands_Kalle_Text_0, ParcelWetlands_Kalle_Text_1, ParcelWetlands_Kalle_FirstWin
# 689 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 690 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Kalle_3
ParcelWetlands_Kalle_1:
# 693 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Kalle_8
ParcelWetlands_Kalle_6:
# 696 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Kalle_13
ParcelWetlands_Kalle_11:
# 699 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Kalle_18
ParcelWetlands_Kalle_16:
# 702 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Kalle_2:
# 691 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Kalle_R2
	goto ParcelWetlands_Kalle_1

ParcelWetlands_Kalle_3:
# 690 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_KALLE_R2
	goto_if 0, ParcelWetlands_Kalle_2
	goto ParcelWetlands_Kalle_1

ParcelWetlands_Kalle_7:
# 694 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Kalle_R3
	goto ParcelWetlands_Kalle_6

ParcelWetlands_Kalle_8:
# 693 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_KALLE_R3
	goto_if 0, ParcelWetlands_Kalle_7
	goto ParcelWetlands_Kalle_6

ParcelWetlands_Kalle_12:
# 697 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Kalle_R4
	goto ParcelWetlands_Kalle_11

ParcelWetlands_Kalle_13:
# 696 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_KALLE_R4
	goto_if 0, ParcelWetlands_Kalle_12
	goto ParcelWetlands_Kalle_11

ParcelWetlands_Kalle_17:
# 700 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Kalle_R5
	goto ParcelWetlands_Kalle_16

ParcelWetlands_Kalle_18:
# 699 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_KALLE_R5
	goto_if 0, ParcelWetlands_Kalle_17
	goto ParcelWetlands_Kalle_16


ParcelWetlands_Kalle_FirstWin::
# 706 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_Text_2, MSGBOX_DEFAULT
# 707 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Kalle_R2::
# 711 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 712 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 713 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R2_Text_0, MSGBOX_YESNO
# 714 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Kalle_R2_2
# 719 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_KALLE_R2, ParcelWetlands_Kalle_R2_Text_2
# 720 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R2_Text_3, MSGBOX_DEFAULT
# 721 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Kalle_R2_2:
# 715 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R2_Text_1, MSGBOX_DEFAULT
# 716 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Kalle_R3::
# 725 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 726 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 727 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R3_Text_0, MSGBOX_YESNO
# 728 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Kalle_R3_2
# 733 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_KALLE_R3, ParcelWetlands_Kalle_R3_Text_1
# 734 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R3_Text_2, MSGBOX_DEFAULT
# 735 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Kalle_R3_2:
# 729 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R2_Text_1, MSGBOX_DEFAULT
# 730 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Kalle_R4::
# 739 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 740 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 741 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R4_Text_0, MSGBOX_YESNO
# 742 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Kalle_R4_2
# 747 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_KALLE_R4, ParcelWetlands_Kalle_R4_Text_1
# 748 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R4_Text_2, MSGBOX_DEFAULT
# 749 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Kalle_R4_2:
# 743 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R2_Text_1, MSGBOX_DEFAULT
# 744 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Kalle_R5::
# 753 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 754 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 755 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R5_Text_0, MSGBOX_YESNO
# 756 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Kalle_R5_2
# 761 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_KALLE_R5, ParcelWetlands_Kalle_R5_Text_1
# 762 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R5_Text_2, MSGBOX_DEFAULT
# 763 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Kalle_R5_2:
# 757 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R2_Text_1, MSGBOX_DEFAULT
# 758 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Liv::
# 767 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_LIV, ParcelWetlands_Liv_Text_0, ParcelWetlands_Liv_Text_1, ParcelWetlands_Liv_FirstWin
# 771 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 772 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Liv_3
ParcelWetlands_Liv_1:
# 775 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Liv_8
ParcelWetlands_Liv_6:
# 778 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Liv_13
ParcelWetlands_Liv_11:
# 781 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Liv_18
ParcelWetlands_Liv_16:
# 784 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Liv_2:
# 773 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Liv_R2
	goto ParcelWetlands_Liv_1

ParcelWetlands_Liv_3:
# 772 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_LIV_R2
	goto_if 0, ParcelWetlands_Liv_2
	goto ParcelWetlands_Liv_1

ParcelWetlands_Liv_7:
# 776 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Liv_R3
	goto ParcelWetlands_Liv_6

ParcelWetlands_Liv_8:
# 775 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_LIV_R3
	goto_if 0, ParcelWetlands_Liv_7
	goto ParcelWetlands_Liv_6

ParcelWetlands_Liv_12:
# 779 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Liv_R4
	goto ParcelWetlands_Liv_11

ParcelWetlands_Liv_13:
# 778 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_LIV_R4
	goto_if 0, ParcelWetlands_Liv_12
	goto ParcelWetlands_Liv_11

ParcelWetlands_Liv_17:
# 782 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Liv_R5
	goto ParcelWetlands_Liv_16

ParcelWetlands_Liv_18:
# 781 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_LIV_R5
	goto_if 0, ParcelWetlands_Liv_17
	goto ParcelWetlands_Liv_16


ParcelWetlands_Liv_FirstWin::
# 788 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_Text_2, MSGBOX_DEFAULT
# 789 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Liv_R2::
# 793 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 794 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 795 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R2_Text_0, MSGBOX_YESNO
# 796 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Liv_R2_2
# 801 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_LIV_R2, ParcelWetlands_Liv_R2_Text_2
# 802 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R2_Text_3, MSGBOX_DEFAULT
# 803 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Liv_R2_2:
# 797 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R2_Text_1, MSGBOX_DEFAULT
# 798 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Liv_R3::
# 807 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 808 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 809 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R3_Text_0, MSGBOX_YESNO
# 810 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Liv_R3_2
# 815 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_LIV_R3, ParcelWetlands_Liv_R3_Text_1
# 816 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R3_Text_2, MSGBOX_DEFAULT
# 817 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Liv_R3_2:
# 811 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R2_Text_1, MSGBOX_DEFAULT
# 812 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Liv_R4::
# 821 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 822 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 823 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R4_Text_0, MSGBOX_YESNO
# 824 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Liv_R4_2
# 829 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_LIV_R4, ParcelWetlands_Liv_R4_Text_1
# 830 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R4_Text_2, MSGBOX_DEFAULT
# 831 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Liv_R4_2:
# 825 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R2_Text_1, MSGBOX_DEFAULT
# 826 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Liv_R5::
# 835 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 836 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 837 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R5_Text_0, MSGBOX_YESNO
# 838 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Liv_R5_2
# 843 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_LIV_R5, ParcelWetlands_Liv_R2_Text_2
# 844 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R5_Text_1, MSGBOX_DEFAULT
# 845 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Liv_R5_2:
# 839 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R2_Text_1, MSGBOX_DEFAULT
# 840 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Toke::
# 849 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_TOKE, ParcelWetlands_Toke_Text_0, ParcelWetlands_Toke_Text_1, ParcelWetlands_Toke_FirstWin
# 853 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 854 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Toke_3
ParcelWetlands_Toke_1:
# 857 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Toke_8
ParcelWetlands_Toke_6:
# 860 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Toke_13
ParcelWetlands_Toke_11:
# 863 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Toke_18
ParcelWetlands_Toke_16:
# 866 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Toke_2:
# 855 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Toke_R2
	goto ParcelWetlands_Toke_1

ParcelWetlands_Toke_3:
# 854 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_TOKE_R2
	goto_if 0, ParcelWetlands_Toke_2
	goto ParcelWetlands_Toke_1

ParcelWetlands_Toke_7:
# 858 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Toke_R3
	goto ParcelWetlands_Toke_6

ParcelWetlands_Toke_8:
# 857 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_TOKE_R3
	goto_if 0, ParcelWetlands_Toke_7
	goto ParcelWetlands_Toke_6

ParcelWetlands_Toke_12:
# 861 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Toke_R4
	goto ParcelWetlands_Toke_11

ParcelWetlands_Toke_13:
# 860 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_TOKE_R4
	goto_if 0, ParcelWetlands_Toke_12
	goto ParcelWetlands_Toke_11

ParcelWetlands_Toke_17:
# 864 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Toke_R5
	goto ParcelWetlands_Toke_16

ParcelWetlands_Toke_18:
# 863 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_TOKE_R5
	goto_if 0, ParcelWetlands_Toke_17
	goto ParcelWetlands_Toke_16


ParcelWetlands_Toke_FirstWin::
# 870 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_Text_2, MSGBOX_DEFAULT
# 871 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Toke_R2::
# 875 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 876 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 877 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R2_Text_0, MSGBOX_YESNO
# 878 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Toke_R2_2
# 883 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_TOKE_R2, ParcelWetlands_Toke_R2_Text_2
# 884 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R2_Text_3, MSGBOX_DEFAULT
# 885 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Toke_R2_2:
# 879 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R2_Text_1, MSGBOX_DEFAULT
# 880 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Toke_R3::
# 889 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 890 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 891 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R3_Text_0, MSGBOX_YESNO
# 892 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Toke_R3_2
# 897 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_TOKE_R3, ParcelWetlands_Toke_R3_Text_1
# 898 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R3_Text_2, MSGBOX_DEFAULT
# 899 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Toke_R3_2:
# 893 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R2_Text_1, MSGBOX_DEFAULT
# 894 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Toke_R4::
# 903 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 904 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 905 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R4_Text_0, MSGBOX_YESNO
# 906 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Toke_R4_2
# 911 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_TOKE_R4, ParcelWetlands_Toke_R4_Text_1
# 912 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R4_Text_2, MSGBOX_DEFAULT
# 913 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Toke_R4_2:
# 907 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R2_Text_1, MSGBOX_DEFAULT
# 908 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Toke_R5::
# 917 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 918 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 919 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R5_Text_0, MSGBOX_YESNO
# 920 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Toke_R5_2
# 925 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_TOKE_R5, ParcelWetlands_Toke_R3_Text_1
# 926 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R5_Text_1, MSGBOX_DEFAULT
# 927 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Toke_R5_2:
# 921 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R2_Text_1, MSGBOX_DEFAULT
# 922 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Jorun::
# 931 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_JORUN, ParcelWetlands_Jorun_Text_0, ParcelWetlands_Jorun_Text_1, ParcelWetlands_Jorun_FirstWin
# 935 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 936 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Jorun_3
ParcelWetlands_Jorun_1:
# 939 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Jorun_8
ParcelWetlands_Jorun_6:
# 942 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Jorun_13
ParcelWetlands_Jorun_11:
# 945 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Jorun_18
ParcelWetlands_Jorun_16:
# 948 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Jorun_2:
# 937 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Jorun_R2
	goto ParcelWetlands_Jorun_1

ParcelWetlands_Jorun_3:
# 936 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_JORUN_R2
	goto_if 0, ParcelWetlands_Jorun_2
	goto ParcelWetlands_Jorun_1

ParcelWetlands_Jorun_7:
# 940 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Jorun_R3
	goto ParcelWetlands_Jorun_6

ParcelWetlands_Jorun_8:
# 939 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_JORUN_R3
	goto_if 0, ParcelWetlands_Jorun_7
	goto ParcelWetlands_Jorun_6

ParcelWetlands_Jorun_12:
# 943 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Jorun_R4
	goto ParcelWetlands_Jorun_11

ParcelWetlands_Jorun_13:
# 942 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_JORUN_R4
	goto_if 0, ParcelWetlands_Jorun_12
	goto ParcelWetlands_Jorun_11

ParcelWetlands_Jorun_17:
# 946 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Jorun_R5
	goto ParcelWetlands_Jorun_16

ParcelWetlands_Jorun_18:
# 945 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_JORUN_R5
	goto_if 0, ParcelWetlands_Jorun_17
	goto ParcelWetlands_Jorun_16


ParcelWetlands_Jorun_FirstWin::
# 952 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_Text_2, MSGBOX_DEFAULT
# 953 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Jorun_R2::
# 957 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 958 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 959 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R2_Text_0, MSGBOX_YESNO
# 960 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Jorun_R2_2
# 965 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_JORUN_R2, ParcelWetlands_Jorun_R2_Text_2
# 966 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R2_Text_3, MSGBOX_DEFAULT
# 967 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Jorun_R2_2:
# 961 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R2_Text_1, MSGBOX_DEFAULT
# 962 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Jorun_R3::
# 971 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 972 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 973 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R3_Text_0, MSGBOX_YESNO
# 974 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Jorun_R3_2
# 979 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_JORUN_R3, ParcelWetlands_Jorun_R2_Text_2
# 980 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R3_Text_1, MSGBOX_DEFAULT
# 981 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Jorun_R3_2:
# 975 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R2_Text_1, MSGBOX_DEFAULT
# 976 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Jorun_R4::
# 985 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 986 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 987 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R4_Text_0, MSGBOX_YESNO
# 988 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Jorun_R4_2
# 993 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_JORUN_R4, ParcelWetlands_Jorun_R4_Text_1
# 994 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R4_Text_2, MSGBOX_DEFAULT
# 995 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Jorun_R4_2:
# 989 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R2_Text_1, MSGBOX_DEFAULT
# 990 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Jorun_R5::
# 999 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1000 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1001 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R5_Text_0, MSGBOX_YESNO
# 1002 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Jorun_R5_2
# 1007 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_JORUN_R5, ParcelWetlands_Jorun_R4_Text_1
# 1008 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R5_Text_1, MSGBOX_DEFAULT
# 1009 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Jorun_R5_2:
# 1003 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R2_Text_1, MSGBOX_DEFAULT
# 1004 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Stian::
# 1013 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_STIAN, ParcelWetlands_Stian_Text_0, ParcelWetlands_Stian_Text_1, ParcelWetlands_Stian_FirstWin
# 1017 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1018 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Stian_3
ParcelWetlands_Stian_1:
# 1021 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Stian_8
ParcelWetlands_Stian_6:
# 1024 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Stian_13
ParcelWetlands_Stian_11:
# 1027 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Stian_18
ParcelWetlands_Stian_16:
# 1030 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Stian_2:
# 1019 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Stian_R2
	goto ParcelWetlands_Stian_1

ParcelWetlands_Stian_3:
# 1018 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_STIAN_R2
	goto_if 0, ParcelWetlands_Stian_2
	goto ParcelWetlands_Stian_1

ParcelWetlands_Stian_7:
# 1022 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Stian_R3
	goto ParcelWetlands_Stian_6

ParcelWetlands_Stian_8:
# 1021 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_STIAN_R3
	goto_if 0, ParcelWetlands_Stian_7
	goto ParcelWetlands_Stian_6

ParcelWetlands_Stian_12:
# 1025 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Stian_R4
	goto ParcelWetlands_Stian_11

ParcelWetlands_Stian_13:
# 1024 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_STIAN_R4
	goto_if 0, ParcelWetlands_Stian_12
	goto ParcelWetlands_Stian_11

ParcelWetlands_Stian_17:
# 1028 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Stian_R5
	goto ParcelWetlands_Stian_16

ParcelWetlands_Stian_18:
# 1027 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_STIAN_R5
	goto_if 0, ParcelWetlands_Stian_17
	goto ParcelWetlands_Stian_16


ParcelWetlands_Stian_FirstWin::
# 1034 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_Text_2, MSGBOX_DEFAULT
# 1035 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Stian_R2::
# 1039 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1040 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1041 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R2_Text_0, MSGBOX_YESNO
# 1042 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Stian_R2_2
# 1047 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_STIAN_R2, ParcelWetlands_Stian_R2_Text_2
# 1048 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R2_Text_3, MSGBOX_DEFAULT
# 1049 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Stian_R2_2:
# 1043 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R2_Text_1, MSGBOX_DEFAULT
# 1044 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Stian_R3::
# 1053 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1054 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1055 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R3_Text_0, MSGBOX_YESNO
# 1056 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Stian_R3_2
# 1061 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_STIAN_R3, ParcelWetlands_Stian_R3_Text_1
# 1062 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R3_Text_2, MSGBOX_DEFAULT
# 1063 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Stian_R3_2:
# 1057 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R2_Text_1, MSGBOX_DEFAULT
# 1058 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Stian_R4::
# 1067 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1068 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1069 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R4_Text_0, MSGBOX_YESNO
# 1070 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Stian_R4_2
# 1075 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_STIAN_R4, ParcelWetlands_Stian_R4_Text_1
# 1076 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R4_Text_2, MSGBOX_DEFAULT
# 1077 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Stian_R4_2:
# 1071 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R2_Text_1, MSGBOX_DEFAULT
# 1072 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Stian_R5::
# 1081 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1082 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1083 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R5_Text_0, MSGBOX_YESNO
# 1084 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Stian_R5_2
# 1089 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_STIAN_R5, ParcelWetlands_Stian_R5_Text_1
# 1090 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R5_Text_2, MSGBOX_DEFAULT
# 1091 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Stian_R5_2:
# 1085 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R2_Text_1, MSGBOX_DEFAULT
# 1086 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Asta::
# 1095 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_ASTA, ParcelWetlands_Asta_Text_0, ParcelWetlands_Asta_Text_1, ParcelWetlands_Asta_FirstWin
# 1099 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1100 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Asta_3
ParcelWetlands_Asta_1:
# 1103 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Asta_8
ParcelWetlands_Asta_6:
# 1106 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Asta_13
ParcelWetlands_Asta_11:
# 1109 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Asta_18
ParcelWetlands_Asta_16:
# 1112 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Asta_2:
# 1101 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Asta_R2
	goto ParcelWetlands_Asta_1

ParcelWetlands_Asta_3:
# 1100 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ASTA_R2
	goto_if 0, ParcelWetlands_Asta_2
	goto ParcelWetlands_Asta_1

ParcelWetlands_Asta_7:
# 1104 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Asta_R3
	goto ParcelWetlands_Asta_6

ParcelWetlands_Asta_8:
# 1103 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ASTA_R3
	goto_if 0, ParcelWetlands_Asta_7
	goto ParcelWetlands_Asta_6

ParcelWetlands_Asta_12:
# 1107 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Asta_R4
	goto ParcelWetlands_Asta_11

ParcelWetlands_Asta_13:
# 1106 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ASTA_R4
	goto_if 0, ParcelWetlands_Asta_12
	goto ParcelWetlands_Asta_11

ParcelWetlands_Asta_17:
# 1110 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Asta_R5
	goto ParcelWetlands_Asta_16

ParcelWetlands_Asta_18:
# 1109 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ASTA_R5
	goto_if 0, ParcelWetlands_Asta_17
	goto ParcelWetlands_Asta_16


ParcelWetlands_Asta_FirstWin::
# 1116 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_Text_2, MSGBOX_DEFAULT
# 1117 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Asta_R2::
# 1121 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1122 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1123 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R2_Text_0, MSGBOX_YESNO
# 1124 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Asta_R2_2
# 1129 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ASTA_R2, ParcelWetlands_Asta_R2_Text_2
# 1130 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R2_Text_3, MSGBOX_DEFAULT
# 1131 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Asta_R2_2:
# 1125 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R2_Text_1, MSGBOX_DEFAULT
# 1126 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Asta_R3::
# 1135 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1136 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1137 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R3_Text_0, MSGBOX_YESNO
# 1138 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Asta_R3_2
# 1143 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ASTA_R3, ParcelWetlands_Asta_R2_Text_2
# 1144 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R3_Text_1, MSGBOX_DEFAULT
# 1145 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Asta_R3_2:
# 1139 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R2_Text_1, MSGBOX_DEFAULT
# 1140 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Asta_R4::
# 1149 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1150 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1151 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R4_Text_0, MSGBOX_YESNO
# 1152 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Asta_R4_2
# 1157 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ASTA_R4, ParcelWetlands_Asta_R4_Text_1
# 1158 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R4_Text_2, MSGBOX_DEFAULT
# 1159 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Asta_R4_2:
# 1153 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R2_Text_1, MSGBOX_DEFAULT
# 1154 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Asta_R5::
# 1163 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1164 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1165 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R5_Text_0, MSGBOX_YESNO
# 1166 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Asta_R5_2
# 1171 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ASTA_R5, ParcelWetlands_Asta_R5_Text_1
# 1172 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R5_Text_2, MSGBOX_DEFAULT
# 1173 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Asta_R5_2:
# 1167 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R2_Text_1, MSGBOX_DEFAULT
# 1168 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bjarte::
# 1177 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_BJARTE, ParcelWetlands_Bjarte_Text_0, ParcelWetlands_Bjarte_Text_1, ParcelWetlands_Bjarte_FirstWin
# 1181 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1182 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Bjarte_3
ParcelWetlands_Bjarte_1:
# 1185 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Bjarte_8
ParcelWetlands_Bjarte_6:
# 1188 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Bjarte_13
ParcelWetlands_Bjarte_11:
# 1191 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Bjarte_18
ParcelWetlands_Bjarte_16:
# 1194 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Bjarte_2:
# 1183 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bjarte_R2
	goto ParcelWetlands_Bjarte_1

ParcelWetlands_Bjarte_3:
# 1182 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_BJARTE_R2
	goto_if 0, ParcelWetlands_Bjarte_2
	goto ParcelWetlands_Bjarte_1

ParcelWetlands_Bjarte_7:
# 1186 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bjarte_R3
	goto ParcelWetlands_Bjarte_6

ParcelWetlands_Bjarte_8:
# 1185 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_BJARTE_R3
	goto_if 0, ParcelWetlands_Bjarte_7
	goto ParcelWetlands_Bjarte_6

ParcelWetlands_Bjarte_12:
# 1189 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bjarte_R4
	goto ParcelWetlands_Bjarte_11

ParcelWetlands_Bjarte_13:
# 1188 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_BJARTE_R4
	goto_if 0, ParcelWetlands_Bjarte_12
	goto ParcelWetlands_Bjarte_11

ParcelWetlands_Bjarte_17:
# 1192 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bjarte_R5
	goto ParcelWetlands_Bjarte_16

ParcelWetlands_Bjarte_18:
# 1191 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_BJARTE_R5
	goto_if 0, ParcelWetlands_Bjarte_17
	goto ParcelWetlands_Bjarte_16


ParcelWetlands_Bjarte_FirstWin::
# 1198 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_Text_2, MSGBOX_DEFAULT
# 1199 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bjarte_R2::
# 1203 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1204 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1205 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R2_Text_0, MSGBOX_YESNO
# 1206 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bjarte_R2_2
# 1211 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_BJARTE_R2, ParcelWetlands_Bjarte_R2_Text_2
# 1212 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R2_Text_3, MSGBOX_DEFAULT
# 1213 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bjarte_R2_2:
# 1207 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R2_Text_1, MSGBOX_DEFAULT
# 1208 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bjarte_R3::
# 1217 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1218 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1219 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R3_Text_0, MSGBOX_YESNO
# 1220 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bjarte_R3_2
# 1225 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_BJARTE_R3, ParcelWetlands_Bjarte_R3_Text_1
# 1226 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R3_Text_2, MSGBOX_DEFAULT
# 1227 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bjarte_R3_2:
# 1221 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R2_Text_1, MSGBOX_DEFAULT
# 1222 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bjarte_R4::
# 1231 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1232 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1233 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R4_Text_0, MSGBOX_YESNO
# 1234 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bjarte_R4_2
# 1239 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_BJARTE_R4, ParcelWetlands_Bjarte_R4_Text_1
# 1240 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R4_Text_2, MSGBOX_DEFAULT
# 1241 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bjarte_R4_2:
# 1235 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R2_Text_1, MSGBOX_DEFAULT
# 1236 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bjarte_R5::
# 1245 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1246 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1247 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R5_Text_0, MSGBOX_YESNO
# 1248 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bjarte_R5_2
# 1253 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_BJARTE_R5, ParcelWetlands_Bjarte_R5_Text_1
# 1254 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R5_Text_2, MSGBOX_DEFAULT
# 1255 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bjarte_R5_2:
# 1249 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R2_Text_1, MSGBOX_DEFAULT
# 1250 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Odd::
# 1259 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_ODD, ParcelWetlands_Odd_Text_0, ParcelWetlands_Odd_Text_1, ParcelWetlands_Odd_FirstWin
# 1263 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1264 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Odd_3
ParcelWetlands_Odd_1:
# 1267 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Odd_8
ParcelWetlands_Odd_6:
# 1270 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Odd_13
ParcelWetlands_Odd_11:
# 1273 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Odd_18
ParcelWetlands_Odd_16:
# 1276 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Odd_2:
# 1265 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Odd_R2
	goto ParcelWetlands_Odd_1

ParcelWetlands_Odd_3:
# 1264 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ODD_R2
	goto_if 0, ParcelWetlands_Odd_2
	goto ParcelWetlands_Odd_1

ParcelWetlands_Odd_7:
# 1268 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Odd_R3
	goto ParcelWetlands_Odd_6

ParcelWetlands_Odd_8:
# 1267 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ODD_R3
	goto_if 0, ParcelWetlands_Odd_7
	goto ParcelWetlands_Odd_6

ParcelWetlands_Odd_12:
# 1271 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Odd_R4
	goto ParcelWetlands_Odd_11

ParcelWetlands_Odd_13:
# 1270 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ODD_R4
	goto_if 0, ParcelWetlands_Odd_12
	goto ParcelWetlands_Odd_11

ParcelWetlands_Odd_17:
# 1274 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Odd_R5
	goto ParcelWetlands_Odd_16

ParcelWetlands_Odd_18:
# 1273 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ODD_R5
	goto_if 0, ParcelWetlands_Odd_17
	goto ParcelWetlands_Odd_16


ParcelWetlands_Odd_FirstWin::
# 1280 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_Text_2, MSGBOX_DEFAULT
# 1281 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Odd_R2::
# 1285 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1286 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1287 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R2_Text_0, MSGBOX_YESNO
# 1288 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Odd_R2_2
# 1293 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ODD_R2, ParcelWetlands_Odd_R2_Text_2
# 1294 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R2_Text_3, MSGBOX_DEFAULT
# 1295 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Odd_R2_2:
# 1289 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R2_Text_1, MSGBOX_DEFAULT
# 1290 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Odd_R3::
# 1299 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1300 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1301 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R3_Text_0, MSGBOX_YESNO
# 1302 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Odd_R3_2
# 1307 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ODD_R3, ParcelWetlands_Odd_R3_Text_1
# 1308 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R3_Text_2, MSGBOX_DEFAULT
# 1309 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Odd_R3_2:
# 1303 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R2_Text_1, MSGBOX_DEFAULT
# 1304 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Odd_R4::
# 1313 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1314 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1315 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R4_Text_0, MSGBOX_YESNO
# 1316 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Odd_R4_2
# 1321 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ODD_R4, ParcelWetlands_Odd_R4_Text_1
# 1322 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R4_Text_2, MSGBOX_DEFAULT
# 1323 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Odd_R4_2:
# 1317 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R2_Text_1, MSGBOX_DEFAULT
# 1318 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Odd_R5::
# 1327 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1328 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1329 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R5_Text_0, MSGBOX_YESNO
# 1330 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Odd_R5_2
# 1335 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ODD_R5, ParcelWetlands_Odd_R4_Text_1
# 1336 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R5_Text_1, MSGBOX_DEFAULT
# 1337 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Odd_R5_2:
# 1331 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R2_Text_1, MSGBOX_DEFAULT
# 1332 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Haakon::
# 1341 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_HAAKON, ParcelWetlands_Haakon_Text_0, ParcelWetlands_Haakon_Text_1, ParcelWetlands_Haakon_FirstWin
# 1345 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1346 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Haakon_3
ParcelWetlands_Haakon_1:
# 1349 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Haakon_8
ParcelWetlands_Haakon_6:
# 1352 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Haakon_13
ParcelWetlands_Haakon_11:
# 1355 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Haakon_18
ParcelWetlands_Haakon_16:
# 1358 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Haakon_2:
# 1347 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Haakon_R2
	goto ParcelWetlands_Haakon_1

ParcelWetlands_Haakon_3:
# 1346 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_HAAKON_R2
	goto_if 0, ParcelWetlands_Haakon_2
	goto ParcelWetlands_Haakon_1

ParcelWetlands_Haakon_7:
# 1350 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Haakon_R3
	goto ParcelWetlands_Haakon_6

ParcelWetlands_Haakon_8:
# 1349 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_HAAKON_R3
	goto_if 0, ParcelWetlands_Haakon_7
	goto ParcelWetlands_Haakon_6

ParcelWetlands_Haakon_12:
# 1353 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Haakon_R4
	goto ParcelWetlands_Haakon_11

ParcelWetlands_Haakon_13:
# 1352 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_HAAKON_R4
	goto_if 0, ParcelWetlands_Haakon_12
	goto ParcelWetlands_Haakon_11

ParcelWetlands_Haakon_17:
# 1356 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Haakon_R5
	goto ParcelWetlands_Haakon_16

ParcelWetlands_Haakon_18:
# 1355 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_HAAKON_R5
	goto_if 0, ParcelWetlands_Haakon_17
	goto ParcelWetlands_Haakon_16


ParcelWetlands_Haakon_FirstWin::
# 1362 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_Text_2, MSGBOX_DEFAULT
# 1363 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Haakon_R2::
# 1367 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1368 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1369 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R2_Text_0, MSGBOX_YESNO
# 1370 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Haakon_R2_2
# 1375 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_HAAKON_R2, ParcelWetlands_Haakon_R2_Text_2
# 1376 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R2_Text_3, MSGBOX_DEFAULT
# 1377 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Haakon_R2_2:
# 1371 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R2_Text_1, MSGBOX_DEFAULT
# 1372 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Haakon_R3::
# 1381 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1382 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1383 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R3_Text_0, MSGBOX_YESNO
# 1384 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Haakon_R3_2
# 1389 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_HAAKON_R3, ParcelWetlands_Haakon_R3_Text_1
# 1390 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R3_Text_2, MSGBOX_DEFAULT
# 1391 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Haakon_R3_2:
# 1385 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R2_Text_1, MSGBOX_DEFAULT
# 1386 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Haakon_R4::
# 1395 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1396 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1397 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R4_Text_0, MSGBOX_YESNO
# 1398 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Haakon_R4_2
# 1403 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_HAAKON_R4, ParcelWetlands_Haakon_R4_Text_1
# 1404 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R4_Text_2, MSGBOX_DEFAULT
# 1405 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Haakon_R4_2:
# 1399 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R2_Text_1, MSGBOX_DEFAULT
# 1400 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Haakon_R5::
# 1409 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1410 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1411 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R5_Text_0, MSGBOX_YESNO
# 1412 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Haakon_R5_2
# 1417 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_HAAKON_R5, ParcelWetlands_Haakon_R5_Text_1
# 1418 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R5_Text_2, MSGBOX_DEFAULT
# 1419 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Haakon_R5_2:
# 1413 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R2_Text_1, MSGBOX_DEFAULT
# 1414 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Eirik::
# 1423 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_EIRIK, ParcelWetlands_Eirik_Text_0, ParcelWetlands_Eirik_Text_1, ParcelWetlands_Eirik_FirstWin
# 1427 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1428 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Eirik_3
ParcelWetlands_Eirik_1:
# 1431 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Eirik_8
ParcelWetlands_Eirik_6:
# 1434 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Eirik_13
ParcelWetlands_Eirik_11:
# 1437 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Eirik_18
ParcelWetlands_Eirik_16:
# 1440 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Eirik_2:
# 1429 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Eirik_R2
	goto ParcelWetlands_Eirik_1

ParcelWetlands_Eirik_3:
# 1428 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_EIRIK_R2
	goto_if 0, ParcelWetlands_Eirik_2
	goto ParcelWetlands_Eirik_1

ParcelWetlands_Eirik_7:
# 1432 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Eirik_R3
	goto ParcelWetlands_Eirik_6

ParcelWetlands_Eirik_8:
# 1431 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_EIRIK_R3
	goto_if 0, ParcelWetlands_Eirik_7
	goto ParcelWetlands_Eirik_6

ParcelWetlands_Eirik_12:
# 1435 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Eirik_R4
	goto ParcelWetlands_Eirik_11

ParcelWetlands_Eirik_13:
# 1434 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_EIRIK_R4
	goto_if 0, ParcelWetlands_Eirik_12
	goto ParcelWetlands_Eirik_11

ParcelWetlands_Eirik_17:
# 1438 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Eirik_R5
	goto ParcelWetlands_Eirik_16

ParcelWetlands_Eirik_18:
# 1437 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_EIRIK_R5
	goto_if 0, ParcelWetlands_Eirik_17
	goto ParcelWetlands_Eirik_16


ParcelWetlands_Eirik_FirstWin::
# 1444 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_Text_2, MSGBOX_DEFAULT
# 1445 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Eirik_R2::
# 1449 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1450 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1451 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R2_Text_0, MSGBOX_YESNO
# 1452 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Eirik_R2_2
# 1457 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_EIRIK_R2, ParcelWetlands_Eirik_R2_Text_2
# 1458 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R2_Text_3, MSGBOX_DEFAULT
# 1459 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Eirik_R2_2:
# 1453 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R2_Text_1, MSGBOX_DEFAULT
# 1454 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Eirik_R3::
# 1463 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1464 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1465 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R3_Text_0, MSGBOX_YESNO
# 1466 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Eirik_R3_2
# 1471 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_EIRIK_R3, ParcelWetlands_Eirik_R3_Text_1
# 1472 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R3_Text_2, MSGBOX_DEFAULT
# 1473 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Eirik_R3_2:
# 1467 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R2_Text_1, MSGBOX_DEFAULT
# 1468 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Eirik_R4::
# 1477 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1478 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1479 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R4_Text_0, MSGBOX_YESNO
# 1480 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Eirik_R4_2
# 1485 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_EIRIK_R4, ParcelWetlands_Eirik_R3_Text_1
# 1486 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R4_Text_1, MSGBOX_DEFAULT
# 1487 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Eirik_R4_2:
# 1481 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R2_Text_1, MSGBOX_DEFAULT
# 1482 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Eirik_R5::
# 1491 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1492 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1493 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R5_Text_0, MSGBOX_YESNO
# 1494 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Eirik_R5_2
# 1499 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_EIRIK_R5, ParcelWetlands_Eirik_R2_Text_2
# 1500 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R5_Text_1, MSGBOX_DEFAULT
# 1501 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Eirik_R5_2:
# 1495 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R2_Text_1, MSGBOX_DEFAULT
# 1496 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Siv::
# 1505 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_SIV, ParcelWetlands_Siv_Text_0, ParcelWetlands_Siv_Text_1, ParcelWetlands_Siv_FirstWin
# 1509 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1510 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Siv_3
ParcelWetlands_Siv_1:
# 1513 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Siv_8
ParcelWetlands_Siv_6:
# 1516 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Siv_13
ParcelWetlands_Siv_11:
# 1519 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Siv_18
ParcelWetlands_Siv_16:
# 1522 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Siv_2:
# 1511 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Siv_R2
	goto ParcelWetlands_Siv_1

ParcelWetlands_Siv_3:
# 1510 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SIV_R2
	goto_if 0, ParcelWetlands_Siv_2
	goto ParcelWetlands_Siv_1

ParcelWetlands_Siv_7:
# 1514 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Siv_R3
	goto ParcelWetlands_Siv_6

ParcelWetlands_Siv_8:
# 1513 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SIV_R3
	goto_if 0, ParcelWetlands_Siv_7
	goto ParcelWetlands_Siv_6

ParcelWetlands_Siv_12:
# 1517 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Siv_R4
	goto ParcelWetlands_Siv_11

ParcelWetlands_Siv_13:
# 1516 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SIV_R4
	goto_if 0, ParcelWetlands_Siv_12
	goto ParcelWetlands_Siv_11

ParcelWetlands_Siv_17:
# 1520 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Siv_R5
	goto ParcelWetlands_Siv_16

ParcelWetlands_Siv_18:
# 1519 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SIV_R5
	goto_if 0, ParcelWetlands_Siv_17
	goto ParcelWetlands_Siv_16


ParcelWetlands_Siv_FirstWin::
# 1526 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_Text_2, MSGBOX_DEFAULT
# 1527 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Siv_R2::
# 1531 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1532 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1533 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R2_Text_0, MSGBOX_YESNO
# 1534 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Siv_R2_2
# 1539 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SIV_R2, ParcelWetlands_Siv_R2_Text_2
# 1540 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R2_Text_3, MSGBOX_DEFAULT
# 1541 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Siv_R2_2:
# 1535 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R2_Text_1, MSGBOX_DEFAULT
# 1536 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Siv_R3::
# 1545 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1546 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1547 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R3_Text_0, MSGBOX_YESNO
# 1548 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Siv_R3_2
# 1553 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SIV_R3, ParcelWetlands_Siv_R3_Text_1
# 1554 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R3_Text_2, MSGBOX_DEFAULT
# 1555 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Siv_R3_2:
# 1549 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R2_Text_1, MSGBOX_DEFAULT
# 1550 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Siv_R4::
# 1559 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1560 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1561 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R4_Text_0, MSGBOX_YESNO
# 1562 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Siv_R4_2
# 1567 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SIV_R4, ParcelWetlands_Siv_R2_Text_2
# 1568 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R4_Text_1, MSGBOX_DEFAULT
# 1569 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Siv_R4_2:
# 1563 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R2_Text_1, MSGBOX_DEFAULT
# 1564 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Siv_R5::
# 1573 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1574 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1575 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R5_Text_0, MSGBOX_YESNO
# 1576 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Siv_R5_2
# 1581 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SIV_R5, ParcelWetlands_Siv_R5_Text_1
# 1582 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R5_Text_2, MSGBOX_DEFAULT
# 1583 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Siv_R5_2:
# 1577 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R2_Text_1, MSGBOX_DEFAULT
# 1578 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_ItemAntidote::
# 1588 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_ANTIDOTE
	end


ParcelWetlands_ItemGreatBall::
# 1589 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelWetlands_ItemSuperPotion::
# 1590 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelWetlands_ItemNetBall::
# 1591 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_NET_BALL
	end


ParcelWetlands_SignLanding::
# 1594 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_SignLanding_Text_0, MSGBOX_SIGN
	end


ParcelWetlands_SignOffice::
# 1598 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_SignOffice_Text_0, MSGBOX_SIGN
	end


ParcelWetlands_SignRoute::
# 1602 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_SignRoute_Text_0, MSGBOX_SIGN
	end


ParcelWetlands_T_Paul::
# 1608 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_PAUL, ParcelWetlands_T_Paul_Text_0, ParcelWetlands_T_Paul_Text_1, ParcelWetlands_T_Paul_FirstWin
# 1612 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1613 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_T_Paul_3
ParcelWetlands_T_Paul_1:
# 1616 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_T_Paul_8
ParcelWetlands_T_Paul_6:
# 1619 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_T_Paul_13
ParcelWetlands_T_Paul_11:
# 1622 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_T_Paul_18
ParcelWetlands_T_Paul_16:
# 1625 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_T_Paul_2:
# 1614 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Paul_R2
	goto ParcelWetlands_T_Paul_1

ParcelWetlands_T_Paul_3:
# 1613 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_PAUL_R2
	goto_if 0, ParcelWetlands_T_Paul_2
	goto ParcelWetlands_T_Paul_1

ParcelWetlands_T_Paul_7:
# 1617 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Paul_R3
	goto ParcelWetlands_T_Paul_6

ParcelWetlands_T_Paul_8:
# 1616 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_PAUL_R3
	goto_if 0, ParcelWetlands_T_Paul_7
	goto ParcelWetlands_T_Paul_6

ParcelWetlands_T_Paul_12:
# 1620 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Paul_R4
	goto ParcelWetlands_T_Paul_11

ParcelWetlands_T_Paul_13:
# 1619 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_PAUL_R4
	goto_if 0, ParcelWetlands_T_Paul_12
	goto ParcelWetlands_T_Paul_11

ParcelWetlands_T_Paul_17:
# 1623 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Paul_R5
	goto ParcelWetlands_T_Paul_16

ParcelWetlands_T_Paul_18:
# 1622 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_PAUL_R5
	goto_if 0, ParcelWetlands_T_Paul_17
	goto ParcelWetlands_T_Paul_16


ParcelWetlands_T_Paul_FirstWin::
# 1629 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_Text_2, MSGBOX_DEFAULT
# 1630 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Paul_R2::
# 1634 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1635 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1636 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R2_Text_0, MSGBOX_YESNO
# 1637 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Paul_R2_2
# 1642 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_PAUL_R2, ParcelWetlands_T_Paul_R2_Text_2
# 1643 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R2_Text_3, MSGBOX_DEFAULT
# 1644 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Paul_R2_2:
# 1638 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R2_Text_1, MSGBOX_DEFAULT
# 1639 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Paul_R3::
# 1648 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1649 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1650 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R3_Text_0, MSGBOX_YESNO
# 1651 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Paul_R3_2
# 1656 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_PAUL_R3, ParcelWetlands_T_Paul_R3_Text_1
# 1657 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R3_Text_2, MSGBOX_DEFAULT
# 1658 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Paul_R3_2:
# 1652 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R2_Text_1, MSGBOX_DEFAULT
# 1653 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Paul_R4::
# 1662 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1663 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1664 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R4_Text_0, MSGBOX_YESNO
# 1665 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Paul_R4_2
# 1670 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_PAUL_R4, ParcelWetlands_T_Paul_R4_Text_1
# 1671 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R4_Text_2, MSGBOX_DEFAULT
# 1672 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Paul_R4_2:
# 1666 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R2_Text_1, MSGBOX_DEFAULT
# 1667 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Paul_R5::
# 1676 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1677 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1678 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R5_Text_0, MSGBOX_YESNO
# 1679 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Paul_R5_2
# 1684 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_PAUL_R5, ParcelWetlands_T_Paul_R5_Text_1
# 1685 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R5_Text_2, MSGBOX_DEFAULT
# 1686 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Paul_R5_2:
# 1680 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R2_Text_1, MSGBOX_DEFAULT
# 1681 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Sunniva::
# 1690 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_SUNNIVA, ParcelWetlands_T_Sunniva_Text_0, ParcelWetlands_T_Sunniva_Text_1, ParcelWetlands_T_Sunniva_FirstWin
# 1694 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1695 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_T_Sunniva_3
ParcelWetlands_T_Sunniva_1:
# 1698 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_T_Sunniva_8
ParcelWetlands_T_Sunniva_6:
# 1701 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_T_Sunniva_13
ParcelWetlands_T_Sunniva_11:
# 1704 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_T_Sunniva_18
ParcelWetlands_T_Sunniva_16:
# 1707 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_T_Sunniva_2:
# 1696 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Sunniva_R2
	goto ParcelWetlands_T_Sunniva_1

ParcelWetlands_T_Sunniva_3:
# 1695 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SUNNIVA_R2
	goto_if 0, ParcelWetlands_T_Sunniva_2
	goto ParcelWetlands_T_Sunniva_1

ParcelWetlands_T_Sunniva_7:
# 1699 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Sunniva_R3
	goto ParcelWetlands_T_Sunniva_6

ParcelWetlands_T_Sunniva_8:
# 1698 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SUNNIVA_R3
	goto_if 0, ParcelWetlands_T_Sunniva_7
	goto ParcelWetlands_T_Sunniva_6

ParcelWetlands_T_Sunniva_12:
# 1702 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Sunniva_R4
	goto ParcelWetlands_T_Sunniva_11

ParcelWetlands_T_Sunniva_13:
# 1701 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SUNNIVA_R4
	goto_if 0, ParcelWetlands_T_Sunniva_12
	goto ParcelWetlands_T_Sunniva_11

ParcelWetlands_T_Sunniva_17:
# 1705 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Sunniva_R5
	goto ParcelWetlands_T_Sunniva_16

ParcelWetlands_T_Sunniva_18:
# 1704 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SUNNIVA_R5
	goto_if 0, ParcelWetlands_T_Sunniva_17
	goto ParcelWetlands_T_Sunniva_16


ParcelWetlands_T_Sunniva_FirstWin::
# 1711 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_Text_2, MSGBOX_DEFAULT
# 1712 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Sunniva_R2::
# 1716 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1717 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1718 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R2_Text_0, MSGBOX_YESNO
# 1719 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Sunniva_R2_2
# 1724 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SUNNIVA_R2, ParcelWetlands_T_Sunniva_R2_Text_2
# 1725 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R2_Text_3, MSGBOX_DEFAULT
# 1726 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Sunniva_R2_2:
# 1720 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R2_Text_1, MSGBOX_DEFAULT
# 1721 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Sunniva_R3::
# 1730 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1731 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1732 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R3_Text_0, MSGBOX_YESNO
# 1733 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Sunniva_R3_2
# 1738 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SUNNIVA_R3, ParcelWetlands_T_Sunniva_R3_Text_1
# 1739 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R3_Text_2, MSGBOX_DEFAULT
# 1740 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Sunniva_R3_2:
# 1734 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R2_Text_1, MSGBOX_DEFAULT
# 1735 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Sunniva_R4::
# 1744 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1745 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1746 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R4_Text_0, MSGBOX_YESNO
# 1747 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Sunniva_R4_2
# 1752 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SUNNIVA_R4, ParcelWetlands_T_Sunniva_R4_Text_1
# 1753 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R4_Text_2, MSGBOX_DEFAULT
# 1754 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Sunniva_R4_2:
# 1748 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R2_Text_1, MSGBOX_DEFAULT
# 1749 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Sunniva_R5::
# 1758 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1759 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1760 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R5_Text_0, MSGBOX_YESNO
# 1761 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Sunniva_R5_2
# 1766 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SUNNIVA_R5, ParcelWetlands_T_Sunniva_R5_Text_1
# 1767 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R5_Text_2, MSGBOX_DEFAULT
# 1768 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Sunniva_R5_2:
# 1762 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R2_Text_1, MSGBOX_DEFAULT
# 1763 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Roar::
# 1772 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_ROAR, ParcelWetlands_T_Roar_Text_0, ParcelWetlands_T_Roar_Text_1, ParcelWetlands_T_Roar_FirstWin
# 1776 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1777 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_T_Roar_3
ParcelWetlands_T_Roar_1:
# 1780 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_T_Roar_8
ParcelWetlands_T_Roar_6:
# 1783 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_T_Roar_13
ParcelWetlands_T_Roar_11:
# 1786 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_T_Roar_18
ParcelWetlands_T_Roar_16:
# 1789 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_T_Roar_2:
# 1778 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Roar_R2
	goto ParcelWetlands_T_Roar_1

ParcelWetlands_T_Roar_3:
# 1777 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ROAR_R2
	goto_if 0, ParcelWetlands_T_Roar_2
	goto ParcelWetlands_T_Roar_1

ParcelWetlands_T_Roar_7:
# 1781 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Roar_R3
	goto ParcelWetlands_T_Roar_6

ParcelWetlands_T_Roar_8:
# 1780 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ROAR_R3
	goto_if 0, ParcelWetlands_T_Roar_7
	goto ParcelWetlands_T_Roar_6

ParcelWetlands_T_Roar_12:
# 1784 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Roar_R4
	goto ParcelWetlands_T_Roar_11

ParcelWetlands_T_Roar_13:
# 1783 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ROAR_R4
	goto_if 0, ParcelWetlands_T_Roar_12
	goto ParcelWetlands_T_Roar_11

ParcelWetlands_T_Roar_17:
# 1787 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Roar_R5
	goto ParcelWetlands_T_Roar_16

ParcelWetlands_T_Roar_18:
# 1786 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ROAR_R5
	goto_if 0, ParcelWetlands_T_Roar_17
	goto ParcelWetlands_T_Roar_16


ParcelWetlands_T_Roar_FirstWin::
# 1793 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_Text_2, MSGBOX_DEFAULT
# 1794 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Roar_R2::
# 1798 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1799 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1800 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R2_Text_0, MSGBOX_YESNO
# 1801 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Roar_R2_2
# 1806 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ROAR_R2, ParcelWetlands_T_Roar_R2_Text_2
# 1807 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R2_Text_3, MSGBOX_DEFAULT
# 1808 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Roar_R2_2:
# 1802 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R2_Text_1, MSGBOX_DEFAULT
# 1803 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Roar_R3::
# 1812 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1813 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1814 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R3_Text_0, MSGBOX_YESNO
# 1815 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Roar_R3_2
# 1820 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ROAR_R3, ParcelWetlands_T_Roar_R3_Text_1
# 1821 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R3_Text_2, MSGBOX_DEFAULT
# 1822 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Roar_R3_2:
# 1816 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R2_Text_1, MSGBOX_DEFAULT
# 1817 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Roar_R4::
# 1826 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1827 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1828 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R4_Text_0, MSGBOX_YESNO
# 1829 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Roar_R4_2
# 1834 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ROAR_R4, ParcelWetlands_T_Roar_R4_Text_1
# 1835 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R4_Text_2, MSGBOX_DEFAULT
# 1836 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Roar_R4_2:
# 1830 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R2_Text_1, MSGBOX_DEFAULT
# 1831 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Roar_R5::
# 1840 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1841 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1842 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R5_Text_0, MSGBOX_YESNO
# 1843 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Roar_R5_2
# 1848 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ROAR_R5, ParcelWetlands_T_Roar_R5_Text_1
# 1849 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R5_Text_2, MSGBOX_DEFAULT
# 1850 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Roar_R5_2:
# 1844 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R2_Text_1, MSGBOX_DEFAULT
# 1845 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_PerrinScene::
# 1856 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_2, ParcelWetlands_PerrinScene_2
# 1860 "data/maps/ParcelWetlands/scripts.pory"
	lockall
# 1861 "data/maps/ParcelWetlands/scripts.pory"
	playse SE_PIN
# 1862 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PerrinScene_Text_0, MSGBOX_DEFAULT
# 1863 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 1864 "data/maps/ParcelWetlands/scripts.pory"
	applymovement 32, Movement_ParcelWetlands_PerrinIn
# 1865 "data/maps/ParcelWetlands/scripts.pory"
	waitmovement 0
# 1866 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PerrinScene_Text_1, MSGBOX_DEFAULT
# 1867 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_2, ParcelWetlands_PerrinScene_Text_2
# 1868 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PerrinScene_Text_3, MSGBOX_DEFAULT
# 1869 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 1870 "data/maps/ParcelWetlands/scripts.pory"
	applymovement 32, Movement_ParcelWetlands_PerrinOut
# 1871 "data/maps/ParcelWetlands/scripts.pory"
	waitmovement 0
# 1872 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 32
# 1873 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_PERRIN_2
# 1874 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1875 "data/maps/ParcelWetlands/scripts.pory"
	releaseall
	end

ParcelWetlands_PerrinScene_2:
# 1857 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelWetlands_PerrinTalk::
# 1879 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1880 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1881 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 1882 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


# 1885 "data/maps/ParcelWetlands/scripts.pory"
Movement_ParcelWetlands_PerrinIn:
# 1885 "data/maps/ParcelWetlands/scripts.pory"
	walk_left
# 1885 "data/maps/ParcelWetlands/scripts.pory"
	walk_left
# 1885 "data/maps/ParcelWetlands/scripts.pory"
	walk_left
	step_end

# 1886 "data/maps/ParcelWetlands/scripts.pory"
Movement_ParcelWetlands_PerrinOut:
# 1886 "data/maps/ParcelWetlands/scripts.pory"
	walk_right
# 1886 "data/maps/ParcelWetlands/scripts.pory"
	walk_right
# 1886 "data/maps/ParcelWetlands/scripts.pory"
	walk_right
	step_end

ParcelWetlands_Epilogue::
# 1890 "data/maps/ParcelWetlands/scripts.pory"
	lockall
# 1891 "data/maps/ParcelWetlands/scripts.pory"
	delay 20
# 1892 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Epilogue_Text_0, MSGBOX_DEFAULT
# 1893 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 1894 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 2
# 1895 "data/maps/ParcelWetlands/scripts.pory"
	warp MAP_PARCEL_FLOODBASIN, 20, 90
# 1896 "data/maps/ParcelWetlands/scripts.pory"
	waitstate
	end


ParcelWetlands_ToHide::
# 1902 "data/maps/ParcelWetlands/scripts.pory"
	warp MAP_PARCEL_WETLANDS_HIDE, 47, 10
# 1903 "data/maps/ParcelWetlands/scripts.pory"
	waitstate
	end


ParcelWetlands_Harland_Text_0:
# 77 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: They read your report out on\n"
	.string "the radio. My name was in it. My father's,\l"
	.string "too.\p"
	.string "First time anyone said his name on a\n"
	.string "radio.\p"
	.string "Go on. I've got nets to mend.$"

ParcelWetlands_Harland_Text_1:
# 82 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: …Maybe I was wrong about you.\p"
	.string "But I still don't trust your people.$"

ParcelWetlands_Harland_Text_2:
# 90 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: Look at this! You said you\n"
	.string "were protecting the water!$"

ParcelWetlands_Harland_Text_3:
# 91 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: Don't stand there writing.\n"
	.string "READ it, then.\p"
	.string "The residue, up the channel. The pipe\n"
	.string "under the falls.\p"
	.string "There's a soaked manifest washed up on\n"
	.string "the south bank. Read all of it.$"

ParcelWetlands_Harland_Text_4:
# 95 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: My father fished these\n"
	.string "waters. His father too.\p"
	.string "And now you show up with rules and\n"
	.string "paperwork and tell me the water belongs\l"
	.string "to you?$"

ParcelWetlands_Harland_Text_5:
# 96 "data/maps/ParcelWetlands/scripts.pory"
	.string "{PLAYER}: It doesn't belong to me.$"

ParcelWetlands_Harland_Text_6:
# 97 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: Then why does it feel like it\n"
	.string "does?$"

ParcelWetlands_Harland_Text_7:
# 101 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: You want to talk? Talk to\n"
	.string "COUNCILMAN DORSEY. He's down at the\l"
	.string "new office, cutting a ribbon.\p"
	.string "Someone who actually listens.$"

ParcelWetlands_Dorsey_Text_0:
# 114 "data/maps/ParcelWetlands/scripts.pory"
	.string "DORSEY: RANGER! The very person.\p"
	.string "You'll have seen the Council's\n"
	.string "statement. We welcome the findings.\l"
	.string "Welcome them.\p"
	.string "Some of us were calling for an\n"
	.string "independent review years ago. Check\l"
	.string "the record.$"

ParcelWetlands_Dorsey_Text_1:
# 115 "data/maps/ParcelWetlands/scripts.pory"
	.string "DORSEY: Development that listens.\n"
	.string "Relief that reaches. It's what I've\l"
	.string "always stood for out here.\p"
	.string "The review board will want local\n"
	.string "liaisons, you know. People who\l"
	.string "understand both sides. I've put my name\l"
	.string "forward.\p"
	.string "Somebody sensible has to.$"

ParcelWetlands_Dorsey_Text_2:
# 119 "data/maps/ParcelWetlands/scripts.pory"
	.string "DORSEY: People need someone to thank.\n"
	.string "Better it's us.$"

ParcelWetlands_Dorsey_Text_3:
# 123 "data/maps/ParcelWetlands/scripts.pory"
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
# 124 "data/maps/ParcelWetlands/scripts.pory"
	.string "DORSEY: These people work hard. The\n"
	.string "CORPS means well, I'm sure. But rules\l"
	.string "written far away land hard out here.\p"
	.string "Good to meet you. That's a firm grip.\n"
	.string "They teach you that at the station?$"

ParcelWetlands_Dorsey_Text_5:
# 128 "data/maps/ParcelWetlands/scripts.pory"
	.string "DORSEY: People need someone to blame.\n"
	.string "Better it isn't us.$"

ParcelWetlands_ClueReeds_Text_0:
# 148 "data/maps/ParcelWetlands/scripts.pory"
	.string "The dragged reeds. Already in the\n"
	.string "notebook.$"

ParcelWetlands_ClueReeds_Text_1:
# 152 "data/maps/ParcelWetlands/scripts.pory"
	.string "The reeds here are bent in a swath, all\n"
	.string "one direction. Dragged, not blown.\p"
	.string "The swath is a crate's width. Written\n"
	.string "down.$"

ParcelWetlands_ClueCrate_Text_0:
# 163 "data/maps/ParcelWetlands/scripts.pory"
	.string "The crate imprint. Already in the\n"
	.string "notebook.$"

ParcelWetlands_ClueCrate_Text_1:
# 167 "data/maps/ParcelWetlands/scripts.pory"
	.string "A rectangular imprint pressed deep in\n"
	.string "the mud. Slats. Corner braces.\p"
	.string "A crate sat here long enough to matter\n"
	.string "and left recently enough to be wet.\l"
	.string "Written down.$"

ParcelWetlands_ClueTag_Text_0:
# 178 "data/maps/ParcelWetlands/scripts.pory"
	.string "The trade tag. Bagged, and in the\n"
	.string "notebook.$"

ParcelWetlands_ClueTag_Text_1:
# 182 "data/maps/ParcelWetlands/scripts.pory"
	.string "A plastic tag snagged on the mooring\n"
	.string "post, snapped off its loop. A lot\l"
	.string "number. No license field.\p"
	.string "The kind of tag that isn't supposed to\n"
	.string "exist. Enough to point. Not enough to\l"
	.string "convict.$"

ParcelWetlands_PoisonTrigger_Text_0:
# 209 "data/maps/ParcelWetlands/scripts.pory"
	.string "Shouting, down at the backwater.$"

ParcelWetlands_PoisonTrigger_Text_1:
# 217 "data/maps/ParcelWetlands/scripts.pory"
	.string "WOMAN: They're all coming up! Look at\n"
	.string "them, they're all coming up!$"

ParcelWetlands_PoisonTrigger_Text_2:
# 218 "data/maps/ParcelWetlands/scripts.pory"
	.string "MAN: There's a shine on the water. Don't\n"
	.string "let the kids near it.$"

ParcelWetlands_PoisonTrigger_Text_3:
# 219 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND: RANGER! Get down here!\p"
	.string "Look at this! You said you were\n"
	.string "protecting the water!$"

ParcelWetlands_DeadFish_Text_0:
# 229 "data/maps/ParcelWetlands/scripts.pory"
	.string "It drifts against the piling and does\n"
	.string "not right itself.$"

ParcelWetlands_Crowd1_Text_0:
# 238 "data/maps/ParcelWetlands/scripts.pory"
	.string "WOMAN: My husband drank from that\n"
	.string "channel the morning it went bad. He's\l"
	.string "fine. The monitor on the bank says the\l"
	.string "channel's fine too, now. I'll drink from\l"
	.string "it before he does. Then we'll know.$"

ParcelWetlands_Crowd1_Text_1:
# 242 "data/maps/ParcelWetlands/scripts.pory"
	.string "WOMAN: My husband drank from that\n"
	.string "channel this morning. He's fine. He's\l"
	.string "fine, isn't he?$"

ParcelWetlands_Crowd2_Text_0:
# 250 "data/maps/ParcelWetlands/scripts.pory"
	.string "MAN: Somebody did this, I said. The\n"
	.string "hearing said who. A permit page says how\l"
	.string "much they're allowed to do now. It's a\l"
	.string "number. I can argue with a number. I\l"
	.string "couldn't argue with a night.$"

ParcelWetlands_Crowd2_Text_1:
# 254 "data/maps/ParcelWetlands/scripts.pory"
	.string "MAN: Somebody did this. Water doesn't\n"
	.string "go bad on its own in a night.\p"
	.string "And I don't see anybody from the CORPS\n"
	.string "writing THAT down.$"

ParcelWetlands_Crowd3_Text_0:
# 262 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOY: Dad says it wasn't your fault. He\n"
	.string "says it like it cost him. He also says\l"
	.string "you wrote it down. He says that like it\l"
	.string "cost him more.$"

ParcelWetlands_Crowd3_Text_1:
# 266 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOY: Dad says it's your fault. Is it your\n"
	.string "fault?$"

ParcelWetlands_EvResidue_Text_0:
# 282 "data/maps/ParcelWetlands/scripts.pory"
	.string "The residue sample. Sealed.$"

ParcelWetlands_EvResidue_Text_1:
# 286 "data/maps/ParcelWetlands/scripts.pory"
	.string "Upstream of the landing the residue\n"
	.string "collects in the reed roots. Greasy.\l"
	.string "Faintly sweet.\p"
	.string "It did not start here. A sample, sealed\n"
	.string "and labelled.$"

ParcelWetlands_EvPipe_Text_0:
# 302 "data/maps/ParcelWetlands/scripts.pory"
	.string "The pipe segment. Photographed and\n"
	.string "noted.$"

ParcelWetlands_EvPipe_Text_1:
# 306 "data/maps/ParcelWetlands/scripts.pory"
	.string "A broken discharge pipe, half-buried\n"
	.string "under the falls. The break is old. The\l"
	.string "staining inside it is not.\p"
	.string "Photographed where it lies.$"

ParcelWetlands_EvPipe_Text_2:
# 307 "data/maps/ParcelWetlands/scripts.pory"
	.string "You have stood over a pipe like this\n"
	.string "before, at the edge of a marsh nobody\l"
	.string "called a habitat, beside a friend who\l"
	.string "had already stopped painting.\p"
	.string "You did not have the word then. You\n"
	.string "write it now. It is no comfort. You write\l"
	.string "it anyway.$"

ParcelWetlands_EvManifest_Text_0:
# 323 "data/maps/ParcelWetlands/scripts.pory"
	.string "The manifest. Drying between notebook\n"
	.string "pages.$"

ParcelWetlands_EvManifest_Text_1:
# 327 "data/maps/ParcelWetlands/scripts.pory"
	.string "A transport manifest, soaked but\n"
	.string "readable. Tonnage. Dates. A carrier code\l"
	.string "that isn't in any register.\p"
	.string "The consignee field has been inked out\n"
	.string "by hand.$"

ParcelWetlands_RequirePoison_Text_0:
# 339 "data/maps/ParcelWetlands/scripts.pory"
	.string "The water is quiet. HARLAND's boats sit\n"
	.string "low on their lines.$"

ParcelWetlands_CheckEvidenceDone_Text_0:
# 348 "data/maps/ParcelWetlands/scripts.pory"
	.string "Residue. Pipe. Manifest.\p"
	.string "Enough to point. Not enough to convict.\n"
	.string "All of it written down.$"

ParcelWetlands_CheckEvidenceDone_Text_1:
# 351 "data/maps/ParcelWetlands/scripts.pory"
	.string "Someone is standing at the landing.\n"
	.string "Watching.$"

ParcelWetlands_Enforcer_Text_0:
# 359 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: You think you're saving\n"
	.string "something?\p"
	.string "The land's already dead.\n"
	.string "We're just the first to admit it.$"

ParcelWetlands_Enforcer_Text_1:
# 360 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: Hm.$"

ParcelWetlands_Enforcer_Text_2:
# 363 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: Your mentor tried.\n"
	.string "Look how that went.$"

ParcelWetlands_Enforcer_Text_3:
# 364 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: Keep the manifest. Frame it.\n"
	.string "Nobody who matters can read.$"

ParcelWetlands_Enforcer_Text_4:
# 368 "data/maps/ParcelWetlands/scripts.pory"
	.string "MAN: Where'd the councilman go? He was\n"
	.string "right there by the office.\p"
	.string "His car's gone.$"

ParcelWetlands_Gunnar_Text_0:
# 386 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Twice as far out, I said. The\n"
	.string "count's coming back in. Not to where it\l"
	.string "was. In. You wrote it down and now I\l"
	.string "write it down and the boy writes it\l"
	.string "down. Three of us. That's a survey.$"

ParcelWetlands_Gunnar_Text_1:
# 391 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Twice as far out. You remember\n"
	.string "that for me, when you write your\l"
	.string "reports.$"

ParcelWetlands_Gunnar_Text_2:
# 396 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Still there? Skating about?\p"
	.string "Good. Good. Then it's not all gone bad.\n"
	.string "Not yet.$"

ParcelWetlands_Gunnar_Text_3:
# 399 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Take these. My son's. He's not\n"
	.string "coming back for them.$"

ParcelWetlands_Gunnar_Text_4:
# 402 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Take this. My son's rod. He's\n"
	.string "not coming back for it.$"

ParcelWetlands_Gunnar_Text_5:
# 410 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: The puddles past the bridge,\n"
	.string "west end. Little blue thing on long legs.\l"
	.string "Go and look.$"

ParcelWetlands_Gunnar_Text_6:
# 414 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: The reed beds used to go twice\n"
	.string "as far out. Ask anyone old enough to\l"
	.string "remember.\p"
	.string "Nobody asks.$"

ParcelWetlands_Gunnar_Text_7:
# 415 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: You're a RANGER, aren't you?\n"
	.string "Then count something for me.\p"
	.string "There used to be SURSKIT on the\n"
	.string "puddles up past the bridge, west end. If\l"
	.string "there's still one, the water's not all\l"
	.string "gone bad.\p"
	.string "Go and look. Then come and tell me.$"

ParcelWetlands_Surskit_Text_0:
# 425 "data/maps/ParcelWetlands/scripts.pory"
	.string "The SURSKIT skates a circle on the\n"
	.string "puddle, then another.\p"
	.string "One. Still here. Written down.$"

ParcelWetlands_Surskit_Text_1:
# 430 "data/maps/ParcelWetlands/scripts.pory"
	.string "A SURSKIT skates a circle on the\n"
	.string "puddle, then another.$"

ParcelWetlands_Selt_Text_0:
# 438 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Nothing illegal about standing by\n"
	.string "the water, kid.$"

ParcelWetlands_Selt_Text_1:
# 439 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Fine, fine. Moving along.$"

ParcelWetlands_Selt_Text_2:
# 454 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: A man's got to eat. You want\n"
	.string "villains, look further up the money.$"

ParcelWetlands_Selt_R2_Text_0:
# 465 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelWetlands_Selt_R2_Text_1:
# 467 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Another time, then.$"

ParcelWetlands_Selt_R2_Text_2:
# 471 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Right. That's the whole of it.$"

ParcelWetlands_Selt_R2_Text_3:
# 472 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Selt_R3_Text_0:
# 479 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelWetlands_Selt_R3_Text_1:
# 485 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Still yours.$"

ParcelWetlands_Selt_R3_Text_2:
# 486 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlands_Selt_R4_Text_0:
# 493 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelWetlands_Selt_R4_Text_1:
# 500 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlands_Selt_R5_Text_0:
# 507 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWetlands_Selt_R5_Text_1:
# 513 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: …Fair.$"

ParcelWetlands_Selt_R5_Text_2:
# 514 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWetlands_Mora_Text_0:
# 520 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: This patch is spoken for. Walk on.$"

ParcelWetlands_Mora_Text_1:
# 521 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Ugh. Whatever.$"

ParcelWetlands_Mora_Text_2:
# 536 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Spoken for by WHO? Mind your own\n"
	.string "business.$"

ParcelWetlands_Mora_R2_Text_0:
# 547 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelWetlands_Mora_R2_Text_1:
# 549 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Fine. Same spot.$"

ParcelWetlands_Mora_R2_Text_2:
# 553 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Still yours.$"

ParcelWetlands_Mora_R2_Text_3:
# 554 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlands_Mora_R3_Text_0:
# 561 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_Mora_R3_Text_1:
# 567 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: That's the one I wanted to see.$"

ParcelWetlands_Mora_R3_Text_2:
# 568 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Mora_R4_Text_0:
# 575 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelWetlands_Mora_R4_Text_1:
# 582 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Mora_R5_Text_0:
# 589 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWetlands_Mora_R5_Text_1:
# 595 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Noted. Properly, this time.$"

ParcelWetlands_Mora_R5_Text_2:
# 596 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWetlands_Bran_Text_0:
# 602 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Mind your boots. Mudcaps grow\n"
	.string "where you least want them.\p"
	.string "And trainers, apparently. C'mon then.$"

ParcelWetlands_Bran_Text_1:
# 603 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Heh. Soft hands, hard hits.$"

ParcelWetlands_Bran_Text_2:
# 618 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: There's a path up to the office\n"
	.string "from here. Mind the ledge, it's higher\l"
	.string "than it looks.$"

ParcelWetlands_Bran_R2_Text_0:
# 629 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: I kept the team up for this.\n"
	.string "Again?$"

ParcelWetlands_Bran_R2_Text_1:
# 631 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: No hurry. The water keeps.$"

ParcelWetlands_Bran_R2_Text_2:
# 635 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Right. That's the whole of it.$"

ParcelWetlands_Bran_R2_Text_3:
# 636 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Bran_R3_Text_0:
# 643 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWetlands_Bran_R3_Text_1:
# 649 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: That's the one I wanted to see.$"

ParcelWetlands_Bran_R3_Text_2:
# 650 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlands_Bran_R4_Text_0:
# 657 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelWetlands_Bran_R4_Text_1:
# 663 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Noted. Properly, this time.$"

ParcelWetlands_Bran_R4_Text_2:
# 664 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Bran_R5_Text_0:
# 671 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWetlands_Bran_R5_Text_1:
# 677 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: …Again, then. Later.$"

ParcelWetlands_Bran_R5_Text_2:
# 678 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWetlands_Kalle_Text_0:
# 686 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: The reeds are full of cocoons.\n"
	.string "Hundreds! Don't step on them!$"

ParcelWetlands_Kalle_Text_1:
# 687 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Aw. They'll hatch anyway.$"

ParcelWetlands_Kalle_Text_2:
# 702 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: WURMPLE pick the reed stems.\n"
	.string "When the reeds go, where do they pick?$"

ParcelWetlands_Kalle_R2_Text_0:
# 713 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelWetlands_Kalle_R2_Text_1:
# 715 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Suit yourself. I'm here.$"

ParcelWetlands_Kalle_R2_Text_2:
# 719 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Right. That's the whole of it.$"

ParcelWetlands_Kalle_R2_Text_3:
# 720 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Kalle_R3_Text_0:
# 727 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_Kalle_R3_Text_1:
# 733 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: …Fair.$"

ParcelWetlands_Kalle_R3_Text_2:
# 734 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Kalle_R4_Text_0:
# 741 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelWetlands_Kalle_R4_Text_1:
# 747 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Noted. Properly, this time.$"

ParcelWetlands_Kalle_R4_Text_2:
# 748 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Kalle_R5_Text_0:
# 755 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelWetlands_Kalle_R5_Text_1:
# 761 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: …Again, then. Later.$"

ParcelWetlands_Kalle_R5_Text_2:
# 762 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlands_Liv_Text_0:
# 768 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Nobody comes out this far. So\n"
	.string "you're either lost or you're a RANGER.$"

ParcelWetlands_Liv_Text_1:
# 769 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: RANGER, then.$"

ParcelWetlands_Liv_Text_2:
# 784 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: I come out here for the quiet. It's\n"
	.string "less quiet than it was. Engines on the\l"
	.string "water, at night.$"

ParcelWetlands_Liv_R2_Text_0:
# 795 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelWetlands_Liv_R2_Text_1:
# 797 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Fine. Same spot.$"

ParcelWetlands_Liv_R2_Text_2:
# 801 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: …Fair.$"

ParcelWetlands_Liv_R2_Text_3:
# 802 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlands_Liv_R3_Text_0:
# 809 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelWetlands_Liv_R3_Text_1:
# 815 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: …Again, then. Later.$"

ParcelWetlands_Liv_R3_Text_2:
# 816 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Liv_R4_Text_0:
# 823 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelWetlands_Liv_R4_Text_1:
# 829 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Right. That's the whole of it.$"

ParcelWetlands_Liv_R4_Text_2:
# 830 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlands_Liv_R5_Text_0:
# 837 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Last one. I've put everything I've\n"
	.string "got into this team. Go?$"

ParcelWetlands_Liv_R5_Text_1:
# 844 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWetlands_Toke_Text_0:
# 850 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: You didn't see me. Nobody sees me.$"

ParcelWetlands_Toke_Text_1:
# 851 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: You saw me.$"

ParcelWetlands_Toke_Text_2:
# 866 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: The grass is tallest by the water.\n"
	.string "That's where I hide. That's where the\l"
	.string "SURSKIT hide, too.$"

ParcelWetlands_Toke_R2_Text_0:
# 877 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: I kept the team up for this.\n"
	.string "Again?$"

ParcelWetlands_Toke_R2_Text_1:
# 879 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: No hurry. The water keeps.$"

ParcelWetlands_Toke_R2_Text_2:
# 883 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: That's the one I wanted to see.$"

ParcelWetlands_Toke_R2_Text_3:
# 884 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlands_Toke_R3_Text_0:
# 891 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelWetlands_Toke_R3_Text_1:
# 897 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: …Fair.$"

ParcelWetlands_Toke_R3_Text_2:
# 898 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Toke_R4_Text_0:
# 905 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelWetlands_Toke_R4_Text_1:
# 911 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: Right. That's the whole of it.$"

ParcelWetlands_Toke_R4_Text_2:
# 912 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Toke_R5_Text_0:
# 919 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelWetlands_Toke_R5_Text_1:
# 926 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWetlands_Jorun_Text_0:
# 932 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Camped here three nights. My\n"
	.string "WOOPER found something in the mud\l"
	.string "yesterday. Let's see what you've found.$"

ParcelWetlands_Jorun_Text_1:
# 933 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Found out, is what.$"

ParcelWetlands_Jorun_Text_2:
# 948 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: It was a crate slat. Green paint.\n"
	.string "Nobody paints crates green round here.$"

ParcelWetlands_Jorun_R2_Text_0:
# 959 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelWetlands_Jorun_R2_Text_1:
# 961 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Another time, then.$"

ParcelWetlands_Jorun_R2_Text_2:
# 965 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: That's the one I wanted to see.$"

ParcelWetlands_Jorun_R2_Text_3:
# 966 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Jorun_R3_Text_0:
# 973 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_Jorun_R3_Text_1:
# 980 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlands_Jorun_R4_Text_0:
# 987 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelWetlands_Jorun_R4_Text_1:
# 993 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: …Fair.$"

ParcelWetlands_Jorun_R4_Text_2:
# 994 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlands_Jorun_R5_Text_0:
# 1001 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelWetlands_Jorun_R5_Text_1:
# 1008 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlands_Stian_Text_0:
# 1014 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: WINGULL used to roost on the\n"
	.string "reed islands. There's fewer islands\l"
	.string "every year. Battle?$"

ParcelWetlands_Stian_Text_1:
# 1015 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Fewer WINGULL, too.$"

ParcelWetlands_Stian_Text_2:
# 1030 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: They moved to the landing roofs.\n"
	.string "HARLAND hates it.$"

ParcelWetlands_Stian_R2_Text_0:
# 1041 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelWetlands_Stian_R2_Text_1:
# 1043 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Suit yourself. I'm here.$"

ParcelWetlands_Stian_R2_Text_2:
# 1047 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Still yours.$"

ParcelWetlands_Stian_R2_Text_3:
# 1048 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlands_Stian_R3_Text_0:
# 1055 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_Stian_R3_Text_1:
# 1061 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Noted. Properly, this time.$"

ParcelWetlands_Stian_R3_Text_2:
# 1062 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlands_Stian_R4_Text_0:
# 1069 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelWetlands_Stian_R4_Text_1:
# 1075 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: …Fair.$"

ParcelWetlands_Stian_R4_Text_2:
# 1076 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Stian_R5_Text_0:
# 1083 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelWetlands_Stian_R5_Text_1:
# 1089 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Right. That's the whole of it.$"

ParcelWetlands_Stian_R5_Text_2:
# 1090 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelWetlands_Asta_Text_0:
# 1096 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Cadet ASTA, Corps patrol.\n"
	.string "Provisional? Then you'll spar. HALE's\l"
	.string "orders.$"

ParcelWetlands_Asta_Text_1:
# 1097 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Good. HALE will want to hear that.$"

ParcelWetlands_Asta_Text_2:
# 1112 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: The office people won't let us\n"
	.string "gauge the channels ourselves.\l"
	.string "'Duplication of effort.'\p"
	.string "We write down their numbers and we\n"
	.string "write down ours.$"

ParcelWetlands_Asta_R2_Text_0:
# 1123 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelWetlands_Asta_R2_Text_1:
# 1125 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Fine. Same spot.$"

ParcelWetlands_Asta_R2_Text_2:
# 1129 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: …Fair.$"

ParcelWetlands_Asta_R2_Text_3:
# 1130 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Asta_R3_Text_0:
# 1137 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_Asta_R3_Text_1:
# 1144 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Asta_R4_Text_0:
# 1151 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelWetlands_Asta_R4_Text_1:
# 1157 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: That's the one I wanted to see.$"

ParcelWetlands_Asta_R4_Text_2:
# 1158 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlands_Asta_R5_Text_0:
# 1165 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelWetlands_Asta_R5_Text_1:
# 1171 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Still yours.$"

ParcelWetlands_Asta_R5_Text_2:
# 1172 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWetlands_Bjarte_Text_0:
# 1178 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Cadet BJARTE. The bridge is my\n"
	.string "post. Nobody crosses without a battle,\l"
	.string "HALE says.$"

ParcelWetlands_Bjarte_Text_1:
# 1179 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: HALE doesn't actually say that.$"

ParcelWetlands_Bjarte_Text_2:
# 1194 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: There's an old road east, over\n"
	.string "the bridge and through the trees. The\l"
	.string "culvert road. HALE said you'd be going\l"
	.string "that way.$"

ParcelWetlands_Bjarte_R2_Text_0:
# 1205 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelWetlands_Bjarte_R2_Text_1:
# 1207 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelWetlands_Bjarte_R2_Text_2:
# 1211 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Noted. Properly, this time.$"

ParcelWetlands_Bjarte_R2_Text_3:
# 1212 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlands_Bjarte_R3_Text_0:
# 1219 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_Bjarte_R3_Text_1:
# 1225 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Still yours.$"

ParcelWetlands_Bjarte_R3_Text_2:
# 1226 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Bjarte_R4_Text_0:
# 1233 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelWetlands_Bjarte_R4_Text_1:
# 1239 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: …Fair.$"

ParcelWetlands_Bjarte_R4_Text_2:
# 1240 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Bjarte_R5_Text_0:
# 1247 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWetlands_Bjarte_R5_Text_1:
# 1253 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: …Again, then. Later.$"

ParcelWetlands_Bjarte_R5_Text_2:
# 1254 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlands_Odd_Text_0:
# 1260 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: These cliffs are the only dry\n"
	.string "ground for a mile. I'm not sharing them.$"

ParcelWetlands_Odd_Text_1:
# 1261 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Fine. Share.$"

ParcelWetlands_Odd_Text_2:
# 1276 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: The rock's wet all year now. Used\n"
	.string "to dry out by midsummer.$"

ParcelWetlands_Odd_R2_Text_0:
# 1287 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Clearances or not, I want that one\n"
	.string "back. Go?$"

ParcelWetlands_Odd_R2_Text_1:
# 1289 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: No hurry. The water keeps.$"

ParcelWetlands_Odd_R2_Text_2:
# 1293 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Right. That's the whole of it.$"

ParcelWetlands_Odd_R2_Text_3:
# 1294 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Odd_R3_Text_0:
# 1301 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_Odd_R3_Text_1:
# 1307 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: …Fair.$"

ParcelWetlands_Odd_R3_Text_2:
# 1308 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Odd_R4_Text_0:
# 1315 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelWetlands_Odd_R4_Text_1:
# 1321 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Still yours.$"

ParcelWetlands_Odd_R4_Text_2:
# 1322 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Odd_R5_Text_0:
# 1329 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Last one. I've put everything I've\n"
	.string "got into this team. Go?$"

ParcelWetlands_Odd_R5_Text_1:
# 1336 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWetlands_Haakon_Text_0:
# 1342 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Shh. You'll scare them. Too late.\n"
	.string "Battle.$"

ParcelWetlands_Haakon_Text_1:
# 1343 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Scared them anyway.$"

ParcelWetlands_Haakon_Text_2:
# 1358 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: The channel above the landing\n"
	.string "still runs clean. Mostly. I fish here, not\l"
	.string "down there.$"

ParcelWetlands_Haakon_R2_Text_0:
# 1369 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: I kept the team up for this.\n"
	.string "Again?$"

ParcelWetlands_Haakon_R2_Text_1:
# 1371 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: No hurry. The water keeps.$"

ParcelWetlands_Haakon_R2_Text_2:
# 1375 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Still yours.$"

ParcelWetlands_Haakon_R2_Text_3:
# 1376 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlands_Haakon_R3_Text_0:
# 1383 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelWetlands_Haakon_R3_Text_1:
# 1389 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: That's the one I wanted to see.$"

ParcelWetlands_Haakon_R3_Text_2:
# 1390 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Haakon_R4_Text_0:
# 1397 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelWetlands_Haakon_R4_Text_1:
# 1403 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Noted. Properly, this time.$"

ParcelWetlands_Haakon_R4_Text_2:
# 1404 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelWetlands_Haakon_R5_Text_0:
# 1411 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWetlands_Haakon_R5_Text_1:
# 1417 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Right. That's the whole of it.$"

ParcelWetlands_Haakon_R5_Text_2:
# 1418 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlands_Eirik_Text_0:
# 1424 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Three MAGIKARP today. Three!\n"
	.string "Last year it'd be thirty. Take it out on\l"
	.string "me, go on.$"

ParcelWetlands_Eirik_Text_1:
# 1425 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Thirty-one, then.$"

ParcelWetlands_Eirik_Text_2:
# 1440 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: HARLAND says the CORPS counts\n"
	.string "the fish wrong. I say there's nothing\l"
	.string "left to count.$"

ParcelWetlands_Eirik_R2_Text_0:
# 1451 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelWetlands_Eirik_R2_Text_1:
# 1453 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Fine. Same spot.$"

ParcelWetlands_Eirik_R2_Text_2:
# 1457 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: That's the one I wanted to see.$"

ParcelWetlands_Eirik_R2_Text_3:
# 1458 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Eirik_R3_Text_0:
# 1465 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelWetlands_Eirik_R3_Text_1:
# 1471 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: …Again, then. Later.$"

ParcelWetlands_Eirik_R3_Text_2:
# 1472 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlands_Eirik_R4_Text_0:
# 1479 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelWetlands_Eirik_R4_Text_1:
# 1486 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Eirik_R5_Text_0:
# 1493 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelWetlands_Eirik_R5_Text_1:
# 1500 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelWetlands_Siv_Text_0:
# 1506 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: I like it up here. You can see the\n"
	.string "whole marsh. Including you, coming.$"

ParcelWetlands_Siv_Text_1:
# 1507 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Should've looked harder.$"

ParcelWetlands_Siv_Text_2:
# 1522 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: From up here you can see the shine\n"
	.string "on the water some mornings. Rainbow\l"
	.string "colours. Pretty, if you don't think\l"
	.string "about it.$"

ParcelWetlands_Siv_R2_Text_0:
# 1533 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelWetlands_Siv_R2_Text_1:
# 1535 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Fine. Same spot.$"

ParcelWetlands_Siv_R2_Text_2:
# 1539 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Right. That's the whole of it.$"

ParcelWetlands_Siv_R2_Text_3:
# 1540 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Siv_R3_Text_0:
# 1547 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWetlands_Siv_R3_Text_1:
# 1553 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: That's the one I wanted to see.$"

ParcelWetlands_Siv_R3_Text_2:
# 1554 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlands_Siv_R4_Text_0:
# 1561 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelWetlands_Siv_R4_Text_1:
# 1568 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Siv_R5_Text_0:
# 1575 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWetlands_Siv_R5_Text_1:
# 1581 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: …Fair.$"

ParcelWetlands_Siv_R5_Text_2:
# 1582 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWetlands_SignLanding_Text_0:
# 1594 "data/maps/ParcelWetlands/scripts.pory"
	.string "REEDMERE LANDING\p"
	.string "Boats moored past sundown pay the\n"
	.string "landing fee. Fish counts to the office.\l"
	.string "No nets in the channel.$"

ParcelWetlands_SignOffice_Text_0:
# 1598 "data/maps/ParcelWetlands/scripts.pory"
	.string "MEREHOLT TIDEWATER DIVISION\n"
	.string "Reedmere Gauging Office\p"
	.string "Opening ceremony by COUNCILMAN\n"
	.string "DORSEY. All welcome.$"

ParcelWetlands_SignRoute_Text_0:
# 1602 "data/maps/ParcelWetlands/scripts.pory"
	.string "REEDMERE\p"
	.string "North: the landing and the backwater.\n"
	.string "South: FERNWICK.$"

ParcelWetlands_T_Paul_Text_0:
# 1609 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: The reed beds are the best bug\n"
	.string "country in the district. Were. Battle.$"

ParcelWetlands_T_Paul_Text_1:
# 1610 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Were.$"

ParcelWetlands_T_Paul_Text_2:
# 1625 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Half the reed beds went under the\n"
	.string "FOUNDATION's gauges. Gauges don't eat\l"
	.string "reeds. The boat traffic does.$"

ParcelWetlands_T_Paul_R2_Text_0:
# 1636 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelWetlands_T_Paul_R2_Text_1:
# 1638 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: No hurry. The water keeps.$"

ParcelWetlands_T_Paul_R2_Text_2:
# 1642 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Right. That's the whole of it.$"

ParcelWetlands_T_Paul_R2_Text_3:
# 1643 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_T_Paul_R3_Text_0:
# 1650 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWetlands_T_Paul_R3_Text_1:
# 1656 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: …Fair.$"

ParcelWetlands_T_Paul_R3_Text_2:
# 1657 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_T_Paul_R4_Text_0:
# 1664 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelWetlands_T_Paul_R4_Text_1:
# 1670 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: That's the one I wanted to see.$"

ParcelWetlands_T_Paul_R4_Text_2:
# 1671 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlands_T_Paul_R5_Text_0:
# 1678 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWetlands_T_Paul_R5_Text_1:
# 1684 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Still yours.$"

ParcelWetlands_T_Paul_R5_Text_2:
# 1685 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWetlands_T_Sunniva_Text_0:
# 1691 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Cadet SUNNIVA, plateau watch.\n"
	.string "HALE's orders: every provisional spars.\l"
	.string "Yes, even now.$"

ParcelWetlands_T_Sunniva_Text_1:
# 1692 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Logged. HALE will nod.$"

ParcelWetlands_T_Sunniva_Text_2:
# 1707 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: The office below has four\n"
	.string "gauges and we have one notebook. Guess\l"
	.string "which numbers get believed.$"

ParcelWetlands_T_Sunniva_R2_Text_0:
# 1718 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelWetlands_T_Sunniva_R2_Text_1:
# 1720 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Another time, then.$"

ParcelWetlands_T_Sunniva_R2_Text_2:
# 1724 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: That's the one I wanted to\n"
	.string "see.$"

ParcelWetlands_T_Sunniva_R2_Text_3:
# 1725 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelWetlands_T_Sunniva_R3_Text_0:
# 1732 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_T_Sunniva_R3_Text_1:
# 1738 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Right. That's the whole of it.$"

ParcelWetlands_T_Sunniva_R3_Text_2:
# 1739 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelWetlands_T_Sunniva_R4_Text_0:
# 1746 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelWetlands_T_Sunniva_R4_Text_1:
# 1752 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: …Fair.$"

ParcelWetlands_T_Sunniva_R4_Text_2:
# 1753 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelWetlands_T_Sunniva_R5_Text_0:
# 1760 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelWetlands_T_Sunniva_R5_Text_1:
# 1766 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Still yours.$"

ParcelWetlands_T_Sunniva_R5_Text_2:
# 1767 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlands_T_Roar_Text_0:
# 1773 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Fishing the upper pool off the\n"
	.string "bridge. Clean up here. Cleaner. Battle.$"

ParcelWetlands_T_Roar_Text_1:
# 1774 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Scared the fish. Again.$"

ParcelWetlands_T_Roar_Text_2:
# 1789 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: There's a channel from the pool\n"
	.string "down past the landing. Whatever's in\l"
	.string "the pool ends up in the backwater.\l"
	.string "Think about that.$"

ParcelWetlands_T_Roar_R2_Text_0:
# 1800 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelWetlands_T_Roar_R2_Text_1:
# 1802 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: No hurry. The water keeps.$"

ParcelWetlands_T_Roar_R2_Text_2:
# 1806 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: …Fair.$"

ParcelWetlands_T_Roar_R2_Text_3:
# 1807 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_T_Roar_R3_Text_0:
# 1814 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWetlands_T_Roar_R3_Text_1:
# 1820 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Noted. Properly, this time.$"

ParcelWetlands_T_Roar_R3_Text_2:
# 1821 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlands_T_Roar_R4_Text_0:
# 1828 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelWetlands_T_Roar_R4_Text_1:
# 1834 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: …Again, then. Later.$"

ParcelWetlands_T_Roar_R4_Text_2:
# 1835 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlands_T_Roar_R5_Text_0:
# 1842 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWetlands_T_Roar_R5_Text_1:
# 1848 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Still yours.$"

ParcelWetlands_T_Roar_R5_Text_2:
# 1849 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWetlands_PerrinScene_Text_0:
# 1862 "data/maps/ParcelWetlands/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelWetlands_PerrinScene_Text_1:
# 1866 "data/maps/ParcelWetlands/scripts.pory"
	.string "PERRIN: WREN! The FOUNDATION office\n"
	.string "gave me a tour. Gauges on every\l"
	.string "channel! THAT's what reading water\l"
	.string "looks like, not scribbling in a notebook.\p"
	.string "Battle. I've been training. Properly.$"

ParcelWetlands_PerrinScene_Text_2:
# 1867 "data/maps/ParcelWetlands/scripts.pory"
	.string "PERRIN: Fine. FINE.$"

ParcelWetlands_PerrinScene_Text_3:
# 1868 "data/maps/ParcelWetlands/scripts.pory"
	.string "PERRIN: Your notebook, my gauges. We'll\n"
	.string "see which one the hearing reads.\p"
	.string "They offered me a desk, by the way. Part\n"
	.string "time. I said I'd think about it. I'm\l"
	.string "thinking about it.$"

ParcelWetlands_PerrinTalk_Text_0:
# 1881 "data/maps/ParcelWetlands/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelWetlands_Epilogue_Text_0:
# 1892 "data/maps/ParcelWetlands/scripts.pory"
	.string "REEDMERE. The channel runs under the\n"
	.string "landing the way it did the first week,\l"
	.string "and it doesn't smell of anything.\p"
	.string "The works upstream hold a permit with a\n"
	.string "new page in it. A CORPS monitor sits on\l"
	.string "the bank with a jar and a clock. Nobody\l"
	.string "cut a ribbon for it.$"
