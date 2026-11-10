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
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_HeavyCoat_2
# 98 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_HeavyCoat_5
# 100 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_HeavyCoat_6
# 102 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_HeavyCoat_7
# 105 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_4, MSGBOX_DEFAULT
ParcelIsle_HeavyCoat_4:
# 107 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_HeavyCoat_2:
# 94 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_0, MSGBOX_DEFAULT
# 95 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_HeavyCoat_5:
# 99 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_HeavyCoat_4

ParcelIsle_HeavyCoat_6:
# 101 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_HeavyCoat_4

ParcelIsle_HeavyCoat_7:
# 103 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HeavyCoat_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_HeavyCoat_4


ParcelIsle_Fisher::
# 113 "data/maps/ParcelIsle/scripts.pory"
	lock
# 114 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 115 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_Fisher_3
ParcelIsle_Fisher_1:
# 120 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_NET, ParcelIsle_Fisher_8
ParcelIsle_Fisher_6:
# 128 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Fisher_12
# 130 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Fisher_13
# 133 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_5, MSGBOX_DEFAULT
ParcelIsle_Fisher_11:
# 135 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Fisher_2:
# 116 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_0, MSGBOX_DEFAULT
# 117 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Fisher_3:
# 115 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_DONE, ParcelIsle_Fisher_2
	goto ParcelIsle_Fisher_1

ParcelIsle_Fisher_7:
# 121 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_1, MSGBOX_DEFAULT
# 122 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_2, MSGBOX_DEFAULT
# 123 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_OLD_ROD
# 124 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_ANNI_DONE
# 125 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Fisher_8:
# 120 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_ANNI_DONE, ParcelIsle_Fisher_7
	goto ParcelIsle_Fisher_6

ParcelIsle_Fisher_12:
# 129 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_Fisher_11

ParcelIsle_Fisher_13:
# 131 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Fisher_Text_4, MSGBOX_DEFAULT
	goto ParcelIsle_Fisher_11


ParcelIsle_Dockworker::
# 141 "data/maps/ParcelIsle/scripts.pory"
	lock
# 142 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 143 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_Dockworker_2
# 148 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelIsle_Dockworker_5
# 150 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Dockworker_6
# 152 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Dockworker_7
# 155 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_4, MSGBOX_DEFAULT
ParcelIsle_Dockworker_4:
# 157 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Dockworker_2:
# 144 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_0, MSGBOX_DEFAULT
# 145 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Dockworker_5:
# 149 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Dockworker_4

ParcelIsle_Dockworker_6:
# 151 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_Dockworker_4

ParcelIsle_Dockworker_7:
# 153 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Dockworker_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_Dockworker_4


ParcelIsle_NetMender::
# 163 "data/maps/ParcelIsle/scripts.pory"
	lock
# 164 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 165 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_NetMender_3
ParcelIsle_NetMender_1:
# 170 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_DONE, ParcelIsle_NetMender_7
# 179 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_NET, ParcelIsle_NetMender_10
# 184 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_NetMender_17
# 191 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_6, MSGBOX_DEFAULT
# 192 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_NetMender_2:
# 166 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_0, MSGBOX_DEFAULT
# 167 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_NetMender_3:
# 165 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_DONE, ParcelIsle_NetMender_2
	goto ParcelIsle_NetMender_1

ParcelIsle_NetMender_7:
# 171 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_NetMender_13
# 174 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_2, MSGBOX_DEFAULT
ParcelIsle_NetMender_12:
# 176 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_NetMender_10:
# 180 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_3, MSGBOX_DEFAULT
# 181 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_NetMender_13:
# 172 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_NetMender_12

ParcelIsle_NetMender_17:
# 185 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_4, MSGBOX_DEFAULT
# 186 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NetMender_Text_5, MSGBOX_DEFAULT
# 187 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_ANNI_NET
# 188 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_HarbourLad::
# 198 "data/maps/ParcelIsle/scripts.pory"
	lock
# 199 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 200 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ParcelIsle_HarbourLad_2
# 205 "data/maps/ParcelIsle/scripts.pory"
	release
# 206 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HARBOUR_LAD, ParcelIsle_HarbourLad_Text_1, ParcelIsle_HarbourLad_Text_2
# 209 "data/maps/ParcelIsle/scripts.pory"
	lock
# 210 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 211 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_HarbourLad_5
# 214 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HarbourLad_Text_4, MSGBOX_DEFAULT
ParcelIsle_HarbourLad_4:
# 216 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_HarbourLad_2:
# 201 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HarbourLad_Text_0, MSGBOX_DEFAULT
# 202 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_HarbourLad_5:
# 212 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HarbourLad_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_HarbourLad_4


ParcelIsle_Widow::
# 222 "data/maps/ParcelIsle/scripts.pory"
	lock
# 223 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 224 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_Widow_3
ParcelIsle_Widow_1:
# 229 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGRUN_DONE, ParcelIsle_Widow_7
# 234 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGRUN, ParcelIsle_Widow_10
# 248 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_6, MSGBOX_YESNO
# 249 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelIsle_Widow_13
# 253 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_8, MSGBOX_DEFAULT
ParcelIsle_Widow_12:
# 255 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Widow_2:
# 225 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_0, MSGBOX_DEFAULT
# 226 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Widow_3:
# 224 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGRUN_DONE, ParcelIsle_Widow_2
	goto ParcelIsle_Widow_1

ParcelIsle_Widow_7:
# 230 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_1, MSGBOX_DEFAULT
# 231 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Widow_10:
# 235 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Widow_17
# 240 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Widow_18
# 243 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_5, MSGBOX_DEFAULT
ParcelIsle_Widow_16:
# 245 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Widow_13:
# 250 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_7, MSGBOX_DEFAULT
# 251 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SIGRUN
	goto ParcelIsle_Widow_12

ParcelIsle_Widow_17:
# 236 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_2, MSGBOX_DEFAULT
# 237 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_3, MSGBOX_DEFAULT
# 238 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 239 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SIGRUN_DONE
	goto ParcelIsle_Widow_16

ParcelIsle_Widow_18:
# 241 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Widow_Text_4, MSGBOX_DEFAULT
	goto ParcelIsle_Widow_16


ParcelIsle_FerrySign::
# 260 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_FerrySign_2
# 263 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerrySign_Text_1, MSGBOX_SIGN
ParcelIsle_FerrySign_1:
	end

ParcelIsle_FerrySign_2:
# 261 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerrySign_Text_0, MSGBOX_SIGN
	goto ParcelIsle_FerrySign_1


ParcelIsle_FerryCaptain::
# 271 "data/maps/ParcelIsle/scripts.pory"
	lock
# 272 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 275 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TALLY, ParcelIsle_FerryCaptain_4
ParcelIsle_FerryCaptain_1:
# 280 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_HIGHLAND_CERT, ParcelIsle_FerryCaptain_9
# 295 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_TALLY, ParcelIsle_FerryCaptain_13
ParcelIsle_FerryCaptain_11:
# 299 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_FerryCaptain_23
ParcelIsle_FerryCaptain_22:
# 301 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_FerryCaptain_21
ParcelIsle_FerryCaptain_19:
# 304 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_6, MSGBOX_DEFAULT
# 305 "data/maps/ParcelIsle/scripts.pory"
	multichoice 1, 1, MULTI_SKALD_FERRY, FALSE
# 306 "data/maps/ParcelIsle/scripts.pory"
	switch VAR_RESULT
# 307 "data/maps/ParcelIsle/scripts.pory"
	case 0, ParcelIsle_FerryCaptain_32
# 314 "data/maps/ParcelIsle/scripts.pory"
	case 1, ParcelIsle_FerryCaptain_33
# 326 "data/maps/ParcelIsle/scripts.pory"
	case 2, ParcelIsle_FerryCaptain_34
# 339 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_9, MSGBOX_DEFAULT
# 340 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_2:
# 276 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_0, MSGBOX_DEFAULT
# 277 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_NET_BALL, 3
# 278 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_TALLY_DONE
	goto ParcelIsle_FerryCaptain_1

ParcelIsle_FerryCaptain_3:
# 275 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TALLY_FOUND, ParcelIsle_FerryCaptain_2
	goto ParcelIsle_FerryCaptain_1

ParcelIsle_FerryCaptain_4:
# 275 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_TALLY_DONE, ParcelIsle_FerryCaptain_3
	goto ParcelIsle_FerryCaptain_1

ParcelIsle_FerryCaptain_9:
# 281 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_1, MSGBOX_DEFAULT
# 282 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TALLY_DONE, ParcelIsle_FerryCaptain_17
# 286 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TALLY, ParcelIsle_FerryCaptain_27
# 289 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_3, MSGBOX_DEFAULT
# 290 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_TALLY
ParcelIsle_FerryCaptain_26:
# 292 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_12:
# 296 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_3, MSGBOX_DEFAULT
# 297 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_TALLY
	goto ParcelIsle_FerryCaptain_11

ParcelIsle_FerryCaptain_13:
# 295 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_TALLY_DONE, ParcelIsle_FerryCaptain_12
	goto ParcelIsle_FerryCaptain_11

ParcelIsle_FerryCaptain_17:
# 283 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_20:
# 300 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_4, MSGBOX_DEFAULT
	goto ParcelIsle_FerryCaptain_19

ParcelIsle_FerryCaptain_21:
# 302 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_5, MSGBOX_DEFAULT
	goto ParcelIsle_FerryCaptain_19

ParcelIsle_FerryCaptain_23:
# 299 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TALLY_DONE, ParcelIsle_FerryCaptain_20
	goto ParcelIsle_FerryCaptain_22

ParcelIsle_FerryCaptain_27:
# 287 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_FerryCaptain_26

	end

ParcelIsle_FerryCaptain_32:
# 308 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 309 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 310 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 311 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_DELIBIRD, 9, 22
# 312 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_33:
# 315 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_DELIBIRD_ARRIVAL, ParcelIsle_FerryCaptain_37
# 320 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 321 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 322 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 323 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_COAST, 30, 55
# 324 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_34:
# 327 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_COASTAL_CERT, ParcelIsle_FerryCaptain_40
# 332 "data/maps/ParcelIsle/scripts.pory"
	closemessage
# 333 "data/maps/ParcelIsle/scripts.pory"
	playse SE_SHIP
# 334 "data/maps/ParcelIsle/scripts.pory"
	delay 40
# 335 "data/maps/ParcelIsle/scripts.pory"
	warp MAP_PARCEL_WEATHER, 9, 34
# 336 "data/maps/ParcelIsle/scripts.pory"
	waitstate
	end

ParcelIsle_FerryCaptain_37:
# 316 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_7, MSGBOX_DEFAULT
# 317 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_FerryCaptain_40:
# 328 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FerryCaptain_Text_8, MSGBOX_DEFAULT
# 329 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_GateMoore::
# 348 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GATE_ISLE, ParcelIsle_GateMoore_Text_0, ParcelIsle_GateMoore_Text_1, ParcelIsle_GateMoore_Defeated
# 352 "data/maps/ParcelIsle/scripts.pory"
	lock
# 353 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 354 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_GateMoore_Text_2, MSGBOX_DEFAULT
# 355 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_GateMoore_Defeated::
# 360 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_ISLE
# 361 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_GateMoore_Defeated_Text_0, MSGBOX_DEFAULT
# 362 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_ItemNetBall::
# 367 "data/maps/ParcelIsle/scripts.pory"
	finditem ITEM_NET_BALL
	end


ParcelIsle_LogisticsClerk::
# 377 "data/maps/ParcelIsle/scripts.pory"
	lock
# 378 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 379 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SEAL, ParcelIsle_LogisticsClerk_5
ParcelIsle_LogisticsClerk_4:
# 389 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SEAL_DONE, ParcelIsle_LogisticsClerk_3
# 395 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_LogisticsClerk_9
# 400 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_LogisticsClerk_16
# 402 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_LogisticsClerk_17
# 404 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelIsle_LogisticsClerk_18
# 406 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_LogisticsClerk_19
# 409 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_8, MSGBOX_DEFAULT
ParcelIsle_LogisticsClerk_15:
# 411 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_LogisticsClerk_2:
# 380 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SEAL_FOUND, ParcelIsle_LogisticsClerk_12
# 385 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_1, MSGBOX_DEFAULT
ParcelIsle_LogisticsClerk_11:
# 387 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_LogisticsClerk_3:
# 390 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_2, MSGBOX_DEFAULT
# 391 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SEAL
# 392 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_LogisticsClerk_5:
# 379 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SEAL_DONE, ParcelIsle_LogisticsClerk_2
	goto ParcelIsle_LogisticsClerk_4

ParcelIsle_LogisticsClerk_9:
# 396 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_3, MSGBOX_DEFAULT
# 397 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_LogisticsClerk_12:
# 381 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_0, MSGBOX_DEFAULT
# 382 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_REPEAT_BALL, 2
# 383 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SEAL_DONE
	goto ParcelIsle_LogisticsClerk_11

ParcelIsle_LogisticsClerk_16:
# 401 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_4, MSGBOX_DEFAULT
	goto ParcelIsle_LogisticsClerk_15

ParcelIsle_LogisticsClerk_17:
# 403 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_5, MSGBOX_DEFAULT
	goto ParcelIsle_LogisticsClerk_15

ParcelIsle_LogisticsClerk_18:
# 405 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_6, MSGBOX_DEFAULT
	goto ParcelIsle_LogisticsClerk_15

ParcelIsle_LogisticsClerk_19:
# 407 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LogisticsClerk_Text_7, MSGBOX_DEFAULT
	goto ParcelIsle_LogisticsClerk_15


ParcelIsle_KidA::
# 417 "data/maps/ParcelIsle/scripts.pory"
	lock
# 418 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 419 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_KidA_2
# 424 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_KidA_5
# 426 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_KidA_6
# 428 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_BRIDGE_SCENE, ParcelIsle_KidA_7
# 431 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidA_Text_4, MSGBOX_DEFAULT
ParcelIsle_KidA_4:
# 433 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_KidA_2:
# 420 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidA_Text_0, MSGBOX_DEFAULT
# 421 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_KidA_5:
# 425 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidA_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_KidA_4

ParcelIsle_KidA_6:
# 427 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidA_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_KidA_4

ParcelIsle_KidA_7:
# 429 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidA_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_KidA_4


ParcelIsle_KidB::
# 438 "data/maps/ParcelIsle/scripts.pory"
	lock
# 439 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 440 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_KidB_2
# 445 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_KidB_5
# 447 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_KidB_6
# 449 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_BRIDGE_SCENE, ParcelIsle_KidB_7
# 452 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidB_Text_4, MSGBOX_DEFAULT
ParcelIsle_KidB_4:
# 454 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_KidB_2:
# 441 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidB_Text_0, MSGBOX_DEFAULT
# 442 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_KidB_5:
# 446 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidB_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_KidB_4

