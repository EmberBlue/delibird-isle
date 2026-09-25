ParcelIsle_MapScripts::
# 29 "data/maps/ParcelIsle/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelIsle_SetVisited
# 30 "data/maps/ParcelIsle/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelIsle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelIsle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 31 "data/maps/ParcelIsle/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelIsle_Arrival
	.2byte 0


ParcelIsle_SetVisited::
# 36 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_VISITED_PARCEL_ISLE
	end


ParcelIsle_Arrival::
# 42 "data/maps/ParcelIsle/scripts.pory"
	setvar VAR_TEMP_0, 1
# 43 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_ARRIVAL_INTRO, ParcelIsle_Arrival_2
# 46 "data/maps/ParcelIsle/scripts.pory"
	lockall
# 47 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 48 "data/maps/ParcelIsle/scripts.pory"
	delay 96
# 49 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Arrival_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 51 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALDMERE_ARRIVAL_INTRO
# 52 "data/maps/ParcelIsle/scripts.pory"
	releaseall
	end

ParcelIsle_Arrival_2:
	end


ParcelIsle_HeavyCoat::
# 62 "data/maps/ParcelIsle/scripts.pory"
	lock
# 63 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 64 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_HeavyCoat_2
# 66 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_HeavyCoat_3
# 69 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_2, MSGBOX_DEFAULT
# 70 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_3, MSGBOX_DEFAULT
ParcelIsle_HeavyCoat_1:
# 72 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_HeavyCoat_2:
# 65 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_HeavyCoat_1

ParcelIsle_HeavyCoat_3:
# 67 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_HeavyCoat_1


ParcelIsle_Fisher::
# 79 "data/maps/ParcelIsle/scripts.pory"
	lock
# 80 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 81 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_NET, ParcelIsle_Fisher_3
ParcelIsle_Fisher_1:
# 89 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Fisher_7
# 91 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Fisher_8
# 94 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_4, MSGBOX_DEFAULT
ParcelIsle_Fisher_6:
# 96 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Fisher_2:
# 82 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_0, MSGBOX_DEFAULT
# 83 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_1, MSGBOX_DEFAULT
# 84 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_OLD_ROD
# 85 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_ANNI_DONE
# 86 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Fisher_3:
# 81 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_ANNI_DONE, ParcelIsle_Fisher_2
	goto ParcelIsle_Fisher_1

ParcelIsle_Fisher_7:
# 90 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_Fisher_6

ParcelIsle_Fisher_8:
# 92 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_Fisher_6


ParcelIsle_Dockworker::
# 102 "data/maps/ParcelIsle/scripts.pory"
	lock
# 103 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 104 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelIsle_Dockworker_2
# 107 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Dockworker_3
# 109 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Dockworker_4
# 112 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_4, MSGBOX_DEFAULT
ParcelIsle_Dockworker_1:
# 114 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Dockworker_2:
# 105 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_0, MSGBOX_DEFAULT
# 106 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Dockworker_1

ParcelIsle_Dockworker_3:
# 108 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_Dockworker_1

ParcelIsle_Dockworker_4:
# 110 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_Dockworker_1


ParcelIsle_NetMender::
# 120 "data/maps/ParcelIsle/scripts.pory"
	lock
# 121 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 122 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_DONE, ParcelIsle_NetMender_2
# 131 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_NET, ParcelIsle_NetMender_5
# 136 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_NetMender_12
# 143 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_5, MSGBOX_DEFAULT
# 144 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_NetMender_2:
# 123 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_NetMender_8
# 126 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_1, MSGBOX_DEFAULT
ParcelIsle_NetMender_7:
# 128 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_NetMender_5:
# 132 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_2, MSGBOX_DEFAULT
# 133 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_NetMender_8:
# 124 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_NetMender_7

ParcelIsle_NetMender_12:
# 137 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_3, MSGBOX_DEFAULT
# 138 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_4, MSGBOX_DEFAULT
# 139 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_ANNI_NET
# 140 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_HarbourLad::
# 150 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HARBOUR_LAD, ParcelIsle_HarbourLad_Text_0, ParcelIsle_HarbourLad_Text_1
# 153 "data/maps/ParcelIsle/scripts.pory"
	lock
# 154 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 155 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_HarbourLad_2
# 158 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HarbourLad_Text_3, MSGBOX_DEFAULT
ParcelIsle_HarbourLad_1:
# 160 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_HarbourLad_2:
# 156 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HarbourLad_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_HarbourLad_1


ParcelIsle_Widow::
# 166 "data/maps/ParcelIsle/scripts.pory"
	lock
# 167 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 168 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGRUN_DONE, ParcelIsle_Widow_2
# 173 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGRUN, ParcelIsle_Widow_5
# 187 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_5, MSGBOX_YESNO
# 188 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelIsle_Widow_8
# 192 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_7, MSGBOX_DEFAULT
ParcelIsle_Widow_7:
# 194 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Widow_2:
# 169 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_0, MSGBOX_DEFAULT
# 170 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Widow_5:
# 174 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Widow_12
# 179 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Widow_13
# 182 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_4, MSGBOX_DEFAULT
ParcelIsle_Widow_11:
# 184 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Widow_8:
# 189 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_6, MSGBOX_DEFAULT
# 190 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SIGRUN
	goto ParcelIsle_Widow_7

ParcelIsle_Widow_12:
# 175 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_1, MSGBOX_DEFAULT
# 176 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_2, MSGBOX_DEFAULT
# 177 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 178 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SIGRUN_DONE
	goto ParcelIsle_Widow_11

