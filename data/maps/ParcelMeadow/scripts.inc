ParcelMeadow_MapScripts::
# 16 "data/maps/ParcelMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelMeadow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelMeadow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/ParcelMeadow/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ParcelMeadow_FirstEntry
	.2byte 0


ParcelMeadow_FirstEntry::
# 23 "data/maps/ParcelMeadow/scripts.pory"
	setvar VAR_TEMP_1, 1
# 24 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALD_MEADOW_INTRO, ParcelMeadow_FirstEntry_2
# 27 "data/maps/ParcelMeadow/scripts.pory"
	lockall
# 28 "data/maps/ParcelMeadow/scripts.pory"
	applymovement 1, Movement_RinToGate
# 29 "data/maps/ParcelMeadow/scripts.pory"
	waitmovement 0
# 30 "data/maps/ParcelMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerFaceUp
# 31 "data/maps/ParcelMeadow/scripts.pory"
	waitmovement 0
# 32 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_FirstEntry_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_FirstEntry_Text_1, MSGBOX_DEFAULT
# 34 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_FirstEntry_Text_2, MSGBOX_DEFAULT
# 35 "data/maps/ParcelMeadow/scripts.pory"
	closemessage
# 36 "data/maps/ParcelMeadow/scripts.pory"
	applymovement 1, Movement_RinBack
# 37 "data/maps/ParcelMeadow/scripts.pory"
	waitmovement 0
# 38 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_MEADOW_INTRO
# 39 "data/maps/ParcelMeadow/scripts.pory"
	releaseall
	end

ParcelMeadow_FirstEntry_2:
	end


# 43 "data/maps/ParcelMeadow/scripts.pory"
Movement_RinToGate:
# 44 "data/maps/ParcelMeadow/scripts.pory"
	walk_down
# 45 "data/maps/ParcelMeadow/scripts.pory"
	walk_left
# 46 "data/maps/ParcelMeadow/scripts.pory"
	walk_left
# 47 "data/maps/ParcelMeadow/scripts.pory"
	walk_left
# 48 "data/maps/ParcelMeadow/scripts.pory"
	walk_left
# 49 "data/maps/ParcelMeadow/scripts.pory"
	face_down
# 50 "data/maps/ParcelMeadow/scripts.pory"
	step_end

# 53 "data/maps/ParcelMeadow/scripts.pory"
Movement_RinBack:
# 54 "data/maps/ParcelMeadow/scripts.pory"
	walk_right
# 55 "data/maps/ParcelMeadow/scripts.pory"
	walk_right
# 56 "data/maps/ParcelMeadow/scripts.pory"
	walk_right
# 57 "data/maps/ParcelMeadow/scripts.pory"
	walk_right
# 58 "data/maps/ParcelMeadow/scripts.pory"
	walk_up
# 59 "data/maps/ParcelMeadow/scripts.pory"
	face_down
# 60 "data/maps/ParcelMeadow/scripts.pory"
	step_end

# 63 "data/maps/ParcelMeadow/scripts.pory"
Movement_PlayerFaceUp:
# 64 "data/maps/ParcelMeadow/scripts.pory"
	face_up
# 65 "data/maps/ParcelMeadow/scripts.pory"
	step_end

ParcelMeadow_NeedPartner::
# 70 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_NeedPartner_2
# 74 "data/maps/ParcelMeadow/scripts.pory"
	lockall
# 75 "data/maps/ParcelMeadow/scripts.pory"
	playse SE_PIN
# 76 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_NeedPartner_Text_0, MSGBOX_DEFAULT
# 77 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_NeedPartner_Text_1, MSGBOX_DEFAULT
# 78 "data/maps/ParcelMeadow/scripts.pory"
	closemessage
# 79 "data/maps/ParcelMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MeadowPushBack
# 80 "data/maps/ParcelMeadow/scripts.pory"
	waitmovement 0
# 81 "data/maps/ParcelMeadow/scripts.pory"
	releaseall
	end