ParcelIsle_KidB_6:
# 448 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidB_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_KidB_4

ParcelIsle_KidB_7:
# 450 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidB_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_KidB_4


ParcelIsle_OldMan::
# 460 "data/maps/ParcelIsle/scripts.pory"
	lock
# 461 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 462 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_OldMan_3
ParcelIsle_OldMan_1:
# 467 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HALVAR, ParcelIsle_OldMan_8
ParcelIsle_OldMan_6:
# 481 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_OldMan_12
# 483 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_HALVAR_DONE, ParcelIsle_OldMan_13
# 486 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_OldMan_14
# 488 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_OldMan_15
# 491 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_9, MSGBOX_DEFAULT
ParcelIsle_OldMan_11:
# 493 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_OldMan_2:
# 463 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_0, MSGBOX_DEFAULT
# 464 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_OldMan_3:
# 462 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HALVAR_DONE, ParcelIsle_OldMan_2
	goto ParcelIsle_OldMan_1

ParcelIsle_OldMan_7:
# 468 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HALVAR_FOUND, ParcelIsle_OldMan_22
# 477 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_4, MSGBOX_DEFAULT
# 478 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_OldMan_8:
# 467 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_HALVAR_DONE, ParcelIsle_OldMan_7
	goto ParcelIsle_OldMan_6

ParcelIsle_OldMan_12:
# 482 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_5, MSGBOX_DEFAULT
	goto ParcelIsle_OldMan_11

ParcelIsle_OldMan_13:
# 484 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_6, MSGBOX_DEFAULT
# 485 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_HALVAR
	goto ParcelIsle_OldMan_11

ParcelIsle_OldMan_14:
# 487 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_7, MSGBOX_DEFAULT
	goto ParcelIsle_OldMan_11

ParcelIsle_OldMan_15:
# 489 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_8, MSGBOX_DEFAULT
	goto ParcelIsle_OldMan_11

ParcelIsle_OldMan_22:
# 469 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_1, MSGBOX_DEFAULT
# 470 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_2, MSGBOX_DEFAULT
# 471 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 472 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_HALVAR_DONE
# 473 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_OldMan_Text_3, MSGBOX_DEFAULT
# 474 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_Birder::
# 499 "data/maps/ParcelIsle/scripts.pory"
	lock
# 500 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 501 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_Birder_3
ParcelIsle_Birder_1:
# 506 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BIRDER_DONE, ParcelIsle_Birder_7
# 515 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_ARRIVAL, ParcelIsle_Birder_10
# 527 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Birder_17
# 530 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_7, MSGBOX_DEFAULT
ParcelIsle_Birder_16:
# 532 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Birder_2:
# 502 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_0, MSGBOX_DEFAULT
# 503 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Birder_3:
# 501 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BIRDER_DONE, ParcelIsle_Birder_2
	goto ParcelIsle_Birder_1

ParcelIsle_Birder_7:
# 507 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Birder_13
# 510 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_2, MSGBOX_DEFAULT
ParcelIsle_Birder_12:
# 512 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Birder_10:
# 516 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_3, MSGBOX_YESNO
# 517 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelIsle_Birder_21
# 522 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_5, MSGBOX_DEFAULT
ParcelIsle_Birder_20:
# 524 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Birder_13:
# 508 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Birder_12

ParcelIsle_Birder_17:
# 528 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_6, MSGBOX_DEFAULT
	goto ParcelIsle_Birder_16

ParcelIsle_Birder_21:
# 518 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Birder_Text_4, MSGBOX_DEFAULT
# 519 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 520 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_BIRDER_DONE
	goto ParcelIsle_Birder_20


ParcelIsle_KidTrainer::
# 537 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_KID, ParcelIsle_KidTrainer_Text_0, ParcelIsle_KidTrainer_Text_1
# 540 "data/maps/ParcelIsle/scripts.pory"
	lock
# 541 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 542 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_KidTrainer_2
# 545 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidTrainer_Text_3, MSGBOX_DEFAULT
ParcelIsle_KidTrainer_1:
# 547 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_KidTrainer_2:
# 543 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_KidTrainer_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_KidTrainer_1


ParcelIsle_TownSign::
# 552 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_TownSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_Neighbor::
# 562 "data/maps/ParcelIsle/scripts.pory"
	lock
# 563 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 564 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_Neighbor_2
# 569 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Neighbor_5
# 571 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_Neighbor_6
# 573 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_LAB_SEEN, ParcelIsle_Neighbor_7
# 576 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_4, MSGBOX_DEFAULT
# 577 "data/maps/ParcelIsle/scripts.pory"
	applymovement 4, Movement_GlanceAway
# 578 "data/maps/ParcelIsle/scripts.pory"
	waitmovement 0
# 579 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_5, MSGBOX_DEFAULT
ParcelIsle_Neighbor_4:
# 581 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Neighbor_2:
# 565 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_0, MSGBOX_DEFAULT
# 566 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Neighbor_5:
# 570 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Neighbor_4

ParcelIsle_Neighbor_6:
# 572 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_Neighbor_4

ParcelIsle_Neighbor_7:
# 574 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Neighbor_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_Neighbor_4


# 585 "data/maps/ParcelIsle/scripts.pory"
Movement_GlanceAway:
# 586 "data/maps/ParcelIsle/scripts.pory"
	face_right
# 587 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 588 "data/maps/ParcelIsle/scripts.pory"
	delay_16
# 589 "data/maps/ParcelIsle/scripts.pory"
	step_end

ParcelIsle_Innkeeper::
# 594 "data/maps/ParcelIsle/scripts.pory"
	lock
# 595 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 596 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_Innkeeper_2
# 601 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Innkeeper_5
# 603 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_Innkeeper_6
# 605 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Innkeeper_7
# 608 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Innkeeper_Text_4, MSGBOX_DEFAULT
ParcelIsle_Innkeeper_4:
# 610 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Innkeeper_2:
# 597 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Innkeeper_Text_0, MSGBOX_DEFAULT
# 598 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Innkeeper_5:
# 602 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Innkeeper_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Innkeeper_4

ParcelIsle_Innkeeper_6:
# 604 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Innkeeper_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_Innkeeper_4

ParcelIsle_Innkeeper_7:
# 606 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Innkeeper_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_Innkeeper_4


ParcelIsle_ChandlerBrother::
# 616 "data/maps/ParcelIsle/scripts.pory"
	lock
# 617 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 618 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_ChandlerBrother_2
# 623 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_ChandlerBrother_5
# 625 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_ChandlerBrother_6
# 627 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_ChandlerBrother_7
# 630 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ChandlerBrother_Text_4, MSGBOX_DEFAULT
ParcelIsle_ChandlerBrother_4:
# 632 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_ChandlerBrother_2:
# 619 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ChandlerBrother_Text_0, MSGBOX_DEFAULT
# 620 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_ChandlerBrother_5:
# 624 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ChandlerBrother_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_ChandlerBrother_4

ParcelIsle_ChandlerBrother_6:
# 626 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ChandlerBrother_Text_2, MSGBOX_DEFAULT
	goto ParcelIsle_ChandlerBrother_4

ParcelIsle_ChandlerBrother_7:
# 628 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ChandlerBrother_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_ChandlerBrother_4


ParcelIsle_ItemPotion::
# 637 "data/maps/ParcelIsle/scripts.pory"
	finditem ITEM_POTION
	end


ParcelIsle_LabSign::
# 642 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_LabSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_HallSign::
# 647 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_HallSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_NoticeBoard::
# 652 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_NoticeBoard_2
# 654 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_NoticeBoard_3
# 657 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NoticeBoard_Text_2, MSGBOX_SIGN
ParcelIsle_NoticeBoard_1:
	end

ParcelIsle_NoticeBoard_2:
# 653 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NoticeBoard_Text_0, MSGBOX_SIGN
	goto ParcelIsle_NoticeBoard_1

ParcelIsle_NoticeBoard_3:
# 655 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_NoticeBoard_Text_1, MSGBOX_SIGN
	goto ParcelIsle_NoticeBoard_1


ParcelIsle_WeatherStationSign::
# 663 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_WeatherStationSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_PreserveGateSign::
# 668 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PreserveGateSign_Text_0, MSGBOX_SIGN
	end


ParcelIsle_CenterAide::
# 677 "data/maps/ParcelIsle/scripts.pory"
	lock
# 678 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 679 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_CenterAide_2
# 684 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_CenterAide_5
# 689 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsle_CenterAide_8
# 694 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_CenterAide_Text_3, MSGBOX_DEFAULT
# 695 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_CenterAide_2:
# 680 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_CenterAide_Text_0, MSGBOX_DEFAULT
# 681 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_CenterAide_5:
# 685 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_CenterAide_Text_1, MSGBOX_DEFAULT
# 686 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_CenterAide_8:
# 690 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_CenterAide_Text_2, MSGBOX_DEFAULT
# 691 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Brand::
# 701 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ISLE_BRAND, ParcelIsle_T_Brand_Text_0, ParcelIsle_T_Brand_Text_1, ParcelIsle_T_Brand_FirstWin
# 705 "data/maps/ParcelIsle/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 706 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelIsle_T_Brand_3
ParcelIsle_T_Brand_1:
# 709 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelIsle_T_Brand_8
ParcelIsle_T_Brand_6:
# 712 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelIsle_T_Brand_13
ParcelIsle_T_Brand_11:
# 715 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelIsle_T_Brand_18
ParcelIsle_T_Brand_16:
# 718 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_Text_2, MSGBOX_DEFAULT
	end

ParcelIsle_T_Brand_2:
# 707 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Brand_R2
	goto ParcelIsle_T_Brand_1

ParcelIsle_T_Brand_3:
# 706 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_BRAND_R2
	goto_if 0, ParcelIsle_T_Brand_2
	goto ParcelIsle_T_Brand_1

ParcelIsle_T_Brand_7:
# 710 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Brand_R3
	goto ParcelIsle_T_Brand_6

ParcelIsle_T_Brand_8:
# 709 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_BRAND_R3
	goto_if 0, ParcelIsle_T_Brand_7
	goto ParcelIsle_T_Brand_6

ParcelIsle_T_Brand_12:
# 713 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Brand_R4
	goto ParcelIsle_T_Brand_11

ParcelIsle_T_Brand_13:
# 712 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_BRAND_R4
	goto_if 0, ParcelIsle_T_Brand_12
	goto ParcelIsle_T_Brand_11

ParcelIsle_T_Brand_17:
# 716 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Brand_R5
	goto ParcelIsle_T_Brand_16

ParcelIsle_T_Brand_18:
# 715 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_BRAND_R5
	goto_if 0, ParcelIsle_T_Brand_17
	goto ParcelIsle_T_Brand_16


ParcelIsle_T_Brand_FirstWin::
# 722 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_Text_2, MSGBOX_DEFAULT
# 723 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Brand_R2::
# 727 "data/maps/ParcelIsle/scripts.pory"
	lock
# 728 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 729 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_0, MSGBOX_YESNO
# 730 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Brand_R2_2
# 735 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_BRAND_R2, ParcelIsle_T_Brand_R2_Text_2
# 736 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_3, MSGBOX_DEFAULT
# 737 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Brand_R2_2:
# 731 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_1, MSGBOX_DEFAULT
# 732 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Brand_R3::
# 741 "data/maps/ParcelIsle/scripts.pory"
	lock
# 742 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 743 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R3_Text_0, MSGBOX_YESNO
# 744 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Brand_R3_2
# 749 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_BRAND_R3, ParcelIsle_T_Brand_R2_Text_2
# 750 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R3_Text_1, MSGBOX_DEFAULT
# 751 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Brand_R3_2:
# 745 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_1, MSGBOX_DEFAULT
# 746 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Brand_R4::
# 755 "data/maps/ParcelIsle/scripts.pory"
	lock
# 756 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 757 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R4_Text_0, MSGBOX_YESNO
# 758 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Brand_R4_2
# 763 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_BRAND_R4, ParcelIsle_T_Brand_R4_Text_1
# 764 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R4_Text_2, MSGBOX_DEFAULT
# 765 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Brand_R4_2:
# 759 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_1, MSGBOX_DEFAULT
# 760 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Brand_R5::
# 769 "data/maps/ParcelIsle/scripts.pory"
	lock
# 770 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 771 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R5_Text_0, MSGBOX_YESNO
# 772 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Brand_R5_2
# 777 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_BRAND_R5, ParcelIsle_T_Brand_R5_Text_1
# 778 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R5_Text_2, MSGBOX_DEFAULT
# 779 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Brand_R5_2:
# 773 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Brand_R2_Text_1, MSGBOX_DEFAULT
# 774 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Svein::
# 783 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ISLE_SVEIN, ParcelIsle_T_Svein_Text_0, ParcelIsle_T_Svein_Text_1, ParcelIsle_T_Svein_FirstWin
# 787 "data/maps/ParcelIsle/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 788 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelIsle_T_Svein_3
ParcelIsle_T_Svein_1:
# 791 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelIsle_T_Svein_8
ParcelIsle_T_Svein_6:
# 794 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelIsle_T_Svein_13
ParcelIsle_T_Svein_11:
# 797 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelIsle_T_Svein_18
ParcelIsle_T_Svein_16:
# 800 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_Text_2, MSGBOX_DEFAULT
	end

ParcelIsle_T_Svein_2:
# 789 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Svein_R2
	goto ParcelIsle_T_Svein_1

ParcelIsle_T_Svein_3:
# 788 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_SVEIN_R2
	goto_if 0, ParcelIsle_T_Svein_2
	goto ParcelIsle_T_Svein_1

ParcelIsle_T_Svein_7:
# 792 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Svein_R3
	goto ParcelIsle_T_Svein_6

ParcelIsle_T_Svein_8:
# 791 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_SVEIN_R3
	goto_if 0, ParcelIsle_T_Svein_7
	goto ParcelIsle_T_Svein_6

ParcelIsle_T_Svein_12:
# 795 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Svein_R4
	goto ParcelIsle_T_Svein_11

ParcelIsle_T_Svein_13:
# 794 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_SVEIN_R4
	goto_if 0, ParcelIsle_T_Svein_12
	goto ParcelIsle_T_Svein_11

ParcelIsle_T_Svein_17:
# 798 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Svein_R5
	goto ParcelIsle_T_Svein_16

ParcelIsle_T_Svein_18:
# 797 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_SVEIN_R5
	goto_if 0, ParcelIsle_T_Svein_17
	goto ParcelIsle_T_Svein_16


