ParcelIsle_MapScripts::
# 25 "data/maps/ParcelIsle/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelIsle_SetVisited
# 26 "data/maps/ParcelIsle/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelIsle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelIsle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 27 "data/maps/ParcelIsle/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelIsle_Arrival
	.2byte 0


ParcelIsle_SetVisited::
# 32 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_VISITED_PARCEL_ISLE
	end


ParcelIsle_Arrival::
# 38 "data/maps/ParcelIsle/scripts.pory"
	setvar VAR_TEMP_0, 1
# 39 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_ARRIVAL_INTRO, ParcelIsle_Arrival_2
# 42 "data/maps/ParcelIsle/scripts.pory"
	lockall
# 43 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 44 "data/maps/ParcelIsle/scripts.pory"
	delay 60
# 45 "data/maps/ParcelIsle/scripts.pory"
	applymovement 1, Movement_BramToJetty
# 46 "data/maps/ParcelIsle/scripts.pory"
	waitmovement 0
# 47 "data/maps/ParcelIsle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_FaceUp
# 48 "data/maps/ParcelIsle/scripts.pory"
	waitmovement 0
# 49 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Arrival_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Arrival_Text_1, MSGBOX_DEFAULT
# 51 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Arrival_Text_2, MSGBOX_DEFAULT
# 52 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 53 "data/maps/ParcelIsle/scripts.pory"
	applymovement 1, Movement_BramBack
# 54 "data/maps/ParcelIsle/scripts.pory"
	waitmovement 0
# 55 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALDMERE_ARRIVAL_INTRO
# 56 "data/maps/ParcelIsle/scripts.pory"
	releaseall
	end

ParcelIsle_Arrival_2:
	end


# 60 "data/maps/ParcelIsle/scripts.pory"
Movement_BramToJetty:
# 61 "data/maps/ParcelIsle/scripts.pory"
	walk_left
# 62 "data/maps/ParcelIsle/scripts.pory"
	walk_left
# 63 "data/maps/ParcelIsle/scripts.pory"
	walk_down
# 64 "data/maps/ParcelIsle/scripts.pory"
	walk_down
# 65 "data/maps/ParcelIsle/scripts.pory"
	walk_down
# 66 "data/maps/ParcelIsle/scripts.pory"
	step_end

# 69 "data/maps/ParcelIsle/scripts.pory"
Movement_BramBack:
# 70 "data/maps/ParcelIsle/scripts.pory"
	walk_up
# 71 "data/maps/ParcelIsle/scripts.pory"
	walk_up
# 72 "data/maps/ParcelIsle/scripts.pory"
	walk_up
# 73 "data/maps/ParcelIsle/scripts.pory"
	walk_right
# 74 "data/maps/ParcelIsle/scripts.pory"
	walk_right
# 75 "data/maps/ParcelIsle/scripts.pory"
	face_left
# 76 "data/maps/ParcelIsle/scripts.pory"
	step_end

# 79 "data/maps/ParcelIsle/scripts.pory"
Movement_FaceUp:
# 80 "data/maps/ParcelIsle/scripts.pory"
	face_up
# 81 "data/maps/ParcelIsle/scripts.pory"
	step_end

ParcelIsle_HeavyCoat::
# 89 "data/maps/ParcelIsle/scripts.pory"
	lock
# 90 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 91 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_HeavyCoat_2
# 93 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_HeavyCoat_3
# 96 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_2, MSGBOX_DEFAULT
ParcelIsle_HeavyCoat_1:
# 98 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_HeavyCoat_2:
# 92 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_HeavyCoat_1

ParcelIsle_HeavyCoat_3:
# 94 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_HeavyCoat_1


ParcelIsle_Fisher::
# 104 "data/maps/ParcelIsle/scripts.pory"
	lock
# 105 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 106 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_NET, ParcelIsle_Fisher_3
ParcelIsle_Fisher_1:
# 114 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Fisher_7
# 116 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Fisher_8
# 119 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_4, MSGBOX_DEFAULT
ParcelIsle_Fisher_6:
# 121 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Fisher_2:
# 107 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_0, MSGBOX_DEFAULT
# 108 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_1, MSGBOX_DEFAULT
# 109 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_OLD_ROD
# 110 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_ANNI_DONE
# 111 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Fisher_3:
# 106 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_ANNI_DONE, ParcelIsle_Fisher_2
	goto ParcelIsle_Fisher_1

ParcelIsle_Fisher_7:
# 115 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_Fisher_6

ParcelIsle_Fisher_8:
# 117 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_Fisher_6


ParcelIsle_Dockworker::
# 127 "data/maps/ParcelIsle/scripts.pory"
	lock
# 128 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 129 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelIsle_Dockworker_2
# 131 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Dockworker_3
# 133 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Dockworker_4
# 136 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_3, MSGBOX_DEFAULT
ParcelIsle_Dockworker_1:
# 138 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Dockworker_2:
# 130 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_Dockworker_1

ParcelIsle_Dockworker_3:
# 132 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Dockworker_1

ParcelIsle_Dockworker_4:
# 134 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_Dockworker_1


ParcelIsle_NetMender::
# 144 "data/maps/ParcelIsle/scripts.pory"
	lock
# 145 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 146 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_DONE, ParcelIsle_NetMender_2
# 155 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_NET, ParcelIsle_NetMender_5
# 160 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_NetMender_12
# 167 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_5, MSGBOX_DEFAULT
# 168 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_NetMender_2:
# 147 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_NetMender_8
# 150 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_1, MSGBOX_DEFAULT
ParcelIsle_NetMender_7:
# 152 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_NetMender_5:
# 156 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_2, MSGBOX_DEFAULT
# 157 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_NetMender_8:
# 148 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_NetMender_7

ParcelIsle_NetMender_12:
# 161 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_3, MSGBOX_DEFAULT
# 162 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_4, MSGBOX_DEFAULT
# 163 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_ANNI_NET
# 164 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_HarbourLad::
# 174 "data/maps/ParcelIsle/scripts.pory"
	lock
# 175 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 176 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ParcelIsle_HarbourLad_2
# 181 "data/maps/ParcelIsle/scripts.pory"
	release
# 182 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HARBOUR_LAD, ParcelIsle_HarbourLad_Text_1, ParcelIsle_HarbourLad_Text_2
# 185 "data/maps/ParcelIsle/scripts.pory"
	lock
# 186 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 187 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_HarbourLad_5
# 190 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HarbourLad_Text_4, MSGBOX_DEFAULT
ParcelIsle_HarbourLad_4:
# 192 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_HarbourLad_2:
# 177 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HarbourLad_Text_0, MSGBOX_DEFAULT
# 178 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_HarbourLad_5:
# 188 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HarbourLad_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_HarbourLad_4


ParcelIsle_Widow::
# 198 "data/maps/ParcelIsle/scripts.pory"
	lock
# 199 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 200 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGRUN_DONE, ParcelIsle_Widow_2
# 205 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGRUN, ParcelIsle_Widow_5
# 219 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_5, MSGBOX_YESNO
# 220 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelIsle_Widow_8
# 224 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_7, MSGBOX_DEFAULT
ParcelIsle_Widow_7:
# 226 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Widow_2:
# 201 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_0, MSGBOX_DEFAULT
# 202 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Widow_5:
# 206 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Widow_12
# 211 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Widow_13
# 214 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_4, MSGBOX_DEFAULT
ParcelIsle_Widow_11:
# 216 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Widow_8:
# 221 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_6, MSGBOX_DEFAULT
# 222 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SIGRUN
	goto ParcelIsle_Widow_7

ParcelIsle_Widow_12:
# 207 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_1, MSGBOX_DEFAULT
# 208 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_2, MSGBOX_DEFAULT
# 209 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 210 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SIGRUN_DONE
	goto ParcelIsle_Widow_11

ParcelIsle_Widow_13:
# 212 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_Widow_11


ParcelIsle_FerrySign::
# 231 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_FerrySign_2
# 234 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerrySign_Text_1, MSGBOX_SIGN
ParcelIsle_FerrySign_1:
	end

ParcelIsle_FerrySign_2:
# 232 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerrySign_Text_0, MSGBOX_SIGN
	goto ParcelIsle_FerrySign_1


ParcelIsle_FerryCaptain::
# 242 "data/maps/ParcelIsle/scripts.pory"
	lock
# 243 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 244 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_HIGHLAND_CERT, ParcelIsle_FerryCaptain_2
# 249 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_1, MSGBOX_DEFAULT
# 250 "data/maps/ParcelIsle/scripts.pory"
	multichoice 1, 1, MULTI_SKALD_FERRY, FALSE
