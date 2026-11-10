ParcelRoute1_MapScripts::
# 20 "data/maps/ParcelRoute1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelRoute1_OnTransition
# 21 "data/maps/ParcelRoute1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelRoute1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelRoute1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 22 "data/maps/ParcelRoute1/scripts.pory"
	map_script_2 VAR_SKALD_EPILOGUE, 8, ParcelRoute1_Epilogue
	.2byte 0


ParcelRoute1_OnTransition::
# 27 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_TEMP_3
# 28 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_TEMP_4
# 29 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_set FLAG_SKALD_ROUTE1_SCENE_DONE, ParcelRoute1_OnTransition_2
ParcelRoute1_OnTransition_1:
	end

ParcelRoute1_OnTransition_2:
# 30 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_TEMP_2
	goto ParcelRoute1_OnTransition_1


ParcelRoute1_BridgeScene::
# 39 "data/maps/ParcelRoute1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 40 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_set FLAG_SKALD_ROUTE1_SCENE_DONE, ParcelRoute1_BridgeScene_2
# 43 "data/maps/ParcelRoute1/scripts.pory"
	lockall
# 44 "data/maps/ParcelRoute1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_R1_PlayerOntoBridge
# 45 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 46 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_0, MSGBOX_DEFAULT
# 47 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 48 "data/maps/ParcelRoute1/scripts.pory"
	clearflag FLAG_TEMP_3
# 49 "data/maps/ParcelRoute1/scripts.pory"
	addobject 11
# 50 "data/maps/ParcelRoute1/scripts.pory"
	addobject 12
# 51 "data/maps/ParcelRoute1/scripts.pory"
	addobject 13
# 52 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 11, Movement_R1_PoacherIn
# 53 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 12, Movement_R1_Thug1In
# 54 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 13, Movement_R1_Thug2In
# 55 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 56 "data/maps/ParcelRoute1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_R1_FaceLeft
# 57 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 58 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_1, MSGBOX_DEFAULT
# 59 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_2, MSGBOX_DEFAULT
# 60 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_3, MSGBOX_DEFAULT
# 61 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 62 "data/maps/ParcelRoute1/scripts.pory"
	delay 40
# 63 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_4, MSGBOX_DEFAULT
# 64 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 65 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 12, Movement_R1_Thug1ToPlayer
# 66 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 67 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_POACHER_A, ParcelRoute1_BridgeScene_Text_5
# 68 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_6, MSGBOX_DEFAULT
# 69 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 70 "data/maps/ParcelRoute1/scripts.pory"
	clearflag FLAG_TEMP_4
# 71 "data/maps/ParcelRoute1/scripts.pory"
	addobject 10
# 72 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 10, Movement_R1_HaleIn
# 73 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 74 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_7, MSGBOX_DEFAULT
# 75 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_8, MSGBOX_DEFAULT
# 76 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_9, MSGBOX_DEFAULT
# 77 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_10, MSGBOX_DEFAULT
# 78 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 79 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 12, Movement_R1_Thug1Out
# 80 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 11, Movement_R1_PoacherOut
# 81 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 13, Movement_R1_Thug2Out
# 82 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 83 "data/maps/ParcelRoute1/scripts.pory"
	removeobject 11
# 84 "data/maps/ParcelRoute1/scripts.pory"
	removeobject 12
# 85 "data/maps/ParcelRoute1/scripts.pory"
	removeobject 13
# 86 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_TEMP_3
# 87 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 10, Movement_R1_HaleToPlayer
# 88 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 89 "data/maps/ParcelRoute1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_R1_FaceRight
# 90 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 91 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_11, MSGBOX_DEFAULT
# 92 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_12, MSGBOX_DEFAULT
# 93 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 94 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 14, Movement_R1_PoliwagAway
# 95 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 16, Movement_R1_PoliwagAway
# 96 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 15, Movement_R1_PoliwagAwayLater
# 97 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 98 "data/maps/ParcelRoute1/scripts.pory"
	removeobject 14
# 99 "data/maps/ParcelRoute1/scripts.pory"
	removeobject 15
# 100 "data/maps/ParcelRoute1/scripts.pory"
	removeobject 16
# 101 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_TEMP_2
# 102 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_13, MSGBOX_DEFAULT
# 103 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_14, MSGBOX_DEFAULT
# 104 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 105 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 10, Movement_R1_HaleOut
# 106 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 107 "data/maps/ParcelRoute1/scripts.pory"
	removeobject 10
# 108 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_TEMP_4
# 109 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_SKALD_ROUTE1_SCENE_DONE
# 110 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_SKALDMERE_BRIDGE_SCENE
# 111 "data/maps/ParcelRoute1/scripts.pory"
	releaseall
	end

ParcelRoute1_BridgeScene_2:
	end


# 115 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_PlayerOntoBridge:
# 116 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 117 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 118 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 119 "data/maps/ParcelRoute1/scripts.pory"
	face_down
# 120 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 123 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_FaceLeft:
# 124 "data/maps/ParcelRoute1/scripts.pory"
	face_left
# 125 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 128 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_FaceRight:
# 129 "data/maps/ParcelRoute1/scripts.pory"
	face_right
# 130 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 133 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_PoacherIn:
# 134 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 135 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 136 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 137 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 138 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 139 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 140 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 141 "data/maps/ParcelRoute1/scripts.pory"
	face_right
# 142 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 145 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_Thug1In:
# 146 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 147 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 148 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 149 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 150 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 151 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 152 "data/maps/ParcelRoute1/scripts.pory"
	face_right
# 153 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 156 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_Thug2In:
# 157 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 158 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 159 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 160 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 161 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 162 "data/maps/ParcelRoute1/scripts.pory"
	face_right
# 163 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 166 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_Thug1ToPlayer:
# 167 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 168 "data/maps/ParcelRoute1/scripts.pory"
	walk_right
# 169 "data/maps/ParcelRoute1/scripts.pory"
	walk_right
# 170 "data/maps/ParcelRoute1/scripts.pory"
	walk_right
# 171 "data/maps/ParcelRoute1/scripts.pory"
	face_right
# 172 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 175 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_Thug1Out:
# 176 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 177 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 178 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 179 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 180 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 181 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 182 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 183 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 184 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 185 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 186 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 189 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_PoacherOut:
# 190 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 191 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 192 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 193 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 194 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 195 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 196 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 197 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 200 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_Thug2Out:
# 201 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 202 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 203 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 204 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 205 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 206 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 209 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_HaleIn:
# 210 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 211 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 212 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 213 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 214 "data/maps/ParcelRoute1/scripts.pory"
	face_left
# 215 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 218 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_HaleToPlayer:
# 219 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 220 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 221 "data/maps/ParcelRoute1/scripts.pory"
	face_left
# 222 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 225 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_HaleOut:
# 226 "data/maps/ParcelRoute1/scripts.pory"
	walk_right
# 227 "data/maps/ParcelRoute1/scripts.pory"
	walk_right
# 228 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 229 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 230 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 231 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 232 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 235 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_PoliwagAway:
# 236 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 237 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 238 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 239 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 240 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 241 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 242 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 245 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_PoliwagAwayLater:
# 246 "data/maps/ParcelRoute1/scripts.pory"
	delay_16
# 247 "data/maps/ParcelRoute1/scripts.pory"
	delay_16
# 248 "data/maps/ParcelRoute1/scripts.pory"
	delay_16
# 249 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 250 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 251 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 252 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 253 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 254 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 255 "data/maps/ParcelRoute1/scripts.pory"
	step_end

