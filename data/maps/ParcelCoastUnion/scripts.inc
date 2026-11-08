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
