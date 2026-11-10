ParcelDelibird_MapScripts::
# 30 "data/maps/ParcelDelibird/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelDelibird_SetVisited
# 31 "data/maps/ParcelDelibird/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelDelibird_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelDelibird_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 32 "data/maps/ParcelDelibird/scripts.pory"
	map_script_2 VAR_SKALD_EPILOGUE, 5, ParcelDelibird_Epilogue
# 33 "data/maps/ParcelDelibird/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelDelibird_SetMapVar
# 34 "data/maps/ParcelDelibird/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ParcelDelibird_FirstEntry
	.2byte 0


ParcelDelibird_SetVisited::
# 39 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_VISITED_PARCEL_DELIBIRD
	end


ParcelDelibird_SetMapVar::
# 44 "data/maps/ParcelDelibird/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


ParcelDelibird_FirstEntry::
# 50 "data/maps/ParcelDelibird/scripts.pory"
	setvar VAR_TEMP_1, 1
# 51 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_ARRIVAL, ParcelDelibird_FirstEntry_2
# 54 "data/maps/ParcelDelibird/scripts.pory"
	lockall
# 55 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FirstEntry_Text_0, MSGBOX_DEFAULT
# 56 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FirstEntry_Text_1, MSGBOX_DEFAULT
# 57 "data/maps/ParcelDelibird/scripts.pory"
	bufferpartymonnick 0, 0
# 58 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FirstEntry_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_ARRIVAL
# 60 "data/maps/ParcelDelibird/scripts.pory"
	releaseall
	end

ParcelDelibird_FirstEntry_2:
	end


ParcelDelibird_Elder::
# 68 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 69 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 70 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_Elder_2
# 77 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibird_Elder_5
# 82 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_PARCEL, ParcelDelibird_Elder_8
# 100 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_9, MSGBOX_DEFAULT
# 101 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_10, MSGBOX_DEFAULT
# 102 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_11, MSGBOX_DEFAULT
# 103 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_PARCEL
# 104 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_12, MSGBOX_DEFAULT
# 105 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_2:
# 71 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_0, MSGBOX_DEFAULT
# 72 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_1, MSGBOX_DEFAULT
# 73 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_2, MSGBOX_DEFAULT
# 74 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_5:
# 78 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_3, MSGBOX_DEFAULT
# 79 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_8:
# 83 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_DELIVERED, ParcelDelibird_Elder_13
ParcelDelibird_Elder_10:
# 86 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_4, MSGBOX_DEFAULT
# 87 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_DELIBIRD_DELIVERED, ParcelDelibird_Elder_18
ParcelDelibird_Elder_17:
# 90 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_SKALD_DEL_INGRID_DONE, ParcelDelibird_Elder_21
ParcelDelibird_Elder_20:
# 93 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_SKALD_DEL_RUNE_DONE, ParcelDelibird_Elder_24
ParcelDelibird_Elder_23:
# 96 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_8, MSGBOX_DEFAULT
# 97 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_11:
# 84 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_Elder_RoundDone
	goto ParcelDelibird_Elder_10

ParcelDelibird_Elder_12:
# 83 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_DEL_RUNE_DONE, ParcelDelibird_Elder_11
	goto ParcelDelibird_Elder_10

ParcelDelibird_Elder_13:
# 83 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_DEL_INGRID_DONE, ParcelDelibird_Elder_12
	goto ParcelDelibird_Elder_10

ParcelDelibird_Elder_18:
# 88 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_5, MSGBOX_DEFAULT
	goto ParcelDelibird_Elder_17

ParcelDelibird_Elder_21:
# 91 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_6, MSGBOX_DEFAULT
	goto ParcelDelibird_Elder_20

ParcelDelibird_Elder_24:
# 94 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_7, MSGBOX_DEFAULT
	goto ParcelDelibird_Elder_23


ParcelDelibird_Elder_RoundDone::
# 111 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_0, MSGBOX_DEFAULT
# 112 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_1, MSGBOX_DEFAULT
# 113 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_2, MSGBOX_DEFAULT
# 114 "data/maps/ParcelDelibird/scripts.pory"
	playse SE_PIN
# 115 "data/maps/ParcelDelibird/scripts.pory"
	givemon SPECIES_DELIBIRD, 28
# 116 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_GIFT
# 117 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_3, MSGBOX_DEFAULT
# 118 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_4, MSGBOX_DEFAULT
# 119 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_5, MSGBOX_DEFAULT
# 120 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 121 "data/maps/ParcelDelibird/scripts.pory"
	fadescreen FADE_TO_BLACK
# 122 "data/maps/ParcelDelibird/scripts.pory"
	delay 30
# 123 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_6, MSGBOX_DEFAULT
# 124 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 125 "data/maps/ParcelDelibird/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 126 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_RoundDone_Text_7, MSGBOX_DEFAULT
# 127 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Ketil::
# 133 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 134 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 135 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelDelibird_Ketil_3
ParcelDelibird_Ketil_1:
# 140 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CORNER, ParcelDelibird_Ketil_10
ParcelDelibird_Ketil_9:
# 150 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CORNER_DONE, ParcelDelibird_Ketil_8
# 156 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_Ketil_14
# 161 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelDelibird_Ketil_21
# 166 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Ketil_Text_6, MSGBOX_DEFAULT
# 167 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Ketil_2:
# 136 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Ketil_Text_0, MSGBOX_DEFAULT
# 137 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Ketil_3:
# 135 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CORNER_DONE, ParcelDelibird_Ketil_2
	goto ParcelDelibird_Ketil_1

ParcelDelibird_Ketil_7:
# 141 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CORNER_FOUND, ParcelDelibird_Ketil_17
# 146 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Ketil_Text_2, MSGBOX_DEFAULT
ParcelDelibird_Ketil_16:
# 148 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Ketil_8:
# 151 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Ketil_Text_3, MSGBOX_DEFAULT
# 152 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_Q_CORNER
# 153 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Ketil_10:
# 140 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CORNER_DONE, ParcelDelibird_Ketil_7
	goto ParcelDelibird_Ketil_9

ParcelDelibird_Ketil_14:
# 157 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Ketil_Text_4, MSGBOX_DEFAULT
# 158 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Ketil_17:
# 142 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Ketil_Text_1, MSGBOX_DEFAULT
# 143 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 144 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_Q_CORNER_DONE
	goto ParcelDelibird_Ketil_16

ParcelDelibird_Ketil_21:
# 162 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Ketil_Text_5, MSGBOX_DEFAULT
# 163 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Giver::
# 173 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 174 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 175 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_Giver_2
# 180 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIVER, ParcelDelibird_Giver_5
# 185 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_2, MSGBOX_DEFAULT
# 186 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_NEVER_MELT_ICE
# 187 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_GIVER
# 188 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_3, MSGBOX_DEFAULT
# 189 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Giver_2:
# 176 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_0, MSGBOX_DEFAULT
# 177 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Giver_5:
# 181 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_1, MSGBOX_DEFAULT
# 182 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Relief::
# 195 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 196 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 197 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_Relief_2
# 202 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_RELIEF, ParcelDelibird_Relief_5
# 207 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_2, MSGBOX_DEFAULT
# 208 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_3, MSGBOX_DEFAULT
# 209 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_RELIEF
# 210 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_4, MSGBOX_DEFAULT
# 211 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Relief_2:
# 198 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_0, MSGBOX_DEFAULT
# 199 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Relief_5:
# 203 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_1, MSGBOX_DEFAULT
# 204 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Delibird::
# 217 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 218 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Delibird_Text_0, MSGBOX_DEFAULT
# 219 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_SlumpSign::
# 225 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SlumpSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_Notice::
# 230 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Notice_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_SummitTrailSign::
# 235 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SummitTrailSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_ShoreTrailSign::
# 240 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_ShoreTrailSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_BannerSign::
# 245 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_BannerSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_ReturnFerry::
# 251 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 252 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 253 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_ReturnFerry_2
# 258 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_ReturnFerry_Text_1, MSGBOX_YESNO
# 259 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_ReturnFerry_5
# 264 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 265 "data/maps/ParcelDelibird/scripts.pory"
	playse SE_SHIP
# 266 "data/maps/ParcelDelibird/scripts.pory"
	delay 40
# 267 "data/maps/ParcelDelibird/scripts.pory"
	warp MAP_PARCEL_ISLE, 15, 31
# 268 "data/maps/ParcelDelibird/scripts.pory"
	waitstate
	end

ParcelDelibird_ReturnFerry_2:
# 254 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_ReturnFerry_Text_0, MSGBOX_DEFAULT
# 255 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_ReturnFerry_5:
# 260 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_ReturnFerry_Text_2, MSGBOX_DEFAULT
# 261 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_ItemA::
# 273 "data/maps/ParcelDelibird/scripts.pory"
	finditem ITEM_NUGGET
	end


ParcelDelibird_ItemB::
# 277 "data/maps/ParcelDelibird/scripts.pory"
	finditem ITEM_STAR_PIECE
	end


ParcelDelibird_CaveMouth::
# 283 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 284 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 285 "data/maps/ParcelDelibird/scripts.pory"
	checkpartymove MOVE_FLASH
# 286 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq ParcelDelibird_CaveMouth_2
# 291 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_CaveMouth_Text_1, MSGBOX_YESNO
# 292 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_CaveMouth_5
# 297 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 298 "data/maps/ParcelDelibird/scripts.pory"
	warp MAP_PARCEL_CAVERN, 16, 10
# 299 "data/maps/ParcelDelibird/scripts.pory"
	waitstate
	end

ParcelDelibird_CaveMouth_2:
# 287 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_CaveMouth_Text_0, MSGBOX_DEFAULT
# 288 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_CaveMouth_5:
# 293 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_CaveMouth_Text_2, MSGBOX_DEFAULT
# 294 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer::
# 305 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_REVELER, ParcelDelibird_RevelerTrainer_Text_0, ParcelDelibird_RevelerTrainer_Text_1, ParcelDelibird_RevelerTrainer_FirstWin
# 309 "data/maps/ParcelDelibird/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 310 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibird_RevelerTrainer_3
ParcelDelibird_RevelerTrainer_1:
# 313 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibird_RevelerTrainer_8
ParcelDelibird_RevelerTrainer_6:
# 316 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibird_RevelerTrainer_13
ParcelDelibird_RevelerTrainer_11:
# 319 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibird_RevelerTrainer_18
ParcelDelibird_RevelerTrainer_16:
# 322 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibird_RevelerTrainer_2:
# 311 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_RevelerTrainer_R2
	goto ParcelDelibird_RevelerTrainer_1

