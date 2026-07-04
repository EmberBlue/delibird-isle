ParcelWetlands_MapScripts::
# 23 "data/maps/ParcelWetlands/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelWetlands_OnTransition
	.byte 0


ParcelWetlands_OnTransition::
# 29 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlands_OnTransition_2
# 37 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_2
# 38 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 39 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 448
# 40 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 41 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ParcelWetlands_OnTransition_13
# 44 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
ParcelWetlands_OnTransition_1:
# 48 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 49 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 50 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 51 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_OnTransition_6
# 54 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_4
ParcelWetlands_OnTransition_5:
	end

ParcelWetlands_OnTransition_2:
# 30 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_OnTransition_10
# 33 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_2
ParcelWetlands_OnTransition_9:
# 35 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
	goto ParcelWetlands_OnTransition_1

ParcelWetlands_OnTransition_6:
# 52 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_4
	goto ParcelWetlands_OnTransition_5

ParcelWetlands_OnTransition_10:
# 31 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_2
	goto ParcelWetlands_OnTransition_9

ParcelWetlands_OnTransition_13:
# 42 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_3
	goto ParcelWetlands_OnTransition_1


ParcelWetlands_Harland::
# 61 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 62 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 63 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlands_Harland_2
# 68 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 69 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 70 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 71 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_Harland_5
# 77 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_3, MSGBOX_DEFAULT
# 78 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_4, MSGBOX_DEFAULT
# 79 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_5, MSGBOX_DEFAULT
# 80 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_6, MSGBOX_DEFAULT
# 81 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 3
# 82 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 83 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Harland_2:
# 64 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_0, MSGBOX_DEFAULT
# 65 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Harland_5:
# 72 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_1, MSGBOX_DEFAULT
# 73 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_2, MSGBOX_DEFAULT
# 74 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Dorsey::
# 89 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 90 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 91 "data/maps/ParcelWetlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlands_Dorsey_2
# 98 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_3, MSGBOX_DEFAULT
# 99 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_4, MSGBOX_DEFAULT
# 100 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_5, MSGBOX_DEFAULT
# 101 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 102 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 4
# 103 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 104 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Dorsey_2:
# 92 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_0, MSGBOX_DEFAULT
# 93 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_1, MSGBOX_DEFAULT
# 94 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_2, MSGBOX_DEFAULT
# 95 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_ClueReeds::
# 110 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 111 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 112 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 0
# 113 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 114 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_ClueReeds_2
# 119 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueReeds_Text_1, MSGBOX_SIGN
# 120 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 121 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_ClueReeds_2:
# 115 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueReeds_Text_0, MSGBOX_SIGN
# 116 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_ClueCrate::
# 125 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 126 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 127 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 1
# 128 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 129 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_ClueCrate_2
# 134 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueCrate_Text_1, MSGBOX_SIGN
# 135 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 136 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_ClueCrate_2:
# 130 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueCrate_Text_0, MSGBOX_SIGN
# 131 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_ClueTag::
# 140 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 141 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 142 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 2
# 143 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 144 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_ClueTag_2
# 149 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueTag_Text_1, MSGBOX_SIGN
# 150 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 151 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_ClueTag_2:
# 145 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueTag_Text_0, MSGBOX_SIGN
# 146 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_PoisonTrigger::
# 157 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 158 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 24
# 159 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 160 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ne ParcelWetlands_PoisonTrigger_2
# 163 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 164 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 165 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_PoisonTrigger_5
# 168 "data/maps/ParcelWetlands/scripts.pory"
	lockall
# 169 "data/maps/ParcelWetlands/scripts.pory"
	playse SE_PIN
# 170 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_0, MSGBOX_DEFAULT
# 171 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_4
# 172 "data/maps/ParcelWetlands/scripts.pory"
	addobject 6
# 173 "data/maps/ParcelWetlands/scripts.pory"
	addobject 7
# 174 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_1, MSGBOX_DEFAULT
# 175 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_2, MSGBOX_DEFAULT
# 176 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 177 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 178 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_1, 1
# 179 "data/maps/ParcelWetlands/scripts.pory"
	releaseall
	end

