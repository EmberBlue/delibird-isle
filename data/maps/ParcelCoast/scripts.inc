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
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Hale_2
# 185 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Hale_5
# 190 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 191 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 63
# 192 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 193 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelCoast_Hale_8
# 214 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_11, MSGBOX_DEFAULT
# 215 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_2:
# 181 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_0, MSGBOX_DEFAULT
# 182 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_5:
# 186 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_1, MSGBOX_DEFAULT
# 187 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_8:
# 194 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_2, MSGBOX_DEFAULT
# 195 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyCoast
# 196 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_3, MSGBOX_DEFAULT
# 197 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_4, MSGBOX_DEFAULT
# 198 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_5, MSGBOX_DEFAULT
# 199 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_6, MSGBOX_DEFAULT
# 200 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_7, MSGBOX_DEFAULT
# 201 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 6
# 202 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 203 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_8, MSGBOX_DEFAULT
# 204 "data/maps/ParcelCoast/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 205 "data/maps/ParcelCoast/scripts.pory"
	waitfanfare
# 206 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALDMERE_COASTAL_CERT
# 207 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_MAX_POTION, 5
# 208 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 209 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_9, MSGBOX_DEFAULT
# 210 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_10, MSGBOX_DEFAULT
# 211 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Worker::
# 221 "data/maps/ParcelCoast/scripts.pory"
	lock
# 222 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 223 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Worker_2
# 228 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Worker_Text_1, MSGBOX_DEFAULT
# 229 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Worker_2:
# 224 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Worker_Text_0, MSGBOX_DEFAULT
# 225 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor1::
# 233 "data/maps/ParcelCoast/scripts.pory"
	lock
# 234 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 235 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Vendor1_2
# 240 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor1_Text_1, MSGBOX_DEFAULT
# 241 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor1_2:
# 236 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor1_Text_0, MSGBOX_DEFAULT
# 237 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor2::
# 245 "data/maps/ParcelCoast/scripts.pory"
	lock
# 246 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 247 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Vendor2_2
# 252 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor2_Text_1, MSGBOX_DEFAULT
# 253 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor2_2:
# 248 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor2_Text_0, MSGBOX_DEFAULT
# 249 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor3::
# 257 "data/maps/ParcelCoast/scripts.pory"
	lock
# 258 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 259 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Vendor3_2
# 264 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor3_Text_1, MSGBOX_DEFAULT
# 265 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor3_2:
# 260 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor3_Text_0, MSGBOX_DEFAULT
# 261 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor4::
# 269 "data/maps/ParcelCoast/scripts.pory"
	lock
# 270 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 271 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Vendor4_2
# 276 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor4_Text_1, MSGBOX_DEFAULT
# 277 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor4_2:
# 272 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor4_Text_0, MSGBOX_DEFAULT
# 273 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Girl::
# 281 "data/maps/ParcelCoast/scripts.pory"
	lock
# 282 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 283 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Girl_2
# 288 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Girl_Text_1, MSGBOX_DEFAULT
# 289 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Girl_2:
# 284 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Girl_Text_0, MSGBOX_DEFAULT
# 285 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Docker::
# 293 "data/maps/ParcelCoast/scripts.pory"
	lock
# 294 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 295 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Docker_2
# 300 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Docker_Text_1, MSGBOX_DEFAULT
# 301 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Docker_2:
# 296 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Docker_Text_0, MSGBOX_DEFAULT
# 297 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_GullMan::
# 305 "data/maps/ParcelCoast/scripts.pory"
	lock
# 306 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 307 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_GullMan_2
# 312 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_1, MSGBOX_DEFAULT
# 313 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GullMan_2:
# 308 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_0, MSGBOX_DEFAULT
# 309 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_ReturnFerry::
# 319 "data/maps/ParcelCoast/scripts.pory"
	lock
# 320 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 321 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_ReturnFerry_2
# 326 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_1, MSGBOX_YESNO
# 327 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_ReturnFerry_5
# 332 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 333 "data/maps/ParcelCoast/scripts.pory"
	playse SE_SHIP
# 334 "data/maps/ParcelCoast/scripts.pory"
	delay 40
# 335 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_ISLE, 15, 31
# 336 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end

ParcelCoast_ReturnFerry_2:
# 322 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_0, MSGBOX_DEFAULT
# 323 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_ReturnFerry_5:
# 328 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_2, MSGBOX_DEFAULT
# 329 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_MereholtAide::
# 342 "data/maps/ParcelCoast/scripts.pory"
	lock
# 343 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 344 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelCoast_MereholtAide_2
# 349 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_1, MSGBOX_DEFAULT
# 350 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_2, MSGBOX_YESNO
# 351 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_MereholtAide_5
# 356 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 357 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_BOARDROOM, 4, 2
# 358 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end

ParcelCoast_MereholtAide_2:
# 345 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_0, MSGBOX_DEFAULT
# 346 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_MereholtAide_5:
# 352 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_3, MSGBOX_DEFAULT
# 353 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_ItemA::
# 363 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_PEARL
	end


ParcelCoast_ItemB::
# 364 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_BIG_PEARL
	end


ParcelCoast_ItemMaxElixir::
# 365 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_MAX_ELIXIR
	end


ParcelCoast_SignQuay::
# 367 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_SignQuay_Text_0, MSGBOX_SIGN
	end


ParcelCoast_SignMarket::
# 371 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_SignMarket_Text_0, MSGBOX_SIGN
	end


ParcelCoast_Brage::
# 377 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_BRAGE, ParcelCoast_Brage_Text_0, ParcelCoast_Brage_Text_1, ParcelCoast_Brage_FirstWin
# 381 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 382 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Brage_3
ParcelCoast_Brage_1:
# 385 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Brage_8
ParcelCoast_Brage_6:
# 388 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Brage_13
ParcelCoast_Brage_11:
# 391 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Brage_18
ParcelCoast_Brage_16:
# 394 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Brage_2:
# 383 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R2
	goto ParcelCoast_Brage_1

ParcelCoast_Brage_3:
# 382 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R2
	goto_if 0, ParcelCoast_Brage_2
	goto ParcelCoast_Brage_1

ParcelCoast_Brage_7:
# 386 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R3
	goto ParcelCoast_Brage_6

ParcelCoast_Brage_8:
# 385 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R3
	goto_if 0, ParcelCoast_Brage_7
	goto ParcelCoast_Brage_6

ParcelCoast_Brage_12:
# 389 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R4
	goto ParcelCoast_Brage_11

ParcelCoast_Brage_13:
# 388 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R4
	goto_if 0, ParcelCoast_Brage_12
	goto ParcelCoast_Brage_11

ParcelCoast_Brage_17:
# 392 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R5
	goto ParcelCoast_Brage_16

ParcelCoast_Brage_18:
# 391 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R5
	goto_if 0, ParcelCoast_Brage_17
	goto ParcelCoast_Brage_16


ParcelCoast_Brage_FirstWin::
# 398 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_Text_2, MSGBOX_DEFAULT
# 399 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R2::
# 403 "data/maps/ParcelCoast/scripts.pory"
	lock
# 404 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 405 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_0, MSGBOX_YESNO
# 406 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R2_2
# 411 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R2, ParcelCoast_Brage_R2_Text_2
# 412 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_3, MSGBOX_DEFAULT
# 413 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R2_2:
# 407 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 408 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R3::
# 417 "data/maps/ParcelCoast/scripts.pory"
	lock
# 418 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 419 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R3_Text_0, MSGBOX_YESNO
# 420 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R3_2
# 425 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R3, ParcelCoast_Brage_R3_Text_1
# 426 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R3_Text_2, MSGBOX_DEFAULT
# 427 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R3_2:
# 421 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 422 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R4::
# 431 "data/maps/ParcelCoast/scripts.pory"
	lock
# 432 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 433 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R4_Text_0, MSGBOX_YESNO
# 434 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R4_2
# 439 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R4, ParcelCoast_Brage_R2_Text_2
# 440 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R4_Text_1, MSGBOX_DEFAULT
# 441 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R4_2:
# 435 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 436 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R5::
# 445 "data/maps/ParcelCoast/scripts.pory"
	lock
# 446 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 447 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R5_Text_0, MSGBOX_YESNO
# 448 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R5_2
# 453 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R5, ParcelCoast_Brage_R5_Text_1
# 454 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R5_Text_2, MSGBOX_DEFAULT
# 455 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R5_2:
# 449 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 450 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod::
# 459 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_FROD, ParcelCoast_Frod_Text_0, ParcelCoast_Frod_Text_1, ParcelCoast_Frod_FirstWin
# 463 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 464 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Frod_3
ParcelCoast_Frod_1:
# 467 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Frod_8
ParcelCoast_Frod_6:
# 470 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Frod_13
ParcelCoast_Frod_11:
# 473 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Frod_18
ParcelCoast_Frod_16:
# 476 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Frod_2:
# 465 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R2
	goto ParcelCoast_Frod_1

ParcelCoast_Frod_3:
# 464 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R2
	goto_if 0, ParcelCoast_Frod_2
	goto ParcelCoast_Frod_1

ParcelCoast_Frod_7:
# 468 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R3
	goto ParcelCoast_Frod_6

ParcelCoast_Frod_8:
# 467 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R3
	goto_if 0, ParcelCoast_Frod_7
	goto ParcelCoast_Frod_6

ParcelCoast_Frod_12:
# 471 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R4
	goto ParcelCoast_Frod_11

ParcelCoast_Frod_13:
# 470 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R4
	goto_if 0, ParcelCoast_Frod_12
	goto ParcelCoast_Frod_11

ParcelCoast_Frod_17:
# 474 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R5
	goto ParcelCoast_Frod_16

ParcelCoast_Frod_18:
# 473 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R5
	goto_if 0, ParcelCoast_Frod_17
	goto ParcelCoast_Frod_16


ParcelCoast_Frod_FirstWin::
# 480 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_Text_2, MSGBOX_DEFAULT
# 481 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R2::
# 485 "data/maps/ParcelCoast/scripts.pory"
	lock
# 486 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 487 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_0, MSGBOX_YESNO
# 488 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R2_2
# 493 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R2, ParcelCoast_Frod_R2_Text_2
# 494 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_3, MSGBOX_DEFAULT
# 495 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R2_2:
# 489 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 490 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R3::
# 499 "data/maps/ParcelCoast/scripts.pory"
	lock
# 500 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 501 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R3_Text_0, MSGBOX_YESNO
# 502 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R3_2
# 507 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R3, ParcelCoast_Frod_R2_Text_2
# 508 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R3_Text_1, MSGBOX_DEFAULT
# 509 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R3_2:
# 503 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 504 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R4::
# 513 "data/maps/ParcelCoast/scripts.pory"
	lock
# 514 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 515 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R4_Text_0, MSGBOX_YESNO
# 516 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R4_2
# 521 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R4, ParcelCoast_Frod_R4_Text_1
# 522 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R4_Text_2, MSGBOX_DEFAULT
# 523 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R4_2:
# 517 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 518 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R5::
# 527 "data/maps/ParcelCoast/scripts.pory"
	lock
# 528 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 529 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R5_Text_0, MSGBOX_YESNO
# 530 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R5_2
# 535 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R5, ParcelCoast_Frod_R5_Text_1
# 536 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R5_Text_2, MSGBOX_DEFAULT
# 537 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R5_2:
# 531 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 532 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda::
# 541 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_GYDA, ParcelCoast_Gyda_Text_0, ParcelCoast_Gyda_Text_1, ParcelCoast_Gyda_FirstWin
# 545 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 546 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Gyda_3
ParcelCoast_Gyda_1:
# 549 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Gyda_8
ParcelCoast_Gyda_6:
# 552 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Gyda_13
ParcelCoast_Gyda_11:
# 555 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Gyda_18
ParcelCoast_Gyda_16:
# 558 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Gyda_2:
# 547 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R2
	goto ParcelCoast_Gyda_1

