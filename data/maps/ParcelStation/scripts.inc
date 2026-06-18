ParcelStation_MapScripts::
# 28 "data/maps/ParcelStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelStation_OnTransition
	.byte 0


ParcelStation_OnTransition::
# 37 "data/maps/ParcelStation/scripts.pory"
	setrespawn HEAL_LOCATION_PARCEL_ISLE
# 38 "data/maps/ParcelStation/scripts.pory"
	checktrainerflag TRAINER_SKALD_LOOKOUT
	goto_if 1, ParcelStation_OnTransition_2
# 42 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 43 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 127
# 44 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 45 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq ParcelStation_OnTransition_5
# 48 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_TEMP_5
ParcelStation_OnTransition_4:
	end

ParcelStation_OnTransition_2:
# 39 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_TEMP_5
	end

ParcelStation_OnTransition_5:
# 46 "data/maps/ParcelStation/scripts.pory"
	clearflag FLAG_TEMP_5
	goto ParcelStation_OnTransition_4


ParcelStation_Hale::
# 55 "data/maps/ParcelStation/scripts.pory"
	lock
# 56 "data/maps/ParcelStation/scripts.pory"
	faceplayer
# 57 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelStation_Hale_2
# 176 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_STATION_BRIEF, ParcelStation_Hale_5
# 181 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_40, MSGBOX_DEFAULT
# 182 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_41, MSGBOX_DEFAULT
# 183 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_42, MSGBOX_DEFAULT
# 184 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_43, MSGBOX_DEFAULT
# 185 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_44, MSGBOX_DEFAULT
# 186 "data/maps/ParcelStation/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 187 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_45, MSGBOX_DEFAULT
# 188 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_SKALDMERE_STATION_BRIEF
# 189 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_2:
# 58 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelStation_Hale_8
# 129 "data/maps/ParcelStation/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelStation_Hale_11
# 152 "data/maps/ParcelStation/scripts.pory"
	checktrainerflag TRAINER_SKALD_LOOKOUT
	goto_if 1, ParcelStation_Hale_17
# 159 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 160 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 127
# 161 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 162 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq ParcelStation_Hale_29
# 170 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_36, MSGBOX_DEFAULT
# 171 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_37, MSGBOX_DEFAULT
# 172 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_38, MSGBOX_DEFAULT
# 173 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_5:
# 177 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_39, MSGBOX_DEFAULT
# 178 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_8:
# 61 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelStation_Hale_14
# 103 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 104 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 6
# 105 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 106 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_Hale_23
# 118 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FLOODBASIN_ARRIVAL, ParcelStation_Hale_32
# 123 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_19, MSGBOX_DEFAULT
# 124 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_20, MSGBOX_DEFAULT
# 125 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_21, MSGBOX_DEFAULT
# 126 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_11:
# 130 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 131 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 1536
# 132 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 133 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ParcelStation_Hale_20
# 146 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_28, MSGBOX_DEFAULT
# 147 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_29, MSGBOX_DEFAULT
# 148 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_30, MSGBOX_DEFAULT
# 149 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_14:
# 62 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelStation_Hale_26
# 97 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_10, MSGBOX_DEFAULT
# 98 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_11, MSGBOX_DEFAULT
# 99 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_12, MSGBOX_DEFAULT
# 100 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_17:
# 153 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_31, MSGBOX_DEFAULT
# 154 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_32, MSGBOX_DEFAULT
# 155 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_33, MSGBOX_DEFAULT
# 156 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_20:
# 134 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_22, MSGBOX_DEFAULT
# 135 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_23, MSGBOX_DEFAULT
# 136 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_24, MSGBOX_DEFAULT
# 137 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_25, MSGBOX_DEFAULT
# 138 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_26, MSGBOX_DEFAULT
# 139 "data/maps/ParcelStation/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 140 "data/maps/ParcelStation/scripts.pory"
	giveitem ITEM_POTION, 5
# 141 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_27, MSGBOX_DEFAULT
# 142 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_SKALDMERE_FOREST_CERT
# 143 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_23:
# 107 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_13, MSGBOX_DEFAULT
# 108 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_14, MSGBOX_DEFAULT
# 109 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_15, MSGBOX_DEFAULT
# 110 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_16, MSGBOX_DEFAULT
# 111 "data/maps/ParcelStation/scripts.pory"
	giveitem ITEM_SUPER_POTION, 5
