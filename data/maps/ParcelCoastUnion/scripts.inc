ParcelCoastUnion_MapScripts::
	.byte 0


ParcelCoastUnion_Chair::
# 5 "data/maps/ParcelCoastUnion/scripts.pory"
	lock
# 6 "data/maps/ParcelCoastUnion/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelCoastUnion/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastUnion_Chair_2
# 12 "data/maps/ParcelCoastUnion/scripts.pory"
	msgbox ParcelCoastUnion_Chair_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelCoastUnion/scripts.pory"
	release
	end

ParcelCoastUnion_Chair_2:
# 8 "data/maps/ParcelCoastUnion/scripts.pory"
	msgbox ParcelCoastUnion_Chair_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelCoastUnion/scripts.pory"
	release
	end


ParcelCoastUnion_Fisher1::
# 17 "data/maps/ParcelCoastUnion/scripts.pory"
	lock
# 18 "data/maps/ParcelCoastUnion/scripts.pory"
	faceplayer
# 19 "data/maps/ParcelCoastUnion/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastUnion_Fisher1_2
# 24 "data/maps/ParcelCoastUnion/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastUnion_Fisher1_5
# 29 "data/maps/ParcelCoastUnion/scripts.pory"
	msgbox ParcelCoastUnion_Fisher1_Text_2, MSGBOX_DEFAULT
# 30 "data/maps/ParcelCoastUnion/scripts.pory"
	release
	end

ParcelCoastUnion_Fisher1_2:
# 20 "data/maps/ParcelCoastUnion/scripts.pory"
	msgbox ParcelCoastUnion_Fisher1_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/ParcelCoastUnion/scripts.pory"
	release
	end

ParcelCoastUnion_Fisher1_5:
# 25 "data/maps/ParcelCoastUnion/scripts.pory"
	msgbox ParcelCoastUnion_Fisher1_Text_1, MSGBOX_DEFAULT
# 26 "data/maps/ParcelCoastUnion/scripts.pory"
	release
	end


ParcelCoastUnion_Fisher2::
# 34 "data/maps/ParcelCoastUnion/scripts.pory"
	lock
# 35 "data/maps/ParcelCoastUnion/scripts.pory"
	faceplayer
# 36 "data/maps/ParcelCoastUnion/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastUnion_Fisher2_2
# 41 "data/maps/ParcelCoastUnion/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastUnion_Fisher2_5
# 46 "data/maps/ParcelCoastUnion/scripts.pory"
	msgbox ParcelCoastUnion_Fisher2_Text_2, MSGBOX_DEFAULT
# 47 "data/maps/ParcelCoastUnion/scripts.pory"
	release
	end

ParcelCoastUnion_Fisher2_2:
# 37 "data/maps/ParcelCoastUnion/scripts.pory"
	msgbox ParcelCoastUnion_Fisher2_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/ParcelCoastUnion/scripts.pory"
	release
	end

ParcelCoastUnion_Fisher2_5:
# 42 "data/maps/ParcelCoastUnion/scripts.pory"
	msgbox ParcelCoastUnion_Fisher2_Text_1, MSGBOX_DEFAULT
# 43 "data/maps/ParcelCoastUnion/scripts.pory"
	release
	end


ParcelCoastUnion_Board::
# 51 "data/maps/ParcelCoastUnion/scripts.pory"
	msgbox ParcelCoastUnion_Board_Text_0, MSGBOX_SIGN
	end


ParcelCoastUnion_Carbons::
# 58 "data/maps/ParcelCoastUnion/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastUnion_Carbons_1
# 60 "data/maps/ParcelCoastUnion/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CARBON_DONE, ParcelCoastUnion_Carbons_2
# 63 "data/maps/ParcelCoastUnion/scripts.pory"
	msgbox ParcelCoastUnion_Carbons_Text_2, MSGBOX_SIGN
	return

ParcelCoastUnion_Carbons_1:
# 59 "data/maps/ParcelCoastUnion/scripts.pory"
	msgbox ParcelCoastUnion_Carbons_Text_0, MSGBOX_SIGN
	return

