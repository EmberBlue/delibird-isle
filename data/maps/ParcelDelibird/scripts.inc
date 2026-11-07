ParcelDelibird_MapScripts::
# 30 "data/maps/ParcelDelibird/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelDelibird_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelDelibird_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 31 "data/maps/ParcelDelibird/scripts.pory"
	map_script_2 VAR_SKALD_EPILOGUE, 5, ParcelDelibird_Epilogue
# 32 "data/maps/ParcelDelibird/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelDelibird_SetMapVar
# 33 "data/maps/ParcelDelibird/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ParcelDelibird_FirstEntry
	.2byte 0


ParcelDelibird_SetMapVar::
# 38 "data/maps/ParcelDelibird/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


ParcelDelibird_FirstEntry::
# 44 "data/maps/ParcelDelibird/scripts.pory"
	setvar VAR_TEMP_1, 1
# 45 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_ARRIVAL, ParcelDelibird_FirstEntry_2
# 48 "data/maps/ParcelDelibird/scripts.pory"
	lockall
# 49 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FirstEntry_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FirstEntry_Text_1, MSGBOX_DEFAULT
# 51 "data/maps/ParcelDelibird/scripts.pory"
	bufferpartymonnick 0, 0
# 52 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FirstEntry_Text_2, MSGBOX_DEFAULT
# 53 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_ARRIVAL
# 54 "data/maps/ParcelDelibird/scripts.pory"
	releaseall
	end

ParcelDelibird_FirstEntry_2:
	end


ParcelDelibird_Elder::
# 62 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 63 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 64 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_Elder_2
# 71 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibird_Elder_5
# 76 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_DELIVERED, ParcelDelibird_Elder_8
# 88 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_PARCEL, ParcelDelibird_Elder_11
# 93 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_10, MSGBOX_DEFAULT
# 94 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_11, MSGBOX_DEFAULT
# 95 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_12, MSGBOX_DEFAULT
# 96 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_PARCEL
# 97 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_13, MSGBOX_DEFAULT
# 98 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_2:
# 65 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_0, MSGBOX_DEFAULT
# 66 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_1, MSGBOX_DEFAULT
# 67 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_2, MSGBOX_DEFAULT
# 68 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_5:
# 72 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_3, MSGBOX_DEFAULT
# 73 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_8:
# 77 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_4, MSGBOX_DEFAULT
# 78 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_5, MSGBOX_DEFAULT
# 79 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_6, MSGBOX_DEFAULT
# 80 "data/maps/ParcelDelibird/scripts.pory"
	playse SE_PIN
# 81 "data/maps/ParcelDelibird/scripts.pory"
	givemon SPECIES_DELIBIRD, 22
# 82 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_GIFT
# 83 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_7, MSGBOX_DEFAULT
# 84 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_8, MSGBOX_DEFAULT
# 85 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_11:
# 89 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_9, MSGBOX_DEFAULT
# 90 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Fisher::
# 104 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 105 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 106 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_DELIVERED, ParcelDelibird_Fisher_2
# 111 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_PARCEL, ParcelDelibird_Fisher_5
# 120 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Fisher_Text_4, MSGBOX_DEFAULT
# 121 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Fisher_2:
# 107 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Fisher_Text_0, MSGBOX_DEFAULT
# 108 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Fisher_5:
# 112 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Fisher_Text_1, MSGBOX_DEFAULT
# 113 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Fisher_Text_2, MSGBOX_DEFAULT
# 114 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_HYPER_POTION
# 115 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_DELIVERED
# 116 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Fisher_Text_3, MSGBOX_DEFAULT
# 117 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Giver::
# 127 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 128 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 129 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIVER, ParcelDelibird_Giver_2
# 134 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_1, MSGBOX_DEFAULT
# 135 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_NEVER_MELT_ICE
# 136 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_GIVER
# 137 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_2, MSGBOX_DEFAULT
# 138 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Giver_2:
# 130 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_0, MSGBOX_DEFAULT
# 131 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Relief::
# 144 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 145 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 146 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_RELIEF, ParcelDelibird_Relief_2
# 151 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_1, MSGBOX_DEFAULT
# 152 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_2, MSGBOX_DEFAULT
# 153 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_RELIEF
# 154 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_3, MSGBOX_DEFAULT
# 155 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Relief_2:
# 147 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_0, MSGBOX_DEFAULT
# 148 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Delibird::
# 161 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 162 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Delibird_Text_0, MSGBOX_DEFAULT
# 163 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_SlumpSign::
# 169 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SlumpSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_SummitSign::
# 174 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SummitSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_BannerSign::
# 179 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_BannerSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_ReturnFerry::
# 185 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 186 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 187 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_ReturnFerry_Text_0, MSGBOX_YESNO
# 188 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_ReturnFerry_2
# 193 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 194 "data/maps/ParcelDelibird/scripts.pory"
	playse SE_SHIP
# 195 "data/maps/ParcelDelibird/scripts.pory"
	delay 40
# 196 "data/maps/ParcelDelibird/scripts.pory"
	warp MAP_PARCEL_ISLE, 15, 31
# 197 "data/maps/ParcelDelibird/scripts.pory"
	waitstate
	end

ParcelDelibird_ReturnFerry_2:
# 189 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_ReturnFerry_Text_1, MSGBOX_DEFAULT
# 190 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_ItemA::
# 202 "data/maps/ParcelDelibird/scripts.pory"
	finditem ITEM_NUGGET
	end


ParcelDelibird_ItemB::
# 206 "data/maps/ParcelDelibird/scripts.pory"
	finditem ITEM_STAR_PIECE
	end


ParcelDelibird_CaveMouth::
# 212 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 213 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 214 "data/maps/ParcelDelibird/scripts.pory"
	checkpartymove MOVE_FLASH
# 215 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq ParcelDelibird_CaveMouth_2
# 220 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_CaveMouth_Text_1, MSGBOX_YESNO
# 221 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_CaveMouth_5
# 226 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 227 "data/maps/ParcelDelibird/scripts.pory"
	warp MAP_PARCEL_CAVERN, 16, 10
# 228 "data/maps/ParcelDelibird/scripts.pory"
	waitstate
	end

ParcelDelibird_CaveMouth_2:
# 216 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_CaveMouth_Text_0, MSGBOX_DEFAULT
# 217 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_CaveMouth_5:
# 222 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_CaveMouth_Text_2, MSGBOX_DEFAULT
# 223 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer::
# 234 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_REVELER, ParcelDelibird_RevelerTrainer_Text_0, ParcelDelibird_RevelerTrainer_Text_1, ParcelDelibird_RevelerTrainer_FirstWin
# 238 "data/maps/ParcelDelibird/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 239 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibird_RevelerTrainer_3
ParcelDelibird_RevelerTrainer_1:
# 242 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibird_RevelerTrainer_8
ParcelDelibird_RevelerTrainer_6:
# 245 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibird_RevelerTrainer_13
ParcelDelibird_RevelerTrainer_11:
# 248 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibird_RevelerTrainer_18
ParcelDelibird_RevelerTrainer_16:
# 251 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibird_RevelerTrainer_2:
# 240 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_RevelerTrainer_R2
	goto ParcelDelibird_RevelerTrainer_1

ParcelDelibird_RevelerTrainer_3:
# 239 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_REVELER_R2
	goto_if 0, ParcelDelibird_RevelerTrainer_2
	goto ParcelDelibird_RevelerTrainer_1

