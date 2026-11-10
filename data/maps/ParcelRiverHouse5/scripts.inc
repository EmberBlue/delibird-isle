ParcelRiverHouse5_MapScripts::
	.byte 0


ParcelRiverHouse5_OldMan::
# 7 "data/maps/ParcelRiverHouse5/scripts.pory"
	lock
# 8 "data/maps/ParcelRiverHouse5/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelRiverHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverHouse5_OldMan_2
# 14 "data/maps/ParcelRiverHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse5_OldMan_5
# 19 "data/maps/ParcelRiverHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHouse5_OldMan_8
# 24 "data/maps/ParcelRiverHouse5/scripts.pory"
	msgbox ParcelRiverHouse5_OldMan_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/ParcelRiverHouse5/scripts.pory"
	release
	end

ParcelRiverHouse5_OldMan_2:
# 10 "data/maps/ParcelRiverHouse5/scripts.pory"
	msgbox ParcelRiverHouse5_OldMan_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelRiverHouse5/scripts.pory"
	release
	end

ParcelRiverHouse5_OldMan_5:
# 15 "data/maps/ParcelRiverHouse5/scripts.pory"
	msgbox ParcelRiverHouse5_OldMan_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelRiverHouse5/scripts.pory"
	release
	end

ParcelRiverHouse5_OldMan_8:
# 20 "data/maps/ParcelRiverHouse5/scripts.pory"
	msgbox ParcelRiverHouse5_OldMan_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/ParcelRiverHouse5/scripts.pory"
	release
	end


ParcelRiverHouse5_OldWoman::
# 30 "data/maps/ParcelRiverHouse5/scripts.pory"
	lock
# 31 "data/maps/ParcelRiverHouse5/scripts.pory"
	faceplayer
# 32 "data/maps/ParcelRiverHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverHouse5_OldWoman_2
# 37 "data/maps/ParcelRiverHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse5_OldWoman_5
# 42 "data/maps/ParcelRiverHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHouse5_OldWoman_8
# 47 "data/maps/ParcelRiverHouse5/scripts.pory"
	msgbox ParcelRiverHouse5_OldWoman_Text_3, MSGBOX_DEFAULT
# 48 "data/maps/ParcelRiverHouse5/scripts.pory"
	release
	end

ParcelRiverHouse5_OldWoman_2:
# 33 "data/maps/ParcelRiverHouse5/scripts.pory"
	msgbox ParcelRiverHouse5_OldWoman_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelRiverHouse5/scripts.pory"
	release
	end

ParcelRiverHouse5_OldWoman_5:
# 38 "data/maps/ParcelRiverHouse5/scripts.pory"
	msgbox ParcelRiverHouse5_OldWoman_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/ParcelRiverHouse5/scripts.pory"
	release
	end

ParcelRiverHouse5_OldWoman_8:
# 43 "data/maps/ParcelRiverHouse5/scripts.pory"
	msgbox ParcelRiverHouse5_OldWoman_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/ParcelRiverHouse5/scripts.pory"
	release
	end


ParcelRiverHouse5_ReadDresser::
# 53 "data/maps/ParcelRiverHouse5/scripts.pory"
	msgbox ParcelRiverHouse5_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelRiverHouse5_ReadDrawer::
# 58 "data/maps/ParcelRiverHouse5/scripts.pory"
	msgbox ParcelRiverHouse5_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelRiverHouse5_OldMan_Text_0:
# 10 "data/maps/ParcelRiverHouse5/scripts.pory"
	.string "OLD MAN: The race ran all spring. The\n"
	.string "wheel turned. I ground a sack of flour\l"
	.string "on it and the baker said it was fine\l"
	.string "flour, and I said it was forty years of\l"
	.string "flour.\p"
	.string "He gave it back. Said it was too good to\n"
	.string "sell.$"

ParcelRiverHouse5_OldMan_Text_1:
# 15 "data/maps/ParcelRiverHouse5/scripts.pory"
	.string "OLD MAN: The allocation gives the race\n"
	.string "a trickle in spring. A trickle turns a\l"
	.string "wheel if you've the patience. I've the\l"
	.string "patience.$"

ParcelRiverHouse5_OldMan_Text_2:
# 20 "data/maps/ParcelRiverHouse5/scripts.pory"
	.string "OLD MAN: They say the ground up at\n"
	.string "HAUKFELL lets go in the spring the way\l"
	.string "the race let go of its water. No noise.\l"
	.string "Just gone one morning.\p"
	.string "I oil a wheel that doesn't turn. Those\n"
	.string "people oil a house that moves. We should\l"
	.string "talk.$"

ParcelRiverHouse5_OldMan_Text_3:
# 24 "data/maps/ParcelRiverHouse5/scripts.pory"
	.string "OLD MAN: I ran the mill until the race\n"
	.string "went dry. The wood's still there. The\l"
	.string "race is still there. The water isn't.$"

ParcelRiverHouse5_OldWoman_Text_0:
# 33 "data/maps/ParcelRiverHouse5/scripts.pory"
	.string "OLD WOMAN: Two lunches, every day. Him\n"
	.string "and the HAUKFELL man. They sit by the\l"
	.string "race and watch it run and don't say a\l"
	.string "word.\p"
	.string "Men. I'd want to say something.$"

ParcelRiverHouse5_OldWoman_Text_1:
# 38 "data/maps/ParcelRiverHouse5/scripts.pory"
	.string "OLD WOMAN: He came back from the mill\n"
	.string "wet to the knee and grinning. The race\l"
	.string "ran an hour. One hour, in forty years of\l"
	.string "waiting.$"

ParcelRiverHouse5_OldWoman_Text_2:
# 43 "data/maps/ParcelRiverHouse5/scripts.pory"
	.string "OLD WOMAN: I packed him two lunches\n"
	.string "today. One for the mill, one for the man\l"
	.string "from HAUKFELL who sits by the dry race\l"
	.string "and doesn't say anything.\p"
	.string "My husband doesn't say anything either.\n"
	.string "They get on.$"

ParcelRiverHouse5_OldWoman_Text_3:
# 47 "data/maps/ParcelRiverHouse5/scripts.pory"
	.string "OLD WOMAN: My husband walks to the mill\n"
	.string "every morning to oil a wheel that\l"
	.string "doesn't turn. I pack him a lunch. It's a\l"
	.string "marriage.$"

ParcelRiverHouse5_ReadDresser_Text_0:
# 53 "data/maps/ParcelRiverHouse5/scripts.pory"
	.string "A mill key on the dresser, oiled. The lock\n"
	.string "it fits has not been turned in years.\l"
	.string "The key has.$"

ParcelRiverHouse5_ReadDrawer_Text_0:
# 58 "data/maps/ParcelRiverHouse5/scripts.pory"
	.string "Two lunch tins in the drawer. One has\n"
	.string "been in use for forty years. The other\l"
	.string "is new.$"
