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
	msgbox ParcelWetlands_Crowd1_Text_0, MSGBOX_DEFAULT
# 238 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Crowd2::
# 242 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 243 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 244 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd2_Text_0, MSGBOX_DEFAULT
# 245 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Crowd3::
# 249 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 250 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 251 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Crowd3_Text_0, MSGBOX_DEFAULT
# 252 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvResidue::
# 258 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 259 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 260 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvResidue_2
# 264 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 6
# 265 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 266 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvResidue_5
# 271 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvResidue_Text_1, MSGBOX_SIGN
# 272 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 273 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 274 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvResidue_2:
# 261 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvResidue_5:
# 267 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvResidue_Text_0, MSGBOX_SIGN
# 268 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvPipe::
# 278 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 279 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 280 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvPipe_2
# 284 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 7
# 285 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 286 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvPipe_5
# 291 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_1, MSGBOX_SIGN
# 292 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 293 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 294 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvPipe_2:
# 281 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvPipe_5:
# 287 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_0, MSGBOX_SIGN
# 288 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvManifest::
# 298 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 299 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 300 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvManifest_2
# 304 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 8
# 305 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 306 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvManifest_5
# 311 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvManifest_Text_1, MSGBOX_SIGN
# 312 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 313 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 314 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvManifest_2:
# 301 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvManifest_5:
# 307 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvManifest_Text_0, MSGBOX_SIGN
# 308 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_RequirePoison::
# 319 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 320 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 321 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 322 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_RequirePoison_2
ParcelWetlands_RequirePoison_1:
	return

ParcelWetlands_RequirePoison_2:
# 323 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_RequirePoison_Text_0, MSGBOX_SIGN
	goto ParcelWetlands_RequirePoison_1


ParcelWetlands_CheckEvidenceDone::
# 329 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 448
# 330 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 331 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ParcelWetlands_CheckEvidenceDone_2
ParcelWetlands_CheckEvidenceDone_1:
	return

ParcelWetlands_CheckEvidenceDone_2:
# 332 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_CheckEvidenceDone_Text_0, MSGBOX_DEFAULT
# 333 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_3
# 334 "data/maps/ParcelWetlands/scripts.pory"
	addobject 5
# 335 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_CheckEvidenceDone_Text_1, MSGBOX_DEFAULT
	goto ParcelWetlands_CheckEvidenceDone_1


ParcelWetlands_Enforcer::
# 342 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ENFORCER, ParcelWetlands_Enforcer_Text_0, ParcelWetlands_Enforcer_Text_1
# 345 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 346 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 347 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_2, MSGBOX_DEFAULT
# 348 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_3, MSGBOX_DEFAULT
# 349 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 350 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 5
# 351 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
# 352 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_4, MSGBOX_DEFAULT
# 353 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 2
# 354 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_2
# 355 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 11
# 356 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 12
# 357 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 13
# 358 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 6
# 359 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 7
# 360 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_4
# 361 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Gunnar::
# 367 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 368 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 369 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR_DONE, ParcelWetlands_Gunnar_2
# 374 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR_SEEN, ParcelWetlands_Gunnar_5
# 388 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR, ParcelWetlands_Gunnar_8
# 393 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_5, MSGBOX_DEFAULT
# 394 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_6, MSGBOX_DEFAULT
# 395 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_GUNNAR
# 396 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_2:
# 370 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_0, MSGBOX_DEFAULT
# 371 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_5:
# 375 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_1, MSGBOX_DEFAULT
# 376 "data/maps/ParcelWetlands/scripts.pory"
	checkitem ITEM_GOOD_ROD
# 377 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_Gunnar_11
# 381 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_3, MSGBOX_DEFAULT
# 382 "data/maps/ParcelWetlands/scripts.pory"
	giveitem ITEM_GOOD_ROD
ParcelWetlands_Gunnar_10:
# 384 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_GUNNAR_DONE
# 385 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_8:
# 389 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_4, MSGBOX_DEFAULT
# 390 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Gunnar_11:
# 378 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Gunnar_Text_2, MSGBOX_DEFAULT
# 379 "data/maps/ParcelWetlands/scripts.pory"
	giveitem ITEM_NET_BALL, 3
	goto ParcelWetlands_Gunnar_10


