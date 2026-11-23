ParcelDelibird_MapScripts::
# 23 "data/maps/ParcelDelibird/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelDelibird_SetVisited
# 24 "data/maps/ParcelDelibird/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ParcelDelibird_OnLoad
# 25 "data/maps/ParcelDelibird/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelDelibird_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelDelibird_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data/maps/ParcelDelibird/scripts.pory"
	map_script_2 VAR_SKALD_EPILOGUE, 5, ParcelDelibird_Epilogue
# 27 "data/maps/ParcelDelibird/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelDelibird_SetMapVar
# 28 "data/maps/ParcelDelibird/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ParcelDelibird_FirstEntry
	.2byte 0


ParcelDelibird_SetVisited::
# 33 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_VISITED_PARCEL_DELIBIRD
	end


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
	goto_if_set FLAG_SKALDMERE_DELIBIRD_PARCEL, ParcelDelibird_Elder_8
# 94 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_9, MSGBOX_DEFAULT
# 95 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_10, MSGBOX_DEFAULT
# 96 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_11, MSGBOX_DEFAULT
# 97 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_PARCEL
# 98 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_12, MSGBOX_DEFAULT
# 99 "data/maps/ParcelDelibird/scripts.pory"
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
	goto_if_set FLAG_SKALDMERE_DELIBIRD_DELIVERED, ParcelDelibird_Elder_13
ParcelDelibird_Elder_10:
# 80 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_4, MSGBOX_DEFAULT
# 81 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_DELIBIRD_DELIVERED, ParcelDelibird_Elder_18
ParcelDelibird_Elder_17:
# 84 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_SKALD_DEL_INGRID_DONE, ParcelDelibird_Elder_21
ParcelDelibird_Elder_20:
# 87 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_SKALD_DEL_RUNE_DONE, ParcelDelibird_Elder_24
ParcelDelibird_Elder_23:
# 90 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_8, MSGBOX_DEFAULT
# 91 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_11:
# 78 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_Elder_RoundDone
	goto ParcelDelibird_Elder_10

ParcelDelibird_Elder_12:
# 77 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_DEL_RUNE_DONE, ParcelDelibird_Elder_11
	goto ParcelDelibird_Elder_10

ParcelDelibird_Elder_13:
# 77 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_DEL_INGRID_DONE, ParcelDelibird_Elder_12
	goto ParcelDelibird_Elder_10

ParcelDelibird_Elder_18:
# 82 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_5, MSGBOX_DEFAULT
	goto ParcelDelibird_Elder_17

ParcelDelibird_Elder_21:
# 85 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_6, MSGBOX_DEFAULT
	goto ParcelDelibird_Elder_20

ParcelDelibird_Elder_24:
# 88 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_7, MSGBOX_DEFAULT
	goto ParcelDelibird_Elder_23


ParcelDelibird_Elder_RoundDone::
# 105 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_0, MSGBOX_DEFAULT
# 106 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_1, MSGBOX_DEFAULT
# 107 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_2, MSGBOX_DEFAULT
# 108 "data/maps/ParcelDelibird/scripts.pory"
	playse SE_PIN
# 109 "data/maps/ParcelDelibird/scripts.pory"
	givemon SPECIES_DELIBIRD, 28
# 110 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_GIFT
# 111 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_3, MSGBOX_DEFAULT
# 112 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_4, MSGBOX_DEFAULT
# 113 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_5, MSGBOX_DEFAULT
# 114 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 115 "data/maps/ParcelDelibird/scripts.pory"
	fadescreen FADE_TO_BLACK
# 116 "data/maps/ParcelDelibird/scripts.pory"
	delay 30
# 117 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_6, MSGBOX_DEFAULT
# 118 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 119 "data/maps/ParcelDelibird/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 120 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_7, MSGBOX_DEFAULT
# 121 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Ketil::
# 127 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 128 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 129 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelDelibird_Ketil_3
ParcelDelibird_Ketil_1:
# 134 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CORNER, ParcelDelibird_Ketil_10
ParcelDelibird_Ketil_9:
# 144 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CORNER_DONE, ParcelDelibird_Ketil_8
# 150 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_Ketil_14
# 155 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelDelibird_Ketil_21
# 160 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Ketil_Text_6, MSGBOX_DEFAULT
# 161 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Ketil_2:
# 130 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Ketil_Text_0, MSGBOX_DEFAULT
# 131 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Ketil_3:
# 129 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CORNER_DONE, ParcelDelibird_Ketil_2
	goto ParcelDelibird_Ketil_1

ParcelDelibird_Ketil_7:
# 135 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CORNER_FOUND, ParcelDelibird_Ketil_17
# 140 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Ketil_Text_2, MSGBOX_DEFAULT
ParcelDelibird_Ketil_16:
# 142 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Ketil_8:
# 145 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Ketil_Text_3, MSGBOX_DEFAULT
# 146 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_Q_CORNER
# 147 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Ketil_10:
# 134 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CORNER_DONE, ParcelDelibird_Ketil_7
	goto ParcelDelibird_Ketil_9

ParcelDelibird_Ketil_14:
# 151 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Ketil_Text_4, MSGBOX_DEFAULT
# 152 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Ketil_17:
# 136 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Ketil_Text_1, MSGBOX_DEFAULT
# 137 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 138 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_Q_CORNER_DONE
	goto ParcelDelibird_Ketil_16

ParcelDelibird_Ketil_21:
# 156 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Ketil_Text_5, MSGBOX_DEFAULT
# 157 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Giver::
# 167 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 168 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 169 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_Giver_2
# 174 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIVER, ParcelDelibird_Giver_5
# 179 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_2, MSGBOX_DEFAULT
# 180 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_NEVER_MELT_ICE
# 181 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_GIVER
# 182 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_3, MSGBOX_DEFAULT
# 183 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Giver_2:
# 170 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_0, MSGBOX_DEFAULT
# 171 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Giver_5:
# 175 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_1, MSGBOX_DEFAULT
# 176 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Relief::
# 189 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 190 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 191 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_Relief_2
# 196 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_RELIEF, ParcelDelibird_Relief_5
# 201 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_2, MSGBOX_DEFAULT
# 202 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_3, MSGBOX_DEFAULT
# 203 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_RELIEF
# 204 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_4, MSGBOX_DEFAULT
# 205 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Relief_2:
# 192 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_0, MSGBOX_DEFAULT
# 193 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Relief_5:
# 197 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_1, MSGBOX_DEFAULT
# 198 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Delibird::
# 211 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 212 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Delibird_Text_0, MSGBOX_DEFAULT
# 213 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_SlumpSign::
# 219 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SlumpSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_Notice::
# 224 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Notice_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_SummitTrailSign::
# 229 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SummitTrailSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_ShoreTrailSign::
# 234 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_ShoreTrailSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_BannerSign::
# 239 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_BannerSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_ReturnFerry::
# 245 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 246 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 249 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_ReturnFerry_2
# 252 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_ReturnFerry_Text_1, MSGBOX_YESNO
ParcelDelibird_ReturnFerry_1:
# 254 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_ReturnFerry_6
# 259 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 260 "data/maps/ParcelDelibird/scripts.pory"
	playse SE_SHIP
# 261 "data/maps/ParcelDelibird/scripts.pory"
	delay 40
# 262 "data/maps/ParcelDelibird/scripts.pory"
	warp MAP_PARCEL_ISLE, 15, 31
# 263 "data/maps/ParcelDelibird/scripts.pory"
	waitstate
	end

ParcelDelibird_ReturnFerry_2:
# 250 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_ReturnFerry_Text_0, MSGBOX_YESNO
	goto ParcelDelibird_ReturnFerry_1

ParcelDelibird_ReturnFerry_6:
# 255 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_ReturnFerry_Text_2, MSGBOX_DEFAULT
# 256 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_ItemA::
# 268 "data/maps/ParcelDelibird/scripts.pory"
	finditem ITEM_NUGGET
	end


ParcelDelibird_ItemB::
# 272 "data/maps/ParcelDelibird/scripts.pory"
	finditem ITEM_STAR_PIECE
	end


ParcelDelibird_CaveMouth::
# 278 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 279 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 280 "data/maps/ParcelDelibird/scripts.pory"
	checkpartymove MOVE_FLASH
# 281 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq ParcelDelibird_CaveMouth_2
# 286 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_CaveMouth_Text_1, MSGBOX_YESNO
# 287 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_CaveMouth_5
# 292 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 293 "data/maps/ParcelDelibird/scripts.pory"
	warp MAP_PARCEL_CAVERN, 16, 10
# 294 "data/maps/ParcelDelibird/scripts.pory"
	waitstate
	end

ParcelDelibird_CaveMouth_2:
# 282 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_CaveMouth_Text_0, MSGBOX_DEFAULT
# 283 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_CaveMouth_5:
# 288 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_CaveMouth_Text_2, MSGBOX_DEFAULT
# 289 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer::
# 300 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_REVELER, ParcelDelibird_RevelerTrainer_Text_0, ParcelDelibird_RevelerTrainer_Text_1, ParcelDelibird_RevelerTrainer_FirstWin
# 304 "data/maps/ParcelDelibird/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 305 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibird_RevelerTrainer_3
ParcelDelibird_RevelerTrainer_1:
# 308 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibird_RevelerTrainer_8
ParcelDelibird_RevelerTrainer_6:
# 311 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibird_RevelerTrainer_13
ParcelDelibird_RevelerTrainer_11:
# 314 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibird_RevelerTrainer_18
ParcelDelibird_RevelerTrainer_16:
# 317 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibird_RevelerTrainer_2:
# 306 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_RevelerTrainer_R2
	goto ParcelDelibird_RevelerTrainer_1

ParcelDelibird_RevelerTrainer_3:
# 305 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_REVELER_R2
	goto_if 0, ParcelDelibird_RevelerTrainer_2
	goto ParcelDelibird_RevelerTrainer_1

ParcelDelibird_RevelerTrainer_7:
# 309 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_RevelerTrainer_R3
	goto ParcelDelibird_RevelerTrainer_6

ParcelDelibird_RevelerTrainer_8:
# 308 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_REVELER_R3
	goto_if 0, ParcelDelibird_RevelerTrainer_7
	goto ParcelDelibird_RevelerTrainer_6

ParcelDelibird_RevelerTrainer_12:
# 312 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_RevelerTrainer_R4
	goto ParcelDelibird_RevelerTrainer_11

ParcelDelibird_RevelerTrainer_13:
# 311 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_REVELER_R4
	goto_if 0, ParcelDelibird_RevelerTrainer_12
	goto ParcelDelibird_RevelerTrainer_11

ParcelDelibird_RevelerTrainer_17:
# 315 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_RevelerTrainer_R5
	goto ParcelDelibird_RevelerTrainer_16

ParcelDelibird_RevelerTrainer_18:
# 314 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_REVELER_R5
	goto_if 0, ParcelDelibird_RevelerTrainer_17
	goto ParcelDelibird_RevelerTrainer_16