ParcelRoute1_Poliwag::
# 259 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 260 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Poliwag_Text_0, MSGBOX_DEFAULT
# 261 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_PoacherTalk::
# 266 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 267 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 268 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PoacherTalk_Text_0, MSGBOX_DEFAULT
# 269 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_Hale::
# 274 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 275 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 276 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Hale_Text_0, MSGBOX_DEFAULT
# 277 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_Youngster::
# 285 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ROUTE1_YOUNGSTER, ParcelRoute1_Youngster_Text_0, ParcelRoute1_Youngster_Text_1
# 288 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Youngster_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelRoute1_Lass::
# 293 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ROUTE1_LASS, ParcelRoute1_Lass_Text_0, ParcelRoute1_Lass_Text_1
# 296 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Lass_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelRoute1_Birder::
# 301 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ROUTE1_BIRDER, ParcelRoute1_Birder_Text_0, ParcelRoute1_Birder_Text_1
# 304 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Birder_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelRoute1_Forager::
# 309 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ROUTE1_FORAGER, ParcelRoute1_Forager_Text_0, ParcelRoute1_Forager_Text_1
# 312 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Forager_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelRoute1_Camper::
# 317 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ROUTE1_CAMPER, ParcelRoute1_Camper_Text_0, ParcelRoute1_Camper_Text_1
# 320 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Camper_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelRoute1_ItemPokeBalls::
# 328 "data/maps/ParcelRoute1/scripts.pory"
	finditem ITEM_POKE_BALL, 3
	end


ParcelRoute1_ItemRareCandy::
# 333 "data/maps/ParcelRoute1/scripts.pory"
	finditem ITEM_RARE_CANDY
	end


ParcelRoute1_ItemPotion::
# 338 "data/maps/ParcelRoute1/scripts.pory"
	finditem ITEM_POTION
	end


ParcelRoute1_Sign::
# 343 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Sign_Text_0, MSGBOX_SIGN
	end


ParcelRoute1_NoticeBoard::
# 348 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_NoticeBoard_Text_0, MSGBOX_SIGN
	end


ParcelRoute1_T_Emil::
# 354 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_single TRAINER_SKALD_R1_EMIL, ParcelRoute1_T_Emil_Text_0, ParcelRoute1_T_Emil_Text_1, ParcelRoute1_T_Emil_FirstWin
# 358 "data/maps/ParcelRoute1/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 359 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRoute1_T_Emil_3
ParcelRoute1_T_Emil_1:
# 362 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRoute1_T_Emil_8
ParcelRoute1_T_Emil_6:
# 365 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRoute1_T_Emil_13
ParcelRoute1_T_Emil_11:
# 368 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRoute1_T_Emil_18
ParcelRoute1_T_Emil_16:
# 371 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Emil_Text_2, MSGBOX_DEFAULT
	end

ParcelRoute1_T_Emil_2:
# 360 "data/maps/ParcelRoute1/scripts.pory"
	goto ParcelRoute1_T_Emil_R2
	goto ParcelRoute1_T_Emil_1

ParcelRoute1_T_Emil_3:
# 359 "data/maps/ParcelRoute1/scripts.pory"
	checktrainerflag TRAINER_SKALD_R1_EMIL_R2
	goto_if 0, ParcelRoute1_T_Emil_2
	goto ParcelRoute1_T_Emil_1

ParcelRoute1_T_Emil_7:
# 363 "data/maps/ParcelRoute1/scripts.pory"
	goto ParcelRoute1_T_Emil_R3
	goto ParcelRoute1_T_Emil_6

ParcelRoute1_T_Emil_8:
# 362 "data/maps/ParcelRoute1/scripts.pory"
	checktrainerflag TRAINER_SKALD_R1_EMIL_R3
	goto_if 0, ParcelRoute1_T_Emil_7
	goto ParcelRoute1_T_Emil_6

ParcelRoute1_T_Emil_12:
# 366 "data/maps/ParcelRoute1/scripts.pory"
	goto ParcelRoute1_T_Emil_R4
	goto ParcelRoute1_T_Emil_11

ParcelRoute1_T_Emil_13:
# 365 "data/maps/ParcelRoute1/scripts.pory"
	checktrainerflag TRAINER_SKALD_R1_EMIL_R4
	goto_if 0, ParcelRoute1_T_Emil_12
	goto ParcelRoute1_T_Emil_11

ParcelRoute1_T_Emil_17:
# 369 "data/maps/ParcelRoute1/scripts.pory"
	goto ParcelRoute1_T_Emil_R5
	goto ParcelRoute1_T_Emil_16

ParcelRoute1_T_Emil_18:
# 368 "data/maps/ParcelRoute1/scripts.pory"
	checktrainerflag TRAINER_SKALD_R1_EMIL_R5
	goto_if 0, ParcelRoute1_T_Emil_17
	goto ParcelRoute1_T_Emil_16


ParcelRoute1_T_Emil_FirstWin::
# 375 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Emil_Text_2, MSGBOX_DEFAULT
# 376 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_T_Emil_R2::
# 380 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 381 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 382 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Emil_R2_Text_0, MSGBOX_YESNO
# 383 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRoute1_T_Emil_R2_2
# 388 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_R1_EMIL_R2, ParcelRoute1_T_Emil_R2_Text_2
# 389 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Emil_R2_Text_3, MSGBOX_DEFAULT
# 390 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_T_Emil_R2_2:
# 384 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Emil_R2_Text_1, MSGBOX_DEFAULT
# 385 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_T_Emil_R3::
# 394 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 395 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 396 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Emil_R3_Text_0, MSGBOX_YESNO
# 397 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRoute1_T_Emil_R3_2
# 402 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_R1_EMIL_R3, ParcelRoute1_T_Emil_R3_Text_1
# 403 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Emil_R3_Text_2, MSGBOX_DEFAULT
# 404 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_T_Emil_R3_2:
# 398 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Emil_R2_Text_1, MSGBOX_DEFAULT
# 399 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_T_Emil_R4::
# 408 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 409 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 410 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Emil_R4_Text_0, MSGBOX_YESNO
# 411 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRoute1_T_Emil_R4_2
# 416 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_R1_EMIL_R4, ParcelRoute1_T_Emil_R4_Text_1
# 417 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Emil_R4_Text_2, MSGBOX_DEFAULT
# 418 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_T_Emil_R4_2:
# 412 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Emil_R2_Text_1, MSGBOX_DEFAULT
# 413 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_T_Emil_R5::
# 422 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 423 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 424 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Emil_R5_Text_0, MSGBOX_YESNO
# 425 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRoute1_T_Emil_R5_2
# 430 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_R1_EMIL_R5, ParcelRoute1_T_Emil_R4_Text_1
# 431 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Emil_R5_Text_1, MSGBOX_DEFAULT
# 432 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_T_Emil_R5_2:
# 426 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Emil_R2_Text_1, MSGBOX_DEFAULT
# 427 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_T_Astrid::
# 436 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_single TRAINER_SKALD_R1_ASTRID, ParcelRoute1_T_Astrid_Text_0, ParcelRoute1_T_Astrid_Text_1, ParcelRoute1_T_Astrid_FirstWin
# 440 "data/maps/ParcelRoute1/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 441 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRoute1_T_Astrid_3
ParcelRoute1_T_Astrid_1:
# 444 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRoute1_T_Astrid_8
ParcelRoute1_T_Astrid_6:
# 447 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRoute1_T_Astrid_13
ParcelRoute1_T_Astrid_11:
# 450 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRoute1_T_Astrid_18
ParcelRoute1_T_Astrid_16:
# 453 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Astrid_Text_2, MSGBOX_DEFAULT
	end

ParcelRoute1_T_Astrid_2:
# 442 "data/maps/ParcelRoute1/scripts.pory"
	goto ParcelRoute1_T_Astrid_R2
	goto ParcelRoute1_T_Astrid_1

ParcelRoute1_T_Astrid_3:
# 441 "data/maps/ParcelRoute1/scripts.pory"
	checktrainerflag TRAINER_SKALD_R1_ASTRID_R2
	goto_if 0, ParcelRoute1_T_Astrid_2
	goto ParcelRoute1_T_Astrid_1

ParcelRoute1_T_Astrid_7:
# 445 "data/maps/ParcelRoute1/scripts.pory"
	goto ParcelRoute1_T_Astrid_R3
	goto ParcelRoute1_T_Astrid_6

ParcelRoute1_T_Astrid_8:
# 444 "data/maps/ParcelRoute1/scripts.pory"
	checktrainerflag TRAINER_SKALD_R1_ASTRID_R3
	goto_if 0, ParcelRoute1_T_Astrid_7
	goto ParcelRoute1_T_Astrid_6