ParcelWetlands_PoisonTrigger_2:
	end

ParcelWetlands_PoisonTrigger_5:
	end


ParcelWetlands_DeadFish::
# 184 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 185 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_DeadFish_Text_0, MSGBOX_DEFAULT
# 186 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvResidue::
# 192 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 193 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 194 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvResidue_2
# 198 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 6
# 199 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 200 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvResidue_5
# 205 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvResidue_Text_1, MSGBOX_SIGN
# 206 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 207 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 208 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvResidue_2:
# 195 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvResidue_5:
# 201 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvResidue_Text_0, MSGBOX_SIGN
# 202 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvPipe::
# 212 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 213 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 214 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvPipe_2
# 218 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 7
# 219 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 220 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvPipe_5
# 225 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_1, MSGBOX_SIGN
# 226 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 227 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 228 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvPipe_2:
# 215 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvPipe_5:
# 221 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_0, MSGBOX_SIGN
# 222 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvManifest::
# 232 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 233 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 234 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvManifest_2
# 238 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 8
# 239 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 240 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvManifest_5
# 245 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvManifest_Text_1, MSGBOX_SIGN
# 246 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 247 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 248 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvManifest_2:
# 235 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvManifest_5:
# 241 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvManifest_Text_0, MSGBOX_SIGN
# 242 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_RequirePoison::
# 253 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 254 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 255 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 256 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_RequirePoison_2
ParcelWetlands_RequirePoison_1:
	return

ParcelWetlands_RequirePoison_2:
# 257 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_RequirePoison_Text_0, MSGBOX_SIGN
	goto ParcelWetlands_RequirePoison_1


ParcelWetlands_CheckEvidenceDone::
# 263 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 448
# 264 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 265 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ParcelWetlands_CheckEvidenceDone_2
ParcelWetlands_CheckEvidenceDone_1:
	return

ParcelWetlands_CheckEvidenceDone_2:
# 266 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_CheckEvidenceDone_Text_0, MSGBOX_DEFAULT
# 267 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_3
# 268 "data/maps/ParcelWetlands/scripts.pory"
	addobject 5
# 269 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_CheckEvidenceDone_Text_1, MSGBOX_DEFAULT
	goto ParcelWetlands_CheckEvidenceDone_1


ParcelWetlands_Enforcer::
# 276 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ENFORCER, ParcelWetlands_Enforcer_Text_0, ParcelWetlands_Enforcer_Text_1
# 279 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 280 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 281 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_2, MSGBOX_DEFAULT
# 282 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_3, MSGBOX_DEFAULT
# 283 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 5
# 284 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
# 285 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 2
# 286 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_2
# 287 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_PoacherA::
# 293 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_POACHER_A, ParcelWetlands_PoacherA_Text_0, ParcelWetlands_PoacherA_Text_1
# 296 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoacherA_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_PoacherB::
# 300 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_POACHER_B, ParcelWetlands_PoacherB_Text_0, ParcelWetlands_PoacherB_Text_1
# 303 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoacherB_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_ForagerTrainer::
# 309 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FORAGER, ParcelWetlands_ForagerTrainer_Text_0, ParcelWetlands_ForagerTrainer_Text_1
# 312 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ForagerTrainer_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_ItemAntidote::
# 317 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_ANTIDOTE
	end


ParcelWetlands_GymTarn::
# 327 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GYM1, ParcelWetlands_GymTarn_Text_0, ParcelWetlands_GymTarn_Text_1, ParcelWetlands_GymTarn_Defeated
# 332 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 333 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 334 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_GymTarn_Text_2, MSGBOX_DEFAULT
# 335 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_GymTarn_Defeated::
# 340 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_BADGE01_GET
# 341 "data/maps/ParcelWetlands/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 342 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_GymTarn_Defeated_Text_0, MSGBOX_DEFAULT
# 343 "data/maps/ParcelWetlands/scripts.pory"
	giveitem ITEM_HM01
# 344 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_GymTarn_Defeated_Text_1, MSGBOX_DEFAULT
# 345 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Harland_Text_0:
# 64 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland: …Maybe I was wrong about you.\p"
	.string "But I still don't trust your people.$"