ParcelDelibird_RevelerTrainer_FirstWin::
# 321 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_Text_2, MSGBOX_DEFAULT
# 322 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer_R2::
# 326 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 327 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 328 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_0, MSGBOX_YESNO
# 329 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_RevelerTrainer_R2_2
# 334 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_REVELER_R2, ParcelDelibird_RevelerTrainer_R2_Text_2
# 335 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_3, MSGBOX_DEFAULT
# 336 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_RevelerTrainer_R2_2:
# 330 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_1, MSGBOX_DEFAULT
# 331 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer_R3::
# 340 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 341 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 342 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R3_Text_0, MSGBOX_YESNO
# 343 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_RevelerTrainer_R3_2
# 348 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_REVELER_R3, ParcelDelibird_RevelerTrainer_R2_Text_2
# 349 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R3_Text_1, MSGBOX_DEFAULT
# 350 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_RevelerTrainer_R3_2:
# 344 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_1, MSGBOX_DEFAULT
# 345 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer_R4::
# 354 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 355 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 356 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R4_Text_0, MSGBOX_YESNO
# 357 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_RevelerTrainer_R4_2
# 362 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_REVELER_R4, ParcelDelibird_RevelerTrainer_R2_Text_2
# 363 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R4_Text_1, MSGBOX_DEFAULT
# 364 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_RevelerTrainer_R4_2:
# 358 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_1, MSGBOX_DEFAULT
# 359 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer_R5::
# 368 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 369 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 370 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R5_Text_0, MSGBOX_YESNO
# 371 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_RevelerTrainer_R5_2
# 376 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_REVELER_R5, ParcelDelibird_RevelerTrainer_R5_Text_1
# 377 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R5_Text_2, MSGBOX_DEFAULT
# 378 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_RevelerTrainer_R5_2:
# 372 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_1, MSGBOX_DEFAULT
# 373 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_GymIlex::
# 390 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelDelibird_GymIlex_2
ParcelDelibird_GymIlex_1:
# 393 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 394 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 395 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, ParcelDelibird_GymIlex_5
ParcelDelibird_GymIlex_4:
# 419 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_8, MSGBOX_DEFAULT
# 420 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_9, MSGBOX_DEFAULT
# 421 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_GymIlex_2:
# 391 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_GymIlex_Rematch
	goto ParcelDelibird_GymIlex_1

ParcelDelibird_GymIlex_5:
# 396 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_0, MSGBOX_DEFAULT
# 399 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, ParcelDelibird_GymIlex_8
ParcelDelibird_GymIlex_7:
# 407 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_3, MSGBOX_YESNO
# 408 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelDelibird_GymIlex_11
# 411 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_5, MSGBOX_DEFAULT
# 412 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_EXAM_8
ParcelDelibird_GymIlex_10:
# 414 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_6, MSGBOX_DEFAULT
# 415 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM8, ParcelDelibird_GymIlex_Text_7
# 416 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_GymIlex_Defeated
	goto ParcelDelibird_GymIlex_4

ParcelDelibird_GymIlex_8:
# 400 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_1, MSGBOX_YESNO
# 401 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_GymIlex_14
	goto ParcelDelibird_GymIlex_7

ParcelDelibird_GymIlex_11:
# 409 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_4, MSGBOX_DEFAULT
	goto ParcelDelibird_GymIlex_10

ParcelDelibird_GymIlex_14:
# 402 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_2, MSGBOX_DEFAULT
# 403 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_GymIlex_Defeated::
# 426 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_BADGE08_GET
# 427 "data/maps/ParcelDelibird/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 428 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Defeated_Text_0, MSGBOX_DEFAULT
# 429 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_HM07
# 430 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Defeated_Text_1, MSGBOX_DEFAULT
# 431 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_SquareKeeper::
# 440 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 441 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 442 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_SquareKeeper_2
# 447 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_DEL_GIFT_SQUARE, ParcelDelibird_SquareKeeper_5
# 452 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_2, MSGBOX_DEFAULT
# 453 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_3, MSGBOX_DEFAULT
# 454 "data/maps/ParcelDelibird/scripts.pory"
	random 4
# 455 "data/maps/ParcelDelibird/scripts.pory"
	switch VAR_RESULT
# 456 "data/maps/ParcelDelibird/scripts.pory"
	case 0, ParcelDelibird_SquareKeeper_9
# 458 "data/maps/ParcelDelibird/scripts.pory"
	case 1, ParcelDelibird_SquareKeeper_10
# 460 "data/maps/ParcelDelibird/scripts.pory"
	case 2, ParcelDelibird_SquareKeeper_11
# 462 "data/maps/ParcelDelibird/scripts.pory"
	case 3, ParcelDelibird_SquareKeeper_12
ParcelDelibird_SquareKeeper_7:
# 465 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_DEL_GIFT_SQUARE
# 466 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_4, MSGBOX_YESNO
# 467 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelDelibird_SquareKeeper_14
# 479 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_7, MSGBOX_DEFAULT
# 480 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_SquareKeeper_2:
# 443 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_0, MSGBOX_DEFAULT
# 444 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_SquareKeeper_5:
# 448 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_1, MSGBOX_DEFAULT
# 449 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_SquareKeeper_9:
# 457 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_LUCKY_EGG
	goto ParcelDelibird_SquareKeeper_7

ParcelDelibird_SquareKeeper_10:
# 459 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_STAR_PIECE
	goto ParcelDelibird_SquareKeeper_7

ParcelDelibird_SquareKeeper_11:
# 461 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_PP_UP
	goto ParcelDelibird_SquareKeeper_7

ParcelDelibird_SquareKeeper_12:
# 463 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 3
	goto ParcelDelibird_SquareKeeper_7

ParcelDelibird_SquareKeeper_14:
# 468 "data/maps/ParcelDelibird/scripts.pory"
	checkitem ITEM_POTION
# 469 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelDelibird_SquareKeeper_17
# 475 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_6, MSGBOX_DEFAULT
# 476 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_SquareKeeper_17:
# 470 "data/maps/ParcelDelibird/scripts.pory"
	removeitem ITEM_POTION
# 471 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_5, MSGBOX_DEFAULT
# 472 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_WarmingHut::
# 486 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 487 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 488 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_WarmingHut_Text_0, MSGBOX_DEFAULT
# 489 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_WarmingHut_Text_1, MSGBOX_DEFAULT
# 490 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 491 "data/maps/ParcelDelibird/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 492 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_WarmingHut_Text_2, MSGBOX_DEFAULT
# 493 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Stringer::
# 499 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 500 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 501 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Stringer_Text_0, MSGBOX_DEFAULT
# 502 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Stringer_Text_1, MSGBOX_DEFAULT
# 503 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Blankets::
# 509 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 510 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 511 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Blankets_Text_0, MSGBOX_DEFAULT
# 512 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Blankets_Text_1, MSGBOX_DEFAULT
# 513 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Hakon::
# 519 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_DEL_HAKON, ParcelDelibird_T_Hakon_Text_0, ParcelDelibird_T_Hakon_Text_1, ParcelDelibird_T_Hakon_FirstWin
# 523 "data/maps/ParcelDelibird/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 524 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibird_T_Hakon_3
ParcelDelibird_T_Hakon_1:
# 527 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibird_T_Hakon_8
ParcelDelibird_T_Hakon_6:
# 530 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibird_T_Hakon_13
ParcelDelibird_T_Hakon_11:
# 533 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibird_T_Hakon_18
ParcelDelibird_T_Hakon_16:
# 536 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibird_T_Hakon_2:
# 525 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Hakon_R2
	goto ParcelDelibird_T_Hakon_1

ParcelDelibird_T_Hakon_3:
# 524 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_HAKON_R2
	goto_if 0, ParcelDelibird_T_Hakon_2
	goto ParcelDelibird_T_Hakon_1

ParcelDelibird_T_Hakon_7:
# 528 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Hakon_R3
	goto ParcelDelibird_T_Hakon_6

ParcelDelibird_T_Hakon_8:
# 527 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_HAKON_R3
	goto_if 0, ParcelDelibird_T_Hakon_7
	goto ParcelDelibird_T_Hakon_6

ParcelDelibird_T_Hakon_12:
# 531 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Hakon_R4
	goto ParcelDelibird_T_Hakon_11

ParcelDelibird_T_Hakon_13:
# 530 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_HAKON_R4
	goto_if 0, ParcelDelibird_T_Hakon_12
	goto ParcelDelibird_T_Hakon_11

ParcelDelibird_T_Hakon_17:
# 534 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Hakon_R5
	goto ParcelDelibird_T_Hakon_16

ParcelDelibird_T_Hakon_18:
# 533 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_HAKON_R5
	goto_if 0, ParcelDelibird_T_Hakon_17
	goto ParcelDelibird_T_Hakon_16


ParcelDelibird_T_Hakon_FirstWin::
# 540 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_Text_2, MSGBOX_DEFAULT
# 541 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Hakon_R2::
# 545 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 546 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 547 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_0, MSGBOX_YESNO
# 548 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Hakon_R2_2
# 553 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_HAKON_R2, ParcelDelibird_T_Hakon_R2_Text_2
# 554 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_3, MSGBOX_DEFAULT
# 555 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Hakon_R2_2:
# 549 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_1, MSGBOX_DEFAULT
# 550 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Hakon_R3::
# 559 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 560 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 561 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R3_Text_0, MSGBOX_YESNO
# 562 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Hakon_R3_2
# 567 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_HAKON_R3, ParcelDelibird_T_Hakon_R2_Text_2
# 568 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R3_Text_1, MSGBOX_DEFAULT
# 569 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Hakon_R3_2:
# 563 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_1, MSGBOX_DEFAULT
# 564 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Hakon_R4::
# 573 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 574 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 575 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R4_Text_0, MSGBOX_YESNO
# 576 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Hakon_R4_2
# 581 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_HAKON_R4, ParcelDelibird_T_Hakon_R4_Text_1
# 582 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R4_Text_2, MSGBOX_DEFAULT
# 583 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Hakon_R4_2:
# 577 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_1, MSGBOX_DEFAULT
# 578 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Hakon_R5::
# 587 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 588 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 589 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R5_Text_0, MSGBOX_YESNO
# 590 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Hakon_R5_2
# 595 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_HAKON_R5, ParcelDelibird_T_Hakon_R5_Text_1
# 596 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R5_Text_2, MSGBOX_DEFAULT
# 597 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Hakon_R5_2:
# 591 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_1, MSGBOX_DEFAULT
# 592 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Bjarne::
# 601 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_DEL_BJARNE, ParcelDelibird_T_Bjarne_Text_0, ParcelDelibird_T_Bjarne_Text_1, ParcelDelibird_T_Bjarne_FirstWin
# 605 "data/maps/ParcelDelibird/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 606 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibird_T_Bjarne_3
ParcelDelibird_T_Bjarne_1:
# 609 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibird_T_Bjarne_8
ParcelDelibird_T_Bjarne_6:
# 612 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibird_T_Bjarne_13
ParcelDelibird_T_Bjarne_11:
# 615 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibird_T_Bjarne_18
ParcelDelibird_T_Bjarne_16:
# 618 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibird_T_Bjarne_2:
# 607 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Bjarne_R2
	goto ParcelDelibird_T_Bjarne_1

ParcelDelibird_T_Bjarne_3:
# 606 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_BJARNE_R2
	goto_if 0, ParcelDelibird_T_Bjarne_2
	goto ParcelDelibird_T_Bjarne_1

ParcelDelibird_T_Bjarne_7:
# 610 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Bjarne_R3
	goto ParcelDelibird_T_Bjarne_6

ParcelDelibird_T_Bjarne_8:
# 609 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_BJARNE_R3
	goto_if 0, ParcelDelibird_T_Bjarne_7
	goto ParcelDelibird_T_Bjarne_6

ParcelDelibird_T_Bjarne_12:
# 613 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Bjarne_R4
	goto ParcelDelibird_T_Bjarne_11

ParcelDelibird_T_Bjarne_13:
# 612 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_BJARNE_R4
	goto_if 0, ParcelDelibird_T_Bjarne_12
	goto ParcelDelibird_T_Bjarne_11

ParcelDelibird_T_Bjarne_17:
# 616 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Bjarne_R5
	goto ParcelDelibird_T_Bjarne_16

