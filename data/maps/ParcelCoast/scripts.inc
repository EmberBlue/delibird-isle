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
	setflag FLAG_VISITED_PARCEL_COAST
# 35 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_HideAide_2
# 38 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_TEMP_4
ParcelCoast_HideAide_1:
	end

ParcelCoast_HideAide_2:
# 36 "data/maps/ParcelCoast/scripts.pory"
	clearflag FLAG_TEMP_4
	goto ParcelCoast_HideAide_1


ParcelCoast_FirstEntry::
# 44 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_TEMP_1, 1
# 45 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COAST_ARRIVAL, ParcelCoast_FirstEntry_2
# 48 "data/maps/ParcelCoast/scripts.pory"
	lockall
# 49 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FirstEntry_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FirstEntry_Text_1, MSGBOX_DEFAULT
# 51 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FirstEntry_Text_2, MSGBOX_DEFAULT
# 52 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALDMERE_COAST_ARRIVAL
# 53 "data/maps/ParcelCoast/scripts.pory"
	releaseall
	end

ParcelCoast_FirstEntry_2:
	end


ParcelCoast_Dredge::
# 59 "data/maps/ParcelCoast/scripts.pory"
	lock
# 60 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 61 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 0
# 62 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 63 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Dredge_2
# 68 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dredge_Text_1, MSGBOX_SIGN
# 69 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 70 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Dredge_2:
# 64 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dredge_Text_0, MSGBOX_SIGN
# 65 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Barren::
# 74 "data/maps/ParcelCoast/scripts.pory"
	lock
# 75 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 76 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 1
# 77 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 78 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Barren_2
# 83 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Barren_Text_1, MSGBOX_SIGN
# 84 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 85 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Barren_2:
# 79 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Barren_Text_0, MSGBOX_SIGN
# 80 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Catch::
# 89 "data/maps/ParcelCoast/scripts.pory"
	lock
# 90 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 91 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 2
# 92 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 93 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Catch_2
# 98 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Catch_Text_1, MSGBOX_SIGN
# 99 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 100 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Catch_2:
# 94 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Catch_Text_0, MSGBOX_SIGN
# 95 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Pilings::
# 104 "data/maps/ParcelCoast/scripts.pory"
	lock
# 105 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 106 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 3
# 107 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 108 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Pilings_2
# 113 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Pilings_Text_1, MSGBOX_SIGN
# 114 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 115 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Pilings_2:
# 109 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Pilings_Text_0, MSGBOX_SIGN
# 110 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_GymHarland::
# 121 "data/maps/ParcelCoast/scripts.pory"
	lock
# 122 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 123 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCoast_GymHarland_2
ParcelCoast_GymHarland_1:
# 126 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, ParcelCoast_GymHarland_5
# 162 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_13, MSGBOX_DEFAULT
# 163 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_14, MSGBOX_DEFAULT
# 164 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_15, MSGBOX_YESNO
# 165 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_GymHarland_8
# 169 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_17, MSGBOX_DEFAULT
ParcelCoast_GymHarland_7:
# 171 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM6, ParcelCoast_GymHarland_Text_18
# 172 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_BADGE06_GET
# 173 "data/maps/ParcelCoast/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 174 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 175 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 5
# 176 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 177 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_19, MSGBOX_DEFAULT
# 178 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_HM02
# 179 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_20, MSGBOX_DEFAULT
# 180 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_2:
# 124 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_GymHarland_Rematch
	goto ParcelCoast_GymHarland_1

ParcelCoast_GymHarland_5:
# 127 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_GymHarland_12
# 133 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_COAST_SHIFT_DONE, ParcelCoast_GymHarland_15
# 158 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_12, MSGBOX_DEFAULT
# 159 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_8:
# 166 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_16, MSGBOX_DEFAULT
# 167 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_EXAM_6
	goto ParcelCoast_GymHarland_7

ParcelCoast_GymHarland_12:
# 128 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_0, MSGBOX_DEFAULT
# 129 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_1, MSGBOX_DEFAULT
# 130 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_15:
# 134 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_2, MSGBOX_DEFAULT
# 135 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_3, MSGBOX_YESNO
# 136 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_GymHarland_18
# 141 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 142 "data/maps/ParcelCoast/scripts.pory"
	playse SE_SHIP
# 143 "data/maps/ParcelCoast/scripts.pory"
	fadescreen FADE_TO_BLACK
# 144 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_5, MSGBOX_DEFAULT
# 145 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_6, MSGBOX_DEFAULT
# 146 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_7, MSGBOX_DEFAULT
# 147 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_8, MSGBOX_DEFAULT
# 148 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_9, MSGBOX_DEFAULT
# 149 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_10, MSGBOX_DEFAULT
# 150 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 151 "data/maps/ParcelCoast/scripts.pory"
	delay 60
# 152 "data/maps/ParcelCoast/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 153 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_11, MSGBOX_DEFAULT
# 154 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_COAST_SHIFT_DONE
# 155 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_18:
# 137 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_4, MSGBOX_DEFAULT
# 138 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hale::
# 186 "data/maps/ParcelCoast/scripts.pory"
	lock
# 187 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 188 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Hale_2
# 193 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Hale_5
# 198 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 199 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 63
# 200 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 201 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelCoast_Hale_8
# 222 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_11, MSGBOX_DEFAULT
# 223 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_2:
# 189 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_0, MSGBOX_DEFAULT
# 190 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_5:
# 194 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_1, MSGBOX_DEFAULT
# 195 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_8:
# 202 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_2, MSGBOX_DEFAULT
# 203 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyCoast
# 204 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_3, MSGBOX_DEFAULT
# 205 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_4, MSGBOX_DEFAULT
# 206 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_5, MSGBOX_DEFAULT
# 207 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_6, MSGBOX_DEFAULT
# 208 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_7, MSGBOX_DEFAULT
# 209 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 6
# 210 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 211 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_8, MSGBOX_DEFAULT
# 212 "data/maps/ParcelCoast/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 213 "data/maps/ParcelCoast/scripts.pory"
	waitfanfare
# 214 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALDMERE_COASTAL_CERT
# 215 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_MAX_POTION, 5
# 216 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 217 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_9, MSGBOX_DEFAULT
# 218 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_10, MSGBOX_DEFAULT
# 219 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Worker::
# 229 "data/maps/ParcelCoast/scripts.pory"
	lock
# 230 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 231 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Worker_2
# 236 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Worker_5
# 241 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Worker_Text_2, MSGBOX_DEFAULT
# 242 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Worker_2:
# 232 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Worker_Text_0, MSGBOX_DEFAULT
# 233 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Worker_5:
# 237 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Worker_Text_1, MSGBOX_DEFAULT
# 238 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor1::
# 246 "data/maps/ParcelCoast/scripts.pory"
	lock
# 247 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 248 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Vendor1_2
# 253 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Vendor1_5
# 258 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor1_Text_2, MSGBOX_DEFAULT
# 259 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor1_2:
# 249 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor1_Text_0, MSGBOX_DEFAULT
# 250 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor1_5:
# 254 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor1_Text_1, MSGBOX_DEFAULT
# 255 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor2::
# 263 "data/maps/ParcelCoast/scripts.pory"
	lock
# 264 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 265 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Vendor2_2
# 270 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Vendor2_5
# 275 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor2_Text_2, MSGBOX_DEFAULT
# 276 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor2_2:
# 266 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor2_Text_0, MSGBOX_DEFAULT
# 267 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor2_5:
# 271 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor2_Text_1, MSGBOX_DEFAULT
# 272 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor3::
# 280 "data/maps/ParcelCoast/scripts.pory"
	lock
# 281 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 282 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Vendor3_2
# 287 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Vendor3_5
# 292 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor3_Text_2, MSGBOX_DEFAULT
# 293 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor3_2:
# 283 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor3_Text_0, MSGBOX_DEFAULT
# 284 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor3_5:
# 288 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor3_Text_1, MSGBOX_DEFAULT
# 289 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor4::
# 297 "data/maps/ParcelCoast/scripts.pory"
	lock
# 298 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 299 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Vendor4_2
# 304 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Vendor4_5
# 309 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor4_Text_2, MSGBOX_DEFAULT
# 310 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor4_2:
# 300 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor4_Text_0, MSGBOX_DEFAULT
# 301 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor4_5:
# 305 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor4_Text_1, MSGBOX_DEFAULT
# 306 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Girl::
# 314 "data/maps/ParcelCoast/scripts.pory"
	lock
# 315 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 316 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Girl_2
# 321 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Girl_5
# 326 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Girl_Text_2, MSGBOX_DEFAULT
# 327 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Girl_2:
# 317 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Girl_Text_0, MSGBOX_DEFAULT
# 318 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Girl_5:
# 322 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Girl_Text_1, MSGBOX_DEFAULT
# 323 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Docker::
# 331 "data/maps/ParcelCoast/scripts.pory"
	lock
# 332 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 333 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Docker_2
# 338 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Docker_5
# 343 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Docker_Text_2, MSGBOX_DEFAULT
# 344 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Docker_2:
# 334 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Docker_Text_0, MSGBOX_DEFAULT
# 335 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Docker_5:
# 339 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Docker_Text_1, MSGBOX_DEFAULT
# 340 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_GullMan::
# 348 "data/maps/ParcelCoast/scripts.pory"
	lock
# 349 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 350 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOST, ParcelCoast_GullMan_5
ParcelCoast_GullMan_4:
# 360 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_ROOST_DONE, ParcelCoast_GullMan_3
# 366 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_GullMan_9
# 371 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_GullMan_16
# 376 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_5, MSGBOX_DEFAULT
# 377 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GullMan_2:
# 351 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOST_FOUND, ParcelCoast_GullMan_12
# 356 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_1, MSGBOX_DEFAULT
ParcelCoast_GullMan_11:
# 358 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GullMan_3:
# 361 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_2, MSGBOX_DEFAULT
# 362 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_Q_ROOST
# 363 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GullMan_5:
# 350 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_ROOST_DONE, ParcelCoast_GullMan_2
	goto ParcelCoast_GullMan_4

ParcelCoast_GullMan_9:
# 367 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_3, MSGBOX_DEFAULT
# 368 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GullMan_12:
# 352 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_0, MSGBOX_DEFAULT
# 353 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_BIG_PEARL, 1
# 354 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_Q_ROOST_DONE
	goto ParcelCoast_GullMan_11

ParcelCoast_GullMan_16:
# 372 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_4, MSGBOX_DEFAULT
# 373 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_ReturnFerry::
# 383 "data/maps/ParcelCoast/scripts.pory"
	lock
# 384 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 385 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_ReturnFerry_2
# 390 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_1, MSGBOX_YESNO
# 391 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_ReturnFerry_5
# 396 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 397 "data/maps/ParcelCoast/scripts.pory"
	playse SE_SHIP
# 398 "data/maps/ParcelCoast/scripts.pory"
	delay 40
# 399 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_ISLE, 15, 31
# 400 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end

ParcelCoast_ReturnFerry_2:
# 386 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_0, MSGBOX_DEFAULT
# 387 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_ReturnFerry_5:
# 392 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_2, MSGBOX_DEFAULT
# 393 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_MereholtAide::
# 406 "data/maps/ParcelCoast/scripts.pory"
	lock
# 407 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 408 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelCoast_MereholtAide_2
# 413 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_1, MSGBOX_DEFAULT
# 414 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_2, MSGBOX_YESNO
# 415 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_MereholtAide_5
# 420 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 421 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_BOARDROOM, 4, 2
# 422 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end

ParcelCoast_MereholtAide_2:
# 409 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_0, MSGBOX_DEFAULT
# 410 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_MereholtAide_5:
# 416 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_3, MSGBOX_DEFAULT
# 417 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_ItemA::
# 427 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_PEARL
	end


ParcelCoast_ItemB::
# 428 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_BIG_PEARL
	end


ParcelCoast_ItemMaxElixir::
# 429 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_MAX_ELIXIR
	end


ParcelCoast_SignQuay::
# 431 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_SignQuay_Text_0, MSGBOX_SIGN
	end


ParcelCoast_SignMarket::
# 435 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_SignMarket_Text_0, MSGBOX_SIGN
	end


ParcelCoast_Brage::
# 441 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_BRAGE, ParcelCoast_Brage_Text_0, ParcelCoast_Brage_Text_1, ParcelCoast_Brage_FirstWin
# 445 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 446 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Brage_3
ParcelCoast_Brage_1:
# 449 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Brage_8
ParcelCoast_Brage_6:
# 452 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Brage_13
ParcelCoast_Brage_11:
# 455 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Brage_18
ParcelCoast_Brage_16:
# 458 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Brage_2:
# 447 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R2
	goto ParcelCoast_Brage_1

ParcelCoast_Brage_3:
# 446 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R2
	goto_if 0, ParcelCoast_Brage_2
	goto ParcelCoast_Brage_1

ParcelCoast_Brage_7:
# 450 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R3
	goto ParcelCoast_Brage_6

ParcelCoast_Brage_8:
# 449 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R3
	goto_if 0, ParcelCoast_Brage_7
	goto ParcelCoast_Brage_6

ParcelCoast_Brage_12:
# 453 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R4
	goto ParcelCoast_Brage_11

ParcelCoast_Brage_13:
# 452 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R4
	goto_if 0, ParcelCoast_Brage_12
	goto ParcelCoast_Brage_11

ParcelCoast_Brage_17:
# 456 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R5
	goto ParcelCoast_Brage_16

ParcelCoast_Brage_18:
# 455 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R5
	goto_if 0, ParcelCoast_Brage_17
	goto ParcelCoast_Brage_16


ParcelCoast_Brage_FirstWin::
# 462 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_Text_2, MSGBOX_DEFAULT
# 463 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R2::
# 467 "data/maps/ParcelCoast/scripts.pory"
	lock
# 468 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 469 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_0, MSGBOX_YESNO
# 470 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R2_2
# 475 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R2, ParcelCoast_Brage_R2_Text_2
# 476 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_3, MSGBOX_DEFAULT
# 477 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R2_2:
# 471 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 472 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R3::
# 481 "data/maps/ParcelCoast/scripts.pory"
	lock
# 482 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 483 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R3_Text_0, MSGBOX_YESNO
# 484 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R3_2
# 489 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R3, ParcelCoast_Brage_R3_Text_1
# 490 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R3_Text_2, MSGBOX_DEFAULT
# 491 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R3_2:
# 485 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 486 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R4::
# 495 "data/maps/ParcelCoast/scripts.pory"
	lock
# 496 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 497 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R4_Text_0, MSGBOX_YESNO
# 498 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R4_2
# 503 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R4, ParcelCoast_Brage_R2_Text_2
# 504 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R4_Text_1, MSGBOX_DEFAULT
# 505 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R4_2:
# 499 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 500 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R5::
# 509 "data/maps/ParcelCoast/scripts.pory"
	lock
# 510 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 511 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R5_Text_0, MSGBOX_YESNO
# 512 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R5_2
# 517 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R5, ParcelCoast_Brage_R5_Text_1
# 518 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R5_Text_2, MSGBOX_DEFAULT
# 519 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R5_2:
# 513 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 514 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod::
# 523 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_FROD, ParcelCoast_Frod_Text_0, ParcelCoast_Frod_Text_1, ParcelCoast_Frod_FirstWin
# 527 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 528 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Frod_3
ParcelCoast_Frod_1:
# 531 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Frod_8
ParcelCoast_Frod_6:
# 534 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Frod_13
ParcelCoast_Frod_11:
# 537 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Frod_18
ParcelCoast_Frod_16:
# 540 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Frod_2:
# 529 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R2
	goto ParcelCoast_Frod_1

ParcelCoast_Frod_3:
# 528 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R2
	goto_if 0, ParcelCoast_Frod_2
	goto ParcelCoast_Frod_1

ParcelCoast_Frod_7:
# 532 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R3
	goto ParcelCoast_Frod_6

ParcelCoast_Frod_8:
# 531 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R3
	goto_if 0, ParcelCoast_Frod_7
	goto ParcelCoast_Frod_6

ParcelCoast_Frod_12:
# 535 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R4
	goto ParcelCoast_Frod_11

ParcelCoast_Frod_13:
# 534 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R4
	goto_if 0, ParcelCoast_Frod_12
	goto ParcelCoast_Frod_11

ParcelCoast_Frod_17:
# 538 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R5
	goto ParcelCoast_Frod_16

ParcelCoast_Frod_18:
# 537 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R5
	goto_if 0, ParcelCoast_Frod_17
	goto ParcelCoast_Frod_16


ParcelCoast_Frod_FirstWin::
# 544 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_Text_2, MSGBOX_DEFAULT
# 545 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R2::
# 549 "data/maps/ParcelCoast/scripts.pory"
	lock
# 550 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 551 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_0, MSGBOX_YESNO
# 552 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R2_2
# 557 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R2, ParcelCoast_Frod_R2_Text_2
# 558 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_3, MSGBOX_DEFAULT
# 559 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R2_2:
# 553 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 554 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R3::
# 563 "data/maps/ParcelCoast/scripts.pory"
	lock
