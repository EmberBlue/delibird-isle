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
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlands_Crowd1_5
# 247 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd1_Text_2, MSGBOX_DEFAULT
# 248 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Crowd1_2:
# 238 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd1_Text_0, MSGBOX_DEFAULT
# 239 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Crowd1_5:
# 243 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd1_Text_1, MSGBOX_DEFAULT
# 244 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Crowd2::
# 252 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 253 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 254 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_Crowd2_2
# 259 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlands_Crowd2_5
# 264 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd2_Text_2, MSGBOX_DEFAULT
# 265 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Crowd2_2:
# 255 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd2_Text_0, MSGBOX_DEFAULT
# 256 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Crowd2_5:
# 260 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd2_Text_1, MSGBOX_DEFAULT
# 261 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Crowd3::
# 269 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 270 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 271 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_Crowd3_2
# 276 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlands_Crowd3_5
# 281 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd3_Text_2, MSGBOX_DEFAULT
# 282 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Crowd3_2:
# 272 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd3_Text_0, MSGBOX_DEFAULT
# 273 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Crowd3_5:
# 277 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd3_Text_1, MSGBOX_DEFAULT
# 278 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvResidue::
# 288 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 289 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 290 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvResidue_2
# 294 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 6
# 295 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 296 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvResidue_5
# 301 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvResidue_Text_1, MSGBOX_SIGN
# 302 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 303 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 304 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvResidue_2:
# 291 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvResidue_5:
# 297 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvResidue_Text_0, MSGBOX_SIGN
# 298 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvPipe::
# 308 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 309 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 310 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvPipe_2
# 314 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 7
# 315 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 316 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvPipe_5
# 321 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_1, MSGBOX_SIGN
# 322 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_2, MSGBOX_DEFAULT
# 323 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 324 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 325 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvPipe_2:
# 311 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvPipe_5:
# 317 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_0, MSGBOX_SIGN
# 318 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvManifest::
# 329 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 330 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 331 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvManifest_2
# 335 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 8
# 336 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 337 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvManifest_5
# 342 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvManifest_Text_1, MSGBOX_SIGN
# 343 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 344 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 345 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvManifest_2:
# 332 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvManifest_5:
# 338 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvManifest_Text_0, MSGBOX_SIGN
# 339 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_RequirePoison::
# 350 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 351 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 352 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 353 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_RequirePoison_2
ParcelWetlands_RequirePoison_1:
	return

ParcelWetlands_RequirePoison_2:
# 354 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_RequirePoison_Text_0, MSGBOX_SIGN
	goto ParcelWetlands_RequirePoison_1


ParcelWetlands_CheckEvidenceDone::
# 360 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 448
# 361 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 362 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ParcelWetlands_CheckEvidenceDone_2
ParcelWetlands_CheckEvidenceDone_1:
	return

ParcelWetlands_CheckEvidenceDone_2:
# 363 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_CheckEvidenceDone_Text_0, MSGBOX_DEFAULT
# 364 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_3
# 365 "data/maps/ParcelWetlands/scripts.pory"
	addobject 5
# 366 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_CheckEvidenceDone_Text_1, MSGBOX_DEFAULT
	goto ParcelWetlands_CheckEvidenceDone_1


ParcelWetlands_Enforcer::
# 373 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ENFORCER, ParcelWetlands_Enforcer_Text_0, ParcelWetlands_Enforcer_Text_1
# 376 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 377 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 378 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_2, MSGBOX_DEFAULT
# 379 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_3, MSGBOX_DEFAULT
# 380 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 381 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 5
# 382 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
# 383 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_4, MSGBOX_DEFAULT
# 384 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 2
# 385 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_2
# 386 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 11
# 387 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 12
# 388 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 13
# 389 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 6
# 390 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 7
# 391 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_4
# 392 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Gunnar::
# 398 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 399 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 400 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_Gunnar_2
# 405 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR_DONE, ParcelWetlands_Gunnar_5
# 410 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR_SEEN, ParcelWetlands_Gunnar_8
# 424 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR, ParcelWetlands_Gunnar_11
# 429 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_6, MSGBOX_DEFAULT
# 430 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_7, MSGBOX_DEFAULT
# 431 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_GUNNAR
# 432 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_2:
# 401 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_0, MSGBOX_DEFAULT
# 402 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_5:
# 406 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_1, MSGBOX_DEFAULT
# 407 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_8:
# 411 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_2, MSGBOX_DEFAULT
# 412 "data/maps/ParcelWetlands/scripts.pory"
	checkitem ITEM_GOOD_ROD
# 413 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_Gunnar_14
# 417 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_4, MSGBOX_DEFAULT
# 418 "data/maps/ParcelWetlands/scripts.pory"
	giveitem ITEM_GOOD_ROD
ParcelWetlands_Gunnar_13:
# 420 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_GUNNAR_DONE
# 421 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_11:
# 425 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_5, MSGBOX_DEFAULT
# 426 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_14:
# 414 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_3, MSGBOX_DEFAULT
# 415 "data/maps/ParcelWetlands/scripts.pory"
	giveitem ITEM_NET_BALL, 3
	goto ParcelWetlands_Gunnar_13


ParcelWetlands_Surskit::
# 437 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 438 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 439 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR, ParcelWetlands_Surskit_3
ParcelWetlands_Surskit_1:
# 445 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Surskit_Text_1, MSGBOX_DEFAULT
# 446 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Surskit_2:
# 440 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Surskit_Text_0, MSGBOX_DEFAULT
# 441 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_GUNNAR_SEEN
# 442 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Surskit_3:
# 439 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_GUNNAR_DONE, ParcelWetlands_Surskit_2
	goto ParcelWetlands_Surskit_1


ParcelWetlands_Selt::
# 452 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_SELT, ParcelWetlands_Selt_Text_0, ParcelWetlands_Selt_Text_1, ParcelWetlands_Selt_FirstWin
# 456 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 457 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Selt_3
ParcelWetlands_Selt_1:
# 460 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Selt_8
ParcelWetlands_Selt_6:
# 463 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Selt_13
ParcelWetlands_Selt_11:
# 466 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Selt_18
ParcelWetlands_Selt_16:
# 469 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Selt_2:
# 458 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Selt_R2
	goto ParcelWetlands_Selt_1

ParcelWetlands_Selt_3:
# 457 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SELT_R2
	goto_if 0, ParcelWetlands_Selt_2
	goto ParcelWetlands_Selt_1

ParcelWetlands_Selt_7:
# 461 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Selt_R3
	goto ParcelWetlands_Selt_6

ParcelWetlands_Selt_8:
# 460 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SELT_R3
	goto_if 0, ParcelWetlands_Selt_7
	goto ParcelWetlands_Selt_6

ParcelWetlands_Selt_12:
# 464 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Selt_R4
	goto ParcelWetlands_Selt_11

ParcelWetlands_Selt_13:
# 463 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SELT_R4
	goto_if 0, ParcelWetlands_Selt_12
	goto ParcelWetlands_Selt_11

ParcelWetlands_Selt_17:
# 467 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Selt_R5
	goto ParcelWetlands_Selt_16

ParcelWetlands_Selt_18:
# 466 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SELT_R5
	goto_if 0, ParcelWetlands_Selt_17
	goto ParcelWetlands_Selt_16


ParcelWetlands_Selt_FirstWin::
# 473 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_Text_2, MSGBOX_DEFAULT
# 474 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Selt_R2::
# 478 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 479 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 480 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R2_Text_0, MSGBOX_YESNO
# 481 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Selt_R2_2
# 486 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SELT_R2, ParcelWetlands_Selt_R2_Text_2
# 487 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R2_Text_3, MSGBOX_DEFAULT
# 488 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Selt_R2_2:
# 482 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R2_Text_1, MSGBOX_DEFAULT
# 483 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Selt_R3::
# 492 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 493 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 494 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R3_Text_0, MSGBOX_YESNO
# 495 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Selt_R3_2
# 500 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SELT_R3, ParcelWetlands_Selt_R3_Text_1
# 501 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R3_Text_2, MSGBOX_DEFAULT
# 502 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Selt_R3_2:
# 496 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R2_Text_1, MSGBOX_DEFAULT
# 497 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Selt_R4::
# 506 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 507 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 508 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R4_Text_0, MSGBOX_YESNO
# 509 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Selt_R4_2
# 514 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SELT_R4, ParcelWetlands_Selt_R3_Text_1
# 515 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R4_Text_1, MSGBOX_DEFAULT
# 516 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Selt_R4_2:
# 510 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R2_Text_1, MSGBOX_DEFAULT
# 511 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Selt_R5::
# 520 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 521 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 522 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R5_Text_0, MSGBOX_YESNO
# 523 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Selt_R5_2
# 528 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SELT_R5, ParcelWetlands_Selt_R5_Text_1
# 529 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R5_Text_2, MSGBOX_DEFAULT
# 530 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Selt_R5_2:
# 524 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_R2_Text_1, MSGBOX_DEFAULT
# 525 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Mora::
# 534 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_POACHER_B, ParcelWetlands_Mora_Text_0, ParcelWetlands_Mora_Text_1, ParcelWetlands_Mora_FirstWin
# 538 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 539 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Mora_3
ParcelWetlands_Mora_1:
# 542 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Mora_8
ParcelWetlands_Mora_6:
# 545 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Mora_13
ParcelWetlands_Mora_11:
# 548 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Mora_18
ParcelWetlands_Mora_16:
# 551 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Mora_2:
# 540 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Mora_R2
	goto ParcelWetlands_Mora_1

ParcelWetlands_Mora_3:
# 539 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_POACHER_B_R2
	goto_if 0, ParcelWetlands_Mora_2
	goto ParcelWetlands_Mora_1

ParcelWetlands_Mora_7:
# 543 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Mora_R3
	goto ParcelWetlands_Mora_6

ParcelWetlands_Mora_8:
# 542 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_POACHER_B_R3
	goto_if 0, ParcelWetlands_Mora_7
	goto ParcelWetlands_Mora_6

ParcelWetlands_Mora_12:
# 546 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Mora_R4
	goto ParcelWetlands_Mora_11

ParcelWetlands_Mora_13:
# 545 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_POACHER_B_R4
	goto_if 0, ParcelWetlands_Mora_12
	goto ParcelWetlands_Mora_11

ParcelWetlands_Mora_17:
# 549 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Mora_R5
	goto ParcelWetlands_Mora_16

ParcelWetlands_Mora_18:
# 548 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_POACHER_B_R5
	goto_if 0, ParcelWetlands_Mora_17
	goto ParcelWetlands_Mora_16


ParcelWetlands_Mora_FirstWin::
# 555 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_Text_2, MSGBOX_DEFAULT
# 556 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Mora_R2::
# 560 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 561 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 562 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R2_Text_0, MSGBOX_YESNO
# 563 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Mora_R2_2
# 568 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_POACHER_B_R2, ParcelWetlands_Mora_R2_Text_2
# 569 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R2_Text_3, MSGBOX_DEFAULT
# 570 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Mora_R2_2:
# 564 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R2_Text_1, MSGBOX_DEFAULT
# 565 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Mora_R3::
# 574 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 575 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 576 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R3_Text_0, MSGBOX_YESNO
# 577 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Mora_R3_2
# 582 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_POACHER_B_R3, ParcelWetlands_Mora_R3_Text_1
# 583 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R3_Text_2, MSGBOX_DEFAULT
# 584 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Mora_R3_2:
# 578 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R2_Text_1, MSGBOX_DEFAULT
# 579 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Mora_R4::
# 588 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 589 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 590 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R4_Text_0, MSGBOX_YESNO
# 591 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Mora_R4_2
# 596 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_POACHER_B_R4, ParcelWetlands_Mora_R3_Text_1
# 597 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R4_Text_1, MSGBOX_DEFAULT
# 598 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Mora_R4_2:
# 592 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R2_Text_1, MSGBOX_DEFAULT
# 593 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Mora_R5::
# 602 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 603 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 604 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R5_Text_0, MSGBOX_YESNO
# 605 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Mora_R5_2
# 610 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_POACHER_B_R5, ParcelWetlands_Mora_R5_Text_1
# 611 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R5_Text_2, MSGBOX_DEFAULT
# 612 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Mora_R5_2:
# 606 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_R2_Text_1, MSGBOX_DEFAULT
# 607 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bran::
# 616 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FORAGER, ParcelWetlands_Bran_Text_0, ParcelWetlands_Bran_Text_1, ParcelWetlands_Bran_FirstWin
# 620 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 621 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Bran_3
ParcelWetlands_Bran_1:
# 624 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Bran_8
ParcelWetlands_Bran_6:
# 627 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Bran_13
ParcelWetlands_Bran_11:
# 630 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Bran_18
ParcelWetlands_Bran_16:
# 633 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Bran_2:
# 622 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bran_R2
	goto ParcelWetlands_Bran_1

ParcelWetlands_Bran_3:
# 621 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_FORAGER_R2
	goto_if 0, ParcelWetlands_Bran_2
	goto ParcelWetlands_Bran_1

ParcelWetlands_Bran_7:
# 625 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bran_R3
	goto ParcelWetlands_Bran_6

ParcelWetlands_Bran_8:
# 624 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_FORAGER_R3
	goto_if 0, ParcelWetlands_Bran_7
	goto ParcelWetlands_Bran_6

ParcelWetlands_Bran_12:
# 628 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bran_R4
	goto ParcelWetlands_Bran_11

ParcelWetlands_Bran_13:
# 627 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_FORAGER_R4
	goto_if 0, ParcelWetlands_Bran_12
	goto ParcelWetlands_Bran_11

ParcelWetlands_Bran_17:
# 631 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bran_R5
	goto ParcelWetlands_Bran_16

ParcelWetlands_Bran_18:
# 630 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_FORAGER_R5
	goto_if 0, ParcelWetlands_Bran_17
	goto ParcelWetlands_Bran_16


ParcelWetlands_Bran_FirstWin::
# 637 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_Text_2, MSGBOX_DEFAULT
# 638 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bran_R2::
# 642 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 643 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 644 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R2_Text_0, MSGBOX_YESNO
# 645 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bran_R2_2
# 650 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FORAGER_R2, ParcelWetlands_Bran_R2_Text_2
# 651 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R2_Text_3, MSGBOX_DEFAULT
# 652 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bran_R2_2:
# 646 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R2_Text_1, MSGBOX_DEFAULT
# 647 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bran_R3::
# 656 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 657 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 658 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R3_Text_0, MSGBOX_YESNO
# 659 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bran_R3_2
# 664 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FORAGER_R3, ParcelWetlands_Bran_R3_Text_1
# 665 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R3_Text_2, MSGBOX_DEFAULT
# 666 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bran_R3_2:
# 660 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R2_Text_1, MSGBOX_DEFAULT
# 661 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bran_R4::
# 670 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 671 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 672 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R4_Text_0, MSGBOX_YESNO
# 673 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bran_R4_2
# 678 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FORAGER_R4, ParcelWetlands_Bran_R4_Text_1
# 679 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R4_Text_2, MSGBOX_DEFAULT
# 680 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bran_R4_2:
# 674 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R2_Text_1, MSGBOX_DEFAULT
# 675 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bran_R5::
# 684 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 685 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 686 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R5_Text_0, MSGBOX_YESNO
# 687 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bran_R5_2
# 692 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FORAGER_R5, ParcelWetlands_Bran_R5_Text_1
# 693 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R5_Text_2, MSGBOX_DEFAULT
# 694 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bran_R5_2:
# 688 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_R2_Text_1, MSGBOX_DEFAULT
# 689 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Kalle::
# 700 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_KALLE, ParcelWetlands_Kalle_Text_0, ParcelWetlands_Kalle_Text_1, ParcelWetlands_Kalle_FirstWin
# 704 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 705 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Kalle_3
ParcelWetlands_Kalle_1:
# 708 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Kalle_8
ParcelWetlands_Kalle_6:
# 711 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Kalle_13
ParcelWetlands_Kalle_11:
# 714 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Kalle_18
ParcelWetlands_Kalle_16:
# 717 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Kalle_2:
# 706 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Kalle_R2
	goto ParcelWetlands_Kalle_1

