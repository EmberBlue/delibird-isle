ParcelFernwickSurvey_MapScripts::
	.byte 0


ParcelFernwickSurvey_Clerk::
# 9 "data/maps/ParcelFernwickSurvey/scripts.pory"
	lock
# 10 "data/maps/ParcelFernwickSurvey/scripts.pory"
	faceplayer
# 11 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwickSurvey_Clerk_3
ParcelFernwickSurvey_Clerk_1:
# 16 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CRATE, ParcelFernwickSurvey_Clerk_8
ParcelFernwickSurvey_Clerk_6:
# 30 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickSurvey_Clerk_12
# 35 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CRATE_DONE, ParcelFernwickSurvey_Clerk_18
# 41 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickSurvey_Clerk_21
# 46 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_8, MSGBOX_DEFAULT
# 47 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Clerk_2:
# 12 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_0, MSGBOX_DEFAULT
# 13 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Clerk_3:
# 11 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CRATE_DONE, ParcelFernwickSurvey_Clerk_2
	goto ParcelFernwickSurvey_Clerk_1

ParcelFernwickSurvey_Clerk_7:
# 17 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CRATE_FOUND, ParcelFernwickSurvey_Clerk_15
# 26 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_4, MSGBOX_DEFAULT
# 27 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Clerk_8:
# 16 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CRATE_DONE, ParcelFernwickSurvey_Clerk_7
	goto ParcelFernwickSurvey_Clerk_6

ParcelFernwickSurvey_Clerk_12:
# 31 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_5, MSGBOX_DEFAULT
# 32 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Clerk_15:
# 18 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_1, MSGBOX_DEFAULT
# 19 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelFernwickSurvey/scripts.pory"
	giveitem ITEM_FOCUS_BAND
# 21 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setflag FLAG_SKALD_Q_CRATE_DONE
# 22 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_3, MSGBOX_DEFAULT
# 23 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Clerk_18:
# 36 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_6, MSGBOX_DEFAULT
# 37 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setflag FLAG_SKALD_Q_CRATE
# 38 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Clerk_21:
# 42 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Clerk_Text_7, MSGBOX_DEFAULT
# 43 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end


ParcelFernwickSurvey_Ilex::
# 52 "data/maps/ParcelFernwickSurvey/scripts.pory"
	lock
# 53 "data/maps/ParcelFernwickSurvey/scripts.pory"
	faceplayer
# 54 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwickSurvey_Ilex_3
ParcelFernwickSurvey_Ilex_1:
# 59 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickSurvey_Ilex_7
# 79 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelFernwickSurvey_Ilex_10
# 104 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_12, MSGBOX_DEFAULT
# 105 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_13, MSGBOX_DEFAULT
# 106 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Ilex_2:
# 55 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_0, MSGBOX_DEFAULT
# 56 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Ilex_3:
# 54 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND_DONE, ParcelFernwickSurvey_Ilex_2
	goto ParcelFernwickSurvey_Ilex_1

ParcelFernwickSurvey_Ilex_7:
# 60 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND_DONE, ParcelFernwickSurvey_Ilex_13
# 62 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND, ParcelFernwickSurvey_Ilex_14
# 72 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_5, MSGBOX_DEFAULT
# 73 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_6, MSGBOX_DEFAULT
# 74 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setflag FLAG_SKALD_SECOND
ParcelFernwickSurvey_Ilex_12:
# 76 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Ilex_10:
# 80 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 81 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setvar VAR_0x8004, 6
# 82 "data/maps/ParcelFernwickSurvey/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 83 "data/maps/ParcelFernwickSurvey/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFernwickSurvey_Ilex_19
# 88 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setvar VAR_0x8004, 63
# 89 "data/maps/ParcelFernwickSurvey/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 90 "data/maps/ParcelFernwickSurvey/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelFernwickSurvey_Ilex_37
# 100 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_11, MSGBOX_DEFAULT
# 101 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Ilex_13:
# 61 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_1, MSGBOX_DEFAULT
	goto ParcelFernwickSurvey_Ilex_12