ParcelMeadow_NeedPartner_2:
# 71 "data/maps/ParcelMeadow/scripts.pory"
	setvar VAR_TEMP_2, 1
	end


# 85 "data/maps/ParcelMeadow/scripts.pory"
Movement_MeadowPushBack:
# 86 "data/maps/ParcelMeadow/scripts.pory"
	walk_down
# 87 "data/maps/ParcelMeadow/scripts.pory"
	step_end

ParcelMeadow_Rin::
# 91 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 92 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 93 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelMeadow_Rin_2
# 98 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Rin_5
# 103 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelMeadow_Rin_8
# 105 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelMeadow_Rin_9
# 107 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelMeadow_Rin_10
# 109 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelMeadow_Rin_11
# 111 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelMeadow_Rin_12
# 113 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Rin_13
# 116 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_8, MSGBOX_DEFAULT
ParcelMeadow_Rin_7:
# 118 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Rin_2:
# 94 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_0, MSGBOX_DEFAULT
# 95 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Rin_5:
# 99 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_1, MSGBOX_DEFAULT
# 100 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Rin_8:
# 104 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_2, MSGBOX_DEFAULT
	goto ParcelMeadow_Rin_7

ParcelMeadow_Rin_9:
# 106 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_3, MSGBOX_DEFAULT
	goto ParcelMeadow_Rin_7

ParcelMeadow_Rin_10:
# 108 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_4, MSGBOX_DEFAULT
	goto ParcelMeadow_Rin_7

ParcelMeadow_Rin_11:
# 110 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_5, MSGBOX_DEFAULT
	goto ParcelMeadow_Rin_7

ParcelMeadow_Rin_12:
# 112 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_6, MSGBOX_DEFAULT
	goto ParcelMeadow_Rin_7

ParcelMeadow_Rin_13:
# 114 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_7, MSGBOX_DEFAULT
	goto ParcelMeadow_Rin_7


ParcelMeadow_Sign::
# 123 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Sign_Text_0, MSGBOX_SIGN
	end


ParcelMeadow_Doduo::
# 132 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 133 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 134 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Doduo_2
# 139 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Doduo_5
# 144 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Doduo_Text_2, MSGBOX_YESNO
# 145 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Doduo_8
# 153 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Doduo_Text_4, MSGBOX_DEFAULT
ParcelMeadow_Doduo_7:
# 155 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Doduo_2:
# 135 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Doduo_Text_0, MSGBOX_DEFAULT
# 136 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Doduo_5:
# 140 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Doduo_Text_1, MSGBOX_DEFAULT
# 141 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Doduo_8:
# 146 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 147 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_DODUO, 5
# 148 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_DODUO
# 149 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 2
# 150 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Doduo_Text_3, MSGBOX_DEFAULT
# 151 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Doduo_7


ParcelMeadow_Shroomish::
# 160 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 161 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 162 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Shroomish_2
# 167 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Shroomish_5
# 172 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Shroomish_Text_2, MSGBOX_YESNO
# 173 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Shroomish_8
# 181 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Shroomish_Text_4, MSGBOX_DEFAULT
ParcelMeadow_Shroomish_7:
# 183 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Shroomish_2:
# 163 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Shroomish_Text_0, MSGBOX_DEFAULT
# 164 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Shroomish_5:
# 168 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Shroomish_Text_1, MSGBOX_DEFAULT
# 169 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Shroomish_8:
# 174 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 175 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_SHROOMISH, 5
# 176 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_SHROOMISH
# 177 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 3
# 178 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Shroomish_Text_3, MSGBOX_DEFAULT
# 179 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Shroomish_7


ParcelMeadow_Seedot::
# 188 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 189 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 190 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Seedot_2
# 195 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Seedot_5
# 200 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Seedot_Text_2, MSGBOX_YESNO
# 201 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Seedot_8
# 209 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Seedot_Text_4, MSGBOX_DEFAULT
ParcelMeadow_Seedot_7:
# 211 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Seedot_2:
# 191 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Seedot_Text_0, MSGBOX_DEFAULT
# 192 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Seedot_5:
# 196 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Seedot_Text_1, MSGBOX_DEFAULT
# 197 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Seedot_8:
# 202 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 203 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_SEEDOT, 5
# 204 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_SEEDOT
# 205 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 4
# 206 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Seedot_Text_3, MSGBOX_DEFAULT
# 207 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Seedot_7


