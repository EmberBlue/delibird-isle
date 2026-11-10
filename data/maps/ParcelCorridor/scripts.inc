ParcelCorridor_MapScripts::
# 20 "data/maps/ParcelCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelCorridor_OnTransition
	.byte 0


ParcelCorridor_OnTransition::
# 24 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 25 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 10
# 26 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 27 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridor_OnTransition_2
# 30 "data/maps/ParcelCorridor/scripts.pory"
	clearflag FLAG_TEMP_2
ParcelCorridor_OnTransition_1:
# 32 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_TEMP_3
	end

ParcelCorridor_OnTransition_2:
# 28 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_TEMP_2
	goto ParcelCorridor_OnTransition_1


ParcelCorridor_Checkpoint::
# 40 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, ParcelCorridor_Checkpoint_2
# 44 "data/maps/ParcelCorridor/scripts.pory"
	lockall
# 45 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Checkpoint_Text_0, MSGBOX_DEFAULT
# 46 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 47 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 3, Movement_COR_MirrenApproach
# 48 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 49 "data/maps/ParcelCorridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_COR_FaceRight
# 50 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 51 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Checkpoint_Text_1, MSGBOX_DEFAULT
# 52 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Checkpoint_Text_2, MSGBOX_DEFAULT
# 53 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM2, ParcelCorridor_Checkpoint_Text_3
# 54 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_BADGE02_GET
# 55 "data/maps/ParcelCorridor/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 56 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Checkpoint_Text_4, MSGBOX_DEFAULT
# 57 "data/maps/ParcelCorridor/scripts.pory"
	giveitem ITEM_HM05
# 58 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Checkpoint_Text_5, MSGBOX_DEFAULT
# 59 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 60 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 3, Movement_COR_MirrenBack
# 61 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 62 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_2, 1
# 63 "data/maps/ParcelCorridor/scripts.pory"
	releaseall
	end

ParcelCorridor_Checkpoint_2:
# 41 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_2, 1
	end


ParcelCorridor_Mirren::
# 68 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 69 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 70 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCorridor_Mirren_2
ParcelCorridor_Mirren_1:
# 73 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelCorridor_Mirren_5
# 78 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Mirren_Text_1, MSGBOX_DEFAULT
# 79 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Mirren_2:
# 71 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Mirren_Rematch
	goto ParcelCorridor_Mirren_1

ParcelCorridor_Mirren_5:
# 74 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Mirren_Text_0, MSGBOX_DEFAULT
# 75 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


# 83 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_MirrenApproach:
# 83 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 83 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
	step_end

# 84 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_MirrenBack:
# 84 "data/maps/ParcelCorridor/scripts.pory"
	walk_right
# 84 "data/maps/ParcelCorridor/scripts.pory"
	walk_right
# 84 "data/maps/ParcelCorridor/scripts.pory"
	face_left
	step_end

# 85 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_FaceRight:
# 85 "data/maps/ParcelCorridor/scripts.pory"
	face_right
	step_end

# 86 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_FaceDown:
# 86 "data/maps/ParcelCorridor/scripts.pory"
	face_down
	step_end

ParcelCorridor_CulvertScene::
# 90 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 91 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 9
# 92 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 93 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridor_CulvertScene_2
# 97 "data/maps/ParcelCorridor/scripts.pory"
	lockall
# 98 "data/maps/ParcelCorridor/scripts.pory"
	bufferpartymonnick 0, 0
# 99 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_0, MSGBOX_DEFAULT
# 100 "data/maps/ParcelCorridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_COR_FaceDown
# 101 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 102 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_1, MSGBOX_DEFAULT
# 103 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_2, MSGBOX_DEFAULT
# 104 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 105 "data/maps/ParcelCorridor/scripts.pory"
	clearflag FLAG_TEMP_3
# 106 "data/maps/ParcelCorridor/scripts.pory"
	addobject 2
# 107 "data/maps/ParcelCorridor/scripts.pory"
	playse SE_PIN
# 108 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_3, MSGBOX_DEFAULT
# 109 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 2, Movement_COR_WooperTry
# 110 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 111 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_4, MSGBOX_DEFAULT
# 112 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_5, MSGBOX_DEFAULT
# 113 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 2, Movement_COR_WooperRetreat
# 114 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 115 "data/maps/ParcelCorridor/scripts.pory"
	removeobject 2
# 116 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_TEMP_3
# 117 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 9
# 118 "data/maps/ParcelCorridor/scripts.pory"
	special SkaldmereCertTaskMark
# 119 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 120 "data/maps/ParcelCorridor/scripts.pory"
	releaseall
	end

ParcelCorridor_CulvertScene_2:
# 94 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


ParcelCorridor_FarSide::
# 125 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 126 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_FarSide_Text_0, MSGBOX_DEFAULT
# 127 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


# 131 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_WooperTry:
# 131 "data/maps/ParcelCorridor/scripts.pory"
	face_left
# 131 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
# 131 "data/maps/ParcelCorridor/scripts.pory"
	walk_in_place_faster_left
# 131 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
# 131 "data/maps/ParcelCorridor/scripts.pory"
	face_down
# 131 "data/maps/ParcelCorridor/scripts.pory"
	delay_8
# 131 "data/maps/ParcelCorridor/scripts.pory"
	face_left
# 131 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
# 131 "data/maps/ParcelCorridor/scripts.pory"
	walk_in_place_faster_left
# 131 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
	step_end

# 132 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_WooperRetreat:
# 132 "data/maps/ParcelCorridor/scripts.pory"
	face_right
# 132 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
# 132 "data/maps/ParcelCorridor/scripts.pory"
	walk_right
	step_end

# 133 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_WorkerLeave:
# 133 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 133 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 133 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 133 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 133 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 133 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 133 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
	step_end

ParcelCorridor_Worker::
# 137 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 138 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 139 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCorridor_Worker_2
# 144 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 145 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 9
# 146 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 147 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Worker_5
# 152 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_2, MSGBOX_DEFAULT
# 153 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_3, MSGBOX_DEFAULT
# 154 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_4, MSGBOX_YESNO
# 155 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridor_Worker_8
# 158 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_6, MSGBOX_DEFAULT
ParcelCorridor_Worker_7:
# 160 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_7, MSGBOX_DEFAULT
# 161 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_8, MSGBOX_DEFAULT
# 162 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_9, MSGBOX_DEFAULT
# 163 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_10, MSGBOX_DEFAULT
# 164 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_11, MSGBOX_DEFAULT
# 165 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_12, MSGBOX_DEFAULT
# 166 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 167 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 1, Movement_COR_WorkerLeave
# 168 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 169 "data/maps/ParcelCorridor/scripts.pory"
	removeobject 1
# 170 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 10
# 171 "data/maps/ParcelCorridor/scripts.pory"
	special SkaldmereCertTaskMark
# 172 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_TEMP_2
# 173 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_13, MSGBOX_DEFAULT
# 174 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Worker_2:
# 140 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_0, MSGBOX_DEFAULT
# 141 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Worker_5:
# 148 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_1, MSGBOX_DEFAULT
# 149 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Worker_8:
# 156 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_5, MSGBOX_DEFAULT
	goto ParcelCorridor_Worker_7


ParcelCorridor_ObsStumps::
# 180 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsStumps_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsMoss::
# 184 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsMoss_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsDrainage::
# 188 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsDrainage_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsRoad::
# 192 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsRoad_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsCulvert::
# 196 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsCulvert_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignWest::
# 202 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignWest_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignCheckpoint::
# 206 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignCheckpoint_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignNorth::
# 210 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignNorth_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignAdit::
# 214 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignAdit_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ItemSuperPotion::
# 219 "data/maps/ParcelCorridor/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelCorridor_ItemRepel::
# 220 "data/maps/ParcelCorridor/scripts.pory"
	finditem ITEM_REPEL
	end


ParcelCorridor_ItemGreatBall::
# 221 "data/maps/ParcelCorridor/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelCorridor_Geir::
# 225 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_GEIR, ParcelCorridor_Geir_Text_0, ParcelCorridor_Geir_Text_1, ParcelCorridor_Geir_FirstWin
# 229 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 230 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Geir_3
ParcelCorridor_Geir_1:
# 233 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Geir_8
ParcelCorridor_Geir_6:
# 236 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Geir_13
ParcelCorridor_Geir_11:
# 239 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Geir_18
ParcelCorridor_Geir_16:
# 242 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Geir_2:
# 231 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Geir_R2
	goto ParcelCorridor_Geir_1

ParcelCorridor_Geir_3:
# 230 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GEIR_R2
	goto_if 0, ParcelCorridor_Geir_2
	goto ParcelCorridor_Geir_1

ParcelCorridor_Geir_7:
# 234 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Geir_R3
	goto ParcelCorridor_Geir_6

ParcelCorridor_Geir_8:
# 233 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GEIR_R3
	goto_if 0, ParcelCorridor_Geir_7
	goto ParcelCorridor_Geir_6

ParcelCorridor_Geir_12:
# 237 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Geir_R4
	goto ParcelCorridor_Geir_11

ParcelCorridor_Geir_13:
# 236 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GEIR_R4
	goto_if 0, ParcelCorridor_Geir_12
	goto ParcelCorridor_Geir_11

ParcelCorridor_Geir_17:
# 240 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Geir_R5
	goto ParcelCorridor_Geir_16

ParcelCorridor_Geir_18:
# 239 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GEIR_R5
	goto_if 0, ParcelCorridor_Geir_17
	goto ParcelCorridor_Geir_16


ParcelCorridor_Geir_FirstWin::
# 246 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_Text_2, MSGBOX_DEFAULT
# 247 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Geir_R2::
# 251 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 252 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 253 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_0, MSGBOX_YESNO
# 254 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Geir_R2_2
# 259 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GEIR_R2, ParcelCorridor_Geir_R2_Text_2
# 260 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_3, MSGBOX_DEFAULT
# 261 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Geir_R2_2:
# 255 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_1, MSGBOX_DEFAULT
# 256 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Geir_R3::
# 265 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 266 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 267 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R3_Text_0, MSGBOX_YESNO
# 268 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Geir_R3_2
# 273 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GEIR_R3, ParcelCorridor_Geir_R3_Text_1
# 274 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R3_Text_2, MSGBOX_DEFAULT
# 275 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Geir_R3_2:
# 269 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_1, MSGBOX_DEFAULT
# 270 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Geir_R4::
# 279 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 280 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 281 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R4_Text_0, MSGBOX_YESNO
# 282 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Geir_R4_2
# 287 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GEIR_R4, ParcelCorridor_Geir_R4_Text_1
# 288 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R4_Text_2, MSGBOX_DEFAULT
# 289 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Geir_R4_2:
# 283 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_1, MSGBOX_DEFAULT
# 284 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Geir_R5::
# 293 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 294 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 295 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R5_Text_0, MSGBOX_YESNO
# 296 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Geir_R5_2
# 301 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GEIR_R5, ParcelCorridor_Geir_R4_Text_1
# 302 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R5_Text_1, MSGBOX_DEFAULT
# 303 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Geir_R5_2:
# 297 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_1, MSGBOX_DEFAULT
# 298 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Per::
# 307 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_PER, ParcelCorridor_Per_Text_0, ParcelCorridor_Per_Text_1, ParcelCorridor_Per_FirstWin
# 311 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 312 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Per_3
ParcelCorridor_Per_1:
# 315 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Per_8
ParcelCorridor_Per_6:
# 318 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Per_13
ParcelCorridor_Per_11:
# 321 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Per_18
ParcelCorridor_Per_16:
# 324 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Per_2:
# 313 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Per_R2
	goto ParcelCorridor_Per_1

ParcelCorridor_Per_3:
# 312 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_PER_R2
	goto_if 0, ParcelCorridor_Per_2
	goto ParcelCorridor_Per_1

ParcelCorridor_Per_7:
# 316 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Per_R3
	goto ParcelCorridor_Per_6

