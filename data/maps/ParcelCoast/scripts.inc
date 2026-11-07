ParcelCoast_MapScripts::
# 25 "data/maps/ParcelCoast/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelCoast_HideAide
# 26 "data/maps/ParcelCoast/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelCoast_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelCoast_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 27 "data/maps/ParcelCoast/scripts.pory"
	map_script_2 VAR_SKALD_EPILOGUE, 7, ParcelCoast_Epilogue
# 28 "data/maps/ParcelCoast/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ParcelCoast_FirstEntry
	.2byte 0


ParcelCoast_HideAide::
# 34 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_HideAide_2
# 37 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_TEMP_4
ParcelCoast_HideAide_1:
	end

ParcelCoast_HideAide_2:
# 35 "data/maps/ParcelCoast/scripts.pory"
	clearflag FLAG_TEMP_4
	goto ParcelCoast_HideAide_1


ParcelCoast_FirstEntry::
# 43 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_TEMP_1, 1
# 44 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COAST_ARRIVAL, ParcelCoast_FirstEntry_2
# 47 "data/maps/ParcelCoast/scripts.pory"
	lockall
# 48 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FirstEntry_Text_0, MSGBOX_DEFAULT
# 49 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FirstEntry_Text_1, MSGBOX_DEFAULT
# 50 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FirstEntry_Text_2, MSGBOX_DEFAULT
# 51 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALDMERE_COAST_ARRIVAL
# 52 "data/maps/ParcelCoast/scripts.pory"
	releaseall
	end

ParcelCoast_FirstEntry_2:
	end


ParcelCoast_Dredge::
# 58 "data/maps/ParcelCoast/scripts.pory"
	lock
# 59 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 60 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 0
# 61 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 62 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Dredge_2
# 67 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dredge_Text_1, MSGBOX_SIGN
# 68 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 69 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Dredge_2:
# 63 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dredge_Text_0, MSGBOX_SIGN
# 64 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Barren::
# 73 "data/maps/ParcelCoast/scripts.pory"
	lock
# 74 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 75 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 1
# 76 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 77 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Barren_2
# 82 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Barren_Text_1, MSGBOX_SIGN
# 83 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 84 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Barren_2:
# 78 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Barren_Text_0, MSGBOX_SIGN
# 79 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Catch::
# 88 "data/maps/ParcelCoast/scripts.pory"
	lock
# 89 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 90 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 2
# 91 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 92 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Catch_2
# 97 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Catch_Text_1, MSGBOX_SIGN
# 98 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 99 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Catch_2:
# 93 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Catch_Text_0, MSGBOX_SIGN
# 94 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Pilings::
# 103 "data/maps/ParcelCoast/scripts.pory"
	lock
# 104 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 105 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 3
# 106 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 107 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Pilings_2
# 112 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Pilings_Text_1, MSGBOX_SIGN
# 113 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 114 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Pilings_2:
# 108 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Pilings_Text_0, MSGBOX_SIGN
# 109 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_GymHarland::
# 120 "data/maps/ParcelCoast/scripts.pory"
	lock
# 121 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 122 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCoast_GymHarland_2
ParcelCoast_GymHarland_1:
# 125 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, ParcelCoast_GymHarland_5
# 161 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_13, MSGBOX_DEFAULT
# 162 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_14, MSGBOX_DEFAULT
# 163 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM6, ParcelCoast_GymHarland_Text_15
# 164 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_BADGE06_GET
# 165 "data/maps/ParcelCoast/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 166 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 167 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 5
# 168 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 169 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_16, MSGBOX_DEFAULT
# 170 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_HM02
# 171 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_17, MSGBOX_DEFAULT
# 172 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_2:
# 123 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_GymHarland_Rematch
	goto ParcelCoast_GymHarland_1

ParcelCoast_GymHarland_5:
# 126 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_GymHarland_8
# 132 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_COAST_SHIFT_DONE, ParcelCoast_GymHarland_11
# 157 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_12, MSGBOX_DEFAULT
# 158 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_8:
# 127 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_0, MSGBOX_DEFAULT
# 128 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_1, MSGBOX_DEFAULT
# 129 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_11:
# 133 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_2, MSGBOX_DEFAULT
# 134 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_3, MSGBOX_YESNO
# 135 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_GymHarland_14
# 140 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 141 "data/maps/ParcelCoast/scripts.pory"
	playse SE_SHIP
# 142 "data/maps/ParcelCoast/scripts.pory"
	fadescreen FADE_TO_BLACK
# 143 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_5, MSGBOX_DEFAULT
# 144 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_6, MSGBOX_DEFAULT
# 145 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_7, MSGBOX_DEFAULT
# 146 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_8, MSGBOX_DEFAULT
# 147 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_9, MSGBOX_DEFAULT
# 148 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_10, MSGBOX_DEFAULT
# 149 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 150 "data/maps/ParcelCoast/scripts.pory"
	delay 60
# 151 "data/maps/ParcelCoast/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 152 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_11, MSGBOX_DEFAULT
# 153 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_COAST_SHIFT_DONE
# 154 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_14:
# 136 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_4, MSGBOX_DEFAULT
# 137 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hale::
# 178 "data/maps/ParcelCoast/scripts.pory"
	lock
# 179 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 180 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Hale_2
# 185 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 186 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 63
# 187 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 188 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelCoast_Hale_5
# 209 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_10, MSGBOX_DEFAULT
# 210 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_2:
# 181 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_0, MSGBOX_DEFAULT
# 182 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_5:
# 189 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_1, MSGBOX_DEFAULT
# 190 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyCoast
# 191 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_2, MSGBOX_DEFAULT
# 192 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_3, MSGBOX_DEFAULT
# 193 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_4, MSGBOX_DEFAULT
# 194 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_5, MSGBOX_DEFAULT
# 195 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_6, MSGBOX_DEFAULT
# 196 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 6
# 197 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 198 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_7, MSGBOX_DEFAULT
# 199 "data/maps/ParcelCoast/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 200 "data/maps/ParcelCoast/scripts.pory"
	waitfanfare
# 201 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALDMERE_COASTAL_CERT
# 202 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_MAX_POTION, 5
# 203 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 204 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_8, MSGBOX_DEFAULT
# 205 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_9, MSGBOX_DEFAULT
# 206 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Worker::
# 216 "data/maps/ParcelCoast/scripts.pory"
	lock
# 217 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 218 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Worker_Text_0, MSGBOX_DEFAULT
# 219 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor1::
# 223 "data/maps/ParcelCoast/scripts.pory"
	lock
# 224 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 225 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor1_Text_0, MSGBOX_DEFAULT
# 226 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor2::
# 230 "data/maps/ParcelCoast/scripts.pory"
	lock
# 231 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 232 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor2_Text_0, MSGBOX_DEFAULT
# 233 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor3::
# 237 "data/maps/ParcelCoast/scripts.pory"
	lock
# 238 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 239 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor3_Text_0, MSGBOX_DEFAULT
# 240 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor4::
# 244 "data/maps/ParcelCoast/scripts.pory"
	lock
# 245 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 246 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor4_Text_0, MSGBOX_DEFAULT
# 247 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Girl::
# 251 "data/maps/ParcelCoast/scripts.pory"
	lock
# 252 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 253 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Girl_Text_0, MSGBOX_DEFAULT
# 254 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Docker::
# 258 "data/maps/ParcelCoast/scripts.pory"
	lock
# 259 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 260 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Docker_Text_0, MSGBOX_DEFAULT
# 261 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_GullMan::
# 265 "data/maps/ParcelCoast/scripts.pory"
	lock
# 266 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 267 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_0, MSGBOX_DEFAULT
# 268 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_ReturnFerry::
# 274 "data/maps/ParcelCoast/scripts.pory"
	lock
# 275 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 276 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_0, MSGBOX_YESNO
# 277 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_ReturnFerry_2
# 282 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 283 "data/maps/ParcelCoast/scripts.pory"
	playse SE_SHIP
# 284 "data/maps/ParcelCoast/scripts.pory"
	delay 40
# 285 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_ISLE, 15, 31
# 286 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end

ParcelCoast_ReturnFerry_2:
# 278 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_1, MSGBOX_DEFAULT
# 279 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_MereholtAide::
# 292 "data/maps/ParcelCoast/scripts.pory"
	lock
# 293 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 294 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelCoast_MereholtAide_2
# 299 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_1, MSGBOX_DEFAULT
# 300 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_2, MSGBOX_YESNO
# 301 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_MereholtAide_5
# 306 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 307 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_BOARDROOM, 4, 2
# 308 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end

ParcelCoast_MereholtAide_2:
# 295 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_0, MSGBOX_DEFAULT
# 296 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_MereholtAide_5:
# 302 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_3, MSGBOX_DEFAULT
# 303 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_ItemA::
# 313 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_PEARL
	end


ParcelCoast_ItemB::
# 314 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_BIG_PEARL
	end


ParcelCoast_ItemMaxElixir::
# 315 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_MAX_ELIXIR
	end


ParcelCoast_SignQuay::
# 317 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_SignQuay_Text_0, MSGBOX_SIGN
	end


ParcelCoast_SignMarket::
# 321 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_SignMarket_Text_0, MSGBOX_SIGN
	end


ParcelCoast_Brage::
# 327 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_BRAGE, ParcelCoast_Brage_Text_0, ParcelCoast_Brage_Text_1, ParcelCoast_Brage_FirstWin
# 331 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 332 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Brage_3
ParcelCoast_Brage_1:
# 335 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Brage_8
ParcelCoast_Brage_6:
# 338 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Brage_13
ParcelCoast_Brage_11:
# 341 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Brage_18
ParcelCoast_Brage_16:
# 344 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Brage_2:
# 333 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R2
	goto ParcelCoast_Brage_1

ParcelCoast_Brage_3:
# 332 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R2
	goto_if 0, ParcelCoast_Brage_2
	goto ParcelCoast_Brage_1

ParcelCoast_Brage_7:
# 336 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R3
	goto ParcelCoast_Brage_6

ParcelCoast_Brage_8:
# 335 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R3
	goto_if 0, ParcelCoast_Brage_7
	goto ParcelCoast_Brage_6

ParcelCoast_Brage_12:
# 339 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R4
	goto ParcelCoast_Brage_11

ParcelCoast_Brage_13:
# 338 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R4
	goto_if 0, ParcelCoast_Brage_12
	goto ParcelCoast_Brage_11

ParcelCoast_Brage_17:
# 342 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R5
	goto ParcelCoast_Brage_16

ParcelCoast_Brage_18:
# 341 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R5
	goto_if 0, ParcelCoast_Brage_17
	goto ParcelCoast_Brage_16


ParcelCoast_Brage_FirstWin::
# 348 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_Text_2, MSGBOX_DEFAULT
# 349 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R2::
# 353 "data/maps/ParcelCoast/scripts.pory"
	lock
# 354 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 355 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_0, MSGBOX_YESNO
# 356 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R2_2
# 361 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R2, ParcelCoast_Brage_R2_Text_2
# 362 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_3, MSGBOX_DEFAULT
# 363 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R2_2:
# 357 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 358 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R3::
# 367 "data/maps/ParcelCoast/scripts.pory"
	lock
# 368 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 369 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R3_Text_0, MSGBOX_YESNO
# 370 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R3_2
# 375 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R3, ParcelCoast_Brage_R3_Text_1
# 376 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R3_Text_2, MSGBOX_DEFAULT
# 377 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R3_2:
# 371 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 372 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R4::
# 381 "data/maps/ParcelCoast/scripts.pory"
	lock
# 382 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 383 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R4_Text_0, MSGBOX_YESNO
# 384 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R4_2
# 389 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R4, ParcelCoast_Brage_R2_Text_2
# 390 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R4_Text_1, MSGBOX_DEFAULT
# 391 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R4_2:
# 385 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 386 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R5::
# 395 "data/maps/ParcelCoast/scripts.pory"
	lock
# 396 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 397 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R5_Text_0, MSGBOX_YESNO
# 398 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R5_2
# 403 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R5, ParcelCoast_Brage_R5_Text_1
# 404 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R5_Text_2, MSGBOX_DEFAULT
# 405 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R5_2:
# 399 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 400 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod::
# 409 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_FROD, ParcelCoast_Frod_Text_0, ParcelCoast_Frod_Text_1, ParcelCoast_Frod_FirstWin
# 413 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 414 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Frod_3
ParcelCoast_Frod_1:
# 417 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Frod_8
ParcelCoast_Frod_6:
# 420 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Frod_13
ParcelCoast_Frod_11:
# 423 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Frod_18
ParcelCoast_Frod_16:
# 426 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Frod_2:
# 415 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R2
	goto ParcelCoast_Frod_1

ParcelCoast_Frod_3:
# 414 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R2
	goto_if 0, ParcelCoast_Frod_2
	goto ParcelCoast_Frod_1

ParcelCoast_Frod_7:
# 418 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R3
	goto ParcelCoast_Frod_6

