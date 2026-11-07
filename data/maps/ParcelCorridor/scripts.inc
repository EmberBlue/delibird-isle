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
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 140 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 9
# 141 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 142 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Worker_2
# 147 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_1, MSGBOX_DEFAULT
# 148 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_2, MSGBOX_DEFAULT
# 149 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_3, MSGBOX_YESNO
# 150 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridor_Worker_5
# 153 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_5, MSGBOX_DEFAULT
ParcelCorridor_Worker_4:
# 155 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_6, MSGBOX_DEFAULT
# 156 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_7, MSGBOX_DEFAULT
# 157 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_8, MSGBOX_DEFAULT
# 158 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_9, MSGBOX_DEFAULT
# 159 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_10, MSGBOX_DEFAULT
# 160 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_11, MSGBOX_DEFAULT
# 161 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 162 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 1, Movement_COR_WorkerLeave
# 163 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 164 "data/maps/ParcelCorridor/scripts.pory"
	removeobject 1
# 165 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 10
# 166 "data/maps/ParcelCorridor/scripts.pory"
	special SkaldmereCertTaskMark
# 167 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_TEMP_2
# 168 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_12, MSGBOX_DEFAULT
# 169 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Worker_2:
# 143 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_0, MSGBOX_DEFAULT
# 144 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Worker_5:
# 151 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_4, MSGBOX_DEFAULT
	goto ParcelCorridor_Worker_4


ParcelCorridor_ObsStumps::
# 175 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsStumps_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsMoss::
# 179 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsMoss_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsDrainage::
# 183 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsDrainage_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsRoad::
# 187 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsRoad_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsCulvert::
# 191 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsCulvert_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignWest::
# 197 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignWest_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignCheckpoint::
# 201 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignCheckpoint_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignNorth::
# 205 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignNorth_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignAdit::
# 209 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignAdit_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ItemSuperPotion::
# 214 "data/maps/ParcelCorridor/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelCorridor_ItemRepel::
# 215 "data/maps/ParcelCorridor/scripts.pory"
	finditem ITEM_REPEL
	end


ParcelCorridor_ItemGreatBall::
# 216 "data/maps/ParcelCorridor/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelCorridor_Geir::
# 220 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_GEIR, ParcelCorridor_Geir_Text_0, ParcelCorridor_Geir_Text_1, ParcelCorridor_Geir_FirstWin
# 224 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 225 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Geir_3
ParcelCorridor_Geir_1:
# 228 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Geir_8
ParcelCorridor_Geir_6:
# 231 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Geir_13
ParcelCorridor_Geir_11:
# 234 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Geir_18
ParcelCorridor_Geir_16:
# 237 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Geir_2:
# 226 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Geir_R2
	goto ParcelCorridor_Geir_1

ParcelCorridor_Geir_3:
# 225 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GEIR_R2
	goto_if 0, ParcelCorridor_Geir_2
	goto ParcelCorridor_Geir_1

ParcelCorridor_Geir_7:
# 229 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Geir_R3
	goto ParcelCorridor_Geir_6

ParcelCorridor_Geir_8:
# 228 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GEIR_R3
	goto_if 0, ParcelCorridor_Geir_7
	goto ParcelCorridor_Geir_6

ParcelCorridor_Geir_12:
# 232 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Geir_R4
	goto ParcelCorridor_Geir_11

ParcelCorridor_Geir_13:
# 231 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GEIR_R4
	goto_if 0, ParcelCorridor_Geir_12
	goto ParcelCorridor_Geir_11

ParcelCorridor_Geir_17:
# 235 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Geir_R5
	goto ParcelCorridor_Geir_16

ParcelCorridor_Geir_18:
# 234 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GEIR_R5
	goto_if 0, ParcelCorridor_Geir_17
	goto ParcelCorridor_Geir_16


ParcelCorridor_Geir_FirstWin::
# 241 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_Text_2, MSGBOX_DEFAULT
# 242 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Geir_R2::
# 246 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 247 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 248 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_0, MSGBOX_YESNO
# 249 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Geir_R2_2
# 254 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GEIR_R2, ParcelCorridor_Geir_R2_Text_2
# 255 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_3, MSGBOX_DEFAULT
# 256 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Geir_R2_2:
# 250 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_1, MSGBOX_DEFAULT
# 251 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Geir_R3::
# 260 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 261 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 262 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R3_Text_0, MSGBOX_YESNO
# 263 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Geir_R3_2
# 268 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GEIR_R3, ParcelCorridor_Geir_R3_Text_1
# 269 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R3_Text_2, MSGBOX_DEFAULT
# 270 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Geir_R3_2:
# 264 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_1, MSGBOX_DEFAULT
# 265 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Geir_R4::
# 274 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 275 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 276 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R4_Text_0, MSGBOX_YESNO
# 277 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Geir_R4_2
# 282 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GEIR_R4, ParcelCorridor_Geir_R4_Text_1
# 283 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R4_Text_2, MSGBOX_DEFAULT
# 284 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Geir_R4_2:
# 278 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_1, MSGBOX_DEFAULT
# 279 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Geir_R5::
# 288 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 289 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 290 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R5_Text_0, MSGBOX_YESNO
# 291 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Geir_R5_2
# 296 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GEIR_R5, ParcelCorridor_Geir_R4_Text_1
# 297 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R5_Text_1, MSGBOX_DEFAULT
# 298 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Geir_R5_2:
# 292 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_1, MSGBOX_DEFAULT
# 293 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Per::
# 302 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_PER, ParcelCorridor_Per_Text_0, ParcelCorridor_Per_Text_1, ParcelCorridor_Per_FirstWin
# 306 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 307 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Per_3
ParcelCorridor_Per_1:
# 310 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Per_8
ParcelCorridor_Per_6:
# 313 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Per_13
ParcelCorridor_Per_11:
# 316 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Per_18
ParcelCorridor_Per_16:
# 319 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Per_2:
# 308 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Per_R2
	goto ParcelCorridor_Per_1

ParcelCorridor_Per_3:
# 307 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_PER_R2
	goto_if 0, ParcelCorridor_Per_2
	goto ParcelCorridor_Per_1

ParcelCorridor_Per_7:
# 311 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Per_R3
	goto ParcelCorridor_Per_6

ParcelCorridor_Per_8:
# 310 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_PER_R3
	goto_if 0, ParcelCorridor_Per_7
	goto ParcelCorridor_Per_6

ParcelCorridor_Per_12:
# 314 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Per_R4
	goto ParcelCorridor_Per_11

ParcelCorridor_Per_13:
# 313 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_PER_R4
	goto_if 0, ParcelCorridor_Per_12
	goto ParcelCorridor_Per_11

ParcelCorridor_Per_17:
# 317 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Per_R5
	goto ParcelCorridor_Per_16

ParcelCorridor_Per_18:
# 316 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_PER_R5
	goto_if 0, ParcelCorridor_Per_17
	goto ParcelCorridor_Per_16


ParcelCorridor_Per_FirstWin::
# 323 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_Text_2, MSGBOX_DEFAULT
# 324 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Per_R2::
# 328 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 329 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 330 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_0, MSGBOX_YESNO
# 331 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Per_R2_2
# 336 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_PER_R2, ParcelCorridor_Per_R2_Text_2
# 337 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_3, MSGBOX_DEFAULT
# 338 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Per_R2_2:
# 332 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_1, MSGBOX_DEFAULT
# 333 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Per_R3::
# 342 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 343 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 344 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R3_Text_0, MSGBOX_YESNO
# 345 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Per_R3_2
# 350 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_PER_R3, ParcelCorridor_Per_R3_Text_1
# 351 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R3_Text_2, MSGBOX_DEFAULT
# 352 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Per_R3_2:
# 346 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_1, MSGBOX_DEFAULT
# 347 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Per_R4::
# 356 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 357 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 358 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R4_Text_0, MSGBOX_YESNO
# 359 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Per_R4_2
# 364 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_PER_R4, ParcelCorridor_Per_R4_Text_1
# 365 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R4_Text_2, MSGBOX_DEFAULT
# 366 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Per_R4_2:
# 360 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_1, MSGBOX_DEFAULT
# 361 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Per_R5::
# 370 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 371 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 372 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R5_Text_0, MSGBOX_YESNO
# 373 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Per_R5_2
# 378 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_PER_R5, ParcelCorridor_Per_R5_Text_1
# 379 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R5_Text_2, MSGBOX_DEFAULT
# 380 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Per_R5_2:
# 374 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_1, MSGBOX_DEFAULT
# 375 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Rune::
# 384 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_RUNE, ParcelCorridor_Rune_Text_0, ParcelCorridor_Rune_Text_1, ParcelCorridor_Rune_FirstWin
# 388 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 389 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Rune_3
ParcelCorridor_Rune_1:
# 392 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Rune_8
ParcelCorridor_Rune_6:
# 395 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Rune_13
ParcelCorridor_Rune_11:
# 398 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Rune_18
ParcelCorridor_Rune_16:
# 401 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Rune_2:
# 390 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Rune_R2
	goto ParcelCorridor_Rune_1

ParcelCorridor_Rune_3:
# 389 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_RUNE_R2
	goto_if 0, ParcelCorridor_Rune_2
	goto ParcelCorridor_Rune_1

ParcelCorridor_Rune_7:
# 393 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Rune_R3
	goto ParcelCorridor_Rune_6

ParcelCorridor_Rune_8:
# 392 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_RUNE_R3
	goto_if 0, ParcelCorridor_Rune_7
	goto ParcelCorridor_Rune_6

ParcelCorridor_Rune_12:
# 396 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Rune_R4
	goto ParcelCorridor_Rune_11

ParcelCorridor_Rune_13:
# 395 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_RUNE_R4
	goto_if 0, ParcelCorridor_Rune_12
	goto ParcelCorridor_Rune_11

ParcelCorridor_Rune_17:
# 399 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Rune_R5
	goto ParcelCorridor_Rune_16

ParcelCorridor_Rune_18:
# 398 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_RUNE_R5
	goto_if 0, ParcelCorridor_Rune_17
	goto ParcelCorridor_Rune_16