ParcelFernwickSurvey_Ilex_14:
# 63 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND_0, ParcelFernwickSurvey_Ilex_24
ParcelFernwickSurvey_Ilex_22:
# 69 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_4, MSGBOX_DEFAULT
	goto ParcelFernwickSurvey_Ilex_12

ParcelFernwickSurvey_Ilex_19:
# 84 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_7, MSGBOX_DEFAULT
# 85 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end

ParcelFernwickSurvey_Ilex_21:
# 64 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_2, MSGBOX_DEFAULT
# 65 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_3, MSGBOX_DEFAULT
# 66 "data/maps/ParcelFernwickSurvey/scripts.pory"
	giveitem ITEM_RED_SCARF, 1
# 67 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setflag FLAG_SKALD_SECOND_DONE
	goto ParcelFernwickSurvey_Ilex_12

ParcelFernwickSurvey_Ilex_23:
# 63 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND_2, ParcelFernwickSurvey_Ilex_28
	goto ParcelFernwickSurvey_Ilex_22

ParcelFernwickSurvey_Ilex_24:
# 63 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND_1, ParcelFernwickSurvey_Ilex_23
	goto ParcelFernwickSurvey_Ilex_22

ParcelFernwickSurvey_Ilex_27:
# 63 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND_4, ParcelFernwickSurvey_Ilex_32
	goto ParcelFernwickSurvey_Ilex_22

ParcelFernwickSurvey_Ilex_28:
# 63 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND_3, ParcelFernwickSurvey_Ilex_27
	goto ParcelFernwickSurvey_Ilex_22

ParcelFernwickSurvey_Ilex_31:
# 63 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND_6, ParcelFernwickSurvey_Ilex_21
	goto ParcelFernwickSurvey_Ilex_22

ParcelFernwickSurvey_Ilex_32:
# 63 "data/maps/ParcelFernwickSurvey/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND_5, ParcelFernwickSurvey_Ilex_31
	goto ParcelFernwickSurvey_Ilex_22

ParcelFernwickSurvey_Ilex_37:
# 91 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_8, MSGBOX_DEFAULT
# 92 "data/maps/ParcelFernwickSurvey/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyFloodbasin
# 93 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_9, MSGBOX_DEFAULT
# 94 "data/maps/ParcelFernwickSurvey/scripts.pory"
	setvar VAR_0x8004, 6
# 95 "data/maps/ParcelFernwickSurvey/scripts.pory"
	special SkaldmereCertTaskMark
# 96 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Ilex_Text_10, MSGBOX_DEFAULT
# 97 "data/maps/ParcelFernwickSurvey/scripts.pory"
	release
	end


ParcelFernwickSurvey_ReadBoard::
# 111 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_ReadBoard_Text_0, MSGBOX_SIGN
	end


ParcelFernwickSurvey_ReadDesk::
# 116 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_ReadDesk_Text_0, MSGBOX_SIGN
	end


ParcelFernwickSurvey_Letters::
# 123 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Letters_Text_0, MSGBOX_SIGN
	return


ParcelFernwickSurvey_Index::
# 127 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Index_Text_0, MSGBOX_SIGN
	return


ParcelFernwickSurvey_Model::
# 133 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Model_Text_0, MSGBOX_SIGN
# 134 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Model_Text_1, MSGBOX_SIGN
# 135 "data/maps/ParcelFernwickSurvey/scripts.pory"
	msgbox ParcelFernwickSurvey_Model_Text_2, MSGBOX_SIGN
	end


ParcelFernwickSurvey_Clerk_Text_0:
# 12 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: The basement's got a light in it\n"
	.string "now. First in forty years. I found two\l"
	.string "more crates. Both words. Both filed.\p"
	.string "The boot print's framed.$"

