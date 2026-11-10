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
	msgbox ParcelCoast_GymHarland_Text_15, MSGBOX_YESNO
# 164 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_GymHarland_8
# 168 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_17, MSGBOX_DEFAULT
ParcelCoast_GymHarland_7:
# 170 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM6, ParcelCoast_GymHarland_Text_18
# 171 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_BADGE06_GET
# 172 "data/maps/ParcelCoast/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 173 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 174 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 5
# 175 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 176 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_19, MSGBOX_DEFAULT
# 177 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_HM02
# 178 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_20, MSGBOX_DEFAULT
# 179 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_2:
# 123 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_GymHarland_Rematch
	goto ParcelCoast_GymHarland_1

ParcelCoast_GymHarland_5:
# 126 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_GymHarland_12
# 132 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_COAST_SHIFT_DONE, ParcelCoast_GymHarland_15
# 157 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_12, MSGBOX_DEFAULT
# 158 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_8:
# 165 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_16, MSGBOX_DEFAULT
# 166 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_EXAM_6
	goto ParcelCoast_GymHarland_7

ParcelCoast_GymHarland_12:
# 127 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_0, MSGBOX_DEFAULT
# 128 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_1, MSGBOX_DEFAULT
# 129 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_15:
# 133 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_2, MSGBOX_DEFAULT
# 134 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_3, MSGBOX_YESNO
# 135 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_GymHarland_18
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

ParcelCoast_GymHarland_18:
# 136 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_4, MSGBOX_DEFAULT
# 137 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hale::
# 185 "data/maps/ParcelCoast/scripts.pory"
	lock
# 186 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 187 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Hale_2
# 192 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Hale_5
# 197 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 198 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 63
# 199 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 200 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelCoast_Hale_8
# 221 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_11, MSGBOX_DEFAULT
# 222 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_2:
# 188 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_0, MSGBOX_DEFAULT
# 189 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_5:
# 193 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_1, MSGBOX_DEFAULT
# 194 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_8:
# 201 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_2, MSGBOX_DEFAULT
# 202 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyCoast
# 203 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_3, MSGBOX_DEFAULT
# 204 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_4, MSGBOX_DEFAULT
# 205 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_5, MSGBOX_DEFAULT
# 206 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_6, MSGBOX_DEFAULT
# 207 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_7, MSGBOX_DEFAULT
# 208 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 6
# 209 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 210 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_8, MSGBOX_DEFAULT
# 211 "data/maps/ParcelCoast/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 212 "data/maps/ParcelCoast/scripts.pory"
	waitfanfare
# 213 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALDMERE_COASTAL_CERT
# 214 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_MAX_POTION, 5
# 215 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 216 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_9, MSGBOX_DEFAULT
# 217 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_10, MSGBOX_DEFAULT
# 218 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Worker::
# 228 "data/maps/ParcelCoast/scripts.pory"
	lock
# 229 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 230 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Worker_2
# 235 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Worker_5
# 240 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Worker_Text_2, MSGBOX_DEFAULT
# 241 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Worker_2:
# 231 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Worker_Text_0, MSGBOX_DEFAULT
# 232 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Worker_5:
# 236 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Worker_Text_1, MSGBOX_DEFAULT
# 237 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor1::
# 245 "data/maps/ParcelCoast/scripts.pory"
	lock
# 246 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 247 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Vendor1_2
# 252 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Vendor1_5
# 257 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor1_Text_2, MSGBOX_DEFAULT
# 258 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor1_2:
# 248 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor1_Text_0, MSGBOX_DEFAULT
# 249 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor1_5:
# 253 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor1_Text_1, MSGBOX_DEFAULT
# 254 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor2::
# 262 "data/maps/ParcelCoast/scripts.pory"
	lock
# 263 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 264 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Vendor2_2
# 269 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Vendor2_5
# 274 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor2_Text_2, MSGBOX_DEFAULT
# 275 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor2_2:
# 265 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor2_Text_0, MSGBOX_DEFAULT
# 266 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor2_5:
# 270 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor2_Text_1, MSGBOX_DEFAULT
# 271 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor3::
# 279 "data/maps/ParcelCoast/scripts.pory"
	lock
# 280 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 281 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Vendor3_2
# 286 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Vendor3_5
# 291 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor3_Text_2, MSGBOX_DEFAULT
# 292 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor3_2:
# 282 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor3_Text_0, MSGBOX_DEFAULT
# 283 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor3_5:
# 287 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor3_Text_1, MSGBOX_DEFAULT
# 288 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Vendor4::
# 296 "data/maps/ParcelCoast/scripts.pory"
	lock
# 297 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 298 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Vendor4_2
# 303 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Vendor4_5
# 308 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor4_Text_2, MSGBOX_DEFAULT
# 309 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor4_2:
# 299 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor4_Text_0, MSGBOX_DEFAULT
# 300 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Vendor4_5:
# 304 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Vendor4_Text_1, MSGBOX_DEFAULT
# 305 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Girl::
# 313 "data/maps/ParcelCoast/scripts.pory"
	lock
# 314 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 315 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Girl_2
# 320 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Girl_5
# 325 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Girl_Text_2, MSGBOX_DEFAULT
# 326 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Girl_2:
# 316 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Girl_Text_0, MSGBOX_DEFAULT
# 317 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Girl_5:
# 321 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Girl_Text_1, MSGBOX_DEFAULT
# 322 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Docker::
# 330 "data/maps/ParcelCoast/scripts.pory"
	lock
# 331 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 332 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Docker_2
# 337 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Docker_5
# 342 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Docker_Text_2, MSGBOX_DEFAULT
# 343 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Docker_2:
# 333 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Docker_Text_0, MSGBOX_DEFAULT
# 334 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Docker_5:
# 338 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Docker_Text_1, MSGBOX_DEFAULT
# 339 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_GullMan::
# 347 "data/maps/ParcelCoast/scripts.pory"
	lock
# 348 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 349 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOST, ParcelCoast_GullMan_5
ParcelCoast_GullMan_4:
# 359 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_ROOST_DONE, ParcelCoast_GullMan_3
# 365 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_GullMan_9
# 370 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_GullMan_16
# 375 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_5, MSGBOX_DEFAULT
# 376 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GullMan_2:
# 350 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOST_FOUND, ParcelCoast_GullMan_12
# 355 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_1, MSGBOX_DEFAULT
ParcelCoast_GullMan_11:
# 357 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GullMan_3:
# 360 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_2, MSGBOX_DEFAULT
# 361 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_Q_ROOST
# 362 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GullMan_5:
# 349 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_ROOST_DONE, ParcelCoast_GullMan_2
	goto ParcelCoast_GullMan_4

ParcelCoast_GullMan_9:
# 366 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_3, MSGBOX_DEFAULT
# 367 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GullMan_12:
# 351 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_0, MSGBOX_DEFAULT
# 352 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_BIG_PEARL, 1
# 353 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_Q_ROOST_DONE
	goto ParcelCoast_GullMan_11

ParcelCoast_GullMan_16:
# 371 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GullMan_Text_4, MSGBOX_DEFAULT
# 372 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_ReturnFerry::
# 382 "data/maps/ParcelCoast/scripts.pory"
	lock
# 383 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 384 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_ReturnFerry_2
# 389 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_1, MSGBOX_YESNO
# 390 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_ReturnFerry_5
# 395 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 396 "data/maps/ParcelCoast/scripts.pory"
	playse SE_SHIP
# 397 "data/maps/ParcelCoast/scripts.pory"
	delay 40
# 398 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_ISLE, 15, 31
# 399 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end

ParcelCoast_ReturnFerry_2:
# 385 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_0, MSGBOX_DEFAULT
# 386 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_ReturnFerry_5:
# 391 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_2, MSGBOX_DEFAULT
# 392 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_MereholtAide::
# 405 "data/maps/ParcelCoast/scripts.pory"
	lock
# 406 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 407 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelCoast_MereholtAide_2
# 412 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_1, MSGBOX_DEFAULT
# 413 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_2, MSGBOX_YESNO
# 414 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_MereholtAide_5
# 419 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 420 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_BOARDROOM, 4, 2
# 421 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end

ParcelCoast_MereholtAide_2:
# 408 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_0, MSGBOX_DEFAULT
# 409 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_MereholtAide_5:
# 415 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_3, MSGBOX_DEFAULT
# 416 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_ItemA::
# 426 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_PEARL
	end


ParcelCoast_ItemB::
# 427 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_BIG_PEARL
	end


ParcelCoast_ItemMaxElixir::
# 428 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_MAX_ELIXIR
	end


ParcelCoast_SignQuay::
# 430 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_SignQuay_Text_0, MSGBOX_SIGN
	end


ParcelCoast_SignMarket::
# 434 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_SignMarket_Text_0, MSGBOX_SIGN
	end


ParcelCoast_Brage::
# 440 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_BRAGE, ParcelCoast_Brage_Text_0, ParcelCoast_Brage_Text_1, ParcelCoast_Brage_FirstWin
# 444 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 445 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Brage_3
ParcelCoast_Brage_1:
# 448 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Brage_8
ParcelCoast_Brage_6:
# 451 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Brage_13
ParcelCoast_Brage_11:
# 454 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Brage_18
ParcelCoast_Brage_16:
# 457 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Brage_2:
# 446 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R2
	goto ParcelCoast_Brage_1

ParcelCoast_Brage_3:
# 445 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R2
	goto_if 0, ParcelCoast_Brage_2
	goto ParcelCoast_Brage_1

ParcelCoast_Brage_7:
# 449 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R3
	goto ParcelCoast_Brage_6

ParcelCoast_Brage_8:
# 448 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R3
	goto_if 0, ParcelCoast_Brage_7
	goto ParcelCoast_Brage_6

ParcelCoast_Brage_12:
# 452 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R4
	goto ParcelCoast_Brage_11

ParcelCoast_Brage_13:
# 451 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R4
	goto_if 0, ParcelCoast_Brage_12
	goto ParcelCoast_Brage_11

ParcelCoast_Brage_17:
# 455 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Brage_R5
	goto ParcelCoast_Brage_16

ParcelCoast_Brage_18:
# 454 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BRAGE_R5
	goto_if 0, ParcelCoast_Brage_17
	goto ParcelCoast_Brage_16


ParcelCoast_Brage_FirstWin::
# 461 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_Text_2, MSGBOX_DEFAULT
# 462 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R2::
# 466 "data/maps/ParcelCoast/scripts.pory"
	lock
# 467 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 468 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_0, MSGBOX_YESNO
# 469 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R2_2
# 474 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R2, ParcelCoast_Brage_R2_Text_2
# 475 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_3, MSGBOX_DEFAULT
# 476 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R2_2:
# 470 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 471 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R3::
# 480 "data/maps/ParcelCoast/scripts.pory"
	lock
# 481 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 482 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R3_Text_0, MSGBOX_YESNO
# 483 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R3_2
# 488 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R3, ParcelCoast_Brage_R3_Text_1
# 489 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R3_Text_2, MSGBOX_DEFAULT
# 490 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R3_2:
# 484 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 485 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R4::
# 494 "data/maps/ParcelCoast/scripts.pory"
	lock
# 495 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 496 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R4_Text_0, MSGBOX_YESNO
# 497 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R4_2
# 502 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R4, ParcelCoast_Brage_R2_Text_2
# 503 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R4_Text_1, MSGBOX_DEFAULT
# 504 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R4_2:
# 498 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 499 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Brage_R5::
# 508 "data/maps/ParcelCoast/scripts.pory"
	lock
# 509 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 510 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R5_Text_0, MSGBOX_YESNO
# 511 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Brage_R5_2
# 516 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BRAGE_R5, ParcelCoast_Brage_R5_Text_1
# 517 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R5_Text_2, MSGBOX_DEFAULT
# 518 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Brage_R5_2:
# 512 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Brage_R2_Text_1, MSGBOX_DEFAULT
# 513 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod::
# 522 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_FROD, ParcelCoast_Frod_Text_0, ParcelCoast_Frod_Text_1, ParcelCoast_Frod_FirstWin
# 526 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 527 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Frod_3
ParcelCoast_Frod_1:
# 530 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Frod_8
ParcelCoast_Frod_6:
# 533 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Frod_13
ParcelCoast_Frod_11:
# 536 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Frod_18
ParcelCoast_Frod_16:
# 539 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Frod_2:
# 528 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R2
	goto ParcelCoast_Frod_1

ParcelCoast_Frod_3:
# 527 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R2
	goto_if 0, ParcelCoast_Frod_2
	goto ParcelCoast_Frod_1

ParcelCoast_Frod_7:
# 531 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R3
	goto ParcelCoast_Frod_6

ParcelCoast_Frod_8:
# 530 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R3
	goto_if 0, ParcelCoast_Frod_7
	goto ParcelCoast_Frod_6

ParcelCoast_Frod_12:
# 534 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R4
	goto ParcelCoast_Frod_11

ParcelCoast_Frod_13:
# 533 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R4
	goto_if 0, ParcelCoast_Frod_12
	goto ParcelCoast_Frod_11

ParcelCoast_Frod_17:
# 537 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Frod_R5
	goto ParcelCoast_Frod_16

ParcelCoast_Frod_18:
# 536 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_FROD_R5
	goto_if 0, ParcelCoast_Frod_17
	goto ParcelCoast_Frod_16


ParcelCoast_Frod_FirstWin::
# 543 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_Text_2, MSGBOX_DEFAULT
# 544 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R2::
# 548 "data/maps/ParcelCoast/scripts.pory"
	lock
# 549 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 550 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_0, MSGBOX_YESNO
# 551 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R2_2
# 556 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R2, ParcelCoast_Frod_R2_Text_2
# 557 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_3, MSGBOX_DEFAULT
# 558 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R2_2:
# 552 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 553 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R3::
# 562 "data/maps/ParcelCoast/scripts.pory"
	lock
# 563 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 564 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R3_Text_0, MSGBOX_YESNO
# 565 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R3_2
# 570 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R3, ParcelCoast_Frod_R2_Text_2
# 571 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R3_Text_1, MSGBOX_DEFAULT
# 572 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R3_2:
# 566 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 567 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R4::
# 576 "data/maps/ParcelCoast/scripts.pory"
	lock
# 577 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 578 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R4_Text_0, MSGBOX_YESNO
# 579 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R4_2
# 584 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R4, ParcelCoast_Frod_R4_Text_1
# 585 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R4_Text_2, MSGBOX_DEFAULT
# 586 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R4_2:
# 580 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 581 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Frod_R5::
# 590 "data/maps/ParcelCoast/scripts.pory"
	lock
# 591 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 592 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R5_Text_0, MSGBOX_YESNO
# 593 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Frod_R5_2
# 598 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_FROD_R5, ParcelCoast_Frod_R5_Text_1
# 599 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R5_Text_2, MSGBOX_DEFAULT
# 600 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Frod_R5_2:
# 594 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Frod_R2_Text_1, MSGBOX_DEFAULT
# 595 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda::
# 604 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_GYDA, ParcelCoast_Gyda_Text_0, ParcelCoast_Gyda_Text_1, ParcelCoast_Gyda_FirstWin
# 608 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 609 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Gyda_3
ParcelCoast_Gyda_1:
# 612 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Gyda_8
ParcelCoast_Gyda_6:
# 615 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Gyda_13
ParcelCoast_Gyda_11:
# 618 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Gyda_18
ParcelCoast_Gyda_16:
# 621 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Gyda_2:
# 610 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R2
	goto ParcelCoast_Gyda_1

ParcelCoast_Gyda_3:
# 609 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R2
	goto_if 0, ParcelCoast_Gyda_2
	goto ParcelCoast_Gyda_1

