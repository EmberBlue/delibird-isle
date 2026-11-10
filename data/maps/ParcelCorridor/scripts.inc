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
	msgbox ParcelCorridor_Checkpoint_Text_2, MSGBOX_YESNO
# 53 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridor_Checkpoint_5
# 56 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Checkpoint_Text_4, MSGBOX_DEFAULT
# 57 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_SKALD_EXAM_2
ParcelCorridor_Checkpoint_4:
# 59 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Checkpoint_Text_5, MSGBOX_DEFAULT
# 60 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM2, ParcelCorridor_Checkpoint_Text_6
# 61 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_BADGE02_GET
# 62 "data/maps/ParcelCorridor/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 63 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Checkpoint_Text_7, MSGBOX_DEFAULT
# 64 "data/maps/ParcelCorridor/scripts.pory"
	giveitem ITEM_HM05
# 65 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Checkpoint_Text_8, MSGBOX_DEFAULT
# 66 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 67 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 3, Movement_COR_MirrenBack
# 68 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 69 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_2, 1
# 70 "data/maps/ParcelCorridor/scripts.pory"
	releaseall
	end

ParcelCorridor_Checkpoint_2:
# 41 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_2, 1
	end

ParcelCorridor_Checkpoint_5:
# 54 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Checkpoint_Text_3, MSGBOX_DEFAULT
	goto ParcelCorridor_Checkpoint_4


ParcelCorridor_Mirren::
# 75 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 76 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 77 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCorridor_Mirren_2
ParcelCorridor_Mirren_1:
# 80 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelCorridor_Mirren_5
# 85 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Mirren_Text_1, MSGBOX_DEFAULT
# 86 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Mirren_2:
# 78 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Mirren_Rematch
	goto ParcelCorridor_Mirren_1

ParcelCorridor_Mirren_5:
# 81 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Mirren_Text_0, MSGBOX_DEFAULT
# 82 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


# 90 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_MirrenApproach:
# 90 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 90 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
	step_end

# 91 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_MirrenBack:
# 91 "data/maps/ParcelCorridor/scripts.pory"
	walk_right
# 91 "data/maps/ParcelCorridor/scripts.pory"
	walk_right
# 91 "data/maps/ParcelCorridor/scripts.pory"
	face_left
	step_end

# 92 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_FaceRight:
# 92 "data/maps/ParcelCorridor/scripts.pory"
	face_right
	step_end

# 93 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_FaceDown:
# 93 "data/maps/ParcelCorridor/scripts.pory"
	face_down
	step_end

ParcelCorridor_CulvertScene::
# 97 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 98 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 9
# 99 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 100 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridor_CulvertScene_2
# 104 "data/maps/ParcelCorridor/scripts.pory"
	lockall
# 105 "data/maps/ParcelCorridor/scripts.pory"
	bufferpartymonnick 0, 0
# 106 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_0, MSGBOX_DEFAULT
# 107 "data/maps/ParcelCorridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_COR_FaceDown
# 108 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 109 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_1, MSGBOX_DEFAULT
# 110 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_2, MSGBOX_DEFAULT
# 111 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 112 "data/maps/ParcelCorridor/scripts.pory"
	clearflag FLAG_TEMP_3
# 113 "data/maps/ParcelCorridor/scripts.pory"
	addobject 2
# 114 "data/maps/ParcelCorridor/scripts.pory"
	playse SE_PIN
# 115 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_3, MSGBOX_DEFAULT
# 116 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 2, Movement_COR_WooperTry
# 117 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 118 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_4, MSGBOX_DEFAULT
# 119 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_5, MSGBOX_DEFAULT
# 120 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 2, Movement_COR_WooperRetreat
# 121 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 122 "data/maps/ParcelCorridor/scripts.pory"
	removeobject 2
# 123 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_TEMP_3
# 124 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 9
# 125 "data/maps/ParcelCorridor/scripts.pory"
	special SkaldmereCertTaskMark
# 126 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 127 "data/maps/ParcelCorridor/scripts.pory"
	releaseall
	end

ParcelCorridor_CulvertScene_2:
# 101 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


ParcelCorridor_FarSide::
# 132 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 133 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_FarSide_Text_0, MSGBOX_DEFAULT
# 134 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


# 138 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_WooperTry:
# 138 "data/maps/ParcelCorridor/scripts.pory"
	face_left
# 138 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
# 138 "data/maps/ParcelCorridor/scripts.pory"
	walk_in_place_faster_left
# 138 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
# 138 "data/maps/ParcelCorridor/scripts.pory"
	face_down
# 138 "data/maps/ParcelCorridor/scripts.pory"
	delay_8
# 138 "data/maps/ParcelCorridor/scripts.pory"
	face_left
# 138 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
# 138 "data/maps/ParcelCorridor/scripts.pory"
	walk_in_place_faster_left
# 138 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
	step_end

# 139 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_WooperRetreat:
# 139 "data/maps/ParcelCorridor/scripts.pory"
	face_right
# 139 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
# 139 "data/maps/ParcelCorridor/scripts.pory"
	walk_right
	step_end

# 140 "data/maps/ParcelCorridor/scripts.pory"
Movement_COR_WorkerLeave:
# 140 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 140 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 140 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 140 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 140 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 140 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
# 140 "data/maps/ParcelCorridor/scripts.pory"
	walk_left
	step_end

ParcelCorridor_Worker::
# 144 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 145 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 146 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCorridor_Worker_2
# 151 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 152 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 9
# 153 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 154 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Worker_5
# 159 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_2, MSGBOX_DEFAULT
# 160 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_3, MSGBOX_DEFAULT
# 161 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_4, MSGBOX_YESNO
# 162 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridor_Worker_8
# 165 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_6, MSGBOX_DEFAULT
ParcelCorridor_Worker_7:
# 167 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_7, MSGBOX_DEFAULT
# 168 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_8, MSGBOX_DEFAULT
# 169 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_9, MSGBOX_DEFAULT
# 170 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_10, MSGBOX_DEFAULT
# 171 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_11, MSGBOX_DEFAULT
# 172 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_12, MSGBOX_DEFAULT
# 173 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 174 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 1, Movement_COR_WorkerLeave
# 175 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 176 "data/maps/ParcelCorridor/scripts.pory"
	removeobject 1
# 177 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 10
# 178 "data/maps/ParcelCorridor/scripts.pory"
	special SkaldmereCertTaskMark
# 179 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_TEMP_2
# 180 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_13, MSGBOX_DEFAULT
# 181 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Worker_2:
# 147 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_0, MSGBOX_DEFAULT
# 148 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Worker_5:
# 155 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_1, MSGBOX_DEFAULT
# 156 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Worker_8:
# 163 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_5, MSGBOX_DEFAULT
	goto ParcelCorridor_Worker_7


ParcelCorridor_ObsStumps::
# 187 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsStumps_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsMoss::
# 191 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsMoss_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsDrainage::
# 195 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsDrainage_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsRoad::
# 199 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsRoad_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsCulvert::
# 203 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsCulvert_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignWest::
# 209 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignWest_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignCheckpoint::
# 213 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignCheckpoint_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignNorth::
# 217 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignNorth_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_SignAdit::
# 221 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SignAdit_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ItemSuperPotion::
# 226 "data/maps/ParcelCorridor/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelCorridor_ItemRepel::
# 227 "data/maps/ParcelCorridor/scripts.pory"
	finditem ITEM_REPEL
	end


ParcelCorridor_ItemGreatBall::
# 228 "data/maps/ParcelCorridor/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelCorridor_Geir::
# 232 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_GEIR, ParcelCorridor_Geir_Text_0, ParcelCorridor_Geir_Text_1, ParcelCorridor_Geir_FirstWin
# 236 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 237 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Geir_3
ParcelCorridor_Geir_1:
# 240 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Geir_8
ParcelCorridor_Geir_6:
# 243 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Geir_13
ParcelCorridor_Geir_11:
# 246 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Geir_18
ParcelCorridor_Geir_16:
# 249 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Geir_2:
# 238 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Geir_R2
	goto ParcelCorridor_Geir_1

ParcelCorridor_Geir_3:
# 237 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GEIR_R2
	goto_if 0, ParcelCorridor_Geir_2
	goto ParcelCorridor_Geir_1

ParcelCorridor_Geir_7:
# 241 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Geir_R3
	goto ParcelCorridor_Geir_6

ParcelCorridor_Geir_8:
# 240 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GEIR_R3
	goto_if 0, ParcelCorridor_Geir_7
	goto ParcelCorridor_Geir_6

ParcelCorridor_Geir_12:
# 244 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Geir_R4
	goto ParcelCorridor_Geir_11

ParcelCorridor_Geir_13:
# 243 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GEIR_R4
	goto_if 0, ParcelCorridor_Geir_12
	goto ParcelCorridor_Geir_11

ParcelCorridor_Geir_17:
# 247 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Geir_R5
	goto ParcelCorridor_Geir_16

ParcelCorridor_Geir_18:
# 246 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GEIR_R5
	goto_if 0, ParcelCorridor_Geir_17
	goto ParcelCorridor_Geir_16


ParcelCorridor_Geir_FirstWin::
# 253 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_Text_2, MSGBOX_DEFAULT
# 254 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Geir_R2::
# 258 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 259 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 260 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_0, MSGBOX_YESNO
# 261 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Geir_R2_2
# 266 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GEIR_R2, ParcelCorridor_Geir_R2_Text_2
# 267 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_3, MSGBOX_DEFAULT
# 268 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Geir_R2_2:
# 262 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_1, MSGBOX_DEFAULT
# 263 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Geir_R3::
# 272 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 273 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 274 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R3_Text_0, MSGBOX_YESNO
# 275 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Geir_R3_2
# 280 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GEIR_R3, ParcelCorridor_Geir_R3_Text_1
# 281 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R3_Text_2, MSGBOX_DEFAULT
# 282 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Geir_R3_2:
# 276 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_1, MSGBOX_DEFAULT
# 277 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Geir_R4::
# 286 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 287 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 288 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R4_Text_0, MSGBOX_YESNO
# 289 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Geir_R4_2
# 294 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GEIR_R4, ParcelCorridor_Geir_R4_Text_1
# 295 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R4_Text_2, MSGBOX_DEFAULT
# 296 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Geir_R4_2:
# 290 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_1, MSGBOX_DEFAULT
# 291 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Geir_R5::
# 300 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 301 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 302 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R5_Text_0, MSGBOX_YESNO
# 303 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Geir_R5_2
# 308 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GEIR_R5, ParcelCorridor_Geir_R4_Text_1
# 309 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R5_Text_1, MSGBOX_DEFAULT
# 310 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Geir_R5_2:
# 304 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Geir_R2_Text_1, MSGBOX_DEFAULT
# 305 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Per::
# 314 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_PER, ParcelCorridor_Per_Text_0, ParcelCorridor_Per_Text_1, ParcelCorridor_Per_FirstWin
# 318 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 319 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Per_3
ParcelCorridor_Per_1:
# 322 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Per_8
ParcelCorridor_Per_6:
# 325 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Per_13
ParcelCorridor_Per_11:
# 328 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Per_18
ParcelCorridor_Per_16:
# 331 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Per_2:
# 320 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Per_R2
	goto ParcelCorridor_Per_1

ParcelCorridor_Per_3:
# 319 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_PER_R2
	goto_if 0, ParcelCorridor_Per_2
	goto ParcelCorridor_Per_1

ParcelCorridor_Per_7:
# 323 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Per_R3
	goto ParcelCorridor_Per_6

ParcelCorridor_Per_8:
# 322 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_PER_R3
	goto_if 0, ParcelCorridor_Per_7
	goto ParcelCorridor_Per_6

ParcelCorridor_Per_12:
# 326 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Per_R4
	goto ParcelCorridor_Per_11

ParcelCorridor_Per_13:
# 325 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_PER_R4
	goto_if 0, ParcelCorridor_Per_12
	goto ParcelCorridor_Per_11

ParcelCorridor_Per_17:
# 329 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Per_R5
	goto ParcelCorridor_Per_16

ParcelCorridor_Per_18:
# 328 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_PER_R5
	goto_if 0, ParcelCorridor_Per_17
	goto ParcelCorridor_Per_16


ParcelCorridor_Per_FirstWin::
# 335 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_Text_2, MSGBOX_DEFAULT
# 336 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Per_R2::
# 340 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 341 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 342 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_0, MSGBOX_YESNO
# 343 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Per_R2_2
# 348 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_PER_R2, ParcelCorridor_Per_R2_Text_2
# 349 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_3, MSGBOX_DEFAULT
# 350 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Per_R2_2:
# 344 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_1, MSGBOX_DEFAULT
# 345 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Per_R3::
# 354 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 355 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 356 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R3_Text_0, MSGBOX_YESNO
# 357 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Per_R3_2
# 362 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_PER_R3, ParcelCorridor_Per_R3_Text_1
# 363 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R3_Text_2, MSGBOX_DEFAULT
# 364 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Per_R3_2:
# 358 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_1, MSGBOX_DEFAULT
# 359 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Per_R4::
# 368 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 369 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 370 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R4_Text_0, MSGBOX_YESNO
# 371 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Per_R4_2
# 376 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_PER_R4, ParcelCorridor_Per_R4_Text_1
# 377 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R4_Text_2, MSGBOX_DEFAULT
# 378 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Per_R4_2:
# 372 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_1, MSGBOX_DEFAULT
# 373 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Per_R5::
# 382 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 383 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 384 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R5_Text_0, MSGBOX_YESNO
# 385 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Per_R5_2
# 390 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_PER_R5, ParcelCorridor_Per_R5_Text_1
# 391 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R5_Text_2, MSGBOX_DEFAULT
# 392 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Per_R5_2:
# 386 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Per_R2_Text_1, MSGBOX_DEFAULT
# 387 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Rune::
# 396 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_RUNE, ParcelCorridor_Rune_Text_0, ParcelCorridor_Rune_Text_1, ParcelCorridor_Rune_FirstWin
# 400 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 401 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Rune_3
ParcelCorridor_Rune_1:
# 404 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Rune_8
ParcelCorridor_Rune_6:
# 407 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Rune_13
ParcelCorridor_Rune_11:
# 410 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Rune_18
ParcelCorridor_Rune_16:
# 413 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Rune_2:
# 402 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Rune_R2
	goto ParcelCorridor_Rune_1