ParcelCorridor_Per_8:
# 315 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_PER_R3
	goto_if 0, ParcelCorridor_Per_7
	goto ParcelCorridor_Per_6

ParcelCorridor_Per_12:
# 319 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Per_R4
	goto ParcelCorridor_Per_11

ParcelCorridor_Per_13:
# 318 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_PER_R4
	goto_if 0, ParcelCorridor_Per_12
	goto ParcelCorridor_Per_11

ParcelCorridor_Per_17:
# 322 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Per_R5
	goto ParcelCorridor_Per_16

ParcelCorridor_Per_18:
# 321 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_PER_R5
	goto_if 0, ParcelCorridor_Per_17
	goto ParcelCorridor_Per_16


ParcelCorridor_Per_FirstWin::
# 328 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_Text_2, MSGBOX_DEFAULT
# 329 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Per_R2::
# 333 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 334 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 335 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_0, MSGBOX_YESNO
# 336 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Per_R2_2
# 341 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_PER_R2, ParcelCorridor_Per_R2_Text_2
# 342 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_3, MSGBOX_DEFAULT
# 343 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Per_R2_2:
# 337 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_1, MSGBOX_DEFAULT
# 338 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Per_R3::
# 347 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 348 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 349 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R3_Text_0, MSGBOX_YESNO
# 350 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Per_R3_2
# 355 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_PER_R3, ParcelCorridor_Per_R3_Text_1
# 356 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R3_Text_2, MSGBOX_DEFAULT
# 357 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Per_R3_2:
# 351 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_1, MSGBOX_DEFAULT
# 352 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Per_R4::
# 361 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 362 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 363 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R4_Text_0, MSGBOX_YESNO
# 364 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Per_R4_2
# 369 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_PER_R4, ParcelCorridor_Per_R4_Text_1
# 370 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R4_Text_2, MSGBOX_DEFAULT
# 371 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Per_R4_2:
# 365 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_1, MSGBOX_DEFAULT
# 366 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Per_R5::
# 375 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 376 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 377 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R5_Text_0, MSGBOX_YESNO
# 378 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Per_R5_2
# 383 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_PER_R5, ParcelCorridor_Per_R5_Text_1
# 384 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R5_Text_2, MSGBOX_DEFAULT
# 385 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Per_R5_2:
# 379 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_1, MSGBOX_DEFAULT
# 380 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Rune::
# 389 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_RUNE, ParcelCorridor_Rune_Text_0, ParcelCorridor_Rune_Text_1, ParcelCorridor_Rune_FirstWin
# 393 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 394 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Rune_3
ParcelCorridor_Rune_1:
# 397 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Rune_8
ParcelCorridor_Rune_6:
# 400 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Rune_13
ParcelCorridor_Rune_11:
# 403 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Rune_18
ParcelCorridor_Rune_16:
# 406 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Rune_2:
# 395 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Rune_R2
	goto ParcelCorridor_Rune_1

ParcelCorridor_Rune_3:
# 394 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_RUNE_R2
	goto_if 0, ParcelCorridor_Rune_2
	goto ParcelCorridor_Rune_1

ParcelCorridor_Rune_7:
# 398 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Rune_R3
	goto ParcelCorridor_Rune_6

ParcelCorridor_Rune_8:
# 397 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_RUNE_R3
	goto_if 0, ParcelCorridor_Rune_7
	goto ParcelCorridor_Rune_6

ParcelCorridor_Rune_12:
# 401 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Rune_R4
	goto ParcelCorridor_Rune_11

ParcelCorridor_Rune_13:
# 400 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_RUNE_R4
	goto_if 0, ParcelCorridor_Rune_12
	goto ParcelCorridor_Rune_11

ParcelCorridor_Rune_17:
# 404 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Rune_R5
	goto ParcelCorridor_Rune_16

ParcelCorridor_Rune_18:
# 403 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_RUNE_R5
	goto_if 0, ParcelCorridor_Rune_17
	goto ParcelCorridor_Rune_16


ParcelCorridor_Rune_FirstWin::
# 410 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_Text_2, MSGBOX_DEFAULT
# 411 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Rune_R2::
# 415 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 416 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 417 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_0, MSGBOX_YESNO
# 418 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Rune_R2_2
# 423 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_RUNE_R2, ParcelCorridor_Rune_R2_Text_2
# 424 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_3, MSGBOX_DEFAULT
# 425 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Rune_R2_2:
# 419 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_1, MSGBOX_DEFAULT
# 420 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Rune_R3::
# 429 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 430 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 431 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R3_Text_0, MSGBOX_YESNO
# 432 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Rune_R3_2
# 437 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_RUNE_R3, ParcelCorridor_Rune_R3_Text_1
# 438 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R3_Text_2, MSGBOX_DEFAULT
# 439 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Rune_R3_2:
# 433 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_1, MSGBOX_DEFAULT
# 434 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Rune_R4::
# 443 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 444 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 445 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R4_Text_0, MSGBOX_YESNO
# 446 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Rune_R4_2
# 451 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_RUNE_R4, ParcelCorridor_Rune_R3_Text_1
# 452 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R4_Text_1, MSGBOX_DEFAULT
# 453 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Rune_R4_2:
# 447 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_1, MSGBOX_DEFAULT
# 448 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Rune_R5::
# 457 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 458 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 459 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R5_Text_0, MSGBOX_YESNO
# 460 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Rune_R5_2
# 465 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_RUNE_R5, ParcelCorridor_Rune_R5_Text_1
# 466 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R5_Text_2, MSGBOX_DEFAULT
# 467 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Rune_R5_2:
# 461 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_1, MSGBOX_DEFAULT
# 462 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Else::
# 471 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_ELSE, ParcelCorridor_Else_Text_0, ParcelCorridor_Else_Text_1, ParcelCorridor_Else_FirstWin
# 475 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 476 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Else_3
ParcelCorridor_Else_1:
# 479 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Else_8
ParcelCorridor_Else_6:
# 482 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Else_13
ParcelCorridor_Else_11:
# 485 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Else_18
ParcelCorridor_Else_16:
# 488 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Else_2:
# 477 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Else_R2
	goto ParcelCorridor_Else_1

ParcelCorridor_Else_3:
# 476 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELSE_R2
	goto_if 0, ParcelCorridor_Else_2
	goto ParcelCorridor_Else_1

ParcelCorridor_Else_7:
# 480 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Else_R3
	goto ParcelCorridor_Else_6

ParcelCorridor_Else_8:
# 479 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELSE_R3
	goto_if 0, ParcelCorridor_Else_7
	goto ParcelCorridor_Else_6

ParcelCorridor_Else_12:
# 483 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Else_R4
	goto ParcelCorridor_Else_11

ParcelCorridor_Else_13:
# 482 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELSE_R4
	goto_if 0, ParcelCorridor_Else_12
	goto ParcelCorridor_Else_11

ParcelCorridor_Else_17:
# 486 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Else_R5
	goto ParcelCorridor_Else_16

ParcelCorridor_Else_18:
# 485 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELSE_R5
	goto_if 0, ParcelCorridor_Else_17
	goto ParcelCorridor_Else_16


ParcelCorridor_Else_FirstWin::
# 492 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_Text_2, MSGBOX_DEFAULT
# 493 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Else_R2::
# 497 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 498 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 499 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_0, MSGBOX_YESNO
# 500 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Else_R2_2
# 505 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELSE_R2, ParcelCorridor_Else_R2_Text_2
# 506 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_3, MSGBOX_DEFAULT
# 507 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Else_R2_2:
# 501 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_1, MSGBOX_DEFAULT
# 502 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Else_R3::
# 511 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 512 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 513 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R3_Text_0, MSGBOX_YESNO
# 514 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Else_R3_2
# 519 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELSE_R3, ParcelCorridor_Else_R2_Text_2
# 520 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R3_Text_1, MSGBOX_DEFAULT
# 521 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Else_R3_2:
# 515 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_1, MSGBOX_DEFAULT
# 516 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Else_R4::
# 525 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 526 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 527 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R4_Text_0, MSGBOX_YESNO
# 528 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Else_R4_2
# 533 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELSE_R4, ParcelCorridor_Else_R4_Text_1
# 534 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R4_Text_2, MSGBOX_DEFAULT
# 535 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Else_R4_2:
# 529 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_1, MSGBOX_DEFAULT
# 530 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Else_R5::
# 539 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 540 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 541 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R5_Text_0, MSGBOX_YESNO
# 542 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Else_R5_2
# 547 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELSE_R5, ParcelCorridor_Else_R2_Text_2
# 548 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R5_Text_1, MSGBOX_DEFAULT
# 549 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Else_R5_2:
# 543 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_1, MSGBOX_DEFAULT
# 544 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Ulf::
# 553 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_ULF, ParcelCorridor_Ulf_Text_0, ParcelCorridor_Ulf_Text_1, ParcelCorridor_Ulf_FirstWin
# 557 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 558 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Ulf_3
ParcelCorridor_Ulf_1:
# 561 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Ulf_8
ParcelCorridor_Ulf_6:
# 564 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Ulf_13
ParcelCorridor_Ulf_11:
# 567 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Ulf_18
ParcelCorridor_Ulf_16:
# 570 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Ulf_2:
# 559 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Ulf_R2
	goto ParcelCorridor_Ulf_1

ParcelCorridor_Ulf_3:
# 558 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ULF_R2
	goto_if 0, ParcelCorridor_Ulf_2
	goto ParcelCorridor_Ulf_1

ParcelCorridor_Ulf_7:
# 562 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Ulf_R3
	goto ParcelCorridor_Ulf_6

ParcelCorridor_Ulf_8:
# 561 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ULF_R3
	goto_if 0, ParcelCorridor_Ulf_7
	goto ParcelCorridor_Ulf_6

ParcelCorridor_Ulf_12:
# 565 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Ulf_R4
	goto ParcelCorridor_Ulf_11

ParcelCorridor_Ulf_13:
# 564 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ULF_R4
	goto_if 0, ParcelCorridor_Ulf_12
	goto ParcelCorridor_Ulf_11

ParcelCorridor_Ulf_17:
# 568 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Ulf_R5
	goto ParcelCorridor_Ulf_16

ParcelCorridor_Ulf_18:
# 567 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ULF_R5
	goto_if 0, ParcelCorridor_Ulf_17
	goto ParcelCorridor_Ulf_16


ParcelCorridor_Ulf_FirstWin::
# 574 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_Text_2, MSGBOX_DEFAULT
# 575 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Ulf_R2::
# 579 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 580 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 581 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_0, MSGBOX_YESNO
# 582 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Ulf_R2_2
# 587 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ULF_R2, ParcelCorridor_Ulf_R2_Text_2
# 588 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_3, MSGBOX_DEFAULT
# 589 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Ulf_R2_2:
# 583 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_1, MSGBOX_DEFAULT
# 584 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Ulf_R3::
# 593 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 594 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 595 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R3_Text_0, MSGBOX_YESNO
# 596 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Ulf_R3_2
# 601 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ULF_R3, ParcelCorridor_Ulf_R2_Text_2
# 602 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R3_Text_1, MSGBOX_DEFAULT
# 603 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Ulf_R3_2:
# 597 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_1, MSGBOX_DEFAULT
# 598 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Ulf_R4::
# 607 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 608 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 609 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R4_Text_0, MSGBOX_YESNO
# 610 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Ulf_R4_2
# 615 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ULF_R4, ParcelCorridor_Ulf_R4_Text_1
# 616 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R4_Text_2, MSGBOX_DEFAULT
# 617 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Ulf_R4_2:
# 611 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_1, MSGBOX_DEFAULT
# 612 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Ulf_R5::
# 621 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 622 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 623 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R5_Text_0, MSGBOX_YESNO
# 624 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Ulf_R5_2
# 629 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ULF_R5, ParcelCorridor_Ulf_R5_Text_1
# 630 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R5_Text_2, MSGBOX_DEFAULT
# 631 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Ulf_R5_2:
# 625 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_1, MSGBOX_DEFAULT
# 626 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Gro::
# 635 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_GRO, ParcelCorridor_Gro_Text_0, ParcelCorridor_Gro_Text_1, ParcelCorridor_Gro_FirstWin
# 639 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 640 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Gro_3
ParcelCorridor_Gro_1:
# 643 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Gro_8
ParcelCorridor_Gro_6:
# 646 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Gro_13
ParcelCorridor_Gro_11:
# 649 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Gro_18
ParcelCorridor_Gro_16:
# 652 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Gro_2:
# 641 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Gro_R2
	goto ParcelCorridor_Gro_1