ParcelDelibird_RevelerTrainer_3:
# 310 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_REVELER_R2
	goto_if 0, ParcelDelibird_RevelerTrainer_2
	goto ParcelDelibird_RevelerTrainer_1

ParcelDelibird_RevelerTrainer_7:
# 314 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_RevelerTrainer_R3
	goto ParcelDelibird_RevelerTrainer_6

ParcelDelibird_RevelerTrainer_8:
# 313 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_REVELER_R3
	goto_if 0, ParcelDelibird_RevelerTrainer_7
	goto ParcelDelibird_RevelerTrainer_6

ParcelDelibird_RevelerTrainer_12:
# 317 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_RevelerTrainer_R4
	goto ParcelDelibird_RevelerTrainer_11

ParcelDelibird_RevelerTrainer_13:
# 316 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_REVELER_R4
	goto_if 0, ParcelDelibird_RevelerTrainer_12
	goto ParcelDelibird_RevelerTrainer_11

ParcelDelibird_RevelerTrainer_17:
# 320 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_RevelerTrainer_R5
	goto ParcelDelibird_RevelerTrainer_16

ParcelDelibird_RevelerTrainer_18:
# 319 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_REVELER_R5
	goto_if 0, ParcelDelibird_RevelerTrainer_17
	goto ParcelDelibird_RevelerTrainer_16


ParcelDelibird_RevelerTrainer_FirstWin::
# 326 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_Text_2, MSGBOX_DEFAULT
# 327 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer_R2::
# 331 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 332 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 333 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_0, MSGBOX_YESNO
# 334 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_RevelerTrainer_R2_2
# 339 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_REVELER_R2, ParcelDelibird_RevelerTrainer_R2_Text_2
# 340 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_3, MSGBOX_DEFAULT
# 341 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_RevelerTrainer_R2_2:
# 335 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_1, MSGBOX_DEFAULT
# 336 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer_R3::
# 345 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 346 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 347 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R3_Text_0, MSGBOX_YESNO
# 348 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_RevelerTrainer_R3_2
# 353 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_REVELER_R3, ParcelDelibird_RevelerTrainer_R2_Text_2
# 354 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R3_Text_1, MSGBOX_DEFAULT
# 355 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_RevelerTrainer_R3_2:
# 349 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_1, MSGBOX_DEFAULT
# 350 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer_R4::
# 359 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 360 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 361 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R4_Text_0, MSGBOX_YESNO
# 362 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_RevelerTrainer_R4_2
# 367 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_REVELER_R4, ParcelDelibird_RevelerTrainer_R2_Text_2
# 368 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R4_Text_1, MSGBOX_DEFAULT
# 369 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_RevelerTrainer_R4_2:
# 363 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_1, MSGBOX_DEFAULT
# 364 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer_R5::
# 373 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 374 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 375 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R5_Text_0, MSGBOX_YESNO
# 376 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_RevelerTrainer_R5_2
# 381 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_REVELER_R5, ParcelDelibird_RevelerTrainer_R5_Text_1
# 382 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R5_Text_2, MSGBOX_DEFAULT
# 383 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_RevelerTrainer_R5_2:
# 377 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_R2_Text_1, MSGBOX_DEFAULT
# 378 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_GymIlex::
# 395 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelDelibird_GymIlex_2
ParcelDelibird_GymIlex_1:
# 398 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 399 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 400 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, ParcelDelibird_GymIlex_5
ParcelDelibird_GymIlex_4:
# 414 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_6, MSGBOX_DEFAULT
# 415 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_7, MSGBOX_DEFAULT
# 416 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_GymIlex_2:
# 396 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_GymIlex_Rematch
	goto ParcelDelibird_GymIlex_1

ParcelDelibird_GymIlex_5:
# 401 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_0, MSGBOX_DEFAULT
# 402 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_1, MSGBOX_YESNO
# 403 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelDelibird_GymIlex_8
# 406 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_3, MSGBOX_DEFAULT
# 407 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_EXAM_8
ParcelDelibird_GymIlex_7:
# 409 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_4, MSGBOX_DEFAULT
# 410 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM8, ParcelDelibird_GymIlex_Text_5
# 411 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_GymIlex_Defeated
	goto ParcelDelibird_GymIlex_4

ParcelDelibird_GymIlex_8:
# 404 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_2, MSGBOX_DEFAULT
	goto ParcelDelibird_GymIlex_7


ParcelDelibird_GymIlex_Defeated::
# 421 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_BADGE08_GET
# 422 "data/maps/ParcelDelibird/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 423 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Defeated_Text_0, MSGBOX_DEFAULT
# 424 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_HM07
# 425 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Defeated_Text_1, MSGBOX_DEFAULT
# 426 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_SquareKeeper::
# 435 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 436 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 437 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_SquareKeeper_2
# 442 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_DEL_GIFT_SQUARE, ParcelDelibird_SquareKeeper_5
# 447 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_2, MSGBOX_DEFAULT
# 448 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_3, MSGBOX_DEFAULT
# 449 "data/maps/ParcelDelibird/scripts.pory"
	random 4
# 450 "data/maps/ParcelDelibird/scripts.pory"
	switch VAR_RESULT
# 451 "data/maps/ParcelDelibird/scripts.pory"
	case 0, ParcelDelibird_SquareKeeper_9
# 453 "data/maps/ParcelDelibird/scripts.pory"
	case 1, ParcelDelibird_SquareKeeper_10
# 455 "data/maps/ParcelDelibird/scripts.pory"
	case 2, ParcelDelibird_SquareKeeper_11
# 457 "data/maps/ParcelDelibird/scripts.pory"
	case 3, ParcelDelibird_SquareKeeper_12
ParcelDelibird_SquareKeeper_7:
# 460 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_DEL_GIFT_SQUARE
# 461 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_4, MSGBOX_YESNO
# 462 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelDelibird_SquareKeeper_14
# 474 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_7, MSGBOX_DEFAULT
# 475 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_SquareKeeper_2:
# 438 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_0, MSGBOX_DEFAULT
# 439 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_SquareKeeper_5:
# 443 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_1, MSGBOX_DEFAULT
# 444 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_SquareKeeper_9:
# 452 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_LUCKY_EGG
	goto ParcelDelibird_SquareKeeper_7

ParcelDelibird_SquareKeeper_10:
# 454 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_STAR_PIECE
	goto ParcelDelibird_SquareKeeper_7

ParcelDelibird_SquareKeeper_11:
# 456 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_PP_UP
	goto ParcelDelibird_SquareKeeper_7

ParcelDelibird_SquareKeeper_12:
# 458 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 3
	goto ParcelDelibird_SquareKeeper_7

ParcelDelibird_SquareKeeper_14:
# 463 "data/maps/ParcelDelibird/scripts.pory"
	checkitem ITEM_POTION
# 464 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelDelibird_SquareKeeper_17
# 470 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_6, MSGBOX_DEFAULT
# 471 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_SquareKeeper_17:
# 465 "data/maps/ParcelDelibird/scripts.pory"
	removeitem ITEM_POTION
# 466 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_5, MSGBOX_DEFAULT
# 467 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_WarmingHut::
# 481 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 482 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 483 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_WarmingHut_Text_0, MSGBOX_DEFAULT
# 484 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_WarmingHut_Text_1, MSGBOX_DEFAULT
# 485 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 486 "data/maps/ParcelDelibird/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 487 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_WarmingHut_Text_2, MSGBOX_DEFAULT
# 488 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Stringer::
# 494 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 495 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 496 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Stringer_Text_0, MSGBOX_DEFAULT
# 497 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Stringer_Text_1, MSGBOX_DEFAULT
# 498 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Blankets::
# 504 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 505 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 506 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Blankets_Text_0, MSGBOX_DEFAULT
# 507 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Blankets_Text_1, MSGBOX_DEFAULT
# 508 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Hakon::
# 514 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_DEL_HAKON, ParcelDelibird_T_Hakon_Text_0, ParcelDelibird_T_Hakon_Text_1, ParcelDelibird_T_Hakon_FirstWin
# 518 "data/maps/ParcelDelibird/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 519 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibird_T_Hakon_3
ParcelDelibird_T_Hakon_1:
# 522 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibird_T_Hakon_8
ParcelDelibird_T_Hakon_6:
# 525 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibird_T_Hakon_13
ParcelDelibird_T_Hakon_11:
# 528 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibird_T_Hakon_18
ParcelDelibird_T_Hakon_16:
# 531 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibird_T_Hakon_2:
# 520 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Hakon_R2
	goto ParcelDelibird_T_Hakon_1

ParcelDelibird_T_Hakon_3:
# 519 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_HAKON_R2
	goto_if 0, ParcelDelibird_T_Hakon_2
	goto ParcelDelibird_T_Hakon_1

ParcelDelibird_T_Hakon_7:
# 523 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Hakon_R3
	goto ParcelDelibird_T_Hakon_6

ParcelDelibird_T_Hakon_8:
# 522 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_HAKON_R3
	goto_if 0, ParcelDelibird_T_Hakon_7
	goto ParcelDelibird_T_Hakon_6

ParcelDelibird_T_Hakon_12:
# 526 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Hakon_R4
	goto ParcelDelibird_T_Hakon_11

ParcelDelibird_T_Hakon_13:
# 525 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_HAKON_R4
	goto_if 0, ParcelDelibird_T_Hakon_12
	goto ParcelDelibird_T_Hakon_11

ParcelDelibird_T_Hakon_17:
# 529 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Hakon_R5
	goto ParcelDelibird_T_Hakon_16

ParcelDelibird_T_Hakon_18:
# 528 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_HAKON_R5
	goto_if 0, ParcelDelibird_T_Hakon_17
	goto ParcelDelibird_T_Hakon_16


