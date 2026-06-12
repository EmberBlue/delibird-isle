ParcelStation_MapScripts::
# 25 "data/maps/ParcelStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelStation_OnTransition
	.byte 0


ParcelStation_OnTransition::
# 29 "data/maps/ParcelStation/scripts.pory"
	checktrainerflag TRAINER_SKALD_LOOKOUT
	goto_if 1, ParcelStation_OnTransition_2
# 33 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 34 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 127
# 35 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 36 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq ParcelStation_OnTransition_5
# 39 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_TEMP_5
ParcelStation_OnTransition_4:
	end

ParcelStation_OnTransition_2:
# 30 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_TEMP_5
	end

ParcelStation_OnTransition_5:
# 37 "data/maps/ParcelStation/scripts.pory"
	clearflag FLAG_TEMP_5
	goto ParcelStation_OnTransition_4


ParcelStation_Hale::
# 46 "data/maps/ParcelStation/scripts.pory"
	lock
# 47 "data/maps/ParcelStation/scripts.pory"
	faceplayer
# 48 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelStation_Hale_2
# 102 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_STATION_BRIEF, ParcelStation_Hale_5
# 107 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_20, MSGBOX_DEFAULT
# 108 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_21, MSGBOX_DEFAULT
# 109 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_22, MSGBOX_DEFAULT
# 110 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_23, MSGBOX_DEFAULT
# 111 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_24, MSGBOX_DEFAULT
# 112 "data/maps/ParcelStation/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 113 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_25, MSGBOX_DEFAULT
# 114 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_SKALDMERE_STATION_BRIEF
# 115 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_2:
# 49 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelStation_Hale_8
# 55 "data/maps/ParcelStation/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelStation_Hale_11
# 78 "data/maps/ParcelStation/scripts.pory"
	checktrainerflag TRAINER_SKALD_LOOKOUT
	goto_if 1, ParcelStation_Hale_14
# 85 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 86 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 127
# 87 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 88 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq ParcelStation_Hale_20
# 96 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_16, MSGBOX_DEFAULT
# 97 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_17, MSGBOX_DEFAULT
# 98 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_18, MSGBOX_DEFAULT
# 99 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_5:
# 103 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_19, MSGBOX_DEFAULT
# 104 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_8:
# 50 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_0, MSGBOX_DEFAULT
# 51 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_1, MSGBOX_DEFAULT
# 52 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_11:
# 56 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 57 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 1536
# 58 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 59 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ParcelStation_Hale_17
# 72 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_8, MSGBOX_DEFAULT
# 73 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_9, MSGBOX_DEFAULT
# 74 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_10, MSGBOX_DEFAULT
# 75 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_14:
# 79 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_11, MSGBOX_DEFAULT
# 80 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_12, MSGBOX_DEFAULT
# 81 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_13, MSGBOX_DEFAULT
# 82 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_17:
# 60 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_2, MSGBOX_DEFAULT
# 61 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_3, MSGBOX_DEFAULT
# 62 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_4, MSGBOX_DEFAULT
# 63 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_5, MSGBOX_DEFAULT
# 64 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_6, MSGBOX_DEFAULT
# 65 "data/maps/ParcelStation/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 66 "data/maps/ParcelStation/scripts.pory"
	giveitem ITEM_POTION, 5
# 67 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_7, MSGBOX_DEFAULT
# 68 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_SKALDMERE_FOREST_CERT
# 69 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_20:
# 89 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_14, MSGBOX_DEFAULT
# 90 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_15, MSGBOX_DEFAULT
# 91 "data/maps/ParcelStation/scripts.pory"
	clearflag FLAG_TEMP_5
# 92 "data/maps/ParcelStation/scripts.pory"
	addobject 14
# 93 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Rin::
# 120 "data/maps/ParcelStation/scripts.pory"
	lock
# 121 "data/maps/ParcelStation/scripts.pory"
	faceplayer
# 122 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelStation_Rin_2
# 131 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Rin_Text_2, MSGBOX_DEFAULT
# 132 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Rin_2:
# 123 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Rin_Text_0, MSGBOX_DEFAULT
# 125 "data/maps/ParcelStation/scripts.pory"
	closemessage
# 126 "data/maps/ParcelStation/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 127 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Rin_Text_1, MSGBOX_DEFAULT
# 128 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Ilex::
# 137 "data/maps/ParcelStation/scripts.pory"
	lock
# 138 "data/maps/ParcelStation/scripts.pory"
	faceplayer
