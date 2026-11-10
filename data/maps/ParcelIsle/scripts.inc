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
	msgbox ParcelIsle_Arrival_Text_3, MSGBOX_DEFAULT
# 56 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 57 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALDMERE_ARRIVAL_INTRO
# 58 "data/maps/ParcelIsle/scripts.pory"
	releaseall
	end

ParcelIsle_Arrival_2:
	end


# 62 "data/maps/ParcelIsle/scripts.pory"
Movement_BramToJetty:
# 63 "data/maps/ParcelIsle/scripts.pory"
	walk_left
# 64 "data/maps/ParcelIsle/scripts.pory"
	walk_left
# 65 "data/maps/ParcelIsle/scripts.pory"
	walk_down
# 66 "data/maps/ParcelIsle/scripts.pory"
	walk_down
# 67 "data/maps/ParcelIsle/scripts.pory"
	walk_down
# 68 "data/maps/ParcelIsle/scripts.pory"
	step_end

# 71 "data/maps/ParcelIsle/scripts.pory"
Movement_BramBack:
# 72 "data/maps/ParcelIsle/scripts.pory"
	walk_up
# 73 "data/maps/ParcelIsle/scripts.pory"
	walk_up
# 74 "data/maps/ParcelIsle/scripts.pory"
	walk_up
# 75 "data/maps/ParcelIsle/scripts.pory"
	walk_right
# 76 "data/maps/ParcelIsle/scripts.pory"
	walk_right
# 77 "data/maps/ParcelIsle/scripts.pory"
	face_left
# 78 "data/maps/ParcelIsle/scripts.pory"
	step_end

# 81 "data/maps/ParcelIsle/scripts.pory"
Movement_FaceUp:
# 82 "data/maps/ParcelIsle/scripts.pory"
	face_up
# 83 "data/maps/ParcelIsle/scripts.pory"
	step_end

ParcelIsle_HeavyCoat::
# 91 "data/maps/ParcelIsle/scripts.pory"
	lock
# 92 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 93 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_HeavyCoat_2
# 95 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_HeavyCoat_3
# 97 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_HeavyCoat_4
# 100 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_3, MSGBOX_DEFAULT
ParcelIsle_HeavyCoat_1:
# 102 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_HeavyCoat_2:
# 94 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_HeavyCoat_1

ParcelIsle_HeavyCoat_3:
# 96 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_HeavyCoat_1

ParcelIsle_HeavyCoat_4:
# 98 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_HeavyCoat_1


ParcelIsle_Fisher::
# 108 "data/maps/ParcelIsle/scripts.pory"
	lock
# 109 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 110 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_NET, ParcelIsle_Fisher_3
ParcelIsle_Fisher_1:
# 118 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Fisher_7
# 120 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Fisher_8
# 123 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_4, MSGBOX_DEFAULT
ParcelIsle_Fisher_6:
# 125 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Fisher_2:
# 111 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_0, MSGBOX_DEFAULT
# 112 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_1, MSGBOX_DEFAULT
# 113 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_OLD_ROD
# 114 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_ANNI_DONE
# 115 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Fisher_3:
# 110 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_ANNI_DONE, ParcelIsle_Fisher_2
	goto ParcelIsle_Fisher_1

ParcelIsle_Fisher_7:
# 119 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_Fisher_6

ParcelIsle_Fisher_8:
# 121 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_Fisher_6


ParcelIsle_Dockworker::
# 131 "data/maps/ParcelIsle/scripts.pory"
	lock
# 132 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 133 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelIsle_Dockworker_2
# 135 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Dockworker_3
# 137 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Dockworker_4
# 140 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_3, MSGBOX_DEFAULT
ParcelIsle_Dockworker_1:
# 142 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Dockworker_2:
# 134 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_Dockworker_1

ParcelIsle_Dockworker_3:
# 136 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Dockworker_1

ParcelIsle_Dockworker_4:
# 138 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_Dockworker_1


ParcelIsle_NetMender::
# 148 "data/maps/ParcelIsle/scripts.pory"
	lock
# 149 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 150 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_DONE, ParcelIsle_NetMender_2
# 159 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_NET, ParcelIsle_NetMender_5
# 164 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_NetMender_12
# 171 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_5, MSGBOX_DEFAULT
# 172 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_NetMender_2:
# 151 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_NetMender_8
# 154 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_1, MSGBOX_DEFAULT
ParcelIsle_NetMender_7:
# 156 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_NetMender_5:
# 160 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_2, MSGBOX_DEFAULT
# 161 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_NetMender_8:
# 152 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_NetMender_7

ParcelIsle_NetMender_12:
# 165 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_3, MSGBOX_DEFAULT
# 166 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_4, MSGBOX_DEFAULT
# 167 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_ANNI_NET
# 168 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_HarbourLad::
# 178 "data/maps/ParcelIsle/scripts.pory"
	lock
# 179 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 180 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ParcelIsle_HarbourLad_2
# 185 "data/maps/ParcelIsle/scripts.pory"
	release
# 186 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HARBOUR_LAD, ParcelIsle_HarbourLad_Text_1, ParcelIsle_HarbourLad_Text_2
# 189 "data/maps/ParcelIsle/scripts.pory"
	lock
# 190 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 191 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_HarbourLad_5
# 194 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HarbourLad_Text_4, MSGBOX_DEFAULT
ParcelIsle_HarbourLad_4:
# 196 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_HarbourLad_2:
# 181 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HarbourLad_Text_0, MSGBOX_DEFAULT
# 182 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_HarbourLad_5:
# 192 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HarbourLad_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_HarbourLad_4


ParcelIsle_Widow::
# 202 "data/maps/ParcelIsle/scripts.pory"
	lock
# 203 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 204 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGRUN_DONE, ParcelIsle_Widow_2
# 209 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGRUN, ParcelIsle_Widow_5
# 223 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_5, MSGBOX_YESNO
# 224 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelIsle_Widow_8
# 228 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_7, MSGBOX_DEFAULT
ParcelIsle_Widow_7:
# 230 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Widow_2:
# 205 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_0, MSGBOX_DEFAULT
# 206 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Widow_5:
# 210 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Widow_12
# 215 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Widow_13
# 218 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_4, MSGBOX_DEFAULT
ParcelIsle_Widow_11:
# 220 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Widow_8:
# 225 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_6, MSGBOX_DEFAULT
# 226 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SIGRUN
	goto ParcelIsle_Widow_7

ParcelIsle_Widow_12:
# 211 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_1, MSGBOX_DEFAULT
# 212 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_2, MSGBOX_DEFAULT
# 213 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 214 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SIGRUN_DONE
	goto ParcelIsle_Widow_11

ParcelIsle_Widow_13:
# 216 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_Widow_11


ParcelIsle_FerrySign::
# 235 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_FerrySign_2
# 238 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerrySign_Text_1, MSGBOX_SIGN
ParcelIsle_FerrySign_1:
	end

ParcelIsle_FerrySign_2:
# 236 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerrySign_Text_0, MSGBOX_SIGN
	goto ParcelIsle_FerrySign_1


ParcelIsle_FerryCaptain::
# 246 "data/maps/ParcelIsle/scripts.pory"
	lock
# 247 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 248 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TALLY, ParcelIsle_FerryCaptain_5
ParcelIsle_FerryCaptain_4:
# 258 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_TALLY_DONE, ParcelIsle_FerryCaptain_3
# 264 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_FerryCaptain_9
# 269 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_HIGHLAND_CERT, ParcelIsle_FerryCaptain_16
# 274 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_5, MSGBOX_DEFAULT
# 275 "data/maps/ParcelIsle/scripts.pory"
	multichoice 1, 1, MULTI_SKALD_FERRY, FALSE
# 276 "data/maps/ParcelIsle/scripts.pory"
	switch VAR_RESULT
# 277 "data/maps/ParcelIsle/scripts.pory"
	case 0, ParcelIsle_FerryCaptain_20
# 284 "data/maps/ParcelIsle/scripts.pory"
	case 1, ParcelIsle_FerryCaptain_21
# 296 "data/maps/ParcelIsle/scripts.pory"
	case 2, ParcelIsle_FerryCaptain_22
# 309 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_8, MSGBOX_DEFAULT
# 310 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_2:
# 249 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TALLY_FOUND, ParcelIsle_FerryCaptain_12
# 254 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_1, MSGBOX_DEFAULT
ParcelIsle_FerryCaptain_11:
# 256 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_3:
# 259 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_2, MSGBOX_DEFAULT
# 260 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_TALLY
# 261 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_5:
# 248 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_TALLY_DONE, ParcelIsle_FerryCaptain_2
	goto ParcelIsle_FerryCaptain_4

ParcelIsle_FerryCaptain_9:
# 265 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_3, MSGBOX_DEFAULT
# 266 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_12:
# 250 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_0, MSGBOX_DEFAULT
# 251 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_NET_BALL, 3
# 252 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_TALLY_DONE
	goto ParcelIsle_FerryCaptain_11

ParcelIsle_FerryCaptain_16:
# 270 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_4, MSGBOX_DEFAULT
# 271 "data/maps/ParcelIsle/scripts.pory"
	release
	end

	end

ParcelIsle_FerryCaptain_20:
# 278 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 279 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 280 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 281 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_DELIBIRD, 9, 22
# 282 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_21:
# 285 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_DELIBIRD_ARRIVAL, ParcelIsle_FerryCaptain_25
# 290 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 291 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 292 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 293 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_COAST, 30, 55
# 294 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_22:
# 297 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_COASTAL_CERT, ParcelIsle_FerryCaptain_28
# 302 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 303 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 304 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 305 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_WEATHER, 9, 34
# 306 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_25:
# 286 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_6, MSGBOX_DEFAULT
# 287 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_28:
# 298 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_7, MSGBOX_DEFAULT
# 299 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_GateMoore::
# 318 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GATE_ISLE, ParcelIsle_GateMoore_Text_0, ParcelIsle_GateMoore_Text_1, ParcelIsle_GateMoore_Defeated
# 322 "data/maps/ParcelIsle/scripts.pory"
	lock
# 323 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 324 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_GateMoore_Text_2, MSGBOX_DEFAULT
# 325 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_GateMoore_Defeated::
# 330 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_ISLE
# 331 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_GateMoore_Defeated_Text_0, MSGBOX_DEFAULT
# 332 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_ItemNetBall::
# 337 "data/maps/ParcelIsle/scripts.pory"
	finditem ITEM_NET_BALL
	end


ParcelIsle_LogisticsClerk::
# 347 "data/maps/ParcelIsle/scripts.pory"
	lock
# 348 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 349 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_LogisticsClerk_2
# 351 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_LogisticsClerk_3
# 353 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelIsle_LogisticsClerk_4
# 355 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_LogisticsClerk_5
# 358 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_4, MSGBOX_DEFAULT
ParcelIsle_LogisticsClerk_1:
# 360 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_LogisticsClerk_2:
# 350 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_LogisticsClerk_1

ParcelIsle_LogisticsClerk_3:
# 352 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_LogisticsClerk_1

ParcelIsle_LogisticsClerk_4:
# 354 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_LogisticsClerk_1

ParcelIsle_LogisticsClerk_5:
# 356 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_LogisticsClerk_1


ParcelIsle_KidA::
# 366 "data/maps/ParcelIsle/scripts.pory"
	lock
# 367 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 368 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_KidA_2
# 370 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_KidA_3
# 372 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_BRIDGE_SCENE, ParcelIsle_KidA_4
# 375 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidA_Text_3, MSGBOX_DEFAULT
ParcelIsle_KidA_1:
# 377 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_KidA_2:
# 369 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidA_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_KidA_1

ParcelIsle_KidA_3:
# 371 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidA_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_KidA_1

ParcelIsle_KidA_4:
# 373 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidA_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_KidA_1


ParcelIsle_KidB::
# 382 "data/maps/ParcelIsle/scripts.pory"
	lock
