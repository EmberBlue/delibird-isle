ParcelCoast_MapScripts::
# 23 "data/maps/ParcelCoast/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelCoast_HideAide
# 24 "data/maps/ParcelCoast/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelCoast_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelCoast_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 25 "data/maps/ParcelCoast/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ParcelCoast_FirstEntry
	.2byte 0


ParcelCoast_HideAide::
# 31 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_HideAide_2
# 34 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_TEMP_4
ParcelCoast_HideAide_1:
	end

ParcelCoast_HideAide_2:
# 32 "data/maps/ParcelCoast/scripts.pory"
	clearflag FLAG_TEMP_4
	goto ParcelCoast_HideAide_1


ParcelCoast_FirstEntry::
# 40 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_TEMP_1, 1
# 41 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COAST_ARRIVAL, ParcelCoast_FirstEntry_2
# 44 "data/maps/ParcelCoast/scripts.pory"
	lockall
# 45 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FirstEntry_Text_0, MSGBOX_DEFAULT
# 46 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FirstEntry_Text_1, MSGBOX_DEFAULT
# 47 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FirstEntry_Text_2, MSGBOX_DEFAULT
# 48 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALDMERE_COAST_ARRIVAL
# 49 "data/maps/ParcelCoast/scripts.pory"
	releaseall
	end

ParcelCoast_FirstEntry_2:
	end


ParcelCoast_Dredge::
# 55 "data/maps/ParcelCoast/scripts.pory"
	lock
# 56 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 57 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 0
# 58 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 59 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Dredge_2
# 64 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dredge_Text_1, MSGBOX_SIGN
# 65 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 66 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Dredge_2:
# 60 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dredge_Text_0, MSGBOX_SIGN
# 61 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Barren::
# 70 "data/maps/ParcelCoast/scripts.pory"
	lock
# 71 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 72 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 1
# 73 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 74 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Barren_2
# 79 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Barren_Text_1, MSGBOX_SIGN
# 80 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 81 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Barren_2:
# 75 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Barren_Text_0, MSGBOX_SIGN
# 76 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Catch::
# 85 "data/maps/ParcelCoast/scripts.pory"
	lock
# 86 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 87 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 2
# 88 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 89 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Catch_2
# 94 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Catch_Text_1, MSGBOX_SIGN
# 95 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 96 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Catch_2:
# 90 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Catch_Text_0, MSGBOX_SIGN
# 91 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Pilings::
# 100 "data/maps/ParcelCoast/scripts.pory"
	lock
# 101 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 102 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 3
# 103 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 104 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Pilings_2
# 109 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Pilings_Text_1, MSGBOX_SIGN
# 110 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 111 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Pilings_2:
# 105 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Pilings_Text_0, MSGBOX_SIGN
# 106 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_GymHarland::
# 117 "data/maps/ParcelCoast/scripts.pory"
	lock
# 118 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 119 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, ParcelCoast_GymHarland_2
# 155 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_13, MSGBOX_DEFAULT
# 156 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_14, MSGBOX_DEFAULT
# 157 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM6, ParcelCoast_GymHarland_Text_15
# 158 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_BADGE06_GET
# 159 "data/maps/ParcelCoast/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 160 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 161 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 5
# 162 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 163 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_16, MSGBOX_DEFAULT
# 164 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_HM02
# 165 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_17, MSGBOX_DEFAULT
# 166 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_2:
# 120 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_GymHarland_5
# 126 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_COAST_SHIFT_DONE, ParcelCoast_GymHarland_8
# 151 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_12, MSGBOX_DEFAULT
# 152 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_5:
# 121 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_0, MSGBOX_DEFAULT
# 122 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_1, MSGBOX_DEFAULT
# 123 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_8:
# 127 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_2, MSGBOX_DEFAULT
# 128 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_3, MSGBOX_YESNO
# 129 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_GymHarland_11
# 134 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 135 "data/maps/ParcelCoast/scripts.pory"
	playse SE_SHIP
# 136 "data/maps/ParcelCoast/scripts.pory"
	fadescreen FADE_TO_BLACK
# 137 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_5, MSGBOX_DEFAULT
# 138 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_6, MSGBOX_DEFAULT
# 139 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_7, MSGBOX_DEFAULT
# 140 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_8, MSGBOX_DEFAULT
# 141 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_9, MSGBOX_DEFAULT
# 142 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_10, MSGBOX_DEFAULT
# 143 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 144 "data/maps/ParcelCoast/scripts.pory"
	delay 60