ParcelCoast_Gyda_3:
# 546 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R2
	goto_if 0, ParcelCoast_Gyda_2
	goto ParcelCoast_Gyda_1

ParcelCoast_Gyda_7:
# 550 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R3
	goto ParcelCoast_Gyda_6

ParcelCoast_Gyda_8:
# 549 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R3
	goto_if 0, ParcelCoast_Gyda_7
	goto ParcelCoast_Gyda_6

ParcelCoast_Gyda_12:
# 553 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R4
	goto ParcelCoast_Gyda_11

ParcelCoast_Gyda_13:
# 552 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R4
	goto_if 0, ParcelCoast_Gyda_12
	goto ParcelCoast_Gyda_11

ParcelCoast_Gyda_17:
# 556 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R5
	goto ParcelCoast_Gyda_16

ParcelCoast_Gyda_18:
# 555 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R5
	goto_if 0, ParcelCoast_Gyda_17
	goto ParcelCoast_Gyda_16


ParcelCoast_Gyda_FirstWin::
# 562 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_Text_2, MSGBOX_DEFAULT
# 563 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R2::
# 567 "data/maps/ParcelCoast/scripts.pory"
	lock
# 568 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 569 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_0, MSGBOX_YESNO
# 570 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R2_2
# 575 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R2, ParcelCoast_Gyda_R2_Text_2
# 576 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_3, MSGBOX_DEFAULT
# 577 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R2_2:
# 571 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 572 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R3::
# 581 "data/maps/ParcelCoast/scripts.pory"
	lock
# 582 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 583 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R3_Text_0, MSGBOX_YESNO
# 584 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R3_2
# 589 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R3, ParcelCoast_Gyda_R3_Text_1
# 590 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R3_Text_2, MSGBOX_DEFAULT
# 591 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R3_2:
# 585 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 586 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R4::
# 595 "data/maps/ParcelCoast/scripts.pory"
	lock
# 596 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 597 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R4_Text_0, MSGBOX_YESNO
# 598 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R4_2
# 603 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R4, ParcelCoast_Gyda_R3_Text_1
# 604 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R4_Text_1, MSGBOX_DEFAULT
# 605 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R4_2:
# 599 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 600 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R5::
# 609 "data/maps/ParcelCoast/scripts.pory"
	lock
# 610 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 611 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R5_Text_0, MSGBOX_YESNO
# 612 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R5_2
# 617 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R5, ParcelCoast_Gyda_R3_Text_1
# 618 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R5_Text_1, MSGBOX_DEFAULT
# 619 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R5_2:
# 613 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 614 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar::
# 623 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_HROAR, ParcelCoast_Hroar_Text_0, ParcelCoast_Hroar_Text_1, ParcelCoast_Hroar_FirstWin
# 627 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 628 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Hroar_3
ParcelCoast_Hroar_1:
# 631 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Hroar_8
ParcelCoast_Hroar_6:
# 634 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Hroar_13
ParcelCoast_Hroar_11:
# 637 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Hroar_18
ParcelCoast_Hroar_16:
# 640 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Hroar_2:
# 629 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R2
	goto ParcelCoast_Hroar_1

ParcelCoast_Hroar_3:
# 628 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R2
	goto_if 0, ParcelCoast_Hroar_2
	goto ParcelCoast_Hroar_1

ParcelCoast_Hroar_7:
# 632 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R3
	goto ParcelCoast_Hroar_6

ParcelCoast_Hroar_8:
# 631 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R3
	goto_if 0, ParcelCoast_Hroar_7
	goto ParcelCoast_Hroar_6

ParcelCoast_Hroar_12:
# 635 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R4
	goto ParcelCoast_Hroar_11

ParcelCoast_Hroar_13:
# 634 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R4
	goto_if 0, ParcelCoast_Hroar_12
	goto ParcelCoast_Hroar_11

ParcelCoast_Hroar_17:
# 638 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R5
	goto ParcelCoast_Hroar_16

ParcelCoast_Hroar_18:
# 637 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R5
	goto_if 0, ParcelCoast_Hroar_17
	goto ParcelCoast_Hroar_16


ParcelCoast_Hroar_FirstWin::
# 644 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_Text_2, MSGBOX_DEFAULT
# 645 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R2::
# 649 "data/maps/ParcelCoast/scripts.pory"
	lock
# 650 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 651 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_0, MSGBOX_YESNO
# 652 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R2_2
# 657 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R2, ParcelCoast_Hroar_R2_Text_2
# 658 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_3, MSGBOX_DEFAULT
# 659 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R2_2:
# 653 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 654 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R3::
# 663 "data/maps/ParcelCoast/scripts.pory"
	lock
# 664 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 665 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R3_Text_0, MSGBOX_YESNO
# 666 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R3_2
# 671 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R3, ParcelCoast_Hroar_R2_Text_2
# 672 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R3_Text_1, MSGBOX_DEFAULT
# 673 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R3_2:
# 667 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 668 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R4::
# 677 "data/maps/ParcelCoast/scripts.pory"
	lock
# 678 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 679 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R4_Text_0, MSGBOX_YESNO
# 680 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R4_2
# 685 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R4, ParcelCoast_Hroar_R4_Text_1
# 686 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R4_Text_2, MSGBOX_DEFAULT
# 687 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R4_2:
# 681 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 682 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R5::
# 691 "data/maps/ParcelCoast/scripts.pory"
	lock
# 692 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 693 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R5_Text_0, MSGBOX_YESNO
# 694 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R5_2
# 699 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R5, ParcelCoast_Hroar_R5_Text_1
# 700 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R5_Text_2, MSGBOX_DEFAULT
# 701 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R5_2:
# 695 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 696 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid::
# 705 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_JORID, ParcelCoast_Jorid_Text_0, ParcelCoast_Jorid_Text_1, ParcelCoast_Jorid_FirstWin
# 709 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 710 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Jorid_3
ParcelCoast_Jorid_1:
# 713 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Jorid_8
ParcelCoast_Jorid_6:
# 716 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Jorid_13
ParcelCoast_Jorid_11:
# 719 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Jorid_18
ParcelCoast_Jorid_16:
# 722 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Jorid_2:
# 711 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R2
	goto ParcelCoast_Jorid_1

ParcelCoast_Jorid_3:
# 710 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R2
	goto_if 0, ParcelCoast_Jorid_2
	goto ParcelCoast_Jorid_1

ParcelCoast_Jorid_7:
# 714 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R3
	goto ParcelCoast_Jorid_6

ParcelCoast_Jorid_8:
# 713 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R3
	goto_if 0, ParcelCoast_Jorid_7
	goto ParcelCoast_Jorid_6

ParcelCoast_Jorid_12:
# 717 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R4
	goto ParcelCoast_Jorid_11

ParcelCoast_Jorid_13:
# 716 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R4
	goto_if 0, ParcelCoast_Jorid_12
	goto ParcelCoast_Jorid_11

ParcelCoast_Jorid_17:
# 720 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R5
	goto ParcelCoast_Jorid_16

ParcelCoast_Jorid_18:
# 719 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R5
	goto_if 0, ParcelCoast_Jorid_17
	goto ParcelCoast_Jorid_16


ParcelCoast_Jorid_FirstWin::
# 726 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_Text_2, MSGBOX_DEFAULT
# 727 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R2::
# 731 "data/maps/ParcelCoast/scripts.pory"
	lock
# 732 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 733 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_0, MSGBOX_YESNO
# 734 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R2_2
# 739 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R2, ParcelCoast_Jorid_R2_Text_2
# 740 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_3, MSGBOX_DEFAULT
# 741 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R2_2:
# 735 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 736 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R3::
# 745 "data/maps/ParcelCoast/scripts.pory"
	lock
# 746 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 747 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R3_Text_0, MSGBOX_YESNO
# 748 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R3_2
# 753 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R3, ParcelCoast_Jorid_R3_Text_1
# 754 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R3_Text_2, MSGBOX_DEFAULT
# 755 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R3_2:
# 749 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 750 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R4::
# 759 "data/maps/ParcelCoast/scripts.pory"
	lock
# 760 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 761 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R4_Text_0, MSGBOX_YESNO
# 762 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R4_2
# 767 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R4, ParcelCoast_Jorid_R4_Text_1
# 768 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R4_Text_2, MSGBOX_DEFAULT
# 769 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R4_2:
# 763 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 764 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R5::
# 773 "data/maps/ParcelCoast/scripts.pory"
	lock
# 774 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 775 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R5_Text_0, MSGBOX_YESNO
# 776 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R5_2
# 781 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R5, ParcelCoast_Jorid_R4_Text_1
# 782 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R5_Text_1, MSGBOX_DEFAULT
# 783 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R5_2:
# 777 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 778 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil::
# 787 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_KETIL, ParcelCoast_Ketil_Text_0, ParcelCoast_Ketil_Text_1, ParcelCoast_Ketil_FirstWin
# 791 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 792 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Ketil_3
ParcelCoast_Ketil_1:
# 795 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Ketil_8
ParcelCoast_Ketil_6:
# 798 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Ketil_13
ParcelCoast_Ketil_11:
# 801 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Ketil_18
ParcelCoast_Ketil_16:
# 804 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Ketil_2:
# 793 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R2
	goto ParcelCoast_Ketil_1

ParcelCoast_Ketil_3:
# 792 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R2
	goto_if 0, ParcelCoast_Ketil_2
	goto ParcelCoast_Ketil_1

ParcelCoast_Ketil_7:
# 796 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R3
	goto ParcelCoast_Ketil_6

ParcelCoast_Ketil_8:
# 795 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R3
	goto_if 0, ParcelCoast_Ketil_7
	goto ParcelCoast_Ketil_6

ParcelCoast_Ketil_12:
# 799 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R4
	goto ParcelCoast_Ketil_11

ParcelCoast_Ketil_13:
# 798 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R4
	goto_if 0, ParcelCoast_Ketil_12
	goto ParcelCoast_Ketil_11

ParcelCoast_Ketil_17:
# 802 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R5
	goto ParcelCoast_Ketil_16

ParcelCoast_Ketil_18:
# 801 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R5
	goto_if 0, ParcelCoast_Ketil_17
	goto ParcelCoast_Ketil_16


ParcelCoast_Ketil_FirstWin::
# 808 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_Text_2, MSGBOX_DEFAULT
# 809 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R2::
# 813 "data/maps/ParcelCoast/scripts.pory"
	lock
# 814 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 815 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_0, MSGBOX_YESNO
# 816 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R2_2
# 821 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R2, ParcelCoast_Ketil_R2_Text_2
# 822 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_3, MSGBOX_DEFAULT
# 823 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R2_2:
# 817 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 818 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R3::
# 827 "data/maps/ParcelCoast/scripts.pory"
	lock
# 828 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 829 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R3_Text_0, MSGBOX_YESNO
# 830 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R3_2
# 835 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R3, ParcelCoast_Ketil_R3_Text_1
# 836 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R3_Text_2, MSGBOX_DEFAULT
# 837 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R3_2:
# 831 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 832 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R4::
# 841 "data/maps/ParcelCoast/scripts.pory"
	lock
# 842 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 843 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R4_Text_0, MSGBOX_YESNO
# 844 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R4_2
# 849 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R4, ParcelCoast_Ketil_R4_Text_1
# 850 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R4_Text_2, MSGBOX_DEFAULT
# 851 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R4_2:
# 845 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 846 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R5::
# 855 "data/maps/ParcelCoast/scripts.pory"
	lock
# 856 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 857 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R5_Text_0, MSGBOX_YESNO
# 858 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R5_2
# 863 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R5, ParcelCoast_Ketil_R5_Text_1
# 864 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R5_Text_2, MSGBOX_DEFAULT
# 865 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R5_2:
# 859 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 860 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva::
# 869 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_LIVA, ParcelCoast_Liva_Text_0, ParcelCoast_Liva_Text_1, ParcelCoast_Liva_FirstWin
# 873 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 874 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Liva_3
ParcelCoast_Liva_1:
# 877 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Liva_8
ParcelCoast_Liva_6:
# 880 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Liva_13
ParcelCoast_Liva_11:
# 883 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Liva_18
ParcelCoast_Liva_16:
# 886 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Liva_2:
# 875 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R2
	goto ParcelCoast_Liva_1

