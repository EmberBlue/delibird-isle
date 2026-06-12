ParcelWetlands_MapScripts::
# 21 "data/maps/ParcelWetlands/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelWetlands_OnTransition
	.byte 0


ParcelWetlands_OnTransition::
# 26 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlands_OnTransition_2
# 30 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_2
# 31 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 32 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 448
# 33 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 34 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ParcelWetlands_OnTransition_9
# 37 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
ParcelWetlands_OnTransition_1:
# 41 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 42 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 43 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 44 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_OnTransition_6
# 47 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_4
ParcelWetlands_OnTransition_5:
	end

ParcelWetlands_OnTransition_2:
# 27 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_2
# 28 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
	goto ParcelWetlands_OnTransition_1

ParcelWetlands_OnTransition_6:
# 45 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_4
	goto ParcelWetlands_OnTransition_5

ParcelWetlands_OnTransition_9:
# 35 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_3
	goto ParcelWetlands_OnTransition_1


ParcelWetlands_Harland::
# 54 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 55 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 56 "data/maps/ParcelWetlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlands_Harland_2
# 61 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 62 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 63 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 64 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_Harland_5
# 70 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_3, MSGBOX_DEFAULT
# 71 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_4, MSGBOX_DEFAULT
# 72 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_5, MSGBOX_DEFAULT
# 73 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_6, MSGBOX_DEFAULT
# 74 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 3
# 75 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 76 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Harland_2:
# 57 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_0, MSGBOX_DEFAULT
# 58 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_Harland_5:
# 65 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_1, MSGBOX_DEFAULT
# 66 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Harland_Text_2, MSGBOX_DEFAULT
# 67 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_Dorsey::
# 82 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 83 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 84 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_0, MSGBOX_DEFAULT
# 85 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_1, MSGBOX_DEFAULT
# 86 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Dorsey_Text_2, MSGBOX_DEFAULT
# 87 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 88 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 4
# 89 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 90 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_ClueReeds::
# 96 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 97 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 98 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 0
# 99 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 100 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_ClueReeds_2
# 105 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueReeds_Text_1, MSGBOX_SIGN
# 106 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 107 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_ClueReeds_2:
# 101 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueReeds_Text_0, MSGBOX_SIGN
# 102 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_ClueCrate::
# 111 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 112 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 113 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 1
# 114 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 115 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_ClueCrate_2
# 120 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueCrate_Text_1, MSGBOX_SIGN
# 121 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 122 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_ClueCrate_2:
# 116 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueCrate_Text_0, MSGBOX_SIGN
# 117 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_ClueTag::
# 126 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 127 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 128 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 2
# 129 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 130 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_ClueTag_2
# 135 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueTag_Text_1, MSGBOX_SIGN
# 136 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 137 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_ClueTag_2:
# 131 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_ClueTag_Text_0, MSGBOX_SIGN
# 132 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_PoisonTrigger::
# 143 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 144 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 24
# 145 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 146 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ne ParcelWetlands_PoisonTrigger_2
# 149 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 150 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 151 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_PoisonTrigger_5
# 154 "data/maps/ParcelWetlands/scripts.pory"
	lockall
# 155 "data/maps/ParcelWetlands/scripts.pory"
	playse SE_PIN
# 156 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_0, MSGBOX_DEFAULT
# 157 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_4
# 158 "data/maps/ParcelWetlands/scripts.pory"
	addobject 6
# 159 "data/maps/ParcelWetlands/scripts.pory"
	addobject 7
# 160 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_1, MSGBOX_DEFAULT
# 161 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoisonTrigger_Text_2, MSGBOX_DEFAULT
# 162 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 163 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 164 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_TEMP_1, 1
# 165 "data/maps/ParcelWetlands/scripts.pory"
	releaseall
	end

ParcelWetlands_PoisonTrigger_2:
	end

ParcelWetlands_PoisonTrigger_5:
	end