ParcelWetlands_Surskit::
# 401 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 402 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 403 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GUNNAR, ParcelWetlands_Surskit_3
ParcelWetlands_Surskit_1:
# 409 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Surskit_Text_1, MSGBOX_DEFAULT
# 410 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Surskit_2:
# 404 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Surskit_Text_0, MSGBOX_DEFAULT
# 405 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_Q_GUNNAR_SEEN
# 406 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Surskit_3:
# 403 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_GUNNAR_DONE, ParcelWetlands_Surskit_2
	goto ParcelWetlands_Surskit_1


ParcelWetlands_Selt::
# 416 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_SELT, ParcelWetlands_Selt_Text_0, ParcelWetlands_Selt_Text_1
# 419 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Selt_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Mora::
# 423 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_POACHER_B, ParcelWetlands_Mora_Text_0, ParcelWetlands_Mora_Text_1
# 426 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Mora_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Bran::
# 430 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FORAGER, ParcelWetlands_Bran_Text_0, ParcelWetlands_Bran_Text_1
# 433 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bran_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Kalle::
# 439 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_KALLE, ParcelWetlands_Kalle_Text_0, ParcelWetlands_Kalle_Text_1
# 442 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Kalle_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Liv::
# 446 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_LIV, ParcelWetlands_Liv_Text_0, ParcelWetlands_Liv_Text_1
# 449 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Liv_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Toke::
# 453 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_TOKE, ParcelWetlands_Toke_Text_0, ParcelWetlands_Toke_Text_1
# 456 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Toke_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Jorun::
# 460 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_JORUN, ParcelWetlands_Jorun_Text_0, ParcelWetlands_Jorun_Text_1
# 463 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Jorun_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Stian::
# 467 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_STIAN, ParcelWetlands_Stian_Text_0, ParcelWetlands_Stian_Text_1
# 470 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Stian_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Asta::
# 474 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_ASTA, ParcelWetlands_Asta_Text_0, ParcelWetlands_Asta_Text_1
# 477 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Asta_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Bjarte::
# 481 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_BJARTE, ParcelWetlands_Bjarte_Text_0, ParcelWetlands_Bjarte_Text_1
# 484 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Bjarte_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Odd::
# 488 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_ODD, ParcelWetlands_Odd_Text_0, ParcelWetlands_Odd_Text_1
# 491 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Odd_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Haakon::
# 495 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_HAAKON, ParcelWetlands_Haakon_Text_0, ParcelWetlands_Haakon_Text_1
# 498 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Haakon_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Eirik::
# 502 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_EIRIK, ParcelWetlands_Eirik_Text_0, ParcelWetlands_Eirik_Text_1
# 505 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Eirik_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Siv::
# 509 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_SIV, ParcelWetlands_Siv_Text_0, ParcelWetlands_Siv_Text_1
# 512 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Siv_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_ItemAntidote::
# 517 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_ANTIDOTE
	end


ParcelWetlands_ItemGreatBall::
# 518 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelWetlands_ItemSuperPotion::
# 519 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelWetlands_ItemNetBall::
# 520 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_NET_BALL
	end


ParcelWetlands_SignLanding::
# 523 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_SignLanding_Text_0, MSGBOX_SIGN
	end


ParcelWetlands_SignOffice::
# 527 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_SignOffice_Text_0, MSGBOX_SIGN
	end


ParcelWetlands_SignRoute::
# 531 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_SignRoute_Text_0, MSGBOX_SIGN
	end


ParcelWetlands_T_Paul::
# 537 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_PAUL, ParcelWetlands_T_Paul_Text_0, ParcelWetlands_T_Paul_Text_1
# 540 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Paul_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_T_Sunniva::
# 544 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_SUNNIVA, ParcelWetlands_T_Sunniva_Text_0, ParcelWetlands_T_Sunniva_Text_1
# 547 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Sunniva_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_T_Roar::
# 551 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WET_ROAR, ParcelWetlands_T_Roar_Text_0, ParcelWetlands_T_Roar_Text_1
# 554 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_T_Roar_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_PerrinScene::
# 560 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_2, ParcelWetlands_PerrinScene_2
# 564 "data/maps/ParcelWetlands/scripts.pory"
	lockall