ParcelCorridor_Gro_3:
# 640 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GRO_R2
	goto_if 0, ParcelCorridor_Gro_2
	goto ParcelCorridor_Gro_1

ParcelCorridor_Gro_7:
# 644 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Gro_R3
	goto ParcelCorridor_Gro_6

ParcelCorridor_Gro_8:
# 643 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GRO_R3
	goto_if 0, ParcelCorridor_Gro_7
	goto ParcelCorridor_Gro_6

ParcelCorridor_Gro_12:
# 647 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Gro_R4
	goto ParcelCorridor_Gro_11

ParcelCorridor_Gro_13:
# 646 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GRO_R4
	goto_if 0, ParcelCorridor_Gro_12
	goto ParcelCorridor_Gro_11

ParcelCorridor_Gro_17:
# 650 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Gro_R5
	goto ParcelCorridor_Gro_16

ParcelCorridor_Gro_18:
# 649 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GRO_R5
	goto_if 0, ParcelCorridor_Gro_17
	goto ParcelCorridor_Gro_16


ParcelCorridor_Gro_FirstWin::
# 656 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_Text_2, MSGBOX_DEFAULT
# 657 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Gro_R2::
# 661 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 662 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 663 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_0, MSGBOX_YESNO
# 664 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Gro_R2_2
# 669 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GRO_R2, ParcelCorridor_Gro_R2_Text_2
# 670 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_3, MSGBOX_DEFAULT
# 671 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Gro_R2_2:
# 665 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_1, MSGBOX_DEFAULT
# 666 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Gro_R3::
# 675 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 676 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 677 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R3_Text_0, MSGBOX_YESNO
# 678 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Gro_R3_2
# 683 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GRO_R3, ParcelCorridor_Gro_R3_Text_1
# 684 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R3_Text_2, MSGBOX_DEFAULT
# 685 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Gro_R3_2:
# 679 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_1, MSGBOX_DEFAULT
# 680 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Gro_R4::
# 689 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 690 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 691 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R4_Text_0, MSGBOX_YESNO
# 692 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Gro_R4_2
# 697 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GRO_R4, ParcelCorridor_Gro_R2_Text_2
# 698 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R4_Text_1, MSGBOX_DEFAULT
# 699 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Gro_R4_2:
# 693 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_1, MSGBOX_DEFAULT
# 694 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Gro_R5::
# 703 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 704 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 705 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R5_Text_0, MSGBOX_YESNO
# 706 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Gro_R5_2
# 711 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GRO_R5, ParcelCorridor_Gro_R5_Text_1
# 712 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R5_Text_2, MSGBOX_DEFAULT
# 713 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Gro_R5_2:
# 707 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_1, MSGBOX_DEFAULT
# 708 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Knut::
# 717 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_KNUT, ParcelCorridor_Knut_Text_0, ParcelCorridor_Knut_Text_1, ParcelCorridor_Knut_FirstWin
# 721 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 722 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Knut_3
ParcelCorridor_Knut_1:
# 725 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Knut_8
ParcelCorridor_Knut_6:
# 728 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Knut_13
ParcelCorridor_Knut_11:
# 731 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Knut_18
ParcelCorridor_Knut_16:
# 734 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Knut_2:
# 723 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Knut_R2
	goto ParcelCorridor_Knut_1

ParcelCorridor_Knut_3:
# 722 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_KNUT_R2
	goto_if 0, ParcelCorridor_Knut_2
	goto ParcelCorridor_Knut_1

ParcelCorridor_Knut_7:
# 726 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Knut_R3
	goto ParcelCorridor_Knut_6

ParcelCorridor_Knut_8:
# 725 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_KNUT_R3
	goto_if 0, ParcelCorridor_Knut_7
	goto ParcelCorridor_Knut_6

ParcelCorridor_Knut_12:
# 729 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Knut_R4
	goto ParcelCorridor_Knut_11

ParcelCorridor_Knut_13:
# 728 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_KNUT_R4
	goto_if 0, ParcelCorridor_Knut_12
	goto ParcelCorridor_Knut_11

ParcelCorridor_Knut_17:
# 732 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Knut_R5
	goto ParcelCorridor_Knut_16

ParcelCorridor_Knut_18:
# 731 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_KNUT_R5
	goto_if 0, ParcelCorridor_Knut_17
	goto ParcelCorridor_Knut_16


ParcelCorridor_Knut_FirstWin::
# 738 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_Text_2, MSGBOX_DEFAULT
# 739 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Knut_R2::
# 743 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 744 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 745 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_0, MSGBOX_YESNO
# 746 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Knut_R2_2
# 751 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_KNUT_R2, ParcelCorridor_Knut_R2_Text_2
# 752 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_3, MSGBOX_DEFAULT
# 753 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Knut_R2_2:
# 747 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_1, MSGBOX_DEFAULT
# 748 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Knut_R3::
# 757 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 758 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 759 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R3_Text_0, MSGBOX_YESNO
# 760 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Knut_R3_2
# 765 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_KNUT_R3, ParcelCorridor_Knut_R2_Text_2
# 766 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R3_Text_1, MSGBOX_DEFAULT
# 767 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Knut_R3_2:
# 761 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_1, MSGBOX_DEFAULT
# 762 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Knut_R4::
# 771 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 772 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 773 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R4_Text_0, MSGBOX_YESNO
# 774 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Knut_R4_2
# 779 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_KNUT_R4, ParcelCorridor_Knut_R2_Text_2
# 780 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R4_Text_1, MSGBOX_DEFAULT
# 781 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Knut_R4_2:
# 775 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_1, MSGBOX_DEFAULT
# 776 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Knut_R5::
# 785 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 786 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 787 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R5_Text_0, MSGBOX_YESNO
# 788 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Knut_R5_2
# 793 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_KNUT_R5, ParcelCorridor_Knut_R5_Text_1
# 794 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R5_Text_2, MSGBOX_DEFAULT
# 795 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Knut_R5_2:
# 789 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_1, MSGBOX_DEFAULT
# 790 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Dag::
# 799 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_DAG, ParcelCorridor_Dag_Text_0, ParcelCorridor_Dag_Text_1, ParcelCorridor_Dag_FirstWin
# 803 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 804 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Dag_3
ParcelCorridor_Dag_1:
# 807 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Dag_8
ParcelCorridor_Dag_6:
# 810 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Dag_13
ParcelCorridor_Dag_11:
# 813 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Dag_18
ParcelCorridor_Dag_16:
# 816 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Dag_2:
# 805 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Dag_R2
	goto ParcelCorridor_Dag_1

ParcelCorridor_Dag_3:
# 804 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_DAG_R2
	goto_if 0, ParcelCorridor_Dag_2
	goto ParcelCorridor_Dag_1

ParcelCorridor_Dag_7:
# 808 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Dag_R3
	goto ParcelCorridor_Dag_6

ParcelCorridor_Dag_8:
# 807 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_DAG_R3
	goto_if 0, ParcelCorridor_Dag_7
	goto ParcelCorridor_Dag_6

ParcelCorridor_Dag_12:
# 811 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Dag_R4
	goto ParcelCorridor_Dag_11

ParcelCorridor_Dag_13:
# 810 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_DAG_R4
	goto_if 0, ParcelCorridor_Dag_12
	goto ParcelCorridor_Dag_11

ParcelCorridor_Dag_17:
# 814 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Dag_R5
	goto ParcelCorridor_Dag_16

ParcelCorridor_Dag_18:
# 813 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_DAG_R5
	goto_if 0, ParcelCorridor_Dag_17
	goto ParcelCorridor_Dag_16


ParcelCorridor_Dag_FirstWin::
# 820 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_Text_2, MSGBOX_DEFAULT
# 821 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Dag_R2::
# 825 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 826 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 827 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_0, MSGBOX_YESNO
# 828 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Dag_R2_2
# 833 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_DAG_R2, ParcelCorridor_Dag_R2_Text_2
# 834 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_3, MSGBOX_DEFAULT
# 835 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Dag_R2_2:
# 829 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_1, MSGBOX_DEFAULT
# 830 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Dag_R3::
# 839 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 840 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 841 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R3_Text_0, MSGBOX_YESNO
# 842 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Dag_R3_2
# 847 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_DAG_R3, ParcelCorridor_Dag_R2_Text_2
# 848 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R3_Text_1, MSGBOX_DEFAULT
# 849 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Dag_R3_2:
# 843 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_1, MSGBOX_DEFAULT
# 844 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Dag_R4::
# 853 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 854 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 855 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R4_Text_0, MSGBOX_YESNO
# 856 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Dag_R4_2
# 861 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_DAG_R4, ParcelCorridor_Dag_R4_Text_1
# 862 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R4_Text_2, MSGBOX_DEFAULT
# 863 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Dag_R4_2:
# 857 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_1, MSGBOX_DEFAULT
# 858 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Dag_R5::
# 867 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 868 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 869 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R5_Text_0, MSGBOX_YESNO
# 870 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Dag_R5_2
# 875 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_DAG_R5, ParcelCorridor_Dag_R5_Text_1
# 876 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R5_Text_2, MSGBOX_DEFAULT
# 877 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Dag_R5_2:
# 871 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_1, MSGBOX_DEFAULT
# 872 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Arne::
# 881 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_ARNE, ParcelCorridor_Arne_Text_0, ParcelCorridor_Arne_Text_1, ParcelCorridor_Arne_FirstWin
# 885 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 886 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Arne_3
ParcelCorridor_Arne_1:
# 889 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Arne_8
ParcelCorridor_Arne_6:
# 892 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Arne_13
ParcelCorridor_Arne_11:
# 895 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Arne_18
ParcelCorridor_Arne_16:
# 898 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Arne_2:
# 887 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Arne_R2
	goto ParcelCorridor_Arne_1

ParcelCorridor_Arne_3:
# 886 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ARNE_R2
	goto_if 0, ParcelCorridor_Arne_2
	goto ParcelCorridor_Arne_1

ParcelCorridor_Arne_7:
# 890 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Arne_R3
	goto ParcelCorridor_Arne_6

ParcelCorridor_Arne_8:
# 889 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ARNE_R3
	goto_if 0, ParcelCorridor_Arne_7
	goto ParcelCorridor_Arne_6

ParcelCorridor_Arne_12:
# 893 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Arne_R4
	goto ParcelCorridor_Arne_11

ParcelCorridor_Arne_13:
# 892 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ARNE_R4
	goto_if 0, ParcelCorridor_Arne_12
	goto ParcelCorridor_Arne_11

ParcelCorridor_Arne_17:
# 896 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Arne_R5
	goto ParcelCorridor_Arne_16

ParcelCorridor_Arne_18:
# 895 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ARNE_R5
	goto_if 0, ParcelCorridor_Arne_17
	goto ParcelCorridor_Arne_16