# 383 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 384 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_KidB_2
# 386 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_KidB_3
# 388 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_BRIDGE_SCENE, ParcelIsle_KidB_4
# 391 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidB_Text_3, MSGBOX_DEFAULT
ParcelIsle_KidB_1:
# 393 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_KidB_2:
# 385 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidB_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_KidB_1

ParcelIsle_KidB_3:
# 387 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidB_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_KidB_1

ParcelIsle_KidB_4:
# 389 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidB_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_KidB_1


ParcelIsle_OldMan::
# 399 "data/maps/ParcelIsle/scripts.pory"
	lock
# 400 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 401 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HALVAR, ParcelIsle_OldMan_3
ParcelIsle_OldMan_1:
# 415 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_OldMan_7
# 417 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_HALVAR_DONE, ParcelIsle_OldMan_8
# 420 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_OldMan_9
# 422 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_OldMan_10
# 425 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_8, MSGBOX_DEFAULT
ParcelIsle_OldMan_6:
# 427 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_OldMan_2:
# 402 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HALVAR_FOUND, ParcelIsle_OldMan_17
# 411 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_3, MSGBOX_DEFAULT
# 412 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_OldMan_3:
# 401 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_HALVAR_DONE, ParcelIsle_OldMan_2
	goto ParcelIsle_OldMan_1

ParcelIsle_OldMan_7:
# 416 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_4, MSGBOX_DEFAULT
	goto ParcelIsle_OldMan_6

ParcelIsle_OldMan_8:
# 418 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_5, MSGBOX_DEFAULT
# 419 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_HALVAR
	goto ParcelIsle_OldMan_6

ParcelIsle_OldMan_9:
# 421 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_6, MSGBOX_DEFAULT
	goto ParcelIsle_OldMan_6

ParcelIsle_OldMan_10:
# 423 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_7, MSGBOX_DEFAULT
	goto ParcelIsle_OldMan_6

ParcelIsle_OldMan_17:
# 403 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_0, MSGBOX_DEFAULT
# 404 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_1, MSGBOX_DEFAULT
# 405 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 406 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_HALVAR_DONE
# 407 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_2, MSGBOX_DEFAULT
# 408 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_Birder::
# 433 "data/maps/ParcelIsle/scripts.pory"
	lock
# 434 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 435 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BIRDER_DONE, ParcelIsle_Birder_2
# 444 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_ARRIVAL, ParcelIsle_Birder_5
# 456 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Birder_12
# 459 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_6, MSGBOX_DEFAULT
ParcelIsle_Birder_11:
# 461 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Birder_2:
# 436 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Birder_8
# 439 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_1, MSGBOX_DEFAULT
ParcelIsle_Birder_7:
# 441 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Birder_5:
# 445 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_2, MSGBOX_YESNO
# 446 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelIsle_Birder_16
# 451 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_4, MSGBOX_DEFAULT
ParcelIsle_Birder_15:
# 453 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Birder_8:
# 437 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_Birder_7

ParcelIsle_Birder_12:
# 457 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_5, MSGBOX_DEFAULT
	goto ParcelIsle_Birder_11

ParcelIsle_Birder_16:
# 447 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_3, MSGBOX_DEFAULT
# 448 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 449 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_BIRDER_DONE
	goto ParcelIsle_Birder_15


ParcelIsle_KidTrainer::
# 466 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_KID, ParcelIsle_KidTrainer_Text_0, ParcelIsle_KidTrainer_Text_1
# 469 "data/maps/ParcelIsle/scripts.pory"
	lock
# 470 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 471 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_KidTrainer_2
# 474 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidTrainer_Text_3, MSGBOX_DEFAULT
ParcelIsle_KidTrainer_1:
# 476 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_KidTrainer_2:
# 472 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidTrainer_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_KidTrainer_1


ParcelIsle_TownSign::
# 481 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_TownSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_Neighbor::
# 491 "data/maps/ParcelIsle/scripts.pory"
	lock
# 492 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 493 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Neighbor_2
# 495 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_Neighbor_3
# 497 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_LAB_SEEN, ParcelIsle_Neighbor_4
# 500 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_3, MSGBOX_DEFAULT
# 501 "data/maps/ParcelIsle/scripts.pory"
	applymovement 4, Movement_GlanceAway
# 502 "data/maps/ParcelIsle/scripts.pory"
	waitmovement 0
# 503 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_4, MSGBOX_DEFAULT
ParcelIsle_Neighbor_1:
# 505 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Neighbor_2:
# 494 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_Neighbor_1

ParcelIsle_Neighbor_3:
# 496 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Neighbor_1

ParcelIsle_Neighbor_4:
# 498 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_Neighbor_1


# 509 "data/maps/ParcelIsle/scripts.pory"
Movement_GlanceAway:
# 510 "data/maps/ParcelIsle/scripts.pory"
	face_right
# 511 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 512 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 513 "data/maps/ParcelIsle/scripts.pory"
	step_end

ParcelIsle_Innkeeper::
# 518 "data/maps/ParcelIsle/scripts.pory"
	lock
# 519 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 520 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Innkeeper_2
# 522 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_Innkeeper_3
# 524 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Innkeeper_4
# 527 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Innkeeper_Text_3, MSGBOX_DEFAULT
ParcelIsle_Innkeeper_1:
# 529 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Innkeeper_2:
# 521 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Innkeeper_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_Innkeeper_1

ParcelIsle_Innkeeper_3:
# 523 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Innkeeper_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Innkeeper_1

ParcelIsle_Innkeeper_4:
# 525 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Innkeeper_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_Innkeeper_1


ParcelIsle_ChandlerBrother::
# 535 "data/maps/ParcelIsle/scripts.pory"
	lock
# 536 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 537 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_ChandlerBrother_2
# 539 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_ChandlerBrother_3
# 541 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_ChandlerBrother_4
# 544 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ChandlerBrother_Text_3, MSGBOX_DEFAULT
ParcelIsle_ChandlerBrother_1:
# 546 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_ChandlerBrother_2:
# 538 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ChandlerBrother_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_ChandlerBrother_1

ParcelIsle_ChandlerBrother_3:
# 540 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ChandlerBrother_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_ChandlerBrother_1

ParcelIsle_ChandlerBrother_4:
# 542 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ChandlerBrother_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_ChandlerBrother_1


ParcelIsle_ItemPotion::
# 551 "data/maps/ParcelIsle/scripts.pory"
	finditem ITEM_POTION
	end


ParcelIsle_LabSign::
# 556 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LabSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_HallSign::
# 561 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HallSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_NoticeBoard::
# 566 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_NoticeBoard_2
# 568 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_NoticeBoard_3
# 571 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NoticeBoard_Text_2, MSGBOX_SIGN
ParcelIsle_NoticeBoard_1:
	end

ParcelIsle_NoticeBoard_2:
# 567 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NoticeBoard_Text_0, MSGBOX_SIGN
	goto ParcelIsle_NoticeBoard_1

ParcelIsle_NoticeBoard_3:
# 569 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NoticeBoard_Text_1, MSGBOX_SIGN
	goto ParcelIsle_NoticeBoard_1


ParcelIsle_WeatherStationSign::
# 577 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_WeatherStationSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_PreserveGateSign::
# 582 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PreserveGateSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_CenterAide::
# 591 "data/maps/ParcelIsle/scripts.pory"
	lock
# 592 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 593 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_CenterAide_2
# 598 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_CenterAide_5
# 603 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_CenterAide_Text_2, MSGBOX_DEFAULT
# 604 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_CenterAide_2:
# 594 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_CenterAide_Text_0, MSGBOX_DEFAULT
# 595 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_CenterAide_5:
# 599 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_CenterAide_Text_1, MSGBOX_DEFAULT
# 600 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Brand::
# 610 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ISLE_BRAND, ParcelIsle_T_Brand_Text_0, ParcelIsle_T_Brand_Text_1, ParcelIsle_T_Brand_FirstWin
# 614 "data/maps/ParcelIsle/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 615 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelIsle_T_Brand_3
ParcelIsle_T_Brand_1:
# 618 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelIsle_T_Brand_8
ParcelIsle_T_Brand_6:
# 621 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelIsle_T_Brand_13
ParcelIsle_T_Brand_11:
# 624 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelIsle_T_Brand_18
ParcelIsle_T_Brand_16:
# 627 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_Text_2, MSGBOX_DEFAULT
	end

ParcelIsle_T_Brand_2:
# 616 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Brand_R2
	goto ParcelIsle_T_Brand_1

ParcelIsle_T_Brand_3:
# 615 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_BRAND_R2
	goto_if 0, ParcelIsle_T_Brand_2
	goto ParcelIsle_T_Brand_1

ParcelIsle_T_Brand_7:
# 619 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Brand_R3
	goto ParcelIsle_T_Brand_6

ParcelIsle_T_Brand_8:
# 618 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_BRAND_R3
	goto_if 0, ParcelIsle_T_Brand_7
	goto ParcelIsle_T_Brand_6

ParcelIsle_T_Brand_12:
# 622 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Brand_R4
	goto ParcelIsle_T_Brand_11

ParcelIsle_T_Brand_13:
# 621 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_BRAND_R4
	goto_if 0, ParcelIsle_T_Brand_12
	goto ParcelIsle_T_Brand_11

ParcelIsle_T_Brand_17:
# 625 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Brand_R5
	goto ParcelIsle_T_Brand_16

ParcelIsle_T_Brand_18:
# 624 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_BRAND_R5
	goto_if 0, ParcelIsle_T_Brand_17
	goto ParcelIsle_T_Brand_16


ParcelIsle_T_Brand_FirstWin::
# 631 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_Text_2, MSGBOX_DEFAULT
# 632 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Brand_R2::
# 636 "data/maps/ParcelIsle/scripts.pory"
	lock
# 637 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 638 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_0, MSGBOX_YESNO
# 639 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Brand_R2_2
# 644 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_BRAND_R2, ParcelIsle_T_Brand_R2_Text_2
# 645 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_3, MSGBOX_DEFAULT
# 646 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Brand_R2_2:
# 640 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_1, MSGBOX_DEFAULT
# 641 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Brand_R3::
# 650 "data/maps/ParcelIsle/scripts.pory"
	lock
# 651 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 652 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R3_Text_0, MSGBOX_YESNO
# 653 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Brand_R3_2
# 658 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_BRAND_R3, ParcelIsle_T_Brand_R2_Text_2
# 659 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R3_Text_1, MSGBOX_DEFAULT
# 660 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Brand_R3_2:
# 654 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_1, MSGBOX_DEFAULT
# 655 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Brand_R4::
# 664 "data/maps/ParcelIsle/scripts.pory"
	lock
# 665 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 666 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R4_Text_0, MSGBOX_YESNO
# 667 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Brand_R4_2
# 672 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_BRAND_R4, ParcelIsle_T_Brand_R4_Text_1
# 673 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R4_Text_2, MSGBOX_DEFAULT
# 674 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Brand_R4_2:
# 668 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_1, MSGBOX_DEFAULT
# 669 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Brand_R5::
# 678 "data/maps/ParcelIsle/scripts.pory"
	lock
# 679 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 680 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R5_Text_0, MSGBOX_YESNO
# 681 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Brand_R5_2
# 686 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_BRAND_R5, ParcelIsle_T_Brand_R5_Text_1
# 687 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R5_Text_2, MSGBOX_DEFAULT
# 688 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Brand_R5_2:
# 682 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_1, MSGBOX_DEFAULT
# 683 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Svein::
# 692 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ISLE_SVEIN, ParcelIsle_T_Svein_Text_0, ParcelIsle_T_Svein_Text_1, ParcelIsle_T_Svein_FirstWin
# 696 "data/maps/ParcelIsle/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 697 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelIsle_T_Svein_3
ParcelIsle_T_Svein_1:
# 700 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelIsle_T_Svein_8
ParcelIsle_T_Svein_6:
# 703 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelIsle_T_Svein_13
ParcelIsle_T_Svein_11:
# 706 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelIsle_T_Svein_18
ParcelIsle_T_Svein_16:
# 709 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_Text_2, MSGBOX_DEFAULT
	end