# 139 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelStation_Ilex_2
# 144 "data/maps/ParcelStation/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelStation_Ilex_5
# 149 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelStation_Ilex_8
# 170 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_6, MSGBOX_DEFAULT
# 171 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_7, MSGBOX_DEFAULT
# 172 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_2:
# 140 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_0, MSGBOX_DEFAULT
# 141 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_5:
# 145 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_1, MSGBOX_DEFAULT
# 146 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_8:
# 150 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 3
# 151 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 152 "data/maps/ParcelStation/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 153 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 4
# 154 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 155 "data/maps/ParcelStation/scripts.pory"
	copyvar VAR_0x8006, VAR_RESULT
# 156 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 5
# 157 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 158 "data/maps/ParcelStation/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq ParcelStation_Ilex_13
ParcelStation_Ilex_10:
# 166 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_5, MSGBOX_DEFAULT
# 167 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_11:
# 159 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_2, MSGBOX_DEFAULT
# 160 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereClassifyMeadow
# 161 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_3, MSGBOX_DEFAULT
# 162 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_4, MSGBOX_DEFAULT
# 163 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_12:
# 158 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_Ilex_11
	goto ParcelStation_Ilex_10

ParcelStation_Ilex_13:
# 158 "data/maps/ParcelStation/scripts.pory"
	compare VAR_0x8006, 1
	goto_if_eq ParcelStation_Ilex_12
	goto ParcelStation_Ilex_10


ParcelStation_Lotad::
# 178 "data/maps/ParcelStation/scripts.pory"
	lock
# 179 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Lotad_Text_0, MSGBOX_DEFAULT
# 180 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Shroomish::
# 185 "data/maps/ParcelStation/scripts.pory"
	lock
# 186 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Shroomish_Text_0, MSGBOX_DEFAULT
# 187 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Seedot::
# 192 "data/maps/ParcelStation/scripts.pory"
	lock
# 193 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Seedot_Text_0, MSGBOX_DEFAULT
# 194 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Numel::
# 199 "data/maps/ParcelStation/scripts.pory"
	lock
# 200 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Numel_Text_0, MSGBOX_DEFAULT
# 201 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Electrike::
# 206 "data/maps/ParcelStation/scripts.pory"
	lock
# 207 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Electrike_Text_0, MSGBOX_DEFAULT
# 208 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Carvanha::
# 213 "data/maps/ParcelStation/scripts.pory"
	lock
# 214 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Carvanha_Text_0, MSGBOX_DEFAULT
# 215 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Doduo::
# 221 "data/maps/ParcelStation/scripts.pory"
	lock
# 222 "data/maps/ParcelStation/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_STATION_BRIEF, ParcelStation_Doduo_2
# 227 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_1, MSGBOX_DEFAULT
# 228 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_2, MSGBOX_DEFAULT
# 229 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_3, MSGBOX_DEFAULT
# 230 "data/maps/ParcelStation/scripts.pory"
	closemessage
# 231 "data/maps/ParcelStation/scripts.pory"
	delay 60
# 232 "data/maps/ParcelStation/scripts.pory"
	playse SE_BALL_THROW
# 233 "data/maps/ParcelStation/scripts.pory"
	delay 60
# 234 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_4, MSGBOX_DEFAULT
# 235 "data/maps/ParcelStation/scripts.pory"
	removeobject 10
# 236 "data/maps/ParcelStation/scripts.pory"
	givemon SPECIES_DODUO, 5
# 237 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 238 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_5, MSGBOX_DEFAULT
# 239 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_6, MSGBOX_DEFAULT
# 240 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_7, MSGBOX_DEFAULT
# 241 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_8, MSGBOX_DEFAULT
# 242 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_9, MSGBOX_DEFAULT
# 243 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Doduo_2:
# 223 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_0, MSGBOX_DEFAULT
# 224 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Sign::
# 248 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Sign_Text_0, MSGBOX_SIGN
	end


ParcelStation_Snare1::
# 254 "data/maps/ParcelStation/scripts.pory"
	lock
# 255 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 256 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 0
# 257 "data/maps/ParcelStation/scripts.pory"
	call ParcelStation_ClearSnare
# 258 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Snare2::
# 262 "data/maps/ParcelStation/scripts.pory"
	lock
# 263 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 264 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 1
# 265 "data/maps/ParcelStation/scripts.pory"
	call ParcelStation_ClearSnare
# 266 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Snare3::
# 270 "data/maps/ParcelStation/scripts.pory"
	lock