ParcelRoute1_T_Astrid_12:
# 448 "data/maps/ParcelRoute1/scripts.pory"
	goto ParcelRoute1_T_Astrid_R4
	goto ParcelRoute1_T_Astrid_11

ParcelRoute1_T_Astrid_13:
# 447 "data/maps/ParcelRoute1/scripts.pory"
	checktrainerflag TRAINER_SKALD_R1_ASTRID_R4
	goto_if 0, ParcelRoute1_T_Astrid_12
	goto ParcelRoute1_T_Astrid_11

ParcelRoute1_T_Astrid_17:
# 451 "data/maps/ParcelRoute1/scripts.pory"
	goto ParcelRoute1_T_Astrid_R5
	goto ParcelRoute1_T_Astrid_16

ParcelRoute1_T_Astrid_18:
# 450 "data/maps/ParcelRoute1/scripts.pory"
	checktrainerflag TRAINER_SKALD_R1_ASTRID_R5
	goto_if 0, ParcelRoute1_T_Astrid_17
	goto ParcelRoute1_T_Astrid_16


ParcelRoute1_T_Astrid_FirstWin::
# 457 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Astrid_Text_2, MSGBOX_DEFAULT
# 458 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_T_Astrid_R2::
# 462 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 463 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 464 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Astrid_R2_Text_0, MSGBOX_YESNO
# 465 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRoute1_T_Astrid_R2_2
# 470 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_R1_ASTRID_R2, ParcelRoute1_T_Astrid_R2_Text_2
# 471 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Astrid_R2_Text_3, MSGBOX_DEFAULT
# 472 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_T_Astrid_R2_2:
# 466 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 467 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_T_Astrid_R3::
# 476 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 477 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 478 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Astrid_R3_Text_0, MSGBOX_YESNO
# 479 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRoute1_T_Astrid_R3_2
# 484 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_R1_ASTRID_R3, ParcelRoute1_T_Astrid_R3_Text_1
# 485 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Astrid_R3_Text_2, MSGBOX_DEFAULT
# 486 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_T_Astrid_R3_2:
# 480 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 481 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_T_Astrid_R4::
# 490 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 491 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 492 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Astrid_R4_Text_0, MSGBOX_YESNO
# 493 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRoute1_T_Astrid_R4_2
# 498 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_R1_ASTRID_R4, ParcelRoute1_T_Astrid_R3_Text_1
# 499 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Astrid_R4_Text_1, MSGBOX_DEFAULT
# 500 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_T_Astrid_R4_2:
# 494 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 495 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_T_Astrid_R5::
# 504 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 505 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 506 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Astrid_R5_Text_0, MSGBOX_YESNO
# 507 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRoute1_T_Astrid_R5_2
# 512 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_R1_ASTRID_R5, ParcelRoute1_T_Astrid_R5_Text_1
# 513 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Astrid_R5_Text_2, MSGBOX_DEFAULT
# 514 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_T_Astrid_R5_2:
# 508 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 509 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_T_Mats::
# 518 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_single TRAINER_SKALD_R1_MATS, ParcelRoute1_T_Mats_Text_0, ParcelRoute1_T_Mats_Text_1, ParcelRoute1_T_Mats_FirstWin
# 522 "data/maps/ParcelRoute1/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 523 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRoute1_T_Mats_3
ParcelRoute1_T_Mats_1:
# 526 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRoute1_T_Mats_8
ParcelRoute1_T_Mats_6:
# 529 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRoute1_T_Mats_13
ParcelRoute1_T_Mats_11:
# 532 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRoute1_T_Mats_18
ParcelRoute1_T_Mats_16:
# 535 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Mats_Text_2, MSGBOX_DEFAULT
	end

ParcelRoute1_T_Mats_2:
# 524 "data/maps/ParcelRoute1/scripts.pory"
	goto ParcelRoute1_T_Mats_R2
	goto ParcelRoute1_T_Mats_1

ParcelRoute1_T_Mats_3:
# 523 "data/maps/ParcelRoute1/scripts.pory"
	checktrainerflag TRAINER_SKALD_R1_MATS_R2
	goto_if 0, ParcelRoute1_T_Mats_2
	goto ParcelRoute1_T_Mats_1

ParcelRoute1_T_Mats_7:
# 527 "data/maps/ParcelRoute1/scripts.pory"
	goto ParcelRoute1_T_Mats_R3
	goto ParcelRoute1_T_Mats_6

ParcelRoute1_T_Mats_8:
# 526 "data/maps/ParcelRoute1/scripts.pory"
	checktrainerflag TRAINER_SKALD_R1_MATS_R3
	goto_if 0, ParcelRoute1_T_Mats_7
	goto ParcelRoute1_T_Mats_6

ParcelRoute1_T_Mats_12:
# 530 "data/maps/ParcelRoute1/scripts.pory"
	goto ParcelRoute1_T_Mats_R4
	goto ParcelRoute1_T_Mats_11

ParcelRoute1_T_Mats_13:
# 529 "data/maps/ParcelRoute1/scripts.pory"
	checktrainerflag TRAINER_SKALD_R1_MATS_R4
	goto_if 0, ParcelRoute1_T_Mats_12
	goto ParcelRoute1_T_Mats_11

ParcelRoute1_T_Mats_17:
# 533 "data/maps/ParcelRoute1/scripts.pory"
	goto ParcelRoute1_T_Mats_R5
	goto ParcelRoute1_T_Mats_16

ParcelRoute1_T_Mats_18:
# 532 "data/maps/ParcelRoute1/scripts.pory"
	checktrainerflag TRAINER_SKALD_R1_MATS_R5
	goto_if 0, ParcelRoute1_T_Mats_17
	goto ParcelRoute1_T_Mats_16


ParcelRoute1_T_Mats_FirstWin::
# 539 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Mats_Text_2, MSGBOX_DEFAULT
# 540 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_T_Mats_R2::
# 544 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 545 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 546 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Mats_R2_Text_0, MSGBOX_YESNO
# 547 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRoute1_T_Mats_R2_2
# 552 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_R1_MATS_R2, ParcelRoute1_T_Mats_R2_Text_2
# 553 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Mats_R2_Text_3, MSGBOX_DEFAULT
# 554 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_T_Mats_R2_2:
# 548 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Mats_R2_Text_1, MSGBOX_DEFAULT
# 549 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_T_Mats_R3::
# 558 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 559 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 560 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Mats_R3_Text_0, MSGBOX_YESNO
# 561 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRoute1_T_Mats_R3_2
# 566 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_R1_MATS_R3, ParcelRoute1_T_Mats_R3_Text_1
# 567 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Mats_R3_Text_2, MSGBOX_DEFAULT
# 568 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_T_Mats_R3_2:
# 562 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Mats_R2_Text_1, MSGBOX_DEFAULT
# 563 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_T_Mats_R4::
# 572 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 573 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 574 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Mats_R4_Text_0, MSGBOX_YESNO
# 575 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRoute1_T_Mats_R4_2
# 580 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_R1_MATS_R4, ParcelRoute1_T_Mats_R4_Text_1
# 581 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Mats_R4_Text_2, MSGBOX_DEFAULT
# 582 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_T_Mats_R4_2:
# 576 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Mats_R2_Text_1, MSGBOX_DEFAULT
# 577 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_T_Mats_R5::
# 586 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 587 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 588 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Mats_R5_Text_0, MSGBOX_YESNO
# 589 "data/maps/ParcelRoute1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRoute1_T_Mats_R5_2
# 594 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_R1_MATS_R5, ParcelRoute1_T_Mats_R5_Text_1
# 595 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Mats_R5_Text_2, MSGBOX_DEFAULT
# 596 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_T_Mats_R5_2:
# 590 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_T_Mats_R2_Text_1, MSGBOX_DEFAULT
# 591 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_Epilogue::
# 602 "data/maps/ParcelRoute1/scripts.pory"
	lockall
# 603 "data/maps/ParcelRoute1/scripts.pory"
	delay 20
