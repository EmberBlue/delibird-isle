ParcelCorridor_MapScripts::
# 18 "data/maps/ParcelCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelCorridor_OnTransition
	.byte 0


ParcelCorridor_OnTransition::
# 22 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 23 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 10
# 24 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 25 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridor_OnTransition_2
# 28 "data/maps/ParcelCorridor/scripts.pory"
	clearflag FLAG_TEMP_2
ParcelCorridor_OnTransition_1:
# 30 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_TEMP_3
	end

ParcelCorridor_OnTransition_2:
# 26 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_TEMP_2
	goto ParcelCorridor_OnTransition_1


ParcelCorridor_Checkpoint::
# 38 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, ParcelCorridor_Checkpoint_2
# 42 "data/maps/ParcelCorridor/scripts.pory"
	lockall
# 43 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Checkpoint_Text_0, MSGBOX_DEFAULT
# 44 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 45 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 3, Movement_COR_MirrenApproach
# 46 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 47 "data/maps/ParcelCorridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_COR_FaceRight
# 48 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 49 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Checkpoint_Text_1, MSGBOX_DEFAULT
# 50 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Checkpoint_Text_2, MSGBOX_DEFAULT
# 51 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM2, ParcelCorridor_Checkpoint_Text_3
# 52 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_BADGE02_GET
# 53 "data/maps/ParcelCorridor/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 54 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Checkpoint_Text_4, MSGBOX_DEFAULT
# 55 "data/maps/ParcelCorridor/scripts.pory"
	giveitem ITEM_HM05
# 56 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Checkpoint_Text_5, MSGBOX_DEFAULT
# 57 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 58 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 3, Movement_COR_MirrenBack
# 59 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 60 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_2, 1
# 61 "data/maps/ParcelCorridor/scripts.pory"
	releaseall
	end

ParcelCorridor_Checkpoint_2:
# 39 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_2, 1
	end


ParcelCorridor_Mirren::
# 66 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 67 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 68 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelCorridor_Mirren_2
# 73 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Mirren_Text_1, MSGBOX_DEFAULT
# 74 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Mirren_2:
# 69 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Mirren_Text_0, MSGBOX_DEFAULT
# 70 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


# 78 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_MirrenApproach:
# 78 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 78 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
	step_end

# 79 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_MirrenBack:
# 79 "data/maps/ParcelCorridor/scripts.pory"
	walk_right
# 79 "data/maps/ParcelCorridor/scripts.pory"
	walk_right
# 79 "data/maps/ParcelCorridor/scripts.pory"
	face_left
	step_end

# 80 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_FaceRight:
# 80 "data/maps/ParcelCorridor/scripts.pory"
	face_right
	step_end

# 81 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_FaceDown:
# 81 "data/maps/ParcelCorridor/scripts.pory"
	face_down
	step_end

ParcelCorridor_CulvertScene::
# 85 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 86 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 9
# 87 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 88 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridor_CulvertScene_2
# 92 "data/maps/ParcelCorridor/scripts.pory"
	lockall
# 93 "data/maps/ParcelCorridor/scripts.pory"
	bufferpartymonnick 0, 0
# 94 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_0, MSGBOX_DEFAULT
# 95 "data/maps/ParcelCorridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_COR_FaceDown
# 96 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 97 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_1, MSGBOX_DEFAULT
# 98 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_2, MSGBOX_DEFAULT
# 99 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 100 "data/maps/ParcelCorridor/scripts.pory"
	clearflag FLAG_TEMP_3
# 101 "data/maps/ParcelCorridor/scripts.pory"
	addobject 2
# 102 "data/maps/ParcelCorridor/scripts.pory"
	playse SE_PIN
# 103 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_3, MSGBOX_DEFAULT
# 104 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 2, Movement_COR_WooperTry
# 105 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 106 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_4, MSGBOX_DEFAULT
# 107 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_5, MSGBOX_DEFAULT
# 108 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 2, Movement_COR_WooperRetreat
# 109 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 110 "data/maps/ParcelCorridor/scripts.pory"
	removeobject 2
# 111 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_TEMP_3
# 112 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 9
# 113 "data/maps/ParcelCorridor/scripts.pory"
	special SkaldmereCertTaskMark