ParcelDelibird_RevelerTrainer_7:
# 243 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_RevelerTrainer_R3
	goto ParcelDelibird_RevelerTrainer_6

ParcelDelibird_RevelerTrainer_8:
# 242 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_REVELER_R3
	goto_if 0, ParcelDelibird_RevelerTrainer_7
	goto ParcelDelibird_RevelerTrainer_6

ParcelDelibird_RevelerTrainer_12:
# 246 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_RevelerTrainer_R4
	goto ParcelDelibird_RevelerTrainer_11

ParcelDelibird_RevelerTrainer_13:
# 245 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_REVELER_R4
	goto_if 0, ParcelDelibird_RevelerTrainer_12
	goto ParcelDelibird_RevelerTrainer_11

ParcelDelibird_RevelerTrainer_17:
# 249 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_RevelerTrainer_R5
	goto ParcelDelibird_RevelerTrainer_16

ParcelDelibird_RevelerTrainer_18:
# 248 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_REVELER_R5
	goto_if 0, ParcelDelibird_RevelerTrainer_17
	goto ParcelDelibird_RevelerTrainer_16


ParcelDelibird_RevelerTrainer_FirstWin::
# 255 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_Text_2, MSGBOX_DEFAULT
# 256 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer_R2::
# 260 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 261 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 262 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_0, MSGBOX_YESNO
# 263 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_RevelerTrainer_R2_2
# 268 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_REVELER_R2, ParcelDelibird_RevelerTrainer_R2_Text_2
# 269 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_3, MSGBOX_DEFAULT
# 270 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_RevelerTrainer_R2_2:
# 264 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_1, MSGBOX_DEFAULT
# 265 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer_R3::
# 274 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 275 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 276 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R3_Text_0, MSGBOX_YESNO
# 277 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_RevelerTrainer_R3_2
# 282 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_REVELER_R3, ParcelDelibird_RevelerTrainer_R2_Text_2
# 283 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R3_Text_1, MSGBOX_DEFAULT
# 284 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_RevelerTrainer_R3_2:
# 278 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_1, MSGBOX_DEFAULT
# 279 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer_R4::
# 288 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 289 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 290 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R4_Text_0, MSGBOX_YESNO
# 291 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_RevelerTrainer_R4_2
# 296 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_REVELER_R4, ParcelDelibird_RevelerTrainer_R2_Text_2
# 297 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R4_Text_1, MSGBOX_DEFAULT
# 298 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_RevelerTrainer_R4_2:
# 292 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_1, MSGBOX_DEFAULT
# 293 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer_R5::
# 302 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 303 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 304 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R5_Text_0, MSGBOX_YESNO
# 305 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_RevelerTrainer_R5_2
# 310 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_REVELER_R5, ParcelDelibird_RevelerTrainer_R5_Text_1
# 311 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R5_Text_2, MSGBOX_DEFAULT
# 312 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_RevelerTrainer_R5_2:
# 306 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_1, MSGBOX_DEFAULT
# 307 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_GymIlex::
# 324 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelDelibird_GymIlex_2
ParcelDelibird_GymIlex_1:
# 327 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GYM8, ParcelDelibird_GymIlex_Text_0, ParcelDelibird_GymIlex_Text_1, ParcelDelibird_GymIlex_Defeated
# 332 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 333 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 334 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_2, MSGBOX_DEFAULT
# 335 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_GymIlex_2:
# 325 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_GymIlex_Rematch
	goto ParcelDelibird_GymIlex_1


ParcelDelibird_GymIlex_Defeated::
# 340 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_BADGE08_GET
# 341 "data/maps/ParcelDelibird/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 342 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Defeated_Text_0, MSGBOX_DEFAULT
# 343 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_HM07
# 344 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Defeated_Text_1, MSGBOX_DEFAULT
# 345 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_SquareKeeper::
# 354 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 355 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 356 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_DEL_GIFT_SQUARE, ParcelDelibird_SquareKeeper_2
# 361 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_1, MSGBOX_DEFAULT
# 362 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_2, MSGBOX_DEFAULT
# 363 "data/maps/ParcelDelibird/scripts.pory"
	random 4
# 364 "data/maps/ParcelDelibird/scripts.pory"
	switch VAR_RESULT
# 365 "data/maps/ParcelDelibird/scripts.pory"
	case 0, ParcelDelibird_SquareKeeper_6
# 367 "data/maps/ParcelDelibird/scripts.pory"
	case 1, ParcelDelibird_SquareKeeper_7
# 369 "data/maps/ParcelDelibird/scripts.pory"
	case 2, ParcelDelibird_SquareKeeper_8
# 371 "data/maps/ParcelDelibird/scripts.pory"
	case 3, ParcelDelibird_SquareKeeper_9
ParcelDelibird_SquareKeeper_4:
# 374 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_DEL_GIFT_SQUARE
# 375 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_3, MSGBOX_YESNO
# 376 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelDelibird_SquareKeeper_11
# 388 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_6, MSGBOX_DEFAULT
# 389 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_SquareKeeper_2:
# 357 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_0, MSGBOX_DEFAULT
# 358 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_SquareKeeper_6:
# 366 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_LUCKY_EGG
	goto ParcelDelibird_SquareKeeper_4

ParcelDelibird_SquareKeeper_7:
# 368 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_STAR_PIECE
	goto ParcelDelibird_SquareKeeper_4

ParcelDelibird_SquareKeeper_8:
# 370 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_PP_UP
	goto ParcelDelibird_SquareKeeper_4

ParcelDelibird_SquareKeeper_9:
# 372 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 3
	goto ParcelDelibird_SquareKeeper_4

ParcelDelibird_SquareKeeper_11:
# 377 "data/maps/ParcelDelibird/scripts.pory"
	checkitem ITEM_POTION
# 378 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelDelibird_SquareKeeper_14
# 384 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_5, MSGBOX_DEFAULT
# 385 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_SquareKeeper_14:
# 379 "data/maps/ParcelDelibird/scripts.pory"
	removeitem ITEM_POTION
# 380 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_4, MSGBOX_DEFAULT
# 381 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_WarmingHut::
# 395 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 396 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 397 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_WarmingHut_Text_0, MSGBOX_DEFAULT
# 398 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_WarmingHut_Text_1, MSGBOX_DEFAULT
# 399 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 400 "data/maps/ParcelDelibird/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 401 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_WarmingHut_Text_2, MSGBOX_DEFAULT
# 402 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Stringer::
# 408 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 409 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 410 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Stringer_Text_0, MSGBOX_DEFAULT
# 411 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Stringer_Text_1, MSGBOX_DEFAULT
# 412 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Blankets::
# 418 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 419 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 420 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Blankets_Text_0, MSGBOX_DEFAULT
# 421 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Blankets_Text_1, MSGBOX_DEFAULT
# 422 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Hakon::
# 428 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_DEL_HAKON, ParcelDelibird_T_Hakon_Text_0, ParcelDelibird_T_Hakon_Text_1, ParcelDelibird_T_Hakon_FirstWin
# 432 "data/maps/ParcelDelibird/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 433 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibird_T_Hakon_3
ParcelDelibird_T_Hakon_1:
# 436 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibird_T_Hakon_8
ParcelDelibird_T_Hakon_6:
# 439 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibird_T_Hakon_13
ParcelDelibird_T_Hakon_11:
# 442 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibird_T_Hakon_18
ParcelDelibird_T_Hakon_16:
# 445 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibird_T_Hakon_2:
# 434 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Hakon_R2
	goto ParcelDelibird_T_Hakon_1