# 145 "data/maps/ParcelCoast/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 146 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_11, MSGBOX_DEFAULT
# 147 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_COAST_SHIFT_DONE
# 148 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_11:
# 130 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_4, MSGBOX_DEFAULT
# 131 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hale::
# 172 "data/maps/ParcelCoast/scripts.pory"
	lock
# 173 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 174 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Hale_2
# 179 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 180 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 63
# 181 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 182 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelCoast_Hale_5
# 203 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_10, MSGBOX_DEFAULT
# 204 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_2:
# 175 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_0, MSGBOX_DEFAULT
# 176 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_5:
# 183 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_1, MSGBOX_DEFAULT
# 184 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyCoast
# 185 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_2, MSGBOX_DEFAULT
# 186 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_3, MSGBOX_DEFAULT
# 187 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_4, MSGBOX_DEFAULT
# 188 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_5, MSGBOX_DEFAULT
# 189 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_6, MSGBOX_DEFAULT
# 190 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 6
# 191 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 192 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_7, MSGBOX_DEFAULT
# 193 "data/maps/ParcelCoast/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 194 "data/maps/ParcelCoast/scripts.pory"
	waitfanfare
# 195 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALDMERE_COASTAL_CERT
# 196 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_MAX_POTION, 5
# 197 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 198 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_8, MSGBOX_DEFAULT
# 199 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_9, MSGBOX_DEFAULT
# 200 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Worker::
# 210 "data/maps/ParcelCoast/scripts.pory"
	lock
# 211 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 212 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Worker_Text_0, MSGBOX_DEFAULT
# 213 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor1::
# 217 "data/maps/ParcelCoast/scripts.pory"
	lock
# 218 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 219 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor1_Text_0, MSGBOX_DEFAULT
# 220 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor2::
# 224 "data/maps/ParcelCoast/scripts.pory"
	lock
# 225 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 226 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor2_Text_0, MSGBOX_DEFAULT
# 227 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor3::
# 231 "data/maps/ParcelCoast/scripts.pory"
	lock
# 232 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 233 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor3_Text_0, MSGBOX_DEFAULT
# 234 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor4::
# 238 "data/maps/ParcelCoast/scripts.pory"
	lock
# 239 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 240 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor4_Text_0, MSGBOX_DEFAULT
# 241 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Girl::
# 245 "data/maps/ParcelCoast/scripts.pory"
	lock
# 246 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 247 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Girl_Text_0, MSGBOX_DEFAULT
# 248 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Docker::
# 252 "data/maps/ParcelCoast/scripts.pory"
	lock
# 253 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 254 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Docker_Text_0, MSGBOX_DEFAULT
# 255 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_GullMan::
# 259 "data/maps/ParcelCoast/scripts.pory"
	lock
# 260 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 261 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_0, MSGBOX_DEFAULT
# 262 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_ReturnFerry::
# 268 "data/maps/ParcelCoast/scripts.pory"
	lock
# 269 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 270 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_0, MSGBOX_YESNO
# 271 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_ReturnFerry_2
# 276 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 277 "data/maps/ParcelCoast/scripts.pory"
	playse SE_SHIP
# 278 "data/maps/ParcelCoast/scripts.pory"
	delay 40
# 279 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_ISLE, 15, 31
# 280 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end

ParcelCoast_ReturnFerry_2:
# 272 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_1, MSGBOX_DEFAULT
# 273 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_MereholtAide::
# 286 "data/maps/ParcelCoast/scripts.pory"
	lock
# 287 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 288 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelCoast_MereholtAide_2
# 293 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_1, MSGBOX_DEFAULT
# 294 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_2, MSGBOX_YESNO
# 295 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_MereholtAide_5
# 300 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 301 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_BOARDROOM, 4, 2
# 302 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end

ParcelCoast_MereholtAide_2:
# 289 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_0, MSGBOX_DEFAULT
# 290 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_MereholtAide_5:
# 296 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_3, MSGBOX_DEFAULT
# 297 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_ItemA::
# 307 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_PEARL
	end


ParcelCoast_ItemB::
# 308 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_BIG_PEARL
	end


ParcelCoast_ItemMaxElixir::
# 309 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_MAX_ELIXIR
	end


ParcelCoast_SignQuay::
# 311 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_SignQuay_Text_0, MSGBOX_SIGN
	end