# 565 "data/maps/ParcelWetlands/scripts.pory"
	playse SE_PIN
# 566 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PerrinScene_Text_0, MSGBOX_DEFAULT
# 567 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 568 "data/maps/ParcelWetlands/scripts.pory"
	applymovement 32, Movement_ParcelWetlands_PerrinIn
# 569 "data/maps/ParcelWetlands/scripts.pory"
	waitmovement 0
# 570 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PerrinScene_Text_1, MSGBOX_DEFAULT
# 571 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_2, ParcelWetlands_PerrinScene_Text_2
# 572 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PerrinScene_Text_3, MSGBOX_DEFAULT
# 573 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 574 "data/maps/ParcelWetlands/scripts.pory"
	applymovement 32, Movement_ParcelWetlands_PerrinOut
# 575 "data/maps/ParcelWetlands/scripts.pory"
	waitmovement 0
# 576 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 32
# 577 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_SKALD_PERRIN_2
# 578 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_5, 1
# 579 "data/maps/ParcelWetlands/scripts.pory"
	releaseall
	end

ParcelWetlands_PerrinScene_2:
# 561 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelWetlands_PerrinTalk::
# 583 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 584 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 585 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 586 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


# 589 "data/maps/ParcelWetlands/scripts.pory"
Movement_ParcelWetlands_PerrinIn:
# 589 "data/maps/ParcelWetlands/scripts.pory"
	walk_left
# 589 "data/maps/ParcelWetlands/scripts.pory"
	walk_left
# 589 "data/maps/ParcelWetlands/scripts.pory"
	walk_left
	step_end

# 590 "data/maps/ParcelWetlands/scripts.pory"
Movement_ParcelWetlands_PerrinOut:
# 590 "data/maps/ParcelWetlands/scripts.pory"
	walk_right
# 590 "data/maps/ParcelWetlands/scripts.pory"
	walk_right
# 590 "data/maps/ParcelWetlands/scripts.pory"
	walk_right
	step_end

ParcelWetlands_Epilogue::
# 594 "data/maps/ParcelWetlands/scripts.pory"
	lockall
# 595 "data/maps/ParcelWetlands/scripts.pory"
	delay 20
# 596 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Epilogue_Text_0, MSGBOX_DEFAULT
# 597 "data/maps/ParcelWetlands/scripts.pory"
	closemessage
# 598 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 2
# 599 "data/maps/ParcelWetlands/scripts.pory"
	warp MAP_PARCEL_FLOODBASIN, 20, 90
# 600 "data/maps/ParcelWetlands/scripts.pory"
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
# 237 "data/maps/ParcelWetlands/scripts.pory"
	.string "WOMAN: My husband drank from that\n"
	.string "channel this morning. He's fine. He's\l"
	.string "fine, isn't he?$"

ParcelWetlands_Crowd2_Text_0:
# 244 "data/maps/ParcelWetlands/scripts.pory"
	.string "MAN: Somebody did this. Water doesn't\n"
	.string "go bad on its own in a night.\p"
	.string "And I don't see anybody from the CORPS\n"
	.string "writing THAT down.$"

ParcelWetlands_Crowd3_Text_0:
# 251 "data/maps/ParcelWetlands/scripts.pory"
	.string "BOY: Dad says it's your fault. Is it your\n"
	.string "fault?$"

ParcelWetlands_EvResidue_Text_0:
# 267 "data/maps/ParcelWetlands/scripts.pory"
	.string "The residue sample. Sealed.$"

ParcelWetlands_EvResidue_Text_1:
# 271 "data/maps/ParcelWetlands/scripts.pory"
	.string "Upstream of the landing the residue\n"
	.string "collects in the reed roots. Greasy.\l"
	.string "Faintly sweet.\p"
	.string "It did not start here. A sample, sealed\n"
	.string "and labelled.$"