ParcelCoast_Frod_8:
# 417 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R3
	goto_if 0, ParcelCoast_Frod_7
	goto ParcelCoast_Frod_6

ParcelCoast_Frod_12:
# 421 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R4
	goto ParcelCoast_Frod_11

ParcelCoast_Frod_13:
# 420 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R4
	goto_if 0, ParcelCoast_Frod_12
	goto ParcelCoast_Frod_11

ParcelCoast_Frod_17:
# 424 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R5
	goto ParcelCoast_Frod_16

ParcelCoast_Frod_18:
# 423 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R5
	goto_if 0, ParcelCoast_Frod_17
	goto ParcelCoast_Frod_16


ParcelCoast_Frod_FirstWin::
# 430 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_Text_2, MSGBOX_DEFAULT
# 431 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R2::
# 435 "data/maps/ParcelCoast/scripts.pory"
	lock
# 436 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 437 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_0, MSGBOX_YESNO
# 438 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R2_2
# 443 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R2, ParcelCoast_Frod_R2_Text_2
# 444 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_3, MSGBOX_DEFAULT
# 445 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R2_2:
# 439 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 440 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R3::
# 449 "data/maps/ParcelCoast/scripts.pory"
	lock
# 450 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 451 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R3_Text_0, MSGBOX_YESNO
# 452 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R3_2
# 457 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R3, ParcelCoast_Frod_R2_Text_2
# 458 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R3_Text_1, MSGBOX_DEFAULT
# 459 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R3_2:
# 453 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 454 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R4::
# 463 "data/maps/ParcelCoast/scripts.pory"
	lock
# 464 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 465 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R4_Text_0, MSGBOX_YESNO
# 466 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R4_2
# 471 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R4, ParcelCoast_Frod_R4_Text_1
# 472 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R4_Text_2, MSGBOX_DEFAULT
# 473 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R4_2:
# 467 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 468 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R5::
# 477 "data/maps/ParcelCoast/scripts.pory"
	lock
# 478 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 479 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R5_Text_0, MSGBOX_YESNO
# 480 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R5_2
# 485 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R5, ParcelCoast_Frod_R5_Text_1
# 486 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R5_Text_2, MSGBOX_DEFAULT
# 487 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R5_2:
# 481 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 482 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda::
# 491 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_GYDA, ParcelCoast_Gyda_Text_0, ParcelCoast_Gyda_Text_1, ParcelCoast_Gyda_FirstWin
# 495 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 496 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Gyda_3
ParcelCoast_Gyda_1:
# 499 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Gyda_8
ParcelCoast_Gyda_6:
# 502 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Gyda_13
ParcelCoast_Gyda_11:
# 505 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Gyda_18
ParcelCoast_Gyda_16:
# 508 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Gyda_2:
# 497 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R2
	goto ParcelCoast_Gyda_1

ParcelCoast_Gyda_3:
# 496 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R2
	goto_if 0, ParcelCoast_Gyda_2
	goto ParcelCoast_Gyda_1

ParcelCoast_Gyda_7:
# 500 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R3
	goto ParcelCoast_Gyda_6

ParcelCoast_Gyda_8:
# 499 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R3
	goto_if 0, ParcelCoast_Gyda_7
	goto ParcelCoast_Gyda_6

ParcelCoast_Gyda_12:
# 503 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R4
	goto ParcelCoast_Gyda_11

ParcelCoast_Gyda_13:
# 502 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R4
	goto_if 0, ParcelCoast_Gyda_12
	goto ParcelCoast_Gyda_11

ParcelCoast_Gyda_17:
# 506 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R5
	goto ParcelCoast_Gyda_16

ParcelCoast_Gyda_18:
# 505 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R5
	goto_if 0, ParcelCoast_Gyda_17
	goto ParcelCoast_Gyda_16


ParcelCoast_Gyda_FirstWin::
# 512 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_Text_2, MSGBOX_DEFAULT
# 513 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R2::
# 517 "data/maps/ParcelCoast/scripts.pory"
	lock
# 518 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 519 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_0, MSGBOX_YESNO
# 520 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R2_2
# 525 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R2, ParcelCoast_Gyda_R2_Text_2
# 526 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_3, MSGBOX_DEFAULT
# 527 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R2_2:
# 521 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 522 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R3::
# 531 "data/maps/ParcelCoast/scripts.pory"
	lock
# 532 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 533 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R3_Text_0, MSGBOX_YESNO
# 534 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R3_2
# 539 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R3, ParcelCoast_Gyda_R3_Text_1
# 540 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R3_Text_2, MSGBOX_DEFAULT
# 541 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R3_2:
# 535 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 536 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R4::
# 545 "data/maps/ParcelCoast/scripts.pory"
	lock
# 546 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 547 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R4_Text_0, MSGBOX_YESNO
# 548 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R4_2
# 553 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R4, ParcelCoast_Gyda_R3_Text_1
# 554 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R4_Text_1, MSGBOX_DEFAULT
# 555 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R4_2:
# 549 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 550 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R5::
# 559 "data/maps/ParcelCoast/scripts.pory"
	lock
# 560 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 561 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R5_Text_0, MSGBOX_YESNO
# 562 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R5_2
# 567 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R5, ParcelCoast_Gyda_R3_Text_1
# 568 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R5_Text_1, MSGBOX_DEFAULT
# 569 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R5_2:
# 563 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 564 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar::
# 573 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_HROAR, ParcelCoast_Hroar_Text_0, ParcelCoast_Hroar_Text_1, ParcelCoast_Hroar_FirstWin
# 577 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 578 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Hroar_3
ParcelCoast_Hroar_1:
# 581 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Hroar_8
ParcelCoast_Hroar_6:
# 584 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Hroar_13
ParcelCoast_Hroar_11:
# 587 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Hroar_18
ParcelCoast_Hroar_16:
# 590 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Hroar_2:
# 579 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R2
	goto ParcelCoast_Hroar_1

ParcelCoast_Hroar_3:
# 578 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R2
	goto_if 0, ParcelCoast_Hroar_2
	goto ParcelCoast_Hroar_1

ParcelCoast_Hroar_7:
# 582 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R3
	goto ParcelCoast_Hroar_6

ParcelCoast_Hroar_8:
# 581 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R3
	goto_if 0, ParcelCoast_Hroar_7
	goto ParcelCoast_Hroar_6

ParcelCoast_Hroar_12:
# 585 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R4
	goto ParcelCoast_Hroar_11

ParcelCoast_Hroar_13:
# 584 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R4
	goto_if 0, ParcelCoast_Hroar_12
	goto ParcelCoast_Hroar_11

ParcelCoast_Hroar_17:
# 588 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R5
	goto ParcelCoast_Hroar_16

ParcelCoast_Hroar_18:
# 587 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R5
	goto_if 0, ParcelCoast_Hroar_17
	goto ParcelCoast_Hroar_16


ParcelCoast_Hroar_FirstWin::
# 594 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_Text_2, MSGBOX_DEFAULT
# 595 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R2::
# 599 "data/maps/ParcelCoast/scripts.pory"
	lock
# 600 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 601 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_0, MSGBOX_YESNO
# 602 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R2_2
# 607 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R2, ParcelCoast_Hroar_R2_Text_2
# 608 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_3, MSGBOX_DEFAULT
# 609 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R2_2:
# 603 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 604 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R3::
# 613 "data/maps/ParcelCoast/scripts.pory"
	lock
# 614 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 615 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R3_Text_0, MSGBOX_YESNO
# 616 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R3_2
# 621 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R3, ParcelCoast_Hroar_R2_Text_2
# 622 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R3_Text_1, MSGBOX_DEFAULT
# 623 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R3_2:
# 617 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 618 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R4::
# 627 "data/maps/ParcelCoast/scripts.pory"
	lock
# 628 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 629 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R4_Text_0, MSGBOX_YESNO
# 630 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R4_2
# 635 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R4, ParcelCoast_Hroar_R4_Text_1
# 636 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R4_Text_2, MSGBOX_DEFAULT
# 637 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R4_2:
# 631 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 632 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R5::
# 641 "data/maps/ParcelCoast/scripts.pory"
	lock
# 642 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 643 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R5_Text_0, MSGBOX_YESNO
# 644 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R5_2
# 649 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R5, ParcelCoast_Hroar_R5_Text_1
# 650 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R5_Text_2, MSGBOX_DEFAULT
# 651 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R5_2:
# 645 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 646 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid::
# 655 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_JORID, ParcelCoast_Jorid_Text_0, ParcelCoast_Jorid_Text_1, ParcelCoast_Jorid_FirstWin
# 659 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 660 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Jorid_3
ParcelCoast_Jorid_1:
# 663 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Jorid_8
ParcelCoast_Jorid_6:
# 666 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Jorid_13
ParcelCoast_Jorid_11:
# 669 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Jorid_18
ParcelCoast_Jorid_16:
# 672 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Jorid_2:
# 661 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R2
	goto ParcelCoast_Jorid_1

ParcelCoast_Jorid_3:
# 660 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R2
	goto_if 0, ParcelCoast_Jorid_2
	goto ParcelCoast_Jorid_1

ParcelCoast_Jorid_7:
# 664 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R3
	goto ParcelCoast_Jorid_6

ParcelCoast_Jorid_8:
# 663 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R3
	goto_if 0, ParcelCoast_Jorid_7
	goto ParcelCoast_Jorid_6

ParcelCoast_Jorid_12:
# 667 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R4
	goto ParcelCoast_Jorid_11

ParcelCoast_Jorid_13:
# 666 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R4
	goto_if 0, ParcelCoast_Jorid_12
	goto ParcelCoast_Jorid_11

ParcelCoast_Jorid_17:
# 670 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R5
	goto ParcelCoast_Jorid_16

ParcelCoast_Jorid_18:
# 669 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R5
	goto_if 0, ParcelCoast_Jorid_17
	goto ParcelCoast_Jorid_16


ParcelCoast_Jorid_FirstWin::
# 676 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_Text_2, MSGBOX_DEFAULT
# 677 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R2::
# 681 "data/maps/ParcelCoast/scripts.pory"
	lock
# 682 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 683 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_0, MSGBOX_YESNO
# 684 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R2_2
# 689 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R2, ParcelCoast_Jorid_R2_Text_2
# 690 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_3, MSGBOX_DEFAULT
# 691 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R2_2:
# 685 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 686 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R3::
# 695 "data/maps/ParcelCoast/scripts.pory"
	lock
# 696 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 697 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R3_Text_0, MSGBOX_YESNO
# 698 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R3_2
# 703 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R3, ParcelCoast_Jorid_R3_Text_1
# 704 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R3_Text_2, MSGBOX_DEFAULT
# 705 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R3_2:
# 699 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 700 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R4::
# 709 "data/maps/ParcelCoast/scripts.pory"
	lock
# 710 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 711 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R4_Text_0, MSGBOX_YESNO
# 712 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R4_2
# 717 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R4, ParcelCoast_Jorid_R4_Text_1
# 718 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R4_Text_2, MSGBOX_DEFAULT
# 719 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R4_2:
# 713 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 714 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R5::
# 723 "data/maps/ParcelCoast/scripts.pory"
	lock
# 724 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 725 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R5_Text_0, MSGBOX_YESNO
# 726 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R5_2
# 731 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R5, ParcelCoast_Jorid_R4_Text_1
# 732 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R5_Text_1, MSGBOX_DEFAULT
# 733 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R5_2:
# 727 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 728 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil::
# 737 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_KETIL, ParcelCoast_Ketil_Text_0, ParcelCoast_Ketil_Text_1, ParcelCoast_Ketil_FirstWin
# 741 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 742 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Ketil_3
ParcelCoast_Ketil_1:
# 745 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Ketil_8
ParcelCoast_Ketil_6:
# 748 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Ketil_13
ParcelCoast_Ketil_11:
# 751 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Ketil_18
ParcelCoast_Ketil_16:
# 754 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Ketil_2:
# 743 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R2
	goto ParcelCoast_Ketil_1

ParcelCoast_Ketil_3:
# 742 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R2
	goto_if 0, ParcelCoast_Ketil_2
	goto ParcelCoast_Ketil_1

ParcelCoast_Ketil_7:
# 746 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R3
	goto ParcelCoast_Ketil_6

ParcelCoast_Ketil_8:
# 745 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R3
	goto_if 0, ParcelCoast_Ketil_7
	goto ParcelCoast_Ketil_6

ParcelCoast_Ketil_12:
# 749 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R4
	goto ParcelCoast_Ketil_11

ParcelCoast_Ketil_13:
# 748 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R4
	goto_if 0, ParcelCoast_Ketil_12
	goto ParcelCoast_Ketil_11

ParcelCoast_Ketil_17:
# 752 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R5
	goto ParcelCoast_Ketil_16

ParcelCoast_Ketil_18:
# 751 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R5
	goto_if 0, ParcelCoast_Ketil_17
	goto ParcelCoast_Ketil_16


ParcelCoast_Ketil_FirstWin::
# 758 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_Text_2, MSGBOX_DEFAULT
# 759 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R2::
# 763 "data/maps/ParcelCoast/scripts.pory"
	lock
