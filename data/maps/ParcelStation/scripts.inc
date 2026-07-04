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
# 182 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_STATION_BRIEF, ParcelStation_Hale_5
# 187 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_42, MSGBOX_DEFAULT
# 188 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_43, MSGBOX_DEFAULT
# 189 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_44, MSGBOX_DEFAULT
# 190 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_45, MSGBOX_DEFAULT
# 191 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_46, MSGBOX_DEFAULT
# 192 "data/maps/ParcelStation/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 193 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_47, MSGBOX_DEFAULT
# 194 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_SKALDMERE_STATION_BRIEF
# 195 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_2:
# 58 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelStation_Hale_8
# 135 "data/maps/ParcelStation/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelStation_Hale_11
# 158 "data/maps/ParcelStation/scripts.pory"
	checktrainerflag TRAINER_SKALD_LOOKOUT
	goto_if 1, ParcelStation_Hale_17
# 165 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 166 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 127
# 167 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 168 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq ParcelStation_Hale_29
# 176 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_38, MSGBOX_DEFAULT
# 177 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_39, MSGBOX_DEFAULT
# 178 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_40, MSGBOX_DEFAULT
# 179 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_5:
# 183 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_41, MSGBOX_DEFAULT
# 184 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_8:
# 61 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelStation_Hale_14
# 109 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 110 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 6
# 111 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 112 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_Hale_23
# 124 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FLOODBASIN_ARRIVAL, ParcelStation_Hale_32
# 129 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_21, MSGBOX_DEFAULT
# 130 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_22, MSGBOX_DEFAULT
# 131 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_23, MSGBOX_DEFAULT
# 132 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_11:
# 136 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 137 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 1536
# 138 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 139 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ParcelStation_Hale_20
# 152 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_30, MSGBOX_DEFAULT
# 153 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_31, MSGBOX_DEFAULT
# 154 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_32, MSGBOX_DEFAULT
# 155 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_14:
# 62 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelStation_Hale_26
# 103 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_12, MSGBOX_DEFAULT
# 104 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_13, MSGBOX_DEFAULT
# 105 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_14, MSGBOX_DEFAULT
# 106 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_17:
# 159 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_33, MSGBOX_DEFAULT
# 160 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_34, MSGBOX_DEFAULT
# 161 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_35, MSGBOX_DEFAULT
# 162 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_20:
# 140 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_24, MSGBOX_DEFAULT
# 141 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_25, MSGBOX_DEFAULT
# 142 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_26, MSGBOX_DEFAULT
# 143 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_27, MSGBOX_DEFAULT
# 144 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_28, MSGBOX_DEFAULT
# 145 "data/maps/ParcelStation/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 146 "data/maps/ParcelStation/scripts.pory"
	giveitem ITEM_POTION, 5
# 147 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_29, MSGBOX_DEFAULT
# 148 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_SKALDMERE_FOREST_CERT
# 149 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_23:
# 113 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_15, MSGBOX_DEFAULT
# 114 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_16, MSGBOX_DEFAULT
# 115 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_17, MSGBOX_DEFAULT
# 116 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_18, MSGBOX_DEFAULT
# 117 "data/maps/ParcelStation/scripts.pory"
	giveitem ITEM_SUPER_POTION, 5
# 118 "data/maps/ParcelStation/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL, 5
# 119 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_19, MSGBOX_DEFAULT
# 120 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_SKALDMERE_WETLAND_CERT
# 121 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_26:
# 63 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelStation_Hale_35
# 94 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_9, MSGBOX_DEFAULT
# 95 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_10, MSGBOX_DEFAULT
# 96 "data/maps/ParcelStation/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_RANGER_KIT, ParcelStation_Hale_38
ParcelStation_Hale_37:
# 100 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_29:
# 169 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_36, MSGBOX_DEFAULT
# 170 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_37, MSGBOX_DEFAULT
# 171 "data/maps/ParcelStation/scripts.pory"
	clearflag FLAG_TEMP_5
# 172 "data/maps/ParcelStation/scripts.pory"
	addobject 14
# 173 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_32:
# 125 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_20, MSGBOX_DEFAULT
# 126 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_35:
# 64 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelStation_Hale_41
# 89 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_7, MSGBOX_DEFAULT
# 90 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_8, MSGBOX_DEFAULT
# 91 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_38:
# 97 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_11, MSGBOX_DEFAULT
# 98 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_SKALDMERE_RANGER_KIT
	goto ParcelStation_Hale_37

ParcelStation_Hale_41:
# 65 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelStation_Hale_44
# 76 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_3, MSGBOX_DEFAULT
# 77 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_4, MSGBOX_DEFAULT
# 78 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_5, MSGBOX_YESNO
# 79 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelStation_Hale_47
# 84 "data/maps/ParcelStation/scripts.pory"
	closemessage