ParcelIsle_T_Svein_FirstWin::
# 804 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_Text_2, MSGBOX_DEFAULT
# 805 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Svein_R2::
# 809 "data/maps/ParcelIsle/scripts.pory"
	lock
# 810 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 811 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_0, MSGBOX_YESNO
# 812 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Svein_R2_2
# 817 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_SVEIN_R2, ParcelIsle_T_Svein_R2_Text_2
# 818 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_3, MSGBOX_DEFAULT
# 819 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Svein_R2_2:
# 813 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_1, MSGBOX_DEFAULT
# 814 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Svein_R3::
# 823 "data/maps/ParcelIsle/scripts.pory"
	lock
# 824 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 825 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R3_Text_0, MSGBOX_YESNO
# 826 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Svein_R3_2
# 831 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_SVEIN_R3, ParcelIsle_T_Svein_R3_Text_1
# 832 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R3_Text_2, MSGBOX_DEFAULT
# 833 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Svein_R3_2:
# 827 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_1, MSGBOX_DEFAULT
# 828 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Svein_R4::
# 837 "data/maps/ParcelIsle/scripts.pory"
	lock
# 838 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 839 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R4_Text_0, MSGBOX_YESNO
# 840 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Svein_R4_2
# 845 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_SVEIN_R4, ParcelIsle_T_Svein_R2_Text_2
# 846 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R4_Text_1, MSGBOX_DEFAULT
# 847 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Svein_R4_2:
# 841 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_1, MSGBOX_DEFAULT
# 842 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Svein_R5::
# 851 "data/maps/ParcelIsle/scripts.pory"
	lock
# 852 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 853 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R5_Text_0, MSGBOX_YESNO
# 854 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Svein_R5_2
# 859 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_SVEIN_R5, ParcelIsle_T_Svein_R3_Text_1
# 860 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R5_Text_1, MSGBOX_DEFAULT
# 861 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Svein_R5_2:
# 855 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Svein_R2_Text_1, MSGBOX_DEFAULT
# 856 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Tora::
# 865 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ISLE_TORA, ParcelIsle_T_Tora_Text_0, ParcelIsle_T_Tora_Text_1, ParcelIsle_T_Tora_FirstWin
# 869 "data/maps/ParcelIsle/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 870 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelIsle_T_Tora_3
ParcelIsle_T_Tora_1:
# 873 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelIsle_T_Tora_8
ParcelIsle_T_Tora_6:
# 876 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelIsle_T_Tora_13
ParcelIsle_T_Tora_11:
# 879 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelIsle_T_Tora_18
ParcelIsle_T_Tora_16:
# 882 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_Text_2, MSGBOX_DEFAULT
	end

ParcelIsle_T_Tora_2:
# 871 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Tora_R2
	goto ParcelIsle_T_Tora_1

ParcelIsle_T_Tora_3:
# 870 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_TORA_R2
	goto_if 0, ParcelIsle_T_Tora_2
	goto ParcelIsle_T_Tora_1

ParcelIsle_T_Tora_7:
# 874 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Tora_R3
	goto ParcelIsle_T_Tora_6

ParcelIsle_T_Tora_8:
# 873 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_TORA_R3
	goto_if 0, ParcelIsle_T_Tora_7
	goto ParcelIsle_T_Tora_6

ParcelIsle_T_Tora_12:
# 877 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Tora_R4
	goto ParcelIsle_T_Tora_11

ParcelIsle_T_Tora_13:
# 876 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_TORA_R4
	goto_if 0, ParcelIsle_T_Tora_12
	goto ParcelIsle_T_Tora_11

ParcelIsle_T_Tora_17:
# 880 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Tora_R5
	goto ParcelIsle_T_Tora_16

ParcelIsle_T_Tora_18:
# 879 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_TORA_R5
	goto_if 0, ParcelIsle_T_Tora_17
	goto ParcelIsle_T_Tora_16


ParcelIsle_T_Tora_FirstWin::
# 886 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_Text_2, MSGBOX_DEFAULT
# 887 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Tora_R2::
# 891 "data/maps/ParcelIsle/scripts.pory"
	lock
# 892 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 893 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_0, MSGBOX_YESNO
# 894 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Tora_R2_2
# 899 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_TORA_R2, ParcelIsle_T_Tora_R2_Text_2
# 900 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_3, MSGBOX_DEFAULT
# 901 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Tora_R2_2:
# 895 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_1, MSGBOX_DEFAULT
# 896 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Tora_R3::
# 905 "data/maps/ParcelIsle/scripts.pory"
	lock
# 906 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 907 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R3_Text_0, MSGBOX_YESNO
# 908 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Tora_R3_2
# 913 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_TORA_R3, ParcelIsle_T_Tora_R3_Text_1
# 914 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R3_Text_2, MSGBOX_DEFAULT
# 915 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Tora_R3_2:
# 909 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_1, MSGBOX_DEFAULT
# 910 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Tora_R4::
# 919 "data/maps/ParcelIsle/scripts.pory"
	lock
# 920 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 921 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R4_Text_0, MSGBOX_YESNO
# 922 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Tora_R4_2
# 927 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_TORA_R4, ParcelIsle_T_Tora_R4_Text_1
# 928 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R4_Text_2, MSGBOX_DEFAULT
# 929 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Tora_R4_2:
# 923 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_1, MSGBOX_DEFAULT
# 924 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Tora_R5::
# 933 "data/maps/ParcelIsle/scripts.pory"
	lock
# 934 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 935 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R5_Text_0, MSGBOX_YESNO
# 936 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Tora_R5_2
# 941 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_TORA_R5, ParcelIsle_T_Tora_R5_Text_1
# 942 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R5_Text_2, MSGBOX_DEFAULT
# 943 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Tora_R5_2:
# 937 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Tora_R2_Text_1, MSGBOX_DEFAULT
# 938 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Jon::
# 947 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ISLE_JON, ParcelIsle_T_Jon_Text_0, ParcelIsle_T_Jon_Text_1, ParcelIsle_T_Jon_FirstWin
# 951 "data/maps/ParcelIsle/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 952 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelIsle_T_Jon_3
ParcelIsle_T_Jon_1:
# 955 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelIsle_T_Jon_8
ParcelIsle_T_Jon_6:
# 958 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelIsle_T_Jon_13
ParcelIsle_T_Jon_11:
# 961 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelIsle_T_Jon_18
ParcelIsle_T_Jon_16:
# 964 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_Text_2, MSGBOX_DEFAULT
	end

ParcelIsle_T_Jon_2:
# 953 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Jon_R2
	goto ParcelIsle_T_Jon_1

ParcelIsle_T_Jon_3:
# 952 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_JON_R2
	goto_if 0, ParcelIsle_T_Jon_2
	goto ParcelIsle_T_Jon_1

ParcelIsle_T_Jon_7:
# 956 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Jon_R3
	goto ParcelIsle_T_Jon_6

ParcelIsle_T_Jon_8:
# 955 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_JON_R3
	goto_if 0, ParcelIsle_T_Jon_7
	goto ParcelIsle_T_Jon_6

ParcelIsle_T_Jon_12:
# 959 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Jon_R4
	goto ParcelIsle_T_Jon_11

ParcelIsle_T_Jon_13:
# 958 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_JON_R4
	goto_if 0, ParcelIsle_T_Jon_12
	goto ParcelIsle_T_Jon_11

ParcelIsle_T_Jon_17:
# 962 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Jon_R5
	goto ParcelIsle_T_Jon_16

ParcelIsle_T_Jon_18:
# 961 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_JON_R5
	goto_if 0, ParcelIsle_T_Jon_17
	goto ParcelIsle_T_Jon_16


ParcelIsle_T_Jon_FirstWin::
# 968 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_Text_2, MSGBOX_DEFAULT
# 969 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Jon_R2::
# 973 "data/maps/ParcelIsle/scripts.pory"
	lock
# 974 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 975 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_0, MSGBOX_YESNO
# 976 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Jon_R2_2
# 981 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_JON_R2, ParcelIsle_T_Jon_R2_Text_2
# 982 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_3, MSGBOX_DEFAULT
# 983 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Jon_R2_2:
# 977 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_1, MSGBOX_DEFAULT
# 978 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Jon_R3::
# 987 "data/maps/ParcelIsle/scripts.pory"
	lock
# 988 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 989 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R3_Text_0, MSGBOX_YESNO
# 990 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Jon_R3_2
# 995 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_JON_R3, ParcelIsle_T_Jon_R3_Text_1
# 996 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R3_Text_2, MSGBOX_DEFAULT
# 997 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Jon_R3_2:
# 991 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_1, MSGBOX_DEFAULT
# 992 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Jon_R4::
# 1001 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1002 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 1003 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R4_Text_0, MSGBOX_YESNO
# 1004 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Jon_R4_2
# 1009 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_JON_R4, ParcelIsle_T_Jon_R3_Text_1
# 1010 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R4_Text_1, MSGBOX_DEFAULT
# 1011 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Jon_R4_2:
# 1005 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_1, MSGBOX_DEFAULT
# 1006 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Jon_R5::
# 1015 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1016 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 1017 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R5_Text_0, MSGBOX_YESNO
# 1018 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Jon_R5_2
# 1023 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_JON_R5, ParcelIsle_T_Jon_R5_Text_1
# 1024 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R5_Text_2, MSGBOX_DEFAULT
# 1025 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Jon_R5_2:
# 1019 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Jon_R2_Text_1, MSGBOX_DEFAULT
# 1020 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Line::
# 1029 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ISLE_LINE, ParcelIsle_T_Line_Text_0, ParcelIsle_T_Line_Text_1, ParcelIsle_T_Line_FirstWin
# 1033 "data/maps/ParcelIsle/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1034 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelIsle_T_Line_3
ParcelIsle_T_Line_1:
# 1037 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelIsle_T_Line_8
ParcelIsle_T_Line_6:
# 1040 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelIsle_T_Line_13
ParcelIsle_T_Line_11:
# 1043 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelIsle_T_Line_18
ParcelIsle_T_Line_16:
# 1046 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_Text_2, MSGBOX_DEFAULT
	end

ParcelIsle_T_Line_2:
# 1035 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Line_R2
	goto ParcelIsle_T_Line_1

ParcelIsle_T_Line_3:
# 1034 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_LINE_R2
	goto_if 0, ParcelIsle_T_Line_2
	goto ParcelIsle_T_Line_1

ParcelIsle_T_Line_7:
# 1038 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Line_R3
	goto ParcelIsle_T_Line_6

ParcelIsle_T_Line_8:
# 1037 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_LINE_R3
	goto_if 0, ParcelIsle_T_Line_7
	goto ParcelIsle_T_Line_6

ParcelIsle_T_Line_12:
# 1041 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Line_R4
	goto ParcelIsle_T_Line_11

ParcelIsle_T_Line_13:
# 1040 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_LINE_R4
	goto_if 0, ParcelIsle_T_Line_12
	goto ParcelIsle_T_Line_11

ParcelIsle_T_Line_17:
# 1044 "data/maps/ParcelIsle/scripts.pory"
	goto ParcelIsle_T_Line_R5
	goto ParcelIsle_T_Line_16

ParcelIsle_T_Line_18:
# 1043 "data/maps/ParcelIsle/scripts.pory"
	checktrainerflag TRAINER_SKALD_ISLE_LINE_R5
	goto_if 0, ParcelIsle_T_Line_17
	goto ParcelIsle_T_Line_16


ParcelIsle_T_Line_FirstWin::
# 1050 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_Text_2, MSGBOX_DEFAULT
# 1051 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Line_R2::
# 1055 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1056 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 1057 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_0, MSGBOX_YESNO
# 1058 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Line_R2_2
# 1063 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_LINE_R2, ParcelIsle_T_Line_R2_Text_2
# 1064 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_3, MSGBOX_DEFAULT
# 1065 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Line_R2_2:
# 1059 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_1, MSGBOX_DEFAULT
# 1060 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Line_R3::
# 1069 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1070 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 1071 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R3_Text_0, MSGBOX_YESNO
# 1072 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Line_R3_2
# 1077 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_LINE_R3, ParcelIsle_T_Line_R2_Text_2
# 1078 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R3_Text_1, MSGBOX_DEFAULT
# 1079 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Line_R3_2:
# 1073 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_1, MSGBOX_DEFAULT
# 1074 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Line_R4::
# 1083 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1084 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 1085 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R4_Text_0, MSGBOX_YESNO
# 1086 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Line_R4_2
# 1091 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_LINE_R4, ParcelIsle_T_Line_R4_Text_1
# 1092 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R4_Text_2, MSGBOX_DEFAULT
# 1093 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Line_R4_2:
# 1087 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_1, MSGBOX_DEFAULT
# 1088 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_T_Line_R5::
# 1097 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1098 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 1099 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R5_Text_0, MSGBOX_YESNO
# 1100 "data/maps/ParcelIsle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelIsle_T_Line_R5_2
# 1105 "data/maps/ParcelIsle/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ISLE_LINE_R5, ParcelIsle_T_Line_R5_Text_1
# 1106 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R5_Text_2, MSGBOX_DEFAULT
# 1107 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_T_Line_R5_2:
# 1101 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_T_Line_R2_Text_1, MSGBOX_DEFAULT
# 1102 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ParcelIsle_PairNets::
# 1114 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1115 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_PairNets_2
# 1120 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_PairNets_3
# 1126 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_8, MSGBOX_DEFAULT
# 1127 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_9, MSGBOX_DEFAULT
# 1128 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_10, MSGBOX_DEFAULT
# 1129 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_11, MSGBOX_DEFAULT
ParcelIsle_PairNets_1:
# 1131 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_PairNets_2:
# 1116 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_0, MSGBOX_DEFAULT
# 1117 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_1, MSGBOX_DEFAULT
# 1118 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_2, MSGBOX_DEFAULT
# 1119 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_PairNets_1

ParcelIsle_PairNets_3:
# 1121 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_4, MSGBOX_DEFAULT
# 1122 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_5, MSGBOX_DEFAULT
# 1123 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_6, MSGBOX_DEFAULT
# 1124 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairNets_Text_7, MSGBOX_DEFAULT
	goto ParcelIsle_PairNets_1


ParcelIsle_PairFreight::
# 1136 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1137 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_PairFreight_2
# 1142 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_PairFreight_3
# 1148 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_8, MSGBOX_DEFAULT
# 1149 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_9, MSGBOX_DEFAULT
# 1150 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_10, MSGBOX_DEFAULT
# 1151 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_11, MSGBOX_DEFAULT
ParcelIsle_PairFreight_1:
# 1153 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_PairFreight_2:
# 1138 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_0, MSGBOX_DEFAULT
# 1139 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_1, MSGBOX_DEFAULT
# 1140 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_2, MSGBOX_DEFAULT
# 1141 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_PairFreight_1