ParcelWetlands_Harland_Text_1:
# 72 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland: Look at this! You said you were\n"
	.string "protecting the water!$"

ParcelWetlands_Harland_Text_2:
# 73 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland: Don't stand there writing.\n"
	.string "READ it, then. The residue. The pipe.\p"
	.string "There's a soaked manifest washed up by\n"
	.string "the south bank. Read all of it.$"

ParcelWetlands_Harland_Text_3:
# 77 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland: My father fished these waters.\n"
	.string "His father too.\p"
	.string "And now you show up with rules and\n"
	.string "paperwork and tell me the water belongs\l"
	.string "to you?$"

ParcelWetlands_Harland_Text_4:
# 78 "data/maps/ParcelWetlands/scripts.pory"
	.string "{PLAYER}: It doesn't belong to me.$"

ParcelWetlands_Harland_Text_5:
# 79 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland: Then why does it feel like it\n"
	.string "does?$"

ParcelWetlands_Harland_Text_6:
# 80 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland turns back to his nets.\p"
	.string "Harland: You want to talk? Talk to\n"
	.string "Councilman Dorsey. He's down by the\l"
	.string "landing.\n"
	.string "Someone who actually listens.$"

ParcelWetlands_Dorsey_Text_0:
# 92 "data/maps/ParcelWetlands/scripts.pory"
	.string "Councilman Dorsey is back at the\n"
	.string "landing, working his way along the\l"
	.string "stalls. The suit is new. The handshake\l"
	.string "is the same.\p"
	.string "Dorsey: Ranger! The very person. You'll\n"
	.string "have seen the Council's statement --\l"
	.string "we welcome the findings. Welcome them.\l"
	.string "Some of us were calling for an\l"
	.string "independent review years ago. Check\l"
	.string "the record.$"

ParcelWetlands_Dorsey_Text_1:
# 93 "data/maps/ParcelWetlands/scripts.pory"
	.string "Dorsey: Development that listens.\n"
	.string "Relief that reaches. It's what I've\l"
	.string "always stood for out here.\p"
	.string "He is already looking past you, at the\n"
	.string "next hand that needs shaking.\p"
	.string "Dorsey: The review board will want local\n"
	.string "liaisons, you know. People who\l"
	.string "understand both sides. I've put my name\l"
	.string "forward. Somebody sensible has to.$"

ParcelWetlands_Dorsey_Text_2:
# 94 "data/maps/ParcelWetlands/scripts.pory"
	.string "As you turn away, quieter, almost to\n"
	.string "himself:\p"
	.string "Dorsey: People need someone to thank.\n"
	.string "Better it's us.$"

ParcelWetlands_Dorsey_Text_3:
# 98 "data/maps/ParcelWetlands/scripts.pory"
	.string "Dorsey: Ah--the new provisional.\n"
	.string "Welcome to the landing.\p"
	.string "Dorsey: We can protect Pokémon and\n"
	.string "protect jobs.\n"
	.string "We don't need fear-based restrictions.$"

ParcelWetlands_Dorsey_Text_4:
# 99 "data/maps/ParcelWetlands/scripts.pory"
	.string "Dorsey: These people work hard. The\n"
	.string "Corps means well, I'm sure--but rules\l"
	.string "written far away land hard out here.\p"
	.string "He shakes your hand. It is a very good\n"
	.string "handshake.$"

ParcelWetlands_Dorsey_Text_5:
# 100 "data/maps/ParcelWetlands/scripts.pory"
	.string "As you turn away, quieter, almost to\n"
	.string "himself:\p"
	.string "Dorsey: People need someone to blame.\n"
	.string "Better it isn't us.$"

ParcelWetlands_ClueReeds_Text_0:
# 115 "data/maps/ParcelWetlands/scripts.pory"
	.string "The disturbed reeds. Already noted.$"

ParcelWetlands_ClueReeds_Text_1:
# 119 "data/maps/ParcelWetlands/scripts.pory"
	.string "The reeds here are bent in a swath, all\n"
	.string "one direction--dragged, not blown.\p"
	.string "You note the width of the drag.$"

ParcelWetlands_ClueCrate_Text_0:
# 130 "data/maps/ParcelWetlands/scripts.pory"
	.string "The crate imprint. Already noted.$"