# 85 "data/maps/ParcelStation/scripts.pory"
	warp MAP_PARCEL_MARSH, 28, 38
# 86 "data/maps/ParcelStation/scripts.pory"
	waitstate
	end

ParcelStation_Hale_44:
# 66 "data/maps/ParcelStation/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_CORDELIA_DONE, ParcelStation_Hale_50
# 72 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_2, MSGBOX_DEFAULT
# 73 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_47:
# 80 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_6, MSGBOX_DEFAULT
# 81 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Hale_50:
# 67 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_0, MSGBOX_DEFAULT
# 68 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Hale_Text_1, MSGBOX_DEFAULT
# 69 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Rin::
# 200 "data/maps/ParcelStation/scripts.pory"
	lock
# 201 "data/maps/ParcelStation/scripts.pory"
	faceplayer
# 202 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelStation_Rin_2
# 211 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Rin_Text_2, MSGBOX_DEFAULT
# 212 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Rin_2:
# 203 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Rin_Text_0, MSGBOX_DEFAULT
# 205 "data/maps/ParcelStation/scripts.pory"
	closemessage
# 206 "data/maps/ParcelStation/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 207 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Rin_Text_1, MSGBOX_DEFAULT
# 208 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Ilex::
# 217 "data/maps/ParcelStation/scripts.pory"
	lock
# 218 "data/maps/ParcelStation/scripts.pory"
	faceplayer
# 219 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelStation_Ilex_2
# 246 "data/maps/ParcelStation/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelStation_Ilex_5
# 251 "data/maps/ParcelStation/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelStation_Ilex_11
# 268 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_10, MSGBOX_DEFAULT
# 269 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_11, MSGBOX_DEFAULT
# 270 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_2:
# 221 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 222 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 6
# 223 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 224 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_Ilex_8
# 230 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 63
# 231 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 232 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelStation_Ilex_14
# 242 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_4, MSGBOX_DEFAULT
# 243 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_5:
# 247 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_5, MSGBOX_DEFAULT
# 248 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_8:
# 225 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_0, MSGBOX_DEFAULT
# 226 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_11:
# 253 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 254 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 56
# 255 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 256 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ParcelStation_Ilex_17
# 264 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_9, MSGBOX_DEFAULT
# 265 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_14:
# 233 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_1, MSGBOX_DEFAULT
# 234 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyFloodbasin
# 235 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_2, MSGBOX_DEFAULT
# 236 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 6
# 237 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
# 238 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_3, MSGBOX_DEFAULT
# 239 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Ilex_17:
# 257 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_6, MSGBOX_DEFAULT
# 258 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereClassifyMeadow
# 259 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_7, MSGBOX_DEFAULT
# 260 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Ilex_Text_8, MSGBOX_DEFAULT
# 261 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Lotad::
# 276 "data/maps/ParcelStation/scripts.pory"
	lock
# 277 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Lotad_Text_0, MSGBOX_DEFAULT
# 278 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Shroomish::
# 283 "data/maps/ParcelStation/scripts.pory"
	lock
# 284 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Shroomish_Text_0, MSGBOX_DEFAULT
# 285 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Seedot::
# 290 "data/maps/ParcelStation/scripts.pory"
	lock
# 291 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Seedot_Text_0, MSGBOX_DEFAULT
# 292 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Numel::
# 297 "data/maps/ParcelStation/scripts.pory"
	lock
# 298 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Numel_Text_0, MSGBOX_DEFAULT
# 299 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Electrike::
# 304 "data/maps/ParcelStation/scripts.pory"
	lock
# 305 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Electrike_Text_0, MSGBOX_DEFAULT
# 306 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Carvanha::
# 311 "data/maps/ParcelStation/scripts.pory"
	lock
# 312 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Carvanha_Text_0, MSGBOX_DEFAULT
# 313 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Doduo::
# 319 "data/maps/ParcelStation/scripts.pory"
	lock
# 320 "data/maps/ParcelStation/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_STATION_BRIEF, ParcelStation_Doduo_2
# 325 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_1, MSGBOX_DEFAULT
# 326 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_2, MSGBOX_DEFAULT
# 327 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_3, MSGBOX_DEFAULT
# 328 "data/maps/ParcelStation/scripts.pory"
	closemessage
# 329 "data/maps/ParcelStation/scripts.pory"
	delay 60
# 330 "data/maps/ParcelStation/scripts.pory"
	playse SE_BALL_THROW
# 331 "data/maps/ParcelStation/scripts.pory"
	delay 60
