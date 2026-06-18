ParcelWetlands_MapScripts::
# 22 "data/maps/ParcelWetlands/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelWetlands_OnTransition
	.byte 0


ParcelWetlands_OnTransition::
# 27 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlands_OnTransition_2
# 31 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_2
# 32 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 33 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 448
# 34 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 35 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ParcelWetlands_OnTransition_9
# 38 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
ParcelWetlands_OnTransition_1:
# 42 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 43 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 44 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 45 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_OnTransition_6
# 48 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_4
ParcelWetlands_OnTransition_5:
	end

ParcelWetlands_OnTransition_2:
# 28 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_2
# 29 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
	goto ParcelWetlands_OnTransition_1

ParcelWetlands_OnTransition_6:
# 46 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_4
	goto ParcelWetlands_OnTransition_5

ParcelWetlands_OnTransition_9:
# 36 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_3
	goto ParcelWetlands_OnTransition_1


ParcelWetlands_Harland::
# 55 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 56 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 57 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlands_Harland_2
# 62 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 63 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 64 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 65 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_Harland_5
# 71 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_3, MSGBOX_DEFAULT
# 72 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_4, MSGBOX_DEFAULT
# 73 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_5, MSGBOX_DEFAULT
# 74 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_6, MSGBOX_DEFAULT
# 75 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 3
# 76 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 77 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Harland_2:
# 58 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_0, MSGBOX_DEFAULT
# 59 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Harland_5:
# 66 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_1, MSGBOX_DEFAULT
# 67 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_2, MSGBOX_DEFAULT
# 68 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Dorsey::
# 83 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 84 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 85 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_0, MSGBOX_DEFAULT
# 86 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_1, MSGBOX_DEFAULT
# 87 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_2, MSGBOX_DEFAULT
# 88 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 89 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 4
# 90 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 91 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_ClueReeds::
# 97 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 98 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 99 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 0
# 100 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 101 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_ClueReeds_2
# 106 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueReeds_Text_1, MSGBOX_SIGN
# 107 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 108 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_ClueReeds_2:
# 102 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueReeds_Text_0, MSGBOX_SIGN
# 103 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_ClueCrate::
# 112 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 113 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 114 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 1
# 115 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 116 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_ClueCrate_2
# 121 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueCrate_Text_1, MSGBOX_SIGN
# 122 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 123 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_ClueCrate_2:
# 117 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueCrate_Text_0, MSGBOX_SIGN
# 118 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_ClueTag::
# 127 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 128 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 129 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 2
# 130 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 131 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_ClueTag_2
# 136 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueTag_Text_1, MSGBOX_SIGN
# 137 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 138 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_ClueTag_2:
# 132 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueTag_Text_0, MSGBOX_SIGN
# 133 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_PoisonTrigger::
# 144 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 145 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 24
# 146 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 147 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ne ParcelWetlands_PoisonTrigger_2
# 150 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 151 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 152 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_PoisonTrigger_5
# 155 "data/maps/ParcelWetlands/scripts.pory"
	lockall
# 156 "data/maps/ParcelWetlands/scripts.pory"
	playse SE_PIN
# 157 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_0, MSGBOX_DEFAULT
# 158 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_4
# 159 "data/maps/ParcelWetlands/scripts.pory"
	addobject 6
# 160 "data/maps/ParcelWetlands/scripts.pory"
	addobject 7
# 161 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_1, MSGBOX_DEFAULT
# 162 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_2, MSGBOX_DEFAULT
# 163 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 164 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 165 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_1, 1
# 166 "data/maps/ParcelWetlands/scripts.pory"
	releaseall
	end

ParcelWetlands_PoisonTrigger_2:
	end

ParcelWetlands_PoisonTrigger_5:
	end


ParcelWetlands_DeadFish::
# 171 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 172 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_DeadFish_Text_0, MSGBOX_DEFAULT
# 173 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvResidue::
# 179 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 180 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 181 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvResidue_2
# 185 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 6
# 186 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 187 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvResidue_5
# 192 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvResidue_Text_1, MSGBOX_SIGN
# 193 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 194 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 195 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvResidue_2:
# 182 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvResidue_5:
# 188 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvResidue_Text_0, MSGBOX_SIGN
# 189 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvPipe::
# 199 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 200 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 201 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvPipe_2
# 205 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 7
# 206 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 207 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvPipe_5
# 212 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_1, MSGBOX_SIGN
# 213 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 214 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 215 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvPipe_2:
# 202 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvPipe_5:
# 208 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_0, MSGBOX_SIGN
# 209 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvManifest::
# 219 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 220 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 221 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvManifest_2
# 225 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 8
# 226 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 227 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvManifest_5
# 232 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvManifest_Text_1, MSGBOX_SIGN
# 233 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 234 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 235 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvManifest_2:
# 222 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvManifest_5:
# 228 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvManifest_Text_0, MSGBOX_SIGN
# 229 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_RequirePoison::
# 240 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 241 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 242 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 243 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_RequirePoison_2
ParcelWetlands_RequirePoison_1:
	return