ParcelCorridor_Rune_FirstWin::
# 405 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_Text_2, MSGBOX_DEFAULT
# 406 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Rune_R2::
# 410 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 411 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 412 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_0, MSGBOX_YESNO
# 413 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Rune_R2_2
# 418 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_RUNE_R2, ParcelCorridor_Rune_R2_Text_2
# 419 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_3, MSGBOX_DEFAULT
# 420 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Rune_R2_2:
# 414 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_1, MSGBOX_DEFAULT
# 415 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Rune_R3::
# 424 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 425 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 426 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R3_Text_0, MSGBOX_YESNO
# 427 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Rune_R3_2
# 432 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_RUNE_R3, ParcelCorridor_Rune_R3_Text_1
# 433 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R3_Text_2, MSGBOX_DEFAULT
# 434 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Rune_R3_2:
# 428 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_1, MSGBOX_DEFAULT
# 429 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Rune_R4::
# 438 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 439 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 440 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R4_Text_0, MSGBOX_YESNO
# 441 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Rune_R4_2
# 446 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_RUNE_R4, ParcelCorridor_Rune_R3_Text_1
# 447 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R4_Text_1, MSGBOX_DEFAULT
# 448 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Rune_R4_2:
# 442 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_1, MSGBOX_DEFAULT
# 443 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Rune_R5::
# 452 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 453 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 454 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R5_Text_0, MSGBOX_YESNO
# 455 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Rune_R5_2
# 460 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_RUNE_R5, ParcelCorridor_Rune_R5_Text_1
# 461 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R5_Text_2, MSGBOX_DEFAULT
# 462 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Rune_R5_2:
# 456 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_1, MSGBOX_DEFAULT
# 457 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Else::
# 466 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_ELSE, ParcelCorridor_Else_Text_0, ParcelCorridor_Else_Text_1, ParcelCorridor_Else_FirstWin
# 470 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 471 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Else_3
ParcelCorridor_Else_1:
# 474 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Else_8
ParcelCorridor_Else_6:
# 477 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Else_13
ParcelCorridor_Else_11:
# 480 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Else_18
ParcelCorridor_Else_16:
# 483 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Else_2:
# 472 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Else_R2
	goto ParcelCorridor_Else_1

ParcelCorridor_Else_3:
# 471 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELSE_R2
	goto_if 0, ParcelCorridor_Else_2
	goto ParcelCorridor_Else_1

ParcelCorridor_Else_7:
# 475 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Else_R3
	goto ParcelCorridor_Else_6

ParcelCorridor_Else_8:
# 474 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELSE_R3
	goto_if 0, ParcelCorridor_Else_7
	goto ParcelCorridor_Else_6

ParcelCorridor_Else_12:
# 478 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Else_R4
	goto ParcelCorridor_Else_11

ParcelCorridor_Else_13:
# 477 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELSE_R4
	goto_if 0, ParcelCorridor_Else_12
	goto ParcelCorridor_Else_11

ParcelCorridor_Else_17:
# 481 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Else_R5
	goto ParcelCorridor_Else_16

ParcelCorridor_Else_18:
# 480 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELSE_R5
	goto_if 0, ParcelCorridor_Else_17
	goto ParcelCorridor_Else_16


ParcelCorridor_Else_FirstWin::
# 487 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_Text_2, MSGBOX_DEFAULT
# 488 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Else_R2::
# 492 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 493 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 494 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_0, MSGBOX_YESNO
# 495 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Else_R2_2
# 500 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELSE_R2, ParcelCorridor_Else_R2_Text_2
# 501 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_3, MSGBOX_DEFAULT
# 502 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Else_R2_2:
# 496 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_1, MSGBOX_DEFAULT
# 497 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Else_R3::
# 506 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 507 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 508 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R3_Text_0, MSGBOX_YESNO
# 509 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Else_R3_2
# 514 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELSE_R3, ParcelCorridor_Else_R2_Text_2
# 515 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R3_Text_1, MSGBOX_DEFAULT
# 516 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Else_R3_2:
# 510 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_1, MSGBOX_DEFAULT
# 511 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Else_R4::
# 520 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 521 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 522 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R4_Text_0, MSGBOX_YESNO
# 523 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Else_R4_2
# 528 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELSE_R4, ParcelCorridor_Else_R4_Text_1
# 529 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R4_Text_2, MSGBOX_DEFAULT
# 530 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Else_R4_2:
# 524 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_1, MSGBOX_DEFAULT
# 525 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Else_R5::
# 534 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 535 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 536 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R5_Text_0, MSGBOX_YESNO
# 537 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Else_R5_2
# 542 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELSE_R5, ParcelCorridor_Else_R2_Text_2
# 543 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R5_Text_1, MSGBOX_DEFAULT
# 544 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Else_R5_2:
# 538 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_1, MSGBOX_DEFAULT
# 539 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Ulf::
# 548 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_ULF, ParcelCorridor_Ulf_Text_0, ParcelCorridor_Ulf_Text_1, ParcelCorridor_Ulf_FirstWin
# 552 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 553 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Ulf_3
ParcelCorridor_Ulf_1:
# 556 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Ulf_8
ParcelCorridor_Ulf_6:
# 559 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Ulf_13
ParcelCorridor_Ulf_11:
# 562 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Ulf_18
ParcelCorridor_Ulf_16:
# 565 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Ulf_2:
# 554 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Ulf_R2
	goto ParcelCorridor_Ulf_1

ParcelCorridor_Ulf_3:
# 553 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ULF_R2
	goto_if 0, ParcelCorridor_Ulf_2
	goto ParcelCorridor_Ulf_1

ParcelCorridor_Ulf_7:
# 557 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Ulf_R3
	goto ParcelCorridor_Ulf_6

ParcelCorridor_Ulf_8:
# 556 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ULF_R3
	goto_if 0, ParcelCorridor_Ulf_7
	goto ParcelCorridor_Ulf_6

ParcelCorridor_Ulf_12:
# 560 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Ulf_R4
	goto ParcelCorridor_Ulf_11

ParcelCorridor_Ulf_13:
# 559 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ULF_R4
	goto_if 0, ParcelCorridor_Ulf_12
	goto ParcelCorridor_Ulf_11

ParcelCorridor_Ulf_17:
# 563 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Ulf_R5
	goto ParcelCorridor_Ulf_16

ParcelCorridor_Ulf_18:
# 562 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ULF_R5
	goto_if 0, ParcelCorridor_Ulf_17
	goto ParcelCorridor_Ulf_16


ParcelCorridor_Ulf_FirstWin::
# 569 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_Text_2, MSGBOX_DEFAULT
# 570 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Ulf_R2::
# 574 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 575 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 576 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_0, MSGBOX_YESNO
# 577 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Ulf_R2_2
# 582 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ULF_R2, ParcelCorridor_Ulf_R2_Text_2
# 583 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_3, MSGBOX_DEFAULT
# 584 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Ulf_R2_2:
# 578 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_1, MSGBOX_DEFAULT
# 579 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Ulf_R3::
# 588 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 589 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 590 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R3_Text_0, MSGBOX_YESNO
# 591 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Ulf_R3_2
# 596 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ULF_R3, ParcelCorridor_Ulf_R2_Text_2
# 597 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R3_Text_1, MSGBOX_DEFAULT
# 598 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Ulf_R3_2:
# 592 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_1, MSGBOX_DEFAULT
# 593 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Ulf_R4::
# 602 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 603 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 604 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R4_Text_0, MSGBOX_YESNO
# 605 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Ulf_R4_2
# 610 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ULF_R4, ParcelCorridor_Ulf_R4_Text_1
# 611 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R4_Text_2, MSGBOX_DEFAULT
# 612 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Ulf_R4_2:
# 606 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_1, MSGBOX_DEFAULT
# 607 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Ulf_R5::
# 616 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 617 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 618 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R5_Text_0, MSGBOX_YESNO
# 619 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Ulf_R5_2
# 624 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ULF_R5, ParcelCorridor_Ulf_R5_Text_1
# 625 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R5_Text_2, MSGBOX_DEFAULT
# 626 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Ulf_R5_2:
# 620 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_1, MSGBOX_DEFAULT
# 621 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Gro::
# 630 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_GRO, ParcelCorridor_Gro_Text_0, ParcelCorridor_Gro_Text_1, ParcelCorridor_Gro_FirstWin
# 634 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 635 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Gro_3
ParcelCorridor_Gro_1:
# 638 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Gro_8
ParcelCorridor_Gro_6:
# 641 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Gro_13
ParcelCorridor_Gro_11:
# 644 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Gro_18
ParcelCorridor_Gro_16:
# 647 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Gro_2:
# 636 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Gro_R2
	goto ParcelCorridor_Gro_1

ParcelCorridor_Gro_3:
# 635 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GRO_R2
	goto_if 0, ParcelCorridor_Gro_2
	goto ParcelCorridor_Gro_1

ParcelCorridor_Gro_7:
# 639 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Gro_R3
	goto ParcelCorridor_Gro_6

ParcelCorridor_Gro_8:
# 638 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GRO_R3
	goto_if 0, ParcelCorridor_Gro_7
	goto ParcelCorridor_Gro_6

ParcelCorridor_Gro_12:
# 642 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Gro_R4
	goto ParcelCorridor_Gro_11

ParcelCorridor_Gro_13:
# 641 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GRO_R4
	goto_if 0, ParcelCorridor_Gro_12
	goto ParcelCorridor_Gro_11

ParcelCorridor_Gro_17:
# 645 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Gro_R5
	goto ParcelCorridor_Gro_16

ParcelCorridor_Gro_18:
# 644 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GRO_R5
	goto_if 0, ParcelCorridor_Gro_17
	goto ParcelCorridor_Gro_16


ParcelCorridor_Gro_FirstWin::
# 651 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_Text_2, MSGBOX_DEFAULT
# 652 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Gro_R2::
# 656 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 657 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 658 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_0, MSGBOX_YESNO
# 659 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Gro_R2_2
# 664 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GRO_R2, ParcelCorridor_Gro_R2_Text_2
# 665 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_3, MSGBOX_DEFAULT
# 666 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Gro_R2_2:
# 660 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_1, MSGBOX_DEFAULT
# 661 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Gro_R3::
# 670 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 671 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 672 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R3_Text_0, MSGBOX_YESNO
# 673 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Gro_R3_2
# 678 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GRO_R3, ParcelCorridor_Gro_R3_Text_1
# 679 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R3_Text_2, MSGBOX_DEFAULT
# 680 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Gro_R3_2:
# 674 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_1, MSGBOX_DEFAULT
# 675 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Gro_R4::
# 684 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 685 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 686 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R4_Text_0, MSGBOX_YESNO
# 687 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Gro_R4_2
# 692 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GRO_R4, ParcelCorridor_Gro_R2_Text_2
# 693 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R4_Text_1, MSGBOX_DEFAULT
# 694 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Gro_R4_2:
# 688 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_1, MSGBOX_DEFAULT
# 689 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Gro_R5::
# 698 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 699 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 700 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R5_Text_0, MSGBOX_YESNO
# 701 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Gro_R5_2
# 706 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GRO_R5, ParcelCorridor_Gro_R5_Text_1
# 707 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R5_Text_2, MSGBOX_DEFAULT
# 708 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Gro_R5_2:
# 702 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_1, MSGBOX_DEFAULT
# 703 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Knut::
# 712 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_KNUT, ParcelCorridor_Knut_Text_0, ParcelCorridor_Knut_Text_1, ParcelCorridor_Knut_FirstWin
# 716 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 717 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Knut_3
ParcelCorridor_Knut_1:
# 720 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Knut_8
ParcelCorridor_Knut_6:
# 723 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Knut_13
ParcelCorridor_Knut_11:
# 726 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Knut_18
ParcelCorridor_Knut_16:
# 729 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Knut_2:
# 718 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Knut_R2
	goto ParcelCorridor_Knut_1