# 332 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_4, MSGBOX_DEFAULT
# 333 "data/maps/ParcelStation/scripts.pory"
	removeobject 10
# 334 "data/maps/ParcelStation/scripts.pory"
	givemon SPECIES_DODUO, 5
# 335 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 336 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_5, MSGBOX_DEFAULT
# 337 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_6, MSGBOX_DEFAULT
# 338 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_7, MSGBOX_DEFAULT
# 339 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_8, MSGBOX_DEFAULT
# 340 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_9, MSGBOX_DEFAULT
# 341 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_Doduo_2:
# 321 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Doduo_Text_0, MSGBOX_DEFAULT
# 322 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Sign::
# 346 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Sign_Text_0, MSGBOX_SIGN
	end


ParcelStation_Snare1::
# 352 "data/maps/ParcelStation/scripts.pory"
	lock
# 353 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 354 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 0
# 355 "data/maps/ParcelStation/scripts.pory"
	call ParcelStation_ClearSnare
# 356 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Snare2::
# 360 "data/maps/ParcelStation/scripts.pory"
	lock
# 361 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 362 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 1
# 363 "data/maps/ParcelStation/scripts.pory"
	call ParcelStation_ClearSnare
# 364 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Snare3::
# 368 "data/maps/ParcelStation/scripts.pory"
	lock
# 369 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 370 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 2
# 371 "data/maps/ParcelStation/scripts.pory"
	call ParcelStation_ClearSnare
# 372 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_ClearSnare::
# 376 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 377 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_ClearSnare_2
# 381 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_ClearSnare_Text_1, MSGBOX_DEFAULT
# 382 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
	return

ParcelStation_ClearSnare_2:
# 378 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_ClearSnare_Text_0, MSGBOX_DEFAULT
	return


ParcelStation_StakeBank::
# 387 "data/maps/ParcelStation/scripts.pory"
	lock
# 388 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 389 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 3
# 390 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 391 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_StakeBank_2
# 396 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeBank_Text_1, MSGBOX_SIGN
# 397 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
# 398 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_StakeBank_2:
# 392 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeBank_Text_0, MSGBOX_SIGN
# 393 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_StakeSubstrate::
# 402 "data/maps/ParcelStation/scripts.pory"
	lock
# 403 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 404 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 4
# 405 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 406 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_StakeSubstrate_2
# 411 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeSubstrate_Text_1, MSGBOX_SIGN
# 412 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
# 413 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_StakeSubstrate_2:
# 407 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeSubstrate_Text_0, MSGBOX_SIGN
# 408 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_StakeCanopy::
# 417 "data/maps/ParcelStation/scripts.pory"
	lock
# 418 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 419 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 5
# 420 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 421 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_StakeCanopy_2
# 426 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeCanopy_Text_1, MSGBOX_SIGN
# 427 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
# 428 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_StakeCanopy_2:
# 422 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_StakeCanopy_Text_0, MSGBOX_SIGN
# 423 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_WaterSample::
# 432 "data/maps/ParcelStation/scripts.pory"
	lock
# 433 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CERT_TASKS
# 434 "data/maps/ParcelStation/scripts.pory"
	setvar VAR_0x8004, 6
# 435 "data/maps/ParcelStation/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 436 "data/maps/ParcelStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelStation_WaterSample_2
# 441 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_WaterSample_Text_1, MSGBOX_SIGN
# 442 "data/maps/ParcelStation/scripts.pory"
	special SkaldmereCertTaskMark
# 443 "data/maps/ParcelStation/scripts.pory"
	release
	end

ParcelStation_WaterSample_2:
# 437 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_WaterSample_Text_0, MSGBOX_SIGN
# 438 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Lookout::
# 449 "data/maps/ParcelStation/scripts.pory"
	trainerbattle_single TRAINER_SKALD_LOOKOUT, ParcelStation_Lookout_Text_0, ParcelStation_Lookout_Text_1
# 452 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_Lookout_Text_2, MSGBOX_DEFAULT
	end


ParcelStation_BirderTrainer::
# 458 "data/maps/ParcelStation/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BIRDER, ParcelStation_BirderTrainer_Text_0, ParcelStation_BirderTrainer_Text_1
# 461 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_BirderTrainer_Text_2, MSGBOX_DEFAULT
	end


ParcelStation_ItemBalls::
# 466 "data/maps/ParcelStation/scripts.pory"
	finditem ITEM_POKE_BALL, 5
	end


ParcelStation_GateWard::
# 476 "data/maps/ParcelStation/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GATE_STATION, ParcelStation_GateWard_Text_0, ParcelStation_GateWard_Text_1, ParcelStation_GateWard_Defeated
# 480 "data/maps/ParcelStation/scripts.pory"
	lock
