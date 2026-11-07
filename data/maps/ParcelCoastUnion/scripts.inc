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
	msgbox ParcelCoastUnion_Fisher1_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/ParcelCoastUnion/scripts.pory"
	release
	end


ParcelCoastUnion_Fisher2::
# 24 "data/maps/ParcelCoastUnion/scripts.pory"
	lock
# 25 "data/maps/ParcelCoastUnion/scripts.pory"
	faceplayer
# 26 "data/maps/ParcelCoastUnion/scripts.pory"
	msgbox ParcelCoastUnion_Fisher2_Text_0, MSGBOX_DEFAULT
# 27 "data/maps/ParcelCoastUnion/scripts.pory"
	release
	end


ParcelCoastUnion_Board::
# 31 "data/maps/ParcelCoastUnion/scripts.pory"
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
# 19 "data/maps/ParcelCoastUnion/scripts.pory"
	.string "FISHER: HARLAND came down from the\n"
	.string "river to fish the coast because the\l"
	.string "river was done. Now the coast's done.\l"
	.string "There's nowhere further down.$"

ParcelCoastUnion_Fisher2_Text_0:
# 26 "data/maps/ParcelCoastUnion/scripts.pory"
	.string "FISHER: The Board's model says the\n"
	.string "stock recovers in six years if we hold\l"
	.string "the quota. It said that six years ago.$"

ParcelCoastUnion_Board_Text_0:
# 31 "data/maps/ParcelCoastUnion/scripts.pory"
	.string "MINUTES. Motion to request an\n"
	.string "independent stock survey: proposed,\l"
	.string "seconded, deferred. Deferred. Deferred.\l"
	.string "Deferred. Four years of the same line.$"