ParcelCoast_Gyda_7:
# 613 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R3
	goto ParcelCoast_Gyda_6

ParcelCoast_Gyda_8:
# 612 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R3
	goto_if 0, ParcelCoast_Gyda_7
	goto ParcelCoast_Gyda_6

ParcelCoast_Gyda_12:
# 616 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R4
	goto ParcelCoast_Gyda_11

ParcelCoast_Gyda_13:
# 615 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R4
	goto_if 0, ParcelCoast_Gyda_12
	goto ParcelCoast_Gyda_11

ParcelCoast_Gyda_17:
# 619 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Gyda_R5
	goto ParcelCoast_Gyda_16

ParcelCoast_Gyda_18:
# 618 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_GYDA_R5
	goto_if 0, ParcelCoast_Gyda_17
	goto ParcelCoast_Gyda_16


ParcelCoast_Gyda_FirstWin::
# 625 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_Text_2, MSGBOX_DEFAULT
# 626 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R2::
# 630 "data/maps/ParcelCoast/scripts.pory"
	lock
# 631 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 632 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_0, MSGBOX_YESNO
# 633 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R2_2
# 638 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R2, ParcelCoast_Gyda_R2_Text_2
# 639 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_3, MSGBOX_DEFAULT
# 640 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R2_2:
# 634 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 635 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R3::
# 644 "data/maps/ParcelCoast/scripts.pory"
	lock
# 645 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 646 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R3_Text_0, MSGBOX_YESNO
# 647 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R3_2
# 652 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R3, ParcelCoast_Gyda_R3_Text_1
# 653 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R3_Text_2, MSGBOX_DEFAULT
# 654 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R3_2:
# 648 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 649 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R4::
# 658 "data/maps/ParcelCoast/scripts.pory"
	lock
# 659 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 660 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R4_Text_0, MSGBOX_YESNO
# 661 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R4_2
# 666 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R4, ParcelCoast_Gyda_R3_Text_1
# 667 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R4_Text_1, MSGBOX_DEFAULT
# 668 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R4_2:
# 662 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 663 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Gyda_R5::
# 672 "data/maps/ParcelCoast/scripts.pory"
	lock
# 673 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 674 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R5_Text_0, MSGBOX_YESNO
# 675 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Gyda_R5_2
# 680 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_GYDA_R5, ParcelCoast_Gyda_R3_Text_1
# 681 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R5_Text_1, MSGBOX_DEFAULT
# 682 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Gyda_R5_2:
# 676 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Gyda_R2_Text_1, MSGBOX_DEFAULT
# 677 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar::
# 686 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_HROAR, ParcelCoast_Hroar_Text_0, ParcelCoast_Hroar_Text_1, ParcelCoast_Hroar_FirstWin
# 690 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 691 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Hroar_3
ParcelCoast_Hroar_1:
# 694 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Hroar_8
ParcelCoast_Hroar_6:
# 697 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Hroar_13
ParcelCoast_Hroar_11:
# 700 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Hroar_18
ParcelCoast_Hroar_16:
# 703 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Hroar_2:
# 692 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R2
	goto ParcelCoast_Hroar_1

ParcelCoast_Hroar_3:
# 691 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R2
	goto_if 0, ParcelCoast_Hroar_2
	goto ParcelCoast_Hroar_1

ParcelCoast_Hroar_7:
# 695 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R3
	goto ParcelCoast_Hroar_6

ParcelCoast_Hroar_8:
# 694 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R3
	goto_if 0, ParcelCoast_Hroar_7
	goto ParcelCoast_Hroar_6

ParcelCoast_Hroar_12:
# 698 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R4
	goto ParcelCoast_Hroar_11

ParcelCoast_Hroar_13:
# 697 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R4
	goto_if 0, ParcelCoast_Hroar_12
	goto ParcelCoast_Hroar_11

ParcelCoast_Hroar_17:
# 701 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Hroar_R5
	goto ParcelCoast_Hroar_16

ParcelCoast_Hroar_18:
# 700 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HROAR_R5
	goto_if 0, ParcelCoast_Hroar_17
	goto ParcelCoast_Hroar_16


ParcelCoast_Hroar_FirstWin::
# 707 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_Text_2, MSGBOX_DEFAULT
# 708 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R2::
# 712 "data/maps/ParcelCoast/scripts.pory"
	lock
# 713 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 714 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_0, MSGBOX_YESNO
# 715 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R2_2
# 720 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R2, ParcelCoast_Hroar_R2_Text_2
# 721 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_3, MSGBOX_DEFAULT
# 722 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R2_2:
# 716 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 717 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R3::
# 726 "data/maps/ParcelCoast/scripts.pory"
	lock
# 727 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 728 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R3_Text_0, MSGBOX_YESNO
# 729 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R3_2
# 734 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R3, ParcelCoast_Hroar_R2_Text_2
# 735 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R3_Text_1, MSGBOX_DEFAULT
# 736 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R3_2:
# 730 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 731 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R4::
# 740 "data/maps/ParcelCoast/scripts.pory"
	lock
# 741 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 742 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R4_Text_0, MSGBOX_YESNO
# 743 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R4_2
# 748 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R4, ParcelCoast_Hroar_R4_Text_1
# 749 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R4_Text_2, MSGBOX_DEFAULT
# 750 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R4_2:
# 744 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 745 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hroar_R5::
# 754 "data/maps/ParcelCoast/scripts.pory"
	lock
# 755 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 756 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R5_Text_0, MSGBOX_YESNO
# 757 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Hroar_R5_2
# 762 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HROAR_R5, ParcelCoast_Hroar_R5_Text_1
# 763 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R5_Text_2, MSGBOX_DEFAULT
# 764 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hroar_R5_2:
# 758 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hroar_R2_Text_1, MSGBOX_DEFAULT
# 759 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid::
# 768 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_JORID, ParcelCoast_Jorid_Text_0, ParcelCoast_Jorid_Text_1, ParcelCoast_Jorid_FirstWin
# 772 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 773 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Jorid_3
ParcelCoast_Jorid_1:
# 776 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Jorid_8
ParcelCoast_Jorid_6:
# 779 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Jorid_13
ParcelCoast_Jorid_11:
# 782 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Jorid_18
ParcelCoast_Jorid_16:
# 785 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Jorid_2:
# 774 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R2
	goto ParcelCoast_Jorid_1

ParcelCoast_Jorid_3:
# 773 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R2
	goto_if 0, ParcelCoast_Jorid_2
	goto ParcelCoast_Jorid_1

ParcelCoast_Jorid_7:
# 777 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R3
	goto ParcelCoast_Jorid_6

ParcelCoast_Jorid_8:
# 776 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R3
	goto_if 0, ParcelCoast_Jorid_7
	goto ParcelCoast_Jorid_6

ParcelCoast_Jorid_12:
# 780 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R4
	goto ParcelCoast_Jorid_11

ParcelCoast_Jorid_13:
# 779 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R4
	goto_if 0, ParcelCoast_Jorid_12
	goto ParcelCoast_Jorid_11

ParcelCoast_Jorid_17:
# 783 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Jorid_R5
	goto ParcelCoast_Jorid_16

ParcelCoast_Jorid_18:
# 782 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_JORID_R5
	goto_if 0, ParcelCoast_Jorid_17
	goto ParcelCoast_Jorid_16


ParcelCoast_Jorid_FirstWin::
# 789 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_Text_2, MSGBOX_DEFAULT
# 790 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R2::
# 794 "data/maps/ParcelCoast/scripts.pory"
	lock
# 795 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 796 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_0, MSGBOX_YESNO
# 797 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R2_2
# 802 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R2, ParcelCoast_Jorid_R2_Text_2
# 803 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_3, MSGBOX_DEFAULT
# 804 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R2_2:
# 798 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 799 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R3::
# 808 "data/maps/ParcelCoast/scripts.pory"
	lock
# 809 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 810 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R3_Text_0, MSGBOX_YESNO
# 811 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R3_2
# 816 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R3, ParcelCoast_Jorid_R3_Text_1
# 817 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R3_Text_2, MSGBOX_DEFAULT
# 818 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R3_2:
# 812 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 813 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R4::
# 822 "data/maps/ParcelCoast/scripts.pory"
	lock
# 823 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 824 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R4_Text_0, MSGBOX_YESNO
# 825 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R4_2
# 830 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R4, ParcelCoast_Jorid_R4_Text_1
# 831 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R4_Text_2, MSGBOX_DEFAULT
# 832 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R4_2:
# 826 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 827 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Jorid_R5::
# 836 "data/maps/ParcelCoast/scripts.pory"
	lock
# 837 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 838 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R5_Text_0, MSGBOX_YESNO
# 839 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Jorid_R5_2
# 844 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_JORID_R5, ParcelCoast_Jorid_R4_Text_1
# 845 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R5_Text_1, MSGBOX_DEFAULT
# 846 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Jorid_R5_2:
# 840 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Jorid_R2_Text_1, MSGBOX_DEFAULT
# 841 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil::
# 850 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_KETIL, ParcelCoast_Ketil_Text_0, ParcelCoast_Ketil_Text_1, ParcelCoast_Ketil_FirstWin
# 854 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 855 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Ketil_3
ParcelCoast_Ketil_1:
# 858 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Ketil_8
ParcelCoast_Ketil_6:
# 861 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Ketil_13
ParcelCoast_Ketil_11:
# 864 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Ketil_18
ParcelCoast_Ketil_16:
# 867 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Ketil_2:
# 856 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R2
	goto ParcelCoast_Ketil_1

ParcelCoast_Ketil_3:
# 855 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R2
	goto_if 0, ParcelCoast_Ketil_2
	goto ParcelCoast_Ketil_1

ParcelCoast_Ketil_7:
# 859 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R3
	goto ParcelCoast_Ketil_6

ParcelCoast_Ketil_8:
# 858 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R3
	goto_if 0, ParcelCoast_Ketil_7
	goto ParcelCoast_Ketil_6

ParcelCoast_Ketil_12:
# 862 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R4
	goto ParcelCoast_Ketil_11

ParcelCoast_Ketil_13:
# 861 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R4
	goto_if 0, ParcelCoast_Ketil_12
	goto ParcelCoast_Ketil_11

ParcelCoast_Ketil_17:
# 865 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ketil_R5
	goto ParcelCoast_Ketil_16

ParcelCoast_Ketil_18:
# 864 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_KETIL_R5
	goto_if 0, ParcelCoast_Ketil_17
	goto ParcelCoast_Ketil_16


ParcelCoast_Ketil_FirstWin::
# 871 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_Text_2, MSGBOX_DEFAULT
# 872 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R2::
# 876 "data/maps/ParcelCoast/scripts.pory"
	lock
# 877 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 878 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_0, MSGBOX_YESNO
# 879 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R2_2
# 884 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R2, ParcelCoast_Ketil_R2_Text_2
# 885 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_3, MSGBOX_DEFAULT
# 886 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R2_2:
# 880 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 881 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R3::
# 890 "data/maps/ParcelCoast/scripts.pory"
	lock
# 891 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 892 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R3_Text_0, MSGBOX_YESNO
# 893 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R3_2
# 898 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R3, ParcelCoast_Ketil_R3_Text_1
# 899 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R3_Text_2, MSGBOX_DEFAULT
# 900 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R3_2:
# 894 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 895 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R4::
# 904 "data/maps/ParcelCoast/scripts.pory"
	lock
# 905 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 906 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R4_Text_0, MSGBOX_YESNO
# 907 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R4_2
# 912 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R4, ParcelCoast_Ketil_R4_Text_1
# 913 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R4_Text_2, MSGBOX_DEFAULT
# 914 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R4_2:
# 908 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 909 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ketil_R5::
# 918 "data/maps/ParcelCoast/scripts.pory"
	lock
# 919 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 920 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R5_Text_0, MSGBOX_YESNO
# 921 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ketil_R5_2
# 926 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_KETIL_R5, ParcelCoast_Ketil_R5_Text_1
# 927 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R5_Text_2, MSGBOX_DEFAULT
# 928 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ketil_R5_2:
# 922 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ketil_R2_Text_1, MSGBOX_DEFAULT
# 923 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva::
# 932 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_LIVA, ParcelCoast_Liva_Text_0, ParcelCoast_Liva_Text_1, ParcelCoast_Liva_FirstWin
# 936 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 937 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Liva_3
ParcelCoast_Liva_1:
# 940 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Liva_8
ParcelCoast_Liva_6:
# 943 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Liva_13
ParcelCoast_Liva_11:
# 946 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Liva_18
ParcelCoast_Liva_16:
# 949 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Liva_2:
# 938 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R2
	goto ParcelCoast_Liva_1

ParcelCoast_Liva_3:
# 937 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R2
	goto_if 0, ParcelCoast_Liva_2
	goto ParcelCoast_Liva_1

ParcelCoast_Liva_7:
# 941 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R3
	goto ParcelCoast_Liva_6

ParcelCoast_Liva_8:
# 940 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R3
	goto_if 0, ParcelCoast_Liva_7
	goto ParcelCoast_Liva_6

ParcelCoast_Liva_12:
# 944 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R4
	goto ParcelCoast_Liva_11

ParcelCoast_Liva_13:
# 943 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R4
	goto_if 0, ParcelCoast_Liva_12
	goto ParcelCoast_Liva_11

ParcelCoast_Liva_17:
# 947 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Liva_R5
	goto ParcelCoast_Liva_16

ParcelCoast_Liva_18:
# 946 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_LIVA_R5
	goto_if 0, ParcelCoast_Liva_17
	goto ParcelCoast_Liva_16


ParcelCoast_Liva_FirstWin::
# 953 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_Text_2, MSGBOX_DEFAULT
# 954 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R2::
# 958 "data/maps/ParcelCoast/scripts.pory"
	lock
# 959 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 960 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_0, MSGBOX_YESNO
# 961 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R2_2
# 966 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R2, ParcelCoast_Liva_R2_Text_2
# 967 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_3, MSGBOX_DEFAULT
# 968 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R2_2:
# 962 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 963 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R3::
# 972 "data/maps/ParcelCoast/scripts.pory"
	lock
# 973 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 974 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R3_Text_0, MSGBOX_YESNO
# 975 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R3_2
# 980 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R3, ParcelCoast_Liva_R3_Text_1
# 981 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R3_Text_2, MSGBOX_DEFAULT
# 982 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R3_2:
# 976 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 977 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R4::
# 986 "data/maps/ParcelCoast/scripts.pory"
	lock
# 987 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 988 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R4_Text_0, MSGBOX_YESNO
# 989 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R4_2
# 994 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R4, ParcelCoast_Liva_R4_Text_1
# 995 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R4_Text_2, MSGBOX_DEFAULT
# 996 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R4_2:
# 990 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 991 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Liva_R5::
# 1000 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1001 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1002 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R5_Text_0, MSGBOX_YESNO
# 1003 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Liva_R5_2
# 1008 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_LIVA_R5, ParcelCoast_Liva_R5_Text_1
# 1009 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R5_Text_2, MSGBOX_DEFAULT
# 1010 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Liva_R5_2:
# 1004 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Liva_R2_Text_1, MSGBOX_DEFAULT
# 1005 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus::
# 1014 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_MAGNUS, ParcelCoast_Magnus_Text_0, ParcelCoast_Magnus_Text_1, ParcelCoast_Magnus_FirstWin
# 1018 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1019 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Magnus_3
ParcelCoast_Magnus_1:
# 1022 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Magnus_8
ParcelCoast_Magnus_6:
# 1025 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Magnus_13
ParcelCoast_Magnus_11:
# 1028 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Magnus_18
ParcelCoast_Magnus_16:
# 1031 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Magnus_2:
# 1020 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R2
	goto ParcelCoast_Magnus_1