ParcelIsle_Widow_13:
# 180 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_Widow_11


ParcelIsle_FerrySign::
# 199 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_FerrySign_2
# 202 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerrySign_Text_1, MSGBOX_SIGN
ParcelIsle_FerrySign_1:
	end

ParcelIsle_FerrySign_2:
# 200 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerrySign_Text_0, MSGBOX_SIGN
	goto ParcelIsle_FerrySign_1


ParcelIsle_FerryCaptain::
# 211 "data/maps/ParcelIsle/scripts.pory"
	lock
# 212 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 213 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_HIGHLAND_CERT, ParcelIsle_FerryCaptain_2
# 218 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_1, MSGBOX_DEFAULT
# 219 "data/maps/ParcelIsle/scripts.pory"
	multichoice 1, 1, MULTI_SKALD_FERRY, FALSE
# 220 "data/maps/ParcelIsle/scripts.pory"
	switch VAR_RESULT
# 221 "data/maps/ParcelIsle/scripts.pory"
	case 0, ParcelIsle_FerryCaptain_6
# 228 "data/maps/ParcelIsle/scripts.pory"
	case 1, ParcelIsle_FerryCaptain_7
# 240 "data/maps/ParcelIsle/scripts.pory"
	case 2, ParcelIsle_FerryCaptain_8
# 253 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_4, MSGBOX_DEFAULT
# 254 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_2:
# 214 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_0, MSGBOX_DEFAULT
# 215 "data/maps/ParcelIsle/scripts.pory"
	release
	end

	end

ParcelIsle_FerryCaptain_6:
# 222 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 223 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 224 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 225 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_DELIBIRD, 9, 22
# 226 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_7:
# 229 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_DELIBIRD_ARRIVAL, ParcelIsle_FerryCaptain_11
# 234 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 235 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 236 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 237 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_COAST, 38, 38
# 238 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_8:
# 241 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_COASTAL_CERT, ParcelIsle_FerryCaptain_14
# 246 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 247 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 248 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 249 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_WEATHER, 23, 36
# 250 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_11:
# 230 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_2, MSGBOX_DEFAULT
# 231 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_14:
# 242 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_3, MSGBOX_DEFAULT
# 243 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_GateMoore::
# 264 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GATE_ISLE, ParcelIsle_GateMoore_Text_0, ParcelIsle_GateMoore_Text_1, ParcelIsle_GateMoore_Defeated
# 268 "data/maps/ParcelIsle/scripts.pory"
	lock
# 269 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 270 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_GateMoore_Text_2, MSGBOX_DEFAULT
# 271 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_GateMoore_Defeated::
# 276 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_ISLE
# 277 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_GateMoore_Defeated_Text_0, MSGBOX_DEFAULT
# 278 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_ItemNetBall::
# 283 "data/maps/ParcelIsle/scripts.pory"
	finditem ITEM_NET_BALL
	end


ParcelIsle_LogisticsClerk::
# 293 "data/maps/ParcelIsle/scripts.pory"
	lock
# 294 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 295 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_LogisticsClerk_2
# 297 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelIsle_LogisticsClerk_3
# 299 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_LogisticsClerk_4
# 302 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_3, MSGBOX_DEFAULT
ParcelIsle_LogisticsClerk_1:
# 304 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_LogisticsClerk_2:
# 296 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_LogisticsClerk_1

ParcelIsle_LogisticsClerk_3:
# 298 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_LogisticsClerk_1

ParcelIsle_LogisticsClerk_4:
# 300 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_LogisticsClerk_1


ParcelIsle_KidA::
# 310 "data/maps/ParcelIsle/scripts.pory"
	lock
# 311 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 312 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_KidA_2
# 314 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_BRIDGE_SCENE, ParcelIsle_KidA_3
# 317 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidA_Text_2, MSGBOX_DEFAULT
ParcelIsle_KidA_1:
# 319 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_KidA_2:
# 313 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidA_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_KidA_1

ParcelIsle_KidA_3:
# 315 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidA_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_KidA_1


ParcelIsle_KidB::
# 324 "data/maps/ParcelIsle/scripts.pory"
	lock
# 325 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 326 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_KidB_2
# 328 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_BRIDGE_SCENE, ParcelIsle_KidB_3
# 331 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidB_Text_2, MSGBOX_DEFAULT
ParcelIsle_KidB_1:
# 333 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_KidB_2:
# 327 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidB_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_KidB_1

ParcelIsle_KidB_3:
# 329 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidB_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_KidB_1


ParcelIsle_OldMan::
# 339 "data/maps/ParcelIsle/scripts.pory"
	lock
# 340 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 341 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_OldMan_2
# 343 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_OldMan_3
# 346 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_2, MSGBOX_DEFAULT
ParcelIsle_OldMan_1:
# 348 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_OldMan_2:
# 342 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_OldMan_1

ParcelIsle_OldMan_3:
# 344 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_OldMan_1


ParcelIsle_Birder::
# 354 "data/maps/ParcelIsle/scripts.pory"
	lock
# 355 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 356 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BIRDER_DONE, ParcelIsle_Birder_2
# 365 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_ARRIVAL, ParcelIsle_Birder_5
# 377 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Birder_12
# 380 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_6, MSGBOX_DEFAULT
ParcelIsle_Birder_11:
# 382 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Birder_2:
# 357 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Birder_8
# 360 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_1, MSGBOX_DEFAULT
ParcelIsle_Birder_7:
# 362 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Birder_5:
# 366 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_2, MSGBOX_YESNO
# 367 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelIsle_Birder_16
# 372 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_4, MSGBOX_DEFAULT
ParcelIsle_Birder_15:
# 374 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Birder_8:
# 358 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_Birder_7