ParcelCorridor_Arne_FirstWin::
# 902 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_Text_2, MSGBOX_DEFAULT
# 903 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Arne_R2::
# 907 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 908 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 909 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_0, MSGBOX_YESNO
# 910 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Arne_R2_2
# 915 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ARNE_R2, ParcelCorridor_Arne_R2_Text_2
# 916 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_3, MSGBOX_DEFAULT
# 917 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Arne_R2_2:
# 911 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_1, MSGBOX_DEFAULT
# 912 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Arne_R3::
# 921 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 922 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 923 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R3_Text_0, MSGBOX_YESNO
# 924 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Arne_R3_2
# 929 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ARNE_R3, ParcelCorridor_Arne_R3_Text_1
# 930 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R3_Text_2, MSGBOX_DEFAULT
# 931 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Arne_R3_2:
# 925 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_1, MSGBOX_DEFAULT
# 926 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Arne_R4::
# 935 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 936 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 937 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R4_Text_0, MSGBOX_YESNO
# 938 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Arne_R4_2
# 943 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ARNE_R4, ParcelCorridor_Arne_R4_Text_1
# 944 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R4_Text_2, MSGBOX_DEFAULT
# 945 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Arne_R4_2:
# 939 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_1, MSGBOX_DEFAULT
# 940 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Arne_R5::
# 949 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 950 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 951 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R5_Text_0, MSGBOX_YESNO
# 952 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Arne_R5_2
# 957 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ARNE_R5, ParcelCorridor_Arne_R5_Text_1
# 958 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R5_Text_2, MSGBOX_DEFAULT
# 959 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Arne_R5_2:
# 953 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_1, MSGBOX_DEFAULT
# 954 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Sven::
# 963 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_SVEN, ParcelCorridor_Sven_Text_0, ParcelCorridor_Sven_Text_1, ParcelCorridor_Sven_FirstWin
# 967 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 968 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Sven_3
ParcelCorridor_Sven_1:
# 971 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Sven_8
ParcelCorridor_Sven_6:
# 974 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Sven_13
ParcelCorridor_Sven_11:
# 977 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Sven_18
ParcelCorridor_Sven_16:
# 980 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Sven_2:
# 969 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Sven_R2
	goto ParcelCorridor_Sven_1

ParcelCorridor_Sven_3:
# 968 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_SVEN_R2
	goto_if 0, ParcelCorridor_Sven_2
	goto ParcelCorridor_Sven_1

ParcelCorridor_Sven_7:
# 972 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Sven_R3
	goto ParcelCorridor_Sven_6

ParcelCorridor_Sven_8:
# 971 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_SVEN_R3
	goto_if 0, ParcelCorridor_Sven_7
	goto ParcelCorridor_Sven_6

ParcelCorridor_Sven_12:
# 975 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Sven_R4
	goto ParcelCorridor_Sven_11

ParcelCorridor_Sven_13:
# 974 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_SVEN_R4
	goto_if 0, ParcelCorridor_Sven_12
	goto ParcelCorridor_Sven_11

ParcelCorridor_Sven_17:
# 978 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Sven_R5
	goto ParcelCorridor_Sven_16

ParcelCorridor_Sven_18:
# 977 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_SVEN_R5
	goto_if 0, ParcelCorridor_Sven_17
	goto ParcelCorridor_Sven_16


ParcelCorridor_Sven_FirstWin::
# 984 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_Text_2, MSGBOX_DEFAULT
# 985 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Sven_R2::
# 989 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 990 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 991 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_0, MSGBOX_YESNO
# 992 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Sven_R2_2
# 997 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_SVEN_R2, ParcelCorridor_Sven_R2_Text_2
# 998 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_3, MSGBOX_DEFAULT
# 999 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Sven_R2_2:
# 993 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_1, MSGBOX_DEFAULT
# 994 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Sven_R3::
# 1003 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1004 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1005 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R3_Text_0, MSGBOX_YESNO
# 1006 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Sven_R3_2
# 1011 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_SVEN_R3, ParcelCorridor_Sven_R3_Text_1
# 1012 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R3_Text_2, MSGBOX_DEFAULT
# 1013 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Sven_R3_2:
# 1007 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_1, MSGBOX_DEFAULT
# 1008 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Sven_R4::
# 1017 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1018 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1019 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R4_Text_0, MSGBOX_YESNO
# 1020 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Sven_R4_2
# 1025 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_SVEN_R4, ParcelCorridor_Sven_R4_Text_1
# 1026 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R4_Text_2, MSGBOX_DEFAULT
# 1027 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Sven_R4_2:
# 1021 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_1, MSGBOX_DEFAULT
# 1022 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Sven_R5::
# 1031 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1032 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1033 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R5_Text_0, MSGBOX_YESNO
# 1034 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Sven_R5_2
# 1039 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_SVEN_R5, ParcelCorridor_Sven_R5_Text_1
# 1040 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R5_Text_2, MSGBOX_DEFAULT
# 1041 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Sven_R5_2:
# 1035 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_1, MSGBOX_DEFAULT
# 1036 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Olav::
# 1045 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_OLAV, ParcelCorridor_Olav_Text_0, ParcelCorridor_Olav_Text_1, ParcelCorridor_Olav_FirstWin
# 1049 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1050 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Olav_3
ParcelCorridor_Olav_1:
# 1053 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Olav_8
ParcelCorridor_Olav_6:
# 1056 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Olav_13
ParcelCorridor_Olav_11:
# 1059 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Olav_18
ParcelCorridor_Olav_16:
# 1062 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Olav_2:
# 1051 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Olav_R2
	goto ParcelCorridor_Olav_1

ParcelCorridor_Olav_3:
# 1050 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_OLAV_R2
	goto_if 0, ParcelCorridor_Olav_2
	goto ParcelCorridor_Olav_1

ParcelCorridor_Olav_7:
# 1054 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Olav_R3
	goto ParcelCorridor_Olav_6

ParcelCorridor_Olav_8:
# 1053 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_OLAV_R3
	goto_if 0, ParcelCorridor_Olav_7
	goto ParcelCorridor_Olav_6

ParcelCorridor_Olav_12:
# 1057 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Olav_R4
	goto ParcelCorridor_Olav_11

ParcelCorridor_Olav_13:
# 1056 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_OLAV_R4
	goto_if 0, ParcelCorridor_Olav_12
	goto ParcelCorridor_Olav_11

ParcelCorridor_Olav_17:
# 1060 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Olav_R5
	goto ParcelCorridor_Olav_16

ParcelCorridor_Olav_18:
# 1059 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_OLAV_R5
	goto_if 0, ParcelCorridor_Olav_17
	goto ParcelCorridor_Olav_16


ParcelCorridor_Olav_FirstWin::
# 1066 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_Text_2, MSGBOX_DEFAULT
# 1067 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Olav_R2::
# 1071 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1072 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1073 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_0, MSGBOX_YESNO
# 1074 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Olav_R2_2
# 1079 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_OLAV_R2, ParcelCorridor_Olav_R2_Text_2
# 1080 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_3, MSGBOX_DEFAULT
# 1081 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Olav_R2_2:
# 1075 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_1, MSGBOX_DEFAULT
# 1076 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Olav_R3::
# 1085 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1086 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1087 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R3_Text_0, MSGBOX_YESNO
# 1088 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Olav_R3_2
# 1093 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_OLAV_R3, ParcelCorridor_Olav_R3_Text_1
# 1094 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R3_Text_2, MSGBOX_DEFAULT
# 1095 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Olav_R3_2:
# 1089 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_1, MSGBOX_DEFAULT
# 1090 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Olav_R4::
# 1099 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1100 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1101 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R4_Text_0, MSGBOX_YESNO
# 1102 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Olav_R4_2
# 1107 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_OLAV_R4, ParcelCorridor_Olav_R2_Text_2
# 1108 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R4_Text_1, MSGBOX_DEFAULT
# 1109 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Olav_R4_2:
# 1103 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_1, MSGBOX_DEFAULT
# 1104 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Olav_R5::
# 1113 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1114 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1115 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R5_Text_0, MSGBOX_YESNO
# 1116 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Olav_R5_2
# 1121 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_OLAV_R5, ParcelCorridor_Olav_R2_Text_2
# 1122 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R5_Text_1, MSGBOX_DEFAULT
# 1123 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Olav_R5_2:
# 1117 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_1, MSGBOX_DEFAULT
# 1118 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Inga::
# 1127 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_INGA, ParcelCorridor_Inga_Text_0, ParcelCorridor_Inga_Text_1, ParcelCorridor_Inga_FirstWin
# 1131 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1132 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Inga_3
ParcelCorridor_Inga_1:
# 1135 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Inga_8
ParcelCorridor_Inga_6:
# 1138 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Inga_13
ParcelCorridor_Inga_11:
# 1141 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Inga_18
ParcelCorridor_Inga_16:
# 1144 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Inga_2:
# 1133 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Inga_R2
	goto ParcelCorridor_Inga_1

ParcelCorridor_Inga_3:
# 1132 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_INGA_R2
	goto_if 0, ParcelCorridor_Inga_2
	goto ParcelCorridor_Inga_1

ParcelCorridor_Inga_7:
# 1136 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Inga_R3
	goto ParcelCorridor_Inga_6

ParcelCorridor_Inga_8:
# 1135 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_INGA_R3
	goto_if 0, ParcelCorridor_Inga_7
	goto ParcelCorridor_Inga_6

ParcelCorridor_Inga_12:
# 1139 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Inga_R4
	goto ParcelCorridor_Inga_11

ParcelCorridor_Inga_13:
# 1138 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_INGA_R4
	goto_if 0, ParcelCorridor_Inga_12
	goto ParcelCorridor_Inga_11

ParcelCorridor_Inga_17:
# 1142 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Inga_R5
	goto ParcelCorridor_Inga_16

ParcelCorridor_Inga_18:
# 1141 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_INGA_R5
	goto_if 0, ParcelCorridor_Inga_17
	goto ParcelCorridor_Inga_16


ParcelCorridor_Inga_FirstWin::
# 1148 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_Text_2, MSGBOX_DEFAULT
# 1149 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Inga_R2::
# 1153 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1154 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1155 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_0, MSGBOX_YESNO
# 1156 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Inga_R2_2
# 1161 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_INGA_R2, ParcelCorridor_Inga_R2_Text_2
# 1162 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_3, MSGBOX_DEFAULT
# 1163 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Inga_R2_2:
# 1157 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_1, MSGBOX_DEFAULT
# 1158 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Inga_R3::
# 1167 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1168 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1169 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R3_Text_0, MSGBOX_YESNO
# 1170 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Inga_R3_2
# 1175 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_INGA_R3, ParcelCorridor_Inga_R2_Text_2
# 1176 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R3_Text_1, MSGBOX_DEFAULT
# 1177 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Inga_R3_2:
# 1171 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_1, MSGBOX_DEFAULT
# 1172 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Inga_R4::
# 1181 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1182 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1183 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R4_Text_0, MSGBOX_YESNO
# 1184 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Inga_R4_2
# 1189 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_INGA_R4, ParcelCorridor_Inga_R4_Text_1
# 1190 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R4_Text_2, MSGBOX_DEFAULT
# 1191 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Inga_R4_2:
# 1185 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_1, MSGBOX_DEFAULT
# 1186 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Inga_R5::
# 1195 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1196 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1197 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R5_Text_0, MSGBOX_YESNO
# 1198 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Inga_R5_2
# 1203 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_INGA_R5, ParcelCorridor_Inga_R5_Text_1
# 1204 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R5_Text_2, MSGBOX_DEFAULT
# 1205 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Inga_R5_2:
# 1199 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_1, MSGBOX_DEFAULT
# 1200 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Turid::
# 1209 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_TURID, ParcelCorridor_Turid_Text_0, ParcelCorridor_Turid_Text_1, ParcelCorridor_Turid_FirstWin
# 1213 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1214 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Turid_3
ParcelCorridor_Turid_1:
# 1217 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Turid_8
ParcelCorridor_Turid_6:
# 1220 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Turid_13
ParcelCorridor_Turid_11:
# 1223 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Turid_18
ParcelCorridor_Turid_16:
# 1226 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Turid_2:
# 1215 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Turid_R2
	goto ParcelCorridor_Turid_1

ParcelCorridor_Turid_3:
# 1214 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_TURID_R2
	goto_if 0, ParcelCorridor_Turid_2
	goto ParcelCorridor_Turid_1