ParcelIsle_PairFreight_3:
# 1143 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_4, MSGBOX_DEFAULT
# 1144 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_5, MSGBOX_DEFAULT
# 1145 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_6, MSGBOX_DEFAULT
# 1146 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairFreight_Text_7, MSGBOX_DEFAULT
	goto ParcelIsle_PairFreight_1


ParcelIsle_Stringer::
# 1160 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1161 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 1162 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_Stringer_2
# 1164 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_Stringer_3
# 1167 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Stringer_Text_2, MSGBOX_DEFAULT
# 1168 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Stringer_Text_3, MSGBOX_DEFAULT
# 1169 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Stringer_Text_4, MSGBOX_DEFAULT
ParcelIsle_Stringer_1:
# 1171 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Stringer_2:
# 1163 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Stringer_Text_0, MSGBOX_DEFAULT
	goto ParcelIsle_Stringer_1

ParcelIsle_Stringer_3:
# 1165 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Stringer_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Stringer_1


ParcelIsle_Oysterman::
# 1178 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1179 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 1180 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsle_Oysterman_3
ParcelIsle_Oysterman_1:
# 1185 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHOAL_DONE, ParcelIsle_Oysterman_7
# 1187 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHOAL, ParcelIsle_Oysterman_8
# 1196 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Oysterman_Text_4, MSGBOX_DEFAULT
# 1197 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SHOAL
ParcelIsle_Oysterman_6:
# 1199 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Oysterman_2:
# 1181 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Oysterman_Text_0, MSGBOX_DEFAULT
# 1182 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_Oysterman_3:
# 1180 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHOAL_DONE, ParcelIsle_Oysterman_2
	goto ParcelIsle_Oysterman_1

ParcelIsle_Oysterman_7:
# 1186 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Oysterman_Text_1, MSGBOX_DEFAULT
	goto ParcelIsle_Oysterman_6

ParcelIsle_Oysterman_8:
# 1188 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHOAL_FOUND, ParcelIsle_Oysterman_12
# 1193 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Oysterman_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_Oysterman_6

ParcelIsle_Oysterman_12:
# 1189 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Oysterman_Text_2, MSGBOX_DEFAULT
# 1190 "data/maps/ParcelIsle/scripts.pory"
	giveitem ITEM_PEARL, 2
# 1191 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SHOAL_DONE
	goto ParcelIsle_Oysterman_6


ParcelIsle_ShoalStake::
# 1204 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHOAL, ParcelIsle_ShoalStake_4
ParcelIsle_ShoalStake_3:
# 1208 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ShoalStake_Text_1, MSGBOX_SIGN
ParcelIsle_ShoalStake_1:
	end

ParcelIsle_ShoalStake_2:
# 1205 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_ShoalStake_Text_0, MSGBOX_SIGN
# 1206 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SHOAL_FOUND
	goto ParcelIsle_ShoalStake_1

ParcelIsle_ShoalStake_4:
# 1204 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SHOAL_FOUND, ParcelIsle_ShoalStake_2
	goto ParcelIsle_ShoalStake_3


ParcelIsle_FindTally::
# 1216 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TALLY, ParcelIsle_FindTally_4
ParcelIsle_FindTally_3:
# 1220 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FindTally_Text_1, MSGBOX_SIGN
ParcelIsle_FindTally_1:
	end

ParcelIsle_FindTally_2:
# 1217 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FindTally_Text_0, MSGBOX_SIGN
# 1218 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_TALLY_FOUND
	goto ParcelIsle_FindTally_1

ParcelIsle_FindTally_4:
# 1216 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_TALLY_FOUND, ParcelIsle_FindTally_2
	goto ParcelIsle_FindTally_3


ParcelIsle_PairGreen::
# 1226 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1227 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_PairGreen_2
# 1232 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_PairGreen_3
# 1237 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_7, MSGBOX_DEFAULT
# 1238 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_8, MSGBOX_DEFAULT
# 1239 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_9, MSGBOX_DEFAULT
# 1240 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_10, MSGBOX_DEFAULT
ParcelIsle_PairGreen_1:
# 1242 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_PairGreen_2:
# 1228 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_0, MSGBOX_DEFAULT
# 1229 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_1, MSGBOX_DEFAULT
# 1230 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_2, MSGBOX_DEFAULT
# 1231 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_PairGreen_1

ParcelIsle_PairGreen_3:
# 1233 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_4, MSGBOX_DEFAULT
# 1234 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_5, MSGBOX_DEFAULT
# 1235 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairGreen_Text_6, MSGBOX_DEFAULT
	goto ParcelIsle_PairGreen_1


ParcelIsle_Board1::
# 1249 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Board1_Text_0, MSGBOX_SIGN
	end


ParcelIsle_Board2::
# 1254 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Board2_Text_0, MSGBOX_SIGN
	end


ParcelIsle_FindSeal::
# 1261 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SEAL, ParcelIsle_FindSeal_4
ParcelIsle_FindSeal_3:
# 1265 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FindSeal_Text_1, MSGBOX_SIGN
ParcelIsle_FindSeal_1:
	end

ParcelIsle_FindSeal_2:
# 1262 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_FindSeal_Text_0, MSGBOX_SIGN
# 1263 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_SKALD_Q_SEAL_FOUND
	goto ParcelIsle_FindSeal_1

ParcelIsle_FindSeal_4:
# 1261 "data/maps/ParcelIsle/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SEAL_FOUND, ParcelIsle_FindSeal_2
	goto ParcelIsle_FindSeal_3


ParcelIsle_Board3::
# 1273 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Board3_Text_0, MSGBOX_SIGN
	end


ParcelIsle_Board4::
# 1280 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Board4_Text_0, MSGBOX_SIGN
	end


ParcelIsle_PairQuay::
# 1287 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1288 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_PairQuay_2
# 1293 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_PairQuay_3
# 1298 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairQuay_Text_7, MSGBOX_DEFAULT
# 1299 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairQuay_Text_8, MSGBOX_DEFAULT
# 1300 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairQuay_Text_9, MSGBOX_DEFAULT
# 1301 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairQuay_Text_10, MSGBOX_DEFAULT
ParcelIsle_PairQuay_1:
# 1303 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_PairQuay_2:
# 1289 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairQuay_Text_0, MSGBOX_DEFAULT
# 1290 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairQuay_Text_1, MSGBOX_DEFAULT
# 1291 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairQuay_Text_2, MSGBOX_DEFAULT
# 1292 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairQuay_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_PairQuay_1

ParcelIsle_PairQuay_3:
# 1294 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairQuay_Text_4, MSGBOX_DEFAULT
# 1295 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairQuay_Text_5, MSGBOX_DEFAULT
# 1296 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairQuay_Text_6, MSGBOX_DEFAULT
	goto ParcelIsle_PairQuay_1


ParcelIsle_Board10::
# 1310 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_Board10_Text_0, MSGBOX_SIGN
	end


ParcelIsle_PairSteps::
# 1317 "data/maps/ParcelIsle/scripts.pory"
	lock
# 1318 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsle_PairSteps_2
# 1323 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsle_PairSteps_3
# 1329 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairSteps_Text_8, MSGBOX_DEFAULT
# 1330 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairSteps_Text_9, MSGBOX_DEFAULT
# 1331 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairSteps_Text_10, MSGBOX_DEFAULT
# 1332 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairSteps_Text_11, MSGBOX_DEFAULT
ParcelIsle_PairSteps_1:
# 1334 "data/maps/ParcelIsle/scripts.pory"
	release
	end

ParcelIsle_PairSteps_2:
# 1319 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairSteps_Text_0, MSGBOX_DEFAULT
# 1320 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairSteps_Text_1, MSGBOX_DEFAULT
# 1321 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairSteps_Text_2, MSGBOX_DEFAULT
# 1322 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairSteps_Text_3, MSGBOX_DEFAULT
	goto ParcelIsle_PairSteps_1

ParcelIsle_PairSteps_3:
# 1324 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairSteps_Text_4, MSGBOX_DEFAULT
# 1325 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairSteps_Text_5, MSGBOX_DEFAULT
# 1326 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairSteps_Text_6, MSGBOX_DEFAULT
# 1327 "data/maps/ParcelIsle/scripts.pory"
	msgbox ParcelIsle_PairSteps_Text_7, MSGBOX_DEFAULT
	goto ParcelIsle_PairSteps_1


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
	.string "BRAM: The board's got dates on it three\n"
	.string "weeks out now. Boat's late half the\l"
	.string "time, same as always.\p"
	.string "Late is a kind of normal I can live with.$"

ParcelIsle_HeavyCoat_Text_1:
# 99 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAM: The schedule board's got a date\n"
	.string "on it again. First time in a year!\p"
	.string "I'd say things are looking up, but I've\n"
	.string "been wrong before.$"

ParcelIsle_HeavyCoat_Text_2:
# 101 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAM: Mainland papers came in with the\n"
	.string "ferry. The river's on page two. Page two!\l"
	.string "Nothing from up here's been on page two\l"
	.string "since the wreck.\p"
	.string "Your name's not in it. The knot is, near\n"
	.string "enough. 'A Corps provisional.'$"

ParcelIsle_HeavyCoat_Text_3:
# 103 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAM: So you're a RANGER now.\n"
	.string "Provisional, but still.\p"
	.string "Take it from a ferry hand: the knot on\n"
	.string "your pack means more around here than\l"
	.string "the badge does.$"

ParcelIsle_HeavyCoat_Text_4:
# 105 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAM: The inn's up the lane, past the\n"
	.string "POKéMON CENTER. Door with the lamp.\p"
	.string "The RANGERS are past the north gate, if\n"
	.string "that's who you're here for. Rin usually\l"
	.string "leaves it open.$"

ParcelIsle_Fisher_Text_0:
# 116 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: Counted in front of the\n"
	.string "inspector this morning. She wrote down\l"
	.string "my number, not the cannery's.\p"
	.string "Forty years, and it took a stranger with\n"
	.string "a clipboard. Still. It's written.$"

ParcelIsle_Fisher_Text_1:
# 121 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: That's my net! Only ANNI doubles\n"
	.string "the edge like that.\p"
	.string "She sent you all the way down here?\n"
	.string "Then she likes you. She doesn't like\l"
	.string "anybody.$"

ParcelIsle_Fisher_Text_2:
# 122 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: Here, take my spare rod. It's old,\n"
	.string "but it knows this water.\p"
	.string "Throw the little ones back, okay?\n"
	.string "There's fewer every year.$"

ParcelIsle_Fisher_Text_3:
# 129 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: They have to count the fish\n"
	.string "properly now. In front of people!\p"
	.string "Forty years I counted for nobody.\n"
	.string "Funny to be right and hate it.$"

ParcelIsle_Fisher_Text_4:
# 131 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: The herring came in thin this\n"
	.string "week. Thin and early.\p"
	.string "That's not a season. That's a symptom.\n"
	.string "You're the RANGER, you tell me the word\l"
	.string "for it.$"

ParcelIsle_Fisher_Text_5:
# 133 "data/maps/ParcelIsle/scripts.pory"
	.string "TOBIN: The currents have been wrong\n"
	.string "for weeks. The fish know it before we\l"
	.string "do.\p"
	.string "You didn't hear that from me.$"

ParcelIsle_Dockworker_Text_0:
# 144 "data/maps/ParcelIsle/scripts.pory"
	.string "ROLF: Day rate's back. Half the crates\n"
	.string "are the review's now, soil and jars.\l"
	.string "Lighter than ore, heavier to think\l"
	.string "about.\p"
	.string "I don't think about it. I lift.$"

ParcelIsle_Dockworker_Text_1:
# 149 "data/maps/ParcelIsle/scripts.pory"
	.string "ROLF: Eighteen months of delay, they're\n"
	.string "saying. You know what eighteen months\l"
	.string "is to a guy on a day rate?\p"
	.string "I'm not saying you're wrong. ANNI read\n"
	.string "me the frog part. I'm saying it's easy to\l"
	.string "be right when it's not your boat.$"

ParcelIsle_Dockworker_Text_2:
# 151 "data/maps/ParcelIsle/scripts.pory"
	.string "ROLF: Boat's not late today. Boat's not\n"
	.string "coming. The office says 'pending\l"
	.string "review'.\p"
	.string "That your review? Yeah. Thought so.$"

ParcelIsle_Dockworker_Text_3:
# 153 "data/maps/ParcelIsle/scripts.pory"
	.string "ROLF: The crest on the crates is the\n"
	.string "crest on my paycheck. Same one that's\l"
	.string "on the RANGERS' gear, come to think of\l"
	.string "it.\p"
	.string "Funny what you stop noticing.$"

ParcelIsle_Dockworker_Text_4:
# 155 "data/maps/ParcelIsle/scripts.pory"
	.string "ROLF: Boat's late. Boat's always late\n"
	.string "now.\p"
	.string "If you want work, there's a board by the\n"
	.string "inn. Mostly it says 'no'.$"

ParcelIsle_NetMender_Text_0:
# 166 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: ROLF reads the paper himself now.\n"
	.string "Out loud, to the net. The net doesn't\l"
	.string "mind. Neither do I.$"

ParcelIsle_NetMender_Text_1:
# 172 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: ROLF had me read him your report.\n"
	.string "The frog part, twice.\p"
	.string "He didn't say anything after. For ROLF,\n"
	.string "that's a speech.$"

ParcelIsle_NetMender_Text_2:
# 174 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: TOBIN gave you his rod? He's\n"
	.string "never lent that to anyone!\p"
	.string "Go fish the inlet. Tell me if the\n"
	.string "MAGIKARP are still in there. They used\l"
	.string "to be so thick you could walk across.$"

ParcelIsle_NetMender_Text_3:
# 180 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: TOBIN's at the end of the jetty,\n"
	.string "on the platform. He won't come up. Says\l"
	.string "the town's gone strange.\p"
	.string "He's right, but the net still needs\n"
	.string "carrying.$"

ParcelIsle_NetMender_Text_4:
# 185 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: You're the new RANGER, right?\n"
	.string "Good, you can carry things.\p"
	.string "This net's mended and TOBIN's is torn.\n"
	.string "My knees don't do the jetty anymore.$"

ParcelIsle_NetMender_Text_5:
# 186 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: Take it down to him. End of the\n"
	.string "jetty, the grumpy one.\p"
	.string "Tell him the edge is doubled. He'll know\n"
	.string "whose it is.$"