# 112 "data/maps/ParcelStation/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL, 5
# 113 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_17, MSGBOX_DEFAULT
# 114 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_SKALDMERE_WETLAND_CERT
# 115 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_26:
# 63 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelStation_Hale_35
# 88 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_7, MSGBOX_DEFAULT
# 89 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_8, MSGBOX_DEFAULT
# 90 "data/maps/ParcelStation/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_RANGER_KIT, ParcelStation_Hale_38
ParcelStation_Hale_37:
# 94 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_29:
# 163 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_34, MSGBOX_DEFAULT
# 164 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_35, MSGBOX_DEFAULT
# 165 "data/maps/ParcelStation/scripts.pory"
	clearflag FLAG_TEMP_5
# 166 "data/maps/ParcelStation/scripts.pory"
	addobject 14
# 167 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_32:
# 119 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_18, MSGBOX_DEFAULT
# 120 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_35:
# 64 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelStation_Hale_41
# 83 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_5, MSGBOX_DEFAULT
# 84 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_6, MSGBOX_DEFAULT
# 85 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_38:
# 91 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_9, MSGBOX_DEFAULT
# 92 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_SKALDMERE_RANGER_KIT
	goto ParcelStation_Hale_37

ParcelStation_Hale_41:
# 65 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelStation_Hale_44
# 70 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_1, MSGBOX_DEFAULT
# 71 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_2, MSGBOX_DEFAULT
# 72 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_3, MSGBOX_YESNO
# 73 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelStation_Hale_47
# 78 "data/maps/ParcelStation/scripts.pory"
	closemessage
# 79 "data/maps/ParcelStation/scripts.pory"
	warp MAP_PARCEL_MARSH, 28, 38
# 80 "data/maps/ParcelStation/scripts.pory"
	waitstate
	end

ParcelStation_Hale_44:
# 66 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_0, MSGBOX_DEFAULT
# 67 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_47:
# 74 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_4, MSGBOX_DEFAULT
# 75 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Rin::
# 194 "data/maps/ParcelStation/scripts.pory"
	lock
# 195 "data/maps/ParcelStation/scripts.pory"
	faceplayer
# 196 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelStation_Rin_2
# 205 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Rin_Text_2, MSGBOX_DEFAULT
# 206 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Rin_2:
# 197 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Rin_Text_0, MSGBOX_DEFAULT
# 199 "data/maps/ParcelStation/scripts.pory"
	closemessage
# 200 "data/maps/ParcelStation/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 201 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Rin_Text_1, MSGBOX_DEFAULT
# 202 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Ilex::
# 211 "data/maps/ParcelStation/scripts.pory"
	lock
# 212 "data/maps/ParcelStation/scripts.pory"
	faceplayer
# 213 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelStation_Ilex_2
# 240 "data/maps/ParcelStation/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelStation_Ilex_5
# 245 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelStation_Ilex_11
# 262 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_10, MSGBOX_DEFAULT
# 263 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_11, MSGBOX_DEFAULT
# 264 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_2:
# 215 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 216 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 6
# 217 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 218 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_Ilex_8
# 224 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 63
# 225 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 226 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelStation_Ilex_14
# 236 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_4, MSGBOX_DEFAULT
# 237 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_5:
# 241 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_5, MSGBOX_DEFAULT
# 242 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_8:
# 219 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_0, MSGBOX_DEFAULT
# 220 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_11:
# 247 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 248 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 56
# 249 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 250 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ParcelStation_Ilex_17
# 258 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_9, MSGBOX_DEFAULT
# 259 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_14:
# 227 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_1, MSGBOX_DEFAULT
# 228 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyFloodbasin
# 229 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_2, MSGBOX_DEFAULT
# 230 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 6
# 231 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
# 232 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_3, MSGBOX_DEFAULT
# 233 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_17:
# 251 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_6, MSGBOX_DEFAULT
# 252 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereClassifyMeadow
# 253 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_7, MSGBOX_DEFAULT
# 254 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_8, MSGBOX_DEFAULT
# 255 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Lotad::
# 270 "data/maps/ParcelStation/scripts.pory"
	lock
# 271 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Lotad_Text_0, MSGBOX_DEFAULT
# 272 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Shroomish::
# 277 "data/maps/ParcelStation/scripts.pory"
	lock
# 278 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Shroomish_Text_0, MSGBOX_DEFAULT
# 279 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Seedot::
# 284 "data/maps/ParcelStation/scripts.pory"
	lock
# 285 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Seedot_Text_0, MSGBOX_DEFAULT
# 286 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Numel::
# 291 "data/maps/ParcelStation/scripts.pory"
	lock
# 292 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Numel_Text_0, MSGBOX_DEFAULT
# 293 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Electrike::
# 298 "data/maps/ParcelStation/scripts.pory"
	lock