ParcelIsle_T_Svein_2:
# 698 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Svein_R2
	goto ParcelIsle_T_Svein_1

ParcelIsle_T_Svein_3:
# 697 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_SVEIN_R2
	goto_if 0, ParcelIsle_T_Svein_2
	goto ParcelIsle_T_Svein_1

ParcelIsle_T_Svein_7:
# 701 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Svein_R3
	goto ParcelIsle_T_Svein_6

ParcelIsle_T_Svein_8:
# 700 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_SVEIN_R3
	goto_if 0, ParcelIsle_T_Svein_7
	goto ParcelIsle_T_Svein_6

ParcelIsle_T_Svein_12:
# 704 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Svein_R4
	goto ParcelIsle_T_Svein_11

ParcelIsle_T_Svein_13:
# 703 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_SVEIN_R4
	goto_if 0, ParcelIsle_T_Svein_12
	goto ParcelIsle_T_Svein_11

ParcelIsle_T_Svein_17:
# 707 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Svein_R5
	goto ParcelIsle_T_Svein_16

ParcelIsle_T_Svein_18:
# 706 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_SVEIN_R5
	goto_if 0, ParcelIsle_T_Svein_17
	goto ParcelIsle_T_Svein_16


ParcelIsle_T_Svein_FirstWin::
# 713 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_Text_2, MSGBOX_DEFAULT
# 714 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Svein_R2::
# 718 "data/maps/ParcelIsle/scripts.pory"
	lock
# 719 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 720 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_0, MSGBOX_YESNO
# 721 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Svein_R2_2
# 726 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_SVEIN_R2, ParcelIsle_T_Svein_R2_Text_2
# 727 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_3, MSGBOX_DEFAULT
# 728 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Svein_R2_2:
# 722 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_1, MSGBOX_DEFAULT
# 723 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Svein_R3::
# 732 "data/maps/ParcelIsle/scripts.pory"
	lock
# 733 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 734 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R3_Text_0, MSGBOX_YESNO
# 735 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Svein_R3_2
# 740 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_SVEIN_R3, ParcelIsle_T_Svein_R3_Text_1
# 741 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R3_Text_2, MSGBOX_DEFAULT
# 742 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Svein_R3_2:
# 736 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_1, MSGBOX_DEFAULT
# 737 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Svein_R4::
# 746 "data/maps/ParcelIsle/scripts.pory"
	lock
# 747 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 748 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R4_Text_0, MSGBOX_YESNO
# 749 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Svein_R4_2
# 754 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_SVEIN_R4, ParcelIsle_T_Svein_R2_Text_2
# 755 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R4_Text_1, MSGBOX_DEFAULT
# 756 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Svein_R4_2:
# 750 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_1, MSGBOX_DEFAULT
# 751 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Svein_R5::
# 760 "data/maps/ParcelIsle/scripts.pory"
	lock
# 761 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 762 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R5_Text_0, MSGBOX_YESNO
# 763 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Svein_R5_2
# 768 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_SVEIN_R5, ParcelIsle_T_Svein_R3_Text_1
# 769 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R5_Text_1, MSGBOX_DEFAULT
# 770 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Svein_R5_2:
# 764 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_1, MSGBOX_DEFAULT
# 765 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Tora::
# 774 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ISLE_TORA, ParcelIsle_T_Tora_Text_0, ParcelIsle_T_Tora_Text_1, ParcelIsle_T_Tora_FirstWin
# 778 "data/maps/ParcelIsle/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 779 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelIsle_T_Tora_3
ParcelIsle_T_Tora_1:
# 782 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelIsle_T_Tora_8
ParcelIsle_T_Tora_6:
# 785 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelIsle_T_Tora_13
ParcelIsle_T_Tora_11:
# 788 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelIsle_T_Tora_18
ParcelIsle_T_Tora_16:
# 791 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_Text_2, MSGBOX_DEFAULT
	end

ParcelIsle_T_Tora_2:
# 780 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Tora_R2
	goto ParcelIsle_T_Tora_1

ParcelIsle_T_Tora_3:
# 779 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_TORA_R2
	goto_if 0, ParcelIsle_T_Tora_2
	goto ParcelIsle_T_Tora_1

ParcelIsle_T_Tora_7:
# 783 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Tora_R3
	goto ParcelIsle_T_Tora_6

ParcelIsle_T_Tora_8:
# 782 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_TORA_R3
	goto_if 0, ParcelIsle_T_Tora_7
	goto ParcelIsle_T_Tora_6

ParcelIsle_T_Tora_12:
# 786 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Tora_R4
	goto ParcelIsle_T_Tora_11

ParcelIsle_T_Tora_13:
# 785 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_TORA_R4
	goto_if 0, ParcelIsle_T_Tora_12
	goto ParcelIsle_T_Tora_11

ParcelIsle_T_Tora_17:
# 789 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Tora_R5
	goto ParcelIsle_T_Tora_16

ParcelIsle_T_Tora_18:
# 788 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_TORA_R5
	goto_if 0, ParcelIsle_T_Tora_17
	goto ParcelIsle_T_Tora_16


ParcelIsle_T_Tora_FirstWin::
# 795 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_Text_2, MSGBOX_DEFAULT
# 796 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Tora_R2::
# 800 "data/maps/ParcelIsle/scripts.pory"
	lock
# 801 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 802 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_0, MSGBOX_YESNO
# 803 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Tora_R2_2
# 808 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_TORA_R2, ParcelIsle_T_Tora_R2_Text_2
# 809 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_3, MSGBOX_DEFAULT
# 810 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Tora_R2_2:
# 804 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_1, MSGBOX_DEFAULT
# 805 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Tora_R3::
# 814 "data/maps/ParcelIsle/scripts.pory"
	lock
# 815 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 816 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R3_Text_0, MSGBOX_YESNO
# 817 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Tora_R3_2
# 822 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_TORA_R3, ParcelIsle_T_Tora_R3_Text_1
# 823 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R3_Text_2, MSGBOX_DEFAULT
# 824 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Tora_R3_2:
# 818 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_1, MSGBOX_DEFAULT
# 819 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Tora_R4::
# 828 "data/maps/ParcelIsle/scripts.pory"
	lock
# 829 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 830 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R4_Text_0, MSGBOX_YESNO
# 831 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Tora_R4_2
# 836 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_TORA_R4, ParcelIsle_T_Tora_R4_Text_1
# 837 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R4_Text_2, MSGBOX_DEFAULT
# 838 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Tora_R4_2:
# 832 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_1, MSGBOX_DEFAULT
# 833 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Tora_R5::
# 842 "data/maps/ParcelIsle/scripts.pory"
	lock
# 843 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 844 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R5_Text_0, MSGBOX_YESNO
# 845 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Tora_R5_2
# 850 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_TORA_R5, ParcelIsle_T_Tora_R5_Text_1
# 851 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R5_Text_2, MSGBOX_DEFAULT
# 852 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Tora_R5_2:
# 846 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_1, MSGBOX_DEFAULT
# 847 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Jon::
# 856 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ISLE_JON, ParcelIsle_T_Jon_Text_0, ParcelIsle_T_Jon_Text_1, ParcelIsle_T_Jon_FirstWin
# 860 "data/maps/ParcelIsle/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 861 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelIsle_T_Jon_3
ParcelIsle_T_Jon_1:
# 864 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelIsle_T_Jon_8
ParcelIsle_T_Jon_6:
# 867 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelIsle_T_Jon_13
ParcelIsle_T_Jon_11:
# 870 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelIsle_T_Jon_18
ParcelIsle_T_Jon_16:
# 873 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_Text_2, MSGBOX_DEFAULT
	end

ParcelIsle_T_Jon_2:
# 862 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Jon_R2
	goto ParcelIsle_T_Jon_1

ParcelIsle_T_Jon_3:
# 861 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_JON_R2
	goto_if 0, ParcelIsle_T_Jon_2
	goto ParcelIsle_T_Jon_1

ParcelIsle_T_Jon_7:
# 865 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Jon_R3
	goto ParcelIsle_T_Jon_6

ParcelIsle_T_Jon_8:
# 864 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_JON_R3
	goto_if 0, ParcelIsle_T_Jon_7
	goto ParcelIsle_T_Jon_6

ParcelIsle_T_Jon_12:
# 868 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Jon_R4
	goto ParcelIsle_T_Jon_11

ParcelIsle_T_Jon_13:
# 867 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_JON_R4
	goto_if 0, ParcelIsle_T_Jon_12
	goto ParcelIsle_T_Jon_11

ParcelIsle_T_Jon_17:
# 871 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Jon_R5
	goto ParcelIsle_T_Jon_16

ParcelIsle_T_Jon_18:
# 870 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_JON_R5
	goto_if 0, ParcelIsle_T_Jon_17
	goto ParcelIsle_T_Jon_16


ParcelIsle_T_Jon_FirstWin::
# 877 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_Text_2, MSGBOX_DEFAULT
# 878 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Jon_R2::
# 882 "data/maps/ParcelIsle/scripts.pory"
	lock
# 883 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 884 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_0, MSGBOX_YESNO
# 885 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Jon_R2_2
# 890 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_JON_R2, ParcelIsle_T_Jon_R2_Text_2
# 891 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_3, MSGBOX_DEFAULT
# 892 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Jon_R2_2:
# 886 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_1, MSGBOX_DEFAULT
# 887 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Jon_R3::
# 896 "data/maps/ParcelIsle/scripts.pory"
	lock
# 897 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 898 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R3_Text_0, MSGBOX_YESNO
# 899 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Jon_R3_2
# 904 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_JON_R3, ParcelIsle_T_Jon_R3_Text_1
# 905 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R3_Text_2, MSGBOX_DEFAULT
# 906 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Jon_R3_2:
# 900 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_1, MSGBOX_DEFAULT
# 901 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Jon_R4::
# 910 "data/maps/ParcelIsle/scripts.pory"
	lock
# 911 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 912 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R4_Text_0, MSGBOX_YESNO
# 913 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Jon_R4_2
# 918 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_JON_R4, ParcelIsle_T_Jon_R3_Text_1
# 919 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R4_Text_1, MSGBOX_DEFAULT
# 920 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Jon_R4_2:
# 914 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_1, MSGBOX_DEFAULT
# 915 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Jon_R5::
# 924 "data/maps/ParcelIsle/scripts.pory"
	lock
# 925 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 926 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R5_Text_0, MSGBOX_YESNO
# 927 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Jon_R5_2
# 932 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_JON_R5, ParcelIsle_T_Jon_R5_Text_1
# 933 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R5_Text_2, MSGBOX_DEFAULT
# 934 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Jon_R5_2:
# 928 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_1, MSGBOX_DEFAULT
# 929 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Line::
# 938 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ISLE_LINE, ParcelIsle_T_Line_Text_0, ParcelIsle_T_Line_Text_1, ParcelIsle_T_Line_FirstWin
# 942 "data/maps/ParcelIsle/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 943 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelIsle_T_Line_3
ParcelIsle_T_Line_1:
# 946 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelIsle_T_Line_8
ParcelIsle_T_Line_6:
# 949 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelIsle_T_Line_13
ParcelIsle_T_Line_11:
# 952 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelIsle_T_Line_18
ParcelIsle_T_Line_16:
# 955 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_Text_2, MSGBOX_DEFAULT
	end

ParcelIsle_T_Line_2:
# 944 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Line_R2
	goto ParcelIsle_T_Line_1

ParcelIsle_T_Line_3:
# 943 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_LINE_R2
	goto_if 0, ParcelIsle_T_Line_2
	goto ParcelIsle_T_Line_1

ParcelIsle_T_Line_7:
# 947 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Line_R3
	goto ParcelIsle_T_Line_6

ParcelIsle_T_Line_8:
# 946 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_LINE_R3
	goto_if 0, ParcelIsle_T_Line_7
	goto ParcelIsle_T_Line_6