ParcelDelibird_T_Bjarne_18:
# 615 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_BJARNE_R5
	goto_if 0, ParcelDelibird_T_Bjarne_17
	goto ParcelDelibird_T_Bjarne_16


ParcelDelibird_T_Bjarne_FirstWin::
# 622 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_Text_2, MSGBOX_DEFAULT
# 623 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Bjarne_R2::
# 627 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 628 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 629 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_0, MSGBOX_YESNO
# 630 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Bjarne_R2_2
# 635 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_BJARNE_R2, ParcelDelibird_T_Bjarne_R2_Text_2
# 636 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_3, MSGBOX_DEFAULT
# 637 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Bjarne_R2_2:
# 631 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_1, MSGBOX_DEFAULT
# 632 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Bjarne_R3::
# 641 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 642 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 643 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R3_Text_0, MSGBOX_YESNO
# 644 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Bjarne_R3_2
# 649 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_BJARNE_R3, ParcelDelibird_T_Bjarne_R3_Text_1
# 650 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R3_Text_2, MSGBOX_DEFAULT
# 651 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Bjarne_R3_2:
# 645 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_1, MSGBOX_DEFAULT
# 646 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Bjarne_R4::
# 655 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 656 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 657 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R4_Text_0, MSGBOX_YESNO
# 658 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Bjarne_R4_2
# 663 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_BJARNE_R4, ParcelDelibird_T_Bjarne_R4_Text_1
# 664 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R4_Text_2, MSGBOX_DEFAULT
# 665 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Bjarne_R4_2:
# 659 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_1, MSGBOX_DEFAULT
# 660 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Bjarne_R5::
# 669 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 670 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 671 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R5_Text_0, MSGBOX_YESNO
# 672 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Bjarne_R5_2
# 677 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_BJARNE_R5, ParcelDelibird_T_Bjarne_R5_Text_1
# 678 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R5_Text_2, MSGBOX_DEFAULT
# 679 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Bjarne_R5_2:
# 673 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_1, MSGBOX_DEFAULT
# 674 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Frida::
# 683 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_DEL_FRIDA, ParcelDelibird_T_Frida_Text_0, ParcelDelibird_T_Frida_Text_1, ParcelDelibird_T_Frida_FirstWin
# 687 "data/maps/ParcelDelibird/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 688 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibird_T_Frida_3
ParcelDelibird_T_Frida_1:
# 691 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibird_T_Frida_8
ParcelDelibird_T_Frida_6:
# 694 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibird_T_Frida_13
ParcelDelibird_T_Frida_11:
# 697 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibird_T_Frida_18
ParcelDelibird_T_Frida_16:
# 700 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibird_T_Frida_2:
# 689 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Frida_R2
	goto ParcelDelibird_T_Frida_1

ParcelDelibird_T_Frida_3:
# 688 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_FRIDA_R2
	goto_if 0, ParcelDelibird_T_Frida_2
	goto ParcelDelibird_T_Frida_1

ParcelDelibird_T_Frida_7:
# 692 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Frida_R3
	goto ParcelDelibird_T_Frida_6

ParcelDelibird_T_Frida_8:
# 691 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_FRIDA_R3
	goto_if 0, ParcelDelibird_T_Frida_7
	goto ParcelDelibird_T_Frida_6

ParcelDelibird_T_Frida_12:
# 695 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Frida_R4
	goto ParcelDelibird_T_Frida_11

ParcelDelibird_T_Frida_13:
# 694 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_FRIDA_R4
	goto_if 0, ParcelDelibird_T_Frida_12
	goto ParcelDelibird_T_Frida_11

ParcelDelibird_T_Frida_17:
# 698 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Frida_R5
	goto ParcelDelibird_T_Frida_16

ParcelDelibird_T_Frida_18:
# 697 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_FRIDA_R5
	goto_if 0, ParcelDelibird_T_Frida_17
	goto ParcelDelibird_T_Frida_16


ParcelDelibird_T_Frida_FirstWin::
# 704 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_Text_2, MSGBOX_DEFAULT
# 705 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Frida_R2::
# 709 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 710 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 711 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_0, MSGBOX_YESNO
# 712 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Frida_R2_2
# 717 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_FRIDA_R2, ParcelDelibird_T_Frida_R2_Text_2
# 718 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_3, MSGBOX_DEFAULT
# 719 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Frida_R2_2:
# 713 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_1, MSGBOX_DEFAULT
# 714 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Frida_R3::
# 723 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 724 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 725 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R3_Text_0, MSGBOX_YESNO
# 726 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Frida_R3_2
# 731 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_FRIDA_R3, ParcelDelibird_T_Frida_R3_Text_1
# 732 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R3_Text_2, MSGBOX_DEFAULT
# 733 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Frida_R3_2:
# 727 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_1, MSGBOX_DEFAULT
# 728 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Frida_R4::
# 737 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 738 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 739 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R4_Text_0, MSGBOX_YESNO
# 740 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Frida_R4_2
# 745 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_FRIDA_R4, ParcelDelibird_T_Frida_R4_Text_1
# 746 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R4_Text_2, MSGBOX_DEFAULT
# 747 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Frida_R4_2:
# 741 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_1, MSGBOX_DEFAULT
# 742 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Frida_R5::
# 751 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 752 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 753 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R5_Text_0, MSGBOX_YESNO
# 754 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Frida_R5_2
# 759 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_FRIDA_R5, ParcelDelibird_T_Frida_R5_Text_1
# 760 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R5_Text_2, MSGBOX_DEFAULT
# 761 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Frida_R5_2:
# 755 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_1, MSGBOX_DEFAULT
# 756 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Erlend::
# 765 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_DEL_ERLEND, ParcelDelibird_T_Erlend_Text_0, ParcelDelibird_T_Erlend_Text_1, ParcelDelibird_T_Erlend_FirstWin
# 769 "data/maps/ParcelDelibird/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 770 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibird_T_Erlend_3
ParcelDelibird_T_Erlend_1:
# 773 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibird_T_Erlend_8
ParcelDelibird_T_Erlend_6:
# 776 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibird_T_Erlend_13
ParcelDelibird_T_Erlend_11:
# 779 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibird_T_Erlend_18
ParcelDelibird_T_Erlend_16:
# 782 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibird_T_Erlend_2:
# 771 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Erlend_R2
	goto ParcelDelibird_T_Erlend_1

ParcelDelibird_T_Erlend_3:
# 770 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_ERLEND_R2
	goto_if 0, ParcelDelibird_T_Erlend_2
	goto ParcelDelibird_T_Erlend_1

ParcelDelibird_T_Erlend_7:
# 774 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Erlend_R3
	goto ParcelDelibird_T_Erlend_6

ParcelDelibird_T_Erlend_8:
# 773 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_ERLEND_R3
	goto_if 0, ParcelDelibird_T_Erlend_7
	goto ParcelDelibird_T_Erlend_6

ParcelDelibird_T_Erlend_12:
# 777 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Erlend_R4
	goto ParcelDelibird_T_Erlend_11

ParcelDelibird_T_Erlend_13:
# 776 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_ERLEND_R4
	goto_if 0, ParcelDelibird_T_Erlend_12
	goto ParcelDelibird_T_Erlend_11

ParcelDelibird_T_Erlend_17:
# 780 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Erlend_R5
	goto ParcelDelibird_T_Erlend_16

ParcelDelibird_T_Erlend_18:
# 779 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_ERLEND_R5
	goto_if 0, ParcelDelibird_T_Erlend_17
	goto ParcelDelibird_T_Erlend_16


ParcelDelibird_T_Erlend_FirstWin::
# 786 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_Text_2, MSGBOX_DEFAULT
# 787 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Erlend_R2::
# 791 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 792 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 793 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_0, MSGBOX_YESNO
# 794 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Erlend_R2_2
# 799 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_ERLEND_R2, ParcelDelibird_T_Erlend_R2_Text_2
# 800 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_3, MSGBOX_DEFAULT
# 801 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Erlend_R2_2:
# 795 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_1, MSGBOX_DEFAULT
# 796 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Erlend_R3::
# 805 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 806 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 807 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R3_Text_0, MSGBOX_YESNO
# 808 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Erlend_R3_2
# 813 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_ERLEND_R3, ParcelDelibird_T_Erlend_R3_Text_1
# 814 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R3_Text_2, MSGBOX_DEFAULT
# 815 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Erlend_R3_2:
# 809 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_1, MSGBOX_DEFAULT
# 810 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Erlend_R4::
# 819 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 820 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 821 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R4_Text_0, MSGBOX_YESNO
# 822 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Erlend_R4_2
# 827 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_ERLEND_R4, ParcelDelibird_T_Erlend_R3_Text_1
# 828 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R4_Text_1, MSGBOX_DEFAULT
# 829 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Erlend_R4_2:
# 823 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_1, MSGBOX_DEFAULT
# 824 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Erlend_R5::
# 833 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 834 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 835 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R5_Text_0, MSGBOX_YESNO
# 836 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Erlend_R5_2
# 841 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_ERLEND_R5, ParcelDelibird_T_Erlend_R3_Text_1
# 842 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R5_Text_1, MSGBOX_DEFAULT
# 843 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Erlend_R5_2:
# 837 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_1, MSGBOX_DEFAULT
# 838 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Epilogue::
# 849 "data/maps/ParcelDelibird/scripts.pory"
	lockall
# 850 "data/maps/ParcelDelibird/scripts.pory"
	delay 20
# 851 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Epilogue_Text_0, MSGBOX_DEFAULT
# 852 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Epilogue_Text_1, MSGBOX_DEFAULT
# 853 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 854 "data/maps/ParcelDelibird/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 6
# 855 "data/maps/ParcelDelibird/scripts.pory"
	warp MAP_PARCEL_MARSH, 19, 9
# 856 "data/maps/ParcelDelibird/scripts.pory"
	waitstate
	end


ParcelDelibird_GymIlex_Rematch::
# 862 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 863 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 864 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Rematch_Text_0, MSGBOX_YESNO
# 865 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_GymIlex_Rematch_2
# 870 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM8_R, ParcelDelibird_GymIlex_Rematch_Text_2
# 871 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Rematch_Text_3, MSGBOX_DEFAULT
# 872 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_GymIlex_Rematch_2:
# 866 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Rematch_Text_1, MSGBOX_DEFAULT
# 867 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_PairLights::
# 879 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 880 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_PairLights_2
# 886 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibird_PairLights_3
# 892 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_9, MSGBOX_DEFAULT
# 893 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_10, MSGBOX_DEFAULT
# 894 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_11, MSGBOX_DEFAULT
# 895 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_12, MSGBOX_DEFAULT
# 896 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_13, MSGBOX_DEFAULT
ParcelDelibird_PairLights_1:
# 898 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_PairLights_2:
# 881 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_0, MSGBOX_DEFAULT
# 882 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_1, MSGBOX_DEFAULT
# 883 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_2, MSGBOX_DEFAULT
# 884 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_3, MSGBOX_DEFAULT
# 885 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_4, MSGBOX_DEFAULT
	goto ParcelDelibird_PairLights_1

ParcelDelibird_PairLights_3:
# 887 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_5, MSGBOX_DEFAULT
# 888 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_6, MSGBOX_DEFAULT
# 889 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_7, MSGBOX_DEFAULT
# 890 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_8, MSGBOX_DEFAULT
	goto ParcelDelibird_PairLights_1