ParcelCoastUnion_Carbons_2:
# 61 "data/maps/ParcelCoastUnion/scripts.pory"
	msgbox ParcelCoastUnion_Carbons_Text_1, MSGBOX_SIGN
	return


ParcelCoastUnion_Chair_Text_0:
# 8 "data/maps/ParcelCoastUnion/scripts.pory"
	.string "CHAIR: The review grounds half the\n"
	.string "fleet two days a week. Half the hall\l"
	.string "wants your head. The other half knows\l"
	.string "the fish were gone anyway and somebody\l"
	.string "finally said so.\p"
	.string "I'm the other half. Barely.$"

ParcelCoastUnion_Chair_Text_1:
# 12 "data/maps/ParcelCoastUnion/scripts.pory"
	.string "CHAIR: Union of Coastal Fishers.\n"
	.string "Forty-one boats. Forty-one notes held\l"
	.string "by MEREHOLT COASTAL LENDING. Guess\l"
	.string "how our votes go on quota day.\p"
	.string "We're not cowards, RANGER. We're\n"
	.string "mortgaged.$"

ParcelCoastUnion_Fisher1_Text_0:
# 20 "data/maps/ParcelCoastUnion/scripts.pory"
	.string "FISHER: HARLAND spoke for the river\n"
	.string "and the coast both, in one breath. The\l"
	.string "hearing let him. Nine minutes. I timed it.\l"
	.string "Best nine minutes this hall's had.$"

ParcelCoastUnion_Fisher1_Text_1:
# 25 "data/maps/ParcelCoastUnion/scripts.pory"
	.string "FISHER: HARLAND lost. On the quay, to a\n"
	.string "ranger, and shook hands, and then he\l"
	.string "came in here and said: it's written now.\l"
	.string "Like that settled something.\p"
	.string "Forty-one notes with the lender.\n"
	.string "Forty-one men who heard him say it.$"

ParcelCoastUnion_Fisher1_Text_2:
# 29 "data/maps/ParcelCoastUnion/scripts.pory"
	.string "FISHER: HARLAND came down from the\n"
	.string "river to fish the coast because the\l"
	.string "river was done. Now the coast's done.\l"
	.string "There's nowhere further down.$"

ParcelCoastUnion_Fisher2_Text_0:
# 37 "data/maps/ParcelCoastUnion/scripts.pory"
	.string "FISHER: The Board's model said six\n"
	.string "years. The review threw the model out\l"
	.string "and said 'we don't know'. I'll take 'we\l"
	.string "don't know'. It's the first true thing\l"
	.string "they've said about the stock.$"

ParcelCoastUnion_Fisher2_Text_1:
# 42 "data/maps/ParcelCoastUnion/scripts.pory"
	.string "FISHER: The Board's model said six\n"
	.string "years, six years ago. Your survey says\l"
	.string "COLLAPSING, this year.\p"
	.string "One of those is a date you can check.\n"
	.string "The hall voted to put yours on the\l"
	.string "notice board. The lender's man was in\l"
	.string "the room. He didn't object. He wrote it\l"
	.string "down.$"

ParcelCoastUnion_Fisher2_Text_2:
# 46 "data/maps/ParcelCoastUnion/scripts.pory"
	.string "FISHER: The Board's model says the\n"
	.string "stock recovers in six years if we hold\l"
	.string "the quota. It said that six years ago.$"

ParcelCoastUnion_Board_Text_0:
# 51 "data/maps/ParcelCoastUnion/scripts.pory"
	.string "MINUTES. Motion to request an\n"
	.string "independent stock survey: proposed,\l"
	.string "seconded, deferred. Deferred. Deferred.\l"
	.string "Deferred. Four years of the same line.$"