# 251 "data/maps/ParcelIsle/scripts.pory"
	switch VAR_RESULT
# 252 "data/maps/ParcelIsle/scripts.pory"
	case 0, ParcelIsle_FerryCaptain_6
# 259 "data/maps/ParcelIsle/scripts.pory"
	case 1, ParcelIsle_FerryCaptain_7
# 271 "data/maps/ParcelIsle/scripts.pory"
	case 2, ParcelIsle_FerryCaptain_8
# 284 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_4, MSGBOX_DEFAULT
# 285 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_2:
# 245 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_0, MSGBOX_DEFAULT
# 246 "data/maps/ParcelIsle/scripts.pory"
	release
	end

	end

ParcelIsle_FerryCaptain_6:
# 253 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 254 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 255 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 256 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_DELIBIRD, 9, 22
# 257 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_7:
# 260 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_DELIBIRD_ARRIVAL, ParcelIsle_FerryCaptain_11
# 265 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 266 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 267 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 268 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_COAST, 30, 55
# 269 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_8:
# 272 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_COASTAL_CERT, ParcelIsle_FerryCaptain_14
# 277 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 278 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 279 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 280 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_WEATHER, 9, 34
# 281 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_11:
# 261 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_2, MSGBOX_DEFAULT
# 262 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_14:
# 273 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_3, MSGBOX_DEFAULT
# 274 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_GateMoore::
# 293 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GATE_ISLE, ParcelIsle_GateMoore_Text_0, ParcelIsle_GateMoore_Text_1, ParcelIsle_GateMoore_Defeated
# 297 "data/maps/ParcelIsle/scripts.pory"
	lock
# 298 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 299 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_GateMoore_Text_2, MSGBOX_DEFAULT
# 300 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_GateMoore_Defeated::
# 305 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_ISLE
# 306 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_GateMoore_Defeated_Text_0, MSGBOX_DEFAULT
# 307 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_ItemNetBall::
# 312 "data/maps/ParcelIsle/scripts.pory"
	finditem ITEM_NET_BALL
	end


ParcelIsle_LogisticsClerk::
# 322 "data/maps/ParcelIsle/scripts.pory"
	lock
# 323 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 324 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_LogisticsClerk_2
# 326 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelIsle_LogisticsClerk_3
# 328 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_LogisticsClerk_4
# 331 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_3, MSGBOX_DEFAULT
ParcelIsle_LogisticsClerk_1:
# 333 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_LogisticsClerk_2:
# 325 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_LogisticsClerk_1

ParcelIsle_LogisticsClerk_3:
# 327 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_LogisticsClerk_1

ParcelIsle_LogisticsClerk_4:
# 329 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_LogisticsClerk_1


ParcelIsle_KidA::
# 339 "data/maps/ParcelIsle/scripts.pory"
	lock
# 340 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 341 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_KidA_2
# 343 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_BRIDGE_SCENE, ParcelIsle_KidA_3
# 346 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidA_Text_2, MSGBOX_DEFAULT
ParcelIsle_KidA_1:
# 348 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_KidA_2:
# 342 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidA_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_KidA_1

ParcelIsle_KidA_3:
# 344 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidA_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_KidA_1


ParcelIsle_KidB::
# 353 "data/maps/ParcelIsle/scripts.pory"
	lock
# 354 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 355 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_KidB_2
# 357 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_BRIDGE_SCENE, ParcelIsle_KidB_3
# 360 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidB_Text_2, MSGBOX_DEFAULT
ParcelIsle_KidB_1:
# 362 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_KidB_2:
# 356 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidB_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_KidB_1

ParcelIsle_KidB_3:
# 358 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidB_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_KidB_1


ParcelIsle_OldMan::
# 368 "data/maps/ParcelIsle/scripts.pory"
	lock
# 369 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 370 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_OldMan_2
# 372 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_OldMan_3
# 375 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_2, MSGBOX_DEFAULT
ParcelIsle_OldMan_1:
# 377 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_OldMan_2:
# 371 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_OldMan_1

ParcelIsle_OldMan_3:
# 373 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_OldMan_1


ParcelIsle_Birder::
# 383 "data/maps/ParcelIsle/scripts.pory"
	lock
# 384 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 385 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BIRDER_DONE, ParcelIsle_Birder_2
# 394 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_ARRIVAL, ParcelIsle_Birder_5
# 406 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Birder_12
# 409 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_6, MSGBOX_DEFAULT
ParcelIsle_Birder_11:
# 411 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Birder_2:
# 386 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Birder_8
# 389 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_1, MSGBOX_DEFAULT
ParcelIsle_Birder_7:
# 391 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Birder_5:
# 395 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_2, MSGBOX_YESNO
# 396 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelIsle_Birder_16
# 401 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_4, MSGBOX_DEFAULT
ParcelIsle_Birder_15:
# 403 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Birder_8:
# 387 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_Birder_7

ParcelIsle_Birder_12:
# 407 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_5, MSGBOX_DEFAULT
	goto ParcelIsle_Birder_11

ParcelIsle_Birder_16:
# 397 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_3, MSGBOX_DEFAULT
# 398 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 399 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_BIRDER_DONE
	goto ParcelIsle_Birder_15


ParcelIsle_KidTrainer::
# 416 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_KID, ParcelIsle_KidTrainer_Text_0, ParcelIsle_KidTrainer_Text_1
# 419 "data/maps/ParcelIsle/scripts.pory"
	lock
# 420 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 421 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_KidTrainer_2
# 424 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidTrainer_Text_3, MSGBOX_DEFAULT
ParcelIsle_KidTrainer_1:
# 426 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_KidTrainer_2:
# 422 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidTrainer_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_KidTrainer_1


ParcelIsle_TownSign::
# 431 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_TownSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_Neighbor::
# 441 "data/maps/ParcelIsle/scripts.pory"
	lock
# 442 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 443 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Neighbor_2
# 445 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_LAB_SEEN, ParcelIsle_Neighbor_3
# 448 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_2, MSGBOX_DEFAULT
# 449 "data/maps/ParcelIsle/scripts.pory"
	applymovement 4, Movement_GlanceAway
# 450 "data/maps/ParcelIsle/scripts.pory"
	waitmovement 0
# 451 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_3, MSGBOX_DEFAULT
ParcelIsle_Neighbor_1:
# 453 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Neighbor_2:
# 444 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_Neighbor_1

ParcelIsle_Neighbor_3:
# 446 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Neighbor_1


# 457 "data/maps/ParcelIsle/scripts.pory"
Movement_GlanceAway:
# 458 "data/maps/ParcelIsle/scripts.pory"
	face_right
# 459 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 460 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 461 "data/maps/ParcelIsle/scripts.pory"
	step_end

ParcelIsle_Innkeeper::
# 466 "data/maps/ParcelIsle/scripts.pory"
	lock
# 467 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 468 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Innkeeper_2
# 470 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Innkeeper_3
# 473 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Innkeeper_Text_2, MSGBOX_DEFAULT
ParcelIsle_Innkeeper_1:
# 475 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Innkeeper_2:
# 469 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Innkeeper_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_Innkeeper_1

ParcelIsle_Innkeeper_3:
# 471 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Innkeeper_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Innkeeper_1


ParcelIsle_ChandlerBrother::
# 481 "data/maps/ParcelIsle/scripts.pory"
	lock
# 482 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 483 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_ChandlerBrother_2
# 485 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_ChandlerBrother_3
# 488 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ChandlerBrother_Text_2, MSGBOX_DEFAULT
ParcelIsle_ChandlerBrother_1:
# 490 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_ChandlerBrother_2:
# 484 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ChandlerBrother_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_ChandlerBrother_1

ParcelIsle_ChandlerBrother_3:
# 486 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ChandlerBrother_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_ChandlerBrother_1


ParcelIsle_ItemPotion::
# 495 "data/maps/ParcelIsle/scripts.pory"
	finditem ITEM_POTION
	end


ParcelIsle_LabSign::
# 500 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LabSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_HallSign::
# 505 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HallSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_NoticeBoard::
# 510 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_NoticeBoard_2
# 512 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_NoticeBoard_3
# 515 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NoticeBoard_Text_2, MSGBOX_SIGN
ParcelIsle_NoticeBoard_1:
	end

ParcelIsle_NoticeBoard_2:
# 511 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NoticeBoard_Text_0, MSGBOX_SIGN
	goto ParcelIsle_NoticeBoard_1

ParcelIsle_NoticeBoard_3:
# 513 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NoticeBoard_Text_1, MSGBOX_SIGN
	goto ParcelIsle_NoticeBoard_1