ParcelCorridor_Rune_3:
# 401 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_RUNE_R2
	goto_if 0, ParcelCorridor_Rune_2
	goto ParcelCorridor_Rune_1

ParcelCorridor_Rune_7:
# 405 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Rune_R3
	goto ParcelCorridor_Rune_6

ParcelCorridor_Rune_8:
# 404 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_RUNE_R3
	goto_if 0, ParcelCorridor_Rune_7
	goto ParcelCorridor_Rune_6

ParcelCorridor_Rune_12:
# 408 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Rune_R4
	goto ParcelCorridor_Rune_11

ParcelCorridor_Rune_13:
# 407 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_RUNE_R4
	goto_if 0, ParcelCorridor_Rune_12
	goto ParcelCorridor_Rune_11

ParcelCorridor_Rune_17:
# 411 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Rune_R5
	goto ParcelCorridor_Rune_16

ParcelCorridor_Rune_18:
# 410 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_RUNE_R5
	goto_if 0, ParcelCorridor_Rune_17
	goto ParcelCorridor_Rune_16


ParcelCorridor_Rune_FirstWin::
# 417 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_Text_2, MSGBOX_DEFAULT
# 418 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Rune_R2::
# 422 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 423 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 424 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_0, MSGBOX_YESNO
# 425 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Rune_R2_2
# 430 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_RUNE_R2, ParcelCorridor_Rune_R2_Text_2
# 431 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_3, MSGBOX_DEFAULT
# 432 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Rune_R2_2:
# 426 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_1, MSGBOX_DEFAULT
# 427 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Rune_R3::
# 436 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 437 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 438 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R3_Text_0, MSGBOX_YESNO
# 439 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Rune_R3_2
# 444 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_RUNE_R3, ParcelCorridor_Rune_R3_Text_1
# 445 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R3_Text_2, MSGBOX_DEFAULT
# 446 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Rune_R3_2:
# 440 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_1, MSGBOX_DEFAULT
# 441 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Rune_R4::
# 450 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 451 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 452 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R4_Text_0, MSGBOX_YESNO
# 453 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Rune_R4_2
# 458 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_RUNE_R4, ParcelCorridor_Rune_R3_Text_1
# 459 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R4_Text_1, MSGBOX_DEFAULT
# 460 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Rune_R4_2:
# 454 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_1, MSGBOX_DEFAULT
# 455 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Rune_R5::
# 464 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 465 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 466 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R5_Text_0, MSGBOX_YESNO
# 467 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Rune_R5_2
# 472 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_RUNE_R5, ParcelCorridor_Rune_R5_Text_1
# 473 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R5_Text_2, MSGBOX_DEFAULT
# 474 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Rune_R5_2:
# 468 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Rune_R2_Text_1, MSGBOX_DEFAULT
# 469 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Else::
# 478 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_ELSE, ParcelCorridor_Else_Text_0, ParcelCorridor_Else_Text_1, ParcelCorridor_Else_FirstWin
# 482 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 483 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Else_3
ParcelCorridor_Else_1:
# 486 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Else_8
ParcelCorridor_Else_6:
# 489 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Else_13
ParcelCorridor_Else_11:
# 492 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Else_18
ParcelCorridor_Else_16:
# 495 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Else_2:
# 484 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Else_R2
	goto ParcelCorridor_Else_1

ParcelCorridor_Else_3:
# 483 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELSE_R2
	goto_if 0, ParcelCorridor_Else_2
	goto ParcelCorridor_Else_1

ParcelCorridor_Else_7:
# 487 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Else_R3
	goto ParcelCorridor_Else_6

ParcelCorridor_Else_8:
# 486 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELSE_R3
	goto_if 0, ParcelCorridor_Else_7
	goto ParcelCorridor_Else_6

ParcelCorridor_Else_12:
# 490 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Else_R4
	goto ParcelCorridor_Else_11

ParcelCorridor_Else_13:
# 489 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELSE_R4
	goto_if 0, ParcelCorridor_Else_12
	goto ParcelCorridor_Else_11

ParcelCorridor_Else_17:
# 493 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Else_R5
	goto ParcelCorridor_Else_16

ParcelCorridor_Else_18:
# 492 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELSE_R5
	goto_if 0, ParcelCorridor_Else_17
	goto ParcelCorridor_Else_16


ParcelCorridor_Else_FirstWin::
# 499 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_Text_2, MSGBOX_DEFAULT
# 500 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Else_R2::
# 504 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 505 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 506 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_0, MSGBOX_YESNO
# 507 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Else_R2_2
# 512 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELSE_R2, ParcelCorridor_Else_R2_Text_2
# 513 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_3, MSGBOX_DEFAULT
# 514 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Else_R2_2:
# 508 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_1, MSGBOX_DEFAULT
# 509 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Else_R3::
# 518 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 519 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 520 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R3_Text_0, MSGBOX_YESNO
# 521 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Else_R3_2
# 526 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELSE_R3, ParcelCorridor_Else_R2_Text_2
# 527 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R3_Text_1, MSGBOX_DEFAULT
# 528 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Else_R3_2:
# 522 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_1, MSGBOX_DEFAULT
# 523 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Else_R4::
# 532 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 533 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 534 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R4_Text_0, MSGBOX_YESNO
# 535 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Else_R4_2
# 540 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELSE_R4, ParcelCorridor_Else_R4_Text_1
# 541 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R4_Text_2, MSGBOX_DEFAULT
# 542 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Else_R4_2:
# 536 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_1, MSGBOX_DEFAULT
# 537 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Else_R5::
# 546 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 547 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 548 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R5_Text_0, MSGBOX_YESNO
# 549 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Else_R5_2
# 554 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELSE_R5, ParcelCorridor_Else_R2_Text_2
# 555 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R5_Text_1, MSGBOX_DEFAULT
# 556 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Else_R5_2:
# 550 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Else_R2_Text_1, MSGBOX_DEFAULT
# 551 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Ulf::
# 560 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_ULF, ParcelCorridor_Ulf_Text_0, ParcelCorridor_Ulf_Text_1, ParcelCorridor_Ulf_FirstWin
# 564 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 565 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Ulf_3
ParcelCorridor_Ulf_1:
# 568 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Ulf_8
ParcelCorridor_Ulf_6:
# 571 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Ulf_13
ParcelCorridor_Ulf_11:
# 574 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Ulf_18
ParcelCorridor_Ulf_16:
# 577 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Ulf_2:
# 566 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Ulf_R2
	goto ParcelCorridor_Ulf_1

ParcelCorridor_Ulf_3:
# 565 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ULF_R2
	goto_if 0, ParcelCorridor_Ulf_2
	goto ParcelCorridor_Ulf_1

ParcelCorridor_Ulf_7:
# 569 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Ulf_R3
	goto ParcelCorridor_Ulf_6

ParcelCorridor_Ulf_8:
# 568 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ULF_R3
	goto_if 0, ParcelCorridor_Ulf_7
	goto ParcelCorridor_Ulf_6

ParcelCorridor_Ulf_12:
# 572 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Ulf_R4
	goto ParcelCorridor_Ulf_11

ParcelCorridor_Ulf_13:
# 571 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ULF_R4
	goto_if 0, ParcelCorridor_Ulf_12
	goto ParcelCorridor_Ulf_11

ParcelCorridor_Ulf_17:
# 575 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Ulf_R5
	goto ParcelCorridor_Ulf_16

ParcelCorridor_Ulf_18:
# 574 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ULF_R5
	goto_if 0, ParcelCorridor_Ulf_17
	goto ParcelCorridor_Ulf_16


ParcelCorridor_Ulf_FirstWin::
# 581 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_Text_2, MSGBOX_DEFAULT
# 582 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Ulf_R2::
# 586 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 587 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 588 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_0, MSGBOX_YESNO
# 589 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Ulf_R2_2
# 594 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ULF_R2, ParcelCorridor_Ulf_R2_Text_2
# 595 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_3, MSGBOX_DEFAULT
# 596 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Ulf_R2_2:
# 590 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_1, MSGBOX_DEFAULT
# 591 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Ulf_R3::
# 600 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 601 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 602 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R3_Text_0, MSGBOX_YESNO
# 603 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Ulf_R3_2
# 608 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ULF_R3, ParcelCorridor_Ulf_R2_Text_2
# 609 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R3_Text_1, MSGBOX_DEFAULT
# 610 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Ulf_R3_2:
# 604 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_1, MSGBOX_DEFAULT
# 605 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Ulf_R4::
# 614 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 615 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 616 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R4_Text_0, MSGBOX_YESNO
# 617 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Ulf_R4_2
# 622 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ULF_R4, ParcelCorridor_Ulf_R4_Text_1
# 623 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R4_Text_2, MSGBOX_DEFAULT
# 624 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Ulf_R4_2:
# 618 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_1, MSGBOX_DEFAULT
# 619 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Ulf_R5::
# 628 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 629 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 630 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R5_Text_0, MSGBOX_YESNO
# 631 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Ulf_R5_2
# 636 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ULF_R5, ParcelCorridor_Ulf_R5_Text_1
# 637 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R5_Text_2, MSGBOX_DEFAULT
# 638 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Ulf_R5_2:
# 632 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Ulf_R2_Text_1, MSGBOX_DEFAULT
# 633 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Gro::
# 642 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_GRO, ParcelCorridor_Gro_Text_0, ParcelCorridor_Gro_Text_1, ParcelCorridor_Gro_FirstWin
# 646 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 647 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Gro_3
ParcelCorridor_Gro_1:
# 650 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Gro_8
ParcelCorridor_Gro_6:
# 653 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Gro_13
ParcelCorridor_Gro_11:
# 656 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Gro_18
ParcelCorridor_Gro_16:
# 659 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Gro_2:
# 648 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Gro_R2
	goto ParcelCorridor_Gro_1

ParcelCorridor_Gro_3:
# 647 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GRO_R2
	goto_if 0, ParcelCorridor_Gro_2
	goto ParcelCorridor_Gro_1

ParcelCorridor_Gro_7:
# 651 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Gro_R3
	goto ParcelCorridor_Gro_6

ParcelCorridor_Gro_8:
# 650 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GRO_R3
	goto_if 0, ParcelCorridor_Gro_7
	goto ParcelCorridor_Gro_6

ParcelCorridor_Gro_12:
# 654 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Gro_R4
	goto ParcelCorridor_Gro_11

ParcelCorridor_Gro_13:
# 653 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GRO_R4
	goto_if 0, ParcelCorridor_Gro_12
	goto ParcelCorridor_Gro_11

ParcelCorridor_Gro_17:
# 657 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Gro_R5
	goto ParcelCorridor_Gro_16

ParcelCorridor_Gro_18:
# 656 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_GRO_R5
	goto_if 0, ParcelCorridor_Gro_17
	goto ParcelCorridor_Gro_16


ParcelCorridor_Gro_FirstWin::
# 663 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_Text_2, MSGBOX_DEFAULT
# 664 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Gro_R2::
# 668 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 669 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 670 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_0, MSGBOX_YESNO
# 671 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Gro_R2_2
# 676 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GRO_R2, ParcelCorridor_Gro_R2_Text_2
# 677 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_3, MSGBOX_DEFAULT
# 678 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Gro_R2_2:
# 672 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_1, MSGBOX_DEFAULT
# 673 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Gro_R3::
# 682 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 683 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 684 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R3_Text_0, MSGBOX_YESNO
# 685 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Gro_R3_2
# 690 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GRO_R3, ParcelCorridor_Gro_R3_Text_1
# 691 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R3_Text_2, MSGBOX_DEFAULT
# 692 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Gro_R3_2:
# 686 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_1, MSGBOX_DEFAULT
# 687 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Gro_R4::
# 696 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 697 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 698 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R4_Text_0, MSGBOX_YESNO
# 699 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Gro_R4_2
# 704 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GRO_R4, ParcelCorridor_Gro_R2_Text_2
# 705 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R4_Text_1, MSGBOX_DEFAULT
# 706 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Gro_R4_2:
# 700 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_1, MSGBOX_DEFAULT
# 701 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Gro_R5::
# 710 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 711 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 712 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R5_Text_0, MSGBOX_YESNO
# 713 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Gro_R5_2
# 718 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_GRO_R5, ParcelCorridor_Gro_R5_Text_1
# 719 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R5_Text_2, MSGBOX_DEFAULT
# 720 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Gro_R5_2:
# 714 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Gro_R2_Text_1, MSGBOX_DEFAULT
# 715 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Knut::
# 724 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_KNUT, ParcelCorridor_Knut_Text_0, ParcelCorridor_Knut_Text_1, ParcelCorridor_Knut_FirstWin
# 728 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 729 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Knut_3
ParcelCorridor_Knut_1:
# 732 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Knut_8
ParcelCorridor_Knut_6:
# 735 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Knut_13
ParcelCorridor_Knut_11:
# 738 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Knut_18
ParcelCorridor_Knut_16:
# 741 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Knut_2:
# 730 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Knut_R2
	goto ParcelCorridor_Knut_1

ParcelCorridor_Knut_3:
# 729 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_KNUT_R2
	goto_if 0, ParcelCorridor_Knut_2
	goto ParcelCorridor_Knut_1

ParcelCorridor_Knut_7:
# 733 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Knut_R3
	goto ParcelCorridor_Knut_6

ParcelCorridor_Knut_8:
# 732 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_KNUT_R3
	goto_if 0, ParcelCorridor_Knut_7
	goto ParcelCorridor_Knut_6

ParcelCorridor_Knut_12:
# 736 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Knut_R4
	goto ParcelCorridor_Knut_11

ParcelCorridor_Knut_13:
# 735 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_KNUT_R4
	goto_if 0, ParcelCorridor_Knut_12
	goto ParcelCorridor_Knut_11

ParcelCorridor_Knut_17:
# 739 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Knut_R5
	goto ParcelCorridor_Knut_16

ParcelCorridor_Knut_18:
# 738 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_KNUT_R5
	goto_if 0, ParcelCorridor_Knut_17
	goto ParcelCorridor_Knut_16