ParcelWetlands_Kalle_3:
# 705 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_KALLE_R2
	goto_if 0, ParcelWetlands_Kalle_2
	goto ParcelWetlands_Kalle_1

ParcelWetlands_Kalle_7:
# 709 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Kalle_R3
	goto ParcelWetlands_Kalle_6

ParcelWetlands_Kalle_8:
# 708 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_KALLE_R3
	goto_if 0, ParcelWetlands_Kalle_7
	goto ParcelWetlands_Kalle_6

ParcelWetlands_Kalle_12:
# 712 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Kalle_R4
	goto ParcelWetlands_Kalle_11

ParcelWetlands_Kalle_13:
# 711 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_KALLE_R4
	goto_if 0, ParcelWetlands_Kalle_12
	goto ParcelWetlands_Kalle_11

ParcelWetlands_Kalle_17:
# 715 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Kalle_R5
	goto ParcelWetlands_Kalle_16

ParcelWetlands_Kalle_18:
# 714 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_KALLE_R5
	goto_if 0, ParcelWetlands_Kalle_17
	goto ParcelWetlands_Kalle_16


ParcelWetlands_Kalle_FirstWin::
# 721 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_Text_2, MSGBOX_DEFAULT
# 722 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Kalle_R2::
# 726 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 727 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 728 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R2_Text_0, MSGBOX_YESNO
# 729 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Kalle_R2_2
# 734 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_KALLE_R2, ParcelWetlands_Kalle_R2_Text_2
# 735 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R2_Text_3, MSGBOX_DEFAULT
# 736 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Kalle_R2_2:
# 730 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R2_Text_1, MSGBOX_DEFAULT
# 731 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Kalle_R3::
# 740 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 741 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 742 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R3_Text_0, MSGBOX_YESNO
# 743 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Kalle_R3_2
# 748 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_KALLE_R3, ParcelWetlands_Kalle_R3_Text_1
# 749 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R3_Text_2, MSGBOX_DEFAULT
# 750 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Kalle_R3_2:
# 744 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R2_Text_1, MSGBOX_DEFAULT
# 745 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Kalle_R4::
# 754 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 755 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 756 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R4_Text_0, MSGBOX_YESNO
# 757 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Kalle_R4_2
# 762 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_KALLE_R4, ParcelWetlands_Kalle_R4_Text_1
# 763 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R4_Text_2, MSGBOX_DEFAULT
# 764 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Kalle_R4_2:
# 758 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R2_Text_1, MSGBOX_DEFAULT
# 759 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Kalle_R5::
# 768 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 769 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 770 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R5_Text_0, MSGBOX_YESNO
# 771 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Kalle_R5_2
# 776 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_KALLE_R5, ParcelWetlands_Kalle_R5_Text_1
# 777 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R5_Text_2, MSGBOX_DEFAULT
# 778 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Kalle_R5_2:
# 772 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_R2_Text_1, MSGBOX_DEFAULT
# 773 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Liv::
# 782 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_LIV, ParcelWetlands_Liv_Text_0, ParcelWetlands_Liv_Text_1, ParcelWetlands_Liv_FirstWin
# 786 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 787 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Liv_3
ParcelWetlands_Liv_1:
# 790 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Liv_8
ParcelWetlands_Liv_6:
# 793 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Liv_13
ParcelWetlands_Liv_11:
# 796 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Liv_18
ParcelWetlands_Liv_16:
# 799 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Liv_2:
# 788 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Liv_R2
	goto ParcelWetlands_Liv_1

ParcelWetlands_Liv_3:
# 787 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_LIV_R2
	goto_if 0, ParcelWetlands_Liv_2
	goto ParcelWetlands_Liv_1

ParcelWetlands_Liv_7:
# 791 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Liv_R3
	goto ParcelWetlands_Liv_6

ParcelWetlands_Liv_8:
# 790 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_LIV_R3
	goto_if 0, ParcelWetlands_Liv_7
	goto ParcelWetlands_Liv_6

ParcelWetlands_Liv_12:
# 794 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Liv_R4
	goto ParcelWetlands_Liv_11

ParcelWetlands_Liv_13:
# 793 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_LIV_R4
	goto_if 0, ParcelWetlands_Liv_12
	goto ParcelWetlands_Liv_11

ParcelWetlands_Liv_17:
# 797 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Liv_R5
	goto ParcelWetlands_Liv_16

ParcelWetlands_Liv_18:
# 796 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_LIV_R5
	goto_if 0, ParcelWetlands_Liv_17
	goto ParcelWetlands_Liv_16


ParcelWetlands_Liv_FirstWin::
# 803 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_Text_2, MSGBOX_DEFAULT
# 804 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Liv_R2::
# 808 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 809 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 810 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R2_Text_0, MSGBOX_YESNO
# 811 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Liv_R2_2
# 816 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_LIV_R2, ParcelWetlands_Liv_R2_Text_2
# 817 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R2_Text_3, MSGBOX_DEFAULT
# 818 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Liv_R2_2:
# 812 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R2_Text_1, MSGBOX_DEFAULT
# 813 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Liv_R3::
# 822 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 823 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 824 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R3_Text_0, MSGBOX_YESNO
# 825 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Liv_R3_2
# 830 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_LIV_R3, ParcelWetlands_Liv_R3_Text_1
# 831 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R3_Text_2, MSGBOX_DEFAULT
# 832 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Liv_R3_2:
# 826 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R2_Text_1, MSGBOX_DEFAULT
# 827 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Liv_R4::
# 836 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 837 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 838 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R4_Text_0, MSGBOX_YESNO
# 839 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Liv_R4_2
# 844 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_LIV_R4, ParcelWetlands_Liv_R4_Text_1
# 845 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R4_Text_2, MSGBOX_DEFAULT
# 846 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Liv_R4_2:
# 840 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R2_Text_1, MSGBOX_DEFAULT
# 841 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Liv_R5::
# 850 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 851 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 852 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R5_Text_0, MSGBOX_YESNO
# 853 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Liv_R5_2
# 858 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_LIV_R5, ParcelWetlands_Liv_R2_Text_2
# 859 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R5_Text_1, MSGBOX_DEFAULT
# 860 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Liv_R5_2:
# 854 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_R2_Text_1, MSGBOX_DEFAULT
# 855 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Toke::
# 864 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_TOKE, ParcelWetlands_Toke_Text_0, ParcelWetlands_Toke_Text_1, ParcelWetlands_Toke_FirstWin
# 868 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 869 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Toke_3
ParcelWetlands_Toke_1:
# 872 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Toke_8
ParcelWetlands_Toke_6:
# 875 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Toke_13
ParcelWetlands_Toke_11:
# 878 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Toke_18
ParcelWetlands_Toke_16:
# 881 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Toke_2:
# 870 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Toke_R2
	goto ParcelWetlands_Toke_1

ParcelWetlands_Toke_3:
# 869 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_TOKE_R2
	goto_if 0, ParcelWetlands_Toke_2
	goto ParcelWetlands_Toke_1

ParcelWetlands_Toke_7:
# 873 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Toke_R3
	goto ParcelWetlands_Toke_6

ParcelWetlands_Toke_8:
# 872 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_TOKE_R3
	goto_if 0, ParcelWetlands_Toke_7
	goto ParcelWetlands_Toke_6

ParcelWetlands_Toke_12:
# 876 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Toke_R4
	goto ParcelWetlands_Toke_11

ParcelWetlands_Toke_13:
# 875 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_TOKE_R4
	goto_if 0, ParcelWetlands_Toke_12
	goto ParcelWetlands_Toke_11

ParcelWetlands_Toke_17:
# 879 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Toke_R5
	goto ParcelWetlands_Toke_16

ParcelWetlands_Toke_18:
# 878 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_TOKE_R5
	goto_if 0, ParcelWetlands_Toke_17
	goto ParcelWetlands_Toke_16


ParcelWetlands_Toke_FirstWin::
# 885 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_Text_2, MSGBOX_DEFAULT
# 886 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Toke_R2::
# 890 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 891 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 892 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R2_Text_0, MSGBOX_YESNO
# 893 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Toke_R2_2
# 898 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_TOKE_R2, ParcelWetlands_Toke_R2_Text_2
# 899 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R2_Text_3, MSGBOX_DEFAULT
# 900 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Toke_R2_2:
# 894 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R2_Text_1, MSGBOX_DEFAULT
# 895 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Toke_R3::
# 904 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 905 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 906 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R3_Text_0, MSGBOX_YESNO
# 907 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Toke_R3_2
# 912 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_TOKE_R3, ParcelWetlands_Toke_R3_Text_1
# 913 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R3_Text_2, MSGBOX_DEFAULT
# 914 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Toke_R3_2:
# 908 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R2_Text_1, MSGBOX_DEFAULT
# 909 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Toke_R4::
# 918 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 919 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 920 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R4_Text_0, MSGBOX_YESNO
# 921 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Toke_R4_2
# 926 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_TOKE_R4, ParcelWetlands_Toke_R4_Text_1
# 927 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R4_Text_2, MSGBOX_DEFAULT
# 928 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Toke_R4_2:
# 922 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R2_Text_1, MSGBOX_DEFAULT
# 923 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Toke_R5::
# 932 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 933 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 934 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R5_Text_0, MSGBOX_YESNO
# 935 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Toke_R5_2
# 940 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_TOKE_R5, ParcelWetlands_Toke_R3_Text_1
# 941 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R5_Text_1, MSGBOX_DEFAULT
# 942 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Toke_R5_2:
# 936 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_R2_Text_1, MSGBOX_DEFAULT
# 937 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Jorun::
# 946 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_JORUN, ParcelWetlands_Jorun_Text_0, ParcelWetlands_Jorun_Text_1, ParcelWetlands_Jorun_FirstWin
# 950 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 951 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Jorun_3
ParcelWetlands_Jorun_1:
# 954 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Jorun_8
ParcelWetlands_Jorun_6:
# 957 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Jorun_13
ParcelWetlands_Jorun_11:
# 960 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Jorun_18
ParcelWetlands_Jorun_16:
# 963 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Jorun_2:
# 952 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Jorun_R2
	goto ParcelWetlands_Jorun_1

ParcelWetlands_Jorun_3:
# 951 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_JORUN_R2
	goto_if 0, ParcelWetlands_Jorun_2
	goto ParcelWetlands_Jorun_1

ParcelWetlands_Jorun_7:
# 955 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Jorun_R3
	goto ParcelWetlands_Jorun_6

ParcelWetlands_Jorun_8:
# 954 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_JORUN_R3
	goto_if 0, ParcelWetlands_Jorun_7
	goto ParcelWetlands_Jorun_6

ParcelWetlands_Jorun_12:
# 958 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Jorun_R4
	goto ParcelWetlands_Jorun_11

ParcelWetlands_Jorun_13:
# 957 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_JORUN_R4
	goto_if 0, ParcelWetlands_Jorun_12
	goto ParcelWetlands_Jorun_11

ParcelWetlands_Jorun_17:
# 961 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Jorun_R5
	goto ParcelWetlands_Jorun_16

ParcelWetlands_Jorun_18:
# 960 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_JORUN_R5
	goto_if 0, ParcelWetlands_Jorun_17
	goto ParcelWetlands_Jorun_16


ParcelWetlands_Jorun_FirstWin::
# 967 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_Text_2, MSGBOX_DEFAULT
# 968 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Jorun_R2::
# 972 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 973 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 974 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R2_Text_0, MSGBOX_YESNO
# 975 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Jorun_R2_2
# 980 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_JORUN_R2, ParcelWetlands_Jorun_R2_Text_2
# 981 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R2_Text_3, MSGBOX_DEFAULT
# 982 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Jorun_R2_2:
# 976 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R2_Text_1, MSGBOX_DEFAULT
# 977 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Jorun_R3::
# 986 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 987 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 988 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R3_Text_0, MSGBOX_YESNO
# 989 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Jorun_R3_2
# 994 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_JORUN_R3, ParcelWetlands_Jorun_R2_Text_2
# 995 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R3_Text_1, MSGBOX_DEFAULT
# 996 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Jorun_R3_2:
# 990 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R2_Text_1, MSGBOX_DEFAULT
# 991 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Jorun_R4::
# 1000 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1001 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1002 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R4_Text_0, MSGBOX_YESNO
# 1003 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Jorun_R4_2
# 1008 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_JORUN_R4, ParcelWetlands_Jorun_R4_Text_1
# 1009 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R4_Text_2, MSGBOX_DEFAULT
# 1010 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Jorun_R4_2:
# 1004 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R2_Text_1, MSGBOX_DEFAULT
# 1005 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Jorun_R5::
# 1014 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1015 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1016 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R5_Text_0, MSGBOX_YESNO
# 1017 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Jorun_R5_2
# 1022 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_JORUN_R5, ParcelWetlands_Jorun_R4_Text_1
# 1023 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R5_Text_1, MSGBOX_DEFAULT
# 1024 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Jorun_R5_2:
# 1018 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_R2_Text_1, MSGBOX_DEFAULT
# 1019 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Stian::
# 1028 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_STIAN, ParcelWetlands_Stian_Text_0, ParcelWetlands_Stian_Text_1, ParcelWetlands_Stian_FirstWin
# 1032 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1033 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Stian_3
ParcelWetlands_Stian_1:
# 1036 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Stian_8
ParcelWetlands_Stian_6:
# 1039 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Stian_13
ParcelWetlands_Stian_11:
# 1042 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Stian_18
ParcelWetlands_Stian_16:
# 1045 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Stian_2:
# 1034 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Stian_R2
	goto ParcelWetlands_Stian_1

ParcelWetlands_Stian_3:
# 1033 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_STIAN_R2
	goto_if 0, ParcelWetlands_Stian_2
	goto ParcelWetlands_Stian_1

ParcelWetlands_Stian_7:
# 1037 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Stian_R3
	goto ParcelWetlands_Stian_6

ParcelWetlands_Stian_8:
# 1036 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_STIAN_R3
	goto_if 0, ParcelWetlands_Stian_7
	goto ParcelWetlands_Stian_6

ParcelWetlands_Stian_12:
# 1040 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Stian_R4
	goto ParcelWetlands_Stian_11

ParcelWetlands_Stian_13:
# 1039 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_STIAN_R4
	goto_if 0, ParcelWetlands_Stian_12
	goto ParcelWetlands_Stian_11

ParcelWetlands_Stian_17:
# 1043 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Stian_R5
	goto ParcelWetlands_Stian_16

ParcelWetlands_Stian_18:
# 1042 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_STIAN_R5
	goto_if 0, ParcelWetlands_Stian_17
	goto ParcelWetlands_Stian_16


