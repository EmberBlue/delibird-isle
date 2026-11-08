ParcelFernwickSurvey_MapScripts::
	.byte 0


ParcelFernwickSurvey_Clerk::
# 9 "data/maps/ParcelFernwickSurvey/scripts.pory"
	lock
# 10 "data/maps/ParcelFernwickSurvey/scripts.pory"
	faceplayer
# 11 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickSurvey_Clerk_2
# 16 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickSurvey_Clerk_5
# 21 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_2, MSGBOX_DEFAULT
# 22 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Clerk_2:
# 12 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_0, MSGBOX_DEFAULT
# 13 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Clerk_5:
# 17 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_1, MSGBOX_DEFAULT
# 18 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end


ParcelFernwickSurvey_Ilex::
# 27 "data/maps/ParcelFernwickSurvey/scripts.pory"
	lock
# 28 "data/maps/ParcelFernwickSurvey/scripts.pory"
	faceplayer
# 29 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickSurvey_Ilex_2
# 34 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelFernwickSurvey_Ilex_5
# 59 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_6, MSGBOX_DEFAULT
# 60 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_7, MSGBOX_DEFAULT
# 61 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Ilex_2:
# 30 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_0, MSGBOX_DEFAULT
# 31 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Ilex_5:
# 35 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 36 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setvar VAR_0x8004, 6
# 37 "data/maps/ParcelFernwickSurvey/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 38 "data/maps/ParcelFernwickSurvey/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFernwickSurvey_Ilex_8
# 43 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setvar VAR_0x8004, 63
# 44 "data/maps/ParcelFernwickSurvey/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 45 "data/maps/ParcelFernwickSurvey/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelFernwickSurvey_Ilex_11
# 55 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_5, MSGBOX_DEFAULT
# 56 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Ilex_8:
# 39 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_1, MSGBOX_DEFAULT
# 40 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Ilex_11:
# 46 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_2, MSGBOX_DEFAULT
# 47 "data/maps/ParcelFernwickSurvey/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyFloodbasin
# 48 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_3, MSGBOX_DEFAULT
# 49 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setvar VAR_0x8004, 6
# 50 "data/maps/ParcelFernwickSurvey/scripts.pory"
	special SkaldmereCertTaskMark
# 51 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_4, MSGBOX_DEFAULT
# 52 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end


ParcelFernwickSurvey_Clerk_Text_0:
# 12 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: Forty years of soil cores in the\n"
	.string "basement, and the hearing wanted the\l"
	.string "cores from the marsh. I carried them up\l"
	.string "myself. They're heavier than paper.\l"
	.string "They were read anyway.$"

ParcelFernwickSurvey_Clerk_Text_1:
# 17 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: The soil cores went to the river.\n"
	.string "On a truck. Forty years in the basement\l"
	.string "and they rode to a meeting in a crate\l"
	.string "marked EVIDENCE.\p"
	.string "I labelled the crate myself. I've never\n"
	.string "labelled anything evidence. I liked it.$"

ParcelFernwickSurvey_Clerk_Text_2:
# 21 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: Forty years of soil cores in the\n"
	.string "basement. Nobody ever asked to see\l"
	.string "them.\p"
	.string "Nobody, until this month.$"

ParcelFernwickSurvey_Ilex_Text_0:
# 30 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: It's filed. It's read. HALE signed\n"
	.string "it in front of me, and he didn't smile,\l"
	.string "and his hand was steady. That's the\l"
	.string "version I'll remember.$"

ParcelFernwickSurvey_Ilex_Text_1:
# 39 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: It's filed. The paper's HALE's to\n"
	.string "sign. Don't expect him to smile about it.$"

ParcelFernwickSurvey_Ilex_Text_2:
# 46 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: The pipe, the sheen, the dead\n"
	.string "reeds. The WOOPER. The MAGIKARP. The\l"
	.string "booth.\p"
	.string "Put a name on it.$"

ParcelFernwickSurvey_Ilex_Text_3:
# 48 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: COLLAPSING. The keystone's\n"
	.string "straining, the apex is sick, the middle\l"
	.string "swarms.\p"
	.string "That's what 'we're remediating that'\n"
	.string "looks like in real life.$"

ParcelFernwickSurvey_Ilex_Text_4:
# 51 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: I'll have your report typed by\n"
	.string "morning. Go tell HALE you're done. The\l"
	.string "certification's his to give.$"

ParcelFernwickSurvey_Ilex_Text_5:
# 55 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: Damage wears the mask of\n"
	.string "improvement. You'll see it everywhere\l"
	.string "now.\p"
	.string "Sorry. Nobody warned me either.$"

ParcelFernwickSurvey_Ilex_Text_6:
# 59 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: Skaldmere Survey. We measure\n"
	.string "things over time and write the numbers\l"
	.string "down.\p"
	.string "It's less exciting than it sounds, and\n"
	.string "it sounds boring.$"

ParcelFernwickSurvey_Ilex_Text_7:
# 60 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: Get certified first. Then come\n"
	.string "back and I'll show you how to read a\l"
	.string "place properly.\p"
	.string "Reading is the whole job. The battles\n"
	.string "are just how you get there.$"