ParcelIsle_T_Line_12:
# 950 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Line_R4
	goto ParcelIsle_T_Line_11

ParcelIsle_T_Line_13:
# 949 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_LINE_R4
	goto_if 0, ParcelIsle_T_Line_12
	goto ParcelIsle_T_Line_11

ParcelIsle_T_Line_17:
# 953 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Line_R5
	goto ParcelIsle_T_Line_16

ParcelIsle_T_Line_18:
# 952 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_LINE_R5
	goto_if 0, ParcelIsle_T_Line_17
	goto ParcelIsle_T_Line_16


ParcelIsle_T_Line_FirstWin::
# 959 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_Text_2, MSGBOX_DEFAULT
# 960 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Line_R2::
# 964 "data/maps/ParcelIsle/scripts.pory"
	lock
# 965 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 966 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_0, MSGBOX_YESNO
# 967 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Line_R2_2
# 972 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_LINE_R2, ParcelIsle_T_Line_R2_Text_2
# 973 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_3, MSGBOX_DEFAULT
# 974 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Line_R2_2:
# 968 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_1, MSGBOX_DEFAULT
# 969 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Line_R3::
# 978 "data/maps/ParcelIsle/scripts.pory"
	lock
# 979 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 980 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R3_Text_0, MSGBOX_YESNO
# 981 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Line_R3_2
# 986 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_LINE_R3, ParcelIsle_T_Line_R2_Text_2
# 987 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R3_Text_1, MSGBOX_DEFAULT
# 988 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Line_R3_2:
# 982 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_1, MSGBOX_DEFAULT
# 983 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Line_R4::
# 992 "data/maps/ParcelIsle/scripts.pory"
	lock
# 993 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 994 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R4_Text_0, MSGBOX_YESNO
# 995 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Line_R4_2
# 1000 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_LINE_R4, ParcelIsle_T_Line_R4_Text_1
# 1001 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R4_Text_2, MSGBOX_DEFAULT
# 1002 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Line_R4_2:
# 996 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_1, MSGBOX_DEFAULT
# 997 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Line_R5::
# 1006 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1007 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 1008 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R5_Text_0, MSGBOX_YESNO
# 1009 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Line_R5_2
# 1014 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_LINE_R5, ParcelIsle_T_Line_R5_Text_1
# 1015 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R5_Text_2, MSGBOX_DEFAULT
# 1016 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Line_R5_2:
# 1010 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_1, MSGBOX_DEFAULT
# 1011 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_PairNets::
# 1023 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1024 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_PairNets_2
# 1029 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_PairNets_3
# 1035 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_8, MSGBOX_DEFAULT
# 1036 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_9, MSGBOX_DEFAULT
# 1037 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_10, MSGBOX_DEFAULT
# 1038 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_11, MSGBOX_DEFAULT
ParcelIsle_PairNets_1:
# 1040 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_PairNets_2:
# 1025 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_0, MSGBOX_DEFAULT
# 1026 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_1, MSGBOX_DEFAULT
# 1027 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_2, MSGBOX_DEFAULT
# 1028 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_PairNets_1

ParcelIsle_PairNets_3:
# 1030 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_4, MSGBOX_DEFAULT
# 1031 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_5, MSGBOX_DEFAULT
# 1032 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_6, MSGBOX_DEFAULT
# 1033 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_7, MSGBOX_DEFAULT
	goto ParcelIsle_PairNets_1


ParcelIsle_PairFreight::
# 1045 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1046 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_PairFreight_2
# 1051 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_PairFreight_3
# 1057 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_8, MSGBOX_DEFAULT
# 1058 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_9, MSGBOX_DEFAULT
# 1059 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_10, MSGBOX_DEFAULT
# 1060 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_11, MSGBOX_DEFAULT
ParcelIsle_PairFreight_1:
# 1062 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_PairFreight_2:
# 1047 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_0, MSGBOX_DEFAULT
# 1048 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_1, MSGBOX_DEFAULT
# 1049 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_2, MSGBOX_DEFAULT
# 1050 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_PairFreight_1

ParcelIsle_PairFreight_3:
# 1052 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_4, MSGBOX_DEFAULT
# 1053 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_5, MSGBOX_DEFAULT
# 1054 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_6, MSGBOX_DEFAULT
# 1055 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_7, MSGBOX_DEFAULT
	goto ParcelIsle_PairFreight_1


ParcelIsle_Stringer::
# 1069 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1070 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 1071 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Stringer_2
# 1073 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Stringer_3
# 1076 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Stringer_Text_2, MSGBOX_DEFAULT
# 1077 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Stringer_Text_3, MSGBOX_DEFAULT
# 1078 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Stringer_Text_4, MSGBOX_DEFAULT
ParcelIsle_Stringer_1:
# 1080 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Stringer_2:
# 1072 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Stringer_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_Stringer_1

ParcelIsle_Stringer_3:
# 1074 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Stringer_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Stringer_1


ParcelIsle_Oysterman::
# 1087 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1088 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 1089 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHOAL_DONE, ParcelIsle_Oysterman_2
# 1091 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHOAL, ParcelIsle_Oysterman_3
# 1100 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Oysterman_Text_3, MSGBOX_DEFAULT
# 1101 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SHOAL
ParcelIsle_Oysterman_1:
# 1103 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Oysterman_2:
# 1090 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Oysterman_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_Oysterman_1

ParcelIsle_Oysterman_3:
# 1092 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHOAL_FOUND, ParcelIsle_Oysterman_7
# 1097 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Oysterman_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_Oysterman_1

ParcelIsle_Oysterman_7:
# 1093 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Oysterman_Text_1, MSGBOX_DEFAULT
# 1094 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_PEARL, 2
# 1095 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SHOAL_DONE
	goto ParcelIsle_Oysterman_1


ParcelIsle_ShoalStake::
# 1108 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHOAL, ParcelIsle_ShoalStake_4
ParcelIsle_ShoalStake_3:
# 1112 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ShoalStake_Text_1, MSGBOX_SIGN
ParcelIsle_ShoalStake_1:
	end

ParcelIsle_ShoalStake_2:
# 1109 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ShoalStake_Text_0, MSGBOX_SIGN
# 1110 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SHOAL_FOUND
	goto ParcelIsle_ShoalStake_1

ParcelIsle_ShoalStake_4:
# 1108 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SHOAL_FOUND, ParcelIsle_ShoalStake_2
	goto ParcelIsle_ShoalStake_3


ParcelIsle_FindTally::
# 1120 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TALLY, ParcelIsle_FindTally_4
ParcelIsle_FindTally_3:
# 1124 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FindTally_Text_1, MSGBOX_SIGN
ParcelIsle_FindTally_1:
	end

ParcelIsle_FindTally_2:
# 1121 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FindTally_Text_0, MSGBOX_SIGN
# 1122 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_TALLY_FOUND
	goto ParcelIsle_FindTally_1

ParcelIsle_FindTally_4:
# 1120 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_TALLY_FOUND, ParcelIsle_FindTally_2
	goto ParcelIsle_FindTally_3


ParcelIsle_PairGreen::
# 1130 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1131 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_PairGreen_2
# 1136 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_PairGreen_3
# 1141 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_7, MSGBOX_DEFAULT
# 1142 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_8, MSGBOX_DEFAULT
# 1143 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_9, MSGBOX_DEFAULT
# 1144 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_10, MSGBOX_DEFAULT
ParcelIsle_PairGreen_1:
# 1146 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_PairGreen_2:
# 1132 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_0, MSGBOX_DEFAULT
# 1133 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_1, MSGBOX_DEFAULT
# 1134 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_2, MSGBOX_DEFAULT
# 1135 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_PairGreen_1

ParcelIsle_PairGreen_3:
# 1137 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_4, MSGBOX_DEFAULT
# 1138 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_5, MSGBOX_DEFAULT
# 1139 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_6, MSGBOX_DEFAULT
	goto ParcelIsle_PairGreen_1


ParcelIsle_Board1::
# 1153 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Board1_Text_0, MSGBOX_SIGN
	end


ParcelIsle_Board2::
# 1158 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Board2_Text_0, MSGBOX_SIGN
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

ParcelIsle_Arrival_Text_3:
# 55 "data/maps/ParcelIsle/scripts.pory"
	.string "You stand a moment on the boards. The\n"
	.string "fog has the smell of a wet place at\l"
	.string "dusk, and for one breath you are nine\l"
	.string "years old and somebody small is\l"
	.string "painting the water beside you.\p"
	.string "You shoulder the pack. You came empty\n"
	.string "on purpose.$"

ParcelIsle_HeavyCoat_Text_0:
# 94 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAM: The schedule board's got a date\n"
	.string "on it again. First time in a year!\p"
	.string "I'd say things are looking up, but I've\n"
	.string "been wrong before.$"

ParcelIsle_HeavyCoat_Text_1:
# 96 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAM: Mainland papers came in with the\n"
	.string "ferry. The river's on page two. Page two!\l"
	.string "Nothing from up here's been on page two\l"
	.string "since the wreck.\p"
	.string "Your name's not in it. The knot is, near\n"
	.string "enough. 'A Corps provisional.'$"

ParcelIsle_HeavyCoat_Text_2:
# 98 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAM: So you're a RANGER now.\n"
	.string "Provisional, but still.\p"
	.string "Take it from a ferry hand: the knot on\n"
	.string "your pack means more around here than\l"
	.string "the badge does.$"

ParcelIsle_HeavyCoat_Text_3:
# 100 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAM: The inn's up the lane, past the\n"
	.string "POKéMON CENTER. Door with the lamp.\p"
	.string "The RANGERS are past the north gate, if\n"
	.string "that's who you're here for. Rin usually\l"
	.string "leaves it open.$"

ParcelIsle_Fisher_Text_0:
# 111 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: That's my net! Only ANNI doubles\n"
	.string "the edge like that.\p"
	.string "She sent you all the way down here?\n"
	.string "Then she likes you. She doesn't like\l"
	.string "anybody.$"

ParcelIsle_Fisher_Text_1:
# 112 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: Here, take my spare rod. It's old,\n"
	.string "but it knows this water.\p"
	.string "Throw the little ones back, okay?\n"
	.string "There's fewer every year.$"

ParcelIsle_Fisher_Text_2:
# 119 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: They have to count the fish\n"
	.string "properly now. In front of people!\p"
	.string "Forty years I counted for nobody.\n"
	.string "Funny to be right and hate it.$"

ParcelIsle_Fisher_Text_3:
# 121 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: The herring came in thin this\n"
	.string "week. Thin and early.\p"
	.string "That's not a season. That's a symptom.\n"
	.string "You're the RANGER, you tell me the word\l"
	.string "for it.$"

ParcelIsle_Fisher_Text_4:
# 123 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: The currents have been wrong\n"
	.string "for weeks. The fish know it before we\l"
	.string "do.\p"
	.string "You didn't hear that from me.$"

ParcelIsle_Dockworker_Text_0:
# 134 "data/maps/ParcelIsle/scripts.pory"
	.string "ROLF: Eighteen months of delay, they're\n"
	.string "saying. You know what eighteen months\l"
	.string "is to a guy on a day rate?\p"
	.string "I'm not saying you're wrong. ANNI read\n"
	.string "me the frog part. I'm saying it's easy to\l"
	.string "be right when it's not your boat.$"

ParcelIsle_Dockworker_Text_1:
# 136 "data/maps/ParcelIsle/scripts.pory"
	.string "ROLF: Boat's not late today. Boat's not\n"
	.string "coming. The office says 'pending\l"
	.string "review'.\p"
	.string "That your review? Yeah. Thought so.$"

ParcelIsle_Dockworker_Text_2:
# 138 "data/maps/ParcelIsle/scripts.pory"
	.string "ROLF: The crest on the crates is the\n"
	.string "crest on my paycheck. Same one that's\l"
	.string "on the RANGERS' gear, come to think of\l"
	.string "it.\p"
	.string "Funny what you stop noticing.$"