ParcelCoast_Liva_3:
# 874 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R2
	goto_if 0, ParcelCoast_Liva_2
	goto ParcelCoast_Liva_1

ParcelCoast_Liva_7:
# 878 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R3
	goto ParcelCoast_Liva_6

ParcelCoast_Liva_8:
# 877 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R3
	goto_if 0, ParcelCoast_Liva_7
	goto ParcelCoast_Liva_6

ParcelCoast_Liva_12:
# 881 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R4
	goto ParcelCoast_Liva_11

ParcelCoast_Liva_13:
# 880 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R4
	goto_if 0, ParcelCoast_Liva_12
	goto ParcelCoast_Liva_11

ParcelCoast_Liva_17:
# 884 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R5
	goto ParcelCoast_Liva_16

ParcelCoast_Liva_18:
# 883 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R5
	goto_if 0, ParcelCoast_Liva_17
	goto ParcelCoast_Liva_16


ParcelCoast_Liva_FirstWin::
# 890 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_Text_2, MSGBOX_DEFAULT
# 891 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R2::
# 895 "data/maps/ParcelCoast/scripts.pory"
	lock
# 896 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 897 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_0, MSGBOX_YESNO
# 898 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R2_2
# 903 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R2, ParcelCoast_Liva_R2_Text_2
# 904 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_3, MSGBOX_DEFAULT
# 905 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R2_2:
# 899 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 900 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R3::
# 909 "data/maps/ParcelCoast/scripts.pory"
	lock
# 910 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 911 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R3_Text_0, MSGBOX_YESNO
# 912 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R3_2
# 917 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R3, ParcelCoast_Liva_R3_Text_1
# 918 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R3_Text_2, MSGBOX_DEFAULT
# 919 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R3_2:
# 913 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 914 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R4::
# 923 "data/maps/ParcelCoast/scripts.pory"
	lock
# 924 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 925 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R4_Text_0, MSGBOX_YESNO
# 926 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R4_2
# 931 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R4, ParcelCoast_Liva_R4_Text_1
# 932 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R4_Text_2, MSGBOX_DEFAULT
# 933 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R4_2:
# 927 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 928 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R5::
# 937 "data/maps/ParcelCoast/scripts.pory"
	lock
# 938 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 939 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R5_Text_0, MSGBOX_YESNO
# 940 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R5_2
# 945 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R5, ParcelCoast_Liva_R5_Text_1
# 946 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R5_Text_2, MSGBOX_DEFAULT
# 947 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R5_2:
# 941 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 942 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus::
# 951 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_MAGNUS, ParcelCoast_Magnus_Text_0, ParcelCoast_Magnus_Text_1, ParcelCoast_Magnus_FirstWin
# 955 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 956 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Magnus_3
ParcelCoast_Magnus_1:
# 959 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Magnus_8
ParcelCoast_Magnus_6:
# 962 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Magnus_13
ParcelCoast_Magnus_11:
# 965 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Magnus_18
ParcelCoast_Magnus_16:
# 968 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Magnus_2:
# 957 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R2
	goto ParcelCoast_Magnus_1

ParcelCoast_Magnus_3:
# 956 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R2
	goto_if 0, ParcelCoast_Magnus_2
	goto ParcelCoast_Magnus_1

ParcelCoast_Magnus_7:
# 960 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R3
	goto ParcelCoast_Magnus_6

ParcelCoast_Magnus_8:
# 959 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R3
	goto_if 0, ParcelCoast_Magnus_7
	goto ParcelCoast_Magnus_6

ParcelCoast_Magnus_12:
# 963 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R4
	goto ParcelCoast_Magnus_11

ParcelCoast_Magnus_13:
# 962 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R4
	goto_if 0, ParcelCoast_Magnus_12
	goto ParcelCoast_Magnus_11

ParcelCoast_Magnus_17:
# 966 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R5
	goto ParcelCoast_Magnus_16

ParcelCoast_Magnus_18:
# 965 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R5
	goto_if 0, ParcelCoast_Magnus_17
	goto ParcelCoast_Magnus_16


ParcelCoast_Magnus_FirstWin::
# 972 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_Text_2, MSGBOX_DEFAULT
# 973 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R2::
# 977 "data/maps/ParcelCoast/scripts.pory"
	lock
# 978 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 979 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_0, MSGBOX_YESNO
# 980 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R2_2
# 985 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R2, ParcelCoast_Magnus_R2_Text_2
# 986 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_3, MSGBOX_DEFAULT
# 987 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R2_2:
# 981 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 982 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R3::
# 991 "data/maps/ParcelCoast/scripts.pory"
	lock
# 992 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 993 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R3_Text_0, MSGBOX_YESNO
# 994 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R3_2
# 999 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R3, ParcelCoast_Magnus_R3_Text_1
# 1000 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R3_Text_2, MSGBOX_DEFAULT
# 1001 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R3_2:
# 995 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 996 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R4::
# 1005 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1006 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1007 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R4_Text_0, MSGBOX_YESNO
# 1008 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R4_2
# 1013 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R4, ParcelCoast_Magnus_R4_Text_1
# 1014 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R4_Text_2, MSGBOX_DEFAULT
# 1015 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R4_2:
# 1009 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 1010 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R5::
# 1019 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1020 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1021 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R5_Text_0, MSGBOX_YESNO
# 1022 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R5_2
# 1027 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R5, ParcelCoast_Magnus_R5_Text_1
# 1028 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R5_Text_2, MSGBOX_DEFAULT
# 1029 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R5_2:
# 1023 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 1024 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai::
# 1033 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_NIKOLAI, ParcelCoast_Nikolai_Text_0, ParcelCoast_Nikolai_Text_1, ParcelCoast_Nikolai_FirstWin
# 1037 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1038 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Nikolai_3
ParcelCoast_Nikolai_1:
# 1041 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Nikolai_8
ParcelCoast_Nikolai_6:
# 1044 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Nikolai_13
ParcelCoast_Nikolai_11:
# 1047 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Nikolai_18
ParcelCoast_Nikolai_16:
# 1050 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Nikolai_2:
# 1039 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R2
	goto ParcelCoast_Nikolai_1

ParcelCoast_Nikolai_3:
# 1038 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R2
	goto_if 0, ParcelCoast_Nikolai_2
	goto ParcelCoast_Nikolai_1

ParcelCoast_Nikolai_7:
# 1042 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R3
	goto ParcelCoast_Nikolai_6

ParcelCoast_Nikolai_8:
# 1041 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R3
	goto_if 0, ParcelCoast_Nikolai_7
	goto ParcelCoast_Nikolai_6

ParcelCoast_Nikolai_12:
# 1045 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R4
	goto ParcelCoast_Nikolai_11

ParcelCoast_Nikolai_13:
# 1044 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R4
	goto_if 0, ParcelCoast_Nikolai_12
	goto ParcelCoast_Nikolai_11

ParcelCoast_Nikolai_17:
# 1048 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R5
	goto ParcelCoast_Nikolai_16

ParcelCoast_Nikolai_18:
# 1047 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R5
	goto_if 0, ParcelCoast_Nikolai_17
	goto ParcelCoast_Nikolai_16


ParcelCoast_Nikolai_FirstWin::
# 1054 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_Text_2, MSGBOX_DEFAULT
# 1055 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R2::
# 1059 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1060 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1061 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_0, MSGBOX_YESNO
# 1062 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R2_2
# 1067 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R2, ParcelCoast_Nikolai_R2_Text_2
# 1068 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_3, MSGBOX_DEFAULT
# 1069 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R2_2:
# 1063 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1064 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R3::
# 1073 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1074 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1075 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R3_Text_0, MSGBOX_YESNO
# 1076 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R3_2
# 1081 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R3, ParcelCoast_Nikolai_R2_Text_2
# 1082 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R3_Text_1, MSGBOX_DEFAULT
# 1083 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R3_2:
# 1077 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1078 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R4::
# 1087 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1088 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1089 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R4_Text_0, MSGBOX_YESNO
# 1090 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R4_2
# 1095 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R4, ParcelCoast_Nikolai_R4_Text_1
# 1096 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R4_Text_2, MSGBOX_DEFAULT
# 1097 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R4_2:
# 1091 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1092 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R5::
# 1101 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1102 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1103 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R5_Text_0, MSGBOX_YESNO
# 1104 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R5_2
# 1109 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R5, ParcelCoast_Nikolai_R5_Text_1
# 1110 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R5_Text_2, MSGBOX_DEFAULT
# 1111 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R5_2:
# 1105 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1106 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda::
# 1115 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_ODA, ParcelCoast_Oda_Text_0, ParcelCoast_Oda_Text_1, ParcelCoast_Oda_FirstWin
# 1119 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1120 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Oda_3
ParcelCoast_Oda_1:
# 1123 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Oda_8
ParcelCoast_Oda_6:
# 1126 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Oda_13
ParcelCoast_Oda_11:
# 1129 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Oda_18
ParcelCoast_Oda_16:
# 1132 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Oda_2:
# 1121 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R2
	goto ParcelCoast_Oda_1

ParcelCoast_Oda_3:
# 1120 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R2
	goto_if 0, ParcelCoast_Oda_2
	goto ParcelCoast_Oda_1

ParcelCoast_Oda_7:
# 1124 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R3
	goto ParcelCoast_Oda_6

ParcelCoast_Oda_8:
# 1123 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R3
	goto_if 0, ParcelCoast_Oda_7
	goto ParcelCoast_Oda_6

ParcelCoast_Oda_12:
# 1127 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R4
	goto ParcelCoast_Oda_11

ParcelCoast_Oda_13:
# 1126 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R4
	goto_if 0, ParcelCoast_Oda_12
	goto ParcelCoast_Oda_11

ParcelCoast_Oda_17:
# 1130 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R5
	goto ParcelCoast_Oda_16

ParcelCoast_Oda_18:
# 1129 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R5
	goto_if 0, ParcelCoast_Oda_17
	goto ParcelCoast_Oda_16


ParcelCoast_Oda_FirstWin::
# 1136 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_Text_2, MSGBOX_DEFAULT
# 1137 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R2::
# 1141 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1142 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1143 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_0, MSGBOX_YESNO
# 1144 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R2_2
# 1149 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R2, ParcelCoast_Oda_R2_Text_2
# 1150 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_3, MSGBOX_DEFAULT
# 1151 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R2_2:
# 1145 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1146 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R3::
# 1155 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1156 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1157 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R3_Text_0, MSGBOX_YESNO
# 1158 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R3_2
# 1163 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R3, ParcelCoast_Oda_R2_Text_2
# 1164 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R3_Text_1, MSGBOX_DEFAULT
# 1165 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R3_2:
# 1159 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1160 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R4::
# 1169 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1170 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1171 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R4_Text_0, MSGBOX_YESNO
# 1172 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R4_2
# 1177 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R4, ParcelCoast_Oda_R4_Text_1
# 1178 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R4_Text_2, MSGBOX_DEFAULT
# 1179 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R4_2:
# 1173 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1174 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R5::
# 1183 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1184 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1185 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R5_Text_0, MSGBOX_YESNO
# 1186 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R5_2
# 1191 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R5, ParcelCoast_Oda_R5_Text_1
# 1192 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R5_Text_2, MSGBOX_DEFAULT
# 1193 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R5_2:
# 1187 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1188 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter::
# 1197 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_PETTER, ParcelCoast_Petter_Text_0, ParcelCoast_Petter_Text_1, ParcelCoast_Petter_FirstWin
# 1201 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1202 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Petter_3
ParcelCoast_Petter_1:
# 1205 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Petter_8
ParcelCoast_Petter_6:
# 1208 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Petter_13
ParcelCoast_Petter_11:
# 1211 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Petter_18
ParcelCoast_Petter_16:
# 1214 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Petter_2:
# 1203 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R2
	goto ParcelCoast_Petter_1