# 604 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Epilogue_Text_0, MSGBOX_DEFAULT
# 605 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 606 "data/maps/ParcelRoute1/scripts.pory"
	clearflag FLAG_TEMP_2
# 607 "data/maps/ParcelRoute1/scripts.pory"
	setobjectxyperm 15, 8, 28
# 608 "data/maps/ParcelRoute1/scripts.pory"
	addobject 15
# 609 "data/maps/ParcelRoute1/scripts.pory"
	delay 30
# 610 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 15, Movement_Epilogue_PoliwagDownstream
# 611 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 612 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Epilogue_Text_1, MSGBOX_DEFAULT
# 613 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 614 "data/maps/ParcelRoute1/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 0
# 615 "data/maps/ParcelRoute1/scripts.pory"
	setrespawn HEAL_LOCATION_PARCEL_FERNWICK
# 616 "data/maps/ParcelRoute1/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 617 "data/maps/ParcelRoute1/scripts.pory"
	special SkaldGameClear
# 618 "data/maps/ParcelRoute1/scripts.pory"
	waitstate
# 619 "data/maps/ParcelRoute1/scripts.pory"
	releaseall
	end


# 622 "data/maps/ParcelRoute1/scripts.pory"
Movement_Epilogue_PoliwagDownstream:
# 623 "data/maps/ParcelRoute1/scripts.pory"
	face_down
# 624 "data/maps/ParcelRoute1/scripts.pory"
	delay_16
# 625 "data/maps/ParcelRoute1/scripts.pory"
	walk_slow_down
# 625 "data/maps/ParcelRoute1/scripts.pory"
	walk_slow_down
# 625 "data/maps/ParcelRoute1/scripts.pory"
	walk_slow_down
# 625 "data/maps/ParcelRoute1/scripts.pory"
	walk_slow_down
	step_end

ParcelRoute1_Whistle::
# 629 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HALVAR, ParcelRoute1_Whistle_3
ParcelRoute1_Whistle_1:
# 634 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Whistle_Text_1, MSGBOX_SIGN
	end

ParcelRoute1_Whistle_2:
# 630 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Whistle_Text_0, MSGBOX_SIGN
# 631 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_SKALD_Q_HALVAR_FOUND
	end

ParcelRoute1_Whistle_3:
# 629 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_HALVAR_FOUND, ParcelRoute1_Whistle_2
	goto ParcelRoute1_Whistle_1


ParcelRoute1_PairBridge::
# 641 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 642 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRoute1_PairBridge_2
# 646 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelRoute1_PairBridge_3
# 652 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairBridge_Text_7, MSGBOX_DEFAULT
# 653 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairBridge_Text_8, MSGBOX_DEFAULT
# 654 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairBridge_Text_9, MSGBOX_DEFAULT
# 655 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairBridge_Text_10, MSGBOX_DEFAULT
# 656 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairBridge_Text_11, MSGBOX_DEFAULT
ParcelRoute1_PairBridge_1:
# 658 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_PairBridge_2:
# 643 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairBridge_Text_0, MSGBOX_DEFAULT
# 644 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairBridge_Text_1, MSGBOX_DEFAULT
# 645 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairBridge_Text_2, MSGBOX_DEFAULT
	goto ParcelRoute1_PairBridge_1

ParcelRoute1_PairBridge_3:
# 647 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairBridge_Text_3, MSGBOX_DEFAULT
# 648 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairBridge_Text_4, MSGBOX_DEFAULT
# 649 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairBridge_Text_5, MSGBOX_DEFAULT
# 650 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairBridge_Text_6, MSGBOX_DEFAULT
	goto ParcelRoute1_PairBridge_1


ParcelRoute1_Board1::
# 665 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Board1_Text_0, MSGBOX_SIGN
	end


ParcelRoute1_Board2::
# 670 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Board2_Text_0, MSGBOX_SIGN
	end


ParcelRoute1_PairSalt::
# 677 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 678 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRoute1_PairSalt_2
# 682 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_BRIDGE_SCENE, ParcelRoute1_PairSalt_3
# 688 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairSalt_Text_7, MSGBOX_DEFAULT
# 689 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairSalt_Text_8, MSGBOX_DEFAULT
# 690 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairSalt_Text_9, MSGBOX_DEFAULT
# 691 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairSalt_Text_10, MSGBOX_DEFAULT
# 692 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairSalt_Text_11, MSGBOX_DEFAULT
ParcelRoute1_PairSalt_1:
# 694 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_PairSalt_2:
# 679 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairSalt_Text_0, MSGBOX_DEFAULT
# 680 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairSalt_Text_1, MSGBOX_DEFAULT
# 681 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairSalt_Text_2, MSGBOX_DEFAULT
	goto ParcelRoute1_PairSalt_1

ParcelRoute1_PairSalt_3:
# 683 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairSalt_Text_3, MSGBOX_DEFAULT
# 684 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairSalt_Text_4, MSGBOX_DEFAULT
# 685 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairSalt_Text_5, MSGBOX_DEFAULT
# 686 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairSalt_Text_6, MSGBOX_DEFAULT
	goto ParcelRoute1_PairSalt_1


ParcelRoute1_Board3::
# 701 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Board3_Text_0, MSGBOX_SIGN
	end


ParcelRoute1_Board5::
# 708 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Board5_Text_0, MSGBOX_SIGN
	end


ParcelRoute1_Board6::
# 713 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Board6_Text_0, MSGBOX_SIGN
	end


ParcelRoute1_Board8::
# 718 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Board8_Text_0, MSGBOX_SIGN
	end


ParcelRoute1_PairRail::
# 723 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 724 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRoute1_PairRail_2
# 729 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_STATION_BRIEF, ParcelRoute1_PairRail_3
# 734 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairRail_Text_7, MSGBOX_DEFAULT
# 735 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairRail_Text_8, MSGBOX_DEFAULT
# 736 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairRail_Text_9, MSGBOX_DEFAULT
# 737 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairRail_Text_10, MSGBOX_DEFAULT
ParcelRoute1_PairRail_1:
# 739 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_PairRail_2:
# 725 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairRail_Text_0, MSGBOX_DEFAULT
# 726 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairRail_Text_1, MSGBOX_DEFAULT
# 727 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairRail_Text_2, MSGBOX_DEFAULT
# 728 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairRail_Text_3, MSGBOX_DEFAULT
	goto ParcelRoute1_PairRail_1

ParcelRoute1_PairRail_3:
# 730 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairRail_Text_4, MSGBOX_DEFAULT
# 731 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairRail_Text_5, MSGBOX_DEFAULT
# 732 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairRail_Text_6, MSGBOX_DEFAULT
	goto ParcelRoute1_PairRail_1


ParcelRoute1_PairStile::
# 746 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 747 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRoute1_PairStile_2
# 752 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_BRIDGE_SCENE, ParcelRoute1_PairStile_3
# 757 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairStile_Text_7, MSGBOX_DEFAULT
# 758 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairStile_Text_8, MSGBOX_DEFAULT
# 759 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairStile_Text_9, MSGBOX_DEFAULT
# 760 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairStile_Text_10, MSGBOX_DEFAULT
ParcelRoute1_PairStile_1:
# 762 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_PairStile_2:
# 748 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairStile_Text_0, MSGBOX_DEFAULT
# 749 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairStile_Text_1, MSGBOX_DEFAULT
# 750 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairStile_Text_2, MSGBOX_DEFAULT
# 751 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairStile_Text_3, MSGBOX_DEFAULT
	goto ParcelRoute1_PairStile_1

ParcelRoute1_PairStile_3:
# 753 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairStile_Text_4, MSGBOX_DEFAULT
# 754 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairStile_Text_5, MSGBOX_DEFAULT
# 755 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairStile_Text_6, MSGBOX_DEFAULT
	goto ParcelRoute1_PairStile_1