ParcelDelibird_T_Hakon_FirstWin::
# 535 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_Text_2, MSGBOX_DEFAULT
# 536 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Hakon_R2::
# 540 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 541 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 542 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_0, MSGBOX_YESNO
# 543 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Hakon_R2_2
# 548 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_HAKON_R2, ParcelDelibird_T_Hakon_R2_Text_2
# 549 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_3, MSGBOX_DEFAULT
# 550 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Hakon_R2_2:
# 544 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_1, MSGBOX_DEFAULT
# 545 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Hakon_R3::
# 554 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 555 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 556 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R3_Text_0, MSGBOX_YESNO
# 557 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Hakon_R3_2
# 562 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_HAKON_R3, ParcelDelibird_T_Hakon_R2_Text_2
# 563 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R3_Text_1, MSGBOX_DEFAULT
# 564 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Hakon_R3_2:
# 558 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_1, MSGBOX_DEFAULT
# 559 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Hakon_R4::
# 568 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 569 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 570 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R4_Text_0, MSGBOX_YESNO
# 571 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Hakon_R4_2
# 576 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_HAKON_R4, ParcelDelibird_T_Hakon_R4_Text_1
# 577 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R4_Text_2, MSGBOX_DEFAULT
# 578 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Hakon_R4_2:
# 572 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_1, MSGBOX_DEFAULT
# 573 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Hakon_R5::
# 582 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 583 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 584 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R5_Text_0, MSGBOX_YESNO
# 585 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Hakon_R5_2
# 590 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_HAKON_R5, ParcelDelibird_T_Hakon_R5_Text_1
# 591 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R5_Text_2, MSGBOX_DEFAULT
# 592 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Hakon_R5_2:
# 586 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Hakon_R2_Text_1, MSGBOX_DEFAULT
# 587 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Bjarne::
# 596 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_DEL_BJARNE, ParcelDelibird_T_Bjarne_Text_0, ParcelDelibird_T_Bjarne_Text_1, ParcelDelibird_T_Bjarne_FirstWin
# 600 "data/maps/ParcelDelibird/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 601 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibird_T_Bjarne_3
ParcelDelibird_T_Bjarne_1:
# 604 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibird_T_Bjarne_8
ParcelDelibird_T_Bjarne_6:
# 607 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibird_T_Bjarne_13
ParcelDelibird_T_Bjarne_11:
# 610 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibird_T_Bjarne_18
ParcelDelibird_T_Bjarne_16:
# 613 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibird_T_Bjarne_2:
# 602 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Bjarne_R2
	goto ParcelDelibird_T_Bjarne_1

ParcelDelibird_T_Bjarne_3:
# 601 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_BJARNE_R2
	goto_if 0, ParcelDelibird_T_Bjarne_2
	goto ParcelDelibird_T_Bjarne_1

ParcelDelibird_T_Bjarne_7:
# 605 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Bjarne_R3
	goto ParcelDelibird_T_Bjarne_6

ParcelDelibird_T_Bjarne_8:
# 604 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_BJARNE_R3
	goto_if 0, ParcelDelibird_T_Bjarne_7
	goto ParcelDelibird_T_Bjarne_6

ParcelDelibird_T_Bjarne_12:
# 608 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Bjarne_R4
	goto ParcelDelibird_T_Bjarne_11

ParcelDelibird_T_Bjarne_13:
# 607 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_BJARNE_R4
	goto_if 0, ParcelDelibird_T_Bjarne_12
	goto ParcelDelibird_T_Bjarne_11

ParcelDelibird_T_Bjarne_17:
# 611 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Bjarne_R5
	goto ParcelDelibird_T_Bjarne_16

ParcelDelibird_T_Bjarne_18:
# 610 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_BJARNE_R5
	goto_if 0, ParcelDelibird_T_Bjarne_17
	goto ParcelDelibird_T_Bjarne_16


ParcelDelibird_T_Bjarne_FirstWin::
# 617 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_Text_2, MSGBOX_DEFAULT
# 618 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Bjarne_R2::
# 622 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 623 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 624 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_0, MSGBOX_YESNO
# 625 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Bjarne_R2_2
# 630 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_BJARNE_R2, ParcelDelibird_T_Bjarne_R2_Text_2
# 631 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_3, MSGBOX_DEFAULT
# 632 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Bjarne_R2_2:
# 626 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_1, MSGBOX_DEFAULT
# 627 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Bjarne_R3::
# 636 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 637 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 638 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R3_Text_0, MSGBOX_YESNO
# 639 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Bjarne_R3_2
# 644 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_BJARNE_R3, ParcelDelibird_T_Bjarne_R3_Text_1
# 645 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R3_Text_2, MSGBOX_DEFAULT
# 646 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Bjarne_R3_2:
# 640 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_1, MSGBOX_DEFAULT
# 641 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Bjarne_R4::
# 650 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 651 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 652 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R4_Text_0, MSGBOX_YESNO
# 653 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Bjarne_R4_2
# 658 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_BJARNE_R4, ParcelDelibird_T_Bjarne_R4_Text_1
# 659 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R4_Text_2, MSGBOX_DEFAULT
# 660 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Bjarne_R4_2:
# 654 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_1, MSGBOX_DEFAULT
# 655 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Bjarne_R5::
# 664 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 665 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 666 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R5_Text_0, MSGBOX_YESNO
# 667 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Bjarne_R5_2
# 672 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_BJARNE_R5, ParcelDelibird_T_Bjarne_R5_Text_1
# 673 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R5_Text_2, MSGBOX_DEFAULT
# 674 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Bjarne_R5_2:
# 668 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Bjarne_R2_Text_1, MSGBOX_DEFAULT
# 669 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Frida::
# 678 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_DEL_FRIDA, ParcelDelibird_T_Frida_Text_0, ParcelDelibird_T_Frida_Text_1, ParcelDelibird_T_Frida_FirstWin
# 682 "data/maps/ParcelDelibird/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 683 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibird_T_Frida_3
ParcelDelibird_T_Frida_1:
# 686 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibird_T_Frida_8
ParcelDelibird_T_Frida_6:
# 689 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibird_T_Frida_13
ParcelDelibird_T_Frida_11:
# 692 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibird_T_Frida_18
ParcelDelibird_T_Frida_16:
# 695 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibird_T_Frida_2:
# 684 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Frida_R2
	goto ParcelDelibird_T_Frida_1

ParcelDelibird_T_Frida_3:
# 683 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_FRIDA_R2
	goto_if 0, ParcelDelibird_T_Frida_2
	goto ParcelDelibird_T_Frida_1

ParcelDelibird_T_Frida_7:
# 687 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Frida_R3
	goto ParcelDelibird_T_Frida_6

ParcelDelibird_T_Frida_8:
# 686 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_FRIDA_R3
	goto_if 0, ParcelDelibird_T_Frida_7
	goto ParcelDelibird_T_Frida_6

ParcelDelibird_T_Frida_12:
# 690 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Frida_R4
	goto ParcelDelibird_T_Frida_11

ParcelDelibird_T_Frida_13:
# 689 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_FRIDA_R4
	goto_if 0, ParcelDelibird_T_Frida_12
	goto ParcelDelibird_T_Frida_11

ParcelDelibird_T_Frida_17:
# 693 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Frida_R5
	goto ParcelDelibird_T_Frida_16

ParcelDelibird_T_Frida_18:
# 692 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_FRIDA_R5
	goto_if 0, ParcelDelibird_T_Frida_17
	goto ParcelDelibird_T_Frida_16


ParcelDelibird_T_Frida_FirstWin::
# 699 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_Text_2, MSGBOX_DEFAULT
# 700 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Frida_R2::
# 704 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 705 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 706 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_0, MSGBOX_YESNO
# 707 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Frida_R2_2
# 712 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_FRIDA_R2, ParcelDelibird_T_Frida_R2_Text_2
# 713 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_3, MSGBOX_DEFAULT
# 714 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Frida_R2_2:
# 708 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_1, MSGBOX_DEFAULT
# 709 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Frida_R3::
# 718 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 719 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 720 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R3_Text_0, MSGBOX_YESNO
# 721 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Frida_R3_2
# 726 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_FRIDA_R3, ParcelDelibird_T_Frida_R3_Text_1
# 727 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R3_Text_2, MSGBOX_DEFAULT
# 728 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Frida_R3_2:
# 722 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_1, MSGBOX_DEFAULT
# 723 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Frida_R4::
# 732 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 733 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 734 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R4_Text_0, MSGBOX_YESNO
# 735 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Frida_R4_2
# 740 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_FRIDA_R4, ParcelDelibird_T_Frida_R4_Text_1
# 741 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R4_Text_2, MSGBOX_DEFAULT
# 742 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Frida_R4_2:
# 736 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_1, MSGBOX_DEFAULT
# 737 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Frida_R5::
# 746 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 747 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 748 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R5_Text_0, MSGBOX_YESNO
# 749 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Frida_R5_2
# 754 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_FRIDA_R5, ParcelDelibird_T_Frida_R5_Text_1
# 755 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R5_Text_2, MSGBOX_DEFAULT
# 756 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Frida_R5_2:
# 750 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Frida_R2_Text_1, MSGBOX_DEFAULT
# 751 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Erlend::
# 760 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_DEL_ERLEND, ParcelDelibird_T_Erlend_Text_0, ParcelDelibird_T_Erlend_Text_1, ParcelDelibird_T_Erlend_FirstWin
# 764 "data/maps/ParcelDelibird/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 765 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibird_T_Erlend_3
ParcelDelibird_T_Erlend_1:
# 768 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibird_T_Erlend_8
ParcelDelibird_T_Erlend_6:
# 771 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibird_T_Erlend_13
ParcelDelibird_T_Erlend_11:
# 774 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibird_T_Erlend_18
ParcelDelibird_T_Erlend_16:
# 777 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibird_T_Erlend_2:
# 766 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Erlend_R2
	goto ParcelDelibird_T_Erlend_1

ParcelDelibird_T_Erlend_3:
# 765 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_ERLEND_R2
	goto_if 0, ParcelDelibird_T_Erlend_2
	goto ParcelDelibird_T_Erlend_1

ParcelDelibird_T_Erlend_7:
# 769 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Erlend_R3
	goto ParcelDelibird_T_Erlend_6

ParcelDelibird_T_Erlend_8:
# 768 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_ERLEND_R3
	goto_if 0, ParcelDelibird_T_Erlend_7
	goto ParcelDelibird_T_Erlend_6

ParcelDelibird_T_Erlend_12:
# 772 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Erlend_R4
	goto ParcelDelibird_T_Erlend_11

ParcelDelibird_T_Erlend_13:
# 771 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_ERLEND_R4
	goto_if 0, ParcelDelibird_T_Erlend_12
	goto ParcelDelibird_T_Erlend_11

ParcelDelibird_T_Erlend_17:
# 775 "data/maps/ParcelDelibird/scripts.pory"
	goto ParcelDelibird_T_Erlend_R5
	goto ParcelDelibird_T_Erlend_16

ParcelDelibird_T_Erlend_18:
# 774 "data/maps/ParcelDelibird/scripts.pory"
	checktrainerflag TRAINER_SKALD_DEL_ERLEND_R5
	goto_if 0, ParcelDelibird_T_Erlend_17
	goto ParcelDelibird_T_Erlend_16