ParcelCoast_SignMarket::
# 315 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_SignMarket_Text_0, MSGBOX_SIGN
	end


ParcelCoast_Brage::
# 321 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_BRAGE, ParcelCoast_Brage_Text_0, ParcelCoast_Brage_Text_1
# 324 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_Text_2, MSGBOX_DEFAULT
	end


ParcelCoast_Frod::
# 328 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_FROD, ParcelCoast_Frod_Text_0, ParcelCoast_Frod_Text_1
# 331 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_Text_2, MSGBOX_DEFAULT
	end


ParcelCoast_Gyda::
# 335 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_GYDA, ParcelCoast_Gyda_Text_0, ParcelCoast_Gyda_Text_1
# 338 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_Text_2, MSGBOX_DEFAULT
	end


ParcelCoast_Hroar::
# 342 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_HROAR, ParcelCoast_Hroar_Text_0, ParcelCoast_Hroar_Text_1
# 345 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_Text_2, MSGBOX_DEFAULT
	end


ParcelCoast_Jorid::
# 349 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_JORID, ParcelCoast_Jorid_Text_0, ParcelCoast_Jorid_Text_1
# 352 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_Text_2, MSGBOX_DEFAULT
	end


ParcelCoast_Ketil::
# 356 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_KETIL, ParcelCoast_Ketil_Text_0, ParcelCoast_Ketil_Text_1
# 359 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_Text_2, MSGBOX_DEFAULT
	end


ParcelCoast_Liva::
# 363 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_LIVA, ParcelCoast_Liva_Text_0, ParcelCoast_Liva_Text_1
# 366 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_Text_2, MSGBOX_DEFAULT
	end


ParcelCoast_Magnus::
# 370 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_MAGNUS, ParcelCoast_Magnus_Text_0, ParcelCoast_Magnus_Text_1
# 373 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_Text_2, MSGBOX_DEFAULT
	end


ParcelCoast_Nikolai::
# 377 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_NIKOLAI, ParcelCoast_Nikolai_Text_0, ParcelCoast_Nikolai_Text_1
# 380 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_Text_2, MSGBOX_DEFAULT
	end


ParcelCoast_Oda::
# 384 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_ODA, ParcelCoast_Oda_Text_0, ParcelCoast_Oda_Text_1
# 387 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_Text_2, MSGBOX_DEFAULT
	end


ParcelCoast_Petter::
# 391 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_PETTER, ParcelCoast_Petter_Text_0, ParcelCoast_Petter_Text_1
# 394 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_Text_2, MSGBOX_DEFAULT
	end


ParcelCoast_Ragnar::
# 398 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_RAGNAR, ParcelCoast_Ragnar_Text_0, ParcelCoast_Ragnar_Text_1
# 401 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_Text_2, MSGBOX_DEFAULT
	end


ParcelCoast_Solvor::
# 405 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_SOLVOR, ParcelCoast_Solvor_Text_0, ParcelCoast_Solvor_Text_1
# 408 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_Text_2, MSGBOX_DEFAULT
	end


ParcelCoast_Tore::
# 412 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_TORE, ParcelCoast_Tore_Text_0, ParcelCoast_Tore_Text_1
# 415 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_Text_2, MSGBOX_DEFAULT
	end


ParcelCoast_FirstEntry_Text_0:
# 45 "data/maps/ParcelCoast/scripts.pory"
	.string "The ferry rounds the headland and the\n"
	.string "harbour opens up, and it is BUSY.\l"
	.string "Cranes. Hulls. The gut-and-ice smell of\l"
	.string "a working catch. Gulls over all of it.\p"
	.string "It looks alive.$"

ParcelCoast_FirstEntry_Text_1:
# 46 "data/maps/ParcelCoast/scripts.pory"
	.string "Everything wears the MEREHOLT crest.\n"
	.string "The cranes. The fuel drums. The waiting\l"
	.string "trucks. The side of the fishing boat\l"
	.string "tied at the end of the quay.$"

ParcelCoast_FirstEntry_Text_2:
# 47 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE's note is shorter than usual: THE\n"
	.string "COAST. You've read the others. This one\l"
	.string "doesn't bother to hide. See if you can\l"
	.string "still read it anyway.$"

ParcelCoast_Dredge_Text_0:
# 60 "data/maps/ParcelCoast/scripts.pory"
	.string "The dredge line. In the notebook.$"