ParcelRoute1_PairShore::
# 767 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 768 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRoute1_PairShore_2
# 772 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelRoute1_PairShore_3
# 777 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairShore_Text_6, MSGBOX_DEFAULT
# 778 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairShore_Text_7, MSGBOX_DEFAULT
# 779 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairShore_Text_8, MSGBOX_DEFAULT
# 780 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairShore_Text_9, MSGBOX_DEFAULT
ParcelRoute1_PairShore_1:
# 782 "data/maps/ParcelRoute1/scripts.pory"
	release
	end

ParcelRoute1_PairShore_2:
# 769 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairShore_Text_0, MSGBOX_DEFAULT
# 770 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairShore_Text_1, MSGBOX_DEFAULT
# 771 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairShore_Text_2, MSGBOX_DEFAULT
	goto ParcelRoute1_PairShore_1

ParcelRoute1_PairShore_3:
# 773 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairShore_Text_3, MSGBOX_DEFAULT
# 774 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairShore_Text_4, MSGBOX_DEFAULT
# 775 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PairShore_Text_5, MSGBOX_DEFAULT
	goto ParcelRoute1_PairShore_1


ParcelRoute1_BridgeScene_Text_0:
# 46 "data/maps/ParcelRoute1/scripts.pory"
	.string "A whole crowd of POLIWAG, jammed up\n"
	.string "against the bank right under the\l"
	.string "bridge.\p"
	.string "They're not going anywhere. They look\n"
	.string "stuck.$"

ParcelRoute1_BridgeScene_Text_1:
# 58 "data/maps/ParcelRoute1/scripts.pory"
	.string "POACHER: Perfect. They ran right into\n"
	.string "the shallows. Easy pickings.\p"
	.string "Hey! Kid! Don't touch anything. You'll\n"
	.string "spook the stock.$"

ParcelRoute1_BridgeScene_Text_2:
# 59 "data/maps/ParcelRoute1/scripts.pory"
	.string "{PLAYER}: Stock?$"

ParcelRoute1_BridgeScene_Text_3:
# 60 "data/maps/ParcelRoute1/scripts.pory"
	.string "POACHER: You heard me. Beat it.$"

ParcelRoute1_BridgeScene_Text_4:
# 63 "data/maps/ParcelRoute1/scripts.pory"
	.string "POACHER: ...No? Fine. RAT! Go teach the\n"
	.string "tourist some manners.$"

ParcelRoute1_BridgeScene_Text_5:
# 67 "data/maps/ParcelRoute1/scripts.pory"
	.string "RAT: Ow! OW! Boss, the kid's got a real\n"
	.string "one!$"

ParcelRoute1_BridgeScene_Text_6:
# 68 "data/maps/ParcelRoute1/scripts.pory"
	.string "POACHER: Tch. Useless. Whatever, the\n"
	.string "RANGERS will be along any minute\l"
	.string "anyway--$"

ParcelRoute1_BridgeScene_Text_7:
# 74 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALE: Step away from the water.$"

ParcelRoute1_BridgeScene_Text_8:
# 75 "data/maps/ParcelRoute1/scripts.pory"
	.string "POACHER: This isn't your jurisdiction,\n"
	.string "RANGER.$"

ParcelRoute1_BridgeScene_Text_9:
# 76 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALE: It's a living corridor. That's all\n"
	.string "the jurisdiction I need.$"

ParcelRoute1_BridgeScene_Text_10:
# 77 "data/maps/ParcelRoute1/scripts.pory"
	.string "POACHER: ...You think you're early,\n"
	.string "HALE? You're late.$"

ParcelRoute1_BridgeScene_Text_11:
# 91 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALE: You handled yourself. Most people\n"
	.string "would have just watched.$"

ParcelRoute1_BridgeScene_Text_12:
# 92 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALE: Now don't help them. The POLIWAG.\n"
	.string "Helping is how they got stuck in the\l"
	.string "first place. Give them room.$"

ParcelRoute1_BridgeScene_Text_13:
# 102 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALE: There they go. Good. Remember\n"
	.string "what that looked like. You'll see it\l"
	.string "again.$"

ParcelRoute1_BridgeScene_Text_14:
# 103 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALE: I'm HALE. Skaldmere Climate Corps.\n"
	.string "RIN said you'd come through.\p"
	.string "The station's on the far side of\n"
	.string "MISTWOOD. The woods are the quick way,\l"
	.string "if you don't mind the company.\p"
	.string "Come find me. You can learn to do more\n"
	.string "than stare.$"

ParcelRoute1_Poliwag_Text_0:
# 260 "data/maps/ParcelRoute1/scripts.pory"
	.string "The POLIWAG flinch, but they don't swim\n"
	.string "off. They can't. Something's wrong with\l"
	.string "the water upstream.$"

ParcelRoute1_PoacherTalk_Text_0:
# 268 "data/maps/ParcelRoute1/scripts.pory"
	.string "Don't touch anything, kid.$"

ParcelRoute1_Hale_Text_0:
# 276 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALE: The station's past the woods.\n"
	.string "When you're ready.$"

ParcelRoute1_Youngster_Text_0:
# 286 "data/maps/ParcelRoute1/scripts.pory"
	.string "BO: I've been standing here ALL DAY\n"
	.string "waiting for someone to battle!$"

ParcelRoute1_Youngster_Text_1:
# 287 "data/maps/ParcelRoute1/scripts.pory"
	.string "BO: Aw, man!$"

ParcelRoute1_Youngster_Text_2:
# 288 "data/maps/ParcelRoute1/scripts.pory"
	.string "BO: The tall grass has WOOPER in it.\n"
	.string "They just stare at you. It's creepy.$"

ParcelRoute1_Lass_Text_0:
# 294 "data/maps/ParcelRoute1/scripts.pory"
	.string "IDA: Hi! Are you headed for MISTWOOD?\n"
	.string "Battle me first!$"

ParcelRoute1_Lass_Text_1:
# 295 "data/maps/ParcelRoute1/scripts.pory"
	.string "IDA: You're pretty good!$"

ParcelRoute1_Lass_Text_2:
# 296 "data/maps/ParcelRoute1/scripts.pory"
	.string "IDA: The ledge is a shortcut back down.\n"
	.string "I use it when I'm late for tea.$"

ParcelRoute1_Birder_Text_0:
# 302 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALDEN: Look up. See that WINGULL? Now\n"
	.string "look at mine. Mine's better.$"

ParcelRoute1_Birder_Text_1:
# 303 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALDEN: Fine. Yours is better.$"

ParcelRoute1_Birder_Text_2:
# 304 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALDEN: The gulls used to nest under\n"
	.string "the bridge. Not anymore. Nobody knows\l"
	.string "why.\p"
	.string "Well. Somebody knows why.$"

ParcelRoute1_Forager_Text_0:
# 310 "data/maps/ParcelRoute1/scripts.pory"
	.string "MERIT: I'm picking mushrooms. My\n"
	.string "SHROOMISH helps. Sort of.$"

ParcelRoute1_Forager_Text_1:
# 311 "data/maps/ParcelRoute1/scripts.pory"
	.string "MERIT: It ate half the basket anyway.$"

ParcelRoute1_Forager_Text_2:
# 312 "data/maps/ParcelRoute1/scripts.pory"
	.string "MERIT: The woods are full of kids who\n"
	.string "want to battle. Rangers-in-training,\l"
	.string "they call themselves.\p"
	.string "Same thing as kids who want to battle.$"

ParcelRoute1_Camper_Text_0:
# 318 "data/maps/ParcelRoute1/scripts.pory"
	.string "RUBEN: You've got the look of somebody\n"
	.string "who just got their first POKéMON.$"

ParcelRoute1_Camper_Text_1:
# 319 "data/maps/ParcelRoute1/scripts.pory"
	.string "RUBEN: Yep. Called it.$"

ParcelRoute1_Camper_Text_2:
# 320 "data/maps/ParcelRoute1/scripts.pory"
	.string "RUBEN: There's a footbridge at the\n"
	.string "river head. Don't hang around on it.\l"
	.string "Long story.$"