ParcelCoast_Petter_3:
# 1202 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R2
	goto_if 0, ParcelCoast_Petter_2
	goto ParcelCoast_Petter_1

ParcelCoast_Petter_7:
# 1206 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R3
	goto ParcelCoast_Petter_6

ParcelCoast_Petter_8:
# 1205 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R3
	goto_if 0, ParcelCoast_Petter_7
	goto ParcelCoast_Petter_6

ParcelCoast_Petter_12:
# 1209 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R4
	goto ParcelCoast_Petter_11

ParcelCoast_Petter_13:
# 1208 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R4
	goto_if 0, ParcelCoast_Petter_12
	goto ParcelCoast_Petter_11

ParcelCoast_Petter_17:
# 1212 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R5
	goto ParcelCoast_Petter_16

ParcelCoast_Petter_18:
# 1211 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R5
	goto_if 0, ParcelCoast_Petter_17
	goto ParcelCoast_Petter_16


ParcelCoast_Petter_FirstWin::
# 1218 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_Text_2, MSGBOX_DEFAULT
# 1219 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R2::
# 1223 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1224 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1225 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_0, MSGBOX_YESNO
# 1226 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R2_2
# 1231 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R2, ParcelCoast_Petter_R2_Text_2
# 1232 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_3, MSGBOX_DEFAULT
# 1233 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R2_2:
# 1227 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1228 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R3::
# 1237 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1238 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1239 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R3_Text_0, MSGBOX_YESNO
# 1240 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R3_2
# 1245 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R3, ParcelCoast_Petter_R3_Text_1
# 1246 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R3_Text_2, MSGBOX_DEFAULT
# 1247 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R3_2:
# 1241 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1242 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R4::
# 1251 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1252 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1253 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R4_Text_0, MSGBOX_YESNO
# 1254 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R4_2
# 1259 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R4, ParcelCoast_Petter_R4_Text_1
# 1260 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R4_Text_2, MSGBOX_DEFAULT
# 1261 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R4_2:
# 1255 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1256 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R5::
# 1265 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1266 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1267 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R5_Text_0, MSGBOX_YESNO
# 1268 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R5_2
# 1273 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R5, ParcelCoast_Petter_R3_Text_1
# 1274 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R5_Text_1, MSGBOX_DEFAULT
# 1275 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R5_2:
# 1269 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1270 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar::
# 1279 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_RAGNAR, ParcelCoast_Ragnar_Text_0, ParcelCoast_Ragnar_Text_1, ParcelCoast_Ragnar_FirstWin
# 1283 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1284 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Ragnar_3
ParcelCoast_Ragnar_1:
# 1287 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Ragnar_8
ParcelCoast_Ragnar_6:
# 1290 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Ragnar_13
ParcelCoast_Ragnar_11:
# 1293 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Ragnar_18
ParcelCoast_Ragnar_16:
# 1296 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Ragnar_2:
# 1285 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R2
	goto ParcelCoast_Ragnar_1

ParcelCoast_Ragnar_3:
# 1284 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R2
	goto_if 0, ParcelCoast_Ragnar_2
	goto ParcelCoast_Ragnar_1

ParcelCoast_Ragnar_7:
# 1288 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R3
	goto ParcelCoast_Ragnar_6

ParcelCoast_Ragnar_8:
# 1287 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R3
	goto_if 0, ParcelCoast_Ragnar_7
	goto ParcelCoast_Ragnar_6

ParcelCoast_Ragnar_12:
# 1291 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R4
	goto ParcelCoast_Ragnar_11

ParcelCoast_Ragnar_13:
# 1290 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R4
	goto_if 0, ParcelCoast_Ragnar_12
	goto ParcelCoast_Ragnar_11

ParcelCoast_Ragnar_17:
# 1294 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R5
	goto ParcelCoast_Ragnar_16

ParcelCoast_Ragnar_18:
# 1293 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R5
	goto_if 0, ParcelCoast_Ragnar_17
	goto ParcelCoast_Ragnar_16


ParcelCoast_Ragnar_FirstWin::
# 1300 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_Text_2, MSGBOX_DEFAULT
# 1301 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R2::
# 1305 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1306 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1307 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_0, MSGBOX_YESNO
# 1308 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R2_2
# 1313 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R2, ParcelCoast_Ragnar_R2_Text_2
# 1314 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_3, MSGBOX_DEFAULT
# 1315 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R2_2:
# 1309 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1310 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R3::
# 1319 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1320 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1321 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R3_Text_0, MSGBOX_YESNO
# 1322 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R3_2
# 1327 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R3, ParcelCoast_Ragnar_R3_Text_1
# 1328 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R3_Text_2, MSGBOX_DEFAULT
# 1329 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R3_2:
# 1323 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1324 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R4::
# 1333 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1334 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1335 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R4_Text_0, MSGBOX_YESNO
# 1336 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R4_2
# 1341 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R4, ParcelCoast_Ragnar_R4_Text_1
# 1342 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R4_Text_2, MSGBOX_DEFAULT
# 1343 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R4_2:
# 1337 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1338 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R5::
# 1347 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1348 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1349 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R5_Text_0, MSGBOX_YESNO
# 1350 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R5_2
# 1355 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R5, ParcelCoast_Ragnar_R3_Text_1
# 1356 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R5_Text_1, MSGBOX_DEFAULT
# 1357 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R5_2:
# 1351 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1352 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor::
# 1361 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_SOLVOR, ParcelCoast_Solvor_Text_0, ParcelCoast_Solvor_Text_1, ParcelCoast_Solvor_FirstWin
# 1365 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1366 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Solvor_3
ParcelCoast_Solvor_1:
# 1369 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Solvor_8
ParcelCoast_Solvor_6:
# 1372 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Solvor_13
ParcelCoast_Solvor_11:
# 1375 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Solvor_18
ParcelCoast_Solvor_16:
# 1378 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Solvor_2:
# 1367 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R2
	goto ParcelCoast_Solvor_1

ParcelCoast_Solvor_3:
# 1366 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R2
	goto_if 0, ParcelCoast_Solvor_2
	goto ParcelCoast_Solvor_1

ParcelCoast_Solvor_7:
# 1370 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R3
	goto ParcelCoast_Solvor_6

ParcelCoast_Solvor_8:
# 1369 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R3
	goto_if 0, ParcelCoast_Solvor_7
	goto ParcelCoast_Solvor_6

ParcelCoast_Solvor_12:
# 1373 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R4
	goto ParcelCoast_Solvor_11

ParcelCoast_Solvor_13:
# 1372 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R4
	goto_if 0, ParcelCoast_Solvor_12
	goto ParcelCoast_Solvor_11

ParcelCoast_Solvor_17:
# 1376 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R5
	goto ParcelCoast_Solvor_16

ParcelCoast_Solvor_18:
# 1375 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R5
	goto_if 0, ParcelCoast_Solvor_17
	goto ParcelCoast_Solvor_16


ParcelCoast_Solvor_FirstWin::
# 1382 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_Text_2, MSGBOX_DEFAULT
# 1383 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R2::
# 1387 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1388 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1389 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_0, MSGBOX_YESNO
# 1390 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R2_2
# 1395 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R2, ParcelCoast_Solvor_R2_Text_2
# 1396 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_3, MSGBOX_DEFAULT
# 1397 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R2_2:
# 1391 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1392 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R3::
# 1401 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1402 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1403 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R3_Text_0, MSGBOX_YESNO
# 1404 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R3_2
# 1409 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R3, ParcelCoast_Solvor_R3_Text_1
# 1410 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R3_Text_2, MSGBOX_DEFAULT
# 1411 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R3_2:
# 1405 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1406 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R4::
# 1415 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1416 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1417 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R4_Text_0, MSGBOX_YESNO
# 1418 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R4_2
# 1423 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R4, ParcelCoast_Solvor_R3_Text_1
# 1424 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R4_Text_1, MSGBOX_DEFAULT
# 1425 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R4_2:
# 1419 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1420 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R5::
# 1429 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1430 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1431 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R5_Text_0, MSGBOX_YESNO
# 1432 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R5_2
# 1437 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R5, ParcelCoast_Solvor_R5_Text_1
# 1438 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R5_Text_2, MSGBOX_DEFAULT
# 1439 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R5_2:
# 1433 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1434 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore::
# 1443 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_TORE, ParcelCoast_Tore_Text_0, ParcelCoast_Tore_Text_1, ParcelCoast_Tore_FirstWin
# 1447 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1448 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Tore_3
ParcelCoast_Tore_1:
# 1451 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Tore_8
ParcelCoast_Tore_6:
# 1454 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Tore_13
ParcelCoast_Tore_11:
# 1457 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Tore_18
ParcelCoast_Tore_16:
# 1460 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Tore_2:
# 1449 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R2
	goto ParcelCoast_Tore_1

ParcelCoast_Tore_3:
# 1448 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R2
	goto_if 0, ParcelCoast_Tore_2
	goto ParcelCoast_Tore_1

ParcelCoast_Tore_7:
# 1452 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R3
	goto ParcelCoast_Tore_6

ParcelCoast_Tore_8:
# 1451 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R3
	goto_if 0, ParcelCoast_Tore_7
	goto ParcelCoast_Tore_6

ParcelCoast_Tore_12:
# 1455 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R4
	goto ParcelCoast_Tore_11

ParcelCoast_Tore_13:
# 1454 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R4
	goto_if 0, ParcelCoast_Tore_12
	goto ParcelCoast_Tore_11

ParcelCoast_Tore_17:
# 1458 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R5
	goto ParcelCoast_Tore_16

ParcelCoast_Tore_18:
# 1457 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R5
	goto_if 0, ParcelCoast_Tore_17
	goto ParcelCoast_Tore_16


ParcelCoast_Tore_FirstWin::
# 1464 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_Text_2, MSGBOX_DEFAULT
# 1465 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R2::
# 1469 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1470 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1471 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_0, MSGBOX_YESNO
# 1472 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R2_2
# 1477 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R2, ParcelCoast_Tore_R2_Text_2
# 1478 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_3, MSGBOX_DEFAULT
# 1479 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R2_2:
# 1473 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1474 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R3::
# 1483 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1484 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1485 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R3_Text_0, MSGBOX_YESNO
# 1486 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R3_2
# 1491 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R3, ParcelCoast_Tore_R3_Text_1
# 1492 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R3_Text_2, MSGBOX_DEFAULT
# 1493 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R3_2:
# 1487 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1488 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R4::
# 1497 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1498 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1499 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R4_Text_0, MSGBOX_YESNO
# 1500 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R4_2
# 1505 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R4, ParcelCoast_Tore_R4_Text_1
# 1506 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R4_Text_2, MSGBOX_DEFAULT
# 1507 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R4_2:
# 1501 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1502 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R5::
# 1511 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1512 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1513 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R5_Text_0, MSGBOX_YESNO
# 1514 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R5_2
# 1519 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R5, ParcelCoast_Tore_R2_Text_2
# 1520 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R5_Text_1, MSGBOX_DEFAULT
# 1521 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R5_2:
# 1515 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1516 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge::
# 1527 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_HELGE, ParcelCoast_T_Helge_Text_0, ParcelCoast_T_Helge_Text_1, ParcelCoast_T_Helge_FirstWin
# 1531 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1532 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_T_Helge_3
ParcelCoast_T_Helge_1:
# 1535 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_T_Helge_8
ParcelCoast_T_Helge_6:
# 1538 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_T_Helge_13
ParcelCoast_T_Helge_11:
# 1541 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_T_Helge_18
ParcelCoast_T_Helge_16:
# 1544 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_T_Helge_2:
# 1533 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R2
	goto ParcelCoast_T_Helge_1