# 271 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 272 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 2
# 273 "data/maps/ParcelStation/scripts.pory"
	call ParcelStation_ClearSnare
# 274 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_ClearSnare::
# 278 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 279 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_ClearSnare_2
# 283 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_ClearSnare_Text_1, MSGBOX_DEFAULT
# 284 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
	return

ParcelStation_ClearSnare_2:
# 280 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_ClearSnare_Text_0, MSGBOX_DEFAULT
	return


ParcelStation_StakeBank::
# 289 "data/maps/ParcelStation/scripts.pory"
	lock
# 290 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 291 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 3
# 292 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 293 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_StakeBank_2
# 298 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeBank_Text_1, MSGBOX_SIGN
# 299 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
# 300 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_StakeBank_2:
# 294 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeBank_Text_0, MSGBOX_SIGN
# 295 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_StakeSubstrate::
# 304 "data/maps/ParcelStation/scripts.pory"
	lock
# 305 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 306 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 4
# 307 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 308 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_StakeSubstrate_2
# 313 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeSubstrate_Text_1, MSGBOX_SIGN
# 314 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
# 315 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_StakeSubstrate_2:
# 309 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeSubstrate_Text_0, MSGBOX_SIGN
# 310 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_StakeCanopy::
# 319 "data/maps/ParcelStation/scripts.pory"
	lock
# 320 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 321 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 5
# 322 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 323 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_StakeCanopy_2
# 328 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeCanopy_Text_1, MSGBOX_SIGN
# 329 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
# 330 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_StakeCanopy_2:
# 324 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeCanopy_Text_0, MSGBOX_SIGN
# 325 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_WaterSample::
# 334 "data/maps/ParcelStation/scripts.pory"
	lock
# 335 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 336 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 6
# 337 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 338 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_WaterSample_2
# 343 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_WaterSample_Text_1, MSGBOX_SIGN
# 344 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
# 345 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_WaterSample_2:
# 339 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_WaterSample_Text_0, MSGBOX_SIGN
# 340 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Lookout::
# 351 "data/maps/ParcelStation/scripts.pory"
	trainerbattle_single TRAINER_SKALD_LOOKOUT, ParcelStation_Lookout_Text_0, ParcelStation_Lookout_Text_1
# 354 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Lookout_Text_2, MSGBOX_DEFAULT
	end


ParcelStation_BirderTrainer::
# 360 "data/maps/ParcelStation/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BIRDER, ParcelStation_BirderTrainer_Text_0, ParcelStation_BirderTrainer_Text_1
# 363 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_BirderTrainer_Text_2, MSGBOX_DEFAULT
	end


ParcelStation_ItemBalls::
# 368 "data/maps/ParcelStation/scripts.pory"
	finditem ITEM_POKE_BALL, 5
	end


ParcelStation_Hale_Text_0:
# 50 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: You did well. Don't get attached\n"
	.string "to praise.\n"
	.string "Get attached to results.$"

ParcelStation_Hale_Text_1:
# 51 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: We're going west.\n"
	.string "The wetlands are sick.$"

ParcelStation_Hale_Text_2:
# 60 "data/maps/ParcelStation/scripts.pory"
	.string "Hale reads your corridor notes without\n"
	.string "comment. Rin watches Doduo. Ilex closes\l"
	.string "the ledger.$"

ParcelStation_Hale_Text_3:
# 61 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: You didn't intervene.$"

ParcelStation_Hale_Text_4:
# 62 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: You didn't agree.$"

ParcelStation_Hale_Text_5:
# 63 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Forest Certification complete.$"

ParcelStation_Hale_Text_6:
# 64 "data/maps/ParcelStation/scripts.pory"
	.string "No fanfare.\p"
	.string "Rin hands you a proper field kit: sample\n"
	.string "vials, a flow gauge, a better headlamp,\l"
	.string "spare red cloth.$"

ParcelStation_Hale_Text_7:
# 67 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex speaks last.\p"
	.string "Ilex: Now you'll start noticing how\n"
	.string "often damage wears the mask of\l"
	.string "improvement.$"

ParcelStation_Hale_Text_8:
# 72 "data/maps/ParcelStation/scripts.pory"
	.string "Hale slides a laminated sheet across\n"
	.string "the table.\p"
	.string "CORRIDOR AUDIT -- LOW PRIORITY\n"
	.string "Route: Old Service Cut / Hollowbend\l"
	.string "Spur\p"
	.string "Report Type: Verification\n"
	.string "Action Status: OBSERVE ONLY.$"