# 564 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 565 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R3_Text_0, MSGBOX_YESNO
# 566 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R3_2
# 571 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R3, ParcelCoast_Frod_R2_Text_2
# 572 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R3_Text_1, MSGBOX_DEFAULT
# 573 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R3_2:
# 567 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 568 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R4::
# 577 "data/maps/ParcelCoast/scripts.pory"
	lock
# 578 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 579 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R4_Text_0, MSGBOX_YESNO
# 580 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R4_2
# 585 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R4, ParcelCoast_Frod_R4_Text_1
# 586 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R4_Text_2, MSGBOX_DEFAULT
# 587 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R4_2:
# 581 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 582 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R5::
# 591 "data/maps/ParcelCoast/scripts.pory"
	lock
# 592 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 593 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R5_Text_0, MSGBOX_YESNO
# 594 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R5_2
# 599 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R5, ParcelCoast_Frod_R5_Text_1
# 600 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R5_Text_2, MSGBOX_DEFAULT
# 601 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R5_2:
# 595 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 596 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda::
# 605 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_GYDA, ParcelCoast_Gyda_Text_0, ParcelCoast_Gyda_Text_1, ParcelCoast_Gyda_FirstWin
# 609 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 610 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Gyda_3
ParcelCoast_Gyda_1:
# 613 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Gyda_8
ParcelCoast_Gyda_6:
# 616 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Gyda_13
ParcelCoast_Gyda_11:
# 619 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Gyda_18
ParcelCoast_Gyda_16:
# 622 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Gyda_2:
# 611 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R2
	goto ParcelCoast_Gyda_1

ParcelCoast_Gyda_3:
# 610 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R2
	goto_if 0, ParcelCoast_Gyda_2
	goto ParcelCoast_Gyda_1

ParcelCoast_Gyda_7:
# 614 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R3
	goto ParcelCoast_Gyda_6

ParcelCoast_Gyda_8:
# 613 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R3
	goto_if 0, ParcelCoast_Gyda_7
	goto ParcelCoast_Gyda_6

ParcelCoast_Gyda_12:
# 617 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R4
	goto ParcelCoast_Gyda_11

ParcelCoast_Gyda_13:
# 616 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R4
	goto_if 0, ParcelCoast_Gyda_12
	goto ParcelCoast_Gyda_11

ParcelCoast_Gyda_17:
# 620 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R5
	goto ParcelCoast_Gyda_16

ParcelCoast_Gyda_18:
# 619 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R5
	goto_if 0, ParcelCoast_Gyda_17
	goto ParcelCoast_Gyda_16


ParcelCoast_Gyda_FirstWin::
# 626 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_Text_2, MSGBOX_DEFAULT
# 627 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R2::
# 631 "data/maps/ParcelCoast/scripts.pory"
	lock
# 632 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 633 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_0, MSGBOX_YESNO
# 634 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R2_2
# 639 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R2, ParcelCoast_Gyda_R2_Text_2
# 640 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_3, MSGBOX_DEFAULT
# 641 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R2_2:
# 635 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 636 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R3::
# 645 "data/maps/ParcelCoast/scripts.pory"
	lock
# 646 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 647 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R3_Text_0, MSGBOX_YESNO
# 648 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R3_2
# 653 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R3, ParcelCoast_Gyda_R3_Text_1
# 654 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R3_Text_2, MSGBOX_DEFAULT
# 655 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R3_2:
# 649 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 650 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R4::
# 659 "data/maps/ParcelCoast/scripts.pory"
	lock
# 660 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 661 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R4_Text_0, MSGBOX_YESNO
# 662 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R4_2
# 667 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R4, ParcelCoast_Gyda_R3_Text_1
# 668 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R4_Text_1, MSGBOX_DEFAULT
# 669 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R4_2:
# 663 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 664 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R5::
# 673 "data/maps/ParcelCoast/scripts.pory"
	lock
# 674 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 675 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R5_Text_0, MSGBOX_YESNO
# 676 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R5_2
# 681 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R5, ParcelCoast_Gyda_R3_Text_1
# 682 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R5_Text_1, MSGBOX_DEFAULT
# 683 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R5_2:
# 677 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 678 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar::
# 687 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_HROAR, ParcelCoast_Hroar_Text_0, ParcelCoast_Hroar_Text_1, ParcelCoast_Hroar_FirstWin
# 691 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 692 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Hroar_3
ParcelCoast_Hroar_1:
# 695 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Hroar_8
ParcelCoast_Hroar_6:
# 698 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Hroar_13
ParcelCoast_Hroar_11:
# 701 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Hroar_18
ParcelCoast_Hroar_16:
# 704 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Hroar_2:
# 693 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R2
	goto ParcelCoast_Hroar_1

ParcelCoast_Hroar_3:
# 692 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R2
	goto_if 0, ParcelCoast_Hroar_2
	goto ParcelCoast_Hroar_1

ParcelCoast_Hroar_7:
# 696 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R3
	goto ParcelCoast_Hroar_6

ParcelCoast_Hroar_8:
# 695 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R3
	goto_if 0, ParcelCoast_Hroar_7
	goto ParcelCoast_Hroar_6

ParcelCoast_Hroar_12:
# 699 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R4
	goto ParcelCoast_Hroar_11

ParcelCoast_Hroar_13:
# 698 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R4
	goto_if 0, ParcelCoast_Hroar_12
	goto ParcelCoast_Hroar_11

ParcelCoast_Hroar_17:
# 702 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R5
	goto ParcelCoast_Hroar_16

ParcelCoast_Hroar_18:
# 701 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R5
	goto_if 0, ParcelCoast_Hroar_17
	goto ParcelCoast_Hroar_16


ParcelCoast_Hroar_FirstWin::
# 708 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_Text_2, MSGBOX_DEFAULT
# 709 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R2::
# 713 "data/maps/ParcelCoast/scripts.pory"
	lock
# 714 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 715 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_0, MSGBOX_YESNO
# 716 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R2_2
# 721 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R2, ParcelCoast_Hroar_R2_Text_2
# 722 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_3, MSGBOX_DEFAULT
# 723 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R2_2:
# 717 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 718 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R3::
# 727 "data/maps/ParcelCoast/scripts.pory"
	lock
# 728 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 729 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R3_Text_0, MSGBOX_YESNO
# 730 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R3_2
# 735 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R3, ParcelCoast_Hroar_R2_Text_2
# 736 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R3_Text_1, MSGBOX_DEFAULT
# 737 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R3_2:
# 731 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 732 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R4::
# 741 "data/maps/ParcelCoast/scripts.pory"
	lock
# 742 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 743 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R4_Text_0, MSGBOX_YESNO
# 744 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R4_2
# 749 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R4, ParcelCoast_Hroar_R4_Text_1
# 750 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R4_Text_2, MSGBOX_DEFAULT
# 751 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R4_2:
# 745 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 746 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R5::
# 755 "data/maps/ParcelCoast/scripts.pory"
	lock
# 756 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 757 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R5_Text_0, MSGBOX_YESNO
# 758 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R5_2
# 763 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R5, ParcelCoast_Hroar_R5_Text_1
# 764 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R5_Text_2, MSGBOX_DEFAULT
# 765 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R5_2:
# 759 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 760 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid::
# 769 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_JORID, ParcelCoast_Jorid_Text_0, ParcelCoast_Jorid_Text_1, ParcelCoast_Jorid_FirstWin
# 773 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 774 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Jorid_3
ParcelCoast_Jorid_1:
# 777 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Jorid_8
ParcelCoast_Jorid_6:
# 780 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Jorid_13
ParcelCoast_Jorid_11:
# 783 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Jorid_18
ParcelCoast_Jorid_16:
# 786 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Jorid_2:
# 775 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R2
	goto ParcelCoast_Jorid_1

ParcelCoast_Jorid_3:
# 774 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R2
	goto_if 0, ParcelCoast_Jorid_2
	goto ParcelCoast_Jorid_1

ParcelCoast_Jorid_7:
# 778 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R3
	goto ParcelCoast_Jorid_6

ParcelCoast_Jorid_8:
# 777 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R3
	goto_if 0, ParcelCoast_Jorid_7
	goto ParcelCoast_Jorid_6

ParcelCoast_Jorid_12:
# 781 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R4
	goto ParcelCoast_Jorid_11

ParcelCoast_Jorid_13:
# 780 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R4
	goto_if 0, ParcelCoast_Jorid_12
	goto ParcelCoast_Jorid_11

ParcelCoast_Jorid_17:
# 784 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R5
	goto ParcelCoast_Jorid_16

ParcelCoast_Jorid_18:
# 783 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R5
	goto_if 0, ParcelCoast_Jorid_17
	goto ParcelCoast_Jorid_16


ParcelCoast_Jorid_FirstWin::
# 790 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_Text_2, MSGBOX_DEFAULT
# 791 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R2::
# 795 "data/maps/ParcelCoast/scripts.pory"
	lock
# 796 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 797 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_0, MSGBOX_YESNO
# 798 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R2_2
# 803 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R2, ParcelCoast_Jorid_R2_Text_2
# 804 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_3, MSGBOX_DEFAULT
# 805 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R2_2:
# 799 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 800 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R3::
# 809 "data/maps/ParcelCoast/scripts.pory"
	lock
# 810 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 811 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R3_Text_0, MSGBOX_YESNO
# 812 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R3_2
# 817 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R3, ParcelCoast_Jorid_R3_Text_1
# 818 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R3_Text_2, MSGBOX_DEFAULT
# 819 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R3_2:
# 813 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 814 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R4::
# 823 "data/maps/ParcelCoast/scripts.pory"
	lock
# 824 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 825 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R4_Text_0, MSGBOX_YESNO
# 826 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R4_2
# 831 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R4, ParcelCoast_Jorid_R4_Text_1
# 832 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R4_Text_2, MSGBOX_DEFAULT
# 833 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R4_2:
# 827 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 828 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R5::
# 837 "data/maps/ParcelCoast/scripts.pory"
	lock
# 838 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 839 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R5_Text_0, MSGBOX_YESNO
# 840 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R5_2
# 845 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R5, ParcelCoast_Jorid_R4_Text_1
# 846 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R5_Text_1, MSGBOX_DEFAULT
# 847 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R5_2:
# 841 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 842 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil::
# 851 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_KETIL, ParcelCoast_Ketil_Text_0, ParcelCoast_Ketil_Text_1, ParcelCoast_Ketil_FirstWin
# 855 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 856 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Ketil_3
ParcelCoast_Ketil_1:
# 859 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Ketil_8
ParcelCoast_Ketil_6:
# 862 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Ketil_13
ParcelCoast_Ketil_11:
# 865 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Ketil_18
ParcelCoast_Ketil_16:
# 868 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Ketil_2:
# 857 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R2
	goto ParcelCoast_Ketil_1

ParcelCoast_Ketil_3:
# 856 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R2
	goto_if 0, ParcelCoast_Ketil_2
	goto ParcelCoast_Ketil_1

ParcelCoast_Ketil_7:
# 860 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R3
	goto ParcelCoast_Ketil_6

ParcelCoast_Ketil_8:
# 859 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R3
	goto_if 0, ParcelCoast_Ketil_7
	goto ParcelCoast_Ketil_6

ParcelCoast_Ketil_12:
# 863 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R4
	goto ParcelCoast_Ketil_11

ParcelCoast_Ketil_13:
# 862 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R4
	goto_if 0, ParcelCoast_Ketil_12
	goto ParcelCoast_Ketil_11

ParcelCoast_Ketil_17:
# 866 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R5
	goto ParcelCoast_Ketil_16

ParcelCoast_Ketil_18:
# 865 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R5
	goto_if 0, ParcelCoast_Ketil_17
	goto ParcelCoast_Ketil_16


ParcelCoast_Ketil_FirstWin::
# 872 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_Text_2, MSGBOX_DEFAULT
# 873 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R2::
# 877 "data/maps/ParcelCoast/scripts.pory"
	lock
# 878 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 879 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_0, MSGBOX_YESNO
# 880 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R2_2
# 885 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R2, ParcelCoast_Ketil_R2_Text_2
# 886 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_3, MSGBOX_DEFAULT
# 887 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R2_2:
# 881 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 882 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R3::
# 891 "data/maps/ParcelCoast/scripts.pory"
	lock
# 892 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 893 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R3_Text_0, MSGBOX_YESNO
# 894 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R3_2
# 899 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R3, ParcelCoast_Ketil_R3_Text_1
# 900 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R3_Text_2, MSGBOX_DEFAULT
# 901 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R3_2:
# 895 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 896 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R4::
# 905 "data/maps/ParcelCoast/scripts.pory"
	lock
# 906 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 907 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R4_Text_0, MSGBOX_YESNO
# 908 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R4_2
# 913 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R4, ParcelCoast_Ketil_R4_Text_1
# 914 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R4_Text_2, MSGBOX_DEFAULT
# 915 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R4_2:
# 909 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 910 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R5::
# 919 "data/maps/ParcelCoast/scripts.pory"
	lock
# 920 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 921 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R5_Text_0, MSGBOX_YESNO
# 922 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R5_2
# 927 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R5, ParcelCoast_Ketil_R5_Text_1
# 928 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R5_Text_2, MSGBOX_DEFAULT
# 929 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R5_2:
# 923 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 924 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva::
# 933 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_LIVA, ParcelCoast_Liva_Text_0, ParcelCoast_Liva_Text_1, ParcelCoast_Liva_FirstWin
# 937 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 938 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Liva_3
ParcelCoast_Liva_1:
# 941 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Liva_8
ParcelCoast_Liva_6:
# 944 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Liva_13
ParcelCoast_Liva_11:
# 947 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Liva_18
ParcelCoast_Liva_16:
# 950 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Liva_2:
# 939 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R2
	goto ParcelCoast_Liva_1

ParcelCoast_Liva_3:
# 938 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R2
	goto_if 0, ParcelCoast_Liva_2
	goto ParcelCoast_Liva_1

ParcelCoast_Liva_7:
# 942 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R3
	goto ParcelCoast_Liva_6

ParcelCoast_Liva_8:
# 941 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R3
	goto_if 0, ParcelCoast_Liva_7
	goto ParcelCoast_Liva_6

ParcelCoast_Liva_12:
# 945 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R4
	goto ParcelCoast_Liva_11

ParcelCoast_Liva_13:
# 944 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R4
	goto_if 0, ParcelCoast_Liva_12
	goto ParcelCoast_Liva_11

ParcelCoast_Liva_17:
# 948 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R5
	goto ParcelCoast_Liva_16

ParcelCoast_Liva_18:
# 947 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R5
	goto_if 0, ParcelCoast_Liva_17
	goto ParcelCoast_Liva_16


ParcelCoast_Liva_FirstWin::
# 954 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_Text_2, MSGBOX_DEFAULT
# 955 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R2::
# 959 "data/maps/ParcelCoast/scripts.pory"
	lock
# 960 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 961 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_0, MSGBOX_YESNO
# 962 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R2_2
# 967 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R2, ParcelCoast_Liva_R2_Text_2
# 968 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_3, MSGBOX_DEFAULT
# 969 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R2_2:
# 963 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 964 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R3::
# 973 "data/maps/ParcelCoast/scripts.pory"
	lock
# 974 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 975 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R3_Text_0, MSGBOX_YESNO
# 976 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R3_2
# 981 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R3, ParcelCoast_Liva_R3_Text_1
# 982 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R3_Text_2, MSGBOX_DEFAULT
# 983 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R3_2:
# 977 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 978 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R4::
# 987 "data/maps/ParcelCoast/scripts.pory"
	lock
# 988 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 989 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R4_Text_0, MSGBOX_YESNO
# 990 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R4_2
# 995 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R4, ParcelCoast_Liva_R4_Text_1
# 996 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R4_Text_2, MSGBOX_DEFAULT
# 997 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R4_2:
# 991 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 992 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R5::
# 1001 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1002 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1003 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R5_Text_0, MSGBOX_YESNO
# 1004 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R5_2
# 1009 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R5, ParcelCoast_Liva_R5_Text_1
# 1010 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R5_Text_2, MSGBOX_DEFAULT
# 1011 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R5_2:
# 1005 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 1006 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus::
# 1015 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_MAGNUS, ParcelCoast_Magnus_Text_0, ParcelCoast_Magnus_Text_1, ParcelCoast_Magnus_FirstWin
# 1019 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1020 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Magnus_3
ParcelCoast_Magnus_1:
# 1023 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Magnus_8
ParcelCoast_Magnus_6:
# 1026 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Magnus_13
ParcelCoast_Magnus_11:
# 1029 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Magnus_18
ParcelCoast_Magnus_16:
# 1032 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Magnus_2:
# 1021 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R2
	goto ParcelCoast_Magnus_1

ParcelCoast_Magnus_3:
# 1020 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R2
	goto_if 0, ParcelCoast_Magnus_2
	goto ParcelCoast_Magnus_1

ParcelCoast_Magnus_7:
# 1024 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R3
	goto ParcelCoast_Magnus_6

ParcelCoast_Magnus_8:
# 1023 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R3
	goto_if 0, ParcelCoast_Magnus_7
	goto ParcelCoast_Magnus_6