ParcelCoast_Magnus_3:
# 1019 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R2
	goto_if 0, ParcelCoast_Magnus_2
	goto ParcelCoast_Magnus_1

ParcelCoast_Magnus_7:
# 1023 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R3
	goto ParcelCoast_Magnus_6

ParcelCoast_Magnus_8:
# 1022 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R3
	goto_if 0, ParcelCoast_Magnus_7
	goto ParcelCoast_Magnus_6

ParcelCoast_Magnus_12:
# 1026 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R4
	goto ParcelCoast_Magnus_11

ParcelCoast_Magnus_13:
# 1025 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R4
	goto_if 0, ParcelCoast_Magnus_12
	goto ParcelCoast_Magnus_11

ParcelCoast_Magnus_17:
# 1029 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Magnus_R5
	goto ParcelCoast_Magnus_16

ParcelCoast_Magnus_18:
# 1028 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_MAGNUS_R5
	goto_if 0, ParcelCoast_Magnus_17
	goto ParcelCoast_Magnus_16


ParcelCoast_Magnus_FirstWin::
# 1035 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_Text_2, MSGBOX_DEFAULT
# 1036 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R2::
# 1040 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1041 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1042 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_0, MSGBOX_YESNO
# 1043 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R2_2
# 1048 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R2, ParcelCoast_Magnus_R2_Text_2
# 1049 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_3, MSGBOX_DEFAULT
# 1050 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R2_2:
# 1044 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 1045 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R3::
# 1054 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1055 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1056 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R3_Text_0, MSGBOX_YESNO
# 1057 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R3_2
# 1062 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R3, ParcelCoast_Magnus_R3_Text_1
# 1063 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R3_Text_2, MSGBOX_DEFAULT
# 1064 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R3_2:
# 1058 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 1059 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R4::
# 1068 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1069 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1070 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R4_Text_0, MSGBOX_YESNO
# 1071 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R4_2
# 1076 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R4, ParcelCoast_Magnus_R4_Text_1
# 1077 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R4_Text_2, MSGBOX_DEFAULT
# 1078 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R4_2:
# 1072 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 1073 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Magnus_R5::
# 1082 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1083 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1084 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R5_Text_0, MSGBOX_YESNO
# 1085 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Magnus_R5_2
# 1090 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_MAGNUS_R5, ParcelCoast_Magnus_R5_Text_1
# 1091 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R5_Text_2, MSGBOX_DEFAULT
# 1092 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Magnus_R5_2:
# 1086 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Magnus_R2_Text_1, MSGBOX_DEFAULT
# 1087 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai::
# 1096 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_NIKOLAI, ParcelCoast_Nikolai_Text_0, ParcelCoast_Nikolai_Text_1, ParcelCoast_Nikolai_FirstWin
# 1100 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1101 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Nikolai_3
ParcelCoast_Nikolai_1:
# 1104 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Nikolai_8
ParcelCoast_Nikolai_6:
# 1107 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Nikolai_13
ParcelCoast_Nikolai_11:
# 1110 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Nikolai_18
ParcelCoast_Nikolai_16:
# 1113 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Nikolai_2:
# 1102 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R2
	goto ParcelCoast_Nikolai_1

ParcelCoast_Nikolai_3:
# 1101 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R2
	goto_if 0, ParcelCoast_Nikolai_2
	goto ParcelCoast_Nikolai_1

ParcelCoast_Nikolai_7:
# 1105 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R3
	goto ParcelCoast_Nikolai_6

ParcelCoast_Nikolai_8:
# 1104 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R3
	goto_if 0, ParcelCoast_Nikolai_7
	goto ParcelCoast_Nikolai_6

ParcelCoast_Nikolai_12:
# 1108 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R4
	goto ParcelCoast_Nikolai_11

ParcelCoast_Nikolai_13:
# 1107 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R4
	goto_if 0, ParcelCoast_Nikolai_12
	goto ParcelCoast_Nikolai_11

ParcelCoast_Nikolai_17:
# 1111 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Nikolai_R5
	goto ParcelCoast_Nikolai_16

ParcelCoast_Nikolai_18:
# 1110 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_NIKOLAI_R5
	goto_if 0, ParcelCoast_Nikolai_17
	goto ParcelCoast_Nikolai_16


ParcelCoast_Nikolai_FirstWin::
# 1117 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_Text_2, MSGBOX_DEFAULT
# 1118 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R2::
# 1122 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1123 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1124 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_0, MSGBOX_YESNO
# 1125 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R2_2
# 1130 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R2, ParcelCoast_Nikolai_R2_Text_2
# 1131 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_3, MSGBOX_DEFAULT
# 1132 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R2_2:
# 1126 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1127 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R3::
# 1136 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1137 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1138 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R3_Text_0, MSGBOX_YESNO
# 1139 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R3_2
# 1144 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R3, ParcelCoast_Nikolai_R2_Text_2
# 1145 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R3_Text_1, MSGBOX_DEFAULT
# 1146 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R3_2:
# 1140 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1141 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R4::
# 1150 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1151 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1152 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R4_Text_0, MSGBOX_YESNO
# 1153 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R4_2
# 1158 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R4, ParcelCoast_Nikolai_R4_Text_1
# 1159 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R4_Text_2, MSGBOX_DEFAULT
# 1160 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R4_2:
# 1154 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1155 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Nikolai_R5::
# 1164 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1165 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1166 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R5_Text_0, MSGBOX_YESNO
# 1167 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Nikolai_R5_2
# 1172 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_NIKOLAI_R5, ParcelCoast_Nikolai_R5_Text_1
# 1173 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R5_Text_2, MSGBOX_DEFAULT
# 1174 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Nikolai_R5_2:
# 1168 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Nikolai_R2_Text_1, MSGBOX_DEFAULT
# 1169 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda::
# 1178 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_ODA, ParcelCoast_Oda_Text_0, ParcelCoast_Oda_Text_1, ParcelCoast_Oda_FirstWin
# 1182 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1183 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Oda_3
ParcelCoast_Oda_1:
# 1186 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Oda_8
ParcelCoast_Oda_6:
# 1189 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Oda_13
ParcelCoast_Oda_11:
# 1192 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Oda_18
ParcelCoast_Oda_16:
# 1195 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Oda_2:
# 1184 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R2
	goto ParcelCoast_Oda_1

ParcelCoast_Oda_3:
# 1183 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R2
	goto_if 0, ParcelCoast_Oda_2
	goto ParcelCoast_Oda_1

ParcelCoast_Oda_7:
# 1187 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R3
	goto ParcelCoast_Oda_6

ParcelCoast_Oda_8:
# 1186 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R3
	goto_if 0, ParcelCoast_Oda_7
	goto ParcelCoast_Oda_6

ParcelCoast_Oda_12:
# 1190 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R4
	goto ParcelCoast_Oda_11

ParcelCoast_Oda_13:
# 1189 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R4
	goto_if 0, ParcelCoast_Oda_12
	goto ParcelCoast_Oda_11

ParcelCoast_Oda_17:
# 1193 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Oda_R5
	goto ParcelCoast_Oda_16

ParcelCoast_Oda_18:
# 1192 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ODA_R5
	goto_if 0, ParcelCoast_Oda_17
	goto ParcelCoast_Oda_16


ParcelCoast_Oda_FirstWin::
# 1199 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_Text_2, MSGBOX_DEFAULT
# 1200 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R2::
# 1204 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1205 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1206 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_0, MSGBOX_YESNO
# 1207 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R2_2
# 1212 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R2, ParcelCoast_Oda_R2_Text_2
# 1213 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_3, MSGBOX_DEFAULT
# 1214 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R2_2:
# 1208 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1209 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R3::
# 1218 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1219 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1220 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R3_Text_0, MSGBOX_YESNO
# 1221 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R3_2
# 1226 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R3, ParcelCoast_Oda_R2_Text_2
# 1227 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R3_Text_1, MSGBOX_DEFAULT
# 1228 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R3_2:
# 1222 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1223 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R4::
# 1232 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1233 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1234 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R4_Text_0, MSGBOX_YESNO
# 1235 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R4_2
# 1240 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R4, ParcelCoast_Oda_R4_Text_1
# 1241 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R4_Text_2, MSGBOX_DEFAULT
# 1242 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R4_2:
# 1236 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1237 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Oda_R5::
# 1246 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1247 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1248 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R5_Text_0, MSGBOX_YESNO
# 1249 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Oda_R5_2
# 1254 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ODA_R5, ParcelCoast_Oda_R5_Text_1
# 1255 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R5_Text_2, MSGBOX_DEFAULT
# 1256 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Oda_R5_2:
# 1250 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Oda_R2_Text_1, MSGBOX_DEFAULT
# 1251 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter::
# 1260 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_PETTER, ParcelCoast_Petter_Text_0, ParcelCoast_Petter_Text_1, ParcelCoast_Petter_FirstWin
# 1264 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1265 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Petter_3
ParcelCoast_Petter_1:
# 1268 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Petter_8
ParcelCoast_Petter_6:
# 1271 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Petter_13
ParcelCoast_Petter_11:
# 1274 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Petter_18
ParcelCoast_Petter_16:
# 1277 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Petter_2:
# 1266 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R2
	goto ParcelCoast_Petter_1

ParcelCoast_Petter_3:
# 1265 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R2
	goto_if 0, ParcelCoast_Petter_2
	goto ParcelCoast_Petter_1

ParcelCoast_Petter_7:
# 1269 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R3
	goto ParcelCoast_Petter_6

ParcelCoast_Petter_8:
# 1268 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R3
	goto_if 0, ParcelCoast_Petter_7
	goto ParcelCoast_Petter_6

ParcelCoast_Petter_12:
# 1272 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R4
	goto ParcelCoast_Petter_11

ParcelCoast_Petter_13:
# 1271 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R4
	goto_if 0, ParcelCoast_Petter_12
	goto ParcelCoast_Petter_11

ParcelCoast_Petter_17:
# 1275 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Petter_R5
	goto ParcelCoast_Petter_16

ParcelCoast_Petter_18:
# 1274 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_PETTER_R5
	goto_if 0, ParcelCoast_Petter_17
	goto ParcelCoast_Petter_16


ParcelCoast_Petter_FirstWin::
# 1281 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_Text_2, MSGBOX_DEFAULT
# 1282 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R2::
# 1286 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1287 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1288 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_0, MSGBOX_YESNO
# 1289 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R2_2
# 1294 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R2, ParcelCoast_Petter_R2_Text_2
# 1295 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_3, MSGBOX_DEFAULT
# 1296 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R2_2:
# 1290 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1291 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R3::
# 1300 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1301 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1302 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R3_Text_0, MSGBOX_YESNO
# 1303 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R3_2
# 1308 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R3, ParcelCoast_Petter_R3_Text_1
# 1309 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R3_Text_2, MSGBOX_DEFAULT
# 1310 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R3_2:
# 1304 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1305 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R4::
# 1314 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1315 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1316 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R4_Text_0, MSGBOX_YESNO
# 1317 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R4_2
# 1322 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R4, ParcelCoast_Petter_R4_Text_1
# 1323 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R4_Text_2, MSGBOX_DEFAULT
# 1324 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R4_2:
# 1318 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1319 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Petter_R5::
# 1328 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1329 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1330 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R5_Text_0, MSGBOX_YESNO
# 1331 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Petter_R5_2
# 1336 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_PETTER_R5, ParcelCoast_Petter_R3_Text_1
# 1337 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R5_Text_1, MSGBOX_DEFAULT
# 1338 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Petter_R5_2:
# 1332 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Petter_R2_Text_1, MSGBOX_DEFAULT
# 1333 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar::
# 1342 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_RAGNAR, ParcelCoast_Ragnar_Text_0, ParcelCoast_Ragnar_Text_1, ParcelCoast_Ragnar_FirstWin
# 1346 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1347 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Ragnar_3
ParcelCoast_Ragnar_1:
# 1350 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Ragnar_8
ParcelCoast_Ragnar_6:
# 1353 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Ragnar_13
ParcelCoast_Ragnar_11:
# 1356 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Ragnar_18
ParcelCoast_Ragnar_16:
# 1359 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Ragnar_2:
# 1348 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R2
	goto ParcelCoast_Ragnar_1

ParcelCoast_Ragnar_3:
# 1347 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R2
	goto_if 0, ParcelCoast_Ragnar_2
	goto ParcelCoast_Ragnar_1

ParcelCoast_Ragnar_7:
# 1351 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R3
	goto ParcelCoast_Ragnar_6

ParcelCoast_Ragnar_8:
# 1350 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R3
	goto_if 0, ParcelCoast_Ragnar_7
	goto ParcelCoast_Ragnar_6

ParcelCoast_Ragnar_12:
# 1354 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R4
	goto ParcelCoast_Ragnar_11

ParcelCoast_Ragnar_13:
# 1353 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R4
	goto_if 0, ParcelCoast_Ragnar_12
	goto ParcelCoast_Ragnar_11

ParcelCoast_Ragnar_17:
# 1357 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Ragnar_R5
	goto ParcelCoast_Ragnar_16

ParcelCoast_Ragnar_18:
# 1356 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_RAGNAR_R5
	goto_if 0, ParcelCoast_Ragnar_17
	goto ParcelCoast_Ragnar_16


ParcelCoast_Ragnar_FirstWin::
# 1363 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_Text_2, MSGBOX_DEFAULT
# 1364 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R2::
# 1368 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1369 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1370 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_0, MSGBOX_YESNO
# 1371 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R2_2
# 1376 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R2, ParcelCoast_Ragnar_R2_Text_2
# 1377 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_3, MSGBOX_DEFAULT
# 1378 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R2_2:
# 1372 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1373 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R3::
# 1382 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1383 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1384 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R3_Text_0, MSGBOX_YESNO
# 1385 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R3_2
# 1390 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R3, ParcelCoast_Ragnar_R3_Text_1
# 1391 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R3_Text_2, MSGBOX_DEFAULT
# 1392 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R3_2:
# 1386 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1387 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R4::
# 1396 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1397 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1398 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R4_Text_0, MSGBOX_YESNO
# 1399 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R4_2
# 1404 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R4, ParcelCoast_Ragnar_R4_Text_1
# 1405 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R4_Text_2, MSGBOX_DEFAULT
# 1406 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R4_2:
# 1400 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1401 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Ragnar_R5::
# 1410 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1411 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1412 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R5_Text_0, MSGBOX_YESNO
# 1413 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Ragnar_R5_2
# 1418 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_RAGNAR_R5, ParcelCoast_Ragnar_R3_Text_1
# 1419 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R5_Text_1, MSGBOX_DEFAULT
# 1420 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Ragnar_R5_2:
# 1414 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 1415 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor::
# 1424 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_SOLVOR, ParcelCoast_Solvor_Text_0, ParcelCoast_Solvor_Text_1, ParcelCoast_Solvor_FirstWin
# 1428 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1429 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Solvor_3
ParcelCoast_Solvor_1:
# 1432 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Solvor_8
ParcelCoast_Solvor_6:
# 1435 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Solvor_13
ParcelCoast_Solvor_11:
# 1438 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Solvor_18
ParcelCoast_Solvor_16:
# 1441 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Solvor_2:
# 1430 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R2
	goto ParcelCoast_Solvor_1

ParcelCoast_Solvor_3:
# 1429 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R2
	goto_if 0, ParcelCoast_Solvor_2
	goto ParcelCoast_Solvor_1