ParcelIsle_Birder_12:
# 378 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_5, MSGBOX_DEFAULT
	goto ParcelIsle_Birder_11

ParcelIsle_Birder_16:
# 368 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_3, MSGBOX_DEFAULT
# 369 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 370 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_BIRDER_DONE
	goto ParcelIsle_Birder_15


ParcelIsle_KidTrainer::
# 387 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_KID, ParcelIsle_KidTrainer_Text_0, ParcelIsle_KidTrainer_Text_1
# 390 "data/maps/ParcelIsle/scripts.pory"
	lock
# 391 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 392 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_KidTrainer_2
# 395 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidTrainer_Text_3, MSGBOX_DEFAULT
ParcelIsle_KidTrainer_1:
# 397 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_KidTrainer_2:
# 393 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidTrainer_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_KidTrainer_1


ParcelIsle_TownSign::
# 402 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_TownSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_Neighbor::
# 413 "data/maps/ParcelIsle/scripts.pory"
	lock
# 414 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 415 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Neighbor_2
# 417 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_LAB_SEEN, ParcelIsle_Neighbor_3
# 420 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_2, MSGBOX_DEFAULT
# 421 "data/maps/ParcelIsle/scripts.pory"
	applymovement 4, Movement_GlanceAway
# 422 "data/maps/ParcelIsle/scripts.pory"
	waitmovement 0
# 423 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_3, MSGBOX_DEFAULT
ParcelIsle_Neighbor_1:
# 425 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Neighbor_2:
# 416 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_Neighbor_1

ParcelIsle_Neighbor_3:
# 418 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Neighbor_1


# 429 "data/maps/ParcelIsle/scripts.pory"
Movement_GlanceAway:
# 430 "data/maps/ParcelIsle/scripts.pory"
	face_right
# 431 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 432 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 433 "data/maps/ParcelIsle/scripts.pory"
	step_end

ParcelIsle_Innkeeper::
# 438 "data/maps/ParcelIsle/scripts.pory"
	lock
# 439 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 440 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Innkeeper_2
# 442 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Innkeeper_3
# 445 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Innkeeper_Text_2, MSGBOX_DEFAULT
ParcelIsle_Innkeeper_1:
# 447 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Innkeeper_2:
# 441 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Innkeeper_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_Innkeeper_1

ParcelIsle_Innkeeper_3:
# 443 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Innkeeper_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Innkeeper_1


ParcelIsle_ChandlerBrother::
# 453 "data/maps/ParcelIsle/scripts.pory"
	lock
# 454 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 455 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_ChandlerBrother_2
# 457 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_ChandlerBrother_3
# 460 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ChandlerBrother_Text_2, MSGBOX_DEFAULT
ParcelIsle_ChandlerBrother_1:
# 462 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_ChandlerBrother_2:
# 456 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ChandlerBrother_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_ChandlerBrother_1

ParcelIsle_ChandlerBrother_3:
# 458 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ChandlerBrother_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_ChandlerBrother_1


ParcelIsle_ItemPotion::
# 467 "data/maps/ParcelIsle/scripts.pory"
	finditem ITEM_POTION
	end


ParcelIsle_LabSign::
# 472 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LabSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_HallSign::
# 477 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HallSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_NoticeBoard::
# 482 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_NoticeBoard_2
# 484 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_NoticeBoard_3
# 487 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NoticeBoard_Text_2, MSGBOX_SIGN
ParcelIsle_NoticeBoard_1:
	end

ParcelIsle_NoticeBoard_2:
# 483 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NoticeBoard_Text_0, MSGBOX_SIGN
	goto ParcelIsle_NoticeBoard_1

ParcelIsle_NoticeBoard_3:
# 485 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NoticeBoard_Text_1, MSGBOX_SIGN
	goto ParcelIsle_NoticeBoard_1


ParcelIsle_WeatherStationSign::
# 493 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_WeatherStationSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_PreserveGateSign::
# 498 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PreserveGateSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_Arrival_Text_0:
# 49 "data/maps/ParcelIsle/scripts.pory"
	.string "The ferry horn fades out across the\n"
	.string "water.\p"
	.string "The boards are damp under your boots.\n"
	.string "Gulls on the racks. A town holding its\l"
	.string "breath.$"

ParcelIsle_HeavyCoat_Text_0:
# 65 "data/maps/ParcelIsle/scripts.pory"
	.string "Bram: Schedule board's got a date on it\n"
	.string "again. First time in a year.\p"
	.string "They want to look busy while the\n"
	.string "hearings run, I reckon.\p"
	.string "Mind the boards. Some things don't\n"
	.string "change.$"

ParcelIsle_HeavyCoat_Text_1:
# 67 "data/maps/ParcelIsle/scripts.pory"
	.string "Bram: So you went past the bridge after\n"
	.string "all.\p"
	.string "The red cloth on your pack -- that's\n"
	.string "the Survey's knot. Nobody ties that for\l"
	.string "show.\p"
	.string "…Keep your questions for morning, still.\n"
	.string "Morning's when I answer them.$"