ParcelCoast_Magnus_12:
# 1027 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R4
	goto ParcelCoast_Magnus_11

ParcelCoast_Magnus_13:
# 1026 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R4
	goto_if 0, ParcelCoast_Magnus_12
	goto ParcelCoast_Magnus_11

ParcelCoast_Magnus_17:
# 1030 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R5
	goto ParcelCoast_Magnus_16

ParcelCoast_Magnus_18:
# 1029 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R5
	goto_if 0, ParcelCoast_Magnus_17
	goto ParcelCoast_Magnus_16


ParcelCoast_Magnus_FirstWin::
# 1036 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_Text_2, MSGBOX_DEFAULT
# 1037 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R2::
# 1041 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1042 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1043 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_0, MSGBOX_YESNO
# 1044 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R2_2
# 1049 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R2, ParcelCoast_Magnus_R2_Text_2
# 1050 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_3, MSGBOX_DEFAULT
# 1051 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R2_2:
# 1045 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 1046 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R3::
# 1055 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1056 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1057 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R3_Text_0, MSGBOX_YESNO
# 1058 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R3_2
# 1063 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R3, ParcelCoast_Magnus_R3_Text_1
# 1064 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R3_Text_2, MSGBOX_DEFAULT
# 1065 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R3_2:
# 1059 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 1060 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R4::
# 1069 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1070 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1071 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R4_Text_0, MSGBOX_YESNO
# 1072 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R4_2
# 1077 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R4, ParcelCoast_Magnus_R4_Text_1
# 1078 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R4_Text_2, MSGBOX_DEFAULT
# 1079 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R4_2:
# 1073 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 1074 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R5::
# 1083 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1084 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1085 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R5_Text_0, MSGBOX_YESNO
# 1086 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R5_2
# 1091 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R5, ParcelCoast_Magnus_R5_Text_1
# 1092 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R5_Text_2, MSGBOX_DEFAULT
# 1093 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R5_2:
# 1087 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 1088 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai::
# 1097 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_NIKOLAI, ParcelCoast_Nikolai_Text_0, ParcelCoast_Nikolai_Text_1, ParcelCoast_Nikolai_FirstWin
# 1101 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1102 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Nikolai_3
ParcelCoast_Nikolai_1:
# 1105 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Nikolai_8
ParcelCoast_Nikolai_6:
# 1108 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Nikolai_13
ParcelCoast_Nikolai_11:
# 1111 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Nikolai_18
ParcelCoast_Nikolai_16:
# 1114 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Nikolai_2:
# 1103 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R2
	goto ParcelCoast_Nikolai_1

ParcelCoast_Nikolai_3:
# 1102 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R2
	goto_if 0, ParcelCoast_Nikolai_2
	goto ParcelCoast_Nikolai_1

ParcelCoast_Nikolai_7:
# 1106 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R3
	goto ParcelCoast_Nikolai_6

ParcelCoast_Nikolai_8:
# 1105 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R3
	goto_if 0, ParcelCoast_Nikolai_7
	goto ParcelCoast_Nikolai_6

ParcelCoast_Nikolai_12:
# 1109 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R4
	goto ParcelCoast_Nikolai_11

ParcelCoast_Nikolai_13:
# 1108 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R4
	goto_if 0, ParcelCoast_Nikolai_12
	goto ParcelCoast_Nikolai_11

ParcelCoast_Nikolai_17:
# 1112 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R5
	goto ParcelCoast_Nikolai_16

ParcelCoast_Nikolai_18:
# 1111 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R5
	goto_if 0, ParcelCoast_Nikolai_17
	goto ParcelCoast_Nikolai_16


ParcelCoast_Nikolai_FirstWin::
# 1118 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_Text_2, MSGBOX_DEFAULT
# 1119 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R2::
# 1123 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1124 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1125 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_0, MSGBOX_YESNO
# 1126 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R2_2
# 1131 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R2, ParcelCoast_Nikolai_R2_Text_2
# 1132 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_3, MSGBOX_DEFAULT
# 1133 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R2_2:
# 1127 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1128 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R3::
# 1137 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1138 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1139 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R3_Text_0, MSGBOX_YESNO
# 1140 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R3_2
# 1145 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R3, ParcelCoast_Nikolai_R2_Text_2
# 1146 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R3_Text_1, MSGBOX_DEFAULT
# 1147 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R3_2:
# 1141 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1142 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R4::
# 1151 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1152 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1153 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R4_Text_0, MSGBOX_YESNO
# 1154 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R4_2
# 1159 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R4, ParcelCoast_Nikolai_R4_Text_1
# 1160 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R4_Text_2, MSGBOX_DEFAULT
# 1161 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R4_2:
# 1155 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1156 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R5::
# 1165 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1166 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1167 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R5_Text_0, MSGBOX_YESNO
# 1168 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R5_2
# 1173 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R5, ParcelCoast_Nikolai_R5_Text_1
# 1174 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R5_Text_2, MSGBOX_DEFAULT
# 1175 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R5_2:
# 1169 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1170 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda::
# 1179 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_ODA, ParcelCoast_Oda_Text_0, ParcelCoast_Oda_Text_1, ParcelCoast_Oda_FirstWin
# 1183 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1184 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Oda_3
ParcelCoast_Oda_1:
# 1187 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Oda_8
ParcelCoast_Oda_6:
# 1190 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Oda_13
ParcelCoast_Oda_11:
# 1193 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Oda_18
ParcelCoast_Oda_16:
# 1196 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Oda_2:
# 1185 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R2
	goto ParcelCoast_Oda_1

ParcelCoast_Oda_3:
# 1184 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R2
	goto_if 0, ParcelCoast_Oda_2
	goto ParcelCoast_Oda_1

ParcelCoast_Oda_7:
# 1188 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R3
	goto ParcelCoast_Oda_6

ParcelCoast_Oda_8:
# 1187 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R3
	goto_if 0, ParcelCoast_Oda_7
	goto ParcelCoast_Oda_6

ParcelCoast_Oda_12:
# 1191 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R4
	goto ParcelCoast_Oda_11

ParcelCoast_Oda_13:
# 1190 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R4
	goto_if 0, ParcelCoast_Oda_12
	goto ParcelCoast_Oda_11

ParcelCoast_Oda_17:
# 1194 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R5
	goto ParcelCoast_Oda_16

ParcelCoast_Oda_18:
# 1193 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R5
	goto_if 0, ParcelCoast_Oda_17
	goto ParcelCoast_Oda_16


ParcelCoast_Oda_FirstWin::
# 1200 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_Text_2, MSGBOX_DEFAULT
# 1201 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R2::
# 1205 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1206 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1207 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_0, MSGBOX_YESNO
# 1208 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R2_2
# 1213 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R2, ParcelCoast_Oda_R2_Text_2
# 1214 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_3, MSGBOX_DEFAULT
# 1215 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R2_2:
# 1209 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1210 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R3::
# 1219 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1220 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1221 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R3_Text_0, MSGBOX_YESNO
# 1222 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R3_2
# 1227 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R3, ParcelCoast_Oda_R2_Text_2
# 1228 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R3_Text_1, MSGBOX_DEFAULT
# 1229 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R3_2:
# 1223 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1224 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R4::
# 1233 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1234 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1235 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R4_Text_0, MSGBOX_YESNO
# 1236 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R4_2
# 1241 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R4, ParcelCoast_Oda_R4_Text_1
# 1242 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R4_Text_2, MSGBOX_DEFAULT
# 1243 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R4_2:
# 1237 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1238 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R5::
# 1247 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1248 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1249 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R5_Text_0, MSGBOX_YESNO
# 1250 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R5_2
# 1255 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R5, ParcelCoast_Oda_R5_Text_1
# 1256 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R5_Text_2, MSGBOX_DEFAULT
# 1257 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R5_2:
# 1251 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1252 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter::
# 1261 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_PETTER, ParcelCoast_Petter_Text_0, ParcelCoast_Petter_Text_1, ParcelCoast_Petter_FirstWin
# 1265 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1266 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Petter_3
ParcelCoast_Petter_1:
# 1269 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Petter_8
ParcelCoast_Petter_6:
# 1272 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Petter_13
ParcelCoast_Petter_11:
# 1275 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Petter_18
ParcelCoast_Petter_16:
# 1278 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Petter_2:
# 1267 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R2
	goto ParcelCoast_Petter_1

ParcelCoast_Petter_3:
# 1266 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R2
	goto_if 0, ParcelCoast_Petter_2
	goto ParcelCoast_Petter_1

ParcelCoast_Petter_7:
# 1270 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R3
	goto ParcelCoast_Petter_6

ParcelCoast_Petter_8:
# 1269 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R3
	goto_if 0, ParcelCoast_Petter_7
	goto ParcelCoast_Petter_6

ParcelCoast_Petter_12:
# 1273 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R4
	goto ParcelCoast_Petter_11

ParcelCoast_Petter_13:
# 1272 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R4
	goto_if 0, ParcelCoast_Petter_12
	goto ParcelCoast_Petter_11

ParcelCoast_Petter_17:
# 1276 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R5
	goto ParcelCoast_Petter_16

ParcelCoast_Petter_18:
# 1275 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R5
	goto_if 0, ParcelCoast_Petter_17
	goto ParcelCoast_Petter_16


ParcelCoast_Petter_FirstWin::
# 1282 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_Text_2, MSGBOX_DEFAULT
# 1283 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R2::
# 1287 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1288 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1289 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_0, MSGBOX_YESNO
# 1290 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R2_2
# 1295 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R2, ParcelCoast_Petter_R2_Text_2
# 1296 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_3, MSGBOX_DEFAULT
# 1297 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R2_2:
# 1291 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1292 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R3::
# 1301 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1302 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1303 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R3_Text_0, MSGBOX_YESNO
# 1304 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R3_2
# 1309 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R3, ParcelCoast_Petter_R3_Text_1
# 1310 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R3_Text_2, MSGBOX_DEFAULT
# 1311 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R3_2:
# 1305 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1306 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R4::
# 1315 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1316 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1317 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R4_Text_0, MSGBOX_YESNO
# 1318 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R4_2
# 1323 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R4, ParcelCoast_Petter_R4_Text_1
# 1324 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R4_Text_2, MSGBOX_DEFAULT
# 1325 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R4_2:
# 1319 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1320 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R5::
# 1329 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1330 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1331 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R5_Text_0, MSGBOX_YESNO
# 1332 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R5_2
# 1337 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R5, ParcelCoast_Petter_R3_Text_1
# 1338 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R5_Text_1, MSGBOX_DEFAULT
# 1339 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R5_2:
# 1333 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1334 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar::
# 1343 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_RAGNAR, ParcelCoast_Ragnar_Text_0, ParcelCoast_Ragnar_Text_1, ParcelCoast_Ragnar_FirstWin
# 1347 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1348 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Ragnar_3
ParcelCoast_Ragnar_1:
# 1351 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Ragnar_8
ParcelCoast_Ragnar_6:
# 1354 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Ragnar_13
ParcelCoast_Ragnar_11:
# 1357 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Ragnar_18
ParcelCoast_Ragnar_16:
# 1360 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Ragnar_2:
# 1349 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R2
	goto ParcelCoast_Ragnar_1

ParcelCoast_Ragnar_3:
# 1348 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R2
	goto_if 0, ParcelCoast_Ragnar_2
	goto ParcelCoast_Ragnar_1

ParcelCoast_Ragnar_7:
# 1352 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R3
	goto ParcelCoast_Ragnar_6

ParcelCoast_Ragnar_8:
# 1351 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R3
	goto_if 0, ParcelCoast_Ragnar_7
	goto ParcelCoast_Ragnar_6

ParcelCoast_Ragnar_12:
# 1355 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R4
	goto ParcelCoast_Ragnar_11

ParcelCoast_Ragnar_13:
# 1354 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R4
	goto_if 0, ParcelCoast_Ragnar_12
	goto ParcelCoast_Ragnar_11

ParcelCoast_Ragnar_17:
# 1358 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R5
	goto ParcelCoast_Ragnar_16

ParcelCoast_Ragnar_18:
# 1357 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R5
	goto_if 0, ParcelCoast_Ragnar_17
	goto ParcelCoast_Ragnar_16


ParcelCoast_Ragnar_FirstWin::
# 1364 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_Text_2, MSGBOX_DEFAULT
# 1365 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R2::
# 1369 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1370 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1371 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_0, MSGBOX_YESNO
# 1372 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R2_2
# 1377 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R2, ParcelCoast_Ragnar_R2_Text_2
# 1378 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_3, MSGBOX_DEFAULT
# 1379 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R2_2:
# 1373 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1374 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R3::
# 1383 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1384 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1385 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R3_Text_0, MSGBOX_YESNO
# 1386 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R3_2
# 1391 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R3, ParcelCoast_Ragnar_R3_Text_1
# 1392 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R3_Text_2, MSGBOX_DEFAULT
# 1393 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R3_2:
# 1387 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1388 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R4::
# 1397 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1398 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1399 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R4_Text_0, MSGBOX_YESNO
# 1400 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R4_2
# 1405 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R4, ParcelCoast_Ragnar_R4_Text_1
# 1406 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R4_Text_2, MSGBOX_DEFAULT
# 1407 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R4_2:
# 1401 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1402 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R5::
# 1411 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1412 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1413 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R5_Text_0, MSGBOX_YESNO
# 1414 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R5_2
# 1419 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R5, ParcelCoast_Ragnar_R3_Text_1
# 1420 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R5_Text_1, MSGBOX_DEFAULT
# 1421 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R5_2:
# 1415 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1416 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor::
# 1425 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_SOLVOR, ParcelCoast_Solvor_Text_0, ParcelCoast_Solvor_Text_1, ParcelCoast_Solvor_FirstWin
# 1429 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1430 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Solvor_3
ParcelCoast_Solvor_1:
# 1433 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Solvor_8
ParcelCoast_Solvor_6:
# 1436 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Solvor_13
ParcelCoast_Solvor_11:
# 1439 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Solvor_18
ParcelCoast_Solvor_16:
# 1442 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Solvor_2:
# 1431 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R2
	goto ParcelCoast_Solvor_1

ParcelCoast_Solvor_3:
# 1430 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R2
	goto_if 0, ParcelCoast_Solvor_2
	goto ParcelCoast_Solvor_1

ParcelCoast_Solvor_7:
# 1434 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R3
	goto ParcelCoast_Solvor_6

ParcelCoast_Solvor_8:
# 1433 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R3
	goto_if 0, ParcelCoast_Solvor_7
	goto ParcelCoast_Solvor_6

ParcelCoast_Solvor_12:
# 1437 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R4
	goto ParcelCoast_Solvor_11

ParcelCoast_Solvor_13:
# 1436 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R4
	goto_if 0, ParcelCoast_Solvor_12
	goto ParcelCoast_Solvor_11

ParcelCoast_Solvor_17:
# 1440 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R5
	goto ParcelCoast_Solvor_16

ParcelCoast_Solvor_18:
# 1439 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R5
	goto_if 0, ParcelCoast_Solvor_17
	goto ParcelCoast_Solvor_16


ParcelCoast_Solvor_FirstWin::
# 1446 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_Text_2, MSGBOX_DEFAULT
# 1447 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R2::
# 1451 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1452 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1453 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_0, MSGBOX_YESNO
# 1454 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R2_2
# 1459 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R2, ParcelCoast_Solvor_R2_Text_2
# 1460 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_3, MSGBOX_DEFAULT
# 1461 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R2_2:
# 1455 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1456 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R3::
# 1465 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1466 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1467 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R3_Text_0, MSGBOX_YESNO
# 1468 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R3_2
# 1473 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R3, ParcelCoast_Solvor_R3_Text_1
# 1474 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R3_Text_2, MSGBOX_DEFAULT
# 1475 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R3_2:
# 1469 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1470 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R4::
# 1479 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1480 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1481 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R4_Text_0, MSGBOX_YESNO
# 1482 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R4_2
# 1487 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R4, ParcelCoast_Solvor_R3_Text_1
# 1488 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R4_Text_1, MSGBOX_DEFAULT
# 1489 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R4_2:
# 1483 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1484 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R5::
# 1493 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1494 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1495 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R5_Text_0, MSGBOX_YESNO
# 1496 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R5_2
# 1501 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R5, ParcelCoast_Solvor_R5_Text_1
# 1502 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R5_Text_2, MSGBOX_DEFAULT
# 1503 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R5_2:
# 1497 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1498 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore::
# 1507 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_TORE, ParcelCoast_Tore_Text_0, ParcelCoast_Tore_Text_1, ParcelCoast_Tore_FirstWin
# 1511 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1512 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Tore_3
ParcelCoast_Tore_1:
# 1515 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Tore_8
ParcelCoast_Tore_6:
# 1518 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Tore_13
ParcelCoast_Tore_11:
# 1521 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Tore_18
ParcelCoast_Tore_16:
# 1524 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Tore_2:
# 1513 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R2
	goto ParcelCoast_Tore_1

ParcelCoast_Tore_3:
# 1512 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R2
	goto_if 0, ParcelCoast_Tore_2
	goto ParcelCoast_Tore_1

ParcelCoast_Tore_7:
# 1516 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R3
	goto ParcelCoast_Tore_6