ParcelWetlands_Stian_FirstWin::
# 1049 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_Text_2, MSGBOX_DEFAULT
# 1050 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Stian_R2::
# 1054 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1055 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1056 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R2_Text_0, MSGBOX_YESNO
# 1057 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Stian_R2_2
# 1062 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_STIAN_R2, ParcelWetlands_Stian_R2_Text_2
# 1063 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R2_Text_3, MSGBOX_DEFAULT
# 1064 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Stian_R2_2:
# 1058 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R2_Text_1, MSGBOX_DEFAULT
# 1059 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Stian_R3::
# 1068 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1069 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1070 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R3_Text_0, MSGBOX_YESNO
# 1071 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Stian_R3_2
# 1076 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_STIAN_R3, ParcelWetlands_Stian_R3_Text_1
# 1077 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R3_Text_2, MSGBOX_DEFAULT
# 1078 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Stian_R3_2:
# 1072 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R2_Text_1, MSGBOX_DEFAULT
# 1073 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Stian_R4::
# 1082 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1083 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1084 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R4_Text_0, MSGBOX_YESNO
# 1085 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Stian_R4_2
# 1090 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_STIAN_R4, ParcelWetlands_Stian_R4_Text_1
# 1091 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R4_Text_2, MSGBOX_DEFAULT
# 1092 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Stian_R4_2:
# 1086 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R2_Text_1, MSGBOX_DEFAULT
# 1087 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Stian_R5::
# 1096 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1097 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1098 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R5_Text_0, MSGBOX_YESNO
# 1099 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Stian_R5_2
# 1104 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_STIAN_R5, ParcelWetlands_Stian_R5_Text_1
# 1105 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R5_Text_2, MSGBOX_DEFAULT
# 1106 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Stian_R5_2:
# 1100 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_R2_Text_1, MSGBOX_DEFAULT
# 1101 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Asta::
# 1110 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_ASTA, ParcelWetlands_Asta_Text_0, ParcelWetlands_Asta_Text_1, ParcelWetlands_Asta_FirstWin
# 1114 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1115 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Asta_3
ParcelWetlands_Asta_1:
# 1118 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Asta_8
ParcelWetlands_Asta_6:
# 1121 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Asta_13
ParcelWetlands_Asta_11:
# 1124 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Asta_18
ParcelWetlands_Asta_16:
# 1127 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Asta_2:
# 1116 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Asta_R2
	goto ParcelWetlands_Asta_1

ParcelWetlands_Asta_3:
# 1115 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ASTA_R2
	goto_if 0, ParcelWetlands_Asta_2
	goto ParcelWetlands_Asta_1

ParcelWetlands_Asta_7:
# 1119 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Asta_R3
	goto ParcelWetlands_Asta_6

ParcelWetlands_Asta_8:
# 1118 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ASTA_R3
	goto_if 0, ParcelWetlands_Asta_7
	goto ParcelWetlands_Asta_6

ParcelWetlands_Asta_12:
# 1122 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Asta_R4
	goto ParcelWetlands_Asta_11

ParcelWetlands_Asta_13:
# 1121 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ASTA_R4
	goto_if 0, ParcelWetlands_Asta_12
	goto ParcelWetlands_Asta_11

ParcelWetlands_Asta_17:
# 1125 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Asta_R5
	goto ParcelWetlands_Asta_16

ParcelWetlands_Asta_18:
# 1124 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ASTA_R5
	goto_if 0, ParcelWetlands_Asta_17
	goto ParcelWetlands_Asta_16


ParcelWetlands_Asta_FirstWin::
# 1131 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_Text_2, MSGBOX_DEFAULT
# 1132 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Asta_R2::
# 1136 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1137 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1138 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R2_Text_0, MSGBOX_YESNO
# 1139 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Asta_R2_2
# 1144 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ASTA_R2, ParcelWetlands_Asta_R2_Text_2
# 1145 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R2_Text_3, MSGBOX_DEFAULT
# 1146 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Asta_R2_2:
# 1140 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R2_Text_1, MSGBOX_DEFAULT
# 1141 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Asta_R3::
# 1150 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1151 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1152 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R3_Text_0, MSGBOX_YESNO
# 1153 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Asta_R3_2
# 1158 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ASTA_R3, ParcelWetlands_Asta_R2_Text_2
# 1159 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R3_Text_1, MSGBOX_DEFAULT
# 1160 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Asta_R3_2:
# 1154 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R2_Text_1, MSGBOX_DEFAULT
# 1155 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Asta_R4::
# 1164 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1165 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1166 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R4_Text_0, MSGBOX_YESNO
# 1167 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Asta_R4_2
# 1172 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ASTA_R4, ParcelWetlands_Asta_R4_Text_1
# 1173 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R4_Text_2, MSGBOX_DEFAULT
# 1174 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Asta_R4_2:
# 1168 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R2_Text_1, MSGBOX_DEFAULT
# 1169 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Asta_R5::
# 1178 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1179 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1180 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R5_Text_0, MSGBOX_YESNO
# 1181 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Asta_R5_2
# 1186 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ASTA_R5, ParcelWetlands_Asta_R5_Text_1
# 1187 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R5_Text_2, MSGBOX_DEFAULT
# 1188 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Asta_R5_2:
# 1182 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_R2_Text_1, MSGBOX_DEFAULT
# 1183 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bjarte::
# 1192 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_BJARTE, ParcelWetlands_Bjarte_Text_0, ParcelWetlands_Bjarte_Text_1, ParcelWetlands_Bjarte_FirstWin
# 1196 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1197 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Bjarte_3
ParcelWetlands_Bjarte_1:
# 1200 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Bjarte_8
ParcelWetlands_Bjarte_6:
# 1203 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Bjarte_13
ParcelWetlands_Bjarte_11:
# 1206 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Bjarte_18
ParcelWetlands_Bjarte_16:
# 1209 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Bjarte_2:
# 1198 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bjarte_R2
	goto ParcelWetlands_Bjarte_1

ParcelWetlands_Bjarte_3:
# 1197 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_BJARTE_R2
	goto_if 0, ParcelWetlands_Bjarte_2
	goto ParcelWetlands_Bjarte_1

ParcelWetlands_Bjarte_7:
# 1201 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bjarte_R3
	goto ParcelWetlands_Bjarte_6

ParcelWetlands_Bjarte_8:
# 1200 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_BJARTE_R3
	goto_if 0, ParcelWetlands_Bjarte_7
	goto ParcelWetlands_Bjarte_6

ParcelWetlands_Bjarte_12:
# 1204 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bjarte_R4
	goto ParcelWetlands_Bjarte_11

ParcelWetlands_Bjarte_13:
# 1203 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_BJARTE_R4
	goto_if 0, ParcelWetlands_Bjarte_12
	goto ParcelWetlands_Bjarte_11

ParcelWetlands_Bjarte_17:
# 1207 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Bjarte_R5
	goto ParcelWetlands_Bjarte_16

ParcelWetlands_Bjarte_18:
# 1206 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_BJARTE_R5
	goto_if 0, ParcelWetlands_Bjarte_17
	goto ParcelWetlands_Bjarte_16


ParcelWetlands_Bjarte_FirstWin::
# 1213 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_Text_2, MSGBOX_DEFAULT
# 1214 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bjarte_R2::
# 1218 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1219 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1220 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R2_Text_0, MSGBOX_YESNO
# 1221 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bjarte_R2_2
# 1226 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_BJARTE_R2, ParcelWetlands_Bjarte_R2_Text_2
# 1227 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R2_Text_3, MSGBOX_DEFAULT
# 1228 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bjarte_R2_2:
# 1222 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R2_Text_1, MSGBOX_DEFAULT
# 1223 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bjarte_R3::
# 1232 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1233 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1234 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R3_Text_0, MSGBOX_YESNO
# 1235 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bjarte_R3_2
# 1240 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_BJARTE_R3, ParcelWetlands_Bjarte_R3_Text_1
# 1241 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R3_Text_2, MSGBOX_DEFAULT
# 1242 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bjarte_R3_2:
# 1236 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R2_Text_1, MSGBOX_DEFAULT
# 1237 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bjarte_R4::
# 1246 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1247 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1248 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R4_Text_0, MSGBOX_YESNO
# 1249 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bjarte_R4_2
# 1254 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_BJARTE_R4, ParcelWetlands_Bjarte_R4_Text_1
# 1255 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R4_Text_2, MSGBOX_DEFAULT
# 1256 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bjarte_R4_2:
# 1250 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R2_Text_1, MSGBOX_DEFAULT
# 1251 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Bjarte_R5::
# 1260 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1261 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1262 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R5_Text_0, MSGBOX_YESNO
# 1263 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Bjarte_R5_2
# 1268 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_BJARTE_R5, ParcelWetlands_Bjarte_R5_Text_1
# 1269 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R5_Text_2, MSGBOX_DEFAULT
# 1270 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Bjarte_R5_2:
# 1264 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_R2_Text_1, MSGBOX_DEFAULT
# 1265 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Odd::
# 1274 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_ODD, ParcelWetlands_Odd_Text_0, ParcelWetlands_Odd_Text_1, ParcelWetlands_Odd_FirstWin
# 1278 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1279 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Odd_3
ParcelWetlands_Odd_1:
# 1282 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Odd_8
ParcelWetlands_Odd_6:
# 1285 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Odd_13
ParcelWetlands_Odd_11:
# 1288 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Odd_18
ParcelWetlands_Odd_16:
# 1291 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Odd_2:
# 1280 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Odd_R2
	goto ParcelWetlands_Odd_1

ParcelWetlands_Odd_3:
# 1279 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ODD_R2
	goto_if 0, ParcelWetlands_Odd_2
	goto ParcelWetlands_Odd_1

ParcelWetlands_Odd_7:
# 1283 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Odd_R3
	goto ParcelWetlands_Odd_6

ParcelWetlands_Odd_8:
# 1282 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ODD_R3
	goto_if 0, ParcelWetlands_Odd_7
	goto ParcelWetlands_Odd_6

ParcelWetlands_Odd_12:
# 1286 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Odd_R4
	goto ParcelWetlands_Odd_11

ParcelWetlands_Odd_13:
# 1285 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ODD_R4
	goto_if 0, ParcelWetlands_Odd_12
	goto ParcelWetlands_Odd_11

ParcelWetlands_Odd_17:
# 1289 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Odd_R5
	goto ParcelWetlands_Odd_16

ParcelWetlands_Odd_18:
# 1288 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ODD_R5
	goto_if 0, ParcelWetlands_Odd_17
	goto ParcelWetlands_Odd_16


ParcelWetlands_Odd_FirstWin::
# 1295 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_Text_2, MSGBOX_DEFAULT
# 1296 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Odd_R2::
# 1300 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1301 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1302 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R2_Text_0, MSGBOX_YESNO
# 1303 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Odd_R2_2
# 1308 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ODD_R2, ParcelWetlands_Odd_R2_Text_2
# 1309 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R2_Text_3, MSGBOX_DEFAULT
# 1310 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Odd_R2_2:
# 1304 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R2_Text_1, MSGBOX_DEFAULT
# 1305 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Odd_R3::
# 1314 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1315 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1316 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R3_Text_0, MSGBOX_YESNO
# 1317 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Odd_R3_2
# 1322 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ODD_R3, ParcelWetlands_Odd_R3_Text_1
# 1323 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R3_Text_2, MSGBOX_DEFAULT
# 1324 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Odd_R3_2:
# 1318 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R2_Text_1, MSGBOX_DEFAULT
# 1319 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Odd_R4::
# 1328 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1329 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1330 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R4_Text_0, MSGBOX_YESNO
# 1331 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Odd_R4_2
# 1336 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ODD_R4, ParcelWetlands_Odd_R4_Text_1
# 1337 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R4_Text_2, MSGBOX_DEFAULT
# 1338 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Odd_R4_2:
# 1332 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R2_Text_1, MSGBOX_DEFAULT
# 1333 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Odd_R5::
# 1342 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1343 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1344 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R5_Text_0, MSGBOX_YESNO
# 1345 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Odd_R5_2
# 1350 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ODD_R5, ParcelWetlands_Odd_R4_Text_1
# 1351 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R5_Text_1, MSGBOX_DEFAULT
# 1352 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Odd_R5_2:
# 1346 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_R2_Text_1, MSGBOX_DEFAULT
# 1347 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Haakon::
# 1356 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_HAAKON, ParcelWetlands_Haakon_Text_0, ParcelWetlands_Haakon_Text_1, ParcelWetlands_Haakon_FirstWin
# 1360 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1361 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Haakon_3
ParcelWetlands_Haakon_1:
# 1364 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Haakon_8
ParcelWetlands_Haakon_6:
# 1367 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Haakon_13
ParcelWetlands_Haakon_11:
# 1370 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Haakon_18
ParcelWetlands_Haakon_16:
# 1373 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Haakon_2:
# 1362 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Haakon_R2
	goto ParcelWetlands_Haakon_1

ParcelWetlands_Haakon_3:
# 1361 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_HAAKON_R2
	goto_if 0, ParcelWetlands_Haakon_2
	goto ParcelWetlands_Haakon_1

ParcelWetlands_Haakon_7:
# 1365 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Haakon_R3
	goto ParcelWetlands_Haakon_6

ParcelWetlands_Haakon_8:
# 1364 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_HAAKON_R3
	goto_if 0, ParcelWetlands_Haakon_7
	goto ParcelWetlands_Haakon_6

ParcelWetlands_Haakon_12:
# 1368 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Haakon_R4
	goto ParcelWetlands_Haakon_11

ParcelWetlands_Haakon_13:
# 1367 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_HAAKON_R4
	goto_if 0, ParcelWetlands_Haakon_12
	goto ParcelWetlands_Haakon_11

ParcelWetlands_Haakon_17:
# 1371 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Haakon_R5
	goto ParcelWetlands_Haakon_16

ParcelWetlands_Haakon_18:
# 1370 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_HAAKON_R5
	goto_if 0, ParcelWetlands_Haakon_17
	goto ParcelWetlands_Haakon_16


ParcelWetlands_Haakon_FirstWin::
# 1377 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_Text_2, MSGBOX_DEFAULT
# 1378 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Haakon_R2::
# 1382 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1383 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1384 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R2_Text_0, MSGBOX_YESNO
# 1385 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Haakon_R2_2
# 1390 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_HAAKON_R2, ParcelWetlands_Haakon_R2_Text_2
# 1391 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R2_Text_3, MSGBOX_DEFAULT
# 1392 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Haakon_R2_2:
# 1386 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R2_Text_1, MSGBOX_DEFAULT
# 1387 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Haakon_R3::
# 1396 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1397 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1398 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R3_Text_0, MSGBOX_YESNO
# 1399 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Haakon_R3_2
# 1404 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_HAAKON_R3, ParcelWetlands_Haakon_R3_Text_1
# 1405 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R3_Text_2, MSGBOX_DEFAULT
# 1406 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Haakon_R3_2:
# 1400 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R2_Text_1, MSGBOX_DEFAULT
# 1401 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Haakon_R4::
# 1410 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1411 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1412 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R4_Text_0, MSGBOX_YESNO
# 1413 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Haakon_R4_2
# 1418 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_HAAKON_R4, ParcelWetlands_Haakon_R4_Text_1
# 1419 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R4_Text_2, MSGBOX_DEFAULT
# 1420 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Haakon_R4_2:
# 1414 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R2_Text_1, MSGBOX_DEFAULT
# 1415 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Haakon_R5::
# 1424 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1425 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1426 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R5_Text_0, MSGBOX_YESNO
# 1427 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Haakon_R5_2
# 1432 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_HAAKON_R5, ParcelWetlands_Haakon_R5_Text_1
# 1433 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R5_Text_2, MSGBOX_DEFAULT
# 1434 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Haakon_R5_2:
# 1428 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_R2_Text_1, MSGBOX_DEFAULT
# 1429 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Eirik::
# 1438 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_EIRIK, ParcelWetlands_Eirik_Text_0, ParcelWetlands_Eirik_Text_1, ParcelWetlands_Eirik_FirstWin
# 1442 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1443 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Eirik_3
ParcelWetlands_Eirik_1:
# 1446 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Eirik_8
ParcelWetlands_Eirik_6:
# 1449 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Eirik_13
ParcelWetlands_Eirik_11:
# 1452 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Eirik_18
ParcelWetlands_Eirik_16:
# 1455 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Eirik_2:
# 1444 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Eirik_R2
	goto ParcelWetlands_Eirik_1

ParcelWetlands_Eirik_3:
# 1443 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_EIRIK_R2
	goto_if 0, ParcelWetlands_Eirik_2
	goto ParcelWetlands_Eirik_1

ParcelWetlands_Eirik_7:
# 1447 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Eirik_R3
	goto ParcelWetlands_Eirik_6

ParcelWetlands_Eirik_8:
# 1446 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_EIRIK_R3
	goto_if 0, ParcelWetlands_Eirik_7
	goto ParcelWetlands_Eirik_6