ParcelCoast_Solvor_7:
# 1433 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R3
	goto ParcelCoast_Solvor_6

ParcelCoast_Solvor_8:
# 1432 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R3
	goto_if 0, ParcelCoast_Solvor_7
	goto ParcelCoast_Solvor_6

ParcelCoast_Solvor_12:
# 1436 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R4
	goto ParcelCoast_Solvor_11

ParcelCoast_Solvor_13:
# 1435 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R4
	goto_if 0, ParcelCoast_Solvor_12
	goto ParcelCoast_Solvor_11

ParcelCoast_Solvor_17:
# 1439 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Solvor_R5
	goto ParcelCoast_Solvor_16

ParcelCoast_Solvor_18:
# 1438 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_SOLVOR_R5
	goto_if 0, ParcelCoast_Solvor_17
	goto ParcelCoast_Solvor_16


ParcelCoast_Solvor_FirstWin::
# 1445 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_Text_2, MSGBOX_DEFAULT
# 1446 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R2::
# 1450 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1451 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1452 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_0, MSGBOX_YESNO
# 1453 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R2_2
# 1458 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R2, ParcelCoast_Solvor_R2_Text_2
# 1459 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_3, MSGBOX_DEFAULT
# 1460 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R2_2:
# 1454 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1455 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R3::
# 1464 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1465 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1466 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R3_Text_0, MSGBOX_YESNO
# 1467 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R3_2
# 1472 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R3, ParcelCoast_Solvor_R3_Text_1
# 1473 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R3_Text_2, MSGBOX_DEFAULT
# 1474 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R3_2:
# 1468 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1469 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R4::
# 1478 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1479 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1480 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R4_Text_0, MSGBOX_YESNO
# 1481 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R4_2
# 1486 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R4, ParcelCoast_Solvor_R3_Text_1
# 1487 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R4_Text_1, MSGBOX_DEFAULT
# 1488 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R4_2:
# 1482 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1483 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Solvor_R5::
# 1492 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1493 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1494 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R5_Text_0, MSGBOX_YESNO
# 1495 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Solvor_R5_2
# 1500 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_SOLVOR_R5, ParcelCoast_Solvor_R5_Text_1
# 1501 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R5_Text_2, MSGBOX_DEFAULT
# 1502 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Solvor_R5_2:
# 1496 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Solvor_R2_Text_1, MSGBOX_DEFAULT
# 1497 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore::
# 1506 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_TORE, ParcelCoast_Tore_Text_0, ParcelCoast_Tore_Text_1, ParcelCoast_Tore_FirstWin
# 1510 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1511 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_Tore_3
ParcelCoast_Tore_1:
# 1514 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_Tore_8
ParcelCoast_Tore_6:
# 1517 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_Tore_13
ParcelCoast_Tore_11:
# 1520 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_Tore_18
ParcelCoast_Tore_16:
# 1523 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_Tore_2:
# 1512 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R2
	goto ParcelCoast_Tore_1

ParcelCoast_Tore_3:
# 1511 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R2
	goto_if 0, ParcelCoast_Tore_2
	goto ParcelCoast_Tore_1

ParcelCoast_Tore_7:
# 1515 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R3
	goto ParcelCoast_Tore_6

ParcelCoast_Tore_8:
# 1514 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R3
	goto_if 0, ParcelCoast_Tore_7
	goto ParcelCoast_Tore_6

ParcelCoast_Tore_12:
# 1518 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R4
	goto ParcelCoast_Tore_11

ParcelCoast_Tore_13:
# 1517 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R4
	goto_if 0, ParcelCoast_Tore_12
	goto ParcelCoast_Tore_11

ParcelCoast_Tore_17:
# 1521 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_Tore_R5
	goto ParcelCoast_Tore_16

ParcelCoast_Tore_18:
# 1520 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_TORE_R5
	goto_if 0, ParcelCoast_Tore_17
	goto ParcelCoast_Tore_16


ParcelCoast_Tore_FirstWin::
# 1527 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_Text_2, MSGBOX_DEFAULT
# 1528 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R2::
# 1532 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1533 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1534 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_0, MSGBOX_YESNO
# 1535 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R2_2
# 1540 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R2, ParcelCoast_Tore_R2_Text_2
# 1541 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_3, MSGBOX_DEFAULT
# 1542 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R2_2:
# 1536 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1537 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R3::
# 1546 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1547 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1548 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R3_Text_0, MSGBOX_YESNO
# 1549 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R3_2
# 1554 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R3, ParcelCoast_Tore_R3_Text_1
# 1555 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R3_Text_2, MSGBOX_DEFAULT
# 1556 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R3_2:
# 1550 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1551 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R4::
# 1560 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1561 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1562 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R4_Text_0, MSGBOX_YESNO
# 1563 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R4_2
# 1568 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R4, ParcelCoast_Tore_R4_Text_1
# 1569 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R4_Text_2, MSGBOX_DEFAULT
# 1570 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R4_2:
# 1564 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1565 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Tore_R5::
# 1574 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1575 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1576 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R5_Text_0, MSGBOX_YESNO
# 1577 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_Tore_R5_2
# 1582 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_TORE_R5, ParcelCoast_Tore_R2_Text_2
# 1583 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R5_Text_1, MSGBOX_DEFAULT
# 1584 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Tore_R5_2:
# 1578 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Tore_R2_Text_1, MSGBOX_DEFAULT
# 1579 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge::
# 1590 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_HELGE, ParcelCoast_T_Helge_Text_0, ParcelCoast_T_Helge_Text_1, ParcelCoast_T_Helge_FirstWin
# 1594 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1595 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_T_Helge_3
ParcelCoast_T_Helge_1:
# 1598 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_T_Helge_8
ParcelCoast_T_Helge_6:
# 1601 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_T_Helge_13
ParcelCoast_T_Helge_11:
# 1604 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_T_Helge_18
ParcelCoast_T_Helge_16:
# 1607 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_T_Helge_2:
# 1596 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R2
	goto ParcelCoast_T_Helge_1

ParcelCoast_T_Helge_3:
# 1595 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R2
	goto_if 0, ParcelCoast_T_Helge_2
	goto ParcelCoast_T_Helge_1

ParcelCoast_T_Helge_7:
# 1599 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R3
	goto ParcelCoast_T_Helge_6

ParcelCoast_T_Helge_8:
# 1598 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R3
	goto_if 0, ParcelCoast_T_Helge_7
	goto ParcelCoast_T_Helge_6

ParcelCoast_T_Helge_12:
# 1602 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R4
	goto ParcelCoast_T_Helge_11

ParcelCoast_T_Helge_13:
# 1601 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R4
	goto_if 0, ParcelCoast_T_Helge_12
	goto ParcelCoast_T_Helge_11

ParcelCoast_T_Helge_17:
# 1605 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Helge_R5
	goto ParcelCoast_T_Helge_16

ParcelCoast_T_Helge_18:
# 1604 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_HELGE_R5
	goto_if 0, ParcelCoast_T_Helge_17
	goto ParcelCoast_T_Helge_16


ParcelCoast_T_Helge_FirstWin::
# 1611 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_Text_2, MSGBOX_DEFAULT
# 1612 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R2::
# 1616 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1617 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1618 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_0, MSGBOX_YESNO
# 1619 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R2_2
# 1624 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R2, ParcelCoast_T_Helge_R2_Text_2
# 1625 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_3, MSGBOX_DEFAULT
# 1626 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R2_2:
# 1620 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1621 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R3::
# 1630 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1631 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1632 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R3_Text_0, MSGBOX_YESNO
# 1633 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R3_2
# 1638 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R3, ParcelCoast_T_Helge_R3_Text_1
# 1639 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R3_Text_2, MSGBOX_DEFAULT
# 1640 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R3_2:
# 1634 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1635 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R4::
# 1644 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1645 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1646 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R4_Text_0, MSGBOX_YESNO
# 1647 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R4_2
# 1652 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R4, ParcelCoast_T_Helge_R4_Text_1
# 1653 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R4_Text_2, MSGBOX_DEFAULT
# 1654 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R4_2:
# 1648 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1649 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Helge_R5::
# 1658 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1659 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1660 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R5_Text_0, MSGBOX_YESNO
# 1661 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Helge_R5_2
# 1666 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_HELGE_R5, ParcelCoast_T_Helge_R4_Text_1
# 1667 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R5_Text_1, MSGBOX_DEFAULT
# 1668 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Helge_R5_2:
# 1662 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Helge_R2_Text_1, MSGBOX_DEFAULT
# 1663 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton::
# 1672 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_ANTON, ParcelCoast_T_Anton_Text_0, ParcelCoast_T_Anton_Text_1, ParcelCoast_T_Anton_FirstWin
# 1676 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1677 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_T_Anton_3
ParcelCoast_T_Anton_1:
# 1680 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_T_Anton_8
ParcelCoast_T_Anton_6:
# 1683 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_T_Anton_13
ParcelCoast_T_Anton_11:
# 1686 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_T_Anton_18
ParcelCoast_T_Anton_16:
# 1689 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_T_Anton_2:
# 1678 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R2
	goto ParcelCoast_T_Anton_1

ParcelCoast_T_Anton_3:
# 1677 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R2
	goto_if 0, ParcelCoast_T_Anton_2
	goto ParcelCoast_T_Anton_1

ParcelCoast_T_Anton_7:
# 1681 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R3
	goto ParcelCoast_T_Anton_6

ParcelCoast_T_Anton_8:
# 1680 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R3
	goto_if 0, ParcelCoast_T_Anton_7
	goto ParcelCoast_T_Anton_6

ParcelCoast_T_Anton_12:
# 1684 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R4
	goto ParcelCoast_T_Anton_11

ParcelCoast_T_Anton_13:
# 1683 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R4
	goto_if 0, ParcelCoast_T_Anton_12
	goto ParcelCoast_T_Anton_11

ParcelCoast_T_Anton_17:
# 1687 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Anton_R5
	goto ParcelCoast_T_Anton_16

ParcelCoast_T_Anton_18:
# 1686 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_ANTON_R5
	goto_if 0, ParcelCoast_T_Anton_17
	goto ParcelCoast_T_Anton_16


ParcelCoast_T_Anton_FirstWin::
# 1693 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_Text_2, MSGBOX_DEFAULT
# 1694 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R2::
# 1698 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1699 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1700 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_0, MSGBOX_YESNO
# 1701 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R2_2
# 1706 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R2, ParcelCoast_T_Anton_R2_Text_2
# 1707 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_3, MSGBOX_DEFAULT
# 1708 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R2_2:
# 1702 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1703 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R3::
# 1712 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1713 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1714 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R3_Text_0, MSGBOX_YESNO
# 1715 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R3_2
# 1720 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R3, ParcelCoast_T_Anton_R3_Text_1
# 1721 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R3_Text_2, MSGBOX_DEFAULT
# 1722 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R3_2:
# 1716 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1717 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R4::
# 1726 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1727 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1728 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R4_Text_0, MSGBOX_YESNO
# 1729 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R4_2
# 1734 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R4, ParcelCoast_T_Anton_R4_Text_1
# 1735 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R4_Text_2, MSGBOX_DEFAULT
# 1736 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R4_2:
# 1730 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1731 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Anton_R5::
# 1740 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1741 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1742 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R5_Text_0, MSGBOX_YESNO
# 1743 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Anton_R5_2
# 1748 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_ANTON_R5, ParcelCoast_T_Anton_R3_Text_1
# 1749 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R5_Text_1, MSGBOX_DEFAULT
# 1750 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Anton_R5_2:
# 1744 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Anton_R2_Text_1, MSGBOX_DEFAULT
# 1745 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate::
# 1754 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COAST_BEATE, ParcelCoast_T_Beate_Text_0, ParcelCoast_T_Beate_Text_1, ParcelCoast_T_Beate_FirstWin
# 1758 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1759 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoast_T_Beate_3
ParcelCoast_T_Beate_1:
# 1762 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoast_T_Beate_8
ParcelCoast_T_Beate_6:
# 1765 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoast_T_Beate_13
ParcelCoast_T_Beate_11:
# 1768 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoast_T_Beate_18
ParcelCoast_T_Beate_16:
# 1771 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_Text_2, MSGBOX_DEFAULT
	end

ParcelCoast_T_Beate_2:
# 1760 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R2
	goto ParcelCoast_T_Beate_1

ParcelCoast_T_Beate_3:
# 1759 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R2
	goto_if 0, ParcelCoast_T_Beate_2
	goto ParcelCoast_T_Beate_1

ParcelCoast_T_Beate_7:
# 1763 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R3
	goto ParcelCoast_T_Beate_6

ParcelCoast_T_Beate_8:
# 1762 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R3
	goto_if 0, ParcelCoast_T_Beate_7
	goto ParcelCoast_T_Beate_6

ParcelCoast_T_Beate_12:
# 1766 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R4
	goto ParcelCoast_T_Beate_11

ParcelCoast_T_Beate_13:
# 1765 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R4
	goto_if 0, ParcelCoast_T_Beate_12
	goto ParcelCoast_T_Beate_11

ParcelCoast_T_Beate_17:
# 1769 "data/maps/ParcelCoast/scripts.pory"
	goto ParcelCoast_T_Beate_R5
	goto ParcelCoast_T_Beate_16

ParcelCoast_T_Beate_18:
# 1768 "data/maps/ParcelCoast/scripts.pory"
	checktrainerflag TRAINER_SKALD_COAST_BEATE_R5
	goto_if 0, ParcelCoast_T_Beate_17
	goto ParcelCoast_T_Beate_16


ParcelCoast_T_Beate_FirstWin::
# 1775 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_Text_2, MSGBOX_DEFAULT
# 1776 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R2::
# 1780 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1781 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1782 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_0, MSGBOX_YESNO
# 1783 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R2_2
# 1788 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R2, ParcelCoast_T_Beate_R2_Text_2
# 1789 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_3, MSGBOX_DEFAULT
# 1790 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R2_2:
# 1784 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1785 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R3::
# 1794 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1795 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1796 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R3_Text_0, MSGBOX_YESNO
# 1797 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R3_2
# 1802 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R3, ParcelCoast_T_Beate_R3_Text_1
# 1803 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R3_Text_2, MSGBOX_DEFAULT
# 1804 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R3_2:
# 1798 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1799 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R4::
# 1808 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1809 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1810 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R4_Text_0, MSGBOX_YESNO
# 1811 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R4_2
# 1816 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R4, ParcelCoast_T_Beate_R4_Text_1
# 1817 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R4_Text_2, MSGBOX_DEFAULT
# 1818 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R4_2:
# 1812 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1813 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_T_Beate_R5::
# 1822 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1823 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1824 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R5_Text_0, MSGBOX_YESNO
# 1825 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_T_Beate_R5_2
# 1830 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COAST_BEATE_R5, ParcelCoast_T_Beate_R3_Text_1
# 1831 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R5_Text_1, MSGBOX_DEFAULT
# 1832 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_T_Beate_R5_2:
# 1826 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_T_Beate_R2_Text_1, MSGBOX_DEFAULT
# 1827 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Shell::
# 1838 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1839 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SHELL_FOUND, ParcelCoast_Shell_2
# 1845 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Shell_Text_1, MSGBOX_SIGN
# 1846 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Shell_2:
# 1840 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Shell_Text_0, MSGBOX_SIGN
# 1841 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_Q_SHELL_FOUND
# 1842 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_PerrinScene::
# 1852 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_6, ParcelCoast_PerrinScene_2
# 1856 "data/maps/ParcelCoast/scripts.pory"
	lockall
# 1857 "data/maps/ParcelCoast/scripts.pory"
	playse SE_PIN