ParcelCoast_Tore_8:
# 1515 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R3
	goto_if 0, ParcelCoast_Tore_7
	goto ParcelCoast_Tore_6

ParcelCoast_Tore_12:
# 1519 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R4
	goto ParcelCoast_Tore_11

ParcelCoast_Tore_13:
# 1518 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R4
	goto_if 0, ParcelCoast_Tore_12
	goto ParcelCoast_Tore_11

ParcelCoast_Tore_17:
# 1522 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R5
	goto ParcelCoast_Tore_16

ParcelCoast_Tore_18:
# 1521 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R5
	goto_if 0, ParcelCoast_Tore_17
	goto ParcelCoast_Tore_16


ParcelCoast_Tore_FirstWin::
# 1528 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_Text_2, MSGBOX_DEFAULT
# 1529 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R2::
# 1533 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1534 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1535 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_0, MSGBOX_YESNO
# 1536 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R2_2
# 1541 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R2, ParcelCoast_Tore_R2_Text_2
# 1542 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_3, MSGBOX_DEFAULT
# 1543 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R2_2:
# 1537 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1538 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R3::
# 1547 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1548 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1549 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R3_Text_0, MSGBOX_YESNO
# 1550 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R3_2
# 1555 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R3, ParcelCoast_Tore_R3_Text_1
# 1556 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R3_Text_2, MSGBOX_DEFAULT
# 1557 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R3_2:
# 1551 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1552 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R4::
# 1561 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1562 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1563 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R4_Text_0, MSGBOX_YESNO
# 1564 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R4_2
# 1569 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R4, ParcelCoast_Tore_R4_Text_1
# 1570 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R4_Text_2, MSGBOX_DEFAULT
# 1571 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R4_2:
# 1565 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1566 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R5::
# 1575 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1576 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1577 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R5_Text_0, MSGBOX_YESNO
# 1578 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R5_2
# 1583 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R5, ParcelCoast_Tore_R2_Text_2
# 1584 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R5_Text_1, MSGBOX_DEFAULT
# 1585 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R5_2:
# 1579 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1580 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge::
# 1591 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_HELGE, ParcelCoast_T_Helge_Text_0, ParcelCoast_T_Helge_Text_1, ParcelCoast_T_Helge_FirstWin
# 1595 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1596 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_T_Helge_3
ParcelCoast_T_Helge_1:
# 1599 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_T_Helge_8
ParcelCoast_T_Helge_6:
# 1602 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_T_Helge_13
ParcelCoast_T_Helge_11:
# 1605 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_T_Helge_18
ParcelCoast_T_Helge_16:
# 1608 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_T_Helge_2:
# 1597 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R2
	goto ParcelCoast_T_Helge_1

ParcelCoast_T_Helge_3:
# 1596 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R2
	goto_if 0, ParcelCoast_T_Helge_2
	goto ParcelCoast_T_Helge_1

ParcelCoast_T_Helge_7:
# 1600 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R3
	goto ParcelCoast_T_Helge_6

ParcelCoast_T_Helge_8:
# 1599 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R3
	goto_if 0, ParcelCoast_T_Helge_7
	goto ParcelCoast_T_Helge_6

ParcelCoast_T_Helge_12:
# 1603 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R4
	goto ParcelCoast_T_Helge_11

ParcelCoast_T_Helge_13:
# 1602 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R4
	goto_if 0, ParcelCoast_T_Helge_12
	goto ParcelCoast_T_Helge_11

ParcelCoast_T_Helge_17:
# 1606 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R5
	goto ParcelCoast_T_Helge_16

ParcelCoast_T_Helge_18:
# 1605 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R5
	goto_if 0, ParcelCoast_T_Helge_17
	goto ParcelCoast_T_Helge_16


ParcelCoast_T_Helge_FirstWin::
# 1612 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_Text_2, MSGBOX_DEFAULT
# 1613 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R2::
# 1617 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1618 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1619 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_0, MSGBOX_YESNO
# 1620 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R2_2
# 1625 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R2, ParcelCoast_T_Helge_R2_Text_2
# 1626 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_3, MSGBOX_DEFAULT
# 1627 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R2_2:
# 1621 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1622 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R3::
# 1631 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1632 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1633 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R3_Text_0, MSGBOX_YESNO
# 1634 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R3_2
# 1639 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R3, ParcelCoast_T_Helge_R3_Text_1
# 1640 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R3_Text_2, MSGBOX_DEFAULT
# 1641 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R3_2:
# 1635 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1636 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R4::
# 1645 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1646 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1647 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R4_Text_0, MSGBOX_YESNO
# 1648 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R4_2
# 1653 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R4, ParcelCoast_T_Helge_R4_Text_1
# 1654 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R4_Text_2, MSGBOX_DEFAULT
# 1655 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R4_2:
# 1649 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1650 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R5::
# 1659 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1660 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1661 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R5_Text_0, MSGBOX_YESNO
# 1662 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R5_2
# 1667 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R5, ParcelCoast_T_Helge_R4_Text_1
# 1668 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R5_Text_1, MSGBOX_DEFAULT
# 1669 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R5_2:
# 1663 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1664 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton::
# 1673 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_ANTON, ParcelCoast_T_Anton_Text_0, ParcelCoast_T_Anton_Text_1, ParcelCoast_T_Anton_FirstWin
# 1677 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1678 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_T_Anton_3
ParcelCoast_T_Anton_1:
# 1681 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_T_Anton_8
ParcelCoast_T_Anton_6:
# 1684 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_T_Anton_13
ParcelCoast_T_Anton_11:
# 1687 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_T_Anton_18
ParcelCoast_T_Anton_16:
# 1690 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_T_Anton_2:
# 1679 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R2
	goto ParcelCoast_T_Anton_1

ParcelCoast_T_Anton_3:
# 1678 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R2
	goto_if 0, ParcelCoast_T_Anton_2
	goto ParcelCoast_T_Anton_1

ParcelCoast_T_Anton_7:
# 1682 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R3
	goto ParcelCoast_T_Anton_6

ParcelCoast_T_Anton_8:
# 1681 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R3
	goto_if 0, ParcelCoast_T_Anton_7
	goto ParcelCoast_T_Anton_6

ParcelCoast_T_Anton_12:
# 1685 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R4
	goto ParcelCoast_T_Anton_11

ParcelCoast_T_Anton_13:
# 1684 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R4
	goto_if 0, ParcelCoast_T_Anton_12
	goto ParcelCoast_T_Anton_11

ParcelCoast_T_Anton_17:
# 1688 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R5
	goto ParcelCoast_T_Anton_16

ParcelCoast_T_Anton_18:
# 1687 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R5
	goto_if 0, ParcelCoast_T_Anton_17
	goto ParcelCoast_T_Anton_16


ParcelCoast_T_Anton_FirstWin::
# 1694 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_Text_2, MSGBOX_DEFAULT
# 1695 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R2::
# 1699 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1700 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1701 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_0, MSGBOX_YESNO
# 1702 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R2_2
# 1707 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R2, ParcelCoast_T_Anton_R2_Text_2
# 1708 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_3, MSGBOX_DEFAULT
# 1709 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R2_2:
# 1703 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1704 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R3::
# 1713 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1714 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1715 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R3_Text_0, MSGBOX_YESNO
# 1716 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R3_2
# 1721 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R3, ParcelCoast_T_Anton_R3_Text_1
# 1722 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R3_Text_2, MSGBOX_DEFAULT
# 1723 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R3_2:
# 1717 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1718 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R4::
# 1727 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1728 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1729 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R4_Text_0, MSGBOX_YESNO
# 1730 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R4_2
# 1735 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R4, ParcelCoast_T_Anton_R4_Text_1
# 1736 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R4_Text_2, MSGBOX_DEFAULT
# 1737 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R4_2:
# 1731 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1732 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R5::
# 1741 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1742 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1743 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R5_Text_0, MSGBOX_YESNO
# 1744 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R5_2
# 1749 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R5, ParcelCoast_T_Anton_R3_Text_1
# 1750 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R5_Text_1, MSGBOX_DEFAULT
# 1751 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R5_2:
# 1745 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1746 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate::
# 1755 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_BEATE, ParcelCoast_T_Beate_Text_0, ParcelCoast_T_Beate_Text_1, ParcelCoast_T_Beate_FirstWin
# 1759 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1760 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_T_Beate_3
ParcelCoast_T_Beate_1:
# 1763 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_T_Beate_8
ParcelCoast_T_Beate_6:
# 1766 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_T_Beate_13
ParcelCoast_T_Beate_11:
# 1769 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_T_Beate_18
ParcelCoast_T_Beate_16:
# 1772 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_T_Beate_2:
# 1761 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R2
	goto ParcelCoast_T_Beate_1

ParcelCoast_T_Beate_3:
# 1760 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R2
	goto_if 0, ParcelCoast_T_Beate_2
	goto ParcelCoast_T_Beate_1

ParcelCoast_T_Beate_7:
# 1764 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R3
	goto ParcelCoast_T_Beate_6

ParcelCoast_T_Beate_8:
# 1763 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R3
	goto_if 0, ParcelCoast_T_Beate_7
	goto ParcelCoast_T_Beate_6

ParcelCoast_T_Beate_12:
# 1767 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R4
	goto ParcelCoast_T_Beate_11

ParcelCoast_T_Beate_13:
# 1766 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R4
	goto_if 0, ParcelCoast_T_Beate_12
	goto ParcelCoast_T_Beate_11

ParcelCoast_T_Beate_17:
# 1770 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R5
	goto ParcelCoast_T_Beate_16

ParcelCoast_T_Beate_18:
# 1769 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R5
	goto_if 0, ParcelCoast_T_Beate_17
	goto ParcelCoast_T_Beate_16


ParcelCoast_T_Beate_FirstWin::
# 1776 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_Text_2, MSGBOX_DEFAULT
# 1777 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R2::
# 1781 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1782 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1783 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_0, MSGBOX_YESNO
# 1784 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R2_2
# 1789 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R2, ParcelCoast_T_Beate_R2_Text_2
# 1790 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_3, MSGBOX_DEFAULT
# 1791 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R2_2:
# 1785 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1786 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R3::
# 1795 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1796 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1797 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R3_Text_0, MSGBOX_YESNO
# 1798 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R3_2
# 1803 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R3, ParcelCoast_T_Beate_R3_Text_1
# 1804 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R3_Text_2, MSGBOX_DEFAULT
# 1805 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R3_2:
# 1799 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1800 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R4::
# 1809 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1810 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1811 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R4_Text_0, MSGBOX_YESNO
# 1812 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R4_2
# 1817 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R4, ParcelCoast_T_Beate_R4_Text_1
# 1818 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R4_Text_2, MSGBOX_DEFAULT
# 1819 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R4_2:
# 1813 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1814 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R5::
# 1823 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1824 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1825 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R5_Text_0, MSGBOX_YESNO
# 1826 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R5_2
# 1831 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R5, ParcelCoast_T_Beate_R3_Text_1
# 1832 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R5_Text_1, MSGBOX_DEFAULT
# 1833 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R5_2:
# 1827 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1828 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Shell::
# 1839 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1840 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SHELL_FOUND, ParcelCoast_Shell_2
# 1846 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Shell_Text_1, MSGBOX_SIGN
# 1847 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Shell_2:
# 1841 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Shell_Text_0, MSGBOX_SIGN
# 1842 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_Q_SHELL_FOUND
# 1843 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_PerrinScene::
# 1853 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_6, ParcelCoast_PerrinScene_2
# 1857 "data/maps/ParcelCoast/scripts.pory"
	lockall
# 1858 "data/maps/ParcelCoast/scripts.pory"
	playse SE_PIN
# 1859 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinScene_Text_0, MSGBOX_DEFAULT
# 1860 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 1861 "data/maps/ParcelCoast/scripts.pory"
	applymovement 33, Movement_ParcelCoast_PerrinIn
# 1862 "data/maps/ParcelCoast/scripts.pory"
	waitmovement 0
# 1863 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinScene_Text_1, MSGBOX_DEFAULT
# 1864 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_6, ParcelCoast_PerrinScene_Text_2
# 1865 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinScene_Text_3, MSGBOX_DEFAULT
# 1866 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 1867 "data/maps/ParcelCoast/scripts.pory"
	applymovement 33, Movement_ParcelCoast_PerrinOut
# 1868 "data/maps/ParcelCoast/scripts.pory"
	waitmovement 0
# 1869 "data/maps/ParcelCoast/scripts.pory"
	removeobject 33
# 1870 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_PERRIN_6
# 1871 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1872 "data/maps/ParcelCoast/scripts.pory"
	releaseall
	end

ParcelCoast_PerrinScene_2:
# 1854 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelCoast_PerrinTalk::
# 1876 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1877 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1878 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 1879 "data/maps/ParcelCoast/scripts.pory"
	release
	end


# 1882 "data/maps/ParcelCoast/scripts.pory"
Movement_ParcelCoast_PerrinIn:
# 1882 "data/maps/ParcelCoast/scripts.pory"
	walk_down
# 1882 "data/maps/ParcelCoast/scripts.pory"
	walk_down
	step_end

# 1883 "data/maps/ParcelCoast/scripts.pory"
Movement_ParcelCoast_PerrinOut:
# 1883 "data/maps/ParcelCoast/scripts.pory"
	walk_up
# 1883 "data/maps/ParcelCoast/scripts.pory"
	walk_up
	step_end

ParcelCoast_Epilogue::
# 1887 "data/maps/ParcelCoast/scripts.pory"
	lockall
# 1888 "data/maps/ParcelCoast/scripts.pory"
	delay 20
# 1889 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Epilogue_Text_0, MSGBOX_DEFAULT
# 1890 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Epilogue_Text_1, MSGBOX_DEFAULT
# 1891 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_CH_HOLLIS_NAMED, ParcelCoast_Epilogue_2
# 1894 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Epilogue_Text_3, MSGBOX_DEFAULT
ParcelCoast_Epilogue_1:
# 1896 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Epilogue_Text_4, MSGBOX_DEFAULT
# 1897 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 1898 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 8
# 1899 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_ROUTE1, 8, 26
# 1900 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end

ParcelCoast_Epilogue_2:
# 1892 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Epilogue_Text_2, MSGBOX_DEFAULT
	goto ParcelCoast_Epilogue_1


ParcelCoast_GymHarland_Rematch::
# 1906 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1907 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1908 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Rematch_Text_0, MSGBOX_YESNO
# 1909 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_GymHarland_Rematch_2
# 1914 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM6_R, ParcelCoast_GymHarland_Rematch_Text_2
# 1915 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Rematch_Text_3, MSGBOX_DEFAULT
# 1916 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_Rematch_2:
# 1910 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Rematch_Text_1, MSGBOX_DEFAULT
# 1911 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Dorsey::
# 1922 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1923 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1924 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Dorsey_2
# 1929 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_DORSEY_CO, ParcelCoast_Dorsey_5
# 1934 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dorsey_Text_2, MSGBOX_DEFAULT
# 1935 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_DORSEY_CO
# 1936 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Dorsey_2:
# 1925 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dorsey_Text_0, MSGBOX_DEFAULT
# 1926 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Dorsey_5:
# 1930 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dorsey_Text_1, MSGBOX_DEFAULT
# 1931 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_SurveyStake::
# 1942 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_SurveyStake_Text_0, MSGBOX_SIGN
# 1943 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 5
# 1944 "data/maps/ParcelCoast/scripts.pory"
	special SkaldSurveyStake
# 1945 "data/maps/ParcelCoast/scripts.pory"
	msgbox gStringVar4, MSGBOX_SIGN
# 1946 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND, ParcelCoast_SurveyStake_3
ParcelCoast_SurveyStake_1:
	end

ParcelCoast_SurveyStake_2:
# 1947 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_SurveyStake_Text_1, MSGBOX_SIGN
# 1948 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_SECOND_5
	goto ParcelCoast_SurveyStake_1

ParcelCoast_SurveyStake_3:
# 1946 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_SECOND_5, ParcelCoast_SurveyStake_2
	goto ParcelCoast_SurveyStake_1


ParcelCoast_PairQuay::
# 1956 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1957 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_PairQuay_2
# 1962 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_PairQuay_3
# 1969 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_9, MSGBOX_DEFAULT
# 1970 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_10, MSGBOX_DEFAULT
# 1971 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_11, MSGBOX_DEFAULT
# 1972 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_12, MSGBOX_DEFAULT
ParcelCoast_PairQuay_1:
# 1974 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_PairQuay_2:
# 1958 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_0, MSGBOX_DEFAULT
# 1959 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_1, MSGBOX_DEFAULT
# 1960 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_2, MSGBOX_DEFAULT
# 1961 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_3, MSGBOX_DEFAULT
	goto ParcelCoast_PairQuay_1

ParcelCoast_PairQuay_3:
# 1963 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_4, MSGBOX_DEFAULT
# 1964 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_5, MSGBOX_DEFAULT
# 1965 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_6, MSGBOX_DEFAULT
# 1966 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_7, MSGBOX_DEFAULT
# 1967 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_8, MSGBOX_DEFAULT
	goto ParcelCoast_PairQuay_1