ParcelDelibird_T_Hakon_3:
# 433 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_HAKON_R2
	goto_if 0, ParcelDelibird_T_Hakon_2
	goto ParcelDelibird_T_Hakon_1

ParcelDelibird_T_Hakon_7:
# 437 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Hakon_R3
	goto ParcelDelibird_T_Hakon_6

ParcelDelibird_T_Hakon_8:
# 436 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_HAKON_R3
	goto_if 0, ParcelDelibird_T_Hakon_7
	goto ParcelDelibird_T_Hakon_6

ParcelDelibird_T_Hakon_12:
# 440 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Hakon_R4
	goto ParcelDelibird_T_Hakon_11

ParcelDelibird_T_Hakon_13:
# 439 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_HAKON_R4
	goto_if 0, ParcelDelibird_T_Hakon_12
	goto ParcelDelibird_T_Hakon_11

ParcelDelibird_T_Hakon_17:
# 443 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Hakon_R5
	goto ParcelDelibird_T_Hakon_16

ParcelDelibird_T_Hakon_18:
# 442 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_HAKON_R5
	goto_if 0, ParcelDelibird_T_Hakon_17
	goto ParcelDelibird_T_Hakon_16


ParcelDelibird_T_Hakon_FirstWin::
# 449 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_Text_2, MSGBOX_DEFAULT
# 450 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Hakon_R2::
# 454 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 455 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 456 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_0, MSGBOX_YESNO
# 457 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Hakon_R2_2
# 462 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_HAKON_R2, ParcelDelibird_T_Hakon_R2_Text_2
# 463 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_3, MSGBOX_DEFAULT
# 464 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Hakon_R2_2:
# 458 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_1, MSGBOX_DEFAULT
# 459 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Hakon_R3::
# 468 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 469 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 470 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R3_Text_0, MSGBOX_YESNO
# 471 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Hakon_R3_2
# 476 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_HAKON_R3, ParcelDelibird_T_Hakon_R2_Text_2
# 477 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R3_Text_1, MSGBOX_DEFAULT
# 478 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Hakon_R3_2:
# 472 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_1, MSGBOX_DEFAULT
# 473 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Hakon_R4::
# 482 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 483 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 484 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R4_Text_0, MSGBOX_YESNO
# 485 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Hakon_R4_2
# 490 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_HAKON_R4, ParcelDelibird_T_Hakon_R4_Text_1
# 491 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R4_Text_2, MSGBOX_DEFAULT
# 492 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Hakon_R4_2:
# 486 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_1, MSGBOX_DEFAULT
# 487 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Hakon_R5::
# 496 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 497 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 498 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R5_Text_0, MSGBOX_YESNO
# 499 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Hakon_R5_2
# 504 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_HAKON_R5, ParcelDelibird_T_Hakon_R5_Text_1
# 505 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R5_Text_2, MSGBOX_DEFAULT
# 506 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Hakon_R5_2:
# 500 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_1, MSGBOX_DEFAULT
# 501 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Bjarne::
# 510 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_DEL_BJARNE, ParcelDelibird_T_Bjarne_Text_0, ParcelDelibird_T_Bjarne_Text_1, ParcelDelibird_T_Bjarne_FirstWin
# 514 "data/maps/ParcelDelibird/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 515 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibird_T_Bjarne_3
ParcelDelibird_T_Bjarne_1:
# 518 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibird_T_Bjarne_8
ParcelDelibird_T_Bjarne_6:
# 521 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibird_T_Bjarne_13
ParcelDelibird_T_Bjarne_11:
# 524 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibird_T_Bjarne_18
ParcelDelibird_T_Bjarne_16:
# 527 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibird_T_Bjarne_2:
# 516 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Bjarne_R2
	goto ParcelDelibird_T_Bjarne_1

ParcelDelibird_T_Bjarne_3:
# 515 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_BJARNE_R2
	goto_if 0, ParcelDelibird_T_Bjarne_2
	goto ParcelDelibird_T_Bjarne_1

ParcelDelibird_T_Bjarne_7:
# 519 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Bjarne_R3
	goto ParcelDelibird_T_Bjarne_6

ParcelDelibird_T_Bjarne_8:
# 518 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_BJARNE_R3
	goto_if 0, ParcelDelibird_T_Bjarne_7
	goto ParcelDelibird_T_Bjarne_6

ParcelDelibird_T_Bjarne_12:
# 522 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Bjarne_R4
	goto ParcelDelibird_T_Bjarne_11

ParcelDelibird_T_Bjarne_13:
# 521 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_BJARNE_R4
	goto_if 0, ParcelDelibird_T_Bjarne_12
	goto ParcelDelibird_T_Bjarne_11

ParcelDelibird_T_Bjarne_17:
# 525 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Bjarne_R5
	goto ParcelDelibird_T_Bjarne_16

ParcelDelibird_T_Bjarne_18:
# 524 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_BJARNE_R5
	goto_if 0, ParcelDelibird_T_Bjarne_17
	goto ParcelDelibird_T_Bjarne_16


ParcelDelibird_T_Bjarne_FirstWin::
# 531 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_Text_2, MSGBOX_DEFAULT
# 532 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Bjarne_R2::
# 536 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 537 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 538 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_0, MSGBOX_YESNO
# 539 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Bjarne_R2_2
# 544 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_BJARNE_R2, ParcelDelibird_T_Bjarne_R2_Text_2
# 545 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_3, MSGBOX_DEFAULT
# 546 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Bjarne_R2_2:
# 540 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_1, MSGBOX_DEFAULT
# 541 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Bjarne_R3::
# 550 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 551 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 552 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R3_Text_0, MSGBOX_YESNO
# 553 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Bjarne_R3_2
# 558 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_BJARNE_R3, ParcelDelibird_T_Bjarne_R3_Text_1
# 559 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R3_Text_2, MSGBOX_DEFAULT
# 560 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Bjarne_R3_2:
# 554 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_1, MSGBOX_DEFAULT
# 555 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Bjarne_R4::
# 564 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 565 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 566 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R4_Text_0, MSGBOX_YESNO
# 567 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Bjarne_R4_2
# 572 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_BJARNE_R4, ParcelDelibird_T_Bjarne_R4_Text_1
# 573 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R4_Text_2, MSGBOX_DEFAULT
# 574 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Bjarne_R4_2:
# 568 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_1, MSGBOX_DEFAULT
# 569 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Bjarne_R5::
# 578 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 579 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 580 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R5_Text_0, MSGBOX_YESNO
# 581 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Bjarne_R5_2
# 586 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_BJARNE_R5, ParcelDelibird_T_Bjarne_R5_Text_1
# 587 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R5_Text_2, MSGBOX_DEFAULT
# 588 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Bjarne_R5_2:
# 582 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_1, MSGBOX_DEFAULT
# 583 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Frida::
# 592 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_DEL_FRIDA, ParcelDelibird_T_Frida_Text_0, ParcelDelibird_T_Frida_Text_1, ParcelDelibird_T_Frida_FirstWin
# 596 "data/maps/ParcelDelibird/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 597 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibird_T_Frida_3
ParcelDelibird_T_Frida_1:
# 600 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibird_T_Frida_8
ParcelDelibird_T_Frida_6:
# 603 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibird_T_Frida_13
ParcelDelibird_T_Frida_11:
# 606 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibird_T_Frida_18
ParcelDelibird_T_Frida_16:
# 609 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibird_T_Frida_2:
# 598 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Frida_R2
	goto ParcelDelibird_T_Frida_1