ParcelCorridor_Knut_3:
# 717 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_KNUT_R2
	goto_if 0, ParcelCorridor_Knut_2
	goto ParcelCorridor_Knut_1

ParcelCorridor_Knut_7:
# 721 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Knut_R3
	goto ParcelCorridor_Knut_6

ParcelCorridor_Knut_8:
# 720 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_KNUT_R3
	goto_if 0, ParcelCorridor_Knut_7
	goto ParcelCorridor_Knut_6

ParcelCorridor_Knut_12:
# 724 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Knut_R4
	goto ParcelCorridor_Knut_11

ParcelCorridor_Knut_13:
# 723 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_KNUT_R4
	goto_if 0, ParcelCorridor_Knut_12
	goto ParcelCorridor_Knut_11

ParcelCorridor_Knut_17:
# 727 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Knut_R5
	goto ParcelCorridor_Knut_16

ParcelCorridor_Knut_18:
# 726 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_KNUT_R5
	goto_if 0, ParcelCorridor_Knut_17
	goto ParcelCorridor_Knut_16


ParcelCorridor_Knut_FirstWin::
# 733 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_Text_2, MSGBOX_DEFAULT
# 734 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Knut_R2::
# 738 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 739 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 740 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_0, MSGBOX_YESNO
# 741 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Knut_R2_2
# 746 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_KNUT_R2, ParcelCorridor_Knut_R2_Text_2
# 747 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_3, MSGBOX_DEFAULT
# 748 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Knut_R2_2:
# 742 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_1, MSGBOX_DEFAULT
# 743 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Knut_R3::
# 752 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 753 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 754 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R3_Text_0, MSGBOX_YESNO
# 755 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Knut_R3_2
# 760 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_KNUT_R3, ParcelCorridor_Knut_R2_Text_2
# 761 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R3_Text_1, MSGBOX_DEFAULT
# 762 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Knut_R3_2:
# 756 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_1, MSGBOX_DEFAULT
# 757 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Knut_R4::
# 766 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 767 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 768 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R4_Text_0, MSGBOX_YESNO
# 769 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Knut_R4_2
# 774 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_KNUT_R4, ParcelCorridor_Knut_R2_Text_2
# 775 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R4_Text_1, MSGBOX_DEFAULT
# 776 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Knut_R4_2:
# 770 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_1, MSGBOX_DEFAULT
# 771 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Knut_R5::
# 780 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 781 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 782 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R5_Text_0, MSGBOX_YESNO
# 783 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Knut_R5_2
# 788 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_KNUT_R5, ParcelCorridor_Knut_R5_Text_1
# 789 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R5_Text_2, MSGBOX_DEFAULT
# 790 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Knut_R5_2:
# 784 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_1, MSGBOX_DEFAULT
# 785 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Dag::
# 794 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_DAG, ParcelCorridor_Dag_Text_0, ParcelCorridor_Dag_Text_1, ParcelCorridor_Dag_FirstWin
# 798 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 799 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Dag_3
ParcelCorridor_Dag_1:
# 802 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Dag_8
ParcelCorridor_Dag_6:
# 805 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Dag_13
ParcelCorridor_Dag_11:
# 808 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Dag_18
ParcelCorridor_Dag_16:
# 811 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Dag_2:
# 800 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Dag_R2
	goto ParcelCorridor_Dag_1

ParcelCorridor_Dag_3:
# 799 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_DAG_R2
	goto_if 0, ParcelCorridor_Dag_2
	goto ParcelCorridor_Dag_1

ParcelCorridor_Dag_7:
# 803 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Dag_R3
	goto ParcelCorridor_Dag_6

ParcelCorridor_Dag_8:
# 802 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_DAG_R3
	goto_if 0, ParcelCorridor_Dag_7
	goto ParcelCorridor_Dag_6

ParcelCorridor_Dag_12:
# 806 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Dag_R4
	goto ParcelCorridor_Dag_11

ParcelCorridor_Dag_13:
# 805 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_DAG_R4
	goto_if 0, ParcelCorridor_Dag_12
	goto ParcelCorridor_Dag_11

ParcelCorridor_Dag_17:
# 809 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Dag_R5
	goto ParcelCorridor_Dag_16

ParcelCorridor_Dag_18:
# 808 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_DAG_R5
	goto_if 0, ParcelCorridor_Dag_17
	goto ParcelCorridor_Dag_16


ParcelCorridor_Dag_FirstWin::
# 815 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_Text_2, MSGBOX_DEFAULT
# 816 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Dag_R2::
# 820 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 821 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 822 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_0, MSGBOX_YESNO
# 823 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Dag_R2_2
# 828 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_DAG_R2, ParcelCorridor_Dag_R2_Text_2
# 829 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_3, MSGBOX_DEFAULT
# 830 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Dag_R2_2:
# 824 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_1, MSGBOX_DEFAULT
# 825 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Dag_R3::
# 834 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 835 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 836 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R3_Text_0, MSGBOX_YESNO
# 837 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Dag_R3_2
# 842 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_DAG_R3, ParcelCorridor_Dag_R2_Text_2
# 843 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R3_Text_1, MSGBOX_DEFAULT
# 844 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Dag_R3_2:
# 838 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_1, MSGBOX_DEFAULT
# 839 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Dag_R4::
# 848 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 849 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 850 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R4_Text_0, MSGBOX_YESNO
# 851 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Dag_R4_2
# 856 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_DAG_R4, ParcelCorridor_Dag_R4_Text_1
# 857 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R4_Text_2, MSGBOX_DEFAULT
# 858 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Dag_R4_2:
# 852 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_1, MSGBOX_DEFAULT
# 853 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Dag_R5::
# 862 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 863 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 864 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R5_Text_0, MSGBOX_YESNO
# 865 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Dag_R5_2
# 870 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_DAG_R5, ParcelCorridor_Dag_R5_Text_1
# 871 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R5_Text_2, MSGBOX_DEFAULT
# 872 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Dag_R5_2:
# 866 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_1, MSGBOX_DEFAULT
# 867 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Arne::
# 876 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_ARNE, ParcelCorridor_Arne_Text_0, ParcelCorridor_Arne_Text_1, ParcelCorridor_Arne_FirstWin
# 880 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 881 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Arne_3
ParcelCorridor_Arne_1:
# 884 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Arne_8
ParcelCorridor_Arne_6:
# 887 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Arne_13
ParcelCorridor_Arne_11:
# 890 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Arne_18
ParcelCorridor_Arne_16:
# 893 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Arne_2:
# 882 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Arne_R2
	goto ParcelCorridor_Arne_1

ParcelCorridor_Arne_3:
# 881 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ARNE_R2
	goto_if 0, ParcelCorridor_Arne_2
	goto ParcelCorridor_Arne_1

ParcelCorridor_Arne_7:
# 885 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Arne_R3
	goto ParcelCorridor_Arne_6

ParcelCorridor_Arne_8:
# 884 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ARNE_R3
	goto_if 0, ParcelCorridor_Arne_7
	goto ParcelCorridor_Arne_6

ParcelCorridor_Arne_12:
# 888 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Arne_R4
	goto ParcelCorridor_Arne_11

ParcelCorridor_Arne_13:
# 887 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ARNE_R4
	goto_if 0, ParcelCorridor_Arne_12
	goto ParcelCorridor_Arne_11

ParcelCorridor_Arne_17:
# 891 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Arne_R5
	goto ParcelCorridor_Arne_16

ParcelCorridor_Arne_18:
# 890 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ARNE_R5
	goto_if 0, ParcelCorridor_Arne_17
	goto ParcelCorridor_Arne_16


ParcelCorridor_Arne_FirstWin::
# 897 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_Text_2, MSGBOX_DEFAULT
# 898 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Arne_R2::
# 902 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 903 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 904 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_0, MSGBOX_YESNO
# 905 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Arne_R2_2
# 910 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ARNE_R2, ParcelCorridor_Arne_R2_Text_2
# 911 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_3, MSGBOX_DEFAULT
# 912 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Arne_R2_2:
# 906 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_1, MSGBOX_DEFAULT
# 907 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Arne_R3::
# 916 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 917 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 918 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R3_Text_0, MSGBOX_YESNO
# 919 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Arne_R3_2
# 924 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ARNE_R3, ParcelCorridor_Arne_R3_Text_1
# 925 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R3_Text_2, MSGBOX_DEFAULT
# 926 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Arne_R3_2:
# 920 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_1, MSGBOX_DEFAULT
# 921 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Arne_R4::
# 930 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 931 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 932 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R4_Text_0, MSGBOX_YESNO
# 933 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Arne_R4_2
# 938 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ARNE_R4, ParcelCorridor_Arne_R4_Text_1
# 939 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R4_Text_2, MSGBOX_DEFAULT
# 940 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Arne_R4_2:
# 934 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_1, MSGBOX_DEFAULT
# 935 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Arne_R5::
# 944 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 945 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 946 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R5_Text_0, MSGBOX_YESNO
# 947 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Arne_R5_2
# 952 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ARNE_R5, ParcelCorridor_Arne_R5_Text_1
# 953 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R5_Text_2, MSGBOX_DEFAULT
# 954 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Arne_R5_2:
# 948 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_1, MSGBOX_DEFAULT
# 949 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Sven::
# 958 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_SVEN, ParcelCorridor_Sven_Text_0, ParcelCorridor_Sven_Text_1, ParcelCorridor_Sven_FirstWin
# 962 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 963 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Sven_3
ParcelCorridor_Sven_1:
# 966 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Sven_8
ParcelCorridor_Sven_6:
# 969 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Sven_13
ParcelCorridor_Sven_11:
# 972 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Sven_18
ParcelCorridor_Sven_16:
# 975 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Sven_2:
# 964 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Sven_R2
	goto ParcelCorridor_Sven_1

ParcelCorridor_Sven_3:
# 963 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_SVEN_R2
	goto_if 0, ParcelCorridor_Sven_2
	goto ParcelCorridor_Sven_1

ParcelCorridor_Sven_7:
# 967 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Sven_R3
	goto ParcelCorridor_Sven_6