ParcelCorridor_Knut_FirstWin::
# 745 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_Text_2, MSGBOX_DEFAULT
# 746 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Knut_R2::
# 750 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 751 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 752 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_0, MSGBOX_YESNO
# 753 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Knut_R2_2
# 758 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_KNUT_R2, ParcelCorridor_Knut_R2_Text_2
# 759 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_3, MSGBOX_DEFAULT
# 760 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Knut_R2_2:
# 754 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_1, MSGBOX_DEFAULT
# 755 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Knut_R3::
# 764 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 765 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 766 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R3_Text_0, MSGBOX_YESNO
# 767 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Knut_R3_2
# 772 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_KNUT_R3, ParcelCorridor_Knut_R2_Text_2
# 773 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R3_Text_1, MSGBOX_DEFAULT
# 774 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Knut_R3_2:
# 768 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_1, MSGBOX_DEFAULT
# 769 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Knut_R4::
# 778 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 779 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 780 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R4_Text_0, MSGBOX_YESNO
# 781 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Knut_R4_2
# 786 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_KNUT_R4, ParcelCorridor_Knut_R2_Text_2
# 787 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R4_Text_1, MSGBOX_DEFAULT
# 788 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Knut_R4_2:
# 782 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_1, MSGBOX_DEFAULT
# 783 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Knut_R5::
# 792 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 793 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 794 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R5_Text_0, MSGBOX_YESNO
# 795 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Knut_R5_2
# 800 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_KNUT_R5, ParcelCorridor_Knut_R5_Text_1
# 801 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R5_Text_2, MSGBOX_DEFAULT
# 802 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Knut_R5_2:
# 796 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Knut_R2_Text_1, MSGBOX_DEFAULT
# 797 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Dag::
# 806 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_DAG, ParcelCorridor_Dag_Text_0, ParcelCorridor_Dag_Text_1, ParcelCorridor_Dag_FirstWin
# 810 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 811 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Dag_3
ParcelCorridor_Dag_1:
# 814 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Dag_8
ParcelCorridor_Dag_6:
# 817 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Dag_13
ParcelCorridor_Dag_11:
# 820 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Dag_18
ParcelCorridor_Dag_16:
# 823 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Dag_2:
# 812 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Dag_R2
	goto ParcelCorridor_Dag_1

ParcelCorridor_Dag_3:
# 811 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_DAG_R2
	goto_if 0, ParcelCorridor_Dag_2
	goto ParcelCorridor_Dag_1

ParcelCorridor_Dag_7:
# 815 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Dag_R3
	goto ParcelCorridor_Dag_6

ParcelCorridor_Dag_8:
# 814 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_DAG_R3
	goto_if 0, ParcelCorridor_Dag_7
	goto ParcelCorridor_Dag_6

ParcelCorridor_Dag_12:
# 818 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Dag_R4
	goto ParcelCorridor_Dag_11

ParcelCorridor_Dag_13:
# 817 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_DAG_R4
	goto_if 0, ParcelCorridor_Dag_12
	goto ParcelCorridor_Dag_11

ParcelCorridor_Dag_17:
# 821 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Dag_R5
	goto ParcelCorridor_Dag_16

ParcelCorridor_Dag_18:
# 820 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_DAG_R5
	goto_if 0, ParcelCorridor_Dag_17
	goto ParcelCorridor_Dag_16


ParcelCorridor_Dag_FirstWin::
# 827 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_Text_2, MSGBOX_DEFAULT
# 828 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Dag_R2::
# 832 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 833 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 834 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_0, MSGBOX_YESNO
# 835 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Dag_R2_2
# 840 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_DAG_R2, ParcelCorridor_Dag_R2_Text_2
# 841 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_3, MSGBOX_DEFAULT
# 842 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Dag_R2_2:
# 836 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_1, MSGBOX_DEFAULT
# 837 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Dag_R3::
# 846 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 847 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 848 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R3_Text_0, MSGBOX_YESNO
# 849 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Dag_R3_2
# 854 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_DAG_R3, ParcelCorridor_Dag_R2_Text_2
# 855 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R3_Text_1, MSGBOX_DEFAULT
# 856 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Dag_R3_2:
# 850 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_1, MSGBOX_DEFAULT
# 851 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Dag_R4::
# 860 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 861 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 862 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R4_Text_0, MSGBOX_YESNO
# 863 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Dag_R4_2
# 868 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_DAG_R4, ParcelCorridor_Dag_R4_Text_1
# 869 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R4_Text_2, MSGBOX_DEFAULT
# 870 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Dag_R4_2:
# 864 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_1, MSGBOX_DEFAULT
# 865 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Dag_R5::
# 874 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 875 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 876 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R5_Text_0, MSGBOX_YESNO
# 877 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Dag_R5_2
# 882 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_DAG_R5, ParcelCorridor_Dag_R5_Text_1
# 883 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R5_Text_2, MSGBOX_DEFAULT
# 884 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Dag_R5_2:
# 878 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Dag_R2_Text_1, MSGBOX_DEFAULT
# 879 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Arne::
# 888 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_ARNE, ParcelCorridor_Arne_Text_0, ParcelCorridor_Arne_Text_1, ParcelCorridor_Arne_FirstWin
# 892 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 893 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Arne_3
ParcelCorridor_Arne_1:
# 896 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Arne_8
ParcelCorridor_Arne_6:
# 899 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Arne_13
ParcelCorridor_Arne_11:
# 902 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Arne_18
ParcelCorridor_Arne_16:
# 905 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Arne_2:
# 894 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Arne_R2
	goto ParcelCorridor_Arne_1

ParcelCorridor_Arne_3:
# 893 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ARNE_R2
	goto_if 0, ParcelCorridor_Arne_2
	goto ParcelCorridor_Arne_1

ParcelCorridor_Arne_7:
# 897 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Arne_R3
	goto ParcelCorridor_Arne_6

ParcelCorridor_Arne_8:
# 896 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ARNE_R3
	goto_if 0, ParcelCorridor_Arne_7
	goto ParcelCorridor_Arne_6

ParcelCorridor_Arne_12:
# 900 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Arne_R4
	goto ParcelCorridor_Arne_11

ParcelCorridor_Arne_13:
# 899 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ARNE_R4
	goto_if 0, ParcelCorridor_Arne_12
	goto ParcelCorridor_Arne_11

ParcelCorridor_Arne_17:
# 903 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Arne_R5
	goto ParcelCorridor_Arne_16

ParcelCorridor_Arne_18:
# 902 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ARNE_R5
	goto_if 0, ParcelCorridor_Arne_17
	goto ParcelCorridor_Arne_16


ParcelCorridor_Arne_FirstWin::
# 909 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_Text_2, MSGBOX_DEFAULT
# 910 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Arne_R2::
# 914 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 915 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 916 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_0, MSGBOX_YESNO
# 917 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Arne_R2_2
# 922 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ARNE_R2, ParcelCorridor_Arne_R2_Text_2
# 923 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_3, MSGBOX_DEFAULT
# 924 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Arne_R2_2:
# 918 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_1, MSGBOX_DEFAULT
# 919 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Arne_R3::
# 928 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 929 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 930 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R3_Text_0, MSGBOX_YESNO
# 931 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Arne_R3_2
# 936 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ARNE_R3, ParcelCorridor_Arne_R3_Text_1
# 937 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R3_Text_2, MSGBOX_DEFAULT
# 938 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Arne_R3_2:
# 932 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_1, MSGBOX_DEFAULT
# 933 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Arne_R4::
# 942 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 943 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 944 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R4_Text_0, MSGBOX_YESNO
# 945 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Arne_R4_2
# 950 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ARNE_R4, ParcelCorridor_Arne_R4_Text_1
# 951 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R4_Text_2, MSGBOX_DEFAULT
# 952 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Arne_R4_2:
# 946 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_1, MSGBOX_DEFAULT
# 947 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Arne_R5::
# 956 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 957 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 958 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R5_Text_0, MSGBOX_YESNO
# 959 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Arne_R5_2
# 964 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ARNE_R5, ParcelCorridor_Arne_R5_Text_1
# 965 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R5_Text_2, MSGBOX_DEFAULT
# 966 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Arne_R5_2:
# 960 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Arne_R2_Text_1, MSGBOX_DEFAULT
# 961 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Sven::
# 970 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_SVEN, ParcelCorridor_Sven_Text_0, ParcelCorridor_Sven_Text_1, ParcelCorridor_Sven_FirstWin
# 974 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 975 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Sven_3
ParcelCorridor_Sven_1:
# 978 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Sven_8
ParcelCorridor_Sven_6:
# 981 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Sven_13
ParcelCorridor_Sven_11:
# 984 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Sven_18
ParcelCorridor_Sven_16:
# 987 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Sven_2:
# 976 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Sven_R2
	goto ParcelCorridor_Sven_1

ParcelCorridor_Sven_3:
# 975 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_SVEN_R2
	goto_if 0, ParcelCorridor_Sven_2
	goto ParcelCorridor_Sven_1

ParcelCorridor_Sven_7:
# 979 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Sven_R3
	goto ParcelCorridor_Sven_6

ParcelCorridor_Sven_8:
# 978 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_SVEN_R3
	goto_if 0, ParcelCorridor_Sven_7
	goto ParcelCorridor_Sven_6

ParcelCorridor_Sven_12:
# 982 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Sven_R4
	goto ParcelCorridor_Sven_11

ParcelCorridor_Sven_13:
# 981 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_SVEN_R4
	goto_if 0, ParcelCorridor_Sven_12
	goto ParcelCorridor_Sven_11

ParcelCorridor_Sven_17:
# 985 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Sven_R5
	goto ParcelCorridor_Sven_16

ParcelCorridor_Sven_18:
# 984 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_SVEN_R5
	goto_if 0, ParcelCorridor_Sven_17
	goto ParcelCorridor_Sven_16


ParcelCorridor_Sven_FirstWin::
# 991 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_Text_2, MSGBOX_DEFAULT
# 992 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Sven_R2::
# 996 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 997 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 998 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_0, MSGBOX_YESNO
# 999 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Sven_R2_2
# 1004 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_SVEN_R2, ParcelCorridor_Sven_R2_Text_2
# 1005 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_3, MSGBOX_DEFAULT
# 1006 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Sven_R2_2:
# 1000 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_1, MSGBOX_DEFAULT
# 1001 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Sven_R3::
# 1010 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1011 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1012 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R3_Text_0, MSGBOX_YESNO
# 1013 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Sven_R3_2
# 1018 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_SVEN_R3, ParcelCorridor_Sven_R3_Text_1
# 1019 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R3_Text_2, MSGBOX_DEFAULT
# 1020 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Sven_R3_2:
# 1014 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_1, MSGBOX_DEFAULT
# 1015 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Sven_R4::
# 1024 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1025 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1026 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R4_Text_0, MSGBOX_YESNO
# 1027 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Sven_R4_2
# 1032 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_SVEN_R4, ParcelCorridor_Sven_R4_Text_1
# 1033 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R4_Text_2, MSGBOX_DEFAULT
# 1034 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Sven_R4_2:
# 1028 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_1, MSGBOX_DEFAULT
# 1029 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Sven_R5::
# 1038 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1039 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1040 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R5_Text_0, MSGBOX_YESNO
# 1041 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Sven_R5_2
# 1046 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_SVEN_R5, ParcelCorridor_Sven_R5_Text_1
# 1047 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R5_Text_2, MSGBOX_DEFAULT
# 1048 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Sven_R5_2:
# 1042 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Sven_R2_Text_1, MSGBOX_DEFAULT
# 1043 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Olav::
# 1052 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_OLAV, ParcelCorridor_Olav_Text_0, ParcelCorridor_Olav_Text_1, ParcelCorridor_Olav_FirstWin
# 1056 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1057 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Olav_3
ParcelCorridor_Olav_1:
# 1060 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Olav_8
ParcelCorridor_Olav_6:
# 1063 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Olav_13
ParcelCorridor_Olav_11:
# 1066 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Olav_18
ParcelCorridor_Olav_16:
# 1069 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Olav_2:
# 1058 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Olav_R2
	goto ParcelCorridor_Olav_1

ParcelCorridor_Olav_3:
# 1057 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_OLAV_R2
	goto_if 0, ParcelCorridor_Olav_2
	goto ParcelCorridor_Olav_1

ParcelCorridor_Olav_7:
# 1061 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Olav_R3
	goto ParcelCorridor_Olav_6

ParcelCorridor_Olav_8:
# 1060 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_OLAV_R3
	goto_if 0, ParcelCorridor_Olav_7
	goto ParcelCorridor_Olav_6

ParcelCorridor_Olav_12:
# 1064 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Olav_R4
	goto ParcelCorridor_Olav_11

ParcelCorridor_Olav_13:
# 1063 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_OLAV_R4
	goto_if 0, ParcelCorridor_Olav_12
	goto ParcelCorridor_Olav_11

ParcelCorridor_Olav_17:
# 1067 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Olav_R5
	goto ParcelCorridor_Olav_16

ParcelCorridor_Olav_18:
# 1066 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_OLAV_R5
	goto_if 0, ParcelCorridor_Olav_17
	goto ParcelCorridor_Olav_16


ParcelCorridor_Olav_FirstWin::
# 1073 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_Text_2, MSGBOX_DEFAULT
# 1074 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Olav_R2::
# 1078 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1079 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1080 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_0, MSGBOX_YESNO
# 1081 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Olav_R2_2
# 1086 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_OLAV_R2, ParcelCorridor_Olav_R2_Text_2
# 1087 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_3, MSGBOX_DEFAULT
# 1088 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Olav_R2_2:
# 1082 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_1, MSGBOX_DEFAULT
# 1083 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Olav_R3::
# 1092 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1093 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1094 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R3_Text_0, MSGBOX_YESNO
# 1095 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Olav_R3_2
# 1100 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_OLAV_R3, ParcelCorridor_Olav_R3_Text_1
# 1101 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R3_Text_2, MSGBOX_DEFAULT
# 1102 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Olav_R3_2:
# 1096 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_1, MSGBOX_DEFAULT
# 1097 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Olav_R4::
# 1106 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1107 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1108 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R4_Text_0, MSGBOX_YESNO
# 1109 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Olav_R4_2
# 1114 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_OLAV_R4, ParcelCorridor_Olav_R2_Text_2
# 1115 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R4_Text_1, MSGBOX_DEFAULT
# 1116 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Olav_R4_2:
# 1110 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_1, MSGBOX_DEFAULT
# 1111 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Olav_R5::
# 1120 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1121 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1122 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R5_Text_0, MSGBOX_YESNO
# 1123 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Olav_R5_2
# 1128 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_OLAV_R5, ParcelCorridor_Olav_R2_Text_2
# 1129 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R5_Text_1, MSGBOX_DEFAULT
# 1130 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Olav_R5_2:
# 1124 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Olav_R2_Text_1, MSGBOX_DEFAULT
# 1125 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Inga::
# 1134 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_INGA, ParcelCorridor_Inga_Text_0, ParcelCorridor_Inga_Text_1, ParcelCorridor_Inga_FirstWin
# 1138 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1139 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Inga_3
ParcelCorridor_Inga_1:
# 1142 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Inga_8
ParcelCorridor_Inga_6:
# 1145 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Inga_13
ParcelCorridor_Inga_11:
# 1148 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Inga_18
ParcelCorridor_Inga_16:
# 1151 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Inga_2:
# 1140 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Inga_R2
	goto ParcelCorridor_Inga_1