ParcelCoast_T_Helge_3:
# 1532 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R2
	goto_if 0, ParcelCoast_T_Helge_2
	goto ParcelCoast_T_Helge_1

ParcelCoast_T_Helge_7:
# 1536 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R3
	goto ParcelCoast_T_Helge_6

ParcelCoast_T_Helge_8:
# 1535 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R3
	goto_if 0, ParcelCoast_T_Helge_7
	goto ParcelCoast_T_Helge_6

ParcelCoast_T_Helge_12:
# 1539 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R4
	goto ParcelCoast_T_Helge_11

ParcelCoast_T_Helge_13:
# 1538 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R4
	goto_if 0, ParcelCoast_T_Helge_12
	goto ParcelCoast_T_Helge_11

ParcelCoast_T_Helge_17:
# 1542 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R5
	goto ParcelCoast_T_Helge_16

ParcelCoast_T_Helge_18:
# 1541 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R5
	goto_if 0, ParcelCoast_T_Helge_17
	goto ParcelCoast_T_Helge_16


ParcelCoast_T_Helge_FirstWin::
# 1548 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_Text_2, MSGBOX_DEFAULT
# 1549 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R2::
# 1553 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1554 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1555 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_0, MSGBOX_YESNO
# 1556 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R2_2
# 1561 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R2, ParcelCoast_T_Helge_R2_Text_2
# 1562 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_3, MSGBOX_DEFAULT
# 1563 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R2_2:
# 1557 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1558 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R3::
# 1567 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1568 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1569 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R3_Text_0, MSGBOX_YESNO
# 1570 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R3_2
# 1575 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R3, ParcelCoast_T_Helge_R3_Text_1
# 1576 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R3_Text_2, MSGBOX_DEFAULT
# 1577 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R3_2:
# 1571 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1572 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R4::
# 1581 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1582 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1583 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R4_Text_0, MSGBOX_YESNO
# 1584 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R4_2
# 1589 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R4, ParcelCoast_T_Helge_R4_Text_1
# 1590 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R4_Text_2, MSGBOX_DEFAULT
# 1591 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R4_2:
# 1585 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1586 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R5::
# 1595 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1596 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1597 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R5_Text_0, MSGBOX_YESNO
# 1598 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R5_2
# 1603 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R5, ParcelCoast_T_Helge_R4_Text_1
# 1604 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R5_Text_1, MSGBOX_DEFAULT
# 1605 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R5_2:
# 1599 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1600 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton::
# 1609 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_ANTON, ParcelCoast_T_Anton_Text_0, ParcelCoast_T_Anton_Text_1, ParcelCoast_T_Anton_FirstWin
# 1613 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1614 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_T_Anton_3
ParcelCoast_T_Anton_1:
# 1617 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_T_Anton_8
ParcelCoast_T_Anton_6:
# 1620 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_T_Anton_13
ParcelCoast_T_Anton_11:
# 1623 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_T_Anton_18
ParcelCoast_T_Anton_16:
# 1626 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_T_Anton_2:
# 1615 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R2
	goto ParcelCoast_T_Anton_1

ParcelCoast_T_Anton_3:
# 1614 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R2
	goto_if 0, ParcelCoast_T_Anton_2
	goto ParcelCoast_T_Anton_1

ParcelCoast_T_Anton_7:
# 1618 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R3
	goto ParcelCoast_T_Anton_6

ParcelCoast_T_Anton_8:
# 1617 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R3
	goto_if 0, ParcelCoast_T_Anton_7
	goto ParcelCoast_T_Anton_6

ParcelCoast_T_Anton_12:
# 1621 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R4
	goto ParcelCoast_T_Anton_11

ParcelCoast_T_Anton_13:
# 1620 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R4
	goto_if 0, ParcelCoast_T_Anton_12
	goto ParcelCoast_T_Anton_11

ParcelCoast_T_Anton_17:
# 1624 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R5
	goto ParcelCoast_T_Anton_16

ParcelCoast_T_Anton_18:
# 1623 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R5
	goto_if 0, ParcelCoast_T_Anton_17
	goto ParcelCoast_T_Anton_16


ParcelCoast_T_Anton_FirstWin::
# 1630 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_Text_2, MSGBOX_DEFAULT
# 1631 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R2::
# 1635 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1636 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1637 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_0, MSGBOX_YESNO
# 1638 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R2_2
# 1643 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R2, ParcelCoast_T_Anton_R2_Text_2
# 1644 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_3, MSGBOX_DEFAULT
# 1645 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R2_2:
# 1639 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1640 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R3::
# 1649 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1650 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1651 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R3_Text_0, MSGBOX_YESNO
# 1652 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R3_2
# 1657 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R3, ParcelCoast_T_Anton_R3_Text_1
# 1658 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R3_Text_2, MSGBOX_DEFAULT
# 1659 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R3_2:
# 1653 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1654 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R4::
# 1663 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1664 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1665 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R4_Text_0, MSGBOX_YESNO
# 1666 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R4_2
# 1671 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R4, ParcelCoast_T_Anton_R4_Text_1
# 1672 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R4_Text_2, MSGBOX_DEFAULT
# 1673 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R4_2:
# 1667 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1668 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R5::
# 1677 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1678 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1679 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R5_Text_0, MSGBOX_YESNO
# 1680 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R5_2
# 1685 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R5, ParcelCoast_T_Anton_R3_Text_1
# 1686 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R5_Text_1, MSGBOX_DEFAULT
# 1687 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R5_2:
# 1681 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1682 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate::
# 1691 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_BEATE, ParcelCoast_T_Beate_Text_0, ParcelCoast_T_Beate_Text_1, ParcelCoast_T_Beate_FirstWin
# 1695 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1696 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_T_Beate_3
ParcelCoast_T_Beate_1:
# 1699 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_T_Beate_8
ParcelCoast_T_Beate_6:
# 1702 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_T_Beate_13
ParcelCoast_T_Beate_11:
# 1705 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_T_Beate_18
ParcelCoast_T_Beate_16:
# 1708 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_T_Beate_2:
# 1697 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R2
	goto ParcelCoast_T_Beate_1

ParcelCoast_T_Beate_3:
# 1696 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R2
	goto_if 0, ParcelCoast_T_Beate_2
	goto ParcelCoast_T_Beate_1

ParcelCoast_T_Beate_7:
# 1700 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R3
	goto ParcelCoast_T_Beate_6

ParcelCoast_T_Beate_8:
# 1699 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R3
	goto_if 0, ParcelCoast_T_Beate_7
	goto ParcelCoast_T_Beate_6

ParcelCoast_T_Beate_12:
# 1703 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R4
	goto ParcelCoast_T_Beate_11

ParcelCoast_T_Beate_13:
# 1702 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R4
	goto_if 0, ParcelCoast_T_Beate_12
	goto ParcelCoast_T_Beate_11

ParcelCoast_T_Beate_17:
# 1706 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R5
	goto ParcelCoast_T_Beate_16

ParcelCoast_T_Beate_18:
# 1705 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R5
	goto_if 0, ParcelCoast_T_Beate_17
	goto ParcelCoast_T_Beate_16


ParcelCoast_T_Beate_FirstWin::
# 1712 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_Text_2, MSGBOX_DEFAULT
# 1713 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R2::
# 1717 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1718 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1719 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_0, MSGBOX_YESNO
# 1720 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R2_2
# 1725 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R2, ParcelCoast_T_Beate_R2_Text_2
# 1726 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_3, MSGBOX_DEFAULT
# 1727 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R2_2:
# 1721 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1722 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R3::
# 1731 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1732 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1733 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R3_Text_0, MSGBOX_YESNO
# 1734 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R3_2
# 1739 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R3, ParcelCoast_T_Beate_R3_Text_1
# 1740 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R3_Text_2, MSGBOX_DEFAULT
# 1741 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R3_2:
# 1735 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1736 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R4::
# 1745 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1746 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1747 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R4_Text_0, MSGBOX_YESNO
# 1748 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R4_2
# 1753 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R4, ParcelCoast_T_Beate_R4_Text_1
# 1754 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R4_Text_2, MSGBOX_DEFAULT
# 1755 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R4_2:
# 1749 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1750 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R5::
# 1759 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1760 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1761 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R5_Text_0, MSGBOX_YESNO
# 1762 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R5_2
# 1767 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R5, ParcelCoast_T_Beate_R3_Text_1
# 1768 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R5_Text_1, MSGBOX_DEFAULT
# 1769 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R5_2:
# 1763 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1764 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Shell::
# 1775 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1776 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SHELL_FOUND, ParcelCoast_Shell_2
# 1782 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Shell_Text_1, MSGBOX_SIGN
# 1783 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Shell_2:
# 1777 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Shell_Text_0, MSGBOX_SIGN
# 1778 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_Q_SHELL_FOUND
# 1779 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_PerrinScene::
# 1789 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_6, ParcelCoast_PerrinScene_2
# 1793 "data/maps/ParcelCoast/scripts.pory"
	lockall
# 1794 "data/maps/ParcelCoast/scripts.pory"
	playse SE_PIN
# 1795 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinScene_Text_0, MSGBOX_DEFAULT
# 1796 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 1797 "data/maps/ParcelCoast/scripts.pory"
	applymovement 33, Movement_ParcelCoast_PerrinIn
# 1798 "data/maps/ParcelCoast/scripts.pory"
	waitmovement 0
# 1799 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinScene_Text_1, MSGBOX_DEFAULT
# 1800 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_6, ParcelCoast_PerrinScene_Text_2
# 1801 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinScene_Text_3, MSGBOX_DEFAULT
# 1802 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 1803 "data/maps/ParcelCoast/scripts.pory"
	applymovement 33, Movement_ParcelCoast_PerrinOut
# 1804 "data/maps/ParcelCoast/scripts.pory"
	waitmovement 0
# 1805 "data/maps/ParcelCoast/scripts.pory"
	removeobject 33
# 1806 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_PERRIN_6
# 1807 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1808 "data/maps/ParcelCoast/scripts.pory"
	releaseall
	end

ParcelCoast_PerrinScene_2:
# 1790 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelCoast_PerrinTalk::
# 1812 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1813 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1814 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 1815 "data/maps/ParcelCoast/scripts.pory"
	release
	end


# 1818 "data/maps/ParcelCoast/scripts.pory"
Movement_ParcelCoast_PerrinIn:
# 1818 "data/maps/ParcelCoast/scripts.pory"
	walk_down
# 1818 "data/maps/ParcelCoast/scripts.pory"
	walk_down
	step_end

# 1819 "data/maps/ParcelCoast/scripts.pory"
Movement_ParcelCoast_PerrinOut:
# 1819 "data/maps/ParcelCoast/scripts.pory"
	walk_up
# 1819 "data/maps/ParcelCoast/scripts.pory"
	walk_up
	step_end

ParcelCoast_Epilogue::
# 1823 "data/maps/ParcelCoast/scripts.pory"
	lockall
# 1824 "data/maps/ParcelCoast/scripts.pory"
	delay 20
# 1825 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Epilogue_Text_0, MSGBOX_DEFAULT
# 1826 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Epilogue_Text_1, MSGBOX_DEFAULT
# 1827 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 1828 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 8
# 1829 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_ROUTE1, 8, 26
# 1830 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end


ParcelCoast_GymHarland_Rematch::
# 1836 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1837 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1838 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Rematch_Text_0, MSGBOX_YESNO
# 1839 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_GymHarland_Rematch_2
# 1844 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM6_R, ParcelCoast_GymHarland_Rematch_Text_2
# 1845 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Rematch_Text_3, MSGBOX_DEFAULT
# 1846 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_Rematch_2:
# 1840 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Rematch_Text_1, MSGBOX_DEFAULT
# 1841 "data/maps/ParcelCoast/scripts.pory"
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
	.string "HALE: They read it aloud at the hearing.\n"
	.string "All of it. HOLLIS sat through every page\l"
	.string "without moving. I watched her. She's the\l"
	.string "one who taught me to sit still.$"