ParcelStation_Hale_Text_9:
# 73 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: This corridor used to connect two\n"
	.string "wetland pockets. Then someone improved\l"
	.string "a road.\p"
	.string "He doesn't say who.\n"
	.string "He doesn't have to.$"

ParcelStation_Hale_Text_10:
# 74 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: East of the wetlands landing,\n"
	.string "past the tree line.\n"
	.string "Walk it. Read it. Touch nothing.$"

ParcelStation_Hale_Text_11:
# 79 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Four tasks. Logged.\p"
	.string "No fanfare. That's how it should feel.$"

ParcelStation_Hale_Text_12:
# 80 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: North of here the forest gives\n"
	.string "out and the wetlands begin. There's a\l"
	.string "fishing landing on the backwater.\p"
	.string "People up there are angry, and somebody\n"
	.string "is feeding them a story.$"

ParcelStation_Hale_Text_13:
# 81 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Go listen. Document what you see.\n"
	.string "Don't argue with anyone's paycheck.$"

ParcelStation_Hale_Text_14:
# 89 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: A call just came in. West fringe,\n"
	.string "by the treeline.\p"
	.string "Someone's working a line down there who\n"
	.string "shouldn't be.$"

ParcelStation_Hale_Text_15:
# 90 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: You have a partner now.\n"
	.string "Go do more than stare.$"

ParcelStation_Hale_Text_16:
# 96 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Training. Three of our practice\n"
	.string "snares are out on the fringe--find\l"
	.string "them, clear them.$"

ParcelStation_Hale_Text_17:
# 97 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Ilex set three survey stakes:\n"
	.string "bank, substrate, canopy. Read each one.\p"
	.string "And Rin wants a water sample from the\n"
	.string "channel.$"

ParcelStation_Hale_Text_18:
# 98 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: No deadline.\n"
	.string "Do it properly.$"

ParcelStation_Hale_Text_19:
# 103 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: The meadow's east.\p"
	.string "You walk. You observe. You stop where\n"
	.string "you're compelled to stop.$"

ParcelStation_Hale_Text_20:
# 107 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: No welcome ceremony. We document\n"
	.string "ecological change, interrupt\l"
	.string "exploitation, coordinate restoration.\p"
	.string "Often without public support.$"

ParcelStation_Hale_Text_21:
# 108 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: We don't 'win.' We reduce harm. We\n"
	.string "keep corridors open.\n"
	.string "We stop the worst of it.$"

ParcelStation_Hale_Text_22:
# 109 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Your mentor worked with us.\p"
	.string "Whatever happened at that lab…\n"
	.string "wasn't random.$"

ParcelStation_Hale_Text_23:
# 110 "data/maps/ParcelStation/scripts.pory"
	.string "Hale hands you a heavier second pack:\n"
	.string "an empty Poké Ball case, a hand-marked\l"
	.string "folded map, and a laminated card\l"
	.string "stamped PROVISIONAL.\p"
	.string "On the card, a small printed strip of red\n"
	.string "cloth.$"

ParcelStation_Hale_Text_24:
# 111 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: This isn't ownership.\n"
	.string "It's responsibility.$"

ParcelStation_Hale_Text_25:
# 113 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: The Holding Meadow is east. The\n"
	.string "ones that wait are there.\p"
	.string "You don't pick. And they don't obey.$"

ParcelStation_Rin_Text_0:
# 123 "data/maps/ParcelStation/scripts.pory"
	.string "Rin: Rough out there. Set your partner\n"
	.string "down a minute-- there's a cot and a kit.$"

ParcelStation_Rin_Text_1:
# 127 "data/maps/ParcelStation/scripts.pory"
	.string "Rin: Better. Welcome to walking with\n"
	.string "consequences.$"

ParcelStation_Rin_Text_2:
# 131 "data/maps/ParcelStation/scripts.pory"
	.string "Rin doesn't look up. She is redirecting a\n"
	.string "channel's flow, one stone at a time.\p"
	.string "Rin: Nothing stays here permanently.\n"
	.string "That's the rule.$"

ParcelStation_Ilex_Text_0:
# 140 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Damage wears the mask of\n"
	.string "improvement.\p"
	.string "You'll see it everywhere now.\n"
	.string "I'm sorry.$"

ParcelStation_Ilex_Text_1:
# 145 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Low priority means nobody's\n"
	.string "watching.\p"
	.string "Which means we still have time.$"

