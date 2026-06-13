ParcelFloodbasin_MapScripts::
# 20 "data/maps/ParcelFloodbasin/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelFloodbasin_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelFloodbasin_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 21 "data/maps/ParcelFloodbasin/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelFloodbasin_SetMapVar
	.2byte 0


ParcelFloodbasin_SetMapVar::
# 26 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


ParcelFloodbasin_FirstEntry::
# 32 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_1, 1
# 33 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FLOODBASIN_ARRIVAL, ParcelFloodbasin_FirstEntry_2
# 36 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 37 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_2, MSGBOX_DEFAULT
# 40 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALDMERE_FLOODBASIN_ARRIVAL
# 41 "data/maps/ParcelFloodbasin/scripts.pory"
	releaseall
	end

ParcelFloodbasin_FirstEntry_2:
	end


ParcelFloodbasin_Discharge::
# 47 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 48 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 49 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 0
# 50 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 51 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Discharge_2
# 56 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Discharge_Text_1, MSGBOX_SIGN
# 57 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 58 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Discharge_2:
# 52 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Discharge_Text_0, MSGBOX_SIGN
# 53 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sheen::
# 62 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 63 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 64 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 1
# 65 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 66 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Sheen_2
# 71 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sheen_Text_1, MSGBOX_SIGN
# 72 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 73 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sheen_2:
# 67 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sheen_Text_0, MSGBOX_SIGN
# 68 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_DeadReeds::
# 77 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 78 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 79 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 2
# 80 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 81 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_DeadReeds_2
# 86 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeadReeds_Text_1, MSGBOX_SIGN
# 87 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 88 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_DeadReeds_2:
# 82 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeadReeds_Text_0, MSGBOX_SIGN
# 83 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_DeformedWooper::
# 94 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 95 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 96 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 3
# 97 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 98 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeformedWooper_Text_0, MSGBOX_DEFAULT
# 99 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_SickKarp::
# 103 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 104 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 105 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 4
# 106 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 107 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SickKarp_Text_0, MSGBOX_DEFAULT
# 108 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BoothSign::
# 114 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BoothSign_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Remediator::
# 119 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 120 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 121 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 122 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 5
# 123 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 124 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Remediator_2
# 129 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_1, MSGBOX_DEFAULT
# 130 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_2, MSGBOX_DEFAULT
# 131 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_3, MSGBOX_DEFAULT
# 132 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_4, MSGBOX_DEFAULT
# 133 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_5, MSGBOX_DEFAULT
# 134 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_6, MSGBOX_DEFAULT
# 135 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 136 "data/maps/ParcelFloodbasin/scripts.pory"
	delay 30
# 137 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_7, MSGBOX_DEFAULT
# 138 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_REMEDIATOR, ParcelFloodbasin_Remediator_Text_8, ParcelFloodbasin_Remediator_Text_9
# 141 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_10, MSGBOX_DEFAULT
# 142 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_11, MSGBOX_DEFAULT
# 143 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 144 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Remediator_2:
# 125 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_0, MSGBOX_DEFAULT
# 126 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer::
# 150 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BASIN_KID, ParcelFloodbasin_BasinKidTrainer_Text_0, ParcelFloodbasin_BasinKidTrainer_Text_1
# 153 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_ItemRevive::
# 158 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_REVIVE
	end


ParcelFloodbasin_FirstEntry_Text_0:
# 37 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The trees open onto a low, wide basin.\n"
	.string "Rain ticks on the reeds.\p"
	.string "Something is wrong with the smell.$"

ParcelFloodbasin_FirstEntry_Text_1:
# 38 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Doduo walks on, but slower. One head\n"
	.string "sweeps the ground.\n"
	.string "The other watches the water.$"

ParcelFloodbasin_FirstEntry_Text_2:
# 39 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Hale's brief, on paper:\p"
	.string "LEGACY CONTAMINATION -- OWNERSHIP\n"
	.string "UNCONTESTED -- ACTIVE REMEDIATION\l"
	.string "CITED.\n"
	.string "Walk the upstream. Read it for yourself.$"

ParcelFloodbasin_Discharge_Text_0:
# 52 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The discharge pipe. Noted.$"

