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
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Rin_2
# 98 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelMeadow_Rin_5
# 100 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelMeadow_Rin_6
# 102 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelMeadow_Rin_7
# 104 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelMeadow_Rin_8
# 106 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelMeadow_Rin_9
# 108 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Rin_10
# 111 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_7, MSGBOX_DEFAULT
ParcelMeadow_Rin_4:
# 113 "data/maps/ParcelMeadow/scripts.pory"
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
	goto ParcelMeadow_Rin_4

ParcelMeadow_Rin_6:
# 101 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_2, MSGBOX_DEFAULT
	goto ParcelMeadow_Rin_4

ParcelMeadow_Rin_7:
# 103 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_3, MSGBOX_DEFAULT
	goto ParcelMeadow_Rin_4

ParcelMeadow_Rin_8:
# 105 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_4, MSGBOX_DEFAULT
	goto ParcelMeadow_Rin_4

ParcelMeadow_Rin_9:
# 107 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_5, MSGBOX_DEFAULT
	goto ParcelMeadow_Rin_4

ParcelMeadow_Rin_10:
# 109 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_6, MSGBOX_DEFAULT
	goto ParcelMeadow_Rin_4


ParcelMeadow_Sign::
# 118 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Sign_Text_0, MSGBOX_SIGN
	end


ParcelMeadow_Doduo::
# 127 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 128 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 129 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Doduo_2
# 134 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Doduo_5
# 139 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Doduo_Text_2, MSGBOX_YESNO
# 140 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Doduo_8
# 148 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Doduo_Text_4, MSGBOX_DEFAULT
ParcelMeadow_Doduo_7:
# 150 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Doduo_2:
# 130 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Doduo_Text_0, MSGBOX_DEFAULT
# 131 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Doduo_5:
# 135 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Doduo_Text_1, MSGBOX_DEFAULT
# 136 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Doduo_8:
# 141 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 142 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_DODUO, 5
# 143 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_DODUO
# 144 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 2
# 145 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Doduo_Text_3, MSGBOX_DEFAULT
# 146 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Doduo_7


ParcelMeadow_Shroomish::
# 155 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 156 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 157 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Shroomish_2
# 162 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Shroomish_5
# 167 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Shroomish_Text_2, MSGBOX_YESNO
# 168 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Shroomish_8
# 176 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Shroomish_Text_4, MSGBOX_DEFAULT
ParcelMeadow_Shroomish_7:
# 178 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Shroomish_2:
# 158 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Shroomish_Text_0, MSGBOX_DEFAULT
# 159 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Shroomish_5:
# 163 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Shroomish_Text_1, MSGBOX_DEFAULT
# 164 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Shroomish_8:
# 169 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 170 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_SHROOMISH, 5
# 171 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_SHROOMISH
# 172 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 3
# 173 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Shroomish_Text_3, MSGBOX_DEFAULT
# 174 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Shroomish_7


ParcelMeadow_Seedot::
# 183 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 184 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 185 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Seedot_2
# 190 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Seedot_5
# 195 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Seedot_Text_2, MSGBOX_YESNO
# 196 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Seedot_8
# 204 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Seedot_Text_4, MSGBOX_DEFAULT
ParcelMeadow_Seedot_7:
# 206 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Seedot_2:
# 186 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Seedot_Text_0, MSGBOX_DEFAULT
# 187 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Seedot_5:
# 191 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Seedot_Text_1, MSGBOX_DEFAULT
# 192 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Seedot_8:
# 197 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 198 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_SEEDOT, 5
# 199 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_SEEDOT
# 200 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 4
# 201 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Seedot_Text_3, MSGBOX_DEFAULT
# 202 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Seedot_7


ParcelMeadow_Lotad::
# 211 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 212 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 213 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Lotad_2
# 218 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Lotad_5
# 223 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Lotad_Text_2, MSGBOX_YESNO
# 224 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Lotad_8
# 232 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Lotad_Text_4, MSGBOX_DEFAULT
ParcelMeadow_Lotad_7:
# 234 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Lotad_2:
# 214 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Lotad_Text_0, MSGBOX_DEFAULT
# 215 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Lotad_5:
# 219 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Lotad_Text_1, MSGBOX_DEFAULT
# 220 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Lotad_8:
# 225 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 226 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_LOTAD, 5
# 227 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_LOTAD
# 228 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 5
# 229 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Lotad_Text_3, MSGBOX_DEFAULT
# 230 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Lotad_7