# 764 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 765 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_0, MSGBOX_YESNO
# 766 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R2_2
# 771 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R2, ParcelCoast_Ketil_R2_Text_2
# 772 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_3, MSGBOX_DEFAULT
# 773 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R2_2:
# 767 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 768 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R3::
# 777 "data/maps/ParcelCoast/scripts.pory"
	lock
# 778 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 779 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R3_Text_0, MSGBOX_YESNO
# 780 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R3_2
# 785 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R3, ParcelCoast_Ketil_R3_Text_1
# 786 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R3_Text_2, MSGBOX_DEFAULT
# 787 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R3_2:
# 781 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 782 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R4::
# 791 "data/maps/ParcelCoast/scripts.pory"
	lock
# 792 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 793 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R4_Text_0, MSGBOX_YESNO
# 794 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R4_2
# 799 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R4, ParcelCoast_Ketil_R4_Text_1
# 800 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R4_Text_2, MSGBOX_DEFAULT
# 801 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R4_2:
# 795 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 796 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R5::
# 805 "data/maps/ParcelCoast/scripts.pory"
	lock
# 806 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 807 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R5_Text_0, MSGBOX_YESNO
# 808 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R5_2
# 813 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R5, ParcelCoast_Ketil_R5_Text_1
# 814 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R5_Text_2, MSGBOX_DEFAULT
# 815 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R5_2:
# 809 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 810 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva::
# 819 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_LIVA, ParcelCoast_Liva_Text_0, ParcelCoast_Liva_Text_1, ParcelCoast_Liva_FirstWin
# 823 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 824 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Liva_3
ParcelCoast_Liva_1:
# 827 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Liva_8
ParcelCoast_Liva_6:
# 830 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Liva_13
ParcelCoast_Liva_11:
# 833 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Liva_18
ParcelCoast_Liva_16:
# 836 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Liva_2:
# 825 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R2
	goto ParcelCoast_Liva_1

ParcelCoast_Liva_3:
# 824 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R2
	goto_if 0, ParcelCoast_Liva_2
	goto ParcelCoast_Liva_1

ParcelCoast_Liva_7:
# 828 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R3
	goto ParcelCoast_Liva_6

ParcelCoast_Liva_8:
# 827 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R3
	goto_if 0, ParcelCoast_Liva_7
	goto ParcelCoast_Liva_6

ParcelCoast_Liva_12:
# 831 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R4
	goto ParcelCoast_Liva_11

ParcelCoast_Liva_13:
# 830 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R4
	goto_if 0, ParcelCoast_Liva_12
	goto ParcelCoast_Liva_11

ParcelCoast_Liva_17:
# 834 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R5
	goto ParcelCoast_Liva_16

ParcelCoast_Liva_18:
# 833 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R5
	goto_if 0, ParcelCoast_Liva_17
	goto ParcelCoast_Liva_16


ParcelCoast_Liva_FirstWin::
# 840 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_Text_2, MSGBOX_DEFAULT
# 841 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R2::
# 845 "data/maps/ParcelCoast/scripts.pory"
	lock
# 846 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 847 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_0, MSGBOX_YESNO
# 848 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R2_2
# 853 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R2, ParcelCoast_Liva_R2_Text_2
# 854 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_3, MSGBOX_DEFAULT
# 855 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R2_2:
# 849 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 850 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R3::
# 859 "data/maps/ParcelCoast/scripts.pory"
	lock
# 860 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 861 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R3_Text_0, MSGBOX_YESNO
# 862 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R3_2
# 867 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R3, ParcelCoast_Liva_R3_Text_1
# 868 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R3_Text_2, MSGBOX_DEFAULT
# 869 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R3_2:
# 863 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 864 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R4::
# 873 "data/maps/ParcelCoast/scripts.pory"
	lock
# 874 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 875 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R4_Text_0, MSGBOX_YESNO
# 876 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R4_2
# 881 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R4, ParcelCoast_Liva_R4_Text_1
# 882 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R4_Text_2, MSGBOX_DEFAULT
# 883 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R4_2:
# 877 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 878 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R5::
# 887 "data/maps/ParcelCoast/scripts.pory"
	lock
# 888 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 889 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R5_Text_0, MSGBOX_YESNO
# 890 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R5_2
# 895 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R5, ParcelCoast_Liva_R5_Text_1
# 896 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R5_Text_2, MSGBOX_DEFAULT
# 897 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R5_2:
# 891 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 892 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus::
# 901 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_MAGNUS, ParcelCoast_Magnus_Text_0, ParcelCoast_Magnus_Text_1, ParcelCoast_Magnus_FirstWin
# 905 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 906 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Magnus_3
ParcelCoast_Magnus_1:
# 909 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Magnus_8
ParcelCoast_Magnus_6:
# 912 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Magnus_13
ParcelCoast_Magnus_11:
# 915 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Magnus_18
ParcelCoast_Magnus_16:
# 918 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Magnus_2:
# 907 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R2
	goto ParcelCoast_Magnus_1

ParcelCoast_Magnus_3:
# 906 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R2
	goto_if 0, ParcelCoast_Magnus_2
	goto ParcelCoast_Magnus_1

ParcelCoast_Magnus_7:
# 910 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R3
	goto ParcelCoast_Magnus_6

ParcelCoast_Magnus_8:
# 909 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R3
	goto_if 0, ParcelCoast_Magnus_7
	goto ParcelCoast_Magnus_6

ParcelCoast_Magnus_12:
# 913 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R4
	goto ParcelCoast_Magnus_11

ParcelCoast_Magnus_13:
# 912 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R4
	goto_if 0, ParcelCoast_Magnus_12
	goto ParcelCoast_Magnus_11

ParcelCoast_Magnus_17:
# 916 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R5
	goto ParcelCoast_Magnus_16

ParcelCoast_Magnus_18:
# 915 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R5
	goto_if 0, ParcelCoast_Magnus_17
	goto ParcelCoast_Magnus_16


ParcelCoast_Magnus_FirstWin::
# 922 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_Text_2, MSGBOX_DEFAULT
# 923 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R2::
# 927 "data/maps/ParcelCoast/scripts.pory"
	lock
# 928 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 929 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_0, MSGBOX_YESNO
# 930 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R2_2
# 935 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R2, ParcelCoast_Magnus_R2_Text_2
# 936 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_3, MSGBOX_DEFAULT
# 937 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R2_2:
# 931 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 932 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R3::
# 941 "data/maps/ParcelCoast/scripts.pory"
	lock
# 942 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 943 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R3_Text_0, MSGBOX_YESNO
# 944 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R3_2
# 949 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R3, ParcelCoast_Magnus_R3_Text_1
# 950 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R3_Text_2, MSGBOX_DEFAULT
# 951 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R3_2:
# 945 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 946 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R4::
# 955 "data/maps/ParcelCoast/scripts.pory"
	lock
# 956 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 957 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R4_Text_0, MSGBOX_YESNO
# 958 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R4_2
# 963 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R4, ParcelCoast_Magnus_R4_Text_1
# 964 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R4_Text_2, MSGBOX_DEFAULT
# 965 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R4_2:
# 959 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 960 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R5::
# 969 "data/maps/ParcelCoast/scripts.pory"
	lock
# 970 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 971 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R5_Text_0, MSGBOX_YESNO
# 972 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R5_2
# 977 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R5, ParcelCoast_Magnus_R5_Text_1
# 978 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R5_Text_2, MSGBOX_DEFAULT
# 979 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R5_2:
# 973 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 974 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai::
# 983 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_NIKOLAI, ParcelCoast_Nikolai_Text_0, ParcelCoast_Nikolai_Text_1, ParcelCoast_Nikolai_FirstWin
# 987 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 988 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Nikolai_3
ParcelCoast_Nikolai_1:
# 991 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Nikolai_8
ParcelCoast_Nikolai_6:
# 994 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Nikolai_13
ParcelCoast_Nikolai_11:
# 997 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Nikolai_18
ParcelCoast_Nikolai_16:
# 1000 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Nikolai_2:
# 989 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R2
	goto ParcelCoast_Nikolai_1

ParcelCoast_Nikolai_3:
# 988 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R2
	goto_if 0, ParcelCoast_Nikolai_2
	goto ParcelCoast_Nikolai_1

ParcelCoast_Nikolai_7:
# 992 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R3
	goto ParcelCoast_Nikolai_6

ParcelCoast_Nikolai_8:
# 991 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R3
	goto_if 0, ParcelCoast_Nikolai_7
	goto ParcelCoast_Nikolai_6

ParcelCoast_Nikolai_12:
# 995 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R4
	goto ParcelCoast_Nikolai_11

ParcelCoast_Nikolai_13:
# 994 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R4
	goto_if 0, ParcelCoast_Nikolai_12
	goto ParcelCoast_Nikolai_11

ParcelCoast_Nikolai_17:
# 998 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R5
	goto ParcelCoast_Nikolai_16

ParcelCoast_Nikolai_18:
# 997 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R5
	goto_if 0, ParcelCoast_Nikolai_17
	goto ParcelCoast_Nikolai_16


ParcelCoast_Nikolai_FirstWin::
# 1004 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_Text_2, MSGBOX_DEFAULT
# 1005 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R2::
# 1009 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1010 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1011 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_0, MSGBOX_YESNO
# 1012 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R2_2
# 1017 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R2, ParcelCoast_Nikolai_R2_Text_2
# 1018 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_3, MSGBOX_DEFAULT
# 1019 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R2_2:
# 1013 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1014 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R3::
# 1023 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1024 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1025 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R3_Text_0, MSGBOX_YESNO
# 1026 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R3_2
# 1031 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R3, ParcelCoast_Nikolai_R2_Text_2
# 1032 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R3_Text_1, MSGBOX_DEFAULT
# 1033 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R3_2:
# 1027 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1028 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R4::
# 1037 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1038 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1039 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R4_Text_0, MSGBOX_YESNO
# 1040 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R4_2
# 1045 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R4, ParcelCoast_Nikolai_R4_Text_1
# 1046 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R4_Text_2, MSGBOX_DEFAULT
# 1047 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R4_2:
# 1041 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1042 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R5::
# 1051 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1052 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1053 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R5_Text_0, MSGBOX_YESNO
# 1054 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R5_2
# 1059 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R5, ParcelCoast_Nikolai_R5_Text_1
# 1060 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R5_Text_2, MSGBOX_DEFAULT
# 1061 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R5_2:
# 1055 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1056 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda::
# 1065 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_ODA, ParcelCoast_Oda_Text_0, ParcelCoast_Oda_Text_1, ParcelCoast_Oda_FirstWin
# 1069 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1070 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Oda_3
ParcelCoast_Oda_1:
# 1073 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Oda_8
ParcelCoast_Oda_6:
# 1076 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Oda_13
ParcelCoast_Oda_11:
# 1079 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Oda_18
ParcelCoast_Oda_16:
# 1082 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Oda_2:
# 1071 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R2
	goto ParcelCoast_Oda_1

ParcelCoast_Oda_3:
# 1070 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R2
	goto_if 0, ParcelCoast_Oda_2
	goto ParcelCoast_Oda_1

ParcelCoast_Oda_7:
# 1074 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R3
	goto ParcelCoast_Oda_6

ParcelCoast_Oda_8:
# 1073 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R3
	goto_if 0, ParcelCoast_Oda_7
	goto ParcelCoast_Oda_6

ParcelCoast_Oda_12:
# 1077 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R4
	goto ParcelCoast_Oda_11

ParcelCoast_Oda_13:
# 1076 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R4
	goto_if 0, ParcelCoast_Oda_12
	goto ParcelCoast_Oda_11

ParcelCoast_Oda_17:
# 1080 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R5
	goto ParcelCoast_Oda_16

ParcelCoast_Oda_18:
# 1079 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R5
	goto_if 0, ParcelCoast_Oda_17
	goto ParcelCoast_Oda_16


ParcelCoast_Oda_FirstWin::
# 1086 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_Text_2, MSGBOX_DEFAULT
# 1087 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R2::
# 1091 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1092 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1093 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_0, MSGBOX_YESNO
# 1094 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R2_2
# 1099 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R2, ParcelCoast_Oda_R2_Text_2
# 1100 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_3, MSGBOX_DEFAULT
# 1101 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R2_2:
# 1095 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1096 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R3::
# 1105 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1106 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1107 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R3_Text_0, MSGBOX_YESNO
# 1108 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R3_2
# 1113 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R3, ParcelCoast_Oda_R2_Text_2
# 1114 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R3_Text_1, MSGBOX_DEFAULT
# 1115 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R3_2:
# 1109 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1110 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R4::
# 1119 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1120 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1121 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R4_Text_0, MSGBOX_YESNO
# 1122 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R4_2
# 1127 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R4, ParcelCoast_Oda_R4_Text_1
# 1128 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R4_Text_2, MSGBOX_DEFAULT
# 1129 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R4_2:
# 1123 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1124 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R5::
# 1133 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1134 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1135 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R5_Text_0, MSGBOX_YESNO
# 1136 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R5_2
# 1141 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R5, ParcelCoast_Oda_R5_Text_1
# 1142 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R5_Text_2, MSGBOX_DEFAULT
# 1143 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R5_2:
# 1137 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1138 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter::
# 1147 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_PETTER, ParcelCoast_Petter_Text_0, ParcelCoast_Petter_Text_1, ParcelCoast_Petter_FirstWin
# 1151 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1152 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Petter_3
ParcelCoast_Petter_1:
# 1155 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Petter_8
ParcelCoast_Petter_6:
# 1158 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Petter_13
ParcelCoast_Petter_11:
# 1161 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Petter_18
ParcelCoast_Petter_16:
# 1164 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Petter_2:
# 1153 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R2
	goto ParcelCoast_Petter_1