ParcelCoast_Dredge_Text_1:
# 64 "data/maps/ParcelCoast/scripts.pory"
	.string "Offshore the water goes from green to\n"
	.string "grey in a straight line, as if ruled.\l"
	.string "Below it the bottom is scraped flat: no\l"
	.string "weed, no stone, no shadow of anything.\p"
	.string "A dredge did that. Nothing has grown\n"
	.string "back. Written down.$"

ParcelCoast_Barren_Text_0:
# 75 "data/maps/ParcelCoast/scripts.pory"
	.string "The urchin barren. In the notebook.$"

ParcelCoast_Barren_Text_1:
# 79 "data/maps/ParcelCoast/scripts.pory"
	.string "Under the quay the rock is purple with\n"
	.string "urchins, thousands, shoulder to\l"
	.string "shoulder, and nothing else. No kelp. No\l"
	.string "fish between the fronds, because there\l"
	.string "are no fronds.\p"
	.string "The thing that ate urchins is gone.\n"
	.string "Fished, or dredged, or both. The urchins\l"
	.string "ate the rest. Written down.$"

ParcelCoast_Catch_Text_0:
# 90 "data/maps/ParcelCoast/scripts.pory"
	.string "The catch, all one size. In the\n"
	.string "notebook.$"

ParcelCoast_Catch_Text_1:
# 94 "data/maps/ParcelCoast/scripts.pory"
	.string "The day's catch on the stall, iced.\n"
	.string "Every fish the same length, give or take\l"
	.string "a finger. No big ones. No small ones.\p"
	.string "A stock fished to one age, the age that\n"
	.string "just reaches the net. The old fish are\l"
	.string "gone and the young ones don't get to be\l"
	.string "old. Written down.$"

ParcelCoast_Pilings_Text_0:
# 105 "data/maps/ParcelCoast/scripts.pory"
	.string "The empty pilings. In the notebook.$"

ParcelCoast_Pilings_Text_1:
# 109 "data/maps/ParcelCoast/scripts.pory"
	.string "The old pier's pilings stand bare to the\n"
	.string "waterline. Pilings in a harbour are\l"
	.string "supposed to be furred with life: weed,\l"
	.string "mussels, the small fish that live in\l"
	.string "them.\p"
	.string "These are clean as fence posts. Nothing\n"
	.string "settles here now. Written down.$"

ParcelCoast_GymHarland_Text_0:
# 121 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: They read your file aloud at\n"
	.string "the quota hearing. Parts of it twice. My\l"
	.string "name's in it, where I put it.\p"
	.string "The review grounds half the fleet two\n"
	.string "days a week now. The lawyers call it\l"
	.string "ruin. It'll pinch, right enough. Winters\l"
	.string "pinched anyway.$"

ParcelCoast_GymHarland_Text_1:
# 122 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: They tell me all it bought is\n"
	.string "time. Aye. Time's what a season is,\l"
	.string "RANGER. I've lived season to season my\l"
	.string "whole life. It's more than I'd been given\l"
	.string "yet.$"

ParcelCoast_GymHarland_Text_2:
# 127 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Come out with me. One shift.\n"
	.string "You've read the water from the quay.\l"
	.string "Read it from the net.$"

ParcelCoast_GymHarland_Text_3:
# 128 "data/maps/ParcelCoast/scripts.pory"
	.string "Go out on the boat?$"

ParcelCoast_GymHarland_Text_4:
# 130 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Tide's at six. Offer stands\n"
	.string "till then.$"

ParcelCoast_GymHarland_Text_5:
# 137 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: There. That's the dredge line.\n"
	.string "See the colour change? Below that\l"
	.string "there's nothing to lift and nothing to\l"
	.string "hide in. We fish the edge of it like a man\l"
	.string "scraping a plate.$"

ParcelCoast_GymHarland_Text_6:
# 138 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Net's coming up. Watch.$"

ParcelCoast_GymHarland_Text_7:
# 139 "data/maps/ParcelCoast/scripts.pory"
	.string "The net comes over the rail. Urchins. A\n"
	.string "plastic drum with the crest on it.\l"
	.string "Eleven fish, every one the same length.\l"
	.string "Two go back over the side for being\l"
	.string "under the size.\p"
	.string "HARLAND: That's a shift. That's what\n"
	.string "nothing looks like, written in fish.$"