# 114 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 115 "data/maps/ParcelCorridor/scripts.pory"
	releaseall
	end

ParcelCorridor_CulvertScene_2:
# 89 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


ParcelCorridor_FarSide::
# 120 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 121 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_FarSide_Text_0, MSGBOX_DEFAULT
# 122 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


# 126 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_WooperTry:
# 126 "data/maps/ParcelCorridor/scripts.pory"
	face_left
# 126 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
# 126 "data/maps/ParcelCorridor/scripts.pory"
	walk_in_place_faster_left
# 126 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
# 126 "data/maps/ParcelCorridor/scripts.pory"
	face_down
# 126 "data/maps/ParcelCorridor/scripts.pory"
	delay_8
# 126 "data/maps/ParcelCorridor/scripts.pory"
	face_left
# 126 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
# 126 "data/maps/ParcelCorridor/scripts.pory"
	walk_in_place_faster_left
# 126 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
	step_end

# 127 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_WooperRetreat:
# 127 "data/maps/ParcelCorridor/scripts.pory"
	face_right
# 127 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
# 127 "data/maps/ParcelCorridor/scripts.pory"
	walk_right
	step_end

# 128 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_WorkerLeave:
# 128 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 128 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 128 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 128 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 128 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 128 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 128 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
	step_end

ParcelCorridor_Worker::
# 132 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 133 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 134 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 135 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 9
# 136 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 137 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Worker_2
# 142 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_1, MSGBOX_DEFAULT
# 143 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_2, MSGBOX_DEFAULT
# 144 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_3, MSGBOX_YESNO
# 145 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridor_Worker_5
# 148 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_5, MSGBOX_DEFAULT
ParcelCorridor_Worker_4:
# 150 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_6, MSGBOX_DEFAULT
# 151 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_7, MSGBOX_DEFAULT
# 152 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_8, MSGBOX_DEFAULT
# 153 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_9, MSGBOX_DEFAULT
# 154 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_10, MSGBOX_DEFAULT
# 155 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_11, MSGBOX_DEFAULT
# 156 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 157 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 1, Movement_COR_WorkerLeave
# 158 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 159 "data/maps/ParcelCorridor/scripts.pory"
	removeobject 1
# 160 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 10
# 161 "data/maps/ParcelCorridor/scripts.pory"
	special SkaldmereCertTaskMark
# 162 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_TEMP_2
# 163 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_12, MSGBOX_DEFAULT
# 164 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Worker_2:
# 138 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_0, MSGBOX_DEFAULT
# 139 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Worker_5:
# 146 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_4, MSGBOX_DEFAULT
	goto ParcelCorridor_Worker_4


ParcelCorridor_ObsStumps::
# 170 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsStumps_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsMoss::
# 174 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsMoss_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsDrainage::
# 178 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsDrainage_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsRoad::
# 182 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsRoad_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsCulvert::
# 186 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsCulvert_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignWest::
# 192 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignWest_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignCheckpoint::
# 196 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignCheckpoint_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignNorth::
# 200 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignNorth_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignAdit::
# 204 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignAdit_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ItemSuperPotion::
# 209 "data/maps/ParcelCorridor/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelCorridor_ItemRepel::
# 210 "data/maps/ParcelCorridor/scripts.pory"
	finditem ITEM_REPEL
	end


ParcelCorridor_ItemGreatBall::
# 211 "data/maps/ParcelCorridor/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelCorridor_Geir::
# 215 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_GEIR, ParcelCorridor_Geir_Text_0, ParcelCorridor_Geir_Text_1
# 218 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_Text_2, MSGBOX_DEFAULT
	end


ParcelCorridor_Per::
# 222 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_PER, ParcelCorridor_Per_Text_0, ParcelCorridor_Per_Text_1
# 225 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_Text_2, MSGBOX_DEFAULT
	end


ParcelCorridor_Rune::
# 229 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_RUNE, ParcelCorridor_Rune_Text_0, ParcelCorridor_Rune_Text_1
# 232 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_Text_2, MSGBOX_DEFAULT
	end