ParcelCoast_Petter_3:
# 1152 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R2
	goto_if 0, ParcelCoast_Petter_2
	goto ParcelCoast_Petter_1

ParcelCoast_Petter_7:
# 1156 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R3
	goto ParcelCoast_Petter_6

ParcelCoast_Petter_8:
# 1155 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R3
	goto_if 0, ParcelCoast_Petter_7
	goto ParcelCoast_Petter_6

ParcelCoast_Petter_12:
# 1159 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R4
	goto ParcelCoast_Petter_11

ParcelCoast_Petter_13:
# 1158 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R4
	goto_if 0, ParcelCoast_Petter_12
	goto ParcelCoast_Petter_11

ParcelCoast_Petter_17:
# 1162 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R5
	goto ParcelCoast_Petter_16

ParcelCoast_Petter_18:
# 1161 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R5
	goto_if 0, ParcelCoast_Petter_17
	goto ParcelCoast_Petter_16


ParcelCoast_Petter_FirstWin::
# 1168 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_Text_2, MSGBOX_DEFAULT
# 1169 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R2::
# 1173 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1174 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1175 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_0, MSGBOX_YESNO
# 1176 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R2_2
# 1181 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R2, ParcelCoast_Petter_R2_Text_2
# 1182 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_3, MSGBOX_DEFAULT
# 1183 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R2_2:
# 1177 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1178 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R3::
# 1187 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1188 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1189 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R3_Text_0, MSGBOX_YESNO
# 1190 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R3_2
# 1195 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R3, ParcelCoast_Petter_R3_Text_1
# 1196 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R3_Text_2, MSGBOX_DEFAULT
# 1197 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R3_2:
# 1191 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1192 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R4::
# 1201 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1202 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1203 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R4_Text_0, MSGBOX_YESNO
# 1204 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R4_2
# 1209 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R4, ParcelCoast_Petter_R4_Text_1
# 1210 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R4_Text_2, MSGBOX_DEFAULT
# 1211 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R4_2:
# 1205 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1206 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R5::
# 1215 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1216 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1217 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R5_Text_0, MSGBOX_YESNO
# 1218 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R5_2
# 1223 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R5, ParcelCoast_Petter_R3_Text_1
# 1224 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R5_Text_1, MSGBOX_DEFAULT
# 1225 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R5_2:
# 1219 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1220 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar::
# 1229 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_RAGNAR, ParcelCoast_Ragnar_Text_0, ParcelCoast_Ragnar_Text_1, ParcelCoast_Ragnar_FirstWin
# 1233 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1234 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Ragnar_3
ParcelCoast_Ragnar_1:
# 1237 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Ragnar_8
ParcelCoast_Ragnar_6:
# 1240 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Ragnar_13
ParcelCoast_Ragnar_11:
# 1243 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Ragnar_18
ParcelCoast_Ragnar_16:
# 1246 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Ragnar_2:
# 1235 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R2
	goto ParcelCoast_Ragnar_1

ParcelCoast_Ragnar_3:
# 1234 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R2
	goto_if 0, ParcelCoast_Ragnar_2
	goto ParcelCoast_Ragnar_1

ParcelCoast_Ragnar_7:
# 1238 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R3
	goto ParcelCoast_Ragnar_6

ParcelCoast_Ragnar_8:
# 1237 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R3
	goto_if 0, ParcelCoast_Ragnar_7
	goto ParcelCoast_Ragnar_6

ParcelCoast_Ragnar_12:
# 1241 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R4
	goto ParcelCoast_Ragnar_11

ParcelCoast_Ragnar_13:
# 1240 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R4
	goto_if 0, ParcelCoast_Ragnar_12
	goto ParcelCoast_Ragnar_11

ParcelCoast_Ragnar_17:
# 1244 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R5
	goto ParcelCoast_Ragnar_16

ParcelCoast_Ragnar_18:
# 1243 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R5
	goto_if 0, ParcelCoast_Ragnar_17
	goto ParcelCoast_Ragnar_16


ParcelCoast_Ragnar_FirstWin::
# 1250 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_Text_2, MSGBOX_DEFAULT
# 1251 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R2::
# 1255 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1256 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1257 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_0, MSGBOX_YESNO
# 1258 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R2_2
# 1263 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R2, ParcelCoast_Ragnar_R2_Text_2
# 1264 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_3, MSGBOX_DEFAULT
# 1265 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R2_2:
# 1259 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1260 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R3::
# 1269 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1270 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1271 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R3_Text_0, MSGBOX_YESNO
# 1272 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R3_2
# 1277 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R3, ParcelCoast_Ragnar_R3_Text_1
# 1278 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R3_Text_2, MSGBOX_DEFAULT
# 1279 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R3_2:
# 1273 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1274 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R4::
# 1283 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1284 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1285 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R4_Text_0, MSGBOX_YESNO
# 1286 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R4_2
# 1291 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R4, ParcelCoast_Ragnar_R4_Text_1
# 1292 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R4_Text_2, MSGBOX_DEFAULT
# 1293 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R4_2:
# 1287 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1288 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R5::
# 1297 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1298 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1299 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R5_Text_0, MSGBOX_YESNO
# 1300 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R5_2
# 1305 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R5, ParcelCoast_Ragnar_R3_Text_1
# 1306 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R5_Text_1, MSGBOX_DEFAULT
# 1307 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R5_2:
# 1301 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1302 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor::
# 1311 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_SOLVOR, ParcelCoast_Solvor_Text_0, ParcelCoast_Solvor_Text_1, ParcelCoast_Solvor_FirstWin
# 1315 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1316 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Solvor_3
ParcelCoast_Solvor_1:
# 1319 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Solvor_8
ParcelCoast_Solvor_6:
# 1322 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Solvor_13
ParcelCoast_Solvor_11:
# 1325 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Solvor_18
ParcelCoast_Solvor_16:
# 1328 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Solvor_2:
# 1317 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R2
	goto ParcelCoast_Solvor_1

ParcelCoast_Solvor_3:
# 1316 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R2
	goto_if 0, ParcelCoast_Solvor_2
	goto ParcelCoast_Solvor_1

ParcelCoast_Solvor_7:
# 1320 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R3
	goto ParcelCoast_Solvor_6

ParcelCoast_Solvor_8:
# 1319 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R3
	goto_if 0, ParcelCoast_Solvor_7
	goto ParcelCoast_Solvor_6

ParcelCoast_Solvor_12:
# 1323 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R4
	goto ParcelCoast_Solvor_11

ParcelCoast_Solvor_13:
# 1322 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R4
	goto_if 0, ParcelCoast_Solvor_12
	goto ParcelCoast_Solvor_11

ParcelCoast_Solvor_17:
# 1326 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R5
	goto ParcelCoast_Solvor_16

ParcelCoast_Solvor_18:
# 1325 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R5
	goto_if 0, ParcelCoast_Solvor_17
	goto ParcelCoast_Solvor_16


ParcelCoast_Solvor_FirstWin::
# 1332 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_Text_2, MSGBOX_DEFAULT
# 1333 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R2::
# 1337 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1338 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1339 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_0, MSGBOX_YESNO
# 1340 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R2_2
# 1345 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R2, ParcelCoast_Solvor_R2_Text_2
# 1346 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_3, MSGBOX_DEFAULT
# 1347 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R2_2:
# 1341 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1342 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R3::
# 1351 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1352 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1353 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R3_Text_0, MSGBOX_YESNO
# 1354 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R3_2
# 1359 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R3, ParcelCoast_Solvor_R3_Text_1
# 1360 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R3_Text_2, MSGBOX_DEFAULT
# 1361 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R3_2:
# 1355 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1356 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R4::
# 1365 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1366 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1367 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R4_Text_0, MSGBOX_YESNO
# 1368 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R4_2
# 1373 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R4, ParcelCoast_Solvor_R3_Text_1
# 1374 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R4_Text_1, MSGBOX_DEFAULT
# 1375 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R4_2:
# 1369 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1370 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R5::
# 1379 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1380 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1381 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R5_Text_0, MSGBOX_YESNO
# 1382 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R5_2
# 1387 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R5, ParcelCoast_Solvor_R5_Text_1
# 1388 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R5_Text_2, MSGBOX_DEFAULT
# 1389 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R5_2:
# 1383 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1384 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore::
# 1393 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_TORE, ParcelCoast_Tore_Text_0, ParcelCoast_Tore_Text_1, ParcelCoast_Tore_FirstWin
# 1397 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1398 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Tore_3
ParcelCoast_Tore_1:
# 1401 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Tore_8
ParcelCoast_Tore_6:
# 1404 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Tore_13
ParcelCoast_Tore_11:
# 1407 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Tore_18
ParcelCoast_Tore_16:
# 1410 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Tore_2:
# 1399 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R2
	goto ParcelCoast_Tore_1

ParcelCoast_Tore_3:
# 1398 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R2
	goto_if 0, ParcelCoast_Tore_2
	goto ParcelCoast_Tore_1

ParcelCoast_Tore_7:
# 1402 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R3
	goto ParcelCoast_Tore_6

ParcelCoast_Tore_8:
# 1401 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R3
	goto_if 0, ParcelCoast_Tore_7
	goto ParcelCoast_Tore_6

ParcelCoast_Tore_12:
# 1405 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R4
	goto ParcelCoast_Tore_11

ParcelCoast_Tore_13:
# 1404 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R4
	goto_if 0, ParcelCoast_Tore_12
	goto ParcelCoast_Tore_11

ParcelCoast_Tore_17:
# 1408 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R5
	goto ParcelCoast_Tore_16

ParcelCoast_Tore_18:
# 1407 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R5
	goto_if 0, ParcelCoast_Tore_17
	goto ParcelCoast_Tore_16


ParcelCoast_Tore_FirstWin::
# 1414 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_Text_2, MSGBOX_DEFAULT
# 1415 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R2::
# 1419 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1420 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1421 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_0, MSGBOX_YESNO
# 1422 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R2_2
# 1427 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R2, ParcelCoast_Tore_R2_Text_2
# 1428 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_3, MSGBOX_DEFAULT
# 1429 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R2_2:
# 1423 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1424 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R3::
# 1433 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1434 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1435 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R3_Text_0, MSGBOX_YESNO
# 1436 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R3_2
# 1441 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R3, ParcelCoast_Tore_R3_Text_1
# 1442 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R3_Text_2, MSGBOX_DEFAULT
# 1443 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R3_2:
# 1437 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1438 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R4::
# 1447 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1448 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1449 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R4_Text_0, MSGBOX_YESNO
# 1450 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R4_2
# 1455 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R4, ParcelCoast_Tore_R4_Text_1
# 1456 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R4_Text_2, MSGBOX_DEFAULT
# 1457 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R4_2:
# 1451 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1452 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R5::
# 1461 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1462 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1463 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R5_Text_0, MSGBOX_YESNO
# 1464 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R5_2
# 1469 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R5, ParcelCoast_Tore_R2_Text_2
# 1470 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R5_Text_1, MSGBOX_DEFAULT
# 1471 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R5_2:
# 1465 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1466 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge::
# 1477 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_HELGE, ParcelCoast_T_Helge_Text_0, ParcelCoast_T_Helge_Text_1, ParcelCoast_T_Helge_FirstWin
# 1481 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1482 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_T_Helge_3
ParcelCoast_T_Helge_1:
# 1485 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_T_Helge_8
ParcelCoast_T_Helge_6:
# 1488 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_T_Helge_13
ParcelCoast_T_Helge_11:
# 1491 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_T_Helge_18
ParcelCoast_T_Helge_16:
# 1494 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_T_Helge_2:
# 1483 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R2
	goto ParcelCoast_T_Helge_1

ParcelCoast_T_Helge_3:
# 1482 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R2
	goto_if 0, ParcelCoast_T_Helge_2
	goto ParcelCoast_T_Helge_1

ParcelCoast_T_Helge_7:
# 1486 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R3
	goto ParcelCoast_T_Helge_6

ParcelCoast_T_Helge_8:
# 1485 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R3
	goto_if 0, ParcelCoast_T_Helge_7
	goto ParcelCoast_T_Helge_6