ParcelCoast_Hale_Text_1:
# 186 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Rest while you can. The next\n"
	.string "place doesn't have a quay to stand on,\l"
	.string "or a HOLLIS to pour you tea.\p"
	.string "It has her.$"

ParcelCoast_Hale_Text_2:
# 194 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: The dredge scar. The urchins. The\n"
	.string "catch all one age. The empty pilings.\l"
	.string "The plaque. The man on the boat.\p"
	.string "Name it.$"

ParcelCoast_Hale_Text_3:
# 196 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: COLLAPSING.\p"
	.string "The grazer's gone, the urchins own the\n"
	.string "kelp, the apex is fished to nothing, and\l"
	.string "the web is coming apart in front of you\l"
	.string "in real time.$"

ParcelCoast_Hale_Text_4:
# 197 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: The overfishing you could still\n"
	.string "stop, if anyone with the power to\l"
	.string "wanted to. The dredged seabed you\l"
	.string "cannot. Half of it savable, half already\l"
	.string "gone. The hardest kind of place to write\l"
	.string "down honestly.$"

ParcelCoast_Hale_Text_5:
# 198 "data/maps/ParcelCoast/scripts.pory"
	.string "{PLAYER}: HALE. The model on the\n"
	.string "plaque. The methods are hers. DR.\l"
	.string "HERON's. She isn't lost, she's…$"

ParcelCoast_Hale_Text_6:
# 199 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: I know. Have known a while.\p"
	.string "I told you at the start her ending up at\n"
	.string "that lab wasn't random. This is the rest\l"
	.string "of that sentence.$"

ParcelCoast_Hale_Text_7:
# 200 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Your mentor didn't vanish,\n"
	.string "{PLAYER}. She made a bargain. And the\l"
	.string "bargain is out there right now with her\l"
	.string "name on the paperwork, strangling a\l"
	.string "kelp bed.\p"
	.string "I'm sorry. You came looking for a hero.\n"
	.string "You found a citation.$"

ParcelCoast_Hale_Text_8:
# 203 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Coastal Certification. For\n"
	.string "reading a place that's screaming and\l"
	.string "keeping your hand steady enough to\l"
	.string "write it down anyway.$"

ParcelCoast_Hale_Text_9:
# 209 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: There's one place left. Inland.\n"
	.string "The deep corridor, the marsh all of this\l"
	.string "used to drain from. Unfished, unbuilt.\l"
	.string "Too raw to be worth taking. Yet.\p"
	.string "That's where she went to hide. That's\n"
	.string "where we finish.$"

ParcelCoast_Hale_Text_10:
# 210 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Rest first. Then come to the\n"
	.string "station at FERNWICK, and we go inland,\l"
	.string "and we tell the truth with our whole\l"
	.string "chest, and we live with what it costs.\p"
	.string "That was always the job, {PLAYER}.\n"
	.string "This is just the first time it's cost\l"
	.string "this much.$"

ParcelCoast_Hale_Text_11:
# 214 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Don't name it from the office\n"
	.string "window. Walk the quay. The dredge line,\l"
	.string "the barren, the catch on the stall, the\l"
	.string "pilings, the plaque in the office. And\l"
	.string "talk to the man on the boat. Especially\l"
	.string "him.\p"
	.string "Then come and tell me what it is.$"

ParcelCoast_Worker_Text_0:
# 224 "data/maps/ParcelCoast/scripts.pory"
	.string "WORKER: Four generations on this quay,\n"
	.string "and it took a ranger's notebook to put\l"
	.string "the fifth in a hearing room. My boy\l"
	.string "spoke. Two minutes. He was good.$"

ParcelCoast_Worker_Text_1:
# 228 "data/maps/ParcelCoast/scripts.pory"
	.string "WORKER: Four generations my family's\n"
	.string "worked this quay. Good work. Honest\l"
	.string "work.\p"
	.string "Don't let that badge let you forget\n"
	.string "there's people in the frame, RANGER. We\l"
	.string "didn't dredge it. We haul what we're told\l"
	.string "to haul, or we don't eat.$"

ParcelCoast_Vendor1_Text_0:
# 236 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Cod. Different sizes today. The\n"
	.string "review's inspector weighs them herself.\l"
	.string "Customers ask why they're not tidy. I\l"
	.string "tell them. First time I've told them.$"

ParcelCoast_Vendor1_Text_1:
# 240 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Cod, iced this morning. All the\n"
	.string "same size, aren't they. Customers like\l"
	.string "that. Tidy. Nobody asks why there's no\l"
	.string "big ones.$"

ParcelCoast_Vendor2_Text_0:
# 248 "data/maps/ParcelCoast/scripts.pory"
	.string "MAN: Urchin roe's off the list. The\n"
	.string "review says the bottom's a nursery, not\l"
	.string "a shelf. Nothing else down there to sell.\l"
	.string "That was the point, wasn't it.$"

ParcelCoast_Vendor2_Text_1:
# 252 "data/maps/ParcelCoast/scripts.pory"
	.string "MAN: Urchin roe! The FOUNDATION found\n"
	.string "a market for it overseas. Clever.\l"
	.string "There's nothing else down there to sell.$"

ParcelCoast_Vendor3_Text_0:
# 260 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Ice is still FOUNDATION ice.\n"
	.string "Fuel's still FOUNDATION fuel. The rent\l"
	.string "went down a page in the review. I sell\l"
	.string "fish. I noticed the page.$"

ParcelCoast_Vendor3_Text_1:
# 264 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Ice is FOUNDATION ice. Fuel's\n"
	.string "FOUNDATION fuel. The stall rent goes to\l"
	.string "a FOUNDATION company. I sell fish.\l"
	.string "That's the only bit of this that's mine.$"

ParcelCoast_Vendor4_Text_0:
# 272 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: WAILMER in the harbour mouth\n"
	.string "yesterday. One. My father would have\l"
	.string "laughed at one. I stood on the quay and\l"
	.string "watched it like a boy.$"

ParcelCoast_Vendor4_Text_1:
# 276 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: Fifty years ago you could walk\n"
	.string "across the harbour on the backs of the\l"
	.string "WAILMER. My father said that. His\l"
	.string "father said it to him. Somebody has to\l"
	.string "keep saying it.$"

ParcelCoast_Girl_Text_0:
# 284 "data/maps/ParcelCoast/scripts.pory"
	.string "GIRL: The gulls dived today. Mum\n"
	.string "stopped on the quay to watch. She\l"
	.string "didn't say anything. She held my hand\l"
	.string "very tight.$"

ParcelCoast_Girl_Text_1:
# 288 "data/maps/ParcelCoast/scripts.pory"
	.string "GIRL: The gulls follow the boats in but\n"
	.string "they don't dive anymore. Mum says they\l"
	.string "know something we don't.$"

ParcelCoast_Docker_Text_0:
# 296 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Cannery's on half days. Half\n"
	.string "days, full pay. HARLAND's lot argued it\l"
	.string "in the union hall for a week. I slept in a\l"
	.string "bed in daylight. Strange thing.$"

ParcelCoast_Docker_Text_1:
# 300 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Two shifts a day, seven days.\n"
	.string "The cannery never stops. The fish stop.\l"
	.string "The cannery doesn't.$"

ParcelCoast_GullMan_Text_0:
# 308 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: I count the boats out and the\n"
	.string "boats in. Half the number now, by order.\l"
	.string "The crates per boat went up. Nobody\l"
	.string "asked me. I'm telling you anyway.$"

ParcelCoast_GullMan_Text_1:
# 312 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: I count the boats out and the\n"
	.string "boats in. Same number. I count the\l"
	.string "crates. Fewer every month. Nobody\l"
	.string "asked me to count. Nobody asked the\l"
	.string "gulls either.$"

ParcelCoast_ReturnFerry_Text_0:
# 322 "data/maps/ParcelCoast/scripts.pory"
	.string "SAILOR: Back to SALTWICK, RANGER? Go\n"
	.string "on. They'll want to see the one who did\l"
	.string "it. Don't let them buy you a drink.\l"
	.string "They'll try.$"

ParcelCoast_ReturnFerry_Text_1:
# 326 "data/maps/ParcelCoast/scripts.pory"
	.string "SAILOR: Back to SALTWICK, RANGER?\n"
	.string "Can't say I blame you. Nothing to do\l"
	.string "here but watch them take it.$"

ParcelCoast_ReturnFerry_Text_2:
# 328 "data/maps/ParcelCoast/scripts.pory"
	.string "SAILOR: I'll wait. The catch isn't going\n"
	.string "anywhere. Less of it every run, but it\l"
	.string "isn't going anywhere.$"

ParcelCoast_MereholtAide_Text_0:
# 345 "data/maps/ParcelCoast/scripts.pory"
	.string "AIDE: No message came down. She said\n"
	.string "you would already have everything she'd\l"
	.string "say.$"

ParcelCoast_MereholtAide_Text_1:
# 349 "data/maps/ParcelCoast/scripts.pory"
	.string "AIDE: Ms. BROOKE is up from the mainland\n"
	.string "office. She has asked for you. By name,\l"
	.string "no title on it.\p"
	.string "The boardroom. Top floor. Now, if you\n"
	.string "would.$"

ParcelCoast_MereholtAide_Text_2:
# 350 "data/maps/ParcelCoast/scripts.pory"
	.string "Go up?$"

ParcelCoast_MereholtAide_Text_3:
# 352 "data/maps/ParcelCoast/scripts.pory"
	.string "AIDE: She'll wait. She prices patience\n"
	.string "like everything else. Accurately.$"

ParcelCoast_SignQuay_Text_0:
# 367 "data/maps/ParcelCoast/scripts.pory"
	.string "MEREHOLT COASTAL WORKS -- LIGHTHOUSE\n"
	.string "QUAY\p"
	.string "Ferry to SALTWICK, twice daily. Landing\n"
	.string "fees to the office. No fishing from the\l"
	.string "quay. The quay is for the fleet.$"

ParcelCoast_SignMarket_Text_0:
# 371 "data/maps/ParcelCoast/scripts.pory"
	.string "FISH MARKET\p"
	.string "Stalls 1-12 let by MEREHOLT COASTAL\n"
	.string "HOLDINGS. Catch to be weighed at the\l"
	.string "cannery before sale. Undersize fish are\l"
	.string "not to be landed. Undersize is whatever\l"
	.string "the Board says this month.$"

ParcelCoast_Brage_Text_0:
# 378 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Off the boats, on the beach,\n"
	.string "nothing to do till the tide. Battle me,\l"
	.string "RANGER, I'm bored of losing at cards.$"

ParcelCoast_Brage_Text_1:
# 379 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Lost at that too.$"

ParcelCoast_Brage_Text_2:
# 394 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Ten years on the trawlers. We\n"
	.string "used to come in with the deck awash.\l"
	.string "Now you can see the planks the whole\l"
	.string "trip home.$"

ParcelCoast_Brage_R2_Text_0:
# 405 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoast_Brage_R2_Text_1:
# 407 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Another time, then.$"

ParcelCoast_Brage_R2_Text_2:
# 411 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: …Fair.$"

ParcelCoast_Brage_R2_Text_3:
# 412 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_Brage_R3_Text_0:
# 419 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Brage_R3_Text_1:
# 425 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Still yours.$"

ParcelCoast_Brage_R3_Text_2:
# 426 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Brage_R4_Text_0:
# 433 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_Brage_R4_Text_1:
# 440 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Brage_R5_Text_0:
# 447 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Brage_R5_Text_1:
# 453 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Right. That's the whole of it.$"

ParcelCoast_Brage_R5_Text_2:
# 454 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Frod_Text_0:
# 460 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: SHARPEDO off the beach. Never\n"
	.string "used to be. Nothing else to eat so they\l"
	.string "come in close. Battle.$"