ParcelWetlands_RequirePoison_2:
# 244 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_RequirePoison_Text_0, MSGBOX_SIGN
	goto ParcelWetlands_RequirePoison_1


ParcelWetlands_CheckEvidenceDone::
# 250 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 448
# 251 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 252 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ParcelWetlands_CheckEvidenceDone_2
ParcelWetlands_CheckEvidenceDone_1:
	return

ParcelWetlands_CheckEvidenceDone_2:
# 253 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_CheckEvidenceDone_Text_0, MSGBOX_DEFAULT
# 254 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_3
# 255 "data/maps/ParcelWetlands/scripts.pory"
	addobject 5
# 256 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_CheckEvidenceDone_Text_1, MSGBOX_DEFAULT
	goto ParcelWetlands_CheckEvidenceDone_1


ParcelWetlands_Enforcer::
# 263 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ENFORCER, ParcelWetlands_Enforcer_Text_0, ParcelWetlands_Enforcer_Text_1
# 266 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 267 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 268 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_2, MSGBOX_DEFAULT
# 269 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_3, MSGBOX_DEFAULT
# 270 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 5
# 271 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
# 272 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 2
# 273 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_2
# 274 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_PoacherA::
# 280 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_POACHER_A, ParcelWetlands_PoacherA_Text_0, ParcelWetlands_PoacherA_Text_1
# 283 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoacherA_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_PoacherB::
# 287 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_POACHER_B, ParcelWetlands_PoacherB_Text_0, ParcelWetlands_PoacherB_Text_1
# 290 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoacherB_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_ForagerTrainer::
# 296 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FORAGER, ParcelWetlands_ForagerTrainer_Text_0, ParcelWetlands_ForagerTrainer_Text_1
# 299 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ForagerTrainer_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_ItemAntidote::
# 304 "data/maps/ParcelWetlands/scripts.pory"
	finditem ITEM_ANTIDOTE
	end


ParcelWetlands_GymTarn::
# 314 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GYM1, ParcelWetlands_GymTarn_Text_0, ParcelWetlands_GymTarn_Text_1, ParcelWetlands_GymTarn_Defeated
# 319 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 320 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 321 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_GymTarn_Text_2, MSGBOX_DEFAULT
# 322 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_GymTarn_Defeated::
# 327 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_BADGE01_GET
# 328 "data/maps/ParcelWetlands/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 329 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_GymTarn_Defeated_Text_0, MSGBOX_DEFAULT
# 330 "data/maps/ParcelWetlands/scripts.pory"
	giveitem ITEM_HM01
# 331 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_GymTarn_Defeated_Text_1, MSGBOX_DEFAULT
# 332 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Harland_Text_0:
# 58 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland: …Maybe I was wrong about you.\p"
	.string "But I still don't trust your people.$"

ParcelWetlands_Harland_Text_1:
# 66 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland: Look at this! You said you were\n"
	.string "protecting the water!$"

ParcelWetlands_Harland_Text_2:
# 67 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland: Don't stand there writing.\n"
	.string "READ it, then. The residue. The pipe.\p"
	.string "There's a soaked manifest washed up by\n"
	.string "the south bank. Read all of it.$"

ParcelWetlands_Harland_Text_3:
# 71 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland: My father fished these waters.\n"
	.string "His father too.\p"
	.string "And now you show up with rules and\n"
	.string "paperwork and tell me the water belongs\l"
	.string "to you?$"

ParcelWetlands_Harland_Text_4:
# 72 "data/maps/ParcelWetlands/scripts.pory"
	.string "{PLAYER}: It doesn't belong to me.$"

ParcelWetlands_Harland_Text_5:
# 73 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland: Then why does it feel like it\n"
	.string "does?$"

ParcelWetlands_Harland_Text_6:
# 74 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland turns back to his nets.\p"
	.string "Harland: You want to talk? Talk to\n"
	.string "Councilman Dorsey. He's down by the\l"
	.string "landing.\n"
	.string "Someone who actually listens.$"

ParcelWetlands_Dorsey_Text_0:
# 85 "data/maps/ParcelWetlands/scripts.pory"
	.string "Dorsey: Ah--the new provisional.\n"
	.string "Welcome to the landing.\p"
	.string "Dorsey: We can protect Pokémon and\n"
	.string "protect jobs.\n"
	.string "We don't need fear-based restrictions.$"