ParcelCoast_PairOffice::
# 1979 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1980 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_PairOffice_2
# 1986 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_PairOffice_3
# 1992 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_9, MSGBOX_DEFAULT
# 1993 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_10, MSGBOX_DEFAULT
# 1994 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_11, MSGBOX_DEFAULT
# 1995 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_12, MSGBOX_DEFAULT
ParcelCoast_PairOffice_1:
# 1997 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_PairOffice_2:
# 1981 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_0, MSGBOX_DEFAULT
# 1982 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_1, MSGBOX_DEFAULT
# 1983 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_2, MSGBOX_DEFAULT
# 1984 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_3, MSGBOX_DEFAULT
# 1985 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_4, MSGBOX_DEFAULT
	goto ParcelCoast_PairOffice_1

ParcelCoast_PairOffice_3:
# 1987 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_5, MSGBOX_DEFAULT
# 1988 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_6, MSGBOX_DEFAULT
# 1989 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_7, MSGBOX_DEFAULT
# 1990 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_8, MSGBOX_DEFAULT
	goto ParcelCoast_PairOffice_1


ParcelCoast_Stringer::
# 2004 "data/maps/ParcelCoast/scripts.pory"
	lock
# 2005 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 2006 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Stringer_2
# 2013 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Stringer_3
# 2016 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Stringer_Text_4, MSGBOX_DEFAULT
ParcelCoast_Stringer_1:
# 2018 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Stringer_2:
# 2007 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_CH_QUOTE, ParcelCoast_Stringer_8
# 2010 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Stringer_Text_1, MSGBOX_DEFAULT
ParcelCoast_Stringer_7:
# 2012 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Stringer_Text_2, MSGBOX_DEFAULT
	goto ParcelCoast_Stringer_1

ParcelCoast_Stringer_3:
# 2014 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Stringer_Text_3, MSGBOX_DEFAULT
	goto ParcelCoast_Stringer_1

ParcelCoast_Stringer_8:
# 2008 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Stringer_Text_0, MSGBOX_DEFAULT
	goto ParcelCoast_Stringer_7


ParcelCoast_FindRoost::
# 2025 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOST, ParcelCoast_FindRoost_4
ParcelCoast_FindRoost_3:
# 2029 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FindRoost_Text_1, MSGBOX_SIGN
ParcelCoast_FindRoost_1:
	end

ParcelCoast_FindRoost_2:
# 2026 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FindRoost_Text_0, MSGBOX_SIGN
# 2027 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_Q_ROOST_FOUND
	goto ParcelCoast_FindRoost_1

ParcelCoast_FindRoost_4:
# 2025 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_ROOST_FOUND, ParcelCoast_FindRoost_2
	goto ParcelCoast_FindRoost_3


ParcelCoast_PairMarket::
# 2035 "data/maps/ParcelCoast/scripts.pory"
	lock
# 2036 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_PairMarket_2
# 2041 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_PairMarket_3
# 2047 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairMarket_Text_8, MSGBOX_DEFAULT
# 2048 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairMarket_Text_9, MSGBOX_DEFAULT
# 2049 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairMarket_Text_10, MSGBOX_DEFAULT
# 2050 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairMarket_Text_11, MSGBOX_DEFAULT
# 2051 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairMarket_Text_12, MSGBOX_DEFAULT
ParcelCoast_PairMarket_1:
# 2053 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_PairMarket_2:
# 2037 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairMarket_Text_0, MSGBOX_DEFAULT
# 2038 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairMarket_Text_1, MSGBOX_DEFAULT
# 2039 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairMarket_Text_2, MSGBOX_DEFAULT
# 2040 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairMarket_Text_3, MSGBOX_DEFAULT
	goto ParcelCoast_PairMarket_1

ParcelCoast_PairMarket_3:
# 2042 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairMarket_Text_4, MSGBOX_DEFAULT
# 2043 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairMarket_Text_5, MSGBOX_DEFAULT
# 2044 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairMarket_Text_6, MSGBOX_DEFAULT
# 2045 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairMarket_Text_7, MSGBOX_DEFAULT
	goto ParcelCoast_PairMarket_1


ParcelCoast_Board1::
# 2060 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Board1_Text_0, MSGBOX_SIGN
	end


ParcelCoast_Board2::
# 2065 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Board2_Text_0, MSGBOX_SIGN
	end


ParcelCoast_FirstEntry_Text_0:
# 49 "data/maps/ParcelCoast/scripts.pory"
	.string "The ferry rounds the headland and the\n"
	.string "harbour opens up, and it is BUSY.\l"
	.string "Cranes. Hulls. The gut-and-ice smell of\l"
	.string "a working catch. Gulls over all of it.\p"
	.string "It looks alive.$"

ParcelCoast_FirstEntry_Text_1:
# 50 "data/maps/ParcelCoast/scripts.pory"
	.string "Everything wears the MEREHOLT crest.\n"
	.string "The cranes. The fuel drums. The waiting\l"
	.string "trucks. The side of the fishing boat\l"
	.string "tied at the end of the quay.$"

ParcelCoast_FirstEntry_Text_2:
# 51 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE's note is shorter than usual: THE\n"
	.string "COAST. You've read the others. This one\l"
	.string "doesn't bother to hide. See if you can\l"
	.string "still read it anyway.$"

ParcelCoast_Dredge_Text_0:
# 64 "data/maps/ParcelCoast/scripts.pory"
	.string "The dredge line. In the notebook.$"

ParcelCoast_Dredge_Text_1:
# 68 "data/maps/ParcelCoast/scripts.pory"
	.string "Offshore the water goes from green to\n"
	.string "grey in a straight line, as if ruled.\l"
	.string "Below it the bottom is scraped flat: no\l"
	.string "weed, no stone, no shadow of anything.\p"
	.string "A dredge did that. Nothing has grown\n"
	.string "back. Written down.$"

ParcelCoast_Barren_Text_0:
# 79 "data/maps/ParcelCoast/scripts.pory"
	.string "The urchin barren. In the notebook.$"

ParcelCoast_Barren_Text_1:
# 83 "data/maps/ParcelCoast/scripts.pory"
	.string "Under the quay the rock is purple with\n"
	.string "urchins, thousands, shoulder to\l"
	.string "shoulder, and nothing else. No kelp. No\l"
	.string "fish between the fronds, because there\l"
	.string "are no fronds.\p"
	.string "The thing that ate urchins is gone.\n"
	.string "Fished, or dredged, or both. The urchins\l"
	.string "ate the rest. Written down.$"

ParcelCoast_Catch_Text_0:
# 94 "data/maps/ParcelCoast/scripts.pory"
	.string "The catch, all one size. In the\n"
	.string "notebook.$"

ParcelCoast_Catch_Text_1:
# 98 "data/maps/ParcelCoast/scripts.pory"
	.string "The day's catch on the stall, iced.\n"
	.string "Every fish the same length, give or take\l"
	.string "a finger. No big ones. No small ones.\p"
	.string "A stock fished to one age, the age that\n"
	.string "just reaches the net. The old fish are\l"
	.string "gone and the young ones don't get to be\l"
	.string "old. Written down.$"

ParcelCoast_Pilings_Text_0:
# 109 "data/maps/ParcelCoast/scripts.pory"
	.string "The empty pilings. In the notebook.$"

ParcelCoast_Pilings_Text_1:
# 113 "data/maps/ParcelCoast/scripts.pory"
	.string "The old pier's pilings stand bare to the\n"
	.string "waterline. Pilings in a harbour are\l"
	.string "supposed to be furred with life: weed,\l"
	.string "mussels, the small fish that live in\l"
	.string "them.\p"
	.string "These are clean as fence posts. Nothing\n"
	.string "settles here now. Written down.$"

ParcelCoast_GymHarland_Text_0:
# 128 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: They read your file aloud at\n"
	.string "the quota hearing. Parts of it twice. My\l"
	.string "name's in it, where I put it.\p"
	.string "The review grounds half the fleet two\n"
	.string "days a week now. The lawyers call it\l"
	.string "ruin. It'll pinch, right enough. Winters\l"
	.string "pinched anyway.$"

ParcelCoast_GymHarland_Text_1:
# 129 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: They tell me all it bought is\n"
	.string "time. Aye. Time's what a season is,\l"
	.string "RANGER. I've lived season to season my\l"
	.string "whole life. It's more than I'd been given\l"
	.string "yet.$"

ParcelCoast_GymHarland_Text_2:
# 134 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Come out with me. One shift.\n"
	.string "You've read the water from the quay.\l"
	.string "Read it from the net.$"

ParcelCoast_GymHarland_Text_3:
# 135 "data/maps/ParcelCoast/scripts.pory"
	.string "Go out on the boat?$"

ParcelCoast_GymHarland_Text_4:
# 137 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Tide's at six. Offer stands\n"
	.string "till then.$"

ParcelCoast_GymHarland_Text_5:
# 144 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: There. That's the dredge line.\n"
	.string "See the colour change? Below that\l"
	.string "there's nothing to lift and nothing to\l"
	.string "hide in. We fish the edge of it like a man\l"
	.string "scraping a plate.$"

ParcelCoast_GymHarland_Text_6:
# 145 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Net's coming up. Watch.$"

ParcelCoast_GymHarland_Text_7:
# 146 "data/maps/ParcelCoast/scripts.pory"
	.string "The net comes over the rail. Urchins. A\n"
	.string "plastic drum with the crest on it.\l"
	.string "Eleven fish, every one the same length.\l"
	.string "Two go back over the side for being\l"
	.string "under the size.\p"
	.string "HARLAND: That's a shift. That's what\n"
	.string "nothing looks like, written in fish.$"

ParcelCoast_GymHarland_Text_8:
# 147 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: The note on the boat is\n"
	.string "MEREHOLT's. The quota's MEREHOLT's. The\l"
	.string "ice, the fuel, the stall I sell at. I could\l"
	.string "stop. I'd be a man with no boat who\l"
	.string "stopped. Nobody'd write that down.$"

ParcelCoast_GymHarland_Text_9:
# 148 "data/maps/ParcelCoast/scripts.pory"
	.string "{PLAYER}: I'm writing it down.$"

ParcelCoast_GymHarland_Text_10:
# 149 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: …Aye. I know. Haul in. We're\n"
	.string "done.$"

ParcelCoast_GymHarland_Text_11:
# 153 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Nine fish, landed. Write that\n"
	.string "number. Nobody else will.$"

ParcelCoast_GymHarland_Text_12:
# 158 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: It was never one report\n"
	.string "that'd turn this. Always all of them.\l"
	.string "Mine too, if I find the spine.\p"
	.string "Write it true, RANGER. That's the whole\n"
	.string "of what I've got left to ask.$"

ParcelCoast_GymHarland_Text_13:
# 162 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: So. You came all the way down\n"
	.string "to the bottom of it. Where the money is.\p"
	.string "The note on this boat is MEREHOLT's.\n"
	.string "The quota's MEREHOLT's. The stall I sell\l"
	.string "at. Set it all side by side and it's one\l"
	.string "crest. I did, at the river. You made me.$"

ParcelCoast_GymHarland_Text_14:
# 163 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: I'm not your villain. I'm the\n"
	.string "man they send the bill to. Write that\l"
	.string "true and I'll vouch for you on this\l"
	.string "water, which I don't do twice.\p"
	.string "But you'll earn it the fisher's way. Show\n"
	.string "me.$"

ParcelCoast_GymHarland_Text_15:
# 164 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: One thing first, since you're\n"
	.string "the reading sort. Forty jobs, DORSEY\l"
	.string "says, on the quay. Is that a true\l"
	.string "number?$"

ParcelCoast_GymHarland_Text_16:
# 166 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Aye. It's true. They're all true\n"
	.string "numbers. That was never the trouble;\l"
	.string "the trouble's what they leave off the\l"
	.string "page.\p"
	.string "You can hold two true things at once.\n"
	.string "Good. Not many can. Now earn it the\l"
	.string "fisher's way.$"

ParcelCoast_GymHarland_Text_17:
# 169 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: It's true. Forty, and every\n"
	.string "one of them needs the dredge that's\l"
	.string "taking my ground. The lie's never in the\l"
	.string "numbers, RANGER.\p"
	.string "Learn to hold two true things at once\n"
	.string "or you'll be no use to anyone out here.\l"
	.string "Now earn it the fisher's way.$"

ParcelCoast_GymHarland_Text_18:
# 171 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: …Aye. You read the water. I'll\n"
	.string "not pretend you didn't.$"

ParcelCoast_GymHarland_Text_19:
# 177 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: That's the Tradewind\n"
	.string "clearance. Out here it means you can be\l"
	.string "trusted on the water, a thing I don't\l"
	.string "hand out twice.\p"
	.string "Here. You'll want this more than I do.$"

ParcelCoast_GymHarland_Text_20:
# 179 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: FLY. Carries you back to any\n"
	.string "harbour you've already made. A fisher's\l"
	.string "mercy, that. Some days the only\l"
	.string "kindness is a fast way home.\p"
	.string "Use it better than I've used my\n"
	.string "seasons.$"

ParcelCoast_Hale_Text_0:
# 189 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: They read it aloud at the hearing.\n"
	.string "All of it. HOLLIS sat through every page\l"
	.string "without moving. I watched her. She's the\l"
	.string "one who taught me to sit still.$"

ParcelCoast_Hale_Text_1:
# 194 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Rest while you can. The next\n"
	.string "place doesn't have a quay to stand on,\l"
	.string "or a HOLLIS to pour you tea.\p"
	.string "It has her.$"

ParcelCoast_Hale_Text_2:
# 202 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: The dredge scar. The urchins. The\n"
	.string "catch all one age. The empty pilings.\l"
	.string "The plaque. The man on the boat.\p"
	.string "Name it.$"

ParcelCoast_Hale_Text_3:
# 204 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: COLLAPSING.\p"
	.string "The grazer's gone, the urchins own the\n"
	.string "kelp, the apex is fished to nothing, and\l"
	.string "the web is coming apart in front of you\l"
	.string "in real time.$"

ParcelCoast_Hale_Text_4:
# 205 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: The overfishing you could still\n"
	.string "stop, if anyone with the power to\l"
	.string "wanted to. The dredged seabed you\l"
	.string "cannot. Half of it savable, half already\l"
	.string "gone. The hardest kind of place to write\l"
	.string "down honestly.$"

ParcelCoast_Hale_Text_5:
# 206 "data/maps/ParcelCoast/scripts.pory"
	.string "{PLAYER}: HALE. The model on the\n"
	.string "plaque. The methods are hers. DR.\l"
	.string "HERON's. She isn't lost, she's…$"

ParcelCoast_Hale_Text_6:
# 207 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: I know. Have known a while.\p"
	.string "I told you at the start her ending up at\n"
	.string "that lab wasn't random. This is the rest\l"
	.string "of that sentence.$"

ParcelCoast_Hale_Text_7:
# 208 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Your mentor didn't vanish,\n"
	.string "{PLAYER}. She made a bargain. And the\l"
	.string "bargain is out there right now with her\l"
	.string "name on the paperwork, strangling a\l"
	.string "kelp bed.\p"
	.string "I'm sorry. You came looking for a hero.\n"
	.string "You found a citation.$"

ParcelCoast_Hale_Text_8:
# 211 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Coastal Certification. For\n"
	.string "reading a place that's screaming and\l"
	.string "keeping your hand steady enough to\l"
	.string "write it down anyway.$"

ParcelCoast_Hale_Text_9:
# 217 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: There's one place left. Inland.\n"
	.string "The deep corridor, the marsh all of this\l"
	.string "used to drain from. Unfished, unbuilt.\l"
	.string "Too raw to be worth taking. Yet.\p"
	.string "That's where she went to hide. That's\n"
	.string "where we finish.$"

ParcelCoast_Hale_Text_10:
# 218 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Rest first. Then come to the\n"
	.string "station at FERNWICK, and we go inland,\l"
	.string "and we tell the truth with our whole\l"
	.string "chest, and we live with what it costs.\p"
	.string "That was always the job, {PLAYER}.\n"
	.string "This is just the first time it's cost\l"
	.string "this much.$"

ParcelCoast_Hale_Text_11:
# 222 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Don't name it from the office\n"
	.string "window. Walk the quay. The dredge line,\l"
	.string "the barren, the catch on the stall, the\l"
	.string "pilings, the plaque in the office. And\l"
	.string "talk to the man on the boat. Especially\l"
	.string "him.\p"
	.string "Then come and tell me what it is.$"

ParcelCoast_Worker_Text_0:
# 232 "data/maps/ParcelCoast/scripts.pory"
	.string "WORKER: Four generations on this quay,\n"
	.string "and it took a ranger's notebook to put\l"
	.string "the fifth in a hearing room. My boy\l"
	.string "spoke. Two minutes. He was good.$"

ParcelCoast_Worker_Text_1:
# 237 "data/maps/ParcelCoast/scripts.pory"
	.string "WORKER: You named it. The whole quay\n"
	.string "knew by the tide after. COLLAPSING.\l"
	.string "We've known for years; we'd just never\l"
	.string "heard it said by somebody with a card.\p"
	.string "There's people in the frame, RANGER. You\n"
	.string "put us in it. That's fair. Keep us in it.$"