# 299 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Electrike_Text_0, MSGBOX_DEFAULT
# 300 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Carvanha::
# 305 "data/maps/ParcelStation/scripts.pory"
	lock
# 306 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Carvanha_Text_0, MSGBOX_DEFAULT
# 307 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Doduo::
# 313 "data/maps/ParcelStation/scripts.pory"
	lock
# 314 "data/maps/ParcelStation/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_STATION_BRIEF, ParcelStation_Doduo_2
# 319 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_1, MSGBOX_DEFAULT
# 320 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_2, MSGBOX_DEFAULT
# 321 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_3, MSGBOX_DEFAULT
# 322 "data/maps/ParcelStation/scripts.pory"
	closemessage
# 323 "data/maps/ParcelStation/scripts.pory"
	delay 60
# 324 "data/maps/ParcelStation/scripts.pory"
	playse SE_BALL_THROW
# 325 "data/maps/ParcelStation/scripts.pory"
	delay 60
# 326 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_4, MSGBOX_DEFAULT
# 327 "data/maps/ParcelStation/scripts.pory"
	removeobject 10
# 328 "data/maps/ParcelStation/scripts.pory"
	givemon SPECIES_DODUO, 5
# 329 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 330 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_5, MSGBOX_DEFAULT
# 331 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_6, MSGBOX_DEFAULT
# 332 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_7, MSGBOX_DEFAULT
# 333 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_8, MSGBOX_DEFAULT
# 334 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_9, MSGBOX_DEFAULT
# 335 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Doduo_2:
# 315 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_0, MSGBOX_DEFAULT
# 316 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Sign::
# 340 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Sign_Text_0, MSGBOX_SIGN
	end


ParcelStation_Snare1::
# 346 "data/maps/ParcelStation/scripts.pory"
	lock
# 347 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 348 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 0
# 349 "data/maps/ParcelStation/scripts.pory"
	call ParcelStation_ClearSnare
# 350 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Snare2::
# 354 "data/maps/ParcelStation/scripts.pory"
	lock
# 355 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 356 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 1
# 357 "data/maps/ParcelStation/scripts.pory"
	call ParcelStation_ClearSnare
# 358 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Snare3::
# 362 "data/maps/ParcelStation/scripts.pory"
	lock
# 363 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 364 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 2
# 365 "data/maps/ParcelStation/scripts.pory"
	call ParcelStation_ClearSnare
# 366 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_ClearSnare::
# 370 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 371 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_ClearSnare_2
# 375 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_ClearSnare_Text_1, MSGBOX_DEFAULT
# 376 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
	return

ParcelStation_ClearSnare_2:
# 372 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_ClearSnare_Text_0, MSGBOX_DEFAULT
	return


ParcelStation_StakeBank::
# 381 "data/maps/ParcelStation/scripts.pory"
	lock
# 382 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 383 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 3
# 384 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 385 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_StakeBank_2
# 390 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeBank_Text_1, MSGBOX_SIGN
# 391 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
# 392 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_StakeBank_2:
# 386 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeBank_Text_0, MSGBOX_SIGN
# 387 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_StakeSubstrate::
# 396 "data/maps/ParcelStation/scripts.pory"
	lock
# 397 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 398 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 4
# 399 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 400 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_StakeSubstrate_2
# 405 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeSubstrate_Text_1, MSGBOX_SIGN
# 406 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
# 407 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_StakeSubstrate_2:
# 401 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeSubstrate_Text_0, MSGBOX_SIGN
# 402 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_StakeCanopy::
# 411 "data/maps/ParcelStation/scripts.pory"
	lock
# 412 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 413 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 5
# 414 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 415 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_StakeCanopy_2
# 420 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeCanopy_Text_1, MSGBOX_SIGN
# 421 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
# 422 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_StakeCanopy_2:
# 416 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeCanopy_Text_0, MSGBOX_SIGN
# 417 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_WaterSample::
# 426 "data/maps/ParcelStation/scripts.pory"
	lock
# 427 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 428 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 6
# 429 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 430 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_WaterSample_2
# 435 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_WaterSample_Text_1, MSGBOX_SIGN
# 436 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
# 437 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_WaterSample_2:
# 431 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_WaterSample_Text_0, MSGBOX_SIGN
# 432 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Lookout::
# 443 "data/maps/ParcelStation/scripts.pory"
	trainerbattle_single TRAINER_SKALD_LOOKOUT, ParcelStation_Lookout_Text_0, ParcelStation_Lookout_Text_1
# 446 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Lookout_Text_2, MSGBOX_DEFAULT
	end