ParcelCorridor_Turid_7:
# 1218 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Turid_R3
	goto ParcelCorridor_Turid_6

ParcelCorridor_Turid_8:
# 1217 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_TURID_R3
	goto_if 0, ParcelCorridor_Turid_7
	goto ParcelCorridor_Turid_6

ParcelCorridor_Turid_12:
# 1221 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Turid_R4
	goto ParcelCorridor_Turid_11

ParcelCorridor_Turid_13:
# 1220 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_TURID_R4
	goto_if 0, ParcelCorridor_Turid_12
	goto ParcelCorridor_Turid_11

ParcelCorridor_Turid_17:
# 1224 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Turid_R5
	goto ParcelCorridor_Turid_16

ParcelCorridor_Turid_18:
# 1223 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_TURID_R5
	goto_if 0, ParcelCorridor_Turid_17
	goto ParcelCorridor_Turid_16


ParcelCorridor_Turid_FirstWin::
# 1230 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_Text_2, MSGBOX_DEFAULT
# 1231 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Turid_R2::
# 1235 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1236 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1237 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_0, MSGBOX_YESNO
# 1238 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Turid_R2_2
# 1243 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_TURID_R2, ParcelCorridor_Turid_R2_Text_2
# 1244 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_3, MSGBOX_DEFAULT
# 1245 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Turid_R2_2:
# 1239 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_1, MSGBOX_DEFAULT
# 1240 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Turid_R3::
# 1249 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1250 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1251 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R3_Text_0, MSGBOX_YESNO
# 1252 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Turid_R3_2
# 1257 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_TURID_R3, ParcelCorridor_Turid_R3_Text_1
# 1258 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R3_Text_2, MSGBOX_DEFAULT
# 1259 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Turid_R3_2:
# 1253 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_1, MSGBOX_DEFAULT
# 1254 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Turid_R4::
# 1263 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1264 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1265 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R4_Text_0, MSGBOX_YESNO
# 1266 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Turid_R4_2
# 1271 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_TURID_R4, ParcelCorridor_Turid_R4_Text_1
# 1272 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R4_Text_2, MSGBOX_DEFAULT
# 1273 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Turid_R4_2:
# 1267 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_1, MSGBOX_DEFAULT
# 1268 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Turid_R5::
# 1277 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1278 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1279 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R5_Text_0, MSGBOX_YESNO
# 1280 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Turid_R5_2
# 1285 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_TURID_R5, ParcelCorridor_Turid_R5_Text_1
# 1286 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R5_Text_2, MSGBOX_DEFAULT
# 1287 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Turid_R5_2:
# 1281 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_1, MSGBOX_DEFAULT
# 1282 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Vidar::
# 1293 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_VIDAR, ParcelCorridor_T_Vidar_Text_0, ParcelCorridor_T_Vidar_Text_1, ParcelCorridor_T_Vidar_FirstWin
# 1297 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1298 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_T_Vidar_3
ParcelCorridor_T_Vidar_1:
# 1301 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_T_Vidar_8
ParcelCorridor_T_Vidar_6:
# 1304 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_T_Vidar_13
ParcelCorridor_T_Vidar_11:
# 1307 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_T_Vidar_18
ParcelCorridor_T_Vidar_16:
# 1310 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_T_Vidar_2:
# 1299 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Vidar_R2
	goto ParcelCorridor_T_Vidar_1

ParcelCorridor_T_Vidar_3:
# 1298 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_VIDAR_R2
	goto_if 0, ParcelCorridor_T_Vidar_2
	goto ParcelCorridor_T_Vidar_1

ParcelCorridor_T_Vidar_7:
# 1302 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Vidar_R3
	goto ParcelCorridor_T_Vidar_6

ParcelCorridor_T_Vidar_8:
# 1301 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_VIDAR_R3
	goto_if 0, ParcelCorridor_T_Vidar_7
	goto ParcelCorridor_T_Vidar_6

ParcelCorridor_T_Vidar_12:
# 1305 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Vidar_R4
	goto ParcelCorridor_T_Vidar_11

ParcelCorridor_T_Vidar_13:
# 1304 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_VIDAR_R4
	goto_if 0, ParcelCorridor_T_Vidar_12
	goto ParcelCorridor_T_Vidar_11

ParcelCorridor_T_Vidar_17:
# 1308 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Vidar_R5
	goto ParcelCorridor_T_Vidar_16

ParcelCorridor_T_Vidar_18:
# 1307 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_VIDAR_R5
	goto_if 0, ParcelCorridor_T_Vidar_17
	goto ParcelCorridor_T_Vidar_16


ParcelCorridor_T_Vidar_FirstWin::
# 1314 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_Text_2, MSGBOX_DEFAULT
# 1315 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Vidar_R2::
# 1319 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1320 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1321 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_0, MSGBOX_YESNO
# 1322 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Vidar_R2_2
# 1327 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_VIDAR_R2, ParcelCorridor_T_Vidar_R2_Text_2
# 1328 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_3, MSGBOX_DEFAULT
# 1329 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Vidar_R2_2:
# 1323 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 1324 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Vidar_R3::
# 1333 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1334 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1335 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R3_Text_0, MSGBOX_YESNO
# 1336 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Vidar_R3_2
# 1341 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_VIDAR_R3, ParcelCorridor_T_Vidar_R3_Text_1
# 1342 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R3_Text_2, MSGBOX_DEFAULT
# 1343 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Vidar_R3_2:
# 1337 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 1338 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Vidar_R4::
# 1347 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1348 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1349 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R4_Text_0, MSGBOX_YESNO
# 1350 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Vidar_R4_2
# 1355 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_VIDAR_R4, ParcelCorridor_T_Vidar_R2_Text_2
# 1356 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R4_Text_1, MSGBOX_DEFAULT
# 1357 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Vidar_R4_2:
# 1351 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 1352 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Vidar_R5::
# 1361 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1362 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1363 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R5_Text_0, MSGBOX_YESNO
# 1364 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Vidar_R5_2
# 1369 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_VIDAR_R5, ParcelCorridor_T_Vidar_R5_Text_1
# 1370 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R5_Text_2, MSGBOX_DEFAULT
# 1371 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Vidar_R5_2:
# 1365 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 1366 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Halle::
# 1375 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_HALLE, ParcelCorridor_T_Halle_Text_0, ParcelCorridor_T_Halle_Text_1, ParcelCorridor_T_Halle_FirstWin
# 1379 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1380 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_T_Halle_3
ParcelCorridor_T_Halle_1:
# 1383 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_T_Halle_8
ParcelCorridor_T_Halle_6:
# 1386 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_T_Halle_13
ParcelCorridor_T_Halle_11:
# 1389 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_T_Halle_18
ParcelCorridor_T_Halle_16:
# 1392 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_T_Halle_2:
# 1381 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Halle_R2
	goto ParcelCorridor_T_Halle_1

ParcelCorridor_T_Halle_3:
# 1380 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_HALLE_R2
	goto_if 0, ParcelCorridor_T_Halle_2
	goto ParcelCorridor_T_Halle_1

ParcelCorridor_T_Halle_7:
# 1384 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Halle_R3
	goto ParcelCorridor_T_Halle_6

ParcelCorridor_T_Halle_8:
# 1383 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_HALLE_R3
	goto_if 0, ParcelCorridor_T_Halle_7
	goto ParcelCorridor_T_Halle_6

ParcelCorridor_T_Halle_12:
# 1387 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Halle_R4
	goto ParcelCorridor_T_Halle_11

ParcelCorridor_T_Halle_13:
# 1386 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_HALLE_R4
	goto_if 0, ParcelCorridor_T_Halle_12
	goto ParcelCorridor_T_Halle_11

ParcelCorridor_T_Halle_17:
# 1390 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Halle_R5
	goto ParcelCorridor_T_Halle_16

ParcelCorridor_T_Halle_18:
# 1389 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_HALLE_R5
	goto_if 0, ParcelCorridor_T_Halle_17
	goto ParcelCorridor_T_Halle_16


ParcelCorridor_T_Halle_FirstWin::
# 1396 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_Text_2, MSGBOX_DEFAULT
# 1397 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Halle_R2::
# 1401 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1402 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1403 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_0, MSGBOX_YESNO
# 1404 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Halle_R2_2
# 1409 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_HALLE_R2, ParcelCorridor_T_Halle_R2_Text_2
# 1410 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_3, MSGBOX_DEFAULT
# 1411 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Halle_R2_2:
# 1405 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_1, MSGBOX_DEFAULT
# 1406 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Halle_R3::
# 1415 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1416 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1417 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R3_Text_0, MSGBOX_YESNO
# 1418 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Halle_R3_2
# 1423 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_HALLE_R3, ParcelCorridor_T_Halle_R3_Text_1
# 1424 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R3_Text_2, MSGBOX_DEFAULT
# 1425 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Halle_R3_2:
# 1419 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_1, MSGBOX_DEFAULT
# 1420 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Halle_R4::
# 1429 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1430 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1431 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R4_Text_0, MSGBOX_YESNO
# 1432 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Halle_R4_2
# 1437 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_HALLE_R4, ParcelCorridor_T_Halle_R2_Text_2
# 1438 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R4_Text_1, MSGBOX_DEFAULT
# 1439 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Halle_R4_2:
# 1433 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_1, MSGBOX_DEFAULT
# 1434 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Halle_R5::
# 1443 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1444 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1445 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R5_Text_0, MSGBOX_YESNO
# 1446 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Halle_R5_2
# 1451 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_HALLE_R5, ParcelCorridor_T_Halle_R3_Text_1
# 1452 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R5_Text_1, MSGBOX_DEFAULT
# 1453 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Halle_R5_2:
# 1447 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_1, MSGBOX_DEFAULT
# 1448 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Elin::
# 1457 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_ELIN, ParcelCorridor_T_Elin_Text_0, ParcelCorridor_T_Elin_Text_1, ParcelCorridor_T_Elin_FirstWin
# 1461 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1462 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_T_Elin_3
ParcelCorridor_T_Elin_1:
# 1465 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_T_Elin_8
ParcelCorridor_T_Elin_6:
# 1468 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_T_Elin_13
ParcelCorridor_T_Elin_11:
# 1471 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_T_Elin_18
ParcelCorridor_T_Elin_16:
# 1474 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_T_Elin_2:
# 1463 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Elin_R2
	goto ParcelCorridor_T_Elin_1

ParcelCorridor_T_Elin_3:
# 1462 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELIN_R2
	goto_if 0, ParcelCorridor_T_Elin_2
	goto ParcelCorridor_T_Elin_1

ParcelCorridor_T_Elin_7:
# 1466 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Elin_R3
	goto ParcelCorridor_T_Elin_6

ParcelCorridor_T_Elin_8:
# 1465 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELIN_R3
	goto_if 0, ParcelCorridor_T_Elin_7
	goto ParcelCorridor_T_Elin_6

ParcelCorridor_T_Elin_12:
# 1469 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Elin_R4
	goto ParcelCorridor_T_Elin_11

ParcelCorridor_T_Elin_13:
# 1468 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELIN_R4
	goto_if 0, ParcelCorridor_T_Elin_12
	goto ParcelCorridor_T_Elin_11

ParcelCorridor_T_Elin_17:
# 1472 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Elin_R5
	goto ParcelCorridor_T_Elin_16

ParcelCorridor_T_Elin_18:
# 1471 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELIN_R5
	goto_if 0, ParcelCorridor_T_Elin_17
	goto ParcelCorridor_T_Elin_16