ParcelDelibird_T_Frida_3:
# 597 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_FRIDA_R2
	goto_if 0, ParcelDelibird_T_Frida_2
	goto ParcelDelibird_T_Frida_1

ParcelDelibird_T_Frida_7:
# 601 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Frida_R3
	goto ParcelDelibird_T_Frida_6

ParcelDelibird_T_Frida_8:
# 600 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_FRIDA_R3
	goto_if 0, ParcelDelibird_T_Frida_7
	goto ParcelDelibird_T_Frida_6

ParcelDelibird_T_Frida_12:
# 604 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Frida_R4
	goto ParcelDelibird_T_Frida_11

ParcelDelibird_T_Frida_13:
# 603 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_FRIDA_R4
	goto_if 0, ParcelDelibird_T_Frida_12
	goto ParcelDelibird_T_Frida_11

ParcelDelibird_T_Frida_17:
# 607 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Frida_R5
	goto ParcelDelibird_T_Frida_16

ParcelDelibird_T_Frida_18:
# 606 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_FRIDA_R5
	goto_if 0, ParcelDelibird_T_Frida_17
	goto ParcelDelibird_T_Frida_16


ParcelDelibird_T_Frida_FirstWin::
# 613 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_Text_2, MSGBOX_DEFAULT
# 614 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Frida_R2::
# 618 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 619 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 620 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_0, MSGBOX_YESNO
# 621 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Frida_R2_2
# 626 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_FRIDA_R2, ParcelDelibird_T_Frida_R2_Text_2
# 627 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_3, MSGBOX_DEFAULT
# 628 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Frida_R2_2:
# 622 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_1, MSGBOX_DEFAULT
# 623 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Frida_R3::
# 632 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 633 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 634 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R3_Text_0, MSGBOX_YESNO
# 635 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Frida_R3_2
# 640 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_FRIDA_R3, ParcelDelibird_T_Frida_R3_Text_1
# 641 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R3_Text_2, MSGBOX_DEFAULT
# 642 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Frida_R3_2:
# 636 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_1, MSGBOX_DEFAULT
# 637 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Frida_R4::
# 646 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 647 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 648 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R4_Text_0, MSGBOX_YESNO
# 649 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Frida_R4_2
# 654 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_FRIDA_R4, ParcelDelibird_T_Frida_R4_Text_1
# 655 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R4_Text_2, MSGBOX_DEFAULT
# 656 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Frida_R4_2:
# 650 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_1, MSGBOX_DEFAULT
# 651 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Frida_R5::
# 660 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 661 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 662 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R5_Text_0, MSGBOX_YESNO
# 663 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Frida_R5_2
# 668 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_FRIDA_R5, ParcelDelibird_T_Frida_R5_Text_1
# 669 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R5_Text_2, MSGBOX_DEFAULT
# 670 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Frida_R5_2:
# 664 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_1, MSGBOX_DEFAULT
# 665 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Erlend::
# 674 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_DEL_ERLEND, ParcelDelibird_T_Erlend_Text_0, ParcelDelibird_T_Erlend_Text_1, ParcelDelibird_T_Erlend_FirstWin
# 678 "data/maps/ParcelDelibird/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 679 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibird_T_Erlend_3
ParcelDelibird_T_Erlend_1:
# 682 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibird_T_Erlend_8
ParcelDelibird_T_Erlend_6:
# 685 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibird_T_Erlend_13
ParcelDelibird_T_Erlend_11:
# 688 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibird_T_Erlend_18
ParcelDelibird_T_Erlend_16:
# 691 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibird_T_Erlend_2:
# 680 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Erlend_R2
	goto ParcelDelibird_T_Erlend_1

ParcelDelibird_T_Erlend_3:
# 679 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_ERLEND_R2
	goto_if 0, ParcelDelibird_T_Erlend_2
	goto ParcelDelibird_T_Erlend_1

ParcelDelibird_T_Erlend_7:
# 683 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Erlend_R3
	goto ParcelDelibird_T_Erlend_6

ParcelDelibird_T_Erlend_8:
# 682 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_ERLEND_R3
	goto_if 0, ParcelDelibird_T_Erlend_7
	goto ParcelDelibird_T_Erlend_6

ParcelDelibird_T_Erlend_12:
# 686 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Erlend_R4
	goto ParcelDelibird_T_Erlend_11

ParcelDelibird_T_Erlend_13:
# 685 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_ERLEND_R4
	goto_if 0, ParcelDelibird_T_Erlend_12
	goto ParcelDelibird_T_Erlend_11

ParcelDelibird_T_Erlend_17:
# 689 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Erlend_R5
	goto ParcelDelibird_T_Erlend_16

ParcelDelibird_T_Erlend_18:
# 688 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_ERLEND_R5
	goto_if 0, ParcelDelibird_T_Erlend_17
	goto ParcelDelibird_T_Erlend_16


ParcelDelibird_T_Erlend_FirstWin::
# 695 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_Text_2, MSGBOX_DEFAULT
# 696 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Erlend_R2::
# 700 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 701 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 702 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_0, MSGBOX_YESNO
# 703 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Erlend_R2_2
# 708 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_ERLEND_R2, ParcelDelibird_T_Erlend_R2_Text_2
# 709 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_3, MSGBOX_DEFAULT
# 710 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Erlend_R2_2:
# 704 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_1, MSGBOX_DEFAULT
# 705 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Erlend_R3::
# 714 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 715 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 716 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R3_Text_0, MSGBOX_YESNO
# 717 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Erlend_R3_2
# 722 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_ERLEND_R3, ParcelDelibird_T_Erlend_R3_Text_1
# 723 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R3_Text_2, MSGBOX_DEFAULT
# 724 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Erlend_R3_2:
# 718 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_1, MSGBOX_DEFAULT
# 719 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Erlend_R4::
# 728 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 729 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 730 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R4_Text_0, MSGBOX_YESNO
# 731 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Erlend_R4_2
# 736 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_ERLEND_R4, ParcelDelibird_T_Erlend_R3_Text_1
# 737 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R4_Text_1, MSGBOX_DEFAULT
# 738 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Erlend_R4_2:
# 732 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_1, MSGBOX_DEFAULT
# 733 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Erlend_R5::
# 742 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 743 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 744 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R5_Text_0, MSGBOX_YESNO
# 745 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Erlend_R5_2
# 750 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_ERLEND_R5, ParcelDelibird_T_Erlend_R3_Text_1
# 751 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R5_Text_1, MSGBOX_DEFAULT
# 752 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Erlend_R5_2:
# 746 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_1, MSGBOX_DEFAULT
# 747 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Epilogue::
# 758 "data/maps/ParcelDelibird/scripts.pory"
	lockall
# 759 "data/maps/ParcelDelibird/scripts.pory"
	delay 20
# 760 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Epilogue_Text_0, MSGBOX_DEFAULT
# 761 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 762 "data/maps/ParcelDelibird/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 6
# 763 "data/maps/ParcelDelibird/scripts.pory"
	warp MAP_PARCEL_MARSH, 19, 9
# 764 "data/maps/ParcelDelibird/scripts.pory"
	waitstate
	end