ParcelMeadow_Carvanha::
# 239 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 240 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 241 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Carvanha_2
# 246 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Carvanha_5
# 251 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Carvanha_Text_2, MSGBOX_YESNO
# 252 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Carvanha_8
# 260 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Carvanha_Text_4, MSGBOX_DEFAULT
ParcelMeadow_Carvanha_7:
# 262 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Carvanha_2:
# 242 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Carvanha_Text_0, MSGBOX_DEFAULT
# 243 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Carvanha_5:
# 247 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Carvanha_Text_1, MSGBOX_DEFAULT
# 248 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Carvanha_8:
# 253 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 254 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_CARVANHA, 5
# 255 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_CARVANHA
# 256 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 6
# 257 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Carvanha_Text_3, MSGBOX_DEFAULT
# 258 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Carvanha_7


ParcelMeadow_Numel::
# 267 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 268 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 269 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Numel_2
# 274 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Numel_5
# 279 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Numel_Text_2, MSGBOX_YESNO
# 280 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Numel_8
# 288 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Numel_Text_4, MSGBOX_DEFAULT
ParcelMeadow_Numel_7:
# 290 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Numel_2:
# 270 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Numel_Text_0, MSGBOX_DEFAULT
# 271 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Numel_5:
# 275 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Numel_Text_1, MSGBOX_DEFAULT
# 276 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Numel_8:
# 281 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 282 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_NUMEL, 5
# 283 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_NUMEL
# 284 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 7
# 285 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Numel_Text_3, MSGBOX_DEFAULT
# 286 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Numel_7


ParcelMeadow_Electrike::
# 295 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 296 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 297 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadow_Electrike_2
# 302 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Electrike_5
# 307 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Electrike_Text_2, MSGBOX_YESNO
# 308 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Electrike_8
# 316 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Electrike_Text_4, MSGBOX_DEFAULT
ParcelMeadow_Electrike_7:
# 318 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Electrike_2:
# 298 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Electrike_Text_0, MSGBOX_DEFAULT
# 299 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Electrike_5:
# 303 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Electrike_Text_1, MSGBOX_DEFAULT
# 304 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Electrike_8:
# 309 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 310 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_ELECTRIKE, 5
# 311 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_ELECTRIKE
# 312 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 8
# 313 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Electrike_Text_3, MSGBOX_DEFAULT
# 314 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Electrike_7


ParcelMeadow_Recognition::
# 324 "data/maps/ParcelMeadow/scripts.pory"
	closemessage
# 325 "data/maps/ParcelMeadow/scripts.pory"
	delay 40
# 326 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Recognition_Text_0, MSGBOX_DEFAULT
# 327 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Recognition_Text_1, MSGBOX_DEFAULT
# 328 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Recognition_Text_2, MSGBOX_DEFAULT
# 329 "data/maps/ParcelMeadow/scripts.pory"
	closemessage
# 330 "data/maps/ParcelMeadow/scripts.pory"
	delay 40
# 331 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Recognition_Text_3, MSGBOX_DEFAULT
# 332 "data/maps/ParcelMeadow/scripts.pory"
	closemessage
# 333 "data/maps/ParcelMeadow/scripts.pory"
	playse SE_BALL_THROW
# 334 "data/maps/ParcelMeadow/scripts.pory"
	delay 30
# 335 "data/maps/ParcelMeadow/scripts.pory"
	playse SE_BALL
# 336 "data/maps/ParcelMeadow/scripts.pory"
	delay 30
# 337 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Recognition_Text_4, MSGBOX_DEFAULT
# 338 "data/maps/ParcelMeadow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 339 "data/maps/ParcelMeadow/scripts.pory"
	waitfanfare
	return


ParcelMeadow_AfterRecognition::
# 344 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 345 "data/maps/ParcelMeadow/scripts.pory"
	clearflag FLAG_SKALD_NO_PARTNER_YET