ParcelCoast_T_Helge_12:
# 1489 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R4
	goto ParcelCoast_T_Helge_11

ParcelCoast_T_Helge_13:
# 1488 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R4
	goto_if 0, ParcelCoast_T_Helge_12
	goto ParcelCoast_T_Helge_11

ParcelCoast_T_Helge_17:
# 1492 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R5
	goto ParcelCoast_T_Helge_16

ParcelCoast_T_Helge_18:
# 1491 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R5
	goto_if 0, ParcelCoast_T_Helge_17
	goto ParcelCoast_T_Helge_16


ParcelCoast_T_Helge_FirstWin::
# 1498 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_Text_2, MSGBOX_DEFAULT
# 1499 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R2::
# 1503 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1504 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1505 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_0, MSGBOX_YESNO
# 1506 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R2_2
# 1511 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R2, ParcelCoast_T_Helge_R2_Text_2
# 1512 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_3, MSGBOX_DEFAULT
# 1513 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R2_2:
# 1507 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1508 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R3::
# 1517 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1518 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1519 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R3_Text_0, MSGBOX_YESNO
# 1520 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R3_2
# 1525 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R3, ParcelCoast_T_Helge_R3_Text_1
# 1526 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R3_Text_2, MSGBOX_DEFAULT
# 1527 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R3_2:
# 1521 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1522 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R4::
# 1531 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1532 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1533 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R4_Text_0, MSGBOX_YESNO
# 1534 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R4_2
# 1539 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R4, ParcelCoast_T_Helge_R4_Text_1
# 1540 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R4_Text_2, MSGBOX_DEFAULT
# 1541 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R4_2:
# 1535 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1536 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R5::
# 1545 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1546 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1547 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R5_Text_0, MSGBOX_YESNO
# 1548 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R5_2
# 1553 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R5, ParcelCoast_T_Helge_R4_Text_1
# 1554 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R5_Text_1, MSGBOX_DEFAULT
# 1555 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R5_2:
# 1549 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1550 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton::
# 1559 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_ANTON, ParcelCoast_T_Anton_Text_0, ParcelCoast_T_Anton_Text_1, ParcelCoast_T_Anton_FirstWin
# 1563 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1564 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_T_Anton_3
ParcelCoast_T_Anton_1:
# 1567 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_T_Anton_8
ParcelCoast_T_Anton_6:
# 1570 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_T_Anton_13
ParcelCoast_T_Anton_11:
# 1573 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_T_Anton_18
ParcelCoast_T_Anton_16:
# 1576 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_T_Anton_2:
# 1565 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R2
	goto ParcelCoast_T_Anton_1

ParcelCoast_T_Anton_3:
# 1564 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R2
	goto_if 0, ParcelCoast_T_Anton_2
	goto ParcelCoast_T_Anton_1

ParcelCoast_T_Anton_7:
# 1568 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R3
	goto ParcelCoast_T_Anton_6

ParcelCoast_T_Anton_8:
# 1567 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R3
	goto_if 0, ParcelCoast_T_Anton_7
	goto ParcelCoast_T_Anton_6

ParcelCoast_T_Anton_12:
# 1571 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R4
	goto ParcelCoast_T_Anton_11

ParcelCoast_T_Anton_13:
# 1570 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R4
	goto_if 0, ParcelCoast_T_Anton_12
	goto ParcelCoast_T_Anton_11

ParcelCoast_T_Anton_17:
# 1574 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R5
	goto ParcelCoast_T_Anton_16

ParcelCoast_T_Anton_18:
# 1573 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R5
	goto_if 0, ParcelCoast_T_Anton_17
	goto ParcelCoast_T_Anton_16


ParcelCoast_T_Anton_FirstWin::
# 1580 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_Text_2, MSGBOX_DEFAULT
# 1581 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R2::
# 1585 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1586 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1587 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_0, MSGBOX_YESNO
# 1588 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R2_2
# 1593 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R2, ParcelCoast_T_Anton_R2_Text_2
# 1594 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_3, MSGBOX_DEFAULT
# 1595 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R2_2:
# 1589 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1590 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R3::
# 1599 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1600 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1601 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R3_Text_0, MSGBOX_YESNO
# 1602 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R3_2
# 1607 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R3, ParcelCoast_T_Anton_R3_Text_1
# 1608 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R3_Text_2, MSGBOX_DEFAULT
# 1609 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R3_2:
# 1603 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1604 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R4::
# 1613 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1614 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1615 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R4_Text_0, MSGBOX_YESNO
# 1616 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R4_2
# 1621 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R4, ParcelCoast_T_Anton_R4_Text_1
# 1622 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R4_Text_2, MSGBOX_DEFAULT
# 1623 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R4_2:
# 1617 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1618 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R5::
# 1627 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1628 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1629 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R5_Text_0, MSGBOX_YESNO
# 1630 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R5_2
# 1635 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R5, ParcelCoast_T_Anton_R3_Text_1
# 1636 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R5_Text_1, MSGBOX_DEFAULT
# 1637 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R5_2:
# 1631 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1632 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate::
# 1641 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_BEATE, ParcelCoast_T_Beate_Text_0, ParcelCoast_T_Beate_Text_1, ParcelCoast_T_Beate_FirstWin
# 1645 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1646 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_T_Beate_3
ParcelCoast_T_Beate_1:
# 1649 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_T_Beate_8
ParcelCoast_T_Beate_6:
# 1652 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_T_Beate_13
ParcelCoast_T_Beate_11:
# 1655 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_T_Beate_18
ParcelCoast_T_Beate_16:
# 1658 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_T_Beate_2:
# 1647 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R2
	goto ParcelCoast_T_Beate_1

ParcelCoast_T_Beate_3:
# 1646 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R2
	goto_if 0, ParcelCoast_T_Beate_2
	goto ParcelCoast_T_Beate_1

ParcelCoast_T_Beate_7:
# 1650 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R3
	goto ParcelCoast_T_Beate_6

ParcelCoast_T_Beate_8:
# 1649 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R3
	goto_if 0, ParcelCoast_T_Beate_7
	goto ParcelCoast_T_Beate_6

ParcelCoast_T_Beate_12:
# 1653 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R4
	goto ParcelCoast_T_Beate_11

ParcelCoast_T_Beate_13:
# 1652 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R4
	goto_if 0, ParcelCoast_T_Beate_12
	goto ParcelCoast_T_Beate_11

ParcelCoast_T_Beate_17:
# 1656 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R5
	goto ParcelCoast_T_Beate_16

ParcelCoast_T_Beate_18:
# 1655 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R5
	goto_if 0, ParcelCoast_T_Beate_17
	goto ParcelCoast_T_Beate_16


ParcelCoast_T_Beate_FirstWin::
# 1662 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_Text_2, MSGBOX_DEFAULT
# 1663 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R2::
# 1667 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1668 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1669 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_0, MSGBOX_YESNO
# 1670 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R2_2
# 1675 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R2, ParcelCoast_T_Beate_R2_Text_2
# 1676 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_3, MSGBOX_DEFAULT
# 1677 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R2_2:
# 1671 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1672 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R3::
# 1681 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1682 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1683 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R3_Text_0, MSGBOX_YESNO
# 1684 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R3_2
# 1689 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R3, ParcelCoast_T_Beate_R3_Text_1
# 1690 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R3_Text_2, MSGBOX_DEFAULT
# 1691 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R3_2:
# 1685 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1686 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R4::
# 1695 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1696 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1697 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R4_Text_0, MSGBOX_YESNO
# 1698 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R4_2
# 1703 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R4, ParcelCoast_T_Beate_R4_Text_1
# 1704 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R4_Text_2, MSGBOX_DEFAULT
# 1705 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R4_2:
# 1699 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1700 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R5::
# 1709 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1710 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1711 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R5_Text_0, MSGBOX_YESNO
# 1712 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R5_2
# 1717 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R5, ParcelCoast_T_Beate_R3_Text_1
# 1718 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R5_Text_1, MSGBOX_DEFAULT
# 1719 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R5_2:
# 1713 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1714 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Shell::
# 1725 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1726 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SHELL_FOUND, ParcelCoast_Shell_2
# 1732 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Shell_Text_1, MSGBOX_SIGN
# 1733 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Shell_2:
# 1727 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Shell_Text_0, MSGBOX_SIGN
# 1728 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_Q_SHELL_FOUND
# 1729 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_PerrinScene::
# 1739 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_6, ParcelCoast_PerrinScene_2
# 1743 "data/maps/ParcelCoast/scripts.pory"
	lockall
# 1744 "data/maps/ParcelCoast/scripts.pory"
	playse SE_PIN
# 1745 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinScene_Text_0, MSGBOX_DEFAULT
# 1746 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 1747 "data/maps/ParcelCoast/scripts.pory"
	applymovement 33, Movement_ParcelCoast_PerrinIn
# 1748 "data/maps/ParcelCoast/scripts.pory"
	waitmovement 0
# 1749 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinScene_Text_1, MSGBOX_DEFAULT
# 1750 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_6, ParcelCoast_PerrinScene_Text_2
# 1751 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinScene_Text_3, MSGBOX_DEFAULT
# 1752 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 1753 "data/maps/ParcelCoast/scripts.pory"
	applymovement 33, Movement_ParcelCoast_PerrinOut
# 1754 "data/maps/ParcelCoast/scripts.pory"
	waitmovement 0
# 1755 "data/maps/ParcelCoast/scripts.pory"
	removeobject 33
# 1756 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_PERRIN_6
# 1757 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1758 "data/maps/ParcelCoast/scripts.pory"
	releaseall
	end

ParcelCoast_PerrinScene_2:
# 1740 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelCoast_PerrinTalk::
# 1762 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1763 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1764 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 1765 "data/maps/ParcelCoast/scripts.pory"
	release
	end


# 1768 "data/maps/ParcelCoast/scripts.pory"
Movement_ParcelCoast_PerrinIn:
# 1768 "data/maps/ParcelCoast/scripts.pory"
	walk_down
# 1768 "data/maps/ParcelCoast/scripts.pory"
	walk_down
	step_end

# 1769 "data/maps/ParcelCoast/scripts.pory"
Movement_ParcelCoast_PerrinOut:
# 1769 "data/maps/ParcelCoast/scripts.pory"
	walk_up
# 1769 "data/maps/ParcelCoast/scripts.pory"
	walk_up
	step_end

ParcelCoast_Epilogue::
# 1773 "data/maps/ParcelCoast/scripts.pory"
	lockall
# 1774 "data/maps/ParcelCoast/scripts.pory"
	delay 20
# 1775 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Epilogue_Text_0, MSGBOX_DEFAULT
# 1776 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Epilogue_Text_1, MSGBOX_DEFAULT
# 1777 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 1778 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 8
# 1779 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_ROUTE1, 8, 26
# 1780 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end


ParcelCoast_GymHarland_Rematch::
# 1786 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1787 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1788 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Rematch_Text_0, MSGBOX_YESNO
# 1789 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_GymHarland_Rematch_2
# 1794 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM6_R, ParcelCoast_GymHarland_Rematch_Text_2
# 1795 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Rematch_Text_3, MSGBOX_DEFAULT
# 1796 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_Rematch_2:
# 1790 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Rematch_Text_1, MSGBOX_DEFAULT
# 1791 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_FirstEntry_Text_0:
# 48 "data/maps/ParcelCoast/scripts.pory"
	.string "The ferry rounds the headland and the\n"
	.string "harbour opens up, and it is BUSY.\l"
	.string "Cranes. Hulls. The gut-and-ice smell of\l"
	.string "a working catch. Gulls over all of it.\p"
	.string "It looks alive.$"

ParcelCoast_FirstEntry_Text_1:
# 49 "data/maps/ParcelCoast/scripts.pory"
	.string "Everything wears the MEREHOLT crest.\n"
	.string "The cranes. The fuel drums. The waiting\l"
	.string "trucks. The side of the fishing boat\l"
	.string "tied at the end of the quay.$"

ParcelCoast_FirstEntry_Text_2:
# 50 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE's note is shorter than usual: THE\n"
	.string "COAST. You've read the others. This one\l"
	.string "doesn't bother to hide. See if you can\l"
	.string "still read it anyway.$"

ParcelCoast_Dredge_Text_0:
# 63 "data/maps/ParcelCoast/scripts.pory"
	.string "The dredge line. In the notebook.$"

ParcelCoast_Dredge_Text_1:
# 67 "data/maps/ParcelCoast/scripts.pory"
	.string "Offshore the water goes from green to\n"
	.string "grey in a straight line, as if ruled.\l"
	.string "Below it the bottom is scraped flat: no\l"
	.string "weed, no stone, no shadow of anything.\p"
	.string "A dredge did that. Nothing has grown\n"
	.string "back. Written down.$"

ParcelCoast_Barren_Text_0:
# 78 "data/maps/ParcelCoast/scripts.pory"
	.string "The urchin barren. In the notebook.$"