ParcelIsle_WeatherStationSign::
# 521 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_WeatherStationSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_PreserveGateSign::
# 526 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PreserveGateSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_CenterAide::
# 535 "data/maps/ParcelIsle/scripts.pory"
	lock
# 536 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 537 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_CenterAide_Text_0, MSGBOX_DEFAULT
# 538 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Brand::
# 544 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ISLE_BRAND, ParcelIsle_T_Brand_Text_0, ParcelIsle_T_Brand_Text_1, ParcelIsle_T_Brand_FirstWin
# 548 "data/maps/ParcelIsle/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 549 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelIsle_T_Brand_3
ParcelIsle_T_Brand_1:
# 552 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelIsle_T_Brand_8
ParcelIsle_T_Brand_6:
# 555 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelIsle_T_Brand_13
ParcelIsle_T_Brand_11:
# 558 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelIsle_T_Brand_18
ParcelIsle_T_Brand_16:
# 561 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_Text_2, MSGBOX_DEFAULT
	end

ParcelIsle_T_Brand_2:
# 550 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Brand_R2
	goto ParcelIsle_T_Brand_1

ParcelIsle_T_Brand_3:
# 549 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_BRAND_R2
	goto_if 0, ParcelIsle_T_Brand_2
	goto ParcelIsle_T_Brand_1

ParcelIsle_T_Brand_7:
# 553 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Brand_R3
	goto ParcelIsle_T_Brand_6

ParcelIsle_T_Brand_8:
# 552 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_BRAND_R3
	goto_if 0, ParcelIsle_T_Brand_7
	goto ParcelIsle_T_Brand_6

ParcelIsle_T_Brand_12:
# 556 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Brand_R4
	goto ParcelIsle_T_Brand_11

ParcelIsle_T_Brand_13:
# 555 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_BRAND_R4
	goto_if 0, ParcelIsle_T_Brand_12
	goto ParcelIsle_T_Brand_11

ParcelIsle_T_Brand_17:
# 559 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Brand_R5
	goto ParcelIsle_T_Brand_16

ParcelIsle_T_Brand_18:
# 558 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_BRAND_R5
	goto_if 0, ParcelIsle_T_Brand_17
	goto ParcelIsle_T_Brand_16


ParcelIsle_T_Brand_FirstWin::
# 565 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_Text_2, MSGBOX_DEFAULT
# 566 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Brand_R2::
# 570 "data/maps/ParcelIsle/scripts.pory"
	lock
# 571 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 572 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_0, MSGBOX_YESNO
# 573 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Brand_R2_2
# 578 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_BRAND_R2, ParcelIsle_T_Brand_R2_Text_2
# 579 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_3, MSGBOX_DEFAULT
# 580 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Brand_R2_2:
# 574 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_1, MSGBOX_DEFAULT
# 575 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Brand_R3::
# 584 "data/maps/ParcelIsle/scripts.pory"
	lock
# 585 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 586 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R3_Text_0, MSGBOX_YESNO
# 587 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Brand_R3_2
# 592 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_BRAND_R3, ParcelIsle_T_Brand_R2_Text_2
# 593 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R3_Text_1, MSGBOX_DEFAULT
# 594 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Brand_R3_2:
# 588 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_1, MSGBOX_DEFAULT
# 589 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Brand_R4::
# 598 "data/maps/ParcelIsle/scripts.pory"
	lock
# 599 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 600 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R4_Text_0, MSGBOX_YESNO
# 601 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Brand_R4_2
# 606 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_BRAND_R4, ParcelIsle_T_Brand_R4_Text_1
# 607 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R4_Text_2, MSGBOX_DEFAULT
# 608 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Brand_R4_2:
# 602 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_1, MSGBOX_DEFAULT
# 603 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Brand_R5::
# 612 "data/maps/ParcelIsle/scripts.pory"
	lock
# 613 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 614 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R5_Text_0, MSGBOX_YESNO
# 615 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Brand_R5_2
# 620 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_BRAND_R5, ParcelIsle_T_Brand_R5_Text_1
# 621 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R5_Text_2, MSGBOX_DEFAULT
# 622 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Brand_R5_2:
# 616 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_1, MSGBOX_DEFAULT
# 617 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Svein::
# 626 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ISLE_SVEIN, ParcelIsle_T_Svein_Text_0, ParcelIsle_T_Svein_Text_1, ParcelIsle_T_Svein_FirstWin
# 630 "data/maps/ParcelIsle/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 631 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelIsle_T_Svein_3
ParcelIsle_T_Svein_1:
# 634 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelIsle_T_Svein_8
ParcelIsle_T_Svein_6:
# 637 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelIsle_T_Svein_13
ParcelIsle_T_Svein_11:
# 640 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelIsle_T_Svein_18
ParcelIsle_T_Svein_16:
# 643 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_Text_2, MSGBOX_DEFAULT
	end

ParcelIsle_T_Svein_2:
# 632 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Svein_R2
	goto ParcelIsle_T_Svein_1

ParcelIsle_T_Svein_3:
# 631 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_SVEIN_R2
	goto_if 0, ParcelIsle_T_Svein_2
	goto ParcelIsle_T_Svein_1

ParcelIsle_T_Svein_7:
# 635 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Svein_R3
	goto ParcelIsle_T_Svein_6

ParcelIsle_T_Svein_8:
# 634 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_SVEIN_R3
	goto_if 0, ParcelIsle_T_Svein_7
	goto ParcelIsle_T_Svein_6

ParcelIsle_T_Svein_12:
# 638 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Svein_R4
	goto ParcelIsle_T_Svein_11

ParcelIsle_T_Svein_13:
# 637 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_SVEIN_R4
	goto_if 0, ParcelIsle_T_Svein_12
	goto ParcelIsle_T_Svein_11

ParcelIsle_T_Svein_17:
# 641 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Svein_R5
	goto ParcelIsle_T_Svein_16

ParcelIsle_T_Svein_18:
# 640 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_SVEIN_R5
	goto_if 0, ParcelIsle_T_Svein_17
	goto ParcelIsle_T_Svein_16


ParcelIsle_T_Svein_FirstWin::
# 647 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_Text_2, MSGBOX_DEFAULT
# 648 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Svein_R2::
# 652 "data/maps/ParcelIsle/scripts.pory"
	lock
# 653 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 654 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_0, MSGBOX_YESNO
# 655 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Svein_R2_2
# 660 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_SVEIN_R2, ParcelIsle_T_Svein_R2_Text_2
# 661 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_3, MSGBOX_DEFAULT
# 662 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Svein_R2_2:
# 656 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_1, MSGBOX_DEFAULT
# 657 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Svein_R3::
# 666 "data/maps/ParcelIsle/scripts.pory"
	lock
# 667 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 668 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R3_Text_0, MSGBOX_YESNO
# 669 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Svein_R3_2
# 674 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_SVEIN_R3, ParcelIsle_T_Svein_R3_Text_1
# 675 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R3_Text_2, MSGBOX_DEFAULT
# 676 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Svein_R3_2:
# 670 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_1, MSGBOX_DEFAULT
# 671 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Svein_R4::
# 680 "data/maps/ParcelIsle/scripts.pory"
	lock
# 681 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 682 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R4_Text_0, MSGBOX_YESNO
# 683 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Svein_R4_2
# 688 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_SVEIN_R4, ParcelIsle_T_Svein_R2_Text_2
# 689 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R4_Text_1, MSGBOX_DEFAULT
# 690 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Svein_R4_2:
# 684 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_1, MSGBOX_DEFAULT
# 685 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Svein_R5::
# 694 "data/maps/ParcelIsle/scripts.pory"
	lock
# 695 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 696 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R5_Text_0, MSGBOX_YESNO
# 697 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Svein_R5_2
# 702 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_SVEIN_R5, ParcelIsle_T_Svein_R3_Text_1
# 703 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R5_Text_1, MSGBOX_DEFAULT
# 704 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Svein_R5_2:
# 698 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_1, MSGBOX_DEFAULT
# 699 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Tora::
# 708 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ISLE_TORA, ParcelIsle_T_Tora_Text_0, ParcelIsle_T_Tora_Text_1, ParcelIsle_T_Tora_FirstWin
# 712 "data/maps/ParcelIsle/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 713 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelIsle_T_Tora_3
ParcelIsle_T_Tora_1:
# 716 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelIsle_T_Tora_8
ParcelIsle_T_Tora_6:
# 719 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelIsle_T_Tora_13
ParcelIsle_T_Tora_11:
# 722 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelIsle_T_Tora_18
ParcelIsle_T_Tora_16:
# 725 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_Text_2, MSGBOX_DEFAULT
	end