ParcelCorridor_Sven_8:
# 966 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_SVEN_R3
	goto_if 0, ParcelCorridor_Sven_7
	goto ParcelCorridor_Sven_6

ParcelCorridor_Sven_12:
# 970 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Sven_R4
	goto ParcelCorridor_Sven_11

ParcelCorridor_Sven_13:
# 969 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_SVEN_R4
	goto_if 0, ParcelCorridor_Sven_12
	goto ParcelCorridor_Sven_11

ParcelCorridor_Sven_17:
# 973 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Sven_R5
	goto ParcelCorridor_Sven_16

ParcelCorridor_Sven_18:
# 972 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_SVEN_R5
	goto_if 0, ParcelCorridor_Sven_17
	goto ParcelCorridor_Sven_16


ParcelCorridor_Sven_FirstWin::
# 979 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_Text_2, MSGBOX_DEFAULT
# 980 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Sven_R2::
# 984 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 985 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 986 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_0, MSGBOX_YESNO
# 987 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Sven_R2_2
# 992 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_SVEN_R2, ParcelCorridor_Sven_R2_Text_2
# 993 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_3, MSGBOX_DEFAULT
# 994 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Sven_R2_2:
# 988 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_1, MSGBOX_DEFAULT
# 989 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Sven_R3::
# 998 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 999 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1000 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R3_Text_0, MSGBOX_YESNO
# 1001 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Sven_R3_2
# 1006 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_SVEN_R3, ParcelCorridor_Sven_R3_Text_1
# 1007 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R3_Text_2, MSGBOX_DEFAULT
# 1008 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Sven_R3_2:
# 1002 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_1, MSGBOX_DEFAULT
# 1003 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Sven_R4::
# 1012 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1013 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1014 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R4_Text_0, MSGBOX_YESNO
# 1015 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Sven_R4_2
# 1020 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_SVEN_R4, ParcelCorridor_Sven_R4_Text_1
# 1021 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R4_Text_2, MSGBOX_DEFAULT
# 1022 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Sven_R4_2:
# 1016 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_1, MSGBOX_DEFAULT
# 1017 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Sven_R5::
# 1026 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1027 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1028 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R5_Text_0, MSGBOX_YESNO
# 1029 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Sven_R5_2
# 1034 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_SVEN_R5, ParcelCorridor_Sven_R5_Text_1
# 1035 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R5_Text_2, MSGBOX_DEFAULT
# 1036 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Sven_R5_2:
# 1030 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_1, MSGBOX_DEFAULT
# 1031 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Olav::
# 1040 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_OLAV, ParcelCorridor_Olav_Text_0, ParcelCorridor_Olav_Text_1, ParcelCorridor_Olav_FirstWin
# 1044 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1045 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Olav_3
ParcelCorridor_Olav_1:
# 1048 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Olav_8
ParcelCorridor_Olav_6:
# 1051 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Olav_13
ParcelCorridor_Olav_11:
# 1054 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Olav_18
ParcelCorridor_Olav_16:
# 1057 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Olav_2:
# 1046 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Olav_R2
	goto ParcelCorridor_Olav_1

ParcelCorridor_Olav_3:
# 1045 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_OLAV_R2
	goto_if 0, ParcelCorridor_Olav_2
	goto ParcelCorridor_Olav_1

ParcelCorridor_Olav_7:
# 1049 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Olav_R3
	goto ParcelCorridor_Olav_6

ParcelCorridor_Olav_8:
# 1048 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_OLAV_R3
	goto_if 0, ParcelCorridor_Olav_7
	goto ParcelCorridor_Olav_6

ParcelCorridor_Olav_12:
# 1052 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Olav_R4
	goto ParcelCorridor_Olav_11

ParcelCorridor_Olav_13:
# 1051 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_OLAV_R4
	goto_if 0, ParcelCorridor_Olav_12
	goto ParcelCorridor_Olav_11

ParcelCorridor_Olav_17:
# 1055 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Olav_R5
	goto ParcelCorridor_Olav_16

ParcelCorridor_Olav_18:
# 1054 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_OLAV_R5
	goto_if 0, ParcelCorridor_Olav_17
	goto ParcelCorridor_Olav_16


ParcelCorridor_Olav_FirstWin::
# 1061 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_Text_2, MSGBOX_DEFAULT
# 1062 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Olav_R2::
# 1066 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1067 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1068 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_0, MSGBOX_YESNO
# 1069 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Olav_R2_2
# 1074 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_OLAV_R2, ParcelCorridor_Olav_R2_Text_2
# 1075 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_3, MSGBOX_DEFAULT
# 1076 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Olav_R2_2:
# 1070 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_1, MSGBOX_DEFAULT
# 1071 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Olav_R3::
# 1080 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1081 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1082 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R3_Text_0, MSGBOX_YESNO
# 1083 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Olav_R3_2
# 1088 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_OLAV_R3, ParcelCorridor_Olav_R3_Text_1
# 1089 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R3_Text_2, MSGBOX_DEFAULT
# 1090 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Olav_R3_2:
# 1084 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_1, MSGBOX_DEFAULT
# 1085 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Olav_R4::
# 1094 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1095 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1096 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R4_Text_0, MSGBOX_YESNO
# 1097 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Olav_R4_2
# 1102 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_OLAV_R4, ParcelCorridor_Olav_R2_Text_2
# 1103 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R4_Text_1, MSGBOX_DEFAULT
# 1104 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Olav_R4_2:
# 1098 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_1, MSGBOX_DEFAULT
# 1099 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Olav_R5::
# 1108 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1109 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1110 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R5_Text_0, MSGBOX_YESNO
# 1111 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Olav_R5_2
# 1116 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_OLAV_R5, ParcelCorridor_Olav_R2_Text_2
# 1117 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R5_Text_1, MSGBOX_DEFAULT
# 1118 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Olav_R5_2:
# 1112 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_1, MSGBOX_DEFAULT
# 1113 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Inga::
# 1122 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_INGA, ParcelCorridor_Inga_Text_0, ParcelCorridor_Inga_Text_1, ParcelCorridor_Inga_FirstWin
# 1126 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1127 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Inga_3
ParcelCorridor_Inga_1:
# 1130 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Inga_8
ParcelCorridor_Inga_6:
# 1133 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Inga_13
ParcelCorridor_Inga_11:
# 1136 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Inga_18
ParcelCorridor_Inga_16:
# 1139 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Inga_2:
# 1128 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Inga_R2
	goto ParcelCorridor_Inga_1

ParcelCorridor_Inga_3:
# 1127 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_INGA_R2
	goto_if 0, ParcelCorridor_Inga_2
	goto ParcelCorridor_Inga_1

ParcelCorridor_Inga_7:
# 1131 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Inga_R3
	goto ParcelCorridor_Inga_6

ParcelCorridor_Inga_8:
# 1130 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_INGA_R3
	goto_if 0, ParcelCorridor_Inga_7
	goto ParcelCorridor_Inga_6

ParcelCorridor_Inga_12:
# 1134 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Inga_R4
	goto ParcelCorridor_Inga_11

ParcelCorridor_Inga_13:
# 1133 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_INGA_R4
	goto_if 0, ParcelCorridor_Inga_12
	goto ParcelCorridor_Inga_11

ParcelCorridor_Inga_17:
# 1137 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Inga_R5
	goto ParcelCorridor_Inga_16

ParcelCorridor_Inga_18:
# 1136 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_INGA_R5
	goto_if 0, ParcelCorridor_Inga_17
	goto ParcelCorridor_Inga_16


ParcelCorridor_Inga_FirstWin::
# 1143 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_Text_2, MSGBOX_DEFAULT
# 1144 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Inga_R2::
# 1148 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1149 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1150 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_0, MSGBOX_YESNO
# 1151 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Inga_R2_2
# 1156 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_INGA_R2, ParcelCorridor_Inga_R2_Text_2
# 1157 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_3, MSGBOX_DEFAULT
# 1158 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Inga_R2_2:
# 1152 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_1, MSGBOX_DEFAULT
# 1153 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Inga_R3::
# 1162 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1163 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1164 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R3_Text_0, MSGBOX_YESNO
# 1165 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Inga_R3_2
# 1170 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_INGA_R3, ParcelCorridor_Inga_R2_Text_2
# 1171 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R3_Text_1, MSGBOX_DEFAULT
# 1172 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Inga_R3_2:
# 1166 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_1, MSGBOX_DEFAULT
# 1167 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Inga_R4::
# 1176 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1177 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1178 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R4_Text_0, MSGBOX_YESNO
# 1179 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Inga_R4_2
# 1184 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_INGA_R4, ParcelCorridor_Inga_R4_Text_1
# 1185 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R4_Text_2, MSGBOX_DEFAULT
# 1186 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Inga_R4_2:
# 1180 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_1, MSGBOX_DEFAULT
# 1181 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Inga_R5::
# 1190 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1191 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1192 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R5_Text_0, MSGBOX_YESNO
# 1193 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Inga_R5_2
# 1198 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_INGA_R5, ParcelCorridor_Inga_R5_Text_1
# 1199 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R5_Text_2, MSGBOX_DEFAULT
# 1200 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Inga_R5_2:
# 1194 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_1, MSGBOX_DEFAULT
# 1195 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Turid::
# 1204 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_TURID, ParcelCorridor_Turid_Text_0, ParcelCorridor_Turid_Text_1, ParcelCorridor_Turid_FirstWin
# 1208 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1209 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Turid_3
ParcelCorridor_Turid_1:
# 1212 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Turid_8
ParcelCorridor_Turid_6:
# 1215 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Turid_13
ParcelCorridor_Turid_11:
# 1218 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Turid_18
ParcelCorridor_Turid_16:
# 1221 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Turid_2:
# 1210 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Turid_R2
	goto ParcelCorridor_Turid_1

ParcelCorridor_Turid_3:
# 1209 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_TURID_R2
	goto_if 0, ParcelCorridor_Turid_2
	goto ParcelCorridor_Turid_1

ParcelCorridor_Turid_7:
# 1213 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Turid_R3
	goto ParcelCorridor_Turid_6

ParcelCorridor_Turid_8:
# 1212 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_TURID_R3
	goto_if 0, ParcelCorridor_Turid_7
	goto ParcelCorridor_Turid_6

ParcelCorridor_Turid_12:
# 1216 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Turid_R4
	goto ParcelCorridor_Turid_11

ParcelCorridor_Turid_13:
# 1215 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_TURID_R4
	goto_if 0, ParcelCorridor_Turid_12
	goto ParcelCorridor_Turid_11

ParcelCorridor_Turid_17:
# 1219 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Turid_R5
	goto ParcelCorridor_Turid_16