ParcelCoast_GymHarland_Text_8:
# 140 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: The note on the boat is\n"
	.string "MEREHOLT's. The quota's MEREHOLT's. The\l"
	.string "ice, the fuel, the stall I sell at. I could\l"
	.string "stop. I'd be a man with no boat who\l"
	.string "stopped. Nobody'd write that down.$"

ParcelCoast_GymHarland_Text_9:
# 141 "data/maps/ParcelCoast/scripts.pory"
	.string "{PLAYER}: I'm writing it down.$"

ParcelCoast_GymHarland_Text_10:
# 142 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: …Aye. I know. Haul in. We're\n"
	.string "done.$"

ParcelCoast_GymHarland_Text_11:
# 146 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Nine fish, landed. Write that\n"
	.string "number. Nobody else will.$"

ParcelCoast_GymHarland_Text_12:
# 151 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: It was never one report\n"
	.string "that'd turn this. Always all of them.\l"
	.string "Mine too, if I find the spine.\p"
	.string "Write it true, RANGER. That's the whole\n"
	.string "of what I've got left to ask.$"

ParcelCoast_GymHarland_Text_13:
# 155 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: So. You came all the way down\n"
	.string "to the bottom of it. Where the money is.\p"
	.string "The note on this boat is MEREHOLT's.\n"
	.string "The quota's MEREHOLT's. The stall I sell\l"
	.string "at. Set it all side by side and it's one\l"
	.string "crest. I did, at the river. You made me.$"

ParcelCoast_GymHarland_Text_14:
# 156 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: I'm not your villain. I'm the\n"
	.string "man they send the bill to. Write that\l"
	.string "true and I'll vouch for you on this\l"
	.string "water, which I don't do twice.\p"
	.string "But you'll earn it the fisher's way. Show\n"
	.string "me.$"

ParcelCoast_GymHarland_Text_15:
# 157 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: …Aye. You read the water. I'll\n"
	.string "not pretend you didn't.$"

ParcelCoast_GymHarland_Text_16:
# 163 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: That's the Tradewind\n"
	.string "clearance. Out here it means you can be\l"
	.string "trusted on the water, a thing I don't\l"
	.string "hand out twice.\p"
	.string "Here. You'll want this more than I do.$"

ParcelCoast_GymHarland_Text_17:
# 165 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: FLY. Carries you back to any\n"
	.string "harbour you've already made. A fisher's\l"
	.string "mercy, that. Some days the only\l"
	.string "kindness is a fast way home.\p"
	.string "Use it better than I've used my\n"
	.string "seasons.$"

ParcelCoast_Hale_Text_0:
# 175 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Rest while you can. The next\n"
	.string "place doesn't have a quay to stand on,\l"
	.string "or a HOLLIS to pour you tea.\p"
	.string "It has her.$"

ParcelCoast_Hale_Text_1:
# 183 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: The dredge scar. The urchins. The\n"
	.string "catch all one age. The empty pilings.\l"
	.string "The plaque. The man on the boat.\p"
	.string "Name it.$"

ParcelCoast_Hale_Text_2:
# 185 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: COLLAPSING.\p"
	.string "The grazer's gone, the urchins own the\n"
	.string "kelp, the apex is fished to nothing, and\l"
	.string "the web is coming apart in front of you\l"
	.string "in real time.$"

ParcelCoast_Hale_Text_3:
# 186 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: The overfishing you could still\n"
	.string "stop, if anyone with the power to\l"
	.string "wanted to. The dredged seabed you\l"
	.string "cannot. Half of it savable, half already\l"
	.string "gone. The hardest kind of place to write\l"
	.string "down honestly.$"

ParcelCoast_Hale_Text_4:
# 187 "data/maps/ParcelCoast/scripts.pory"
	.string "{PLAYER}: HALE. The model on the\n"
	.string "plaque. The methods are hers. DR.\l"
	.string "HERON's. She isn't lost, she's…$"

ParcelCoast_Hale_Text_5:
# 188 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: I know. Have known a while.\p"
	.string "I told you at the start her ending up at\n"
	.string "that lab wasn't random. This is the rest\l"
	.string "of that sentence.$"

ParcelCoast_Hale_Text_6:
# 189 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Your mentor didn't vanish,\n"
	.string "{PLAYER}. She made a bargain. And the\l"
	.string "bargain is out there right now with her\l"
	.string "name on the paperwork, strangling a\l"
	.string "kelp bed.\p"
	.string "I'm sorry. You came looking for a hero.\n"
	.string "You found a citation.$"