ParcelIsle_T_Tora_2:
# 714 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Tora_R2
	goto ParcelIsle_T_Tora_1

ParcelIsle_T_Tora_3:
# 713 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_TORA_R2
	goto_if 0, ParcelIsle_T_Tora_2
	goto ParcelIsle_T_Tora_1

ParcelIsle_T_Tora_7:
# 717 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Tora_R3
	goto ParcelIsle_T_Tora_6

ParcelIsle_T_Tora_8:
# 716 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_TORA_R3
	goto_if 0, ParcelIsle_T_Tora_7
	goto ParcelIsle_T_Tora_6

ParcelIsle_T_Tora_12:
# 720 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Tora_R4
	goto ParcelIsle_T_Tora_11

ParcelIsle_T_Tora_13:
# 719 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_TORA_R4
	goto_if 0, ParcelIsle_T_Tora_12
	goto ParcelIsle_T_Tora_11

ParcelIsle_T_Tora_17:
# 723 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Tora_R5
	goto ParcelIsle_T_Tora_16

ParcelIsle_T_Tora_18:
# 722 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_TORA_R5
	goto_if 0, ParcelIsle_T_Tora_17
	goto ParcelIsle_T_Tora_16


ParcelIsle_T_Tora_FirstWin::
# 729 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_Text_2, MSGBOX_DEFAULT
# 730 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Tora_R2::
# 734 "data/maps/ParcelIsle/scripts.pory"
	lock
# 735 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 736 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_0, MSGBOX_YESNO
# 737 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Tora_R2_2
# 742 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_TORA_R2, ParcelIsle_T_Tora_R2_Text_2
# 743 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_3, MSGBOX_DEFAULT
# 744 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Tora_R2_2:
# 738 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_1, MSGBOX_DEFAULT
# 739 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Tora_R3::
# 748 "data/maps/ParcelIsle/scripts.pory"
	lock
# 749 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 750 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R3_Text_0, MSGBOX_YESNO
# 751 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Tora_R3_2
# 756 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_TORA_R3, ParcelIsle_T_Tora_R3_Text_1
# 757 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R3_Text_2, MSGBOX_DEFAULT
# 758 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Tora_R3_2:
# 752 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_1, MSGBOX_DEFAULT
# 753 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Tora_R4::
# 762 "data/maps/ParcelIsle/scripts.pory"
	lock
# 763 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 764 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R4_Text_0, MSGBOX_YESNO
# 765 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Tora_R4_2
# 770 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_TORA_R4, ParcelIsle_T_Tora_R4_Text_1
# 771 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R4_Text_2, MSGBOX_DEFAULT
# 772 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Tora_R4_2:
# 766 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_1, MSGBOX_DEFAULT
# 767 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Tora_R5::
# 776 "data/maps/ParcelIsle/scripts.pory"
	lock
# 777 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 778 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R5_Text_0, MSGBOX_YESNO
# 779 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Tora_R5_2
# 784 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_TORA_R5, ParcelIsle_T_Tora_R5_Text_1
# 785 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R5_Text_2, MSGBOX_DEFAULT
# 786 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Tora_R5_2:
# 780 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_1, MSGBOX_DEFAULT
# 781 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Jon::
# 790 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ISLE_JON, ParcelIsle_T_Jon_Text_0, ParcelIsle_T_Jon_Text_1, ParcelIsle_T_Jon_FirstWin
# 794 "data/maps/ParcelIsle/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 795 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelIsle_T_Jon_3
ParcelIsle_T_Jon_1:
# 798 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelIsle_T_Jon_8
ParcelIsle_T_Jon_6:
# 801 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelIsle_T_Jon_13
ParcelIsle_T_Jon_11:
# 804 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelIsle_T_Jon_18
ParcelIsle_T_Jon_16:
# 807 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_Text_2, MSGBOX_DEFAULT
	end

ParcelIsle_T_Jon_2:
# 796 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Jon_R2
	goto ParcelIsle_T_Jon_1

ParcelIsle_T_Jon_3:
# 795 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_JON_R2
	goto_if 0, ParcelIsle_T_Jon_2
	goto ParcelIsle_T_Jon_1

ParcelIsle_T_Jon_7:
# 799 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Jon_R3
	goto ParcelIsle_T_Jon_6

ParcelIsle_T_Jon_8:
# 798 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_JON_R3
	goto_if 0, ParcelIsle_T_Jon_7
	goto ParcelIsle_T_Jon_6

ParcelIsle_T_Jon_12:
# 802 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Jon_R4
	goto ParcelIsle_T_Jon_11

ParcelIsle_T_Jon_13:
# 801 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_JON_R4
	goto_if 0, ParcelIsle_T_Jon_12
	goto ParcelIsle_T_Jon_11

ParcelIsle_T_Jon_17:
# 805 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Jon_R5
	goto ParcelIsle_T_Jon_16

ParcelIsle_T_Jon_18:
# 804 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_JON_R5
	goto_if 0, ParcelIsle_T_Jon_17
	goto ParcelIsle_T_Jon_16


ParcelIsle_T_Jon_FirstWin::
# 811 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_Text_2, MSGBOX_DEFAULT
# 812 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Jon_R2::
# 816 "data/maps/ParcelIsle/scripts.pory"
	lock
# 817 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 818 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_0, MSGBOX_YESNO
# 819 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Jon_R2_2
# 824 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_JON_R2, ParcelIsle_T_Jon_R2_Text_2
# 825 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_3, MSGBOX_DEFAULT
# 826 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Jon_R2_2:
# 820 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_1, MSGBOX_DEFAULT
# 821 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Jon_R3::
# 830 "data/maps/ParcelIsle/scripts.pory"
	lock
# 831 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 832 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R3_Text_0, MSGBOX_YESNO
# 833 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Jon_R3_2
# 838 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_JON_R3, ParcelIsle_T_Jon_R3_Text_1
# 839 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R3_Text_2, MSGBOX_DEFAULT
# 840 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Jon_R3_2:
# 834 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_1, MSGBOX_DEFAULT
# 835 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Jon_R4::
# 844 "data/maps/ParcelIsle/scripts.pory"
	lock
# 845 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 846 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R4_Text_0, MSGBOX_YESNO
# 847 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Jon_R4_2
# 852 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_JON_R4, ParcelIsle_T_Jon_R3_Text_1
# 853 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R4_Text_1, MSGBOX_DEFAULT
# 854 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Jon_R4_2:
# 848 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_1, MSGBOX_DEFAULT
# 849 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Jon_R5::
# 858 "data/maps/ParcelIsle/scripts.pory"
	lock
# 859 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 860 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R5_Text_0, MSGBOX_YESNO
# 861 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Jon_R5_2
# 866 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_JON_R5, ParcelIsle_T_Jon_R5_Text_1
# 867 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R5_Text_2, MSGBOX_DEFAULT
# 868 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Jon_R5_2:
# 862 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_1, MSGBOX_DEFAULT
# 863 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Line::
# 872 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ISLE_LINE, ParcelIsle_T_Line_Text_0, ParcelIsle_T_Line_Text_1, ParcelIsle_T_Line_FirstWin
# 876 "data/maps/ParcelIsle/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 877 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelIsle_T_Line_3
ParcelIsle_T_Line_1:
# 880 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelIsle_T_Line_8
ParcelIsle_T_Line_6:
# 883 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelIsle_T_Line_13
ParcelIsle_T_Line_11:
# 886 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelIsle_T_Line_18
ParcelIsle_T_Line_16:
# 889 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_Text_2, MSGBOX_DEFAULT
	end

ParcelIsle_T_Line_2:
# 878 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Line_R2
	goto ParcelIsle_T_Line_1

ParcelIsle_T_Line_3:
# 877 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_LINE_R2
	goto_if 0, ParcelIsle_T_Line_2
	goto ParcelIsle_T_Line_1

ParcelIsle_T_Line_7:
# 881 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Line_R3
	goto ParcelIsle_T_Line_6

ParcelIsle_T_Line_8:
# 880 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_LINE_R3
	goto_if 0, ParcelIsle_T_Line_7
	goto ParcelIsle_T_Line_6

ParcelIsle_T_Line_12:
# 884 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Line_R4
	goto ParcelIsle_T_Line_11

ParcelIsle_T_Line_13:
# 883 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_LINE_R4
	goto_if 0, ParcelIsle_T_Line_12
	goto ParcelIsle_T_Line_11