ParcelWetlands_DeadFish::
# 170 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 171 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_DeadFish_Text_0, MSGBOX_DEFAULT
# 172 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvResidue::
# 178 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 179 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 180 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvResidue_2
# 184 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 6
# 185 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 186 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvResidue_5
# 191 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvResidue_Text_1, MSGBOX_SIGN
# 192 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 193 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 194 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvResidue_2:
# 181 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvResidue_5:
# 187 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvResidue_Text_0, MSGBOX_SIGN
# 188 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvPipe::
# 198 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 199 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 200 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvPipe_2
# 204 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 7
# 205 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 206 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvPipe_5
# 211 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_1, MSGBOX_SIGN
# 212 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 213 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 214 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvPipe_2:
# 201 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvPipe_5:
# 207 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvPipe_Text_0, MSGBOX_SIGN
# 208 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_EvManifest::
# 218 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 219 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_RequirePoison
# 220 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_EvManifest_2
# 224 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 8
# 225 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 226 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlands_EvManifest_5
# 231 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvManifest_Text_1, MSGBOX_SIGN
# 232 "data/maps/ParcelWetlands/scripts.pory"
	special SkaldmereCertTaskMark
# 233 "data/maps/ParcelWetlands/scripts.pory"
	call ParcelWetlands_CheckEvidenceDone
# 234 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvManifest_2:
# 221 "data/maps/ParcelWetlands/scripts.pory"
	release
	end

ParcelWetlands_EvManifest_5:
# 227 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_EvManifest_Text_0, MSGBOX_SIGN
# 228 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_RequirePoison::
# 239 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 240 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 5
# 241 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 242 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlands_RequirePoison_2
ParcelWetlands_RequirePoison_1:
	return

ParcelWetlands_RequirePoison_2:
# 243 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_RequirePoison_Text_0, MSGBOX_SIGN
	goto ParcelWetlands_RequirePoison_1


ParcelWetlands_CheckEvidenceDone::
# 249 "data/maps/ParcelWetlands/scripts.pory"
	setvar VAR_0x8004, 448
# 250 "data/maps/ParcelWetlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 251 "data/maps/ParcelWetlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ParcelWetlands_CheckEvidenceDone_2
ParcelWetlands_CheckEvidenceDone_1:
	return

ParcelWetlands_CheckEvidenceDone_2:
# 252 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_CheckEvidenceDone_Text_0, MSGBOX_DEFAULT
# 253 "data/maps/ParcelWetlands/scripts.pory"
	clearflag FLAG_TEMP_3
# 254 "data/maps/ParcelWetlands/scripts.pory"
	addobject 5
# 255 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_CheckEvidenceDone_Text_1, MSGBOX_DEFAULT
	goto ParcelWetlands_CheckEvidenceDone_1


ParcelWetlands_Enforcer::
# 262 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ENFORCER, ParcelWetlands_Enforcer_Text_0, ParcelWetlands_Enforcer_Text_1
# 265 "data/maps/ParcelWetlands/scripts.pory"
	lock
# 266 "data/maps/ParcelWetlands/scripts.pory"
	faceplayer
# 267 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_2, MSGBOX_DEFAULT
# 268 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_Enforcer_Text_3, MSGBOX_DEFAULT
# 269 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 5
# 270 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_3
# 271 "data/maps/ParcelWetlands/scripts.pory"
	removeobject 2
# 272 "data/maps/ParcelWetlands/scripts.pory"
	setflag FLAG_TEMP_2
# 273 "data/maps/ParcelWetlands/scripts.pory"
	release
	end


ParcelWetlands_PoacherA::
# 279 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_POACHER_A, ParcelWetlands_PoacherA_Text_0, ParcelWetlands_PoacherA_Text_1
# 282 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoacherA_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_PoacherB::
# 286 "data/maps/ParcelWetlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_POACHER_B, ParcelWetlands_PoacherB_Text_0, ParcelWetlands_PoacherB_Text_1
# 289 "data/maps/ParcelWetlands/scripts.pory"
	msgbox ParcelWetlands_PoacherB_Text_2, MSGBOX_DEFAULT
	end


ParcelWetlands_Harland_Text_0:
# 57 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland: …Maybe I was wrong about you.\p"
	.string "But I still don't trust your people.$"

ParcelWetlands_Harland_Text_1:
# 65 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland: Look at this! You said you were\n"
	.string "protecting the water!$"

ParcelWetlands_Harland_Text_2:
# 66 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland: Don't stand there writing.\n"
	.string "READ it, then. The residue. The pipe.\p"
	.string "There's a soaked manifest washed up by\n"
	.string "the south bank. Read all of it.$"

