ParcelCorridor_MapScripts::
# 14 "data/maps/ParcelCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelCorridor_OnTransition
	.byte 0


ParcelCorridor_OnTransition::
# 19 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 20 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 10
# 21 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 22 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridor_OnTransition_2
# 25 "data/maps/ParcelCorridor/scripts.pory"
	clearflag FLAG_TEMP_2
ParcelCorridor_OnTransition_1:
# 28 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_TEMP_3
	end

ParcelCorridor_OnTransition_2:
# 23 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_TEMP_2
	goto ParcelCorridor_OnTransition_1


ParcelCorridor_CulvertScene::
# 34 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 35 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 9
# 36 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 37 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridor_CulvertScene_2
# 40 "data/maps/ParcelCorridor/scripts.pory"
	lockall
# 41 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_0, MSGBOX_DEFAULT
# 42 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_1, MSGBOX_DEFAULT
# 43 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 45 "data/maps/ParcelCorridor/scripts.pory"
	clearflag FLAG_TEMP_3
# 46 "data/maps/ParcelCorridor/scripts.pory"
	addobject 2
# 47 "data/maps/ParcelCorridor/scripts.pory"
	playse SE_PIN
# 48 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_3, MSGBOX_DEFAULT
# 49 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_4, MSGBOX_DEFAULT
# 50 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 2, Movement_WooperRetreat
# 51 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 52 "data/maps/ParcelCorridor/scripts.pory"
	removeobject 2
# 53 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_TEMP_3
# 54 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_5, MSGBOX_DEFAULT
# 55 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_CulvertScene_Text_6, MSGBOX_DEFAULT
# 56 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 9
# 57 "data/maps/ParcelCorridor/scripts.pory"
	special SkaldmereCertTaskMark
# 58 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 59 "data/maps/ParcelCorridor/scripts.pory"
	releaseall
	end

ParcelCorridor_CulvertScene_2:
	end


ParcelCorridor_FarSide::
# 64 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 65 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_FarSide_Text_0, MSGBOX_DEFAULT
# 66 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_Worker::
# 72 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 73 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 74 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 75 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 9
# 76 "data/maps/ParcelCorridor/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 77 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridor_Worker_2
# 82 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_1, MSGBOX_DEFAULT
# 83 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_2, MSGBOX_DEFAULT
# 84 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_3, MSGBOX_DEFAULT
# 85 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_4, MSGBOX_DEFAULT
# 86 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_5, MSGBOX_YESNO
# 87 "data/maps/ParcelCorridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridor_Worker_5
# 91 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_8, MSGBOX_DEFAULT
ParcelCorridor_Worker_4:
# 93 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_9, MSGBOX_DEFAULT
# 94 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_10, MSGBOX_DEFAULT
# 95 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_11, MSGBOX_DEFAULT
# 96 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_12, MSGBOX_DEFAULT
# 97 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_13, MSGBOX_DEFAULT
# 98 "data/maps/ParcelCorridor/scripts.pory"
	closemessage
# 99 "data/maps/ParcelCorridor/scripts.pory"
	applymovement 1, Movement_WorkerLeave
# 100 "data/maps/ParcelCorridor/scripts.pory"
	waitmovement 0
# 101 "data/maps/ParcelCorridor/scripts.pory"
	removeobject 1
# 102 "data/maps/ParcelCorridor/scripts.pory"
	setvar VAR_0x8004, 10
# 103 "data/maps/ParcelCorridor/scripts.pory"
	special SkaldmereCertTaskMark
# 104 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_TEMP_2
# 105 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_14, MSGBOX_DEFAULT
# 106 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_15, MSGBOX_DEFAULT
# 107 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Worker_2:
# 78 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_0, MSGBOX_DEFAULT
# 79 "data/maps/ParcelCorridor/scripts.pory"
	release
	end

ParcelCorridor_Worker_5:
# 88 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_6, MSGBOX_DEFAULT
# 89 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_Worker_Text_7, MSGBOX_DEFAULT
	goto ParcelCorridor_Worker_4


ParcelCorridor_ObsStumps::
# 113 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsStumps_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsMoss::
# 117 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsMoss_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsDrainage::
# 121 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsDrainage_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsRoad::
# 125 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsRoad_Text_0, MSGBOX_SIGN
	end


ParcelCorridor_ObsCulvert::
# 129 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_ObsCulvert_Text_0, MSGBOX_SIGN
	end


# 133 "data/maps/ParcelCorridor/scripts.pory"
Movement_WooperRetreat:
# 134 "data/maps/ParcelCorridor/scripts.pory"
	face_right
# 135 "data/maps/ParcelCorridor/scripts.pory"
	delay_16
# 136 "data/maps/ParcelCorridor/scripts.pory"
	walk_right
# 137 "data/maps/ParcelCorridor/scripts.pory"
	step_end

# 139 "data/maps/ParcelCorridor/scripts.pory"
Movement_WorkerLeave:
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
# 141 "data/maps/ParcelCorridor/scripts.pory"
	walk_down