ParcelIsle_T_Line_17:
# 887 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Line_R5
	goto ParcelIsle_T_Line_16

ParcelIsle_T_Line_18:
# 886 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_LINE_R5
	goto_if 0, ParcelIsle_T_Line_17
	goto ParcelIsle_T_Line_16


ParcelIsle_T_Line_FirstWin::
# 893 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_Text_2, MSGBOX_DEFAULT
# 894 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Line_R2::
# 898 "data/maps/ParcelIsle/scripts.pory"
	lock
# 899 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 900 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_0, MSGBOX_YESNO
# 901 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Line_R2_2
# 906 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_LINE_R2, ParcelIsle_T_Line_R2_Text_2
# 907 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_3, MSGBOX_DEFAULT
# 908 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Line_R2_2:
# 902 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_1, MSGBOX_DEFAULT
# 903 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Line_R3::
# 912 "data/maps/ParcelIsle/scripts.pory"
	lock
# 913 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 914 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R3_Text_0, MSGBOX_YESNO
# 915 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Line_R3_2
# 920 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_LINE_R3, ParcelIsle_T_Line_R2_Text_2
# 921 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R3_Text_1, MSGBOX_DEFAULT
# 922 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Line_R3_2:
# 916 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_1, MSGBOX_DEFAULT
# 917 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Line_R4::
# 926 "data/maps/ParcelIsle/scripts.pory"
	lock
# 927 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 928 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R4_Text_0, MSGBOX_YESNO
# 929 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Line_R4_2
# 934 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_LINE_R4, ParcelIsle_T_Line_R4_Text_1
# 935 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R4_Text_2, MSGBOX_DEFAULT
# 936 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Line_R4_2:
# 930 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_1, MSGBOX_DEFAULT
# 931 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Line_R5::
# 940 "data/maps/ParcelIsle/scripts.pory"
	lock
# 941 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 942 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R5_Text_0, MSGBOX_YESNO
# 943 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Line_R5_2
# 948 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_LINE_R5, ParcelIsle_T_Line_R5_Text_1
# 949 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R5_Text_2, MSGBOX_DEFAULT
# 950 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Line_R5_2:
# 944 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_1, MSGBOX_DEFAULT
# 945 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_Arrival_Text_0:
# 49 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAM: Hey! You're the mainlander, right?\n"
	.string "WREN?\p"
	.string "Knew it. Nobody else gets off at this\n"
	.string "stop.$"

ParcelIsle_Arrival_Text_1:
# 50 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAM: Listen. The inn's up the lane,\n"
	.string "past the POKéMON CENTER. Look for the\l"
	.string "door with the lamp lit.\p"
	.string "And watch your step on the boards.\n"
	.string "They're slick when the fog rolls in.$"

ParcelIsle_Arrival_Text_2:
# 51 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAM: Questions? Save them for\n"
	.string "tomorrow. Around here, nobody answers\l"
	.string "anything after dark.$"

ParcelIsle_HeavyCoat_Text_0:
# 92 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAM: The schedule board's got a date\n"
	.string "on it again. First time in a year!\p"
	.string "I'd say things are looking up, but I've\n"
	.string "been wrong before.$"

ParcelIsle_HeavyCoat_Text_1:
# 94 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAM: So you're a RANGER now.\n"
	.string "Provisional, but still.\p"
	.string "Take it from a ferry hand: the knot on\n"
	.string "your pack means more around here than\l"
	.string "the badge does.$"

ParcelIsle_HeavyCoat_Text_2:
# 96 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAM: The inn's up the lane, past the\n"
	.string "POKéMON CENTER. Door with the lamp.\p"
	.string "The RANGERS are past the north gate, if\n"
	.string "that's who you're here for. Rin usually\l"
	.string "leaves it open.$"

ParcelIsle_Fisher_Text_0:
# 107 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: That's my net! Only ANNI doubles\n"
	.string "the edge like that.\p"
	.string "She sent you all the way down here?\n"
	.string "Then she likes you. She doesn't like\l"
	.string "anybody.$"

ParcelIsle_Fisher_Text_1:
# 108 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: Here, take my spare rod. It's old,\n"
	.string "but it knows this water.\p"
	.string "Throw the little ones back, okay?\n"
	.string "There's fewer every year.$"

ParcelIsle_Fisher_Text_2:
# 115 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: They have to count the fish\n"
	.string "properly now. In front of people!\p"
	.string "Forty years I counted for nobody.\n"
	.string "Funny to be right and hate it.$"

ParcelIsle_Fisher_Text_3:
# 117 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: The herring came in thin this\n"
	.string "week. Thin and early.\p"
	.string "That's not a season. That's a symptom.\n"
	.string "You're the RANGER, you tell me the word\l"
	.string "for it.$"

ParcelIsle_Fisher_Text_4:
# 119 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: The currents have been wrong\n"
	.string "for weeks. The fish know it before we\l"
	.string "do.\p"
	.string "You didn't hear that from me.$"

ParcelIsle_Dockworker_Text_0:
# 130 "data/maps/ParcelIsle/scripts.pory"
	.string "ROLF: Eighteen months of delay, they're\n"
	.string "saying. You know what eighteen months\l"
	.string "is to a guy on a day rate?\p"
	.string "I'm not saying you're wrong. ANNI read\n"
	.string "me the frog part. I'm saying it's easy to\l"
	.string "be right when it's not your boat.$"

ParcelIsle_Dockworker_Text_1:
# 132 "data/maps/ParcelIsle/scripts.pory"
	.string "ROLF: Boat's not late today. Boat's not\n"
	.string "coming. The office says 'pending\l"
	.string "review'.\p"
	.string "That your review? Yeah. Thought so.$"

ParcelIsle_Dockworker_Text_2:
# 134 "data/maps/ParcelIsle/scripts.pory"
	.string "ROLF: The crest on the crates is the\n"
	.string "crest on my paycheck. Same one that's\l"
	.string "on the RANGERS' gear, come to think of\l"
	.string "it.\p"
	.string "Funny what you stop noticing.$"

ParcelIsle_Dockworker_Text_3:
# 136 "data/maps/ParcelIsle/scripts.pory"
	.string "ROLF: Boat's late. Boat's always late\n"
	.string "now.\p"
	.string "If you want work, there's a board by the\n"
	.string "inn. Mostly it says 'no'.$"

ParcelIsle_NetMender_Text_0:
# 148 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: ROLF had me read him your report.\n"
	.string "The frog part, twice.\p"
	.string "He didn't say anything after. For ROLF,\n"
	.string "that's a speech.$"

ParcelIsle_NetMender_Text_1:
# 150 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: TOBIN gave you his rod? He's\n"
	.string "never lent that to anyone!\p"
	.string "Go fish the inlet. Tell me if the\n"
	.string "MAGIKARP are still in there. They used\l"
	.string "to be so thick you could walk across.$"

ParcelIsle_NetMender_Text_2:
# 156 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: TOBIN's at the end of the jetty,\n"
	.string "on the platform. He won't come up. Says\l"
	.string "the town's gone strange.\p"
	.string "He's right, but the net still needs\n"
	.string "carrying.$"

ParcelIsle_NetMender_Text_3:
# 161 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: You're the new RANGER, right?\n"
	.string "Good, you can carry things.\p"
	.string "This net's mended and TOBIN's is torn.\n"
	.string "My knees don't do the jetty anymore.$"

ParcelIsle_NetMender_Text_4:
# 162 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: Take it down to him. End of the\n"
	.string "jetty, the grumpy one.\p"
	.string "Tell him the edge is doubled. He'll know\n"
	.string "whose it is.$"

ParcelIsle_NetMender_Text_5:
# 167 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: Nets don't tear like they used to.\n"
	.string "Nothing in them heavy enough to tear\l"
	.string "them.\p"
	.string "Don't write that down. It's not a fact.\n"
	.string "It's just true.$"

ParcelIsle_HarbourLad_Text_0:
# 177 "data/maps/ParcelIsle/scripts.pory"
	.string "KIP: You got off the ferry with a bag\n"
	.string "and no POKéMON? Not even one?\p"
	.string "Come back when you've got something.\n"
	.string "Then we'll see.$"

ParcelIsle_HarbourLad_Text_1:
# 183 "data/maps/ParcelIsle/scripts.pory"
	.string "KIP: Hey, mainlander! Bet you can't beat\n"
	.string "my KRABBY.\p"
	.string "The whole channel used to be full of\n"
	.string "them!$"

ParcelIsle_HarbourLad_Text_2:
# 184 "data/maps/ParcelIsle/scripts.pory"
	.string "KIP: Used to be. Yeah.$"