ParcelIsle_HeavyCoat_Text_2:
# 69 "data/maps/ParcelIsle/scripts.pory"
	.string "Bram: Off the ferry, then. Lodging's up\n"
	.string "the track--the door with the lamp lit.\l"
	.string "Up the lane, past the Center.$"

ParcelIsle_HeavyCoat_Text_3:
# 70 "data/maps/ParcelIsle/scripts.pory"
	.string "Mind the boards. They're slick when the\n"
	.string "fog sits.\p"
	.string "…And keep your questions for morning,\n"
	.string "eh?$"

ParcelIsle_Fisher_Text_0:
# 82 "data/maps/ParcelIsle/scripts.pory"
	.string "Tobin: That's my net. Anni's stitch --\n"
	.string "nobody else doubles the selvedge.\p"
	.string "She sent you down with it? Then she\n"
	.string "likes you, and she doesn't like anyone.$"

ParcelIsle_Fisher_Text_1:
# 83 "data/maps/ParcelIsle/scripts.pory"
	.string "Tobin: Here. My spare rod. Old, but it\n"
	.string "knows the inlet.\p"
	.string "Fish it honest. Throw the small ones\n"
	.string "back. There's fewer small ones every\l"
	.string "year, and you'll want to know why before\l"
	.string "I do.$"

ParcelIsle_Fisher_Text_2:
# 90 "data/maps/ParcelIsle/scripts.pory"
	.string "Tobin: They'll have to count them now.\n"
	.string "Properly. In front of people.\p"
	.string "Forty years I've counted for nobody\n"
	.string "but myself. Funny to be right and hate\l"
	.string "it.$"

ParcelIsle_Fisher_Text_3:
# 92 "data/maps/ParcelIsle/scripts.pory"
	.string "Tobin: Herring came back thin this week.\n"
	.string "Thin and early. That's not a season,\l"
	.string "that's a symptom.\p"
	.string "…You'd know the word for it now,\n"
	.string "wouldn't you. Ranger.$"

ParcelIsle_Fisher_Text_4:
# 94 "data/maps/ParcelIsle/scripts.pory"
	.string "Tobin: Currents have been wrong for\n"
	.string "weeks. The fish know it before we do.\p"
	.string "…You didn't hear that from me.$"

ParcelIsle_Dockworker_Text_0:
# 105 "data/maps/ParcelIsle/scripts.pory"
	.string "Rolf: Eighteen months, they're saying.\n"
	.string "Delay.\p"
	.string "You know what eighteen months is to a\n"
	.string "man on a day rate? It's a number\l"
	.string "somebody else gets to say out loud.$"

ParcelIsle_Dockworker_Text_1:
# 106 "data/maps/ParcelIsle/scripts.pory"
	.string "Rolf: …I'm not saying you're wrong. I\n"
	.string "read it. Anni read it to me, the parts\l"
	.string "with the frogs.\p"
	.string "I'm saying it's easier to be right when\n"
	.string "it's not your boat.$"

ParcelIsle_Dockworker_Text_2:
# 108 "data/maps/ParcelIsle/scripts.pory"
	.string "Rolf: Boat's not late today. Boat's not\n"
	.string "coming. Office says 'pending review'.\p"
	.string "That your review? …Thought so.$"

ParcelIsle_Dockworker_Text_3:
# 110 "data/maps/ParcelIsle/scripts.pory"
	.string "Rolf: The crest on the crates is the\n"
	.string "crest on my cheque. Same kerning. I\l"
	.string "stopped noticing it years ago.\p"
	.string "Funny what a stranger's face makes you\n"
	.string "notice again.$"

ParcelIsle_Dockworker_Text_4:
# 112 "data/maps/ParcelIsle/scripts.pory"
	.string "Rolf: Boat's late. Boat's always late\n"
	.string "now.\p"
	.string "Nothing to unload but weather. You want\n"
	.string "work, there's a board by the lodging.\l"
	.string "Mostly it says 'no'.$"

ParcelIsle_NetMender_Text_0:
# 124 "data/maps/ParcelIsle/scripts.pory"
	.string "Anni: Rolf had me read him the filing.\n"
	.string "The frog part, twice.\p"
	.string "He didn't say anything after. That's a\n"
	.string "lot, for Rolf.\p"
	.string "Keep the rod. Tobin never lent it to\n"
	.string "anyone.$"

ParcelIsle_NetMender_Text_1:
# 126 "data/maps/ParcelIsle/scripts.pory"
	.string "Anni: Tobin gave you the spare rod?\n"
	.string "Then you're in his books, and there's\l"
	.string "only ever been three names in them.\p"
	.string "Fish the inlet. Tell me if the Magikarp\n"
	.string "are still there. They used to be so\l"
	.string "thick you could walk on them.$"

ParcelIsle_NetMender_Text_2:
# 132 "data/maps/ParcelIsle/scripts.pory"
	.string "Anni: Tobin's on the landing, at the end\n"
	.string "of the jetty. He won't come up. He says\l"
	.string "the town's gone strange.\p"
	.string "He's right, but the net still needs\n"
	.string "carrying.$"

ParcelIsle_NetMender_Text_3:
# 137 "data/maps/ParcelIsle/scripts.pory"
	.string "Anni: You're the ranger they're talking\n"
	.string "about at the hall. The one who went out\l"
	.string "and came back with a knot on the pack.\p"
	.string "Good. Then you can carry something.\n"
	.string "This net's mended and Tobin's is torn,\l"
	.string "and my knees don't do the jetty.$"