ParcelCorridor_T_Elin_FirstWin::
# 1478 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_Text_2, MSGBOX_DEFAULT
# 1479 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Elin_R2::
# 1483 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1484 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1485 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_0, MSGBOX_YESNO
# 1486 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Elin_R2_2
# 1491 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELIN_R2, ParcelCorridor_T_Elin_R2_Text_2
# 1492 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_3, MSGBOX_DEFAULT
# 1493 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Elin_R2_2:
# 1487 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_1, MSGBOX_DEFAULT
# 1488 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Elin_R3::
# 1497 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1498 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1499 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R3_Text_0, MSGBOX_YESNO
# 1500 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Elin_R3_2
# 1505 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELIN_R3, ParcelCorridor_T_Elin_R3_Text_1
# 1506 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R3_Text_2, MSGBOX_DEFAULT
# 1507 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Elin_R3_2:
# 1501 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_1, MSGBOX_DEFAULT
# 1502 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Elin_R4::
# 1511 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1512 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1513 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R4_Text_0, MSGBOX_YESNO
# 1514 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Elin_R4_2
# 1519 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELIN_R4, ParcelCorridor_T_Elin_R4_Text_1
# 1520 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R4_Text_2, MSGBOX_DEFAULT
# 1521 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Elin_R4_2:
# 1515 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_1, MSGBOX_DEFAULT
# 1516 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Elin_R5::
# 1525 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1526 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1527 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R5_Text_0, MSGBOX_YESNO
# 1528 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Elin_R5_2
# 1533 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELIN_R5, ParcelCorridor_T_Elin_R5_Text_1
# 1534 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R5_Text_2, MSGBOX_DEFAULT
# 1535 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Elin_R5_2:
# 1529 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_1, MSGBOX_DEFAULT
# 1530 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_PerrinScene::
# 1541 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_3, ParcelCorridor_PerrinScene_2
# 1545 "data/maps/ParcelCorridor/scripts.pory"
	lockall
# 1546 "data/maps/ParcelCorridor/scripts.pory"
	playse SE_PIN
# 1547 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PerrinScene_Text_0, MSGBOX_DEFAULT
# 1548 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 1549 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 23, Movement_ParcelCorridor_PerrinIn
# 1550 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 1551 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PerrinScene_Text_1, MSGBOX_DEFAULT
# 1552 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_3, ParcelCorridor_PerrinScene_Text_2
# 1553 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PerrinScene_Text_3, MSGBOX_DEFAULT
# 1554 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 1555 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 23, Movement_ParcelCorridor_PerrinOut
# 1556 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 1557 "data/maps/ParcelCorridor/scripts.pory"
	removeobject 23
# 1558 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_SKALD_PERRIN_3
# 1559 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1560 "data/maps/ParcelCorridor/scripts.pory"
	releaseall
	end

ParcelCorridor_PerrinScene_2:
# 1542 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelCorridor_PerrinTalk::
# 1564 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1565 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1566 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 1567 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


# 1570 "data/maps/ParcelCorridor/scripts.pory"
Movement_ParcelCorridor_PerrinIn:
# 1570 "data/maps/ParcelCorridor/scripts.pory"
	walk_down
# 1570 "data/maps/ParcelCorridor/scripts.pory"
	walk_down
	step_end

# 1571 "data/maps/ParcelCorridor/scripts.pory"
Movement_ParcelCorridor_PerrinOut:
# 1571 "data/maps/ParcelCorridor/scripts.pory"
	walk_up
# 1571 "data/maps/ParcelCorridor/scripts.pory"
	walk_up
	step_end

ParcelCorridor_Mirren_Rematch::
# 1575 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1576 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1577 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Mirren_Rematch_Text_0, MSGBOX_YESNO
# 1578 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Mirren_Rematch_2
# 1583 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM2_R, ParcelCorridor_Mirren_Rematch_Text_2
# 1584 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Mirren_Rematch_Text_3, MSGBOX_DEFAULT
# 1585 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Mirren_Rematch_2:
# 1579 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Mirren_Rematch_Text_1, MSGBOX_DEFAULT
# 1580 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_SurveyStake::
# 1591 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SurveyStake_Text_0, MSGBOX_SIGN
# 1592 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 1
# 1593 "data/maps/ParcelCorridor/scripts.pory"
	special SkaldSurveyStake
# 1594 "data/maps/ParcelCorridor/scripts.pory"
	msgbox gStringVar4, MSGBOX_SIGN
	end


ParcelCorridor_Checkpoint_Text_0:
# 45 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Hold it.$"

ParcelCorridor_Checkpoint_Text_1:
# 51 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Subsurface Survey. I sign who\n"
	.string "goes past this cut and who doesn't.\p"
	.string "You're the provisional. TARN passed you.\n"
	.string "TARN passes nobody, so either you're\l"
	.string "good or he's slipping.$"

ParcelCorridor_Checkpoint_Text_2:
# 52 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Show me you can read anything\n"
	.string "at all.$"

ParcelCorridor_Checkpoint_Text_3:
# 53 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: …Steady under pressure. Noted.$"

ParcelCorridor_Checkpoint_Text_4:
# 56 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Subsurface clearance. It logs\n"
	.string "you fit to survey enclosed ground.\l"
	.string "Culverts. Adits. Anywhere the daylight\l"
	.string "stops.\p"
	.string "Comes with the standard kit.$"

ParcelCorridor_Checkpoint_Text_5:
# 58 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: FLASH. There's an old survey\n"
	.string "adit up the cut, past the stream.\l"
	.string "Pumped dry years ago. Nobody's been in\l"
	.string "since.\p"
	.string "If you want to see what we left in\n"
	.string "there, now you can.$"

ParcelCorridor_Mirren_Text_0:
# 74 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: You filed the basin as what it\n"
	.string "is. Half the division would have rounded\l"
	.string "up.\p"
	.string "Go on. The river's cleaner. For now.$"

ParcelCorridor_Mirren_Text_1:
# 78 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Cleared provisional. The\n"
	.string "basin's darker than this. Don't go in\l"
	.string "blind.$"

ParcelCorridor_CulvertScene_Text_0:
# 99 "data/maps/ParcelCorridor/scripts.pory"
	.string "{STR_VAR_1} stops at the edge of\n"
	.string "the road and won't go on.$"

ParcelCorridor_CulvertScene_Text_1:
# 102 "data/maps/ParcelCorridor/scripts.pory"
	.string "A culvert under the old road. Concrete.\n"
	.string "Narrow. Functional.\p"
	.string "Upstream, the channel is wide and\n"
	.string "braided. Downstream, it is one fast cut.$"

ParcelCorridor_CulvertScene_Text_2:
# 103 "data/maps/ParcelCorridor/scripts.pory"
	.string "The water through the pipe sounds\n"
	.string "sharper than it should. Less layered.\l"
	.string "More forceful.$"

ParcelCorridor_CulvertScene_Text_3:
# 108 "data/maps/ParcelCorridor/scripts.pory"
	.string "A splash, on the far side.$"

ParcelCorridor_CulvertScene_Text_4:
# 111 "data/maps/ParcelCorridor/scripts.pory"
	.string "A WOOPER tries the current. Once. Twice.\p"
	.string "It goes back to the far bank and stays\n"
	.string "there.$"

ParcelCorridor_CulvertScene_Text_5:
# 112 "data/maps/ParcelCorridor/scripts.pory"
	.string "Not trapped. Excluded.\p"
	.string "The corridor still exists. It's thinner.\n"
	.string "Written down: the pipe width, the drop,\l"
	.string "the time it tried.$"

ParcelCorridor_FarSide_Text_0:
# 126 "data/maps/ParcelCorridor/scripts.pory"
	.string "It watches the current from the far\n"
	.string "bank. It does not try again.$"

ParcelCorridor_Worker_Text_0:
# 140 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: Culvert still meets code. The\n"
	.string "code changed. Now it meets the old\l"
	.string "code. We've a new drawing. Nobody's said\l"
	.string "who pays for the new culvert. Nobody\l"
	.string "will, for a while.$"

ParcelCorridor_Worker_Text_1:
# 148 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: Quite a current through there,\n"
	.string "eh?\p"
	.string "HOLLOWBEND drainage works. Culvert's\n"
	.string "ours. Meets code.$"

ParcelCorridor_Worker_Text_2:
# 152 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: Oh good. You're with the\n"
	.string "station, right? We've been meaning to\l"
	.string "flag this.\p"
	.string "Drainage specs met code, but wildlife\n"
	.string "keeps clogging it. We're scheduled to\l"
	.string "install grates next month.$"

ParcelCorridor_Worker_Text_3:
# 153 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: It meets regulation. But if you\n"
	.string "want, I can note that RANGERS were\l"
	.string "consulted.$"

ParcelCorridor_Worker_Text_4:
# 154 "data/maps/ParcelCorridor/scripts.pory"
	.string "Note that RANGERS were consulted?$"

ParcelCorridor_Worker_Text_5:
# 156 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: …\p"
	.string "No. Who approved the design?$"

ParcelCorridor_Worker_Text_6:
# 158 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: No. Who approved the\n"
	.string "design?$"

ParcelCorridor_Worker_Text_7:
# 160 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: Do you have the\n"
	.string "pre-construction flow data?$"

ParcelCorridor_Worker_Text_8:
# 161 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: That'd be… county records, I\n"
	.string "think. Or the contractor. It's in the\l"
	.string "hut, maybe. The spec sheet is.$"

ParcelCorridor_Worker_Text_9:
# 162 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: Grates would solve your\n"
	.string "problem. They wouldn't solve the\l"
	.string "WOOPER's.\p"
	.string "Fixing it later might mean it's already\n"
	.string "too late.$"

ParcelCorridor_Worker_Text_10:
# 163 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: …I'll note that the corridor\n"
	.string "width changed.$"

ParcelCorridor_Worker_Text_11:
# 164 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: It's not enough.$"

ParcelCorridor_Worker_Text_12:
# 165 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: It's not nothing. Crew 14, if\n"
	.string "anyone asks who said it.$"

ParcelCorridor_Worker_Text_13:
# 173 "data/maps/ParcelCorridor/scripts.pory"
	.string "Written down: the specs, the schedule,\n"
	.string "the missing data, the crew number.\p"
	.string "The report will move slowly. It will be\n"
	.string "questioned. Maybe ignored. But it\l"
	.string "exists now.$"

ParcelCorridor_ObsStumps_Text_0:
# 180 "data/maps/ParcelCorridor/scripts.pory"
	.string "Old stumps in a rough line, cut flat,\n"
	.string "grey with years.\p"
	.string "The forest didn't thin here. It was\n"
	.string "thinned.$"

ParcelCorridor_ObsMoss_Text_0:
# 184 "data/maps/ParcelCorridor/scripts.pory"
	.string "Moss thick on the north faces, gone\n"
	.string "where the canopy used to hold the damp.$"

ParcelCorridor_ObsDrainage_Text_0:
# 188 "data/maps/ParcelCorridor/scripts.pory"
	.string "A drainage cut, knife-straight, running\n"
	.string "off under the trees.\p"
	.string "Nothing in nature drains like this.$"

ParcelCorridor_ObsRoad_Text_0:
# 192 "data/maps/ParcelCorridor/scripts.pory"
	.string "A cracked service road, half-reclaimed\n"
	.string "by weeds.\p"
	.string "It looks abandoned. It isn't harmless.$"

ParcelCorridor_ObsCulvert_Text_0:
# 196 "data/maps/ParcelCorridor/scripts.pory"
	.string "The culvert. Concrete, narrow,\n"
	.string "functional.\p"
	.string "Upstream: broad and braided.\n"
	.string "Downstream: a single fast channel.$"

ParcelCorridor_SignWest_Text_0:
# 202 "data/maps/ParcelCorridor/scripts.pory"
	.string "HOLLOWBEND SPUR\p"
	.string "West: REEDMERE landing.\n"
	.string "East: the old service cut. Road closed\l"
	.string "to vehicles.$"

ParcelCorridor_SignCheckpoint_Text_0:
# 206 "data/maps/ParcelCorridor/scripts.pory"
	.string "MEREHOLT SUBSURFACE SURVEY\n"
	.string "Checkpoint\p"
	.string "Clearance required beyond this point.\n"
	.string "Provisional RANGERS report to the\l"
	.string "officer on duty.$"