ParcelWetlands_Eirik_12:
# 1450 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Eirik_R4
	goto ParcelWetlands_Eirik_11

ParcelWetlands_Eirik_13:
# 1449 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_EIRIK_R4
	goto_if 0, ParcelWetlands_Eirik_12
	goto ParcelWetlands_Eirik_11

ParcelWetlands_Eirik_17:
# 1453 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Eirik_R5
	goto ParcelWetlands_Eirik_16

ParcelWetlands_Eirik_18:
# 1452 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_EIRIK_R5
	goto_if 0, ParcelWetlands_Eirik_17
	goto ParcelWetlands_Eirik_16


ParcelWetlands_Eirik_FirstWin::
# 1459 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_Text_2, MSGBOX_DEFAULT
# 1460 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Eirik_R2::
# 1464 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1465 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1466 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R2_Text_0, MSGBOX_YESNO
# 1467 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Eirik_R2_2
# 1472 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_EIRIK_R2, ParcelWetlands_Eirik_R2_Text_2
# 1473 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R2_Text_3, MSGBOX_DEFAULT
# 1474 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Eirik_R2_2:
# 1468 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R2_Text_1, MSGBOX_DEFAULT
# 1469 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Eirik_R3::
# 1478 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1479 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1480 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R3_Text_0, MSGBOX_YESNO
# 1481 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Eirik_R3_2
# 1486 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_EIRIK_R3, ParcelWetlands_Eirik_R3_Text_1
# 1487 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R3_Text_2, MSGBOX_DEFAULT
# 1488 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Eirik_R3_2:
# 1482 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R2_Text_1, MSGBOX_DEFAULT
# 1483 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Eirik_R4::
# 1492 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1493 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1494 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R4_Text_0, MSGBOX_YESNO
# 1495 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Eirik_R4_2
# 1500 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_EIRIK_R4, ParcelWetlands_Eirik_R3_Text_1
# 1501 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R4_Text_1, MSGBOX_DEFAULT
# 1502 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Eirik_R4_2:
# 1496 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R2_Text_1, MSGBOX_DEFAULT
# 1497 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Eirik_R5::
# 1506 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1507 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1508 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R5_Text_0, MSGBOX_YESNO
# 1509 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Eirik_R5_2
# 1514 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_EIRIK_R5, ParcelWetlands_Eirik_R2_Text_2
# 1515 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R5_Text_1, MSGBOX_DEFAULT
# 1516 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Eirik_R5_2:
# 1510 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_R2_Text_1, MSGBOX_DEFAULT
# 1511 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Siv::
# 1520 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_SIV, ParcelWetlands_Siv_Text_0, ParcelWetlands_Siv_Text_1, ParcelWetlands_Siv_FirstWin
# 1524 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1525 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_Siv_3
ParcelWetlands_Siv_1:
# 1528 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_Siv_8
ParcelWetlands_Siv_6:
# 1531 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_Siv_13
ParcelWetlands_Siv_11:
# 1534 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_Siv_18
ParcelWetlands_Siv_16:
# 1537 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_Siv_2:
# 1526 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Siv_R2
	goto ParcelWetlands_Siv_1

ParcelWetlands_Siv_3:
# 1525 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SIV_R2
	goto_if 0, ParcelWetlands_Siv_2
	goto ParcelWetlands_Siv_1

ParcelWetlands_Siv_7:
# 1529 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Siv_R3
	goto ParcelWetlands_Siv_6

ParcelWetlands_Siv_8:
# 1528 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SIV_R3
	goto_if 0, ParcelWetlands_Siv_7
	goto ParcelWetlands_Siv_6

ParcelWetlands_Siv_12:
# 1532 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Siv_R4
	goto ParcelWetlands_Siv_11

ParcelWetlands_Siv_13:
# 1531 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SIV_R4
	goto_if 0, ParcelWetlands_Siv_12
	goto ParcelWetlands_Siv_11

ParcelWetlands_Siv_17:
# 1535 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_Siv_R5
	goto ParcelWetlands_Siv_16

ParcelWetlands_Siv_18:
# 1534 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SIV_R5
	goto_if 0, ParcelWetlands_Siv_17
	goto ParcelWetlands_Siv_16


ParcelWetlands_Siv_FirstWin::
# 1541 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_Text_2, MSGBOX_DEFAULT
# 1542 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Siv_R2::
# 1546 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1547 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1548 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R2_Text_0, MSGBOX_YESNO
# 1549 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Siv_R2_2
# 1554 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SIV_R2, ParcelWetlands_Siv_R2_Text_2
# 1555 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R2_Text_3, MSGBOX_DEFAULT
# 1556 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Siv_R2_2:
# 1550 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R2_Text_1, MSGBOX_DEFAULT
# 1551 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Siv_R3::
# 1560 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1561 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1562 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R3_Text_0, MSGBOX_YESNO
# 1563 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Siv_R3_2
# 1568 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SIV_R3, ParcelWetlands_Siv_R3_Text_1
# 1569 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R3_Text_2, MSGBOX_DEFAULT
# 1570 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Siv_R3_2:
# 1564 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R2_Text_1, MSGBOX_DEFAULT
# 1565 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Siv_R4::
# 1574 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1575 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1576 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R4_Text_0, MSGBOX_YESNO
# 1577 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Siv_R4_2
# 1582 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SIV_R4, ParcelWetlands_Siv_R2_Text_2
# 1583 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R4_Text_1, MSGBOX_DEFAULT
# 1584 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Siv_R4_2:
# 1578 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R2_Text_1, MSGBOX_DEFAULT
# 1579 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Siv_R5::
# 1588 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1589 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1590 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R5_Text_0, MSGBOX_YESNO
# 1591 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_Siv_R5_2
# 1596 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SIV_R5, ParcelWetlands_Siv_R5_Text_1
# 1597 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R5_Text_2, MSGBOX_DEFAULT
# 1598 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Siv_R5_2:
# 1592 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_R2_Text_1, MSGBOX_DEFAULT
# 1593 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_ItemAntidote::
# 1603 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_ANTIDOTE
	end


ParcelWetlands_ItemGreatBall::
# 1604 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelWetlands_ItemSuperPotion::
# 1605 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelWetlands_ItemNetBall::
# 1606 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_NET_BALL
	end


ParcelWetlands_SignLanding::
# 1609 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_SignLanding_Text_0, MSGBOX_SIGN
	end


ParcelWetlands_SignOffice::
# 1613 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_SignOffice_Text_0, MSGBOX_SIGN
	end


ParcelWetlands_SignRoute::
# 1617 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_SignRoute_Text_0, MSGBOX_SIGN
	end


ParcelWetlands_T_Paul::
# 1623 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_PAUL, ParcelWetlands_T_Paul_Text_0, ParcelWetlands_T_Paul_Text_1, ParcelWetlands_T_Paul_FirstWin
# 1627 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1628 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_T_Paul_3
ParcelWetlands_T_Paul_1:
# 1631 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_T_Paul_8
ParcelWetlands_T_Paul_6:
# 1634 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_T_Paul_13
ParcelWetlands_T_Paul_11:
# 1637 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_T_Paul_18
ParcelWetlands_T_Paul_16:
# 1640 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_T_Paul_2:
# 1629 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Paul_R2
	goto ParcelWetlands_T_Paul_1

ParcelWetlands_T_Paul_3:
# 1628 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_PAUL_R2
	goto_if 0, ParcelWetlands_T_Paul_2
	goto ParcelWetlands_T_Paul_1

ParcelWetlands_T_Paul_7:
# 1632 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Paul_R3
	goto ParcelWetlands_T_Paul_6

ParcelWetlands_T_Paul_8:
# 1631 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_PAUL_R3
	goto_if 0, ParcelWetlands_T_Paul_7
	goto ParcelWetlands_T_Paul_6

ParcelWetlands_T_Paul_12:
# 1635 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Paul_R4
	goto ParcelWetlands_T_Paul_11

ParcelWetlands_T_Paul_13:
# 1634 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_PAUL_R4
	goto_if 0, ParcelWetlands_T_Paul_12
	goto ParcelWetlands_T_Paul_11

ParcelWetlands_T_Paul_17:
# 1638 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Paul_R5
	goto ParcelWetlands_T_Paul_16

ParcelWetlands_T_Paul_18:
# 1637 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_PAUL_R5
	goto_if 0, ParcelWetlands_T_Paul_17
	goto ParcelWetlands_T_Paul_16


ParcelWetlands_T_Paul_FirstWin::
# 1644 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_Text_2, MSGBOX_DEFAULT
# 1645 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Paul_R2::
# 1649 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1650 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1651 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R2_Text_0, MSGBOX_YESNO
# 1652 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Paul_R2_2
# 1657 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_PAUL_R2, ParcelWetlands_T_Paul_R2_Text_2
# 1658 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R2_Text_3, MSGBOX_DEFAULT
# 1659 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Paul_R2_2:
# 1653 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R2_Text_1, MSGBOX_DEFAULT
# 1654 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Paul_R3::
# 1663 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1664 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1665 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R3_Text_0, MSGBOX_YESNO
# 1666 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Paul_R3_2
# 1671 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_PAUL_R3, ParcelWetlands_T_Paul_R3_Text_1
# 1672 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R3_Text_2, MSGBOX_DEFAULT
# 1673 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Paul_R3_2:
# 1667 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R2_Text_1, MSGBOX_DEFAULT
# 1668 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Paul_R4::
# 1677 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1678 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1679 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R4_Text_0, MSGBOX_YESNO
# 1680 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Paul_R4_2
# 1685 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_PAUL_R4, ParcelWetlands_T_Paul_R4_Text_1
# 1686 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R4_Text_2, MSGBOX_DEFAULT
# 1687 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Paul_R4_2:
# 1681 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R2_Text_1, MSGBOX_DEFAULT
# 1682 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Paul_R5::
# 1691 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1692 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1693 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R5_Text_0, MSGBOX_YESNO
# 1694 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Paul_R5_2
# 1699 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_PAUL_R5, ParcelWetlands_T_Paul_R5_Text_1
# 1700 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R5_Text_2, MSGBOX_DEFAULT
# 1701 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Paul_R5_2:
# 1695 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_R2_Text_1, MSGBOX_DEFAULT
# 1696 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Sunniva::
# 1705 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_SUNNIVA, ParcelWetlands_T_Sunniva_Text_0, ParcelWetlands_T_Sunniva_Text_1, ParcelWetlands_T_Sunniva_FirstWin
# 1709 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1710 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_T_Sunniva_3
ParcelWetlands_T_Sunniva_1:
# 1713 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_T_Sunniva_8
ParcelWetlands_T_Sunniva_6:
# 1716 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_T_Sunniva_13
ParcelWetlands_T_Sunniva_11:
# 1719 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_T_Sunniva_18
ParcelWetlands_T_Sunniva_16:
# 1722 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_T_Sunniva_2:
# 1711 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Sunniva_R2
	goto ParcelWetlands_T_Sunniva_1

ParcelWetlands_T_Sunniva_3:
# 1710 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SUNNIVA_R2
	goto_if 0, ParcelWetlands_T_Sunniva_2
	goto ParcelWetlands_T_Sunniva_1

ParcelWetlands_T_Sunniva_7:
# 1714 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Sunniva_R3
	goto ParcelWetlands_T_Sunniva_6

ParcelWetlands_T_Sunniva_8:
# 1713 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SUNNIVA_R3
	goto_if 0, ParcelWetlands_T_Sunniva_7
	goto ParcelWetlands_T_Sunniva_6

ParcelWetlands_T_Sunniva_12:
# 1717 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Sunniva_R4
	goto ParcelWetlands_T_Sunniva_11

ParcelWetlands_T_Sunniva_13:
# 1716 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SUNNIVA_R4
	goto_if 0, ParcelWetlands_T_Sunniva_12
	goto ParcelWetlands_T_Sunniva_11

ParcelWetlands_T_Sunniva_17:
# 1720 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Sunniva_R5
	goto ParcelWetlands_T_Sunniva_16

ParcelWetlands_T_Sunniva_18:
# 1719 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_SUNNIVA_R5
	goto_if 0, ParcelWetlands_T_Sunniva_17
	goto ParcelWetlands_T_Sunniva_16


ParcelWetlands_T_Sunniva_FirstWin::
# 1726 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_Text_2, MSGBOX_DEFAULT
# 1727 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Sunniva_R2::
# 1731 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1732 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1733 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R2_Text_0, MSGBOX_YESNO
# 1734 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Sunniva_R2_2
# 1739 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SUNNIVA_R2, ParcelWetlands_T_Sunniva_R2_Text_2
# 1740 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R2_Text_3, MSGBOX_DEFAULT
# 1741 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Sunniva_R2_2:
# 1735 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R2_Text_1, MSGBOX_DEFAULT
# 1736 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Sunniva_R3::
# 1745 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1746 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1747 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R3_Text_0, MSGBOX_YESNO
# 1748 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Sunniva_R3_2
# 1753 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SUNNIVA_R3, ParcelWetlands_T_Sunniva_R3_Text_1
# 1754 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R3_Text_2, MSGBOX_DEFAULT
# 1755 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Sunniva_R3_2:
# 1749 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R2_Text_1, MSGBOX_DEFAULT
# 1750 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Sunniva_R4::
# 1759 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1760 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1761 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R4_Text_0, MSGBOX_YESNO
# 1762 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Sunniva_R4_2
# 1767 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SUNNIVA_R4, ParcelWetlands_T_Sunniva_R4_Text_1
# 1768 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R4_Text_2, MSGBOX_DEFAULT
# 1769 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Sunniva_R4_2:
# 1763 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R2_Text_1, MSGBOX_DEFAULT
# 1764 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Sunniva_R5::
# 1773 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1774 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1775 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R5_Text_0, MSGBOX_YESNO
# 1776 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Sunniva_R5_2
# 1781 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_SUNNIVA_R5, ParcelWetlands_T_Sunniva_R5_Text_1
# 1782 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R5_Text_2, MSGBOX_DEFAULT
# 1783 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Sunniva_R5_2:
# 1777 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_R2_Text_1, MSGBOX_DEFAULT
# 1778 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Roar::
# 1787 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_ROAR, ParcelWetlands_T_Roar_Text_0, ParcelWetlands_T_Roar_Text_1, ParcelWetlands_T_Roar_FirstWin
# 1791 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1792 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlands_T_Roar_3
ParcelWetlands_T_Roar_1:
# 1795 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlands_T_Roar_8
ParcelWetlands_T_Roar_6:
# 1798 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlands_T_Roar_13
ParcelWetlands_T_Roar_11:
# 1801 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlands_T_Roar_18
ParcelWetlands_T_Roar_16:
# 1804 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlands_T_Roar_2:
# 1793 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Roar_R2
	goto ParcelWetlands_T_Roar_1

ParcelWetlands_T_Roar_3:
# 1792 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ROAR_R2
	goto_if 0, ParcelWetlands_T_Roar_2
	goto ParcelWetlands_T_Roar_1

ParcelWetlands_T_Roar_7:
# 1796 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Roar_R3
	goto ParcelWetlands_T_Roar_6

ParcelWetlands_T_Roar_8:
# 1795 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ROAR_R3
	goto_if 0, ParcelWetlands_T_Roar_7
	goto ParcelWetlands_T_Roar_6

ParcelWetlands_T_Roar_12:
# 1799 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Roar_R4
	goto ParcelWetlands_T_Roar_11

ParcelWetlands_T_Roar_13:
# 1798 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ROAR_R4
	goto_if 0, ParcelWetlands_T_Roar_12
	goto ParcelWetlands_T_Roar_11

ParcelWetlands_T_Roar_17:
# 1802 "data/maps/ParcelWetlands/scripts.pory"
	goto ParcelWetlands_T_Roar_R5
	goto ParcelWetlands_T_Roar_16