# 346 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_AfterRecognition_Text_0, MSGBOX_DEFAULT
# 347 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_AfterRecognition_Text_1, MSGBOX_DEFAULT
	return


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
	.string "RIN: Look at you. Read in a hearing. The\n"
	.string "meadow's the same. Seven in the\l"
	.string "paddock, and the one you took is the\l"
	.string "one who'll be remembered. Don't tell the\l"
	.string "others.$"

ParcelMeadow_Rin_Text_1:
# 99 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Six left in the paddock and none\n"
	.string "of them is going anywhere. I've stopped\l"
	.string "calling them the ones that wait. They're\l"
	.string "the ones that stay.\p"
	.string "The marsh is next for you, HALE says.\n"
	.string "Whatever you find out there, come back\l"
	.string "and tell the paddock. They like the\l"
	.string "sound of it.$"

ParcelMeadow_Rin_Text_2:
# 101 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: The NUMEL went up the slope on its\n"
	.string "own last week. Stood at the gate for a\l"
	.string "day and then walked north. I let it.\l"
	.string "Nobody's chosen it in two years; it\l"
	.string "chose.\p"
	.string "The meadow's for edge species.\n"
	.string "Sometimes the edge moves.$"

ParcelMeadow_Rin_Text_3:
# 103 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: The river village stood up to the\n"
	.string "Board. The ferry hands said so. I read\l"
	.string "the Board's bulletin to the paddock in a\l"
	.string "silly voice and the CARVANHA bit the\l"
	.string "fence.\p"
	.string "I don't think it understood. I think it\n"
	.string "liked the voice.$"

ParcelMeadow_Rin_Text_4:
# 105 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: A cadet came for the SEEDOT. Stood\n"
	.string "still for an hour in the rain and the\l"
	.string "SEEDOT dropped off its branch onto her\l"
	.string "head. That counts.\p"
	.string "Five left. They watch the gate when the\n"
	.string "ferry's in. All of them. I don't tell them\l"
	.string "the odds.$"

ParcelMeadow_Rin_Text_5:
# 107 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Look at you, all certified. The\n"
	.string "meadow's quieter without your partner\l"
	.string "in it. Don't tell it I said that.$"

ParcelMeadow_Rin_Text_6:
# 109 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: HALE's at the station. Take the\n"
	.string "track north through MISTWOOD. It's a\l"
	.string "bit of a walk, and the woods are full of\l"
	.string "people who want to battle.\p"
	.string "That's a good thing, by the way. Your\n"
	.string "partner needs the practice.$"

ParcelMeadow_Rin_Text_7:
# 111 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Walk up to them. Stand still. That's\n"
	.string "the whole trick.\p"
	.string "The DODUO's been watching you since\n"
	.string "you came in, if you want a hint.$"

ParcelMeadow_Sign_Text_0:
# 118 "data/maps/ParcelMeadow/scripts.pory"
	.string "HOLDING MEADOW\n"
	.string "Skaldmere Climate Corps\p"
	.string "No chasing. No feeding. No taking.\p"
	.string "In pencil underneath: they pick YOU. --\n"
	.string "R.$"

ParcelMeadow_Doduo_Text_0:
# 130 "data/maps/ParcelMeadow/scripts.pory"
	.string "The DODUO watches the gate. It has\n"
	.string "watched the gate since the ferry came\l"
	.string "in with you on it, and it is the only one\l"
	.string "of the seven that still thinks somebody\l"
	.string "else is coming.\p"
	.string "It is right. Somebody always is.$"

ParcelMeadow_Doduo_Text_1:
# 135 "data/maps/ParcelMeadow/scripts.pory"
	.string "The DODUO looks at you with one head.\n"
	.string "The other one is watching the trees.$"

ParcelMeadow_Doduo_Text_2:
# 139 "data/maps/ParcelMeadow/scripts.pory"
	.string "The DODUO is watching you. One head,\n"
	.string "anyway.\p"
	.string "Stand still?$"

ParcelMeadow_Doduo_Text_3:
# 145 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received DODUO!$"