# 481 "data/maps/ParcelStation/scripts.pory"
	faceplayer
# 482 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_GateWard_Text_2, MSGBOX_DEFAULT
# 483 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_GateWard_Defeated::
# 488 "data/maps/ParcelStation/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_STATION
# 489 "data/maps/ParcelStation/scripts.pory"
	msgbox ParcelStation_GateWard_Defeated_Text_0, MSGBOX_DEFAULT
# 490 "data/maps/ParcelStation/scripts.pory"
	release
	end


ParcelStation_Hale_Text_0:
# 67 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: It's filed. It's true. Now we find\n"
	.string "out who reads it -- and that part was\l"
	.string "never ours to control.\p"
	.string "Ours was the writing it down.$"

ParcelStation_Hale_Text_1:
# 68 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: …One reader has asked for you\n"
	.string "already. Mereholt. The coast office --\l"
	.string "Brooke herself, up from the mainland.\p"
	.string "You owe her nothing, {PLAYER}. Go\n"
	.string "anyway.\p"
	.string "You've earned the seeing of her face\n"
	.string "while she says whatever she's decided\l"
	.string "to say.$"

ParcelStation_Hale_Text_2:
# 72 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: It's filed. It's true. Now we find\n"
	.string "out who reads it -- and that part was\l"
	.string "never ours to control.\p"
	.string "Ours was the writing it down. Rest,\n"
	.string "{PLAYER}. You've earned a night that\l"
	.string "isn't about the work.$"

ParcelStation_Hale_Text_3:
# 76 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Five credentials. You've read the\n"
	.string "whole sweep of it now -- forest to\l"
	.string "mountain to the works on the coast.\p"
	.string "And you've read what's in the\n"
	.string "footnotes. Whose name is in them.$"

ParcelStation_Hale_Text_4:
# 77 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: One place left. The Last Corridor,\n"
	.string "inland -- the keystone marsh all of it\l"
	.string "drains from. Where she went.\p"
	.string "I'll walk you to the treeline. I won't go\n"
	.string "in. This last one is yours alone.$"

ParcelStation_Hale_Text_5:
# 78 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Ready to go now?$"

ParcelStation_Hale_Text_6:
# 80 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Take the time you need. It will\n"
	.string "keep. It has kept this long.$"

ParcelStation_Hale_Text_7:
# 89 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Four. Forest, basin, watershed --\n"
	.string "and a mountain you couldn't save and\l"
	.string "didn't pretend to.\p"
	.string "That last one is the one that makes a\n"
	.string "Ranger. The rest is competence.$"

ParcelStation_Hale_Text_8:
# 90 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Take the ferry from the dock\n"
	.string "town. Delibird Isle first, for the\l"
	.string "breather -- you've earned one. Then up\l"
	.string "the coast to the Mereholt works.\p"
	.string "That's the back of it. The coast won't\n"
	.string "bother hiding what it is.$"

ParcelStation_Hale_Text_9:
# 94 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Three credentials. Forest, basin,\n"
	.string "watershed.\p"
	.string "Now the climb. Follow the river up past\n"
	.string "the clean reaches, to where the water\l"
	.string "comes from -- the high cold.$"

ParcelStation_Hale_Text_10:
# 95 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: It won't read like the others. You\n"
	.string "will not get to fix this one.\p"
	.string "Ilex is up there already, measuring how\n"
	.string "much of it is left. Go learn what 'too\l"
	.string "late' looks like, so you'll know it the\l"
	.string "next time it isn't.$"

ParcelStation_Hale_Text_11:
# 97 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: One more thing. The country gets\n"
	.string "rough from here.\p"
	.string "Rin's upgraded your field kit, and the\n"
	.string "clearances you've earned open the hard\l"
	.string "ground past here. Field craft, not force\l"
	.string "-- we don't tear up a living place for\l"
	.string "sport. But a deadfall across the only\l"
	.string "path, a slide of rock over a culvert? We\l"
	.string "clear those, and we put them back where\l"
	.string "we can.\p"
	.string "Move what has to move. Light what has\n"
	.string "to be seen.$"

ParcelStation_Hale_Text_12:
# 103 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Two credentials. A sick forest\n"
	.string "corridor and a sicker basin.\p"
	.string "The River's next -- and it's the first\n"
	.string "place you'll go that isn't already lost.\l"
	.string "There's still a window there.$"

ParcelStation_Hale_Text_13:
# 104 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Follow the channel up out of the\n"
	.string "basin. North, past the discharge, where\l"
	.string "the trees thin.\p"
	.string "Ilex is working the bank up there. Read\n"
	.string "the whole river before you name any\l"
	.string "part of it.$"