ParcelDelibird_PairGround::
# 903 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 904 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_PairGround_2
# 910 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibird_PairGround_3
# 917 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_10, MSGBOX_DEFAULT
# 918 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_11, MSGBOX_DEFAULT
# 919 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_12, MSGBOX_DEFAULT
# 920 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_13, MSGBOX_DEFAULT
ParcelDelibird_PairGround_1:
# 922 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_PairGround_2:
# 905 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_0, MSGBOX_DEFAULT
# 906 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_1, MSGBOX_DEFAULT
# 907 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_2, MSGBOX_DEFAULT
# 908 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_3, MSGBOX_DEFAULT
# 909 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_4, MSGBOX_DEFAULT
	goto ParcelDelibird_PairGround_1

ParcelDelibird_PairGround_3:
# 911 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_5, MSGBOX_DEFAULT
# 912 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_6, MSGBOX_DEFAULT
# 913 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_7, MSGBOX_DEFAULT
# 914 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_8, MSGBOX_DEFAULT
# 915 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_9, MSGBOX_DEFAULT
	goto ParcelDelibird_PairGround_1


ParcelDelibird_LampStringer::
# 929 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 930 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 931 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SCRATCH_DONE, ParcelDelibird_LampStringer_2
# 933 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SCRATCH, ParcelDelibird_LampStringer_3
# 942 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_LampStringer_Text_3, MSGBOX_DEFAULT
# 943 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_Q_SCRATCH
ParcelDelibird_LampStringer_1:
# 945 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_LampStringer_2:
# 932 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_LampStringer_Text_0, MSGBOX_DEFAULT
	goto ParcelDelibird_LampStringer_1

ParcelDelibird_LampStringer_3:
# 934 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SCRATCH_FOUND, ParcelDelibird_LampStringer_7
# 939 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_LampStringer_Text_2, MSGBOX_DEFAULT
	goto ParcelDelibird_LampStringer_1

ParcelDelibird_LampStringer_7:
# 935 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_LampStringer_Text_1, MSGBOX_DEFAULT
# 936 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 937 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_Q_SCRATCH_DONE
	goto ParcelDelibird_LampStringer_1


ParcelDelibird_HutScratch::
# 950 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SCRATCH, ParcelDelibird_HutScratch_4
ParcelDelibird_HutScratch_3:
# 954 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_HutScratch_Text_1, MSGBOX_SIGN
ParcelDelibird_HutScratch_1:
	end

ParcelDelibird_HutScratch_2:
# 951 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_HutScratch_Text_0, MSGBOX_SIGN
# 952 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_Q_SCRATCH_FOUND
	goto ParcelDelibird_HutScratch_1

ParcelDelibird_HutScratch_4:
# 950 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SCRATCH_FOUND, ParcelDelibird_HutScratch_2
	goto ParcelDelibird_HutScratch_3


ParcelDelibird_FindCorner::
# 962 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CORNER, ParcelDelibird_FindCorner_4
ParcelDelibird_FindCorner_3:
# 966 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FindCorner_Text_1, MSGBOX_SIGN
ParcelDelibird_FindCorner_1:
	end

ParcelDelibird_FindCorner_2:
# 963 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FindCorner_Text_0, MSGBOX_SIGN
# 964 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_Q_CORNER_FOUND
	goto ParcelDelibird_FindCorner_1

ParcelDelibird_FindCorner_4:
# 962 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CORNER_FOUND, ParcelDelibird_FindCorner_2
	goto ParcelDelibird_FindCorner_3


ParcelDelibird_PairShore::
# 972 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 973 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_PairShore_2
# 978 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibird_PairShore_3
# 983 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_7, MSGBOX_DEFAULT
# 984 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_8, MSGBOX_DEFAULT
# 985 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_9, MSGBOX_DEFAULT
# 986 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_10, MSGBOX_DEFAULT
ParcelDelibird_PairShore_1:
# 988 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_PairShore_2:
# 974 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_0, MSGBOX_DEFAULT
# 975 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_1, MSGBOX_DEFAULT
# 976 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_2, MSGBOX_DEFAULT
# 977 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_3, MSGBOX_DEFAULT
	goto ParcelDelibird_PairShore_1

ParcelDelibird_PairShore_3:
# 979 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_4, MSGBOX_DEFAULT
# 980 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_5, MSGBOX_DEFAULT
# 981 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_6, MSGBOX_DEFAULT
	goto ParcelDelibird_PairShore_1


ParcelDelibird_Board1::
# 995 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Board1_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_Board2::
# 1000 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Board2_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_Board3::
# 1007 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Board3_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_Board4::
# 1014 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Board4_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_Board5::
# 1021 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Board5_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_OnLoad::
# 1030 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_OnLoad_2
ParcelDelibird_OnLoad_1:
	end

ParcelDelibird_OnLoad_2:
# 1031 "data/maps/ParcelDelibird/scripts.pory"
	setmetatile 12, 35, 892, TRUE
# 1032 "data/maps/ParcelDelibird/scripts.pory"
	setmetatile 14, 35, 892, TRUE
# 1033 "data/maps/ParcelDelibird/scripts.pory"
	setmetatile 16, 35, 892, TRUE
# 1034 "data/maps/ParcelDelibird/scripts.pory"
	setmetatile 18, 35, 892, TRUE
# 1035 "data/maps/ParcelDelibird/scripts.pory"
	setmetatile 19, 9, 893, TRUE
# 1036 "data/maps/ParcelDelibird/scripts.pory"
	setmetatile 22, 9, 893, TRUE
# 1037 "data/maps/ParcelDelibird/scripts.pory"
	setmetatile 25, 9, 893, TRUE
# 1038 "data/maps/ParcelDelibird/scripts.pory"
	setmetatile 28, 9, 893, TRUE
	goto ParcelDelibird_OnLoad_1


ParcelDelibird_DoorNote1::
# 1044 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_DoorNote1_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_DoorNote2::
# 1049 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_DoorNote2_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_DoorNote3::
# 1054 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_DoorNote3_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_DoorNote4::
# 1059 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_DoorNote4_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_DoorSunk::
# 1064 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_DoorSunk_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_Sandbags::
# 1069 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Sandbags_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_SlopeStake::
# 1074 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_SlopeStake_2
# 1077 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SlopeStake_Text_1, MSGBOX_SIGN
ParcelDelibird_SlopeStake_1:
	end

ParcelDelibird_SlopeStake_2:
# 1075 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SlopeStake_Text_0, MSGBOX_SIGN
	goto ParcelDelibird_SlopeStake_1


ParcelDelibird_BeachStake::
# 1083 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_BeachStake_2
# 1086 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_BeachStake_Text_1, MSGBOX_SIGN
ParcelDelibird_BeachStake_1:
	end

ParcelDelibird_BeachStake_2:
# 1084 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_BeachStake_Text_0, MSGBOX_SIGN
	goto ParcelDelibird_BeachStake_1


ParcelDelibird_FestivalFir::
# 1092 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FestivalFir_Text_0, MSGBOX_SIGN
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
	.string "with the MEREHOLT Foundation.\p"
	.string "{STR_VAR_1} leans into your leg. You\n"
	.string "go up into the lights.$"

ParcelDelibird_Elder_Text_0:
# 65 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: Word reached us. Word always\n"
	.string "reaches an island last, and stays\l"
	.string "longest.\p"
	.string "You wrote it down and you didn't soften\n"
	.string "it. Herself in it too, I hear. That took\l"
	.string "something out of you, I expect.\p"
	.string "It ought to. The true ones cost.$"

ParcelDelibird_Elder_Text_1:
# 66 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: The channel won't refreeze for\n"
	.string "it, child. The winters don't read filings.\p"
	.string "But the lights are going up early this\n"
	.string "year -- you'll have seen. That's not us\l"
	.string "pretending.\p"
	.string "That's us carrying it.$"

ParcelDelibird_Elder_Text_2:
# 67 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: The festival was never about\n"
	.string "the cold, whatever the name says. It\l"
	.string "was about each other, in the cold.\p"
	.string "That part keeps. That part we don't\n"
	.string "need anyone's permission to keep.$"

ParcelDelibird_Elder_Text_3:
# 72 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: The young ones say give until\n"
	.string "it's a habit, so the giving's already\l"
	.string "done when the storm comes and there's\l"
	.string "no time to decide.\p"
	.string "You've got the habit now. I can see it\n"
	.string "on the bird.$"

ParcelDelibird_Elder_Text_4:
# 80 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: Still carrying? Good. Who's\n"
	.string "waiting on you, then.$"

ParcelDelibird_Elder_Text_5:
# 82 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: TOMAS. The shore trail east,\n"
	.string "past the tall grass, then the stairs\l"
	.string "down to the sand. His cabin's the one\l"
	.string "with the cold corner.$"

ParcelDelibird_Elder_Text_6:
# 85 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: INGRID. The summit trail, up past\n"
	.string "the cave mouth, two sets of stairs.\l"
	.string "She's at the stakes. She's always at the\l"
	.string "stakes.$"

ParcelDelibird_Elder_Text_7:
# 88 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: RUNE. Along the cliff top past\n"
	.string "the rocks, out to the point. You'll see\l"
	.string "the beacon before you see him.$"

ParcelDelibird_Elder_Text_8:
# 90 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: Go on. Reciprocity doesn't keep.$"

ParcelDelibird_Elder_Text_9:
# 94 "data/maps/ParcelDelibird/scripts.pory"
	.string "An old woman sorts folded blankets into\n"
	.string "oilcloth parcels, quick and sure, a\l"
	.string "DELIBIRD stacking them at her elbow.\p"
	.string "ELDER: RANGER, is it? Then make\n"
	.string "yourself useful in the good way, not\l"
	.string "the clipboard way.$"

ParcelDelibird_Elder_Text_10:
# 95 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: The island runs on this -- you\n"
	.string "give before you're asked, and the island\l"
	.string "gives back before you need. It's not\l"
	.string "charity. It's how a cold place keeps\l"
	.string "everyone alive through a bad season.\p"
	.string "The opposite of the people who only\n"
	.string "ever take from it.$"

ParcelDelibird_Elder_Text_11:
# 96 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: The relief round. Three doors\n"
	.string "the bird can't reach, the way its wings\l"
	.string "are this winter.\p"
	.string "Old TOMAS, under the cliffs on the east\n"
	.string "shore -- his cabin's the one with the\l"
	.string "cold corner. INGRID, up at the snow\l"
	.string "stakes on the summit -- lamp oil and\l"
	.string "tea. And RUNE, out at the point beacon\l"
	.string "past the cliffs.\p"
	.string "Carry them for me?$"

ParcelDelibird_Elder_Text_12:
# 98 "data/maps/ParcelDelibird/scripts.pory"
	.string "You take the parcels. They are heavier\n"
	.string "than blankets should be. There is food\l"
	.string "in all three.$"

ParcelDelibird_Elder_RoundDone_Text_0:
# 105 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: TOMAS has his blanket, INGRID\n"
	.string "her oil, RUNE his tea. Three doors, on\l"
	.string "foot, in a day. Bless you.\p"
	.string "Come here. There's a thing we do for\n"
	.string "someone who carries for strangers\l"
	.string "without being asked twice.$"

ParcelDelibird_Elder_RoundDone_Text_1:
# 106 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: We raise DELIBIRD here. Have for\n"
	.string "longer than the records. In a hard\l"
	.string "winter they carry food cabin to cabin\l"
	.string "-- they find the door that needs it.\l"
	.string "Nobody trained that into them. It's\l"
	.string "just what they are.$"

ParcelDelibird_Elder_RoundDone_Text_2:
# 107 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: This one took to you off the\n"
	.string "boat. Take it. It'll deliver for you the\l"
	.string "way it delivered for us.\p"
	.string "The storms are worse now. We'll need\n"
	.string "more of that, not less.$"

ParcelDelibird_Elder_RoundDone_Text_3:
# 111 "data/maps/ParcelDelibird/scripts.pory"
	.string "WREN received DELIBIRD.\p"
	.string "It shifts its little sack to one side\n"
	.string "and looks at you, ready to be useful.$"