ParcelCorridor_Turid_18:
# 1218 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_TURID_R5
	goto_if 0, ParcelCorridor_Turid_17
	goto ParcelCorridor_Turid_16


ParcelCorridor_Turid_FirstWin::
# 1225 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_Text_2, MSGBOX_DEFAULT
# 1226 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Turid_R2::
# 1230 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1231 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1232 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_0, MSGBOX_YESNO
# 1233 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Turid_R2_2
# 1238 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_TURID_R2, ParcelCorridor_Turid_R2_Text_2
# 1239 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_3, MSGBOX_DEFAULT
# 1240 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Turid_R2_2:
# 1234 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_1, MSGBOX_DEFAULT
# 1235 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Turid_R3::
# 1244 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1245 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1246 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R3_Text_0, MSGBOX_YESNO
# 1247 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Turid_R3_2
# 1252 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_TURID_R3, ParcelCorridor_Turid_R3_Text_1
# 1253 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R3_Text_2, MSGBOX_DEFAULT
# 1254 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Turid_R3_2:
# 1248 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_1, MSGBOX_DEFAULT
# 1249 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Turid_R4::
# 1258 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1259 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1260 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R4_Text_0, MSGBOX_YESNO
# 1261 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Turid_R4_2
# 1266 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_TURID_R4, ParcelCorridor_Turid_R4_Text_1
# 1267 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R4_Text_2, MSGBOX_DEFAULT
# 1268 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Turid_R4_2:
# 1262 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_1, MSGBOX_DEFAULT
# 1263 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Turid_R5::
# 1272 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1273 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1274 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R5_Text_0, MSGBOX_YESNO
# 1275 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Turid_R5_2
# 1280 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_TURID_R5, ParcelCorridor_Turid_R5_Text_1
# 1281 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R5_Text_2, MSGBOX_DEFAULT
# 1282 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Turid_R5_2:
# 1276 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_1, MSGBOX_DEFAULT
# 1277 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Vidar::
# 1288 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_VIDAR, ParcelCorridor_T_Vidar_Text_0, ParcelCorridor_T_Vidar_Text_1, ParcelCorridor_T_Vidar_FirstWin
# 1292 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1293 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_T_Vidar_3
ParcelCorridor_T_Vidar_1:
# 1296 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_T_Vidar_8
ParcelCorridor_T_Vidar_6:
# 1299 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_T_Vidar_13
ParcelCorridor_T_Vidar_11:
# 1302 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_T_Vidar_18
ParcelCorridor_T_Vidar_16:
# 1305 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_T_Vidar_2:
# 1294 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Vidar_R2
	goto ParcelCorridor_T_Vidar_1

ParcelCorridor_T_Vidar_3:
# 1293 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_VIDAR_R2
	goto_if 0, ParcelCorridor_T_Vidar_2
	goto ParcelCorridor_T_Vidar_1

ParcelCorridor_T_Vidar_7:
# 1297 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Vidar_R3
	goto ParcelCorridor_T_Vidar_6

ParcelCorridor_T_Vidar_8:
# 1296 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_VIDAR_R3
	goto_if 0, ParcelCorridor_T_Vidar_7
	goto ParcelCorridor_T_Vidar_6

ParcelCorridor_T_Vidar_12:
# 1300 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Vidar_R4
	goto ParcelCorridor_T_Vidar_11

ParcelCorridor_T_Vidar_13:
# 1299 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_VIDAR_R4
	goto_if 0, ParcelCorridor_T_Vidar_12
	goto ParcelCorridor_T_Vidar_11

ParcelCorridor_T_Vidar_17:
# 1303 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Vidar_R5
	goto ParcelCorridor_T_Vidar_16

ParcelCorridor_T_Vidar_18:
# 1302 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_VIDAR_R5
	goto_if 0, ParcelCorridor_T_Vidar_17
	goto ParcelCorridor_T_Vidar_16


ParcelCorridor_T_Vidar_FirstWin::
# 1309 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_Text_2, MSGBOX_DEFAULT
# 1310 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Vidar_R2::
# 1314 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1315 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1316 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_0, MSGBOX_YESNO
# 1317 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Vidar_R2_2
# 1322 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_VIDAR_R2, ParcelCorridor_T_Vidar_R2_Text_2
# 1323 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_3, MSGBOX_DEFAULT
# 1324 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Vidar_R2_2:
# 1318 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 1319 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Vidar_R3::
# 1328 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1329 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1330 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R3_Text_0, MSGBOX_YESNO
# 1331 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Vidar_R3_2
# 1336 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_VIDAR_R3, ParcelCorridor_T_Vidar_R3_Text_1
# 1337 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R3_Text_2, MSGBOX_DEFAULT
# 1338 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Vidar_R3_2:
# 1332 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 1333 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Vidar_R4::
# 1342 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1343 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1344 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R4_Text_0, MSGBOX_YESNO
# 1345 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Vidar_R4_2
# 1350 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_VIDAR_R4, ParcelCorridor_T_Vidar_R2_Text_2
# 1351 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R4_Text_1, MSGBOX_DEFAULT
# 1352 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Vidar_R4_2:
# 1346 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 1347 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Vidar_R5::
# 1356 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1357 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1358 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R5_Text_0, MSGBOX_YESNO
# 1359 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Vidar_R5_2
# 1364 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_VIDAR_R5, ParcelCorridor_T_Vidar_R5_Text_1
# 1365 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R5_Text_2, MSGBOX_DEFAULT
# 1366 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Vidar_R5_2:
# 1360 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 1361 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Halle::
# 1370 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_HALLE, ParcelCorridor_T_Halle_Text_0, ParcelCorridor_T_Halle_Text_1, ParcelCorridor_T_Halle_FirstWin
# 1374 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1375 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_T_Halle_3
ParcelCorridor_T_Halle_1:
# 1378 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_T_Halle_8
ParcelCorridor_T_Halle_6:
# 1381 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_T_Halle_13
ParcelCorridor_T_Halle_11:
# 1384 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_T_Halle_18
ParcelCorridor_T_Halle_16:
# 1387 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_T_Halle_2:
# 1376 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Halle_R2
	goto ParcelCorridor_T_Halle_1

ParcelCorridor_T_Halle_3:
# 1375 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_HALLE_R2
	goto_if 0, ParcelCorridor_T_Halle_2
	goto ParcelCorridor_T_Halle_1

ParcelCorridor_T_Halle_7:
# 1379 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Halle_R3
	goto ParcelCorridor_T_Halle_6

ParcelCorridor_T_Halle_8:
# 1378 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_HALLE_R3
	goto_if 0, ParcelCorridor_T_Halle_7
	goto ParcelCorridor_T_Halle_6

ParcelCorridor_T_Halle_12:
# 1382 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Halle_R4
	goto ParcelCorridor_T_Halle_11

ParcelCorridor_T_Halle_13:
# 1381 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_HALLE_R4
	goto_if 0, ParcelCorridor_T_Halle_12
	goto ParcelCorridor_T_Halle_11

ParcelCorridor_T_Halle_17:
# 1385 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Halle_R5
	goto ParcelCorridor_T_Halle_16

ParcelCorridor_T_Halle_18:
# 1384 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_HALLE_R5
	goto_if 0, ParcelCorridor_T_Halle_17
	goto ParcelCorridor_T_Halle_16


ParcelCorridor_T_Halle_FirstWin::
# 1391 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_Text_2, MSGBOX_DEFAULT
# 1392 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Halle_R2::
# 1396 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1397 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1398 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_0, MSGBOX_YESNO
# 1399 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Halle_R2_2
# 1404 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_HALLE_R2, ParcelCorridor_T_Halle_R2_Text_2
# 1405 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_3, MSGBOX_DEFAULT
# 1406 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Halle_R2_2:
# 1400 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_1, MSGBOX_DEFAULT
# 1401 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Halle_R3::
# 1410 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1411 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1412 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R3_Text_0, MSGBOX_YESNO
# 1413 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Halle_R3_2
# 1418 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_HALLE_R3, ParcelCorridor_T_Halle_R3_Text_1
# 1419 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R3_Text_2, MSGBOX_DEFAULT
# 1420 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Halle_R3_2:
# 1414 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_1, MSGBOX_DEFAULT
# 1415 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Halle_R4::
# 1424 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1425 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1426 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R4_Text_0, MSGBOX_YESNO
# 1427 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Halle_R4_2
# 1432 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_HALLE_R4, ParcelCorridor_T_Halle_R2_Text_2
# 1433 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R4_Text_1, MSGBOX_DEFAULT
# 1434 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Halle_R4_2:
# 1428 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_1, MSGBOX_DEFAULT
# 1429 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Halle_R5::
# 1438 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1439 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1440 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R5_Text_0, MSGBOX_YESNO
# 1441 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Halle_R5_2
# 1446 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_HALLE_R5, ParcelCorridor_T_Halle_R3_Text_1
# 1447 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R5_Text_1, MSGBOX_DEFAULT
# 1448 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Halle_R5_2:
# 1442 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_1, MSGBOX_DEFAULT
# 1443 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Elin::
# 1452 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_ELIN, ParcelCorridor_T_Elin_Text_0, ParcelCorridor_T_Elin_Text_1, ParcelCorridor_T_Elin_FirstWin
# 1456 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1457 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_T_Elin_3
ParcelCorridor_T_Elin_1:
# 1460 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_T_Elin_8
ParcelCorridor_T_Elin_6:
# 1463 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_T_Elin_13
ParcelCorridor_T_Elin_11:
# 1466 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_T_Elin_18
ParcelCorridor_T_Elin_16:
# 1469 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_T_Elin_2:
# 1458 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Elin_R2
	goto ParcelCorridor_T_Elin_1

ParcelCorridor_T_Elin_3:
# 1457 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELIN_R2
	goto_if 0, ParcelCorridor_T_Elin_2
	goto ParcelCorridor_T_Elin_1

ParcelCorridor_T_Elin_7:
# 1461 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Elin_R3
	goto ParcelCorridor_T_Elin_6

ParcelCorridor_T_Elin_8:
# 1460 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELIN_R3
	goto_if 0, ParcelCorridor_T_Elin_7
	goto ParcelCorridor_T_Elin_6

ParcelCorridor_T_Elin_12:
# 1464 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Elin_R4
	goto ParcelCorridor_T_Elin_11

ParcelCorridor_T_Elin_13:
# 1463 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELIN_R4
	goto_if 0, ParcelCorridor_T_Elin_12
	goto ParcelCorridor_T_Elin_11

ParcelCorridor_T_Elin_17:
# 1467 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Elin_R5
	goto ParcelCorridor_T_Elin_16