ParcelStation_BirderTrainer::
# 452 "data/maps/ParcelStation/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BIRDER, ParcelStation_BirderTrainer_Text_0, ParcelStation_BirderTrainer_Text_1
# 455 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_BirderTrainer_Text_2, MSGBOX_DEFAULT
	end


ParcelStation_ItemBalls::
# 460 "data/maps/ParcelStation/scripts.pory"
	finditem ITEM_POKE_BALL, 5
	end


ParcelStation_GateWard::
# 470 "data/maps/ParcelStation/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GATE_STATION, ParcelStation_GateWard_Text_0, ParcelStation_GateWard_Text_1, ParcelStation_GateWard_Defeated
# 474 "data/maps/ParcelStation/scripts.pory"
	lock
# 475 "data/maps/ParcelStation/scripts.pory"
	faceplayer
# 476 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_GateWard_Text_2, MSGBOX_DEFAULT
# 477 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_GateWard_Defeated::
# 482 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_STATION
# 483 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_GateWard_Defeated_Text_0, MSGBOX_DEFAULT
# 484 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Hale_Text_0:
# 66 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: It's filed. It's true. Now we find\n"
	.string "out who reads it -- and that part was\l"
	.string "never ours to control.\p"
	.string "Ours was the writing it down. Rest,\n"
	.string "{PLAYER}. You've earned a night that\l"
	.string "isn't about the work.$"

ParcelStation_Hale_Text_1:
# 70 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Five credentials. You've read the\n"
	.string "whole sweep of it now -- forest to\l"
	.string "mountain to the works on the coast.\p"
	.string "And you've read what's in the\n"
	.string "footnotes. Whose name is in them.$"

ParcelStation_Hale_Text_2:
# 71 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: One place left. The Last Corridor,\n"
	.string "inland -- the keystone marsh all of it\l"
	.string "drains from. Where she went.\p"
	.string "I'll walk you to the treeline. I won't go\n"
	.string "in. This last one is yours alone.$"

ParcelStation_Hale_Text_3:
# 72 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Ready to go now?$"

ParcelStation_Hale_Text_4:
# 74 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Take the time you need. It will\n"
	.string "keep. It has kept this long.$"

ParcelStation_Hale_Text_5:
# 83 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Four. Forest, basin, watershed --\n"
	.string "and a mountain you couldn't save and\l"
	.string "didn't pretend to.\p"
	.string "That last one is the one that makes a\n"
	.string "Ranger. The rest is competence.$"

ParcelStation_Hale_Text_6:
# 84 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Take the ferry from the dock\n"
	.string "town. Delibird Isle first, for the\l"
	.string "breather -- you've earned one. Then up\l"
	.string "the coast to the Mereholt works.\p"
	.string "That's the back of it. The coast won't\n"
	.string "bother hiding what it is.$"

ParcelStation_Hale_Text_7:
# 88 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Three credentials. Forest, basin,\n"
	.string "watershed.\p"
	.string "Now the climb. Follow the river up past\n"
	.string "the clean reaches, to where the water\l"
	.string "comes from -- the high cold.$"

ParcelStation_Hale_Text_8:
# 89 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: It won't read like the others. You\n"
	.string "will not get to fix this one.\p"
	.string "Ilex is up there already, measuring how\n"
	.string "much of it is left. Go learn what 'too\l"
	.string "late' looks like, so you'll know it the\l"
	.string "next time it isn't.$"

ParcelStation_Hale_Text_9:
# 91 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: One more thing. The country gets\n"
	.string "rough from here.\p"
	.string "Rin's upgraded your field kit -- a lamp\n"
	.string "for the dark places, a winch for the\l"
	.string "heavy ones. Ranger tools, not weapons.\l"
	.string "We don't cut, we don't smash. We move\l"
	.string "what has to move and light what has to\l"
	.string "be seen.$"

ParcelStation_Hale_Text_10:
# 97 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Two credentials. A sick forest\n"
	.string "corridor and a sicker basin.\p"
	.string "The River's next -- and it's the first\n"
	.string "place you'll go that isn't already lost.\l"
	.string "There's still a window there.$"

ParcelStation_Hale_Text_11:
# 98 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Follow the channel up out of the\n"
	.string "basin. North, past the discharge, where\l"
	.string "the trees thin.\p"
	.string "Ilex is working the bank up there. Read\n"
	.string "the whole river before you name any\l"
	.string "part of it.$"

ParcelStation_Hale_Text_12:
# 99 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: The people on that water have\n"
	.string "even less reason to like us than the\l"
	.string "last lot.\n"
	.string "Listen anyway.$"