ParcelWetlands_Harland_Text_3:
# 70 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland: My father fished these waters.\n"
	.string "His father too.\p"
	.string "And now you show up with rules and\n"
	.string "paperwork and tell me the water belongs\l"
	.string "to you?$"

ParcelWetlands_Harland_Text_4:
# 71 "data/maps/ParcelWetlands/scripts.pory"
	.string "{PLAYER}: It doesn't belong to me.$"

ParcelWetlands_Harland_Text_5:
# 72 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland: Then why does it feel like it\n"
	.string "does?$"

ParcelWetlands_Harland_Text_6:
# 73 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland turns back to his nets.\p"
	.string "Harland: You want to talk? Talk to\n"
	.string "Councilman Dorsey. He's down by the\l"
	.string "landing.\n"
	.string "Someone who actually listens.$"

ParcelWetlands_Dorsey_Text_0:
# 84 "data/maps/ParcelWetlands/scripts.pory"
	.string "Dorsey: Ah--the new provisional.\n"
	.string "Welcome to the landing.\p"
	.string "Dorsey: We can protect Pokémon and\n"
	.string "protect jobs.\n"
	.string "We don't need fear-based restrictions.$"

ParcelWetlands_Dorsey_Text_1:
# 85 "data/maps/ParcelWetlands/scripts.pory"
	.string "Dorsey: These people work hard. The\n"
	.string "Corps means well, I'm sure--but rules\l"
	.string "written far away land hard out here.\p"
	.string "He shakes your hand. It is a very good\n"
	.string "handshake.$"

ParcelWetlands_Dorsey_Text_2:
# 86 "data/maps/ParcelWetlands/scripts.pory"
	.string "As you turn away, quieter, almost to\n"
	.string "himself:\p"
	.string "Dorsey: People need someone to blame.\n"
	.string "Better it isn't us.$"

ParcelWetlands_ClueReeds_Text_0:
# 101 "data/maps/ParcelWetlands/scripts.pory"
	.string "The disturbed reeds. Already noted.$"

ParcelWetlands_ClueReeds_Text_1:
# 105 "data/maps/ParcelWetlands/scripts.pory"
	.string "The reeds here are bent in a swath, all\n"
	.string "one direction--dragged, not blown.\p"
	.string "You note the width of the drag.$"

ParcelWetlands_ClueCrate_Text_0:
# 116 "data/maps/ParcelWetlands/scripts.pory"
	.string "The crate imprint. Already noted.$"

ParcelWetlands_ClueCrate_Text_1:
# 120 "data/maps/ParcelWetlands/scripts.pory"
	.string "A rectangular imprint pressed deep in\n"
	.string "the mud. Slats. Corner braces.\p"
	.string "A crate sat here long enough to matter,\n"
	.string "and left recently enough to be wet.$"

ParcelWetlands_ClueTag_Text_0:
# 131 "data/maps/ParcelWetlands/scripts.pory"
	.string "The trade tag. Bagged and noted.$"

ParcelWetlands_ClueTag_Text_1:
# 135 "data/maps/ParcelWetlands/scripts.pory"
	.string "A plastic tag, snapped off its loop. A\n"
	.string "lot number, no license field.\p"
	.string "The kind of tag that isn't supposed to\n"
	.string "exist.\n"
	.string "Enough to point. Not enough to convict.$"

ParcelWetlands_PoisonTrigger_Text_0:
# 156 "data/maps/ParcelWetlands/scripts.pory"
	.string "Shouting, down at the backwater.$"

ParcelWetlands_PoisonTrigger_Text_1:
# 160 "data/maps/ParcelWetlands/scripts.pory"
	.string "Fish float belly-up against the dock\n"
	.string "pilings. A faint sheen crawls on the\l"
	.string "surface, bending the light wrong.\p"
	.string "People crowd the bank. Panic is curdling\n"
	.string "into anger.$"

ParcelWetlands_PoisonTrigger_Text_2:
# 161 "data/maps/ParcelWetlands/scripts.pory"
	.string "Harland is there, and he is furious.$"

ParcelWetlands_DeadFish_Text_0:
# 171 "data/maps/ParcelWetlands/scripts.pory"
	.string "It drifts against the piling and does\n"
	.string "not right itself.$"

ParcelWetlands_EvResidue_Text_0:
# 187 "data/maps/ParcelWetlands/scripts.pory"
	.string "The residue sample. Sealed.$"