ParcelIsle_NetMender_Text_4:
# 138 "data/maps/ParcelIsle/scripts.pory"
	.string "Anni: Take it down to him. End of the\n"
	.string "jetty, the one who won't look up.\p"
	.string "Tell him the selvedge is doubled. He'll\n"
	.string "know whose it is.$"

ParcelIsle_NetMender_Text_5:
# 143 "data/maps/ParcelIsle/scripts.pory"
	.string "Anni: Nets don't tear like they used to.\n"
	.string "Nothing in them heavy enough to tear\l"
	.string "them.\p"
	.string "…Don't put that in your notebook. It's\n"
	.string "not a fact. It's just true.$"

ParcelIsle_HarbourLad_Text_0:
# 151 "data/maps/ParcelIsle/scripts.pory"
	.string "Kip: You came off the ferry with a bag\n"
	.string "and no Pokémon, and now look at you.\p"
	.string "Bet you can't beat my Krabby. The\n"
	.string "channel used to be full of them.$"

ParcelIsle_HarbourLad_Text_1:
# 152 "data/maps/ParcelIsle/scripts.pory"
	.string "Kip: …Used to be. Yeah.$"

ParcelIsle_HarbourLad_Text_2:
# 156 "data/maps/ParcelIsle/scripts.pory"
	.string "Kip: My dad says you cost him his berth.\n"
	.string "My mum says you saved the channel.\p"
	.string "They had that argument at dinner. I ate\n"
	.string "in the loft.$"

ParcelIsle_HarbourLad_Text_3:
# 158 "data/maps/ParcelIsle/scripts.pory"
	.string "Kip: Krabby was under the jetty when I\n"
	.string "was little. Dozens. Now I go out to the\l"
	.string "rocks to find one.\p"
	.string "I'm not sad about it. I'm just saying\n"
	.string "where they went.$"

ParcelIsle_Widow_Text_0:
# 169 "data/maps/ParcelIsle/scripts.pory"
	.string "Sigrun: Eleven this morning. I count\n"
	.string "them anyway. It's a way of saying good\l"
	.string "morning to someone who isn't here.$"

ParcelIsle_Widow_Text_1:
# 175 "data/maps/ParcelIsle/scripts.pory"
	.string "Sigrun: You wrote it down. All of it. The\n"
	.string "whole coast, in a notebook, and you put\l"
	.string "the gulls in.\p"
	.string "He'd have liked that. He never trusted a\n"
	.string "number he hadn't counted himself.$"

ParcelIsle_Widow_Text_2:
# 176 "data/maps/ParcelIsle/scripts.pory"
	.string "Sigrun: This was his. It's the only thing\n"
	.string "on the boat the sea didn't take.\p"
	.string "It should go with someone who counts.$"

ParcelIsle_Widow_Text_3:
# 180 "data/maps/ParcelIsle/scripts.pory"
	.string "Sigrun: Nine today. There were forty on\n"
	.string "these racks when Eirik still fished. The\l"
	.string "racks were white with them.\p"
	.string "Write that in your book. Nine. Someone\n"
	.string "should have the number besides me.$"

ParcelIsle_Widow_Text_4:
# 182 "data/maps/ParcelIsle/scripts.pory"
	.string "Sigrun: Twelve this morning. I'll tell\n"
	.string "you again when you're back. Numbers\l"
	.string "only mean something twice.$"

ParcelIsle_Widow_Text_5:
# 187 "data/maps/ParcelIsle/scripts.pory"
	.string "Sigrun: Count the gulls with me. On the\n"
	.string "racks. Go on.\p"
	.string "Twelve. Say it back, so it's two of us\n"
	.string "who know.$"

ParcelIsle_Widow_Text_6:
# 189 "data/maps/ParcelIsle/scripts.pory"
	.string "Sigrun: Twelve. Good. My husband kept\n"
	.string "the count for thirty years and I keep\l"
	.string "it for him.\p"
	.string "Come back and I'll give you the next\n"
	.string "one. That's all a survey is. Somebody\l"
	.string "coming back.$"

ParcelIsle_Widow_Text_7:
# 192 "data/maps/ParcelIsle/scripts.pory"
	.string "Sigrun: No? Then it's just me who knows.\n"
	.string "That's been fine so far.$"

ParcelIsle_FerrySign_Text_0:
# 200 "data/maps/ParcelIsle/scripts.pory"
	.string "FERRY LANDING\p"
	.string "Mainland schedule: SUSPENDED\n"
	.string "PENDING REGIONAL REVIEW\p"
	.string "Someone has written underneath, in\n"
	.string "pencil: about time.$"

ParcelIsle_FerrySign_Text_1:
# 202 "data/maps/ParcelIsle/scripts.pory"
	.string "FERRY LANDING\p"
	.string "The mainland schedule board is blank.\n"
	.string "It has been for a while.$"

ParcelIsle_FerryCaptain_Text_0:
# 214 "data/maps/ParcelIsle/scripts.pory"
	.string "Captain: Passage out? The open\n"
	.string "channel's no crossing to make without a\l"
	.string "reason worth the cold.\p"
	.string "Come back when the Corps has sent you\n"
	.string "up the mountains. You'll know when.$"

ParcelIsle_FerryCaptain_Text_1:
# 218 "data/maps/ParcelIsle/scripts.pory"
	.string "Captain: Harbour's open. Where am I\n"
	.string "taking you?$"