ParcelDelibird_GymIlex_Rematch::
# 770 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 771 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 772 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Rematch_Text_0, MSGBOX_YESNO
# 773 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_GymIlex_Rematch_2
# 778 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM8_R, ParcelDelibird_GymIlex_Rematch_Text_2
# 779 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Rematch_Text_3, MSGBOX_DEFAULT
# 780 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_GymIlex_Rematch_2:
# 774 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Rematch_Text_1, MSGBOX_DEFAULT
# 775 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_FirstEntry_Text_0:
# 49 "data/maps/ParcelDelibird/scripts.pory"
	.string "The boat noses in and the island takes\n"
	.string "you by surprise. String lights, cabins\l"
	.string "the colours of sweets, woodsmoke and\l"
	.string "something baking.\p"
	.string "People wave. They don't know you, and\n"
	.string "they wave anyway.$"

ParcelDelibird_FirstEntry_Text_1:
# 50 "data/maps/ParcelDelibird/scripts.pory"
	.string "It is the warmest place you have set\n"
	.string "foot in since you started keeping the\l"
	.string "notebook.\p"
	.string "You know, now, what the warmth is\n"
	.string "standing on. You climbed it. You\l"
	.string "couldn't fix it.$"

ParcelDelibird_FirstEntry_Text_2:
# 52 "data/maps/ParcelDelibird/scripts.pory"
	.string "A banner over the square snaps in the\n"
	.string "wind:\n"
	.string "DELIBIRD ISLE MIDWINTER -- ALL\l"
	.string "WELCOME.\p"
	.string "Smaller, underneath: in partnership\n"
	.string "with the Mereholt Foundation.\p"
	.string "{STR_VAR_1} leans into your leg. You\n"
	.string "go up into the lights.$"

ParcelDelibird_Elder_Text_0:
# 65 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Word reached us. Word always\n"
	.string "reaches an island last, and stays\l"
	.string "longest.\p"
	.string "You wrote it down and you didn't soften\n"
	.string "it. Herself in it too, I hear. That took\l"
	.string "something out of you, I expect.\p"
	.string "It ought to. The true ones cost.$"

ParcelDelibird_Elder_Text_1:
# 66 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: The channel won't refreeze for\n"
	.string "it, child. The winters don't read filings.\p"
	.string "But the lights are going up early this\n"
	.string "year -- you'll have seen. That's not us\l"
	.string "pretending.\p"
	.string "That's us carrying it.$"

ParcelDelibird_Elder_Text_2:
# 67 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: The festival was never about the\n"
	.string "cold, whatever the name says. It was\l"
	.string "about each other, in the cold.\p"
	.string "That part keeps. That part we don't\n"
	.string "need anyone's permission to keep.$"

ParcelDelibird_Elder_Text_3:
# 72 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: The young ones say give until\n"
	.string "it's a habit, so the giving's already\l"
	.string "done when the storm comes and there's\l"
	.string "no time to decide.\p"
	.string "You've got the habit now. I can see it\n"
	.string "on the bird.$"

ParcelDelibird_Elder_Text_4:
# 77 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Tomas got his blanket, then.\n"
	.string "Bless you.\p"
	.string "Come here. There's a thing we do for\n"
	.string "someone who carries for a stranger\l"
	.string "without being asked twice.$"

ParcelDelibird_Elder_Text_5:
# 78 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: We raise Delibird here. Have for\n"
	.string "longer than the records. In a hard\l"
	.string "winter they carry food cabin to cabin\l"
	.string "-- they find the door that needs it.\l"
	.string "Nobody trained that into them. It's\l"
	.string "just what they are.$"

ParcelDelibird_Elder_Text_6:
# 79 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: This one took to you off the\n"
	.string "boat. Take it. It'll deliver for you the\l"
	.string "way it delivered for us.\p"
	.string "The storms are worse now. We'll need\n"
	.string "more of that, not less.$"

ParcelDelibird_Elder_Text_7:
# 83 "data/maps/ParcelDelibird/scripts.pory"
	.string "WREN received DELIBIRD.\p"
	.string "It shifts its little sack to one side\n"
	.string "and looks at you, ready to be useful.$"

ParcelDelibird_Elder_Text_8:
# 84 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder, quieter:\p"
	.string "Elder: There's a paper from the\n"
	.string "Foundation says we should think about\l"
	.string "relocating the festival. Somewhere it\l"
	.string "won't flood.\p"
	.string "We held it here anyway. While there's a\n"
	.string "here.\p"
	.string "Tell your people we said thank you, and\n"
	.string "no.$"

ParcelDelibird_Elder_Text_9:
# 89 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Old Tomas keeps to the south\n"
	.string "shore, by the water. The blanket's for\l"
	.string "him -- his cabin's the one with the cold\l"
	.string "corner.\p"
	.string "Go on. Reciprocity doesn't keep.$"

ParcelDelibird_Elder_Text_10:
# 93 "data/maps/ParcelDelibird/scripts.pory"
	.string "An old woman sorts folded blankets into\n"
	.string "oilcloth parcels, quick and sure, a\l"
	.string "Delibird stacking them at her elbow.\p"
	.string "Elder: Ranger, is it? Then make yourself\n"
	.string "useful in the good way, not the\l"
	.string "clipboard way.$"

ParcelDelibird_Elder_Text_11:
# 94 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: The island runs on this -- you\n"
	.string "give before you're asked, and the island\l"
	.string "gives back before you need. It's not\l"
	.string "charity. It's how a cold place keeps\l"
	.string "everyone alive through a bad season.\p"
	.string "The opposite of the people who only\n"
	.string "ever take from it.$"

ParcelDelibird_Elder_Text_12:
# 95 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Here. A storm-relief parcel for\n"
	.string "old Tomas, down on the south shore.\l"
	.string "Carry it for me?$"

ParcelDelibird_Elder_Text_13:
# 97 "data/maps/ParcelDelibird/scripts.pory"
	.string "You take the parcel. It is heavier than\n"
	.string "a blanket should be. There's food in it\l"
	.string "too.$"

ParcelDelibird_Fisher_Text_0:
# 107 "data/maps/ParcelDelibird/scripts.pory"
	.string "Tomas: Warm through, thanks to you.\n"
	.string "Mind the corner of my cabin -- the floor\l"
	.string "slopes to the sea a little more each\l"
	.string "winter.\p"
	.string "Used to be level. I remember it level.$"

ParcelDelibird_Fisher_Text_1:
# 112 "data/maps/ParcelDelibird/scripts.pory"
	.string "An old fisher straightens, slow, by a\n"
	.string "cabin whose seaward corner has settled\l"
	.string "into the sand.\p"
	.string "Tomas: From Marta? You carried this all\n"
	.string "the way down for an old man you've\l"
	.string "never met.$"

ParcelDelibird_Fisher_Text_2:
# 113 "data/maps/ParcelDelibird/scripts.pory"
	.string "Tomas: That's the island in you already,\n"
	.string "and you only just landed.\p"
	.string "Here -- take this for the road. No, take\n"
	.string "it. That's how it works. You'll learn.$"

ParcelDelibird_Fisher_Text_3:
# 116 "data/maps/ParcelDelibird/scripts.pory"
	.string "Tomas: Now go tell Marta I'm fine. She'll\n"
	.string "have a bird ready for you. She always\l"
	.string "does.\p"
	.string "It's how she says thank you. Don't\n"
	.string "refuse it -- that's the one rude thing\l"
	.string "you can do here.$"