ParcelStation_Hale_Text_13:
# 107 "data/maps/ParcelStation/scripts.pory"
	.string "Hale reads it twice. He doesn't argue\n"
	.string "with any of it.\p"
	.string "Hale: You couldn't fix it.$"

ParcelStation_Hale_Text_14:
# 108 "data/maps/ParcelStation/scripts.pory"
	.string "{PLAYER}: No.$"

ParcelStation_Hale_Text_15:
# 109 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: And you didn't pretend you had.\p"
	.string "That's the certification. Not the\n"
	.string "cleanup --\n"
	.string "the refusal to sign off on a lie.$"

ParcelStation_Hale_Text_16:
# 110 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Wetland Certification complete.$"

ParcelStation_Hale_Text_17:
# 113 "data/maps/ParcelStation/scripts.pory"
	.string "Rin tops off your kit without a word.\p"
	.string "Ilex, from across the room:\n"
	.string "Ilex: It won't simply come back. Now you\l"
	.string "know that in your hands.$"

ParcelStation_Hale_Text_18:
# 119 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Walk it slowly. Read every stake.\p"
	.string "Talk to whoever's manning the booth.\n"
	.string "Then tell Ilex what you saw.$"

ParcelStation_Hale_Text_19:
# 123 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: You did well. Don't get attached\n"
	.string "to praise.\n"
	.string "Get attached to results.$"

ParcelStation_Hale_Text_20:
# 124 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: We're going west.\n"
	.string "The wetlands are sick.$"

ParcelStation_Hale_Text_21:
# 125 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Past the corridor's culvert, the\n"
	.string "forest opens onto the Floodbasin.\p"
	.string "Your audit was the warm-up.\n"
	.string "This is the work.$"

ParcelStation_Hale_Text_22:
# 134 "data/maps/ParcelStation/scripts.pory"
	.string "Hale reads your corridor notes without\n"
	.string "comment. Rin watches Doduo. Ilex closes\l"
	.string "the ledger.$"

ParcelStation_Hale_Text_23:
# 135 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: You didn't intervene.$"

ParcelStation_Hale_Text_24:
# 136 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: You didn't agree.$"

ParcelStation_Hale_Text_25:
# 137 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Forest Certification complete.$"

ParcelStation_Hale_Text_26:
# 138 "data/maps/ParcelStation/scripts.pory"
	.string "No fanfare.\p"
	.string "Rin hands you a proper field kit: sample\n"
	.string "vials, a flow gauge, a better headlamp,\l"
	.string "spare red cloth.$"

ParcelStation_Hale_Text_27:
# 141 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex speaks last.\p"
	.string "Ilex: Now you'll start noticing how\n"
	.string "often damage wears the mask of\l"
	.string "improvement.$"

ParcelStation_Hale_Text_28:
# 146 "data/maps/ParcelStation/scripts.pory"
	.string "Hale slides a laminated sheet across\n"
	.string "the table.\p"
	.string "CORRIDOR AUDIT -- LOW PRIORITY\n"
	.string "Route: Old Service Cut / Hollowbend\l"
	.string "Spur\p"
	.string "Report Type: Verification\n"
	.string "Action Status: OBSERVE ONLY.$"

ParcelStation_Hale_Text_29:
# 147 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: This corridor used to connect two\n"
	.string "wetland pockets. Then someone improved\l"
	.string "a road.\p"
	.string "He doesn't say who.\n"
	.string "He doesn't have to.$"

ParcelStation_Hale_Text_30:
# 148 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: East of the wetlands landing,\n"
	.string "past the tree line.\n"
	.string "Walk it. Read it. Touch nothing.$"

ParcelStation_Hale_Text_31:
# 153 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Four tasks. Logged.\p"
	.string "No fanfare. That's how it should feel.$"

ParcelStation_Hale_Text_32:
# 154 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: North of here the forest gives\n"
	.string "out and the wetlands begin. There's a\l"
	.string "fishing landing on the backwater.\p"
	.string "People up there are angry, and somebody\n"
	.string "is feeding them a story.$"

ParcelStation_Hale_Text_33:
# 155 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Go listen. Document what you see.\n"
	.string "Don't argue with anyone's paycheck.$"

ParcelStation_Hale_Text_34:
# 163 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: A call just came in. West fringe,\n"
	.string "by the treeline.\p"
	.string "Someone's working a line down there who\n"
	.string "shouldn't be.$"

ParcelStation_Hale_Text_35:
# 164 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: You have a partner now.\n"
	.string "Go do more than stare.$"

ParcelStation_Hale_Text_36:
# 170 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Training. Three of our practice\n"
	.string "snares are out on the fringe--find\l"
	.string "them, clear them.$"