ParcelDelibird_T_Erlend_FirstWin::
# 781 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_Text_2, MSGBOX_DEFAULT
# 782 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Erlend_R2::
# 786 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 787 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 788 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_0, MSGBOX_YESNO
# 789 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Erlend_R2_2
# 794 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_ERLEND_R2, ParcelDelibird_T_Erlend_R2_Text_2
# 795 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_3, MSGBOX_DEFAULT
# 796 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Erlend_R2_2:
# 790 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_1, MSGBOX_DEFAULT
# 791 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Erlend_R3::
# 800 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 801 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 802 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R3_Text_0, MSGBOX_YESNO
# 803 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Erlend_R3_2
# 808 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_ERLEND_R3, ParcelDelibird_T_Erlend_R3_Text_1
# 809 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R3_Text_2, MSGBOX_DEFAULT
# 810 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Erlend_R3_2:
# 804 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_1, MSGBOX_DEFAULT
# 805 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Erlend_R4::
# 814 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 815 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 816 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R4_Text_0, MSGBOX_YESNO
# 817 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Erlend_R4_2
# 822 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_ERLEND_R4, ParcelDelibird_T_Erlend_R3_Text_1
# 823 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R4_Text_1, MSGBOX_DEFAULT
# 824 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Erlend_R4_2:
# 818 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_1, MSGBOX_DEFAULT
# 819 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_T_Erlend_R5::
# 828 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 829 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 830 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R5_Text_0, MSGBOX_YESNO
# 831 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_T_Erlend_R5_2
# 836 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DEL_ERLEND_R5, ParcelDelibird_T_Erlend_R3_Text_1
# 837 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R5_Text_1, MSGBOX_DEFAULT
# 838 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_T_Erlend_R5_2:
# 832 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_T_Erlend_R2_Text_1, MSGBOX_DEFAULT
# 833 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Epilogue::
# 844 "data/maps/ParcelDelibird/scripts.pory"
	lockall
# 845 "data/maps/ParcelDelibird/scripts.pory"
	delay 20
# 846 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Epilogue_Text_0, MSGBOX_DEFAULT
# 847 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Epilogue_Text_1, MSGBOX_DEFAULT
# 848 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 849 "data/maps/ParcelDelibird/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 6
# 850 "data/maps/ParcelDelibird/scripts.pory"
	warp MAP_PARCEL_MARSH, 19, 9
# 851 "data/maps/ParcelDelibird/scripts.pory"
	waitstate
	end


ParcelDelibird_GymIlex_Rematch::
# 857 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 858 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 859 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Rematch_Text_0, MSGBOX_YESNO
# 860 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_GymIlex_Rematch_2
# 865 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM8_R, ParcelDelibird_GymIlex_Rematch_Text_2
# 866 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Rematch_Text_3, MSGBOX_DEFAULT
# 867 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_GymIlex_Rematch_2:
# 861 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Rematch_Text_1, MSGBOX_DEFAULT
# 862 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_PairLights::
# 874 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 875 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_PairLights_2
# 881 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibird_PairLights_3
# 887 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_9, MSGBOX_DEFAULT
# 888 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_10, MSGBOX_DEFAULT
# 889 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_11, MSGBOX_DEFAULT
# 890 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_12, MSGBOX_DEFAULT
# 891 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_13, MSGBOX_DEFAULT
ParcelDelibird_PairLights_1:
# 893 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_PairLights_2:
# 876 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_0, MSGBOX_DEFAULT
# 877 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_1, MSGBOX_DEFAULT
# 878 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_2, MSGBOX_DEFAULT
# 879 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_3, MSGBOX_DEFAULT
# 880 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_4, MSGBOX_DEFAULT
	goto ParcelDelibird_PairLights_1

ParcelDelibird_PairLights_3:
# 882 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_5, MSGBOX_DEFAULT
# 883 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_6, MSGBOX_DEFAULT
# 884 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_7, MSGBOX_DEFAULT
# 885 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairLights_Text_8, MSGBOX_DEFAULT
	goto ParcelDelibird_PairLights_1


ParcelDelibird_PairGround::
# 898 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 899 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_PairGround_2
# 905 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibird_PairGround_3
# 912 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_10, MSGBOX_DEFAULT
# 913 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_11, MSGBOX_DEFAULT
# 914 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_12, MSGBOX_DEFAULT
# 915 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_13, MSGBOX_DEFAULT
ParcelDelibird_PairGround_1:
# 917 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_PairGround_2:
# 900 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_0, MSGBOX_DEFAULT
# 901 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_1, MSGBOX_DEFAULT
# 902 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_2, MSGBOX_DEFAULT
# 903 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_3, MSGBOX_DEFAULT
# 904 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_4, MSGBOX_DEFAULT
	goto ParcelDelibird_PairGround_1

ParcelDelibird_PairGround_3:
# 906 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_5, MSGBOX_DEFAULT
# 907 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_6, MSGBOX_DEFAULT
# 908 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_7, MSGBOX_DEFAULT
# 909 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_8, MSGBOX_DEFAULT
# 910 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairGround_Text_9, MSGBOX_DEFAULT
	goto ParcelDelibird_PairGround_1


ParcelDelibird_LampStringer::
# 924 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 925 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 926 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SCRATCH_DONE, ParcelDelibird_LampStringer_2
# 928 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SCRATCH, ParcelDelibird_LampStringer_3
# 937 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_LampStringer_Text_3, MSGBOX_DEFAULT
# 938 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_Q_SCRATCH
ParcelDelibird_LampStringer_1:
# 940 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_LampStringer_2:
# 927 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_LampStringer_Text_0, MSGBOX_DEFAULT
	goto ParcelDelibird_LampStringer_1

ParcelDelibird_LampStringer_3:
# 929 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SCRATCH_FOUND, ParcelDelibird_LampStringer_7
# 934 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_LampStringer_Text_2, MSGBOX_DEFAULT
	goto ParcelDelibird_LampStringer_1

ParcelDelibird_LampStringer_7:
# 930 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_LampStringer_Text_1, MSGBOX_DEFAULT
# 931 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 932 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_Q_SCRATCH_DONE
	goto ParcelDelibird_LampStringer_1


ParcelDelibird_HutScratch::
# 945 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SCRATCH, ParcelDelibird_HutScratch_4
ParcelDelibird_HutScratch_3:
# 949 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_HutScratch_Text_1, MSGBOX_SIGN
ParcelDelibird_HutScratch_1:
	end

ParcelDelibird_HutScratch_2:
# 946 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_HutScratch_Text_0, MSGBOX_SIGN
# 947 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_Q_SCRATCH_FOUND
	goto ParcelDelibird_HutScratch_1

ParcelDelibird_HutScratch_4:
# 945 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SCRATCH_FOUND, ParcelDelibird_HutScratch_2
	goto ParcelDelibird_HutScratch_3


ParcelDelibird_FindCorner::
# 957 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CORNER, ParcelDelibird_FindCorner_4
ParcelDelibird_FindCorner_3:
# 961 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FindCorner_Text_1, MSGBOX_SIGN
ParcelDelibird_FindCorner_1:
	end

ParcelDelibird_FindCorner_2:
# 958 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FindCorner_Text_0, MSGBOX_SIGN
# 959 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_Q_CORNER_FOUND
	goto ParcelDelibird_FindCorner_1

ParcelDelibird_FindCorner_4:
# 957 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CORNER_FOUND, ParcelDelibird_FindCorner_2
	goto ParcelDelibird_FindCorner_3


ParcelDelibird_PairShore::
# 967 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 968 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_PairShore_2
# 973 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibird_PairShore_3
# 978 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_7, MSGBOX_DEFAULT
# 979 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_8, MSGBOX_DEFAULT
# 980 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_9, MSGBOX_DEFAULT
# 981 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_10, MSGBOX_DEFAULT
ParcelDelibird_PairShore_1:
# 983 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_PairShore_2:
# 969 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_0, MSGBOX_DEFAULT
# 970 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_1, MSGBOX_DEFAULT
# 971 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_2, MSGBOX_DEFAULT
# 972 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_3, MSGBOX_DEFAULT
	goto ParcelDelibird_PairShore_1

ParcelDelibird_PairShore_3:
# 974 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_4, MSGBOX_DEFAULT
# 975 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_5, MSGBOX_DEFAULT
# 976 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_PairShore_Text_6, MSGBOX_DEFAULT
	goto ParcelDelibird_PairShore_1


ParcelDelibird_Board1::
# 990 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Board1_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_Board2::
# 995 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Board2_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_Board3::
# 1002 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Board3_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_Board4::
# 1009 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Board4_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_Board5::
# 1016 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Board5_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_FirstEntry_Text_0:
# 55 "data/maps/ParcelDelibird/scripts.pory"
	.string "The boat noses in and the island takes\n"
	.string "you by surprise. String lights, cabins\l"
	.string "the colours of sweets, woodsmoke and\l"
	.string "something baking.\p"
	.string "People wave. They don't know you, and\n"
	.string "they wave anyway.$"

ParcelDelibird_FirstEntry_Text_1:
# 56 "data/maps/ParcelDelibird/scripts.pory"
	.string "It is the warmest place you have set\n"
	.string "foot in since you started keeping the\l"
	.string "notebook.\p"
	.string "You know, now, what the warmth is\n"
	.string "standing on. You climbed it. You\l"
	.string "couldn't fix it.$"

ParcelDelibird_FirstEntry_Text_2:
# 58 "data/maps/ParcelDelibird/scripts.pory"
	.string "A banner over the square snaps in the\n"
	.string "wind:\n"
	.string "DELIBIRD ISLE MIDWINTER -- ALL\l"
	.string "WELCOME.\p"
	.string "Smaller, underneath: in partnership\n"
	.string "with the Mereholt Foundation.\p"
	.string "{STR_VAR_1} leans into your leg. You\n"
	.string "go up into the lights.$"

ParcelDelibird_Elder_Text_0:
# 71 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Word reached us. Word always\n"
	.string "reaches an island last, and stays\l"
	.string "longest.\p"
	.string "You wrote it down and you didn't soften\n"
	.string "it. Herself in it too, I hear. That took\l"
	.string "something out of you, I expect.\p"
	.string "It ought to. The true ones cost.$"

ParcelDelibird_Elder_Text_1:
# 72 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: The channel won't refreeze for\n"
	.string "it, child. The winters don't read filings.\p"
	.string "But the lights are going up early this\n"
	.string "year -- you'll have seen. That's not us\l"
	.string "pretending.\p"
	.string "That's us carrying it.$"

ParcelDelibird_Elder_Text_2:
# 73 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: The festival was never about the\n"
	.string "cold, whatever the name says. It was\l"
	.string "about each other, in the cold.\p"
	.string "That part keeps. That part we don't\n"
	.string "need anyone's permission to keep.$"