ParcelStation_Ilex_Text_2:
# 159 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Bank, substrate, canopy.\n"
	.string "Let's see what you saw.$"

ParcelStation_Ilex_Text_3:
# 161 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Reference state. Whole.\p"
	.string "Keystone breeding, every guild present,\n"
	.string "nothing swarming, no damage.$"

ParcelStation_Ilex_Text_4:
# 162 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Remember exactly what this feels\n"
	.string "like.\p"
	.string "You will spend the rest of your life\n"
	.string "measuring places against it.$"

ParcelStation_Ilex_Text_5:
# 166 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Three stakes. Bank, substrate,\n"
	.string "canopy.\p"
	.string "Read all three, then come back.$"

ParcelStation_Ilex_Text_6:
# 170 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: They've all been displaced.\n"
	.string "But not broken.$"

ParcelStation_Ilex_Text_7:
# 171 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: They aren't rare. They aren't\n"
	.string "powerful.\p"
	.string "They are stable.$"

ParcelStation_Lotad_Text_0:
# 179 "data/maps/ParcelStation/scripts.pory"
	.string "The Lotad rests at the pool's shaded\n"
	.string "edge.\p"
	.string "It registers you, and goes back to\n"
	.string "being still.\n"
	.string "Calm.$"

ParcelStation_Shroomish_Text_0:
# 186 "data/maps/ParcelStation/scripts.pory"
	.string "The Shroomish recoils--spores pulsing\n"
	.string "once, twice--\p"
	.string "then settles. It doesn't move away.$"

ParcelStation_Seedot_Text_0:
# 193 "data/maps/ParcelStation/scripts.pory"
	.string "The Seedot freezes mid-hop between\n"
	.string "the roots.\p"
	.string "It is very committed to being a seed.$"

ParcelStation_Numel_Text_0:
# 200 "data/maps/ParcelStation/scripts.pory"
	.string "The Numel is curled by the dry corner of\n"
	.string "the meadow, radiating heat.\p"
	.string "The ground here is drier than it should\n"
	.string "be.\p"
	.string "You write that down before you realize\n"
	.string "you're doing it.$"

ParcelStation_Electrike_Text_0:
# 207 "data/maps/ParcelStation/scripts.pory"
	.string "The Electrike paces the perimeter,\n"
	.string "closer each pass.\p"
	.string "It never quite stops.$"

ParcelStation_Carvanha_Text_0:
# 214 "data/maps/ParcelStation/scripts.pory"
	.string "Something circles in the deeper\n"
	.string "channel.\p"
	.string "The Carvanha keeps its distance.\n"
	.string "So do you.$"

ParcelStation_Doduo_Text_0:
# 223 "data/maps/ParcelStation/scripts.pory"
	.string "A Doduo stands at the clearing's edge.\p"
	.string "One head watches you.\n"
	.string "The other watches the forest.$"

ParcelStation_Doduo_Text_1:
# 227 "data/maps/ParcelStation/scripts.pory"
	.string "The Doduo moves. One head stays on you;\n"
	.string "the other sweeps the treeline.\p"
	.string "You stop--\n"
	.string "because moving feels wrong.$"

ParcelStation_Doduo_Text_2:
# 228 "data/maps/ParcelStation/scripts.pory"
	.string "You kneel.\p"
	.string "Behind you, quiet footsteps: Rin sets a\n"
	.string "single Poké Ball on the ground between\l"
	.string "you, and steps back.$"

ParcelStation_Doduo_Text_3:
# 229 "data/maps/ParcelStation/scripts.pory"
	.string "Rin: If it chooses to enter,\n"
	.string "you're provisional partners.$"

ParcelStation_Doduo_Text_4:
# 234 "data/maps/ParcelStation/scripts.pory"
	.string "The Doduo studies you a moment longer.\p"
	.string "Then it nudges the ball.\p"
	.string "The ball closes with no shake.\n"
	.string "Just stillness.$"

ParcelStation_Doduo_Text_5:
# 238 "data/maps/ParcelStation/scripts.pory"
	.string "It feels warm.\p"
	.string "WREN received DODUO.$"

ParcelStation_Doduo_Text_6:
# 239 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: This doesn't make you a Ranger.$"

ParcelStation_Doduo_Text_7:
# 240 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: It makes you accountable.$"

ParcelStation_Doduo_Text_8:
# 241 "data/maps/ParcelStation/scripts.pory"
	.string "Rin: Welcome to walking with\n"
	.string "consequences.$"