ParcelDelibird_Fisher_Text_4:
# 120 "data/maps/ParcelDelibird/scripts.pory"
	.string "Tomas: Cold off the water today.\n"
	.string "There's coffee in the square if you've\l"
	.string "come up short.\p"
	.string "Up here you never go without. We see to\n"
	.string "that ourselves.$"

ParcelDelibird_Giver_Text_0:
# 130 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: Pass it on someday, that's all.\n"
	.string "To whoever's cold next.$"

ParcelDelibird_Giver_Text_1:
# 134 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: New face! Midwinter rule:\n"
	.string "nobody meets the giving table\l"
	.string "empty-handed.\p"
	.string "Here -- from the square to you. Don't\n"
	.string "thank me. Thank me by doing it to the\l"
	.string "next one.$"

ParcelDelibird_Giver_Text_2:
# 137 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: A feather-charm. The old folk\n"
	.string "say it keeps the cold honest.\p"
	.string "We could use a little more honest cold.\n"
	.string "Less every year to keep.$"

ParcelDelibird_Relief_Text_0:
# 147 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: Bailed dry for now. It'll be\n"
	.string "back by the thaw moon. It always comes\l"
	.string "back a little higher.\p"
	.string "Thanks for the arms, Ranger.$"

ParcelDelibird_Relief_Text_1:
# 151 "data/maps/ParcelDelibird/scripts.pory"
	.string "A man stacks sandbags against a seep\n"
	.string "of meltwater rising through what used\l"
	.string "to be the village green. A Delibird\l"
	.string "ferries icy blocks to shore the wall.\p"
	.string "Villager: Ranger! Spare arms? The\n"
	.string "ground's let go under here -- water\l"
	.string "comes up where there's no rain to\l"
	.string "explain it.$"

ParcelDelibird_Relief_Text_2:
# 152 "data/maps/ParcelDelibird/scripts.pory"
	.string "You work the line until the seep is\n"
	.string "bagged back. The Delibird drops the\l"
	.string "last block and shakes off, pleased.$"

ParcelDelibird_Relief_Text_3:
# 154 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: There. Dry.\p"
	.string "You don't say it and he doesn't ask: the\n"
	.string "ice under us is thawing, and bags hold\l"
	.string "water, not winters. We didn't fix it. We\l"
	.string "bought a season.\p"
	.string "Villager: A season's a lot, some years.\n"
	.string "Thank you.$"

ParcelDelibird_Delibird_Text_0:
# 162 "data/maps/ParcelDelibird/scripts.pory"
	.string "A Delibird works the square, tucking a\n"
	.string "wrapped something into a child's hands,\l"
	.string "then another's, never its own.\p"
	.string "It notices you watching. It considers\n"
	.string "its sack, considers you -- and decides\l"
	.string "you look like you have enough.\p"
	.string "It moves on. That, too, is the lesson.$"

ParcelDelibird_SlumpSign_Text_0:
# 169 "data/maps/ParcelDelibird/scripts.pory"
	.string "The green dips here into a shallow new\n"
	.string "pond nobody dug. The cabin beside it\l"
	.string "has sunk at one corner; its door no\l"
	.string "longer hangs square.\p"
	.string "The islanders have laid planks across\n"
	.string "the wet and hung a lantern on them.\l"
	.string "They walk the planks to the festival\l"
	.string "and do not look down.\p"
	.string "You look down.$"

ParcelDelibird_SummitSign_Text_0:
# 174 "data/maps/ParcelDelibird/scripts.pory"
	.string "From the peak you can see the whole\n"
	.string "crescent of the island at once -- and\l"
	.string "the meltwater pooling in the high\l"
	.string "hollows where the snowpack should still\l"
	.string "be holding.\p"
	.string "This is the cold the festival is named\n"
	.string "for. There is less of it than there was\l"
	.string "last Midwinter. There will be less next.\p"
	.string "It is the most beautiful view in\n"
	.string "Skaldmere. You write down why it won't\l"
	.string "last.$"

ParcelDelibird_BannerSign_Text_0:
# 179 "data/maps/ParcelDelibird/scripts.pory"
	.string "MEREHOLT FOUNDATION -- PROUD SPONSOR\n"
	.string "OF DELIBIRD ISLE MIDWINTER\p"
	.string "Warm blankets, warm meals, a warmer\n"
	.string "future.\p"
	.string "The blankets are real. The meals are\n"
	.string "real. The warmer future is the part that\l"
	.string "pays for the banner.\p"
	.string "The same crest is on the drill up the\n"
	.string "coast.$"

ParcelDelibird_ReturnFerry_Text_0:
# 187 "data/maps/ParcelDelibird/scripts.pory"
	.string "Sailor: Back to the mainland, Ranger?\n"
	.string "Whenever you're ready.\p"
	.string "The island will be here. For a while yet,\n"
	.string "it'll be here.$"

ParcelDelibird_ReturnFerry_Text_1:
# 189 "data/maps/ParcelDelibird/scripts.pory"
	.string "Sailor: Stay for the lights, then.\n"
	.string "They're worth it.$"

ParcelDelibird_CaveMouth_Text_0:
# 216 "data/maps/ParcelDelibird/scripts.pory"
	.string "A low cleft in the rock breathes cold\n"
	.string "air -- a cave mouth, pitch dark a few\l"
	.string "steps in.\p"
	.string "You'd walk into a wall in there, or worse.\n"
	.string "Nothing in your party can throw light\l"
	.string "that far. Not yet.$"

ParcelDelibird_CaveMouth_Text_1:
# 220 "data/maps/ParcelDelibird/scripts.pory"
	.string "The cave mouth breathes its old, deep\n"
	.string "cold. One of your Pokémon can light the\l"
	.string "dark in there -- the glow reaches in and\l"
	.string "finds no far wall.\p"
	.string "Go in?$"

ParcelDelibird_CaveMouth_Text_2:
# 222 "data/maps/ParcelDelibird/scripts.pory"
	.string "You leave the cold where it is, for now.$"

ParcelDelibird_RevelerTrainer_Text_0:
# 235 "data/maps/ParcelDelibird/scripts.pory"
	.string "Noel: A Ranger! At Midwinter! You HAVE\n"
	.string "to battle me, it's tradition.\p"
	.string "Loser owes the winner cocoa. We don't\n"
	.string "keep score with money up here -- we\l"
	.string "keep it with cocoa.$"

ParcelDelibird_RevelerTrainer_Text_1:
# 236 "data/maps/ParcelDelibird/scripts.pory"
	.string "Noel: Awww. Fine, fine -- cocoa's on me!\n"
	.string "That's the best way to lose anyhow.$"

ParcelDelibird_RevelerTrainer_Text_2:
# 251 "data/maps/ParcelDelibird/scripts.pory"
	.string "Noel: Gran says the festival's smaller\n"
	.string "every year. Says the ice comes in slower\l"
	.string "than it did.\p"
	.string "I don't really get it. But I get the\n"
	.string "cocoa. Come on, before it's cold!$"

ParcelDelibird_RevelerTrainer_R2_Text_0:
# 262 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelDelibird_RevelerTrainer_R2_Text_1:
# 264 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Suit yourself. I'm here.$"

ParcelDelibird_RevelerTrainer_R2_Text_2:
# 268 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Still yours.$"