# 142 "data/maps/ParcelCorridor/scripts.pory"
	step_end

ParcelCorridor_ItemSuperPotion::
# 147 "data/maps/ParcelCorridor/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelCorridor_GymMirren::
# 157 "data/maps/ParcelCorridor/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GYM2, ParcelCorridor_GymMirren_Text_0, ParcelCorridor_GymMirren_Text_1, ParcelCorridor_GymMirren_Defeated
# 161 "data/maps/ParcelCorridor/scripts.pory"
	lock
# 162 "data/maps/ParcelCorridor/scripts.pory"
	faceplayer
# 163 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_GymMirren_Text_2, MSGBOX_DEFAULT
# 164 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_GymMirren_Defeated::
# 168 "data/maps/ParcelCorridor/scripts.pory"
	setflag FLAG_BADGE02_GET
# 169 "data/maps/ParcelCorridor/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 170 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_GymMirren_Defeated_Text_0, MSGBOX_DEFAULT
# 171 "data/maps/ParcelCorridor/scripts.pory"
	giveitem ITEM_HM05
# 172 "data/maps/ParcelCorridor/scripts.pory"
	msgbox ParcelCorridor_GymMirren_Defeated_Text_1, MSGBOX_DEFAULT
# 173 "data/maps/ParcelCorridor/scripts.pory"
	release
	end


ParcelCorridor_CulvertScene_Text_0:
# 41 "data/maps/ParcelCorridor/scripts.pory"
	.string "Doduo stops.\p"
	.string "Both heads fix on the same point: a\n"
	.string "culvert under the old road--concrete,\l"
	.string "narrow, functional.$"

ParcelCorridor_CulvertScene_Text_1:
# 42 "data/maps/ParcelCorridor/scripts.pory"
	.string "Upstream of it, the channel is wide and\n"
	.string "braided.\n"
	.string "Downstream, it is one fast cut.\p"
	.string "You kneel. You don't touch the water.\n"
	.string "You listen.$"

ParcelCorridor_CulvertScene_Text_2:
# 43 "data/maps/ParcelCorridor/scripts.pory"
	.string "The sound is sharper than it should be.\n"
	.string "Less layered. More forceful.$"

ParcelCorridor_CulvertScene_Text_3:
# 48 "data/maps/ParcelCorridor/scripts.pory"
	.string "A splash, on the far side.$"

ParcelCorridor_CulvertScene_Text_4:
# 49 "data/maps/ParcelCorridor/scripts.pory"
	.string "Something small tries the\n"
	.string "current--once, twice--and retreats to\l"
	.string "the far bank.\p"
	.string "Not trapped.\n"
	.string "Excluded.$"

ParcelCorridor_CulvertScene_Text_5:
# 54 "data/maps/ParcelCorridor/scripts.pory"
	.string "The corridor still exists.\n"
	.string "But it's thinner.$"

ParcelCorridor_CulvertScene_Text_6:
# 55 "data/maps/ParcelCorridor/scripts.pory"
	.string "You feel the urge to widen the channel.\n"
	.string "Stack stones. Slow the flow.\p"
	.string "You don't.\n"
	.string "You remember the basin. You write it\l"
	.string "down instead.$"

ParcelCorridor_FarSide_Text_0:
# 65 "data/maps/ParcelCorridor/scripts.pory"
	.string "It watches the current from the far\n"
	.string "bank.\n"
	.string "It does not try again.$"

ParcelCorridor_Worker_Text_0:
# 78 "data/maps/ParcelCorridor/scripts.pory"
	.string "A man in an orange vest, clipboard in\n"
	.string "hand. He nods at the stream like it's a\l"
	.string "colleague.\p"
	.string "Worker: Quite a current through there,\n"
	.string "eh?$"

ParcelCorridor_Worker_Text_1:
# 82 "data/maps/ParcelCorridor/scripts.pory"
	.string "A man in an orange vest, clipboard in\n"
	.string "hand. He brightens--relieved to see a\l"
	.string "Ranger.\p"
	.string "Worker: Oh good. You're with the\n"
	.string "station, right?\n"
	.string "We've been meaning to flag this.$"

ParcelCorridor_Worker_Text_2:
# 83 "data/maps/ParcelCorridor/scripts.pory"
	.string "Worker: Drainage specs met code, but\n"
	.string "wildlife keeps clogging it.\p"
	.string "We're scheduled to install grates next\n"
	.string "month.$"

ParcelCorridor_Worker_Text_3:
# 84 "data/maps/ParcelCorridor/scripts.pory"
	.string "Grates would solve his problem.\p"
	.string "This is the moment Ilex warned about--\n"
	.string "where damage becomes policy.$"

ParcelCorridor_Worker_Text_4:
# 85 "data/maps/ParcelCorridor/scripts.pory"
	.string "Worker: It meets regulation. But if you\n"
	.string "want, I can note that Rangers were\l"
	.string "consulted.$"

ParcelCorridor_Worker_Text_5:
# 86 "data/maps/ParcelCorridor/scripts.pory"
	.string "Note that Rangers were consulted?$"