ParcelIsle_Dockworker_Text_3:
# 140 "data/maps/ParcelIsle/scripts.pory"
	.string "ROLF: Boat's late. Boat's always late\n"
	.string "now.\p"
	.string "If you want work, there's a board by the\n"
	.string "inn. Mostly it says 'no'.$"

ParcelIsle_NetMender_Text_0:
# 152 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: ROLF had me read him your report.\n"
	.string "The frog part, twice.\p"
	.string "He didn't say anything after. For ROLF,\n"
	.string "that's a speech.$"

ParcelIsle_NetMender_Text_1:
# 154 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: TOBIN gave you his rod? He's\n"
	.string "never lent that to anyone!\p"
	.string "Go fish the inlet. Tell me if the\n"
	.string "MAGIKARP are still in there. They used\l"
	.string "to be so thick you could walk across.$"

ParcelIsle_NetMender_Text_2:
# 160 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: TOBIN's at the end of the jetty,\n"
	.string "on the platform. He won't come up. Says\l"
	.string "the town's gone strange.\p"
	.string "He's right, but the net still needs\n"
	.string "carrying.$"

ParcelIsle_NetMender_Text_3:
# 165 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: You're the new RANGER, right?\n"
	.string "Good, you can carry things.\p"
	.string "This net's mended and TOBIN's is torn.\n"
	.string "My knees don't do the jetty anymore.$"

ParcelIsle_NetMender_Text_4:
# 166 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: Take it down to him. End of the\n"
	.string "jetty, the grumpy one.\p"
	.string "Tell him the edge is doubled. He'll know\n"
	.string "whose it is.$"

ParcelIsle_NetMender_Text_5:
# 171 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: Nets don't tear like they used to.\n"
	.string "Nothing in them heavy enough to tear\l"
	.string "them.\p"
	.string "Don't write that down. It's not a fact.\n"
	.string "It's just true.$"

ParcelIsle_HarbourLad_Text_0:
# 181 "data/maps/ParcelIsle/scripts.pory"
	.string "KIP: You got off the ferry with a bag\n"
	.string "and no POKéMON? Not even one?\p"
	.string "Come back when you've got something.\n"
	.string "Then we'll see.$"

ParcelIsle_HarbourLad_Text_1:
# 187 "data/maps/ParcelIsle/scripts.pory"
	.string "KIP: Hey, mainlander! Bet you can't beat\n"
	.string "my KRABBY.\p"
	.string "The whole channel used to be full of\n"
	.string "them!$"

ParcelIsle_HarbourLad_Text_2:
# 188 "data/maps/ParcelIsle/scripts.pory"
	.string "KIP: Used to be. Yeah.$"

ParcelIsle_HarbourLad_Text_3:
# 192 "data/maps/ParcelIsle/scripts.pory"
	.string "KIP: My dad says you cost him his berth.\n"
	.string "My mom says you saved the channel.\p"
	.string "They had that fight at dinner. I ate in\n"
	.string "the loft.$"

ParcelIsle_HarbourLad_Text_4:
# 194 "data/maps/ParcelIsle/scripts.pory"
	.string "KIP: There were dozens of KRABBY under\n"
	.string "the jetty when I was little. Now I have\l"
	.string "to go out to the rocks to find one.\p"
	.string "I'm not sad about it. I'm just saying\n"
	.string "where they went.$"

ParcelIsle_Widow_Text_0:
# 205 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Eleven this morning. I still\n"
	.string "count them. It's how I say good morning\l"
	.string "to someone who isn't here.$"

ParcelIsle_Widow_Text_1:
# 211 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: You put the gulls in your\n"
	.string "report. The actual gulls!\p"
	.string "My EIRIK would have liked that. He\n"
	.string "never trusted a number he hadn't\l"
	.string "counted himself.$"

ParcelIsle_Widow_Text_2:
# 212 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: This was his. It's the only\n"
	.string "thing on the boat the sea didn't take.\p"
	.string "It should go to someone who counts.$"

ParcelIsle_Widow_Text_3:
# 216 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Nine today. When EIRIK still\n"
	.string "fished there were forty on these racks.\l"
	.string "Forty!\p"
	.string "Write that down. Nine. Somebody should\n"
	.string "have the number besides me.$"

ParcelIsle_Widow_Text_4:
# 218 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Twelve this morning. Come back\n"
	.string "another day and I'll give you the next\l"
	.string "one.\p"
	.string "A number only means something twice.$"

ParcelIsle_Widow_Text_5:
# 223 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Count the gulls with me. On the\n"
	.string "racks there. Go on.\p"
	.string "Twelve. Say it back, so two of us know\n"
	.string "it.$"

ParcelIsle_Widow_Text_6:
# 225 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Twelve. Good. My husband kept\n"
	.string "that count for thirty years.\p"
	.string "Come back and I'll give you the next\n"
	.string "one. That's all a survey is, you know.\l"
	.string "Somebody coming back.$"

ParcelIsle_Widow_Text_7:
# 228 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: No? Then it's just me who\n"
	.string "knows. That's been fine so far.$"

ParcelIsle_FerrySign_Text_0:
# 236 "data/maps/ParcelIsle/scripts.pory"
	.string "FERRY LANDING\p"
	.string "Mainland service: SUSPENDED\n"
	.string "PENDING REGIONAL REVIEW\p"
	.string "Someone wrote underneath in pencil:\n"
	.string "ABOUT TIME.$"

ParcelIsle_FerrySign_Text_1:
# 238 "data/maps/ParcelIsle/scripts.pory"
	.string "FERRY LANDING\p"
	.string "The mainland schedule board is blank.\n"
	.string "It has been for a while.$"

ParcelIsle_FerryCaptain_Text_0:
# 250 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: Eleven in the first decade,\n"
	.string "four in the second, one in the third.\l"
	.string "That's the count. I knew it. I wanted it\l"
	.string "said back to me by a notebook.\p"
	.string "Here. For the boat you'll need one day.$"

ParcelIsle_FerryCaptain_Text_1:
# 254 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: The pier post. Far end. Count\n"
	.string "the notches, not the splinters.$"

ParcelIsle_FerryCaptain_Text_2:
# 259 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: Every LAPRAS I've seen on the\n"
	.string "crossing in thirty years, I've cut a\l"
	.string "notch in the pier post. The post's\l"
	.string "rotting. Before it goes, I'd like the\l"
	.string "count read by somebody whose word\l"
	.string "carries.\p"
	.string "It's at the far end, by the water. Read\n"
	.string "it and tell me.$"

ParcelIsle_FerryCaptain_Text_3:
# 265 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: Passage out, RANGER? Any\n"
	.string "time. Any weather. You've paid for the\l"
	.string "ferry for life, the harbour office says.\l"
	.string "I'd have taken you anyway.$"

ParcelIsle_FerryCaptain_Text_4:
# 270 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: Passage out? Not in this cold,\n"
	.string "not without a reason.\p"
	.string "Come back when the RANGERS have sent\n"
	.string "you up the mountains. You'll know when.$"

ParcelIsle_FerryCaptain_Text_5:
# 274 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: Harbour's open. Where to?$"

ParcelIsle_FerryCaptain_Text_6:
# 286 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: The coast run opens after\n"
	.string "you've made the DELIBIRD crossing.\n"
	.string "One island at a time.$"

ParcelIsle_FerryCaptain_Text_7:
# 298 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: The climate station? That run\n"
	.string "opens once you've worked the coast.\l"
	.string "Not before.$"

ParcelIsle_FerryCaptain_Text_8:
# 309 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: Suit yourself. I'll be on the\n"
	.string "water.$"

ParcelIsle_GateMoore_Text_0:
# 319 "data/maps/ParcelIsle/scripts.pory"
	.string "MOORE: Harbour-master. Every hull and\n"
	.string "every hand that moves through here\l"
	.string "goes in my log.\p"
	.string "You want harbour clearance? Earn it.$"

ParcelIsle_GateMoore_Text_1:
# 320 "data/maps/ParcelIsle/scripts.pory"
	.string "MOORE: Noted. The harbour knows your\n"
	.string "name now.$"

ParcelIsle_GateMoore_Text_2:
# 324 "data/maps/ParcelIsle/scripts.pory"
	.string "MOORE: You're cleared through the\n"
	.string "landing. The ferry runs answer to the\l"
	.string "log, and the log answers for you.$"

ParcelIsle_GateMoore_Defeated_Text_0:
# 331 "data/maps/ParcelIsle/scripts.pory"
	.string "MOORE: Harbour clearance, entered\n"
	.string "against your card.\p"
	.string "Nobody hands that out. You took it.$"

ParcelIsle_LogisticsClerk_Text_0:
# 350 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: Half my manifests are on hold. The\n"
	.string "other half are lawyers.\p"
	.string "I used to log trucks. Now I log the\n"
	.string "absence of trucks. It's the same form!$"

ParcelIsle_LogisticsClerk_Text_1:
# 352 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: Three crates of soil cores,\n"
	.string "FERNWICK to the river, marked EVIDENCE.\l"
	.string "I've logged a lot of things. Never that\l"
	.string "word.\p"
	.string "And two trucks of sandbags back from\n"
	.string "the basin, empty. Empty is a manifest\l"
	.string "too.$"

ParcelIsle_LogisticsClerk_Text_2:
# 354 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: Relief convoy for the basin.\n"
	.string "Three trucks, FOUNDATION crest,\l"
	.string "Council seal.\p"
	.string "Relief for what? Don't ask me. I log\n"
	.string "what moves.$"

ParcelIsle_LogisticsClerk_Text_3:
# 356 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: The RANGERS are hiring again?\n"
	.string "Congratulations. Your gear came in on\l"
	.string "our manifest, by the way.\p"
	.string "Not a complaint. I'm paid for accuracy.$"

ParcelIsle_LogisticsClerk_Text_4:
# 358 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: Everything that moves through\n"
	.string "SALTWICK is on a manifest. Fuel, crates,\l"
	.string "the ferry you came in on.\p"
	.string "You? 'Passenger, one, island stop.' I've\n"
	.string "already got you.$"

ParcelIsle_KidA_Text_0:
# 369 "data/maps/ParcelIsle/scripts.pory"
	.string "EBBA: NILS says you wrote everything\n"
	.string "down. Even the frogs!\p"
	.string "Are we in it? We saw them first!$"

ParcelIsle_KidA_Text_1:
# 371 "data/maps/ParcelIsle/scripts.pory"
	.string "EBBA: NILS says the frogs in the river\n"
	.string "got counted by the WHOLE VILLAGE and\l"
	.string "it went in a book.\p"
	.string "Ours only got counted by us. Does ours\n"
	.string "count less? NILS says counting is\l"
	.string "counting.$"

ParcelIsle_KidA_Text_2:
# 373 "data/maps/ParcelIsle/scripts.pory"
	.string "EBBA: You saw them too! On the bridge!\n"
	.string "Going the wrong way!\p"
	.string "NILS said you'd say we made it up. You\n"
	.string "didn't.$"

ParcelIsle_KidA_Text_3:
# 375 "data/maps/ParcelIsle/scripts.pory"
	.string "EBBA: There were frogs in the inlet\n"
	.string "going the WRONG way! Upstream! All in a\l"
	.string "line, like they were late for something!\p"
	.string "NILS says frogs don't get late.$"

ParcelIsle_KidB_Text_0:
# 385 "data/maps/ParcelIsle/scripts.pory"
	.string "NILS: What's the word? For when a place\n"
	.string "is running out?\p"
	.string "EBBA says you've got a word for it now.\n"
	.string "I want the word.$"

ParcelIsle_KidB_Text_1:
# 387 "data/maps/ParcelIsle/scripts.pory"
	.string "NILS: Counting is counting. Twelve this\n"
	.string "week, in the inlet. I wrote the date like\l"
	.string "you do.\p"
	.string "EBBA wants to send it to the river. I\n"
	.string "said they've got their own frogs. She\l"
	.string "said that's the point.$"