# 1858 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinScene_Text_0, MSGBOX_DEFAULT
# 1859 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 1860 "data/maps/ParcelCoast/scripts.pory"
	applymovement 33, Movement_ParcelCoast_PerrinIn
# 1861 "data/maps/ParcelCoast/scripts.pory"
	waitmovement 0
# 1862 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinScene_Text_1, MSGBOX_DEFAULT
# 1863 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_6, ParcelCoast_PerrinScene_Text_2
# 1864 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinScene_Text_3, MSGBOX_DEFAULT
# 1865 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 1866 "data/maps/ParcelCoast/scripts.pory"
	applymovement 33, Movement_ParcelCoast_PerrinOut
# 1867 "data/maps/ParcelCoast/scripts.pory"
	waitmovement 0
# 1868 "data/maps/ParcelCoast/scripts.pory"
	removeobject 33
# 1869 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_PERRIN_6
# 1870 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1871 "data/maps/ParcelCoast/scripts.pory"
	releaseall
	end

ParcelCoast_PerrinScene_2:
# 1853 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelCoast_PerrinTalk::
# 1875 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1876 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1877 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 1878 "data/maps/ParcelCoast/scripts.pory"
	release
	end


# 1881 "data/maps/ParcelCoast/scripts.pory"
Movement_ParcelCoast_PerrinIn:
# 1881 "data/maps/ParcelCoast/scripts.pory"
	walk_down
# 1881 "data/maps/ParcelCoast/scripts.pory"
	walk_down
	step_end

# 1882 "data/maps/ParcelCoast/scripts.pory"
Movement_ParcelCoast_PerrinOut:
# 1882 "data/maps/ParcelCoast/scripts.pory"
	walk_up
# 1882 "data/maps/ParcelCoast/scripts.pory"
	walk_up
	step_end

ParcelCoast_Epilogue::
# 1886 "data/maps/ParcelCoast/scripts.pory"
	lockall
# 1887 "data/maps/ParcelCoast/scripts.pory"
	delay 20
# 1888 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Epilogue_Text_0, MSGBOX_DEFAULT
# 1889 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Epilogue_Text_1, MSGBOX_DEFAULT
# 1890 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_CH_HOLLIS_NAMED, ParcelCoast_Epilogue_2
# 1893 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Epilogue_Text_3, MSGBOX_DEFAULT
ParcelCoast_Epilogue_1:
# 1895 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Epilogue_Text_4, MSGBOX_DEFAULT
# 1896 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 1897 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 8
# 1898 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_ROUTE1, 8, 26
# 1899 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end

ParcelCoast_Epilogue_2:
# 1891 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Epilogue_Text_2, MSGBOX_DEFAULT
	goto ParcelCoast_Epilogue_1


ParcelCoast_GymHarland_Rematch::
# 1905 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1906 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1907 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Rematch_Text_0, MSGBOX_YESNO
# 1908 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_GymHarland_Rematch_2
# 1913 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM6_R, ParcelCoast_GymHarland_Rematch_Text_2
# 1914 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Rematch_Text_3, MSGBOX_DEFAULT
# 1915 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_Rematch_2:
# 1909 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Rematch_Text_1, MSGBOX_DEFAULT
# 1910 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Dorsey::
# 1921 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1922 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 1923 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Dorsey_2
# 1928 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_DORSEY_CO, ParcelCoast_Dorsey_5
# 1933 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dorsey_Text_2, MSGBOX_DEFAULT
# 1934 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_DORSEY_CO
# 1935 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Dorsey_2:
# 1924 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dorsey_Text_0, MSGBOX_DEFAULT
# 1925 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Dorsey_5:
# 1929 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dorsey_Text_1, MSGBOX_DEFAULT
# 1930 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_SurveyStake::
# 1941 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_SurveyStake_Text_0, MSGBOX_SIGN
# 1942 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 5
# 1943 "data/maps/ParcelCoast/scripts.pory"
	special SkaldSurveyStake
# 1944 "data/maps/ParcelCoast/scripts.pory"
	msgbox gStringVar4, MSGBOX_SIGN
# 1945 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND, ParcelCoast_SurveyStake_3
ParcelCoast_SurveyStake_1:
	end

ParcelCoast_SurveyStake_2:
# 1946 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_SurveyStake_Text_1, MSGBOX_SIGN
# 1947 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_SECOND_5
	goto ParcelCoast_SurveyStake_1

ParcelCoast_SurveyStake_3:
# 1945 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_SECOND_5, ParcelCoast_SurveyStake_2
	goto ParcelCoast_SurveyStake_1


ParcelCoast_PairQuay::
# 1955 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1956 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_PairQuay_2
# 1961 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_PairQuay_3
# 1968 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_9, MSGBOX_DEFAULT
# 1969 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_10, MSGBOX_DEFAULT
# 1970 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_11, MSGBOX_DEFAULT
# 1971 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_12, MSGBOX_DEFAULT
ParcelCoast_PairQuay_1:
# 1973 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_PairQuay_2:
# 1957 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_0, MSGBOX_DEFAULT
# 1958 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_1, MSGBOX_DEFAULT
# 1959 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_2, MSGBOX_DEFAULT
# 1960 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_3, MSGBOX_DEFAULT
	goto ParcelCoast_PairQuay_1

ParcelCoast_PairQuay_3:
# 1962 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_4, MSGBOX_DEFAULT
# 1963 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_5, MSGBOX_DEFAULT
# 1964 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_6, MSGBOX_DEFAULT
# 1965 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_7, MSGBOX_DEFAULT
# 1966 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairQuay_Text_8, MSGBOX_DEFAULT
	goto ParcelCoast_PairQuay_1


ParcelCoast_PairOffice::
# 1978 "data/maps/ParcelCoast/scripts.pory"
	lock
# 1979 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_PairOffice_2
# 1985 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_PairOffice_3
# 1991 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_9, MSGBOX_DEFAULT
# 1992 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_10, MSGBOX_DEFAULT
# 1993 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_11, MSGBOX_DEFAULT
# 1994 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_12, MSGBOX_DEFAULT
ParcelCoast_PairOffice_1:
# 1996 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_PairOffice_2:
# 1980 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_0, MSGBOX_DEFAULT
# 1981 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_1, MSGBOX_DEFAULT
# 1982 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_2, MSGBOX_DEFAULT
# 1983 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_3, MSGBOX_DEFAULT
# 1984 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_4, MSGBOX_DEFAULT
	goto ParcelCoast_PairOffice_1

ParcelCoast_PairOffice_3:
# 1986 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_5, MSGBOX_DEFAULT
# 1987 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_6, MSGBOX_DEFAULT
# 1988 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_7, MSGBOX_DEFAULT
# 1989 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_PairOffice_Text_8, MSGBOX_DEFAULT
	goto ParcelCoast_PairOffice_1


ParcelCoast_Stringer::
# 2003 "data/maps/ParcelCoast/scripts.pory"
	lock
# 2004 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 2005 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_Stringer_2
# 2012 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Stringer_3
# 2015 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Stringer_Text_4, MSGBOX_DEFAULT
ParcelCoast_Stringer_1:
# 2017 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Stringer_2:
# 2006 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_CH_QUOTE, ParcelCoast_Stringer_8
# 2009 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Stringer_Text_1, MSGBOX_DEFAULT
ParcelCoast_Stringer_7:
# 2011 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Stringer_Text_2, MSGBOX_DEFAULT
	goto ParcelCoast_Stringer_1

ParcelCoast_Stringer_3:
# 2013 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Stringer_Text_3, MSGBOX_DEFAULT
	goto ParcelCoast_Stringer_1

ParcelCoast_Stringer_8:
# 2007 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Stringer_Text_0, MSGBOX_DEFAULT
	goto ParcelCoast_Stringer_7


ParcelCoast_FindRoost::
# 2024 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOST, ParcelCoast_FindRoost_4
ParcelCoast_FindRoost_3:
# 2028 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FindRoost_Text_1, MSGBOX_SIGN
ParcelCoast_FindRoost_1:
	end

ParcelCoast_FindRoost_2:
# 2025 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FindRoost_Text_0, MSGBOX_SIGN
# 2026 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALD_Q_ROOST_FOUND
	goto ParcelCoast_FindRoost_1

ParcelCoast_FindRoost_4:
# 2024 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_ROOST_FOUND, ParcelCoast_FindRoost_2
	goto ParcelCoast_FindRoost_3


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
	.string "HARLAND: One thing first, since you're\n"
	.string "the reading sort. Forty jobs, DORSEY\l"
	.string "says, on the quay. Is that a true\l"
	.string "number?$"

ParcelCoast_GymHarland_Text_16:
# 165 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Aye. It's true. They're all true\n"
	.string "numbers. That was never the trouble;\l"
	.string "the trouble's what they leave off the\l"
	.string "page.\p"
	.string "You can hold two true things at once.\n"
	.string "Good. Not many can. Now earn it the\l"
	.string "fisher's way.$"

ParcelCoast_GymHarland_Text_17:
# 168 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: It's true. Forty, and every\n"
	.string "one of them needs the dredge that's\l"
	.string "taking my ground. The lie's never in the\l"
	.string "numbers, RANGER.\p"
	.string "Learn to hold two true things at once\n"
	.string "or you'll be no use to anyone out here.\l"
	.string "Now earn it the fisher's way.$"

ParcelCoast_GymHarland_Text_18:
# 170 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: …Aye. You read the water. I'll\n"
	.string "not pretend you didn't.$"

ParcelCoast_GymHarland_Text_19:
# 176 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: That's the Tradewind\n"
	.string "clearance. Out here it means you can be\l"
	.string "trusted on the water, a thing I don't\l"
	.string "hand out twice.\p"
	.string "Here. You'll want this more than I do.$"

ParcelCoast_GymHarland_Text_20:
# 178 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: FLY. Carries you back to any\n"
	.string "harbour you've already made. A fisher's\l"
	.string "mercy, that. Some days the only\l"
	.string "kindness is a fast way home.\p"
	.string "Use it better than I've used my\n"
	.string "seasons.$"

ParcelCoast_Hale_Text_0:
# 188 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: They read it aloud at the hearing.\n"
	.string "All of it. HOLLIS sat through every page\l"
	.string "without moving. I watched her. She's the\l"
	.string "one who taught me to sit still.$"

ParcelCoast_Hale_Text_1:
# 193 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Rest while you can. The next\n"
	.string "place doesn't have a quay to stand on,\l"
	.string "or a HOLLIS to pour you tea.\p"
	.string "It has her.$"

ParcelCoast_Hale_Text_2:
# 201 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: The dredge scar. The urchins. The\n"
	.string "catch all one age. The empty pilings.\l"
	.string "The plaque. The man on the boat.\p"
	.string "Name it.$"

ParcelCoast_Hale_Text_3:
# 203 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: COLLAPSING.\p"
	.string "The grazer's gone, the urchins own the\n"
	.string "kelp, the apex is fished to nothing, and\l"
	.string "the web is coming apart in front of you\l"
	.string "in real time.$"

ParcelCoast_Hale_Text_4:
# 204 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: The overfishing you could still\n"
	.string "stop, if anyone with the power to\l"
	.string "wanted to. The dredged seabed you\l"
	.string "cannot. Half of it savable, half already\l"
	.string "gone. The hardest kind of place to write\l"
	.string "down honestly.$"

ParcelCoast_Hale_Text_5:
# 205 "data/maps/ParcelCoast/scripts.pory"
	.string "{PLAYER}: HALE. The model on the\n"
	.string "plaque. The methods are hers. DR.\l"
	.string "HERON's. She isn't lost, she's…$"

ParcelCoast_Hale_Text_6:
# 206 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: I know. Have known a while.\p"
	.string "I told you at the start her ending up at\n"
	.string "that lab wasn't random. This is the rest\l"
	.string "of that sentence.$"

ParcelCoast_Hale_Text_7:
# 207 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Your mentor didn't vanish,\n"
	.string "{PLAYER}. She made a bargain. And the\l"
	.string "bargain is out there right now with her\l"
	.string "name on the paperwork, strangling a\l"
	.string "kelp bed.\p"
	.string "I'm sorry. You came looking for a hero.\n"
	.string "You found a citation.$"

ParcelCoast_Hale_Text_8:
# 210 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Coastal Certification. For\n"
	.string "reading a place that's screaming and\l"
	.string "keeping your hand steady enough to\l"
	.string "write it down anyway.$"

ParcelCoast_Hale_Text_9:
# 216 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: There's one place left. Inland.\n"
	.string "The deep corridor, the marsh all of this\l"
	.string "used to drain from. Unfished, unbuilt.\l"
	.string "Too raw to be worth taking. Yet.\p"
	.string "That's where she went to hide. That's\n"
	.string "where we finish.$"

ParcelCoast_Hale_Text_10:
# 217 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Rest first. Then come to the\n"
	.string "station at FERNWICK, and we go inland,\l"
	.string "and we tell the truth with our whole\l"
	.string "chest, and we live with what it costs.\p"
	.string "That was always the job, {PLAYER}.\n"
	.string "This is just the first time it's cost\l"
	.string "this much.$"

ParcelCoast_Hale_Text_11:
# 221 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: Don't name it from the office\n"
	.string "window. Walk the quay. The dredge line,\l"
	.string "the barren, the catch on the stall, the\l"
	.string "pilings, the plaque in the office. And\l"
	.string "talk to the man on the boat. Especially\l"
	.string "him.\p"
	.string "Then come and tell me what it is.$"

ParcelCoast_Worker_Text_0:
# 231 "data/maps/ParcelCoast/scripts.pory"
	.string "WORKER: Four generations on this quay,\n"
	.string "and it took a ranger's notebook to put\l"
	.string "the fifth in a hearing room. My boy\l"
	.string "spoke. Two minutes. He was good.$"

ParcelCoast_Worker_Text_1:
# 236 "data/maps/ParcelCoast/scripts.pory"
	.string "WORKER: You named it. The whole quay\n"
	.string "knew by the tide after. COLLAPSING.\l"
	.string "We've known for years; we'd just never\l"
	.string "heard it said by somebody with a card.\p"
	.string "There's people in the frame, RANGER. You\n"
	.string "put us in it. That's fair. Keep us in it.$"

ParcelCoast_Worker_Text_2:
# 240 "data/maps/ParcelCoast/scripts.pory"
	.string "WORKER: Four generations my family's\n"
	.string "worked this quay. Good work. Honest\l"
	.string "work.\p"
	.string "Don't let that badge let you forget\n"
	.string "there's people in the frame, RANGER. We\l"
	.string "didn't dredge it. We haul what we're told\l"
	.string "to haul, or we don't eat.$"

ParcelCoast_Vendor1_Text_0:
# 248 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Cod. Different sizes today. The\n"
	.string "review's inspector weighs them herself.\l"
	.string "Customers ask why they're not tidy. I\l"
	.string "tell them. First time I've told them.$"

ParcelCoast_Vendor1_Text_1:
# 253 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Cod, iced this morning. All one\n"
	.string "size. A customer asked why today, first\l"
	.string "time ever.\p"
	.string "I said ask the ranger. She said the\n"
	.string "ranger already did. I sold her two\l"
	.string "anyway.$"

ParcelCoast_Vendor1_Text_2:
# 257 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Cod, iced this morning. All the\n"
	.string "same size, aren't they. Customers like\l"
	.string "that. Tidy. Nobody asks why there's no\l"
	.string "big ones.$"

ParcelCoast_Vendor2_Text_0:
# 265 "data/maps/ParcelCoast/scripts.pory"
	.string "MAN: Urchin roe's off the list. The\n"
	.string "review says the bottom's a nursery, not\l"
	.string "a shelf. Nothing else down there to sell.\l"
	.string "That was the point, wasn't it.$"