ParcelCorridor_Inga_3:
# 1139 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_INGA_R2
	goto_if 0, ParcelCorridor_Inga_2
	goto ParcelCorridor_Inga_1

ParcelCorridor_Inga_7:
# 1143 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Inga_R3
	goto ParcelCorridor_Inga_6

ParcelCorridor_Inga_8:
# 1142 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_INGA_R3
	goto_if 0, ParcelCorridor_Inga_7
	goto ParcelCorridor_Inga_6

ParcelCorridor_Inga_12:
# 1146 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Inga_R4
	goto ParcelCorridor_Inga_11

ParcelCorridor_Inga_13:
# 1145 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_INGA_R4
	goto_if 0, ParcelCorridor_Inga_12
	goto ParcelCorridor_Inga_11

ParcelCorridor_Inga_17:
# 1149 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Inga_R5
	goto ParcelCorridor_Inga_16

ParcelCorridor_Inga_18:
# 1148 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_INGA_R5
	goto_if 0, ParcelCorridor_Inga_17
	goto ParcelCorridor_Inga_16


ParcelCorridor_Inga_FirstWin::
# 1155 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_Text_2, MSGBOX_DEFAULT
# 1156 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Inga_R2::
# 1160 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1161 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1162 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_0, MSGBOX_YESNO
# 1163 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Inga_R2_2
# 1168 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_INGA_R2, ParcelCorridor_Inga_R2_Text_2
# 1169 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_3, MSGBOX_DEFAULT
# 1170 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Inga_R2_2:
# 1164 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_1, MSGBOX_DEFAULT
# 1165 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Inga_R3::
# 1174 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1175 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1176 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R3_Text_0, MSGBOX_YESNO
# 1177 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Inga_R3_2
# 1182 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_INGA_R3, ParcelCorridor_Inga_R2_Text_2
# 1183 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R3_Text_1, MSGBOX_DEFAULT
# 1184 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Inga_R3_2:
# 1178 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_1, MSGBOX_DEFAULT
# 1179 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Inga_R4::
# 1188 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1189 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1190 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R4_Text_0, MSGBOX_YESNO
# 1191 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Inga_R4_2
# 1196 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_INGA_R4, ParcelCorridor_Inga_R4_Text_1
# 1197 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R4_Text_2, MSGBOX_DEFAULT
# 1198 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Inga_R4_2:
# 1192 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_1, MSGBOX_DEFAULT
# 1193 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Inga_R5::
# 1202 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1203 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1204 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R5_Text_0, MSGBOX_YESNO
# 1205 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Inga_R5_2
# 1210 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_INGA_R5, ParcelCorridor_Inga_R5_Text_1
# 1211 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R5_Text_2, MSGBOX_DEFAULT
# 1212 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Inga_R5_2:
# 1206 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Inga_R2_Text_1, MSGBOX_DEFAULT
# 1207 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Turid::
# 1216 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_TURID, ParcelCorridor_Turid_Text_0, ParcelCorridor_Turid_Text_1, ParcelCorridor_Turid_FirstWin
# 1220 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1221 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_Turid_3
ParcelCorridor_Turid_1:
# 1224 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_Turid_8
ParcelCorridor_Turid_6:
# 1227 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_Turid_13
ParcelCorridor_Turid_11:
# 1230 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_Turid_18
ParcelCorridor_Turid_16:
# 1233 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_Turid_2:
# 1222 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Turid_R2
	goto ParcelCorridor_Turid_1

ParcelCorridor_Turid_3:
# 1221 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_TURID_R2
	goto_if 0, ParcelCorridor_Turid_2
	goto ParcelCorridor_Turid_1

ParcelCorridor_Turid_7:
# 1225 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Turid_R3
	goto ParcelCorridor_Turid_6

ParcelCorridor_Turid_8:
# 1224 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_TURID_R3
	goto_if 0, ParcelCorridor_Turid_7
	goto ParcelCorridor_Turid_6

ParcelCorridor_Turid_12:
# 1228 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Turid_R4
	goto ParcelCorridor_Turid_11

ParcelCorridor_Turid_13:
# 1227 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_TURID_R4
	goto_if 0, ParcelCorridor_Turid_12
	goto ParcelCorridor_Turid_11

ParcelCorridor_Turid_17:
# 1231 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_Turid_R5
	goto ParcelCorridor_Turid_16

ParcelCorridor_Turid_18:
# 1230 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_TURID_R5
	goto_if 0, ParcelCorridor_Turid_17
	goto ParcelCorridor_Turid_16


ParcelCorridor_Turid_FirstWin::
# 1237 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_Text_2, MSGBOX_DEFAULT
# 1238 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Turid_R2::
# 1242 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1243 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1244 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_0, MSGBOX_YESNO
# 1245 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Turid_R2_2
# 1250 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_TURID_R2, ParcelCorridor_Turid_R2_Text_2
# 1251 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_3, MSGBOX_DEFAULT
# 1252 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Turid_R2_2:
# 1246 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_1, MSGBOX_DEFAULT
# 1247 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Turid_R3::
# 1256 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1257 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1258 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R3_Text_0, MSGBOX_YESNO
# 1259 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Turid_R3_2
# 1264 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_TURID_R3, ParcelCorridor_Turid_R3_Text_1
# 1265 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R3_Text_2, MSGBOX_DEFAULT
# 1266 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Turid_R3_2:
# 1260 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_1, MSGBOX_DEFAULT
# 1261 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Turid_R4::
# 1270 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1271 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1272 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R4_Text_0, MSGBOX_YESNO
# 1273 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Turid_R4_2
# 1278 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_TURID_R4, ParcelCorridor_Turid_R4_Text_1
# 1279 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R4_Text_2, MSGBOX_DEFAULT
# 1280 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Turid_R4_2:
# 1274 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_1, MSGBOX_DEFAULT
# 1275 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Turid_R5::
# 1284 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1285 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1286 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R5_Text_0, MSGBOX_YESNO
# 1287 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Turid_R5_2
# 1292 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_TURID_R5, ParcelCorridor_Turid_R5_Text_1
# 1293 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R5_Text_2, MSGBOX_DEFAULT
# 1294 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Turid_R5_2:
# 1288 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Turid_R2_Text_1, MSGBOX_DEFAULT
# 1289 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Vidar::
# 1300 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_VIDAR, ParcelCorridor_T_Vidar_Text_0, ParcelCorridor_T_Vidar_Text_1, ParcelCorridor_T_Vidar_FirstWin
# 1304 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1305 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_T_Vidar_3
ParcelCorridor_T_Vidar_1:
# 1308 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_T_Vidar_8
ParcelCorridor_T_Vidar_6:
# 1311 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_T_Vidar_13
ParcelCorridor_T_Vidar_11:
# 1314 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_T_Vidar_18
ParcelCorridor_T_Vidar_16:
# 1317 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_T_Vidar_2:
# 1306 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Vidar_R2
	goto ParcelCorridor_T_Vidar_1

ParcelCorridor_T_Vidar_3:
# 1305 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_VIDAR_R2
	goto_if 0, ParcelCorridor_T_Vidar_2
	goto ParcelCorridor_T_Vidar_1

ParcelCorridor_T_Vidar_7:
# 1309 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Vidar_R3
	goto ParcelCorridor_T_Vidar_6

ParcelCorridor_T_Vidar_8:
# 1308 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_VIDAR_R3
	goto_if 0, ParcelCorridor_T_Vidar_7
	goto ParcelCorridor_T_Vidar_6

ParcelCorridor_T_Vidar_12:
# 1312 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Vidar_R4
	goto ParcelCorridor_T_Vidar_11

ParcelCorridor_T_Vidar_13:
# 1311 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_VIDAR_R4
	goto_if 0, ParcelCorridor_T_Vidar_12
	goto ParcelCorridor_T_Vidar_11

ParcelCorridor_T_Vidar_17:
# 1315 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Vidar_R5
	goto ParcelCorridor_T_Vidar_16

ParcelCorridor_T_Vidar_18:
# 1314 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_VIDAR_R5
	goto_if 0, ParcelCorridor_T_Vidar_17
	goto ParcelCorridor_T_Vidar_16


ParcelCorridor_T_Vidar_FirstWin::
# 1321 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_Text_2, MSGBOX_DEFAULT
# 1322 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Vidar_R2::
# 1326 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1327 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1328 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_0, MSGBOX_YESNO
# 1329 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Vidar_R2_2
# 1334 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_VIDAR_R2, ParcelCorridor_T_Vidar_R2_Text_2
# 1335 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_3, MSGBOX_DEFAULT
# 1336 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Vidar_R2_2:
# 1330 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 1331 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Vidar_R3::
# 1340 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1341 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1342 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R3_Text_0, MSGBOX_YESNO
# 1343 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Vidar_R3_2
# 1348 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_VIDAR_R3, ParcelCorridor_T_Vidar_R3_Text_1
# 1349 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R3_Text_2, MSGBOX_DEFAULT
# 1350 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Vidar_R3_2:
# 1344 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 1345 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Vidar_R4::
# 1354 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1355 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1356 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R4_Text_0, MSGBOX_YESNO
# 1357 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Vidar_R4_2
# 1362 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_VIDAR_R4, ParcelCorridor_T_Vidar_R2_Text_2
# 1363 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R4_Text_1, MSGBOX_DEFAULT
# 1364 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Vidar_R4_2:
# 1358 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 1359 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Vidar_R5::
# 1368 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1369 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1370 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R5_Text_0, MSGBOX_YESNO
# 1371 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Vidar_R5_2
# 1376 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_VIDAR_R5, ParcelCorridor_T_Vidar_R5_Text_1
# 1377 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R5_Text_2, MSGBOX_DEFAULT
# 1378 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Vidar_R5_2:
# 1372 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 1373 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Halle::
# 1382 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_HALLE, ParcelCorridor_T_Halle_Text_0, ParcelCorridor_T_Halle_Text_1, ParcelCorridor_T_Halle_FirstWin
# 1386 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1387 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_T_Halle_3
ParcelCorridor_T_Halle_1:
# 1390 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_T_Halle_8
ParcelCorridor_T_Halle_6:
# 1393 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_T_Halle_13
ParcelCorridor_T_Halle_11:
# 1396 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_T_Halle_18
ParcelCorridor_T_Halle_16:
# 1399 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_T_Halle_2:
# 1388 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Halle_R2
	goto ParcelCorridor_T_Halle_1

ParcelCorridor_T_Halle_3:
# 1387 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_HALLE_R2
	goto_if 0, ParcelCorridor_T_Halle_2
	goto ParcelCorridor_T_Halle_1

ParcelCorridor_T_Halle_7:
# 1391 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Halle_R3
	goto ParcelCorridor_T_Halle_6

ParcelCorridor_T_Halle_8:
# 1390 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_HALLE_R3
	goto_if 0, ParcelCorridor_T_Halle_7
	goto ParcelCorridor_T_Halle_6

ParcelCorridor_T_Halle_12:
# 1394 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Halle_R4
	goto ParcelCorridor_T_Halle_11

ParcelCorridor_T_Halle_13:
# 1393 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_HALLE_R4
	goto_if 0, ParcelCorridor_T_Halle_12
	goto ParcelCorridor_T_Halle_11

ParcelCorridor_T_Halle_17:
# 1397 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Halle_R5
	goto ParcelCorridor_T_Halle_16

ParcelCorridor_T_Halle_18:
# 1396 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_HALLE_R5
	goto_if 0, ParcelCorridor_T_Halle_17
	goto ParcelCorridor_T_Halle_16


ParcelCorridor_T_Halle_FirstWin::
# 1403 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_Text_2, MSGBOX_DEFAULT
# 1404 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Halle_R2::
# 1408 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1409 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1410 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_0, MSGBOX_YESNO
# 1411 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Halle_R2_2
# 1416 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_HALLE_R2, ParcelCorridor_T_Halle_R2_Text_2
# 1417 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_3, MSGBOX_DEFAULT
# 1418 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Halle_R2_2:
# 1412 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_1, MSGBOX_DEFAULT
# 1413 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Halle_R3::
# 1422 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1423 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1424 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R3_Text_0, MSGBOX_YESNO
# 1425 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Halle_R3_2
# 1430 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_HALLE_R3, ParcelCorridor_T_Halle_R3_Text_1
# 1431 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R3_Text_2, MSGBOX_DEFAULT
# 1432 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Halle_R3_2:
# 1426 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_1, MSGBOX_DEFAULT
# 1427 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Halle_R4::
# 1436 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1437 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1438 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R4_Text_0, MSGBOX_YESNO
# 1439 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Halle_R4_2
# 1444 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_HALLE_R4, ParcelCorridor_T_Halle_R2_Text_2
# 1445 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R4_Text_1, MSGBOX_DEFAULT
# 1446 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Halle_R4_2:
# 1440 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_1, MSGBOX_DEFAULT
# 1441 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Halle_R5::
# 1450 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1451 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1452 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R5_Text_0, MSGBOX_YESNO
# 1453 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Halle_R5_2
# 1458 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_HALLE_R5, ParcelCorridor_T_Halle_R3_Text_1
# 1459 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R5_Text_1, MSGBOX_DEFAULT
# 1460 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Halle_R5_2:
# 1454 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Halle_R2_Text_1, MSGBOX_DEFAULT
# 1455 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Elin::
# 1464 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_COR_ELIN, ParcelCorridor_T_Elin_Text_0, ParcelCorridor_T_Elin_Text_1, ParcelCorridor_T_Elin_FirstWin
# 1468 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1469 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridor_T_Elin_3
ParcelCorridor_T_Elin_1:
# 1472 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridor_T_Elin_8
ParcelCorridor_T_Elin_6:
# 1475 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridor_T_Elin_13
ParcelCorridor_T_Elin_11:
# 1478 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridor_T_Elin_18
ParcelCorridor_T_Elin_16:
# 1481 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridor_T_Elin_2:
# 1470 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Elin_R2
	goto ParcelCorridor_T_Elin_1