ParcelIsle_KidB_Text_2:
# 389 "data/maps/ParcelIsle/scripts.pory"
	.string "NILS: Gran says the POLIWAG have\n"
	.string "always done that. Gran says a lot of\l"
	.string "things have always done that.\p"
	.string "I counted anyway. Fourteen. Less than\n"
	.string "last time.$"

ParcelIsle_KidB_Text_3:
# 391 "data/maps/ParcelIsle/scripts.pory"
	.string "NILS: Frogs don't get late. They get\n"
	.string "scared, maybe.\p"
	.string "Don't tell EBBA I said scared.$"

ParcelIsle_OldMan_Text_0:
# 403 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: ...Well. There it is. Twenty-two\n"
	.string "years in the water and it's cleaner than\l"
	.string "I am.\p"
	.string "Blow it? No. Let it be. Some things you\n"
	.string "keep because they're quiet now.$"

ParcelIsle_OldMan_Text_1:
# 404 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: Here. This came off my first\n"
	.string "partner's collar. She was a loud one too.\l"
	.string "Take it; the whistle and the bell don't\l"
	.string "need to be in the same drawer.$"

ParcelIsle_OldMan_Text_2:
# 407 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: Low water gave it back. Mark\n"
	.string "that in your book. Low water gives\l"
	.string "things back right before it takes the\l"
	.string "rest.$"

ParcelIsle_OldMan_Text_3:
# 411 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: The inlet, by the bridge. Low\n"
	.string "water. Look where the light goes flat on\l"
	.string "the stones.$"

ParcelIsle_OldMan_Text_4:
# 416 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: Somebody finally said it out\n"
	.string "loud. In writing, with a name at the\l"
	.string "bottom.\p"
	.string "It'll cost you. It'll cost everyone.\n"
	.string "Forty years on that bridge and it never\l"
	.string "once occurred to me that the cost was\l"
	.string "the point.$"

ParcelIsle_OldMan_Text_5:
# 418 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: Forty years on that bridge and\n"
	.string "I lost one thing in all of it. A whistle.\l"
	.string "Corps issue, brass, on a lanyard. Went\l"
	.string "over the rail into the inlet the night\l"
	.string "the marsh road flooded.\p"
	.string "Low water this year. Lowest I've seen.\n"
	.string "If it's ever going to show, it's now.\p"
	.string "Have a look along the inlet by the\n"
	.string "bridge, would you. Humour an old man.$"

ParcelIsle_OldMan_Text_6:
# 421 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: Six people stood up in a river\n"
	.string "hall and the Board wrote down what they\l"
	.string "said. In my forty years that happened\l"
	.string "never.\p"
	.string "HALE will say it's procedure. It isn't.\n"
	.string "It's weather turning. Watch the water\l"
	.string "here. It'll know first.$"

ParcelIsle_OldMan_Text_7:
# 423 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: HALE signed for you? HALE\n"
	.string "doesn't sign for anyone! He didn't sign\l"
	.string "for me, and I ran his station before he\l"
	.string "did.\p"
	.string "Watch him. Not because he's wrong.\n"
	.string "Because he's tired.$"

ParcelIsle_OldMan_Text_8:
# 425 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: Forty years I walked that\n"
	.string "bridge for the RANGERS. Never saw the\l"
	.string "water this quiet.\p"
	.string "Quiet isn't peace, kid. Quiet is a place\n"
	.string "holding its breath.$"

ParcelIsle_Birder_Text_0:
# 437 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: The storm birds were on the\n"
	.string "radio this morning! By name! DELIBIRD!\p"
	.string "Forty years of lists and I never once\n"
	.string "made the news. Good.$"

ParcelIsle_Birder_Text_1:
# 439 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: Eleven species on the inlet\n"
	.string "today. Twenty, the year I started.\p"
	.string "My list is the only thing I own that\n"
	.string "gets shorter and heavier at the same\l"
	.string "time.$"

ParcelIsle_Birder_Text_2:
# 445 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: You've been out to the island!\n"
	.string "I can tell, the cold's still in your coat.\p"
	.string "Tell me. Did you see one? A DELIBIRD. On\n"
	.string "the ground, not in a picture.$"

ParcelIsle_Birder_Text_3:
# 447 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: Then they're still there! I\n"
	.string "haven't been able to make the crossing\l"
	.string "since my knee went.\p"
	.string "Take this. It's for looking at far-off\n"
	.string "things. I'm done needing it.$"

ParcelIsle_Birder_Text_4:
# 451 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: No? Well. That's honest. Come\n"
	.string "back when you have.$"

ParcelIsle_Birder_Text_5:
# 457 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: That's a survey knot on your\n"
	.string "pack. ILEX ties them left over right.\l"
	.string "Nobody else does.\p"
	.string "If the RANGERS ever send you north to\n"
	.string "the island, look for a bird with a tail\l"
	.string "like a rope. Then come tell me.$"

ParcelIsle_Birder_Text_6:
# 459 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: WINGULL, PELIPPER, and one\n"
	.string "SWABLU with no business this far north.\p"
	.string "I keep a list. It's shorter than it used\n"
	.string "to be. That's not an opinion. That's a\l"
	.string "list.$"

ParcelIsle_KidTrainer_Text_0:
# 467 "data/maps/ParcelIsle/scripts.pory"
	.string "TIMO: You're from the mainland!\n"
	.string "Mainlanders always have cool POKéMON.\l"
	.string "Let's battle!$"

ParcelIsle_KidTrainer_Text_1:
# 468 "data/maps/ParcelIsle/scripts.pory"
	.string "TIMO: Whoa. Okay!$"

ParcelIsle_KidTrainer_Text_2:
# 472 "data/maps/ParcelIsle/scripts.pory"
	.string "TIMO: You went past the bridge! Gran\n"
	.string "says you're allowed because of the\l"
	.string "knot.\p"
	.string "What's out there? No, wait, don't tell\n"
	.string "me. I want to be allowed first.$"

ParcelIsle_KidTrainer_Text_3:
# 474 "data/maps/ParcelIsle/scripts.pory"
	.string "TIMO: Gran says don't go past the\n"
	.string "bridge.\p"
	.string "She won't say why. She just gets quiet.$"

ParcelIsle_TownSign_Text_0:
# 481 "data/maps/ParcelIsle/scripts.pory"
	.string "SALTWICK\p"
	.string "Saltmarsh Coast -- Skaldmere Regional\n"
	.string "Council\p"
	.string "A newer plate underneath: HARBOUR\n"
	.string "WORKS BY MEREHOLT COASTAL.$"

ParcelIsle_Neighbor_Text_0:
# 494 "data/maps/ParcelIsle/scripts.pory"
	.string "MARIT: I told you to forget I said\n"
	.string "anything, that first day. I'm not saying\l"
	.string "it now.\p"
	.string "She wrote about you because she knew\n"
	.string "you'd do this. I think she was sorry. I\l"
	.string "think she knew that too.$"

ParcelIsle_Neighbor_Text_1:
# 496 "data/maps/ParcelIsle/scripts.pory"
	.string "MARIT: The river story came up the\n"
	.string "coast on the ferry before the papers\l"
	.string "did. Fishwives are faster than print.\p"
	.string "They say a Corps provisional read the\n"
	.string "Board's own numbers back to them. I\l"
	.string "said I know who that is. Then I shut my\l"
	.string "mouth, for once.$"

ParcelIsle_Neighbor_Text_2:
# 498 "data/maps/ParcelIsle/scripts.pory"
	.string "MARIT: You've been in the annex. People\n"
	.string "come out of there quiet.\p"
	.string "She left it tidy. That's what nobody\n"
	.string "says. Ransacked places aren't tidy.$"

ParcelIsle_Neighbor_Text_3:
# 500 "data/maps/ParcelIsle/scripts.pory"
	.string "MARIT: Oh! You're the one the scientist\n"
	.string "wrote about, aren't you? The young\l"
	.string "naturalist with the--$"

ParcelIsle_Neighbor_Text_4:
# 503 "data/maps/ParcelIsle/scripts.pory"
	.string "MARIT: Forget I said anything. It's cold\n"
	.string "out. Get indoors, {PLAYER}.$"

ParcelIsle_Innkeeper_Text_0:
# 521 "data/maps/ParcelIsle/scripts.pory"
	.string "LIV: Two lawyers and a reporter in the\n"
	.string "good rooms. Mom's charging them double\l"
	.string "and apologizing for it.\p"
	.string "Your room's still yours. She won't let\n"
	.string "anyone else have it.$"

ParcelIsle_Innkeeper_Text_1:
# 523 "data/maps/ParcelIsle/scripts.pory"
	.string "LIV: Mom's making the big pot on\n"
	.string "Thursdays now, for whoever's off the\l"
	.string "ferry. Rangers, mostly. One from the\l"
	.string "basin cried into it.\p"
	.string "She says the scientist would've\n"
	.string "approved. She says it to the pot, not to\l"
	.string "me.$"

ParcelIsle_Innkeeper_Text_2:
# 525 "data/maps/ParcelIsle/scripts.pory"
	.string "LIV: Mom says RANGERS eat like they get\n"
	.string "paid in weather. She made the big pot.\p"
	.string "She hasn't made the big pot since the\n"
	.string "scientist left.$"

ParcelIsle_Innkeeper_Text_3:
# 527 "data/maps/ParcelIsle/scripts.pory"
	.string "LIV: Mom's kept your room since the\n"
	.string "letter came. Swept it every week. She\l"
	.string "wouldn't say who for.\p"
	.string "The lamp's lit. Go on in, you'll freeze.$"

ParcelIsle_ChandlerBrother_Text_0:
# 538 "data/maps/ParcelIsle/scripts.pory"
	.string "OSSIAN: KIT's sold more rope this week\n"
	.string "than all winter. Everyone suddenly\l"
	.string "wants to tie something down.\p"
	.string "Me, I sit. Turns out sitting was the\n"
	.string "wrong way to be right.$"

ParcelIsle_ChandlerBrother_Text_1:
# 540 "data/maps/ParcelIsle/scripts.pory"
	.string "OSSIAN: KIT's had a run on lamp oil.\n"
	.string "People reading late. Minutes from the\l"
	.string "river, passed hand to hand.\p"
	.string "I've read them. I sit. Reading is a kind\n"
	.string "of sitting.$"

ParcelIsle_ChandlerBrother_Text_2:
# 542 "data/maps/ParcelIsle/scripts.pory"
	.string "OSSIAN: KIT's got the RANGER stock in\n"
	.string "now. REPELS, the good POTIONS. Says the\l"
	.string "RANGERS pay on time, unlike some.\p"
	.string "She means the fleet. She won't say the\n"
	.string "fleet.$"

ParcelIsle_ChandlerBrother_Text_3:
# 544 "data/maps/ParcelIsle/scripts.pory"
	.string "OSSIAN: KIT's inside. She sells, I sit.\n"
	.string "It's an arrangement.\p"
	.string "Wind's been coming off the water wrong\n"
	.string "all month. You get used to it. Mostly.$"

ParcelIsle_LabSign_Text_0:
# 556 "data/maps/ParcelIsle/scripts.pory"
	.string "FIELD RESEARCH ANNEX\n"
	.string "Skaldmere Survey cooperative site\p"
	.string "A strip of red cloth is nailed under the\n"
	.string "plate, faded gray.$"

ParcelIsle_HallSign_Text_0:
# 561 "data/maps/ParcelIsle/scripts.pory"
	.string "SALTWICK FISHERS' CO-OPERATIVE\p"
	.string "Meetings first Tuesday. Members and\n"
	.string "guests.\p"
	.string "Stencilled underneath: WITH THE\n"
	.string "SUPPORT OF THE MEREHOLT FOUNDATION.$"