ParcelWetlands_Dorsey_Text_1:
# 86 "data/maps/ParcelWetlands/scripts.pory"
	.string "Dorsey: These people work hard. The\n"
	.string "Corps means well, I'm sure--but rules\l"
	.string "written far away land hard out here.\p"
	.string "He shakes your hand. It is a very good\n"
	.string "handshake.$"

ParcelWetlands_Dorsey_Text_2:
# 87 "data/maps/ParcelWetlands/scripts.pory"
	.string "As you turn away, quieter, almost to\n"
	.string "himself:\p"
	.string "Dorsey: People need someone to blame.\n"
	.string "Better it isn't us.$"

ParcelWetlands_ClueReeds_Text_0:
# 102 "data/maps/ParcelWetlands/scripts.pory"
	.string "The disturbed reeds. Already noted.$"

ParcelWetlands_ClueReeds_Text_1:
# 106 "data/maps/ParcelWetlands/scripts.pory"
	.string "The reeds here are bent in a swath, all\n"
	.string "one direction--dragged, not blown.\p"
	.string "You note the width of the drag.$"

ParcelWetlands_ClueCrate_Text_0:
# 117 "data/maps/ParcelWetlands/scripts.pory"
	.string "The crate imprint. Already noted.$"

ParcelWetlands_ClueCrate_Text_1:
# 121 "data/maps/ParcelWetlands/scripts.pory"
	.string "A rectangular imprint pressed deep in\n"
	.string "the mud. Slats. Corner braces.\p"
	.string "A crate sat here long enough to matter,\n"
	.string "and left recently enough to be wet.$"

ParcelWetlands_ClueTag_Text_0:
# 132 "data/maps/ParcelWetlands/scripts.pory"
	.string "The trade tag. Bagged and noted.$"

ParcelWetlands_ClueTag_Text_1:
# 136 "data/maps/ParcelWetlands/scripts.pory"
	.string "A plastic tag, snapped off its loop. A\n"
	.string "lot number, no license field.\p"
	.string "The kind of tag that isn't supposed to\n"
	.string "exist.\n"
	.string "Enough to point. Not enough to convict.$"

ParcelWetlands_PoisonTrigger_Text_0:
# 157 "data/maps/ParcelWetlands/scripts.pory"
	.string "Shouting, down at the backwater.$"

ParcelWetlands_PoisonTrigger_Text_1:
# 161 "data/maps/ParcelWetlands/scripts.pory"
	.string "Fish float belly-up against the dock\n"
	.string "pilings. A faint sheen crawls on the\l"
	.string "surface, bending the light wrong.\p"
	.string "People crowd the bank. Panic is curdling\n"
	.string "into anger.$"

ParcelWetlands_PoisonTrigger_Text_2:
# 162 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland is there, and he is furious.$"

ParcelWetlands_DeadFish_Text_0:
# 172 "data/maps/ParcelWetlands/scripts.pory"
	.string "It drifts against the piling and does\n"
	.string "not right itself.$"

ParcelWetlands_EvResidue_Text_0:
# 188 "data/maps/ParcelWetlands/scripts.pory"
	.string "The residue sample. Sealed.$"

ParcelWetlands_EvResidue_Text_1:
# 192 "data/maps/ParcelWetlands/scripts.pory"
	.string "Upstream of the dock, the residue\n"
	.string "collects in the reed roots--greasy,\l"
	.string "faintly sweet-smelling.\p"
	.string "It did not start here. You seal a sample.$"

ParcelWetlands_EvPipe_Text_0:
# 208 "data/maps/ParcelWetlands/scripts.pory"
	.string "The pipe segment. Photographed and\n"
	.string "noted.$"

ParcelWetlands_EvPipe_Text_1:
# 212 "data/maps/ParcelWetlands/scripts.pory"
	.string "A broken discharge-pipe segment,\n"
	.string "half-buried at the waterline. The break\l"
	.string "is old. The staining inside is not.\p"
	.string "You photograph it where it lies.$"

ParcelWetlands_EvManifest_Text_0:
# 228 "data/maps/ParcelWetlands/scripts.pory"
	.string "The manifest. Drying between notebook\n"
	.string "pages.$"

ParcelWetlands_EvManifest_Text_1:
# 232 "data/maps/ParcelWetlands/scripts.pory"
	.string "A transport manifest, soaked but\n"
	.string "readable. Tonnage. Dates. A carrier code\l"
	.string "you don't recognize--\p"
	.string "and a consignee field somebody inked\n"
	.string "out by hand.$"

ParcelWetlands_RequirePoison_Text_0:
# 244 "data/maps/ParcelWetlands/scripts.pory"
	.string "The backwater is quiet. Harland's boats\n"
	.string "sit low on their lines.$"