ParcelDelibird_Elder_RoundDone_Text_4:
# 112 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER, quieter:\p"
	.string "ELDER: There's a paper from the\n"
	.string "Foundation says we should think about\l"
	.string "relocating the festival. Somewhere it\l"
	.string "won't flood.\p"
	.string "We held it here anyway. While there's a\n"
	.string "here.\p"
	.string "Tell your people we said thank you, and\n"
	.string "no.$"

ParcelDelibird_Elder_RoundDone_Text_5:
# 113 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: Stay a minute. We light the\n"
	.string "square when the round comes home. We\l"
	.string "always have.$"

ParcelDelibird_Elder_RoundDone_Text_6:
# 117 "data/maps/ParcelDelibird/scripts.pory"
	.string "Dusk. The stringer climbs her ladder one\n"
	.string "last time and the lights come on along\l"
	.string "the eaves, cabin by cabin, until the\l"
	.string "whole square is lit and the dark is\l"
	.string "pushed back to the tree line.\p"
	.string "Nobody cheers. They stand in it. A child\n"
	.string "says the word pretty and is not told to\l"
	.string "hush.\p"
	.string "Behind the lights, up the slope, the wet\n"
	.string "ground shines back at them. Nobody\l"
	.string "looks up there. You do.$"

ParcelDelibird_Elder_RoundDone_Text_7:
# 120 "data/maps/ParcelDelibird/scripts.pory"
	.string "ELDER: There. That's the festival. The\n"
	.string "rest is cocoa.$"

ParcelDelibird_Ketil_Text_0:
# 130 "data/maps/ParcelDelibird/scripts.pory"
	.string "KETIL: Set a new sill this spring. Two\n"
	.string "hands above the old frost line, because\l"
	.string "the old line's a lie now.\p"
	.string "My father would have argued. He'd have\n"
	.string "lost.$"

ParcelDelibird_Ketil_Text_1:
# 136 "data/maps/ParcelDelibird/scripts.pory"
	.string "KETIL: To the second plank. …I set that\n"
	.string "sill a hand above the frost line,\l"
	.string "because that's where my father said to\l"
	.string "set it. His frost line.\p"
	.string "Here. I don't need these; I need the\n"
	.string "ground to hold still, and nobody sells\l"
	.string "that.$"

ParcelDelibird_Ketil_Text_2:
# 140 "data/maps/ParcelDelibird/scripts.pory"
	.string "KETIL: The shore, where the cabin was.\n"
	.string "The sill, if it's showing.$"

ParcelDelibird_Ketil_Text_3:
# 145 "data/maps/ParcelDelibird/scripts.pory"
	.string "KETIL: TOMAS's old cabin stood on the\n"
	.string "shore here till the corner went into the\l"
	.string "ground. We moved him. The sill's still\l"
	.string "down there, I think, if you want to see\l"
	.string "what a cabin looks like when the island\l"
	.string "takes it back.\p"
	.string "Read me how far the sill's sunk. I can't\n"
	.string "go down there. I built it.$"

ParcelDelibird_Ketil_Text_4:
# 151 "data/maps/ParcelDelibird/scripts.pory"
	.string "KETIL: I mend nets. The nets are the\n"
	.string "same. What comes up in them isn't.\p"
	.string "That's in your paper, I'm told, in better\n"
	.string "words than mine.$"

ParcelDelibird_Ketil_Text_5:
# 156 "data/maps/ParcelDelibird/scripts.pory"
	.string "KETIL: The coast paper came over on\n"
	.string "the ferry. The catch all one size, and a\l"
	.string "ranger who wrote it down in front of the\l"
	.string "cannery.\p"
	.string "TOMAS read it twice. He said that's the\n"
	.string "island in you. Then he said mind the\l"
	.string "stairs.$"

ParcelDelibird_Ketil_Text_6:
# 160 "data/maps/ParcelDelibird/scripts.pory"
	.string "KETIL: TOMAS took his cabin down under\n"
	.string "the cliffs when the green went soft\l"
	.string "under it. East trail, past the tall\l"
	.string "grass, then the stairs.\p"
	.string "Mind him. He'll try to give you\n"
	.string "something. Let him.$"

ParcelDelibird_Giver_Text_0:
# 170 "data/maps/ParcelDelibird/scripts.pory"
	.string "VILLAGER: Pass it on someday.\n"
	.string "Whoever's cold next. The hearing didn't\l"
	.string "put a coat on anyone. We did. We'll keep\l"
	.string "doing it.$"

ParcelDelibird_Giver_Text_1:
# 175 "data/maps/ParcelDelibird/scripts.pory"
	.string "VILLAGER: Pass it on someday, that's\n"
	.string "all. To whoever's cold next.$"

ParcelDelibird_Giver_Text_2:
# 179 "data/maps/ParcelDelibird/scripts.pory"
	.string "VILLAGER: New face! Midwinter rule:\n"
	.string "nobody meets the giving table\l"
	.string "empty-handed.\p"
	.string "Here -- from the square to you. Don't\n"
	.string "thank me. Thank me by doing it to the\l"
	.string "next one.$"

ParcelDelibird_Giver_Text_3:
# 182 "data/maps/ParcelDelibird/scripts.pory"
	.string "VILLAGER: A feather-charm. The old\n"
	.string "folk say it keeps the cold honest.\p"
	.string "We could use a little more honest cold.\n"
	.string "Less every year to keep.$"

ParcelDelibird_Relief_Text_0:
# 192 "data/maps/ParcelDelibird/scripts.pory"
	.string "VILLAGER: Bailed dry. It'll be back by\n"
	.string "the thaw moon, higher. Your filing says\l"
	.string "so, in better words than mine. It's good\l"
	.string "to be in a filing. It's like being\l"
	.string "counted.$"

ParcelDelibird_Relief_Text_1:
# 197 "data/maps/ParcelDelibird/scripts.pory"
	.string "VILLAGER: Bailed dry for now. It'll be\n"
	.string "back by the thaw moon. It always comes\l"
	.string "back a little higher.\p"
	.string "Thanks for the arms, RANGER.$"

ParcelDelibird_Relief_Text_2:
# 201 "data/maps/ParcelDelibird/scripts.pory"
	.string "A man stacks sandbags against a seep\n"
	.string "of meltwater rising through what used\l"
	.string "to be the village green. A DELIBIRD\l"
	.string "ferries icy blocks to shore the wall.\p"
	.string "VILLAGER: RANGER! Spare arms? The\n"
	.string "ground's let go under here -- water\l"
	.string "comes up where there's no rain to\l"
	.string "explain it.$"

ParcelDelibird_Relief_Text_3:
# 202 "data/maps/ParcelDelibird/scripts.pory"
	.string "You work the line until the seep is\n"
	.string "bagged back. The DELIBIRD drops the\l"
	.string "last block and shakes off, pleased.$"

ParcelDelibird_Relief_Text_4:
# 204 "data/maps/ParcelDelibird/scripts.pory"
	.string "VILLAGER: There. Dry.\p"
	.string "You don't say it and he doesn't ask: the\n"
	.string "ice under us is thawing, and bags hold\l"
	.string "water, not winters. We didn't fix it. We\l"
	.string "bought a season.\p"
	.string "VILLAGER: A season's a lot, some years.\n"
	.string "Thank you.$"

ParcelDelibird_Delibird_Text_0:
# 212 "data/maps/ParcelDelibird/scripts.pory"
	.string "A DELIBIRD works the square, tucking a\n"
	.string "wrapped something into a child's hands,\l"
	.string "then another's, never its own.\p"
	.string "It notices you watching. It considers\n"
	.string "its sack, considers you -- and decides\l"
	.string "you look like you have enough.\p"
	.string "It moves on. That, too, is the lesson.$"

ParcelDelibird_SlumpSign_Text_0:
# 219 "data/maps/ParcelDelibird/scripts.pory"
	.string "The green dips here into a shallow new\n"
	.string "pond nobody dug. The cabin beside it\l"
	.string "has sunk at one corner; its door no\l"
	.string "longer hangs square.\p"
	.string "The islanders have laid planks across\n"
	.string "the wet and hung a lantern on them.\l"
	.string "They walk the planks to the festival\l"
	.string "and do not look down.\p"
	.string "You look down.$"

ParcelDelibird_Notice_Text_0:
# 224 "data/maps/ParcelDelibird/scripts.pory"
	.string "DELIBIRD ISLE MIDWINTER -- PROGRAMME\p"
	.string "The giving table, all day. The relief\n"
	.string "round, when MARTA says. The lighting, at\l"
	.string "dusk, when the round is home.\p"
	.string "Volunteers see MARTA. Everyone is a\n"
	.string "volunteer.$"

ParcelDelibird_SummitTrailSign_Text_0:
# 229 "data/maps/ParcelDelibird/scripts.pory"
	.string "SUMMIT TRAIL\p"
	.string "The snow stakes and the tarn. Two sets\n"
	.string "of stairs. INGRID is at the top; she\l"
	.string "does not come down for Midwinter.\p"
	.string "The snowline marker has been removed\n"
	.string "for repainting.$"

ParcelDelibird_ShoreTrailSign_Text_0:
# 234 "data/maps/ParcelDelibird/scripts.pory"
	.string "SHORE TRAIL\p"
	.string "To the cliffs, the beach and the point\n"
	.string "beacon. TOMAS's cabin is below the east\l"
	.string "stairs.\p"
	.string "The path along the edge is checked\n"
	.string "each spring. The edge is not.$"

ParcelDelibird_BannerSign_Text_0:
# 239 "data/maps/ParcelDelibird/scripts.pory"
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
# 250 "data/maps/ParcelDelibird/scripts.pory"
	.string "SAILOR: Back to the mainland, RANGER?\n"
	.string "The island will be here, for a while yet.\l"
	.string "Your paper didn't change the ice. It\l"
	.string "changed what the ice is called in a room\l"
	.string "far away. That's something.$"

ParcelDelibird_ReturnFerry_Text_1:
# 252 "data/maps/ParcelDelibird/scripts.pory"
	.string "SAILOR: Back to the mainland, RANGER?\n"
	.string "Whenever you're ready.\p"
	.string "The island will be here. For a while yet,\n"
	.string "it'll be here.$"

ParcelDelibird_ReturnFerry_Text_2:
# 255 "data/maps/ParcelDelibird/scripts.pory"
	.string "SAILOR: Stay for the lights, then.\n"
	.string "They're worth it.$"

ParcelDelibird_CaveMouth_Text_0:
# 282 "data/maps/ParcelDelibird/scripts.pory"
	.string "A low cleft in the rock breathes cold\n"
	.string "air -- a cave mouth, pitch dark a few\l"
	.string "steps in.\p"
	.string "You'd walk into a wall in there, or worse.\n"
	.string "Nothing in your party can throw light\l"
	.string "that far. Not yet.$"

ParcelDelibird_CaveMouth_Text_1:
# 286 "data/maps/ParcelDelibird/scripts.pory"
	.string "The cave mouth breathes its old, deep\n"
	.string "cold. One of your Pokémon can light the\l"
	.string "dark in there -- the glow reaches in and\l"
	.string "finds no far wall.\p"
	.string "Go in?$"

ParcelDelibird_CaveMouth_Text_2:
# 288 "data/maps/ParcelDelibird/scripts.pory"
	.string "You leave the cold where it is, for now.$"

ParcelDelibird_RevelerTrainer_Text_0:
# 301 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: A RANGER! At Midwinter! You HAVE\n"
	.string "to battle me, it's tradition.\p"
	.string "Loser owes the winner cocoa. We don't\n"
	.string "keep score with money up here -- we\l"
	.string "keep it with cocoa.$"