ParcelCoastUnion_Carbons_Text_0:
# 59 "data/maps/ParcelCoastUnion/scripts.pory"
	.string "The folder of carbons, on the table\n"
	.string "where anyone can read it now. Ten\l"
	.string "sheets. The tenth is white, not blue,\l"
	.string "and typed: READ INTO THE RECORD.\p"
	.string "Year one. OBJECTION. The dredge is\n"
	.string "taking the ground the fish spawn on and\l"
	.string "I object.\p"
	.string "Year two. OBJECTION. The dredge is\n"
	.string "taking the ground and the harbour is\l"
	.string "silting where it never did and I object.\p"
	.string "Year three. OBJECTION. Last year's\n"
	.string "objection stands. Add: the small fish\l"
	.string "are gone from the east side.\p"
	.string "Year four. OBJECTION. One sentence,\n"
	.string "pressed hard enough to tear. It is\l"
	.string "about the size of a fish.\p"
	.string "Year five. Objection. I have stopped\n"
	.string "writing it in capitals. I am told it is\l"
	.string "noted. I would like to know where.\p"
	.string "Year six. Objection. The catch book is\n"
	.string "in the cannery. Anyone may read it. I\l"
	.string "object to the catch book.\p"
	.string "Year seven. Objection. My son has taken\n"
	.string "work on the dredge. I object to that\l"
	.string "too and he knows it.\p"
	.string "Year eight. Objection. Nine fishers\n"
	.string "signed this one. We would like a reply.\p"
	.string "Year nine. Objection, with the red-cloth\n"
	.string "dates the Surveyor gave me. Thirty-one\l"
	.string "years. Read them.\p"
	.string "Year ten, typed, this season. The\n"
	.string "objector was heard. The ranger's survey\l"
	.string "was heard. The Surveyor's baselines\l"
	.string "were heard. Item 7 took the whole\l"
	.string "afternoon.$"

ParcelCoastUnion_Carbons_Text_1:
# 61 "data/maps/ParcelCoastUnion/scripts.pory"
	.string "The folder of carbons, closed with a\n"
	.string "rubber band. Nine blue sheets, one a\l"
	.string "year. The fourth is creased from a shoe\l"
	.string "and smoothed flat again.\p"
	.string "Year one. OBJECTION. The dredge is\n"
	.string "taking the ground the fish spawn on and\l"
	.string "I object.\p"
	.string "Year two. OBJECTION. The dredge is\n"
	.string "taking the ground and the harbour is\l"
	.string "silting where it never did and I object.\p"
	.string "Year three. OBJECTION. Last year's\n"
	.string "objection stands. Add: the small fish\l"
	.string "are gone from the east side.\p"
	.string "Year four. OBJECTION. One sentence,\n"
	.string "pressed hard enough to tear. It is\l"
	.string "about the size of a fish.\p"
	.string "Year five. Objection. I have stopped\n"
	.string "writing it in capitals. I am told it is\l"
	.string "noted. I would like to know where.\p"
	.string "Year six. Objection. The catch book is\n"
	.string "in the cannery. Anyone may read it. I\l"
	.string "object to the catch book.\p"
	.string "Year seven. Objection. My son has taken\n"
	.string "work on the dredge. I object to that\l"
	.string "too and he knows it.\p"
	.string "Year eight. Objection. Nine fishers\n"
	.string "signed this one. We would like a reply.\p"
	.string "Year nine. Objection, with the red-cloth\n"
	.string "dates the Surveyor gave me. Thirty-one\l"
	.string "years. Read them.\p"
	.string "Nine. The tenth sheet is still in the\n"
	.string "typewriter upstairs.$"

ParcelCoastUnion_Carbons_Text_2:
# 63 "data/maps/ParcelCoastUnion/scripts.pory"
	.string "A folder with a rubber band round it.\n"
	.string "CARBONS, in capitals, and under that,\l"
	.string "smaller: do not lend.\p"
	.string "Blue sheets, one a year, each headed\n"
	.string "OBJECTION. Eight. Between the third and\l"
	.string "the fifth there is a gap where a sheet\l"
	.string "should be.\p"
	.string "The first reads: the dredge is taking\n"
	.string "the ground the fish spawn on and I\l"
	.string "object. The eighth is signed by nine\l"
	.string "fishers and asks for a reply.\p"
	.string "Nobody has written a reply on any of\n"
	.string "them.$"