ParcelMeadow_Doduo_Text_4:
# 148 "data/maps/ParcelMeadow/scripts.pory"
	.string "The DODUO loses interest. Both heads.$"

ParcelMeadow_Shroomish_Text_0:
# 158 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SHROOMISH has moved to the damp\n"
	.string "corner under the hedge and is doing\l"
	.string "very well there. It has been read about\l"
	.string "in a hearing, in a way, and has not\l"
	.string "noticed.$"

ParcelMeadow_Shroomish_Text_1:
# 163 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SHROOMISH is asleep under the tree.\n"
	.string "Or pretending. Hard to tell with\l"
	.string "SHROOMISH.$"

ParcelMeadow_Shroomish_Text_2:
# 167 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SHROOMISH opens one eye. It\n"
	.string "doesn't move. It's very good at not\l"
	.string "moving.\p"
	.string "Stand still?$"

ParcelMeadow_Shroomish_Text_3:
# 173 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received SHROOMISH!$"

ParcelMeadow_Shroomish_Text_4:
# 176 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SHROOMISH closes the eye again.$"

ParcelMeadow_Seedot_Text_0:
# 186 "data/maps/ParcelMeadow/scripts.pory"
	.string "A SEEDOT hangs from the gate rail where\n"
	.string "a different SEEDOT used to hang. RIN\l"
	.string "says it came in on its own from the wood\l"
	.string "and took the spot. The meadow has a\l"
	.string "vacancy policy. It did not write it.$"

ParcelMeadow_Seedot_Text_1:
# 191 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SEEDOT is hanging from the branch\n"
	.string "by its stem, pretending to be an acorn.\l"
	.string "It's not fooling anyone.$"

ParcelMeadow_Seedot_Text_2:
# 195 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SEEDOT drops off the branch and\n"
	.string "lands in front of you. Thunk.\p"
	.string "Stand still?$"

ParcelMeadow_Seedot_Text_3:
# 201 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received SEEDOT!$"

ParcelMeadow_Seedot_Text_4:
# 204 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SEEDOT rolls back to its tree.$"

ParcelMeadow_Lotad_Text_0:
# 214 "data/maps/ParcelMeadow/scripts.pory"
	.string "The LOTAD has the whole pool to itself\n"
	.string "and sits exactly where it sat the day\l"
	.string "you came in. It would have been a good\l"
	.string "partner. It is a good pool.$"

ParcelMeadow_Lotad_Text_1:
# 219 "data/maps/ParcelMeadow/scripts.pory"
	.string "The LOTAD is sitting at the edge of the\n"
	.string "pool with its pad in the water. Living\l"
	.string "the dream.$"

ParcelMeadow_Lotad_Text_2:
# 223 "data/maps/ParcelMeadow/scripts.pory"
	.string "The LOTAD paddles over to your side of\n"
	.string "the pool and looks up.\p"
	.string "Stand still?$"

ParcelMeadow_Lotad_Text_3:
# 229 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received LOTAD!$"

ParcelMeadow_Lotad_Text_4:
# 232 "data/maps/ParcelMeadow/scripts.pory"
	.string "The LOTAD paddles away again. Slowly.\n"
	.string "Everything LOTAD does is slowly.$"

ParcelMeadow_Carvanha_Text_0:
# 242 "data/maps/ParcelMeadow/scripts.pory"
	.string "The CARVANHA has worn a groove in the\n"
	.string "fence rail with its teeth. RIN has\l"
	.string "started reading it the Board's\l"
	.string "bulletins on purpose. It bites harder at\l"
	.string "the second column.$"

ParcelMeadow_Carvanha_Text_1:
# 247 "data/maps/ParcelMeadow/scripts.pory"
	.string "The CARVANHA circles the pool. It has\n"
	.string "been circling the pool since you got\l"
	.string "here. It will circle the pool after you\l"
	.string "leave.$"

ParcelMeadow_Carvanha_Text_2:
# 251 "data/maps/ParcelMeadow/scripts.pory"
	.string "The CARVANHA stops circling and stares\n"
	.string "at you through the water. It has a LOT\l"
	.string "of teeth.\p"
	.string "Stand still?$"

ParcelMeadow_Carvanha_Text_3:
# 257 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received CARVANHA!$"