ParcelIsle_HarbourLad_Text_3:
# 188 "data/maps/ParcelIsle/scripts.pory"
	.string "KIP: My dad says you cost him his berth.\n"
	.string "My mom says you saved the channel.\p"
	.string "They had that fight at dinner. I ate in\n"
	.string "the loft.$"

ParcelIsle_HarbourLad_Text_4:
# 190 "data/maps/ParcelIsle/scripts.pory"
	.string "KIP: There were dozens of KRABBY under\n"
	.string "the jetty when I was little. Now I have\l"
	.string "to go out to the rocks to find one.\p"
	.string "I'm not sad about it. I'm just saying\n"
	.string "where they went.$"

ParcelIsle_Widow_Text_0:
# 201 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Eleven this morning. I still\n"
	.string "count them. It's how I say good morning\l"
	.string "to someone who isn't here.$"

ParcelIsle_Widow_Text_1:
# 207 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: You put the gulls in your\n"
	.string "report. The actual gulls!\p"
	.string "My EIRIK would have liked that. He\n"
	.string "never trusted a number he hadn't\l"
	.string "counted himself.$"

ParcelIsle_Widow_Text_2:
# 208 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: This was his. It's the only\n"
	.string "thing on the boat the sea didn't take.\p"
	.string "It should go to someone who counts.$"

ParcelIsle_Widow_Text_3:
# 212 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Nine today. When EIRIK still\n"
	.string "fished there were forty on these racks.\l"
	.string "Forty!\p"
	.string "Write that down. Nine. Somebody should\n"
	.string "have the number besides me.$"

ParcelIsle_Widow_Text_4:
# 214 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Twelve this morning. Come back\n"
	.string "another day and I'll give you the next\l"
	.string "one.\p"
	.string "A number only means something twice.$"

ParcelIsle_Widow_Text_5:
# 219 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Count the gulls with me. On the\n"
	.string "racks there. Go on.\p"
	.string "Twelve. Say it back, so two of us know\n"
	.string "it.$"

ParcelIsle_Widow_Text_6:
# 221 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Twelve. Good. My husband kept\n"
	.string "that count for thirty years.\p"
	.string "Come back and I'll give you the next\n"
	.string "one. That's all a survey is, you know.\l"
	.string "Somebody coming back.$"

ParcelIsle_Widow_Text_7:
# 224 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: No? Then it's just me who\n"
	.string "knows. That's been fine so far.$"

ParcelIsle_FerrySign_Text_0:
# 232 "data/maps/ParcelIsle/scripts.pory"
	.string "FERRY LANDING\p"
	.string "Mainland service: SUSPENDED\n"
	.string "PENDING REGIONAL REVIEW\p"
	.string "Someone wrote underneath in pencil:\n"
	.string "ABOUT TIME.$"

ParcelIsle_FerrySign_Text_1:
# 234 "data/maps/ParcelIsle/scripts.pory"
	.string "FERRY LANDING\p"
	.string "The mainland schedule board is blank.\n"
	.string "It has been for a while.$"

ParcelIsle_FerryCaptain_Text_0:
# 245 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: Passage out? Not in this cold,\n"
	.string "not without a reason.\p"
	.string "Come back when the RANGERS have sent\n"
	.string "you up the mountains. You'll know when.$"

ParcelIsle_FerryCaptain_Text_1:
# 249 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: Harbour's open. Where to?$"

ParcelIsle_FerryCaptain_Text_2:
# 261 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: The coast run opens after\n"
	.string "you've made the DELIBIRD crossing.\n"
	.string "One island at a time.$"

ParcelIsle_FerryCaptain_Text_3:
# 273 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: The climate station? That run\n"
	.string "opens once you've worked the coast.\l"
	.string "Not before.$"

ParcelIsle_FerryCaptain_Text_4:
# 284 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: Suit yourself. I'll be on the\n"
	.string "water.$"

ParcelIsle_GateMoore_Text_0:
# 294 "data/maps/ParcelIsle/scripts.pory"
	.string "MOORE: Harbour-master. Every hull and\n"
	.string "every hand that moves through here\l"
	.string "goes in my log.\p"
	.string "You want harbour clearance? Earn it.$"

ParcelIsle_GateMoore_Text_1:
# 295 "data/maps/ParcelIsle/scripts.pory"
	.string "MOORE: Noted. The harbour knows your\n"
	.string "name now.$"

ParcelIsle_GateMoore_Text_2:
# 299 "data/maps/ParcelIsle/scripts.pory"
	.string "MOORE: You're cleared through the\n"
	.string "landing. The ferry runs answer to the\l"
	.string "log, and the log answers for you.$"

ParcelIsle_GateMoore_Defeated_Text_0:
# 306 "data/maps/ParcelIsle/scripts.pory"
	.string "MOORE: Harbour clearance, entered\n"
	.string "against your card.\p"
	.string "Nobody hands that out. You took it.$"

ParcelIsle_LogisticsClerk_Text_0:
# 325 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: Half my manifests are on hold. The\n"
	.string "other half are lawyers.\p"
	.string "I used to log trucks. Now I log the\n"
	.string "absence of trucks. It's the same form!$"

ParcelIsle_LogisticsClerk_Text_1:
# 327 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: Relief convoy for the basin.\n"
	.string "Three trucks, FOUNDATION crest,\l"
	.string "Council seal.\p"
	.string "Relief for what? Don't ask me. I log\n"
	.string "what moves.$"

ParcelIsle_LogisticsClerk_Text_2:
# 329 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: The RANGERS are hiring again?\n"
	.string "Congratulations. Your gear came in on\l"
	.string "our manifest, by the way.\p"
	.string "Not a complaint. I'm paid for accuracy.$"

ParcelIsle_LogisticsClerk_Text_3:
# 331 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: Everything that moves through\n"
	.string "SALTWICK is on a manifest. Fuel, crates,\l"
	.string "the ferry you came in on.\p"
	.string "You? 'Passenger, one, island stop.' I've\n"
	.string "already got you.$"

ParcelIsle_KidA_Text_0:
# 342 "data/maps/ParcelIsle/scripts.pory"
	.string "EBBA: NILS says you wrote everything\n"
	.string "down. Even the frogs!\p"
	.string "Are we in it? We saw them first!$"

ParcelIsle_KidA_Text_1:
# 344 "data/maps/ParcelIsle/scripts.pory"
	.string "EBBA: You saw them too! On the bridge!\n"
	.string "Going the wrong way!\p"
	.string "NILS said you'd say we made it up. You\n"
	.string "didn't.$"

ParcelIsle_KidA_Text_2:
# 346 "data/maps/ParcelIsle/scripts.pory"
	.string "EBBA: There were frogs in the inlet\n"
	.string "going the WRONG way! Upstream! All in a\l"
	.string "line, like they were late for something!\p"
	.string "NILS says frogs don't get late.$"

ParcelIsle_KidB_Text_0:
# 356 "data/maps/ParcelIsle/scripts.pory"
	.string "NILS: What's the word? For when a place\n"
	.string "is running out?\p"
	.string "EBBA says you've got a word for it now.\n"
	.string "I want the word.$"

ParcelIsle_KidB_Text_1:
# 358 "data/maps/ParcelIsle/scripts.pory"
	.string "NILS: Gran says the POLIWAG have\n"
	.string "always done that. Gran says a lot of\l"
	.string "things have always done that.\p"
	.string "I counted anyway. Fourteen. Less than\n"
	.string "last time.$"

ParcelIsle_KidB_Text_2:
# 360 "data/maps/ParcelIsle/scripts.pory"
	.string "NILS: Frogs don't get late. They get\n"
	.string "scared, maybe.\p"
	.string "Don't tell EBBA I said scared.$"

ParcelIsle_OldMan_Text_0:
# 371 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: Somebody finally said it out\n"
	.string "loud. In writing, with a name at the\l"
	.string "bottom.\p"
	.string "It'll cost you. It'll cost everyone.\n"
	.string "Forty years on that bridge and it never\l"
	.string "once occurred to me that the cost was\l"
	.string "the point.$"

ParcelIsle_OldMan_Text_1:
# 373 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: HALE signed for you? HALE\n"
	.string "doesn't sign for anyone! He didn't sign\l"
	.string "for me, and I ran his station before he\l"
	.string "did.\p"
	.string "Watch him. Not because he's wrong.\n"
	.string "Because he's tired.$"

ParcelIsle_OldMan_Text_2:
# 375 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: Forty years I walked that\n"
	.string "bridge for the RANGERS. Never saw the\l"
	.string "water this quiet.\p"
	.string "Quiet isn't peace, kid. Quiet is a place\n"
	.string "holding its breath.$"