ParcelCoast_Hale_Text_7:
# 192 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Coastal Certification. For\n"
	.string "reading a place that's screaming and\l"
	.string "keeping your hand steady enough to\l"
	.string "write it down anyway.$"

ParcelCoast_Hale_Text_8:
# 198 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: There's one place left. Inland.\n"
	.string "The deep corridor, the marsh all of this\l"
	.string "used to drain from. Unfished, unbuilt.\l"
	.string "Too raw to be worth taking. Yet.\p"
	.string "That's where she went to hide. That's\n"
	.string "where we finish.$"

ParcelCoast_Hale_Text_9:
# 199 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Rest first. Then come to the\n"
	.string "station at FERNWICK, and we go inland,\l"
	.string "and we tell the truth with our whole\l"
	.string "chest, and we live with what it costs.\p"
	.string "That was always the job, {PLAYER}.\n"
	.string "This is just the first time it's cost\l"
	.string "this much.$"

ParcelCoast_Hale_Text_10:
# 203 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Don't name it from the office\n"
	.string "window. Walk the quay. The dredge line,\l"
	.string "the barren, the catch on the stall, the\l"
	.string "pilings, the plaque in the office. And\l"
	.string "talk to the man on the boat. Especially\l"
	.string "him.\p"
	.string "Then come and tell me what it is.$"

ParcelCoast_Worker_Text_0:
# 212 "data/maps/ParcelCoast/scripts.pory"
	.string "WORKER: Four generations my family's\n"
	.string "worked this quay. Good work. Honest\l"
	.string "work.\p"
	.string "Don't let that badge let you forget\n"
	.string "there's people in the frame, RANGER. We\l"
	.string "didn't dredge it. We haul what we're told\l"
	.string "to haul, or we don't eat.$"

ParcelCoast_Vendor1_Text_0:
# 219 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Cod, iced this morning. All the\n"
	.string "same size, aren't they. Customers like\l"
	.string "that. Tidy. Nobody asks why there's no\l"
	.string "big ones.$"

ParcelCoast_Vendor2_Text_0:
# 226 "data/maps/ParcelCoast/scripts.pory"
	.string "MAN: Urchin roe! The FOUNDATION found\n"
	.string "a market for it overseas. Clever.\l"
	.string "There's nothing else down there to sell.$"

ParcelCoast_Vendor3_Text_0:
# 233 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Ice is FOUNDATION ice. Fuel's\n"
	.string "FOUNDATION fuel. The stall rent goes to\l"
	.string "a FOUNDATION company. I sell fish.\l"
	.string "That's the only bit of this that's mine.$"

ParcelCoast_Vendor4_Text_0:
# 240 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: Fifty years ago you could walk\n"
	.string "across the harbour on the backs of the\l"
	.string "WAILMER. My father said that. His\l"
	.string "father said it to him. Somebody has to\l"
	.string "keep saying it.$"

ParcelCoast_Girl_Text_0:
# 247 "data/maps/ParcelCoast/scripts.pory"
	.string "GIRL: The gulls follow the boats in but\n"
	.string "they don't dive anymore. Mum says they\l"
	.string "know something we don't.$"

ParcelCoast_Docker_Text_0:
# 254 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Two shifts a day, seven days.\n"
	.string "The cannery never stops. The fish stop.\l"
	.string "The cannery doesn't.$"

ParcelCoast_GullMan_Text_0:
# 261 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: I count the boats out and the\n"
	.string "boats in. Same number. I count the\l"
	.string "crates. Fewer every month. Nobody\l"
	.string "asked me to count. Nobody asked the\l"
	.string "gulls either.$"

ParcelCoast_ReturnFerry_Text_0:
# 270 "data/maps/ParcelCoast/scripts.pory"
	.string "SAILOR: Back to SALTWICK, RANGER?\n"
	.string "Can't say I blame you. Nothing to do\l"
	.string "here but watch them take it.$"

ParcelCoast_ReturnFerry_Text_1:
# 272 "data/maps/ParcelCoast/scripts.pory"
	.string "SAILOR: I'll wait. The catch isn't going\n"
	.string "anywhere. Less of it every run, but it\l"
	.string "isn't going anywhere.$"

ParcelCoast_MereholtAide_Text_0:
# 289 "data/maps/ParcelCoast/scripts.pory"
	.string "AIDE: No message came down. She said\n"
	.string "you would already have everything she'd\l"
	.string "say.$"