ParcelIsle_NetMender_Text_6:
# 191 "data/maps/ParcelIsle/scripts.pory"
	.string "ANNI: Nets don't tear like they used to.\n"
	.string "Nothing in them heavy enough to tear\l"
	.string "them.\p"
	.string "Don't write that down. It's not a fact.\n"
	.string "It's just true.$"

ParcelIsle_HarbourLad_Text_0:
# 201 "data/maps/ParcelIsle/scripts.pory"
	.string "KIP: You got off the ferry with a bag\n"
	.string "and no POKéMON? Not even one?\p"
	.string "Come back when you've got something.\n"
	.string "Then we'll see.$"

ParcelIsle_HarbourLad_Text_1:
# 207 "data/maps/ParcelIsle/scripts.pory"
	.string "KIP: Hey, mainlander! Bet you can't beat\n"
	.string "my KRABBY.\p"
	.string "The whole channel used to be full of\n"
	.string "them!$"

ParcelIsle_HarbourLad_Text_2:
# 208 "data/maps/ParcelIsle/scripts.pory"
	.string "KIP: Used to be. Yeah.$"

ParcelIsle_HarbourLad_Text_3:
# 212 "data/maps/ParcelIsle/scripts.pory"
	.string "KIP: My dad says you cost him his berth.\n"
	.string "My mom says you saved the channel.\p"
	.string "They had that fight at dinner. I ate in\n"
	.string "the loft.$"

ParcelIsle_HarbourLad_Text_4:
# 214 "data/maps/ParcelIsle/scripts.pory"
	.string "KIP: There were dozens of KRABBY under\n"
	.string "the jetty when I was little. Now I have\l"
	.string "to go out to the rocks to find one.\p"
	.string "I'm not sad about it. I'm just saying\n"
	.string "where they went.$"

ParcelIsle_Widow_Text_0:
# 225 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Eleven again this morning.\n"
	.string "Twelve, one day last week. I told EIRIK\l"
	.string "about the twelfth one.\p"
	.string "It is still how I say good morning.$"

ParcelIsle_Widow_Text_1:
# 230 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Eleven this morning. I still\n"
	.string "count them. It's how I say good morning\l"
	.string "to someone who isn't here.$"

ParcelIsle_Widow_Text_2:
# 236 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: You put the gulls in your\n"
	.string "report. The actual gulls!\p"
	.string "My EIRIK would have liked that. He\n"
	.string "never trusted a number he hadn't\l"
	.string "counted himself.$"

ParcelIsle_Widow_Text_3:
# 237 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: This was his. It's the only\n"
	.string "thing on the boat the sea didn't take.\p"
	.string "It should go to someone who counts.$"

ParcelIsle_Widow_Text_4:
# 241 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Nine today. When EIRIK still\n"
	.string "fished there were forty on these racks.\l"
	.string "Forty!\p"
	.string "Write that down. Nine. Somebody should\n"
	.string "have the number besides me.$"

ParcelIsle_Widow_Text_5:
# 243 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Twelve this morning. Come back\n"
	.string "another day and I'll give you the next\l"
	.string "one.\p"
	.string "A number only means something twice.$"

ParcelIsle_Widow_Text_6:
# 248 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Count the gulls with me. On the\n"
	.string "racks there. Go on.\p"
	.string "Twelve. Say it back, so two of us know\n"
	.string "it.$"

ParcelIsle_Widow_Text_7:
# 250 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: Twelve. Good. My husband kept\n"
	.string "that count for thirty years.\p"
	.string "Come back and I'll give you the next\n"
	.string "one. That's all a survey is, you know.\l"
	.string "Somebody coming back.$"

ParcelIsle_Widow_Text_8:
# 253 "data/maps/ParcelIsle/scripts.pory"
	.string "SIGRUN: No? Then it's just me who\n"
	.string "knows. That's been fine so far.$"

ParcelIsle_FerrySign_Text_0:
# 261 "data/maps/ParcelIsle/scripts.pory"
	.string "FERRY LANDING\p"
	.string "Mainland service: SUSPENDED\n"
	.string "PENDING REGIONAL REVIEW\p"
	.string "Someone wrote underneath in pencil:\n"
	.string "ABOUT TIME.$"

ParcelIsle_FerrySign_Text_1:
# 263 "data/maps/ParcelIsle/scripts.pory"
	.string "FERRY LANDING\p"
	.string "The mainland schedule board is blank.\n"
	.string "It has been for a while.$"

ParcelIsle_FerryCaptain_Text_0:
# 276 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: Eleven in the first decade,\n"
	.string "four in the second, one in the third.\l"
	.string "That's the count. I knew it. I wanted it\l"
	.string "said back to me by a notebook.\p"
	.string "Here. For the boat you'll need one day.$"

ParcelIsle_FerryCaptain_Text_1:
# 281 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: Passage out? Not in this cold,\n"
	.string "not without a reason.\p"
	.string "Come back when the RANGERS have sent\n"
	.string "you up the mountains. You'll know when.$"

ParcelIsle_FerryCaptain_Text_2:
# 287 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: The pier post. Far end. Count\n"
	.string "the notches, not the splinters.$"

ParcelIsle_FerryCaptain_Text_3:
# 289 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: Every LAPRAS I've seen on the\n"
	.string "crossing in thirty years, I've cut a\l"
	.string "notch in the pier post. The post's\l"
	.string "rotting. Before it goes, I'd like the\l"
	.string "count read by somebody whose word\l"
	.string "carries.\p"
	.string "It's at the far end, by the water. Read\n"
	.string "it and tell me.$"

ParcelIsle_FerryCaptain_Text_4:
# 300 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: New post went in. First\n"
	.string "notch's already on it. Not mine. A\l"
	.string "LAPRAS off the north point, the mate\l"
	.string "swears.\p"
	.string "I let him cut it. Someone has to start\n"
	.string "the next count.$"

ParcelIsle_FerryCaptain_Text_5:
# 302 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: Passage out, RANGER? Any\n"
	.string "time. Any weather. You've paid for the\l"
	.string "ferry for life, the harbour office says.\l"
	.string "I'd have taken you anyway.$"

ParcelIsle_FerryCaptain_Text_6:
# 304 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: Harbour's open. Where to?$"

ParcelIsle_FerryCaptain_Text_7:
# 316 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: The coast run opens after\n"
	.string "you've made the DELIBIRD crossing.\n"
	.string "One island at a time.$"

ParcelIsle_FerryCaptain_Text_8:
# 328 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: The climate station? That run\n"
	.string "opens once you've worked the coast.\l"
	.string "Not before.$"

ParcelIsle_FerryCaptain_Text_9:
# 339 "data/maps/ParcelIsle/scripts.pory"
	.string "CAPTAIN: Suit yourself. I'll be on the\n"
	.string "water.$"

ParcelIsle_GateMoore_Text_0:
# 349 "data/maps/ParcelIsle/scripts.pory"
	.string "MOORE: Harbour-master. Every hull and\n"
	.string "every hand that moves through here\l"
	.string "goes in my log.\p"
	.string "You want harbour clearance? Earn it.$"

ParcelIsle_GateMoore_Text_1:
# 350 "data/maps/ParcelIsle/scripts.pory"
	.string "MOORE: Noted. The harbour knows your\n"
	.string "name now.$"

ParcelIsle_GateMoore_Text_2:
# 354 "data/maps/ParcelIsle/scripts.pory"
	.string "MOORE: You're cleared through the\n"
	.string "landing. The ferry runs answer to the\l"
	.string "log, and the log answers for you.$"

ParcelIsle_GateMoore_Defeated_Text_0:
# 361 "data/maps/ParcelIsle/scripts.pory"
	.string "MOORE: Harbour clearance, entered\n"
	.string "against your card.\p"
	.string "Nobody hands that out. You took it.$"

ParcelIsle_LogisticsClerk_Text_0:
# 381 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: Four one seven. That's my\n"
	.string "manifest. Three crates of soil cores,\l"
	.string "FERNWICK to the river, and one of them\l"
	.string "stopped here on the way and nobody\l"
	.string "told me.\p"
	.string "It matches. I'll log it as present. Here.\n"
	.string "From the box of things nobody signs\l"
	.string "for.$"

ParcelIsle_LogisticsClerk_Text_1:
# 385 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: The crate on the quay. Council\n"
	.string "seal on the lid. The number.$"

ParcelIsle_LogisticsClerk_Text_2:
# 390 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: A crate came off the ferry marked\n"
	.string "EVIDENCE and nobody's signed for it, so\l"
	.string "it's sitting on the quay with a Council\l"
	.string "seal on the lid. I'm not allowed to touch\l"
	.string "a sealed crate. I'm allowed to know its\l"
	.string "number.\p"
	.string "Go and read me the seal. If the number\n"
	.string "matches my manifest, I can stop\l"
	.string "pretending it isn't there.$"

ParcelIsle_LogisticsClerk_Text_3:
# 396 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: Manifests are moving again.\n"
	.string "Different crests on half of them. I log\l"
	.string "what moves.\p"
	.string "It's moving slower, and I know where it's\n"
	.string "going now, which is new.$"

ParcelIsle_LogisticsClerk_Text_4:
# 401 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: Half my manifests are on hold. The\n"
	.string "other half are lawyers.\p"
	.string "I used to log trucks. Now I log the\n"
	.string "absence of trucks. It's the same form!$"

ParcelIsle_LogisticsClerk_Text_5:
# 403 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: Three crates of soil cores,\n"
	.string "FERNWICK to the river, marked EVIDENCE.\l"
	.string "I've logged a lot of things. Never that\l"
	.string "word.\p"
	.string "And two trucks of sandbags back from\n"
	.string "the basin, empty. Empty is a manifest\l"
	.string "too.$"

ParcelIsle_LogisticsClerk_Text_6:
# 405 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: Relief convoy for the basin.\n"
	.string "Three trucks, FOUNDATION crest,\l"
	.string "Council seal.\p"
	.string "Relief for what? Don't ask me. I log\n"
	.string "what moves.$"

ParcelIsle_LogisticsClerk_Text_7:
# 407 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: The RANGERS are hiring again?\n"
	.string "Congratulations. Your gear came in on\l"
	.string "our manifest, by the way.\p"
	.string "Not a complaint. I'm paid for accuracy.$"

ParcelIsle_LogisticsClerk_Text_8:
# 409 "data/maps/ParcelIsle/scripts.pory"
	.string "PELL: Everything that moves through\n"
	.string "SALTWICK is on a manifest. Fuel, crates,\l"
	.string "the ferry you came in on.\p"
	.string "You? 'Passenger, one, island stop.' I've\n"
	.string "already got you.$"

ParcelIsle_KidA_Text_0:
# 420 "data/maps/ParcelIsle/scripts.pory"
	.string "EBBA: NILS and me are in the Centre's\n"
	.string "paper! Not our names. 'Two children of\l"
	.string "Saltwick.' That's us.\p"
	.string "We counted fourteen again. It's not\n"
	.string "less this time.$"

ParcelIsle_KidA_Text_1:
# 425 "data/maps/ParcelIsle/scripts.pory"
	.string "EBBA: NILS says you wrote everything\n"
	.string "down. Even the frogs!\p"
	.string "Are we in it? We saw them first!$"

ParcelIsle_KidA_Text_2:
# 427 "data/maps/ParcelIsle/scripts.pory"
	.string "EBBA: NILS says the frogs in the river\n"
	.string "got counted by the WHOLE VILLAGE and\l"
	.string "it went in a book.\p"
	.string "Ours only got counted by us. Does ours\n"
	.string "count less? NILS says counting is\l"
	.string "counting.$"

ParcelIsle_KidA_Text_3:
# 429 "data/maps/ParcelIsle/scripts.pory"
	.string "EBBA: You saw them too! On the bridge!\n"
	.string "Going the wrong way!\p"
	.string "NILS said you'd say we made it up. You\n"
	.string "didn't.$"

ParcelIsle_KidA_Text_4:
# 431 "data/maps/ParcelIsle/scripts.pory"
	.string "EBBA: There were frogs in the inlet\n"
	.string "going the WRONG way! Upstream! All in a\l"
	.string "line, like they were late for something!\p"
	.string "NILS says frogs don't get late.$"

ParcelIsle_KidB_Text_0:
# 441 "data/maps/ParcelIsle/scripts.pory"
	.string "NILS: The word's THRESHOLD. I looked it\n"
	.string "up. It means the step of a door.\p"
	.string "EBBA says the frogs are on the step. I\n"
	.string "think they're still in the house. I wrote\l"
	.string "both down.$"

ParcelIsle_KidB_Text_1:
# 446 "data/maps/ParcelIsle/scripts.pory"
	.string "NILS: What's the word? For when a place\n"
	.string "is running out?\p"
	.string "EBBA says you've got a word for it now.\n"
	.string "I want the word.$"

ParcelIsle_KidB_Text_2:
# 448 "data/maps/ParcelIsle/scripts.pory"
	.string "NILS: Counting is counting. Twelve this\n"
	.string "week, in the inlet. I wrote the date like\l"
	.string "you do.\p"
	.string "EBBA wants to send it to the river. I\n"
	.string "said they've got their own frogs. She\l"
	.string "said that's the point.$"

ParcelIsle_KidB_Text_3:
# 450 "data/maps/ParcelIsle/scripts.pory"
	.string "NILS: Gran says the POLIWAG have\n"
	.string "always done that. Gran says a lot of\l"
	.string "things have always done that.\p"
	.string "I counted anyway. Fourteen. Less than\n"
	.string "last time.$"

ParcelIsle_KidB_Text_4:
# 452 "data/maps/ParcelIsle/scripts.pory"
	.string "NILS: Frogs don't get late. They get\n"
	.string "scared, maybe.\p"
	.string "Don't tell EBBA I said scared.$"

ParcelIsle_OldMan_Text_0:
# 463 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: The bell's in the drawer with\n"
	.string "the whistle after all. They get on.\p"
	.string "Low water gave back a boot last week,\n"
	.string "nobody's. Marked it in my own book. You\l"
	.string "started that.$"

ParcelIsle_OldMan_Text_1:
# 469 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: ...Well. There it is. Twenty-two\n"
	.string "years in the water and it's cleaner than\l"
	.string "I am.\p"
	.string "Blow it? No. Let it be. Some things you\n"
	.string "keep because they're quiet now.$"

ParcelIsle_OldMan_Text_2:
# 470 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: Here. This came off my first\n"
	.string "partner's collar. She was a loud one too.\l"
	.string "Take it; the whistle and the bell don't\l"
	.string "need to be in the same drawer.$"