ParcelMeadow_Lotad::
# 216 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 217 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 218 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Lotad_2
# 223 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Lotad_5
# 228 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Lotad_Text_2, MSGBOX_YESNO
# 229 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Lotad_8
# 237 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Lotad_Text_4, MSGBOX_DEFAULT
ParcelMeadow_Lotad_7:
# 239 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Lotad_2:
# 219 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Lotad_Text_0, MSGBOX_DEFAULT
# 220 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Lotad_5:
# 224 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Lotad_Text_1, MSGBOX_DEFAULT
# 225 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Lotad_8:
# 230 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 231 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_LOTAD, 5
# 232 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_LOTAD
# 233 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 5
# 234 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Lotad_Text_3, MSGBOX_DEFAULT
# 235 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Lotad_7


ParcelMeadow_Carvanha::
# 244 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 245 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 246 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Carvanha_2
# 251 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Carvanha_5
# 256 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Carvanha_Text_2, MSGBOX_YESNO
# 257 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Carvanha_8
# 265 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Carvanha_Text_4, MSGBOX_DEFAULT
ParcelMeadow_Carvanha_7:
# 267 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Carvanha_2:
# 247 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Carvanha_Text_0, MSGBOX_DEFAULT
# 248 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Carvanha_5:
# 252 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Carvanha_Text_1, MSGBOX_DEFAULT
# 253 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Carvanha_8:
# 258 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 259 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_CARVANHA, 5
# 260 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_CARVANHA
# 261 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 6
# 262 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Carvanha_Text_3, MSGBOX_DEFAULT
# 263 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Carvanha_7


ParcelMeadow_Numel::
# 272 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 273 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 274 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Numel_2
# 279 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Numel_5
# 284 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Numel_Text_2, MSGBOX_YESNO
# 285 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Numel_8
# 293 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Numel_Text_4, MSGBOX_DEFAULT
ParcelMeadow_Numel_7:
# 295 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Numel_2:
# 275 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Numel_Text_0, MSGBOX_DEFAULT
# 276 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Numel_5:
# 280 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Numel_Text_1, MSGBOX_DEFAULT
# 281 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Numel_8:
# 286 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 287 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_NUMEL, 5
# 288 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_NUMEL
# 289 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 7
# 290 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Numel_Text_3, MSGBOX_DEFAULT
# 291 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Numel_7


ParcelMeadow_Electrike::
# 300 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 301 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 302 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Electrike_2
# 307 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Electrike_5
# 312 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Electrike_Text_2, MSGBOX_YESNO
# 313 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Electrike_8
# 321 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Electrike_Text_4, MSGBOX_DEFAULT
ParcelMeadow_Electrike_7:
# 323 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Electrike_2:
# 303 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Electrike_Text_0, MSGBOX_DEFAULT
# 304 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Electrike_5:
# 308 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Electrike_Text_1, MSGBOX_DEFAULT
# 309 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Electrike_8:
# 314 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 315 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_ELECTRIKE, 5
# 316 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_ELECTRIKE
# 317 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 8
# 318 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Electrike_Text_3, MSGBOX_DEFAULT
# 319 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Electrike_7


ParcelMeadow_Recognition::
# 329 "data/maps/ParcelMeadow/scripts.pory"
	closemessage
# 330 "data/maps/ParcelMeadow/scripts.pory"
	delay 40
# 331 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Recognition_Text_0, MSGBOX_DEFAULT
# 332 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Recognition_Text_1, MSGBOX_DEFAULT
# 333 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Recognition_Text_2, MSGBOX_DEFAULT
# 334 "data/maps/ParcelMeadow/scripts.pory"
	closemessage
# 335 "data/maps/ParcelMeadow/scripts.pory"
	delay 40