ParcelCoast_Vendor2_Text_1:
# 270 "data/maps/ParcelCoast/scripts.pory"
	.string "MAN: Urchin roe. The FOUNDATION buyer\n"
	.string "didn't come this morning. First morning\l"
	.string "in a year.\p"
	.string "You wrote 'urchins' in your survey, I\n"
	.string "hear. Funny how a word gets to a buyer\l"
	.string "before it gets to a fisherman.$"

ParcelCoast_Vendor2_Text_2:
# 274 "data/maps/ParcelCoast/scripts.pory"
	.string "MAN: Urchin roe! The FOUNDATION found\n"
	.string "a market for it overseas. Clever.\l"
	.string "There's nothing else down there to sell.$"

ParcelCoast_Vendor3_Text_0:
# 282 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Ice is still FOUNDATION ice.\n"
	.string "Fuel's still FOUNDATION fuel. The rent\l"
	.string "went down a page in the review. I sell\l"
	.string "fish. I noticed the page.$"

ParcelCoast_Vendor3_Text_1:
# 287 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: FOUNDATION ice, FOUNDATION\n"
	.string "fuel, FOUNDATION rent, and today a\l"
	.string "FOUNDATION man came round asking what\l"
	.string "the ranger bought.\p"
	.string "I said fish. He wrote it down.\n"
	.string "Everybody's writing things down this\l"
	.string "week. I liked it better when it was just\l"
	.string "you.$"

ParcelCoast_Vendor3_Text_2:
# 291 "data/maps/ParcelCoast/scripts.pory"
	.string "WOMAN: Ice is FOUNDATION ice. Fuel's\n"
	.string "FOUNDATION fuel. The stall rent goes to\l"
	.string "a FOUNDATION company. I sell fish.\l"
	.string "That's the only bit of this that's mine.$"

ParcelCoast_Vendor4_Text_0:
# 299 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: WAILMER in the harbour mouth\n"
	.string "yesterday. One. My father would have\l"
	.string "laughed at one. I stood on the quay and\l"
	.string "watched it like a boy.$"

ParcelCoast_Vendor4_Text_1:
# 304 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: Walk across the harbour on the\n"
	.string "backs of the WAILMER. My father said it.\l"
	.string "Now it's in a ranger's book, with a date\l"
	.string "beside it.\p"
	.string "First time anybody's written down what\n"
	.string "my father said. He'd have hated the\l"
	.string "date. He'd have liked the rest.$"

ParcelCoast_Vendor4_Text_2:
# 308 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: Fifty years ago you could walk\n"
	.string "across the harbour on the backs of the\l"
	.string "WAILMER. My father said that. His\l"
	.string "father said it to him. Somebody has to\l"
	.string "keep saying it.$"

ParcelCoast_Girl_Text_0:
# 316 "data/maps/ParcelCoast/scripts.pory"
	.string "GIRL: The gulls dived today. Mum\n"
	.string "stopped on the quay to watch. She\l"
	.string "didn't say anything. She held my hand\l"
	.string "very tight.$"

ParcelCoast_Girl_Text_1:
# 321 "data/maps/ParcelCoast/scripts.pory"
	.string "GIRL: The gulls still don't dive. But a\n"
	.string "man from the FOUNDATION stood on the\l"
	.string "quay and watched them not dive for an\l"
	.string "hour.\p"
	.string "Mum says that's new. Watching's new.\n"
	.string "I've been watching for ages.$"

ParcelCoast_Girl_Text_2:
# 325 "data/maps/ParcelCoast/scripts.pory"
	.string "GIRL: The gulls follow the boats in but\n"
	.string "they don't dive anymore. Mum says they\l"
	.string "know something we don't.$"

ParcelCoast_Docker_Text_0:
# 333 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Cannery's on half days. Half\n"
	.string "days, full pay. HARLAND's lot argued it\l"
	.string "in the union hall for a week. I slept in a\l"
	.string "bed in daylight. Strange thing.$"

ParcelCoast_Docker_Text_1:
# 338 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Two shifts, seven days, and\n"
	.string "this morning head office rang the\l"
	.string "cannery twice. The cannery never stops.\l"
	.string "The phone never rang.\p"
	.string "You wrote something. I don't know what.\n"
	.string "The phone knows.$"

ParcelCoast_Docker_Text_2:
# 342 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Two shifts a day, seven days.\n"
	.string "The cannery never stops. The fish stop.\l"
	.string "The cannery doesn't.$"

ParcelCoast_GullMan_Text_0:
# 351 "data/maps/ParcelCoast/scripts.pory"
	.string "GULL MAN: Sixty-one. That's more than\n"
	.string "the stacks ever held. They've found a\l"
	.string "way to live on what we built to kill the\l"
	.string "beach.\p"
	.string "I don't know if that's hope or just\n"
	.string "gulls. Here. From the sea, before the\l"
	.string "dredge.$"

ParcelCoast_GullMan_Text_1:
# 355 "data/maps/ParcelCoast/scripts.pory"
	.string "GULL MAN: The east end of the quay wall.\n"
	.string "Count the WINGULL. Dusk's best but any\l"
	.string "time will do.$"

ParcelCoast_GullMan_Text_2:
# 360 "data/maps/ParcelCoast/scripts.pory"
	.string "GULL MAN: The WINGULL used to roost on\n"
	.string "the sea stacks. The dredge took the\l"
	.string "stacks for spoil; they roost on the\l"
	.string "breakwater now. I count them every\l"
	.string "dusk. I can't see the east end from here\l"
	.string "any more; my eyes.\p"
	.string "Go to the east end of the quay wall and\n"
	.string "count what's roosting. Tell me.$"

ParcelCoast_GullMan_Text_3:
# 366 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: I count the boats out and the\n"
	.string "boats in. Half the number now, by order.\l"
	.string "The crates per boat went up. Nobody\l"
	.string "asked me. I'm telling you anyway.$"

ParcelCoast_GullMan_Text_4:
# 371 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: Boats out, boats in. Same\n"
	.string "number. Crates, fewer. And now\l"
	.string "somebody's counted the counting: your\l"
	.string "survey has my crates in it.\p"
	.string "Nobody asked me to count. Somebody\n"
	.string "read it anyway. That's all a counter\l"
	.string "wants, in the end.$"

ParcelCoast_GullMan_Text_5:
# 375 "data/maps/ParcelCoast/scripts.pory"
	.string "OLD MAN: I count the boats out and the\n"
	.string "boats in. Same number. I count the\l"
	.string "crates. Fewer every month. Nobody\l"
	.string "asked me to count. Nobody asked the\l"
	.string "gulls either.$"

ParcelCoast_ReturnFerry_Text_0:
# 385 "data/maps/ParcelCoast/scripts.pory"
	.string "SAILOR: Back to SALTWICK, RANGER? Go\n"
	.string "on. They'll want to see the one who did\l"
	.string "it. Don't let them buy you a drink.\l"
	.string "They'll try.$"

ParcelCoast_ReturnFerry_Text_1:
# 389 "data/maps/ParcelCoast/scripts.pory"
	.string "SAILOR: Back to SALTWICK, RANGER?\n"
	.string "Can't say I blame you. Nothing to do\l"
	.string "here but watch them take it.$"

ParcelCoast_ReturnFerry_Text_2:
# 391 "data/maps/ParcelCoast/scripts.pory"
	.string "SAILOR: I'll wait. The catch isn't going\n"
	.string "anywhere. Less of it every run, but it\l"
	.string "isn't going anywhere.$"

ParcelCoast_MereholtAide_Text_0:
# 408 "data/maps/ParcelCoast/scripts.pory"
	.string "AIDE: No message came down. She said\n"
	.string "you would already have everything she'd\l"
	.string "say.$"

ParcelCoast_MereholtAide_Text_1:
# 412 "data/maps/ParcelCoast/scripts.pory"
	.string "AIDE: Ms. BROOKE is up from the mainland\n"
	.string "office. She has asked for you. By name,\l"
	.string "no title on it.\p"
	.string "The boardroom. Top floor. Now, if you\n"
	.string "would.$"

ParcelCoast_MereholtAide_Text_2:
# 413 "data/maps/ParcelCoast/scripts.pory"
	.string "Go up?$"

ParcelCoast_MereholtAide_Text_3:
# 415 "data/maps/ParcelCoast/scripts.pory"
	.string "AIDE: She'll wait. She prices patience\n"
	.string "like everything else. Accurately.$"

ParcelCoast_SignQuay_Text_0:
# 430 "data/maps/ParcelCoast/scripts.pory"
	.string "MEREHOLT COASTAL WORKS -- LIGHTHOUSE\n"
	.string "QUAY\p"
	.string "Ferry to SALTWICK, twice daily. Landing\n"
	.string "fees to the office. No fishing from the\l"
	.string "quay. The quay is for the fleet.$"

ParcelCoast_SignMarket_Text_0:
# 434 "data/maps/ParcelCoast/scripts.pory"
	.string "FISH MARKET\p"
	.string "Stalls 1-12 let by MEREHOLT COASTAL\n"
	.string "HOLDINGS. Catch to be weighed at the\l"
	.string "cannery before sale. Undersize fish are\l"
	.string "not to be landed. Undersize is whatever\l"
	.string "the Board says this month.$"

ParcelCoast_Brage_Text_0:
# 441 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Off the boats, on the beach,\n"
	.string "nothing to do till the tide. Battle me,\l"
	.string "RANGER, I'm bored of losing at cards.$"

ParcelCoast_Brage_Text_1:
# 442 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Lost at that too.$"

ParcelCoast_Brage_Text_2:
# 457 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Ten years on the trawlers. We\n"
	.string "used to come in with the deck awash.\l"
	.string "Now you can see the planks the whole\l"
	.string "trip home.$"

ParcelCoast_Brage_R2_Text_0:
# 468 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoast_Brage_R2_Text_1:
# 470 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Another time, then.$"

ParcelCoast_Brage_R2_Text_2:
# 474 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: …Fair.$"

ParcelCoast_Brage_R2_Text_3:
# 475 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_Brage_R3_Text_0:
# 482 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Brage_R3_Text_1:
# 488 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Still yours.$"

ParcelCoast_Brage_R3_Text_2:
# 489 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Brage_R4_Text_0:
# 496 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_Brage_R4_Text_1:
# 503 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Brage_R5_Text_0:
# 510 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Brage_R5_Text_1:
# 516 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Right. That's the whole of it.$"

ParcelCoast_Brage_R5_Text_2:
# 517 "data/maps/ParcelCoast/scripts.pory"
	.string "BRAGE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Frod_Text_0:
# 523 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: SHARPEDO off the beach. Never\n"
	.string "used to be. Nothing else to eat so they\l"
	.string "come in close. Battle.$"

ParcelCoast_Frod_Text_1:
# 524 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Close enough.$"

ParcelCoast_Frod_Text_2:
# 539 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: When the big fish are gone, the\n"
	.string "sharks eat whatever's left and then\l"
	.string "they eat each other. That's not a\l"
	.string "saying. That's this beach.$"

ParcelCoast_Frod_R2_Text_0:
# 550 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Frod_R2_Text_1:
# 552 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCoast_Frod_R2_Text_2:
# 556 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: …Again, then. Later.$"

ParcelCoast_Frod_R2_Text_3:
# 557 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Frod_R3_Text_0:
# 564 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCoast_Frod_R3_Text_1:
# 571 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Frod_R4_Text_0:
# 578 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCoast_Frod_R4_Text_1:
# 584 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Right. That's the whole of it.$"

ParcelCoast_Frod_R4_Text_2:
# 585 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Frod_R5_Text_0:
# 592 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoast_Frod_R5_Text_1:
# 598 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: Still yours.$"

ParcelCoast_Frod_R5_Text_2:
# 599 "data/maps/ParcelCoast/scripts.pory"
	.string "FROD: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCoast_Gyda_Text_0:
# 605 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: You swam out past the dredge\n"
	.string "line! Nobody does that. Battle, then I'll\l"
	.string "show you what's down there.$"

ParcelCoast_Gyda_Text_1:
# 606 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Nothing. That's what's down\n"
	.string "there. Nothing.$"

ParcelCoast_Gyda_Text_2:
# 621 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: I dive the barren for the\n"
	.string "FOUNDATION. Counting urchins. There's a\l"
	.string "bonus if the number goes down. It never\l"
	.string "goes down.$"

ParcelCoast_Gyda_R2_Text_0:
# 632 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Gyda_R2_Text_1:
# 634 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCoast_Gyda_R2_Text_2:
# 638 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: That's the one I wanted to see.$"

ParcelCoast_Gyda_R2_Text_3:
# 639 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Gyda_R3_Text_0:
# 646 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelCoast_Gyda_R3_Text_1:
# 652 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: …Again, then. Later.$"

ParcelCoast_Gyda_R3_Text_2:
# 653 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Gyda_R4_Text_0:
# 660 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCoast_Gyda_R4_Text_1:
# 667 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Gyda_R5_Text_0:
# 674 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoast_Gyda_R5_Text_1:
# 681 "data/maps/ParcelCoast/scripts.pory"
	.string "GYDA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_Hroar_Text_0:
# 687 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: The inlet's mine. Been swimming\n"
	.string "it since I was six. Battle for it.$"

ParcelCoast_Hroar_Text_1:
# 688 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Yours, then. Mind the drums.$"

ParcelCoast_Hroar_Text_2:
# 703 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: There's fuel drums on the bottom\n"
	.string "of the inlet with the crest on. Nobody\l"
	.string "put them there. They just arrived.$"

ParcelCoast_Hroar_R2_Text_0:
# 714 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoast_Hroar_R2_Text_1:
# 716 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Suit yourself. I'm here.$"

ParcelCoast_Hroar_R2_Text_2:
# 720 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: That's the one I wanted to see.$"

ParcelCoast_Hroar_R2_Text_3:
# 721 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Hroar_R3_Text_0:
# 728 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCoast_Hroar_R3_Text_1:
# 735 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Hroar_R4_Text_0:
# 742 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_Hroar_R4_Text_1:
# 748 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Noted. Properly, this time.$"

ParcelCoast_Hroar_R4_Text_2:
# 749 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Hroar_R5_Text_0:
# 756 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCoast_Hroar_R5_Text_1:
# 762 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: Still yours.$"

ParcelCoast_Hroar_R5_Text_2:
# 763 "data/maps/ParcelCoast/scripts.pory"
	.string "HROAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Jorid_Text_0:
# 769 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: The beach is for playing! Nobody\n"
	.string "plays here anymore. They work. Battle\l"
	.string "me, that's nearly playing.$"

ParcelCoast_Jorid_Text_1:
# 770 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Nearly.$"

ParcelCoast_Jorid_Text_2:
# 785 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Mum says the beach used to have\n"
	.string "shells. I've never found a shell. Just\l"
	.string "the drum rings.$"

ParcelCoast_Jorid_R2_Text_0:
# 796 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Jorid_R2_Text_1:
# 798 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Fine. Same spot.$"

ParcelCoast_Jorid_R2_Text_2:
# 802 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Noted. Properly, this time.$"

ParcelCoast_Jorid_R2_Text_3:
# 803 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Jorid_R3_Text_0:
# 810 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Jorid_R3_Text_1:
# 816 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Right. That's the whole of it.$"

ParcelCoast_Jorid_R3_Text_2:
# 817 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Jorid_R4_Text_0:
# 824 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_Jorid_R4_Text_1:
# 830 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: …Fair.$"