ParcelRoute1_Sign_Text_0:
# 343 "data/maps/ParcelRoute1/scripts.pory"
	.string "ROUTE 1\p"
	.string "SALTWICK -- south\n"
	.string "MISTWOOD -- north$"

ParcelRoute1_NoticeBoard_Text_0:
# 348 "data/maps/ParcelRoute1/scripts.pory"
	.string "SKALDMERE CLIMATE CORPS\p"
	.string "MISTWOOD: snares have been found on\n"
	.string "the north track. Do not touch them.\l"
	.string "Report them at the RANGER POST in the\l"
	.string "woods.\p"
	.string "Signed: SKELD, Warden.$"

ParcelRoute1_T_Emil_Text_0:
# 355 "data/maps/ParcelRoute1/scripts.pory"
	.string "EMIL: WURMPLE in every bush this year.\n"
	.string "My mum says that's a bad sign. Battle!$"

ParcelRoute1_T_Emil_Text_1:
# 356 "data/maps/ParcelRoute1/scripts.pory"
	.string "EMIL: Bad sign for me.$"

ParcelRoute1_T_Emil_Text_2:
# 371 "data/maps/ParcelRoute1/scripts.pory"
	.string "EMIL: When there's too many of one\n"
	.string "thing it means something that eats\l"
	.string "them is gone. HALE told me that. HALE\l"
	.string "tells everyone that.$"

ParcelRoute1_T_Emil_R2_Text_0:
# 382 "data/maps/ParcelRoute1/scripts.pory"
	.string "EMIL: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelRoute1_T_Emil_R2_Text_1:
# 384 "data/maps/ParcelRoute1/scripts.pory"
	.string "EMIL: Suit yourself. I'm here.$"

ParcelRoute1_T_Emil_R2_Text_2:
# 388 "data/maps/ParcelRoute1/scripts.pory"
	.string "EMIL: That's the one I wanted to see.$"

ParcelRoute1_T_Emil_R2_Text_3:
# 389 "data/maps/ParcelRoute1/scripts.pory"
	.string "EMIL: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRoute1_T_Emil_R3_Text_0:
# 396 "data/maps/ParcelRoute1/scripts.pory"
	.string "EMIL: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelRoute1_T_Emil_R3_Text_1:
# 402 "data/maps/ParcelRoute1/scripts.pory"
	.string "EMIL: …Fair.$"

ParcelRoute1_T_Emil_R3_Text_2:
# 403 "data/maps/ParcelRoute1/scripts.pory"
	.string "EMIL: One more in me. After the high\n"
	.string "ground.$"

ParcelRoute1_T_Emil_R4_Text_0:
# 410 "data/maps/ParcelRoute1/scripts.pory"
	.string "EMIL: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelRoute1_T_Emil_R4_Text_1:
# 416 "data/maps/ParcelRoute1/scripts.pory"
	.string "EMIL: Still yours.$"

ParcelRoute1_T_Emil_R4_Text_2:
# 417 "data/maps/ParcelRoute1/scripts.pory"
	.string "EMIL: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRoute1_T_Emil_R5_Text_0:
# 424 "data/maps/ParcelRoute1/scripts.pory"
	.string "EMIL: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRoute1_T_Emil_R5_Text_1:
# 431 "data/maps/ParcelRoute1/scripts.pory"
	.string "EMIL: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelRoute1_T_Astrid_Text_0:
# 437 "data/maps/ParcelRoute1/scripts.pory"
	.string "ASTRID: The river's low for spring. My\n"
	.string "LOTAD can stand on the bottom. Battle\l"
	.string "while it's still a river?$"

ParcelRoute1_T_Astrid_Text_1:
# 438 "data/maps/ParcelRoute1/scripts.pory"
	.string "ASTRID: Still a river. Just.$"

ParcelRoute1_T_Astrid_Text_2:
# 453 "data/maps/ParcelRoute1/scripts.pory"
	.string "ASTRID: The bridge scene with the\n"
	.string "poachers? Everyone saw. Nobody did\l"
	.string "anything. Then a RANGER did. That's you,\l"
	.string "isn't it.$"

ParcelRoute1_T_Astrid_R2_Text_0:
# 464 "data/maps/ParcelRoute1/scripts.pory"
	.string "ASTRID: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelRoute1_T_Astrid_R2_Text_1:
# 466 "data/maps/ParcelRoute1/scripts.pory"
	.string "ASTRID: Another time, then.$"

ParcelRoute1_T_Astrid_R2_Text_2:
# 470 "data/maps/ParcelRoute1/scripts.pory"
	.string "ASTRID: …Fair.$"

ParcelRoute1_T_Astrid_R2_Text_3:
# 471 "data/maps/ParcelRoute1/scripts.pory"
	.string "ASTRID: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelRoute1_T_Astrid_R3_Text_0:
# 478 "data/maps/ParcelRoute1/scripts.pory"
	.string "ASTRID: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelRoute1_T_Astrid_R3_Text_1:
# 484 "data/maps/ParcelRoute1/scripts.pory"
	.string "ASTRID: …Again, then. Later.$"

ParcelRoute1_T_Astrid_R3_Text_2:
# 485 "data/maps/ParcelRoute1/scripts.pory"
	.string "ASTRID: One more in me. After the high\n"
	.string "ground.$"

ParcelRoute1_T_Astrid_R4_Text_0:
# 492 "data/maps/ParcelRoute1/scripts.pory"
	.string "ASTRID: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelRoute1_T_Astrid_R4_Text_1:
# 499 "data/maps/ParcelRoute1/scripts.pory"
	.string "ASTRID: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelRoute1_T_Astrid_R5_Text_0:
# 506 "data/maps/ParcelRoute1/scripts.pory"
	.string "ASTRID: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelRoute1_T_Astrid_R5_Text_1:
# 512 "data/maps/ParcelRoute1/scripts.pory"
	.string "ASTRID: Still yours.$"

ParcelRoute1_T_Astrid_R5_Text_2:
# 513 "data/maps/ParcelRoute1/scripts.pory"
	.string "ASTRID: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRoute1_T_Mats_Text_0:
# 519 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: I'm walking to MISTWOOD. Everyone\n"
	.string "says don't. Battle me and I'll say I beat\l"
	.string "a RANGER first.$"

ParcelRoute1_T_Mats_Text_1:
# 520 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: I'll say I nearly beat one.$"

ParcelRoute1_T_Mats_Text_2:
# 535 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: SKELD at the post won't let you\n"
	.string "through the deadfall without CUT. He's\l"
	.string "not being mean. The deadfall's real.$"

ParcelRoute1_T_Mats_R2_Text_0:
# 546 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelRoute1_T_Mats_R2_Text_1:
# 548 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRoute1_T_Mats_R2_Text_2:
# 552 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: Still yours.$"

ParcelRoute1_T_Mats_R2_Text_3:
# 553 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRoute1_T_Mats_R3_Text_0:
# 560 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelRoute1_T_Mats_R3_Text_1:
# 566 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: …Fair.$"

ParcelRoute1_T_Mats_R3_Text_2:
# 567 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRoute1_T_Mats_R4_Text_0:
# 574 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelRoute1_T_Mats_R4_Text_1:
# 580 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: …Again, then. Later.$"

ParcelRoute1_T_Mats_R4_Text_2:
# 581 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRoute1_T_Mats_R5_Text_0:
# 588 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelRoute1_T_Mats_R5_Text_1:
# 594 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: Right. That's the whole of it.$"

ParcelRoute1_T_Mats_R5_Text_2:
# 595 "data/maps/ParcelRoute1/scripts.pory"
	.string "MATS: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelRoute1_Epilogue_Text_0:
# 604 "data/maps/ParcelRoute1/scripts.pory"
	.string "The bridge on ROUTE 1. The first\n"
	.string "morning, the whole crowd of them was\l"
	.string "jammed up under it, going nowhere, and\l"
	.string "you thought something was chasing\l"
	.string "them.$"

ParcelRoute1_Epilogue_Text_1:
# 612 "data/maps/ParcelRoute1/scripts.pory"
	.string "One POLIWAG, in the middle of the\n"
	.string "stream, going downstream at its own\l"
	.string "pace. Nobody helping it. It has the\l"
	.string "room.\p"
	.string "You write it down.$"