ParcelCorridor_SignNorth_Text_0:
# 210 "data/maps/ParcelCorridor/scripts.pory"
	.string "North: the FLOODBASIN. Corps survey\n"
	.string "stakes from here. Keep to the marked\l"
	.string "path.$"

ParcelCorridor_SignAdit_Text_0:
# 214 "data/maps/ParcelCorridor/scripts.pory"
	.string "MEREHOLT SUBSURFACE SURVEY -- ADIT 3\p"
	.string "Pumped dry. No lighting. Keep out.$"

ParcelCorridor_Geir_Text_0:
# 226 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Nobody walks the cut anymore.\n"
	.string "Just me and the stumps. And you,\l"
	.string "apparently.$"

ParcelCorridor_Geir_Text_1:
# 227 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Stumps don't hit back. Noted.$"

ParcelCorridor_Geir_Text_2:
# 242 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: They logged this whole spur in\n"
	.string "one winter. The road was for the trucks.\l"
	.string "Then the trucks stopped coming.$"

ParcelCorridor_Geir_R2_Text_0:
# 253 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelCorridor_Geir_R2_Text_1:
# 255 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Another time, then.$"

ParcelCorridor_Geir_R2_Text_2:
# 259 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Noted. Properly, this time.$"

ParcelCorridor_Geir_R2_Text_3:
# 260 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Geir_R3_Text_0:
# 267 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCorridor_Geir_R3_Text_1:
# 273 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: …Again, then. Later.$"

ParcelCorridor_Geir_R3_Text_2:
# 274 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Geir_R4_Text_0:
# 281 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCorridor_Geir_R4_Text_1:
# 287 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Still yours.$"

ParcelCorridor_Geir_R4_Text_2:
# 288 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_Geir_R5_Text_0:
# 295 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCorridor_Geir_R5_Text_1:
# 302 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCorridor_Per_Text_0:
# 308 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: The moths only come out where the\n"
	.string "big trees are left. I counted. Battle?$"

ParcelCorridor_Per_Text_1:
# 309 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: You counted better.$"

ParcelCorridor_Per_Text_2:
# 324 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Six DUSTOX in the old stand by the\n"
	.string "ledges. Zero in the cut. That's a number,\l"
	.string "isn't it? That's a finding.$"

ParcelCorridor_Per_R2_Text_0:
# 335 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCorridor_Per_R2_Text_1:
# 337 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Fine. Same spot.$"

ParcelCorridor_Per_R2_Text_2:
# 341 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: That's the one I wanted to see.$"

ParcelCorridor_Per_R2_Text_3:
# 342 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Per_R3_Text_0:
# 349 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCorridor_Per_R3_Text_1:
# 355 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Noted. Properly, this time.$"

ParcelCorridor_Per_R3_Text_2:
# 356 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Per_R4_Text_0:
# 363 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelCorridor_Per_R4_Text_1:
# 369 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: …Fair.$"

ParcelCorridor_Per_R4_Text_2:
# 370 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Per_R5_Text_0:
# 377 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridor_Per_R5_Text_1:
# 383 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Right. That's the whole of it.$"

ParcelCorridor_Per_R5_Text_2:
# 384 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Rune_Text_0:
# 390 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: The ledges are the best bit. You\n"
	.string "can jump them. Can you jump me?$"

ParcelCorridor_Rune_Text_1:
# 391 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Jumped.$"

ParcelCorridor_Rune_Text_2:
# 406 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: The CORPS cadets won't jump the\n"
	.string "ledges. 'Erosion.' It's a ledge!$"

ParcelCorridor_Rune_R2_Text_0:
# 417 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCorridor_Rune_R2_Text_1:
# 419 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: No hurry. The water keeps.$"

ParcelCorridor_Rune_R2_Text_2:
# 423 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Right. That's the whole of it.$"

ParcelCorridor_Rune_R2_Text_3:
# 424 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Rune_R3_Text_0:
# 431 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelCorridor_Rune_R3_Text_1:
# 437 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: That's the one I wanted to see.$"

ParcelCorridor_Rune_R3_Text_2:
# 438 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Rune_R4_Text_0:
# 445 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCorridor_Rune_R4_Text_1:
# 452 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Rune_R5_Text_0:
# 459 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCorridor_Rune_R5_Text_1:
# 465 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Noted. Properly, this time.$"

ParcelCorridor_Rune_R5_Text_2:
# 466 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Else_Text_0:
# 472 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Quiet, isn't it. Too quiet. Nothing\n"
	.string "lives in a cut like this except trainers.$"

ParcelCorridor_Else_Text_1:
# 473 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: And now one fewer.$"

ParcelCorridor_Else_Text_2:
# 488 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: There used to be a stream\n"
	.string "through the grass here. You can still\l"
	.string "see where. Dry as a bone.$"

ParcelCorridor_Else_R2_Text_0:
# 499 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCorridor_Else_R2_Text_1:
# 501 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: No hurry. The water keeps.$"

ParcelCorridor_Else_R2_Text_2:
# 505 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: …Again, then. Later.$"

ParcelCorridor_Else_R2_Text_3:
# 506 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Else_R3_Text_0:
# 513 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCorridor_Else_R3_Text_1:
# 520 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Else_R4_Text_0:
# 527 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCorridor_Else_R4_Text_1:
# 533 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Right. That's the whole of it.$"

ParcelCorridor_Else_R4_Text_2:
# 534 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Else_R5_Text_0:
# 541 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCorridor_Else_R5_Text_1:
# 548 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Ulf_Text_0:
# 554 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: My NINCADA dug up a drainage pipe\n"
	.string "yesterday. A pipe! In the middle of\l"
	.string "nowhere!$"

ParcelCorridor_Ulf_Text_1:
# 555 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: It digs better than it fights.$"

ParcelCorridor_Ulf_Text_2:
# 570 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Somebody drained this whole\n"
	.string "stretch on purpose. For a road nobody\l"
	.string "uses.$"

ParcelCorridor_Ulf_R2_Text_0:
# 581 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: I kept the team up for this. Again?$"

ParcelCorridor_Ulf_R2_Text_1:
# 583 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Suit yourself. I'm here.$"

ParcelCorridor_Ulf_R2_Text_2:
# 587 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Noted. Properly, this time.$"

ParcelCorridor_Ulf_R2_Text_3:
# 588 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Ulf_R3_Text_0:
# 595 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelCorridor_Ulf_R3_Text_1:
# 602 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Ulf_R4_Text_0:
# 609 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelCorridor_Ulf_R4_Text_1:
# 615 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Still yours.$"

ParcelCorridor_Ulf_R4_Text_2:
# 616 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Ulf_R5_Text_0:
# 623 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCorridor_Ulf_R5_Text_1:
# 629 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: …Again, then. Later.$"

ParcelCorridor_Ulf_R5_Text_2:
# 630 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Gro_Text_0:
# 636 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: I'm walking to FERNWICK the long\n"
	.string "way. The long way has more battles.$"

ParcelCorridor_Gro_Text_1:
# 637 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Longer than I thought.$"

ParcelCorridor_Gro_Text_2:
# 652 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: A woman in a MEREHOLT coat has the\n"
	.string "road blocked up ahead. She made me show\l"
	.string "my trainer card. It's a ROAD.$"

ParcelCorridor_Gro_R2_Text_0:
# 663 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: I kept the team up for this. Again?$"

ParcelCorridor_Gro_R2_Text_1:
# 665 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCorridor_Gro_R2_Text_2:
# 669 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Right. That's the whole of it.$"

ParcelCorridor_Gro_R2_Text_3:
# 670 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Gro_R3_Text_0:
# 677 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Gro_R3_Text_1:
# 683 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: …Fair.$"

ParcelCorridor_Gro_R3_Text_2:
# 684 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Gro_R4_Text_0:
# 691 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelCorridor_Gro_R4_Text_1:
# 698 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_Gro_R5_Text_0:
# 705 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridor_Gro_R5_Text_1:
# 711 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: That's the one I wanted to see.$"

ParcelCorridor_Gro_R5_Text_2:
# 712 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCorridor_Knut_Text_0:
# 718 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: POOCHYENA country. They came in\n"
	.string "when the trees came out. Mine's the\l"
	.string "biggest.$"

ParcelCorridor_Knut_Text_1:
# 719 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Not the biggest, then.$"

ParcelCorridor_Knut_Text_2:
# 734 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Nothing but POOCHYENA and\n"
	.string "ZIGZAGOON in the cut now. Dad says\l"
	.string "there were MAWILE once. In the rocks.$"

ParcelCorridor_Knut_R2_Text_0:
# 745 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelCorridor_Knut_R2_Text_1:
# 747 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Suit yourself. I'm here.$"

ParcelCorridor_Knut_R2_Text_2:
# 751 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Right. That's the whole of it.$"

ParcelCorridor_Knut_R2_Text_3:
# 752 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Knut_R3_Text_0:
# 759 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Knut_R3_Text_1:
# 766 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Knut_R4_Text_0:
# 773 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCorridor_Knut_R4_Text_1:
# 780 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Knut_R5_Text_0:
# 787 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridor_Knut_R5_Text_1:
# 793 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: That's the one I wanted to see.$"

ParcelCorridor_Knut_R5_Text_2:
# 794 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Dag_Text_0:
# 800 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Cadet DAG. I'm supposed to be\n"
	.string "staking the path north. Spar first.\l"
	.string "HALE's orders.$"

ParcelCorridor_Dag_Text_1:
# 801 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Fine. Stakes.$"

ParcelCorridor_Dag_Text_2:
# 816 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: The basin's north, over the\n"
	.string "plateau. Follow the stakes with red\l"
	.string "cloth. The ones without cloth are\l"
	.string "MEREHOLT's.$"

ParcelCorridor_Dag_R2_Text_0:
# 827 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: I kept the team up for this. Again?$"

ParcelCorridor_Dag_R2_Text_1:
# 829 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Suit yourself. I'm here.$"

ParcelCorridor_Dag_R2_Text_2:
# 833 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: That's the one I wanted to see.$"

ParcelCorridor_Dag_R2_Text_3:
# 834 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Dag_R3_Text_0:
# 841 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCorridor_Dag_R3_Text_1:
# 848 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Dag_R4_Text_0:
# 855 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCorridor_Dag_R4_Text_1:
# 861 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: …Again, then. Later.$"

ParcelCorridor_Dag_R4_Text_2:
# 862 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_Dag_R5_Text_0:
# 869 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCorridor_Dag_R5_Text_1:
# 875 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Right. That's the whole of it.$"

ParcelCorridor_Dag_R5_Text_2:
# 876 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Arne_Text_0:
# 882 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Below the culvert the water runs\n"
	.string "so fast nothing holds. Above it, I\l"
	.string "catch. Guess which side you're on.$"

ParcelCorridor_Arne_Text_1:
# 883 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: The fast side.$"

ParcelCorridor_Arne_Text_2:
# 898 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: BARBOACH go up this stream in\n"
	.string "spring. Went. They can't get through\l"
	.string "the pipe. I told the crew. The crew told\l"
	.string "me it meets code.$"

ParcelCorridor_Arne_R2_Text_0:
# 909 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: I kept the team up for this.\n"
	.string "Again?$"

ParcelCorridor_Arne_R2_Text_1:
# 911 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCorridor_Arne_R2_Text_2:
# 915 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: …Fair.$"

ParcelCorridor_Arne_R2_Text_3:
# 916 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Arne_R3_Text_0:
# 923 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCorridor_Arne_R3_Text_1:
# 929 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Still yours.$"

ParcelCorridor_Arne_R3_Text_2:
# 930 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Arne_R4_Text_0:
# 937 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCorridor_Arne_R4_Text_1:
# 943 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Noted. Properly, this time.$"

ParcelCorridor_Arne_R4_Text_2:
# 944 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_Arne_R5_Text_0:
# 951 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCorridor_Arne_R5_Text_1:
# 957 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Right. That's the whole of it.$"