# 336 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Recognition_Text_3, MSGBOX_DEFAULT
# 337 "data/maps/ParcelMeadow/scripts.pory"
	closemessage
# 338 "data/maps/ParcelMeadow/scripts.pory"
	playse SE_BALL_THROW
# 339 "data/maps/ParcelMeadow/scripts.pory"
	delay 30
# 340 "data/maps/ParcelMeadow/scripts.pory"
	playse SE_BALL
# 341 "data/maps/ParcelMeadow/scripts.pory"
	delay 30
# 342 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Recognition_Text_4, MSGBOX_DEFAULT
# 343 "data/maps/ParcelMeadow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 344 "data/maps/ParcelMeadow/scripts.pory"
	waitfanfare
	return


ParcelMeadow_AfterRecognition::
# 349 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 350 "data/maps/ParcelMeadow/scripts.pory"
	clearflag FLAG_SKALD_NO_PARTNER_YET
# 351 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_AfterRecognition_Text_0, MSGBOX_DEFAULT
# 352 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_AfterRecognition_Text_1, MSGBOX_DEFAULT
	return


ParcelMeadow_Board1::
# 359 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Board1_Text_0, MSGBOX_SIGN
	end


ParcelMeadow_Board2::
# 364 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Board2_Text_0, MSGBOX_SIGN
	end


ParcelMeadow_FirstEntry_Text_0:
# 32 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Oh! You're WREN, right? HALE said\n"
	.string "you'd come up this way. I'm RIN. I look\l"
	.string "after the meadow.$"

ParcelMeadow_FirstEntry_Text_1:
# 33 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: House rules: everything in here\n"
	.string "got hurt somewhere and is waiting to go\l"
	.string "back out. So no chasing, no grabbing.\p"
	.string "If one of them comes to YOU, though...\n"
	.string "that's different.$"

ParcelMeadow_FirstEntry_Text_2:
# 34 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Go on, have a walk around. Say hi.\n"
	.string "Don't take it personally if they ignore\l"
	.string "you. Most of them ignore me.$"

ParcelMeadow_NeedPartner_Text_0:
# 76 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: WREN! Hold on!\p"
	.string "You can't go up the route without a\n"
	.string "partner. The grass out there is full of\l"
	.string "wild POKéMON!$"

ParcelMeadow_NeedPartner_Text_1:
# 77 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Go say hi to somebody first. Walk\n"
	.string "up to one and stand still. That's the\l"
	.string "whole trick.$"

ParcelMeadow_Rin_Text_0:
# 94 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Five in the paddock. Two went with\n"
	.string "provisionals this spring. One of them\l"
	.string "chose a ranger who'd read your filing.\p"
	.string "I didn't tell him who you were. He'll find\n"
	.string "out. They all do.$"

ParcelMeadow_Rin_Text_1:
# 99 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Look at you. Read in a hearing. The\n"
	.string "meadow's the same. Seven in the\l"
	.string "paddock, and the one you took is the\l"
	.string "one who'll be remembered. Don't tell the\l"
	.string "others.$"

ParcelMeadow_Rin_Text_2:
# 104 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Six left in the paddock and none\n"
	.string "of them is going anywhere. I've stopped\l"
	.string "calling them the ones that wait. They're\l"
	.string "the ones that stay.\p"
	.string "The marsh is next for you, HALE says.\n"
	.string "Whatever you find out there, come back\l"
	.string "and tell the paddock. They like the\l"
	.string "sound of it.$"

ParcelMeadow_Rin_Text_3:
# 106 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: The NUMEL went up the slope on its\n"
	.string "own last week. Stood at the gate for a\l"
	.string "day and then walked north. I let it.\l"
	.string "Nobody's chosen it in two years; it\l"
	.string "chose.\p"
	.string "The meadow's for edge species.\n"
	.string "Sometimes the edge moves.$"