ParcelCorridor_Else::
# 236 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_ELSE, ParcelCorridor_Else_Text_0, ParcelCorridor_Else_Text_1
# 239 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_Text_2, MSGBOX_DEFAULT
	end


ParcelCorridor_Ulf::
# 243 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_ULF, ParcelCorridor_Ulf_Text_0, ParcelCorridor_Ulf_Text_1
# 246 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_Text_2, MSGBOX_DEFAULT
	end


ParcelCorridor_Gro::
# 250 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_GRO, ParcelCorridor_Gro_Text_0, ParcelCorridor_Gro_Text_1
# 253 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_Text_2, MSGBOX_DEFAULT
	end


ParcelCorridor_Knut::
# 257 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_KNUT, ParcelCorridor_Knut_Text_0, ParcelCorridor_Knut_Text_1
# 260 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_Text_2, MSGBOX_DEFAULT
	end


ParcelCorridor_Dag::
# 264 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_DAG, ParcelCorridor_Dag_Text_0, ParcelCorridor_Dag_Text_1
# 267 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_Text_2, MSGBOX_DEFAULT
	end


ParcelCorridor_Arne::
# 271 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_ARNE, ParcelCorridor_Arne_Text_0, ParcelCorridor_Arne_Text_1
# 274 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_Text_2, MSGBOX_DEFAULT
	end


ParcelCorridor_Sven::
# 278 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_SVEN, ParcelCorridor_Sven_Text_0, ParcelCorridor_Sven_Text_1
# 281 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_Text_2, MSGBOX_DEFAULT
	end


ParcelCorridor_Olav::
# 285 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_OLAV, ParcelCorridor_Olav_Text_0, ParcelCorridor_Olav_Text_1
# 288 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_Text_2, MSGBOX_DEFAULT
	end


ParcelCorridor_Inga::
# 292 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_INGA, ParcelCorridor_Inga_Text_0, ParcelCorridor_Inga_Text_1
# 295 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_Text_2, MSGBOX_DEFAULT
	end


ParcelCorridor_Turid::
# 299 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_TURID, ParcelCorridor_Turid_Text_0, ParcelCorridor_Turid_Text_1
# 302 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_Text_2, MSGBOX_DEFAULT
	end


ParcelCorridor_Checkpoint_Text_0:
# 43 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Hold it.$"

ParcelCorridor_Checkpoint_Text_1:
# 49 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Subsurface Survey. I sign who\n"
	.string "goes past this cut and who doesn't.\p"
	.string "You're the provisional. TARN passed you.\n"
	.string "TARN passes nobody, so either you're\l"
	.string "good or he's slipping.$"

ParcelCorridor_Checkpoint_Text_2:
# 50 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Show me you can read anything\n"
	.string "at all.$"

ParcelCorridor_Checkpoint_Text_3:
# 51 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: …Steady under pressure. Noted.$"

ParcelCorridor_Checkpoint_Text_4:
# 54 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Subsurface clearance. It logs\n"
	.string "you fit to survey enclosed ground.\l"
	.string "Culverts. Adits. Anywhere the daylight\l"
	.string "stops.\p"
	.string "Comes with the standard kit.$"

ParcelCorridor_Checkpoint_Text_5:
# 56 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: FLASH. There's an old survey\n"
	.string "adit up the cut, past the stream.\l"
	.string "Pumped dry years ago. Nobody's been in\l"
	.string "since.\p"
	.string "If you want to see what we left in\n"
	.string "there, now you can.$"

ParcelCorridor_Mirren_Text_0:
# 69 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: You filed the basin as what it\n"
	.string "is. Half the division would have rounded\l"
	.string "up.\p"
	.string "Go on. The river's cleaner. For now.$"

ParcelCorridor_Mirren_Text_1:
# 73 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Cleared provisional. The\n"
	.string "basin's darker than this. Don't go in\l"
	.string "blind.$"

ParcelCorridor_CulvertScene_Text_0:
# 94 "data/maps/ParcelCorridor/scripts.pory"
	.string "{STR_VAR_1} stops at the edge of\n"
	.string "the road and won't go on.$"