ParcelStation_Hale_Text_37:
# 171 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Ilex set three survey stakes:\n"
	.string "bank, substrate, canopy. Read each one.\p"
	.string "And Rin wants a water sample from the\n"
	.string "channel.$"

ParcelStation_Hale_Text_38:
# 172 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: No deadline.\n"
	.string "Do it properly.$"

ParcelStation_Hale_Text_39:
# 177 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: The meadow's east.\p"
	.string "You walk. You observe. You stop where\n"
	.string "you're compelled to stop.$"

ParcelStation_Hale_Text_40:
# 181 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: No welcome ceremony. We document\n"
	.string "ecological change, interrupt\l"
	.string "exploitation, coordinate restoration.\p"
	.string "Often without public support.$"

ParcelStation_Hale_Text_41:
# 182 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: We don't 'win.' We reduce harm. We\n"
	.string "keep corridors open.\n"
	.string "We stop the worst of it.$"

ParcelStation_Hale_Text_42:
# 183 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Your mentor worked with us.\p"
	.string "Whatever happened at that lab…\n"
	.string "wasn't random.$"

ParcelStation_Hale_Text_43:
# 184 "data/maps/ParcelStation/scripts.pory"
	.string "Hale hands you a heavier second pack:\n"
	.string "an empty Poké Ball case, a hand-marked\l"
	.string "folded map, and a laminated card\l"
	.string "stamped PROVISIONAL.\p"
	.string "On the card, a small printed strip of red\n"
	.string "cloth.$"

ParcelStation_Hale_Text_44:
# 185 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: This isn't ownership.\n"
	.string "It's responsibility.$"

ParcelStation_Hale_Text_45:
# 187 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: The Holding Meadow is east. The\n"
	.string "ones that wait are there.\p"
	.string "You don't pick. And they don't obey.$"

ParcelStation_Rin_Text_0:
# 197 "data/maps/ParcelStation/scripts.pory"
	.string "Rin: Rough out there. Set your partner\n"
	.string "down a minute-- there's a cot and a kit.$"

ParcelStation_Rin_Text_1:
# 201 "data/maps/ParcelStation/scripts.pory"
	.string "Rin: Better. Welcome to walking with\n"
	.string "consequences.$"

ParcelStation_Rin_Text_2:
# 205 "data/maps/ParcelStation/scripts.pory"
	.string "Rin doesn't look up. She is redirecting a\n"
	.string "channel's flow, one stone at a time.\p"
	.string "Rin: Nothing stays here permanently.\n"
	.string "That's the rule.$"

ParcelStation_Ilex_Text_0:
# 219 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: It's filed. The papers are Hale's\n"
	.string "to sign.\p"
	.string "Don't expect him to smile about it.$"

ParcelStation_Ilex_Text_1:
# 227 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Pipe, sheen, dead reeds. The\n"
	.string "Wooper. The Karp. The booth.\p"
	.string "Put a name on it.$"

ParcelStation_Ilex_Text_2:
# 229 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: COLLAPSING.\p"
	.string "The keystone is straining; the apex is\n"
	.string "sick; the mid-tier swarms.\p"
	.string "This is what 'we're remediating that'\n"
	.string "actually looks like.$"

ParcelStation_Ilex_Text_3:
# 232 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: I'll have your report typed by\n"
	.string "morning.\p"
	.string "Go tell Hale you're done.\n"
	.string "The certification's his to give.$"

ParcelStation_Ilex_Text_4:
# 236 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Damage wears the mask of\n"
	.string "improvement.\p"
	.string "You'll see it everywhere now.\n"
	.string "I'm sorry.$"

ParcelStation_Ilex_Text_5:
# 241 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Low priority means nobody's\n"
	.string "watching.\p"
	.string "Which means we still have time.$"

ParcelStation_Ilex_Text_6:
# 251 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Bank, substrate, canopy.\n"
	.string "Let's see what you saw.$"

ParcelStation_Ilex_Text_7:
# 253 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Reference state. Whole.\p"
	.string "Keystone breeding, every guild present,\n"
	.string "nothing swarming, no damage.$"

ParcelStation_Ilex_Text_8:
# 254 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Remember exactly what this feels\n"
	.string "like.\p"
	.string "You will spend the rest of your life\n"
	.string "measuring places against it.$"

ParcelStation_Ilex_Text_9:
# 258 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Three stakes. Bank, substrate,\n"
	.string "canopy.\p"
	.string "Read all three, then come back.$"

ParcelStation_Ilex_Text_10:
# 262 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: They've all been displaced.\n"
	.string "But not broken.$"