ParcelRoute1_Whistle_Text_0:
# 630 "data/maps/ParcelRoute1/scripts.pory"
	.string "Something glints in the shallows where\n"
	.string "the water has drawn back from the\l"
	.string "stones. A brass whistle on a rotted\l"
	.string "lanyard, green with the inlet.\p"
	.string "You fish it out. It still has a pea in it.$"

ParcelRoute1_Whistle_Text_1:
# 634 "data/maps/ParcelRoute1/scripts.pory"
	.string "The inlet by the bridge, drawn back from\n"
	.string "its stones. Low water. Things show in\l"
	.string "low water that were never meant to.$"

ParcelRoute1_PairBridge_Text_0:
# 643 "data/maps/ParcelRoute1/scripts.pory"
	.string "ANGLER: One POLIWAG went downstream\n"
	.string "on its own this morning. Middle of the\l"
	.string "stream. Taking its time.$"

ParcelRoute1_PairBridge_Text_1:
# 644 "data/maps/ParcelRoute1/scripts.pory"
	.string "CADET: Just one?$"

ParcelRoute1_PairBridge_Text_2:
# 645 "data/maps/ParcelRoute1/scripts.pory"
	.string "ANGLER: One's the number you start\n"
	.string "with. I've fished this bank forty years\l"
	.string "and I've never once seen the first one\l"
	.string "before.$"

ParcelRoute1_PairBridge_Text_3:
# 647 "data/maps/ParcelRoute1/scripts.pory"
	.string "CADET: The ranger from the ferry read\n"
	.string "the bridge the first morning. Before\l"
	.string "the badge, before anything.$"

ParcelRoute1_PairBridge_Text_4:
# 648 "data/maps/ParcelRoute1/scripts.pory"
	.string "ANGLER: Read it how?$"

ParcelRoute1_PairBridge_Text_5:
# 649 "data/maps/ParcelRoute1/scripts.pory"
	.string "CADET: Stood where you're standing and\n"
	.string "wrote down what the frogs were doing.\l"
	.string "Then went south to the station like it\l"
	.string "was nothing.$"

ParcelRoute1_PairBridge_Text_6:
# 650 "data/maps/ParcelRoute1/scripts.pory"
	.string "ANGLER: It was something. People stand\n"
	.string "here and see a bridge.$"

ParcelRoute1_PairBridge_Text_7:
# 652 "data/maps/ParcelRoute1/scripts.pory"
	.string "ANGLER: The POLIWAG were under the\n"
	.string "bridge again this morning. Jammed up.\l"
	.string "Going nowhere.$"

ParcelRoute1_PairBridge_Text_8:
# 653 "data/maps/ParcelRoute1/scripts.pory"
	.string "CADET: Something chasing them?$"

ParcelRoute1_PairBridge_Text_9:
# 654 "data/maps/ParcelRoute1/scripts.pory"
	.string "ANGLER: Nothing chases a POLIWAG into\n"
	.string "a bridge. Something's wrong with the\l"
	.string "water downstream and they know it\l"
	.string "before we do.$"

ParcelRoute1_PairBridge_Text_10:
# 655 "data/maps/ParcelRoute1/scripts.pory"
	.string "CADET: I'll write it up.$"

ParcelRoute1_PairBridge_Text_11:
# 656 "data/maps/ParcelRoute1/scripts.pory"
	.string "ANGLER: Write it up. That's two of us\n"
	.string "who've noticed in forty years.$"

ParcelRoute1_Board1_Text_0:
# 665 "data/maps/ParcelRoute1/scripts.pory"
	.string "A SURVEY BOARD, fresh paint over older\n"
	.string "paint. ROUTE 1. Saltmarsh edge: the\l"
	.string "grass floods on the big tides and\l"
	.string "drains in a day, and the WOOPER move\l"
	.string "with it, so they are counted at the\l"
	.string "culvert and not the pool.\p"
	.string "Count this spring: 31. The old board\n"
	.string "underneath said 50. Nobody painted\l"
	.string "that out. It wore off.$"

ParcelRoute1_Board2_Text_0:
# 670 "data/maps/ParcelRoute1/scripts.pory"
	.string "A SURVEY BOARD by the road. WINGULL\n"
	.string "pairs on the shore pilings, counted at\l"
	.string "dawn: 14. The Survey's rule for shore\l"
	.string "birds is written under the number in a\l"
	.string "smaller hand.\p"
	.string "A pair that nests found enough fish. A\n"
	.string "pair that stays and does not nest\l"
	.string "found enough to stay. Watch which.$"

ParcelRoute1_PairSalt_Text_0:
# 679 "data/maps/ParcelRoute1/scripts.pory"
	.string "OLD WOMAN: The gate's open. No crest.\n"
	.string "Someone unscrewed it in the night.$"

ParcelRoute1_PairSalt_Text_1:
# 680 "data/maps/ParcelRoute1/scripts.pory"
	.string "GIRL: Was it the ranger?$"

ParcelRoute1_PairSalt_Text_2:
# 681 "data/maps/ParcelRoute1/scripts.pory"
	.string "OLD WOMAN: The ranger doesn't unscrew\n"
	.string "things. The ranger writes them down and\l"
	.string "other people unscrew them. Pick the\l"
	.string "samphire. It's a good year.$"

ParcelRoute1_PairSalt_Text_3:
# 683 "data/maps/ParcelRoute1/scripts.pory"
	.string "GIRL: A POLIWAG came through the\n"
	.string "culvert the wrong way. The ranger saw\l"
	.string "it.$"

ParcelRoute1_PairSalt_Text_4:
# 684 "data/maps/ParcelRoute1/scripts.pory"
	.string "OLD WOMAN: Wrong way for whom?$"

ParcelRoute1_PairSalt_Text_5:
# 685 "data/maps/ParcelRoute1/scripts.pory"
	.string "GIRL: For the POLIWAG.$"

ParcelRoute1_PairSalt_Text_6:
# 686 "data/maps/ParcelRoute1/scripts.pory"
	.string "OLD WOMAN: Then it's the right way for\n"
	.string "something else. Find out what. That's\l"
	.string "what the ranger's doing.$"

ParcelRoute1_PairSalt_Text_7:
# 688 "data/maps/ParcelRoute1/scripts.pory"
	.string "OLD WOMAN: Pick below the tide line, not\n"
	.string "above. Above is the gate's. Below is\l"
	.string "everyone's.$"

ParcelRoute1_PairSalt_Text_8:
# 689 "data/maps/ParcelRoute1/scripts.pory"
	.string "GIRL: The gate has a crest on it.$"

ParcelRoute1_PairSalt_Text_9:
# 690 "data/maps/ParcelRoute1/scripts.pory"
	.string "OLD WOMAN: The gate has a crest. The\n"
	.string "marsh has samphire. Pick the samphire.$"

ParcelRoute1_PairSalt_Text_10:
# 691 "data/maps/ParcelRoute1/scripts.pory"
	.string "GIRL: What's the crest for?$"

ParcelRoute1_PairSalt_Text_11:
# 692 "data/maps/ParcelRoute1/scripts.pory"
	.string "OLD WOMAN: Managing. Keep picking.$"

ParcelRoute1_Board3_Text_0:
# 701 "data/maps/ParcelRoute1/scripts.pory"
	.string "A SURVEY BOARD at the grass edge.\n"
	.string "TAILLOW nest in the old pilings and\l"
	.string "feed over the marsh; where they feed is\l"
	.string "where the insects are, and where the\l"
	.string "insects are is where the marsh still\l"
	.string "works.\p"
	.string "The board draws their flight lines as\n"
	.string "arrows. The arrows have shortened\l"
	.string "since the first drawing. They have not\l"
	.string "turned.$"