ParcelDelibird_RevelerTrainer_Text_1:
# 302 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Awww. Fine, fine -- cocoa's on me!\n"
	.string "That's the best way to lose anyhow.$"

ParcelDelibird_RevelerTrainer_Text_2:
# 317 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Gran says the festival's smaller\n"
	.string "every year. Says the ice comes in slower\l"
	.string "than it did.\p"
	.string "I don't really get it. But I get the\n"
	.string "cocoa. Come on, before it's cold!$"

ParcelDelibird_RevelerTrainer_R2_Text_0:
# 328 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelDelibird_RevelerTrainer_R2_Text_1:
# 330 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Suit yourself. I'm here.$"

ParcelDelibird_RevelerTrainer_R2_Text_2:
# 334 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Still yours.$"

ParcelDelibird_RevelerTrainer_R2_Text_3:
# 335 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibird_RevelerTrainer_R3_Text_0:
# 342 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelDelibird_RevelerTrainer_R3_Text_1:
# 349 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibird_RevelerTrainer_R4_Text_0:
# 356 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelDelibird_RevelerTrainer_R4_Text_1:
# 363 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibird_RevelerTrainer_R5_Text_0:
# 370 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelDelibird_RevelerTrainer_R5_Text_1:
# 376 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: …Fair.$"

ParcelDelibird_RevelerTrainer_R5_Text_2:
# 377 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelDelibird_GymIlex_Text_0:
# 396 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX stands a little apart from the\n"
	.string "lights, a folded square of red cloth in\l"
	.string "one hand, eyes on the high snowline\l"
	.string "above the cabins.\p"
	.string "ILEX: Surveyor, Skaldmere Survey. I\n"
	.string "don't fix anything. I measure how fast\l"
	.string "it's going.\p"
	.string "ILEX: You read places on the ground --\n"
	.string "snares, residue, the catch on the\l"
	.string "pallet. I read them from above. The\l"
	.string "whole crescent of an island at once,\l"
	.string "before and after, change against\l"
	.string "change.$"

ParcelDelibird_GymIlex_Text_1:
# 400 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX: One thing before the frame. The\n"
	.string "Skyline is the last clearance on the\l"
	.string "card, and I examine it as the last. Most\l"
	.string "RANGERS come back for it after the\l"
	.string "coast and the climate station.\p"
	.string "I won't go easy because you came early.\n"
	.string "Sit it now?$"

ParcelDelibird_GymIlex_Text_2:
# 402 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX: Then see the island first. The\n"
	.string "snowline will wait for you. It's the one\l"
	.string "thing up here that will.$"

ParcelDelibird_GymIlex_Text_3:
# 407 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX: The summit first. Thirteen\n"
	.string "patches of snow up there this\l"
	.string "Midwinter, by my cloth. More than last\l"
	.string "year?$"

ParcelDelibird_GymIlex_Text_4:
# 409 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX: Fewer. Nineteen last year. People\n"
	.string "see thirteen patches and think snow. I\l"
	.string "see six that aren't there.\p"
	.string "Frame first, then count. Let's see you\n"
	.string "hold the frame.$"

ParcelDelibird_GymIlex_Text_5:
# 411 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX: Fewer. Nineteen last year. The\n"
	.string "count goes one way, and it will go one\l"
	.string "way after I've stopped counting.\p"
	.string "You kept the frame. Now keep it with the\n"
	.string "current against you.$"

ParcelDelibird_GymIlex_Text_6:
# 414 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX: A field hand should be able to do\n"
	.string "both. Show me you can hold a line of\l"
	.string "sight as steady as a line of evidence.\l"
	.string "From up here, looking down.$"

ParcelDelibird_GymIlex_Text_7:
# 415 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX: Steady. You kept the frame. Few\n"
	.string "do, this high up.$"

ParcelDelibird_GymIlex_Text_8:
# 419 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX turns the red cloth over once,\n"
	.string "then pockets it.\p"
	.string "ILEX: The snowline I'm watching is lower\n"
	.string "than last Midwinter. I'll have the\l"
	.string "number before the festival packs up.\p"
	.string "ILEX: Numbers don't save a place. They\n"
	.string "just make it impossible to say later\l"
	.string "that nobody knew. Carry that with the\l"
	.string "badge.$"

ParcelDelibird_GymIlex_Text_9:
# 420 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX: You hold a pen like somebody who\n"
	.string "learned to look from a brush. I won't\l"
	.string "ask.\p"
	.string "Red cloth is red cloth, whoever ties it.$"

ParcelDelibird_GymIlex_Defeated_Text_0:
# 428 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX: The Skyline clearance. It marks\n"
	.string "you fit to read a place from any height\l"
	.string "-- and to be trusted on the harder\l"
	.string "water.\p"
	.string "You'll want the tool that goes with it.$"

ParcelDelibird_GymIlex_Defeated_Text_1:
# 430 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX: WATERFALL. It takes you up the\n"
	.string "climbs that turn most people back.\p"
	.string "The corridor inland has a few. That's\n"
	.string "where the last of this gets written.\l"
	.string "You're nearly ready for it.$"

ParcelDelibird_SquareKeeper_Text_0:
# 443 "data/maps/ParcelDelibird/scripts.pory"
	.string "KEEPER: The shelf thins and fills.\n"
	.string "Somebody put a MEREHOLT blanket on it\l"
	.string "last week. Folded in thirds. Nobody said\l"
	.string "anything. That's the ledger working.$"

ParcelDelibird_SquareKeeper_Text_1:
# 448 "data/maps/ParcelDelibird/scripts.pory"
	.string "KEEPER: The shelf thins and fills, thins\n"
	.string "and fills.\p"
	.string "Nobody keeps the ledger, so nobody's\n"
	.string "ever behind.$"

ParcelDelibird_SquareKeeper_Text_2:
# 452 "data/maps/ParcelDelibird/scripts.pory"
	.string "A trestle table under the string lights,\n"
	.string "laid out with parcels -- mittens, dried\l"
	.string "fish, a kettle with a mended spout. A\l"
	.string "hand-lettered sign: TAKE ONE. LEAVE\l"
	.string "ONE, IF YOU CAN.\p"
	.string "The keeper waves you closer.\p"
	.string "KEEPER: Off the ferry? Then you're\n"
	.string "furthest from home, and that puts you\l"
	.string "first in line. House rule.$"

ParcelDelibird_SquareKeeper_Text_3:
# 453 "data/maps/ParcelDelibird/scripts.pory"
	.string "KEEPER: Go on -- the wrapped ones. No\n"
	.string "peeking, no choosing. That's the whole\l"
	.string "game.\p"
	.string "You take the parcel your hand lands on.$"

ParcelDelibird_SquareKeeper_Text_4:
# 466 "data/maps/ParcelDelibird/scripts.pory"
	.string "Leave something on the shelf?$"

ParcelDelibird_SquareKeeper_Text_5:
# 471 "data/maps/ParcelDelibird/scripts.pory"
	.string "You set a Potion between the mittens\n"
	.string "and the kettle. The keeper doesn't\l"
	.string "watch you do it, which is its own kind of\l"
	.string "manners.\p"
	.string "KEEPER: There. Now you're from here.$"

ParcelDelibird_SquareKeeper_Text_6:
# 475 "data/maps/ParcelDelibird/scripts.pory"
	.string "You go through your bag twice. The\n"
	.string "keeper waves it off before you can\l"
	.string "apologize.\p"
	.string "KEEPER: The shelf's patient. So's the\n"
	.string "island.\n"
	.string "Bring it when you're rich.$"

ParcelDelibird_SquareKeeper_Text_7:
# 479 "data/maps/ParcelDelibird/scripts.pory"
	.string "KEEPER: Then don't. The square doesn't\n"
	.string "keep accounts.\p"
	.string "That's not a kindness, mind. It's a\n"
	.string "discipline.$"

ParcelDelibird_WarmingHut_Text_0:
# 488 "data/maps/ParcelDelibird/scripts.pory"
	.string "The hut smells of woodsmoke and wet\n"
	.string "wool. A row of cots, a kettle always on,\l"
	.string "a crate of donated kit by the door.\p"
	.string "HUTKEEPER: In you come. Storm rule --\n"
	.string "nobody asks, nobody pays.\p"
	.string "Weather counts as a storm. So does a\n"
	.string "long day.$"

ParcelDelibird_WarmingHut_Text_1:
# 489 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUTKEEPER: Set your partners down by\n"
	.string "the stove. Go on.$"

ParcelDelibird_WarmingHut_Text_2:
# 492 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUTKEEPER: There. Warmed through.\p"
	.string "This hut's the oldest building standing\n"
	.string "on the island, you know. The festival is\l"
	.string "younger than the kindness.\p"
	.string "Most things are.$"

ParcelDelibird_Stringer_Text_0:
# 501 "data/maps/ParcelDelibird/scripts.pory"
	.string "A woman on a short ladder feeds string\n"
	.string "lights along the eaves, a spare bulb\l"
	.string "held in her teeth. She talks around it.\p"
	.string "STRINGER: Every year they go up a week\n"
	.string "earlier. Notice that? Gran strung them\l"
	.string "the week of first freeze. That was the\l"
	.string "signal -- that was the whole point of\l"
	.string "them.$"

ParcelDelibird_Stringer_Text_1:
# 502 "data/maps/ParcelDelibird/scripts.pory"
	.string "STRINGER: There's been no first freeze\n"
	.string "worth the name in six years. So now we\l"
	.string "go by the calendar, like mainlanders.\p"
	.string "She fits the bulb, and it comes on, warm\n"
	.string "against the grey.\p"
	.string "STRINGER: Still pretty, though. That's\n"
	.string "not nothing. Some years it's most of\l"
	.string "what we've got.$"

ParcelDelibird_Blankets_Text_0:
# 511 "data/maps/ParcelDelibird/scripts.pory"
	.string "A man folds relief blankets into neat\n"
	.string "thirds on a bench -- good thick wool,\l"
	.string "brand new.\p"
	.string "Folder: Storm stock. We fold it in\n"
	.string "autumn so nobody has to think in\l"
	.string "January.\p"
	.string "He squares a corner with more care than\n"
	.string "it needs.$"

ParcelDelibird_Blankets_Text_1:
# 512 "data/maps/ParcelDelibird/scripts.pory"
	.string "Folder: Good blankets, these. Warm.\n"
	.string "Free.\p"
	.string "You learn not to read the corner.\p"
	.string "The corner, small and tasteful, reads\n"
	.string "MEREHOLT FOUNDATION.$"

ParcelDelibird_T_Hakon_Text_0:
# 520 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Ferry's tied up till the festival\n"
	.string "ends. I've seen it eleven years running.\l"
	.string "Battle me, it's the only new thing today.$"

ParcelDelibird_T_Hakon_Text_1:
# 521 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: New thing: I lost.$"

ParcelDelibird_T_Hakon_Text_2:
# 536 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: The gift square's lovely. The\n"
	.string "thaw line's moved up the slope again.\l"
	.string "You can see both from the quay.$"

ParcelDelibird_T_Hakon_R2_Text_0:
# 547 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: I kept the team up for this.\n"
	.string "Again?$"

ParcelDelibird_T_Hakon_R2_Text_1:
# 549 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Another time, then.$"

ParcelDelibird_T_Hakon_R2_Text_2:
# 553 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: …Fair.$"

ParcelDelibird_T_Hakon_R2_Text_3:
# 554 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibird_T_Hakon_R3_Text_0:
# 561 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibird_T_Hakon_R3_Text_1:
# 568 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibird_T_Hakon_R4_Text_0:
# 575 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelDelibird_T_Hakon_R4_Text_1:
# 581 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Noted. Properly, this time.$"