ParcelFernwickSurvey_Clerk_Text_1:
# 18 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: There it is. Forty years of\n"
	.string "basement, one word, one boot print. I'll\l"
	.string "keep the boot print.$"

ParcelFernwickSurvey_Clerk_Text_2:
# 19 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: Take this. Survey issue, from\n"
	.string "the drawer nobody opens. It steadied\l"
	.string "forty years of surveyors. It can\l"
	.string "steady one more.$"

ParcelFernwickSurvey_Clerk_Text_3:
# 22 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: Chain of custody. That's the\n"
	.string "whole trick, you know. Not finding a\l"
	.string "thing. Being able to say where it's been.$"

ParcelFernwickSurvey_Clerk_Text_4:
# 26 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: The river hall floor. A label the\n"
	.string "size of your hand. EVIDENCE, in my\l"
	.string "writing. You'll know my writing; it's the\l"
	.string "only neat one.$"

ParcelFernwickSurvey_Clerk_Text_5:
# 31 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: Forty years of soil cores in the\n"
	.string "basement, and the hearing wanted the\l"
	.string "cores from the marsh. I carried them up\l"
	.string "myself. They're heavier than paper.\l"
	.string "They were read anyway.$"

ParcelFernwickSurvey_Clerk_Text_6:
# 36 "data/maps/ParcelFernwickSurvey/scripts.pory"
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

ParcelFernwickSurvey_Clerk_Text_7:
# 42 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: The soil cores went to the river.\n"
	.string "On a truck. Forty years in the basement\l"
	.string "and they rode to a meeting in a crate\l"
	.string "marked EVIDENCE.\p"
	.string "I labelled the crate myself. I've never\n"
	.string "labelled anything evidence. I liked it.$"

ParcelFernwickSurvey_Clerk_Text_8:
# 46 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "CLERK: Forty years of soil cores in the\n"
	.string "basement. Nobody ever asked to see\l"
	.string "them.\p"
	.string "Nobody, until this month.$"

ParcelFernwickSurvey_Ilex_Text_0:
# 55 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: Seven seconds in the register,\n"
	.string "and this spring the first thirds. The\l"
	.string "column after the second one had no\l"
	.string "heading.\p"
	.string "I've given it one. It says: after.$"

ParcelFernwickSurvey_Ilex_Text_1:
# 61 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: Seven second readings in the\n"
	.string "register, under the seven first ones.\l"
	.string "The column had never been used. It has\l"
	.string "a date in it now, in your hand.\p"
	.string "Tie the cloth to something that needs\n"
	.string "reading. That's the whole of the job,\l"
	.string "and you've done it twice.$"

ParcelFernwickSurvey_Ilex_Text_2:
# 64 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: Seven, after. Reedmere up four\n"
	.string "and no trend. Hollowbend: two frogs.\l"
	.string "Leirvik: grey. Elvsund: two boards.\l"
	.string "Haukfell: SHIFTED, dated both sides.\l"
	.string "The quay: a padlock. The marsh:\l"
	.string "forty-two, in your hand.\p"
	.string "Nobody has ever walked the whole set\n"
	.string "twice. The register has a column for it\l"
	.string "that has never been used.$"

ParcelFernwickSurvey_Ilex_Text_3:
# 65 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: Here. The Survey's cloth. I've a\n"
	.string "drawer of it and nobody to give it to.\p"
	.string "Tie it to something that needs reading.\n"
	.string "That's the whole of the job, and you've\l"
	.string "done it twice.$"

ParcelFernwickSurvey_Ilex_Text_4:
# 69 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: Not all seven yet. Read them\n"
	.string "after, the way you read them before.\l"
	.string "The after is the part nobody funds.\p"
	.string "Reedmere, Hollowbend, Leirvik, Elvsund,\n"
	.string "Haukfell, the quay, the marsh. The\l"
	.string "stakes are where they were. That's\l"
	.string "rather the point of stakes.$"