ParcelCorridor_T_Elin_3:
# 1469 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELIN_R2
	goto_if 0, ParcelCorridor_T_Elin_2
	goto ParcelCorridor_T_Elin_1

ParcelCorridor_T_Elin_7:
# 1473 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Elin_R3
	goto ParcelCorridor_T_Elin_6

ParcelCorridor_T_Elin_8:
# 1472 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELIN_R3
	goto_if 0, ParcelCorridor_T_Elin_7
	goto ParcelCorridor_T_Elin_6

ParcelCorridor_T_Elin_12:
# 1476 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Elin_R4
	goto ParcelCorridor_T_Elin_11

ParcelCorridor_T_Elin_13:
# 1475 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELIN_R4
	goto_if 0, ParcelCorridor_T_Elin_12
	goto ParcelCorridor_T_Elin_11

ParcelCorridor_T_Elin_17:
# 1479 "data/maps/ParcelCorridor/scripts.pory"
	goto ParcelCorridor_T_Elin_R5
	goto ParcelCorridor_T_Elin_16

ParcelCorridor_T_Elin_18:
# 1478 "data/maps/ParcelCorridor/scripts.pory"
	checktrainerflag TRAINER_SKALD_COR_ELIN_R5
	goto_if 0, ParcelCorridor_T_Elin_17
	goto ParcelCorridor_T_Elin_16


ParcelCorridor_T_Elin_FirstWin::
# 1485 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_Text_2, MSGBOX_DEFAULT
# 1486 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Elin_R2::
# 1490 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1491 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1492 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_0, MSGBOX_YESNO
# 1493 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Elin_R2_2
# 1498 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELIN_R2, ParcelCorridor_T_Elin_R2_Text_2
# 1499 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_3, MSGBOX_DEFAULT
# 1500 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Elin_R2_2:
# 1494 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_1, MSGBOX_DEFAULT
# 1495 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Elin_R3::
# 1504 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1505 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1506 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R3_Text_0, MSGBOX_YESNO
# 1507 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Elin_R3_2
# 1512 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELIN_R3, ParcelCorridor_T_Elin_R3_Text_1
# 1513 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R3_Text_2, MSGBOX_DEFAULT
# 1514 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Elin_R3_2:
# 1508 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_1, MSGBOX_DEFAULT
# 1509 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Elin_R4::
# 1518 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1519 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1520 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R4_Text_0, MSGBOX_YESNO
# 1521 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Elin_R4_2
# 1526 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELIN_R4, ParcelCorridor_T_Elin_R4_Text_1
# 1527 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R4_Text_2, MSGBOX_DEFAULT
# 1528 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Elin_R4_2:
# 1522 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_1, MSGBOX_DEFAULT
# 1523 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_T_Elin_R5::
# 1532 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1533 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1534 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R5_Text_0, MSGBOX_YESNO
# 1535 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_T_Elin_R5_2
# 1540 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_COR_ELIN_R5, ParcelCorridor_T_Elin_R5_Text_1
# 1541 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R5_Text_2, MSGBOX_DEFAULT
# 1542 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_T_Elin_R5_2:
# 1536 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_T_Elin_R2_Text_1, MSGBOX_DEFAULT
# 1537 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_PerrinScene::
# 1548 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_3, ParcelCorridor_PerrinScene_2
# 1552 "data/maps/ParcelCorridor/scripts.pory"
	lockall
# 1553 "data/maps/ParcelCorridor/scripts.pory"
	playse SE_PIN
# 1554 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PerrinScene_Text_0, MSGBOX_DEFAULT
# 1555 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 1556 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 23, Movement_ParcelCorridor_PerrinIn
# 1557 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 1558 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PerrinScene_Text_1, MSGBOX_DEFAULT
# 1559 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_3, ParcelCorridor_PerrinScene_Text_2
# 1560 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PerrinScene_Text_3, MSGBOX_DEFAULT
# 1561 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 1562 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 23, Movement_ParcelCorridor_PerrinOut
# 1563 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 1564 "data/maps/ParcelCorridor/scripts.pory"
	removeobject 23
# 1565 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_SKALD_PERRIN_3
# 1566 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1567 "data/maps/ParcelCorridor/scripts.pory"
	releaseall
	end

ParcelCorridor_PerrinScene_2:
# 1549 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelCorridor_PerrinTalk::
# 1571 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1572 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1573 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 1574 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


# 1577 "data/maps/ParcelCorridor/scripts.pory"
Movement_ParcelCorridor_PerrinIn:
# 1577 "data/maps/ParcelCorridor/scripts.pory"
	walk_down
# 1577 "data/maps/ParcelCorridor/scripts.pory"
	walk_down
	step_end

# 1578 "data/maps/ParcelCorridor/scripts.pory"
Movement_ParcelCorridor_PerrinOut:
# 1578 "data/maps/ParcelCorridor/scripts.pory"
	walk_up
# 1578 "data/maps/ParcelCorridor/scripts.pory"
	walk_up
	step_end

ParcelCorridor_Mirren_Rematch::
# 1582 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1583 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 1584 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Mirren_Rematch_Text_0, MSGBOX_YESNO
# 1585 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Mirren_Rematch_2
# 1590 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM2_R, ParcelCorridor_Mirren_Rematch_Text_2
# 1591 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Mirren_Rematch_Text_3, MSGBOX_DEFAULT
# 1592 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Mirren_Rematch_2:
# 1586 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Mirren_Rematch_Text_1, MSGBOX_DEFAULT
# 1587 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_SurveyStake::
# 1598 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SurveyStake_Text_0, MSGBOX_SIGN
# 1599 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 1
# 1600 "data/maps/ParcelCorridor/scripts.pory"
	special SkaldSurveyStake
# 1601 "data/maps/ParcelCorridor/scripts.pory"
	msgbox gStringVar4, MSGBOX_SIGN
# 1602 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND, ParcelCorridor_SurveyStake_3
ParcelCorridor_SurveyStake_1:
	end

ParcelCorridor_SurveyStake_2:
# 1603 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_SurveyStake_Text_1, MSGBOX_SIGN
# 1604 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_SKALD_SECOND_1
	goto ParcelCorridor_SurveyStake_1

ParcelCorridor_SurveyStake_3:
# 1602 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_unset FLAG_SKALD_SECOND_1, ParcelCorridor_SurveyStake_2
	goto ParcelCorridor_SurveyStake_1


ParcelCorridor_PairCulvert::
# 1612 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1613 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCorridor_PairCulvert_2
# 1618 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelCorridor_PairCulvert_3
# 1624 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCulvert_Text_8, MSGBOX_DEFAULT
# 1625 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCulvert_Text_9, MSGBOX_DEFAULT
# 1626 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCulvert_Text_10, MSGBOX_DEFAULT
# 1627 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCulvert_Text_11, MSGBOX_DEFAULT
ParcelCorridor_PairCulvert_1:
# 1629 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_PairCulvert_2:
# 1614 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCulvert_Text_0, MSGBOX_DEFAULT
# 1615 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCulvert_Text_1, MSGBOX_DEFAULT
# 1616 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCulvert_Text_2, MSGBOX_DEFAULT
# 1617 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCulvert_Text_3, MSGBOX_DEFAULT
	goto ParcelCorridor_PairCulvert_1

ParcelCorridor_PairCulvert_3:
# 1619 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCulvert_Text_4, MSGBOX_DEFAULT
# 1620 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCulvert_Text_5, MSGBOX_DEFAULT
# 1621 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCulvert_Text_6, MSGBOX_DEFAULT
# 1622 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCulvert_Text_7, MSGBOX_DEFAULT
	goto ParcelCorridor_PairCulvert_1


ParcelCorridor_Board1::
# 1636 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Board1_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_Board2::
# 1641 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Board2_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_PairCut::
# 1648 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1649 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCorridor_PairCut_2
# 1654 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelCorridor_PairCut_3
# 1659 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCut_Text_7, MSGBOX_DEFAULT
# 1660 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCut_Text_8, MSGBOX_DEFAULT
# 1661 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCut_Text_9, MSGBOX_DEFAULT
# 1662 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCut_Text_10, MSGBOX_DEFAULT
ParcelCorridor_PairCut_1:
# 1664 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_PairCut_2:
# 1650 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCut_Text_0, MSGBOX_DEFAULT
# 1651 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCut_Text_1, MSGBOX_DEFAULT
# 1652 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCut_Text_2, MSGBOX_DEFAULT
# 1653 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCut_Text_3, MSGBOX_DEFAULT
	goto ParcelCorridor_PairCut_1

ParcelCorridor_PairCut_3:
# 1655 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCut_Text_4, MSGBOX_DEFAULT
# 1656 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCut_Text_5, MSGBOX_DEFAULT
# 1657 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairCut_Text_6, MSGBOX_DEFAULT
	goto ParcelCorridor_PairCut_1


ParcelCorridor_FindHeadwall::
# 1671 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HEADWALL, ParcelCorridor_FindHeadwall_4
ParcelCorridor_FindHeadwall_3:
# 1675 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_FindHeadwall_Text_1, MSGBOX_SIGN
ParcelCorridor_FindHeadwall_1:
	end

ParcelCorridor_FindHeadwall_2:
# 1672 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_FindHeadwall_Text_0, MSGBOX_SIGN
# 1673 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_SKALD_Q_HEADWALL_FOUND
	goto ParcelCorridor_FindHeadwall_1

ParcelCorridor_FindHeadwall_4:
# 1671 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_HEADWALL_FOUND, ParcelCorridor_FindHeadwall_2
	goto ParcelCorridor_FindHeadwall_3


ParcelCorridor_Board3::
# 1683 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Board3_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_Board4::
# 1690 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Board4_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_Board10::
# 1697 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Board10_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_PairGate::
# 1704 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 1705 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCorridor_PairGate_2
# 1709 "data/maps/ParcelCorridor/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelCorridor_PairGate_3
# 1715 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairGate_Text_7, MSGBOX_DEFAULT
# 1716 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairGate_Text_8, MSGBOX_DEFAULT
# 1717 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairGate_Text_9, MSGBOX_DEFAULT
# 1718 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairGate_Text_10, MSGBOX_DEFAULT
ParcelCorridor_PairGate_1:
# 1720 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_PairGate_2:
# 1706 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairGate_Text_0, MSGBOX_DEFAULT
# 1707 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairGate_Text_1, MSGBOX_DEFAULT
# 1708 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairGate_Text_2, MSGBOX_DEFAULT
	goto ParcelCorridor_PairGate_1

ParcelCorridor_PairGate_3:
# 1710 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairGate_Text_3, MSGBOX_DEFAULT
# 1711 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairGate_Text_4, MSGBOX_DEFAULT
# 1712 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairGate_Text_5, MSGBOX_DEFAULT
# 1713 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_PairGate_Text_6, MSGBOX_DEFAULT
	goto ParcelCorridor_PairGate_1


ParcelCorridor_Board11::
# 1727 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Board11_Text_0, MSGBOX_SIGN
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
	.string "MIRREN: One question first. The culvert\n"
	.string "back there. The orange vest says\l"
	.string "grates next month, and the frogs can't\l"
	.string "make the pipe.\p"
	.string "Do we stop the work?$"

ParcelCorridor_Checkpoint_Text_3:
# 54 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: With what? You'd be one ranger\n"
	.string "and a notebook in front of a crew with a\l"
	.string "schedule, and the schedule wins every\l"
	.string "time.\p"
	.string "Write it where it can't be rounded up,\n"
	.string "and don't sign. That's the whole of the\l"
	.string "power. Learn to use it.$"

ParcelCorridor_Checkpoint_Text_4:
# 56 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Right. We don't stop anything;\n"
	.string "we're not built for it. We write it down\l"
	.string "where it can't be rounded up, and we\l"
	.string "don't sign.\p"
	.string "That's the whole of the power. It's more\n"
	.string "than it sounds.$"

ParcelCorridor_Checkpoint_Text_5:
# 59 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Now show me you can read\n"
	.string "anything at all in the dark.$"

ParcelCorridor_Checkpoint_Text_6:
# 60 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: …Steady under pressure. Noted.$"

ParcelCorridor_Checkpoint_Text_7:
# 63 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Subsurface clearance. It logs\n"
	.string "you fit to survey enclosed ground.\l"
	.string "Culverts. Adits. Anywhere the daylight\l"
	.string "stops.\p"
	.string "Comes with the standard kit.$"

ParcelCorridor_Checkpoint_Text_8:
# 65 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: FLASH. There's an old survey\n"
	.string "adit up the cut, past the stream.\l"
	.string "Pumped dry years ago. Nobody's been in\l"
	.string "since.\p"
	.string "If you want to see what we left in\n"
	.string "there, now you can.$"

ParcelCorridor_Mirren_Text_0:
# 81 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: You filed the basin as what it\n"
	.string "is. Half the division would have rounded\l"
	.string "up.\p"
	.string "Go on. The river's cleaner. For now.$"

ParcelCorridor_Mirren_Text_1:
# 85 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Cleared provisional. The\n"
	.string "basin's darker than this. Don't go in\l"
	.string "blind.$"

ParcelCorridor_CulvertScene_Text_0:
# 106 "data/maps/ParcelCorridor/scripts.pory"
	.string "{STR_VAR_1} stops at the edge of\n"
	.string "the road and won't go on.$"

ParcelCorridor_CulvertScene_Text_1:
# 109 "data/maps/ParcelCorridor/scripts.pory"
	.string "A culvert under the old road. Concrete.\n"
	.string "Narrow. Functional.\p"
	.string "Upstream, the channel is wide and\n"
	.string "braided. Downstream, it is one fast cut.$"