ParcelIsle_Birder_Text_0:
# 387 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: The storm birds were on the\n"
	.string "radio this morning! By name! DELIBIRD!\p"
	.string "Forty years of lists and I never once\n"
	.string "made the news. Good.$"

ParcelIsle_Birder_Text_1:
# 389 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: Eleven species on the inlet\n"
	.string "today. Twenty, the year I started.\p"
	.string "My list is the only thing I own that\n"
	.string "gets shorter and heavier at the same\l"
	.string "time.$"

ParcelIsle_Birder_Text_2:
# 395 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: You've been out to the island!\n"
	.string "I can tell, the cold's still in your coat.\p"
	.string "Tell me. Did you see one? A DELIBIRD. On\n"
	.string "the ground, not in a picture.$"

ParcelIsle_Birder_Text_3:
# 397 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: Then they're still there! I\n"
	.string "haven't been able to make the crossing\l"
	.string "since my knee went.\p"
	.string "Take this. It's for looking at far-off\n"
	.string "things. I'm done needing it.$"

ParcelIsle_Birder_Text_4:
# 401 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: No? Well. That's honest. Come\n"
	.string "back when you have.$"

ParcelIsle_Birder_Text_5:
# 407 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: That's a survey knot on your\n"
	.string "pack. ILEX ties them left over right.\l"
	.string "Nobody else does.\p"
	.string "If the RANGERS ever send you north to\n"
	.string "the island, look for a bird with a tail\l"
	.string "like a rope. Then come tell me.$"

ParcelIsle_Birder_Text_6:
# 409 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: WINGULL, PELIPPER, and one\n"
	.string "SWABLU with no business this far north.\p"
	.string "I keep a list. It's shorter than it used\n"
	.string "to be. That's not an opinion. That's a\l"
	.string "list.$"

ParcelIsle_KidTrainer_Text_0:
# 417 "data/maps/ParcelIsle/scripts.pory"
	.string "TIMO: You're from the mainland!\n"
	.string "Mainlanders always have cool POKéMON.\l"
	.string "Let's battle!$"

ParcelIsle_KidTrainer_Text_1:
# 418 "data/maps/ParcelIsle/scripts.pory"
	.string "TIMO: Whoa. Okay!$"

ParcelIsle_KidTrainer_Text_2:
# 422 "data/maps/ParcelIsle/scripts.pory"
	.string "TIMO: You went past the bridge! Gran\n"
	.string "says you're allowed because of the\l"
	.string "knot.\p"
	.string "What's out there? No, wait, don't tell\n"
	.string "me. I want to be allowed first.$"

ParcelIsle_KidTrainer_Text_3:
# 424 "data/maps/ParcelIsle/scripts.pory"
	.string "TIMO: Gran says don't go past the\n"
	.string "bridge.\p"
	.string "She won't say why. She just gets quiet.$"

ParcelIsle_TownSign_Text_0:
# 431 "data/maps/ParcelIsle/scripts.pory"
	.string "SALTWICK\p"
	.string "Saltmarsh Coast -- Skaldmere Regional\n"
	.string "Council\p"
	.string "A newer plate underneath: HARBOUR\n"
	.string "WORKS BY MEREHOLT COASTAL.$"

ParcelIsle_Neighbor_Text_0:
# 444 "data/maps/ParcelIsle/scripts.pory"
	.string "MARIT: I told you to forget I said\n"
	.string "anything, that first day. I'm not saying\l"
	.string "it now.\p"
	.string "She wrote about you because she knew\n"
	.string "you'd do this. I think she was sorry. I\l"
	.string "think she knew that too.$"

ParcelIsle_Neighbor_Text_1:
# 446 "data/maps/ParcelIsle/scripts.pory"
	.string "MARIT: You've been in the annex. People\n"
	.string "come out of there quiet.\p"
	.string "She left it tidy. That's what nobody\n"
	.string "says. Ransacked places aren't tidy.$"

ParcelIsle_Neighbor_Text_2:
# 448 "data/maps/ParcelIsle/scripts.pory"
	.string "MARIT: Oh! You're the one the scientist\n"
	.string "wrote about, aren't you? The young\l"
	.string "naturalist with the--$"

ParcelIsle_Neighbor_Text_3:
# 451 "data/maps/ParcelIsle/scripts.pory"
	.string "MARIT: Forget I said anything. It's cold\n"
	.string "out. Get indoors, {PLAYER}.$"

ParcelIsle_Innkeeper_Text_0:
# 469 "data/maps/ParcelIsle/scripts.pory"
	.string "LIV: Two lawyers and a reporter in the\n"
	.string "good rooms. Mom's charging them double\l"
	.string "and apologizing for it.\p"
	.string "Your room's still yours. She won't let\n"
	.string "anyone else have it.$"

ParcelIsle_Innkeeper_Text_1:
# 471 "data/maps/ParcelIsle/scripts.pory"
	.string "LIV: Mom says RANGERS eat like they get\n"
	.string "paid in weather. She made the big pot.\p"
	.string "She hasn't made the big pot since the\n"
	.string "scientist left.$"

ParcelIsle_Innkeeper_Text_2:
# 473 "data/maps/ParcelIsle/scripts.pory"
	.string "LIV: Mom's kept your room since the\n"
	.string "letter came. Swept it every week. She\l"
	.string "wouldn't say who for.\p"
	.string "The lamp's lit. Go on in, you'll freeze.$"

ParcelIsle_ChandlerBrother_Text_0:
# 484 "data/maps/ParcelIsle/scripts.pory"
	.string "OSSIAN: KIT's sold more rope this week\n"
	.string "than all winter. Everyone suddenly\l"
	.string "wants to tie something down.\p"
	.string "Me, I sit. Turns out sitting was the\n"
	.string "wrong way to be right.$"

ParcelIsle_ChandlerBrother_Text_1:
# 486 "data/maps/ParcelIsle/scripts.pory"
	.string "OSSIAN: KIT's got the RANGER stock in\n"
	.string "now. REPELS, the good POTIONS. Says the\l"
	.string "RANGERS pay on time, unlike some.\p"
	.string "She means the fleet. She won't say the\n"
	.string "fleet.$"

ParcelIsle_ChandlerBrother_Text_2:
# 488 "data/maps/ParcelIsle/scripts.pory"
	.string "OSSIAN: KIT's inside. She sells, I sit.\n"
	.string "It's an arrangement.\p"
	.string "Wind's been coming off the water wrong\n"
	.string "all month. You get used to it. Mostly.$"

ParcelIsle_LabSign_Text_0:
# 500 "data/maps/ParcelIsle/scripts.pory"
	.string "FIELD RESEARCH ANNEX\n"
	.string "Skaldmere Survey cooperative site\p"
	.string "A strip of red cloth is nailed under the\n"
	.string "plate, faded gray.$"

ParcelIsle_HallSign_Text_0:
# 505 "data/maps/ParcelIsle/scripts.pory"
	.string "SALTWICK FISHERS' CO-OPERATIVE\p"
	.string "Meetings first Tuesday. Members and\n"
	.string "guests.\p"
	.string "Stencilled underneath: WITH THE\n"
	.string "SUPPORT OF THE MEREHOLT FOUNDATION.$"

ParcelIsle_NoticeBoard_Text_0:
# 511 "data/maps/ParcelIsle/scripts.pory"
	.string "NOTICES\p"
	.string "REGIONAL HEARINGS -- COASTAL QUOTAS.\n"
	.string "Public sessions Thursdays at the\l"
	.string "Council hall. Transport provided.\p"
	.string "MEREHOLT COASTAL: day-rate hiring\n"
	.string "SUSPENDED pending review.\p"
	.string "Someone pinned a strip of red cloth to\n"
	.string "the corner of the board.$"

ParcelIsle_NoticeBoard_Text_1:
# 513 "data/maps/ParcelIsle/scripts.pory"
	.string "NOTICES\p"
	.string "SKALDMERE CLIMATE CORPS: provisional\n"
	.string "RANGERS wanted. Apply at the district\l"
	.string "station.\p"
	.string "MEREHOLT COASTAL: day-rate hiring,\n"
	.string "quay, dawn. Own boots.\p"
	.string "LOST: one gray cat, answers to SEDGE.$"

ParcelIsle_NoticeBoard_Text_2:
# 515 "data/maps/ParcelIsle/scripts.pory"
	.string "NOTICES\p"
	.string "MEREHOLT COASTAL: day-rate hiring,\n"
	.string "quay, dawn. Own boots.\p"
	.string "FERRY SCHEDULE: see board at landing.\p"
	.string "LOST: one gray cat, answers to SEDGE.\p"
	.string "A fourth notice has been torn down. Two\n"
	.string "corners are still under the pins.$"