ParcelCorridor_T_Elin_18:
# 1466 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELIN_R5
	goto_if 0, ParcelCorridor_T_Elin_17
	goto ParcelCorridor_T_Elin_16


ParcelCorridor_T_Elin_FirstWin::
# 1473 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_Text_2, MSGBOX_DEFAULT
# 1474 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Elin_R2::
# 1478 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1479 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1480 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_0, MSGBOX_YESNO
# 1481 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Elin_R2_2
# 1486 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELIN_R2, ParcelCorridor_T_Elin_R2_Text_2
# 1487 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_3, MSGBOX_DEFAULT
# 1488 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Elin_R2_2:
# 1482 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_1, MSGBOX_DEFAULT
# 1483 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Elin_R3::
# 1492 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1493 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1494 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R3_Text_0, MSGBOX_YESNO
# 1495 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Elin_R3_2
# 1500 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELIN_R3, ParcelCorridor_T_Elin_R3_Text_1
# 1501 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R3_Text_2, MSGBOX_DEFAULT
# 1502 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Elin_R3_2:
# 1496 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_1, MSGBOX_DEFAULT
# 1497 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Elin_R4::
# 1506 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1507 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1508 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R4_Text_0, MSGBOX_YESNO
# 1509 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Elin_R4_2
# 1514 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELIN_R4, ParcelCorridor_T_Elin_R4_Text_1
# 1515 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R4_Text_2, MSGBOX_DEFAULT
# 1516 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Elin_R4_2:
# 1510 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_1, MSGBOX_DEFAULT
# 1511 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Elin_R5::
# 1520 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1521 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1522 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R5_Text_0, MSGBOX_YESNO
# 1523 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Elin_R5_2
# 1528 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELIN_R5, ParcelCorridor_T_Elin_R5_Text_1
# 1529 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R5_Text_2, MSGBOX_DEFAULT
# 1530 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Elin_R5_2:
# 1524 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_1, MSGBOX_DEFAULT
# 1525 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_PerrinScene::
# 1536 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_3, ParcelCorridor_PerrinScene_2
# 1540 "data/maps/ParcelCorridor/scripts.pory"
	lockall
# 1541 "data/maps/ParcelCorridor/scripts.pory"
	playse SE_PIN
# 1542 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PerrinScene_Text_0, MSGBOX_DEFAULT
# 1543 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 1544 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 23, Movement_ParcelCorridor_PerrinIn
# 1545 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 1546 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PerrinScene_Text_1, MSGBOX_DEFAULT
# 1547 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_3, ParcelCorridor_PerrinScene_Text_2
# 1548 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PerrinScene_Text_3, MSGBOX_DEFAULT
# 1549 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 1550 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 23, Movement_ParcelCorridor_PerrinOut
# 1551 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 1552 "data/maps/ParcelCorridor/scripts.pory"
	removeobject 23
# 1553 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_SKALD_PERRIN_3
# 1554 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1555 "data/maps/ParcelCorridor/scripts.pory"
	releaseall
	end

ParcelCorridor_PerrinScene_2:
# 1537 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelCorridor_PerrinTalk::
# 1559 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1560 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1561 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 1562 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


# 1565 "data/maps/ParcelCorridor/scripts.pory"
Movement_ParcelCorridor_PerrinIn:
# 1565 "data/maps/ParcelCorridor/scripts.pory"
	walk_down
# 1565 "data/maps/ParcelCorridor/scripts.pory"
	walk_down
	step_end

# 1566 "data/maps/ParcelCorridor/scripts.pory"
Movement_ParcelCorridor_PerrinOut:
# 1566 "data/maps/ParcelCorridor/scripts.pory"
	walk_up
# 1566 "data/maps/ParcelCorridor/scripts.pory"
	walk_up
	step_end

ParcelCorridor_Mirren_Rematch::
# 1570 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1571 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1572 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Mirren_Rematch_Text_0, MSGBOX_YESNO
# 1573 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Mirren_Rematch_2
# 1578 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM2_R, ParcelCorridor_Mirren_Rematch_Text_2
# 1579 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Mirren_Rematch_Text_3, MSGBOX_DEFAULT
# 1580 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Mirren_Rematch_2:
# 1574 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Mirren_Rematch_Text_1, MSGBOX_DEFAULT
# 1575 "data/maps/ParcelCorridor/scripts.pory"
	release
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
# 143 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: Quite a current through there,\n"
	.string "eh?\p"
	.string "HOLLOWBEND drainage works. Culvert's\n"
	.string "ours. Meets code.$"

ParcelCorridor_Worker_Text_1:
# 147 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: Oh good. You're with the\n"
	.string "station, right? We've been meaning to\l"
	.string "flag this.\p"
	.string "Drainage specs met code, but wildlife\n"
	.string "keeps clogging it. We're scheduled to\l"
	.string "install grates next month.$"

ParcelCorridor_Worker_Text_2:
# 148 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: It meets regulation. But if you\n"
	.string "want, I can note that RANGERS were\l"
	.string "consulted.$"

ParcelCorridor_Worker_Text_3:
# 149 "data/maps/ParcelCorridor/scripts.pory"
	.string "Note that RANGERS were consulted?$"

ParcelCorridor_Worker_Text_4:
# 151 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: …\p"
	.string "No. Who approved the design?$"

ParcelCorridor_Worker_Text_5:
# 153 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: No. Who approved the\n"
	.string "design?$"

ParcelCorridor_Worker_Text_6:
# 155 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: Do you have the\n"
	.string "pre-construction flow data?$"

ParcelCorridor_Worker_Text_7:
# 156 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: That'd be… county records, I\n"
	.string "think. Or the contractor. It's in the\l"
	.string "hut, maybe. The spec sheet is.$"

ParcelCorridor_Worker_Text_8:
# 157 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: Grates would solve your\n"
	.string "problem. They wouldn't solve the\l"
	.string "WOOPER's.\p"
	.string "Fixing it later might mean it's already\n"
	.string "too late.$"

ParcelCorridor_Worker_Text_9:
# 158 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: …I'll note that the corridor\n"
	.string "width changed.$"

ParcelCorridor_Worker_Text_10:
# 159 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: It's not enough.$"

ParcelCorridor_Worker_Text_11:
# 160 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: It's not nothing. Crew 14, if\n"
	.string "anyone asks who said it.$"

ParcelCorridor_Worker_Text_12:
# 168 "data/maps/ParcelCorridor/scripts.pory"
	.string "Written down: the specs, the schedule,\n"
	.string "the missing data, the crew number.\p"
	.string "The report will move slowly. It will be\n"
	.string "questioned. Maybe ignored. But it\l"
	.string "exists now.$"

ParcelCorridor_ObsStumps_Text_0:
# 175 "data/maps/ParcelCorridor/scripts.pory"
	.string "Old stumps in a rough line, cut flat,\n"
	.string "grey with years.\p"
	.string "The forest didn't thin here. It was\n"
	.string "thinned.$"

ParcelCorridor_ObsMoss_Text_0:
# 179 "data/maps/ParcelCorridor/scripts.pory"
	.string "Moss thick on the north faces, gone\n"
	.string "where the canopy used to hold the damp.$"

ParcelCorridor_ObsDrainage_Text_0:
# 183 "data/maps/ParcelCorridor/scripts.pory"
	.string "A drainage cut, knife-straight, running\n"
	.string "off under the trees.\p"
	.string "Nothing in nature drains like this.$"

ParcelCorridor_ObsRoad_Text_0:
# 187 "data/maps/ParcelCorridor/scripts.pory"
	.string "A cracked service road, half-reclaimed\n"
	.string "by weeds.\p"
	.string "It looks abandoned. It isn't harmless.$"

ParcelCorridor_ObsCulvert_Text_0:
# 191 "data/maps/ParcelCorridor/scripts.pory"
	.string "The culvert. Concrete, narrow,\n"
	.string "functional.\p"
	.string "Upstream: broad and braided.\n"
	.string "Downstream: a single fast channel.$"

ParcelCorridor_SignWest_Text_0:
# 197 "data/maps/ParcelCorridor/scripts.pory"
	.string "HOLLOWBEND SPUR\p"
	.string "West: REEDMERE landing.\n"
	.string "East: the old service cut. Road closed\l"
	.string "to vehicles.$"

ParcelCorridor_SignCheckpoint_Text_0:
# 201 "data/maps/ParcelCorridor/scripts.pory"
	.string "MEREHOLT SUBSURFACE SURVEY\n"
	.string "Checkpoint\p"
	.string "Clearance required beyond this point.\n"
	.string "Provisional RANGERS report to the\l"
	.string "officer on duty.$"

ParcelCorridor_SignNorth_Text_0:
# 205 "data/maps/ParcelCorridor/scripts.pory"
	.string "North: the FLOODBASIN. Corps survey\n"
	.string "stakes from here. Keep to the marked\l"
	.string "path.$"

ParcelCorridor_SignAdit_Text_0:
# 209 "data/maps/ParcelCorridor/scripts.pory"
	.string "MEREHOLT SUBSURFACE SURVEY -- ADIT 3\p"
	.string "Pumped dry. No lighting. Keep out.$"

ParcelCorridor_Geir_Text_0:
# 221 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Nobody walks the cut anymore.\n"
	.string "Just me and the stumps. And you,\l"
	.string "apparently.$"

ParcelCorridor_Geir_Text_1:
# 222 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Stumps don't hit back. Noted.$"

ParcelCorridor_Geir_Text_2:
# 237 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: They logged this whole spur in\n"
	.string "one winter. The road was for the trucks.\l"
	.string "Then the trucks stopped coming.$"

ParcelCorridor_Geir_R2_Text_0:
# 248 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelCorridor_Geir_R2_Text_1:
# 250 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Another time, then.$"

ParcelCorridor_Geir_R2_Text_2:
# 254 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Noted. Properly, this time.$"

ParcelCorridor_Geir_R2_Text_3:
# 255 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Geir_R3_Text_0:
# 262 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCorridor_Geir_R3_Text_1:
# 268 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: …Again, then. Later.$"

ParcelCorridor_Geir_R3_Text_2:
# 269 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Geir_R4_Text_0:
# 276 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCorridor_Geir_R4_Text_1:
# 282 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Still yours.$"

ParcelCorridor_Geir_R4_Text_2:
# 283 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_Geir_R5_Text_0:
# 290 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCorridor_Geir_R5_Text_1:
# 297 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCorridor_Per_Text_0:
# 303 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: The moths only come out where the\n"
	.string "big trees are left. I counted. Battle?$"

ParcelCorridor_Per_Text_1:
# 304 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: You counted better.$"

ParcelCorridor_Per_Text_2:
# 319 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Six DUSTOX in the old stand by the\n"
	.string "ledges. Zero in the cut. That's a number,\l"
	.string "isn't it? That's a finding.$"