ParcelDelibird_T_Hakon_R4_Text_2:
# 582 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibird_T_Hakon_R5_Text_0:
# 589 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibird_T_Hakon_R5_Text_1:
# 595 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: That's the one I wanted to see.$"

ParcelDelibird_T_Hakon_R5_Text_2:
# 596 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelDelibird_T_Bjarne_Text_0:
# 602 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: The summit trail's up past the\n"
	.string "cave mouth. Cold up there. Proper cold.\l"
	.string "Last of it. Battle before you climb.$"

ParcelDelibird_T_Bjarne_Text_1:
# 603 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Climb, then.$"

ParcelDelibird_T_Bjarne_Text_2:
# 618 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: The cavern's the only place the\n"
	.string "old cold lives now. MEREHOLT put an\l"
	.string "officer in it. In the cold. Logging it.$"

ParcelDelibird_T_Bjarne_R2_Text_0:
# 629 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelDelibird_T_Bjarne_R2_Text_1:
# 631 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Another time, then.$"

ParcelDelibird_T_Bjarne_R2_Text_2:
# 635 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Noted. Properly, this time.$"

ParcelDelibird_T_Bjarne_R2_Text_3:
# 636 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelDelibird_T_Bjarne_R3_Text_0:
# 643 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelDelibird_T_Bjarne_R3_Text_1:
# 649 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: …Fair.$"

ParcelDelibird_T_Bjarne_R3_Text_2:
# 650 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibird_T_Bjarne_R4_Text_0:
# 657 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelDelibird_T_Bjarne_R4_Text_1:
# 663 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Still yours.$"

ParcelDelibird_T_Bjarne_R4_Text_2:
# 664 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelDelibird_T_Bjarne_R5_Text_0:
# 671 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibird_T_Bjarne_R5_Text_1:
# 677 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: That's the one I wanted to see.$"

ParcelDelibird_T_Bjarne_R5_Text_2:
# 678 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibird_T_Frida_Text_0:
# 684 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: My DELIBIRD was born on the\n"
	.string "summit. There won't be another. Battle?$"

ParcelDelibird_T_Frida_Text_1:
# 685 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Still the best bird on the island.$"

ParcelDelibird_T_Frida_Text_2:
# 700 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: The festival's a gift economy.\n"
	.string "Give, take, give. MEREHOLT gives the\l"
	.string "banner. Guess what they take.$"

ParcelDelibird_T_Frida_R2_Text_0:
# 711 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: I kept the team up for this.\n"
	.string "Again?$"

ParcelDelibird_T_Frida_R2_Text_1:
# 713 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Suit yourself. I'm here.$"

ParcelDelibird_T_Frida_R2_Text_2:
# 717 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Right. That's the whole of it.$"

ParcelDelibird_T_Frida_R2_Text_3:
# 718 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibird_T_Frida_R3_Text_0:
# 725 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelDelibird_T_Frida_R3_Text_1:
# 731 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Still yours.$"

ParcelDelibird_T_Frida_R3_Text_2:
# 732 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibird_T_Frida_R4_Text_0:
# 739 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelDelibird_T_Frida_R4_Text_1:
# 745 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: …Fair.$"

ParcelDelibird_T_Frida_R4_Text_2:
# 746 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibird_T_Frida_R5_Text_0:
# 753 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibird_T_Frida_R5_Text_1:
# 759 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Noted. Properly, this time.$"

ParcelDelibird_T_Frida_R5_Text_2:
# 760 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibird_T_Erlend_Text_0:
# 766 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Cadet ERLEND, island posting.\n"
	.string "ILEX runs the gym here and nobody\l"
	.string "beats her. Spar, so I've something to\l"
	.string "report.$"

ParcelDelibird_T_Erlend_Text_1:
# 767 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Reported.$"

ParcelDelibird_T_Erlend_Text_2:
# 782 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: ILEX's Skyline badge needs the\n"
	.string "whole island read. The summit, the\l"
	.string "shore. She doesn't sign for half.$"

ParcelDelibird_T_Erlend_R2_Text_0:
# 793 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelDelibird_T_Erlend_R2_Text_1:
# 795 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: No hurry. The water keeps.$"

ParcelDelibird_T_Erlend_R2_Text_2:
# 799 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Noted. Properly, this time.$"

ParcelDelibird_T_Erlend_R2_Text_3:
# 800 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelDelibird_T_Erlend_R3_Text_0:
# 807 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelDelibird_T_Erlend_R3_Text_1:
# 813 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: …Again, then. Later.$"

ParcelDelibird_T_Erlend_R3_Text_2:
# 814 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibird_T_Erlend_R4_Text_0:
# 821 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelDelibird_T_Erlend_R4_Text_1:
# 828 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelDelibird_T_Erlend_R5_Text_0:
# 835 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelDelibird_T_Erlend_R5_Text_1:
# 842 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibird_Epilogue_Text_0:
# 851 "data/maps/ParcelDelibird/scripts.pory"
	.string "DELIBIRD ISLE. The thaw didn't stop\n"
	.string "because a hearing sat. The festival\l"
	.string "ground is a third mud.\p"
	.string "The delivery list is up on the square\n"
	.string "again, longer than last year, and every\l"
	.string "house on it has a name beside it before\l"
	.string "noon.$"

ParcelDelibird_Epilogue_Text_1:
# 852 "data/maps/ParcelDelibird/scripts.pory"
	.string "MARTA's list has your name beside a door\n"
	.string "you have never been through. KETIL\l"
	.string "says the bird put it there. It goes\l"
	.string "where something's needed; it always\l"
	.string "has.\p"
	.string "Up the slope the wet ground shines back\n"
	.string "at the lights. Someone has set a row of\l"
	.string "stakes along the line of it, red cloth on\l"
	.string "every one. They did not wait for a\l"
	.string "surveyor.$"

ParcelDelibird_GymIlex_Rematch_Text_0:
# 864 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX: The snowline is lower than last\n"
	.string "Midwinter. I have the number now. It's in\l"
	.string "your record.\p"
	.string "The Skyline is mine to read. Read it with\n"
	.string "me once more, from the top. Will you?$"

ParcelDelibird_GymIlex_Rematch_Text_1:
# 866 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX: Then watch the snowline with me a\n"
	.string "while.$"

ParcelDelibird_GymIlex_Rematch_Text_2:
# 870 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX: Steady. You still keep the frame.$"

ParcelDelibird_GymIlex_Rematch_Text_3:
# 871 "data/maps/ParcelDelibird/scripts.pory"
	.string "ILEX: The cloth is in my pocket.\n"
	.string "Whenever you like.$"

ParcelDelibird_PairLights_Text_0:
# 881 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: The square's lit. Nobody\n"
	.string "cheered. Did you notice? Nobody\l"
	.string "cheered.$"

ParcelDelibird_PairLights_Text_1:
# 882 "data/maps/ParcelDelibird/scripts.pory"
	.string "BOY: Was that wrong?$"

ParcelDelibird_PairLights_Text_2:
# 883 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: It was right. You don't\n"
	.string "cheer a lamp in a storm. You stand near\l"
	.string "it.$"

ParcelDelibird_PairLights_Text_3:
# 884 "data/maps/ParcelDelibird/scripts.pory"
	.string "BOY: The ranger stood near it.$"

ParcelDelibird_PairLights_Text_4:
# 885 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: The ranger looked up the\n"
	.string "slope at the wet ground, same as me.\l"
	.string "Then stood near it anyway. That's the\l"
	.string "whole of being grown.$"

ParcelDelibird_PairLights_Text_5:
# 887 "data/maps/ParcelDelibird/scripts.pory"
	.string "BOY: The ranger did the whole round.\n"
	.string "Three doors, on foot. MARTA gave them\l"
	.string "the bird.$"

ParcelDelibird_PairLights_Text_6:
# 888 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: MARTA gave them the bird\n"
	.string "because the bird chose. You don't give a\l"
	.string "DELIBIRD. It goes.$"

ParcelDelibird_PairLights_Text_7:
# 889 "data/maps/ParcelDelibird/scripts.pory"
	.string "BOY: Where would it go?$"

ParcelDelibird_PairLights_Text_8:
# 890 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: Wherever something's\n"
	.string "needed. It has a worse sense of\l"
	.string "self-preservation than you do.$"

ParcelDelibird_PairLights_Text_9:
# 892 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: The stringer's up the\n"
	.string "ladder again. Every bulb on the eaves\l"
	.string "tested, and it's a month off.$"

ParcelDelibird_PairLights_Text_10:
# 893 "data/maps/ParcelDelibird/scripts.pory"
	.string "BOY: Why so early?$"

ParcelDelibird_PairLights_Text_11:
# 894 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: Because the ground under\n"
	.string "the ladder was dry last year and it isn't\l"
	.string "this year. She wants it done before it\l"
	.string "isn't a ladder you'd want to stand on.$"

ParcelDelibird_PairLights_Text_12:
# 895 "data/maps/ParcelDelibird/scripts.pory"
	.string "BOY: Can I hold the ladder?$"

ParcelDelibird_PairLights_Text_13:
# 896 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: Hold the ladder. That's\n"
	.string "what boys are for.$"

ParcelDelibird_PairGround_Text_0:
# 905 "data/maps/ParcelDelibird/scripts.pory"
	.string "WIFE: The FOUNDATION's paper about\n"
	.string "moving the festival. MARTA wrote back\l"
	.string "'thank you, and no'. In those words.$"

ParcelDelibird_PairGround_Text_1:
# 906 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUSBAND: And the Council?$"

ParcelDelibird_PairGround_Text_2:
# 907 "data/maps/ParcelDelibird/scripts.pory"
	.string "WIFE: Sent a surveyor. A real one, with\n"
	.string "the red cloth. To ask us where we'd want\l"
	.string "to be, if.$"

ParcelDelibird_PairGround_Text_3:
# 908 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUSBAND: If.$"

ParcelDelibird_PairGround_Text_4:
# 909 "data/maps/ParcelDelibird/scripts.pory"
	.string "WIFE: If. First time anyone's said it to\n"
	.string "us as a question.$"

ParcelDelibird_PairGround_Text_5:
# 911 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUSBAND: The ranger measured the slump\n"
	.string "with a tape. Wrote the number on the\l"
	.string "stake and the date under it.$"

ParcelDelibird_PairGround_Text_6:
# 912 "data/maps/ParcelDelibird/scripts.pory"
	.string "WIFE: What was the number?$"

ParcelDelibird_PairGround_Text_7:
# 913 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUSBAND: Doesn't matter. What matters\n"
	.string "is there'll be another number next year\l"
	.string "under it, and anyone can see which way\l"
	.string "they go.$"

ParcelDelibird_PairGround_Text_8:
# 914 "data/maps/ParcelDelibird/scripts.pory"
	.string "WIFE: That's not comfort.$"

ParcelDelibird_PairGround_Text_9:
# 915 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUSBAND: No. It's a ruler. We've had\n"
	.string "comfort. It came with a crest on it.$"

ParcelDelibird_PairGround_Text_10:
# 917 "data/maps/ParcelDelibird/scripts.pory"
	.string "WIFE: TOMAS's cabin corner is in the\n"
	.string "ground to the sill. KETIL's talking\l"
	.string "about moving him.$"

ParcelDelibird_PairGround_Text_11:
# 918 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUSBAND: Moving him where? Every cabin\n"
	.string "on the north side has a corner going.$"

ParcelDelibird_PairGround_Text_12:
# 919 "data/maps/ParcelDelibird/scripts.pory"
	.string "WIFE: Then we move the north side.$"