ParcelIsle_WeatherStationSign_Text_0:
# 521 "data/maps/ParcelIsle/scripts.pory"
	.string "AUTOMATED WEATHER STATION 04\n"
	.string "Skaldmere Climate Corps\p"
	.string "Instrument sponsorship: the MEREHOLT\n"
	.string "FOUNDATION\p"
	.string "The anemometer turns. The logger light\n"
	.string "is off.$"

ParcelIsle_PreserveGateSign_Text_0:
# 526 "data/maps/ParcelIsle/scripts.pory"
	.string "MISTWOOD SHORE PRESERVE\n"
	.string "Skaldmere Climate Corps -- Holding\l"
	.string "Meadow\p"
	.string "No entry without a RANGER present.\p"
	.string "The MEREHOLT FOUNDATION crest, cast in\n"
	.string "bronze, very clean.$"

ParcelIsle_CenterAide_Text_0:
# 537 "data/maps/ParcelIsle/scripts.pory"
	.string "MEDIC: Aid station's for POKéMON, and\n"
	.string "you haven't got one yet.\p"
	.string "RIN's up at the meadow, through the\n"
	.string "north gate. Go get picked. Then come\l"
	.string "back and I'll move.$"

ParcelIsle_T_Brand_Text_0:
# 545 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Off the ferry crew. Nothing to\n"
	.string "do till the tide. Battle me, RANGER, the\l"
	.string "harbour's dull.$"

ParcelIsle_T_Brand_Text_1:
# 546 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Tide's in. Figuratively.$"

ParcelIsle_T_Brand_Text_2:
# 561 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Three ferry routes now.\n"
	.string "DELIBIRD, the coast, the station. The\l"
	.string "coast one's full every run. Nobody\l"
	.string "comes back smiling.$"

ParcelIsle_T_Brand_R2_Text_0:
# 572 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelIsle_T_Brand_R2_Text_1:
# 574 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Another time, then.$"

ParcelIsle_T_Brand_R2_Text_2:
# 578 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Right. That's the whole of it.$"

ParcelIsle_T_Brand_R2_Text_3:
# 579 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelIsle_T_Brand_R3_Text_0:
# 586 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelIsle_T_Brand_R3_Text_1:
# 593 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelIsle_T_Brand_R4_Text_0:
# 600 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelIsle_T_Brand_R4_Text_1:
# 606 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Still yours.$"

ParcelIsle_T_Brand_R4_Text_2:
# 607 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelIsle_T_Brand_R5_Text_0:
# 614 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelIsle_T_Brand_R5_Text_1:
# 620 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Noted. Properly, this time.$"

ParcelIsle_T_Brand_R5_Text_2:
# 621 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelIsle_T_Svein_Text_0:
# 627 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Fishing the jetty. Not catching.\n"
	.string "There's a difference. Battle?$"

ParcelIsle_T_Svein_Text_1:
# 628 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Caught something at last.$"

ParcelIsle_T_Svein_Text_2:
# 643 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: ANNI says the nets are fine and\n"
	.string "the sea is empty. I'm starting to\l"
	.string "believe her.$"

ParcelIsle_T_Svein_R2_Text_0:
# 654 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: I kept the team up for this.\n"
	.string "Again?$"

ParcelIsle_T_Svein_R2_Text_1:
# 656 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Fine. Same spot.$"

ParcelIsle_T_Svein_R2_Text_2:
# 660 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: That's the one I wanted to see.$"

ParcelIsle_T_Svein_R2_Text_3:
# 661 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelIsle_T_Svein_R3_Text_0:
# 668 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelIsle_T_Svein_R3_Text_1:
# 674 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Still yours.$"

ParcelIsle_T_Svein_R3_Text_2:
# 675 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: One more in me. After the high\n"
	.string "ground.$"

ParcelIsle_T_Svein_R4_Text_0:
# 682 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelIsle_T_Svein_R4_Text_1:
# 689 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelIsle_T_Svein_R5_Text_0:
# 696 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelIsle_T_Svein_R5_Text_1:
# 703 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelIsle_T_Tora_Text_0:
# 709 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: New in town. Everyone's new in\n"
	.string "town eventually. Battle me so I know\l"
	.string "your name.$"

ParcelIsle_T_Tora_Text_1:
# 710 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Noted. The name, I mean.$"

ParcelIsle_T_Tora_Text_2:
# 725 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: The CORPS gets a new provisional\n"
	.string "every spring. Most of them go north and\l"
	.string "we hear about them on the radio. Mind\l"
	.string "you come back.$"

ParcelIsle_T_Tora_R2_Text_0:
# 736 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelIsle_T_Tora_R2_Text_1:
# 738 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: No hurry. The water keeps.$"

ParcelIsle_T_Tora_R2_Text_2:
# 742 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: …Again, then. Later.$"

ParcelIsle_T_Tora_R2_Text_3:
# 743 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelIsle_T_Tora_R3_Text_0:
# 750 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelIsle_T_Tora_R3_Text_1:
# 756 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Still yours.$"

ParcelIsle_T_Tora_R3_Text_2:
# 757 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelIsle_T_Tora_R4_Text_0:
# 764 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelIsle_T_Tora_R4_Text_1:
# 770 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Noted. Properly, this time.$"

ParcelIsle_T_Tora_R4_Text_2:
# 771 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelIsle_T_Tora_R5_Text_0:
# 778 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelIsle_T_Tora_R5_Text_1:
# 784 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Right. That's the whole of it.$"

ParcelIsle_T_Tora_R5_Text_2:
# 785 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelIsle_T_Jon_Text_0:
# 791 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: The chandlery's closed, the hall's\n"
	.string "full of meetings, and I'm bored. Battle!$"

ParcelIsle_T_Jon_Text_1:
# 792 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Less bored now.$"

ParcelIsle_T_Jon_Text_2:
# 807 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: My dad says the marsh north of\n"
	.string "FERNWICK smells like money. He means\l"
	.string "somebody's making some.$"

ParcelIsle_T_Jon_R2_Text_0:
# 818 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelIsle_T_Jon_R2_Text_1:
# 820 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: No hurry. The water keeps.$"

ParcelIsle_T_Jon_R2_Text_2:
# 824 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Noted. Properly, this time.$"

ParcelIsle_T_Jon_R2_Text_3:
# 825 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelIsle_T_Jon_R3_Text_0:
# 832 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelIsle_T_Jon_R3_Text_1:
# 838 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Right. That's the whole of it.$"

ParcelIsle_T_Jon_R3_Text_2:
# 839 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: One more in me. After the high\n"
	.string "ground.$"

ParcelIsle_T_Jon_R4_Text_0:
# 846 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelIsle_T_Jon_R4_Text_1:
# 853 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelIsle_T_Jon_R5_Text_0:
# 860 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelIsle_T_Jon_R5_Text_1:
# 866 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Still yours.$"

ParcelIsle_T_Jon_R5_Text_2:
# 867 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelIsle_T_Line_Text_0:
# 873 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Picnic on the quay. The gulls take\n"
	.string "everything. You can't take a battle off\l"
	.string "me though.$"

ParcelIsle_T_Line_Text_1:
# 874 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: You can, apparently.$"

ParcelIsle_T_Line_Text_2:
# 889 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: SIGRUN counts the gulls every\n"
	.string "morning. Fewer each year. The gulls\l"
	.string "don't know. The gulls just want my\l"
	.string "sandwich.$"

ParcelIsle_T_Line_R2_Text_0:
# 900 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelIsle_T_Line_R2_Text_1:
# 902 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: No hurry. The water keeps.$"

ParcelIsle_T_Line_R2_Text_2:
# 906 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Still yours.$"

ParcelIsle_T_Line_R2_Text_3:
# 907 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelIsle_T_Line_R3_Text_0:
# 914 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelIsle_T_Line_R3_Text_1:
# 921 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelIsle_T_Line_R4_Text_0:
# 928 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelIsle_T_Line_R4_Text_1:
# 934 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Right. That's the whole of it.$"

ParcelIsle_T_Line_R4_Text_2:
# 935 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelIsle_T_Line_R5_Text_0:
# 942 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelIsle_T_Line_R5_Text_1:
# 948 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: That's the one I wanted to see.$"

ParcelIsle_T_Line_R5_Text_2:
# 949 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: That's all I've got. It was enough\n"
	.string "to see it done.$"