ParcelDelibird_Elder_Text_3:
# 78 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: The young ones say give until\n"
	.string "it's a habit, so the giving's already\l"
	.string "done when the storm comes and there's\l"
	.string "no time to decide.\p"
	.string "You've got the habit now. I can see it\n"
	.string "on the bird.$"

ParcelDelibird_Elder_Text_4:
# 86 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Still carrying? Good. Who's\n"
	.string "waiting on you, then.$"

ParcelDelibird_Elder_Text_5:
# 88 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Tomas. The shore trail east, past\n"
	.string "the tall grass, then the stairs down to\l"
	.string "the sand. His cabin's the one with the\l"
	.string "cold corner.$"

ParcelDelibird_Elder_Text_6:
# 91 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Ingrid. The summit trail, up past\n"
	.string "the cave mouth, two sets of stairs.\l"
	.string "She's at the stakes. She's always at the\l"
	.string "stakes.$"

ParcelDelibird_Elder_Text_7:
# 94 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Rune. Along the cliff top past\n"
	.string "the rocks, out to the point. You'll see\l"
	.string "the beacon before you see him.$"

ParcelDelibird_Elder_Text_8:
# 96 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Go on. Reciprocity doesn't keep.$"

ParcelDelibird_Elder_Text_9:
# 100 "data/maps/ParcelDelibird/scripts.pory"
	.string "An old woman sorts folded blankets into\n"
	.string "oilcloth parcels, quick and sure, a\l"
	.string "Delibird stacking them at her elbow.\p"
	.string "Elder: Ranger, is it? Then make yourself\n"
	.string "useful in the good way, not the\l"
	.string "clipboard way.$"

ParcelDelibird_Elder_Text_10:
# 101 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: The island runs on this -- you\n"
	.string "give before you're asked, and the island\l"
	.string "gives back before you need. It's not\l"
	.string "charity. It's how a cold place keeps\l"
	.string "everyone alive through a bad season.\p"
	.string "The opposite of the people who only\n"
	.string "ever take from it.$"

ParcelDelibird_Elder_Text_11:
# 102 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: The relief round. Three doors the\n"
	.string "bird can't reach, the way its wings are\l"
	.string "this winter.\p"
	.string "Old Tomas, under the cliffs on the east\n"
	.string "shore -- his cabin's the one with the\l"
	.string "cold corner. Ingrid, up at the snow\l"
	.string "stakes on the summit -- lamp oil and\l"
	.string "tea. And Rune, out at the point beacon\l"
	.string "past the cliffs.\p"
	.string "Carry them for me?$"

ParcelDelibird_Elder_Text_12:
# 104 "data/maps/ParcelDelibird/scripts.pory"
	.string "You take the parcels. They are heavier\n"
	.string "than blankets should be. There is food\l"
	.string "in all three.$"

ParcelDelibird_Elder_RoundDone_Text_0:
# 111 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Tomas has his blanket, Ingrid her\n"
	.string "oil, Rune his tea. Three doors, on foot,\l"
	.string "in a day. Bless you.\p"
	.string "Come here. There's a thing we do for\n"
	.string "someone who carries for strangers\l"
	.string "without being asked twice.$"

ParcelDelibird_Elder_RoundDone_Text_1:
# 112 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: We raise Delibird here. Have for\n"
	.string "longer than the records. In a hard\l"
	.string "winter they carry food cabin to cabin\l"
	.string "-- they find the door that needs it.\l"
	.string "Nobody trained that into them. It's\l"
	.string "just what they are.$"

ParcelDelibird_Elder_RoundDone_Text_2:
# 113 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: This one took to you off the\n"
	.string "boat. Take it. It'll deliver for you the\l"
	.string "way it delivered for us.\p"
	.string "The storms are worse now. We'll need\n"
	.string "more of that, not less.$"

ParcelDelibird_Elder_RoundDone_Text_3:
# 117 "data/maps/ParcelDelibird/scripts.pory"
	.string "WREN received DELIBIRD.\p"
	.string "It shifts its little sack to one side\n"
	.string "and looks at you, ready to be useful.$"

ParcelDelibird_Elder_RoundDone_Text_4:
# 118 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder, quieter:\p"
	.string "Elder: There's a paper from the\n"
	.string "Foundation says we should think about\l"
	.string "relocating the festival. Somewhere it\l"
	.string "won't flood.\p"
	.string "We held it here anyway. While there's a\n"
	.string "here.\p"
	.string "Tell your people we said thank you, and\n"
	.string "no.$"

ParcelDelibird_Elder_RoundDone_Text_5:
# 119 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Stay a minute. We light the\n"
	.string "square when the round comes home. We\l"
	.string "always have.$"

ParcelDelibird_Elder_RoundDone_Text_6:
# 123 "data/maps/ParcelDelibird/scripts.pory"
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
# 126 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: There. That's the festival. The\n"
	.string "rest is cocoa.$"

ParcelDelibird_Ketil_Text_0:
# 136 "data/maps/ParcelDelibird/scripts.pory"
	.string "KETIL: Set a new sill this spring. Two\n"
	.string "hands above the old frost line, because\l"
	.string "the old line's a lie now.\p"
	.string "My father would have argued. He'd have\n"
	.string "lost.$"

ParcelDelibird_Ketil_Text_1:
# 142 "data/maps/ParcelDelibird/scripts.pory"
	.string "KETIL: To the second plank. …I set that\n"
	.string "sill a hand above the frost line,\l"
	.string "because that's where my father said to\l"
	.string "set it. His frost line.\p"
	.string "Here. I don't need these; I need the\n"
	.string "ground to hold still, and nobody sells\l"
	.string "that.$"

ParcelDelibird_Ketil_Text_2:
# 146 "data/maps/ParcelDelibird/scripts.pory"
	.string "KETIL: The shore, where the cabin was.\n"
	.string "The sill, if it's showing.$"

ParcelDelibird_Ketil_Text_3:
# 151 "data/maps/ParcelDelibird/scripts.pory"
	.string "KETIL: TOMAS's old cabin stood on the\n"
	.string "shore here till the corner went into the\l"
	.string "ground. We moved him. The sill's still\l"
	.string "down there, I think, if you want to see\l"
	.string "what a cabin looks like when the island\l"
	.string "takes it back.\p"
	.string "Read me how far the sill's sunk. I can't\n"
	.string "go down there. I built it.$"

ParcelDelibird_Ketil_Text_4:
# 157 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ketil: I mend nets. The nets are the\n"
	.string "same. What comes up in them isn't.\p"
	.string "That's in your paper, I'm told, in better\n"
	.string "words than mine.$"

ParcelDelibird_Ketil_Text_5:
# 162 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ketil: The coast paper came over on the\n"
	.string "ferry. The catch all one size, and a\l"
	.string "ranger who wrote it down in front of the\l"
	.string "cannery.\p"
	.string "Tomas read it twice. He said that's the\n"
	.string "island in you. Then he said mind the\l"
	.string "stairs.$"

ParcelDelibird_Ketil_Text_6:
# 166 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ketil: Tomas took his cabin down under\n"
	.string "the cliffs when the green went soft\l"
	.string "under it. East trail, past the tall\l"
	.string "grass, then the stairs.\p"
	.string "Mind him. He'll try to give you\n"
	.string "something. Let him.$"

ParcelDelibird_Giver_Text_0:
# 176 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: Pass it on someday. Whoever's\n"
	.string "cold next. The hearing didn't put a coat\l"
	.string "on anyone. We did. We'll keep doing it.$"

ParcelDelibird_Giver_Text_1:
# 181 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: Pass it on someday, that's all.\n"
	.string "To whoever's cold next.$"

ParcelDelibird_Giver_Text_2:
# 185 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: New face! Midwinter rule:\n"
	.string "nobody meets the giving table\l"
	.string "empty-handed.\p"
	.string "Here -- from the square to you. Don't\n"
	.string "thank me. Thank me by doing it to the\l"
	.string "next one.$"

ParcelDelibird_Giver_Text_3:
# 188 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: A feather-charm. The old folk\n"
	.string "say it keeps the cold honest.\p"
	.string "We could use a little more honest cold.\n"
	.string "Less every year to keep.$"

ParcelDelibird_Relief_Text_0:
# 198 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: Bailed dry. It'll be back by the\n"
	.string "thaw moon, higher. Your filing says so,\l"
	.string "in better words than mine. It's good to\l"
	.string "be in a filing. It's like being counted.$"

ParcelDelibird_Relief_Text_1:
# 203 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: Bailed dry for now. It'll be\n"
	.string "back by the thaw moon. It always comes\l"
	.string "back a little higher.\p"
	.string "Thanks for the arms, Ranger.$"

ParcelDelibird_Relief_Text_2:
# 207 "data/maps/ParcelDelibird/scripts.pory"
	.string "A man stacks sandbags against a seep\n"
	.string "of meltwater rising through what used\l"
	.string "to be the village green. A Delibird\l"
	.string "ferries icy blocks to shore the wall.\p"
	.string "Villager: Ranger! Spare arms? The\n"
	.string "ground's let go under here -- water\l"
	.string "comes up where there's no rain to\l"
	.string "explain it.$"

ParcelDelibird_Relief_Text_3:
# 208 "data/maps/ParcelDelibird/scripts.pory"
	.string "You work the line until the seep is\n"
	.string "bagged back. The Delibird drops the\l"
	.string "last block and shakes off, pleased.$"

ParcelDelibird_Relief_Text_4:
# 210 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: There. Dry.\p"
	.string "You don't say it and he doesn't ask: the\n"
	.string "ice under us is thawing, and bags hold\l"
	.string "water, not winters. We didn't fix it. We\l"
	.string "bought a season.\p"
	.string "Villager: A season's a lot, some years.\n"
	.string "Thank you.$"

ParcelDelibird_Delibird_Text_0:
# 218 "data/maps/ParcelDelibird/scripts.pory"
	.string "A Delibird works the square, tucking a\n"
	.string "wrapped something into a child's hands,\l"
	.string "then another's, never its own.\p"
	.string "It notices you watching. It considers\n"
	.string "its sack, considers you -- and decides\l"
	.string "you look like you have enough.\p"
	.string "It moves on. That, too, is the lesson.$"

ParcelDelibird_SlumpSign_Text_0:
# 225 "data/maps/ParcelDelibird/scripts.pory"
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
# 230 "data/maps/ParcelDelibird/scripts.pory"
	.string "DELIBIRD ISLE MIDWINTER -- PROGRAMME\p"
	.string "The giving table, all day. The relief\n"
	.string "round, when Marta says. The lighting, at\l"
	.string "dusk, when the round is home.\p"
	.string "Volunteers see Marta. Everyone is a\n"
	.string "volunteer.$"