ParcelCoast_Jorid_R4_Text_2:
# 831 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Jorid_R5_Text_0:
# 838 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_Jorid_R5_Text_1:
# 845 "data/maps/ParcelCoast/scripts.pory"
	.string "JORID: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Ketil_Text_0:
# 851 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: FOUNDATION security. Off duty.\n"
	.string "On duty I'd ask for your pass. Off duty\l"
	.string "I'll just beat you.$"

ParcelCoast_Ketil_Text_1:
# 852 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: On duty tomorrow. Don't be here.$"

ParcelCoast_Ketil_Text_2:
# 867 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: The office has a floor nobody\n"
	.string "goes to. Top one. The boardroom. I've\l"
	.string "seen the lift go up. Never seen it come\l"
	.string "down with anyone smiling.$"

ParcelCoast_Ketil_R2_Text_0:
# 878 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoast_Ketil_R2_Text_1:
# 880 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: No hurry. The water keeps.$"

ParcelCoast_Ketil_R2_Text_2:
# 884 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Noted. Properly, this time.$"

ParcelCoast_Ketil_R2_Text_3:
# 885 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Ketil_R3_Text_0:
# 892 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCoast_Ketil_R3_Text_1:
# 898 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Still yours.$"

ParcelCoast_Ketil_R3_Text_2:
# 899 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Ketil_R4_Text_0:
# 906 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCoast_Ketil_R4_Text_1:
# 912 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: That's the one I wanted to see.$"

ParcelCoast_Ketil_R4_Text_2:
# 913 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Ketil_R5_Text_0:
# 920 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Ketil_R5_Text_1:
# 926 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: …Fair.$"

ParcelCoast_Ketil_R5_Text_2:
# 927 "data/maps/ParcelCoast/scripts.pory"
	.string "KETIL: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Liva_Text_0:
# 933 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: I came up from the mainland for\n"
	.string "the FOUNDATION's graduate scheme.\l"
	.string "Sustainable harvest modelling. Battle?$"

ParcelCoast_Liva_Text_1:
# 934 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: The model didn't predict that.$"

ParcelCoast_Liva_Text_2:
# 949 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: The model's beautiful. Elegant.\n"
	.string "Every term in it is true. It's just that\l"
	.string "the fish didn't read it.$"

ParcelCoast_Liva_R2_Text_0:
# 960 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Liva_R2_Text_1:
# 962 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Another time, then.$"

ParcelCoast_Liva_R2_Text_2:
# 966 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: That's the one I wanted to see.$"

ParcelCoast_Liva_R2_Text_3:
# 967 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_Liva_R3_Text_0:
# 974 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Liva_R3_Text_1:
# 980 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Right. That's the whole of it.$"

ParcelCoast_Liva_R3_Text_2:
# 981 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Liva_R4_Text_0:
# 988 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelCoast_Liva_R4_Text_1:
# 994 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Still yours.$"

ParcelCoast_Liva_R4_Text_2:
# 995 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Liva_R5_Text_0:
# 1002 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCoast_Liva_R5_Text_1:
# 1008 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: …Fair.$"

ParcelCoast_Liva_R5_Text_2:
# 1009 "data/maps/ParcelCoast/scripts.pory"
	.string "LIVA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_Magnus_Text_0:
# 1015 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Director, Coastal Holdings.\n"
	.string "You're the RANGER with the notebook.\l"
	.string "Humour me. I collect strong trainers\l"
	.string "the way I collect quotas.$"

ParcelCoast_Magnus_Text_1:
# 1016 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Well. You're not for sale, at any\n"
	.string "rate.$"

ParcelCoast_Magnus_Text_2:
# 1031 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Write what you like. We own the\n"
	.string "ice, the fuel, the stalls, the boats'\l"
	.string "paper and the hearing hall. A report is a\l"
	.string "piece of paper. We own the paper.$"

ParcelCoast_Magnus_R2_Text_0:
# 1042 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Magnus_R2_Text_1:
# 1044 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Fine. Same spot.$"

ParcelCoast_Magnus_R2_Text_2:
# 1048 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Right. That's the whole of it.$"

ParcelCoast_Magnus_R2_Text_3:
# 1049 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Magnus_R3_Text_0:
# 1056 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCoast_Magnus_R3_Text_1:
# 1062 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: …Again, then. Later.$"

ParcelCoast_Magnus_R3_Text_2:
# 1063 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Magnus_R4_Text_0:
# 1070 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_Magnus_R4_Text_1:
# 1076 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: …Fair.$"

ParcelCoast_Magnus_R4_Text_2:
# 1077 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Magnus_R5_Text_0:
# 1084 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCoast_Magnus_R5_Text_1:
# 1090 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: Noted. Properly, this time.$"

ParcelCoast_Magnus_R5_Text_2:
# 1091 "data/maps/ParcelCoast/scripts.pory"
	.string "MAGNUS: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Nikolai_Text_0:
# 1097 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Father says the coast is an\n"
	.string "investment. I say it smells. Battle me\l"
	.string "and I'll tell Father you were rude.$"

ParcelCoast_Nikolai_Text_1:
# 1098 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Father won't care. Father\n"
	.string "never cares.$"

ParcelCoast_Nikolai_Text_2:
# 1113 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: We have a house on the\n"
	.string "mainland and a house here. The one here\l"
	.string "is for 'optics'. I looked that up. It\l"
	.string "means being seen.$"

ParcelCoast_Nikolai_R2_Text_0:
# 1124 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoast_Nikolai_R2_Text_1:
# 1126 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Suit yourself. I'm here.$"

ParcelCoast_Nikolai_R2_Text_2:
# 1130 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Right. That's the whole of it.$"

ParcelCoast_Nikolai_R2_Text_3:
# 1131 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Nikolai_R3_Text_0:
# 1138 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelCoast_Nikolai_R3_Text_1:
# 1145 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelCoast_Nikolai_R4_Text_0:
# 1152 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: I don't care about the paper.\n"
	.string "I care about the one I lost. Go?$"

ParcelCoast_Nikolai_R4_Text_1:
# 1158 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: …Again, then. Later.$"

ParcelCoast_Nikolai_R4_Text_2:
# 1159 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoast_Nikolai_R5_Text_0:
# 1166 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_Nikolai_R5_Text_1:
# 1172 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: …Fair.$"

ParcelCoast_Nikolai_R5_Text_2:
# 1173 "data/maps/ParcelCoast/scripts.pory"
	.string "NIKOLAI: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Oda_Text_0:
# 1179 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: The market's quaint, isn't it. All\n"
	.string "these little stalls. I'm here for the\l"
	.string "roe. Battle, darling?$"

ParcelCoast_Oda_Text_1:
# 1180 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Not as quaint as I thought.$"

ParcelCoast_Oda_Text_2:
# 1195 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Everyone on the mainland eats this\n"
	.string "roe. It's on every menu. Nobody asks\l"
	.string "what the urchins were eating before\l"
	.string "there was nothing else.$"

ParcelCoast_Oda_R2_Text_0:
# 1206 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: I kept the team up for this. Again?$"

ParcelCoast_Oda_R2_Text_1:
# 1208 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Fine. Same spot.$"

ParcelCoast_Oda_R2_Text_2:
# 1212 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Still yours.$"

ParcelCoast_Oda_R2_Text_3:
# 1213 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_Oda_R3_Text_0:
# 1220 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_Oda_R3_Text_1:
# 1227 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Oda_R4_Text_0:
# 1234 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCoast_Oda_R4_Text_1:
# 1240 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: …Fair.$"

ParcelCoast_Oda_R4_Text_2:
# 1241 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Oda_R5_Text_0:
# 1248 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoast_Oda_R5_Text_1:
# 1254 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: That's the one I wanted to see.$"

ParcelCoast_Oda_R5_Text_2:
# 1255 "data/maps/ParcelCoast/scripts.pory"
	.string "ODA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_Petter_Text_0:
# 1261 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Cannery night shift. I sleep on\n"
	.string "the quay. You woke me. Battle.$"

ParcelCoast_Petter_Text_1:
# 1262 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Going back to sleep.$"

ParcelCoast_Petter_Text_2:
# 1277 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Two shifts a day and the cans\n"
	.string "are half empty. They put more water in.\l"
	.string "You can taste the quota in the tin.$"

ParcelCoast_Petter_R2_Text_0:
# 1288 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelCoast_Petter_R2_Text_1:
# 1290 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Another time, then.$"

ParcelCoast_Petter_R2_Text_2:
# 1294 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: …Fair.$"

ParcelCoast_Petter_R2_Text_3:
# 1295 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Petter_R3_Text_0:
# 1302 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCoast_Petter_R3_Text_1:
# 1308 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Still yours.$"

ParcelCoast_Petter_R3_Text_2:
# 1309 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_Petter_R4_Text_0:
# 1316 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelCoast_Petter_R4_Text_1:
# 1322 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Noted. Properly, this time.$"

ParcelCoast_Petter_R4_Text_2:
# 1323 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Petter_R5_Text_0:
# 1330 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCoast_Petter_R5_Text_1:
# 1337 "data/maps/ParcelCoast/scripts.pory"
	.string "PETTER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Ragnar_Text_0:
# 1343 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: One GYARADOS. Took me a\n"
	.string "lifetime off this quay. Last one in the\l"
	.string "harbour, maybe. Battle it.$"

ParcelCoast_Ragnar_Text_1:
# 1344 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: It's still the last one.$"

ParcelCoast_Ragnar_Text_2:
# 1359 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: HARLAND's cousin, river side. He\n"
	.string "talks about you. Doesn't say good or\l"
	.string "bad. Just talks. For HARLAND that's a\l"
	.string "speech.$"

ParcelCoast_Ragnar_R2_Text_0:
# 1370 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelCoast_Ragnar_R2_Text_1:
# 1372 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Suit yourself. I'm here.$"

ParcelCoast_Ragnar_R2_Text_2:
# 1376 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Still yours.$"

ParcelCoast_Ragnar_R2_Text_3:
# 1377 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Ragnar_R3_Text_0:
# 1384 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelCoast_Ragnar_R3_Text_1:
# 1390 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: That's the one I wanted to see.$"

ParcelCoast_Ragnar_R3_Text_2:
# 1391 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Ragnar_R4_Text_0:
# 1398 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCoast_Ragnar_R4_Text_1:
# 1404 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: …Fair.$"

ParcelCoast_Ragnar_R4_Text_2:
# 1405 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoast_Ragnar_R5_Text_0:
# 1412 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Ragnar_R5_Text_1:
# 1419 "data/maps/ParcelCoast/scripts.pory"
	.string "RAGNAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Solvor_Text_0:
# 1425 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: My AZUMARILL loves the\n"
	.string "harbour! Well. Loved. It won't go in the\l"
	.string "water now. Battle?$"

ParcelCoast_Solvor_Text_1:
# 1426 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: It still won't go in.$"

ParcelCoast_Solvor_Text_2:
# 1441 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: It came out itchy, same as the\n"
	.string "MARILL at ELVSUND. The same itch, two\l"
	.string "hundred miles apart. That's not two\l"
	.string "problems.$"

ParcelCoast_Solvor_R2_Text_0:
# 1452 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Solvor_R2_Text_1:
# 1454 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Suit yourself. I'm here.$"

ParcelCoast_Solvor_R2_Text_2:
# 1458 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: …Fair.$"

ParcelCoast_Solvor_R2_Text_3:
# 1459 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoast_Solvor_R3_Text_0:
# 1466 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelCoast_Solvor_R3_Text_1:
# 1472 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Noted. Properly, this time.$"

ParcelCoast_Solvor_R3_Text_2:
# 1473 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Solvor_R4_Text_0:
# 1480 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_Solvor_R4_Text_1:
# 1487 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoast_Solvor_R5_Text_0:
# 1494 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCoast_Solvor_R5_Text_1:
# 1500 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Right. That's the whole of it.$"

ParcelCoast_Solvor_R5_Text_2:
# 1501 "data/maps/ParcelCoast/scripts.pory"
	.string "SOLVOR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_Tore_Text_0:
# 1507 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Ferry crew. We run twice a day\n"
	.string "whether anyone rides or not. Mostly\l"
	.string "not. Battle me, it passes the time.$"

ParcelCoast_Tore_Text_1:
# 1508 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Time passed.$"

ParcelCoast_Tore_Text_2:
# 1523 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: The ferry's FOUNDATION too. The\n"
	.string "one kindness on this coast and they\l"
	.string "own it. I'm not complaining. I'm just\l"
	.string "saying.$"

ParcelCoast_Tore_R2_Text_0:
# 1534 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_Tore_R2_Text_1:
# 1536 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCoast_Tore_R2_Text_2:
# 1540 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Still yours.$"

ParcelCoast_Tore_R2_Text_3:
# 1541 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoast_Tore_R3_Text_0:
# 1548 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCoast_Tore_R3_Text_1:
# 1554 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Noted. Properly, this time.$"

ParcelCoast_Tore_R3_Text_2:
# 1555 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: One more in me. After the high\n"
	.string "ground.$"

ParcelCoast_Tore_R4_Text_0:
# 1562 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_Tore_R4_Text_1:
# 1568 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: …Fair.$"

ParcelCoast_Tore_R4_Text_2:
# 1569 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_Tore_R5_Text_0:
# 1576 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoast_Tore_R5_Text_1:
# 1583 "data/maps/ParcelCoast/scripts.pory"
	.string "TORE: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCoast_T_Helge_Text_0:
# 1591 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Quay crew. We tie up the fleet\n"
	.string "and count what's missing. Battle, it's\l"
	.string "quicker than counting.$"

ParcelCoast_T_Helge_Text_1:
# 1592 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Quicker, yes.$"

ParcelCoast_T_Helge_Text_2:
# 1607 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Forty-one boats went out.\n"
	.string "Forty-one came back. The count's\l"
	.string "always right. It's the holds that are\l"
	.string "wrong.$"

ParcelCoast_T_Helge_R2_Text_0:
# 1618 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoast_T_Helge_R2_Text_1:
# 1620 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Fine. Same spot.$"

ParcelCoast_T_Helge_R2_Text_2:
# 1624 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Right. That's the whole of it.$"

ParcelCoast_T_Helge_R2_Text_3:
# 1625 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_T_Helge_R3_Text_0:
# 1632 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelCoast_T_Helge_R3_Text_1:
# 1638 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: …Again, then. Later.$"

ParcelCoast_T_Helge_R3_Text_2:
# 1639 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_T_Helge_R4_Text_0:
# 1646 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoast_T_Helge_R4_Text_1:
# 1652 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: That's the one I wanted to see.$"

ParcelCoast_T_Helge_R4_Text_2:
# 1653 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_T_Helge_R5_Text_0:
# 1660 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_T_Helge_R5_Text_1:
# 1667 "data/maps/ParcelCoast/scripts.pory"
	.string "HELGE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_T_Anton_Text_0:
# 1673 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: The beach is the only bit of this\n"
	.string "coast that's free. Even the sand's got\l"
	.string "rings in it. Battle?$"

ParcelCoast_T_Anton_Text_1:
# 1674 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Free, and lost.$"

ParcelCoast_T_Anton_Text_2:
# 1689 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Drum rings. Fuel drums. They roll\n"
	.string "off the quay in storms. The crest's on\l"
	.string "all of them.$"

ParcelCoast_T_Anton_R2_Text_0:
# 1700 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelCoast_T_Anton_R2_Text_1:
# 1702 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Fine. Same spot.$"

ParcelCoast_T_Anton_R2_Text_2:
# 1706 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: …Fair.$"

ParcelCoast_T_Anton_R2_Text_3:
# 1707 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_T_Anton_R3_Text_0:
# 1714 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCoast_T_Anton_R3_Text_1:
# 1720 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Noted. Properly, this time.$"