ParcelIsle_FerryCaptain_Text_2:
# 230 "data/maps/ParcelIsle/scripts.pory"
	.string "Captain: The coast run opens once\n"
	.string "you've made the Delibird crossing.\n"
	.string "One island at a time.$"

ParcelIsle_FerryCaptain_Text_3:
# 242 "data/maps/ParcelIsle/scripts.pory"
	.string "Captain: The climate station? That\n"
	.string "route opens once you've worked the\l"
	.string "coast.\n"
	.string "Not before.$"

ParcelIsle_FerryCaptain_Text_4:
# 253 "data/maps/ParcelIsle/scripts.pory"
	.string "Captain: Suit yourself. I'll be on the\n"
	.string "water.$"

ParcelIsle_GateMoore_Text_0:
# 265 "data/maps/ParcelIsle/scripts.pory"
	.string "Moore: Harbour-master. Every hull and\n"
	.string "every hand that moves through here is\l"
	.string "logged.\p"
	.string "You want clearance on this water? Earn\n"
	.string "the entry.$"

ParcelIsle_GateMoore_Text_1:
# 266 "data/maps/ParcelIsle/scripts.pory"
	.string "Moore: …Noted. The harbour knows your\n"
	.string "name now.$"

ParcelIsle_GateMoore_Text_2:
# 270 "data/maps/ParcelIsle/scripts.pory"
	.string "Moore: You're cleared through the\n"
	.string "landing. The ferry runs answer to the\l"
	.string "log,\n"
	.string "and the log answers for you.$"

ParcelIsle_GateMoore_Defeated_Text_0:
# 277 "data/maps/ParcelIsle/scripts.pory"
	.string "Moore: Harbour clearance: entered\n"
	.string "against your card. Filed with the\l"
	.string "manifest.\p"
	.string "Nobody hands that out. You took it.$"

ParcelIsle_LogisticsClerk_Text_0:
# 296 "data/maps/ParcelIsle/scripts.pory"
	.string "Pell: Half my manifests are on hold. The\n"
	.string "other half are lawyers.\p"
	.string "I used to log trucks. Now I log the\n"
	.string "absence of trucks. It's the same form.\l"
	.string "That's the part that gets me.$"

ParcelIsle_LogisticsClerk_Text_1:
# 298 "data/maps/ParcelIsle/scripts.pory"
	.string "Pell: Relief convoy for the basin, three\n"
	.string "trucks, Foundation crest, Council seal.\p"
	.string "Relief for what? Don't ask me. I log\n"
	.string "what moves. Somebody else decides what\l"
	.string "it means.$"

ParcelIsle_LogisticsClerk_Text_2:
# 300 "data/maps/ParcelIsle/scripts.pory"
	.string "Pell: Corps is hiring provisionals again.\n"
	.string "That's you? Congratulations. Your\l"
	.string "gear's on a manifest with our crest on\l"
	.string "it.\p"
	.string "Not a complaint. Just accuracy. I'm paid\n"
	.string "for accuracy.$"

ParcelIsle_LogisticsClerk_Text_3:
# 302 "data/maps/ParcelIsle/scripts.pory"
	.string "Pell: Everything that moves through\n"
	.string "Saltwick is on a manifest. Fuel, crates,\l"
	.string "the ferry you came in on, the potion on\l"
	.string "your belt if it came by boat.\p"
	.string "You? Passenger, one, off at the island\n"
	.string "stop. I've got you already.$"

ParcelIsle_KidA_Text_0:
# 313 "data/maps/ParcelIsle/scripts.pory"
	.string "Ebba: Nils says you wrote it down. All of\n"
	.string "it. Even the frogs.\p"
	.string "Are we in it? We saw them first.$"

ParcelIsle_KidA_Text_1:
# 315 "data/maps/ParcelIsle/scripts.pory"
	.string "Ebba: You saw them too. On the bridge.\n"
	.string "Going the wrong way.\p"
	.string "Nils said you'd say we made it up. You\n"
	.string "didn't.$"

ParcelIsle_KidA_Text_2:
# 317 "data/maps/ParcelIsle/scripts.pory"
	.string "Ebba: There were frogs in the inlet\n"
	.string "going the WRONG way! Upstream, all in a\l"
	.string "line, like they were late for something.\p"
	.string "Nils says frogs don't get late.$"

ParcelIsle_KidB_Text_0:
# 327 "data/maps/ParcelIsle/scripts.pory"
	.string "Nils: What's the word? For when a place\n"
	.string "is running out?\p"
	.string "Ebba says you've got a word for it now.\n"
	.string "I want the word.$"

ParcelIsle_KidB_Text_1:
# 329 "data/maps/ParcelIsle/scripts.pory"
	.string "Nils: Gran says the Poliwag have always\n"
	.string "done that. Gran says a lot of things\l"
	.string "have always done that.\p"
	.string "I counted anyway. Fourteen. Less than\n"
	.string "last time.$"

ParcelIsle_KidB_Text_2:
# 331 "data/maps/ParcelIsle/scripts.pory"
	.string "Nils: Frogs don't get late. They get\n"
	.string "scared, maybe.\p"
	.string "Don't tell Ebba I said scared.$"

ParcelIsle_OldMan_Text_0:
# 342 "data/maps/ParcelIsle/scripts.pory"
	.string "Halvar: Somebody finally said it out\n"
	.string "loud. In writing. With a name at the\l"
	.string "bottom.\p"
	.string "It cost you. It'll cost everyone. Forty\n"
	.string "years I walked that bridge and it never\l"
	.string "once occurred to me that the cost was\l"
	.string "the point.$"