ParcelStation_Hale_Text_14:
# 105 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: The people on that water have\n"
	.string "even less reason to like us than the\l"
	.string "last lot.\n"
	.string "Listen anyway.$"

ParcelStation_Hale_Text_15:
# 113 "data/maps/ParcelStation/scripts.pory"
	.string "Hale reads it twice. He doesn't argue\n"
	.string "with any of it.\p"
	.string "Hale: You couldn't fix it.$"

ParcelStation_Hale_Text_16:
# 114 "data/maps/ParcelStation/scripts.pory"
	.string "{PLAYER}: No.$"

ParcelStation_Hale_Text_17:
# 115 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: And you didn't pretend you had.\p"
	.string "That's the certification. Not the\n"
	.string "cleanup --\n"
	.string "the refusal to sign off on a lie.$"

ParcelStation_Hale_Text_18:
# 116 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Wetland Certification complete.$"

ParcelStation_Hale_Text_19:
# 119 "data/maps/ParcelStation/scripts.pory"
	.string "Rin tops off your kit without a word.\p"
	.string "Ilex, from across the room:\n"
	.string "Ilex: It won't simply come back. Now you\l"
	.string "know that in your hands.$"

ParcelStation_Hale_Text_20:
# 125 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Walk it slowly. Read every stake.\p"
	.string "Talk to whoever's manning the booth.\n"
	.string "Then tell Ilex what you saw.$"

ParcelStation_Hale_Text_21:
# 129 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: You did well. Don't get attached\n"
	.string "to praise.\n"
	.string "Get attached to results.$"

ParcelStation_Hale_Text_22:
# 130 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: We're going west.\n"
	.string "The wetlands are sick.$"

ParcelStation_Hale_Text_23:
# 131 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Past the corridor's culvert, the\n"
	.string "forest opens onto the Floodbasin.\p"
	.string "Your audit was the warm-up.\n"
	.string "This is the work.$"

ParcelStation_Hale_Text_24:
# 140 "data/maps/ParcelStation/scripts.pory"
	.string "Hale reads your corridor notes without\n"
	.string "comment. Rin watches Doduo. Ilex closes\l"
	.string "the ledger.$"

ParcelStation_Hale_Text_25:
# 141 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: You didn't intervene.$"

ParcelStation_Hale_Text_26:
# 142 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: You didn't agree.$"

ParcelStation_Hale_Text_27:
# 143 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Forest Certification complete.$"

ParcelStation_Hale_Text_28:
# 144 "data/maps/ParcelStation/scripts.pory"
	.string "No fanfare.\p"
	.string "Rin hands you a proper field kit: sample\n"
	.string "vials, a flow gauge, a better headlamp,\l"
	.string "spare red cloth.$"

ParcelStation_Hale_Text_29:
# 147 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex speaks last.\p"
	.string "Ilex: Now you'll start noticing how\n"
	.string "often damage wears the mask of\l"
	.string "improvement.$"

ParcelStation_Hale_Text_30:
# 152 "data/maps/ParcelStation/scripts.pory"
	.string "Hale slides a laminated sheet across\n"
	.string "the table.\p"
	.string "CORRIDOR AUDIT -- LOW PRIORITY\n"
	.string "Route: Old Service Cut / Hollowbend\l"
	.string "Spur\p"
	.string "Report Type: Verification\n"
	.string "Action Status: OBSERVE ONLY.$"

ParcelStation_Hale_Text_31:
# 153 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: This corridor used to connect two\n"
	.string "wetland pockets. Then someone improved\l"
	.string "a road.\p"
	.string "He doesn't say who.\n"
	.string "He doesn't have to.$"

ParcelStation_Hale_Text_32:
# 154 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: East of the wetlands landing,\n"
	.string "past the tree line.\n"
	.string "Walk it. Read it. Touch nothing.$"

ParcelStation_Hale_Text_33:
# 159 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Four tasks. Logged.\p"
	.string "No fanfare. That's how it should feel.$"

ParcelStation_Hale_Text_34:
# 160 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: North of here the forest gives\n"
	.string "out and the wetlands begin. There's a\l"
	.string "fishing landing on the backwater.\p"
	.string "People up there are angry, and somebody\n"
	.string "is feeding them a story.$"

ParcelStation_Hale_Text_35:
# 161 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Go listen. Document what you see.\n"
	.string "Don't argue with anyone's paycheck.$"

ParcelStation_Hale_Text_36:
# 169 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: A call just came in. West fringe,\n"
	.string "by the treeline.\p"
	.string "Someone's working a line down there who\n"
	.string "shouldn't be.$"

ParcelStation_Hale_Text_37:
# 170 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: You have a partner now.\n"
	.string "Go do more than stare.$"