ParcelDelibird_SummitTrailSign_Text_0:
# 235 "data/maps/ParcelDelibird/scripts.pory"
	.string "SUMMIT TRAIL\p"
	.string "The snow stakes and the tarn. Two sets\n"
	.string "of stairs. Ingrid is at the top; she does\l"
	.string "not come down for Midwinter.\p"
	.string "The snowline marker has been removed\n"
	.string "for repainting.$"

ParcelDelibird_ShoreTrailSign_Text_0:
# 240 "data/maps/ParcelDelibird/scripts.pory"
	.string "SHORE TRAIL\p"
	.string "To the cliffs, the beach and the point\n"
	.string "beacon. Tomas's cabin is below the east\l"
	.string "stairs.\p"
	.string "The path along the edge is checked\n"
	.string "each spring. The edge is not.$"

ParcelDelibird_BannerSign_Text_0:
# 245 "data/maps/ParcelDelibird/scripts.pory"
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
# 254 "data/maps/ParcelDelibird/scripts.pory"
	.string "Sailor: Back to the mainland, Ranger?\n"
	.string "The island will be here, for a while yet.\l"
	.string "Your paper didn't change the ice. It\l"
	.string "changed what the ice is called in a room\l"
	.string "far away. That's something.$"

ParcelDelibird_ReturnFerry_Text_1:
# 258 "data/maps/ParcelDelibird/scripts.pory"
	.string "Sailor: Back to the mainland, Ranger?\n"
	.string "Whenever you're ready.\p"
	.string "The island will be here. For a while yet,\n"
	.string "it'll be here.$"

ParcelDelibird_ReturnFerry_Text_2:
# 260 "data/maps/ParcelDelibird/scripts.pory"
	.string "Sailor: Stay for the lights, then.\n"
	.string "They're worth it.$"

ParcelDelibird_CaveMouth_Text_0:
# 287 "data/maps/ParcelDelibird/scripts.pory"
	.string "A low cleft in the rock breathes cold\n"
	.string "air -- a cave mouth, pitch dark a few\l"
	.string "steps in.\p"
	.string "You'd walk into a wall in there, or worse.\n"
	.string "Nothing in your party can throw light\l"
	.string "that far. Not yet.$"

ParcelDelibird_CaveMouth_Text_1:
# 291 "data/maps/ParcelDelibird/scripts.pory"
	.string "The cave mouth breathes its old, deep\n"
	.string "cold. One of your Pokémon can light the\l"
	.string "dark in there -- the glow reaches in and\l"
	.string "finds no far wall.\p"
	.string "Go in?$"

ParcelDelibird_CaveMouth_Text_2:
# 293 "data/maps/ParcelDelibird/scripts.pory"
	.string "You leave the cold where it is, for now.$"

ParcelDelibird_RevelerTrainer_Text_0:
# 306 "data/maps/ParcelDelibird/scripts.pory"
	.string "Noel: A Ranger! At Midwinter! You HAVE\n"
	.string "to battle me, it's tradition.\p"
	.string "Loser owes the winner cocoa. We don't\n"
	.string "keep score with money up here -- we\l"
	.string "keep it with cocoa.$"

ParcelDelibird_RevelerTrainer_Text_1:
# 307 "data/maps/ParcelDelibird/scripts.pory"
	.string "Noel: Awww. Fine, fine -- cocoa's on me!\n"
	.string "That's the best way to lose anyhow.$"

ParcelDelibird_RevelerTrainer_Text_2:
# 322 "data/maps/ParcelDelibird/scripts.pory"
	.string "Noel: Gran says the festival's smaller\n"
	.string "every year. Says the ice comes in slower\l"
	.string "than it did.\p"
	.string "I don't really get it. But I get the\n"
	.string "cocoa. Come on, before it's cold!$"

ParcelDelibird_RevelerTrainer_R2_Text_0:
# 333 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelDelibird_RevelerTrainer_R2_Text_1:
# 335 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Suit yourself. I'm here.$"

ParcelDelibird_RevelerTrainer_R2_Text_2:
# 339 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Still yours.$"

ParcelDelibird_RevelerTrainer_R2_Text_3:
# 340 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibird_RevelerTrainer_R3_Text_0:
# 347 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelDelibird_RevelerTrainer_R3_Text_1:
# 354 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibird_RevelerTrainer_R4_Text_0:
# 361 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelDelibird_RevelerTrainer_R4_Text_1:
# 368 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibird_RevelerTrainer_R5_Text_0:
# 375 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelDelibird_RevelerTrainer_R5_Text_1:
# 381 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: …Fair.$"

ParcelDelibird_RevelerTrainer_R5_Text_2:
# 382 "data/maps/ParcelDelibird/scripts.pory"
	.string "NOEL: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelDelibird_GymIlex_Text_0:
# 401 "data/maps/ParcelDelibird/scripts.pory"
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
	.string "change.$"

ParcelDelibird_GymIlex_Text_1:
# 402 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: The summit first. Thirteen\n"
	.string "patches of snow up there this\l"
	.string "Midwinter, by my cloth. More than last\l"
	.string "year?$"

ParcelDelibird_GymIlex_Text_2:
# 404 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: Fewer. Nineteen last year. People\n"
	.string "see thirteen patches and think snow. I\l"
	.string "see six that aren't there.\p"
	.string "Frame first, then count. Let's see you\n"
	.string "hold the frame.$"

ParcelDelibird_GymIlex_Text_3:
# 406 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: Fewer. Nineteen last year. The\n"
	.string "count goes one way, and it will go one\l"
	.string "way after I've stopped counting.\p"
	.string "You kept the frame. Now keep it with the\n"
	.string "current against you.$"

ParcelDelibird_GymIlex_Text_4:
# 409 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: A field hand should be able to do\n"
	.string "both. Show me you can hold a line of\l"
	.string "sight as steady as a line of evidence.\l"
	.string "From up here, looking down.$"

ParcelDelibird_GymIlex_Text_5:
# 410 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: Steady. You kept the frame. Few\n"
	.string "do, this high up.$"

ParcelDelibird_GymIlex_Text_6:
# 414 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex turns the red cloth over once,\n"
	.string "then pockets it.\p"
	.string "Ilex: The snowline I'm watching is lower\n"
	.string "than last Midwinter. I'll have the\l"
	.string "number before the festival packs up.\p"
	.string "Ilex: Numbers don't save a place. They\n"
	.string "just make it impossible to say later\l"
	.string "that nobody knew. Carry that with the\l"
	.string "badge.$"

ParcelDelibird_GymIlex_Text_7:
# 415 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: You hold a pen like somebody who\n"
	.string "learned to look from a brush. I won't\l"
	.string "ask.\p"
	.string "Red cloth is red cloth, whoever ties it.$"

ParcelDelibird_GymIlex_Defeated_Text_0:
# 423 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: The Skyline clearance. It marks\n"
	.string "you fit to read a place from any height\l"
	.string "-- and to be trusted on the harder\l"
	.string "water.\p"
	.string "You'll want the tool that goes with it.$"

ParcelDelibird_GymIlex_Defeated_Text_1:
# 425 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: WATERFALL. It takes you up the\n"
	.string "climbs that turn most people back.\p"
	.string "The corridor inland has a few. That's\n"
	.string "where the last of this gets written.\l"
	.string "You're nearly ready for it.$"

ParcelDelibird_SquareKeeper_Text_0:
# 438 "data/maps/ParcelDelibird/scripts.pory"
	.string "Keeper: The shelf thins and fills.\n"
	.string "Somebody put a MEREHOLT blanket on it\l"
	.string "last week. Folded in thirds. Nobody said\l"
	.string "anything. That's the ledger working.$"

ParcelDelibird_SquareKeeper_Text_1:
# 443 "data/maps/ParcelDelibird/scripts.pory"
	.string "Keeper: The shelf thins and fills, thins\n"
	.string "and fills.\p"
	.string "Nobody keeps the ledger, so nobody's\n"
	.string "ever behind.$"

ParcelDelibird_SquareKeeper_Text_2:
# 447 "data/maps/ParcelDelibird/scripts.pory"
	.string "A trestle table under the string lights,\n"
	.string "laid out with parcels -- mittens, dried\l"
	.string "fish, a kettle with a mended spout. A\l"
	.string "hand-lettered sign: TAKE ONE. LEAVE\l"
	.string "ONE, IF YOU CAN.\p"
	.string "The keeper waves you closer.\p"
	.string "Keeper: Off the ferry? Then you're\n"
	.string "furthest from home, and that puts you\l"
	.string "first in line. House rule.$"

ParcelDelibird_SquareKeeper_Text_3:
# 448 "data/maps/ParcelDelibird/scripts.pory"
	.string "Keeper: Go on -- the wrapped ones. No\n"
	.string "peeking, no choosing. That's the whole\l"
	.string "game.\p"
	.string "You take the parcel your hand lands on.$"

ParcelDelibird_SquareKeeper_Text_4:
# 461 "data/maps/ParcelDelibird/scripts.pory"
	.string "Leave something on the shelf?$"

ParcelDelibird_SquareKeeper_Text_5:
# 466 "data/maps/ParcelDelibird/scripts.pory"
	.string "You set a Potion between the mittens\n"
	.string "and the kettle. The keeper doesn't\l"
	.string "watch you do it, which is its own kind of\l"
	.string "manners.\p"
	.string "Keeper: There. Now you're from here.$"

ParcelDelibird_SquareKeeper_Text_6:
# 470 "data/maps/ParcelDelibird/scripts.pory"
	.string "You go through your bag twice. The\n"
	.string "keeper waves it off before you can\l"
	.string "apologize.\p"
	.string "Keeper: The shelf's patient. So's the\n"
	.string "island.\n"
	.string "Bring it when you're rich.$"

ParcelDelibird_SquareKeeper_Text_7:
# 474 "data/maps/ParcelDelibird/scripts.pory"
	.string "Keeper: Then don't. The square doesn't\n"
	.string "keep accounts.\p"
	.string "That's not a kindness, mind. It's a\n"
	.string "discipline.$"

ParcelDelibird_WarmingHut_Text_0:
# 483 "data/maps/ParcelDelibird/scripts.pory"
	.string "The hut smells of woodsmoke and wet\n"
	.string "wool. A row of cots, a kettle always on,\l"
	.string "a crate of donated kit by the door.\p"
	.string "Hutkeeper: In you come. Storm rule --\n"
	.string "nobody asks, nobody pays.\p"
	.string "Weather counts as a storm. So does a\n"
	.string "long day.$"

ParcelDelibird_WarmingHut_Text_1:
# 484 "data/maps/ParcelDelibird/scripts.pory"
	.string "Hutkeeper: Set your partners down by\n"
	.string "the stove. Go on.$"