ParcelRoute1_Board5_Text_0:
# 708 "data/maps/ParcelRoute1/scripts.pory"
	.string "A SURVEY BOARD at the north end of the\n"
	.string "route, where the saltmarsh gives up and\l"
	.string "the trees begin. The Survey calls this a\l"
	.string "line and draws it on the board as one,\l"
	.string "year by year.\p"
	.string "The trees have not moved. The marsh\n"
	.string "has. The line is where it always was; the\l"
	.string "marsh is shorter on its side of it.$"

ParcelRoute1_Board6_Text_0:
# 713 "data/maps/ParcelRoute1/scripts.pory"
	.string "A SURVEY BOARD at the bridge head. The\n"
	.string "bridge crosses the inlet where the\l"
	.string "saltmarsh meets the first fresh water,\l"
	.string "and everything that moves between the\l"
	.string "two moves under this deck.\p"
	.string "The Survey counts it from the rail at\n"
	.string "dusk. The count takes an hour and the\l"
	.string "bridge takes a minute, which is the\l"
	.string "whole trouble with bridges.$"

ParcelRoute1_Board8_Text_0:
# 718 "data/maps/ParcelRoute1/scripts.pory"
	.string "A SURVEY BOARD on the far bridge head.\n"
	.string "The inlet here is where the salt stops.\l"
	.string "The board gives the line as a date: the\l"
	.string "furthest upstream the Survey has\l"
	.string "tasted salt each spring.\p"
	.string "The dates are the same. The distances\n"
	.string "are not. Salt is a hundred paces further\l"
	.string "in than when the board was made.$"

ParcelRoute1_PairRail_Text_0:
# 725 "data/maps/ParcelRoute1/scripts.pory"
	.string "CADET: The inlet count's in the review.\n"
	.string "Mine. From this rail.$"

ParcelRoute1_PairRail_Text_1:
# 726 "data/maps/ParcelRoute1/scripts.pory"
	.string "FISHER: Who'd have thought a bridge\n"
	.string "could be a hide.$"

ParcelRoute1_PairRail_Text_2:
# 727 "data/maps/ParcelRoute1/scripts.pory"
	.string "CADET: You did. You said so.$"

ParcelRoute1_PairRail_Text_3:
# 728 "data/maps/ParcelRoute1/scripts.pory"
	.string "FISHER: I say a lot of things at dusk.\n"
	.string "Most of them aren't in a review.$"

ParcelRoute1_PairRail_Text_4:
# 730 "data/maps/ParcelRoute1/scripts.pory"
	.string "FISHER: The provisional came through\n"
	.string "this morning. Stood here half an hour.\l"
	.string "Didn't write anything.$"

ParcelRoute1_PairRail_Text_5:
# 731 "data/maps/ParcelRoute1/scripts.pory"
	.string "CADET: Then what was the point?$"

ParcelRoute1_PairRail_Text_6:
# 732 "data/maps/ParcelRoute1/scripts.pory"
	.string "FISHER: Looking. You write after you've\n"
	.string "looked. Most people do it the other way\l"
	.string "round and call it a survey.$"

ParcelRoute1_PairRail_Text_7:
# 734 "data/maps/ParcelRoute1/scripts.pory"
	.string "CADET: The briefing says count at dusk\n"
	.string "from the rail.$"

ParcelRoute1_PairRail_Text_8:
# 735 "data/maps/ParcelRoute1/scripts.pory"
	.string "FISHER: The briefing's right. First time\n"
	.string "for everything.$"

ParcelRoute1_PairRail_Text_9:
# 736 "data/maps/ParcelRoute1/scripts.pory"
	.string "CADET: What am I counting?$"

ParcelRoute1_PairRail_Text_10:
# 737 "data/maps/ParcelRoute1/scripts.pory"
	.string "FISHER: Whatever moves under the deck.\n"
	.string "Salt side to fresh side. If you only\l"
	.string "count what you know the name of, you'll\l"
	.string "miss the half that matters.$"

ParcelRoute1_PairStile_Text_0:
# 748 "data/maps/ParcelRoute1/scripts.pory"
	.string "HIKER: The crest's off the gate.$"

ParcelRoute1_PairStile_Text_1:
# 749 "data/maps/ParcelRoute1/scripts.pory"
	.string "RANGER: The crest's off the gate. The\n"
	.string "gate's still here. Gates were always the\l"
	.string "point. The crest was decoration.$"

ParcelRoute1_PairStile_Text_2:
# 750 "data/maps/ParcelRoute1/scripts.pory"
	.string "HIKER: Who manages it now?$"

ParcelRoute1_PairStile_Text_3:
# 751 "data/maps/ParcelRoute1/scripts.pory"
	.string "RANGER: The tide. Same as before.$"

ParcelRoute1_PairStile_Text_4:
# 753 "data/maps/ParcelRoute1/scripts.pory"
	.string "RANGER: A POLIWAG through the culvert\n"
	.string "the wrong way, and the provisional\l"
	.string "wrote it down instead of chasing it.$"

ParcelRoute1_PairStile_Text_5:
# 754 "data/maps/ParcelRoute1/scripts.pory"
	.string "HIKER: Is that the right thing?$"

ParcelRoute1_PairStile_Text_6:
# 755 "data/maps/ParcelRoute1/scripts.pory"
	.string "RANGER: It's the slow thing. Up here the\n"
	.string "slow thing and the right thing are\l"
	.string "usually the same thing.$"

ParcelRoute1_PairStile_Text_7:
# 757 "data/maps/ParcelRoute1/scripts.pory"
	.string "HIKER: The gate says managed access.\n"
	.string "Managed by whom?$"

ParcelRoute1_PairStile_Text_8:
# 758 "data/maps/ParcelRoute1/scripts.pory"
	.string "RANGER: By the crest.$"

ParcelRoute1_PairStile_Text_9:
# 759 "data/maps/ParcelRoute1/scripts.pory"
	.string "HIKER: Crests don't manage. People do.$"

ParcelRoute1_PairStile_Text_10:
# 760 "data/maps/ParcelRoute1/scripts.pory"
	.string "RANGER: Then by the people who own the\n"
	.string "crest, which is a longer answer and the\l"
	.string "same one.$"

ParcelRoute1_PairShore_Text_0:
# 769 "data/maps/ParcelRoute1/scripts.pory"
	.string "SAILOR: Ferry's on time. Catch is small\n"
	.string "and on time.$"

ParcelRoute1_PairShore_Text_1:
# 770 "data/maps/ParcelRoute1/scripts.pory"
	.string "WOMAN: You sound surprised.$"

ParcelRoute1_PairShore_Text_2:
# 771 "data/maps/ParcelRoute1/scripts.pory"
	.string "SAILOR: I've run this crossing twenty\n"
	.string "years. I've never once been on time\l"
	.string "because of less. Turns out that's how\l"
	.string "you do it.$"

ParcelRoute1_PairShore_Text_3:
# 773 "data/maps/ParcelRoute1/scripts.pory"
	.string "WOMAN: A provisional passed FOREST.\n"
	.string "First out of Saltwick in nine years.$"

ParcelRoute1_PairShore_Text_4:
# 774 "data/maps/ParcelRoute1/scripts.pory"
	.string "SAILOR: I carried them over. Didn't look\n"
	.string "like much.$"

ParcelRoute1_PairShore_Text_5:
# 775 "data/maps/ParcelRoute1/scripts.pory"
	.string "WOMAN: They never do. The ones that\n"
	.string "look like much go to the Foundation.$"

ParcelRoute1_PairShore_Text_6:
# 777 "data/maps/ParcelRoute1/scripts.pory"
	.string "SAILOR: Ferry's late because the catch\n"
	.string "was late because the fish were late.$"

ParcelRoute1_PairShore_Text_7:
# 778 "data/maps/ParcelRoute1/scripts.pory"
	.string "WOMAN: The fish aren't late. There are\n"
	.string "fewer.$"

ParcelRoute1_PairShore_Text_8:
# 779 "data/maps/ParcelRoute1/scripts.pory"
	.string "SAILOR: Same thing to a timetable.$"

ParcelRoute1_PairShore_Text_9:
# 780 "data/maps/ParcelRoute1/scripts.pory"
	.string "WOMAN: Not to a fish.$"