ParcelCoast_MereholtAide_Text_1:
# 293 "data/maps/ParcelCoast/scripts.pory"
	.string "AIDE: Ms. BROOKE is up from the mainland\n"
	.string "office. She has asked for you. By name,\l"
	.string "no title on it.\p"
	.string "The boardroom. Top floor. Now, if you\n"
	.string "would.$"

ParcelCoast_MereholtAide_Text_2:
# 294 "data/maps/ParcelCoast/scripts.pory"
	.string "Go up?$"

ParcelCoast_MereholtAide_Text_3:
# 296 "data/maps/ParcelCoast/scripts.pory"
	.string "AIDE: She'll wait. She prices patience\n"
	.string "like everything else. Accurately.$"

ParcelCoast_SignQuay_Text_0:
# 311 "data/maps/ParcelCoast/scripts.pory"
	.string "MEREHOLT COASTAL WORKS -- LIGHTHOUSE\n"
	.string "QUAY\p"
	.string "Ferry to SALTWICK, twice daily. Landing\n"
	.string "fees to the office. No fishing from the\l"
	.string "quay. The quay is for the fleet.$"

ParcelCoast_SignMarket_Text_0:
# 315 "data/maps/ParcelCoast/scripts.pory"
	.string "FISH MARKET\p"
	.string "Stalls 1-12 let by MEREHOLT COASTAL\n"
	.string "HOLDINGS. Catch to be weighed at the\l"
	.string "cannery before sale. Undersize fish are\l"
	.string "not to be landed. Undersize is whatever\l"
	.string "the Board says this month.$"

ParcelCoast_Brage_Text_0:
# 322 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Off the boats, on the beach,\n"
	.string "nothing to do till the tide. Battle me,\l"
	.string "RANGER, I'm bored of losing at cards.$"

ParcelCoast_Brage_Text_1:
# 323 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Lost at that too.$"

ParcelCoast_Brage_Text_2:
# 324 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Ten years on the trawlers. We\n"
	.string "used to come in with the deck awash.\l"
	.string "Now you can see the planks the whole\l"
	.string "trip home.$"

ParcelCoast_Frod_Text_0:
# 329 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: SHARPEDO off the beach. Never\n"
	.string "used to be. Nothing else to eat so they\l"
	.string "come in close. Battle.$"

ParcelCoast_Frod_Text_1:
# 330 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Close enough.$"

ParcelCoast_Frod_Text_2:
# 331 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: When the big fish are gone, the\n"
	.string "sharks eat whatever's left and then\l"
	.string "they eat each other. That's not a\l"
	.string "saying. That's this beach.$"

ParcelCoast_Gyda_Text_0:
# 336 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: You swam out past the dredge\n"
	.string "line! Nobody does that. Battle, then I'll\l"
	.string "show you what's down there.$"

ParcelCoast_Gyda_Text_1:
# 337 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Nothing. That's what's down\n"
	.string "there. Nothing.$"

ParcelCoast_Gyda_Text_2:
# 338 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: I dive the barren for the\n"
	.string "FOUNDATION. Counting urchins. There's a\l"
	.string "bonus if the number goes down. It never\l"
	.string "goes down.$"

ParcelCoast_Hroar_Text_0:
# 343 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: The inlet's mine. Been swimming\n"
	.string "it since I was six. Battle for it.$"

ParcelCoast_Hroar_Text_1:
# 344 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Yours, then. Mind the drums.$"

ParcelCoast_Hroar_Text_2:
# 345 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: There's fuel drums on the bottom\n"
	.string "of the inlet with the crest on. Nobody\l"
	.string "put them there. They just arrived.$"

ParcelCoast_Jorid_Text_0:
# 350 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: The beach is for playing! Nobody\n"
	.string "plays here anymore. They work. Battle\l"
	.string "me, that's nearly playing.$"

ParcelCoast_Jorid_Text_1:
# 351 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Nearly.$"

ParcelCoast_Jorid_Text_2:
# 352 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Mum says the beach used to have\n"
	.string "shells. I've never found a shell. Just\l"
	.string "the drum rings.$"

ParcelCoast_Ketil_Text_0:
# 357 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: FOUNDATION security. Off duty.\n"
	.string "On duty I'd ask for your pass. Off duty\l"
	.string "I'll just beat you.$"

ParcelCoast_Ketil_Text_1:
# 358 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: On duty tomorrow. Don't be here.$"