ParcelDelibird_WarmingHut_Text_2:
# 487 "data/maps/ParcelDelibird/scripts.pory"
	.string "Hutkeeper: There. Warmed through.\p"
	.string "This hut's the oldest building standing\n"
	.string "on the island, you know. The festival is\l"
	.string "younger than the kindness.\p"
	.string "Most things are.$"

ParcelDelibird_Stringer_Text_0:
# 496 "data/maps/ParcelDelibird/scripts.pory"
	.string "A woman on a short ladder feeds string\n"
	.string "lights along the eaves, a spare bulb\l"
	.string "held in her teeth. She talks around it.\p"
	.string "Stringer: Every year they go up a week\n"
	.string "earlier. Notice that? Gran strung them\l"
	.string "the week of first freeze. That was the\l"
	.string "signal -- that was the whole point of\l"
	.string "them.$"

ParcelDelibird_Stringer_Text_1:
# 497 "data/maps/ParcelDelibird/scripts.pory"
	.string "Stringer: There's been no first freeze\n"
	.string "worth the name in six years. So now we\l"
	.string "go by the calendar, like mainlanders.\p"
	.string "She fits the bulb, and it comes on, warm\n"
	.string "against the grey.\p"
	.string "Stringer: Still pretty, though. That's\n"
	.string "not nothing. Some years it's most of\l"
	.string "what we've got.$"

ParcelDelibird_Blankets_Text_0:
# 506 "data/maps/ParcelDelibird/scripts.pory"
	.string "A man folds relief blankets into neat\n"
	.string "thirds on a bench -- good thick wool,\l"
	.string "brand new.\p"
	.string "Folder: Storm stock. We fold it in\n"
	.string "autumn so nobody has to think in\l"
	.string "January.\p"
	.string "He squares a corner with more care than\n"
	.string "it needs.$"

ParcelDelibird_Blankets_Text_1:
# 507 "data/maps/ParcelDelibird/scripts.pory"
	.string "Folder: Good blankets, these. Warm.\n"
	.string "Free.\p"
	.string "You learn not to read the corner.\p"
	.string "The corner, small and tasteful, reads\n"
	.string "MEREHOLT FOUNDATION.$"

ParcelDelibird_T_Hakon_Text_0:
# 515 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Ferry's tied up till the festival\n"
	.string "ends. I've seen it eleven years running.\l"
	.string "Battle me, it's the only new thing today.$"

ParcelDelibird_T_Hakon_Text_1:
# 516 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: New thing: I lost.$"

ParcelDelibird_T_Hakon_Text_2:
# 531 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: The gift square's lovely. The\n"
	.string "thaw line's moved up the slope again.\l"
	.string "You can see both from the quay.$"

ParcelDelibird_T_Hakon_R2_Text_0:
# 542 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: I kept the team up for this.\n"
	.string "Again?$"

ParcelDelibird_T_Hakon_R2_Text_1:
# 544 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Another time, then.$"

ParcelDelibird_T_Hakon_R2_Text_2:
# 548 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: …Fair.$"

ParcelDelibird_T_Hakon_R2_Text_3:
# 549 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibird_T_Hakon_R3_Text_0:
# 556 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibird_T_Hakon_R3_Text_1:
# 563 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibird_T_Hakon_R4_Text_0:
# 570 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelDelibird_T_Hakon_R4_Text_1:
# 576 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Noted. Properly, this time.$"

ParcelDelibird_T_Hakon_R4_Text_2:
# 577 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibird_T_Hakon_R5_Text_0:
# 584 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibird_T_Hakon_R5_Text_1:
# 590 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: That's the one I wanted to see.$"

ParcelDelibird_T_Hakon_R5_Text_2:
# 591 "data/maps/ParcelDelibird/scripts.pory"
	.string "HAKON: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelDelibird_T_Bjarne_Text_0:
# 597 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: The summit trail's up past the\n"
	.string "cave mouth. Cold up there. Proper cold.\l"
	.string "Last of it. Battle before you climb.$"

ParcelDelibird_T_Bjarne_Text_1:
# 598 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Climb, then.$"

ParcelDelibird_T_Bjarne_Text_2:
# 613 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: The cavern's the only place the\n"
	.string "old cold lives now. MEREHOLT put an\l"
	.string "officer in it. In the cold. Logging it.$"

ParcelDelibird_T_Bjarne_R2_Text_0:
# 624 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelDelibird_T_Bjarne_R2_Text_1:
# 626 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Another time, then.$"

ParcelDelibird_T_Bjarne_R2_Text_2:
# 630 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Noted. Properly, this time.$"

ParcelDelibird_T_Bjarne_R2_Text_3:
# 631 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelDelibird_T_Bjarne_R3_Text_0:
# 638 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelDelibird_T_Bjarne_R3_Text_1:
# 644 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: …Fair.$"

ParcelDelibird_T_Bjarne_R3_Text_2:
# 645 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibird_T_Bjarne_R4_Text_0:
# 652 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelDelibird_T_Bjarne_R4_Text_1:
# 658 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Still yours.$"

ParcelDelibird_T_Bjarne_R4_Text_2:
# 659 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelDelibird_T_Bjarne_R5_Text_0:
# 666 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibird_T_Bjarne_R5_Text_1:
# 672 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: That's the one I wanted to see.$"

ParcelDelibird_T_Bjarne_R5_Text_2:
# 673 "data/maps/ParcelDelibird/scripts.pory"
	.string "BJARNE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibird_T_Frida_Text_0:
# 679 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: My DELIBIRD was born on the\n"
	.string "summit. There won't be another. Battle?$"

ParcelDelibird_T_Frida_Text_1:
# 680 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Still the best bird on the island.$"

ParcelDelibird_T_Frida_Text_2:
# 695 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: The festival's a gift economy.\n"
	.string "Give, take, give. MEREHOLT gives the\l"
	.string "banner. Guess what they take.$"

ParcelDelibird_T_Frida_R2_Text_0:
# 706 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: I kept the team up for this.\n"
	.string "Again?$"

ParcelDelibird_T_Frida_R2_Text_1:
# 708 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Suit yourself. I'm here.$"

ParcelDelibird_T_Frida_R2_Text_2:
# 712 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Right. That's the whole of it.$"

ParcelDelibird_T_Frida_R2_Text_3:
# 713 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibird_T_Frida_R3_Text_0:
# 720 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelDelibird_T_Frida_R3_Text_1:
# 726 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Still yours.$"

ParcelDelibird_T_Frida_R3_Text_2:
# 727 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibird_T_Frida_R4_Text_0:
# 734 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelDelibird_T_Frida_R4_Text_1:
# 740 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: …Fair.$"

ParcelDelibird_T_Frida_R4_Text_2:
# 741 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibird_T_Frida_R5_Text_0:
# 748 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibird_T_Frida_R5_Text_1:
# 754 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: Noted. Properly, this time.$"

ParcelDelibird_T_Frida_R5_Text_2:
# 755 "data/maps/ParcelDelibird/scripts.pory"
	.string "FRIDA: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibird_T_Erlend_Text_0:
# 761 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Cadet ERLEND, island posting.\n"
	.string "ILEX runs the gym here and nobody\l"
	.string "beats her. Spar, so I've something to\l"
	.string "report.$"

ParcelDelibird_T_Erlend_Text_1:
# 762 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Reported.$"

ParcelDelibird_T_Erlend_Text_2:
# 777 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: ILEX's Skyline badge needs the\n"
	.string "whole island read. The summit, the\l"
	.string "shore. She doesn't sign for half.$"

ParcelDelibird_T_Erlend_R2_Text_0:
# 788 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelDelibird_T_Erlend_R2_Text_1:
# 790 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: No hurry. The water keeps.$"

ParcelDelibird_T_Erlend_R2_Text_2:
# 794 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Noted. Properly, this time.$"

ParcelDelibird_T_Erlend_R2_Text_3:
# 795 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelDelibird_T_Erlend_R3_Text_0:
# 802 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelDelibird_T_Erlend_R3_Text_1:
# 808 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: …Again, then. Later.$"

ParcelDelibird_T_Erlend_R3_Text_2:
# 809 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibird_T_Erlend_R4_Text_0:
# 816 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelDelibird_T_Erlend_R4_Text_1:
# 823 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelDelibird_T_Erlend_R5_Text_0:
# 830 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelDelibird_T_Erlend_R5_Text_1:
# 837 "data/maps/ParcelDelibird/scripts.pory"
	.string "ERLEND: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibird_Epilogue_Text_0:
# 846 "data/maps/ParcelDelibird/scripts.pory"
	.string "DELIBIRD ISLE. The thaw didn't stop\n"
	.string "because a hearing sat. The festival\l"
	.string "ground is a third mud.\p"
	.string "The delivery list is up on the square\n"
	.string "again, longer than last year, and every\l"
	.string "house on it has a name beside it before\l"
	.string "noon.$"

ParcelDelibird_Epilogue_Text_1:
# 847 "data/maps/ParcelDelibird/scripts.pory"
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
# 859 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: The snowline is lower than last\n"
	.string "Midwinter. I have the number now. It's in\l"
	.string "your record.\p"
	.string "The Skyline is mine to read. Read it with\n"
	.string "me once more, from the top. Will you?$"

ParcelDelibird_GymIlex_Rematch_Text_1:
# 861 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: Then watch the snowline with me a\n"
	.string "while.$"

ParcelDelibird_GymIlex_Rematch_Text_2:
# 865 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: Steady. You still keep the frame.$"

ParcelDelibird_GymIlex_Rematch_Text_3:
# 866 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: The cloth is in my pocket.\n"
	.string "Whenever you like.$"

ParcelDelibird_PairLights_Text_0:
# 876 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: The square's lit. Nobody\n"
	.string "cheered. Did you notice? Nobody\l"
	.string "cheered.$"

ParcelDelibird_PairLights_Text_1:
# 877 "data/maps/ParcelDelibird/scripts.pory"
	.string "BOY: Was that wrong?$"

ParcelDelibird_PairLights_Text_2:
# 878 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: It was right. You don't\n"
	.string "cheer a lamp in a storm. You stand near\l"
	.string "it.$"

ParcelDelibird_PairLights_Text_3:
# 879 "data/maps/ParcelDelibird/scripts.pory"
	.string "BOY: The ranger stood near it.$"

ParcelDelibird_PairLights_Text_4:
# 880 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: The ranger looked up the\n"
	.string "slope at the wet ground, same as me.\l"
	.string "Then stood near it anyway. That's the\l"
	.string "whole of being grown.$"