ParcelFloodbasin_Discharge_Text_1:
# 56 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A concrete pipe, half-buried, mouth\n"
	.string "fouled with brown crust.\p"
	.string "Stamped:\n"
	.string "DISCHARGE -- AUTHORIZED USE ONLY.\p"
	.string "The authorization is decades old.\n"
	.string "The crust is fresher than that.$"

ParcelFloodbasin_Sheen_Text_0:
# 67 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The sheen. Documented.$"

ParcelFloodbasin_Sheen_Text_1:
# 71 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A faint iridescence crawls on the\n"
	.string "surface, bending the rain wrong.\p"
	.string "It is not new. The cattails downstream\n"
	.string "of it carry the same stain at their\l"
	.string "bases.$"

ParcelFloodbasin_DeadReeds_Text_0:
# 82 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The dead reed band. Photographed.$"

ParcelFloodbasin_DeadReeds_Text_1:
# 86 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A band of dead reeds along the south\n"
	.string "bank. Straw-pale.\p"
	.string "Around them, the reeds are fine. The kill\n"
	.string "line is exactly the height of the\l"
	.string "floodwater six months ago.$"

ParcelFloodbasin_DeformedWooper_Text_0:
# 98 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A Wooper, low to the ground. Two left\n"
	.string "feet.\p"
	.string "It does not flinch.\p"
	.string "It has been the way it is since it\n"
	.string "hatched, and that is recent.$"

ParcelFloodbasin_SickKarp_Text_0:
# 107 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A grown Magikarp lists against the\n"
	.string "bank, scales graying.\p"
	.string "It was not in the pipe. It was at the\n"
	.string "top of the food web.\p"
	.string "Poison climbs.$"

ParcelFloodbasin_BoothSign_Text_0:
# 114 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MEREHOLT FOUNDATION COMMUNITY\n"
	.string "OUTREACH\p"
	.string "Remediation underway.\n"
	.string "Please report concerns to your local\l"
	.string "representative.\p"
	.string "The paint is wet from the rain.\n"
	.string "The sign is older.$"

ParcelFloodbasin_Remediator_Text_0:
# 125 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Kole adjusts his clipboard. He has been\n"
	.string "adjusting his clipboard for an hour.$"

ParcelFloodbasin_Remediator_Text_1:
# 129 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Kole: Oh--Ranger! Welcome to the\n"
	.string "active remediation site.\p"
	.string "We've been at it… some time now.\n"
	.string "Foundation does great work.$"

ParcelFloodbasin_Remediator_Text_2:
# 130 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: When was the last reading?$"

ParcelFloodbasin_Remediator_Text_3:
# 131 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Kole: …Quarter or two. We're due.$"

ParcelFloodbasin_Remediator_Text_4:
# 132 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: Who signed off on the\n"
	.string "discharge stamp on that pipe?$"

ParcelFloodbasin_Remediator_Text_5:
# 133 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Kole, more carefully:\p"
	.string "Kole: You'd have to ask the office. I\n"
	.string "just check the boxes.$"

ParcelFloodbasin_Remediator_Text_6:
# 134 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: I'm asking. The Wooper has\n"
	.string "two left feet.$"

ParcelFloodbasin_Remediator_Text_7:
# 137 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Kole's voice goes flat.\p"
	.string "Kole: Move along, Ranger.\n"
	.string "This isn't your patch.$"

ParcelFloodbasin_Remediator_Text_8:
# 139 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Kole: --tch. Fine. We'll do this the loud\n"
	.string "way.$"

ParcelFloodbasin_Remediator_Text_9:
# 140 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Kole: Hmph.$"

ParcelFloodbasin_Remediator_Text_10:
# 141 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Kole: Write up whatever you write up.\p"
	.string "This river ran sick before you got here.\n"
	.string "It will run sick after.$"

ParcelFloodbasin_Remediator_Text_11:
# 142 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "He goes back to his clipboard.\p"
	.string "He does not pick up a pen.$"

ParcelFloodbasin_BasinKidTrainer_Text_0:
# 151 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Piper: Gran fishes here. Used to. Wanna\n"
	.string "battle?$"

ParcelFloodbasin_BasinKidTrainer_Text_1:
# 152 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Piper: Ohh. You're good!$"

ParcelFloodbasin_BasinKidTrainer_Text_2:
# 153 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Piper: She doesn't eat what she\n"
	.string "catches anymore.\p"
	.string "Sells it to the people who don't ask.$"