ParcelCoast_Barren_Text_1:
# 82 "data/maps/ParcelCoast/scripts.pory"
	.string "Under the quay the rock is purple with\n"
	.string "urchins, thousands, shoulder to\l"
	.string "shoulder, and nothing else. No kelp. No\l"
	.string "fish between the fronds, because there\l"
	.string "are no fronds.\p"
	.string "The thing that ate urchins is gone.\n"
	.string "Fished, or dredged, or both. The urchins\l"
	.string "ate the rest. Written down.$"

ParcelCoast_Catch_Text_0:
# 93 "data/maps/ParcelCoast/scripts.pory"
	.string "The catch, all one size. In the\n"
	.string "notebook.$"

ParcelCoast_Catch_Text_1:
# 97 "data/maps/ParcelCoast/scripts.pory"
	.string "The day's catch on the stall, iced.\n"
	.string "Every fish the same length, give or take\l"
	.string "a finger. No big ones. No small ones.\p"
	.string "A stock fished to one age, the age that\n"
	.string "just reaches the net. The old fish are\l"
	.string "gone and the young ones don't get to be\l"
	.string "old. Written down.$"

ParcelCoast_Pilings_Text_0:
# 108 "data/maps/ParcelCoast/scripts.pory"
	.string "The empty pilings. In the notebook.$"

ParcelCoast_Pilings_Text_1:
# 112 "data/maps/ParcelCoast/scripts.pory"
	.string "The old pier's pilings stand bare to the\n"
	.string "waterline. Pilings in a harbour are\l"
	.string "supposed to be furred with life: weed,\l"
	.string "mussels, the small fish that live in\l"
	.string "them.\p"
	.string "These are clean as fence posts. Nothing\n"
	.string "settles here now. Written down.$"

ParcelCoast_GymHarland_Text_0:
# 127 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: They read your file aloud at\n"
	.string "the quota hearing. Parts of it twice. My\l"
	.string "name's in it, where I put it.\p"
	.string "The review grounds half the fleet two\n"
	.string "days a week now. The lawyers call it\l"
	.string "ruin. It'll pinch, right enough. Winters\l"
	.string "pinched anyway.$"

ParcelCoast_GymHarland_Text_1:
# 128 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: They tell me all it bought is\n"
	.string "time. Aye. Time's what a season is,\l"
	.string "RANGER. I've lived season to season my\l"
	.string "whole life. It's more than I'd been given\l"
	.string "yet.$"

ParcelCoast_GymHarland_Text_2:
# 133 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Come out with me. One shift.\n"
	.string "You've read the water from the quay.\l"
	.string "Read it from the net.$"

ParcelCoast_GymHarland_Text_3:
# 134 "data/maps/ParcelCoast/scripts.pory"
	.string "Go out on the boat?$"

ParcelCoast_GymHarland_Text_4:
# 136 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Tide's at six. Offer stands\n"
	.string "till then.$"

ParcelCoast_GymHarland_Text_5:
# 143 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: There. That's the dredge line.\n"
	.string "See the colour change? Below that\l"
	.string "there's nothing to lift and nothing to\l"
	.string "hide in. We fish the edge of it like a man\l"
	.string "scraping a plate.$"

ParcelCoast_GymHarland_Text_6:
# 144 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Net's coming up. Watch.$"

ParcelCoast_GymHarland_Text_7:
# 145 "data/maps/ParcelCoast/scripts.pory"
	.string "The net comes over the rail. Urchins. A\n"
	.string "plastic drum with the crest on it.\l"
	.string "Eleven fish, every one the same length.\l"
	.string "Two go back over the side for being\l"
	.string "under the size.\p"
	.string "HARLAND: That's a shift. That's what\n"
	.string "nothing looks like, written in fish.$"

ParcelCoast_GymHarland_Text_8:
# 146 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: The note on the boat is\n"
	.string "MEREHOLT's. The quota's MEREHOLT's. The\l"
	.string "ice, the fuel, the stall I sell at. I could\l"
	.string "stop. I'd be a man with no boat who\l"
	.string "stopped. Nobody'd write that down.$"

ParcelCoast_GymHarland_Text_9:
# 147 "data/maps/ParcelCoast/scripts.pory"
	.string "{PLAYER}: I'm writing it down.$"

ParcelCoast_GymHarland_Text_10:
# 148 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: …Aye. I know. Haul in. We're\n"
	.string "done.$"

ParcelCoast_GymHarland_Text_11:
# 152 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Nine fish, landed. Write that\n"
	.string "number. Nobody else will.$"

ParcelCoast_GymHarland_Text_12:
# 157 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: It was never one report\n"
	.string "that'd turn this. Always all of them.\l"
	.string "Mine too, if I find the spine.\p"
	.string "Write it true, RANGER. That's the whole\n"
	.string "of what I've got left to ask.$"

ParcelCoast_GymHarland_Text_13:
# 161 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: So. You came all the way down\n"
	.string "to the bottom of it. Where the money is.\p"
	.string "The note on this boat is MEREHOLT's.\n"
	.string "The quota's MEREHOLT's. The stall I sell\l"
	.string "at. Set it all side by side and it's one\l"
	.string "crest. I did, at the river. You made me.$"

ParcelCoast_GymHarland_Text_14:
# 162 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: I'm not your villain. I'm the\n"
	.string "man they send the bill to. Write that\l"
	.string "true and I'll vouch for you on this\l"
	.string "water, which I don't do twice.\p"
	.string "But you'll earn it the fisher's way. Show\n"
	.string "me.$"

ParcelCoast_GymHarland_Text_15:
# 163 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: …Aye. You read the water. I'll\n"
	.string "not pretend you didn't.$"

ParcelCoast_GymHarland_Text_16:
# 169 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: That's the Tradewind\n"
	.string "clearance. Out here it means you can be\l"
	.string "trusted on the water, a thing I don't\l"
	.string "hand out twice.\p"
	.string "Here. You'll want this more than I do.$"

ParcelCoast_GymHarland_Text_17:
# 171 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: FLY. Carries you back to any\n"
	.string "harbour you've already made. A fisher's\l"
	.string "mercy, that. Some days the only\l"
	.string "kindness is a fast way home.\p"
	.string "Use it better than I've used my\n"
	.string "seasons.$"

ParcelCoast_Hale_Text_0:
# 181 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Rest while you can. The next\n"
	.string "place doesn't have a quay to stand on,\l"
	.string "or a HOLLIS to pour you tea.\p"
	.string "It has her.$"

ParcelCoast_Hale_Text_1:
# 189 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: The dredge scar. The urchins. The\n"
	.string "catch all one age. The empty pilings.\l"
	.string "The plaque. The man on the boat.\p"
	.string "Name it.$"

ParcelCoast_Hale_Text_2:
# 191 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: COLLAPSING.\p"
	.string "The grazer's gone, the urchins own the\n"
	.string "kelp, the apex is fished to nothing, and\l"
	.string "the web is coming apart in front of you\l"
	.string "in real time.$"

ParcelCoast_Hale_Text_3:
# 192 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: The overfishing you could still\n"
	.string "stop, if anyone with the power to\l"
	.string "wanted to. The dredged seabed you\l"
	.string "cannot. Half of it savable, half already\l"
	.string "gone. The hardest kind of place to write\l"
	.string "down honestly.$"

ParcelCoast_Hale_Text_4:
# 193 "data/maps/ParcelCoast/scripts.pory"
	.string "{PLAYER}: HALE. The model on the\n"
	.string "plaque. The methods are hers. DR.\l"
	.string "HERON's. She isn't lost, she's…$"

ParcelCoast_Hale_Text_5:
# 194 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: I know. Have known a while.\p"
	.string "I told you at the start her ending up at\n"
	.string "that lab wasn't random. This is the rest\l"
	.string "of that sentence.$"

ParcelCoast_Hale_Text_6:
# 195 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Your mentor didn't vanish,\n"
	.string "{PLAYER}. She made a bargain. And the\l"
	.string "bargain is out there right now with her\l"
	.string "name on the paperwork, strangling a\l"
	.string "kelp bed.\p"
	.string "I'm sorry. You came looking for a hero.\n"
	.string "You found a citation.$"

ParcelCoast_Hale_Text_7:
# 198 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Coastal Certification. For\n"
	.string "reading a place that's screaming and\l"
	.string "keeping your hand steady enough to\l"
	.string "write it down anyway.$"

ParcelCoast_Hale_Text_8:
# 204 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: There's one place left. Inland.\n"
	.string "The deep corridor, the marsh all of this\l"
	.string "used to drain from. Unfished, unbuilt.\l"
	.string "Too raw to be worth taking. Yet.\p"
	.string "That's where she went to hide. That's\n"
	.string "where we finish.$"

ParcelCoast_Hale_Text_9:
# 205 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Rest first. Then come to the\n"
	.string "station at FERNWICK, and we go inland,\l"
	.string "and we tell the truth with our whole\l"
	.string "chest, and we live with what it costs.\p"
	.string "That was always the job, {PLAYER}.\n"
	.string "This is just the first time it's cost\l"
	.string "this much.$"

ParcelCoast_Hale_Text_10:
# 209 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Don't name it from the office\n"
	.string "window. Walk the quay. The dredge line,\l"
	.string "the barren, the catch on the stall, the\l"
	.string "pilings, the plaque in the office. And\l"
	.string "talk to the man on the boat. Especially\l"
	.string "him.\p"
	.string "Then come and tell me what it is.$"

ParcelCoast_Worker_Text_0:
# 218 "data/maps/ParcelCoast/scripts.pory"
	.string "WORKER: Four generations my family's\n"
	.string "worked this quay. Good work. Honest\l"
	.string "work.\p"
	.string "Don't let that badge let you forget\n"
	.string "there's people in the frame, RANGER. We\l"
	.string "didn't dredge it. We haul what we're told\l"
	.string "to haul, or we don't eat.$"

ParcelCoast_Vendor1_Text_0:
# 225 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Cod, iced this morning. All the\n"
	.string "same size, aren't they. Customers like\l"
	.string "that. Tidy. Nobody asks why there's no\l"
	.string "big ones.$"

ParcelCoast_Vendor2_Text_0:
# 232 "data/maps/ParcelCoast/scripts.pory"
	.string "MAN: Urchin roe! The FOUNDATION found\n"
	.string "a market for it overseas. Clever.\l"
	.string "There's nothing else down there to sell.$"

ParcelCoast_Vendor3_Text_0:
# 239 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Ice is FOUNDATION ice. Fuel's\n"
	.string "FOUNDATION fuel. The stall rent goes to\l"
	.string "a FOUNDATION company. I sell fish.\l"
	.string "That's the only bit of this that's mine.$"

ParcelCoast_Vendor4_Text_0:
# 246 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: Fifty years ago you could walk\n"
	.string "across the harbour on the backs of the\l"
	.string "WAILMER. My father said that. His\l"
	.string "father said it to him. Somebody has to\l"
	.string "keep saying it.$"

ParcelCoast_Girl_Text_0:
# 253 "data/maps/ParcelCoast/scripts.pory"
	.string "GIRL: The gulls follow the boats in but\n"
	.string "they don't dive anymore. Mum says they\l"
	.string "know something we don't.$"

ParcelCoast_Docker_Text_0:
# 260 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Two shifts a day, seven days.\n"
	.string "The cannery never stops. The fish stop.\l"
	.string "The cannery doesn't.$"

ParcelCoast_GullMan_Text_0:
# 267 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: I count the boats out and the\n"
	.string "boats in. Same number. I count the\l"
	.string "crates. Fewer every month. Nobody\l"
	.string "asked me to count. Nobody asked the\l"
	.string "gulls either.$"

ParcelCoast_ReturnFerry_Text_0:
# 276 "data/maps/ParcelCoast/scripts.pory"
	.string "SAILOR: Back to SALTWICK, RANGER?\n"
	.string "Can't say I blame you. Nothing to do\l"
	.string "here but watch them take it.$"

ParcelCoast_ReturnFerry_Text_1:
# 278 "data/maps/ParcelCoast/scripts.pory"
	.string "SAILOR: I'll wait. The catch isn't going\n"
	.string "anywhere. Less of it every run, but it\l"
	.string "isn't going anywhere.$"

ParcelCoast_MereholtAide_Text_0:
# 295 "data/maps/ParcelCoast/scripts.pory"
	.string "AIDE: No message came down. She said\n"
	.string "you would already have everything she'd\l"
	.string "say.$"

ParcelCoast_MereholtAide_Text_1:
# 299 "data/maps/ParcelCoast/scripts.pory"
	.string "AIDE: Ms. BROOKE is up from the mainland\n"
	.string "office. She has asked for you. By name,\l"
	.string "no title on it.\p"
	.string "The boardroom. Top floor. Now, if you\n"
	.string "would.$"

ParcelCoast_MereholtAide_Text_2:
# 300 "data/maps/ParcelCoast/scripts.pory"
	.string "Go up?$"

ParcelCoast_MereholtAide_Text_3:
# 302 "data/maps/ParcelCoast/scripts.pory"
	.string "AIDE: She'll wait. She prices patience\n"
	.string "like everything else. Accurately.$"