ParcelIsle_OldMan_Text_3:
# 473 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: Low water gave it back. Mark\n"
	.string "that in your book. Low water gives\l"
	.string "things back right before it takes the\l"
	.string "rest.$"

ParcelIsle_OldMan_Text_4:
# 477 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: The inlet, by the bridge. Low\n"
	.string "water. Look where the light goes flat on\l"
	.string "the stones.$"

ParcelIsle_OldMan_Text_5:
# 482 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: Somebody finally said it out\n"
	.string "loud. In writing, with a name at the\l"
	.string "bottom.\p"
	.string "It'll cost you. It'll cost everyone.\n"
	.string "Forty years on that bridge and it never\l"
	.string "once occurred to me that the cost was\l"
	.string "the point.$"

ParcelIsle_OldMan_Text_6:
# 484 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: Forty years on that bridge and\n"
	.string "I lost one thing in all of it. A whistle.\l"
	.string "Corps issue, brass, on a lanyard. Went\l"
	.string "over the rail into the inlet the night\l"
	.string "the marsh road flooded.\p"
	.string "Low water this year. Lowest I've seen.\n"
	.string "If it's ever going to show, it's now.\p"
	.string "Have a look along the inlet by the\n"
	.string "bridge, would you. Humour an old man.$"

ParcelIsle_OldMan_Text_7:
# 487 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: Six people stood up in a river\n"
	.string "hall and the Board wrote down what they\l"
	.string "said. In my forty years that happened\l"
	.string "never.\p"
	.string "HALE will say it's procedure. It isn't.\n"
	.string "It's weather turning. Watch the water\l"
	.string "here. It'll know first.$"

ParcelIsle_OldMan_Text_8:
# 489 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: HALE signed for you? HALE\n"
	.string "doesn't sign for anyone! He didn't sign\l"
	.string "for me, and I ran his station before he\l"
	.string "did.\p"
	.string "Watch him. Not because he's wrong.\n"
	.string "Because he's tired.$"

ParcelIsle_OldMan_Text_9:
# 491 "data/maps/ParcelIsle/scripts.pory"
	.string "HALVAR: Forty years I walked that\n"
	.string "bridge for the RANGERS. Never saw the\l"
	.string "water this quiet.\p"
	.string "Quiet isn't peace, kid. Quiet is a place\n"
	.string "holding its breath.$"

ParcelIsle_Birder_Text_0:
# 502 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: Twelve species on the inlet\n"
	.string "this morning. Twelve. One more than last\l"
	.string "year is not a trend, I know.\p"
	.string "I wrote it in a new colour anyway.$"

ParcelIsle_Birder_Text_1:
# 508 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: The storm birds were on the\n"
	.string "radio this morning! By name! DELIBIRD!\p"
	.string "Forty years of lists and I never once\n"
	.string "made the news. Good.$"

ParcelIsle_Birder_Text_2:
# 510 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: Eleven species on the inlet\n"
	.string "today. Twenty, the year I started.\p"
	.string "My list is the only thing I own that\n"
	.string "gets shorter and heavier at the same\l"
	.string "time.$"

ParcelIsle_Birder_Text_3:
# 516 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: You've been out to the island!\n"
	.string "I can tell, the cold's still in your coat.\p"
	.string "Tell me. Did you see one? A DELIBIRD. On\n"
	.string "the ground, not in a picture.$"

ParcelIsle_Birder_Text_4:
# 518 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: Then they're still there! I\n"
	.string "haven't been able to make the crossing\l"
	.string "since my knee went.\p"
	.string "Take this. It's for looking at far-off\n"
	.string "things. I'm done needing it.$"

ParcelIsle_Birder_Text_5:
# 522 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: No? Well. That's honest. Come\n"
	.string "back when you have.$"

ParcelIsle_Birder_Text_6:
# 528 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: That's a survey knot on your\n"
	.string "pack. ILEX ties them left over right.\l"
	.string "Nobody else does.\p"
	.string "If the RANGERS ever send you north to\n"
	.string "the island, look for a bird with a tail\l"
	.string "like a rope. Then come tell me.$"

ParcelIsle_Birder_Text_7:
# 530 "data/maps/ParcelIsle/scripts.pory"
	.string "CORWEN: WINGULL, PELIPPER, and one\n"
	.string "SWABLU with no business this far north.\p"
	.string "I keep a list. It's shorter than it used\n"
	.string "to be. That's not an opinion. That's a\l"
	.string "list.$"

ParcelIsle_KidTrainer_Text_0:
# 538 "data/maps/ParcelIsle/scripts.pory"
	.string "TIMO: You're from the mainland!\n"
	.string "Mainlanders always have cool POKéMON.\l"
	.string "Let's battle!$"

ParcelIsle_KidTrainer_Text_1:
# 539 "data/maps/ParcelIsle/scripts.pory"
	.string "TIMO: Whoa. Okay!$"

ParcelIsle_KidTrainer_Text_2:
# 543 "data/maps/ParcelIsle/scripts.pory"
	.string "TIMO: You went past the bridge! Gran\n"
	.string "says you're allowed because of the\l"
	.string "knot.\p"
	.string "What's out there? No, wait, don't tell\n"
	.string "me. I want to be allowed first.$"

ParcelIsle_KidTrainer_Text_3:
# 545 "data/maps/ParcelIsle/scripts.pory"
	.string "TIMO: Gran says don't go past the\n"
	.string "bridge.\p"
	.string "She won't say why. She just gets quiet.$"

ParcelIsle_TownSign_Text_0:
# 552 "data/maps/ParcelIsle/scripts.pory"
	.string "SALTWICK\p"
	.string "Saltmarsh Coast -- Skaldmere Regional\n"
	.string "Council\p"
	.string "A newer plate underneath: HARBOUR\n"
	.string "WORKS BY MEREHOLT COASTAL.$"

ParcelIsle_Neighbor_Text_0:
# 565 "data/maps/ParcelIsle/scripts.pory"
	.string "MARIT: The annex has a tenant again. A\n"
	.string "Survey girl, young, tidy. She leaves the\l"
	.string "window open the way the scientist did.\p"
	.string "I haven't told her that. I will.$"

ParcelIsle_Neighbor_Text_1:
# 570 "data/maps/ParcelIsle/scripts.pory"
	.string "MARIT: I told you to forget I said\n"
	.string "anything, that first day. I'm not saying\l"
	.string "it now.\p"
	.string "She wrote about you because she knew\n"
	.string "you'd do this. I think she was sorry. I\l"
	.string "think she knew that too.$"

ParcelIsle_Neighbor_Text_2:
# 572 "data/maps/ParcelIsle/scripts.pory"
	.string "MARIT: The river story came up the\n"
	.string "coast on the ferry before the papers\l"
	.string "did. Fishwives are faster than print.\p"
	.string "They say a Corps provisional read the\n"
	.string "Board's own numbers back to them. I\l"
	.string "said I know who that is. Then I shut my\l"
	.string "mouth, for once.$"

ParcelIsle_Neighbor_Text_3:
# 574 "data/maps/ParcelIsle/scripts.pory"
	.string "MARIT: You've been in the annex. People\n"
	.string "come out of there quiet.\p"
	.string "She left it tidy. That's what nobody\n"
	.string "says. Ransacked places aren't tidy.$"

ParcelIsle_Neighbor_Text_4:
# 576 "data/maps/ParcelIsle/scripts.pory"
	.string "MARIT: Oh! You're the one the scientist\n"
	.string "wrote about, aren't you? The young\l"
	.string "naturalist with the--$"

ParcelIsle_Neighbor_Text_5:
# 579 "data/maps/ParcelIsle/scripts.pory"
	.string "MARIT: Forget I said anything. It's cold\n"
	.string "out. Get indoors, {PLAYER}.$"

ParcelIsle_Innkeeper_Text_0:
# 597 "data/maps/ParcelIsle/scripts.pory"
	.string "LIV: Mom's made the big pot every\n"
	.string "Thursday since. Rangers, a lawyer once,\l"
	.string "the Survey girl.\p"
	.string "She says the pot's the only thing in\n"
	.string "town that's grown.$"

ParcelIsle_Innkeeper_Text_1:
# 602 "data/maps/ParcelIsle/scripts.pory"
	.string "LIV: Two lawyers and a reporter in the\n"
	.string "good rooms. Mom's charging them double\l"
	.string "and apologizing for it.\p"
	.string "Your room's still yours. She won't let\n"
	.string "anyone else have it.$"

ParcelIsle_Innkeeper_Text_2:
# 604 "data/maps/ParcelIsle/scripts.pory"
	.string "LIV: Mom's making the big pot on\n"
	.string "Thursdays now, for whoever's off the\l"
	.string "ferry. Rangers, mostly. One from the\l"
	.string "basin cried into it.\p"
	.string "She says the scientist would've\n"
	.string "approved. She says it to the pot, not to\l"
	.string "me.$"

ParcelIsle_Innkeeper_Text_3:
# 606 "data/maps/ParcelIsle/scripts.pory"
	.string "LIV: Mom says RANGERS eat like they get\n"
	.string "paid in weather. She made the big pot.\p"
	.string "She hasn't made the big pot since the\n"
	.string "scientist left.$"

ParcelIsle_Innkeeper_Text_4:
# 608 "data/maps/ParcelIsle/scripts.pory"
	.string "LIV: Mom's kept your room since the\n"
	.string "letter came. Swept it every week. She\l"
	.string "wouldn't say who for.\p"
	.string "The lamp's lit. Go on in, you'll freeze.$"

ParcelIsle_ChandlerBrother_Text_0:
# 619 "data/maps/ParcelIsle/scripts.pory"
	.string "OSSIAN: KIT's selling rope at the old\n"
	.string "price. Nobody's tying anything down any\l"
	.string "more.\p"
	.string "I sit. I've decided it was the right way\n"
	.string "after all, as long as somebody else is\l"
	.string "walking.$"

ParcelIsle_ChandlerBrother_Text_1:
# 624 "data/maps/ParcelIsle/scripts.pory"
	.string "OSSIAN: KIT's sold more rope this week\n"
	.string "than all winter. Everyone suddenly\l"
	.string "wants to tie something down.\p"
	.string "Me, I sit. Turns out sitting was the\n"
	.string "wrong way to be right.$"

ParcelIsle_ChandlerBrother_Text_2:
# 626 "data/maps/ParcelIsle/scripts.pory"
	.string "OSSIAN: KIT's had a run on lamp oil.\n"
	.string "People reading late. Minutes from the\l"
	.string "river, passed hand to hand.\p"
	.string "I've read them. I sit. Reading is a kind\n"
	.string "of sitting.$"

ParcelIsle_ChandlerBrother_Text_3:
# 628 "data/maps/ParcelIsle/scripts.pory"
	.string "OSSIAN: KIT's got the RANGER stock in\n"
	.string "now. REPELS, the good POTIONS. Says the\l"
	.string "RANGERS pay on time, unlike some.\p"
	.string "She means the fleet. She won't say the\n"
	.string "fleet.$"

ParcelIsle_ChandlerBrother_Text_4:
# 630 "data/maps/ParcelIsle/scripts.pory"
	.string "OSSIAN: KIT's inside. She sells, I sit.\n"
	.string "It's an arrangement.\p"
	.string "Wind's been coming off the water wrong\n"
	.string "all month. You get used to it. Mostly.$"

ParcelIsle_LabSign_Text_0:
# 642 "data/maps/ParcelIsle/scripts.pory"
	.string "FIELD RESEARCH ANNEX\n"
	.string "Skaldmere Survey cooperative site\p"
	.string "A strip of red cloth is nailed under the\n"
	.string "plate, faded gray.$"

ParcelIsle_HallSign_Text_0:
# 647 "data/maps/ParcelIsle/scripts.pory"
	.string "SALTWICK FISHERS' CO-OPERATIVE\p"
	.string "Meetings first Tuesday. Members and\n"
	.string "guests.\p"
	.string "Stencilled underneath: WITH THE\n"
	.string "SUPPORT OF THE MEREHOLT FOUNDATION.$"

ParcelIsle_NoticeBoard_Text_0:
# 653 "data/maps/ParcelIsle/scripts.pory"
	.string "NOTICES\p"
	.string "REGIONAL HEARINGS -- COASTAL QUOTAS.\n"
	.string "Public sessions Thursdays at the\l"
	.string "Council hall. Transport provided.\p"
	.string "MEREHOLT COASTAL: day-rate hiring\n"
	.string "SUSPENDED pending review.\p"
	.string "Someone pinned a strip of red cloth to\n"
	.string "the corner of the board.$"

ParcelIsle_NoticeBoard_Text_1:
# 655 "data/maps/ParcelIsle/scripts.pory"
	.string "NOTICES\p"
	.string "SKALDMERE CLIMATE CORPS: provisional\n"
	.string "RANGERS wanted. Apply at the district\l"
	.string "station.\p"
	.string "MEREHOLT COASTAL: day-rate hiring,\n"
	.string "quay, dawn. Own boots.\p"
	.string "LOST: one gray cat, answers to SEDGE.$"

ParcelIsle_NoticeBoard_Text_2:
# 657 "data/maps/ParcelIsle/scripts.pory"
	.string "NOTICES\p"
	.string "MEREHOLT COASTAL: day-rate hiring,\n"
	.string "quay, dawn. Own boots.\p"
	.string "FERRY SCHEDULE: see board at landing.\p"
	.string "LOST: one gray cat, answers to SEDGE.\p"
	.string "A fourth notice has been torn down. Two\n"
	.string "corners are still under the pins.$"

ParcelIsle_WeatherStationSign_Text_0:
# 663 "data/maps/ParcelIsle/scripts.pory"
	.string "AUTOMATED WEATHER STATION 04\n"
	.string "Skaldmere Climate Corps\p"
	.string "Instrument sponsorship: the MEREHOLT\n"
	.string "FOUNDATION\p"
	.string "The anemometer turns. The logger light\n"
	.string "is off.$"

ParcelIsle_PreserveGateSign_Text_0:
# 668 "data/maps/ParcelIsle/scripts.pory"
	.string "MISTWOOD SHORE PRESERVE\n"
	.string "Skaldmere Climate Corps -- Holding\l"
	.string "Meadow\p"
	.string "No entry without a RANGER present.\p"
	.string "The MEREHOLT FOUNDATION crest, cast in\n"
	.string "bronze, very clean.$"

ParcelIsle_CenterAide_Text_0:
# 680 "data/maps/ParcelIsle/scripts.pory"
	.string "MEDIC: Quiet mornings again. Rangers\n"
	.string "come off the ferry and walk home\l"
	.string "without sitting.\p"
	.string "That's the whole report, and it's a good\n"
	.string "one.$"