ParcelWetlands_T_Roar_18:
# 1801 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_WET_ROAR_R5
	goto_if 0, ParcelWetlands_T_Roar_17
	goto ParcelWetlands_T_Roar_16


ParcelWetlands_T_Roar_FirstWin::
# 1808 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_Text_2, MSGBOX_DEFAULT
# 1809 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Roar_R2::
# 1813 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1814 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1815 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R2_Text_0, MSGBOX_YESNO
# 1816 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Roar_R2_2
# 1821 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ROAR_R2, ParcelWetlands_T_Roar_R2_Text_2
# 1822 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R2_Text_3, MSGBOX_DEFAULT
# 1823 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Roar_R2_2:
# 1817 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R2_Text_1, MSGBOX_DEFAULT
# 1818 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Roar_R3::
# 1827 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1828 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1829 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R3_Text_0, MSGBOX_YESNO
# 1830 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Roar_R3_2
# 1835 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ROAR_R3, ParcelWetlands_T_Roar_R3_Text_1
# 1836 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R3_Text_2, MSGBOX_DEFAULT
# 1837 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Roar_R3_2:
# 1831 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R2_Text_1, MSGBOX_DEFAULT
# 1832 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Roar_R4::
# 1841 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1842 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1843 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R4_Text_0, MSGBOX_YESNO
# 1844 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Roar_R4_2
# 1849 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ROAR_R4, ParcelWetlands_T_Roar_R4_Text_1
# 1850 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R4_Text_2, MSGBOX_DEFAULT
# 1851 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Roar_R4_2:
# 1845 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R2_Text_1, MSGBOX_DEFAULT
# 1846 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_T_Roar_R5::
# 1855 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1856 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1857 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R5_Text_0, MSGBOX_YESNO
# 1858 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_T_Roar_R5_2
# 1863 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WET_ROAR_R5, ParcelWetlands_T_Roar_R5_Text_1
# 1864 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R5_Text_2, MSGBOX_DEFAULT
# 1865 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_T_Roar_R5_2:
# 1859 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_R2_Text_1, MSGBOX_DEFAULT
# 1860 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_PerrinScene::
# 1871 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_2, ParcelWetlands_PerrinScene_2
# 1875 "data/maps/ParcelWetlands/scripts.pory"
	lockall
# 1876 "data/maps/ParcelWetlands/scripts.pory"
	playse SE_PIN
# 1877 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PerrinScene_Text_0, MSGBOX_DEFAULT
# 1878 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 1879 "data/maps/ParcelWetlands/scripts.pory"
	applymovement 32, Movement_ParcelWetlands_PerrinIn
# 1880 "data/maps/ParcelWetlands/scripts.pory"
	waitmovement 0
# 1881 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PerrinScene_Text_1, MSGBOX_DEFAULT
# 1882 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_2, ParcelWetlands_PerrinScene_Text_2
# 1883 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PerrinScene_Text_3, MSGBOX_DEFAULT
# 1884 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 1885 "data/maps/ParcelWetlands/scripts.pory"
	applymovement 32, Movement_ParcelWetlands_PerrinOut
# 1886 "data/maps/ParcelWetlands/scripts.pory"
	waitmovement 0
# 1887 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 32
# 1888 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_PERRIN_2
# 1889 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1890 "data/maps/ParcelWetlands/scripts.pory"
	releaseall
	end

ParcelWetlands_PerrinScene_2:
# 1872 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelWetlands_PerrinTalk::
# 1894 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1895 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1896 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 1897 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


# 1900 "data/maps/ParcelWetlands/scripts.pory"
Movement_ParcelWetlands_PerrinIn:
# 1900 "data/maps/ParcelWetlands/scripts.pory"
	walk_left
# 1900 "data/maps/ParcelWetlands/scripts.pory"
	walk_left
# 1900 "data/maps/ParcelWetlands/scripts.pory"
	walk_left
	step_end

# 1901 "data/maps/ParcelWetlands/scripts.pory"
Movement_ParcelWetlands_PerrinOut:
# 1901 "data/maps/ParcelWetlands/scripts.pory"
	walk_right
# 1901 "data/maps/ParcelWetlands/scripts.pory"
	walk_right
# 1901 "data/maps/ParcelWetlands/scripts.pory"
	walk_right
	step_end

ParcelWetlands_Epilogue::
# 1905 "data/maps/ParcelWetlands/scripts.pory"
	lockall
# 1906 "data/maps/ParcelWetlands/scripts.pory"
	delay 20
# 1907 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Epilogue_Text_0, MSGBOX_DEFAULT
# 1908 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Epilogue_Text_1, MSGBOX_DEFAULT
# 1909 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 1910 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 2
# 1911 "data/maps/ParcelWetlands/scripts.pory"
	warp MAP_PARCEL_FLOODBASIN, 20, 90
# 1912 "data/maps/ParcelWetlands/scripts.pory"
	waitstate
	end


ParcelWetlands_ToHide::
# 1918 "data/maps/ParcelWetlands/scripts.pory"
	warp MAP_PARCEL_WETLANDS_HIDE, 47, 10
# 1919 "data/maps/ParcelWetlands/scripts.pory"
	waitstate
	end


ParcelWetlands_ReedCount::
# 1924 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_REED, ParcelWetlands_ReedCount_3
ParcelWetlands_ReedCount_1:
# 1929 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ReedCount_Text_1, MSGBOX_SIGN
	end

ParcelWetlands_ReedCount_2:
# 1925 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ReedCount_Text_0, MSGBOX_SIGN
# 1926 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_REED_FOUND
	end

ParcelWetlands_ReedCount_3:
# 1924 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_REED_FOUND, ParcelWetlands_ReedCount_2
	goto ParcelWetlands_ReedCount_1


ParcelWetlands_SurveyStake::
# 1935 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_SurveyStake_Text_0, MSGBOX_SIGN
# 1936 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 0
# 1937 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldSurveyStake
# 1938 "data/maps/ParcelWetlands/scripts.pory"
	msgbox gStringVar4, MSGBOX_SIGN
# 1939 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND, ParcelWetlands_SurveyStake_3
ParcelWetlands_SurveyStake_1:
	end

ParcelWetlands_SurveyStake_2:
# 1940 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_SurveyStake_Text_1, MSGBOX_SIGN
# 1941 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_SECOND_0
	goto ParcelWetlands_SurveyStake_1

ParcelWetlands_SurveyStake_3:
# 1939 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_unset FLAG_SKALD_SECOND_0, ParcelWetlands_SurveyStake_2
	goto ParcelWetlands_SurveyStake_1


ParcelWetlands_PairLanding::
# 1949 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1950 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_PairLanding_2
# 1955 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelWetlands_PairLanding_3
# 1961 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairLanding_Text_8, MSGBOX_DEFAULT
# 1962 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairLanding_Text_9, MSGBOX_DEFAULT
# 1963 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairLanding_Text_10, MSGBOX_DEFAULT
# 1964 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairLanding_Text_11, MSGBOX_DEFAULT
ParcelWetlands_PairLanding_1:
# 1966 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_PairLanding_2:
# 1951 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairLanding_Text_0, MSGBOX_DEFAULT
# 1952 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairLanding_Text_1, MSGBOX_DEFAULT
# 1953 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairLanding_Text_2, MSGBOX_DEFAULT
# 1954 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairLanding_Text_3, MSGBOX_DEFAULT
	goto ParcelWetlands_PairLanding_1

ParcelWetlands_PairLanding_3:
# 1956 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairLanding_Text_4, MSGBOX_DEFAULT
# 1957 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairLanding_Text_5, MSGBOX_DEFAULT
# 1958 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairLanding_Text_6, MSGBOX_DEFAULT
# 1959 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairLanding_Text_7, MSGBOX_DEFAULT
	goto ParcelWetlands_PairLanding_1


ParcelWetlands_PairTurf::
# 1971 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1972 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_PairTurf_2
# 1977 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelWetlands_PairTurf_3
# 1983 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairTurf_Text_8, MSGBOX_DEFAULT
# 1984 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairTurf_Text_9, MSGBOX_DEFAULT
# 1985 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairTurf_Text_10, MSGBOX_DEFAULT
# 1986 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairTurf_Text_11, MSGBOX_DEFAULT
ParcelWetlands_PairTurf_1:
# 1988 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_PairTurf_2:
# 1973 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairTurf_Text_0, MSGBOX_DEFAULT
# 1974 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairTurf_Text_1, MSGBOX_DEFAULT
# 1975 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairTurf_Text_2, MSGBOX_DEFAULT
# 1976 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairTurf_Text_3, MSGBOX_DEFAULT
	goto ParcelWetlands_PairTurf_1

ParcelWetlands_PairTurf_3:
# 1978 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairTurf_Text_4, MSGBOX_DEFAULT
# 1979 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairTurf_Text_5, MSGBOX_DEFAULT
# 1980 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairTurf_Text_6, MSGBOX_DEFAULT
# 1981 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairTurf_Text_7, MSGBOX_DEFAULT
	goto ParcelWetlands_PairTurf_1


ParcelWetlands_Stringer::
# 1995 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 1996 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 1997 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_Stringer_2
# 1999 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelWetlands_Stringer_3
# 2011 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stringer_Text_7, MSGBOX_DEFAULT
ParcelWetlands_Stringer_1:
# 2013 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Stringer_2:
# 1998 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stringer_Text_0, MSGBOX_DEFAULT
	goto ParcelWetlands_Stringer_1

ParcelWetlands_Stringer_3:
# 2000 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stringer_Text_1, MSGBOX_DEFAULT
# 2001 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stringer_Text_2, MSGBOX_YESNO
# 2002 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_Stringer_7
# 2007 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stringer_Text_5, MSGBOX_DEFAULT
# 2008 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stringer_Text_6, MSGBOX_DEFAULT
	goto ParcelWetlands_Stringer_1

ParcelWetlands_Stringer_7:
# 2003 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stringer_Text_3, MSGBOX_DEFAULT
# 2004 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stringer_Text_4, MSGBOX_DEFAULT
# 2005 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_CH_QUOTE
	goto ParcelWetlands_Stringer_1


ParcelWetlands_TurfCutter::
# 2020 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 2021 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 2022 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TURF_DONE, ParcelWetlands_TurfCutter_2
# 2024 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TURF, ParcelWetlands_TurfCutter_3
# 2033 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_TurfCutter_Text_3, MSGBOX_DEFAULT
# 2034 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_TURF
ParcelWetlands_TurfCutter_1:
# 2036 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_TurfCutter_2:
# 2023 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_TurfCutter_Text_0, MSGBOX_DEFAULT
	goto ParcelWetlands_TurfCutter_1

ParcelWetlands_TurfCutter_3:
# 2025 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TURF_FOUND, ParcelWetlands_TurfCutter_7
# 2030 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_TurfCutter_Text_2, MSGBOX_DEFAULT
	goto ParcelWetlands_TurfCutter_1

ParcelWetlands_TurfCutter_7:
# 2026 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_TurfCutter_Text_1, MSGBOX_DEFAULT
# 2027 "data/maps/ParcelWetlands/scripts.pory"
	giveitem ITEM_ETHER, 2
# 2028 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_TURF_DONE
	goto ParcelWetlands_TurfCutter_1


ParcelWetlands_TurfCrack::
# 2041 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TURF, ParcelWetlands_TurfCrack_4
ParcelWetlands_TurfCrack_3:
# 2045 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_TurfCrack_Text_1, MSGBOX_SIGN
ParcelWetlands_TurfCrack_1:
	end

ParcelWetlands_TurfCrack_2:
# 2042 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_TurfCrack_Text_0, MSGBOX_SIGN
# 2043 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_TURF_FOUND
	goto ParcelWetlands_TurfCrack_1

ParcelWetlands_TurfCrack_4:
# 2041 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_TURF_FOUND, ParcelWetlands_TurfCrack_2
	goto ParcelWetlands_TurfCrack_3


ParcelWetlands_FindNest::
# 2053 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_NEST, ParcelWetlands_FindNest_4
ParcelWetlands_FindNest_3:
# 2057 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_FindNest_Text_1, MSGBOX_SIGN
ParcelWetlands_FindNest_1:
	end

ParcelWetlands_FindNest_2:
# 2054 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_FindNest_Text_0, MSGBOX_SIGN
# 2055 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_NEST_FOUND
	goto ParcelWetlands_FindNest_1

ParcelWetlands_FindNest_4:
# 2053 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_NEST_FOUND, ParcelWetlands_FindNest_2
	goto ParcelWetlands_FindNest_3


ParcelWetlands_PairSouth::
# 2063 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 2064 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_PairSouth_2
# 2070 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelWetlands_PairSouth_3
# 2076 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairSouth_Text_9, MSGBOX_DEFAULT
# 2077 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairSouth_Text_10, MSGBOX_DEFAULT
# 2078 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairSouth_Text_11, MSGBOX_DEFAULT
# 2079 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairSouth_Text_12, MSGBOX_DEFAULT
# 2080 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairSouth_Text_13, MSGBOX_DEFAULT
ParcelWetlands_PairSouth_1:
# 2082 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_PairSouth_2:
# 2065 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairSouth_Text_0, MSGBOX_DEFAULT
# 2066 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairSouth_Text_1, MSGBOX_DEFAULT
# 2067 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairSouth_Text_2, MSGBOX_DEFAULT
# 2068 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairSouth_Text_3, MSGBOX_DEFAULT
# 2069 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairSouth_Text_4, MSGBOX_DEFAULT
	goto ParcelWetlands_PairSouth_1

ParcelWetlands_PairSouth_3:
# 2071 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairSouth_Text_5, MSGBOX_DEFAULT
# 2072 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairSouth_Text_6, MSGBOX_DEFAULT
# 2073 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairSouth_Text_7, MSGBOX_DEFAULT
# 2074 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PairSouth_Text_8, MSGBOX_DEFAULT
	goto ParcelWetlands_PairSouth_1


ParcelWetlands_Board1::
# 2089 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Board1_Text_0, MSGBOX_SIGN
	end


ParcelWetlands_Board2::
# 2094 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Board2_Text_0, MSGBOX_SIGN
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
# 243 "data/maps/ParcelWetlands/scripts.pory"
	.string "WOMAN: He's fine. He's been fine for\n"
	.string "weeks. I still watch him drink.\p"
	.string "They say the river people made the\n"
	.string "Board say numbers out loud. I'd like\l"
	.string "somebody to say ours out loud. To my\l"
	.string "face, in this town.$"

ParcelWetlands_Crowd1_Text_2:
# 247 "data/maps/ParcelWetlands/scripts.pory"
	.string "WOMAN: My husband drank from that\n"
	.string "channel this morning. He's fine. He's\l"
	.string "fine, isn't he?$"

ParcelWetlands_Crowd2_Text_0:
# 255 "data/maps/ParcelWetlands/scripts.pory"
	.string "MAN: Somebody did this, I said. The\n"
	.string "hearing said who. A permit page says how\l"
	.string "much they're allowed to do now. It's a\l"
	.string "number. I can argue with a number. I\l"
	.string "couldn't argue with a night.$"

ParcelWetlands_Crowd2_Text_1:
# 260 "data/maps/ParcelWetlands/scripts.pory"
	.string "MAN: Somebody did it, and somebody's\n"
	.string "name is on a sheet in the river hall now,\l"
	.string "under 'allocation.'\p"
	.string "Not ours yet. But I've seen how a sheet\n"
	.string "starts. It starts with one village that\l"
	.string "won't sit down.$"

ParcelWetlands_Crowd2_Text_2:
# 264 "data/maps/ParcelWetlands/scripts.pory"
	.string "MAN: Somebody did this. Water doesn't\n"
	.string "go bad on its own in a night.\p"
	.string "And I don't see anybody from the CORPS\n"
	.string "writing THAT down.$"

ParcelWetlands_Crowd3_Text_0:
# 272 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOY: Dad says it wasn't your fault. He\n"
	.string "says it like it cost him. He also says\l"
	.string "you wrote it down. He says that like it\l"
	.string "cost him more.$"