ParcelWetlands_CheckEvidenceDone_Text_0:
# 253 "data/maps/ParcelWetlands/scripts.pory"
	.string "Residue. Pipe. Manifest.\p"
	.string "Enough to point. Not enough to convict.\n"
	.string "You write all of it down.$"

ParcelWetlands_CheckEvidenceDone_Text_1:
# 256 "data/maps/ParcelWetlands/scripts.pory"
	.string "Someone is waiting for you by the\n"
	.string "landing.$"

ParcelWetlands_Enforcer_Text_0:
# 264 "data/maps/ParcelWetlands/scripts.pory"
	.string "Voss: You think you're saving\n"
	.string "something?\p"
	.string "The land's already dead.\n"
	.string "We're just the first to admit it.$"

ParcelWetlands_Enforcer_Text_1:
# 265 "data/maps/ParcelWetlands/scripts.pory"
	.string "Voss: Hm.$"

ParcelWetlands_Enforcer_Text_2:
# 268 "data/maps/ParcelWetlands/scripts.pory"
	.string "Voss straightens his coat, unhurried.\p"
	.string "Voss: Your mentor tried.\n"
	.string "Look how that went.$"

ParcelWetlands_Enforcer_Text_3:
# 269 "data/maps/ParcelWetlands/scripts.pory"
	.string "He walks past you like you've stopped\n"
	.string "existing.\p"
	.string "By the landing, people are looking for\n"
	.string "Councilman Dorsey.\n"
	.string "Nobody can find him.$"

ParcelWetlands_PoacherA_Text_0:
# 281 "data/maps/ParcelWetlands/scripts.pory"
	.string "Selt: Nothing illegal about standing by\n"
	.string "the water, kid.$"

ParcelWetlands_PoacherA_Text_1:
# 282 "data/maps/ParcelWetlands/scripts.pory"
	.string "Selt: Fine, fine. Moving along.$"

ParcelWetlands_PoacherA_Text_2:
# 283 "data/maps/ParcelWetlands/scripts.pory"
	.string "Selt: A man's got to eat. You want\n"
	.string "villains, look further up the money.$"

ParcelWetlands_PoacherB_Text_0:
# 288 "data/maps/ParcelWetlands/scripts.pory"
	.string "Mora: This patch is spoken for. Walk on.$"

ParcelWetlands_PoacherB_Text_1:
# 289 "data/maps/ParcelWetlands/scripts.pory"
	.string "Mora: Ugh. Whatever.$"

ParcelWetlands_PoacherB_Text_2:
# 290 "data/maps/ParcelWetlands/scripts.pory"
	.string "Mora: Spoken for by WHO? Mind your own\n"
	.string "business.$"

ParcelWetlands_ForagerTrainer_Text_0:
# 297 "data/maps/ParcelWetlands/scripts.pory"
	.string "Bran: Mind your boots--mudcaps grow\n"
	.string "where you least want them.\p"
	.string "And trainers, apparently. C'mon then.$"

ParcelWetlands_ForagerTrainer_Text_1:
# 298 "data/maps/ParcelWetlands/scripts.pory"
	.string "Bran: Heh. Soft hands, hard hits.$"

ParcelWetlands_ForagerTrainer_Text_2:
# 299 "data/maps/ParcelWetlands/scripts.pory"
	.string "Bran: The reed beds used to go twice as\n"
	.string "far out.\p"
	.string "Ask anyone old enough to remember.$"

ParcelWetlands_GymTarn_Text_0:
# 315 "data/maps/ParcelWetlands/scripts.pory"
	.string "Tarn: The Tidewater Division reads\n"
	.string "every drop that leaves this marsh.\p"
	.string "You want to pass? Show me you can read\n"
	.string "the water too.$"

ParcelWetlands_GymTarn_Text_1:
# 316 "data/maps/ParcelWetlands/scripts.pory"
	.string "Tarn: …Hm. The current's yours, then.$"

ParcelWetlands_GymTarn_Text_2:
# 321 "data/maps/ParcelWetlands/scripts.pory"
	.string "Tarn: A provisional who can actually\n"
	.string "fight.\p"
	.string "Use that clearance well. The water\n"
	.string "upstream is worse.$"

ParcelWetlands_GymTarn_Defeated_Text_0:
# 329 "data/maps/ParcelWetlands/scripts.pory"
	.string "Tarn: That's the Tidal clearance. It\n"
	.string "marks you fit to carry field tools.\p"
	.string "Starting with this one.$"

ParcelWetlands_GymTarn_Defeated_Text_1:
# 331 "data/maps/ParcelWetlands/scripts.pory"
	.string "Tarn: CUT. Clears deadfall and\n"
	.string "overgrowth in the field.\p"
	.string "The marsh has plenty of both, lately.$"