ParcelIsle_OldMan_Text_1:
# 344 "data/maps/ParcelIsle/scripts.pory"
	.string "Halvar: Hale signed for you? Hale\n"
	.string "doesn't sign for anyone. He didn't sign\l"
	.string "for me, and I ran his station before he\l"
	.string "did.\p"
	.string "Watch him. Not because he's wrong.\n"
	.string "Because he's tired, and tired men are\l"
	.string "careful in the wrong places.$"

ParcelIsle_OldMan_Text_2:
# 346 "data/maps/ParcelIsle/scripts.pory"
	.string "Halvar: Forty years I walked that\n"
	.string "bridge for the Corps. Never saw the\l"
	.string "water this quiet.\p"
	.string "Quiet's not peace. Quiet's what a place\n"
	.string "does when it's counting.$"

ParcelIsle_Birder_Text_0:
# 358 "data/maps/ParcelIsle/scripts.pory"
	.string "Corwen: The storm-relief birds were on\n"
	.string "the wireless this morning. By name.\l"
	.string "Delibird. Somebody read your filing on\l"
	.string "air.\p"
	.string "Forty years of lists and I never once\n"
	.string "made the news. Good.$"

ParcelIsle_Birder_Text_1:
# 360 "data/maps/ParcelIsle/scripts.pory"
	.string "Corwen: Eleven species on the inlet\n"
	.string "today. Twenty, the year I started.\p"
	.string "The list is the only thing I own that\n"
	.string "gets shorter and heavier at the same\l"
	.string "time.$"

ParcelIsle_Birder_Text_2:
# 366 "data/maps/ParcelIsle/scripts.pory"
	.string "Corwen: You've been out to the island. I\n"
	.string "can see it on you -- the cold's still in\l"
	.string "your coat.\p"
	.string "Tell me. Did you see one? A Delibird. On\n"
	.string "the ground, not in a picture.$"

ParcelIsle_Birder_Text_3:
# 368 "data/maps/ParcelIsle/scripts.pory"
	.string "Corwen: …Then they're still there. I\n"
	.string "haven't been able to cross since my\l"
	.string "knee. Fifteen years I've had them on\l"
	.string "the list from memory.\p"
	.string "Take this. It's for looking at what's far\n"
	.string "off. I'm done needing it.$"

ParcelIsle_Birder_Text_4:
# 372 "data/maps/ParcelIsle/scripts.pory"
	.string "Corwen: No. …No, that's honest. Come\n"
	.string "back when you have.$"

ParcelIsle_Birder_Text_5:
# 378 "data/maps/ParcelIsle/scripts.pory"
	.string "Corwen: The Survey knot. Ilex ties them\n"
	.string "left over right; she's the only one. So\l"
	.string "you've met her.\p"
	.string "If the Corps ever sends you north to\n"
	.string "the island, look for a bird with a tail\l"
	.string "like a rope. Then come and tell me.$"

ParcelIsle_Birder_Text_6:
# 380 "data/maps/ParcelIsle/scripts.pory"
	.string "Corwen: Wingull, Pelipper, one Swablu\n"
	.string "that has no business this far north.\p"
	.string "I keep a list. It's shorter than it was.\n"
	.string "That's not an opinion. That's a list.$"

ParcelIsle_KidTrainer_Text_0:
# 388 "data/maps/ParcelIsle/scripts.pory"
	.string "Timo: You came off the ferry!\n"
	.string "Mainlanders always have neat Pokémon.\l"
	.string "Battle me!$"

ParcelIsle_KidTrainer_Text_1:
# 389 "data/maps/ParcelIsle/scripts.pory"
	.string "Timo: Whoa. Okay.$"

ParcelIsle_KidTrainer_Text_2:
# 393 "data/maps/ParcelIsle/scripts.pory"
	.string "Timo: You went past the bridge. Gran\n"
	.string "says you're allowed now because of the\l"
	.string "knot.\p"
	.string "What's past it? …No. Don't tell me. I\n"
	.string "want to be allowed first.$"

ParcelIsle_KidTrainer_Text_3:
# 395 "data/maps/ParcelIsle/scripts.pory"
	.string "Timo: Gran says don't go past the\n"
	.string "bridge.\p"
	.string "She won't say why.$"

ParcelIsle_TownSign_Text_0:
# 402 "data/maps/ParcelIsle/scripts.pory"
	.string "SALTWICK\p"
	.string "Saltmarsh Coast -- Skaldmere Regional\n"
	.string "Council\p"
	.string "A smaller plate beneath, newer than the\n"
	.string "sign: Harbour works by MEREHOLT\l"
	.string "COASTAL.$"

ParcelIsle_Neighbor_Text_0:
# 416 "data/maps/ParcelIsle/scripts.pory"
	.string "Marit: I said forget I said anything.\n"
	.string "That first day.\p"
	.string "I'm not saying it now. She wrote about\n"
	.string "you because you'd do this. She knew. I\l"
	.string "think she was sorry, and I think she\l"
	.string "knew that too.$"

ParcelIsle_Neighbor_Text_1:
# 418 "data/maps/ParcelIsle/scripts.pory"
	.string "Marit: You've been in the annex. I can\n"
	.string "tell; people come out of there quiet.\p"
	.string "She left it tidy. That's what nobody\n"
	.string "says. Ransacked places aren't tidy.$"