ParcelWetlands_Crowd3_Text_1:
# 277 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOY: Dad doesn't say it's your fault any\n"
	.string "more. He says it's 'the allocation.'\p"
	.string "I don't know what that is. Is it worse\n"
	.string "than you?$"

ParcelWetlands_Crowd3_Text_2:
# 281 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOY: Dad says it's your fault. Is it your\n"
	.string "fault?$"

ParcelWetlands_EvResidue_Text_0:
# 297 "data/maps/ParcelWetlands/scripts.pory"
	.string "The residue sample. Sealed.$"

ParcelWetlands_EvResidue_Text_1:
# 301 "data/maps/ParcelWetlands/scripts.pory"
	.string "Upstream of the landing the residue\n"
	.string "collects in the reed roots. Greasy.\l"
	.string "Faintly sweet.\p"
	.string "It did not start here. A sample, sealed\n"
	.string "and labelled.$"

ParcelWetlands_EvPipe_Text_0:
# 317 "data/maps/ParcelWetlands/scripts.pory"
	.string "The pipe segment. Photographed and\n"
	.string "noted.$"

ParcelWetlands_EvPipe_Text_1:
# 321 "data/maps/ParcelWetlands/scripts.pory"
	.string "A broken discharge pipe, half-buried\n"
	.string "under the falls. The break is old. The\l"
	.string "staining inside it is not.\p"
	.string "Photographed where it lies.$"

ParcelWetlands_EvPipe_Text_2:
# 322 "data/maps/ParcelWetlands/scripts.pory"
	.string "You have stood over a pipe like this\n"
	.string "before, at the edge of a marsh nobody\l"
	.string "called a habitat, beside a friend who\l"
	.string "had already stopped painting.\p"
	.string "You did not have the word then. You\n"
	.string "write it now. It is no comfort. You write\l"
	.string "it anyway.$"

ParcelWetlands_EvManifest_Text_0:
# 338 "data/maps/ParcelWetlands/scripts.pory"
	.string "The manifest. Drying between notebook\n"
	.string "pages.$"

ParcelWetlands_EvManifest_Text_1:
# 342 "data/maps/ParcelWetlands/scripts.pory"
	.string "A transport manifest, soaked but\n"
	.string "readable. Tonnage. Dates. A carrier code\l"
	.string "that isn't in any register.\p"
	.string "The consignee field has been inked out\n"
	.string "by hand.$"

ParcelWetlands_RequirePoison_Text_0:
# 354 "data/maps/ParcelWetlands/scripts.pory"
	.string "The water is quiet. HARLAND's boats sit\n"
	.string "low on their lines.$"

ParcelWetlands_CheckEvidenceDone_Text_0:
# 363 "data/maps/ParcelWetlands/scripts.pory"
	.string "Residue. Pipe. Manifest.\p"
	.string "Enough to point. Not enough to convict.\n"
	.string "All of it written down.$"

ParcelWetlands_CheckEvidenceDone_Text_1:
# 366 "data/maps/ParcelWetlands/scripts.pory"
	.string "Someone is standing at the landing.\n"
	.string "Watching.$"

ParcelWetlands_Enforcer_Text_0:
# 374 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: You think you're saving\n"
	.string "something?\p"
	.string "The land's already dead.\n"
	.string "We're just the first to admit it.$"

ParcelWetlands_Enforcer_Text_1:
# 375 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: Hm.$"

ParcelWetlands_Enforcer_Text_2:
# 378 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: Your mentor tried.\n"
	.string "Look how that went.$"

ParcelWetlands_Enforcer_Text_3:
# 379 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: Keep the manifest. Frame it.\n"
	.string "Nobody who matters can read.$"

ParcelWetlands_Enforcer_Text_4:
# 383 "data/maps/ParcelWetlands/scripts.pory"
	.string "MAN: Where'd the councilman go? He was\n"
	.string "right there by the office.\p"
	.string "His car's gone.$"

ParcelWetlands_Gunnar_Text_0:
# 401 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Twice as far out, I said. The\n"
	.string "count's coming back in. Not to where it\l"
	.string "was. In. You wrote it down and now I\l"
	.string "write it down and the boy writes it\l"
	.string "down. Three of us. That's a survey.$"

ParcelWetlands_Gunnar_Text_1:
# 406 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Twice as far out. You remember\n"
	.string "that for me, when you write your\l"
	.string "reports.$"

ParcelWetlands_Gunnar_Text_2:
# 411 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Still there? Skating about?\p"
	.string "Good. Good. Then it's not all gone bad.\n"
	.string "Not yet.$"

ParcelWetlands_Gunnar_Text_3:
# 414 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Take these. My son's. He's not\n"
	.string "coming back for them.$"

ParcelWetlands_Gunnar_Text_4:
# 417 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Take this. My son's rod. He's\n"
	.string "not coming back for it.$"

ParcelWetlands_Gunnar_Text_5:
# 425 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: The puddles past the bridge,\n"
	.string "west end. Little blue thing on long legs.\l"
	.string "Go and look.$"

ParcelWetlands_Gunnar_Text_6:
# 429 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: The reed beds used to go twice\n"
	.string "as far out. Ask anyone old enough to\l"
	.string "remember.\p"
	.string "Nobody asks.$"

ParcelWetlands_Gunnar_Text_7:
# 430 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: You're a RANGER, aren't you?\n"
	.string "Then count something for me.\p"
	.string "There used to be SURSKIT on the\n"
	.string "puddles up past the bridge, west end. If\l"
	.string "there's still one, the water's not all\l"
	.string "gone bad.\p"
	.string "Go and look. Then come and tell me.$"

ParcelWetlands_Surskit_Text_0:
# 440 "data/maps/ParcelWetlands/scripts.pory"
	.string "The SURSKIT skates a circle on the\n"
	.string "puddle, then another.\p"
	.string "One. Still here. Written down.$"

ParcelWetlands_Surskit_Text_1:
# 445 "data/maps/ParcelWetlands/scripts.pory"
	.string "A SURSKIT skates a circle on the\n"
	.string "puddle, then another.$"

ParcelWetlands_Selt_Text_0:
# 453 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Nothing illegal about standing by\n"
	.string "the water, kid.$"

ParcelWetlands_Selt_Text_1:
# 454 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Fine, fine. Moving along.$"

ParcelWetlands_Selt_Text_2:
# 469 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: A man's got to eat. You want\n"
	.string "villains, look further up the money.$"

ParcelWetlands_Selt_R2_Text_0:
# 480 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelWetlands_Selt_R2_Text_1:
# 482 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Another time, then.$"

ParcelWetlands_Selt_R2_Text_2:
# 486 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Right. That's the whole of it.$"

ParcelWetlands_Selt_R2_Text_3:
# 487 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Selt_R3_Text_0:
# 494 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelWetlands_Selt_R3_Text_1:
# 500 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Still yours.$"

ParcelWetlands_Selt_R3_Text_2:
# 501 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlands_Selt_R4_Text_0:
# 508 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelWetlands_Selt_R4_Text_1:
# 515 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlands_Selt_R5_Text_0:
# 522 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWetlands_Selt_R5_Text_1:
# 528 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: …Fair.$"

ParcelWetlands_Selt_R5_Text_2:
# 529 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWetlands_Mora_Text_0:
# 535 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: This patch is spoken for. Walk on.$"

ParcelWetlands_Mora_Text_1:
# 536 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Ugh. Whatever.$"

ParcelWetlands_Mora_Text_2:
# 551 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Spoken for by WHO? Mind your own\n"
	.string "business.$"

ParcelWetlands_Mora_R2_Text_0:
# 562 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelWetlands_Mora_R2_Text_1:
# 564 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Fine. Same spot.$"

ParcelWetlands_Mora_R2_Text_2:
# 568 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Still yours.$"

ParcelWetlands_Mora_R2_Text_3:
# 569 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlands_Mora_R3_Text_0:
# 576 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_Mora_R3_Text_1:
# 582 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: That's the one I wanted to see.$"

ParcelWetlands_Mora_R3_Text_2:
# 583 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Mora_R4_Text_0:
# 590 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelWetlands_Mora_R4_Text_1:
# 597 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Mora_R5_Text_0:
# 604 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWetlands_Mora_R5_Text_1:
# 610 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Noted. Properly, this time.$"

ParcelWetlands_Mora_R5_Text_2:
# 611 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWetlands_Bran_Text_0:
# 617 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Mind your boots. Mudcaps grow\n"
	.string "where you least want them.\p"
	.string "And trainers, apparently. C'mon then.$"

ParcelWetlands_Bran_Text_1:
# 618 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Heh. Soft hands, hard hits.$"

ParcelWetlands_Bran_Text_2:
# 633 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: There's a path up to the office\n"
	.string "from here. Mind the ledge, it's higher\l"
	.string "than it looks.$"

ParcelWetlands_Bran_R2_Text_0:
# 644 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: I kept the team up for this.\n"
	.string "Again?$"

ParcelWetlands_Bran_R2_Text_1:
# 646 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: No hurry. The water keeps.$"

ParcelWetlands_Bran_R2_Text_2:
# 650 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Right. That's the whole of it.$"

ParcelWetlands_Bran_R2_Text_3:
# 651 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Bran_R3_Text_0:
# 658 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWetlands_Bran_R3_Text_1:
# 664 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: That's the one I wanted to see.$"

ParcelWetlands_Bran_R3_Text_2:
# 665 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlands_Bran_R4_Text_0:
# 672 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelWetlands_Bran_R4_Text_1:
# 678 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Noted. Properly, this time.$"

ParcelWetlands_Bran_R4_Text_2:
# 679 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Bran_R5_Text_0:
# 686 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWetlands_Bran_R5_Text_1:
# 692 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: …Again, then. Later.$"

ParcelWetlands_Bran_R5_Text_2:
# 693 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWetlands_Kalle_Text_0:
# 701 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: The reeds are full of cocoons.\n"
	.string "Hundreds! Don't step on them!$"

ParcelWetlands_Kalle_Text_1:
# 702 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Aw. They'll hatch anyway.$"

ParcelWetlands_Kalle_Text_2:
# 717 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: WURMPLE pick the reed stems.\n"
	.string "When the reeds go, where do they pick?$"

ParcelWetlands_Kalle_R2_Text_0:
# 728 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelWetlands_Kalle_R2_Text_1:
# 730 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Suit yourself. I'm here.$"

ParcelWetlands_Kalle_R2_Text_2:
# 734 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Right. That's the whole of it.$"

ParcelWetlands_Kalle_R2_Text_3:
# 735 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Kalle_R3_Text_0:
# 742 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_Kalle_R3_Text_1:
# 748 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: …Fair.$"

ParcelWetlands_Kalle_R3_Text_2:
# 749 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Kalle_R4_Text_0:
# 756 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelWetlands_Kalle_R4_Text_1:
# 762 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Noted. Properly, this time.$"

ParcelWetlands_Kalle_R4_Text_2:
# 763 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Kalle_R5_Text_0:
# 770 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelWetlands_Kalle_R5_Text_1:
# 776 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: …Again, then. Later.$"

ParcelWetlands_Kalle_R5_Text_2:
# 777 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlands_Liv_Text_0:
# 783 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Nobody comes out this far. So\n"
	.string "you're either lost or you're a RANGER.$"

ParcelWetlands_Liv_Text_1:
# 784 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: RANGER, then.$"

ParcelWetlands_Liv_Text_2:
# 799 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: I come out here for the quiet. It's\n"
	.string "less quiet than it was. Engines on the\l"
	.string "water, at night.$"

ParcelWetlands_Liv_R2_Text_0:
# 810 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelWetlands_Liv_R2_Text_1:
# 812 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Fine. Same spot.$"

ParcelWetlands_Liv_R2_Text_2:
# 816 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: …Fair.$"

ParcelWetlands_Liv_R2_Text_3:
# 817 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlands_Liv_R3_Text_0:
# 824 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelWetlands_Liv_R3_Text_1:
# 830 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: …Again, then. Later.$"

ParcelWetlands_Liv_R3_Text_2:
# 831 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Liv_R4_Text_0:
# 838 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelWetlands_Liv_R4_Text_1:
# 844 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Right. That's the whole of it.$"

ParcelWetlands_Liv_R4_Text_2:
# 845 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlands_Liv_R5_Text_0:
# 852 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Last one. I've put everything I've\n"
	.string "got into this team. Go?$"

ParcelWetlands_Liv_R5_Text_1:
# 859 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWetlands_Toke_Text_0:
# 865 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: You didn't see me. Nobody sees me.$"

ParcelWetlands_Toke_Text_1:
# 866 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: You saw me.$"

ParcelWetlands_Toke_Text_2:
# 881 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: The grass is tallest by the water.\n"
	.string "That's where I hide. That's where the\l"
	.string "SURSKIT hide, too.$"

ParcelWetlands_Toke_R2_Text_0:
# 892 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: I kept the team up for this.\n"
	.string "Again?$"

ParcelWetlands_Toke_R2_Text_1:
# 894 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: No hurry. The water keeps.$"

ParcelWetlands_Toke_R2_Text_2:
# 898 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: That's the one I wanted to see.$"

ParcelWetlands_Toke_R2_Text_3:
# 899 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlands_Toke_R3_Text_0:
# 906 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelWetlands_Toke_R3_Text_1:
# 912 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: …Fair.$"

ParcelWetlands_Toke_R3_Text_2:
# 913 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Toke_R4_Text_0:
# 920 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelWetlands_Toke_R4_Text_1:
# 926 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: Right. That's the whole of it.$"

ParcelWetlands_Toke_R4_Text_2:
# 927 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Toke_R5_Text_0:
# 934 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelWetlands_Toke_R5_Text_1:
# 941 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWetlands_Jorun_Text_0:
# 947 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Camped here three nights. My\n"
	.string "WOOPER found something in the mud\l"
	.string "yesterday. Let's see what you've found.$"

ParcelWetlands_Jorun_Text_1:
# 948 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Found out, is what.$"

ParcelWetlands_Jorun_Text_2:
# 963 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: It was a crate slat. Green paint.\n"
	.string "Nobody paints crates green round here.$"

ParcelWetlands_Jorun_R2_Text_0:
# 974 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelWetlands_Jorun_R2_Text_1:
# 976 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Another time, then.$"

ParcelWetlands_Jorun_R2_Text_2:
# 980 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: That's the one I wanted to see.$"

ParcelWetlands_Jorun_R2_Text_3:
# 981 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Jorun_R3_Text_0:
# 988 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_Jorun_R3_Text_1:
# 995 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlands_Jorun_R4_Text_0:
# 1002 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelWetlands_Jorun_R4_Text_1:
# 1008 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: …Fair.$"

ParcelWetlands_Jorun_R4_Text_2:
# 1009 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlands_Jorun_R5_Text_0:
# 1016 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelWetlands_Jorun_R5_Text_1:
# 1023 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlands_Stian_Text_0:
# 1029 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: WINGULL used to roost on the\n"
	.string "reed islands. There's fewer islands\l"
	.string "every year. Battle?$"

ParcelWetlands_Stian_Text_1:
# 1030 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Fewer WINGULL, too.$"

ParcelWetlands_Stian_Text_2:
# 1045 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: They moved to the landing roofs.\n"
	.string "HARLAND hates it.$"

ParcelWetlands_Stian_R2_Text_0:
# 1056 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelWetlands_Stian_R2_Text_1:
# 1058 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Suit yourself. I'm here.$"

ParcelWetlands_Stian_R2_Text_2:
# 1062 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Still yours.$"

ParcelWetlands_Stian_R2_Text_3:
# 1063 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlands_Stian_R3_Text_0:
# 1070 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_Stian_R3_Text_1:
# 1076 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Noted. Properly, this time.$"