ParcelCoast_Frod_Text_1:
# 461 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Close enough.$"

ParcelCoast_Frod_Text_2:
# 476 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: When the big fish are gone, the\n"
	.string "sharks eat whatever's left and then\l"
	.string "they eat each other. That's not a\l"
	.string "saying. That's this beach.$"

ParcelCoast_Frod_R2_Text_0:
# 487 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Frod_R2_Text_1:
# 489 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCoast_Frod_R2_Text_2:
# 493 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: …Again, then. Later.$"

ParcelCoast_Frod_R2_Text_3:
# 494 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Frod_R3_Text_0:
# 501 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCoast_Frod_R3_Text_1:
# 508 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Frod_R4_Text_0:
# 515 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCoast_Frod_R4_Text_1:
# 521 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Right. That's the whole of it.$"

ParcelCoast_Frod_R4_Text_2:
# 522 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Frod_R5_Text_0:
# 529 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoast_Frod_R5_Text_1:
# 535 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Still yours.$"

ParcelCoast_Frod_R5_Text_2:
# 536 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCoast_Gyda_Text_0:
# 542 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: You swam out past the dredge\n"
	.string "line! Nobody does that. Battle, then I'll\l"
	.string "show you what's down there.$"

ParcelCoast_Gyda_Text_1:
# 543 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Nothing. That's what's down\n"
	.string "there. Nothing.$"

ParcelCoast_Gyda_Text_2:
# 558 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: I dive the barren for the\n"
	.string "FOUNDATION. Counting urchins. There's a\l"
	.string "bonus if the number goes down. It never\l"
	.string "goes down.$"

ParcelCoast_Gyda_R2_Text_0:
# 569 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Gyda_R2_Text_1:
# 571 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCoast_Gyda_R2_Text_2:
# 575 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: That's the one I wanted to see.$"

ParcelCoast_Gyda_R2_Text_3:
# 576 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Gyda_R3_Text_0:
# 583 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelCoast_Gyda_R3_Text_1:
# 589 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: …Again, then. Later.$"

ParcelCoast_Gyda_R3_Text_2:
# 590 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Gyda_R4_Text_0:
# 597 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCoast_Gyda_R4_Text_1:
# 604 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Gyda_R5_Text_0:
# 611 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoast_Gyda_R5_Text_1:
# 618 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_Hroar_Text_0:
# 624 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: The inlet's mine. Been swimming\n"
	.string "it since I was six. Battle for it.$"

ParcelCoast_Hroar_Text_1:
# 625 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Yours, then. Mind the drums.$"

ParcelCoast_Hroar_Text_2:
# 640 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: There's fuel drums on the bottom\n"
	.string "of the inlet with the crest on. Nobody\l"
	.string "put them there. They just arrived.$"

ParcelCoast_Hroar_R2_Text_0:
# 651 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoast_Hroar_R2_Text_1:
# 653 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Suit yourself. I'm here.$"

ParcelCoast_Hroar_R2_Text_2:
# 657 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: That's the one I wanted to see.$"

ParcelCoast_Hroar_R2_Text_3:
# 658 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Hroar_R3_Text_0:
# 665 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCoast_Hroar_R3_Text_1:
# 672 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Hroar_R4_Text_0:
# 679 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_Hroar_R4_Text_1:
# 685 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Noted. Properly, this time.$"

ParcelCoast_Hroar_R4_Text_2:
# 686 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Hroar_R5_Text_0:
# 693 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCoast_Hroar_R5_Text_1:
# 699 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Still yours.$"

ParcelCoast_Hroar_R5_Text_2:
# 700 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Jorid_Text_0:
# 706 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: The beach is for playing! Nobody\n"
	.string "plays here anymore. They work. Battle\l"
	.string "me, that's nearly playing.$"

ParcelCoast_Jorid_Text_1:
# 707 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Nearly.$"

ParcelCoast_Jorid_Text_2:
# 722 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Mum says the beach used to have\n"
	.string "shells. I've never found a shell. Just\l"
	.string "the drum rings.$"

ParcelCoast_Jorid_R2_Text_0:
# 733 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Jorid_R2_Text_1:
# 735 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Fine. Same spot.$"

ParcelCoast_Jorid_R2_Text_2:
# 739 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Noted. Properly, this time.$"

ParcelCoast_Jorid_R2_Text_3:
# 740 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Jorid_R3_Text_0:
# 747 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Jorid_R3_Text_1:
# 753 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Right. That's the whole of it.$"

ParcelCoast_Jorid_R3_Text_2:
# 754 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Jorid_R4_Text_0:
# 761 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_Jorid_R4_Text_1:
# 767 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: …Fair.$"

ParcelCoast_Jorid_R4_Text_2:
# 768 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Jorid_R5_Text_0:
# 775 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_Jorid_R5_Text_1:
# 782 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Ketil_Text_0:
# 788 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: FOUNDATION security. Off duty.\n"
	.string "On duty I'd ask for your pass. Off duty\l"
	.string "I'll just beat you.$"

ParcelCoast_Ketil_Text_1:
# 789 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: On duty tomorrow. Don't be here.$"

ParcelCoast_Ketil_Text_2:
# 804 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: The office has a floor nobody\n"
	.string "goes to. Top one. The boardroom. I've\l"
	.string "seen the lift go up. Never seen it come\l"
	.string "down with anyone smiling.$"

ParcelCoast_Ketil_R2_Text_0:
# 815 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoast_Ketil_R2_Text_1:
# 817 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: No hurry. The water keeps.$"

ParcelCoast_Ketil_R2_Text_2:
# 821 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Noted. Properly, this time.$"

ParcelCoast_Ketil_R2_Text_3:
# 822 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Ketil_R3_Text_0:
# 829 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCoast_Ketil_R3_Text_1:
# 835 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Still yours.$"

ParcelCoast_Ketil_R3_Text_2:
# 836 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Ketil_R4_Text_0:
# 843 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCoast_Ketil_R4_Text_1:
# 849 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: That's the one I wanted to see.$"

ParcelCoast_Ketil_R4_Text_2:
# 850 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Ketil_R5_Text_0:
# 857 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Ketil_R5_Text_1:
# 863 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: …Fair.$"

ParcelCoast_Ketil_R5_Text_2:
# 864 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Liva_Text_0:
# 870 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: I came up from the mainland for\n"
	.string "the FOUNDATION's graduate scheme.\l"
	.string "Sustainable harvest modelling. Battle?$"

ParcelCoast_Liva_Text_1:
# 871 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: The model didn't predict that.$"

ParcelCoast_Liva_Text_2:
# 886 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: The model's beautiful. Elegant.\n"
	.string "Every term in it is true. It's just that\l"
	.string "the fish didn't read it.$"

ParcelCoast_Liva_R2_Text_0:
# 897 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Liva_R2_Text_1:
# 899 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Another time, then.$"

ParcelCoast_Liva_R2_Text_2:
# 903 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: That's the one I wanted to see.$"

ParcelCoast_Liva_R2_Text_3:
# 904 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_Liva_R3_Text_0:
# 911 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Liva_R3_Text_1:
# 917 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Right. That's the whole of it.$"

ParcelCoast_Liva_R3_Text_2:
# 918 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Liva_R4_Text_0:
# 925 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelCoast_Liva_R4_Text_1:
# 931 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Still yours.$"

ParcelCoast_Liva_R4_Text_2:
# 932 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Liva_R5_Text_0:
# 939 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCoast_Liva_R5_Text_1:
# 945 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: …Fair.$"

ParcelCoast_Liva_R5_Text_2:
# 946 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_Magnus_Text_0:
# 952 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Director, Coastal Holdings.\n"
	.string "You're the RANGER with the notebook.\l"
	.string "Humour me. I collect strong trainers\l"
	.string "the way I collect quotas.$"

ParcelCoast_Magnus_Text_1:
# 953 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Well. You're not for sale, at any\n"
	.string "rate.$"

ParcelCoast_Magnus_Text_2:
# 968 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Write what you like. We own the\n"
	.string "ice, the fuel, the stalls, the boats'\l"
	.string "paper and the hearing hall. A report is a\l"
	.string "piece of paper. We own the paper.$"

ParcelCoast_Magnus_R2_Text_0:
# 979 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Magnus_R2_Text_1:
# 981 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Fine. Same spot.$"

ParcelCoast_Magnus_R2_Text_2:
# 985 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Right. That's the whole of it.$"

ParcelCoast_Magnus_R2_Text_3:
# 986 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Magnus_R3_Text_0:
# 993 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCoast_Magnus_R3_Text_1:
# 999 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: …Again, then. Later.$"

ParcelCoast_Magnus_R3_Text_2:
# 1000 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Magnus_R4_Text_0:
# 1007 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_Magnus_R4_Text_1:
# 1013 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: …Fair.$"

ParcelCoast_Magnus_R4_Text_2:
# 1014 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Magnus_R5_Text_0:
# 1021 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCoast_Magnus_R5_Text_1:
# 1027 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Noted. Properly, this time.$"

ParcelCoast_Magnus_R5_Text_2:
# 1028 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Nikolai_Text_0:
# 1034 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Father says the coast is an\n"
	.string "investment. I say it smells. Battle me\l"
	.string "and I'll tell Father you were rude.$"

ParcelCoast_Nikolai_Text_1:
# 1035 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Father won't care. Father\n"
	.string "never cares.$"

ParcelCoast_Nikolai_Text_2:
# 1050 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: We have a house on the\n"
	.string "mainland and a house here. The one here\l"
	.string "is for 'optics'. I looked that up. It\l"
	.string "means being seen.$"

ParcelCoast_Nikolai_R2_Text_0:
# 1061 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Nikolai_R2_Text_1:
# 1063 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Suit yourself. I'm here.$"

ParcelCoast_Nikolai_R2_Text_2:
# 1067 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Right. That's the whole of it.$"

ParcelCoast_Nikolai_R2_Text_3:
# 1068 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Nikolai_R3_Text_0:
# 1075 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelCoast_Nikolai_R3_Text_1:
# 1082 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelCoast_Nikolai_R4_Text_0:
# 1089 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: I don't care about the paper.\n"
	.string "I care about the one I lost. Go?$"

ParcelCoast_Nikolai_R4_Text_1:
# 1095 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: …Again, then. Later.$"

ParcelCoast_Nikolai_R4_Text_2:
# 1096 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoast_Nikolai_R5_Text_0:
# 1103 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_Nikolai_R5_Text_1:
# 1109 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: …Fair.$"

ParcelCoast_Nikolai_R5_Text_2:
# 1110 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Oda_Text_0:
# 1116 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: The market's quaint, isn't it. All\n"
	.string "these little stalls. I'm here for the\l"
	.string "roe. Battle, darling?$"

ParcelCoast_Oda_Text_1:
# 1117 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Not as quaint as I thought.$"

ParcelCoast_Oda_Text_2:
# 1132 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Everyone on the mainland eats this\n"
	.string "roe. It's on every menu. Nobody asks\l"
	.string "what the urchins were eating before\l"
	.string "there was nothing else.$"

ParcelCoast_Oda_R2_Text_0:
# 1143 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: I kept the team up for this. Again?$"

ParcelCoast_Oda_R2_Text_1:
# 1145 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Fine. Same spot.$"

ParcelCoast_Oda_R2_Text_2:
# 1149 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Still yours.$"

ParcelCoast_Oda_R2_Text_3:
# 1150 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_Oda_R3_Text_0:
# 1157 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Oda_R3_Text_1:
# 1164 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Oda_R4_Text_0:
# 1171 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCoast_Oda_R4_Text_1:
# 1177 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: …Fair.$"

ParcelCoast_Oda_R4_Text_2:
# 1178 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Oda_R5_Text_0:
# 1185 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoast_Oda_R5_Text_1:
# 1191 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: That's the one I wanted to see.$"