ParcelFernwickSurvey_Ilex_Text_5:
# 72 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: It's filed. It's read. HALE signed\n"
	.string "it in front of me, and he didn't smile,\l"
	.string "and his hand was steady. That's the\l"
	.string "version I'll remember.$"

ParcelFernwickSurvey_Ilex_Text_6:
# 73 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: One more thing, if you've the\n"
	.string "boots for it. The seven stakes. Go back\l"
	.string "and read them again, after.\p"
	.string "A first reading is a claim. A second is a\n"
	.string "record. Nobody has ever given me the\l"
	.string "second set. Tell me what changed.$"

ParcelFernwickSurvey_Ilex_Text_7:
# 84 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: It's filed. The paper's HALE's to\n"
	.string "sign. Don't expect him to smile about it.$"

ParcelFernwickSurvey_Ilex_Text_8:
# 91 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: The pipe, the sheen, the dead\n"
	.string "reeds. The WOOPER. The MAGIKARP. The\l"
	.string "booth.\p"
	.string "Put a name on it.$"

ParcelFernwickSurvey_Ilex_Text_9:
# 93 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: COLLAPSING. The keystone's\n"
	.string "straining, the apex is sick, the middle\l"
	.string "swarms.\p"
	.string "That's what 'we're remediating that'\n"
	.string "looks like in real life.$"

ParcelFernwickSurvey_Ilex_Text_10:
# 96 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: I'll have your report typed by\n"
	.string "morning. Go tell HALE you're done. The\l"
	.string "certification's his to give.$"

ParcelFernwickSurvey_Ilex_Text_11:
# 100 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: Damage wears the mask of\n"
	.string "improvement. You'll see it everywhere\l"
	.string "now.\p"
	.string "Sorry. Nobody warned me either.$"

ParcelFernwickSurvey_Ilex_Text_12:
# 104 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: Skaldmere Survey. We measure\n"
	.string "things over time and write the numbers\l"
	.string "down.\p"
	.string "It's less exciting than it sounds, and\n"
	.string "it sounds boring.$"

ParcelFernwickSurvey_Ilex_Text_13:
# 105 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "ILEX: Get certified first. Then come\n"
	.string "back and I'll show you how to read a\l"
	.string "place properly.\p"
	.string "Reading is the whole job. The battles\n"
	.string "are just how you get there.$"

ParcelFernwickSurvey_ReadBoard_Text_0:
# 111 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "The blackboard, in a surveyor's chalk:\n"
	.string "READ THE PLACE. THEN READ IT AGAIN.\l"
	.string "THEN WRITE WHAT IS THERE.\p"
	.string "Under it, smaller, someone has added:\n"
	.string "NOT WHAT YOU HOPED.$"

ParcelFernwickSurvey_ReadDesk_Text_0:
# 116 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "An open field guide on a pupil's desk,\n"
	.string "forty years old. The marsh-plant pages\l"
	.string "have been read until they're soft.\p"
	.string "One plant is ringed, with a date beside\n"
	.string "it, and a place you know the name of.$"

ParcelFernwickSurvey_Letters_Text_0:
# 123 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "A box file: CORRESPONDENCE, H. Three\n"
	.string "letters in the hand from your\l"
	.string "notebook's margins, years apart, each\l"
	.string "to the Survey.\p"
	.string "The first. Dear Ilex. I need your\n"
	.string "baselines for the lower river. Mine\l"
	.string "start when I arrived and yours start\l"
	.string "before anyone was counting. Say what\l"
	.string "the Survey charges and I will find it.\p"
	.string "The second. Dear Ilex. The Foundation\n"
	.string "has asked for my models in a form the\l"
	.string "company can use. I have asked what the\l"
	.string "company plans. They sent a brochure.\l"
	.string "Send me the red-cloth dates for the\l"
	.string "Floodbasin, please. I want to know how\l"
	.string "long it was healthy before it was not.\p"
	.string "The third, short. Ilex. If anyone ever\n"
	.string "asks you for my baselines, give them\l"
	.string "yours instead. Yours were never\l"
	.string "adjusted. H.\p"
	.string "Underneath, in the Surveyor's hand on\n"
	.string "the file's lid: ANSWERED. ANSWERED. NOT\l"
	.string "ANSWERED. WHO WOULD I HAVE SENT IT TO.$"