ParcelMeadow_Rin_Text_4:
# 108 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: The river village stood up to the\n"
	.string "Board. The ferry hands said so. I read\l"
	.string "the Board's bulletin to the paddock in a\l"
	.string "silly voice and the CARVANHA bit the\l"
	.string "fence.\p"
	.string "I don't think it understood. I think it\n"
	.string "liked the voice.$"

ParcelMeadow_Rin_Text_5:
# 110 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: A cadet came for the SEEDOT. Stood\n"
	.string "still for an hour in the rain and the\l"
	.string "SEEDOT dropped off its branch onto her\l"
	.string "head. That counts.\p"
	.string "Five left. They watch the gate when the\n"
	.string "ferry's in. All of them. I don't tell them\l"
	.string "the odds.$"

ParcelMeadow_Rin_Text_6:
# 112 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Look at you, all certified. The\n"
	.string "meadow's quieter without your partner\l"
	.string "in it. Don't tell it I said that.$"

ParcelMeadow_Rin_Text_7:
# 114 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: HALE's at the station. Take the\n"
	.string "track north through MISTWOOD. It's a\l"
	.string "bit of a walk, and the woods are full of\l"
	.string "people who want to battle.\p"
	.string "That's a good thing, by the way. Your\n"
	.string "partner needs the practice.$"

ParcelMeadow_Rin_Text_8:
# 116 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Walk up to them. Stand still. That's\n"
	.string "the whole trick.\p"
	.string "The DODUO's been watching you since\n"
	.string "you came in, if you want a hint.$"

ParcelMeadow_Sign_Text_0:
# 123 "data/maps/ParcelMeadow/scripts.pory"
	.string "HOLDING MEADOW\n"
	.string "Skaldmere Climate Corps\p"
	.string "No chasing. No feeding. No taking.\p"
	.string "In pencil underneath: they pick YOU. --\n"
	.string "R.$"

ParcelMeadow_Doduo_Text_0:
# 135 "data/maps/ParcelMeadow/scripts.pory"
	.string "The DODUO watches the gate. It has\n"
	.string "watched the gate since the ferry came\l"
	.string "in with you on it, and it is the only one\l"
	.string "of the seven that still thinks somebody\l"
	.string "else is coming.\p"
	.string "It is right. Somebody always is.$"

ParcelMeadow_Doduo_Text_1:
# 140 "data/maps/ParcelMeadow/scripts.pory"
	.string "The DODUO looks at you with one head.\n"
	.string "The other one is watching the trees.$"

ParcelMeadow_Doduo_Text_2:
# 144 "data/maps/ParcelMeadow/scripts.pory"
	.string "The DODUO is watching you. One head,\n"
	.string "anyway.\p"
	.string "Stand still?$"

ParcelMeadow_Doduo_Text_3:
# 150 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received DODUO!$"

ParcelMeadow_Doduo_Text_4:
# 153 "data/maps/ParcelMeadow/scripts.pory"
	.string "The DODUO loses interest. Both heads.$"

ParcelMeadow_Shroomish_Text_0:
# 163 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SHROOMISH has moved to the damp\n"
	.string "corner under the hedge and is doing\l"
	.string "very well there. It has been read about\l"
	.string "in a hearing, in a way, and has not\l"
	.string "noticed.$"

ParcelMeadow_Shroomish_Text_1:
# 168 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SHROOMISH is asleep under the tree.\n"
	.string "Or pretending. Hard to tell with\l"
	.string "SHROOMISH.$"

ParcelMeadow_Shroomish_Text_2:
# 172 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SHROOMISH opens one eye. It\n"
	.string "doesn't move. It's very good at not\l"
	.string "moving.\p"
	.string "Stand still?$"

ParcelMeadow_Shroomish_Text_3:
# 178 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received SHROOMISH!$"

ParcelMeadow_Shroomish_Text_4:
# 181 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SHROOMISH closes the eye again.$"

ParcelMeadow_Seedot_Text_0:
# 191 "data/maps/ParcelMeadow/scripts.pory"
	.string "A SEEDOT hangs from the gate rail where\n"
	.string "a different SEEDOT used to hang. RIN\l"
	.string "says it came in on its own from the wood\l"
	.string "and took the spot. The meadow has a\l"
	.string "vacancy policy. It did not write it.$"