ParcelDelibird_RevelerTrainer_R2_Text_3:
# 269 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibird_RevelerTrainer_R3_Text_0:
# 276 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelDelibird_RevelerTrainer_R3_Text_1:
# 283 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibird_RevelerTrainer_R4_Text_0:
# 290 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelDelibird_RevelerTrainer_R4_Text_1:
# 297 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibird_RevelerTrainer_R5_Text_0:
# 304 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelDelibird_RevelerTrainer_R5_Text_1:
# 310 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: …Fair.$"

ParcelDelibird_RevelerTrainer_R5_Text_2:
# 311 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelDelibird_GymIlex_Text_0:
# 328 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex stands a little apart from the\n"
	.string "lights, a folded square of red cloth in\l"
	.string "one hand, eyes on the high snowline\l"
	.string "above the cabins.\p"
	.string "Ilex: Surveyor, Skaldmere Survey. I\n"
	.string "don't fix anything. I measure how fast\l"
	.string "it's going.\p"
	.string "Ilex: You read places on the ground --\n"
	.string "snares, residue, the catch on the\l"
	.string "pallet. I read them from above. The\l"
	.string "whole crescent of an island at once,\l"
	.string "before and after, change against\l"
	.string "change.\p"
	.string "Ilex: A field hand should be able to do\n"
	.string "both. Show me you can hold a line of\l"
	.string "sight as steady as a line of evidence.\l"
	.string "From up here, looking down.$"

ParcelDelibird_GymIlex_Text_1:
# 329 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: Steady. You kept the frame. Few\n"
	.string "do, this high up.$"

ParcelDelibird_GymIlex_Text_2:
# 334 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex turns the red cloth over once,\n"
	.string "then pockets it.\p"
	.string "Ilex: The snowline I'm watching is lower\n"
	.string "than last Midwinter. I'll have the\l"
	.string "number before the festival packs up.\p"
	.string "Ilex: Numbers don't save a place. They\n"
	.string "just make it impossible to say later\l"
	.string "that nobody knew. Carry that with the\l"
	.string "badge.$"

ParcelDelibird_GymIlex_Defeated_Text_0:
# 342 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: The Skyline clearance. It marks\n"
	.string "you fit to read a place from any height\l"
	.string "-- and to be trusted on the harder\l"
	.string "water.\p"
	.string "You'll want the tool that goes with it.$"

ParcelDelibird_GymIlex_Defeated_Text_1:
# 344 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: WATERFALL. It takes you up the\n"
	.string "climbs that turn most people back.\p"
	.string "The corridor inland has a few. That's\n"
	.string "where the last of this gets written.\l"
	.string "You're nearly ready for it.$"

ParcelDelibird_SquareKeeper_Text_0:
# 357 "data/maps/ParcelDelibird/scripts.pory"
	.string "Keeper: The shelf thins and fills, thins\n"
	.string "and fills.\p"
	.string "Nobody keeps the ledger, so nobody's\n"
	.string "ever behind.$"

ParcelDelibird_SquareKeeper_Text_1:
# 361 "data/maps/ParcelDelibird/scripts.pory"
	.string "A trestle table under the string lights,\n"
	.string "laid out with parcels -- mittens, dried\l"
	.string "fish, a kettle with a mended spout. A\l"
	.string "hand-lettered sign: TAKE ONE. LEAVE\l"
	.string "ONE, IF YOU CAN.\p"
	.string "The keeper waves you closer.\p"
	.string "Keeper: Off the ferry? Then you're\n"
	.string "furthest from home, and that puts you\l"
	.string "first in line. House rule.$"

ParcelDelibird_SquareKeeper_Text_2:
# 362 "data/maps/ParcelDelibird/scripts.pory"
	.string "Keeper: Go on -- the wrapped ones. No\n"
	.string "peeking, no choosing. That's the whole\l"
	.string "game.\p"
	.string "You take the parcel your hand lands on.$"

ParcelDelibird_SquareKeeper_Text_3:
# 375 "data/maps/ParcelDelibird/scripts.pory"
	.string "Leave something on the shelf?$"

ParcelDelibird_SquareKeeper_Text_4:
# 380 "data/maps/ParcelDelibird/scripts.pory"
	.string "You set a Potion between the mittens\n"
	.string "and the kettle. The keeper doesn't\l"
	.string "watch you do it, which is its own kind of\l"
	.string "manners.\p"
	.string "Keeper: There. Now you're from here.$"

ParcelDelibird_SquareKeeper_Text_5:
# 384 "data/maps/ParcelDelibird/scripts.pory"
	.string "You go through your bag twice. The\n"
	.string "keeper waves it off before you can\l"
	.string "apologize.\p"
	.string "Keeper: The shelf's patient. So's the\n"
	.string "island.\n"
	.string "Bring it when you're rich.$"

ParcelDelibird_SquareKeeper_Text_6:
# 388 "data/maps/ParcelDelibird/scripts.pory"
	.string "Keeper: Then don't. The square doesn't\n"
	.string "keep accounts.\p"
	.string "That's not a kindness, mind. It's a\n"
	.string "discipline.$"

ParcelDelibird_WarmingHut_Text_0:
# 397 "data/maps/ParcelDelibird/scripts.pory"
	.string "The hut smells of woodsmoke and wet\n"
	.string "wool. A row of cots, a kettle always on,\l"
	.string "a crate of donated kit by the door.\p"
	.string "Hutkeeper: In you come. Storm rule --\n"
	.string "nobody asks, nobody pays.\p"
	.string "Weather counts as a storm. So does a\n"
	.string "long day.$"

ParcelDelibird_WarmingHut_Text_1:
# 398 "data/maps/ParcelDelibird/scripts.pory"
	.string "Hutkeeper: Set your partners down by\n"
	.string "the stove. Go on.$"

ParcelDelibird_WarmingHut_Text_2:
# 401 "data/maps/ParcelDelibird/scripts.pory"
	.string "Hutkeeper: There. Warmed through.\p"
	.string "This hut's the oldest building standing\n"
	.string "on the island, you know. The festival is\l"
	.string "younger than the kindness.\p"
	.string "Most things are.$"

ParcelDelibird_Stringer_Text_0:
# 410 "data/maps/ParcelDelibird/scripts.pory"
	.string "A woman on a short ladder feeds string\n"
	.string "lights along the eaves, a spare bulb\l"
	.string "held in her teeth. She talks around it.\p"
	.string "Stringer: Every year they go up a week\n"
	.string "earlier. Notice that? Gran strung them\l"
	.string "the week of first freeze. That was the\l"
	.string "signal -- that was the whole point of\l"
	.string "them.$"

ParcelDelibird_Stringer_Text_1:
# 411 "data/maps/ParcelDelibird/scripts.pory"
	.string "Stringer: There's been no first freeze\n"
	.string "worth the name in six years. So now we\l"
	.string "go by the calendar, like mainlanders.\p"
	.string "She fits the bulb, and it comes on, warm\n"
	.string "against the grey.\p"
	.string "Stringer: Still pretty, though. That's\n"
	.string "not nothing. Some years it's most of\l"
	.string "what we've got.$"

ParcelDelibird_Blankets_Text_0:
# 420 "data/maps/ParcelDelibird/scripts.pory"
	.string "A man folds relief blankets into neat\n"
	.string "thirds on a bench -- good thick wool,\l"
	.string "brand new.\p"
	.string "Folder: Storm stock. We fold it in\n"
	.string "autumn so nobody has to think in\l"
	.string "January.\p"
	.string "He squares a corner with more care than\n"
	.string "it needs.$"