ParcelStation_Ilex_Text_11:
# 263 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: They aren't rare. They aren't\n"
	.string "powerful.\p"
	.string "They are stable.$"

ParcelStation_Lotad_Text_0:
# 271 "data/maps/ParcelStation/scripts.pory"
	.string "The Lotad rests at the pool's shaded\n"
	.string "edge.\p"
	.string "It registers you, and goes back to\n"
	.string "being still.\n"
	.string "Calm.$"

ParcelStation_Shroomish_Text_0:
# 278 "data/maps/ParcelStation/scripts.pory"
	.string "The Shroomish recoils--spores pulsing\n"
	.string "once, twice--\p"
	.string "then settles. It doesn't move away.$"

ParcelStation_Seedot_Text_0:
# 285 "data/maps/ParcelStation/scripts.pory"
	.string "The Seedot freezes mid-hop between\n"
	.string "the roots.\p"
	.string "It is very committed to being a seed.$"

ParcelStation_Numel_Text_0:
# 292 "data/maps/ParcelStation/scripts.pory"
	.string "The Numel is curled by the dry corner of\n"
	.string "the meadow, radiating heat.\p"
	.string "The ground here is drier than it should\n"
	.string "be.\p"
	.string "You write that down before you realize\n"
	.string "you're doing it.$"

ParcelStation_Electrike_Text_0:
# 299 "data/maps/ParcelStation/scripts.pory"
	.string "The Electrike paces the perimeter,\n"
	.string "closer each pass.\p"
	.string "It never quite stops.$"

ParcelStation_Carvanha_Text_0:
# 306 "data/maps/ParcelStation/scripts.pory"
	.string "Something circles in the deeper\n"
	.string "channel.\p"
	.string "The Carvanha keeps its distance.\n"
	.string "So do you.$"

ParcelStation_Doduo_Text_0:
# 315 "data/maps/ParcelStation/scripts.pory"
	.string "A Doduo stands at the clearing's edge.\p"
	.string "One head watches you.\n"
	.string "The other watches the forest.$"

ParcelStation_Doduo_Text_1:
# 319 "data/maps/ParcelStation/scripts.pory"
	.string "The Doduo moves. One head stays on you;\n"
	.string "the other sweeps the treeline.\p"
	.string "You stop--\n"
	.string "because moving feels wrong.$"

ParcelStation_Doduo_Text_2:
# 320 "data/maps/ParcelStation/scripts.pory"
	.string "You kneel.\p"
	.string "Behind you, quiet footsteps: Rin sets a\n"
	.string "single Poké Ball on the ground between\l"
	.string "you, and steps back.$"

ParcelStation_Doduo_Text_3:
# 321 "data/maps/ParcelStation/scripts.pory"
	.string "Rin: If it chooses to enter,\n"
	.string "you're provisional partners.$"

ParcelStation_Doduo_Text_4:
# 326 "data/maps/ParcelStation/scripts.pory"
	.string "The Doduo studies you a moment longer.\p"
	.string "Then it nudges the ball.\p"
	.string "The ball closes with no shake.\n"
	.string "Just stillness.$"

ParcelStation_Doduo_Text_5:
# 330 "data/maps/ParcelStation/scripts.pory"
	.string "It feels warm.\p"
	.string "WREN received DODUO.$"

ParcelStation_Doduo_Text_6:
# 331 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: This doesn't make you a Ranger.$"

ParcelStation_Doduo_Text_7:
# 332 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: It makes you accountable.$"

ParcelStation_Doduo_Text_8:
# 333 "data/maps/ParcelStation/scripts.pory"
	.string "Rin: Welcome to walking with\n"
	.string "consequences.$"

ParcelStation_Doduo_Text_9:
# 334 "data/maps/ParcelStation/scripts.pory"
	.string "You leave the meadow not empowered--\n"
	.string "but entangled.\p"
	.string "And that is the point.$"

ParcelStation_Sign_Text_0:
# 340 "data/maps/ParcelStation/scripts.pory"
	.string "CLIMATE CORPS -- FIELD STATION\p"
	.string "The Holding Meadow is east.\n"
	.string "Nothing stays there permanently.$"

ParcelStation_ClearSnare_Text_0:
# 372 "data/maps/ParcelStation/scripts.pory"
	.string "The cleared snare site. The wire is in\n"
	.string "your pack.$"

ParcelStation_ClearSnare_Text_1:
# 375 "data/maps/ParcelStation/scripts.pory"
	.string "A practice snare, half-hidden in the\n"
	.string "grass--a wire loop on a bent stake.\p"
	.string "You unhook the trigger and wind the\n"
	.string "wire, the way the manual says.\n"
	.string "Slowly. No sudden pulls.$"