ParcelWetlands_ClueCrate_Text_1:
# 134 "data/maps/ParcelWetlands/scripts.pory"
	.string "A rectangular imprint pressed deep in\n"
	.string "the mud. Slats. Corner braces.\p"
	.string "A crate sat here long enough to matter,\n"
	.string "and left recently enough to be wet.$"

ParcelWetlands_ClueTag_Text_0:
# 145 "data/maps/ParcelWetlands/scripts.pory"
	.string "The trade tag. Bagged and noted.$"

ParcelWetlands_ClueTag_Text_1:
# 149 "data/maps/ParcelWetlands/scripts.pory"
	.string "A plastic tag, snapped off its loop. A\n"
	.string "lot number, no license field.\p"
	.string "The kind of tag that isn't supposed to\n"
	.string "exist.\n"
	.string "Enough to point. Not enough to convict.$"

ParcelWetlands_PoisonTrigger_Text_0:
# 170 "data/maps/ParcelWetlands/scripts.pory"
	.string "Shouting, down at the backwater.$"

ParcelWetlands_PoisonTrigger_Text_1:
# 174 "data/maps/ParcelWetlands/scripts.pory"
	.string "Fish float belly-up against the dock\n"
	.string "pilings. A faint sheen crawls on the\l"
	.string "surface, bending the light wrong.\p"
	.string "People crowd the bank. Panic is curdling\n"
	.string "into anger.$"

ParcelWetlands_PoisonTrigger_Text_2:
# 175 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland is there, and he is furious.$"

ParcelWetlands_DeadFish_Text_0:
# 185 "data/maps/ParcelWetlands/scripts.pory"
	.string "It drifts against the piling and does\n"
	.string "not right itself.$"

ParcelWetlands_EvResidue_Text_0:
# 201 "data/maps/ParcelWetlands/scripts.pory"
	.string "The residue sample. Sealed.$"

ParcelWetlands_EvResidue_Text_1:
# 205 "data/maps/ParcelWetlands/scripts.pory"
	.string "Upstream of the dock, the residue\n"
	.string "collects in the reed roots--greasy,\l"
	.string "faintly sweet-smelling.\p"
	.string "It did not start here. You seal a sample.$"

ParcelWetlands_EvPipe_Text_0:
# 221 "data/maps/ParcelWetlands/scripts.pory"
	.string "The pipe segment. Photographed and\n"
	.string "noted.$"

ParcelWetlands_EvPipe_Text_1:
# 225 "data/maps/ParcelWetlands/scripts.pory"
	.string "A broken discharge-pipe segment,\n"
	.string "half-buried at the waterline. The break\l"
	.string "is old. The staining inside is not.\p"
	.string "You photograph it where it lies.$"

ParcelWetlands_EvManifest_Text_0:
# 241 "data/maps/ParcelWetlands/scripts.pory"
	.string "The manifest. Drying between notebook\n"
	.string "pages.$"

ParcelWetlands_EvManifest_Text_1:
# 245 "data/maps/ParcelWetlands/scripts.pory"
	.string "A transport manifest, soaked but\n"
	.string "readable. Tonnage. Dates. A carrier code\l"
	.string "you don't recognize--\p"
	.string "and a consignee field somebody inked\n"
	.string "out by hand.$"

ParcelWetlands_RequirePoison_Text_0:
# 257 "data/maps/ParcelWetlands/scripts.pory"
	.string "The backwater is quiet. Harland's boats\n"
	.string "sit low on their lines.$"

ParcelWetlands_CheckEvidenceDone_Text_0:
# 266 "data/maps/ParcelWetlands/scripts.pory"
	.string "Residue. Pipe. Manifest.\p"
	.string "Enough to point. Not enough to convict.\n"
	.string "You write all of it down.$"

ParcelWetlands_CheckEvidenceDone_Text_1:
# 269 "data/maps/ParcelWetlands/scripts.pory"
	.string "Someone is waiting for you by the\n"
	.string "landing.$"