ParcelCorridor_Arne_R5_Text_2:
# 958 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Sven_Text_0:
# 964 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: The plateau's mine. Well.\n"
	.string "MEREHOLT's. But I'm the one standing on\l"
	.string "it.$"

ParcelCorridor_Sven_Text_1:
# 965 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Standing on it a bit less.$"

ParcelCorridor_Sven_Text_2:
# 980 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Survey stakes everywhere up\n"
	.string "here. Two kinds. Nobody will tell me what\l"
	.string "the second kind is for.$"

ParcelCorridor_Sven_R2_Text_0:
# 991 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCorridor_Sven_R2_Text_1:
# 993 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Suit yourself. I'm here.$"

ParcelCorridor_Sven_R2_Text_2:
# 997 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: …Fair.$"

ParcelCorridor_Sven_R2_Text_3:
# 998 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Sven_R3_Text_0:
# 1005 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Sven_R3_Text_1:
# 1011 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: That's the one I wanted to see.$"

ParcelCorridor_Sven_R3_Text_2:
# 1012 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Sven_R4_Text_0:
# 1019 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCorridor_Sven_R4_Text_1:
# 1025 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Still yours.$"

ParcelCorridor_Sven_R4_Text_2:
# 1026 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Sven_R5_Text_0:
# 1033 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridor_Sven_R5_Text_1:
# 1039 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Right. That's the whole of it.$"

ParcelCorridor_Sven_R5_Text_2:
# 1040 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCorridor_Olav_Text_0:
# 1046 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: TAILLOW nest in the cut banks\n"
	.string "now. They didn't used to. Is that good\l"
	.string "or bad? Battle me while you think.$"

ParcelCorridor_Olav_Text_1:
# 1047 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: Still thinking?$"

ParcelCorridor_Olav_Text_2:
# 1062 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: More TAILLOW, fewer of\n"
	.string "everything else. I think that's bad. I\l"
	.string "think it looks like good.$"

ParcelCorridor_Olav_R2_Text_0:
# 1073 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: I kept the team up for this.\n"
	.string "Again?$"

ParcelCorridor_Olav_R2_Text_1:
# 1075 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: No hurry. The water keeps.$"

ParcelCorridor_Olav_R2_Text_2:
# 1079 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: …Fair.$"

ParcelCorridor_Olav_R2_Text_3:
# 1080 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Olav_R3_Text_0:
# 1087 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Olav_R3_Text_1:
# 1093 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: Noted. Properly, this time.$"

ParcelCorridor_Olav_R3_Text_2:
# 1094 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Olav_R4_Text_0:
# 1101 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCorridor_Olav_R4_Text_1:
# 1108 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Olav_R5_Text_0:
# 1115 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridor_Olav_R5_Text_1:
# 1122 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Inga_Text_0:
# 1128 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: I can feel the ground under the\n"
	.string "plateau. It's hollow. Can you feel it?$"

ParcelCorridor_Inga_Text_1:
# 1129 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: You feel it now.$"

ParcelCorridor_Inga_Text_2:
# 1144 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Old workings. Adits. MEREHOLT\n"
	.string "pumped them dry and left. The hill\l"
	.string "remembers being wet.$"

ParcelCorridor_Inga_R2_Text_0:
# 1155 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCorridor_Inga_R2_Text_1:
# 1157 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCorridor_Inga_R2_Text_2:
# 1161 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Right. That's the whole of it.$"

ParcelCorridor_Inga_R2_Text_3:
# 1162 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Inga_R3_Text_0:
# 1169 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Inga_R3_Text_1:
# 1176 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Inga_R4_Text_0:
# 1183 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCorridor_Inga_R4_Text_1:
# 1189 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: …Again, then. Later.$"

ParcelCorridor_Inga_R4_Text_2:
# 1190 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Inga_R5_Text_0:
# 1197 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCorridor_Inga_R5_Text_1:
# 1203 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Noted. Properly, this time.$"

ParcelCorridor_Inga_R5_Text_2:
# 1204 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Turid_Text_0:
# 1210 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: You're going to the basin?\n"
	.string "Nobody goes to the basin. Battle me and\l"
	.string "I'll tell you why.$"

ParcelCorridor_Turid_Text_1:
# 1211 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Because it smells. That's why.\n"
	.string "Sweet, like something rotting.$"

ParcelCorridor_Turid_Text_2:
# 1226 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: The stakes north of here go\n"
	.string "right down to the water. Somebody\l"
	.string "measured it all. And then just left it.$"

ParcelCorridor_Turid_R2_Text_0:
# 1237 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCorridor_Turid_R2_Text_1:
# 1239 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Fine. Same spot.$"

ParcelCorridor_Turid_R2_Text_2:
# 1243 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: That's the one I wanted to see.$"

ParcelCorridor_Turid_R2_Text_3:
# 1244 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Turid_R3_Text_0:
# 1251 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Turid_R3_Text_1:
# 1257 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Right. That's the whole of it.$"

ParcelCorridor_Turid_R3_Text_2:
# 1258 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Turid_R4_Text_0:
# 1265 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCorridor_Turid_R4_Text_1:
# 1271 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Noted. Properly, this time.$"

ParcelCorridor_Turid_R4_Text_2:
# 1272 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_Turid_R5_Text_0:
# 1279 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCorridor_Turid_R5_Text_1:
# 1285 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: …Again, then. Later.$"

ParcelCorridor_Turid_R5_Text_2:
# 1286 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCorridor_T_Vidar_Text_0:
# 1294 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: The plateau's the only place\n"
	.string "with a view. The view's the basin. The\l"
	.string "basin smells. Battle.$"

ParcelCorridor_T_Vidar_Text_1:
# 1295 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Smells like losing.$"

ParcelCorridor_T_Vidar_Text_2:
# 1310 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: North's the FLOODBASIN. There's\n"
	.string "a hamlet in it that floods every spring.\l"
	.string "The councilman sends vouchers. Every\l"
	.string "spring.$"

ParcelCorridor_T_Vidar_R2_Text_0:
# 1321 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelCorridor_T_Vidar_R2_Text_1:
# 1323 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Another time, then.$"

ParcelCorridor_T_Vidar_R2_Text_2:
# 1327 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: …Again, then. Later.$"

ParcelCorridor_T_Vidar_R2_Text_3:
# 1328 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_T_Vidar_R3_Text_0:
# 1335 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelCorridor_T_Vidar_R3_Text_1:
# 1341 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: That's the one I wanted to see.$"

ParcelCorridor_T_Vidar_R3_Text_2:
# 1342 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_T_Vidar_R4_Text_0:
# 1349 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCorridor_T_Vidar_R4_Text_1:
# 1356 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_T_Vidar_R5_Text_0:
# 1363 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCorridor_T_Vidar_R5_Text_1:
# 1369 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: …Fair.$"

ParcelCorridor_T_Vidar_R5_Text_2:
# 1370 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCorridor_T_Halle_Text_0:
# 1376 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Survey stakes everywhere up\n"
	.string "here. Red cloth, bare, red cloth, bare.\l"
	.string "Battle me and I'll explain the colours.$"

ParcelCorridor_T_Halle_Text_1:
# 1377 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Red's the CORPS. Bare's the\n"
	.string "FOUNDATION. That's the explanation.$"

ParcelCorridor_T_Halle_Text_2:
# 1392 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: The bare stakes are on the clean\n"
	.string "ground. The red ones are where the\l"
	.string "water is. Somebody's measuring the\l"
	.string "wrong thing on purpose.$"

ParcelCorridor_T_Halle_R2_Text_0:
# 1403 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCorridor_T_Halle_R2_Text_1:
# 1405 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Fine. Same spot.$"

ParcelCorridor_T_Halle_R2_Text_2:
# 1409 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: …Fair.$"

ParcelCorridor_T_Halle_R2_Text_3:
# 1410 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_T_Halle_R3_Text_0:
# 1417 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_T_Halle_R3_Text_1:
# 1423 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: That's the one I wanted to see.$"

ParcelCorridor_T_Halle_R3_Text_2:
# 1424 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_T_Halle_R4_Text_0:
# 1431 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCorridor_T_Halle_R4_Text_1:
# 1438 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_T_Halle_R5_Text_0:
# 1445 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCorridor_T_Halle_R5_Text_1:
# 1452 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCorridor_T_Elin_Text_0:
# 1458 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Picnic in the cut. The stumps\n"
	.string "make good tables. Battle before the\l"
	.string "ants.$"

ParcelCorridor_T_Elin_Text_1:
# 1459 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Ants won.$"

ParcelCorridor_T_Elin_Text_2:
# 1474 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: The cut was a forest in my\n"
	.string "mother's time. She remembers the\l"
	.string "trucks. I remember the stumps. My kids\l"
	.string "will remember grass.$"

ParcelCorridor_T_Elin_R2_Text_0:
# 1485 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCorridor_T_Elin_R2_Text_1:
# 1487 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCorridor_T_Elin_R2_Text_2:
# 1491 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Noted. Properly, this time.$"

ParcelCorridor_T_Elin_R2_Text_3:
# 1492 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_T_Elin_R3_Text_0:
# 1499 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCorridor_T_Elin_R3_Text_1:
# 1505 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: …Fair.$"

ParcelCorridor_T_Elin_R3_Text_2:
# 1506 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_T_Elin_R4_Text_0:
# 1513 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelCorridor_T_Elin_R4_Text_1:
# 1519 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: …Again, then. Later.$"

ParcelCorridor_T_Elin_R4_Text_2:
# 1520 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_T_Elin_R5_Text_0:
# 1527 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCorridor_T_Elin_R5_Text_1:
# 1533 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: That's the one I wanted to see.$"

ParcelCorridor_T_Elin_R5_Text_2:
# 1534 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCorridor_PerrinScene_Text_0:
# 1547 "data/maps/ParcelCorridor/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelCorridor_PerrinScene_Text_1:
# 1551 "data/maps/ParcelCorridor/scripts.pory"
	.string "PERRIN: The basin's next. MIRREN says\n"
	.string "it's a mess. The FOUNDATION says it's 'in\l"
	.string "remediation'.\p"
	.string "I'm going with the people who have a\n"
	.string "plan. Battle, before you talk me out of\l"
	.string "it.$"

ParcelCorridor_PerrinScene_Text_2:
# 1552 "data/maps/ParcelCorridor/scripts.pory"
	.string "PERRIN: You didn't talk me out of it.$"

ParcelCorridor_PerrinScene_Text_3:
# 1553 "data/maps/ParcelCorridor/scripts.pory"
	.string "PERRIN: You know the difference\n"
	.string "between us? You write down what's\l"
	.string "there. I write down what's possible.\p"
	.string "Theirs reads better in a report. Mine, I\n"
	.string "mean. Ours.$"

ParcelCorridor_PerrinTalk_Text_0:
# 1566 "data/maps/ParcelCorridor/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelCorridor_Mirren_Rematch_Text_0:
# 1577 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: You filed the basin as what it\n"
	.string "is, and then you filed everything else\l"
	.string "the same way. Half the division is still\l"
	.string "rounding up.\p"
	.string "I don't round. Full strength, no gate,\n"
	.string "nothing signed at the end. Want it?$"

ParcelCorridor_Mirren_Rematch_Text_1:
# 1579 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Suit yourself. The rock doesn't\n"
	.string "move.$"

ParcelCorridor_Mirren_Rematch_Text_2:
# 1583 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: …Steady. Still.$"

ParcelCorridor_Mirren_Rematch_Text_3:
# 1584 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Same time tomorrow, if you like.\n"
	.string "The rock doesn't move.$"

ParcelCorridor_SurveyStake_Text_0:
# 1591 "data/maps/ParcelCorridor/scripts.pory"
	.string "A survey stake by the checkpoint, red\n"
	.string "cloth at the top. The bare stakes along\l"
	.string "the cut are MEREHOLT's. This one is\l"
	.string "yours.$"