ParcelCoast_Ketil_Text_2:
# 359 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: The office has a floor nobody\n"
	.string "goes to. Top one. The boardroom. I've\l"
	.string "seen the lift go up. Never seen it come\l"
	.string "down with anyone smiling.$"

ParcelCoast_Liva_Text_0:
# 364 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: I came up from the mainland for\n"
	.string "the FOUNDATION's graduate scheme.\l"
	.string "Sustainable harvest modelling. Battle?$"

ParcelCoast_Liva_Text_1:
# 365 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: The model didn't predict that.$"

ParcelCoast_Liva_Text_2:
# 366 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: The model's beautiful. Elegant.\n"
	.string "Every term in it is true. It's just that\l"
	.string "the fish didn't read it.$"

ParcelCoast_Magnus_Text_0:
# 371 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Director, Coastal Holdings.\n"
	.string "You're the RANGER with the notebook.\l"
	.string "Humour me. I collect strong trainers\l"
	.string "the way I collect quotas.$"

ParcelCoast_Magnus_Text_1:
# 372 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Well. You're not for sale, at any\n"
	.string "rate.$"

ParcelCoast_Magnus_Text_2:
# 373 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Write what you like. We own the\n"
	.string "ice, the fuel, the stalls, the boats'\l"
	.string "paper and the hearing hall. A report is a\l"
	.string "piece of paper. We own the paper.$"

ParcelCoast_Nikolai_Text_0:
# 378 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Father says the coast is an\n"
	.string "investment. I say it smells. Battle me\l"
	.string "and I'll tell Father you were rude.$"

ParcelCoast_Nikolai_Text_1:
# 379 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Father won't care. Father\n"
	.string "never cares.$"

ParcelCoast_Nikolai_Text_2:
# 380 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: We have a house on the\n"
	.string "mainland and a house here. The one here\l"
	.string "is for 'optics'. I looked that up. It\l"
	.string "means being seen.$"

ParcelCoast_Oda_Text_0:
# 385 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: The market's quaint, isn't it. All\n"
	.string "these little stalls. I'm here for the\l"
	.string "roe. Battle, darling?$"

ParcelCoast_Oda_Text_1:
# 386 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Not as quaint as I thought.$"

ParcelCoast_Oda_Text_2:
# 387 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Everyone on the mainland eats this\n"
	.string "roe. It's on every menu. Nobody asks\l"
	.string "what the urchins were eating before\l"
	.string "there was nothing else.$"

ParcelCoast_Petter_Text_0:
# 392 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Cannery night shift. I sleep on\n"
	.string "the quay. You woke me. Battle.$"

ParcelCoast_Petter_Text_1:
# 393 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Going back to sleep.$"

ParcelCoast_Petter_Text_2:
# 394 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Two shifts a day and the cans\n"
	.string "are half empty. They put more water in.\l"
	.string "You can taste the quota in the tin.$"

ParcelCoast_Ragnar_Text_0:
# 399 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: One GYARADOS. Took me a\n"
	.string "lifetime off this quay. Last one in the\l"
	.string "harbour, maybe. Battle it.$"

ParcelCoast_Ragnar_Text_1:
# 400 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: It's still the last one.$"

ParcelCoast_Ragnar_Text_2:
# 401 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: HARLAND's cousin, river side. He\n"
	.string "talks about you. Doesn't say good or\l"
	.string "bad. Just talks. For HARLAND that's a\l"
	.string "speech.$"

ParcelCoast_Solvor_Text_0:
# 406 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: My AZUMARILL loves the\n"
	.string "harbour! Well. Loved. It won't go in the\l"
	.string "water now. Battle?$"

ParcelCoast_Solvor_Text_1:
# 407 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: It still won't go in.$"

ParcelCoast_Solvor_Text_2:
# 408 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: It came out itchy, same as the\n"
	.string "MARILL at ELVSUND. The same itch, two\l"
	.string "hundred miles apart. That's not two\l"
	.string "problems.$"

ParcelCoast_Tore_Text_0:
# 413 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Ferry crew. We run twice a day\n"
	.string "whether anyone rides or not. Mostly\l"
	.string "not. Battle me, it passes the time.$"

ParcelCoast_Tore_Text_1:
# 414 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Time passed.$"

ParcelCoast_Tore_Text_2:
# 415 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: The ferry's FOUNDATION too. The\n"
	.string "one kindness on this coast and they\l"
	.string "own it. I'm not complaining. I'm just\l"
	.string "saying.$"