ParcelCorridor_CulvertScene_Text_1:
# 97 "data/maps/ParcelCorridor/scripts.pory"
	.string "A culvert under the old road. Concrete.\n"
	.string "Narrow. Functional.\p"
	.string "Upstream, the channel is wide and\n"
	.string "braided. Downstream, it is one fast cut.$"

ParcelCorridor_CulvertScene_Text_2:
# 98 "data/maps/ParcelCorridor/scripts.pory"
	.string "The water through the pipe sounds\n"
	.string "sharper than it should. Less layered.\l"
	.string "More forceful.$"

ParcelCorridor_CulvertScene_Text_3:
# 103 "data/maps/ParcelCorridor/scripts.pory"
	.string "A splash, on the far side.$"

ParcelCorridor_CulvertScene_Text_4:
# 106 "data/maps/ParcelCorridor/scripts.pory"
	.string "A WOOPER tries the current. Once. Twice.\p"
	.string "It goes back to the far bank and stays\n"
	.string "there.$"

ParcelCorridor_CulvertScene_Text_5:
# 107 "data/maps/ParcelCorridor/scripts.pory"
	.string "Not trapped. Excluded.\p"
	.string "The corridor still exists. It's thinner.\n"
	.string "Written down: the pipe width, the drop,\l"
	.string "the time it tried.$"

ParcelCorridor_FarSide_Text_0:
# 121 "data/maps/ParcelCorridor/scripts.pory"
	.string "It watches the current from the far\n"
	.string "bank. It does not try again.$"

ParcelCorridor_Worker_Text_0:
# 138 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: Quite a current through there,\n"
	.string "eh?\p"
	.string "HOLLOWBEND drainage works. Culvert's\n"
	.string "ours. Meets code.$"

ParcelCorridor_Worker_Text_1:
# 142 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: Oh good. You're with the\n"
	.string "station, right? We've been meaning to\l"
	.string "flag this.\p"
	.string "Drainage specs met code, but wildlife\n"
	.string "keeps clogging it. We're scheduled to\l"
	.string "install grates next month.$"

ParcelCorridor_Worker_Text_2:
# 143 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: It meets regulation. But if you\n"
	.string "want, I can note that RANGERS were\l"
	.string "consulted.$"

ParcelCorridor_Worker_Text_3:
# 144 "data/maps/ParcelCorridor/scripts.pory"
	.string "Note that RANGERS were consulted?$"

ParcelCorridor_Worker_Text_4:
# 146 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: …\p"
	.string "No. Who approved the design?$"

ParcelCorridor_Worker_Text_5:
# 148 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: No. Who approved the\n"
	.string "design?$"

ParcelCorridor_Worker_Text_6:
# 150 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: Do you have the\n"
	.string "pre-construction flow data?$"

ParcelCorridor_Worker_Text_7:
# 151 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: That'd be… county records, I\n"
	.string "think. Or the contractor. It's in the\l"
	.string "hut, maybe. The spec sheet is.$"

ParcelCorridor_Worker_Text_8:
# 152 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: Grates would solve your\n"
	.string "problem. They wouldn't solve the\l"
	.string "WOOPER's.\p"
	.string "Fixing it later might mean it's already\n"
	.string "too late.$"

ParcelCorridor_Worker_Text_9:
# 153 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: …I'll note that the corridor\n"
	.string "width changed.$"

ParcelCorridor_Worker_Text_10:
# 154 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: It's not enough.$"

ParcelCorridor_Worker_Text_11:
# 155 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: It's not nothing. Crew 14, if\n"
	.string "anyone asks who said it.$"

ParcelCorridor_Worker_Text_12:
# 163 "data/maps/ParcelCorridor/scripts.pory"
	.string "Written down: the specs, the schedule,\n"
	.string "the missing data, the crew number.\p"
	.string "The report will move slowly. It will be\n"
	.string "questioned. Maybe ignored. But it\l"
	.string "exists now.$"

ParcelCorridor_ObsStumps_Text_0:
# 170 "data/maps/ParcelCorridor/scripts.pory"
	.string "Old stumps in a rough line, cut flat,\n"
	.string "grey with years.\p"
	.string "The forest didn't thin here. It was\n"
	.string "thinned.$"