ParcelIsle_Neighbor_Text_2:
# 420 "data/maps/ParcelIsle/scripts.pory"
	.string "Oh--you're the one the scientist wrote\n"
	.string "about, aren't you? The young naturalist\l"
	.string "with the--$"

ParcelIsle_Neighbor_Text_3:
# 423 "data/maps/ParcelIsle/scripts.pory"
	.string "…Forget I said anything. It's cold out.\n"
	.string "You should get indoors, {PLAYER}.$"

ParcelIsle_Innkeeper_Text_0:
# 441 "data/maps/ParcelIsle/scripts.pory"
	.string "Liv: Two lawyers and a journalist in the\n"
	.string "good rooms. Mum's charging them double\l"
	.string "and apologising for it.\p"
	.string "Your room's still yours. She won't let it.$"

ParcelIsle_Innkeeper_Text_1:
# 443 "data/maps/ParcelIsle/scripts.pory"
	.string "Liv: Mum says rangers eat like they're\n"
	.string "paid in weather. She's made the big pot.\p"
	.string "She hasn't made the big pot since the\n"
	.string "scientist left.$"

ParcelIsle_Innkeeper_Text_2:
# 445 "data/maps/ParcelIsle/scripts.pory"
	.string "Liv: Mum's kept your room since the\n"
	.string "letter came. Swept it every week. She\l"
	.string "wouldn't say who for.\p"
	.string "The lamp's lit. Go on in.$"

ParcelIsle_ChandlerBrother_Text_0:
# 456 "data/maps/ParcelIsle/scripts.pory"
	.string "Ossian: Kit's sold more rope this week\n"
	.string "than all winter. Everyone suddenly\l"
	.string "wants to tie something down.\p"
	.string "I sit. I've always sat. Turns out sitting\n"
	.string "was the wrong way to be right.$"

ParcelIsle_ChandlerBrother_Text_1:
# 458 "data/maps/ParcelIsle/scripts.pory"
	.string "Ossian: Kit's got the ranger stock in\n"
	.string "now. Repels, the good potions. Says the\l"
	.string "Corps pays on time, unlike some.\p"
	.string "She means the fleet. She won't say the\n"
	.string "fleet.$"

ParcelIsle_ChandlerBrother_Text_2:
# 460 "data/maps/ParcelIsle/scripts.pory"
	.string "Ossian: Kit's inside. She sells; I sit.\n"
	.string "It's an arrangement.\p"
	.string "Wind's coming off the water wrong all\n"
	.string "month. You get used to it. Mostly.$"

ParcelIsle_LabSign_Text_0:
# 472 "data/maps/ParcelIsle/scripts.pory"
	.string "FIELD RESEARCH ANNEX\n"
	.string "Skaldmere Survey cooperative site\p"
	.string "A strip of red cloth is nailed under the\n"
	.string "plate, faded gray.$"

ParcelIsle_HallSign_Text_0:
# 477 "data/maps/ParcelIsle/scripts.pory"
	.string "SALTWICK FISHERS' CO-OPERATIVE\p"
	.string "Meetings first Tuesday. Members and\n"
	.string "guests.\p"
	.string "Under that, stencilled: with the\n"
	.string "support of the MEREHOLT FOUNDATION.$"

ParcelIsle_NoticeBoard_Text_0:
# 483 "data/maps/ParcelIsle/scripts.pory"
	.string "NOTICES\p"
	.string "REGIONAL HEARINGS -- COASTAL QUOTAS:\n"
	.string "public sessions, the Council hall,\l"
	.string "Thursdays. Transport provided.\p"
	.string "Mereholt Coastal: day-rate hiring\n"
	.string "SUSPENDED pending review.\p"
	.string "Someone has pinned a strip of red cloth\n"
	.string "to the corner of the board.$"

ParcelIsle_NoticeBoard_Text_1:
# 485 "data/maps/ParcelIsle/scripts.pory"
	.string "NOTICES\p"
	.string "Skaldmere Climate Corps: provisional\n"
	.string "rangers wanted. Apply at the district\l"
	.string "station, past the bridge.\p"
	.string "Mereholt Coastal: day-rate hiring,\n"
	.string "quay, dawn. Own boots.\p"
	.string "Lost: one grey cat, answers to Sedge.$"

ParcelIsle_NoticeBoard_Text_2:
# 487 "data/maps/ParcelIsle/scripts.pory"
	.string "NOTICES\p"
	.string "Mereholt Coastal: day-rate hiring,\n"
	.string "quay, dawn. Own boots.\p"
	.string "Ferry schedule: see board at landing.\p"
	.string "Lost: one grey cat, answers to Sedge.\p"
	.string "A fourth notice has been torn down. Two\n"
	.string "corners of it are still under the pins.$"

ParcelIsle_WeatherStationSign_Text_0:
# 493 "data/maps/ParcelIsle/scripts.pory"
	.string "AUTOMATED WEATHER STATION 04\n"
	.string "Skaldmere Climate Corps\p"
	.string "Instrument sponsorship: the Mereholt\n"
	.string "Foundation\p"
	.string "The anemometer turns. The logger light\n"
	.string "is off.$"

ParcelIsle_PreserveGateSign_Text_0:
# 498 "data/maps/ParcelIsle/scripts.pory"
	.string "MISTWOOD SHORE PRESERVE\n"
	.string "No entry beyond this point without a\l"
	.string "Corps permit.\p"
	.string "The green-and-grey crest of the\n"
	.string "Mereholt Foundation, cast in bronze,\l"
	.string "very clean.\p"
	.string "The gate is chained.$"