ParcelMeadow_Seedot_Text_1:
# 196 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SEEDOT is hanging from the branch\n"
	.string "by its stem, pretending to be an acorn.\l"
	.string "It's not fooling anyone.$"

ParcelMeadow_Seedot_Text_2:
# 200 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SEEDOT drops off the branch and\n"
	.string "lands in front of you. Thunk.\p"
	.string "Stand still?$"

ParcelMeadow_Seedot_Text_3:
# 206 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received SEEDOT!$"

ParcelMeadow_Seedot_Text_4:
# 209 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SEEDOT rolls back to its tree.$"

ParcelMeadow_Lotad_Text_0:
# 219 "data/maps/ParcelMeadow/scripts.pory"
	.string "The LOTAD has the whole pool to itself\n"
	.string "and sits exactly where it sat the day\l"
	.string "you came in. It would have been a good\l"
	.string "partner. It is a good pool.$"

ParcelMeadow_Lotad_Text_1:
# 224 "data/maps/ParcelMeadow/scripts.pory"
	.string "The LOTAD is sitting at the edge of the\n"
	.string "pool with its pad in the water. Living\l"
	.string "the dream.$"

ParcelMeadow_Lotad_Text_2:
# 228 "data/maps/ParcelMeadow/scripts.pory"
	.string "The LOTAD paddles over to your side of\n"
	.string "the pool and looks up.\p"
	.string "Stand still?$"

ParcelMeadow_Lotad_Text_3:
# 234 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received LOTAD!$"

ParcelMeadow_Lotad_Text_4:
# 237 "data/maps/ParcelMeadow/scripts.pory"
	.string "The LOTAD paddles away again. Slowly.\n"
	.string "Everything LOTAD does is slowly.$"

ParcelMeadow_Carvanha_Text_0:
# 247 "data/maps/ParcelMeadow/scripts.pory"
	.string "The CARVANHA has worn a groove in the\n"
	.string "fence rail with its teeth. RIN has\l"
	.string "started reading it the Board's\l"
	.string "bulletins on purpose. It bites harder at\l"
	.string "the second column.$"

ParcelMeadow_Carvanha_Text_1:
# 252 "data/maps/ParcelMeadow/scripts.pory"
	.string "The CARVANHA circles the pool. It has\n"
	.string "been circling the pool since you got\l"
	.string "here. It will circle the pool after you\l"
	.string "leave.$"

ParcelMeadow_Carvanha_Text_2:
# 256 "data/maps/ParcelMeadow/scripts.pory"
	.string "The CARVANHA stops circling and stares\n"
	.string "at you through the water. It has a LOT\l"
	.string "of teeth.\p"
	.string "Stand still?$"

ParcelMeadow_Carvanha_Text_3:
# 262 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received CARVANHA!$"

ParcelMeadow_Carvanha_Text_4:
# 265 "data/maps/ParcelMeadow/scripts.pory"
	.string "The CARVANHA goes back to circling.\n"
	.string "Probably for the best.$"

ParcelMeadow_Numel_Text_0:
# 275 "data/maps/ParcelMeadow/scripts.pory"
	.string "The NUMEL's corner is empty. It walked\n"
	.string "north on its own before the hearing and\l"
	.string "RIN let it. There is a dent in the turf\l"
	.string "the shape of a NUMEL, and the grass is\l"
	.string "already closing it.$"

ParcelMeadow_Numel_Text_1:
# 280 "data/maps/ParcelMeadow/scripts.pory"
	.string "The NUMEL is lying in the warm sand. It\n"
	.string "hasn't noticed you. It may not have\l"
	.string "noticed anything this week.$"

ParcelMeadow_Numel_Text_2:
# 284 "data/maps/ParcelMeadow/scripts.pory"
	.string "The NUMEL lifts its head, very slowly,\n"
	.string "and blinks at you.\p"
	.string "Stand still?$"

ParcelMeadow_Numel_Text_3:
# 290 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received NUMEL!$"