ParcelIsle_NoticeBoard_Text_0:
# 567 "data/maps/ParcelIsle/scripts.pory"
	.string "NOTICES\p"
	.string "REGIONAL HEARINGS -- COASTAL QUOTAS.\n"
	.string "Public sessions Thursdays at the\l"
	.string "Council hall. Transport provided.\p"
	.string "MEREHOLT COASTAL: day-rate hiring\n"
	.string "SUSPENDED pending review.\p"
	.string "Someone pinned a strip of red cloth to\n"
	.string "the corner of the board.$"

ParcelIsle_NoticeBoard_Text_1:
# 569 "data/maps/ParcelIsle/scripts.pory"
	.string "NOTICES\p"
	.string "SKALDMERE CLIMATE CORPS: provisional\n"
	.string "RANGERS wanted. Apply at the district\l"
	.string "station.\p"
	.string "MEREHOLT COASTAL: day-rate hiring,\n"
	.string "quay, dawn. Own boots.\p"
	.string "LOST: one gray cat, answers to SEDGE.$"

ParcelIsle_NoticeBoard_Text_2:
# 571 "data/maps/ParcelIsle/scripts.pory"
	.string "NOTICES\p"
	.string "MEREHOLT COASTAL: day-rate hiring,\n"
	.string "quay, dawn. Own boots.\p"
	.string "FERRY SCHEDULE: see board at landing.\p"
	.string "LOST: one gray cat, answers to SEDGE.\p"
	.string "A fourth notice has been torn down. Two\n"
	.string "corners are still under the pins.$"

ParcelIsle_WeatherStationSign_Text_0:
# 577 "data/maps/ParcelIsle/scripts.pory"
	.string "AUTOMATED WEATHER STATION 04\n"
	.string "Skaldmere Climate Corps\p"
	.string "Instrument sponsorship: the MEREHOLT\n"
	.string "FOUNDATION\p"
	.string "The anemometer turns. The logger light\n"
	.string "is off.$"

ParcelIsle_PreserveGateSign_Text_0:
# 582 "data/maps/ParcelIsle/scripts.pory"
	.string "MISTWOOD SHORE PRESERVE\n"
	.string "Skaldmere Climate Corps -- Holding\l"
	.string "Meadow\p"
	.string "No entry without a RANGER present.\p"
	.string "The MEREHOLT FOUNDATION crest, cast in\n"
	.string "bronze, very clean.$"

ParcelIsle_CenterAide_Text_0:
# 594 "data/maps/ParcelIsle/scripts.pory"
	.string "MEDIC: Aid station's for POKéMON. Yours\n"
	.string "look like they've walked a region. They\l"
	.string "have. Leave them with me an hour.$"

ParcelIsle_CenterAide_Text_1:
# 599 "data/maps/ParcelIsle/scripts.pory"
	.string "MEDIC: The aid station's been busier.\n"
	.string "Not with injuries. With rangers coming\l"
	.string "down off the ferry to sit a minute\l"
	.string "before they walk home.\p"
	.string "The basin and the river, mostly. I don't\n"
	.string "ask. I put the kettle on.$"

ParcelIsle_CenterAide_Text_2:
# 603 "data/maps/ParcelIsle/scripts.pory"
	.string "MEDIC: Aid station's for POKéMON, and\n"
	.string "you haven't got one yet.\p"
	.string "RIN's up at the meadow, through the\n"
	.string "north gate. Go get picked. Then come\l"
	.string "back and I'll move.$"

ParcelIsle_T_Brand_Text_0:
# 611 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Off the ferry crew. Nothing to\n"
	.string "do till the tide. Battle me, RANGER, the\l"
	.string "harbour's dull.$"

ParcelIsle_T_Brand_Text_1:
# 612 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Tide's in. Figuratively.$"

ParcelIsle_T_Brand_Text_2:
# 627 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Three ferry routes now.\n"
	.string "DELIBIRD, the coast, the station. The\l"
	.string "coast one's full every run. Nobody\l"
	.string "comes back smiling.$"

ParcelIsle_T_Brand_R2_Text_0:
# 638 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelIsle_T_Brand_R2_Text_1:
# 640 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Another time, then.$"

ParcelIsle_T_Brand_R2_Text_2:
# 644 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Right. That's the whole of it.$"

ParcelIsle_T_Brand_R2_Text_3:
# 645 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelIsle_T_Brand_R3_Text_0:
# 652 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelIsle_T_Brand_R3_Text_1:
# 659 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelIsle_T_Brand_R4_Text_0:
# 666 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelIsle_T_Brand_R4_Text_1:
# 672 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Still yours.$"

ParcelIsle_T_Brand_R4_Text_2:
# 673 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelIsle_T_Brand_R5_Text_0:
# 680 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelIsle_T_Brand_R5_Text_1:
# 686 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Noted. Properly, this time.$"

ParcelIsle_T_Brand_R5_Text_2:
# 687 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelIsle_T_Svein_Text_0:
# 693 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Fishing the jetty. Not catching.\n"
	.string "There's a difference. Battle?$"

ParcelIsle_T_Svein_Text_1:
# 694 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Caught something at last.$"

ParcelIsle_T_Svein_Text_2:
# 709 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: ANNI says the nets are fine and\n"
	.string "the sea is empty. I'm starting to\l"
	.string "believe her.$"

ParcelIsle_T_Svein_R2_Text_0:
# 720 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: I kept the team up for this.\n"
	.string "Again?$"

ParcelIsle_T_Svein_R2_Text_1:
# 722 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Fine. Same spot.$"

ParcelIsle_T_Svein_R2_Text_2:
# 726 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: That's the one I wanted to see.$"

ParcelIsle_T_Svein_R2_Text_3:
# 727 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelIsle_T_Svein_R3_Text_0:
# 734 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelIsle_T_Svein_R3_Text_1:
# 740 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Still yours.$"

ParcelIsle_T_Svein_R3_Text_2:
# 741 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: One more in me. After the high\n"
	.string "ground.$"

ParcelIsle_T_Svein_R4_Text_0:
# 748 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelIsle_T_Svein_R4_Text_1:
# 755 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelIsle_T_Svein_R5_Text_0:
# 762 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelIsle_T_Svein_R5_Text_1:
# 769 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelIsle_T_Tora_Text_0:
# 775 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: New in town. Everyone's new in\n"
	.string "town eventually. Battle me so I know\l"
	.string "your name.$"

ParcelIsle_T_Tora_Text_1:
# 776 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Noted. The name, I mean.$"

ParcelIsle_T_Tora_Text_2:
# 791 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: The CORPS gets a new provisional\n"
	.string "every spring. Most of them go north and\l"
	.string "we hear about them on the radio. Mind\l"
	.string "you come back.$"

ParcelIsle_T_Tora_R2_Text_0:
# 802 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelIsle_T_Tora_R2_Text_1:
# 804 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: No hurry. The water keeps.$"

ParcelIsle_T_Tora_R2_Text_2:
# 808 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: …Again, then. Later.$"

ParcelIsle_T_Tora_R2_Text_3:
# 809 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelIsle_T_Tora_R3_Text_0:
# 816 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelIsle_T_Tora_R3_Text_1:
# 822 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Still yours.$"

ParcelIsle_T_Tora_R3_Text_2:
# 823 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelIsle_T_Tora_R4_Text_0:
# 830 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelIsle_T_Tora_R4_Text_1:
# 836 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Noted. Properly, this time.$"

ParcelIsle_T_Tora_R4_Text_2:
# 837 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelIsle_T_Tora_R5_Text_0:
# 844 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelIsle_T_Tora_R5_Text_1:
# 850 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Right. That's the whole of it.$"

ParcelIsle_T_Tora_R5_Text_2:
# 851 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelIsle_T_Jon_Text_0:
# 857 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: The chandlery's closed, the hall's\n"
	.string "full of meetings, and I'm bored. Battle!$"

ParcelIsle_T_Jon_Text_1:
# 858 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Less bored now.$"

ParcelIsle_T_Jon_Text_2:
# 873 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: My dad says the marsh north of\n"
	.string "FERNWICK smells like money. He means\l"
	.string "somebody's making some.$"

ParcelIsle_T_Jon_R2_Text_0:
# 884 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelIsle_T_Jon_R2_Text_1:
# 886 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: No hurry. The water keeps.$"

ParcelIsle_T_Jon_R2_Text_2:
# 890 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Noted. Properly, this time.$"

ParcelIsle_T_Jon_R2_Text_3:
# 891 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelIsle_T_Jon_R3_Text_0:
# 898 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelIsle_T_Jon_R3_Text_1:
# 904 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Right. That's the whole of it.$"

ParcelIsle_T_Jon_R3_Text_2:
# 905 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: One more in me. After the high\n"
	.string "ground.$"

ParcelIsle_T_Jon_R4_Text_0:
# 912 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelIsle_T_Jon_R4_Text_1:
# 919 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelIsle_T_Jon_R5_Text_0:
# 926 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelIsle_T_Jon_R5_Text_1:
# 932 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Still yours.$"

ParcelIsle_T_Jon_R5_Text_2:
# 933 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelIsle_T_Line_Text_0:
# 939 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Picnic on the quay. The gulls take\n"
	.string "everything. You can't take a battle off\l"
	.string "me though.$"

ParcelIsle_T_Line_Text_1:
# 940 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: You can, apparently.$"

ParcelIsle_T_Line_Text_2:
# 955 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: SIGRUN counts the gulls every\n"
	.string "morning. Fewer each year. The gulls\l"
	.string "don't know. The gulls just want my\l"
	.string "sandwich.$"

ParcelIsle_T_Line_R2_Text_0:
# 966 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelIsle_T_Line_R2_Text_1:
# 968 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: No hurry. The water keeps.$"

ParcelIsle_T_Line_R2_Text_2:
# 972 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Still yours.$"

ParcelIsle_T_Line_R2_Text_3:
# 973 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelIsle_T_Line_R3_Text_0:
# 980 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelIsle_T_Line_R3_Text_1:
# 987 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelIsle_T_Line_R4_Text_0:
# 994 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelIsle_T_Line_R4_Text_1:
# 1000 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Right. That's the whole of it.$"

ParcelIsle_T_Line_R4_Text_2:
# 1001 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelIsle_T_Line_R5_Text_0:
# 1008 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelIsle_T_Line_R5_Text_1:
# 1014 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: That's the one I wanted to see.$"

ParcelIsle_T_Line_R5_Text_2:
# 1015 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelIsle_PairNets_Text_0:
# 1025 "data/maps/ParcelIsle/scripts.pory"
	.string "NETMENDER: The lab on the front.\n"
	.string "They've taken the boards down. There's\l"
	.string "a light in it.$"

ParcelIsle_PairNets_Text_1:
# 1026 "data/maps/ParcelIsle/scripts.pory"
	.string "OLD WOMAN: The Survey's leased it. For\n"
	.string "the baselines, they say. Thirty-one\l"
	.string "years of cloth in cardboard boxes.$"

ParcelIsle_PairNets_Text_2:
# 1027 "data/maps/ParcelIsle/scripts.pory"
	.string "NETMENDER: In the lab they emptied. In\n"
	.string "the same room.$"

ParcelIsle_PairNets_Text_3:
# 1028 "data/maps/ParcelIsle/scripts.pory"
	.string "OLD WOMAN: In the same room. Somebody\n"
	.string "has a sense of humour. Not the company.$"

ParcelIsle_PairNets_Text_4:
# 1030 "data/maps/ParcelIsle/scripts.pory"
	.string "NETMENDER: They say the ranger made\n"
	.string "FOREST. First one out of this harbour in\l"
	.string "nine years.$"

ParcelIsle_PairNets_Text_5:
# 1031 "data/maps/ParcelIsle/scripts.pory"
	.string "OLD WOMAN: Out of this harbour. Listen\n"
	.string "to you. You sold the ranger a bad rope.$"

ParcelIsle_PairNets_Text_6:
# 1032 "data/maps/ParcelIsle/scripts.pory"
	.string "NETMENDER: It was a fair rope. The\n"
	.string "ranger's just hard on rope.$"

ParcelIsle_PairNets_Text_7:
# 1033 "data/maps/ParcelIsle/scripts.pory"
	.string "OLD WOMAN: Hard on everything, I hear.\n"
	.string "Good. Something should be.$"