ParcelFernwickSurvey_Index_Text_0:
# 127 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "The sheet index. Every place the Survey\n"
	.string "has ever staked, one line each, with the\l"
	.string "year of the first stake and the year of\l"
	.string "the last reading.\p"
	.string "Saltwick Shoals, the old oyster ground.\n"
	.string "First stake, last reading, then the word\l"
	.string "GONE and a date.\p"
	.string "Reedmere Landing, the turf. Still read.\n"
	.string "The Hollowbend culvert, the pool below.\l"
	.string "Still read. Leirvik bridge reach. Still\l"
	.string "read, with a note: the state changed.\l"
	.string "Do not reset.\p"
	.string "Five lines carry GONE. A sixth has been\n"
	.string "written and then rubbed at with a thumb\l"
	.string "until the paper roughened. Under it,\l"
	.string "faint: NOT YET.\p"
	.string "No line has ever been removed from the\n"
	.string "index. Ilex does not throw things away.\l"
	.string "That is the whole method.$"

ParcelFernwickSurvey_Model_Text_0:
# 133 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "A bound memorandum in the Survey's\n"
	.string "archive: THE MAHOGANY MARSH, RECOVERY\l"
	.string "OF THE POLITOED POPULATION, A\l"
	.string "PREDICTIVE MODEL. The author's initial.\l"
	.string "The margins are ILEX's.\p"
	.string "ABSTRACT. Following protection, the\n"
	.string "keystone population recovered along a\l"
	.string "logistic curve to ninety per cent of\l"
	.string "the pre-disturbance baseline within\l"
	.string "eleven seasons, demonstrating the\l"
	.string "resilience of the freshwater marsh\l"
	.string "system to transient pressure.\p"
	.string "In the margin: transient. Underlined\n"
	.string "twice. The pressure was not transient.\l"
	.string "The protection was.$"

ParcelFernwickSurvey_Model_Text_1:
# 134 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "METHOD. Counts were taken at the\n"
	.string "breeding pools in spring and\l"
	.string "extrapolated to the marsh by habitat\l"
	.string "area. Years with incomplete coverage\l"
	.string "were filled by interpolation.\p"
	.string "In the margin: three of eleven years\n"
	.string "filled. The filled years are the steep\l"
	.string "part of the curve.\p"
	.string "RESULTS. Figure 2 shows the fitted\n"
	.string "curve against the observations. The fit\l"
	.string "is strong. Figure 3 projects the curve\l"
	.string "to full recovery.\p"
	.string "In the margin: figure 2 stops in year\n"
	.string "eight. Figure 3 is where the Foundation\l"
	.string "lives.$"

ParcelFernwickSurvey_Model_Text_2:
# 135 "data/maps/ParcelFernwickSurvey/scripts.pory"
	.string "DISCUSSION. The result suggests that\n"
	.string "wetland systems of this type possess\l"
	.string "substantial capacity to absorb\l"
	.string "disturbance and return, and that\l"
	.string "protection, where granted, may be\l"
	.string "reviewed as recovery proceeds.\p"
	.string "In the margin, the only long note: She\n"
	.string "wrote this to win the listing and it won\l"
	.string "it. Then it was read by people who\l"
	.string "wanted the last sentence and not the\l"
	.string "first. A true thing said too strongly\l"
	.string "becomes a false thing said by someone\l"
	.string "else. We stake. We do not model. This is\l"
	.string "why.\p"
	.string "On the back cover, newer: Lent to the\n"
	.string "ranger. Return it to the shelf, not to\l"
	.string "me. I have read it enough.$"