ParcelCoast_SignQuay_Text_0:
# 317 "data/maps/ParcelCoast/scripts.pory"
	.string "MEREHOLT COASTAL WORKS -- LIGHTHOUSE\n"
	.string "QUAY\p"
	.string "Ferry to SALTWICK, twice daily. Landing\n"
	.string "fees to the office. No fishing from the\l"
	.string "quay. The quay is for the fleet.$"

ParcelCoast_SignMarket_Text_0:
# 321 "data/maps/ParcelCoast/scripts.pory"
	.string "FISH MARKET\p"
	.string "Stalls 1-12 let by MEREHOLT COASTAL\n"
	.string "HOLDINGS. Catch to be weighed at the\l"
	.string "cannery before sale. Undersize fish are\l"
	.string "not to be landed. Undersize is whatever\l"
	.string "the Board says this month.$"

ParcelCoast_Brage_Text_0:
# 328 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Off the boats, on the beach,\n"
	.string "nothing to do till the tide. Battle me,\l"
	.string "RANGER, I'm bored of losing at cards.$"

ParcelCoast_Brage_Text_1:
# 329 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Lost at that too.$"

ParcelCoast_Brage_Text_2:
# 344 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Ten years on the trawlers. We\n"
	.string "used to come in with the deck awash.\l"
	.string "Now you can see the planks the whole\l"
	.string "trip home.$"

ParcelCoast_Brage_R2_Text_0:
# 355 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoast_Brage_R2_Text_1:
# 357 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Another time, then.$"

ParcelCoast_Brage_R2_Text_2:
# 361 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: …Fair.$"

ParcelCoast_Brage_R2_Text_3:
# 362 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_Brage_R3_Text_0:
# 369 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Brage_R3_Text_1:
# 375 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Still yours.$"

ParcelCoast_Brage_R3_Text_2:
# 376 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Brage_R4_Text_0:
# 383 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_Brage_R4_Text_1:
# 390 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Brage_R5_Text_0:
# 397 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Brage_R5_Text_1:
# 403 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Right. That's the whole of it.$"

ParcelCoast_Brage_R5_Text_2:
# 404 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Frod_Text_0:
# 410 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: SHARPEDO off the beach. Never\n"
	.string "used to be. Nothing else to eat so they\l"
	.string "come in close. Battle.$"

ParcelCoast_Frod_Text_1:
# 411 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Close enough.$"

ParcelCoast_Frod_Text_2:
# 426 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: When the big fish are gone, the\n"
	.string "sharks eat whatever's left and then\l"
	.string "they eat each other. That's not a\l"
	.string "saying. That's this beach.$"

ParcelCoast_Frod_R2_Text_0:
# 437 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Frod_R2_Text_1:
# 439 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCoast_Frod_R2_Text_2:
# 443 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: …Again, then. Later.$"

ParcelCoast_Frod_R2_Text_3:
# 444 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Frod_R3_Text_0:
# 451 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCoast_Frod_R3_Text_1:
# 458 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Frod_R4_Text_0:
# 465 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCoast_Frod_R4_Text_1:
# 471 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Right. That's the whole of it.$"

ParcelCoast_Frod_R4_Text_2:
# 472 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Frod_R5_Text_0:
# 479 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoast_Frod_R5_Text_1:
# 485 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Still yours.$"

ParcelCoast_Frod_R5_Text_2:
# 486 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCoast_Gyda_Text_0:
# 492 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: You swam out past the dredge\n"
	.string "line! Nobody does that. Battle, then I'll\l"
	.string "show you what's down there.$"

ParcelCoast_Gyda_Text_1:
# 493 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Nothing. That's what's down\n"
	.string "there. Nothing.$"

ParcelCoast_Gyda_Text_2:
# 508 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: I dive the barren for the\n"
	.string "FOUNDATION. Counting urchins. There's a\l"
	.string "bonus if the number goes down. It never\l"
	.string "goes down.$"

ParcelCoast_Gyda_R2_Text_0:
# 519 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Gyda_R2_Text_1:
# 521 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCoast_Gyda_R2_Text_2:
# 525 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: That's the one I wanted to see.$"

ParcelCoast_Gyda_R2_Text_3:
# 526 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Gyda_R3_Text_0:
# 533 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelCoast_Gyda_R3_Text_1:
# 539 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: …Again, then. Later.$"

ParcelCoast_Gyda_R3_Text_2:
# 540 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Gyda_R4_Text_0:
# 547 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCoast_Gyda_R4_Text_1:
# 554 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Gyda_R5_Text_0:
# 561 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoast_Gyda_R5_Text_1:
# 568 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_Hroar_Text_0:
# 574 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: The inlet's mine. Been swimming\n"
	.string "it since I was six. Battle for it.$"

ParcelCoast_Hroar_Text_1:
# 575 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Yours, then. Mind the drums.$"

ParcelCoast_Hroar_Text_2:
# 590 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: There's fuel drums on the bottom\n"
	.string "of the inlet with the crest on. Nobody\l"
	.string "put them there. They just arrived.$"

ParcelCoast_Hroar_R2_Text_0:
# 601 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoast_Hroar_R2_Text_1:
# 603 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Suit yourself. I'm here.$"

ParcelCoast_Hroar_R2_Text_2:
# 607 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: That's the one I wanted to see.$"

ParcelCoast_Hroar_R2_Text_3:
# 608 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Hroar_R3_Text_0:
# 615 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCoast_Hroar_R3_Text_1:
# 622 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Hroar_R4_Text_0:
# 629 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_Hroar_R4_Text_1:
# 635 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Noted. Properly, this time.$"

ParcelCoast_Hroar_R4_Text_2:
# 636 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Hroar_R5_Text_0:
# 643 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCoast_Hroar_R5_Text_1:
# 649 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Still yours.$"

ParcelCoast_Hroar_R5_Text_2:
# 650 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Jorid_Text_0:
# 656 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: The beach is for playing! Nobody\n"
	.string "plays here anymore. They work. Battle\l"
	.string "me, that's nearly playing.$"

ParcelCoast_Jorid_Text_1:
# 657 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Nearly.$"

ParcelCoast_Jorid_Text_2:
# 672 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Mum says the beach used to have\n"
	.string "shells. I've never found a shell. Just\l"
	.string "the drum rings.$"

ParcelCoast_Jorid_R2_Text_0:
# 683 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Jorid_R2_Text_1:
# 685 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Fine. Same spot.$"

ParcelCoast_Jorid_R2_Text_2:
# 689 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Noted. Properly, this time.$"

ParcelCoast_Jorid_R2_Text_3:
# 690 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Jorid_R3_Text_0:
# 697 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Jorid_R3_Text_1:
# 703 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Right. That's the whole of it.$"

ParcelCoast_Jorid_R3_Text_2:
# 704 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Jorid_R4_Text_0:
# 711 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_Jorid_R4_Text_1:
# 717 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: …Fair.$"

ParcelCoast_Jorid_R4_Text_2:
# 718 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Jorid_R5_Text_0:
# 725 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_Jorid_R5_Text_1:
# 732 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Ketil_Text_0:
# 738 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: FOUNDATION security. Off duty.\n"
	.string "On duty I'd ask for your pass. Off duty\l"
	.string "I'll just beat you.$"

ParcelCoast_Ketil_Text_1:
# 739 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: On duty tomorrow. Don't be here.$"

ParcelCoast_Ketil_Text_2:
# 754 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: The office has a floor nobody\n"
	.string "goes to. Top one. The boardroom. I've\l"
	.string "seen the lift go up. Never seen it come\l"
	.string "down with anyone smiling.$"

ParcelCoast_Ketil_R2_Text_0:
# 765 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoast_Ketil_R2_Text_1:
# 767 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: No hurry. The water keeps.$"

ParcelCoast_Ketil_R2_Text_2:
# 771 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Noted. Properly, this time.$"

ParcelCoast_Ketil_R2_Text_3:
# 772 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Ketil_R3_Text_0:
# 779 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCoast_Ketil_R3_Text_1:
# 785 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Still yours.$"

ParcelCoast_Ketil_R3_Text_2:
# 786 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Ketil_R4_Text_0:
# 793 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCoast_Ketil_R4_Text_1:
# 799 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: That's the one I wanted to see.$"

ParcelCoast_Ketil_R4_Text_2:
# 800 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Ketil_R5_Text_0:
# 807 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Ketil_R5_Text_1:
# 813 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: …Fair.$"

ParcelCoast_Ketil_R5_Text_2:
# 814 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Liva_Text_0:
# 820 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: I came up from the mainland for\n"
	.string "the FOUNDATION's graduate scheme.\l"
	.string "Sustainable harvest modelling. Battle?$"

ParcelCoast_Liva_Text_1:
# 821 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: The model didn't predict that.$"

ParcelCoast_Liva_Text_2:
# 836 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: The model's beautiful. Elegant.\n"
	.string "Every term in it is true. It's just that\l"
	.string "the fish didn't read it.$"

ParcelCoast_Liva_R2_Text_0:
# 847 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Liva_R2_Text_1:
# 849 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Another time, then.$"

ParcelCoast_Liva_R2_Text_2:
# 853 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: That's the one I wanted to see.$"

ParcelCoast_Liva_R2_Text_3:
# 854 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_Liva_R3_Text_0:
# 861 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Liva_R3_Text_1:
# 867 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Right. That's the whole of it.$"

ParcelCoast_Liva_R3_Text_2:
# 868 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Liva_R4_Text_0:
# 875 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelCoast_Liva_R4_Text_1:
# 881 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Still yours.$"

ParcelCoast_Liva_R4_Text_2:
# 882 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Liva_R5_Text_0:
# 889 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCoast_Liva_R5_Text_1:
# 895 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: …Fair.$"

ParcelCoast_Liva_R5_Text_2:
# 896 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_Magnus_Text_0:
# 902 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Director, Coastal Holdings.\n"
	.string "You're the RANGER with the notebook.\l"
	.string "Humour me. I collect strong trainers\l"
	.string "the way I collect quotas.$"

ParcelCoast_Magnus_Text_1:
# 903 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Well. You're not for sale, at any\n"
	.string "rate.$"

ParcelCoast_Magnus_Text_2:
# 918 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Write what you like. We own the\n"
	.string "ice, the fuel, the stalls, the boats'\l"
	.string "paper and the hearing hall. A report is a\l"
	.string "piece of paper. We own the paper.$"

ParcelCoast_Magnus_R2_Text_0:
# 929 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Magnus_R2_Text_1:
# 931 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Fine. Same spot.$"

ParcelCoast_Magnus_R2_Text_2:
# 935 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Right. That's the whole of it.$"

ParcelCoast_Magnus_R2_Text_3:
# 936 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Magnus_R3_Text_0:
# 943 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCoast_Magnus_R3_Text_1:
# 949 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: …Again, then. Later.$"

ParcelCoast_Magnus_R3_Text_2:
# 950 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Magnus_R4_Text_0:
# 957 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_Magnus_R4_Text_1:
# 963 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: …Fair.$"

ParcelCoast_Magnus_R4_Text_2:
# 964 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Magnus_R5_Text_0:
# 971 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCoast_Magnus_R5_Text_1:
# 977 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Noted. Properly, this time.$"

ParcelCoast_Magnus_R5_Text_2:
# 978 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Nikolai_Text_0:
# 984 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Father says the coast is an\n"
	.string "investment. I say it smells. Battle me\l"
	.string "and I'll tell Father you were rude.$"

ParcelCoast_Nikolai_Text_1:
# 985 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Father won't care. Father\n"
	.string "never cares.$"

ParcelCoast_Nikolai_Text_2:
# 1000 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: We have a house on the\n"
	.string "mainland and a house here. The one here\l"
	.string "is for 'optics'. I looked that up. It\l"
	.string "means being seen.$"

ParcelCoast_Nikolai_R2_Text_0:
# 1011 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Nikolai_R2_Text_1:
# 1013 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Suit yourself. I'm here.$"

ParcelCoast_Nikolai_R2_Text_2:
# 1017 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Right. That's the whole of it.$"

ParcelCoast_Nikolai_R2_Text_3:
# 1018 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Nikolai_R3_Text_0:
# 1025 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelCoast_Nikolai_R3_Text_1:
# 1032 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelCoast_Nikolai_R4_Text_0:
# 1039 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: I don't care about the paper.\n"
	.string "I care about the one I lost. Go?$"

ParcelCoast_Nikolai_R4_Text_1:
# 1045 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: …Again, then. Later.$"

ParcelCoast_Nikolai_R4_Text_2:
# 1046 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoast_Nikolai_R5_Text_0:
# 1053 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_Nikolai_R5_Text_1:
# 1059 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: …Fair.$"

ParcelCoast_Nikolai_R5_Text_2:
# 1060 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Oda_Text_0:
# 1066 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: The market's quaint, isn't it. All\n"
	.string "these little stalls. I'm here for the\l"
	.string "roe. Battle, darling?$"

ParcelCoast_Oda_Text_1:
# 1067 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Not as quaint as I thought.$"