ParcelMeadow_Numel_Text_4:
# 293 "data/maps/ParcelMeadow/scripts.pory"
	.string "The NUMEL puts its head back down. That\n"
	.string "was a lot of effort.$"

ParcelMeadow_Electrike_Text_0:
# 303 "data/maps/ParcelMeadow/scripts.pory"
	.string "The ELECTRIKE's fur stands up when the\n"
	.string "weather turns, same as ever. The\l"
	.string "Station's keeper came down to borrow it\l"
	.string "for a forecast once and RIN said no. It\l"
	.string "forecasts for the paddock now. The\l"
	.string "paddock is grateful.$"

ParcelMeadow_Electrike_Text_1:
# 308 "data/maps/ParcelMeadow/scripts.pory"
	.string "The ELECTRIKE runs the fence line, back\n"
	.string "and forth, back and forth. Your hair\l"
	.string "stands up when it passes.$"

ParcelMeadow_Electrike_Text_2:
# 312 "data/maps/ParcelMeadow/scripts.pory"
	.string "The ELECTRIKE skids to a stop in front\n"
	.string "of you. Sparks are coming off its fur.\p"
	.string "Stand still?$"

ParcelMeadow_Electrike_Text_3:
# 318 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received ELECTRIKE!$"

ParcelMeadow_Electrike_Text_4:
# 321 "data/maps/ParcelMeadow/scripts.pory"
	.string "The ELECTRIKE is off again before you\n"
	.string "can blink.$"

ParcelMeadow_Recognition_Text_0:
# 331 "data/maps/ParcelMeadow/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "It's coming over.$"

ParcelMeadow_Recognition_Text_1:
# 332 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Don't move! It's deciding!$"

ParcelMeadow_Recognition_Text_2:
# 333 "data/maps/ParcelMeadow/scripts.pory"
	.string "The last time something small decided\n"
	.string "about you, it had a tail that painted.\p"
	.string "You hold very still. You find that you\n"
	.string "are allowed to.$"

ParcelMeadow_Recognition_Text_3:
# 336 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: ...Well. That's not how it usually\n"
	.string "goes.\p"
	.string "Here! Catch!$"

ParcelMeadow_Recognition_Text_4:
# 342 "data/maps/ParcelMeadow/scripts.pory"
	.string "It walked straight into the Ball. No\n"
	.string "shaking. No fuss.$"

ParcelMeadow_AfterRecognition_Text_0:
# 351 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Congratulations, I guess! Now it's\n"
	.string "your problem.\p"
	.string "HALE's at the station. Take the track\n"
	.string "north, through MISTWOOD. It'll follow\l"
	.string "you. They always do, once they've\l"
	.string "decided.$"

ParcelMeadow_AfterRecognition_Text_1:
# 352 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Oh, and there's grass out there.\n"
	.string "Real POKéMON, not meadow POKéMON.\l"
	.string "Yours will want to fight them. Let it.$"

ParcelMeadow_Board1_Text_0:
# 359 "data/maps/ParcelMeadow/scripts.pory"
	.string "A SURVEY BOARD at the meadow gate, in\n"
	.string "RIN's hand. The holding meadow. Edge\l"
	.string "species that tolerate us wait here; the\l"
	.string "Corps does not issue partners, it\l"
	.string "introduces them.\p"
	.string "A board of names below, one for every\n"
	.string "partner that left with a ranger. The\l"
	.string "names are not crossed out when the\l"
	.string "ranger is.$"

ParcelMeadow_Board2_Text_0:
# 364 "data/maps/ParcelMeadow/scripts.pory"
	.string "A SURVEY BOARD, set low, for children.\n"
	.string "What lives in a meadow lives in the\l"
	.string "margins: the hedge, the ditch, the\l"
	.string "stones. Mow the margins and the meadow\l"
	.string "is grass. Grass is not a meadow.\p"
	.string "The Survey counts the margin, which is\n"
	.string "why the mower stops a stride short of\l"
	.string "the hedge.$"