ParcelCorridor_ObsMoss_Text_0:
# 174 "data/maps/ParcelCorridor/scripts.pory"
	.string "Moss thick on the north faces, gone\n"
	.string "where the canopy used to hold the damp.$"

ParcelCorridor_ObsDrainage_Text_0:
# 178 "data/maps/ParcelCorridor/scripts.pory"
	.string "A drainage cut, knife-straight, running\n"
	.string "off under the trees.\p"
	.string "Nothing in nature drains like this.$"

ParcelCorridor_ObsRoad_Text_0:
# 182 "data/maps/ParcelCorridor/scripts.pory"
	.string "A cracked service road, half-reclaimed\n"
	.string "by weeds.\p"
	.string "It looks abandoned. It isn't harmless.$"

ParcelCorridor_ObsCulvert_Text_0:
# 186 "data/maps/ParcelCorridor/scripts.pory"
	.string "The culvert. Concrete, narrow,\n"
	.string "functional.\p"
	.string "Upstream: broad and braided.\n"
	.string "Downstream: a single fast channel.$"

ParcelCorridor_SignWest_Text_0:
# 192 "data/maps/ParcelCorridor/scripts.pory"
	.string "HOLLOWBEND SPUR\p"
	.string "West: REEDMERE landing.\n"
	.string "East: the old service cut. Road closed\l"
	.string "to vehicles.$"

ParcelCorridor_SignCheckpoint_Text_0:
# 196 "data/maps/ParcelCorridor/scripts.pory"
	.string "MEREHOLT SUBSURFACE SURVEY\n"
	.string "Checkpoint\p"
	.string "Clearance required beyond this point.\n"
	.string "Provisional RANGERS report to the\l"
	.string "officer on duty.$"

ParcelCorridor_SignNorth_Text_0:
# 200 "data/maps/ParcelCorridor/scripts.pory"
	.string "North: the FLOODBASIN. Corps survey\n"
	.string "stakes from here. Keep to the marked\l"
	.string "path.$"

ParcelCorridor_SignAdit_Text_0:
# 204 "data/maps/ParcelCorridor/scripts.pory"
	.string "MEREHOLT SUBSURFACE SURVEY -- ADIT 3\p"
	.string "Pumped dry. No lighting. Keep out.$"

ParcelCorridor_Geir_Text_0:
# 216 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Nobody walks the cut anymore.\n"
	.string "Just me and the stumps. And you,\l"
	.string "apparently.$"

ParcelCorridor_Geir_Text_1:
# 217 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Stumps don't hit back. Noted.$"

ParcelCorridor_Geir_Text_2:
# 218 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: They logged this whole spur in\n"
	.string "one winter. The road was for the trucks.\l"
	.string "Then the trucks stopped coming.$"

ParcelCorridor_Per_Text_0:
# 223 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: The moths only come out where the\n"
	.string "big trees are left. I counted. Battle?$"

ParcelCorridor_Per_Text_1:
# 224 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: You counted better.$"

ParcelCorridor_Per_Text_2:
# 225 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Six DUSTOX in the old stand by the\n"
	.string "ledges. Zero in the cut. That's a number,\l"
	.string "isn't it? That's a finding.$"

ParcelCorridor_Rune_Text_0:
# 230 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: The ledges are the best bit. You\n"
	.string "can jump them. Can you jump me?$"

ParcelCorridor_Rune_Text_1:
# 231 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Jumped.$"

ParcelCorridor_Rune_Text_2:
# 232 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: The CORPS cadets won't jump the\n"
	.string "ledges. 'Erosion.' It's a ledge!$"

ParcelCorridor_Else_Text_0:
# 237 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Quiet, isn't it. Too quiet. Nothing\n"
	.string "lives in a cut like this except trainers.$"

ParcelCorridor_Else_Text_1:
# 238 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: And now one fewer.$"

ParcelCorridor_Else_Text_2:
# 239 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: There used to be a stream\n"
	.string "through the grass here. You can still\l"
	.string "see where. Dry as a bone.$"

ParcelCorridor_Ulf_Text_0:
# 244 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: My NINCADA dug up a drainage pipe\n"
	.string "yesterday. A pipe! In the middle of\l"
	.string "nowhere!$"