ParcelCorridor_CulvertScene_Text_2:
# 110 "data/maps/ParcelCorridor/scripts.pory"
	.string "The water through the pipe sounds\n"
	.string "sharper than it should. Less layered.\l"
	.string "More forceful.$"

ParcelCorridor_CulvertScene_Text_3:
# 115 "data/maps/ParcelCorridor/scripts.pory"
	.string "A splash, on the far side.$"

ParcelCorridor_CulvertScene_Text_4:
# 118 "data/maps/ParcelCorridor/scripts.pory"
	.string "A WOOPER tries the current. Once. Twice.\p"
	.string "It goes back to the far bank and stays\n"
	.string "there.$"

ParcelCorridor_CulvertScene_Text_5:
# 119 "data/maps/ParcelCorridor/scripts.pory"
	.string "Not trapped. Excluded.\p"
	.string "The corridor still exists. It's thinner.\n"
	.string "Written down: the pipe width, the drop,\l"
	.string "the time it tried.$"

ParcelCorridor_FarSide_Text_0:
# 133 "data/maps/ParcelCorridor/scripts.pory"
	.string "It watches the current from the far\n"
	.string "bank. It does not try again.$"

ParcelCorridor_Worker_Text_0:
# 147 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: Culvert still meets code. The\n"
	.string "code changed. Now it meets the old\l"
	.string "code. We've a new drawing. Nobody's said\l"
	.string "who pays for the new culvert. Nobody\l"
	.string "will, for a while.$"

ParcelCorridor_Worker_Text_1:
# 155 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: Quite a current through there,\n"
	.string "eh?\p"
	.string "HOLLOWBEND drainage works. Culvert's\n"
	.string "ours. Meets code.$"

ParcelCorridor_Worker_Text_2:
# 159 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: Oh good. You're with the\n"
	.string "station, right? We've been meaning to\l"
	.string "flag this.\p"
	.string "Drainage specs met code, but wildlife\n"
	.string "keeps clogging it. We're scheduled to\l"
	.string "install grates next month.$"

ParcelCorridor_Worker_Text_3:
# 160 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: It meets regulation. But if you\n"
	.string "want, I can note that RANGERS were\l"
	.string "consulted.$"

ParcelCorridor_Worker_Text_4:
# 161 "data/maps/ParcelCorridor/scripts.pory"
	.string "Note that RANGERS were consulted?$"

ParcelCorridor_Worker_Text_5:
# 163 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: …\p"
	.string "No. Who approved the design?$"

ParcelCorridor_Worker_Text_6:
# 165 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: No. Who approved the\n"
	.string "design?$"

ParcelCorridor_Worker_Text_7:
# 167 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: Do you have the\n"
	.string "pre-construction flow data?$"

ParcelCorridor_Worker_Text_8:
# 168 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: That'd be… county records, I\n"
	.string "think. Or the contractor. It's in the\l"
	.string "hut, maybe. The spec sheet is.$"

ParcelCorridor_Worker_Text_9:
# 169 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: Grates would solve your\n"
	.string "problem. They wouldn't solve the\l"
	.string "WOOPER's.\p"
	.string "Fixing it later might mean it's already\n"
	.string "too late.$"

ParcelCorridor_Worker_Text_10:
# 170 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: …I'll note that the corridor\n"
	.string "width changed.$"

ParcelCorridor_Worker_Text_11:
# 171 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: It's not enough.$"

ParcelCorridor_Worker_Text_12:
# 172 "data/maps/ParcelCorridor/scripts.pory"
	.string "WORKER: It's not nothing. Crew 14, if\n"
	.string "anyone asks who said it.$"

ParcelCorridor_Worker_Text_13:
# 180 "data/maps/ParcelCorridor/scripts.pory"
	.string "Written down: the specs, the schedule,\n"
	.string "the missing data, the crew number.\p"
	.string "The report will move slowly. It will be\n"
	.string "questioned. Maybe ignored. But it\l"
	.string "exists now.$"

ParcelCorridor_ObsStumps_Text_0:
# 187 "data/maps/ParcelCorridor/scripts.pory"
	.string "Old stumps in a rough line, cut flat,\n"
	.string "grey with years.\p"
	.string "The forest didn't thin here. It was\n"
	.string "thinned.$"

ParcelCorridor_ObsMoss_Text_0:
# 191 "data/maps/ParcelCorridor/scripts.pory"
	.string "Moss thick on the north faces, gone\n"
	.string "where the canopy used to hold the damp.$"

ParcelCorridor_ObsDrainage_Text_0:
# 195 "data/maps/ParcelCorridor/scripts.pory"
	.string "A drainage cut, knife-straight, running\n"
	.string "off under the trees.\p"
	.string "Nothing in nature drains like this.$"

ParcelCorridor_ObsRoad_Text_0:
# 199 "data/maps/ParcelCorridor/scripts.pory"
	.string "A cracked service road, half-reclaimed\n"
	.string "by weeds.\p"
	.string "It looks abandoned. It isn't harmless.$"

ParcelCorridor_ObsCulvert_Text_0:
# 203 "data/maps/ParcelCorridor/scripts.pory"
	.string "The culvert. Concrete, narrow,\n"
	.string "functional.\p"
	.string "Upstream: broad and braided.\n"
	.string "Downstream: a single fast channel.$"

ParcelCorridor_SignWest_Text_0:
# 209 "data/maps/ParcelCorridor/scripts.pory"
	.string "HOLLOWBEND SPUR\p"
	.string "West: REEDMERE landing.\n"
	.string "East: the old service cut. Road closed\l"
	.string "to vehicles.$"

ParcelCorridor_SignCheckpoint_Text_0:
# 213 "data/maps/ParcelCorridor/scripts.pory"
	.string "MEREHOLT SUBSURFACE SURVEY\n"
	.string "Checkpoint\p"
	.string "Clearance required beyond this point.\n"
	.string "Provisional RANGERS report to the\l"
	.string "officer on duty.$"

ParcelCorridor_SignNorth_Text_0:
# 217 "data/maps/ParcelCorridor/scripts.pory"
	.string "North: the FLOODBASIN. Corps survey\n"
	.string "stakes from here. Keep to the marked\l"
	.string "path.$"

ParcelCorridor_SignAdit_Text_0:
# 221 "data/maps/ParcelCorridor/scripts.pory"
	.string "MEREHOLT SUBSURFACE SURVEY -- ADIT 3\p"
	.string "Pumped dry. No lighting. Keep out.$"

ParcelCorridor_Geir_Text_0:
# 233 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Nobody walks the cut anymore.\n"
	.string "Just me and the stumps. And you,\l"
	.string "apparently.$"

ParcelCorridor_Geir_Text_1:
# 234 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Stumps don't hit back. Noted.$"

ParcelCorridor_Geir_Text_2:
# 249 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: They logged this whole spur in\n"
	.string "one winter. The road was for the trucks.\l"
	.string "Then the trucks stopped coming.$"

ParcelCorridor_Geir_R2_Text_0:
# 260 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelCorridor_Geir_R2_Text_1:
# 262 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Another time, then.$"

ParcelCorridor_Geir_R2_Text_2:
# 266 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Noted. Properly, this time.$"

ParcelCorridor_Geir_R2_Text_3:
# 267 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Geir_R3_Text_0:
# 274 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCorridor_Geir_R3_Text_1:
# 280 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: …Again, then. Later.$"

ParcelCorridor_Geir_R3_Text_2:
# 281 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Geir_R4_Text_0:
# 288 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCorridor_Geir_R4_Text_1:
# 294 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Still yours.$"

ParcelCorridor_Geir_R4_Text_2:
# 295 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_Geir_R5_Text_0:
# 302 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCorridor_Geir_R5_Text_1:
# 309 "data/maps/ParcelCorridor/scripts.pory"
	.string "GEIR: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCorridor_Per_Text_0:
# 315 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: The moths only come out where the\n"
	.string "big trees are left. I counted. Battle?$"

ParcelCorridor_Per_Text_1:
# 316 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: You counted better.$"

ParcelCorridor_Per_Text_2:
# 331 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Six DUSTOX in the old stand by the\n"
	.string "ledges. Zero in the cut. That's a number,\l"
	.string "isn't it? That's a finding.$"

ParcelCorridor_Per_R2_Text_0:
# 342 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCorridor_Per_R2_Text_1:
# 344 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Fine. Same spot.$"

ParcelCorridor_Per_R2_Text_2:
# 348 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: That's the one I wanted to see.$"

ParcelCorridor_Per_R2_Text_3:
# 349 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Per_R3_Text_0:
# 356 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCorridor_Per_R3_Text_1:
# 362 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Noted. Properly, this time.$"

ParcelCorridor_Per_R3_Text_2:
# 363 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Per_R4_Text_0:
# 370 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelCorridor_Per_R4_Text_1:
# 376 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: …Fair.$"

ParcelCorridor_Per_R4_Text_2:
# 377 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Per_R5_Text_0:
# 384 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridor_Per_R5_Text_1:
# 390 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: Right. That's the whole of it.$"

ParcelCorridor_Per_R5_Text_2:
# 391 "data/maps/ParcelCorridor/scripts.pory"
	.string "PER: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Rune_Text_0:
# 397 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: The ledges are the best bit. You\n"
	.string "can jump them. Can you jump me?$"

ParcelCorridor_Rune_Text_1:
# 398 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Jumped.$"

ParcelCorridor_Rune_Text_2:
# 413 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: The CORPS cadets won't jump the\n"
	.string "ledges. 'Erosion.' It's a ledge!$"

ParcelCorridor_Rune_R2_Text_0:
# 424 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCorridor_Rune_R2_Text_1:
# 426 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: No hurry. The water keeps.$"

ParcelCorridor_Rune_R2_Text_2:
# 430 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Right. That's the whole of it.$"

ParcelCorridor_Rune_R2_Text_3:
# 431 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Rune_R3_Text_0:
# 438 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelCorridor_Rune_R3_Text_1:
# 444 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: That's the one I wanted to see.$"

ParcelCorridor_Rune_R3_Text_2:
# 445 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Rune_R4_Text_0:
# 452 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCorridor_Rune_R4_Text_1:
# 459 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Rune_R5_Text_0:
# 466 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCorridor_Rune_R5_Text_1:
# 472 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: Noted. Properly, this time.$"

ParcelCorridor_Rune_R5_Text_2:
# 473 "data/maps/ParcelCorridor/scripts.pory"
	.string "RUNE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Else_Text_0:
# 479 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Quiet, isn't it. Too quiet. Nothing\n"
	.string "lives in a cut like this except trainers.$"

ParcelCorridor_Else_Text_1:
# 480 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: And now one fewer.$"

ParcelCorridor_Else_Text_2:
# 495 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: There used to be a stream\n"
	.string "through the grass here. You can still\l"
	.string "see where. Dry as a bone.$"

ParcelCorridor_Else_R2_Text_0:
# 506 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCorridor_Else_R2_Text_1:
# 508 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: No hurry. The water keeps.$"

ParcelCorridor_Else_R2_Text_2:
# 512 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: …Again, then. Later.$"

ParcelCorridor_Else_R2_Text_3:
# 513 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Else_R3_Text_0:
# 520 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCorridor_Else_R3_Text_1:
# 527 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Else_R4_Text_0:
# 534 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCorridor_Else_R4_Text_1:
# 540 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: Right. That's the whole of it.$"

ParcelCorridor_Else_R4_Text_2:
# 541 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Else_R5_Text_0:
# 548 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCorridor_Else_R5_Text_1:
# 555 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELSE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Ulf_Text_0:
# 561 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: My NINCADA dug up a drainage pipe\n"
	.string "yesterday. A pipe! In the middle of\l"
	.string "nowhere!$"

ParcelCorridor_Ulf_Text_1:
# 562 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: It digs better than it fights.$"

ParcelCorridor_Ulf_Text_2:
# 577 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Somebody drained this whole\n"
	.string "stretch on purpose. For a road nobody\l"
	.string "uses.$"

ParcelCorridor_Ulf_R2_Text_0:
# 588 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: I kept the team up for this. Again?$"

ParcelCorridor_Ulf_R2_Text_1:
# 590 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Suit yourself. I'm here.$"

ParcelCorridor_Ulf_R2_Text_2:
# 594 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Noted. Properly, this time.$"

ParcelCorridor_Ulf_R2_Text_3:
# 595 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Ulf_R3_Text_0:
# 602 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelCorridor_Ulf_R3_Text_1:
# 609 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Ulf_R4_Text_0:
# 616 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelCorridor_Ulf_R4_Text_1:
# 622 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: Still yours.$"

ParcelCorridor_Ulf_R4_Text_2:
# 623 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Ulf_R5_Text_0:
# 630 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCorridor_Ulf_R5_Text_1:
# 636 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: …Again, then. Later.$"

ParcelCorridor_Ulf_R5_Text_2:
# 637 "data/maps/ParcelCorridor/scripts.pory"
	.string "ULF: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Gro_Text_0:
# 643 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: I'm walking to FERNWICK the long\n"
	.string "way. The long way has more battles.$"

ParcelCorridor_Gro_Text_1:
# 644 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Longer than I thought.$"

ParcelCorridor_Gro_Text_2:
# 659 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: A woman in a MEREHOLT coat has the\n"
	.string "road blocked up ahead. She made me show\l"
	.string "my trainer card. It's a ROAD.$"

ParcelCorridor_Gro_R2_Text_0:
# 670 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: I kept the team up for this. Again?$"

ParcelCorridor_Gro_R2_Text_1:
# 672 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCorridor_Gro_R2_Text_2:
# 676 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Right. That's the whole of it.$"

ParcelCorridor_Gro_R2_Text_3:
# 677 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Gro_R3_Text_0:
# 684 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Gro_R3_Text_1:
# 690 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: …Fair.$"

ParcelCorridor_Gro_R3_Text_2:
# 691 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Gro_R4_Text_0:
# 698 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelCorridor_Gro_R4_Text_1:
# 705 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_Gro_R5_Text_0:
# 712 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridor_Gro_R5_Text_1:
# 718 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: That's the one I wanted to see.$"

ParcelCorridor_Gro_R5_Text_2:
# 719 "data/maps/ParcelCorridor/scripts.pory"
	.string "GRO: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCorridor_Knut_Text_0:
# 725 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: POOCHYENA country. They came in\n"
	.string "when the trees came out. Mine's the\l"
	.string "biggest.$"

