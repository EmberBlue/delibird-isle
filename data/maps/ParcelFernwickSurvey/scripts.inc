ParcelFernwickSurvey_MapScripts::
	.byte 0


ParcelFernwickSurvey_Clerk::
# 9 "data/maps/ParcelFernwickSurvey/scripts.pory"
	lock
# 10 "data/maps/ParcelFernwickSurvey/scripts.pory"
	faceplayer
# 11 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CRATE, ParcelFernwickSurvey_Clerk_3
ParcelFernwickSurvey_Clerk_1:
# 25 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickSurvey_Clerk_7
# 30 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CRATE_DONE, ParcelFernwickSurvey_Clerk_13
# 36 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickSurvey_Clerk_16
# 41 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_7, MSGBOX_DEFAULT
# 42 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Clerk_2:
# 12 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CRATE_FOUND, ParcelFernwickSurvey_Clerk_10
# 21 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_3, MSGBOX_DEFAULT
# 22 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Clerk_3:
# 11 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CRATE_DONE, ParcelFernwickSurvey_Clerk_2
	goto ParcelFernwickSurvey_Clerk_1

ParcelFernwickSurvey_Clerk_7:
# 26 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_4, MSGBOX_DEFAULT
# 27 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Clerk_10:
# 13 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_0, MSGBOX_DEFAULT
# 14 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelFernwickSurvey/scripts.pory"
	giveitem ITEM_FOCUS_BAND
# 16 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setflag FLAG_SKALD_Q_CRATE_DONE
# 17 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Clerk_13:
# 31 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_5, MSGBOX_DEFAULT
# 32 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setflag FLAG_SKALD_Q_CRATE
# 33 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Clerk_16:
# 37 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_6, MSGBOX_DEFAULT
# 38 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end


ParcelFernwickSurvey_Ilex::
# 47 "data/maps/ParcelFernwickSurvey/scripts.pory"
	lock
# 48 "data/maps/ParcelFernwickSurvey/scripts.pory"
	faceplayer
# 49 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickSurvey_Ilex_2
# 54 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelFernwickSurvey_Ilex_5
# 79 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_6, MSGBOX_DEFAULT
# 80 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_7, MSGBOX_DEFAULT
# 81 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Ilex_2:
# 50 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_0, MSGBOX_DEFAULT
# 51 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Ilex_5:
# 55 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 56 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setvar VAR_0x8004, 6
# 57 "data/maps/ParcelFernwickSurvey/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 58 "data/maps/ParcelFernwickSurvey/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFernwickSurvey_Ilex_8
# 63 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setvar VAR_0x8004, 63
# 64 "data/maps/ParcelFernwickSurvey/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 65 "data/maps/ParcelFernwickSurvey/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelFernwickSurvey_Ilex_11
# 75 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_5, MSGBOX_DEFAULT
# 76 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Ilex_8:
# 59 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_1, MSGBOX_DEFAULT
# 60 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Ilex_11:
# 66 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_2, MSGBOX_DEFAULT
# 67 "data/maps/ParcelFernwickSurvey/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyFloodbasin
# 68 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_3, MSGBOX_DEFAULT
# 69 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setvar VAR_0x8004, 6
# 70 "data/maps/ParcelFernwickSurvey/scripts.pory"
	special SkaldmereCertTaskMark
# 71 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_4, MSGBOX_DEFAULT
# 72 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end


ParcelFernwickSurvey_ReadBoard::
# 86 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_ReadBoard_Text_0, MSGBOX_SIGN
	end


ParcelFernwickSurvey_ReadDesk::
# 91 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_ReadDesk_Text_0, MSGBOX_SIGN
	end


ParcelFernwickSurvey_Clerk_Text_0:
# 13 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: There it is. Forty years of\n"
	.string "basement, one word, one boot print. I'll\l"
	.string "keep the boot print.$"

ParcelFernwickSurvey_Clerk_Text_1:
# 14 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: Take this. Survey issue, from\n"
	.string "the drawer nobody opens. It steadied\l"
	.string "forty years of surveyors. It can\l"
	.string "steady one more.$"

ParcelFernwickSurvey_Clerk_Text_2:
# 17 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: Chain of custody. That's the\n"
	.string "whole trick, you know. Not finding a\l"
	.string "thing. Being able to say where it's been.$"