ParcelCoast_T_Anton_R3_Text_2:
# 1721 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_T_Anton_R4_Text_0:
# 1728 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoast_T_Anton_R4_Text_1:
# 1734 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: …Again, then. Later.$"

ParcelCoast_T_Anton_R4_Text_2:
# 1735 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_T_Anton_R5_Text_0:
# 1742 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCoast_T_Anton_R5_Text_1:
# 1749 "data/maps/ParcelCoast/scripts.pory"
	.string "ANTON: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoast_T_Beate_Text_0:
# 1755 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Up from the mainland for the\n"
	.string "fish. Everyone says the fish. Nobody\l"
	.string "says there's hardly any. Battle, darling.$"

ParcelCoast_T_Beate_Text_1:
# 1756 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Hardly any of that, either.$"

ParcelCoast_T_Beate_Text_2:
# 1771 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: The brochure says 'working\n"
	.string "harbour'. It is working. Something's\l"
	.string "working. It isn't the sea.$"

ParcelCoast_T_Beate_R2_Text_0:
# 1782 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: I kept the team up for this.\n"
	.string "Again?$"

ParcelCoast_T_Beate_R2_Text_1:
# 1784 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Another time, then.$"

ParcelCoast_T_Beate_R2_Text_2:
# 1788 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Still yours.$"

ParcelCoast_T_Beate_R2_Text_3:
# 1789 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCoast_T_Beate_R3_Text_0:
# 1796 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoast_T_Beate_R3_Text_1:
# 1802 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: …Fair.$"

ParcelCoast_T_Beate_R3_Text_2:
# 1803 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoast_T_Beate_R4_Text_0:
# 1810 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCoast_T_Beate_R4_Text_1:
# 1816 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: That's the one I wanted to see.$"

ParcelCoast_T_Beate_R4_Text_2:
# 1817 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoast_T_Beate_R5_Text_0:
# 1824 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCoast_T_Beate_R5_Text_1:
# 1831 "data/maps/ParcelCoast/scripts.pory"
	.string "BEATE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoast_Shell_Text_0:
# 1840 "data/maps/ParcelCoast/scripts.pory"
	.string "Half-buried in the sand between two\n"
	.string "drum rings: a shell. Whole. Pink inside.\p"
	.string "The first one anyone has found on this\n"
	.string "beach in years. Taken.$"

ParcelCoast_Shell_Text_1:
# 1845 "data/maps/ParcelCoast/scripts.pory"
	.string "Sand. Drum rings. The hollow where a\n"
	.string "shell was.$"

ParcelCoast_PerrinScene_Text_0:
# 1858 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelCoast_PerrinScene_Text_1:
# 1862 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: Coastal Holdings liaison. New\n"
	.string "card, new coat. Don't look at me like\l"
	.string "that.\p"
	.string "One last time, WREN. Then I'm done\n"
	.string "pretending we're on the same side. I\l"
	.string "never was. I just liked you.$"

ParcelCoast_PerrinScene_Text_2:
# 1863 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: …Yeah. I know.$"

ParcelCoast_PerrinScene_Text_3:
# 1864 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: Write it true, then. Whatever it\n"
	.string "costs. I'll be upstairs, typing the\l"
	.string "response.\p"
	.string "I type well. HOLLIS says so.$"

ParcelCoast_PerrinTalk_Text_0:
# 1877 "data/maps/ParcelCoast/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelCoast_Epilogue_Text_0:
# 1888 "data/maps/ParcelCoast/scripts.pory"
	.string "MEREHOLT COAST. The cranes swing on\n"
	.string "schedule. The quota review runs to\l"
	.string "spring, and the boats go out under it\l"
	.string "and come back with what there is.$"

ParcelCoast_Epilogue_Text_1:
# 1889 "data/maps/ParcelCoast/scripts.pory"
	.string "At the east berth the dredge is tied up\n"
	.string "with its bucket down and a padlock\l"
	.string "through the chain. The night crew sit on\l"
	.string "the quay edge with nothing to lift,\l"
	.string "which the docker says is a kind of work.$"

ParcelCoast_Epilogue_Text_2:
# 1891 "data/maps/ParcelCoast/scripts.pory"
	.string "The office above the docks has a blank\n"
	.string "where a nameplate was. The kettle is on\l"
	.string "anyway. The secretary comes in on her\l"
	.string "own time, pours two cups, and drinks\l"
	.string "neither.$"

ParcelCoast_Epilogue_Text_3:
# 1893 "data/maps/ParcelCoast/scripts.pory"
	.string "The office above the docks keeps its\n"
	.string "nameplate. HOLLIS is at the window with\l"
	.string "the fourth letter in the typewriter and\l"
	.string "the ribbon worn to grey. She has not\l"
	.string "sent it. She is not going to stop writing\l"
	.string "it.$"

ParcelCoast_Epilogue_Text_4:
# 1895 "data/maps/ParcelCoast/scripts.pory"
	.string "HALE: You want to know if it was worth\n"
	.string "it. Wrong verb. Ask if it was true.\p"
	.string "It was. Go and rest. Then go and read\n"
	.string "something else. There's a lot of region\l"
	.string "left.$"

ParcelCoast_GymHarland_Rematch_Text_0:
# 1907 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: They read you aloud at the\n"
	.string "hearing. I'd read you the old way, too.\l"
	.string "Boat's in, nets are dry, and the crew's\l"
	.string "been training on the dredge line out of\l"
	.string "spite.\p"
	.string "Full strength. Aye?$"

ParcelCoast_GymHarland_Rematch_Text_1:
# 1909 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Tide's at six. Offer stands.$"

ParcelCoast_GymHarland_Rematch_Text_2:
# 1913 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: …Aye. You read the water.\n"
	.string "Still.$"

ParcelCoast_GymHarland_Rematch_Text_3:
# 1914 "data/maps/ParcelCoast/scripts.pory"
	.string "HARLAND: Tide's at six. Any day you like.$"

ParcelCoast_Dorsey_Text_0:
# 1924 "data/maps/ParcelCoast/scripts.pory"
	.string "DORSEY: Development that listens. I\n"
	.string "said it at the hearing. They wrote down\l"
	.string "'listens' in quotes. I've seen the\l"
	.string "transcript.\p"
	.string "The quotes are fair.$"

ParcelCoast_Dorsey_Text_1:
# 1929 "data/maps/ParcelCoast/scripts.pory"
	.string "DORSEY: You'll find the hearing room up\n"
	.string "the street when the time comes. I'll be\l"
	.string "in it. I sit on the review board's local\l"
	.string "panel. Somebody from here should.\p"
	.string "I know what that looks like. Revolving\n"
	.string "door. The door revolves because the\l"
	.string "building only has one.$"

ParcelCoast_Dorsey_Text_2:
# 1933 "data/maps/ParcelCoast/scripts.pory"
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
# 1941 "data/maps/ParcelCoast/scripts.pory"
	.string "A survey stake set into a crack in the\n"
	.string "quay stones, red cloth snapping in the\l"
	.string "wind off the harbour. The dockers walk\l"
	.string "round it.$"

ParcelCoast_SurveyStake_Text_1:
# 1946 "data/maps/ParcelCoast/scripts.pory"
	.string "Second reading. The dredge is tied up\n"
	.string "with a padlock through the chain.\l"
	.string "Eleven fish, one length, in the last\l"
	.string "landing before it stopped; the\l"
	.string "inspector's second column has begun.\l"
	.string "The cranes swing on schedule.\p"
	.string "You write the padlock. Nobody else will\n"
	.string "think it is data.$"

ParcelCoast_PairQuay_Text_0:
# 1957 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Dredge is stopped pending\n"
	.string "review. I'm on the quay crew now.\l"
	.string "Unloading what the boats bring in.$"

ParcelCoast_PairQuay_Text_1:
# 1958 "data/maps/ParcelCoast/scripts.pory"
	.string "FISHER: Which is?$"

ParcelCoast_PairQuay_Text_2:
# 1959 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Not much. But it's yours, and\n"
	.string "it's wet, and I'm paid to lift it. That's a\l"
	.string "job that doesn't argue with itself.$"

ParcelCoast_PairQuay_Text_3:
# 1960 "data/maps/ParcelCoast/scripts.pory"
	.string "FISHER: Give it a season. The small ones\n"
	.string "come back first. Then we'll both have\l"
	.string "work that argues less.$"

ParcelCoast_PairQuay_Text_4:
# 1962 "data/maps/ParcelCoast/scripts.pory"
	.string "FISHER: The ranger walked the whole\n"
	.string "quay with a notebook. Didn't write\l"
	.string "'forty'.$"

ParcelCoast_PairQuay_Text_5:
# 1963 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: What did they write?$"

ParcelCoast_PairQuay_Text_6:
# 1964 "data/maps/ParcelCoast/scripts.pory"
	.string "FISHER: The catch book. The undersize\n"
	.string "column. The nine objections nobody had\l"
	.string "read. They read them.$"

ParcelCoast_PairQuay_Text_7:
# 1965 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: And the forty jobs?$"

ParcelCoast_PairQuay_Text_8:
# 1966 "data/maps/ParcelCoast/scripts.pory"
	.string "FISHER: Those too. All true numbers.\n"
	.string "That was never the problem; the ranger\l"
	.string "said that back to DORSEY in his own\l"
	.string "words.$"

ParcelCoast_PairQuay_Text_9:
# 1968 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: Forty jobs, DORSEY says. Forty.\n"
	.string "I'm one. You're not.$"

ParcelCoast_PairQuay_Text_10:
# 1969 "data/maps/ParcelCoast/scripts.pory"
	.string "FISHER: I had a job. It swam. Your\n"
	.string "dredge brought it up dead by the tonne\l"
	.string "and called it a landing.$"

ParcelCoast_PairQuay_Text_11:
# 1970 "data/maps/ParcelCoast/scripts.pory"
	.string "DOCKER: I didn't build the dredge.$"

ParcelCoast_PairQuay_Text_12:
# 1971 "data/maps/ParcelCoast/scripts.pory"
	.string "FISHER: No. You just need it. So did I,\n"
	.string "once. That's how they get you both\l"
	.string "ends.$"

ParcelCoast_PairOffice_Text_0:
# 1980 "data/maps/ParcelCoast/scripts.pory"
	.string "SECRETARY: Line forty's been struck. No\n"
	.string "more hospitality budget. She buys the\l"
	.string "tea herself now.$"

ParcelCoast_PairOffice_Text_1:
# 1981 "data/maps/ParcelCoast/scripts.pory"
	.string "ACCOUNTANT: Restructured.$"

ParcelCoast_PairOffice_Text_2:
# 1982 "data/maps/ParcelCoast/scripts.pory"
	.string "SECRETARY: Her word for it. She typed\n"
	.string "the memo about herself and spelled her\l"
	.string "own name right, which is more than the\l"
	.string "board managed.$"

ParcelCoast_PairOffice_Text_3:
# 1983 "data/maps/ParcelCoast/scripts.pory"
	.string "ACCOUNTANT: Still pours two cups.$"

ParcelCoast_PairOffice_Text_4:
# 1984 "data/maps/ParcelCoast/scripts.pory"
	.string "SECRETARY: Still pours two. One of them\n"
	.string "goes cold every afternoon. Nobody's\l"
	.string "told her to stop.$"

ParcelCoast_PairOffice_Text_5:
# 1986 "data/maps/ParcelCoast/scripts.pory"
	.string "ACCOUNTANT: The ranger went up. Came\n"
	.string "down an hour later. Didn't look\l"
	.string "threatened.$"

ParcelCoast_PairOffice_Text_6:
# 1987 "data/maps/ParcelCoast/scripts.pory"
	.string "SECRETARY: Ms. AUNE doesn't threaten.\n"
	.string "She explains the weather.$"

ParcelCoast_PairOffice_Text_7:
# 1988 "data/maps/ParcelCoast/scripts.pory"
	.string "ACCOUNTANT: And the ranger?$"

ParcelCoast_PairOffice_Text_8:
# 1989 "data/maps/ParcelCoast/scripts.pory"
	.string "SECRETARY: Said thank you for the tea.\n"
	.string "Then went and read the catch book for\l"
	.string "two hours. In the cannery. Standing up.$"

ParcelCoast_PairOffice_Text_9:
# 1991 "data/maps/ParcelCoast/scripts.pory"
	.string "SECRETARY: Ms. AUNE's had the kettle on\n"
	.string "since eight. She's expecting someone.$"

ParcelCoast_PairOffice_Text_10:
# 1992 "data/maps/ParcelCoast/scripts.pory"
	.string "ACCOUNTANT: She's always expecting\n"
	.string "someone. It's a tactic. The tea's ready\l"
	.string "before you've decided to come up.$"

ParcelCoast_PairOffice_Text_11:
# 1993 "data/maps/ParcelCoast/scripts.pory"
	.string "SECRETARY: It's very good tea.$"

ParcelCoast_PairOffice_Text_12:
# 1994 "data/maps/ParcelCoast/scripts.pory"
	.string "ACCOUNTANT: It's budgeted. Line forty.\n"
	.string "Hospitality, conservation programme.$"

ParcelCoast_Stringer_Text_0:
# 2007 "data/maps/ParcelCoast/scripts.pory"
	.string "INGER: I ran your Reedmere sentence\n"
	.string "again, at the top, over the record of\l"
	.string "the sitting. The water is a living\l"
	.string "corridor.\p"
	.string "Someone else's words, my byline. That's\n"
	.string "the job. It's the first time I've been\l"
	.string "glad of it.$"

ParcelCoast_Stringer_Text_1:
# 2009 "data/maps/ParcelCoast/scripts.pory"
	.string "INGER: 'The ranger declined to\n"
	.string "comment.' I ran it again at the top, over\l"
	.string "the record of the sitting.\p"
	.string "It read better than every comment in\n"
	.string "the room. Including mine. I've started\l"
	.string "to think declining is a kind of\l"
	.string "sentence.$"

ParcelCoast_Stringer_Text_2:
# 2011 "data/maps/ParcelCoast/scripts.pory"
	.string "INGER: Item seven took the whole\n"
	.string "afternoon. I wrote it as it happened. I\l"
	.string "don't think I've written anything as it\l"
	.string "happened before. Everything else was\l"
	.string "after.\p"
	.string "Go on. You've got a region. I've got a\n"
	.string "deadline, for once.$"

ParcelCoast_Stringer_Text_3:
# 2013 "data/maps/ParcelCoast/scripts.pory"
	.string "INGER: The sitting's coming. Item seven\n"
	.string "is one line, as every year. I'll be in the\l"
	.string "back row, as every year.\p"
	.string "If item seven is more than one line this\n"
	.string "year, I'll know who did that. I'd like to\l"
	.string "be able to print the name. Think about\l"
	.string "it.$"

ParcelCoast_Stringer_Text_4:
# 2015 "data/maps/ParcelCoast/scripts.pory"
	.string "INGER: Forty jobs, the Commissioner\n"
	.string "says. I've counted thirty-one. The\l"
	.string "other nine are 'in the pipeline'.\p"
	.string "I asked which pipeline. He laughed.\n"
	.string "People laugh at me a lot in this town. It\l"
	.string "means I asked the right thing.$"

ParcelCoast_FindRoost_Text_0:
# 2025 "data/maps/ParcelCoast/scripts.pory"
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
# 2028 "data/maps/ParcelCoast/scripts.pory"
	.string "The east end of the quay wall. The\n"
	.string "WINGULL are still there, sixty-odd,\l"
	.string "facing the wind.$"