ParcelWetlands_Stian_R3_Text_2:
# 1077 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlands_Stian_R4_Text_0:
# 1084 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelWetlands_Stian_R4_Text_1:
# 1090 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: …Fair.$"

ParcelWetlands_Stian_R4_Text_2:
# 1091 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Stian_R5_Text_0:
# 1098 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelWetlands_Stian_R5_Text_1:
# 1104 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Right. That's the whole of it.$"

ParcelWetlands_Stian_R5_Text_2:
# 1105 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelWetlands_Asta_Text_0:
# 1111 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Cadet ASTA, Corps patrol.\n"
	.string "Provisional? Then you'll spar. HALE's\l"
	.string "orders.$"

ParcelWetlands_Asta_Text_1:
# 1112 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Good. HALE will want to hear that.$"

ParcelWetlands_Asta_Text_2:
# 1127 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: The office people won't let us\n"
	.string "gauge the channels ourselves.\l"
	.string "'Duplication of effort.'\p"
	.string "We write down their numbers and we\n"
	.string "write down ours.$"

ParcelWetlands_Asta_R2_Text_0:
# 1138 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelWetlands_Asta_R2_Text_1:
# 1140 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Fine. Same spot.$"

ParcelWetlands_Asta_R2_Text_2:
# 1144 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: …Fair.$"

ParcelWetlands_Asta_R2_Text_3:
# 1145 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Asta_R3_Text_0:
# 1152 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_Asta_R3_Text_1:
# 1159 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Asta_R4_Text_0:
# 1166 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelWetlands_Asta_R4_Text_1:
# 1172 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: That's the one I wanted to see.$"

ParcelWetlands_Asta_R4_Text_2:
# 1173 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlands_Asta_R5_Text_0:
# 1180 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelWetlands_Asta_R5_Text_1:
# 1186 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Still yours.$"

ParcelWetlands_Asta_R5_Text_2:
# 1187 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWetlands_Bjarte_Text_0:
# 1193 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Cadet BJARTE. The bridge is my\n"
	.string "post. Nobody crosses without a battle,\l"
	.string "HALE says.$"

ParcelWetlands_Bjarte_Text_1:
# 1194 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: HALE doesn't actually say that.$"

ParcelWetlands_Bjarte_Text_2:
# 1209 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: There's an old road east, over\n"
	.string "the bridge and through the trees. The\l"
	.string "culvert road. HALE said you'd be going\l"
	.string "that way.$"

ParcelWetlands_Bjarte_R2_Text_0:
# 1220 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelWetlands_Bjarte_R2_Text_1:
# 1222 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelWetlands_Bjarte_R2_Text_2:
# 1226 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Noted. Properly, this time.$"

ParcelWetlands_Bjarte_R2_Text_3:
# 1227 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlands_Bjarte_R3_Text_0:
# 1234 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_Bjarte_R3_Text_1:
# 1240 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Still yours.$"

ParcelWetlands_Bjarte_R3_Text_2:
# 1241 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Bjarte_R4_Text_0:
# 1248 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelWetlands_Bjarte_R4_Text_1:
# 1254 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: …Fair.$"

ParcelWetlands_Bjarte_R4_Text_2:
# 1255 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Bjarte_R5_Text_0:
# 1262 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWetlands_Bjarte_R5_Text_1:
# 1268 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: …Again, then. Later.$"

ParcelWetlands_Bjarte_R5_Text_2:
# 1269 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlands_Odd_Text_0:
# 1275 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: These cliffs are the only dry\n"
	.string "ground for a mile. I'm not sharing them.$"

ParcelWetlands_Odd_Text_1:
# 1276 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Fine. Share.$"

ParcelWetlands_Odd_Text_2:
# 1291 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: The rock's wet all year now. Used\n"
	.string "to dry out by midsummer.$"

ParcelWetlands_Odd_R2_Text_0:
# 1302 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Clearances or not, I want that one\n"
	.string "back. Go?$"

ParcelWetlands_Odd_R2_Text_1:
# 1304 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: No hurry. The water keeps.$"

ParcelWetlands_Odd_R2_Text_2:
# 1308 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Right. That's the whole of it.$"

ParcelWetlands_Odd_R2_Text_3:
# 1309 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Odd_R3_Text_0:
# 1316 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_Odd_R3_Text_1:
# 1322 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: …Fair.$"

ParcelWetlands_Odd_R3_Text_2:
# 1323 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Odd_R4_Text_0:
# 1330 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelWetlands_Odd_R4_Text_1:
# 1336 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Still yours.$"

ParcelWetlands_Odd_R4_Text_2:
# 1337 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Odd_R5_Text_0:
# 1344 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Last one. I've put everything I've\n"
	.string "got into this team. Go?$"

ParcelWetlands_Odd_R5_Text_1:
# 1351 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWetlands_Haakon_Text_0:
# 1357 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Shh. You'll scare them. Too late.\n"
	.string "Battle.$"

ParcelWetlands_Haakon_Text_1:
# 1358 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Scared them anyway.$"

ParcelWetlands_Haakon_Text_2:
# 1373 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: The channel above the landing\n"
	.string "still runs clean. Mostly. I fish here, not\l"
	.string "down there.$"

ParcelWetlands_Haakon_R2_Text_0:
# 1384 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: I kept the team up for this.\n"
	.string "Again?$"

ParcelWetlands_Haakon_R2_Text_1:
# 1386 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: No hurry. The water keeps.$"

ParcelWetlands_Haakon_R2_Text_2:
# 1390 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Still yours.$"

ParcelWetlands_Haakon_R2_Text_3:
# 1391 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlands_Haakon_R3_Text_0:
# 1398 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelWetlands_Haakon_R3_Text_1:
# 1404 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: That's the one I wanted to see.$"

ParcelWetlands_Haakon_R3_Text_2:
# 1405 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_Haakon_R4_Text_0:
# 1412 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelWetlands_Haakon_R4_Text_1:
# 1418 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Noted. Properly, this time.$"

ParcelWetlands_Haakon_R4_Text_2:
# 1419 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelWetlands_Haakon_R5_Text_0:
# 1426 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWetlands_Haakon_R5_Text_1:
# 1432 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Right. That's the whole of it.$"

ParcelWetlands_Haakon_R5_Text_2:
# 1433 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlands_Eirik_Text_0:
# 1439 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Three MAGIKARP today. Three!\n"
	.string "Last year it'd be thirty. Take it out on\l"
	.string "me, go on.$"

ParcelWetlands_Eirik_Text_1:
# 1440 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Thirty-one, then.$"

ParcelWetlands_Eirik_Text_2:
# 1455 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: HARLAND says the CORPS counts\n"
	.string "the fish wrong. I say there's nothing\l"
	.string "left to count.$"

ParcelWetlands_Eirik_R2_Text_0:
# 1466 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelWetlands_Eirik_R2_Text_1:
# 1468 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Fine. Same spot.$"

ParcelWetlands_Eirik_R2_Text_2:
# 1472 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: That's the one I wanted to see.$"

ParcelWetlands_Eirik_R2_Text_3:
# 1473 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Eirik_R3_Text_0:
# 1480 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelWetlands_Eirik_R3_Text_1:
# 1486 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: …Again, then. Later.$"

ParcelWetlands_Eirik_R3_Text_2:
# 1487 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlands_Eirik_R4_Text_0:
# 1494 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelWetlands_Eirik_R4_Text_1:
# 1501 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Eirik_R5_Text_0:
# 1508 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelWetlands_Eirik_R5_Text_1:
# 1515 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelWetlands_Siv_Text_0:
# 1521 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: I like it up here. You can see the\n"
	.string "whole marsh. Including you, coming.$"

ParcelWetlands_Siv_Text_1:
# 1522 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Should've looked harder.$"

ParcelWetlands_Siv_Text_2:
# 1537 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: From up here you can see the shine\n"
	.string "on the water some mornings. Rainbow\l"
	.string "colours. Pretty, if you don't think\l"
	.string "about it.$"

ParcelWetlands_Siv_R2_Text_0:
# 1548 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelWetlands_Siv_R2_Text_1:
# 1550 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Fine. Same spot.$"

ParcelWetlands_Siv_R2_Text_2:
# 1554 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Right. That's the whole of it.$"

ParcelWetlands_Siv_R2_Text_3:
# 1555 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_Siv_R3_Text_0:
# 1562 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWetlands_Siv_R3_Text_1:
# 1568 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: That's the one I wanted to see.$"

ParcelWetlands_Siv_R3_Text_2:
# 1569 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlands_Siv_R4_Text_0:
# 1576 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelWetlands_Siv_R4_Text_1:
# 1583 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlands_Siv_R5_Text_0:
# 1590 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWetlands_Siv_R5_Text_1:
# 1596 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: …Fair.$"

ParcelWetlands_Siv_R5_Text_2:
# 1597 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWetlands_SignLanding_Text_0:
# 1609 "data/maps/ParcelWetlands/scripts.pory"
	.string "REEDMERE LANDING\p"
	.string "Boats moored past sundown pay the\n"
	.string "landing fee. Fish counts to the office.\l"
	.string "No nets in the channel.$"

ParcelWetlands_SignOffice_Text_0:
# 1613 "data/maps/ParcelWetlands/scripts.pory"
	.string "MEREHOLT TIDEWATER DIVISION\n"
	.string "Reedmere Gauging Office\p"
	.string "Opening ceremony by COUNCILMAN\n"
	.string "DORSEY. All welcome.$"

ParcelWetlands_SignRoute_Text_0:
# 1617 "data/maps/ParcelWetlands/scripts.pory"
	.string "REEDMERE\p"
	.string "North: the landing and the backwater.\n"
	.string "South: FERNWICK.$"

ParcelWetlands_T_Paul_Text_0:
# 1624 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: The reed beds are the best bug\n"
	.string "country in the district. Were. Battle.$"

ParcelWetlands_T_Paul_Text_1:
# 1625 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Were.$"

ParcelWetlands_T_Paul_Text_2:
# 1640 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Half the reed beds went under the\n"
	.string "FOUNDATION's gauges. Gauges don't eat\l"
	.string "reeds. The boat traffic does.$"

ParcelWetlands_T_Paul_R2_Text_0:
# 1651 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelWetlands_T_Paul_R2_Text_1:
# 1653 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: No hurry. The water keeps.$"

ParcelWetlands_T_Paul_R2_Text_2:
# 1657 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Right. That's the whole of it.$"

ParcelWetlands_T_Paul_R2_Text_3:
# 1658 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_T_Paul_R3_Text_0:
# 1665 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWetlands_T_Paul_R3_Text_1:
# 1671 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: …Fair.$"

ParcelWetlands_T_Paul_R3_Text_2:
# 1672 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlands_T_Paul_R4_Text_0:
# 1679 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelWetlands_T_Paul_R4_Text_1:
# 1685 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: That's the one I wanted to see.$"

ParcelWetlands_T_Paul_R4_Text_2:
# 1686 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlands_T_Paul_R5_Text_0:
# 1693 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWetlands_T_Paul_R5_Text_1:
# 1699 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Still yours.$"

ParcelWetlands_T_Paul_R5_Text_2:
# 1700 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWetlands_T_Sunniva_Text_0:
# 1706 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Cadet SUNNIVA, plateau watch.\n"
	.string "HALE's orders: every provisional spars.\l"
	.string "Yes, even now.$"

ParcelWetlands_T_Sunniva_Text_1:
# 1707 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Logged. HALE will nod.$"

ParcelWetlands_T_Sunniva_Text_2:
# 1722 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: The office below has four\n"
	.string "gauges and we have one notebook. Guess\l"
	.string "which numbers get believed.$"

ParcelWetlands_T_Sunniva_R2_Text_0:
# 1733 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelWetlands_T_Sunniva_R2_Text_1:
# 1735 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Another time, then.$"

ParcelWetlands_T_Sunniva_R2_Text_2:
# 1739 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: That's the one I wanted to\n"
	.string "see.$"

ParcelWetlands_T_Sunniva_R2_Text_3:
# 1740 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelWetlands_T_Sunniva_R3_Text_0:
# 1747 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlands_T_Sunniva_R3_Text_1:
# 1753 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Right. That's the whole of it.$"

ParcelWetlands_T_Sunniva_R3_Text_2:
# 1754 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelWetlands_T_Sunniva_R4_Text_0:
# 1761 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelWetlands_T_Sunniva_R4_Text_1:
# 1767 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: …Fair.$"

ParcelWetlands_T_Sunniva_R4_Text_2:
# 1768 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelWetlands_T_Sunniva_R5_Text_0:
# 1775 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelWetlands_T_Sunniva_R5_Text_1:
# 1781 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Still yours.$"

ParcelWetlands_T_Sunniva_R5_Text_2:
# 1782 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlands_T_Roar_Text_0:
# 1788 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Fishing the upper pool off the\n"
	.string "bridge. Clean up here. Cleaner. Battle.$"

ParcelWetlands_T_Roar_Text_1:
# 1789 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Scared the fish. Again.$"

ParcelWetlands_T_Roar_Text_2:
# 1804 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: There's a channel from the pool\n"
	.string "down past the landing. Whatever's in\l"
	.string "the pool ends up in the backwater.\l"
	.string "Think about that.$"

ParcelWetlands_T_Roar_R2_Text_0:
# 1815 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelWetlands_T_Roar_R2_Text_1:
# 1817 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: No hurry. The water keeps.$"

ParcelWetlands_T_Roar_R2_Text_2:
# 1821 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: …Fair.$"

ParcelWetlands_T_Roar_R2_Text_3:
# 1822 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlands_T_Roar_R3_Text_0:
# 1829 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWetlands_T_Roar_R3_Text_1:
# 1835 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Noted. Properly, this time.$"

ParcelWetlands_T_Roar_R3_Text_2:
# 1836 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlands_T_Roar_R4_Text_0:
# 1843 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelWetlands_T_Roar_R4_Text_1:
# 1849 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: …Again, then. Later.$"

ParcelWetlands_T_Roar_R4_Text_2:
# 1850 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlands_T_Roar_R5_Text_0:
# 1857 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWetlands_T_Roar_R5_Text_1:
# 1863 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Still yours.$"

ParcelWetlands_T_Roar_R5_Text_2:
# 1864 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWetlands_PerrinScene_Text_0:
# 1877 "data/maps/ParcelWetlands/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelWetlands_PerrinScene_Text_1:
# 1881 "data/maps/ParcelWetlands/scripts.pory"
	.string "PERRIN: WREN! The FOUNDATION office\n"
	.string "gave me a tour. Gauges on every\l"
	.string "channel! THAT's what reading water\l"
	.string "looks like, not scribbling in a notebook.\p"
	.string "Battle. I've been training. Properly.$"

ParcelWetlands_PerrinScene_Text_2:
# 1882 "data/maps/ParcelWetlands/scripts.pory"
	.string "PERRIN: Fine. FINE.$"

ParcelWetlands_PerrinScene_Text_3:
# 1883 "data/maps/ParcelWetlands/scripts.pory"
	.string "PERRIN: Your notebook, my gauges. We'll\n"
	.string "see which one the hearing reads.\p"
	.string "They offered me a desk, by the way. Part\n"
	.string "time. I said I'd think about it. I'm\l"
	.string "thinking about it.$"

ParcelWetlands_PerrinTalk_Text_0:
# 1896 "data/maps/ParcelWetlands/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelWetlands_Epilogue_Text_0:
# 1907 "data/maps/ParcelWetlands/scripts.pory"
	.string "REEDMERE. The channel runs under the\n"
	.string "landing the way it did the first week,\l"
	.string "and it doesn't smell of anything.\p"
	.string "The works upstream hold a permit with a\n"
	.string "new page in it. A CORPS monitor sits on\l"
	.string "the bank with a jar and a clock. Nobody\l"
	.string "cut a ribbon for it.$"