ParcelStation_Hale_Text_38:
# 176 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Training. Three of our practice\n"
	.string "snares are out on the fringe--find\l"
	.string "them, clear them.$"

ParcelStation_Hale_Text_39:
# 177 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Ilex set three survey stakes:\n"
	.string "bank, substrate, canopy. Read each one.\p"
	.string "And Rin wants a water sample from the\n"
	.string "channel.$"

ParcelStation_Hale_Text_40:
# 178 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: No deadline.\n"
	.string "Do it properly.$"

ParcelStation_Hale_Text_41:
# 183 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: The meadow's east.\p"
	.string "You walk. You observe. You stop where\n"
	.string "you're compelled to stop.$"

ParcelStation_Hale_Text_42:
# 187 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: No welcome ceremony. We document\n"
	.string "ecological change, interrupt\l"
	.string "exploitation, coordinate restoration.\p"
	.string "Often without public support.$"

ParcelStation_Hale_Text_43:
# 188 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: We don't 'win.' We reduce harm. We\n"
	.string "keep corridors open.\n"
	.string "We stop the worst of it.$"

ParcelStation_Hale_Text_44:
# 189 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: Your mentor worked with us.\p"
	.string "Whatever happened at that lab…\n"
	.string "wasn't random.$"

ParcelStation_Hale_Text_45:
# 190 "data/maps/ParcelStation/scripts.pory"
	.string "Hale hands you a heavier second pack:\n"
	.string "an empty Poké Ball case, a hand-marked\l"
	.string "folded map, and a laminated card\l"
	.string "stamped PROVISIONAL.\p"
	.string "On the card, a small printed strip of red\n"
	.string "cloth.$"

ParcelStation_Hale_Text_46:
# 191 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: This isn't ownership.\n"
	.string "It's responsibility.$"

ParcelStation_Hale_Text_47:
# 193 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: The Holding Meadow is east. The\n"
	.string "ones that wait are there.\p"
	.string "You don't pick. And they don't obey.$"

ParcelStation_Rin_Text_0:
# 203 "data/maps/ParcelStation/scripts.pory"
	.string "Rin: Rough out there. Set your partner\n"
	.string "down a minute-- there's a cot and a kit.$"

ParcelStation_Rin_Text_1:
# 207 "data/maps/ParcelStation/scripts.pory"
	.string "Rin: Better. Welcome to walking with\n"
	.string "consequences.$"

ParcelStation_Rin_Text_2:
# 211 "data/maps/ParcelStation/scripts.pory"
	.string "Rin doesn't look up. She is redirecting a\n"
	.string "channel's flow, one stone at a time.\p"
	.string "Rin: Nothing stays here permanently.\n"
	.string "That's the rule.$"

ParcelStation_Ilex_Text_0:
# 225 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: It's filed. The papers are Hale's\n"
	.string "to sign.\p"
	.string "Don't expect him to smile about it.$"

ParcelStation_Ilex_Text_1:
# 233 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Pipe, sheen, dead reeds. The\n"
	.string "Wooper. The Karp. The booth.\p"
	.string "Put a name on it.$"

ParcelStation_Ilex_Text_2:
# 235 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: COLLAPSING.\p"
	.string "The keystone is straining; the apex is\n"
	.string "sick; the mid-tier swarms.\p"
	.string "This is what 'we're remediating that'\n"
	.string "actually looks like.$"

ParcelStation_Ilex_Text_3:
# 238 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: I'll have your report typed by\n"
	.string "morning.\p"
	.string "Go tell Hale you're done.\n"
	.string "The certification's his to give.$"

ParcelStation_Ilex_Text_4:
# 242 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Damage wears the mask of\n"
	.string "improvement.\p"
	.string "You'll see it everywhere now.\n"
	.string "I'm sorry.$"

ParcelStation_Ilex_Text_5:
# 247 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Low priority means nobody's\n"
	.string "watching.\p"
	.string "Which means we still have time.$"

ParcelStation_Ilex_Text_6:
# 257 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Bank, substrate, canopy.\n"
	.string "Let's see what you saw.$"

ParcelStation_Ilex_Text_7:
# 259 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Reference state. Whole.\p"
	.string "Keystone breeding, every guild present,\n"
	.string "nothing swarming, no damage.$"

ParcelStation_Ilex_Text_8:
# 260 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Remember exactly what this feels\n"
	.string "like.\p"
	.string "You will spend the rest of your life\n"
	.string "measuring places against it.$"

ParcelStation_Ilex_Text_9:
# 264 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: Three stakes. Bank, substrate,\n"
	.string "canopy.\p"
	.string "Read all three, then come back.$"