ParcelMeadow_Carvanha_Text_4:
# 260 "data/maps/ParcelMeadow/scripts.pory"
	.string "The CARVANHA goes back to circling.\n"
	.string "Probably for the best.$"

ParcelMeadow_Numel_Text_0:
# 270 "data/maps/ParcelMeadow/scripts.pory"
	.string "The NUMEL's corner is empty. It walked\n"
	.string "north on its own before the hearing and\l"
	.string "RIN let it. There is a dent in the turf\l"
	.string "the shape of a NUMEL, and the grass is\l"
	.string "already closing it.$"

ParcelMeadow_Numel_Text_1:
# 275 "data/maps/ParcelMeadow/scripts.pory"
	.string "The NUMEL is lying in the warm sand. It\n"
	.string "hasn't noticed you. It may not have\l"
	.string "noticed anything this week.$"

ParcelMeadow_Numel_Text_2:
# 279 "data/maps/ParcelMeadow/scripts.pory"
	.string "The NUMEL lifts its head, very slowly,\n"
	.string "and blinks at you.\p"
	.string "Stand still?$"

ParcelMeadow_Numel_Text_3:
# 285 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received NUMEL!$"

ParcelMeadow_Numel_Text_4:
# 288 "data/maps/ParcelMeadow/scripts.pory"
	.string "The NUMEL puts its head back down. That\n"
	.string "was a lot of effort.$"

ParcelMeadow_Electrike_Text_0:
# 298 "data/maps/ParcelMeadow/scripts.pory"
	.string "The ELECTRIKE's fur stands up when the\n"
	.string "weather turns, same as ever. The\l"
	.string "Station's keeper came down to borrow it\l"
	.string "for a forecast once and RIN said no. It\l"
	.string "forecasts for the paddock now. The\l"
	.string "paddock is grateful.$"

ParcelMeadow_Electrike_Text_1:
# 303 "data/maps/ParcelMeadow/scripts.pory"
	.string "The ELECTRIKE runs the fence line, back\n"
	.string "and forth, back and forth. Your hair\l"
	.string "stands up when it passes.$"

ParcelMeadow_Electrike_Text_2:
# 307 "data/maps/ParcelMeadow/scripts.pory"
	.string "The ELECTRIKE skids to a stop in front\n"
	.string "of you. Sparks are coming off its fur.\p"
	.string "Stand still?$"

ParcelMeadow_Electrike_Text_3:
# 313 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received ELECTRIKE!$"

ParcelMeadow_Electrike_Text_4:
# 316 "data/maps/ParcelMeadow/scripts.pory"
	.string "The ELECTRIKE is off again before you\n"
	.string "can blink.$"

ParcelMeadow_Recognition_Text_0:
# 326 "data/maps/ParcelMeadow/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "It's coming over.$"

ParcelMeadow_Recognition_Text_1:
# 327 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Don't move! It's deciding!$"

ParcelMeadow_Recognition_Text_2:
# 328 "data/maps/ParcelMeadow/scripts.pory"
	.string "The last time something small decided\n"
	.string "about you, it had a tail that painted.\p"
	.string "You hold very still. You find that you\n"
	.string "are allowed to.$"

ParcelMeadow_Recognition_Text_3:
# 331 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: ...Well. That's not how it usually\n"
	.string "goes.\p"
	.string "Here! Catch!$"

ParcelMeadow_Recognition_Text_4:
# 337 "data/maps/ParcelMeadow/scripts.pory"
	.string "It walked straight into the Ball. No\n"
	.string "shaking. No fuss.$"

ParcelMeadow_AfterRecognition_Text_0:
# 346 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Congratulations, I guess! Now it's\n"
	.string "your problem.\p"
	.string "HALE's at the station. Take the track\n"
	.string "north, through MISTWOOD. It'll follow\l"
	.string "you. They always do, once they've\l"
	.string "decided.$"

ParcelMeadow_AfterRecognition_Text_1:
# 347 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Oh, and there's grass out there.\n"
	.string "Real POKéMON, not meadow POKéMON.\l"
	.string "Yours will want to fight them. Let it.$"