ParcelWetlands_Epilogue_Text_1:
# 1908 "data/maps/ParcelWetlands/scripts.pory"
	.string "HARLAND's boat is on the hard with the\n"
	.string "hull open. He is scraping it himself,\l"
	.string "slowly, the way a man does who has\l"
	.string "decided to keep something.\p"
	.string "On the turf the stake has gone pink.\n"
	.string "Someone has tied a second cloth under\l"
	.string "it, not red. A child's ribbon.$"

ParcelWetlands_ReedCount_Text_0:
# 1925 "data/maps/ParcelWetlands/scripts.pory"
	.string "You walk the bed the way he said,\n"
	.string "counting the stands that top your\l"
	.string "head. Most don't.\p"
	.string "Nineteen. You walk it again to be sure.\n"
	.string "Nineteen.$"

ParcelWetlands_ReedCount_Text_1:
# 1929 "data/maps/ParcelWetlands/scripts.pory"
	.string "A reed bed. The stands lean the way the\n"
	.string "wind went last. Fewer top your head\l"
	.string "than you'd expect.$"

ParcelWetlands_SurveyStake_Text_0:
# 1935 "data/maps/ParcelWetlands/scripts.pory"
	.string "A survey stake driven into the\n"
	.string "landing's turf, a strip of red cloth tied\l"
	.string "at the top. It is the Corps' mark: this\l"
	.string "place is being read.$"

ParcelWetlands_SurveyStake_Text_1:
# 1940 "data/maps/ParcelWetlands/scripts.pory"
	.string "Second reading. The channel runs clear\n"
	.string "under the landing and doesn't smell of\l"
	.string "anything. Where the pipe was there is a\l"
	.string "monitor with a jar and a clock. The turf\l"
	.string "is still cracked where it cracked.\p"
	.string "The WOOPER count is up by four. Four is\n"
	.string "not a trend. You write four.$"

ParcelWetlands_PairLanding_Text_0:
# 1951 "data/maps/ParcelWetlands/scripts.pory"
	.string "FISHER: They're pulling the pipe.\n"
	.string "Contractors, from the Coast. The same\l"
	.string "ones who laid it.$"

ParcelWetlands_PairLanding_Text_1:
# 1952 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOATWRIGHT: Paid twice for one pipe.\n"
	.string "There's a trade.$"

ParcelWetlands_PairLanding_Text_2:
# 1953 "data/maps/ParcelWetlands/scripts.pory"
	.string "FISHER: HARLAND's standing over them\n"
	.string "with his arms folded. Hasn't said a word\l"
	.string "all morning.$"

ParcelWetlands_PairLanding_Text_3:
# 1954 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOATWRIGHT: First time in his life\n"
	.string "silence has done his work for him. He\l"
	.string "looks lost.$"

ParcelWetlands_PairLanding_Text_4:
# 1956 "data/maps/ParcelWetlands/scripts.pory"
	.string "FISHER: The manifest the ranger read.\n"
	.string "Washed up on the south bank, they said.\l"
	.string "In the open.$"

ParcelWetlands_PairLanding_Text_5:
# 1957 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOATWRIGHT: Nothing washes up in the\n"
	.string "open on this bank. It's a mud bank. It\l"
	.string "keeps what it gets.$"

ParcelWetlands_PairLanding_Text_6:
# 1958 "data/maps/ParcelWetlands/scripts.pory"
	.string "FISHER: So somebody put it there.$"

ParcelWetlands_PairLanding_Text_7:
# 1959 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOATWRIGHT: Somebody wanted it read\n"
	.string "and couldn't be the one reading it. I\l"
	.string "can think of two. So can you.$"

ParcelWetlands_PairLanding_Text_8:
# 1961 "data/maps/ParcelWetlands/scripts.pory"
	.string "FISHER: HARLAND's shouting at the new\n"
	.string "office again.$"

ParcelWetlands_PairLanding_Text_9:
# 1962 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOATWRIGHT: HARLAND shouts at\n"
	.string "everything that has a door. It's the\l"
	.string "ones without a door that worry me.$"

ParcelWetlands_PairLanding_Text_10:
# 1963 "data/maps/ParcelWetlands/scripts.pory"
	.string "FISHER: Such as?$"

ParcelWetlands_PairLanding_Text_11:
# 1964 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOATWRIGHT: The pipe under the falls.\n"
	.string "Try shouting at that.$"

ParcelWetlands_PairTurf_Text_0:
# 1973 "data/maps/ParcelWetlands/scripts.pory"
	.string "GIRL: The cloth's still there. It's gone\n"
	.string "pink.$"

ParcelWetlands_PairTurf_Text_1:
# 1974 "data/maps/ParcelWetlands/scripts.pory"
	.string "MOTHER: They don't take them down.\n"
	.string "That's the point of them. In thirty\l"
	.string "years someone will read the pink one\l"
	.string "and know the day it went up.$"

ParcelWetlands_PairTurf_Text_2:
# 1975 "data/maps/ParcelWetlands/scripts.pory"
	.string "GIRL: Will the turf be back?$"

ParcelWetlands_PairTurf_Text_3:
# 1976 "data/maps/ParcelWetlands/scripts.pory"
	.string "MOTHER: Some of it. The ranger said\n"
	.string "some of it, and the ranger's never once\l"
	.string "said more than that.$"

ParcelWetlands_PairTurf_Text_4:
# 1978 "data/maps/ParcelWetlands/scripts.pory"
	.string "GIRL: The ranger put a red cloth on a\n"
	.string "stick on our turf. Is that ours now?$"

ParcelWetlands_PairTurf_Text_5:
# 1979 "data/maps/ParcelWetlands/scripts.pory"
	.string "MOTHER: It was always ours. The cloth\n"
	.string "says somebody else has noticed.$"

ParcelWetlands_PairTurf_Text_6:
# 1980 "data/maps/ParcelWetlands/scripts.pory"
	.string "GIRL: Noticed what?$"

ParcelWetlands_PairTurf_Text_7:
# 1981 "data/maps/ParcelWetlands/scripts.pory"
	.string "MOTHER: That it cracks when you jump on\n"
	.string "it. Somebody wrote that down. Somebody\l"
	.string "important, now.$"

ParcelWetlands_PairTurf_Text_8:
# 1983 "data/maps/ParcelWetlands/scripts.pory"
	.string "GIRL: The turf cracks when you jump on\n"
	.string "it.$"

ParcelWetlands_PairTurf_Text_9:
# 1984 "data/maps/ParcelWetlands/scripts.pory"
	.string "MOTHER: Then don't jump on it.$"

ParcelWetlands_PairTurf_Text_10:
# 1985 "data/maps/ParcelWetlands/scripts.pory"
	.string "GIRL: It didn't crack last year. I\n"
	.string "jumped on it all last year.$"

ParcelWetlands_PairTurf_Text_11:
# 1986 "data/maps/ParcelWetlands/scripts.pory"
	.string "MOTHER: …No. It didn't. Come away from\n"
	.string "there.$"

ParcelWetlands_Stringer_Text_0:
# 1998 "data/maps/ParcelWetlands/scripts.pory"
	.string "INGER: They pulled the pipe this\n"
	.string "morning. I was here at six. So was\l"
	.string "HARLAND.\p"
	.string "He didn't say a word for three hours and\n"
	.string "I quoted the silence. The editor let it\l"
	.string "stand. First time he's let anything of\l"
	.string "mine stand that wasn't a number.$"

ParcelWetlands_Stringer_Text_1:
# 2000 "data/maps/ParcelWetlands/scripts.pory"
	.string "INGER: You read the pipe. The manifest.\n"
	.string "The residue. HARLAND's gone quiet and\l"
	.string "the new office has gone loud, which is\l"
	.string "how you know who read what.\p"
	.string "One sentence. On the record, under your\n"
	.string "name. Yes?$"

ParcelWetlands_Stringer_Text_2:
# 2001 "data/maps/ParcelWetlands/scripts.pory"
	.string "Give INGER a sentence?$"

ParcelWetlands_Stringer_Text_3:
# 2003 "data/maps/ParcelWetlands/scripts.pory"
	.string "{PLAYER}: The water is a living\n"
	.string "corridor. Someone put a pipe in it on\l"
	.string "schedule.$"

ParcelWetlands_Stringer_Text_4:
# 2004 "data/maps/ParcelWetlands/scripts.pory"
	.string "INGER: …That's two sentences. I'll run\n"
	.string "both. I'll run them exactly.\p"
	.string "Nobody gives me exact. Thank you.$"

ParcelWetlands_Stringer_Text_5:
# 2007 "data/maps/ParcelWetlands/scripts.pory"
	.string "{PLAYER}: Not on the record. Read the\n"
	.string "survey.$"

ParcelWetlands_Stringer_Text_6:
# 2008 "data/maps/ParcelWetlands/scripts.pory"
	.string "INGER: Everyone says read the survey.\n"
	.string "Nobody reads the survey. That's what\l"
	.string "I'm for.\p"
	.string "Fine. 'Declined to comment.' It reads\n"
	.string "better than most comments. I'll give it\l"
	.string "its own line.$"

ParcelWetlands_Stringer_Text_7:
# 2011 "data/maps/ParcelWetlands/scripts.pory"
	.string "INGER: Ribbon-cutting. Five gauges,\n"
	.string "one speech, refreshments courtesy of\l"
	.string "Mereholt Coastal. I ate the\l"
	.string "refreshments; the paper doesn't pay me\l"
	.string "enough not to.\p"
	.string "You're the ranger HARLAND's shouting\n"
	.string "about. When you've read what's under\l"
	.string "the falls, I'd like a sentence. One. I'll\l"
	.string "be the one eating.$"

ParcelWetlands_TurfCutter_Text_0:
# 2023 "data/maps/ParcelWetlands/scripts.pory"
	.string "TURF CUTTER: I'm cutting less this year.\n"
	.string "First time it's been by choice.$"

ParcelWetlands_TurfCutter_Text_1:
# 2026 "data/maps/ParcelWetlands/scripts.pory"
	.string "TURF CUTTER: By the north edge. That's\n"
	.string "new ground to crack. The spade stays\l"
	.string "out of the north edge, then.\p"
	.string "Here. For the walking.$"

ParcelWetlands_TurfCutter_Text_2:
# 2030 "data/maps/ParcelWetlands/scripts.pory"
	.string "TURF CUTTER: The worst crack. Wide as a\n"
	.string "hand, dry to the bottom. You'll know it.$"

ParcelWetlands_TurfCutter_Text_3:
# 2033 "data/maps/ParcelWetlands/scripts.pory"
	.string "TURF CUTTER: I've cut turf on this\n"
	.string "landing thirty years. Never where it\l"
	.string "cracks; cracked turf is dead turf, you\l"
	.string "burn it and it's gone for good.\p"
	.string "The cracks have moved. Find me the\n"
	.string "worst of them this year and I'll know\l"
	.string "where not to put the spade.$"

ParcelWetlands_TurfCrack_Text_0:
# 2042 "data/maps/ParcelWetlands/scripts.pory"
	.string "A crack in the turf a hand wide, the\n"
	.string "peat dry and crumbling to the bottom. A\l"
	.string "beetle is using it as a road.\p"
	.string "The worst of them this year. The year\n"
	.string "before, it was a line you could cover\l"
	.string "with a boot.$"

ParcelWetlands_TurfCrack_Text_1:
# 2045 "data/maps/ParcelWetlands/scripts.pory"
	.string "A crack in the turf a hand wide. The\n"
	.string "beetle has gone on.$"

ParcelWetlands_FindNest_Text_0:
# 2054 "data/maps/ParcelWetlands/scripts.pory"
	.string "The north reed bed, half of it pale and\n"
	.string "dead, half of it standing. In the\l"
	.string "standing half, a heron's nest, a\l"
	.string "platform of old stems, and on it a heron,\l"
	.string "very still, in the way that means an egg.\p"
	.string "It looks at you for exactly as long as\n"
	.string "it takes you to look at it, and then at\l"
	.string "the water.$"

ParcelWetlands_FindNest_Text_1:
# 2057 "data/maps/ParcelWetlands/scripts.pory"
	.string "The north reed bed. The nest is there,\n"
	.string "and the heron is standing in the\l"
	.string "shallows below it, reading the water.$"

ParcelWetlands_PairSouth_Text_0:
# 2065 "data/maps/ParcelWetlands/scripts.pory"
	.string "FISHER: The monitor takes a jar every\n"
	.string "week now. The jars go to the lab at\l"
	.string "Saltwick.$"

ParcelWetlands_PairSouth_Text_1:
# 2066 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOY: Can I drink from the channel?$"

ParcelWetlands_PairSouth_Text_2:
# 2067 "data/maps/ParcelWetlands/scripts.pory"
	.string "FISHER: When the jar says so. Not when\n"
	.string "the colour does. You asked who does the\l"
	.string "test. That's who. A ranger, a jar and a\l"
	.string "clock.$"

ParcelWetlands_PairSouth_Text_3:
# 2068 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOY: That's not a who.$"

ParcelWetlands_PairSouth_Text_4:
# 2069 "data/maps/ParcelWetlands/scripts.pory"
	.string "FISHER: It's the best who we've had.$"

ParcelWetlands_PairSouth_Text_5:
# 2071 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOY: The ranger read the pipe under the\n"
	.string "falls. There was a sheen. Like petrol on\l"
	.string "a puddle.$"

ParcelWetlands_PairSouth_Text_6:
# 2072 "data/maps/ParcelWetlands/scripts.pory"
	.string "FISHER: There's been a sheen for two\n"
	.string "years.$"

ParcelWetlands_PairSouth_Text_7:
# 2073 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOY: Then why didn't anyone say?$"

ParcelWetlands_PairSouth_Text_8:
# 2074 "data/maps/ParcelWetlands/scripts.pory"
	.string "FISHER: Everyone said. Nobody wrote.\n"
	.string "There's a difference, and the\l"
	.string "difference is why you're not allowed to\l"
	.string "drink from the channel.$"

ParcelWetlands_PairSouth_Text_9:
# 2076 "data/maps/ParcelWetlands/scripts.pory"
	.string "FISHER: Don't drink from the channel\n"
	.string "below the falls.$"

ParcelWetlands_PairSouth_Text_10:
# 2077 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOY: Why not? It looks clean.$"

ParcelWetlands_PairSouth_Text_11:
# 2078 "data/maps/ParcelWetlands/scripts.pory"
	.string "FISHER: Clean is a colour. Safe is a\n"
	.string "test. We've got the colour.$"

ParcelWetlands_PairSouth_Text_12:
# 2079 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOY: Who does the test?$"

ParcelWetlands_PairSouth_Text_13:
# 2080 "data/maps/ParcelWetlands/scripts.pory"
	.string "FISHER: Nobody, yet. Somebody with a\n"
	.string "notebook, I'm told, is on the way.$"

ParcelWetlands_Board1_Text_0:
# 2089 "data/maps/ParcelWetlands/scripts.pory"
	.string "A SURVEY BOARD on the turf. REEDMERE.\n"
	.string "Freshwater marsh, flood-pulse: the\l"
	.string "water rises in spring, spreads, drops,\l"
	.string "and the marsh lives on what it leaves.\p"
	.string "The WOOPER count is taken on the turf\n"
	.string "when the water drops. It tracks the\l"
	.string "water table closer than the Board's\l"
	.string "gauge does. When the count falls, the\l"
	.string "water fell first.$"

ParcelWetlands_Board2_Text_0:
# 2094 "data/maps/ParcelWetlands/scripts.pory"
	.string "A SURVEY BOARD by the reed cut. Three\n"
	.string "frogs are three gauges. POLIWAG for\l"
	.string "the breeding pools, POLIWHIRL for the\l"
	.string "summer the pools lasted, QUAGSIRE for\l"
	.string "silt.\p"
	.string "More QUAGSIRE is not more marsh. It is\n"
	.string "more mud. The Survey writes all three\l"
	.string "and underlines the third when it is the\l"
	.string "largest. It has been underlined for six\l"
	.string "years.$"