ParcelStation_Ilex_Text_10:
# 268 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: They've all been displaced.\n"
	.string "But not broken.$"

ParcelStation_Ilex_Text_11:
# 269 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: They aren't rare. They aren't\n"
	.string "powerful.\p"
	.string "They are stable.$"

ParcelStation_Lotad_Text_0:
# 277 "data/maps/ParcelStation/scripts.pory"
	.string "The Lotad rests at the pool's shaded\n"
	.string "edge.\p"
	.string "It registers you, and goes back to\n"
	.string "being still.\n"
	.string "Calm.$"

ParcelStation_Shroomish_Text_0:
# 284 "data/maps/ParcelStation/scripts.pory"
	.string "The Shroomish recoils--spores pulsing\n"
	.string "once, twice--\p"
	.string "then settles. It doesn't move away.$"

ParcelStation_Seedot_Text_0:
# 291 "data/maps/ParcelStation/scripts.pory"
	.string "The Seedot freezes mid-hop between\n"
	.string "the roots.\p"
	.string "It is very committed to being a seed.$"

ParcelStation_Numel_Text_0:
# 298 "data/maps/ParcelStation/scripts.pory"
	.string "The Numel is curled by the dry corner of\n"
	.string "the meadow, radiating heat.\p"
	.string "The ground here is drier than it should\n"
	.string "be.\p"
	.string "You write that down before you realize\n"
	.string "you're doing it.$"

ParcelStation_Electrike_Text_0:
# 305 "data/maps/ParcelStation/scripts.pory"
	.string "The Electrike paces the perimeter,\n"
	.string "closer each pass.\p"
	.string "It never quite stops.$"

ParcelStation_Carvanha_Text_0:
# 312 "data/maps/ParcelStation/scripts.pory"
	.string "Something circles in the deeper\n"
	.string "channel.\p"
	.string "The Carvanha keeps its distance.\n"
	.string "So do you.$"

ParcelStation_Doduo_Text_0:
# 321 "data/maps/ParcelStation/scripts.pory"
	.string "A Doduo stands at the clearing's edge.\p"
	.string "One head watches you.\n"
	.string "The other watches the forest.$"

ParcelStation_Doduo_Text_1:
# 325 "data/maps/ParcelStation/scripts.pory"
	.string "The Doduo moves. One head stays on you;\n"
	.string "the other sweeps the treeline.\p"
	.string "You stop--\n"
	.string "because moving feels wrong.$"

ParcelStation_Doduo_Text_2:
# 326 "data/maps/ParcelStation/scripts.pory"
	.string "You kneel.\p"
	.string "Behind you, quiet footsteps: Rin sets a\n"
	.string "single Poké Ball on the ground between\l"
	.string "you, and steps back.$"

ParcelStation_Doduo_Text_3:
# 327 "data/maps/ParcelStation/scripts.pory"
	.string "Rin: If it chooses to enter,\n"
	.string "you're provisional partners.$"

ParcelStation_Doduo_Text_4:
# 332 "data/maps/ParcelStation/scripts.pory"
	.string "The Doduo studies you a moment longer.\p"
	.string "Then it nudges the ball.\p"
	.string "The ball closes with no shake.\n"
	.string "Just stillness.$"

ParcelStation_Doduo_Text_5:
# 336 "data/maps/ParcelStation/scripts.pory"
	.string "It feels warm.\p"
	.string "WREN received DODUO.$"

ParcelStation_Doduo_Text_6:
# 337 "data/maps/ParcelStation/scripts.pory"
	.string "Hale: This doesn't make you a Ranger.$"

ParcelStation_Doduo_Text_7:
# 338 "data/maps/ParcelStation/scripts.pory"
	.string "Ilex: It makes you accountable.$"

ParcelStation_Doduo_Text_8:
# 339 "data/maps/ParcelStation/scripts.pory"
	.string "Rin: Welcome to walking with\n"
	.string "consequences.$"

ParcelStation_Doduo_Text_9:
# 340 "data/maps/ParcelStation/scripts.pory"
	.string "You leave the meadow not empowered--\n"
	.string "but entangled.\p"
	.string "And that is the point.$"

ParcelStation_Sign_Text_0:
# 346 "data/maps/ParcelStation/scripts.pory"
	.string "CLIMATE CORPS -- FIELD STATION\p"
	.string "The Holding Meadow is east.\n"
	.string "Nothing stays there permanently.$"

ParcelStation_ClearSnare_Text_0:
# 378 "data/maps/ParcelStation/scripts.pory"
	.string "The cleared snare site. The wire is in\n"
	.string "your pack.$"