ParcelCorridor_Knut_Text_1:
# 726 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Not the biggest, then.$"

ParcelCorridor_Knut_Text_2:
# 741 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Nothing but POOCHYENA and\n"
	.string "ZIGZAGOON in the cut now. Dad says\l"
	.string "there were MAWILE once. In the rocks.$"

ParcelCorridor_Knut_R2_Text_0:
# 752 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelCorridor_Knut_R2_Text_1:
# 754 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Suit yourself. I'm here.$"

ParcelCorridor_Knut_R2_Text_2:
# 758 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Right. That's the whole of it.$"

ParcelCorridor_Knut_R2_Text_3:
# 759 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_Knut_R3_Text_0:
# 766 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Knut_R3_Text_1:
# 773 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Knut_R4_Text_0:
# 780 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCorridor_Knut_R4_Text_1:
# 787 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Knut_R5_Text_0:
# 794 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridor_Knut_R5_Text_1:
# 800 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: That's the one I wanted to see.$"

ParcelCorridor_Knut_R5_Text_2:
# 801 "data/maps/ParcelCorridor/scripts.pory"
	.string "KNUT: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Dag_Text_0:
# 807 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Cadet DAG. I'm supposed to be\n"
	.string "staking the path north. Spar first.\l"
	.string "HALE's orders.$"

ParcelCorridor_Dag_Text_1:
# 808 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Fine. Stakes.$"

ParcelCorridor_Dag_Text_2:
# 823 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: The basin's north, over the\n"
	.string "plateau. Follow the stakes with red\l"
	.string "cloth. The ones without cloth are\l"
	.string "MEREHOLT's.$"

ParcelCorridor_Dag_R2_Text_0:
# 834 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: I kept the team up for this. Again?$"

ParcelCorridor_Dag_R2_Text_1:
# 836 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Suit yourself. I'm here.$"

ParcelCorridor_Dag_R2_Text_2:
# 840 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: That's the one I wanted to see.$"

ParcelCorridor_Dag_R2_Text_3:
# 841 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Dag_R3_Text_0:
# 848 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCorridor_Dag_R3_Text_1:
# 855 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Dag_R4_Text_0:
# 862 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCorridor_Dag_R4_Text_1:
# 868 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: …Again, then. Later.$"

ParcelCorridor_Dag_R4_Text_2:
# 869 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_Dag_R5_Text_0:
# 876 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCorridor_Dag_R5_Text_1:
# 882 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: Right. That's the whole of it.$"

ParcelCorridor_Dag_R5_Text_2:
# 883 "data/maps/ParcelCorridor/scripts.pory"
	.string "DAG: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Arne_Text_0:
# 889 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Below the culvert the water runs\n"
	.string "so fast nothing holds. Above it, I\l"
	.string "catch. Guess which side you're on.$"

ParcelCorridor_Arne_Text_1:
# 890 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: The fast side.$"

ParcelCorridor_Arne_Text_2:
# 905 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: BARBOACH go up this stream in\n"
	.string "spring. Went. They can't get through\l"
	.string "the pipe. I told the crew. The crew told\l"
	.string "me it meets code.$"

ParcelCorridor_Arne_R2_Text_0:
# 916 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: I kept the team up for this.\n"
	.string "Again?$"

ParcelCorridor_Arne_R2_Text_1:
# 918 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCorridor_Arne_R2_Text_2:
# 922 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: …Fair.$"

ParcelCorridor_Arne_R2_Text_3:
# 923 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Arne_R3_Text_0:
# 930 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCorridor_Arne_R3_Text_1:
# 936 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Still yours.$"

ParcelCorridor_Arne_R3_Text_2:
# 937 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Arne_R4_Text_0:
# 944 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCorridor_Arne_R4_Text_1:
# 950 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Noted. Properly, this time.$"

ParcelCorridor_Arne_R4_Text_2:
# 951 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_Arne_R5_Text_0:
# 958 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCorridor_Arne_R5_Text_1:
# 964 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: Right. That's the whole of it.$"

ParcelCorridor_Arne_R5_Text_2:
# 965 "data/maps/ParcelCorridor/scripts.pory"
	.string "ARNE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Sven_Text_0:
# 971 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: The plateau's mine. Well.\n"
	.string "MEREHOLT's. But I'm the one standing on\l"
	.string "it.$"

ParcelCorridor_Sven_Text_1:
# 972 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Standing on it a bit less.$"

ParcelCorridor_Sven_Text_2:
# 987 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Survey stakes everywhere up\n"
	.string "here. Two kinds. Nobody will tell me what\l"
	.string "the second kind is for.$"

ParcelCorridor_Sven_R2_Text_0:
# 998 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCorridor_Sven_R2_Text_1:
# 1000 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Suit yourself. I'm here.$"

ParcelCorridor_Sven_R2_Text_2:
# 1004 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: …Fair.$"

ParcelCorridor_Sven_R2_Text_3:
# 1005 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Sven_R3_Text_0:
# 1012 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Sven_R3_Text_1:
# 1018 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: That's the one I wanted to see.$"

ParcelCorridor_Sven_R3_Text_2:
# 1019 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Sven_R4_Text_0:
# 1026 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCorridor_Sven_R4_Text_1:
# 1032 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Still yours.$"

ParcelCorridor_Sven_R4_Text_2:
# 1033 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Sven_R5_Text_0:
# 1040 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridor_Sven_R5_Text_1:
# 1046 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Right. That's the whole of it.$"

ParcelCorridor_Sven_R5_Text_2:
# 1047 "data/maps/ParcelCorridor/scripts.pory"
	.string "SVEN: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCorridor_Olav_Text_0:
# 1053 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: TAILLOW nest in the cut banks\n"
	.string "now. They didn't used to. Is that good\l"
	.string "or bad? Battle me while you think.$"

ParcelCorridor_Olav_Text_1:
# 1054 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: Still thinking?$"

ParcelCorridor_Olav_Text_2:
# 1069 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: More TAILLOW, fewer of\n"
	.string "everything else. I think that's bad. I\l"
	.string "think it looks like good.$"

ParcelCorridor_Olav_R2_Text_0:
# 1080 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: I kept the team up for this.\n"
	.string "Again?$"

ParcelCorridor_Olav_R2_Text_1:
# 1082 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: No hurry. The water keeps.$"

ParcelCorridor_Olav_R2_Text_2:
# 1086 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: …Fair.$"

ParcelCorridor_Olav_R2_Text_3:
# 1087 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Olav_R3_Text_0:
# 1094 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Olav_R3_Text_1:
# 1100 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: Noted. Properly, this time.$"

ParcelCorridor_Olav_R3_Text_2:
# 1101 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Olav_R4_Text_0:
# 1108 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCorridor_Olav_R4_Text_1:
# 1115 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Olav_R5_Text_0:
# 1122 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridor_Olav_R5_Text_1:
# 1129 "data/maps/ParcelCorridor/scripts.pory"
	.string "OLAV: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Inga_Text_0:
# 1135 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: I can feel the ground under the\n"
	.string "plateau. It's hollow. Can you feel it?$"

ParcelCorridor_Inga_Text_1:
# 1136 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: You feel it now.$"

ParcelCorridor_Inga_Text_2:
# 1151 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Old workings. Adits. MEREHOLT\n"
	.string "pumped them dry and left. The hill\l"
	.string "remembers being wet.$"

ParcelCorridor_Inga_R2_Text_0:
# 1162 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCorridor_Inga_R2_Text_1:
# 1164 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCorridor_Inga_R2_Text_2:
# 1168 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Right. That's the whole of it.$"

ParcelCorridor_Inga_R2_Text_3:
# 1169 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Inga_R3_Text_0:
# 1176 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Inga_R3_Text_1:
# 1183 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_Inga_R4_Text_0:
# 1190 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCorridor_Inga_R4_Text_1:
# 1196 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: …Again, then. Later.$"

ParcelCorridor_Inga_R4_Text_2:
# 1197 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_Inga_R5_Text_0:
# 1204 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCorridor_Inga_R5_Text_1:
# 1210 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: Noted. Properly, this time.$"

ParcelCorridor_Inga_R5_Text_2:
# 1211 "data/maps/ParcelCorridor/scripts.pory"
	.string "INGA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridor_Turid_Text_0:
# 1217 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: You're going to the basin?\n"
	.string "Nobody goes to the basin. Battle me and\l"
	.string "I'll tell you why.$"

ParcelCorridor_Turid_Text_1:
# 1218 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Because it smells. That's why.\n"
	.string "Sweet, like something rotting.$"

ParcelCorridor_Turid_Text_2:
# 1233 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: The stakes north of here go\n"
	.string "right down to the water. Somebody\l"
	.string "measured it all. And then just left it.$"

ParcelCorridor_Turid_R2_Text_0:
# 1244 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCorridor_Turid_R2_Text_1:
# 1246 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Fine. Same spot.$"

ParcelCorridor_Turid_R2_Text_2:
# 1250 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: That's the one I wanted to see.$"

ParcelCorridor_Turid_R2_Text_3:
# 1251 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_Turid_R3_Text_0:
# 1258 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_Turid_R3_Text_1:
# 1264 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Right. That's the whole of it.$"

ParcelCorridor_Turid_R3_Text_2:
# 1265 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_Turid_R4_Text_0:
# 1272 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCorridor_Turid_R4_Text_1:
# 1278 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Noted. Properly, this time.$"

ParcelCorridor_Turid_R4_Text_2:
# 1279 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_Turid_R5_Text_0:
# 1286 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCorridor_Turid_R5_Text_1:
# 1292 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: …Again, then. Later.$"

ParcelCorridor_Turid_R5_Text_2:
# 1293 "data/maps/ParcelCorridor/scripts.pory"
	.string "TURID: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCorridor_T_Vidar_Text_0:
# 1301 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: The plateau's the only place\n"
	.string "with a view. The view's the basin. The\l"
	.string "basin smells. Battle.$"

ParcelCorridor_T_Vidar_Text_1:
# 1302 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Smells like losing.$"

ParcelCorridor_T_Vidar_Text_2:
# 1317 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: North's the FLOODBASIN. There's\n"
	.string "a hamlet in it that floods every spring.\l"
	.string "The councilman sends vouchers. Every\l"
	.string "spring.$"

ParcelCorridor_T_Vidar_R2_Text_0:
# 1328 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelCorridor_T_Vidar_R2_Text_1:
# 1330 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Another time, then.$"

ParcelCorridor_T_Vidar_R2_Text_2:
# 1334 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: …Again, then. Later.$"

ParcelCorridor_T_Vidar_R2_Text_3:
# 1335 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_T_Vidar_R3_Text_0:
# 1342 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelCorridor_T_Vidar_R3_Text_1:
# 1348 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: That's the one I wanted to see.$"

ParcelCorridor_T_Vidar_R3_Text_2:
# 1349 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_T_Vidar_R4_Text_0:
# 1356 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCorridor_T_Vidar_R4_Text_1:
# 1363 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridor_T_Vidar_R5_Text_0:
# 1370 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCorridor_T_Vidar_R5_Text_1:
# 1376 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: …Fair.$"

ParcelCorridor_T_Vidar_R5_Text_2:
# 1377 "data/maps/ParcelCorridor/scripts.pory"
	.string "VIDAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCorridor_T_Halle_Text_0:
# 1383 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Survey stakes everywhere up\n"
	.string "here. Red cloth, bare, red cloth, bare.\l"
	.string "Battle me and I'll explain the colours.$"

ParcelCorridor_T_Halle_Text_1:
# 1384 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Red's the CORPS. Bare's the\n"
	.string "FOUNDATION. That's the explanation.$"

ParcelCorridor_T_Halle_Text_2:
# 1399 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: The bare stakes are on the clean\n"
	.string "ground. The red ones are where the\l"
	.string "water is. Somebody's measuring the\l"
	.string "wrong thing on purpose.$"

ParcelCorridor_T_Halle_R2_Text_0:
# 1410 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCorridor_T_Halle_R2_Text_1:
# 1412 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Fine. Same spot.$"

ParcelCorridor_T_Halle_R2_Text_2:
# 1416 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: …Fair.$"

ParcelCorridor_T_Halle_R2_Text_3:
# 1417 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridor_T_Halle_R3_Text_0:
# 1424 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridor_T_Halle_R3_Text_1:
# 1430 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: That's the one I wanted to see.$"

ParcelCorridor_T_Halle_R3_Text_2:
# 1431 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridor_T_Halle_R4_Text_0:
# 1438 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCorridor_T_Halle_R4_Text_1:
# 1445 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_T_Halle_R5_Text_0:
# 1452 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCorridor_T_Halle_R5_Text_1:
# 1459 "data/maps/ParcelCorridor/scripts.pory"
	.string "HALLE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCorridor_T_Elin_Text_0:
# 1465 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Picnic in the cut. The stumps\n"
	.string "make good tables. Battle before the\l"
	.string "ants.$"

ParcelCorridor_T_Elin_Text_1:
# 1466 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Ants won.$"

ParcelCorridor_T_Elin_Text_2:
# 1481 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: The cut was a forest in my\n"
	.string "mother's time. She remembers the\l"
	.string "trucks. I remember the stumps. My kids\l"
	.string "will remember grass.$"

ParcelCorridor_T_Elin_R2_Text_0:
# 1492 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCorridor_T_Elin_R2_Text_1:
# 1494 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCorridor_T_Elin_R2_Text_2:
# 1498 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Noted. Properly, this time.$"

ParcelCorridor_T_Elin_R2_Text_3:
# 1499 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridor_T_Elin_R3_Text_0:
# 1506 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCorridor_T_Elin_R3_Text_1:
# 1512 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: …Fair.$"

ParcelCorridor_T_Elin_R3_Text_2:
# 1513 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridor_T_Elin_R4_Text_0:
# 1520 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelCorridor_T_Elin_R4_Text_1:
# 1526 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: …Again, then. Later.$"

ParcelCorridor_T_Elin_R4_Text_2:
# 1527 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridor_T_Elin_R5_Text_0:
# 1534 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCorridor_T_Elin_R5_Text_1:
# 1540 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: That's the one I wanted to see.$"

ParcelCorridor_T_Elin_R5_Text_2:
# 1541 "data/maps/ParcelCorridor/scripts.pory"
	.string "ELIN: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCorridor_PerrinScene_Text_0:
