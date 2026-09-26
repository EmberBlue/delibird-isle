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
	warp MAP_PARCEL_COAST, 38, 38
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
	warp MAP_PARCEL_WEATHER, 23, 36
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