ParcelCorridor_Ulf_Text_1:
# 245 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: It digs better than it fights.$"

ParcelCorridor_Ulf_Text_2:
# 246 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Somebody drained this whole\n"
	.string "stretch on purpose. For a road nobody\l"
	.string "uses.$"

ParcelCorridor_Gro_Text_0:
# 251 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: I'm walking to FERNWICK the long\n"
	.string "way. The long way has more battles.$"

ParcelCorridor_Gro_Text_1:
# 252 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Longer than I thought.$"

ParcelCorridor_Gro_Text_2:
# 253 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: A woman in a MEREHOLT coat has the\n"
	.string "road blocked up ahead. She made me show\l"
	.string "my trainer card. It's a ROAD.$"

ParcelCorridor_Knut_Text_0:
# 258 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: POOCHYENA country. They came in\n"
	.string "when the trees came out. Mine's the\l"
	.string "biggest.$"

ParcelCorridor_Knut_Text_1:
# 259 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Not the biggest, then.$"

ParcelCorridor_Knut_Text_2:
# 260 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Nothing but POOCHYENA and\n"
	.string "ZIGZAGOON in the cut now. Dad says\l"
	.string "there were MAWILE once. In the rocks.$"

ParcelCorridor_Dag_Text_0:
# 265 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Cadet DAG. I'm supposed to be\n"
	.string "staking the path north. Spar first.\l"
	.string "HALE's orders.$"

ParcelCorridor_Dag_Text_1:
# 266 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Fine. Stakes.$"

ParcelCorridor_Dag_Text_2:
# 267 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: The basin's north, over the\n"
	.string "plateau. Follow the stakes with red\l"
	.string "cloth. The ones without cloth are\l"
	.string "MEREHOLT's.$"

ParcelCorridor_Arne_Text_0:
# 272 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Below the culvert the water runs\n"
	.string "so fast nothing holds. Above it, I\l"
	.string "catch. Guess which side you're on.$"

ParcelCorridor_Arne_Text_1:
# 273 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: The fast side.$"

ParcelCorridor_Arne_Text_2:
# 274 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: BARBOACH go up this stream in\n"
	.string "spring. Went. They can't get through\l"
	.string "the pipe. I told the crew. The crew told\l"
	.string "me it meets code.$"

ParcelCorridor_Sven_Text_0:
# 279 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: The plateau's mine. Well.\n"
	.string "MEREHOLT's. But I'm the one standing on\l"
	.string "it.$"

ParcelCorridor_Sven_Text_1:
# 280 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Standing on it a bit less.$"

ParcelCorridor_Sven_Text_2:
# 281 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Survey stakes everywhere up\n"
	.string "here. Two kinds. Nobody will tell me what\l"
	.string "the second kind is for.$"

ParcelCorridor_Olav_Text_0:
# 286 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: TAILLOW nest in the cut banks\n"
	.string "now. They didn't used to. Is that good\l"
	.string "or bad? Battle me while you think.$"

ParcelCorridor_Olav_Text_1:
# 287 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: Still thinking?$"

ParcelCorridor_Olav_Text_2:
# 288 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: More TAILLOW, fewer of\n"
	.string "everything else. I think that's bad. I\l"
	.string "think it looks like good.$"

ParcelCorridor_Inga_Text_0:
# 293 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: I can feel the ground under the\n"
	.string "plateau. It's hollow. Can you feel it?$"

ParcelCorridor_Inga_Text_1:
# 294 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: You feel it now.$"

ParcelCorridor_Inga_Text_2:
# 295 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Old workings. Adits. MEREHOLT\n"
	.string "pumped them dry and left. The hill\l"
	.string "remembers being wet.$"

ParcelCorridor_Turid_Text_0:
# 300 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: You're going to the basin?\n"
	.string "Nobody goes to the basin. Battle me and\l"
	.string "I'll tell you why.$"

ParcelCorridor_Turid_Text_1:
# 301 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Because it smells. That's why.\n"
	.string "Sweet, like something rotting.$"

ParcelCorridor_Turid_Text_2:
# 302 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: The stakes north of here go\n"
	.string "right down to the water. Somebody\l"
	.string "measured it all. And then just left it.$"