# 1554 "data/maps/ParcelCorridor/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelCorridor_PerrinScene_Text_1:
# 1558 "data/maps/ParcelCorridor/scripts.pory"
	.string "PERRIN: The basin's next. MIRREN says\n"
	.string "it's a mess. The FOUNDATION says it's 'in\l"
	.string "remediation'.\p"
	.string "I'm going with the people who have a\n"
	.string "plan. Battle, before you talk me out of\l"
	.string "it.$"

ParcelCorridor_PerrinScene_Text_2:
# 1559 "data/maps/ParcelCorridor/scripts.pory"
	.string "PERRIN: You didn't talk me out of it.$"

ParcelCorridor_PerrinScene_Text_3:
# 1560 "data/maps/ParcelCorridor/scripts.pory"
	.string "PERRIN: You know the difference\n"
	.string "between us? You write down what's\l"
	.string "there. I write down what's possible.\p"
	.string "Theirs reads better in a report. Mine, I\n"
	.string "mean. Ours.$"

ParcelCorridor_PerrinTalk_Text_0:
# 1573 "data/maps/ParcelCorridor/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelCorridor_Mirren_Rematch_Text_0:
# 1584 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: You filed the basin as what it\n"
	.string "is, and then you filed everything else\l"
	.string "the same way. Half the division is still\l"
	.string "rounding up.\p"
	.string "I don't round. Full strength, no gate,\n"
	.string "nothing signed at the end. Want it?$"

ParcelCorridor_Mirren_Rematch_Text_1:
# 1586 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Suit yourself. The rock doesn't\n"
	.string "move.$"

ParcelCorridor_Mirren_Rematch_Text_2:
# 1590 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: …Steady. Still.$"

ParcelCorridor_Mirren_Rematch_Text_3:
# 1591 "data/maps/ParcelCorridor/scripts.pory"
	.string "MIRREN: Same time tomorrow, if you like.\n"
	.string "The rock doesn't move.$"

ParcelCorridor_SurveyStake_Text_0:
# 1598 "data/maps/ParcelCorridor/scripts.pory"
	.string "A survey stake by the checkpoint, red\n"
	.string "cloth at the top. The bare stakes along\l"
	.string "the cut are MEREHOLT's. This one is\l"
	.string "yours.$"

ParcelCorridor_SurveyStake_Text_1:
# 1603 "data/maps/ParcelCorridor/scripts.pory"
	.string "Second reading. Four grates in the\n"
	.string "culvert, culvert type, and two frogs\l"
	.string "through them this morning, upstream.\l"
	.string "The slide is cleared and the adit is dark\l"
	.string "and quiet.\p"
	.string "The schedule still says next month\n"
	.string "about something. It always will. You\l"
	.string "write the two frogs.$"

ParcelCorridor_PairCulvert_Text_0:
# 1614 "data/maps/ParcelCorridor/scripts.pory"
	.string "ROADMAN: The grates came. Four of them.\n"
	.string "Culvert type.$"

ParcelCorridor_PairCulvert_Text_1:
# 1615 "data/maps/ParcelCorridor/scripts.pory"
	.string "SURVEY HAND: Five months after next\n"
	.string "month. And a sixth form, this one with a\l"
	.string "real date on it, and a ranger's initials.$"

ParcelCorridor_PairCulvert_Text_2:
# 1616 "data/maps/ParcelCorridor/scripts.pory"
	.string "ROADMAN: Frogs through yet?$"

ParcelCorridor_PairCulvert_Text_3:
# 1617 "data/maps/ParcelCorridor/scripts.pory"
	.string "SURVEY HAND: Two this morning.\n"
	.string "Upstream. Against the current, which is\l"
	.string "the point.$"

ParcelCorridor_PairCulvert_Text_4:
# 1619 "data/maps/ParcelCorridor/scripts.pory"
	.string "SURVEY HAND: The ranger didn't try to\n"
	.string "stop the crew. I half expected it.$"

ParcelCorridor_PairCulvert_Text_5:
# 1620 "data/maps/ParcelCorridor/scripts.pory"
	.string "ROADMAN: What did they do?$"

ParcelCorridor_PairCulvert_Text_6:
# 1621 "data/maps/ParcelCorridor/scripts.pory"
	.string "SURVEY HAND: Stood at the culvert and\n"
	.string "wrote until the foreman got\l"
	.string "uncomfortable and offered a date. Then\l"
	.string "wrote the date down. The foreman\l"
	.string "looked like he'd been stabbed.$"

ParcelCorridor_PairCulvert_Text_7:
# 1622 "data/maps/ParcelCorridor/scripts.pory"
	.string "ROADMAN: A date in a notebook's worse\n"
	.string "than a shout. You can't argue with it\l"
	.string "later.$"

ParcelCorridor_PairCulvert_Text_8:
# 1624 "data/maps/ParcelCorridor/scripts.pory"
	.string "ROADMAN: Grates next month, the office\n"
	.string "says.$"

ParcelCorridor_PairCulvert_Text_9:
# 1625 "data/maps/ParcelCorridor/scripts.pory"
	.string "SURVEY HAND: The office has said next\n"
	.string "month for five months. I've stopped\l"
	.string "writing the date on the form; I write\l"
	.string "'next month' and it's always right.$"

ParcelCorridor_PairCulvert_Text_10:
# 1626 "data/maps/ParcelCorridor/scripts.pory"
	.string "ROADMAN: What goes down the pipe\n"
	.string "meanwhile?$"

ParcelCorridor_PairCulvert_Text_11:
# 1627 "data/maps/ParcelCorridor/scripts.pory"
	.string "SURVEY HAND: Everything that fits.\n"
	.string "That's what a pipe is for, they'd say.$"

ParcelCorridor_Board1_Text_0:
# 1636 "data/maps/ParcelCorridor/scripts.pory"
	.string "A SURVEY BOARD at the cut. SERVICE CUT.\n"
	.string "A road was driven through the corridor\l"
	.string "and the stream was put in a pipe to make\l"
	.string "room for it. The pipe is narrower than\l"
	.string "the stream.\p"
	.string "The board lists what used the corridor\n"
	.string "before the pipe, and what uses the pipe.\l"
	.string "The second list is short, and all of it is\l"
	.string "small.$"

ParcelCorridor_Board2_Text_0:
# 1641 "data/maps/ParcelCorridor/scripts.pory"
	.string "A SURVEY BOARD beside the checkpoint.\n"
	.string "The culvert was described as an\l"
	.string "upgrade, and the board quotes the\l"
	.string "description in full, without comment.\p"
	.string "Under it the Survey has written the\n"
	.string "pipe width in paces and the old channel\l"
	.string "width in paces. Reading both is the\l"
	.string "comment.$"

ParcelCorridor_PairCut_Text_0:
# 1650 "data/maps/ParcelCorridor/scripts.pory"
	.string "DRIVER: Second pipe's going in. Same\n"
	.string "width as the first.$"

ParcelCorridor_PairCut_Text_1:
# 1651 "data/maps/ParcelCorridor/scripts.pory"
	.string "MECHANIC: Two pipes isn't a stream.$"

ParcelCorridor_PairCut_Text_2:
# 1652 "data/maps/ParcelCorridor/scripts.pory"
	.string "DRIVER: It's twice as much pipe. That's\n"
	.string "what the drawing says.$"

ParcelCorridor_PairCut_Text_3:
# 1653 "data/maps/ParcelCorridor/scripts.pory"
	.string "MECHANIC: The drawing's never stood in\n"
	.string "the water. I have. It's a start, and it's\l"
	.string "not the thing.$"

ParcelCorridor_PairCut_Text_4:
# 1655 "data/maps/ParcelCorridor/scripts.pory"
	.string "MECHANIC: The ranger measured the\n"
	.string "pipe. In paces. Then the old channel. In\l"
	.string "paces.$"

ParcelCorridor_PairCut_Text_5:
# 1656 "data/maps/ParcelCorridor/scripts.pory"
	.string "DRIVER: And?$"

ParcelCorridor_PairCut_Text_6:
# 1657 "data/maps/ParcelCorridor/scripts.pory"
	.string "MECHANIC: And nothing. They wrote both\n"
	.string "numbers on the same line and walked\l"
	.string "off. I've been thinking about that line\l"
	.string "all week.$"

ParcelCorridor_PairCut_Text_7:
# 1659 "data/maps/ParcelCorridor/scripts.pory"
	.string "DRIVER: Culvert's flooding the road\n"
	.string "again.$"

ParcelCorridor_PairCut_Text_8:
# 1660 "data/maps/ParcelCorridor/scripts.pory"
	.string "MECHANIC: It's not flooding. It's\n"
	.string "returning. The stream remembers the\l"
	.string "width it had.$"

ParcelCorridor_PairCut_Text_9:
# 1661 "data/maps/ParcelCorridor/scripts.pory"
	.string "DRIVER: Tell that to the axle.$"

ParcelCorridor_PairCut_Text_10:
# 1662 "data/maps/ParcelCorridor/scripts.pory"
	.string "MECHANIC: I'm telling it to you. The axle\n"
	.string "already knows.$"

ParcelCorridor_FindHeadwall_Text_0:
# 1672 "data/maps/ParcelCorridor/scripts.pory"
	.string "The old headwall above the culvert,\n"
	.string "concrete poured over stone. At the\l"
	.string "edge of the pour, where the stone\l"
	.string "shows, a line of red lead, old, and a\l"
	.string "figure: the Survey's flow mark, three\l"
	.string "hands above the top of the pipe.\p"
	.string "The pour stops a finger short of the\n"
	.string "mark. Somebody on the crew stopped it\l"
	.string "there.$"

ParcelCorridor_FindHeadwall_Text_1:
# 1675 "data/maps/ParcelCorridor/scripts.pory"
	.string "The old flow mark on the headwall, red\n"
	.string "lead, three hands above the pipe.\l"
	.string "Someone has chalked an arrow to it.$"

ParcelCorridor_Board3_Text_0:
# 1683 "data/maps/ParcelCorridor/scripts.pory"
	.string "A SURVEY BOARD above the cut. The slope\n"
	.string "slides each spring and the road crew\l"
	.string "clears it, and the board records both:\l"
	.string "the slide in paces, the clearing in days.\p"
	.string "The paces grow. The days do not. The\n"
	.string "crew is very good. The slope is better.$"

ParcelCorridor_Board4_Text_0:
# 1690 "data/maps/ParcelCorridor/scripts.pory"
	.string "A SURVEY BOARD at the checkpoint's\n"
	.string "blind side. The Company's bare stakes\l"
	.string "along the cut mark where their drainage\l"
	.string "will run. The Survey's red ones mark\l"
	.string "where the water does run.\p"
	.string "The board gives the distance between\n"
	.string "the two sets, year by year. It closes.\l"
	.string "The Company is not moving its stakes.$"

ParcelCorridor_Board10_Text_0:
# 1697 "data/maps/ParcelCorridor/scripts.pory"
	.string "A SURVEY BOARD at the cut's midpoint. A\n"
	.string "line painted across the road, old, the\l"
	.string "Survey's: the point the stream crossed\l"
	.string "before the pipe. Lorries drive over it\l"
	.string "all day.\p"
	.string "The board asks drivers to note that the\n"
	.string "paint has never needed renewing,\l"
	.string "because the stream still crosses here,\l"
	.string "under the road, and keeps the ground\l"
	.string "damp enough to hold it.$"

ParcelCorridor_PairGate_Text_0:
# 1706 "data/maps/ParcelCorridor/scripts.pory"
	.string "GUARD: No papers. The checkpoint's a\n"
	.string "weather station now, the review says. I\l"
	.string "read a gauge.$"

ParcelCorridor_PairGate_Text_1:
# 1707 "data/maps/ParcelCorridor/scripts.pory"
	.string "WOMAN: And the bread?$"

ParcelCorridor_PairGate_Text_2:
# 1708 "data/maps/ParcelCorridor/scripts.pory"
	.string "GUARD: Goes through. Somebody's in the\n"
	.string "hut by the marsh. Somebody always was.\l"
	.string "I knew. The sign didn't.$"

ParcelCorridor_PairGate_Text_3:
# 1710 "data/maps/ParcelCorridor/scripts.pory"
	.string "WOMAN: The ranger came through with a\n"
	.string "notebook and you didn't ask for papers.$"

ParcelCorridor_PairGate_Text_4:
# 1711 "data/maps/ParcelCorridor/scripts.pory"
	.string "GUARD: The notebook was the papers.$"

ParcelCorridor_PairGate_Text_5:
# 1712 "data/maps/ParcelCorridor/scripts.pory"
	.string "WOMAN: Mine's a loaf.$"

ParcelCorridor_PairGate_Text_6:
# 1713 "data/maps/ParcelCorridor/scripts.pory"
	.string "GUARD: Loaves don't need stamping. I\n"
	.string "stamp them because the sign says. The\l"
	.string "ranger's sign said something else.$"

ParcelCorridor_PairGate_Text_7:
# 1715 "data/maps/ParcelCorridor/scripts.pory"
	.string "GUARD: Pass. Papers.$"

ParcelCorridor_PairGate_Text_8:
# 1716 "data/maps/ParcelCorridor/scripts.pory"
	.string "WOMAN: I'm taking bread to the hut by\n"
	.string "the marsh.$"

ParcelCorridor_PairGate_Text_9:
# 1717 "data/maps/ParcelCorridor/scripts.pory"
	.string "GUARD: Nobody's in the hut by the\n"
	.string "marsh.$"

ParcelCorridor_PairGate_Text_10:
# 1718 "data/maps/ParcelCorridor/scripts.pory"
	.string "WOMAN: Then the bread will keep. Stamp\n"
	.string "it.$"

ParcelCorridor_Board11_Text_0:
# 1727 "data/maps/ParcelCorridor/scripts.pory"
	.string "A SURVEY BOARD at the cut's western\n"
	.string "end, where the road enters the trees.\l"
	.string "The board is the Corridor's roll: every\l"
	.string "species the Survey has recorded\l"
	.string "passing through, from the first stake\l"
	.string "to the last reading.\p"
	.string "The roll is long. The last column, this\n"
	.string "year, is short. The board puts the two\l"
	.string "side by side and lets the width do the\l"
	.string "talking.$"