ParcelWetlands_EvPipe_Text_0:
# 287 "data/maps/ParcelWetlands/scripts.pory"
	.string "The pipe segment. Photographed and\n"
	.string "noted.$"

ParcelWetlands_EvPipe_Text_1:
# 291 "data/maps/ParcelWetlands/scripts.pory"
	.string "A broken discharge pipe, half-buried\n"
	.string "under the falls. The break is old. The\l"
	.string "staining inside it is not.\p"
	.string "Photographed where it lies.$"

ParcelWetlands_EvManifest_Text_0:
# 307 "data/maps/ParcelWetlands/scripts.pory"
	.string "The manifest. Drying between notebook\n"
	.string "pages.$"

ParcelWetlands_EvManifest_Text_1:
# 311 "data/maps/ParcelWetlands/scripts.pory"
	.string "A transport manifest, soaked but\n"
	.string "readable. Tonnage. Dates. A carrier code\l"
	.string "that isn't in any register.\p"
	.string "The consignee field has been inked out\n"
	.string "by hand.$"

ParcelWetlands_RequirePoison_Text_0:
# 323 "data/maps/ParcelWetlands/scripts.pory"
	.string "The water is quiet. HARLAND's boats sit\n"
	.string "low on their lines.$"

ParcelWetlands_CheckEvidenceDone_Text_0:
# 332 "data/maps/ParcelWetlands/scripts.pory"
	.string "Residue. Pipe. Manifest.\p"
	.string "Enough to point. Not enough to convict.\n"
	.string "All of it written down.$"

ParcelWetlands_CheckEvidenceDone_Text_1:
# 335 "data/maps/ParcelWetlands/scripts.pory"
	.string "Someone is standing at the landing.\n"
	.string "Watching.$"

ParcelWetlands_Enforcer_Text_0:
# 343 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: You think you're saving\n"
	.string "something?\p"
	.string "The land's already dead.\n"
	.string "We're just the first to admit it.$"

ParcelWetlands_Enforcer_Text_1:
# 344 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: Hm.$"

ParcelWetlands_Enforcer_Text_2:
# 347 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: Your mentor tried.\n"
	.string "Look how that went.$"

ParcelWetlands_Enforcer_Text_3:
# 348 "data/maps/ParcelWetlands/scripts.pory"
	.string "VOSS: Keep the manifest. Frame it.\n"
	.string "Nobody who matters can read.$"

ParcelWetlands_Enforcer_Text_4:
# 352 "data/maps/ParcelWetlands/scripts.pory"
	.string "MAN: Where'd the councilman go? He was\n"
	.string "right there by the office.\p"
	.string "His car's gone.$"

ParcelWetlands_Gunnar_Text_0:
# 370 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Twice as far out. You remember\n"
	.string "that for me, when you write your\l"
	.string "reports.$"

ParcelWetlands_Gunnar_Text_1:
# 375 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Still there? Skating about?\p"
	.string "Good. Good. Then it's not all gone bad.\n"
	.string "Not yet.$"

ParcelWetlands_Gunnar_Text_2:
# 378 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Take these. My son's. He's not\n"
	.string "coming back for them.$"

ParcelWetlands_Gunnar_Text_3:
# 381 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: Take this. My son's rod. He's\n"
	.string "not coming back for it.$"

ParcelWetlands_Gunnar_Text_4:
# 389 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: The puddles past the bridge,\n"
	.string "west end. Little blue thing on long legs.\l"
	.string "Go and look.$"

ParcelWetlands_Gunnar_Text_5:
# 393 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: The reed beds used to go twice\n"
	.string "as far out. Ask anyone old enough to\l"
	.string "remember.\p"
	.string "Nobody asks.$"