ParcelCoast_Oda_Text_2:
# 1082 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Everyone on the mainland eats this\n"
	.string "roe. It's on every menu. Nobody asks\l"
	.string "what the urchins were eating before\l"
	.string "there was nothing else.$"

ParcelCoast_Oda_R2_Text_0:
# 1093 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: I kept the team up for this. Again?$"

ParcelCoast_Oda_R2_Text_1:
# 1095 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Fine. Same spot.$"

ParcelCoast_Oda_R2_Text_2:
# 1099 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Still yours.$"

ParcelCoast_Oda_R2_Text_3:
# 1100 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_Oda_R3_Text_0:
# 1107 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Oda_R3_Text_1:
# 1114 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Oda_R4_Text_0:
# 1121 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCoast_Oda_R4_Text_1:
# 1127 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: …Fair.$"

ParcelCoast_Oda_R4_Text_2:
# 1128 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Oda_R5_Text_0:
# 1135 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoast_Oda_R5_Text_1:
# 1141 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: That's the one I wanted to see.$"

ParcelCoast_Oda_R5_Text_2:
# 1142 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_Petter_Text_0:
# 1148 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Cannery night shift. I sleep on\n"
	.string "the quay. You woke me. Battle.$"

ParcelCoast_Petter_Text_1:
# 1149 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Going back to sleep.$"

ParcelCoast_Petter_Text_2:
# 1164 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Two shifts a day and the cans\n"
	.string "are half empty. They put more water in.\l"
	.string "You can taste the quota in the tin.$"

ParcelCoast_Petter_R2_Text_0:
# 1175 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelCoast_Petter_R2_Text_1:
# 1177 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Another time, then.$"

ParcelCoast_Petter_R2_Text_2:
# 1181 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: …Fair.$"

ParcelCoast_Petter_R2_Text_3:
# 1182 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Petter_R3_Text_0:
# 1189 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCoast_Petter_R3_Text_1:
# 1195 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Still yours.$"

ParcelCoast_Petter_R3_Text_2:
# 1196 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Petter_R4_Text_0:
# 1203 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelCoast_Petter_R4_Text_1:
# 1209 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Noted. Properly, this time.$"

ParcelCoast_Petter_R4_Text_2:
# 1210 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Petter_R5_Text_0:
# 1217 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCoast_Petter_R5_Text_1:
# 1224 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Ragnar_Text_0:
# 1230 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: One GYARADOS. Took me a\n"
	.string "lifetime off this quay. Last one in the\l"
	.string "harbour, maybe. Battle it.$"

ParcelCoast_Ragnar_Text_1:
# 1231 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: It's still the last one.$"

ParcelCoast_Ragnar_Text_2:
# 1246 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: HARLAND's cousin, river side. He\n"
	.string "talks about you. Doesn't say good or\l"
	.string "bad. Just talks. For HARLAND that's a\l"
	.string "speech.$"

ParcelCoast_Ragnar_R2_Text_0:
# 1257 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelCoast_Ragnar_R2_Text_1:
# 1259 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Suit yourself. I'm here.$"

ParcelCoast_Ragnar_R2_Text_2:
# 1263 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Still yours.$"

ParcelCoast_Ragnar_R2_Text_3:
# 1264 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Ragnar_R3_Text_0:
# 1271 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelCoast_Ragnar_R3_Text_1:
# 1277 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: That's the one I wanted to see.$"

ParcelCoast_Ragnar_R3_Text_2:
# 1278 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Ragnar_R4_Text_0:
# 1285 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCoast_Ragnar_R4_Text_1:
# 1291 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: …Fair.$"

ParcelCoast_Ragnar_R4_Text_2:
# 1292 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoast_Ragnar_R5_Text_0:
# 1299 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Ragnar_R5_Text_1:
# 1306 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Solvor_Text_0:
# 1312 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: My AZUMARILL loves the\n"
	.string "harbour! Well. Loved. It won't go in the\l"
	.string "water now. Battle?$"

ParcelCoast_Solvor_Text_1:
# 1313 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: It still won't go in.$"

ParcelCoast_Solvor_Text_2:
# 1328 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: It came out itchy, same as the\n"
	.string "MARILL at ELVSUND. The same itch, two\l"
	.string "hundred miles apart. That's not two\l"
	.string "problems.$"

ParcelCoast_Solvor_R2_Text_0:
# 1339 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Solvor_R2_Text_1:
# 1341 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Suit yourself. I'm here.$"

ParcelCoast_Solvor_R2_Text_2:
# 1345 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: …Fair.$"

ParcelCoast_Solvor_R2_Text_3:
# 1346 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Solvor_R3_Text_0:
# 1353 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelCoast_Solvor_R3_Text_1:
# 1359 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Noted. Properly, this time.$"

ParcelCoast_Solvor_R3_Text_2:
# 1360 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Solvor_R4_Text_0:
# 1367 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_Solvor_R4_Text_1:
# 1374 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Solvor_R5_Text_0:
# 1381 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCoast_Solvor_R5_Text_1:
# 1387 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Right. That's the whole of it.$"

ParcelCoast_Solvor_R5_Text_2:
# 1388 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Tore_Text_0:
# 1394 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Ferry crew. We run twice a day\n"
	.string "whether anyone rides or not. Mostly\l"
	.string "not. Battle me, it passes the time.$"

ParcelCoast_Tore_Text_1:
# 1395 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Time passed.$"

ParcelCoast_Tore_Text_2:
# 1410 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: The ferry's FOUNDATION too. The\n"
	.string "one kindness on this coast and they\l"
	.string "own it. I'm not complaining. I'm just\l"
	.string "saying.$"

ParcelCoast_Tore_R2_Text_0:
# 1421 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Tore_R2_Text_1:
# 1423 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCoast_Tore_R2_Text_2:
# 1427 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Still yours.$"

ParcelCoast_Tore_R2_Text_3:
# 1428 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Tore_R3_Text_0:
# 1435 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCoast_Tore_R3_Text_1:
# 1441 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Noted. Properly, this time.$"

ParcelCoast_Tore_R3_Text_2:
# 1442 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Tore_R4_Text_0:
# 1449 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_Tore_R4_Text_1:
# 1455 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: …Fair.$"

ParcelCoast_Tore_R4_Text_2:
# 1456 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Tore_R5_Text_0:
# 1463 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Tore_R5_Text_1:
# 1470 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_T_Helge_Text_0:
# 1478 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Quay crew. We tie up the fleet\n"
	.string "and count what's missing. Battle, it's\l"
	.string "quicker than counting.$"

ParcelCoast_T_Helge_Text_1:
# 1479 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Quicker, yes.$"

ParcelCoast_T_Helge_Text_2:
# 1494 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Forty-one boats went out.\n"
	.string "Forty-one came back. The count's\l"
	.string "always right. It's the holds that are\l"
	.string "wrong.$"

ParcelCoast_T_Helge_R2_Text_0:
# 1505 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_T_Helge_R2_Text_1:
# 1507 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Fine. Same spot.$"

ParcelCoast_T_Helge_R2_Text_2:
# 1511 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Right. That's the whole of it.$"

ParcelCoast_T_Helge_R2_Text_3:
# 1512 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_T_Helge_R3_Text_0:
# 1519 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelCoast_T_Helge_R3_Text_1:
# 1525 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: …Again, then. Later.$"

ParcelCoast_T_Helge_R3_Text_2:
# 1526 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_T_Helge_R4_Text_0:
# 1533 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_T_Helge_R4_Text_1:
# 1539 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: That's the one I wanted to see.$"

ParcelCoast_T_Helge_R4_Text_2:
# 1540 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_T_Helge_R5_Text_0:
# 1547 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_T_Helge_R5_Text_1:
# 1554 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_T_Anton_Text_0:
# 1560 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: The beach is the only bit of this\n"
	.string "coast that's free. Even the sand's got\l"
	.string "rings in it. Battle?$"

ParcelCoast_T_Anton_Text_1:
# 1561 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Free, and lost.$"

ParcelCoast_T_Anton_Text_2:
# 1576 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Drum rings. Fuel drums. They roll\n"
	.string "off the quay in storms. The crest's on\l"
	.string "all of them.$"

ParcelCoast_T_Anton_R2_Text_0:
# 1587 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelCoast_T_Anton_R2_Text_1:
# 1589 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Fine. Same spot.$"

ParcelCoast_T_Anton_R2_Text_2:
# 1593 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: …Fair.$"

ParcelCoast_T_Anton_R2_Text_3:
# 1594 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_T_Anton_R3_Text_0:
# 1601 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCoast_T_Anton_R3_Text_1:
# 1607 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Noted. Properly, this time.$"

ParcelCoast_T_Anton_R3_Text_2:
# 1608 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_T_Anton_R4_Text_0:
# 1615 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_T_Anton_R4_Text_1:
# 1621 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: …Again, then. Later.$"

ParcelCoast_T_Anton_R4_Text_2:
# 1622 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_T_Anton_R5_Text_0:
# 1629 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCoast_T_Anton_R5_Text_1:
# 1636 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_T_Beate_Text_0:
# 1642 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Up from the mainland for the\n"
	.string "fish. Everyone says the fish. Nobody\l"
	.string "says there's hardly any. Battle, darling.$"

ParcelCoast_T_Beate_Text_1:
# 1643 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Hardly any of that, either.$"

ParcelCoast_T_Beate_Text_2:
# 1658 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: The brochure says 'working\n"
	.string "harbour'. It is working. Something's\l"
	.string "working. It isn't the sea.$"

ParcelCoast_T_Beate_R2_Text_0:
# 1669 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: I kept the team up for this.\n"
	.string "Again?$"

ParcelCoast_T_Beate_R2_Text_1:
# 1671 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Another time, then.$"

ParcelCoast_T_Beate_R2_Text_2:
# 1675 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Still yours.$"

ParcelCoast_T_Beate_R2_Text_3:
# 1676 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_T_Beate_R3_Text_0:
# 1683 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_T_Beate_R3_Text_1:
# 1689 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: …Fair.$"

ParcelCoast_T_Beate_R3_Text_2:
# 1690 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_T_Beate_R4_Text_0:
# 1697 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCoast_T_Beate_R4_Text_1:
# 1703 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: That's the one I wanted to see.$"

ParcelCoast_T_Beate_R4_Text_2:
# 1704 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_T_Beate_R5_Text_0:
# 1711 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_T_Beate_R5_Text_1:
# 1718 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Shell_Text_0:
# 1727 "data/maps/ParcelCoast/scripts.pory"
	.string "Half-buried in the sand between two\n"
	.string "drum rings: a shell. Whole. Pink inside.\p"
	.string "The first one anyone has found on this\n"
	.string "beach in years. Taken.$"

ParcelCoast_Shell_Text_1:
# 1732 "data/maps/ParcelCoast/scripts.pory"
	.string "Sand. Drum rings. The hollow where a\n"
	.string "shell was.$"

ParcelCoast_PerrinScene_Text_0:
# 1745 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelCoast_PerrinScene_Text_1:
# 1749 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: Coastal Holdings liaison. New\n"
	.string "card, new coat. Don't look at me like\l"
	.string "that.\p"
	.string "One last time, WREN. Then I'm done\n"
	.string "pretending we're on the same side. I\l"
	.string "never was. I just liked you.$"

ParcelCoast_PerrinScene_Text_2:
# 1750 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: …Yeah. I know.$"

ParcelCoast_PerrinScene_Text_3:
# 1751 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: Write it true, then. Whatever it\n"
	.string "costs. I'll be upstairs, typing the\l"
	.string "response.\p"
	.string "I type well. HOLLIS says so.$"

ParcelCoast_PerrinTalk_Text_0:
# 1764 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelCoast_Epilogue_Text_0:
# 1775 "data/maps/ParcelCoast/scripts.pory"
	.string "MEREHOLT COAST. The cranes swing on\n"
	.string "schedule. The quota review runs to\l"
	.string "spring, and the boats go out under it\l"
	.string "and come back with what there is.$"

ParcelCoast_Epilogue_Text_1:
# 1776 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: You want to know if it was worth\n"
	.string "it. Wrong verb. Ask if it was true.\p"
	.string "It was. Go and rest. Then go and read\n"
	.string "something else. There's a lot of region\l"
	.string "left.$"

ParcelCoast_GymHarland_Rematch_Text_0:
# 1788 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: They read you aloud at the\n"
	.string "hearing. I'd read you the old way, too.\l"
	.string "Boat's in, nets are dry, and the crew's\l"
	.string "been training on the dredge line out of\l"
	.string "spite.\p"
	.string "Full strength. Aye?$"

ParcelCoast_GymHarland_Rematch_Text_1:
# 1790 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Tide's at six. Offer stands.$"

ParcelCoast_GymHarland_Rematch_Text_2:
# 1794 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: …Aye. You read the water.\n"
	.string "Still.$"

ParcelCoast_GymHarland_Rematch_Text_3:
# 1795 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Tide's at six. Any day you like.$"