ParcelCoast_Worker_Text_2:
# 241 "data/maps/ParcelCoast/scripts.pory"
	.string "WORKER: Four generations my family's\n"
	.string "worked this quay. Good work. Honest\l"
	.string "work.\p"
	.string "Don't let that badge let you forget\n"
	.string "there's people in the frame, RANGER. We\l"
	.string "didn't dredge it. We haul what we're told\l"
	.string "to haul, or we don't eat.$"

ParcelCoast_Vendor1_Text_0:
# 249 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Cod. Different sizes today. The\n"
	.string "review's inspector weighs them herself.\l"
	.string "Customers ask why they're not tidy. I\l"
	.string "tell them. First time I've told them.$"

ParcelCoast_Vendor1_Text_1:
# 254 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Cod, iced this morning. All one\n"
	.string "size. A customer asked why today, first\l"
	.string "time ever.\p"
	.string "I said ask the ranger. She said the\n"
	.string "ranger already did. I sold her two\l"
	.string "anyway.$"

ParcelCoast_Vendor1_Text_2:
# 258 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Cod, iced this morning. All the\n"
	.string "same size, aren't they. Customers like\l"
	.string "that. Tidy. Nobody asks why there's no\l"
	.string "big ones.$"

ParcelCoast_Vendor2_Text_0:
# 266 "data/maps/ParcelCoast/scripts.pory"
	.string "MAN: Urchin roe's off the list. The\n"
	.string "review says the bottom's a nursery, not\l"
	.string "a shelf. Nothing else down there to sell.\l"
	.string "That was the point, wasn't it.$"

ParcelCoast_Vendor2_Text_1:
# 271 "data/maps/ParcelCoast/scripts.pory"
	.string "MAN: Urchin roe. The FOUNDATION buyer\n"
	.string "didn't come this morning. First morning\l"
	.string "in a year.\p"
	.string "You wrote 'urchins' in your survey, I\n"
	.string "hear. Funny how a word gets to a buyer\l"
	.string "before it gets to a fisherman.$"

ParcelCoast_Vendor2_Text_2:
# 275 "data/maps/ParcelCoast/scripts.pory"
	.string "MAN: Urchin roe! The FOUNDATION found\n"
	.string "a market for it overseas. Clever.\l"
	.string "There's nothing else down there to sell.$"

ParcelCoast_Vendor3_Text_0:
# 283 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Ice is still FOUNDATION ice.\n"
	.string "Fuel's still FOUNDATION fuel. The rent\l"
	.string "went down a page in the review. I sell\l"
	.string "fish. I noticed the page.$"

ParcelCoast_Vendor3_Text_1:
# 288 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: FOUNDATION ice, FOUNDATION\n"
	.string "fuel, FOUNDATION rent, and today a\l"
	.string "FOUNDATION man came round asking what\l"
	.string "the ranger bought.\p"
	.string "I said fish. He wrote it down.\n"
	.string "Everybody's writing things down this\l"
	.string "week. I liked it better when it was just\l"
	.string "you.$"

ParcelCoast_Vendor3_Text_2:
# 292 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Ice is FOUNDATION ice. Fuel's\n"
	.string "FOUNDATION fuel. The stall rent goes to\l"
	.string "a FOUNDATION company. I sell fish.\l"
	.string "That's the only bit of this that's mine.$"

ParcelCoast_Vendor4_Text_0:
# 300 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: WAILMER in the harbour mouth\n"
	.string "yesterday. One. My father would have\l"
	.string "laughed at one. I stood on the quay and\l"
	.string "watched it like a boy.$"

ParcelCoast_Vendor4_Text_1:
# 305 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: Walk across the harbour on the\n"
	.string "backs of the WAILMER. My father said it.\l"
	.string "Now it's in a ranger's book, with a date\l"
	.string "beside it.\p"
	.string "First time anybody's written down what\n"
	.string "my father said. He'd have hated the\l"
	.string "date. He'd have liked the rest.$"

ParcelCoast_Vendor4_Text_2:
# 309 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: Fifty years ago you could walk\n"
	.string "across the harbour on the backs of the\l"
	.string "WAILMER. My father said that. His\l"
	.string "father said it to him. Somebody has to\l"
	.string "keep saying it.$"

ParcelCoast_Girl_Text_0:
# 317 "data/maps/ParcelCoast/scripts.pory"
	.string "GIRL: The gulls dived today. Mum\n"
	.string "stopped on the quay to watch. She\l"
	.string "didn't say anything. She held my hand\l"
	.string "very tight.$"

ParcelCoast_Girl_Text_1:
# 322 "data/maps/ParcelCoast/scripts.pory"
	.string "GIRL: The gulls still don't dive. But a\n"
	.string "man from the FOUNDATION stood on the\l"
	.string "quay and watched them not dive for an\l"
	.string "hour.\p"
	.string "Mum says that's new. Watching's new.\n"
	.string "I've been watching for ages.$"

ParcelCoast_Girl_Text_2:
# 326 "data/maps/ParcelCoast/scripts.pory"
	.string "GIRL: The gulls follow the boats in but\n"
	.string "they don't dive anymore. Mum says they\l"
	.string "know something we don't.$"

ParcelCoast_Docker_Text_0:
# 334 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Cannery's on half days. Half\n"
	.string "days, full pay. HARLAND's lot argued it\l"
	.string "in the union hall for a week. I slept in a\l"
	.string "bed in daylight. Strange thing.$"

ParcelCoast_Docker_Text_1:
# 339 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Two shifts, seven days, and\n"
	.string "this morning head office rang the\l"
	.string "cannery twice. The cannery never stops.\l"
	.string "The phone never rang.\p"
	.string "You wrote something. I don't know what.\n"
	.string "The phone knows.$"

ParcelCoast_Docker_Text_2:
# 343 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Two shifts a day, seven days.\n"
	.string "The cannery never stops. The fish stop.\l"
	.string "The cannery doesn't.$"

ParcelCoast_GullMan_Text_0:
# 352 "data/maps/ParcelCoast/scripts.pory"
	.string "GULL MAN: Sixty-one. That's more than\n"
	.string "the stacks ever held. They've found a\l"
	.string "way to live on what we built to kill the\l"
	.string "beach.\p"
	.string "I don't know if that's hope or just\n"
	.string "gulls. Here. From the sea, before the\l"
	.string "dredge.$"

ParcelCoast_GullMan_Text_1:
# 356 "data/maps/ParcelCoast/scripts.pory"
	.string "GULL MAN: The east end of the quay wall.\n"
	.string "Count the WINGULL. Dusk's best but any\l"
	.string "time will do.$"

ParcelCoast_GullMan_Text_2:
# 361 "data/maps/ParcelCoast/scripts.pory"
	.string "GULL MAN: The WINGULL used to roost on\n"
	.string "the sea stacks. The dredge took the\l"
	.string "stacks for spoil; they roost on the\l"
	.string "breakwater now. I count them every\l"
	.string "dusk. I can't see the east end from here\l"
	.string "any more; my eyes.\p"
	.string "Go to the east end of the quay wall and\n"
	.string "count what's roosting. Tell me.$"

ParcelCoast_GullMan_Text_3:
# 367 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: I count the boats out and the\n"
	.string "boats in. Half the number now, by order.\l"
	.string "The crates per boat went up. Nobody\l"
	.string "asked me. I'm telling you anyway.$"

ParcelCoast_GullMan_Text_4:
# 372 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: Boats out, boats in. Same\n"
	.string "number. Crates, fewer. And now\l"
	.string "somebody's counted the counting: your\l"
	.string "survey has my crates in it.\p"
	.string "Nobody asked me to count. Somebody\n"
	.string "read it anyway. That's all a counter\l"
	.string "wants, in the end.$"

ParcelCoast_GullMan_Text_5:
# 376 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: I count the boats out and the\n"
	.string "boats in. Same number. I count the\l"
	.string "crates. Fewer every month. Nobody\l"
	.string "asked me to count. Nobody asked the\l"
	.string "gulls either.$"

ParcelCoast_ReturnFerry_Text_0:
# 386 "data/maps/ParcelCoast/scripts.pory"
	.string "SAILOR: Back to SALTWICK, RANGER? Go\n"
	.string "on. They'll want to see the one who did\l"
	.string "it. Don't let them buy you a drink.\l"
	.string "They'll try.$"

ParcelCoast_ReturnFerry_Text_1:
# 390 "data/maps/ParcelCoast/scripts.pory"
	.string "SAILOR: Back to SALTWICK, RANGER?\n"
	.string "Can't say I blame you. Nothing to do\l"
	.string "here but watch them take it.$"

ParcelCoast_ReturnFerry_Text_2:
# 392 "data/maps/ParcelCoast/scripts.pory"
	.string "SAILOR: I'll wait. The catch isn't going\n"
	.string "anywhere. Less of it every run, but it\l"
	.string "isn't going anywhere.$"

ParcelCoast_MereholtAide_Text_0:
# 409 "data/maps/ParcelCoast/scripts.pory"
	.string "AIDE: No message came down. She said\n"
	.string "you would already have everything she'd\l"
	.string "say.$"

ParcelCoast_MereholtAide_Text_1:
# 413 "data/maps/ParcelCoast/scripts.pory"
	.string "AIDE: Ms. BROOKE is up from the mainland\n"
	.string "office. She has asked for you. By name,\l"
	.string "no title on it.\p"
	.string "The boardroom. Top floor. Now, if you\n"
	.string "would.$"

ParcelCoast_MereholtAide_Text_2:
# 414 "data/maps/ParcelCoast/scripts.pory"
	.string "Go up?$"

ParcelCoast_MereholtAide_Text_3:
# 416 "data/maps/ParcelCoast/scripts.pory"
	.string "AIDE: She'll wait. She prices patience\n"
	.string "like everything else. Accurately.$"

ParcelCoast_SignQuay_Text_0:
# 431 "data/maps/ParcelCoast/scripts.pory"
	.string "MEREHOLT COASTAL WORKS -- LIGHTHOUSE\n"
	.string "QUAY\p"
	.string "Ferry to SALTWICK, twice daily. Landing\n"
	.string "fees to the office. No fishing from the\l"
	.string "quay. The quay is for the fleet.$"

ParcelCoast_SignMarket_Text_0:
# 435 "data/maps/ParcelCoast/scripts.pory"
	.string "FISH MARKET\p"
	.string "Stalls 1-12 let by MEREHOLT COASTAL\n"
	.string "HOLDINGS. Catch to be weighed at the\l"
	.string "cannery before sale. Undersize fish are\l"
	.string "not to be landed. Undersize is whatever\l"
	.string "the Board says this month.$"

ParcelCoast_Brage_Text_0:
# 442 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Off the boats, on the beach,\n"
	.string "nothing to do till the tide. Battle me,\l"
	.string "RANGER, I'm bored of losing at cards.$"

ParcelCoast_Brage_Text_1:
# 443 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Lost at that too.$"

ParcelCoast_Brage_Text_2:
# 458 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Ten years on the trawlers. We\n"
	.string "used to come in with the deck awash.\l"
	.string "Now you can see the planks the whole\l"
	.string "trip home.$"

ParcelCoast_Brage_R2_Text_0:
# 469 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoast_Brage_R2_Text_1:
# 471 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Another time, then.$"

ParcelCoast_Brage_R2_Text_2:
# 475 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: …Fair.$"

ParcelCoast_Brage_R2_Text_3:
# 476 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_Brage_R3_Text_0:
# 483 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Brage_R3_Text_1:
# 489 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Still yours.$"

ParcelCoast_Brage_R3_Text_2:
# 490 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Brage_R4_Text_0:
# 497 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_Brage_R4_Text_1:
# 504 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Brage_R5_Text_0:
# 511 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Brage_R5_Text_1:
# 517 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Right. That's the whole of it.$"

ParcelCoast_Brage_R5_Text_2:
# 518 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Frod_Text_0:
# 524 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: SHARPEDO off the beach. Never\n"
	.string "used to be. Nothing else to eat so they\l"
	.string "come in close. Battle.$"

ParcelCoast_Frod_Text_1:
# 525 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Close enough.$"

ParcelCoast_Frod_Text_2:
# 540 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: When the big fish are gone, the\n"
	.string "sharks eat whatever's left and then\l"
	.string "they eat each other. That's not a\l"
	.string "saying. That's this beach.$"

ParcelCoast_Frod_R2_Text_0:
# 551 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Frod_R2_Text_1:
# 553 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCoast_Frod_R2_Text_2:
# 557 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: …Again, then. Later.$"

ParcelCoast_Frod_R2_Text_3:
# 558 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Frod_R3_Text_0:
# 565 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCoast_Frod_R3_Text_1:
# 572 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Frod_R4_Text_0:
# 579 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCoast_Frod_R4_Text_1:
# 585 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Right. That's the whole of it.$"

ParcelCoast_Frod_R4_Text_2:
# 586 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Frod_R5_Text_0:
# 593 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoast_Frod_R5_Text_1:
# 599 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Still yours.$"

ParcelCoast_Frod_R5_Text_2:
# 600 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCoast_Gyda_Text_0:
# 606 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: You swam out past the dredge\n"
	.string "line! Nobody does that. Battle, then I'll\l"
	.string "show you what's down there.$"

ParcelCoast_Gyda_Text_1:
# 607 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Nothing. That's what's down\n"
	.string "there. Nothing.$"

ParcelCoast_Gyda_Text_2:
# 622 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: I dive the barren for the\n"
	.string "FOUNDATION. Counting urchins. There's a\l"
	.string "bonus if the number goes down. It never\l"
	.string "goes down.$"

ParcelCoast_Gyda_R2_Text_0:
# 633 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Gyda_R2_Text_1:
# 635 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCoast_Gyda_R2_Text_2:
# 639 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: That's the one I wanted to see.$"

ParcelCoast_Gyda_R2_Text_3:
# 640 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Gyda_R3_Text_0:
# 647 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelCoast_Gyda_R3_Text_1:
# 653 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: …Again, then. Later.$"

ParcelCoast_Gyda_R3_Text_2:
# 654 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Gyda_R4_Text_0:
# 661 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCoast_Gyda_R4_Text_1:
# 668 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Gyda_R5_Text_0:
# 675 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoast_Gyda_R5_Text_1:
# 682 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_Hroar_Text_0:
# 688 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: The inlet's mine. Been swimming\n"
	.string "it since I was six. Battle for it.$"

ParcelCoast_Hroar_Text_1:
# 689 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Yours, then. Mind the drums.$"

ParcelCoast_Hroar_Text_2:
# 704 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: There's fuel drums on the bottom\n"
	.string "of the inlet with the crest on. Nobody\l"
	.string "put them there. They just arrived.$"

ParcelCoast_Hroar_R2_Text_0:
# 715 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoast_Hroar_R2_Text_1:
# 717 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Suit yourself. I'm here.$"

ParcelCoast_Hroar_R2_Text_2:
# 721 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: That's the one I wanted to see.$"

ParcelCoast_Hroar_R2_Text_3:
# 722 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Hroar_R3_Text_0:
# 729 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCoast_Hroar_R3_Text_1:
# 736 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Hroar_R4_Text_0:
# 743 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_Hroar_R4_Text_1:
# 749 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Noted. Properly, this time.$"

ParcelCoast_Hroar_R4_Text_2:
# 750 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Hroar_R5_Text_0:
# 757 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCoast_Hroar_R5_Text_1:
# 763 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Still yours.$"

ParcelCoast_Hroar_R5_Text_2:
# 764 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Jorid_Text_0:
# 770 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: The beach is for playing! Nobody\n"
	.string "plays here anymore. They work. Battle\l"
	.string "me, that's nearly playing.$"

ParcelCoast_Jorid_Text_1:
# 771 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Nearly.$"

ParcelCoast_Jorid_Text_2:
# 786 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Mum says the beach used to have\n"
	.string "shells. I've never found a shell. Just\l"
	.string "the drum rings.$"

ParcelCoast_Jorid_R2_Text_0:
# 797 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Jorid_R2_Text_1:
# 799 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Fine. Same spot.$"

ParcelCoast_Jorid_R2_Text_2:
# 803 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Noted. Properly, this time.$"

ParcelCoast_Jorid_R2_Text_3:
# 804 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Jorid_R3_Text_0:
# 811 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Jorid_R3_Text_1:
# 817 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Right. That's the whole of it.$"

ParcelCoast_Jorid_R3_Text_2:
# 818 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Jorid_R4_Text_0:
# 825 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_Jorid_R4_Text_1:
# 831 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: …Fair.$"

ParcelCoast_Jorid_R4_Text_2:
# 832 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Jorid_R5_Text_0:
# 839 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_Jorid_R5_Text_1:
# 846 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Ketil_Text_0:
# 852 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: FOUNDATION security. Off duty.\n"
	.string "On duty I'd ask for your pass. Off duty\l"
	.string "I'll just beat you.$"

ParcelCoast_Ketil_Text_1:
# 853 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: On duty tomorrow. Don't be here.$"