ParcelWetlands_Enforcer_Text_0:
# 277 "data/maps/ParcelWetlands/scripts.pory"
	.string "Voss: You think you're saving\n"
	.string "something?\p"
	.string "The land's already dead.\n"
	.string "We're just the first to admit it.$"

ParcelWetlands_Enforcer_Text_1:
# 278 "data/maps/ParcelWetlands/scripts.pory"
	.string "Voss: Hm.$"

ParcelWetlands_Enforcer_Text_2:
# 281 "data/maps/ParcelWetlands/scripts.pory"
	.string "Voss straightens his coat, unhurried.\p"
	.string "Voss: Your mentor tried.\n"
	.string "Look how that went.$"

ParcelWetlands_Enforcer_Text_3:
# 282 "data/maps/ParcelWetlands/scripts.pory"
	.string "He walks past you like you've stopped\n"
	.string "existing.\p"
	.string "By the landing, people are looking for\n"
	.string "Councilman Dorsey.\n"
	.string "Nobody can find him.$"

ParcelWetlands_PoacherA_Text_0:
# 294 "data/maps/ParcelWetlands/scripts.pory"
	.string "Selt: Nothing illegal about standing by\n"
	.string "the water, kid.$"

ParcelWetlands_PoacherA_Text_1:
# 295 "data/maps/ParcelWetlands/scripts.pory"
	.string "Selt: Fine, fine. Moving along.$"

ParcelWetlands_PoacherA_Text_2:
# 296 "data/maps/ParcelWetlands/scripts.pory"
	.string "Selt: A man's got to eat. You want\n"
	.string "villains, look further up the money.$"

ParcelWetlands_PoacherB_Text_0:
# 301 "data/maps/ParcelWetlands/scripts.pory"
	.string "Mora: This patch is spoken for. Walk on.$"

ParcelWetlands_PoacherB_Text_1:
# 302 "data/maps/ParcelWetlands/scripts.pory"
	.string "Mora: Ugh. Whatever.$"

ParcelWetlands_PoacherB_Text_2:
# 303 "data/maps/ParcelWetlands/scripts.pory"
	.string "Mora: Spoken for by WHO? Mind your own\n"
	.string "business.$"

ParcelWetlands_ForagerTrainer_Text_0:
# 310 "data/maps/ParcelWetlands/scripts.pory"
	.string "Bran: Mind your boots--mudcaps grow\n"
	.string "where you least want them.\p"
	.string "And trainers, apparently. C'mon then.$"

ParcelWetlands_ForagerTrainer_Text_1:
# 311 "data/maps/ParcelWetlands/scripts.pory"
	.string "Bran: Heh. Soft hands, hard hits.$"

ParcelWetlands_ForagerTrainer_Text_2:
# 312 "data/maps/ParcelWetlands/scripts.pory"
	.string "Bran: The reed beds used to go twice as\n"
	.string "far out.\p"
	.string "Ask anyone old enough to remember.$"

ParcelWetlands_GymTarn_Text_0:
# 328 "data/maps/ParcelWetlands/scripts.pory"
	.string "Tarn: The Tidewater Division reads\n"
	.string "every drop that leaves this marsh.\p"
	.string "You want to pass? Show me you can read\n"
	.string "the water too.$"

ParcelWetlands_GymTarn_Text_1:
# 329 "data/maps/ParcelWetlands/scripts.pory"
	.string "Tarn: …Hm. The current's yours, then.$"

ParcelWetlands_GymTarn_Text_2:
# 334 "data/maps/ParcelWetlands/scripts.pory"
	.string "Tarn: A provisional who can actually\n"
	.string "fight.\p"
	.string "Use that clearance well. The water\n"
	.string "upstream is worse.$"

ParcelWetlands_GymTarn_Defeated_Text_0:
# 342 "data/maps/ParcelWetlands/scripts.pory"
	.string "Tarn: That's the Tidal clearance. It\n"
	.string "marks you fit to carry field tools.\p"
	.string "Starting with this one.$"

ParcelWetlands_GymTarn_Defeated_Text_1:
# 344 "data/maps/ParcelWetlands/scripts.pory"
	.string "Tarn: CUT. Clears deadfall and\n"
	.string "overgrowth in the field.\p"
	.string "The marsh has plenty of both, lately.$"