ParcelCorridor_Worker_Text_6:
# 88 "data/maps/ParcelCorridor/scripts.pory"
	.string "You start to nod--\p"
	.string "and stop.\p"
	.string "The grates would solve HIS problem.\n"
	.string "The failure state is not action. It is\l"
	.string "agreement.$"

ParcelCorridor_Worker_Text_7:
# 89 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: …No.\p"
	.string "Who approved the design?$"

ParcelCorridor_Worker_Text_8:
# 91 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: No.\p"
	.string "Who approved the design?$"

ParcelCorridor_Worker_Text_9:
# 93 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: Do you have the\n"
	.string "pre-construction flow data?$"

ParcelCorridor_Worker_Text_10:
# 94 "data/maps/ParcelCorridor/scripts.pory"
	.string "The worker shifts his weight.\p"
	.string "Worker: That'd be… county records, I\n"
	.string "think. Or the contractor.$"

ParcelCorridor_Worker_Text_11:
# 95 "data/maps/ParcelCorridor/scripts.pory"
	.string "{PLAYER}: Fixing it later might mean\n"
	.string "it's already too late.\p"
	.string "You write all of it down: the specs, the\n"
	.string "schedule, the missing data, his crew\l"
	.string "number.$"

ParcelCorridor_Worker_Text_12:
# 96 "data/maps/ParcelCorridor/scripts.pory"
	.string "He scribbles something vague.\p"
	.string "Worker: …I'll note that the corridor\n"
	.string "width changed.$"

ParcelCorridor_Worker_Text_13:
# 97 "data/maps/ParcelCorridor/scripts.pory"
	.string "It's not enough.\n"
	.string "But it's not nothing.\p"
	.string "He leaves.$"

ParcelCorridor_Worker_Text_14:
# 105 "data/maps/ParcelCorridor/scripts.pory"
	.string "Turning back down the cut, you realize:\p"
	.string "you were watched. Not by the worker.\n"
	.string "By the system.$"

ParcelCorridor_Worker_Text_15:
# 106 "data/maps/ParcelCorridor/scripts.pory"
	.string "The report will move slowly. It will be\n"
	.string "questioned. Maybe ignored.\p"
	.string "But it exists now.\n"
	.string "And that changes timelines.$"

ParcelCorridor_ObsStumps_Text_0:
# 113 "data/maps/ParcelCorridor/scripts.pory"
	.string "Old stumps in a rough line, cut flat,\n"
	.string "gray with years.\p"
	.string "The forest didn't thin here.\n"
	.string "It was thinned.$"

ParcelCorridor_ObsMoss_Text_0:
# 117 "data/maps/ParcelCorridor/scripts.pory"
	.string "The moss grows uneven--thick on the\n"
	.string "north faces, absent where the canopy\l"
	.string "used to hold the damp.$"

ParcelCorridor_ObsDrainage_Text_0:
# 121 "data/maps/ParcelCorridor/scripts.pory"
	.string "A drainage cut, knife-straight.\n"
	.string "Nothing in nature drains like this.$"

ParcelCorridor_ObsRoad_Text_0:
# 125 "data/maps/ParcelCorridor/scripts.pory"
	.string "A cracked service road, half-reclaimed\n"
	.string "by weeds.\p"
	.string "It looks abandoned.\n"
	.string "It isn't harmless.$"

ParcelCorridor_ObsCulvert_Text_0:
# 129 "data/maps/ParcelCorridor/scripts.pory"
	.string "The culvert. Concrete, narrow,\n"
	.string "functional.\p"
	.string "Upstream: broad and braided.\n"
	.string "Downstream: a single fast channel.$"

ParcelCorridor_GymMirren_Text_0:
# 158 "data/maps/ParcelCorridor/scripts.pory"
	.string "Mirren: Subsurface Survey. I sign who\n"
	.string "goes past this cut and who doesn't.\p"
	.string "You read rock for a living yet? Show me\n"
	.string "you read anything at all.$"

ParcelCorridor_GymMirren_Text_1:
# 159 "data/maps/ParcelCorridor/scripts.pory"
	.string "Mirren: …Steady under pressure. Noted.$"

ParcelCorridor_GymMirren_Text_2:
# 163 "data/maps/ParcelCorridor/scripts.pory"
	.string "Mirren: Cleared provisional. The basin's\n"
	.string "darker than this.\p"
	.string "Don't go in blind.$"

ParcelCorridor_GymMirren_Defeated_Text_0:
# 170 "data/maps/ParcelCorridor/scripts.pory"
	.string "Mirren: Subsurface clearance. It logs\n"
	.string "you fit to survey enclosed ground.\p"
	.string "Comes with the standard kit.$"

ParcelCorridor_GymMirren_Defeated_Text_1:
# 172 "data/maps/ParcelCorridor/scripts.pory"
	.string "Mirren: FLASH. Lights a cave or a\n"
	.string "culvert from the inside.\p"
	.string "You'll want it where the daylight stops.$"