ParcelCoast_Ketil_Text_2:
# 868 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: The office has a floor nobody\n"
	.string "goes to. Top one. The boardroom. I've\l"
	.string "seen the lift go up. Never seen it come\l"
	.string "down with anyone smiling.$"

ParcelCoast_Ketil_R2_Text_0:
# 879 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoast_Ketil_R2_Text_1:
# 881 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: No hurry. The water keeps.$"

ParcelCoast_Ketil_R2_Text_2:
# 885 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Noted. Properly, this time.$"

ParcelCoast_Ketil_R2_Text_3:
# 886 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Ketil_R3_Text_0:
# 893 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCoast_Ketil_R3_Text_1:
# 899 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Still yours.$"

ParcelCoast_Ketil_R3_Text_2:
# 900 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Ketil_R4_Text_0:
# 907 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCoast_Ketil_R4_Text_1:
# 913 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: That's the one I wanted to see.$"

ParcelCoast_Ketil_R4_Text_2:
# 914 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Ketil_R5_Text_0:
# 921 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Ketil_R5_Text_1:
# 927 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: …Fair.$"

ParcelCoast_Ketil_R5_Text_2:
# 928 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Liva_Text_0:
# 934 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: I came up from the mainland for\n"
	.string "the FOUNDATION's graduate scheme.\l"
	.string "Sustainable harvest modelling. Battle?$"

ParcelCoast_Liva_Text_1:
# 935 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: The model didn't predict that.$"

ParcelCoast_Liva_Text_2:
# 950 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: The model's beautiful. Elegant.\n"
	.string "Every term in it is true. It's just that\l"
	.string "the fish didn't read it.$"

ParcelCoast_Liva_R2_Text_0:
# 961 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Liva_R2_Text_1:
# 963 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Another time, then.$"

ParcelCoast_Liva_R2_Text_2:
# 967 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: That's the one I wanted to see.$"

ParcelCoast_Liva_R2_Text_3:
# 968 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_Liva_R3_Text_0:
# 975 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Liva_R3_Text_1:
# 981 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Right. That's the whole of it.$"

ParcelCoast_Liva_R3_Text_2:
# 982 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Liva_R4_Text_0:
# 989 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelCoast_Liva_R4_Text_1:
# 995 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Still yours.$"

ParcelCoast_Liva_R4_Text_2:
# 996 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Liva_R5_Text_0:
# 1003 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCoast_Liva_R5_Text_1:
# 1009 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: …Fair.$"

ParcelCoast_Liva_R5_Text_2:
# 1010 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_Magnus_Text_0:
# 1016 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Director, Coastal Holdings.\n"
	.string "You're the RANGER with the notebook.\l"
	.string "Humour me. I collect strong trainers\l"
	.string "the way I collect quotas.$"

ParcelCoast_Magnus_Text_1:
# 1017 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Well. You're not for sale, at any\n"
	.string "rate.$"

ParcelCoast_Magnus_Text_2:
# 1032 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Write what you like. We own the\n"
	.string "ice, the fuel, the stalls, the boats'\l"
	.string "paper and the hearing hall. A report is a\l"
	.string "piece of paper. We own the paper.$"

ParcelCoast_Magnus_R2_Text_0:
# 1043 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Magnus_R2_Text_1:
# 1045 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Fine. Same spot.$"

ParcelCoast_Magnus_R2_Text_2:
# 1049 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Right. That's the whole of it.$"

ParcelCoast_Magnus_R2_Text_3:
# 1050 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Magnus_R3_Text_0:
# 1057 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCoast_Magnus_R3_Text_1:
# 1063 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: …Again, then. Later.$"

ParcelCoast_Magnus_R3_Text_2:
# 1064 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Magnus_R4_Text_0:
# 1071 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_Magnus_R4_Text_1:
# 1077 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: …Fair.$"

ParcelCoast_Magnus_R4_Text_2:
# 1078 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Magnus_R5_Text_0:
# 1085 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCoast_Magnus_R5_Text_1:
# 1091 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Noted. Properly, this time.$"

ParcelCoast_Magnus_R5_Text_2:
# 1092 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Nikolai_Text_0:
# 1098 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Father says the coast is an\n"
	.string "investment. I say it smells. Battle me\l"
	.string "and I'll tell Father you were rude.$"

ParcelCoast_Nikolai_Text_1:
# 1099 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Father won't care. Father\n"
	.string "never cares.$"

ParcelCoast_Nikolai_Text_2:
# 1114 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: We have a house on the\n"
	.string "mainland and a house here. The one here\l"
	.string "is for 'optics'. I looked that up. It\l"
	.string "means being seen.$"

ParcelCoast_Nikolai_R2_Text_0:
# 1125 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Nikolai_R2_Text_1:
# 1127 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Suit yourself. I'm here.$"

ParcelCoast_Nikolai_R2_Text_2:
# 1131 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Right. That's the whole of it.$"

ParcelCoast_Nikolai_R2_Text_3:
# 1132 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Nikolai_R3_Text_0:
# 1139 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelCoast_Nikolai_R3_Text_1:
# 1146 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelCoast_Nikolai_R4_Text_0:
# 1153 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: I don't care about the paper.\n"
	.string "I care about the one I lost. Go?$"

ParcelCoast_Nikolai_R4_Text_1:
# 1159 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: …Again, then. Later.$"

ParcelCoast_Nikolai_R4_Text_2:
# 1160 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoast_Nikolai_R5_Text_0:
# 1167 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_Nikolai_R5_Text_1:
# 1173 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: …Fair.$"

ParcelCoast_Nikolai_R5_Text_2:
# 1174 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Oda_Text_0:
# 1180 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: The market's quaint, isn't it. All\n"
	.string "these little stalls. I'm here for the\l"
	.string "roe. Battle, darling?$"

ParcelCoast_Oda_Text_1:
# 1181 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Not as quaint as I thought.$"

ParcelCoast_Oda_Text_2:
# 1196 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Everyone on the mainland eats this\n"
	.string "roe. It's on every menu. Nobody asks\l"
	.string "what the urchins were eating before\l"
	.string "there was nothing else.$"

ParcelCoast_Oda_R2_Text_0:
# 1207 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: I kept the team up for this. Again?$"

ParcelCoast_Oda_R2_Text_1:
# 1209 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Fine. Same spot.$"

ParcelCoast_Oda_R2_Text_2:
# 1213 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Still yours.$"

ParcelCoast_Oda_R2_Text_3:
# 1214 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_Oda_R3_Text_0:
# 1221 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Oda_R3_Text_1:
# 1228 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Oda_R4_Text_0:
# 1235 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCoast_Oda_R4_Text_1:
# 1241 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: …Fair.$"

ParcelCoast_Oda_R4_Text_2:
# 1242 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Oda_R5_Text_0:
# 1249 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoast_Oda_R5_Text_1:
# 1255 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: That's the one I wanted to see.$"

ParcelCoast_Oda_R5_Text_2:
# 1256 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_Petter_Text_0:
# 1262 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Cannery night shift. I sleep on\n"
	.string "the quay. You woke me. Battle.$"

ParcelCoast_Petter_Text_1:
# 1263 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Going back to sleep.$"

ParcelCoast_Petter_Text_2:
# 1278 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Two shifts a day and the cans\n"
	.string "are half empty. They put more water in.\l"
	.string "You can taste the quota in the tin.$"

ParcelCoast_Petter_R2_Text_0:
# 1289 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelCoast_Petter_R2_Text_1:
# 1291 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Another time, then.$"

ParcelCoast_Petter_R2_Text_2:
# 1295 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: …Fair.$"

ParcelCoast_Petter_R2_Text_3:
# 1296 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Petter_R3_Text_0:
# 1303 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCoast_Petter_R3_Text_1:
# 1309 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Still yours.$"

ParcelCoast_Petter_R3_Text_2:
# 1310 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Petter_R4_Text_0:
# 1317 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelCoast_Petter_R4_Text_1:
# 1323 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Noted. Properly, this time.$"

ParcelCoast_Petter_R4_Text_2:
# 1324 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Petter_R5_Text_0:
# 1331 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCoast_Petter_R5_Text_1:
# 1338 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Ragnar_Text_0:
# 1344 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: One GYARADOS. Took me a\n"
	.string "lifetime off this quay. Last one in the\l"
	.string "harbour, maybe. Battle it.$"

ParcelCoast_Ragnar_Text_1:
# 1345 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: It's still the last one.$"

ParcelCoast_Ragnar_Text_2:
# 1360 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: HARLAND's cousin, river side. He\n"
	.string "talks about you. Doesn't say good or\l"
	.string "bad. Just talks. For HARLAND that's a\l"
	.string "speech.$"

ParcelCoast_Ragnar_R2_Text_0:
# 1371 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelCoast_Ragnar_R2_Text_1:
# 1373 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Suit yourself. I'm here.$"

ParcelCoast_Ragnar_R2_Text_2:
# 1377 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Still yours.$"

ParcelCoast_Ragnar_R2_Text_3:
# 1378 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Ragnar_R3_Text_0:
# 1385 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelCoast_Ragnar_R3_Text_1:
# 1391 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: That's the one I wanted to see.$"

ParcelCoast_Ragnar_R3_Text_2:
# 1392 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Ragnar_R4_Text_0:
# 1399 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCoast_Ragnar_R4_Text_1:
# 1405 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: …Fair.$"

ParcelCoast_Ragnar_R4_Text_2:
# 1406 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoast_Ragnar_R5_Text_0:
# 1413 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Ragnar_R5_Text_1:
# 1420 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Solvor_Text_0:
# 1426 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: My AZUMARILL loves the\n"
	.string "harbour! Well. Loved. It won't go in the\l"
	.string "water now. Battle?$"

ParcelCoast_Solvor_Text_1:
# 1427 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: It still won't go in.$"

ParcelCoast_Solvor_Text_2:
# 1442 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: It came out itchy, same as the\n"
	.string "MARILL at ELVSUND. The same itch, two\l"
	.string "hundred miles apart. That's not two\l"
	.string "problems.$"

ParcelCoast_Solvor_R2_Text_0:
# 1453 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Solvor_R2_Text_1:
# 1455 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Suit yourself. I'm here.$"

ParcelCoast_Solvor_R2_Text_2:
# 1459 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: …Fair.$"

ParcelCoast_Solvor_R2_Text_3:
# 1460 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Solvor_R3_Text_0:
# 1467 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelCoast_Solvor_R3_Text_1:
# 1473 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Noted. Properly, this time.$"

ParcelCoast_Solvor_R3_Text_2:
# 1474 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Solvor_R4_Text_0:
# 1481 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_Solvor_R4_Text_1:
# 1488 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Solvor_R5_Text_0:
# 1495 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCoast_Solvor_R5_Text_1:
# 1501 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Right. That's the whole of it.$"

ParcelCoast_Solvor_R5_Text_2:
# 1502 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Tore_Text_0:
# 1508 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Ferry crew. We run twice a day\n"
	.string "whether anyone rides or not. Mostly\l"
	.string "not. Battle me, it passes the time.$"

ParcelCoast_Tore_Text_1:
# 1509 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Time passed.$"

ParcelCoast_Tore_Text_2:
# 1524 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: The ferry's FOUNDATION too. The\n"
	.string "one kindness on this coast and they\l"
	.string "own it. I'm not complaining. I'm just\l"
	.string "saying.$"

ParcelCoast_Tore_R2_Text_0:
# 1535 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Tore_R2_Text_1:
# 1537 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCoast_Tore_R2_Text_2:
# 1541 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Still yours.$"

ParcelCoast_Tore_R2_Text_3:
# 1542 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Tore_R3_Text_0:
# 1549 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCoast_Tore_R3_Text_1:
# 1555 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Noted. Properly, this time.$"

ParcelCoast_Tore_R3_Text_2:
# 1556 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Tore_R4_Text_0:
# 1563 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_Tore_R4_Text_1:
# 1569 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: …Fair.$"

ParcelCoast_Tore_R4_Text_2:
# 1570 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Tore_R5_Text_0:
# 1577 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Tore_R5_Text_1:
# 1584 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_T_Helge_Text_0:
# 1592 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Quay crew. We tie up the fleet\n"
	.string "and count what's missing. Battle, it's\l"
	.string "quicker than counting.$"

ParcelCoast_T_Helge_Text_1:
# 1593 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Quicker, yes.$"

ParcelCoast_T_Helge_Text_2:
# 1608 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Forty-one boats went out.\n"
	.string "Forty-one came back. The count's\l"
	.string "always right. It's the holds that are\l"
	.string "wrong.$"

ParcelCoast_T_Helge_R2_Text_0:
# 1619 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_T_Helge_R2_Text_1:
# 1621 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Fine. Same spot.$"

ParcelCoast_T_Helge_R2_Text_2:
# 1625 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Right. That's the whole of it.$"

ParcelCoast_T_Helge_R2_Text_3:
# 1626 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_T_Helge_R3_Text_0:
# 1633 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelCoast_T_Helge_R3_Text_1:
# 1639 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: …Again, then. Later.$"

ParcelCoast_T_Helge_R3_Text_2:
# 1640 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_T_Helge_R4_Text_0:
# 1647 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_T_Helge_R4_Text_1:
# 1653 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: That's the one I wanted to see.$"

ParcelCoast_T_Helge_R4_Text_2:
# 1654 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_T_Helge_R5_Text_0:
# 1661 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_T_Helge_R5_Text_1:
# 1668 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_T_Anton_Text_0:
# 1674 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: The beach is the only bit of this\n"
	.string "coast that's free. Even the sand's got\l"
	.string "rings in it. Battle?$"

ParcelCoast_T_Anton_Text_1:
# 1675 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Free, and lost.$"

ParcelCoast_T_Anton_Text_2:
# 1690 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Drum rings. Fuel drums. They roll\n"
	.string "off the quay in storms. The crest's on\l"
	.string "all of them.$"

ParcelCoast_T_Anton_R2_Text_0:
# 1701 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelCoast_T_Anton_R2_Text_1:
# 1703 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Fine. Same spot.$"

ParcelCoast_T_Anton_R2_Text_2:
# 1707 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: …Fair.$"

ParcelCoast_T_Anton_R2_Text_3:
# 1708 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_T_Anton_R3_Text_0:
# 1715 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCoast_T_Anton_R3_Text_1:
# 1721 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Noted. Properly, this time.$"

ParcelCoast_T_Anton_R3_Text_2:
# 1722 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_T_Anton_R4_Text_0:
# 1729 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_T_Anton_R4_Text_1:
# 1735 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: …Again, then. Later.$"

ParcelCoast_T_Anton_R4_Text_2:
# 1736 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_T_Anton_R5_Text_0:
# 1743 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCoast_T_Anton_R5_Text_1:
# 1750 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_T_Beate_Text_0:
# 1756 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Up from the mainland for the\n"
	.string "fish. Everyone says the fish. Nobody\l"
	.string "says there's hardly any. Battle, darling.$"

ParcelCoast_T_Beate_Text_1:
# 1757 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Hardly any of that, either.$"

ParcelCoast_T_Beate_Text_2:
# 1772 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: The brochure says 'working\n"
	.string "harbour'. It is working. Something's\l"
	.string "working. It isn't the sea.$"

ParcelCoast_T_Beate_R2_Text_0:
# 1783 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: I kept the team up for this.\n"
	.string "Again?$"

ParcelCoast_T_Beate_R2_Text_1:
# 1785 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Another time, then.$"

ParcelCoast_T_Beate_R2_Text_2:
# 1789 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Still yours.$"

ParcelCoast_T_Beate_R2_Text_3:
# 1790 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_T_Beate_R3_Text_0:
# 1797 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_T_Beate_R3_Text_1:
# 1803 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: …Fair.$"

ParcelCoast_T_Beate_R3_Text_2:
# 1804 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_T_Beate_R4_Text_0:
# 1811 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCoast_T_Beate_R4_Text_1:
# 1817 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: That's the one I wanted to see.$"

ParcelCoast_T_Beate_R4_Text_2:
# 1818 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_T_Beate_R5_Text_0:
# 1825 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_T_Beate_R5_Text_1:
# 1832 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Shell_Text_0:
# 1841 "data/maps/ParcelCoast/scripts.pory"
	.string "Half-buried in the sand between two\n"
	.string "drum rings: a shell. Whole. Pink inside.\p"
	.string "The first one anyone has found on this\n"
	.string "beach in years. Taken.$"

ParcelCoast_Shell_Text_1:
# 1846 "data/maps/ParcelCoast/scripts.pory"
	.string "Sand. Drum rings. The hollow where a\n"
	.string "shell was.$"

ParcelCoast_PerrinScene_Text_0:
# 1859 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelCoast_PerrinScene_Text_1:
# 1863 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: Coastal Holdings liaison. New\n"
	.string "card, new coat. Don't look at me like\l"
	.string "that.\p"
	.string "One last time, WREN. Then I'm done\n"
	.string "pretending we're on the same side. I\l"
	.string "never was. I just liked you.$"

ParcelCoast_PerrinScene_Text_2:
# 1864 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: …Yeah. I know.$"