ParcelIsle_CenterAide_Text_1:
# 685 "data/maps/ParcelIsle/scripts.pory"
	.string "MEDIC: Aid station's for POKéMON. Yours\n"
	.string "look like they've walked a region. They\l"
	.string "have. Leave them with me an hour.$"

ParcelIsle_CenterAide_Text_2:
# 690 "data/maps/ParcelIsle/scripts.pory"
	.string "MEDIC: The aid station's been busier.\n"
	.string "Not with injuries. With rangers coming\l"
	.string "down off the ferry to sit a minute\l"
	.string "before they walk home.\p"
	.string "The basin and the river, mostly. I don't\n"
	.string "ask. I put the kettle on.$"

ParcelIsle_CenterAide_Text_3:
# 694 "data/maps/ParcelIsle/scripts.pory"
	.string "MEDIC: Aid station's for POKéMON, and\n"
	.string "you haven't got one yet.\p"
	.string "RIN's up at the meadow, through the\n"
	.string "north gate. Go get picked. Then come\l"
	.string "back and I'll move.$"

ParcelIsle_T_Brand_Text_0:
# 702 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Off the ferry crew. Nothing to\n"
	.string "do till the tide. Battle me, RANGER, the\l"
	.string "harbour's dull.$"

ParcelIsle_T_Brand_Text_1:
# 703 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Tide's in. Figuratively.$"

ParcelIsle_T_Brand_Text_2:
# 718 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Three ferry routes now.\n"
	.string "DELIBIRD, the coast, the station. The\l"
	.string "coast one's full every run. Nobody\l"
	.string "comes back smiling.$"

ParcelIsle_T_Brand_R2_Text_0:
# 729 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelIsle_T_Brand_R2_Text_1:
# 731 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Another time, then.$"

ParcelIsle_T_Brand_R2_Text_2:
# 735 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Right. That's the whole of it.$"

ParcelIsle_T_Brand_R2_Text_3:
# 736 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelIsle_T_Brand_R3_Text_0:
# 743 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelIsle_T_Brand_R3_Text_1:
# 750 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelIsle_T_Brand_R4_Text_0:
# 757 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelIsle_T_Brand_R4_Text_1:
# 763 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Still yours.$"

ParcelIsle_T_Brand_R4_Text_2:
# 764 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelIsle_T_Brand_R5_Text_0:
# 771 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelIsle_T_Brand_R5_Text_1:
# 777 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: Noted. Properly, this time.$"

ParcelIsle_T_Brand_R5_Text_2:
# 778 "data/maps/ParcelIsle/scripts.pory"
	.string "BRAND: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelIsle_T_Svein_Text_0:
# 784 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Fishing the jetty. Not catching.\n"
	.string "There's a difference. Battle?$"

ParcelIsle_T_Svein_Text_1:
# 785 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Caught something at last.$"

ParcelIsle_T_Svein_Text_2:
# 800 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: ANNI says the nets are fine and\n"
	.string "the sea is empty. I'm starting to\l"
	.string "believe her.$"

ParcelIsle_T_Svein_R2_Text_0:
# 811 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: I kept the team up for this.\n"
	.string "Again?$"

ParcelIsle_T_Svein_R2_Text_1:
# 813 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Fine. Same spot.$"

ParcelIsle_T_Svein_R2_Text_2:
# 817 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: That's the one I wanted to see.$"

ParcelIsle_T_Svein_R2_Text_3:
# 818 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelIsle_T_Svein_R3_Text_0:
# 825 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelIsle_T_Svein_R3_Text_1:
# 831 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Still yours.$"

ParcelIsle_T_Svein_R3_Text_2:
# 832 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: One more in me. After the high\n"
	.string "ground.$"

ParcelIsle_T_Svein_R4_Text_0:
# 839 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelIsle_T_Svein_R4_Text_1:
# 846 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelIsle_T_Svein_R5_Text_0:
# 853 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelIsle_T_Svein_R5_Text_1:
# 860 "data/maps/ParcelIsle/scripts.pory"
	.string "SVEIN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelIsle_T_Tora_Text_0:
# 866 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: New in town. Everyone's new in\n"
	.string "town eventually. Battle me so I know\l"
	.string "your name.$"

ParcelIsle_T_Tora_Text_1:
# 867 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Noted. The name, I mean.$"

ParcelIsle_T_Tora_Text_2:
# 882 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: The CORPS gets a new provisional\n"
	.string "every spring. Most of them go north and\l"
	.string "we hear about them on the radio. Mind\l"
	.string "you come back.$"

ParcelIsle_T_Tora_R2_Text_0:
# 893 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelIsle_T_Tora_R2_Text_1:
# 895 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: No hurry. The water keeps.$"

ParcelIsle_T_Tora_R2_Text_2:
# 899 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: …Again, then. Later.$"

ParcelIsle_T_Tora_R2_Text_3:
# 900 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelIsle_T_Tora_R3_Text_0:
# 907 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelIsle_T_Tora_R3_Text_1:
# 913 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Still yours.$"

ParcelIsle_T_Tora_R3_Text_2:
# 914 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelIsle_T_Tora_R4_Text_0:
# 921 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelIsle_T_Tora_R4_Text_1:
# 927 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Noted. Properly, this time.$"

ParcelIsle_T_Tora_R4_Text_2:
# 928 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelIsle_T_Tora_R5_Text_0:
# 935 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelIsle_T_Tora_R5_Text_1:
# 941 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: Right. That's the whole of it.$"

ParcelIsle_T_Tora_R5_Text_2:
# 942 "data/maps/ParcelIsle/scripts.pory"
	.string "TORA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelIsle_T_Jon_Text_0:
# 948 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: The chandlery's closed, the hall's\n"
	.string "full of meetings, and I'm bored. Battle!$"

ParcelIsle_T_Jon_Text_1:
# 949 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Less bored now.$"

ParcelIsle_T_Jon_Text_2:
# 964 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: My dad says the marsh north of\n"
	.string "FERNWICK smells like money. He means\l"
	.string "somebody's making some.$"

ParcelIsle_T_Jon_R2_Text_0:
# 975 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelIsle_T_Jon_R2_Text_1:
# 977 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: No hurry. The water keeps.$"

ParcelIsle_T_Jon_R2_Text_2:
# 981 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Noted. Properly, this time.$"

ParcelIsle_T_Jon_R2_Text_3:
# 982 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelIsle_T_Jon_R3_Text_0:
# 989 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelIsle_T_Jon_R3_Text_1:
# 995 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Right. That's the whole of it.$"

ParcelIsle_T_Jon_R3_Text_2:
# 996 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: One more in me. After the high\n"
	.string "ground.$"

ParcelIsle_T_Jon_R4_Text_0:
# 1003 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelIsle_T_Jon_R4_Text_1:
# 1010 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelIsle_T_Jon_R5_Text_0:
# 1017 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelIsle_T_Jon_R5_Text_1:
# 1023 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: Still yours.$"

ParcelIsle_T_Jon_R5_Text_2:
# 1024 "data/maps/ParcelIsle/scripts.pory"
	.string "JON: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelIsle_T_Line_Text_0:
# 1030 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Picnic on the quay. The gulls take\n"
	.string "everything. You can't take a battle off\l"
	.string "me though.$"

ParcelIsle_T_Line_Text_1:
# 1031 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: You can, apparently.$"

ParcelIsle_T_Line_Text_2:
# 1046 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: SIGRUN counts the gulls every\n"
	.string "morning. Fewer each year. The gulls\l"
	.string "don't know. The gulls just want my\l"
	.string "sandwich.$"

ParcelIsle_T_Line_R2_Text_0:
# 1057 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelIsle_T_Line_R2_Text_1:
# 1059 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: No hurry. The water keeps.$"

ParcelIsle_T_Line_R2_Text_2:
# 1063 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Still yours.$"

ParcelIsle_T_Line_R2_Text_3:
# 1064 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelIsle_T_Line_R3_Text_0:
# 1071 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelIsle_T_Line_R3_Text_1:
# 1078 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelIsle_T_Line_R4_Text_0:
# 1085 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelIsle_T_Line_R4_Text_1:
# 1091 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Right. That's the whole of it.$"

ParcelIsle_T_Line_R4_Text_2:
# 1092 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelIsle_T_Line_R5_Text_0:
# 1099 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelIsle_T_Line_R5_Text_1:
# 1105 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: That's the one I wanted to see.$"

ParcelIsle_T_Line_R5_Text_2:
# 1106 "data/maps/ParcelIsle/scripts.pory"
	.string "LINE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelIsle_PairNets_Text_0:
# 1116 "data/maps/ParcelIsle/scripts.pory"
	.string "NETMENDER: The lab on the front.\n"
	.string "They've taken the boards down. There's\l"
	.string "a light in it.$"

ParcelIsle_PairNets_Text_1:
# 1117 "data/maps/ParcelIsle/scripts.pory"
	.string "OLD WOMAN: The Survey's leased it. For\n"
	.string "the baselines, they say. Thirty-one\l"
	.string "years of cloth in cardboard boxes.$"

ParcelIsle_PairNets_Text_2:
# 1118 "data/maps/ParcelIsle/scripts.pory"
	.string "NETMENDER: In the lab they emptied. In\n"
	.string "the same room.$"

ParcelIsle_PairNets_Text_3:
# 1119 "data/maps/ParcelIsle/scripts.pory"
	.string "OLD WOMAN: In the same room. Somebody\n"
	.string "has a sense of humour. Not the company.$"

ParcelIsle_PairNets_Text_4:
# 1121 "data/maps/ParcelIsle/scripts.pory"
	.string "NETMENDER: They say the ranger made\n"
	.string "FOREST. First one out of this harbour in\l"
	.string "nine years.$"

ParcelIsle_PairNets_Text_5:
# 1122 "data/maps/ParcelIsle/scripts.pory"
	.string "OLD WOMAN: Out of this harbour. Listen\n"
	.string "to you. You sold the ranger a bad rope.$"

ParcelIsle_PairNets_Text_6:
# 1123 "data/maps/ParcelIsle/scripts.pory"
	.string "NETMENDER: It was a fair rope. The\n"
	.string "ranger's just hard on rope.$"

ParcelIsle_PairNets_Text_7:
# 1124 "data/maps/ParcelIsle/scripts.pory"
	.string "OLD WOMAN: Hard on everything, I hear.\n"
	.string "Good. Something should be.$"

ParcelIsle_PairNets_Text_8:
# 1126 "data/maps/ParcelIsle/scripts.pory"
	.string "NETMENDER: Third ferry this week with\n"
	.string "nobody getting off but freight.$"

ParcelIsle_PairNets_Text_9:
# 1127 "data/maps/ParcelIsle/scripts.pory"
	.string "OLD WOMAN: Somebody got off. The one\n"
	.string "with the notebook.$"

ParcelIsle_PairNets_Text_10:
# 1128 "data/maps/ParcelIsle/scripts.pory"
	.string "NETMENDER: That's not a somebody.\n"
	.string "That's a letter with legs.$"

ParcelIsle_PairNets_Text_11:
# 1129 "data/maps/ParcelIsle/scripts.pory"
	.string "OLD WOMAN: A letter's more than this\n"
	.string "town's had in a while. Mend your net.$"

ParcelIsle_PairFreight_Text_0:
# 1138 "data/maps/ParcelIsle/scripts.pory"
	.string "DOCKER: East berth's open all night now.\n"
	.string "Logistics pulled the night crew.$"

ParcelIsle_PairFreight_Text_1:
# 1139 "data/maps/ParcelIsle/scripts.pory"
	.string "CHANDLER: Pulled them where?$"

ParcelIsle_PairFreight_Text_2:
# 1140 "data/maps/ParcelIsle/scripts.pory"
	.string "DOCKER: Nowhere. That's the thing.\n"
	.string "Nowhere to pull them to, with the dredge\l"
	.string "stopped.$"

ParcelIsle_PairFreight_Text_3:
# 1141 "data/maps/ParcelIsle/scripts.pory"
	.string "CHANDLER: Then they'll be in my shop by\n"
	.string "the weekend, wanting rope on credit.\l"
	.string "Tell them yes.$"

ParcelIsle_PairFreight_Text_4:
# 1143 "data/maps/ParcelIsle/scripts.pory"
	.string "DOCKER: Saw the ranger go through to\n"
	.string "the meadow with nothing. Came back with\l"
	.string "a DODUO at heel, or whatever it was.\l"
	.string "Didn't look like a trainer.$"

ParcelIsle_PairFreight_Text_5:
# 1144 "data/maps/ParcelIsle/scripts.pory"
	.string "CHANDLER: Looked like someone who'd\n"
	.string "been chosen and hadn't decided how\l"
	.string "they felt.$"

ParcelIsle_PairFreight_Text_6:
# 1145 "data/maps/ParcelIsle/scripts.pory"
	.string "DOCKER: You can see all that from the\n"
	.string "quay?$"

ParcelIsle_PairFreight_Text_7:
# 1146 "data/maps/ParcelIsle/scripts.pory"
	.string "CHANDLER: I sell rope to everyone who\n"
	.string "leaves. You learn faces.$"

ParcelIsle_PairFreight_Text_8:
# 1148 "data/maps/ParcelIsle/scripts.pory"
	.string "DOCKER: Logistics wants the east berth\n"
	.string "cleared by six. Every night this month,\l"
	.string "by six.$"

ParcelIsle_PairFreight_Text_9:
# 1149 "data/maps/ParcelIsle/scripts.pory"
	.string "CHANDLER: Cleared for what? Nothing\n"
	.string "comes in at six.$"

ParcelIsle_PairFreight_Text_10:
# 1150 "data/maps/ParcelIsle/scripts.pory"
	.string "DOCKER: Something goes out. I don't\n"
	.string "ask. It's a good job for not asking.$"

ParcelIsle_PairFreight_Text_11:
# 1151 "data/maps/ParcelIsle/scripts.pory"
	.string "CHANDLER: It's the only kind they have.$"

ParcelIsle_Stringer_Text_0:
# 1163 "data/maps/ParcelIsle/scripts.pory"
	.string "INGER: The Survey's in the lab now. I\n"
	.string "covered the move. Thirty-one years of\l"
	.string "red cloth going in through the door the\l"
	.string "company's van came out of at two in the\l"
	.string "morning.\p"
	.string "Best picture I've taken. Front page.\n"
	.string "Logistics did not comment, and I\l"
	.string "printed that they did not.$"