ParcelWetlands_EvResidue_Text_1:
# 191 "data/maps/ParcelWetlands/scripts.pory"
	.string "Upstream of the dock, the residue\n"
	.string "collects in the reed roots--greasy,\l"
	.string "faintly sweet-smelling.\p"
	.string "It did not start here. You seal a sample.$"

ParcelWetlands_EvPipe_Text_0:
# 207 "data/maps/ParcelWetlands/scripts.pory"
	.string "The pipe segment. Photographed and\n"
	.string "noted.$"

ParcelWetlands_EvPipe_Text_1:
# 211 "data/maps/ParcelWetlands/scripts.pory"
	.string "A broken discharge-pipe segment,\n"
	.string "half-buried at the waterline. The break\l"
	.string "is old. The staining inside is not.\p"
	.string "You photograph it where it lies.$"

ParcelWetlands_EvManifest_Text_0:
# 227 "data/maps/ParcelWetlands/scripts.pory"
	.string "The manifest. Drying between notebook\n"
	.string "pages.$"

ParcelWetlands_EvManifest_Text_1:
# 231 "data/maps/ParcelWetlands/scripts.pory"
	.string "A transport manifest, soaked but\n"
	.string "readable. Tonnage. Dates. A carrier code\l"
	.string "you don't recognize--\p"
	.string "and a consignee field somebody inked\n"
	.string "out by hand.$"

ParcelWetlands_RequirePoison_Text_0:
# 243 "data/maps/ParcelWetlands/scripts.pory"
	.string "The backwater is quiet. Harland's boats\n"
	.string "sit low on their lines.$"

ParcelWetlands_CheckEvidenceDone_Text_0:
# 252 "data/maps/ParcelWetlands/scripts.pory"
	.string "Residue. Pipe. Manifest.\p"
	.string "Enough to point. Not enough to convict.\n"
	.string "You write all of it down.$"

ParcelWetlands_CheckEvidenceDone_Text_1:
# 255 "data/maps/ParcelWetlands/scripts.pory"
	.string "Someone is waiting for you by the\n"
	.string "landing.$"

ParcelWetlands_Enforcer_Text_0:
# 263 "data/maps/ParcelWetlands/scripts.pory"
	.string "Voss: You think you're saving\n"
	.string "something?\p"
	.string "The land's already dead.\n"
	.string "We're just the first to admit it.$"

ParcelWetlands_Enforcer_Text_1:
# 264 "data/maps/ParcelWetlands/scripts.pory"
	.string "Voss: Hm.$"

ParcelWetlands_Enforcer_Text_2:
# 267 "data/maps/ParcelWetlands/scripts.pory"
	.string "Voss straightens his coat, unhurried.\p"
	.string "Voss: Your mentor tried.\n"
	.string "Look how that went.$"

ParcelWetlands_Enforcer_Text_3:
# 268 "data/maps/ParcelWetlands/scripts.pory"
	.string "He walks past you like you've stopped\n"
	.string "existing.\p"
	.string "By the landing, people are looking for\n"
	.string "Councilman Dorsey.\n"
	.string "Nobody can find him.$"

ParcelWetlands_PoacherA_Text_0:
# 280 "data/maps/ParcelWetlands/scripts.pory"
	.string "Selt: Nothing illegal about standing by\n"
	.string "the water, kid.$"

ParcelWetlands_PoacherA_Text_1:
# 281 "data/maps/ParcelWetlands/scripts.pory"
	.string "Selt: Fine, fine. Moving along.$"

ParcelWetlands_PoacherA_Text_2:
# 282 "data/maps/ParcelWetlands/scripts.pory"
	.string "Selt: A man's got to eat. You want\n"
	.string "villains, look further up the money.$"

ParcelWetlands_PoacherB_Text_0:
# 287 "data/maps/ParcelWetlands/scripts.pory"
	.string "Mora: This patch is spoken for. Walk on.$"

ParcelWetlands_PoacherB_Text_1:
# 288 "data/maps/ParcelWetlands/scripts.pory"
	.string "Mora: Ugh. Whatever.$"

ParcelWetlands_PoacherB_Text_2:
# 289 "data/maps/ParcelWetlands/scripts.pory"
	.string "Mora: Spoken for by WHO? Mind your own\n"
	.string "business.$"