ParcelStation_StakeBank_Text_0:
# 386 "data/maps/ParcelStation/scripts.pory"
	.string "The bank stake. Already read.$"

ParcelStation_StakeBank_Text_1:
# 390 "data/maps/ParcelStation/scripts.pory"
	.string "A survey stake by the channel. A strip\n"
	.string "of red cloth, faded.\p"
	.string "BANK: edges soft but holding. Root mass\n"
	.string "intact.\n"
	.string "You write it down.$"

ParcelStation_StakeSubstrate_Text_0:
# 401 "data/maps/ParcelStation/scripts.pory"
	.string "The substrate stake. Already read.$"

ParcelStation_StakeSubstrate_Text_1:
# 405 "data/maps/ParcelStation/scripts.pory"
	.string "A survey stake in the open meadow. Red\n"
	.string "cloth, knotted twice.\p"
	.string "SUBSTRATE: mixed soil, no compaction,\n"
	.string "drains clean.\n"
	.string "You write it down.$"

ParcelStation_StakeCanopy_Text_0:
# 416 "data/maps/ParcelStation/scripts.pory"
	.string "The canopy stake. Already read.$"

ParcelStation_StakeCanopy_Text_1:
# 420 "data/maps/ParcelStation/scripts.pory"
	.string "A survey stake at the tree line. Red\n"
	.string "cloth, nearly new.\p"
	.string "CANOPY: broken sunlight, layered\n"
	.string "growth, edge gradual--not cut.\n"
	.string "You write it down.$"

ParcelStation_WaterSample_Text_0:
# 431 "data/maps/ParcelStation/scripts.pory"
	.string "The sampling point. Rin has your vial.$"

ParcelStation_WaterSample_Text_1:
# 435 "data/maps/ParcelStation/scripts.pory"
	.string "You kneel at the channel and draw a\n"
	.string "sample.\p"
	.string "The water runs clear--but colder than\n"
	.string "the air explains.\p"
	.string "Conditions matter. You label the vial\n"
	.string "and note the temperature.$"

ParcelStation_Lookout_Text_0:
# 444 "data/maps/ParcelStation/scripts.pory"
	.string "Garr: Station kid, huh? This line was\n"
	.string "here before your stakes were.\p"
	.string "Walk away.$"

ParcelStation_Lookout_Text_1:
# 445 "data/maps/ParcelStation/scripts.pory"
	.string "Garr: Tch. Practiced, are you.$"

ParcelStation_Lookout_Text_2:
# 446 "data/maps/ParcelStation/scripts.pory"
	.string "Garr coils his line, unhurried, and looks\n"
	.string "past you at the station.\p"
	.string "Garr: Write your little report.\n"
	.string "It changes nothing out here.$"

ParcelStation_BirderTrainer_Text_0:
# 453 "data/maps/ParcelStation/scripts.pory"
	.string "Neri: Shh--you'll flush the Taillow.\n"
	.string "…Too late. Fine, battle.$"

ParcelStation_BirderTrainer_Text_1:
# 454 "data/maps/ParcelStation/scripts.pory"
	.string "Neri: Hmph. The birds liked you better\n"
	.string "anyway.$"

ParcelStation_BirderTrainer_Text_2:
# 455 "data/maps/ParcelStation/scripts.pory"
	.string "Neri: Counting nests, if you must know.\p"
	.string "Fewer every spring. Nobody writes that\n"
	.string "down but me.$"

ParcelStation_GateWard_Text_0:
# 471 "data/maps/ParcelStation/scripts.pory"
	.string "Ward: Station clearance is checked\n"
	.string "here, provisional. The road north is\l"
	.string "Mereholt's to open.\p"
	.string "Show me you can hold a line before you\n"
	.string "walk one.$"

ParcelStation_GateWard_Text_1:
# 472 "data/maps/ParcelStation/scripts.pory"
	.string "Ward: …Adequate. The line's yours to\n"
	.string "pass.$"

ParcelStation_GateWard_Text_2:
# 476 "data/maps/ParcelStation/scripts.pory"
	.string "Ward: You're in the log. Keep your card\n"
	.string "on you--\n"
	.string "the next checkpoint won't take my word\l"
	.string "for it.$"

ParcelStation_GateWard_Defeated_Text_0:
# 483 "data/maps/ParcelStation/scripts.pory"
	.string "Ward: Station clearance: granted.\n"
	.string "Logged and filed.\p"
	.string "No ceremony. That's not what this is.$"