ParcelCoast_Oda_R5_Text_2:
# 1192 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_Petter_Text_0:
# 1198 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Cannery night shift. I sleep on\n"
	.string "the quay. You woke me. Battle.$"

ParcelCoast_Petter_Text_1:
# 1199 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Going back to sleep.$"

ParcelCoast_Petter_Text_2:
# 1214 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Two shifts a day and the cans\n"
	.string "are half empty. They put more water in.\l"
	.string "You can taste the quota in the tin.$"

ParcelCoast_Petter_R2_Text_0:
# 1225 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelCoast_Petter_R2_Text_1:
# 1227 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Another time, then.$"

ParcelCoast_Petter_R2_Text_2:
# 1231 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: …Fair.$"

ParcelCoast_Petter_R2_Text_3:
# 1232 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Petter_R3_Text_0:
# 1239 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCoast_Petter_R3_Text_1:
# 1245 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Still yours.$"

ParcelCoast_Petter_R3_Text_2:
# 1246 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Petter_R4_Text_0:
# 1253 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelCoast_Petter_R4_Text_1:
# 1259 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Noted. Properly, this time.$"

ParcelCoast_Petter_R4_Text_2:
# 1260 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Petter_R5_Text_0:
# 1267 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCoast_Petter_R5_Text_1:
# 1274 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Ragnar_Text_0:
# 1280 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: One GYARADOS. Took me a\n"
	.string "lifetime off this quay. Last one in the\l"
	.string "harbour, maybe. Battle it.$"

ParcelCoast_Ragnar_Text_1:
# 1281 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: It's still the last one.$"

ParcelCoast_Ragnar_Text_2:
# 1296 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: HARLAND's cousin, river side. He\n"
	.string "talks about you. Doesn't say good or\l"
	.string "bad. Just talks. For HARLAND that's a\l"
	.string "speech.$"

ParcelCoast_Ragnar_R2_Text_0:
# 1307 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelCoast_Ragnar_R2_Text_1:
# 1309 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Suit yourself. I'm here.$"

ParcelCoast_Ragnar_R2_Text_2:
# 1313 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Still yours.$"

ParcelCoast_Ragnar_R2_Text_3:
# 1314 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Ragnar_R3_Text_0:
# 1321 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelCoast_Ragnar_R3_Text_1:
# 1327 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: That's the one I wanted to see.$"

ParcelCoast_Ragnar_R3_Text_2:
# 1328 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Ragnar_R4_Text_0:
# 1335 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCoast_Ragnar_R4_Text_1:
# 1341 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: …Fair.$"

ParcelCoast_Ragnar_R4_Text_2:
# 1342 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoast_Ragnar_R5_Text_0:
# 1349 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Ragnar_R5_Text_1:
# 1356 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Solvor_Text_0:
# 1362 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: My AZUMARILL loves the\n"
	.string "harbour! Well. Loved. It won't go in the\l"
	.string "water now. Battle?$"

ParcelCoast_Solvor_Text_1:
# 1363 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: It still won't go in.$"

ParcelCoast_Solvor_Text_2:
# 1378 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: It came out itchy, same as the\n"
	.string "MARILL at ELVSUND. The same itch, two\l"
	.string "hundred miles apart. That's not two\l"
	.string "problems.$"

ParcelCoast_Solvor_R2_Text_0:
# 1389 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Solvor_R2_Text_1:
# 1391 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Suit yourself. I'm here.$"

ParcelCoast_Solvor_R2_Text_2:
# 1395 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: …Fair.$"

ParcelCoast_Solvor_R2_Text_3:
# 1396 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Solvor_R3_Text_0:
# 1403 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelCoast_Solvor_R3_Text_1:
# 1409 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Noted. Properly, this time.$"

ParcelCoast_Solvor_R3_Text_2:
# 1410 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Solvor_R4_Text_0:
# 1417 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_Solvor_R4_Text_1:
# 1424 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Solvor_R5_Text_0:
# 1431 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCoast_Solvor_R5_Text_1:
# 1437 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Right. That's the whole of it.$"

ParcelCoast_Solvor_R5_Text_2:
# 1438 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Tore_Text_0:
# 1444 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Ferry crew. We run twice a day\n"
	.string "whether anyone rides or not. Mostly\l"
	.string "not. Battle me, it passes the time.$"

ParcelCoast_Tore_Text_1:
# 1445 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Time passed.$"

ParcelCoast_Tore_Text_2:
# 1460 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: The ferry's FOUNDATION too. The\n"
	.string "one kindness on this coast and they\l"
	.string "own it. I'm not complaining. I'm just\l"
	.string "saying.$"

ParcelCoast_Tore_R2_Text_0:
# 1471 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Tore_R2_Text_1:
# 1473 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCoast_Tore_R2_Text_2:
# 1477 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Still yours.$"

ParcelCoast_Tore_R2_Text_3:
# 1478 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Tore_R3_Text_0:
# 1485 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCoast_Tore_R3_Text_1:
# 1491 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Noted. Properly, this time.$"

ParcelCoast_Tore_R3_Text_2:
# 1492 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Tore_R4_Text_0:
# 1499 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_Tore_R4_Text_1:
# 1505 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: …Fair.$"

ParcelCoast_Tore_R4_Text_2:
# 1506 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Tore_R5_Text_0:
# 1513 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Tore_R5_Text_1:
# 1520 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_T_Helge_Text_0:
# 1528 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Quay crew. We tie up the fleet\n"
	.string "and count what's missing. Battle, it's\l"
	.string "quicker than counting.$"

ParcelCoast_T_Helge_Text_1:
# 1529 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Quicker, yes.$"

ParcelCoast_T_Helge_Text_2:
# 1544 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Forty-one boats went out.\n"
	.string "Forty-one came back. The count's\l"
	.string "always right. It's the holds that are\l"
	.string "wrong.$"

ParcelCoast_T_Helge_R2_Text_0:
# 1555 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_T_Helge_R2_Text_1:
# 1557 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Fine. Same spot.$"

ParcelCoast_T_Helge_R2_Text_2:
# 1561 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Right. That's the whole of it.$"

ParcelCoast_T_Helge_R2_Text_3:
# 1562 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_T_Helge_R3_Text_0:
# 1569 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelCoast_T_Helge_R3_Text_1:
# 1575 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: …Again, then. Later.$"

ParcelCoast_T_Helge_R3_Text_2:
# 1576 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_T_Helge_R4_Text_0:
# 1583 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_T_Helge_R4_Text_1:
# 1589 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: That's the one I wanted to see.$"

ParcelCoast_T_Helge_R4_Text_2:
# 1590 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_T_Helge_R5_Text_0:
# 1597 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_T_Helge_R5_Text_1:
# 1604 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_T_Anton_Text_0:
# 1610 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: The beach is the only bit of this\n"
	.string "coast that's free. Even the sand's got\l"
	.string "rings in it. Battle?$"

ParcelCoast_T_Anton_Text_1:
# 1611 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Free, and lost.$"

ParcelCoast_T_Anton_Text_2:
# 1626 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Drum rings. Fuel drums. They roll\n"
	.string "off the quay in storms. The crest's on\l"
	.string "all of them.$"

ParcelCoast_T_Anton_R2_Text_0:
# 1637 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelCoast_T_Anton_R2_Text_1:
# 1639 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Fine. Same spot.$"

ParcelCoast_T_Anton_R2_Text_2:
# 1643 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: …Fair.$"

ParcelCoast_T_Anton_R2_Text_3:
# 1644 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_T_Anton_R3_Text_0:
# 1651 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCoast_T_Anton_R3_Text_1:
# 1657 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Noted. Properly, this time.$"

ParcelCoast_T_Anton_R3_Text_2:
# 1658 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_T_Anton_R4_Text_0:
# 1665 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_T_Anton_R4_Text_1:
# 1671 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: …Again, then. Later.$"

ParcelCoast_T_Anton_R4_Text_2:
# 1672 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_T_Anton_R5_Text_0:
# 1679 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCoast_T_Anton_R5_Text_1:
# 1686 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_T_Beate_Text_0:
# 1692 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Up from the mainland for the\n"
	.string "fish. Everyone says the fish. Nobody\l"
	.string "says there's hardly any. Battle, darling.$"

ParcelCoast_T_Beate_Text_1:
# 1693 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Hardly any of that, either.$"

ParcelCoast_T_Beate_Text_2:
# 1708 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: The brochure says 'working\n"
	.string "harbour'. It is working. Something's\l"
	.string "working. It isn't the sea.$"

ParcelCoast_T_Beate_R2_Text_0:
# 1719 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: I kept the team up for this.\n"
	.string "Again?$"

ParcelCoast_T_Beate_R2_Text_1:
# 1721 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Another time, then.$"

ParcelCoast_T_Beate_R2_Text_2:
# 1725 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Still yours.$"

ParcelCoast_T_Beate_R2_Text_3:
# 1726 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_T_Beate_R3_Text_0:
# 1733 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_T_Beate_R3_Text_1:
# 1739 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: …Fair.$"

ParcelCoast_T_Beate_R3_Text_2:
# 1740 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_T_Beate_R4_Text_0:
# 1747 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCoast_T_Beate_R4_Text_1:
# 1753 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: That's the one I wanted to see.$"

ParcelCoast_T_Beate_R4_Text_2:
# 1754 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_T_Beate_R5_Text_0:
# 1761 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_T_Beate_R5_Text_1:
# 1768 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Shell_Text_0:
# 1777 "data/maps/ParcelCoast/scripts.pory"
	.string "Half-buried in the sand between two\n"
	.string "drum rings: a shell. Whole. Pink inside.\p"
	.string "The first one anyone has found on this\n"
	.string "beach in years. Taken.$"

ParcelCoast_Shell_Text_1:
# 1782 "data/maps/ParcelCoast/scripts.pory"
	.string "Sand. Drum rings. The hollow where a\n"
	.string "shell was.$"

ParcelCoast_PerrinScene_Text_0:
# 1795 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelCoast_PerrinScene_Text_1:
# 1799 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: Coastal Holdings liaison. New\n"
	.string "card, new coat. Don't look at me like\l"
	.string "that.\p"
	.string "One last time, WREN. Then I'm done\n"
	.string "pretending we're on the same side. I\l"
	.string "never was. I just liked you.$"

ParcelCoast_PerrinScene_Text_2:
# 1800 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: …Yeah. I know.$"

ParcelCoast_PerrinScene_Text_3:
# 1801 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: Write it true, then. Whatever it\n"
	.string "costs. I'll be upstairs, typing the\l"
	.string "response.\p"
	.string "I type well. HOLLIS says so.$"

ParcelCoast_PerrinTalk_Text_0:
# 1814 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelCoast_Epilogue_Text_0:
# 1825 "data/maps/ParcelCoast/scripts.pory"
	.string "MEREHOLT COAST. The cranes swing on\n"
	.string "schedule. The quota review runs to\l"
	.string "spring, and the boats go out under it\l"
	.string "and come back with what there is.$"

ParcelCoast_Epilogue_Text_1:
# 1826 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: You want to know if it was worth\n"
	.string "it. Wrong verb. Ask if it was true.\p"
	.string "It was. Go and rest. Then go and read\n"
	.string "something else. There's a lot of region\l"
	.string "left.$"

ParcelCoast_GymHarland_Rematch_Text_0:
# 1838 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: They read you aloud at the\n"
	.string "hearing. I'd read you the old way, too.\l"
	.string "Boat's in, nets are dry, and the crew's\l"
	.string "been training on the dredge line out of\l"
	.string "spite.\p"
	.string "Full strength. Aye?$"

ParcelCoast_GymHarland_Rematch_Text_1:
# 1840 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Tide's at six. Offer stands.$"

ParcelCoast_GymHarland_Rematch_Text_2:
# 1844 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: …Aye. You read the water.\n"
	.string "Still.$"

ParcelCoast_GymHarland_Rematch_Text_3:
# 1845 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Tide's at six. Any day you like.$"