ParcelCorridor_Per_R2_Text_0:
# 330 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCorridor_Per_R2_Text_1:
# 332 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Fine. Same spot.$"

ParcelCorridor_Per_R2_Text_2:
# 336 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: That's the one I wanted to see.$"

ParcelCorridor_Per_R2_Text_3:
# 337 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Per_R3_Text_0:
# 344 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCorridor_Per_R3_Text_1:
# 350 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Noted. Properly, this time.$"

ParcelCorridor_Per_R3_Text_2:
# 351 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Per_R4_Text_0:
# 358 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelCorridor_Per_R4_Text_1:
# 364 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: …Fair.$"

ParcelCorridor_Per_R4_Text_2:
# 365 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Per_R5_Text_0:
# 372 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridor_Per_R5_Text_1:
# 378 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Right. That's the whole of it.$"

ParcelCorridor_Per_R5_Text_2:
# 379 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Rune_Text_0:
# 385 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: The ledges are the best bit. You\n"
	.string "can jump them. Can you jump me?$"

ParcelCorridor_Rune_Text_1:
# 386 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Jumped.$"

ParcelCorridor_Rune_Text_2:
# 401 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: The CORPS cadets won't jump the\n"
	.string "ledges. 'Erosion.' It's a ledge!$"

ParcelCorridor_Rune_R2_Text_0:
# 412 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCorridor_Rune_R2_Text_1:
# 414 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: No hurry. The water keeps.$"

ParcelCorridor_Rune_R2_Text_2:
# 418 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Right. That's the whole of it.$"

ParcelCorridor_Rune_R2_Text_3:
# 419 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Rune_R3_Text_0:
# 426 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelCorridor_Rune_R3_Text_1:
# 432 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: That's the one I wanted to see.$"

ParcelCorridor_Rune_R3_Text_2:
# 433 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Rune_R4_Text_0:
# 440 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCorridor_Rune_R4_Text_1:
# 447 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Rune_R5_Text_0:
# 454 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCorridor_Rune_R5_Text_1:
# 460 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Noted. Properly, this time.$"

ParcelCorridor_Rune_R5_Text_2:
# 461 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Else_Text_0:
# 467 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Quiet, isn't it. Too quiet. Nothing\n"
	.string "lives in a cut like this except trainers.$"

ParcelCorridor_Else_Text_1:
# 468 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: And now one fewer.$"

ParcelCorridor_Else_Text_2:
# 483 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: There used to be a stream\n"
	.string "through the grass here. You can still\l"
	.string "see where. Dry as a bone.$"

ParcelCorridor_Else_R2_Text_0:
# 494 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCorridor_Else_R2_Text_1:
# 496 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: No hurry. The water keeps.$"

ParcelCorridor_Else_R2_Text_2:
# 500 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: …Again, then. Later.$"

ParcelCorridor_Else_R2_Text_3:
# 501 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Else_R3_Text_0:
# 508 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCorridor_Else_R3_Text_1:
# 515 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Else_R4_Text_0:
# 522 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCorridor_Else_R4_Text_1:
# 528 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Right. That's the whole of it.$"

ParcelCorridor_Else_R4_Text_2:
# 529 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Else_R5_Text_0:
# 536 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCorridor_Else_R5_Text_1:
# 543 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Ulf_Text_0:
# 549 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: My NINCADA dug up a drainage pipe\n"
	.string "yesterday. A pipe! In the middle of\l"
	.string "nowhere!$"

ParcelCorridor_Ulf_Text_1:
# 550 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: It digs better than it fights.$"

ParcelCorridor_Ulf_Text_2:
# 565 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Somebody drained this whole\n"
	.string "stretch on purpose. For a road nobody\l"
	.string "uses.$"

ParcelCorridor_Ulf_R2_Text_0:
# 576 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: I kept the team up for this. Again?$"

ParcelCorridor_Ulf_R2_Text_1:
# 578 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Suit yourself. I'm here.$"

ParcelCorridor_Ulf_R2_Text_2:
# 582 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Noted. Properly, this time.$"

ParcelCorridor_Ulf_R2_Text_3:
# 583 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Ulf_R3_Text_0:
# 590 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelCorridor_Ulf_R3_Text_1:
# 597 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Ulf_R4_Text_0:
# 604 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelCorridor_Ulf_R4_Text_1:
# 610 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Still yours.$"

ParcelCorridor_Ulf_R4_Text_2:
# 611 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Ulf_R5_Text_0:
# 618 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCorridor_Ulf_R5_Text_1:
# 624 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: …Again, then. Later.$"

ParcelCorridor_Ulf_R5_Text_2:
# 625 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Gro_Text_0:
# 631 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: I'm walking to FERNWICK the long\n"
	.string "way. The long way has more battles.$"

ParcelCorridor_Gro_Text_1:
# 632 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Longer than I thought.$"

ParcelCorridor_Gro_Text_2:
# 647 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: A woman in a MEREHOLT coat has the\n"
	.string "road blocked up ahead. She made me show\l"
	.string "my trainer card. It's a ROAD.$"

ParcelCorridor_Gro_R2_Text_0:
# 658 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: I kept the team up for this. Again?$"

ParcelCorridor_Gro_R2_Text_1:
# 660 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCorridor_Gro_R2_Text_2:
# 664 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Right. That's the whole of it.$"

ParcelCorridor_Gro_R2_Text_3:
# 665 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Gro_R3_Text_0:
# 672 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Gro_R3_Text_1:
# 678 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: …Fair.$"

ParcelCorridor_Gro_R3_Text_2:
# 679 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Gro_R4_Text_0:
# 686 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelCorridor_Gro_R4_Text_1:
# 693 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_Gro_R5_Text_0:
# 700 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridor_Gro_R5_Text_1:
# 706 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: That's the one I wanted to see.$"

ParcelCorridor_Gro_R5_Text_2:
# 707 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCorridor_Knut_Text_0:
# 713 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: POOCHYENA country. They came in\n"
	.string "when the trees came out. Mine's the\l"
	.string "biggest.$"

ParcelCorridor_Knut_Text_1:
# 714 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Not the biggest, then.$"

ParcelCorridor_Knut_Text_2:
# 729 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Nothing but POOCHYENA and\n"
	.string "ZIGZAGOON in the cut now. Dad says\l"
	.string "there were MAWILE once. In the rocks.$"

ParcelCorridor_Knut_R2_Text_0:
# 740 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelCorridor_Knut_R2_Text_1:
# 742 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Suit yourself. I'm here.$"

ParcelCorridor_Knut_R2_Text_2:
# 746 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Right. That's the whole of it.$"

ParcelCorridor_Knut_R2_Text_3:
# 747 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Knut_R3_Text_0:
# 754 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Knut_R3_Text_1:
# 761 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Knut_R4_Text_0:
# 768 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCorridor_Knut_R4_Text_1:
# 775 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Knut_R5_Text_0:
# 782 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridor_Knut_R5_Text_1:
# 788 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: That's the one I wanted to see.$"

ParcelCorridor_Knut_R5_Text_2:
# 789 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Dag_Text_0:
# 795 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Cadet DAG. I'm supposed to be\n"
	.string "staking the path north. Spar first.\l"
	.string "HALE's orders.$"

ParcelCorridor_Dag_Text_1:
# 796 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Fine. Stakes.$"

ParcelCorridor_Dag_Text_2:
# 811 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: The basin's north, over the\n"
	.string "plateau. Follow the stakes with red\l"
	.string "cloth. The ones without cloth are\l"
	.string "MEREHOLT's.$"

ParcelCorridor_Dag_R2_Text_0:
# 822 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: I kept the team up for this. Again?$"

ParcelCorridor_Dag_R2_Text_1:
# 824 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Suit yourself. I'm here.$"

ParcelCorridor_Dag_R2_Text_2:
# 828 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: That's the one I wanted to see.$"

ParcelCorridor_Dag_R2_Text_3:
# 829 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Dag_R3_Text_0:
# 836 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCorridor_Dag_R3_Text_1:
# 843 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Dag_R4_Text_0:
# 850 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCorridor_Dag_R4_Text_1:
# 856 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: …Again, then. Later.$"

ParcelCorridor_Dag_R4_Text_2:
# 857 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_Dag_R5_Text_0:
# 864 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCorridor_Dag_R5_Text_1:
# 870 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Right. That's the whole of it.$"

ParcelCorridor_Dag_R5_Text_2:
# 871 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Arne_Text_0:
# 877 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Below the culvert the water runs\n"
	.string "so fast nothing holds. Above it, I\l"
	.string "catch. Guess which side you're on.$"

ParcelCorridor_Arne_Text_1:
# 878 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: The fast side.$"

ParcelCorridor_Arne_Text_2:
# 893 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: BARBOACH go up this stream in\n"
	.string "spring. Went. They can't get through\l"
	.string "the pipe. I told the crew. The crew told\l"
	.string "me it meets code.$"

ParcelCorridor_Arne_R2_Text_0:
# 904 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: I kept the team up for this.\n"
	.string "Again?$"

ParcelCorridor_Arne_R2_Text_1:
# 906 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCorridor_Arne_R2_Text_2:
# 910 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: …Fair.$"

ParcelCorridor_Arne_R2_Text_3:
# 911 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Arne_R3_Text_0:
# 918 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCorridor_Arne_R3_Text_1:
# 924 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Still yours.$"

ParcelCorridor_Arne_R3_Text_2:
# 925 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Arne_R4_Text_0:
# 932 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCorridor_Arne_R4_Text_1:
# 938 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Noted. Properly, this time.$"

ParcelCorridor_Arne_R4_Text_2:
# 939 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_Arne_R5_Text_0:
# 946 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCorridor_Arne_R5_Text_1:
# 952 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Right. That's the whole of it.$"

ParcelCorridor_Arne_R5_Text_2:
# 953 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Sven_Text_0:
# 959 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: The plateau's mine. Well.\n"
	.string "MEREHOLT's. But I'm the one standing on\l"
	.string "it.$"

ParcelCorridor_Sven_Text_1:
# 960 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Standing on it a bit less.$"

ParcelCorridor_Sven_Text_2:
# 975 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Survey stakes everywhere up\n"
	.string "here. Two kinds. Nobody will tell me what\l"
	.string "the second kind is for.$"

ParcelCorridor_Sven_R2_Text_0:
# 986 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCorridor_Sven_R2_Text_1:
# 988 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Suit yourself. I'm here.$"

ParcelCorridor_Sven_R2_Text_2:
# 992 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: …Fair.$"

ParcelCorridor_Sven_R2_Text_3:
# 993 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Sven_R3_Text_0:
# 1000 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Sven_R3_Text_1:
# 1006 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: That's the one I wanted to see.$"