ParcelIsle_Stringer_Text_1:
# 1165 "data/maps/ParcelIsle/scripts.pory"
	.string "INGER: FOREST, I heard. From a bench\n"
	.string "you hear things. The lab on the front is\l"
	.string "still boarded. The police call it\l"
	.string "burglary. I call it burglary in print, and\l"
	.string "we both know the word's wrong.\p"
	.string "When you've got the right word, I'm here.\n"
	.string "I'm always here. It's a very good bench.$"

ParcelIsle_Stringer_Text_2:
# 1167 "data/maps/ParcelIsle/scripts.pory"
	.string "INGER: Skaldmere Courier. Dock desk,\n"
	.string "which is this bench. You came off the\l"
	.string "morning ferry with a bag and no partner.\l"
	.string "That's a story or it's nothing. Which?$"

ParcelIsle_Stringer_Text_3:
# 1168 "data/maps/ParcelIsle/scripts.pory"
	.string "{PLAYER}: Nothing yet.$"

ParcelIsle_Stringer_Text_4:
# 1169 "data/maps/ParcelIsle/scripts.pory"
	.string "INGER: Good answer. Most people give me\n"
	.string "the other one and regret it by the\l"
	.string "second ferry. Come back when it's\l"
	.string "something.$"

ParcelIsle_Oysterman_Text_0:
# 1181 "data/maps/ParcelIsle/scripts.pory"
	.string "OYSTERMAN: Two shells with young on\n"
	.string "the old ground this spring. Two. Dad\l"
	.string "would have said that's not a bed, that's\l"
	.string "a start.\p"
	.string "I've written START under GONE. Same\n"
	.string "hand.$"

ParcelIsle_Oysterman_Text_1:
# 1186 "data/maps/ParcelIsle/scripts.pory"
	.string "OYSTERMAN: GONE, it says. My father\n"
	.string "would have wanted the word. He'd have\l"
	.string "wanted it spelled right. It is.$"

ParcelIsle_Oysterman_Text_2:
# 1189 "data/maps/ParcelIsle/scripts.pory"
	.string "OYSTERMAN: …GONE. In the Survey's hand.\n"
	.string "Thirty-one years and nobody put it in\l"
	.string "writing where he could have read it.\p"
	.string "Here. He kept these from the last good\n"
	.string "year. You read it; you have one.$"

ParcelIsle_Oysterman_Text_3:
# 1193 "data/maps/ParcelIsle/scripts.pory"
	.string "OYSTERMAN: Past the pier, in the\n"
	.string "shallows. The cloth will be rags by now.\l"
	.string "The tag's brass.$"

ParcelIsle_Oysterman_Text_4:
# 1196 "data/maps/ParcelIsle/scripts.pory"
	.string "OYSTERMAN: My father's oyster ground\n"
	.string "was out there. Where the dredge spoil\l"
	.string "sits now. The Survey staked it the year\l"
	.string "it went, and I never went out to look.\p"
	.string "You've a notebook. Go and read me the\n"
	.string "stake. Out past the pier, in the\l"
	.string "shallows.$"

ParcelIsle_ShoalStake_Text_0:
# 1205 "data/maps/ParcelIsle/scripts.pory"
	.string "A survey stake in the shallows, leaning.\n"
	.string "The cloth is threads. The brass tag\l"
	.string "reads: SALTWICK SHOALS, OYSTER GROUND.\l"
	.string "FIRST STAKE, LAST READING, and under\l"
	.string "them one word cut deeper than the rest.\p"
	.string "GONE.$"

ParcelIsle_ShoalStake_Text_1:
# 1208 "data/maps/ParcelIsle/scripts.pory"
	.string "A leaning stake in the shallows. Brass\n"
	.string "tag, red threads, one word.$"

ParcelIsle_FindTally_Text_0:
# 1217 "data/maps/ParcelIsle/scripts.pory"
	.string "A pier post, grey, the base gone soft.\n"
	.string "Notches cut into it in three groups, the\l"
	.string "groups getting smaller down the years:\l"
	.string "eleven, four, one.\p"
	.string "The last notch is deep and careful, as\n"
	.string "if whoever cut it knew it might be the\l"
	.string "last.$"

ParcelIsle_FindTally_Text_1:
# 1220 "data/maps/ParcelIsle/scripts.pory"
	.string "A pier post with three groups of\n"
	.string "notches. Eleven, four, one. The wood will\l"
	.string "not take another.$"

ParcelIsle_PairGreen_Text_0:
# 1228 "data/maps/ParcelIsle/scripts.pory"
	.string "COUNCILLOR: The lab's leased to the\n"
	.string "Survey. Planning consent for a change\l"
	.string "of use: granted. I signed it myself.$"

ParcelIsle_PairGreen_Text_1:
# 1229 "data/maps/ParcelIsle/scripts.pory"
	.string "SCHOOLTEACHER: Quickly, for once.$"

ParcelIsle_PairGreen_Text_2:
# 1230 "data/maps/ParcelIsle/scripts.pory"
	.string "COUNCILLOR: Quickly. I've a reputation\n"
	.string "to lose and I've decided which way I'd\l"
	.string "rather lose it. Don't put that on the\l"
	.string "board.$"

ParcelIsle_PairGreen_Text_3:
# 1231 "data/maps/ParcelIsle/scripts.pory"
	.string "SCHOOLTEACHER: It's already up.$"

ParcelIsle_PairGreen_Text_4:
# 1233 "data/maps/ParcelIsle/scripts.pory"
	.string "SCHOOLTEACHER: The provisional made\n"
	.string "FOREST. First out of this town in nine\l"
	.string "years. I've put it on the board at\l"
	.string "school.$"

ParcelIsle_PairGreen_Text_5:
# 1234 "data/maps/ParcelIsle/scripts.pory"
	.string "COUNCILLOR: It's not a council matter.$"

ParcelIsle_PairGreen_Text_6:
# 1235 "data/maps/ParcelIsle/scripts.pory"
	.string "SCHOOLTEACHER: Nothing is, until it's in\n"
	.string "the paper. Then it's a planning matter.\l"
	.string "I've watched you long enough to know\l"
	.string "the order.$"

ParcelIsle_PairGreen_Text_7:
# 1237 "data/maps/ParcelIsle/scripts.pory"
	.string "COUNCILLOR: The lab on the front is a\n"
	.string "planning matter now. Vacant\l"
	.string "possession. The owner's within his\l"
	.string "rights.$"

ParcelIsle_PairGreen_Text_8:
# 1238 "data/maps/ParcelIsle/scripts.pory"
	.string "SCHOOLTEACHER: The owner emptied it at\n"
	.string "two in the morning.$"

ParcelIsle_PairGreen_Text_9:
# 1239 "data/maps/ParcelIsle/scripts.pory"
	.string "COUNCILLOR: The owner's hours are the\n"
	.string "owner's business.$"

ParcelIsle_PairGreen_Text_10:
# 1240 "data/maps/ParcelIsle/scripts.pory"
	.string "SCHOOLTEACHER: I teach the children\n"
	.string "that a thing done at two in the morning\l"
	.string "is a thing someone didn't want seen.\l"
	.string "Shall I stop?$"

ParcelIsle_Board1_Text_0:
# 1249 "data/maps/ParcelIsle/scripts.pory"
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
# 1254 "data/maps/ParcelIsle/scripts.pory"
	.string "A SURVEY BOARD by the jetty steps.\n"
	.string "STARYU on the harbour floor at night,\l"
	.string "counted by their light from the end of\l"
	.string "the jetty since before the Survey had a\l"
	.string "name for the method.\p"
	.string "It is the easiest count on the island\n"
	.string "and so it is the longest. 40, 38, 41, 36,\l"
	.string "29, 31, 24.$"

ParcelIsle_FindSeal_Text_0:
# 1262 "data/maps/ParcelIsle/scripts.pory"
	.string "A crate on the quay, a Council seal\n"
	.string "across the lid, red wax gone pale in the\l"
	.string "salt. EVIDENCE, stencilled, and under it\l"
	.string "a number in a clerk's hand: 417.\p"
	.string "Someone has stacked a coil of rope\n"
	.string "against it so it looks like it belongs to\l"
	.string "the harbour. It does not.$"

ParcelIsle_FindSeal_Text_1:
# 1265 "data/maps/ParcelIsle/scripts.pory"
	.string "A crate on the quay, sealed, numbered\n"
	.string "417. The rope has been moved off it and\l"
	.string "set neatly to one side.$"

ParcelIsle_Board3_Text_0:
# 1273 "data/maps/ParcelIsle/scripts.pory"
	.string "A SURVEY BOARD at the harbour steps.\n"
	.string "The herring come in on the spring tides,\l"
	.string "and the board marks the first shoal\l"
	.string "each year with a nail.\p"
	.string "The nails run up the post a week a\n"
	.string "decade. The sizes beside them run down.\l"
	.string "The board does not say what happens\l"
	.string "when the nails reach the top.$"

ParcelIsle_Board4_Text_0:
# 1280 "data/maps/ParcelIsle/scripts.pory"
	.string "A SURVEY BOARD on the north wall of the\n"
	.string "harbour. The first stake in Skaldmere\l"
	.string "was driven here, thirty-one years ago,\l"
	.string "by a surveyor who is not named on the\l"
	.string "board, because the Survey does not\l"
	.string "name surveyors.\p"
	.string "The stake is gone. The hole is kept open\n"
	.string "with a brass tube, and the tube is read\l"
	.string "every spring: present.$"

ParcelIsle_PairQuay_Text_0:
# 1289 "data/maps/ParcelIsle/scripts.pory"
	.string "COOPER: Thirty barrels a week, by order.\n"
	.string "The review's.$"

ParcelIsle_PairQuay_Text_1:
# 1290 "data/maps/ParcelIsle/scripts.pory"
	.string "DRAYMAN: Thirty barrels of fish that\n"
	.string "are in the sea. I'll move thirty.$"

ParcelIsle_PairQuay_Text_2:
# 1291 "data/maps/ParcelIsle/scripts.pory"
	.string "COOPER: You've got cheerful about\n"
	.string "moving less.$"

ParcelIsle_PairQuay_Text_3:
# 1292 "data/maps/ParcelIsle/scripts.pory"
	.string "DRAYMAN: I've got cheerful about\n"
	.string "moving what's there.$"

ParcelIsle_PairQuay_Text_4:
# 1294 "data/maps/ParcelIsle/scripts.pory"
	.string "DRAYMAN: The provisional's got FOREST.\n"
	.string "Hall put it on the board.$"

ParcelIsle_PairQuay_Text_5:
# 1295 "data/maps/ParcelIsle/scripts.pory"
	.string "COOPER: What's a forest got to do with\n"
	.string "barrels?$"

ParcelIsle_PairQuay_Text_6:
# 1296 "data/maps/ParcelIsle/scripts.pory"
	.string "DRAYMAN: Nothing. Somebody from here\n"
	.string "did a thing properly. I'm taking it.$"

ParcelIsle_PairQuay_Text_7:
# 1298 "data/maps/ParcelIsle/scripts.pory"
	.string "COOPER: Forty barrels a week for the\n"
	.string "cannery, and they want sixty.$"

ParcelIsle_PairQuay_Text_8:
# 1299 "data/maps/ParcelIsle/scripts.pory"
	.string "DRAYMAN: Sixty barrels of what? The\n"
	.string "boats bring in forty barrels of fish.$"

ParcelIsle_PairQuay_Text_9:
# 1300 "data/maps/ParcelIsle/scripts.pory"
	.string "COOPER: The Company says the fish will\n"
	.string "come.$"

ParcelIsle_PairQuay_Text_10:
# 1301 "data/maps/ParcelIsle/scripts.pory"
	.string "DRAYMAN: The Company's never been in a\n"
	.string "boat. I'll move forty.$"

ParcelIsle_Board10_Text_0:
# 1310 "data/maps/ParcelIsle/scripts.pory"
	.string "A SURVEY BOARD at the school gate. The\n"
	.string "children's count: shells on the jetty\l"
	.string "steps after a storm, one child, one\l"
	.string "storm, one number, for twenty-two\l"
	.string "years of children.\p"
	.string "The Survey copies it to the board every\n"
	.string "autumn and has never corrected a\l"
	.string "single figure. The children count\l"
	.string "honestly. It is the adults who round.$"

ParcelIsle_PairSteps_Text_0:
# 1319 "data/maps/ParcelIsle/scripts.pory"
	.string "FISHWIFE: The review's inspector\n"
	.string "counts my catch on the steps, and the\l"
	.string "children count her.$"

ParcelIsle_PairSteps_Text_1:
# 1320 "data/maps/ParcelIsle/scripts.pory"
	.string "TEACHER: They've started a column for\n"
	.string "inspectors.$"

ParcelIsle_PairSteps_Text_2:
# 1321 "data/maps/ParcelIsle/scripts.pory"
	.string "FISHWIFE: What's it say?$"

ParcelIsle_PairSteps_Text_3:
# 1322 "data/maps/ParcelIsle/scripts.pory"
	.string "TEACHER: One. Every week. They're very\n"
	.string "pleased with how steady it is.$"

ParcelIsle_PairSteps_Text_4:
# 1324 "data/maps/ParcelIsle/scripts.pory"
	.string "TEACHER: The provisional's FOREST is on\n"
	.string "the school board. The children asked\l"
	.string "what a forest certificate certifies.$"

ParcelIsle_PairSteps_Text_5:
# 1325 "data/maps/ParcelIsle/scripts.pory"
	.string "FISHWIFE: What did you say?$"

ParcelIsle_PairSteps_Text_6:
# 1326 "data/maps/ParcelIsle/scripts.pory"
	.string "TEACHER: That someone looked at a\n"
	.string "place carefully enough to be believed.\l"
	.string "One of them asked if you could get one\l"
	.string "for a harbour.$"

ParcelIsle_PairSteps_Text_7:
# 1327 "data/maps/ParcelIsle/scripts.pory"
	.string "FISHWIFE: Can you?$"

ParcelIsle_PairSteps_Text_8:
# 1329 "data/maps/ParcelIsle/scripts.pory"
	.string "FISHWIFE: Half the catch is herring and\n"
	.string "the other half is talk.$"

ParcelIsle_PairSteps_Text_9:
# 1330 "data/maps/ParcelIsle/scripts.pory"
	.string "TEACHER: The children count the shells\n"
	.string "after the storms. Twenty-two years of\l"
	.string "it.$"

ParcelIsle_PairSteps_Text_10:
# 1331 "data/maps/ParcelIsle/scripts.pory"
	.string "FISHWIFE: Counting shells won't fill a\n"
	.string "boat.$"

ParcelIsle_PairSteps_Text_11:
# 1332 "data/maps/ParcelIsle/scripts.pory"
	.string "TEACHER: No. It fills a child. The boat's\n"
	.string "your department.$"