ParcelWetlands_Gunnar_Text_6:
# 394 "data/maps/ParcelWetlands/scripts.pory"
	.string "GUNNAR: You're a RANGER, aren't you?\n"
	.string "Then count something for me.\p"
	.string "There used to be SURSKIT on the\n"
	.string "puddles up past the bridge, west end. If\l"
	.string "there's still one, the water's not all\l"
	.string "gone bad.\p"
	.string "Go and look. Then come and tell me.$"

ParcelWetlands_Surskit_Text_0:
# 404 "data/maps/ParcelWetlands/scripts.pory"
	.string "The SURSKIT skates a circle on the\n"
	.string "puddle, then another.\p"
	.string "One. Still here. Written down.$"

ParcelWetlands_Surskit_Text_1:
# 409 "data/maps/ParcelWetlands/scripts.pory"
	.string "A SURSKIT skates a circle on the\n"
	.string "puddle, then another.$"

ParcelWetlands_Selt_Text_0:
# 417 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Nothing illegal about standing by\n"
	.string "the water, kid.$"

ParcelWetlands_Selt_Text_1:
# 418 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: Fine, fine. Moving along.$"

ParcelWetlands_Selt_Text_2:
# 419 "data/maps/ParcelWetlands/scripts.pory"
	.string "SELT: A man's got to eat. You want\n"
	.string "villains, look further up the money.$"

ParcelWetlands_Mora_Text_0:
# 424 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: This patch is spoken for. Walk on.$"

ParcelWetlands_Mora_Text_1:
# 425 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Ugh. Whatever.$"

ParcelWetlands_Mora_Text_2:
# 426 "data/maps/ParcelWetlands/scripts.pory"
	.string "MORA: Spoken for by WHO? Mind your own\n"
	.string "business.$"

ParcelWetlands_Bran_Text_0:
# 431 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Mind your boots. Mudcaps grow\n"
	.string "where you least want them.\p"
	.string "And trainers, apparently. C'mon then.$"

ParcelWetlands_Bran_Text_1:
# 432 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: Heh. Soft hands, hard hits.$"

ParcelWetlands_Bran_Text_2:
# 433 "data/maps/ParcelWetlands/scripts.pory"
	.string "BRAN: There's a path up to the office\n"
	.string "from here. Mind the ledge, it's higher\l"
	.string "than it looks.$"

ParcelWetlands_Kalle_Text_0:
# 440 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: The reeds are full of cocoons.\n"
	.string "Hundreds! Don't step on them!$"

ParcelWetlands_Kalle_Text_1:
# 441 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: Aw. They'll hatch anyway.$"

ParcelWetlands_Kalle_Text_2:
# 442 "data/maps/ParcelWetlands/scripts.pory"
	.string "KALLE: WURMPLE pick the reed stems.\n"
	.string "When the reeds go, where do they pick?$"

ParcelWetlands_Liv_Text_0:
# 447 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: Nobody comes out this far. So\n"
	.string "you're either lost or you're a RANGER.$"

ParcelWetlands_Liv_Text_1:
# 448 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: RANGER, then.$"

ParcelWetlands_Liv_Text_2:
# 449 "data/maps/ParcelWetlands/scripts.pory"
	.string "LIV: I come out here for the quiet. It's\n"
	.string "less quiet than it was. Engines on the\l"
	.string "water, at night.$"

ParcelWetlands_Toke_Text_0:
# 454 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: You didn't see me. Nobody sees me.$"

ParcelWetlands_Toke_Text_1:
# 455 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: You saw me.$"

ParcelWetlands_Toke_Text_2:
# 456 "data/maps/ParcelWetlands/scripts.pory"
	.string "TOKE: The grass is tallest by the water.\n"
	.string "That's where I hide. That's where the\l"
	.string "SURSKIT hide, too.$"

ParcelWetlands_Jorun_Text_0:
# 461 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Camped here three nights. My\n"
	.string "WOOPER found something in the mud\l"
	.string "yesterday. Let's see what you've found.$"

ParcelWetlands_Jorun_Text_1:
# 462 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: Found out, is what.$"

ParcelWetlands_Jorun_Text_2:
# 463 "data/maps/ParcelWetlands/scripts.pory"
	.string "JORUN: It was a crate slat. Green paint.\n"
	.string "Nobody paints crates green round here.$"