ParcelStation_Doduo_Text_9:
# 242 "data/maps/ParcelStation/scripts.pory"
	.string "You leave the meadow not empowered--\n"
	.string "but entangled.\p"
	.string "And that is the point.$"

ParcelStation_Sign_Text_0:
# 248 "data/maps/ParcelStation/scripts.pory"
	.string "CLIMATE CORPS -- FIELD STATION\p"
	.string "The Holding Meadow is east.\n"
	.string "Nothing stays there permanently.$"

ParcelStation_ClearSnare_Text_0:
# 280 "data/maps/ParcelStation/scripts.pory"
	.string "The cleared snare site. The wire is in\n"
	.string "your pack.$"

ParcelStation_ClearSnare_Text_1:
# 283 "data/maps/ParcelStation/scripts.pory"
	.string "A practice snare, half-hidden in the\n"
	.string "grass--a wire loop on a bent stake.\p"
	.string "You unhook the trigger and wind the\n"
	.string "wire, the way the manual says.\n"
	.string "Slowly. No sudden pulls.$"

ParcelStation_StakeBank_Text_0:
# 294 "data/maps/ParcelStation/scripts.pory"
	.string "The bank stake. Already read.$"

ParcelStation_StakeBank_Text_1:
# 298 "data/maps/ParcelStation/scripts.pory"
	.string "A survey stake by the channel. A strip\n"
	.string "of red cloth, faded.\p"
	.string "BANK: edges soft but holding. Root mass\n"
	.string "intact.\n"
	.string "You write it down.$"

ParcelStation_StakeSubstrate_Text_0:
# 309 "data/maps/ParcelStation/scripts.pory"
	.string "The substrate stake. Already read.$"

ParcelStation_StakeSubstrate_Text_1:
# 313 "data/maps/ParcelStation/scripts.pory"
	.string "A survey stake in the open meadow. Red\n"
	.string "cloth, knotted twice.\p"
	.string "SUBSTRATE: mixed soil, no compaction,\n"
	.string "drains clean.\n"
	.string "You write it down.$"

ParcelStation_StakeCanopy_Text_0:
# 324 "data/maps/ParcelStation/scripts.pory"
	.string "The canopy stake. Already read.$"

ParcelStation_StakeCanopy_Text_1:
# 328 "data/maps/ParcelStation/scripts.pory"
	.string "A survey stake at the tree line. Red\n"
	.string "cloth, nearly new.\p"
	.string "CANOPY: broken sunlight, layered\n"
	.string "growth, edge gradual--not cut.\n"
	.string "You write it down.$"

ParcelStation_WaterSample_Text_0:
# 339 "data/maps/ParcelStation/scripts.pory"
	.string "The sampling point. Rin has your vial.$"

ParcelStation_WaterSample_Text_1:
# 343 "data/maps/ParcelStation/scripts.pory"
	.string "You kneel at the channel and draw a\n"
	.string "sample.\p"
	.string "The water runs clear--but colder than\n"
	.string "the air explains.\p"
	.string "Conditions matter. You label the vial\n"
	.string "and note the temperature.$"

ParcelStation_Lookout_Text_0:
# 352 "data/maps/ParcelStation/scripts.pory"
	.string "Garr: Station kid, huh? This line was\n"
	.string "here before your stakes were.\p"
	.string "Walk away.$"

ParcelStation_Lookout_Text_1:
# 353 "data/maps/ParcelStation/scripts.pory"
	.string "Garr: Tch. Practiced, are you.$"

ParcelStation_Lookout_Text_2:
# 354 "data/maps/ParcelStation/scripts.pory"
	.string "Garr coils his line, unhurried, and looks\n"
	.string "past you at the station.\p"
	.string "Garr: Write your little report.\n"
	.string "It changes nothing out here.$"

ParcelStation_BirderTrainer_Text_0:
# 361 "data/maps/ParcelStation/scripts.pory"
	.string "Neri: Shh--you'll flush the Taillow.\n"
	.string "…Too late. Fine, battle.$"

ParcelStation_BirderTrainer_Text_1:
# 362 "data/maps/ParcelStation/scripts.pory"
	.string "Neri: Hmph. The birds liked you better\n"
	.string "anyway.$"

ParcelStation_BirderTrainer_Text_2:
# 363 "data/maps/ParcelStation/scripts.pory"
	.string "Neri: Counting nests, if you must know.\p"
	.string "Fewer every spring. Nobody writes that\n"
	.string "down but me.$"