ParcelFernwickSurvey_Clerk_Text_3:
# 21 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: The river hall floor. A label the\n"
	.string "size of your hand. EVIDENCE, in my\l"
	.string "writing. You'll know my writing; it's the\l"
	.string "only neat one.$"

ParcelFernwickSurvey_Clerk_Text_4:
# 26 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: Forty years of soil cores in the\n"
	.string "basement, and the hearing wanted the\l"
	.string "cores from the marsh. I carried them up\l"
	.string "myself. They're heavier than paper.\l"
	.string "They were read anyway.$"

ParcelFernwickSurvey_Clerk_Text_5:
# 31 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: The soil cores came back from\n"
	.string "the river. Forty years of them, in the\l"
	.string "crate marked EVIDENCE. The crate came\l"
	.string "back. The label didn't.\p"
	.string "I need that label. Chain of custody.\n"
	.string "Without it the cores are just mud in\l"
	.string "boxes, which is what they always were,\l"
	.string "but now it matters.\p"
	.string "It'll be on the floor of the river hall\n"
	.string "where they stacked the crates. Nobody\l"
	.string "there reads floors.$"

ParcelFernwickSurvey_Clerk_Text_6:
# 37 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: The soil cores went to the river.\n"
	.string "On a truck. Forty years in the basement\l"
	.string "and they rode to a meeting in a crate\l"
	.string "marked EVIDENCE.\p"
	.string "I labelled the crate myself. I've never\n"
	.string "labelled anything evidence. I liked it.$"

ParcelFernwickSurvey_Clerk_Text_7:
# 41 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: Forty years of soil cores in the\n"
	.string "basement. Nobody ever asked to see\l"
	.string "them.\p"
	.string "Nobody, until this month.$"

ParcelFernwickSurvey_Ilex_Text_0:
# 50 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: It's filed. It's read. HALE signed\n"
	.string "it in front of me, and he didn't smile,\l"
	.string "and his hand was steady. That's the\l"
	.string "version I'll remember.$"

ParcelFernwickSurvey_Ilex_Text_1:
# 59 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: It's filed. The paper's HALE's to\n"
	.string "sign. Don't expect him to smile about it.$"

ParcelFernwickSurvey_Ilex_Text_2:
# 66 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: The pipe, the sheen, the dead\n"
	.string "reeds. The WOOPER. The MAGIKARP. The\l"
	.string "booth.\p"
	.string "Put a name on it.$"

ParcelFernwickSurvey_Ilex_Text_3:
# 68 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: COLLAPSING. The keystone's\n"
	.string "straining, the apex is sick, the middle\l"
	.string "swarms.\p"
	.string "That's what 'we're remediating that'\n"
	.string "looks like in real life.$"

ParcelFernwickSurvey_Ilex_Text_4:
# 71 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: I'll have your report typed by\n"
	.string "morning. Go tell HALE you're done. The\l"
	.string "certification's his to give.$"

ParcelFernwickSurvey_Ilex_Text_5:
# 75 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: Damage wears the mask of\n"
	.string "improvement. You'll see it everywhere\l"
	.string "now.\p"
	.string "Sorry. Nobody warned me either.$"

ParcelFernwickSurvey_Ilex_Text_6:
# 79 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: Skaldmere Survey. We measure\n"
	.string "things over time and write the numbers\l"
	.string "down.\p"
	.string "It's less exciting than it sounds, and\n"
	.string "it sounds boring.$"

ParcelFernwickSurvey_Ilex_Text_7:
# 80 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: Get certified first. Then come\n"
	.string "back and I'll show you how to read a\l"
	.string "place properly.\p"
	.string "Reading is the whole job. The battles\n"
	.string "are just how you get there.$"

ParcelFernwickSurvey_ReadBoard_Text_0:
# 86 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "The blackboard, in a surveyor's chalk:\n"
	.string "READ THE PLACE. THEN READ IT AGAIN.\l"
	.string "THEN WRITE WHAT IS THERE.\p"
	.string "Under it, smaller, someone has added:\n"
	.string "NOT WHAT YOU HOPED.$"

ParcelFernwickSurvey_ReadDesk_Text_0:
# 91 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "An open field guide on a pupil's desk,\n"
	.string "forty years old. The marsh-plant pages\l"
	.string "have been read until they're soft.\p"
	.string "One plant is ringed, with a date beside\n"
	.string "it, and a place you know the name of.$"