ParcelWetlands_Stian_Text_0:
# 468 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: WINGULL used to roost on the\n"
	.string "reed islands. There's fewer islands\l"
	.string "every year. Battle?$"

ParcelWetlands_Stian_Text_1:
# 469 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: Fewer WINGULL, too.$"

ParcelWetlands_Stian_Text_2:
# 470 "data/maps/ParcelWetlands/scripts.pory"
	.string "STIAN: They moved to the landing roofs.\n"
	.string "HARLAND hates it.$"

ParcelWetlands_Asta_Text_0:
# 475 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Cadet ASTA, Corps patrol.\n"
	.string "Provisional? Then you'll spar. HALE's\l"
	.string "orders.$"

ParcelWetlands_Asta_Text_1:
# 476 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: Good. HALE will want to hear that.$"

ParcelWetlands_Asta_Text_2:
# 477 "data/maps/ParcelWetlands/scripts.pory"
	.string "ASTA: The office people won't let us\n"
	.string "gauge the channels ourselves.\l"
	.string "'Duplication of effort.'\p"
	.string "We write down their numbers and we\n"
	.string "write down ours.$"

ParcelWetlands_Bjarte_Text_0:
# 482 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: Cadet BJARTE. The bridge is my\n"
	.string "post. Nobody crosses without a battle,\l"
	.string "HALE says.$"

ParcelWetlands_Bjarte_Text_1:
# 483 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: HALE doesn't actually say that.$"

ParcelWetlands_Bjarte_Text_2:
# 484 "data/maps/ParcelWetlands/scripts.pory"
	.string "BJARTE: There's an old road east, over\n"
	.string "the bridge and through the trees. The\l"
	.string "culvert road. HALE said you'd be going\l"
	.string "that way.$"

ParcelWetlands_Odd_Text_0:
# 489 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: These cliffs are the only dry\n"
	.string "ground for a mile. I'm not sharing them.$"

ParcelWetlands_Odd_Text_1:
# 490 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: Fine. Share.$"

ParcelWetlands_Odd_Text_2:
# 491 "data/maps/ParcelWetlands/scripts.pory"
	.string "ODD: The rock's wet all year now. Used\n"
	.string "to dry out by midsummer.$"

ParcelWetlands_Haakon_Text_0:
# 496 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Shh. You'll scare them. Too late.\n"
	.string "Battle.$"

ParcelWetlands_Haakon_Text_1:
# 497 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: Scared them anyway.$"

ParcelWetlands_Haakon_Text_2:
# 498 "data/maps/ParcelWetlands/scripts.pory"
	.string "HAAKON: The channel above the landing\n"
	.string "still runs clean. Mostly. I fish here, not\l"
	.string "down there.$"

ParcelWetlands_Eirik_Text_0:
# 503 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Three MAGIKARP today. Three!\n"
	.string "Last year it'd be thirty. Take it out on\l"
	.string "me, go on.$"

ParcelWetlands_Eirik_Text_1:
# 504 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: Thirty-one, then.$"

ParcelWetlands_Eirik_Text_2:
# 505 "data/maps/ParcelWetlands/scripts.pory"
	.string "EIRIK: HARLAND says the CORPS counts\n"
	.string "the fish wrong. I say there's nothing\l"
	.string "left to count.$"

ParcelWetlands_Siv_Text_0:
# 510 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: I like it up here. You can see the\n"
	.string "whole marsh. Including you, coming.$"

ParcelWetlands_Siv_Text_1:
# 511 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: Should've looked harder.$"

ParcelWetlands_Siv_Text_2:
# 512 "data/maps/ParcelWetlands/scripts.pory"
	.string "SIV: From up here you can see the shine\n"
	.string "on the water some mornings. Rainbow\l"
	.string "colours. Pretty, if you don't think\l"
	.string "about it.$"

ParcelWetlands_SignLanding_Text_0:
# 523 "data/maps/ParcelWetlands/scripts.pory"
	.string "REEDMERE LANDING\p"
	.string "Boats moored past sundown pay the\n"
	.string "landing fee. Fish counts to the office.\l"
	.string "No nets in the channel.$"