ParcelCorridor_Sven_R3_Text_2:
# 1007 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Sven_R4_Text_0:
# 1014 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCorridor_Sven_R4_Text_1:
# 1020 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Still yours.$"

ParcelCorridor_Sven_R4_Text_2:
# 1021 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Sven_R5_Text_0:
# 1028 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridor_Sven_R5_Text_1:
# 1034 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Right. That's the whole of it.$"

ParcelCorridor_Sven_R5_Text_2:
# 1035 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCorridor_Olav_Text_0:
# 1041 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: TAILLOW nest in the cut banks\n"
	.string "now. They didn't used to. Is that good\l"
	.string "or bad? Battle me while you think.$"

ParcelCorridor_Olav_Text_1:
# 1042 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: Still thinking?$"

ParcelCorridor_Olav_Text_2:
# 1057 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: More TAILLOW, fewer of\n"
	.string "everything else. I think that's bad. I\l"
	.string "think it looks like good.$"

ParcelCorridor_Olav_R2_Text_0:
# 1068 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: I kept the team up for this.\n"
	.string "Again?$"

ParcelCorridor_Olav_R2_Text_1:
# 1070 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: No hurry. The water keeps.$"

ParcelCorridor_Olav_R2_Text_2:
# 1074 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: …Fair.$"

ParcelCorridor_Olav_R2_Text_3:
# 1075 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Olav_R3_Text_0:
# 1082 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Olav_R3_Text_1:
# 1088 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: Noted. Properly, this time.$"

ParcelCorridor_Olav_R3_Text_2:
# 1089 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Olav_R4_Text_0:
# 1096 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCorridor_Olav_R4_Text_1:
# 1103 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Olav_R5_Text_0:
# 1110 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridor_Olav_R5_Text_1:
# 1117 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Inga_Text_0:
# 1123 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: I can feel the ground under the\n"
	.string "plateau. It's hollow. Can you feel it?$"

ParcelCorridor_Inga_Text_1:
# 1124 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: You feel it now.$"

ParcelCorridor_Inga_Text_2:
# 1139 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Old workings. Adits. MEREHOLT\n"
	.string "pumped them dry and left. The hill\l"
	.string "remembers being wet.$"

ParcelCorridor_Inga_R2_Text_0:
# 1150 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCorridor_Inga_R2_Text_1:
# 1152 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCorridor_Inga_R2_Text_2:
# 1156 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Right. That's the whole of it.$"

ParcelCorridor_Inga_R2_Text_3:
# 1157 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Inga_R3_Text_0:
# 1164 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Inga_R3_Text_1:
# 1171 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Inga_R4_Text_0:
# 1178 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCorridor_Inga_R4_Text_1:
# 1184 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: …Again, then. Later.$"

ParcelCorridor_Inga_R4_Text_2:
# 1185 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Inga_R5_Text_0:
# 1192 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCorridor_Inga_R5_Text_1:
# 1198 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Noted. Properly, this time.$"

ParcelCorridor_Inga_R5_Text_2:
# 1199 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Turid_Text_0:
# 1205 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: You're going to the basin?\n"
	.string "Nobody goes to the basin. Battle me and\l"
	.string "I'll tell you why.$"

ParcelCorridor_Turid_Text_1:
# 1206 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Because it smells. That's why.\n"
	.string "Sweet, like something rotting.$"

ParcelCorridor_Turid_Text_2:
# 1221 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: The stakes north of here go\n"
	.string "right down to the water. Somebody\l"
	.string "measured it all. And then just left it.$"

ParcelCorridor_Turid_R2_Text_0:
# 1232 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCorridor_Turid_R2_Text_1:
# 1234 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Fine. Same spot.$"

ParcelCorridor_Turid_R2_Text_2:
# 1238 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: That's the one I wanted to see.$"

ParcelCorridor_Turid_R2_Text_3:
# 1239 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Turid_R3_Text_0:
# 1246 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Turid_R3_Text_1:
# 1252 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Right. That's the whole of it.$"

ParcelCorridor_Turid_R3_Text_2:
# 1253 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Turid_R4_Text_0:
# 1260 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCorridor_Turid_R4_Text_1:
# 1266 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Noted. Properly, this time.$"

ParcelCorridor_Turid_R4_Text_2:
# 1267 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_Turid_R5_Text_0:
# 1274 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCorridor_Turid_R5_Text_1:
# 1280 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: …Again, then. Later.$"

ParcelCorridor_Turid_R5_Text_2:
# 1281 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCorridor_T_Vidar_Text_0:
# 1289 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: The plateau's the only place\n"
	.string "with a view. The view's the basin. The\l"
	.string "basin smells. Battle.$"

ParcelCorridor_T_Vidar_Text_1:
# 1290 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Smells like losing.$"

ParcelCorridor_T_Vidar_Text_2:
# 1305 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: North's the FLOODBASIN. There's\n"
	.string "a hamlet in it that floods every spring.\l"
	.string "The councilman sends vouchers. Every\l"
	.string "spring.$"

ParcelCorridor_T_Vidar_R2_Text_0:
# 1316 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelCorridor_T_Vidar_R2_Text_1:
# 1318 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Another time, then.$"

ParcelCorridor_T_Vidar_R2_Text_2:
# 1322 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: …Again, then. Later.$"

ParcelCorridor_T_Vidar_R2_Text_3:
# 1323 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_T_Vidar_R3_Text_0:
# 1330 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelCorridor_T_Vidar_R3_Text_1:
# 1336 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: That's the one I wanted to see.$"

ParcelCorridor_T_Vidar_R3_Text_2:
# 1337 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_T_Vidar_R4_Text_0:
# 1344 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCorridor_T_Vidar_R4_Text_1:
# 1351 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_T_Vidar_R5_Text_0:
# 1358 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCorridor_T_Vidar_R5_Text_1:
# 1364 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: …Fair.$"

ParcelCorridor_T_Vidar_R5_Text_2:
# 1365 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCorridor_T_Halle_Text_0:
# 1371 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Survey stakes everywhere up\n"
	.string "here. Red cloth, bare, red cloth, bare.\l"
	.string "Battle me and I'll explain the colours.$"

ParcelCorridor_T_Halle_Text_1:
# 1372 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Red's the CORPS. Bare's the\n"
	.string "FOUNDATION. That's the explanation.$"

ParcelCorridor_T_Halle_Text_2:
# 1387 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: The bare stakes are on the clean\n"
	.string "ground. The red ones are where the\l"
	.string "water is. Somebody's measuring the\l"
	.string "wrong thing on purpose.$"

ParcelCorridor_T_Halle_R2_Text_0:
# 1398 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCorridor_T_Halle_R2_Text_1:
# 1400 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Fine. Same spot.$"

ParcelCorridor_T_Halle_R2_Text_2:
# 1404 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: …Fair.$"

ParcelCorridor_T_Halle_R2_Text_3:
# 1405 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_T_Halle_R3_Text_0:
# 1412 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_T_Halle_R3_Text_1:
# 1418 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: That's the one I wanted to see.$"

ParcelCorridor_T_Halle_R3_Text_2:
# 1419 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_T_Halle_R4_Text_0:
# 1426 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCorridor_T_Halle_R4_Text_1:
# 1433 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_T_Halle_R5_Text_0:
# 1440 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCorridor_T_Halle_R5_Text_1:
# 1447 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCorridor_T_Elin_Text_0:
# 1453 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Picnic in the cut. The stumps\n"
	.string "make good tables. Battle before the\l"
	.string "ants.$"

ParcelCorridor_T_Elin_Text_1:
# 1454 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Ants won.$"

ParcelCorridor_T_Elin_Text_2:
# 1469 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: The cut was a forest in my\n"
	.string "mother's time. She remembers the\l"
	.string "trucks. I remember the stumps. My kids\l"
	.string "will remember grass.$"

ParcelCorridor_T_Elin_R2_Text_0:
# 1480 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCorridor_T_Elin_R2_Text_1:
# 1482 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCorridor_T_Elin_R2_Text_2:
# 1486 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Noted. Properly, this time.$"

ParcelCorridor_T_Elin_R2_Text_3:
# 1487 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_T_Elin_R3_Text_0:
# 1494 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCorridor_T_Elin_R3_Text_1:
# 1500 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: …Fair.$"

ParcelCorridor_T_Elin_R3_Text_2:
# 1501 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_T_Elin_R4_Text_0:
# 1508 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelCorridor_T_Elin_R4_Text_1:
# 1514 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: …Again, then. Later.$"

ParcelCorridor_T_Elin_R4_Text_2:
# 1515 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_T_Elin_R5_Text_0:
# 1522 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCorridor_T_Elin_R5_Text_1:
# 1528 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: That's the one I wanted to see.$"

ParcelCorridor_T_Elin_R5_Text_2:
# 1529 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCorridor_PerrinScene_Text_0:
# 1542 "data/maps/ParcelCorridor/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelCorridor_PerrinScene_Text_1:
# 1546 "data/maps/ParcelCorridor/scripts.pory"
	.string "PERRIN: The basin's next. MIRREN says\n"
	.string "it's a mess. The FOUNDATION says it's 'in\l"
	.string "remediation'.\p"
	.string "I'm going with the people who have a\n"
	.string "plan. Battle, before you talk me out of\l"
	.string "it.$"

ParcelCorridor_PerrinScene_Text_2:
# 1547 "data/maps/ParcelCorridor/scripts.pory"
	.string "PERRIN: You didn't talk me out of it.$"

ParcelCorridor_PerrinScene_Text_3:
# 1548 "data/maps/ParcelCorridor/scripts.pory"
	.string "PERRIN: You know the difference\n"
	.string "between us? You write down what's\l"
	.string "there. I write down what's possible.\p"
	.string "Theirs reads better in a report. Mine, I\n"
	.string "mean. Ours.$"

ParcelCorridor_PerrinTalk_Text_0:
# 1561 "data/maps/ParcelCorridor/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelCorridor_Mirren_Rematch_Text_0:
# 1572 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: You filed the basin as what it\n"
	.string "is, and then you filed everything else\l"
	.string "the same way. Half the division is still\l"
	.string "rounding up.\p"
	.string "I don't round. Full strength, no gate,\n"
	.string "nothing signed at the end. Want it?$"

ParcelCorridor_Mirren_Rematch_Text_1:
# 1574 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Suit yourself. The rock doesn't\n"
	.string "move.$"

ParcelCorridor_Mirren_Rematch_Text_2:
# 1578 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: …Steady. Still.$"

ParcelCorridor_Mirren_Rematch_Text_3:
# 1579 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Same time tomorrow, if you like.\n"
	.string "The rock doesn't move.$"