ParcelDelibird_PairLights_Text_5:
# 882 "data/maps/ParcelDelibird/scripts.pory"
	.string "BOY: The ranger did the whole round.\n"
	.string "Three doors, on foot. MARTA gave them\l"
	.string "the bird.$"

ParcelDelibird_PairLights_Text_6:
# 883 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: MARTA gave them the bird\n"
	.string "because the bird chose. You don't give a\l"
	.string "DELIBIRD. It goes.$"

ParcelDelibird_PairLights_Text_7:
# 884 "data/maps/ParcelDelibird/scripts.pory"
	.string "BOY: Where would it go?$"

ParcelDelibird_PairLights_Text_8:
# 885 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: Wherever something's\n"
	.string "needed. It has a worse sense of\l"
	.string "self-preservation than you do.$"

ParcelDelibird_PairLights_Text_9:
# 887 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: The stringer's up the\n"
	.string "ladder again. Every bulb on the eaves\l"
	.string "tested, and it's a month off.$"

ParcelDelibird_PairLights_Text_10:
# 888 "data/maps/ParcelDelibird/scripts.pory"
	.string "BOY: Why so early?$"

ParcelDelibird_PairLights_Text_11:
# 889 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: Because the ground under\n"
	.string "the ladder was dry last year and it isn't\l"
	.string "this year. She wants it done before it\l"
	.string "isn't a ladder you'd want to stand on.$"

ParcelDelibird_PairLights_Text_12:
# 890 "data/maps/ParcelDelibird/scripts.pory"
	.string "BOY: Can I hold the ladder?$"

ParcelDelibird_PairLights_Text_13:
# 891 "data/maps/ParcelDelibird/scripts.pory"
	.string "GRANDMOTHER: Hold the ladder. That's\n"
	.string "what boys are for.$"

ParcelDelibird_PairGround_Text_0:
# 900 "data/maps/ParcelDelibird/scripts.pory"
	.string "WIFE: The FOUNDATION's paper about\n"
	.string "moving the festival. MARTA wrote back\l"
	.string "'thank you, and no'. In those words.$"

ParcelDelibird_PairGround_Text_1:
# 901 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUSBAND: And the Council?$"

ParcelDelibird_PairGround_Text_2:
# 902 "data/maps/ParcelDelibird/scripts.pory"
	.string "WIFE: Sent a surveyor. A real one, with\n"
	.string "the red cloth. To ask us where we'd want\l"
	.string "to be, if.$"

ParcelDelibird_PairGround_Text_3:
# 903 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUSBAND: If.$"

ParcelDelibird_PairGround_Text_4:
# 904 "data/maps/ParcelDelibird/scripts.pory"
	.string "WIFE: If. First time anyone's said it to\n"
	.string "us as a question.$"

ParcelDelibird_PairGround_Text_5:
# 906 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUSBAND: The ranger measured the slump\n"
	.string "with a tape. Wrote the number on the\l"
	.string "stake and the date under it.$"

ParcelDelibird_PairGround_Text_6:
# 907 "data/maps/ParcelDelibird/scripts.pory"
	.string "WIFE: What was the number?$"

ParcelDelibird_PairGround_Text_7:
# 908 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUSBAND: Doesn't matter. What matters\n"
	.string "is there'll be another number next year\l"
	.string "under it, and anyone can see which way\l"
	.string "they go.$"

ParcelDelibird_PairGround_Text_8:
# 909 "data/maps/ParcelDelibird/scripts.pory"
	.string "WIFE: That's not comfort.$"

ParcelDelibird_PairGround_Text_9:
# 910 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUSBAND: No. It's a ruler. We've had\n"
	.string "comfort. It came with a crest on it.$"

ParcelDelibird_PairGround_Text_10:
# 912 "data/maps/ParcelDelibird/scripts.pory"
	.string "WIFE: TOMAS's cabin corner is in the\n"
	.string "ground to the sill. Ketil's talking about\l"
	.string "moving him.$"

ParcelDelibird_PairGround_Text_11:
# 913 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUSBAND: Moving him where? Every cabin\n"
	.string "on the north side has a corner going.$"

ParcelDelibird_PairGround_Text_12:
# 914 "data/maps/ParcelDelibird/scripts.pory"
	.string "WIFE: Then we move the north side.$"

ParcelDelibird_PairGround_Text_13:
# 915 "data/maps/ParcelDelibird/scripts.pory"
	.string "HUSBAND: We've moved it twice in my life.\n"
	.string "Each time it caught us up.$"

ParcelDelibird_LampStringer_Text_0:
# 927 "data/maps/ParcelDelibird/scripts.pory"
	.string "STRINGER: Two hands. I say it before I\n"
	.string "go up the ladder now. Then I go up the\l"
	.string "ladder.$"

ParcelDelibird_LampStringer_Text_1:
# 930 "data/maps/ParcelDelibird/scripts.pory"
	.string "STRINGER: Two hands. …Two hands in nine\n"
	.string "years. It isn't the ladder.\p"
	.string "I'll string them anyway. Here. For\n"
	.string "climbing things that sink.$"

ParcelDelibird_LampStringer_Text_2:
# 934 "data/maps/ParcelDelibird/scripts.pory"
	.string "STRINGER: The warming hut wall. A\n"
	.string "scratch at head height. Mine was, the\l"
	.string "first year.$"

ParcelDelibird_LampStringer_Text_3:
# 937 "data/maps/ParcelDelibird/scripts.pory"
	.string "STRINGER: I string the lights. Every\n"
	.string "year the foot of the ladder sits a\l"
	.string "little lower against the hut wall, and I\l"
	.string "tell myself it's the ladder.\p"
	.string "There's a scratch on the hut wall from\n"
	.string "the first year, head height. Go and read\l"
	.string "how far below it the ground is now. I\l"
	.string "can't make myself.$"

ParcelDelibird_HutScratch_Text_0:
# 946 "data/maps/ParcelDelibird/scripts.pory"
	.string "A scratch on the hut wall at head\n"
	.string "height, with a year beside it, nine\l"
	.string "winters back. The ground beneath it has\l"
	.string "gone down two hands since. The sill is in\l"
	.string "the earth.\p"
	.string "Someone has added a second scratch,\n"
	.string "this year, level with the first. The wall\l"
	.string "hasn't moved. The island has.$"

ParcelDelibird_HutScratch_Text_1:
# 949 "data/maps/ParcelDelibird/scripts.pory"
	.string "Two scratches on the hut wall, level\n"
	.string "with each other, nine years apart. The\l"
	.string "ground between them has gone.$"

ParcelDelibird_FindCorner_Text_0:
# 958 "data/maps/ParcelDelibird/scripts.pory"
	.string "On the shore, in the wet ground, the line\n"
	.string "of a sill: the bottom beam of a cabin,\l"
	.string "sunk to its second plank, the wood still\l"
	.string "sound. A nail, a hinge, the place a step\l"
	.string "was.\p"
	.string "The ground has taken it a plank at a\n"
	.string "time and is not finished.$"

ParcelDelibird_FindCorner_Text_1:
# 961 "data/maps/ParcelDelibird/scripts.pory"
	.string "The line of a sill in the wet shore, two\n"
	.string "planks under. The hinge is the only part\l"
	.string "still above the ground.$"

ParcelDelibird_PairShore_Text_0:
# 969 "data/maps/ParcelDelibird/scripts.pory"
	.string "NETMAN: Red cloth on stakes along the\n"
	.string "slump line. We put them in ourselves.\l"
	.string "Didn't wait for the Survey.$"

ParcelDelibird_PairShore_Text_1:
# 970 "data/maps/ParcelDelibird/scripts.pory"
	.string "OLD MAN: The Survey came anyway. Wrote\n"
	.string "down that we'd put them in. That's in a\l"
	.string "record now too.$"

ParcelDelibird_PairShore_Text_2:
# 971 "data/maps/ParcelDelibird/scripts.pory"
	.string "NETMAN: Everything's in a record now.$"

ParcelDelibird_PairShore_Text_3:
# 972 "data/maps/ParcelDelibird/scripts.pory"
	.string "OLD MAN: Everything always was. In the\n"
	.string "ground. Somebody finally learned to\l"
	.string "read it back.$"

ParcelDelibird_PairShore_Text_4:
# 974 "data/maps/ParcelDelibird/scripts.pory"
	.string "OLD MAN: The ranger carried tea to\n"
	.string "INGRID, oil to TOMAS, and read the\l"
	.string "stakes between. MARTA gave them the\l"
	.string "bird.$"

ParcelDelibird_PairShore_Text_5:
# 975 "data/maps/ParcelDelibird/scripts.pory"
	.string "NETMAN: The bird gives itself.$"

ParcelDelibird_PairShore_Text_6:
# 976 "data/maps/ParcelDelibird/scripts.pory"
	.string "OLD MAN: So MARTA says. I've watched\n"
	.string "that bird thirty winters. It goes where\l"
	.string "it's needed. It went off the boat\l"
	.string "straight to the stranger. Make of that\l"
	.string "what you like.$"

ParcelDelibird_PairShore_Text_7:
# 978 "data/maps/ParcelDelibird/scripts.pory"
	.string "NETMAN: The shore's two steps further\n"
	.string "in than when I was a boy.$"

ParcelDelibird_PairShore_Text_8:
# 979 "data/maps/ParcelDelibird/scripts.pory"
	.string "OLD MAN: Three. I counted. Then I\n"
	.string "stopped counting because it\l"
	.string "frightened me, and now I count again\l"
	.string "because the ranger's up the slope doing\l"
	.string "it anyway.$"

ParcelDelibird_PairShore_Text_9:
# 980 "data/maps/ParcelDelibird/scripts.pory"
	.string "NETMAN: What good's the count?$"

ParcelDelibird_PairShore_Text_10:
# 981 "data/maps/ParcelDelibird/scripts.pory"
	.string "OLD MAN: None. It's just true. I've\n"
	.string "decided to prefer true.$"

ParcelDelibird_Board1_Text_0:
# 990 "data/maps/ParcelDelibird/scripts.pory"
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
# 995 "data/maps/ParcelDelibird/scripts.pory"
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
# 1002 "data/maps/ParcelDelibird/scripts.pory"
	.string "A SURVEY BOARD on the hall's seaward\n"
	.string "wall. The festival dates by year, and\l"
	.string "beside each the date the strait froze,\l"
	.string "or did not. Thirty years ago every line\l"
	.string "had two dates. The last nine have one.\p"
	.string "The festival is held on the same day\n"
	.string "regardless. The board does not comment.\l"
	.string "The second column does.$"

ParcelDelibird_Board4_Text_0:
# 1009 "data/maps/ParcelDelibird/scripts.pory"
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
# 1016 "data/maps/ParcelDelibird/scripts.pory"
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