ParcelDelibird_Blankets_Text_1:
# 421 "data/maps/ParcelDelibird/scripts.pory"
	.string "Folder: Good blankets, these. Warm.\n"
	.string "Free.\p"
	.string "You learn not to read the corner.\p"
	.string "The corner, small and tasteful, reads\n"
	.string "MEREHOLT FOUNDATION.$"

ParcelDelibird_T_Hakon_Text_0:
# 429 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Ferry's tied up till the festival\n"
	.string "ends. I've seen it eleven years running.\l"
	.string "Battle me, it's the only new thing today.$"

ParcelDelibird_T_Hakon_Text_1:
# 430 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: New thing: I lost.$"

ParcelDelibird_T_Hakon_Text_2:
# 445 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: The gift square's lovely. The\n"
	.string "thaw line's moved up the slope again.\l"
	.string "You can see both from the quay.$"

ParcelDelibird_T_Hakon_R2_Text_0:
# 456 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: I kept the team up for this.\n"
	.string "Again?$"

ParcelDelibird_T_Hakon_R2_Text_1:
# 458 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Another time, then.$"

ParcelDelibird_T_Hakon_R2_Text_2:
# 462 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: …Fair.$"

ParcelDelibird_T_Hakon_R2_Text_3:
# 463 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibird_T_Hakon_R3_Text_0:
# 470 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibird_T_Hakon_R3_Text_1:
# 477 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibird_T_Hakon_R4_Text_0:
# 484 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelDelibird_T_Hakon_R4_Text_1:
# 490 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Noted. Properly, this time.$"

ParcelDelibird_T_Hakon_R4_Text_2:
# 491 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibird_T_Hakon_R5_Text_0:
# 498 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibird_T_Hakon_R5_Text_1:
# 504 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: That's the one I wanted to see.$"

ParcelDelibird_T_Hakon_R5_Text_2:
# 505 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelDelibird_T_Bjarne_Text_0:
# 511 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: The summit mouth's behind me.\n"
	.string "Cold up there. Proper cold. Last of it.\l"
	.string "Battle before you climb.$"

ParcelDelibird_T_Bjarne_Text_1:
# 512 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Climb, then.$"

ParcelDelibird_T_Bjarne_Text_2:
# 527 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: The cavern's the only place the\n"
	.string "old cold lives now. MEREHOLT put an\l"
	.string "officer in it. In the cold. Logging it.$"

ParcelDelibird_T_Bjarne_R2_Text_0:
# 538 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelDelibird_T_Bjarne_R2_Text_1:
# 540 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Another time, then.$"

ParcelDelibird_T_Bjarne_R2_Text_2:
# 544 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Noted. Properly, this time.$"

ParcelDelibird_T_Bjarne_R2_Text_3:
# 545 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelDelibird_T_Bjarne_R3_Text_0:
# 552 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelDelibird_T_Bjarne_R3_Text_1:
# 558 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: …Fair.$"

ParcelDelibird_T_Bjarne_R3_Text_2:
# 559 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibird_T_Bjarne_R4_Text_0:
# 566 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelDelibird_T_Bjarne_R4_Text_1:
# 572 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Still yours.$"

ParcelDelibird_T_Bjarne_R4_Text_2:
# 573 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelDelibird_T_Bjarne_R5_Text_0:
# 580 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibird_T_Bjarne_R5_Text_1:
# 586 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: That's the one I wanted to see.$"

ParcelDelibird_T_Bjarne_R5_Text_2:
# 587 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibird_T_Frida_Text_0:
# 593 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: My DELIBIRD was born on the\n"
	.string "summit. There won't be another. Battle?$"

ParcelDelibird_T_Frida_Text_1:
# 594 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Still the best bird on the island.$"

ParcelDelibird_T_Frida_Text_2:
# 609 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: The festival's a gift economy.\n"
	.string "Give, take, give. MEREHOLT gives the\l"
	.string "banner. Guess what they take.$"

ParcelDelibird_T_Frida_R2_Text_0:
# 620 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: I kept the team up for this.\n"
	.string "Again?$"

ParcelDelibird_T_Frida_R2_Text_1:
# 622 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Suit yourself. I'm here.$"

ParcelDelibird_T_Frida_R2_Text_2:
# 626 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Right. That's the whole of it.$"

ParcelDelibird_T_Frida_R2_Text_3:
# 627 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibird_T_Frida_R3_Text_0:
# 634 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelDelibird_T_Frida_R3_Text_1:
# 640 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Still yours.$"

ParcelDelibird_T_Frida_R3_Text_2:
# 641 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibird_T_Frida_R4_Text_0:
# 648 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelDelibird_T_Frida_R4_Text_1:
# 654 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: …Fair.$"

ParcelDelibird_T_Frida_R4_Text_2:
# 655 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibird_T_Frida_R5_Text_0:
# 662 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibird_T_Frida_R5_Text_1:
# 668 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Noted. Properly, this time.$"

ParcelDelibird_T_Frida_R5_Text_2:
# 669 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibird_T_Erlend_Text_0:
# 675 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Cadet ERLEND, island posting.\n"
	.string "ILEX runs the gym here and nobody\l"
	.string "beats her. Spar, so I've something to\l"
	.string "report.$"

ParcelDelibird_T_Erlend_Text_1:
# 676 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Reported.$"

ParcelDelibird_T_Erlend_Text_2:
# 691 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: ILEX's Skyline badge needs the\n"
	.string "whole island read. The summit, the\l"
	.string "shore. She doesn't sign for half.$"

ParcelDelibird_T_Erlend_R2_Text_0:
# 702 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelDelibird_T_Erlend_R2_Text_1:
# 704 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: No hurry. The water keeps.$"

ParcelDelibird_T_Erlend_R2_Text_2:
# 708 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Noted. Properly, this time.$"

ParcelDelibird_T_Erlend_R2_Text_3:
# 709 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelDelibird_T_Erlend_R3_Text_0:
# 716 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelDelibird_T_Erlend_R3_Text_1:
# 722 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: …Again, then. Later.$"

ParcelDelibird_T_Erlend_R3_Text_2:
# 723 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibird_T_Erlend_R4_Text_0:
# 730 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelDelibird_T_Erlend_R4_Text_1:
# 737 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelDelibird_T_Erlend_R5_Text_0:
# 744 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelDelibird_T_Erlend_R5_Text_1:
# 751 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibird_Epilogue_Text_0:
# 760 "data/maps/ParcelDelibird/scripts.pory"
	.string "DELIBIRD ISLE. The thaw didn't stop\n"
	.string "because a hearing sat. The festival\l"
	.string "ground is a third mud.\p"
	.string "The delivery list is up on the square\n"
	.string "again, longer than last year, and every\l"
	.string "house on it has a name beside it before\l"
	.string "noon.$"

ParcelDelibird_GymIlex_Rematch_Text_0:
# 772 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: The snowline is lower than last\n"
	.string "Midwinter. I have the number now. It's in\l"
	.string "your record.\p"
	.string "The Skyline is mine to read. Read it with\n"
	.string "me once more, from the top. Will you?$"

ParcelDelibird_GymIlex_Rematch_Text_1:
# 774 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: Then watch the snowline with me a\n"
	.string "while.$"

ParcelDelibird_GymIlex_Rematch_Text_2:
# 778 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: Steady. You still keep the frame.$"

ParcelDelibird_GymIlex_Rematch_Text_3:
# 779 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: The cloth is in my pocket.\n"
	.string "Whenever you like.$"