ParcelWetlands_SignOffice_Text_0:
# 527 "data/maps/ParcelWetlands/scripts.pory"
	.string "MEREHOLT TIDEWATER DIVISION\n"
	.string "Reedmere Gauging Office\p"
	.string "Opening ceremony by COUNCILMAN\n"
	.string "DORSEY. All welcome.$"

ParcelWetlands_SignRoute_Text_0:
# 531 "data/maps/ParcelWetlands/scripts.pory"
	.string "REEDMERE\p"
	.string "North: the landing and the backwater.\n"
	.string "South: FERNWICK.$"

ParcelWetlands_T_Paul_Text_0:
# 538 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: The reed beds are the best bug\n"
	.string "country in the district. Were. Battle.$"

ParcelWetlands_T_Paul_Text_1:
# 539 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Were.$"

ParcelWetlands_T_Paul_Text_2:
# 540 "data/maps/ParcelWetlands/scripts.pory"
	.string "PAUL: Half the reed beds went under the\n"
	.string "FOUNDATION's gauges. Gauges don't eat\l"
	.string "reeds. The boat traffic does.$"

ParcelWetlands_T_Sunniva_Text_0:
# 545 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Cadet SUNNIVA, plateau watch.\n"
	.string "HALE's orders: every provisional spars.\l"
	.string "Yes, even now.$"

ParcelWetlands_T_Sunniva_Text_1:
# 546 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: Logged. HALE will nod.$"

ParcelWetlands_T_Sunniva_Text_2:
# 547 "data/maps/ParcelWetlands/scripts.pory"
	.string "SUNNIVA: The office below has four\n"
	.string "gauges and we have one notebook. Guess\l"
	.string "which numbers get believed.$"

ParcelWetlands_T_Roar_Text_0:
# 552 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Fishing the upper pool off the\n"
	.string "bridge. Clean up here. Cleaner. Battle.$"

ParcelWetlands_T_Roar_Text_1:
# 553 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: Scared the fish. Again.$"

ParcelWetlands_T_Roar_Text_2:
# 554 "data/maps/ParcelWetlands/scripts.pory"
	.string "ROAR: There's a channel from the pool\n"
	.string "down past the landing. Whatever's in\l"
	.string "the pool ends up in the backwater.\l"
	.string "Think about that.$"

ParcelWetlands_PerrinScene_Text_0:
# 566 "data/maps/ParcelWetlands/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelWetlands_PerrinScene_Text_1:
# 570 "data/maps/ParcelWetlands/scripts.pory"
	.string "PERRIN: WREN! The FOUNDATION office\n"
	.string "gave me a tour. Gauges on every\l"
	.string "channel! THAT's what reading water\l"
	.string "looks like, not scribbling in a notebook.\p"
	.string "Battle. I've been training. Properly.$"

ParcelWetlands_PerrinScene_Text_2:
# 571 "data/maps/ParcelWetlands/scripts.pory"
	.string "PERRIN: Fine. FINE.$"

ParcelWetlands_PerrinScene_Text_3:
# 572 "data/maps/ParcelWetlands/scripts.pory"
	.string "PERRIN: Your notebook, my gauges. We'll\n"
	.string "see which one the hearing reads.\p"
	.string "They offered me a desk, by the way. Part\n"
	.string "time. I said I'd think about it. I'm\l"
	.string "thinking about it.$"

ParcelWetlands_PerrinTalk_Text_0:
# 585 "data/maps/ParcelWetlands/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelWetlands_Epilogue_Text_0:
# 596 "data/maps/ParcelWetlands/scripts.pory"
	.string "REEDMERE. The channel runs under the\n"
	.string "landing the way it did the first week,\l"
	.string "and it doesn't smell of anything.\p"
	.string "The works upstream hold a permit with a\n"
	.string "new page in it. A CORPS monitor sits on\l"
	.string "the bank with a jar and a clock. Nobody\l"
	.string "cut a ribbon for it.$"