ParcelCoast_PerrinScene_Text_3:
# 1865 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: Write it true, then. Whatever it\n"
	.string "costs. I'll be upstairs, typing the\l"
	.string "response.\p"
	.string "I type well. HOLLIS says so.$"

ParcelCoast_PerrinTalk_Text_0:
# 1878 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelCoast_Epilogue_Text_0:
# 1889 "data/maps/ParcelCoast/scripts.pory"
	.string "MEREHOLT COAST. The cranes swing on\n"
	.string "schedule. The quota review runs to\l"
	.string "spring, and the boats go out under it\l"
	.string "and come back with what there is.$"

ParcelCoast_Epilogue_Text_1:
# 1890 "data/maps/ParcelCoast/scripts.pory"
	.string "At the east berth the dredge is tied up\n"
	.string "with its bucket down and a padlock\l"
	.string "through the chain. The night crew sit on\l"
	.string "the quay edge with nothing to lift,\l"
	.string "which the docker says is a kind of work.$"

ParcelCoast_Epilogue_Text_2:
# 1892 "data/maps/ParcelCoast/scripts.pory"
	.string "The office above the docks has a blank\n"
	.string "where a nameplate was. The kettle is on\l"
	.string "anyway. The secretary comes in on her\l"
	.string "own time, pours two cups, and drinks\l"
	.string "neither.$"

ParcelCoast_Epilogue_Text_3:
# 1894 "data/maps/ParcelCoast/scripts.pory"
	.string "The office above the docks keeps its\n"
	.string "nameplate. HOLLIS is at the window with\l"
	.string "the fourth letter in the typewriter and\l"
	.string "the ribbon worn to grey. She has not\l"
	.string "sent it. She is not going to stop writing\l"
	.string "it.$"

ParcelCoast_Epilogue_Text_4:
# 1896 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: You want to know if it was worth\n"
	.string "it. Wrong verb. Ask if it was true.\p"
	.string "It was. Go and rest. Then go and read\n"
	.string "something else. There's a lot of region\l"
	.string "left.$"

ParcelCoast_GymHarland_Rematch_Text_0:
# 1908 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: They read you aloud at the\n"
	.string "hearing. I'd read you the old way, too.\l"
	.string "Boat's in, nets are dry, and the crew's\l"
	.string "been training on the dredge line out of\l"
	.string "spite.\p"
	.string "Full strength. Aye?$"

ParcelCoast_GymHarland_Rematch_Text_1:
# 1910 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Tide's at six. Offer stands.$"

ParcelCoast_GymHarland_Rematch_Text_2:
# 1914 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: …Aye. You read the water.\n"
	.string "Still.$"

ParcelCoast_GymHarland_Rematch_Text_3:
# 1915 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Tide's at six. Any day you like.$"

ParcelCoast_Dorsey_Text_0:
# 1925 "data/maps/ParcelCoast/scripts.pory"
	.string "DORSEY: Development that listens. I\n"
	.string "said it at the hearing. They wrote down\l"
	.string "'listens' in quotes. I've seen the\l"
	.string "transcript.\p"
	.string "The quotes are fair.$"

ParcelCoast_Dorsey_Text_1:
# 1930 "data/maps/ParcelCoast/scripts.pory"
	.string "DORSEY: You'll find the hearing room up\n"
	.string "the street when the time comes. I'll be\l"
	.string "in it. I sit on the review board's local\l"
	.string "panel. Somebody from here should.\p"
	.string "I know what that looks like. Revolving\n"
	.string "door. The door revolves because the\l"
	.string "building only has one.$"

ParcelCoast_Dorsey_Text_2:
# 1934 "data/maps/ParcelCoast/scripts.pory"
	.string "DORSEY: --six berths, a cold store, and\n"
	.string "forty jobs that weren't here in spring.\l"
	.string "And a plaque, because people like to see\l"
	.string "a thing has a date on it.\p"
	.string "RANGER. The coast too. You're thorough;\n"
	.string "HOLLIS said so. Witness the quay. Write\l"
	.string "'forty'. It's a true number.\p"
	.string "They're all true numbers. That has never\n"
	.string "been the problem.$"

ParcelCoast_SurveyStake_Text_0:
# 1942 "data/maps/ParcelCoast/scripts.pory"
	.string "A survey stake set into a crack in the\n"
	.string "quay stones, red cloth snapping in the\l"
	.string "wind off the harbour. The dockers walk\l"
	.string "round it.$"

ParcelCoast_SurveyStake_Text_1:
# 1947 "data/maps/ParcelCoast/scripts.pory"
	.string "Second reading. The dredge is tied up\n"
	.string "with a padlock through the chain.\l"
	.string "Eleven fish, one length, in the last\l"
	.string "landing before it stopped; the\l"
	.string "inspector's second column has begun.\l"
	.string "The cranes swing on schedule.\p"
	.string "You write the padlock. Nobody else will\n"
	.string "think it is data.$"

ParcelCoast_PairQuay_Text_0:
# 1958 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Dredge is stopped pending\n"
	.string "review. I'm on the quay crew now.\l"
	.string "Unloading what the boats bring in.$"

ParcelCoast_PairQuay_Text_1:
# 1959 "data/maps/ParcelCoast/scripts.pory"
	.string "FISHER: Which is?$"

ParcelCoast_PairQuay_Text_2:
# 1960 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Not much. But it's yours, and\n"
	.string "it's wet, and I'm paid to lift it. That's a\l"
	.string "job that doesn't argue with itself.$"

ParcelCoast_PairQuay_Text_3:
# 1961 "data/maps/ParcelCoast/scripts.pory"
	.string "FISHER: Give it a season. The small ones\n"
	.string "come back first. Then we'll both have\l"
	.string "work that argues less.$"

ParcelCoast_PairQuay_Text_4:
# 1963 "data/maps/ParcelCoast/scripts.pory"
	.string "FISHER: The ranger walked the whole\n"
	.string "quay with a notebook. Didn't write\l"
	.string "'forty'.$"

ParcelCoast_PairQuay_Text_5:
# 1964 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: What did they write?$"

ParcelCoast_PairQuay_Text_6:
# 1965 "data/maps/ParcelCoast/scripts.pory"
	.string "FISHER: The catch book. The undersize\n"
	.string "column. The nine objections nobody had\l"
	.string "read. They read them.$"

ParcelCoast_PairQuay_Text_7:
# 1966 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: And the forty jobs?$"

ParcelCoast_PairQuay_Text_8:
# 1967 "data/maps/ParcelCoast/scripts.pory"
	.string "FISHER: Those too. All true numbers.\n"
	.string "That was never the problem; the ranger\l"
	.string "said that back to DORSEY in his own\l"
	.string "words.$"

ParcelCoast_PairQuay_Text_9:
# 1969 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Forty jobs, DORSEY says. Forty.\n"
	.string "I'm one. You're not.$"

ParcelCoast_PairQuay_Text_10:
# 1970 "data/maps/ParcelCoast/scripts.pory"
	.string "FISHER: I had a job. It swam. Your\n"
	.string "dredge brought it up dead by the tonne\l"
	.string "and called it a landing.$"

ParcelCoast_PairQuay_Text_11:
# 1971 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: I didn't build the dredge.$"

ParcelCoast_PairQuay_Text_12:
# 1972 "data/maps/ParcelCoast/scripts.pory"
	.string "FISHER: No. You just need it. So did I,\n"
	.string "once. That's how they get you both\l"
	.string "ends.$"

ParcelCoast_PairOffice_Text_0:
# 1981 "data/maps/ParcelCoast/scripts.pory"
	.string "SECRETARY: Line forty's been struck. No\n"
	.string "more hospitality budget. She buys the\l"
	.string "tea herself now.$"

ParcelCoast_PairOffice_Text_1:
# 1982 "data/maps/ParcelCoast/scripts.pory"
	.string "ACCOUNTANT: Restructured.$"

ParcelCoast_PairOffice_Text_2:
# 1983 "data/maps/ParcelCoast/scripts.pory"
	.string "SECRETARY: Her word for it. She typed\n"
	.string "the memo about herself and spelled her\l"
	.string "own name right, which is more than the\l"
	.string "board managed.$"

ParcelCoast_PairOffice_Text_3:
# 1984 "data/maps/ParcelCoast/scripts.pory"
	.string "ACCOUNTANT: Still pours two cups.$"

ParcelCoast_PairOffice_Text_4:
# 1985 "data/maps/ParcelCoast/scripts.pory"
	.string "SECRETARY: Still pours two. One of them\n"
	.string "goes cold every afternoon. Nobody's\l"
	.string "told her to stop.$"

ParcelCoast_PairOffice_Text_5:
# 1987 "data/maps/ParcelCoast/scripts.pory"
	.string "ACCOUNTANT: The ranger went up. Came\n"
	.string "down an hour later. Didn't look\l"
	.string "threatened.$"

ParcelCoast_PairOffice_Text_6:
# 1988 "data/maps/ParcelCoast/scripts.pory"
	.string "SECRETARY: Ms. AUNE doesn't threaten.\n"
	.string "She explains the weather.$"

ParcelCoast_PairOffice_Text_7:
# 1989 "data/maps/ParcelCoast/scripts.pory"
	.string "ACCOUNTANT: And the ranger?$"

ParcelCoast_PairOffice_Text_8:
# 1990 "data/maps/ParcelCoast/scripts.pory"
	.string "SECRETARY: Said thank you for the tea.\n"
	.string "Then went and read the catch book for\l"
	.string "two hours. In the cannery. Standing up.$"

ParcelCoast_PairOffice_Text_9:
# 1992 "data/maps/ParcelCoast/scripts.pory"
	.string "SECRETARY: Ms. AUNE's had the kettle on\n"
	.string "since eight. She's expecting someone.$"

ParcelCoast_PairOffice_Text_10:
# 1993 "data/maps/ParcelCoast/scripts.pory"
	.string "ACCOUNTANT: She's always expecting\n"
	.string "someone. It's a tactic. The tea's ready\l"
	.string "before you've decided to come up.$"

ParcelCoast_PairOffice_Text_11:
# 1994 "data/maps/ParcelCoast/scripts.pory"
	.string "SECRETARY: It's very good tea.$"

ParcelCoast_PairOffice_Text_12:
# 1995 "data/maps/ParcelCoast/scripts.pory"
	.string "ACCOUNTANT: It's budgeted. Line forty.\n"
	.string "Hospitality, conservation programme.$"

ParcelCoast_Stringer_Text_0:
# 2008 "data/maps/ParcelCoast/scripts.pory"
	.string "INGER: I ran your Reedmere sentence\n"
	.string "again, at the top, over the record of\l"
	.string "the sitting. The water is a living\l"
	.string "corridor.\p"
	.string "Someone else's words, my byline. That's\n"
	.string "the job. It's the first time I've been\l"
	.string "glad of it.$"

ParcelCoast_Stringer_Text_1:
# 2010 "data/maps/ParcelCoast/scripts.pory"
	.string "INGER: 'The ranger declined to\n"
	.string "comment.' I ran it again at the top, over\l"
	.string "the record of the sitting.\p"
	.string "It read better than every comment in\n"
	.string "the room. Including mine. I've started\l"
	.string "to think declining is a kind of\l"
	.string "sentence.$"

ParcelCoast_Stringer_Text_2:
# 2012 "data/maps/ParcelCoast/scripts.pory"
	.string "INGER: Item seven took the whole\n"
	.string "afternoon. I wrote it as it happened. I\l"
	.string "don't think I've written anything as it\l"
	.string "happened before. Everything else was\l"
	.string "after.\p"
	.string "Go on. You've got a region. I've got a\n"
	.string "deadline, for once.$"

ParcelCoast_Stringer_Text_3:
# 2014 "data/maps/ParcelCoast/scripts.pory"
	.string "INGER: The sitting's coming. Item seven\n"
	.string "is one line, as every year. I'll be in the\l"
	.string "back row, as every year.\p"
	.string "If item seven is more than one line this\n"
	.string "year, I'll know who did that. I'd like to\l"
	.string "be able to print the name. Think about\l"
	.string "it.$"

ParcelCoast_Stringer_Text_4:
# 2016 "data/maps/ParcelCoast/scripts.pory"
	.string "INGER: Forty jobs, the Commissioner\n"
	.string "says. I've counted thirty-one. The\l"
	.string "other nine are 'in the pipeline'.\p"
	.string "I asked which pipeline. He laughed.\n"
	.string "People laugh at me a lot in this town. It\l"
	.string "means I asked the right thing.$"

ParcelCoast_FindRoost_Text_0:
# 2026 "data/maps/ParcelCoast/scripts.pory"
	.string "The east end of the quay wall. WINGULL\n"
	.string "along the top of it, shoulder to\l"
	.string "shoulder, facing the wind. You count\l"
	.string "them twice, the way the Survey does.\l"
	.string "Sixty-one. Sixty-one.\p"
	.string "The wall was built to stop the sea\n"
	.string "reaching the beach. It stopped the\l"
	.string "beach instead. The gulls do not know\l"
	.string "that.$"

ParcelCoast_FindRoost_Text_1:
# 2029 "data/maps/ParcelCoast/scripts.pory"
	.string "The east end of the quay wall. The\n"
	.string "WINGULL are still there, sixty-odd,\l"
	.string "facing the wind.$"

ParcelCoast_PairMarket_Text_0:
# 2037 "data/maps/ParcelCoast/scripts.pory"
	.string "STALLHOLDER: Small fish on the stall\n"
	.string "again. Three sizes. The cold store won't\l"
	.string "take mixed.$"

ParcelCoast_PairMarket_Text_1:
# 2038 "data/maps/ParcelCoast/scripts.pory"
	.string "BUYER: I'll take mixed. I'll pack them by\n"
	.string "hand.$"

ParcelCoast_PairMarket_Text_2:
# 2039 "data/maps/ParcelCoast/scripts.pory"
	.string "STALLHOLDER: That's slower.$"

ParcelCoast_PairMarket_Text_3:
# 2040 "data/maps/ParcelCoast/scripts.pory"
	.string "BUYER: I pack fish. I'm learning to read\n"
	.string "them. The ranger made it look like a job.$"

ParcelCoast_PairMarket_Text_4:
# 2042 "data/maps/ParcelCoast/scripts.pory"
	.string "BUYER: The ranger stood at the stall\n"
	.string "for an hour writing down the lengths.$"

ParcelCoast_PairMarket_Text_5:
# 2043 "data/maps/ParcelCoast/scripts.pory"
	.string "STALLHOLDER: Eleven. All the same. They\n"
	.string "wrote it the way the inspector writes,\l"
	.string "and then they asked me how long it had\l"
	.string "been like that, and I said two years,\l"
	.string "and they wrote that too.$"

ParcelCoast_PairMarket_Text_6:
# 2044 "data/maps/ParcelCoast/scripts.pory"
	.string "BUYER: And?$"

ParcelCoast_PairMarket_Text_7:
# 2045 "data/maps/ParcelCoast/scripts.pory"
	.string "STALLHOLDER: And nobody had ever\n"
	.string "asked me how long. Only how much.$"

ParcelCoast_PairMarket_Text_8:
# 2047 "data/maps/ParcelCoast/scripts.pory"
	.string "STALLHOLDER: Eleven fish, all one\n"
	.string "length, and the FOUNDATION's cold store\l"
	.string "buys the lot.$"

ParcelCoast_PairMarket_Text_9:
# 2048 "data/maps/ParcelCoast/scripts.pory"
	.string "BUYER: One length is easier to pack.$"

ParcelCoast_PairMarket_Text_10:
# 2049 "data/maps/ParcelCoast/scripts.pory"
	.string "STALLHOLDER: One length means the\n"
	.string "sea's only got one year of fish left in\l"
	.string "it.$"

ParcelCoast_PairMarket_Text_11:
# 2050 "data/maps/ParcelCoast/scripts.pory"
	.string "BUYER: I pack fish. I don't read seas.$"

ParcelCoast_PairMarket_Text_12:
# 2051 "data/maps/ParcelCoast/scripts.pory"
	.string "STALLHOLDER: Someone's going to have\n"
	.string "to.$"

ParcelCoast_Board1_Text_0:
# 2060 "data/maps/ParcelCoast/scripts.pory"
	.string "A SURVEY BOARD on the quay. MEREHOLT\n"
	.string "COAST. Kelp below the breakwater once,\l"
	.string "thick enough to hide a boat's hull. The\l"
	.string "dredge took the seabed the kelp held\l"
	.string "and the fish the kelp hid.\p"
	.string "The board lists the landings by year\n"
	.string "beside the kelp cover by year, and the\l"
	.string "Company's certification stamp beside\l"
	.string "both. The stamp is the only line that\l"
	.string "does not fall.$"

ParcelCoast_Board2_Text_0:
# 2065 "data/maps/ParcelCoast/scripts.pory"
	.string "A SURVEY BOARD at the gull colony.\n"
	.string "WINGULL nests on the warehouse roofs,\l"
	.string "counted from the crane: 400, 360, 310,\l"
	.string "190.\p"
	.string "The fishers say the gulls follow the\n"
	.string "boats. The board says the gulls follow\l"
	.string "the fish, and the boats follow the fish,\l"
	.string "and both are now following the same\l"
	.string "small fish.$"