ParcelStation_ClearSnare_Text_1:
# 381 "data/maps/ParcelStation/scripts.pory"
	.string "A practice snare, half-hidden in the\n"
	.string "grass--a wire loop on a bent stake.\p"
	.string "You unhook the trigger and wind the\n"
	.string "wire, the way the manual says.\n"
	.string "Slowly. No sudden pulls.$"

ParcelStation_StakeBank_Text_0:
# 392 "data/maps/ParcelStation/scripts.pory"
	.string "The bank stake. Already read.$"

ParcelStation_StakeBank_Text_1:
# 396 "data/maps/ParcelStation/scripts.pory"
	.string "A survey stake by the channel. A strip\n"
	.string "of red cloth, faded.\p"
	.string "BANK: edges soft but holding. Root mass\n"
	.string "intact.\n"
	.string "You write it down.$"

ParcelStation_StakeSubstrate_Text_0:
# 407 "data/maps/ParcelStation/scripts.pory"
	.string "The substrate stake. Already read.$"

ParcelStation_StakeSubstrate_Text_1:
# 411 "data/maps/ParcelStation/scripts.pory"
	.string "A survey stake in the open meadow. Red\n"
	.string "cloth, knotted twice.\p"
	.string "SUBSTRATE: mixed soil, no compaction,\n"
	.string "drains clean.\n"
	.string "You write it down.$"

ParcelStation_StakeCanopy_Text_0:
# 422 "data/maps/ParcelStation/scripts.pory"
	.string "The canopy stake. Already read.$"

ParcelStation_StakeCanopy_Text_1:
# 426 "data/maps/ParcelStation/scripts.pory"
	.string "A survey stake at the tree line. Red\n"
	.string "cloth, nearly new.\p"
	.string "CANOPY: broken sunlight, layered\n"
	.string "growth, edge gradual--not cut.\n"
	.string "You write it down.$"

ParcelStation_WaterSample_Text_0:
# 437 "data/maps/ParcelStation/scripts.pory"
	.string "The sampling point. Rin has your vial.$"

ParcelStation_WaterSample_Text_1:
# 441 "data/maps/ParcelStation/scripts.pory"
	.string "You kneel at the channel and draw a\n"
	.string "sample.\p"
	.string "The water runs clear--but colder than\n"
	.string "the air explains.\p"
	.string "Conditions matter. You label the vial\n"
	.string "and note the temperature.$"

ParcelStation_Lookout_Text_0:
# 450 "data/maps/ParcelStation/scripts.pory"
	.string "Garr: Station kid, huh? This line was\n"
	.string "here before your stakes were.\p"
	.string "Walk away.$"

ParcelStation_Lookout_Text_1:
# 451 "data/maps/ParcelStation/scripts.pory"
	.string "Garr: Tch. Practiced, are you.$"

ParcelStation_Lookout_Text_2:
# 452 "data/maps/ParcelStation/scripts.pory"
	.string "Garr coils his line, unhurried, and looks\n"
	.string "past you at the station.\p"
	.string "Garr: Write your little report.\n"
	.string "It changes nothing out here.$"

ParcelStation_BirderTrainer_Text_0:
# 459 "data/maps/ParcelStation/scripts.pory"
	.string "Neri: Shh--you'll flush the Taillow.\n"
	.string "…Too late. Fine, battle.$"

ParcelStation_BirderTrainer_Text_1:
# 460 "data/maps/ParcelStation/scripts.pory"
	.string "Neri: Hmph. The birds liked you better\n"
	.string "anyway.$"

ParcelStation_BirderTrainer_Text_2:
# 461 "data/maps/ParcelStation/scripts.pory"
	.string "Neri: Counting nests, if you must know.\p"
	.string "Fewer every spring. Nobody writes that\n"
	.string "down but me.$"

ParcelStation_GateWard_Text_0:
# 477 "data/maps/ParcelStation/scripts.pory"
	.string "Ward: Station clearance is checked\n"
	.string "here, provisional. The road north is\l"
	.string "Mereholt's to open.\p"
	.string "Show me you can hold a line before you\n"
	.string "walk one.$"

ParcelStation_GateWard_Text_1:
# 478 "data/maps/ParcelStation/scripts.pory"
	.string "Ward: …Adequate. The line's yours to\n"
	.string "pass.$"

ParcelStation_GateWard_Text_2:
# 482 "data/maps/ParcelStation/scripts.pory"
	.string "Ward: You're in the log. Keep your card\n"
	.string "on you--\n"
	.string "the next checkpoint won't take my word\l"
	.string "for it.$"

ParcelStation_GateWard_Defeated_Text_0:
# 489 "data/maps/ParcelStation/scripts.pory"
	.string "Ward: Station clearance: granted.\n"
	.string "Logged and filed.\p"
	.string "No ceremony. That's not what this is.$"