ParcelDelibird_PairGround_Text_13:
# 920 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUSBAND: We've moved it twice in my life.\n"
	.string "Each time it caught us up.$"

ParcelDelibird_LampStringer_Text_0:
# 932 "data/maps/ParcelDelibird/scripts.pory"
	.string "STRINGER: Two hands. I say it before I\n"
	.string "go up the ladder now. Then I go up the\l"
	.string "ladder.$"

ParcelDelibird_LampStringer_Text_1:
# 935 "data/maps/ParcelDelibird/scripts.pory"
	.string "STRINGER: Two hands. …Two hands in nine\n"
	.string "years. It isn't the ladder.\p"
	.string "I'll string them anyway. Here. For\n"
	.string "climbing things that sink.$"

ParcelDelibird_LampStringer_Text_2:
# 939 "data/maps/ParcelDelibird/scripts.pory"
	.string "STRINGER: The warming hut wall. A\n"
	.string "scratch at head height. Mine was, the\l"
	.string "first year.$"

ParcelDelibird_LampStringer_Text_3:
# 942 "data/maps/ParcelDelibird/scripts.pory"
	.string "STRINGER: I string the lights. Every\n"
	.string "year the foot of the ladder sits a\l"
	.string "little lower against the hut wall, and I\l"
	.string "tell myself it's the ladder.\p"
	.string "There's a scratch on the hut wall from\n"
	.string "the first year, head height. Go and read\l"
	.string "how far below it the ground is now. I\l"
	.string "can't make myself.$"

ParcelDelibird_HutScratch_Text_0:
# 951 "data/maps/ParcelDelibird/scripts.pory"
	.string "A scratch on the hut wall at head\n"
	.string "height, with a year beside it, nine\l"
	.string "winters back. The ground beneath it has\l"
	.string "gone down two hands since. The sill is in\l"
	.string "the earth.\p"
	.string "Someone has added a second scratch,\n"
	.string "this year, level with the first. The wall\l"
	.string "hasn't moved. The island has.$"

ParcelDelibird_HutScratch_Text_1:
# 954 "data/maps/ParcelDelibird/scripts.pory"
	.string "Two scratches on the hut wall, level\n"
	.string "with each other, nine years apart. The\l"
	.string "ground between them has gone.$"

ParcelDelibird_FindCorner_Text_0:
# 963 "data/maps/ParcelDelibird/scripts.pory"
	.string "On the shore, in the wet ground, the line\n"
	.string "of a sill: the bottom beam of a cabin,\l"
	.string "sunk to its second plank, the wood still\l"
	.string "sound. A nail, a hinge, the place a step\l"
	.string "was.\p"
	.string "The ground has taken it a plank at a\n"
	.string "time and is not finished.$"

ParcelDelibird_FindCorner_Text_1:
# 966 "data/maps/ParcelDelibird/scripts.pory"
	.string "The line of a sill in the wet shore, two\n"
	.string "planks under. The hinge is the only part\l"
	.string "still above the ground.$"

ParcelDelibird_PairShore_Text_0:
# 974 "data/maps/ParcelDelibird/scripts.pory"
	.string "NETMAN: Red cloth on stakes along the\n"
	.string "slump line. We put them in ourselves.\l"
	.string "Didn't wait for the Survey.$"

ParcelDelibird_PairShore_Text_1:
# 975 "data/maps/ParcelDelibird/scripts.pory"
	.string "OLD MAN: The Survey came anyway. Wrote\n"
	.string "down that we'd put them in. That's in a\l"
	.string "record now too.$"

ParcelDelibird_PairShore_Text_2:
# 976 "data/maps/ParcelDelibird/scripts.pory"
	.string "NETMAN: Everything's in a record now.$"

ParcelDelibird_PairShore_Text_3:
# 977 "data/maps/ParcelDelibird/scripts.pory"
	.string "OLD MAN: Everything always was. In the\n"
	.string "ground. Somebody finally learned to\l"
	.string "read it back.$"

ParcelDelibird_PairShore_Text_4:
# 979 "data/maps/ParcelDelibird/scripts.pory"
	.string "OLD MAN: The ranger carried tea to\n"
	.string "INGRID, oil to TOMAS, and read the\l"
	.string "stakes between. MARTA gave them the\l"
	.string "bird.$"

ParcelDelibird_PairShore_Text_5:
# 980 "data/maps/ParcelDelibird/scripts.pory"
	.string "NETMAN: The bird gives itself.$"

ParcelDelibird_PairShore_Text_6:
# 981 "data/maps/ParcelDelibird/scripts.pory"
	.string "OLD MAN: So MARTA says. I've watched\n"
	.string "that bird thirty winters. It goes where\l"
	.string "it's needed. It went off the boat\l"
	.string "straight to the stranger. Make of that\l"
	.string "what you like.$"

ParcelDelibird_PairShore_Text_7:
# 983 "data/maps/ParcelDelibird/scripts.pory"
	.string "NETMAN: The shore's two steps further\n"
	.string "in than when I was a boy.$"

ParcelDelibird_PairShore_Text_8:
# 984 "data/maps/ParcelDelibird/scripts.pory"
	.string "OLD MAN: Three. I counted. Then I\n"
	.string "stopped counting because it\l"
	.string "frightened me, and now I count again\l"
	.string "because the ranger's up the slope doing\l"
	.string "it anyway.$"

ParcelDelibird_PairShore_Text_9:
# 985 "data/maps/ParcelDelibird/scripts.pory"
	.string "NETMAN: What good's the count?$"

ParcelDelibird_PairShore_Text_10:
# 986 "data/maps/ParcelDelibird/scripts.pory"
	.string "OLD MAN: None. It's just true. I've\n"
	.string "decided to prefer true.$"

ParcelDelibird_Board1_Text_0:
# 995 "data/maps/ParcelDelibird/scripts.pory"
	.string "A SURVEY BOARD outside the hall, under\n"
	.string "the festival banner. DELIBIRD ISLE. The\l"
	.string "village stands on frozen ground and the\l"
	.string "ground is not staying frozen.\p"
	.string "The board shows the hall's door sill\n"
	.string "against the road, measured each\l"
	.string "autumn: level, level, a finger, a hand.\l"
	.string "The banner hangs from the same nails\l"
	.string "every year and is straight. Somebody\l"
	.string "adjusts it.$"

ParcelDelibird_Board2_Text_0:
# 1000 "data/maps/ParcelDelibird/scripts.pory"
	.string "A SURVEY BOARD by the shore path.\n"
	.string "DELIBIRD bring food to the snowed-in.\l"
	.string "The board records the storms they came\l"
	.string "after, by year, and the storms they did\l"
	.string "not need to.\p"
	.string "The second list has become the longer\n"
	.string "one. The islanders put a thank-you\l"
	.string "under it anyway, every year, in the same\l"
	.string "place.$"

ParcelDelibird_Board3_Text_0:
# 1007 "data/maps/ParcelDelibird/scripts.pory"
	.string "A SURVEY BOARD on the hall's seaward\n"
	.string "wall. The festival dates by year, and\l"
	.string "beside each the date the strait froze,\l"
	.string "or did not. Thirty years ago every line\l"
	.string "had two dates. The last nine have one.\p"
	.string "The festival is held on the same day\n"
	.string "regardless. The board does not comment.\l"
	.string "The second column does.$"

ParcelDelibird_Board4_Text_0:
# 1014 "data/maps/ParcelDelibird/scripts.pory"
	.string "A SURVEY BOARD by the festival stage.\n"
	.string "The stage is rebuilt every year and the\l"
	.string "Survey measures where it stands: a\l"
	.string "hand further from the sea than the\l"
	.string "last, every year, for nine years,\l"
	.string "because the ground it stood on has\l"
	.string "gone soft.\p"
	.string "The islanders call it moving the stage.\n"
	.string "The board calls it a reading.$"

ParcelDelibird_Board5_Text_0:
# 1021 "data/maps/ParcelDelibird/scripts.pory"
	.string "A SURVEY BOARD on the shore road. The\n"
	.string "island's one road is measured each\l"
	.string "spring from the hall's door to the\l"
	.string "water's edge. The board gives the\l"
	.string "paces.\p"
	.string "The road has not shortened. The water's\n"
	.string "edge has come to meet it, three paces in\l"
	.string "nine years, and the board shows the\l"
	.string "three as three short lines, like a tally\l"
	.string "nobody wants to finish.$"

ParcelDelibird_DoorNote1_Text_0:
# 1044 "data/maps/ParcelDelibird/scripts.pory"
	.string "A card tucked in the latch: AT THE\n"
	.string "SQUARE. COME AND FIND US THERE.$"

ParcelDelibird_DoorNote2_Text_0:
# 1049 "data/maps/ParcelDelibird/scripts.pory"
	.string "The door is on the latch. Through the\n"
	.string "glass, a table laid for more people than\l"
	.string "live here.$"

ParcelDelibird_DoorNote3_Text_0:
# 1054 "data/maps/ParcelDelibird/scripts.pory"
	.string "Nobody home. A row of boots by the\n"
	.string "step, smallest to largest, all of them\l"
	.string "dry.$"

ParcelDelibird_DoorNote4_Text_0:
# 1059 "data/maps/ParcelDelibird/scripts.pory"
	.string "A cord across the door and a card: GONE\n"
	.string "UP TO STRING THE EAST RAIL. THE KETTLE\l"
	.string "IS ON IF YOU ARE COLD.$"

ParcelDelibird_DoorSunk_Text_0:
# 1064 "data/maps/ParcelDelibird/scripts.pory"
	.string "The door has dropped in its frame and\n"
	.string "no longer hangs square. It will not\l"
	.string "open. It will not quite shut either.\p"
	.string "Someone has stuffed the gap with a\n"
	.string "blanket. The corner of the blanket has\l"
	.string "a crest on it.$"

ParcelDelibird_Sandbags_Text_0:
# 1069 "data/maps/ParcelDelibird/scripts.pory"
	.string "Sandbags, three courses. The bottom\n"
	.string "course is dark to the top stitch.$"

ParcelDelibird_SlopeStake_Text_0:
# 1075 "data/maps/ParcelDelibird/scripts.pory"
	.string "A stake at the foot of the wet slope,\n"
	.string "red cloth tied to it. Nobody from the\l"
	.string "Survey put the cloth there.\p"
	.string "The knot is a net-mender's knot.$"

ParcelDelibird_SlopeStake_Text_1:
# 1077 "data/maps/ParcelDelibird/scripts.pory"
	.string "A stake at the foot of the wet slope. A\n"
	.string "number in pencil and a date. Under them\l"
	.string "the same hand again, a year on.\p"
	.string "The second number is bigger.$"

ParcelDelibird_BeachStake_Text_0:
# 1084 "data/maps/ParcelDelibird/scripts.pory"
	.string "Red cloth on the stakes along the slump\n"
	.string "line. The islanders tied it on\l"
	.string "themselves.\p"
	.string "You know the colour. It is the one in\n"
	.string "your own kit.$"

ParcelDelibird_BeachStake_Text_1:
# 1086 "data/maps/ParcelDelibird/scripts.pory"
	.string "A row of stakes along the top of the\n"
	.string "beach, where the ground starts to give.\l"
	.string "Each one has a line cut in it at the\l"
	.string "height of the sand.\p"
	.string "The older cuts are higher up.$"

ParcelDelibird_FestivalFir_Text_0:
# 1092 "data/maps/ParcelDelibird/scripts.pory"
	.string "The festival fir. The lights run to it\n"
	.string "from the lamps of the square.\p"
	.string "There is a tin star at the top. It leans\n"
	.string "a little further every Midwinter, and\l"
	.string "every Midwinter someone climbs up and\l"
	.string "puts it straight.$"