ParcelIsle_PairNets_Text_8:
# 1035 "data/maps/ParcelIsle/scripts.pory"
	.string "NETMENDER: Third ferry this week with\n"
	.string "nobody getting off but freight.$"

ParcelIsle_PairNets_Text_9:
# 1036 "data/maps/ParcelIsle/scripts.pory"
	.string "OLD WOMAN: Somebody got off. The one\n"
	.string "with the notebook.$"

ParcelIsle_PairNets_Text_10:
# 1037 "data/maps/ParcelIsle/scripts.pory"
	.string "NETMENDER: That's not a somebody.\n"
	.string "That's a letter with legs.$"

ParcelIsle_PairNets_Text_11:
# 1038 "data/maps/ParcelIsle/scripts.pory"
	.string "OLD WOMAN: A letter's more than this\n"
	.string "town's had in a while. Mend your net.$"

ParcelIsle_PairFreight_Text_0:
# 1047 "data/maps/ParcelIsle/scripts.pory"
	.string "DOCKER: East berth's open all night now.\n"
	.string "Logistics pulled the night crew.$"

ParcelIsle_PairFreight_Text_1:
# 1048 "data/maps/ParcelIsle/scripts.pory"
	.string "CHANDLER: Pulled them where?$"

ParcelIsle_PairFreight_Text_2:
# 1049 "data/maps/ParcelIsle/scripts.pory"
	.string "DOCKER: Nowhere. That's the thing.\n"
	.string "Nowhere to pull them to, with the dredge\l"
	.string "stopped.$"

ParcelIsle_PairFreight_Text_3:
# 1050 "data/maps/ParcelIsle/scripts.pory"
	.string "CHANDLER: Then they'll be in my shop by\n"
	.string "the weekend, wanting rope on credit.\l"
	.string "Tell them yes.$"

ParcelIsle_PairFreight_Text_4:
# 1052 "data/maps/ParcelIsle/scripts.pory"
	.string "DOCKER: Saw the ranger go through to\n"
	.string "the meadow with nothing. Came back with\l"
	.string "a DODUO at heel, or whatever it was.\l"
	.string "Didn't look like a trainer.$"

ParcelIsle_PairFreight_Text_5:
# 1053 "data/maps/ParcelIsle/scripts.pory"
	.string "CHANDLER: Looked like someone who'd\n"
	.string "been chosen and hadn't decided how\l"
	.string "they felt.$"

ParcelIsle_PairFreight_Text_6:
# 1054 "data/maps/ParcelIsle/scripts.pory"
	.string "DOCKER: You can see all that from the\n"
	.string "quay?$"

ParcelIsle_PairFreight_Text_7:
# 1055 "data/maps/ParcelIsle/scripts.pory"
	.string "CHANDLER: I sell rope to everyone who\n"
	.string "leaves. You learn faces.$"

ParcelIsle_PairFreight_Text_8:
# 1057 "data/maps/ParcelIsle/scripts.pory"
	.string "DOCKER: Logistics wants the east berth\n"
	.string "cleared by six. Every night this month,\l"
	.string "by six.$"

ParcelIsle_PairFreight_Text_9:
# 1058 "data/maps/ParcelIsle/scripts.pory"
	.string "CHANDLER: Cleared for what? Nothing\n"
	.string "comes in at six.$"

ParcelIsle_PairFreight_Text_10:
# 1059 "data/maps/ParcelIsle/scripts.pory"
	.string "DOCKER: Something goes out. I don't\n"
	.string "ask. It's a good job for not asking.$"

ParcelIsle_PairFreight_Text_11:
# 1060 "data/maps/ParcelIsle/scripts.pory"
	.string "CHANDLER: It's the only kind they have.$"

ParcelIsle_Stringer_Text_0:
# 1072 "data/maps/ParcelIsle/scripts.pory"
	.string "INGER: The Survey's in the lab now. I\n"
	.string "covered the move. Thirty-one years of\l"
	.string "red cloth going in through the door the\l"
	.string "company's van came out of at two in the\l"
	.string "morning.\p"
	.string "Best picture I've taken. Front page.\n"
	.string "Logistics did not comment, and I\l"
	.string "printed that they did not.$"

ParcelIsle_Stringer_Text_1:
# 1074 "data/maps/ParcelIsle/scripts.pory"
	.string "INGER: FOREST, I heard. From a bench\n"
	.string "you hear things. The lab on the front is\l"
	.string "still boarded. The police call it\l"
	.string "burglary. I call it burglary in print, and\l"
	.string "we both know the word's wrong.\p"
	.string "When you've got the right word, I'm here.\n"
	.string "I'm always here. It's a very good bench.$"

ParcelIsle_Stringer_Text_2:
# 1076 "data/maps/ParcelIsle/scripts.pory"
	.string "INGER: Skaldmere Courier. Dock desk,\n"
	.string "which is this bench. You came off the\l"
	.string "morning ferry with a bag and no partner.\l"
	.string "That's a story or it's nothing. Which?$"

ParcelIsle_Stringer_Text_3:
# 1077 "data/maps/ParcelIsle/scripts.pory"
	.string "{PLAYER}: Nothing yet.$"

ParcelIsle_Stringer_Text_4:
# 1078 "data/maps/ParcelIsle/scripts.pory"
	.string "INGER: Good answer. Most people give me\n"
	.string "the other one and regret it by the\l"
	.string "second ferry. Come back when it's\l"
	.string "something.$"

ParcelIsle_Oysterman_Text_0:
# 1090 "data/maps/ParcelIsle/scripts.pory"
	.string "OYSTERMAN: GONE, it says. My father\n"
	.string "would have wanted the word. He'd have\l"
	.string "wanted it spelled right. It is.$"

ParcelIsle_Oysterman_Text_1:
# 1093 "data/maps/ParcelIsle/scripts.pory"
	.string "OYSTERMAN: …GONE. In the Survey's hand.\n"
	.string "Thirty-one years and nobody put it in\l"
	.string "writing where he could have read it.\p"
	.string "Here. He kept these from the last good\n"
	.string "year. You read it; you have one.$"

ParcelIsle_Oysterman_Text_2:
# 1097 "data/maps/ParcelIsle/scripts.pory"
	.string "OYSTERMAN: Past the pier, in the\n"
	.string "shallows. The cloth will be rags by now.\l"
	.string "The tag's brass.$"

ParcelIsle_Oysterman_Text_3:
# 1100 "data/maps/ParcelIsle/scripts.pory"
	.string "OYSTERMAN: My father's oyster ground\n"
	.string "was out there. Where the dredge spoil\l"
	.string "sits now. The Survey staked it the year\l"
	.string "it went, and I never went out to look.\p"
	.string "You've a notebook. Go and read me the\n"
	.string "stake. Out past the pier, in the\l"
	.string "shallows.$"

ParcelIsle_ShoalStake_Text_0:
# 1109 "data/maps/ParcelIsle/scripts.pory"
	.string "A survey stake in the shallows, leaning.\n"
	.string "The cloth is threads. The brass tag\l"
	.string "reads: SALTWICK SHOALS, OYSTER GROUND.\l"
	.string "FIRST STAKE, LAST READING, and under\l"
	.string "them one word cut deeper than the rest.\p"
	.string "GONE.$"

ParcelIsle_ShoalStake_Text_1:
# 1112 "data/maps/ParcelIsle/scripts.pory"
	.string "A leaning stake in the shallows. Brass\n"
	.string "tag, red threads, one word.$"

ParcelIsle_FindTally_Text_0:
# 1121 "data/maps/ParcelIsle/scripts.pory"
	.string "A pier post, grey, the base gone soft.\n"
	.string "Notches cut into it in three groups, the\l"
	.string "groups getting smaller down the years:\l"
	.string "eleven, four, one.\p"
	.string "The last notch is deep and careful, as\n"
	.string "if whoever cut it knew it might be the\l"
	.string "last.$"

ParcelIsle_FindTally_Text_1:
# 1124 "data/maps/ParcelIsle/scripts.pory"
	.string "A pier post with three groups of\n"
	.string "notches. Eleven, four, one. The wood will\l"
	.string "not take another.$"

ParcelIsle_PairGreen_Text_0:
# 1132 "data/maps/ParcelIsle/scripts.pory"
	.string "COUNCILLOR: The lab's leased to the\n"
	.string "Survey. Planning consent for a change\l"
	.string "of use: granted. I signed it myself.$"

ParcelIsle_PairGreen_Text_1:
# 1133 "data/maps/ParcelIsle/scripts.pory"
	.string "SCHOOLTEACHER: Quickly, for once.$"

ParcelIsle_PairGreen_Text_2:
# 1134 "data/maps/ParcelIsle/scripts.pory"
	.string "COUNCILLOR: Quickly. I've a reputation\n"
	.string "to lose and I've decided which way I'd\l"
	.string "rather lose it. Don't put that on the\l"
	.string "board.$"

ParcelIsle_PairGreen_Text_3:
# 1135 "data/maps/ParcelIsle/scripts.pory"
	.string "SCHOOLTEACHER: It's already up.$"

ParcelIsle_PairGreen_Text_4:
# 1137 "data/maps/ParcelIsle/scripts.pory"
	.string "SCHOOLTEACHER: The provisional made\n"
	.string "FOREST. First out of this town in nine\l"
	.string "years. I've put it on the board at\l"
	.string "school.$"

ParcelIsle_PairGreen_Text_5:
# 1138 "data/maps/ParcelIsle/scripts.pory"
	.string "COUNCILLOR: It's not a council matter.$"

ParcelIsle_PairGreen_Text_6:
# 1139 "data/maps/ParcelIsle/scripts.pory"
	.string "SCHOOLTEACHER: Nothing is, until it's in\n"
	.string "the paper. Then it's a planning matter.\l"
	.string "I've watched you long enough to know\l"
	.string "the order.$"

ParcelIsle_PairGreen_Text_7:
# 1141 "data/maps/ParcelIsle/scripts.pory"
	.string "COUNCILLOR: The lab on the front is a\n"
	.string "planning matter now. Vacant\l"
	.string "possession. The owner's within his\l"
	.string "rights.$"

ParcelIsle_PairGreen_Text_8:
# 1142 "data/maps/ParcelIsle/scripts.pory"
	.string "SCHOOLTEACHER: The owner emptied it at\n"
	.string "two in the morning.$"

ParcelIsle_PairGreen_Text_9:
# 1143 "data/maps/ParcelIsle/scripts.pory"
	.string "COUNCILLOR: The owner's hours are the\n"
	.string "owner's business.$"

ParcelIsle_PairGreen_Text_10:
# 1144 "data/maps/ParcelIsle/scripts.pory"
	.string "SCHOOLTEACHER: I teach the children\n"
	.string "that a thing done at two in the morning\l"
	.string "is a thing someone didn't want seen.\l"
	.string "Shall I stop?$"

ParcelIsle_Board1_Text_0:
# 1153 "data/maps/ParcelIsle/scripts.pory"
	.string "A SURVEY BOARD on the harbour wall.\n"
	.string "SALTWICK. Tidal nursery: half the fish\l"
	.string "landed on this coast were small here\l"
	.string "first. CLAMPERL beds under the\l"
	.string "moorings, counted at the spring low:\l"
	.string "220 shells open.\p"
	.string "The number under it is the one that\n"
	.string "matters and nobody reads. 60 of them\l"
	.string "with young.$"

ParcelIsle_Board2_Text_0:
# 1158 "data/maps/ParcelIsle/scripts.pory"
	.string "A SURVEY BOARD by the jetty steps.\n"
	.string "STARYU on the harbour floor at night,\l"
	.string "counted by their light from the end of\l"
	.string "the jetty since before the Survey had a\l"
	.string "name for the method.\p"
	.string "It is the easiest count on the island\n"
	.string "and so it is the longest. 40, 38, 41, 36,\l"
	.string "29, 31, 24.$"
