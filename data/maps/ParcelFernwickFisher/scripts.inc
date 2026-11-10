ParcelFernwickFisher_MapScripts::
	.byte 0


ParcelFernwickFisher_OldMan::
# 5 "data/maps/ParcelFernwickFisher/scripts.pory"
	lock
# 6 "data/maps/ParcelFernwickFisher/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFernwickFisher/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickFisher_OldMan_2
# 12 "data/maps/ParcelFernwickFisher/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GRETTIR_DONE, ParcelFernwickFisher_OldMan_5
# 17 "data/maps/ParcelFernwickFisher/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GRETTIR_SEEN, ParcelFernwickFisher_OldMan_8
# 24 "data/maps/ParcelFernwickFisher/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GRETTIR, ParcelFernwickFisher_OldMan_11
# 29 "data/maps/ParcelFernwickFisher/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_DONE, ParcelFernwickFisher_OldMan_14
# 32 "data/maps/ParcelFernwickFisher/scripts.pory"
	msgbox ParcelFernwickFisher_OldMan_Text_5, MSGBOX_DEFAULT
ParcelFernwickFisher_OldMan_13:
# 34 "data/maps/ParcelFernwickFisher/scripts.pory"
	msgbox ParcelFernwickFisher_OldMan_Text_6, MSGBOX_DEFAULT
# 35 "data/maps/ParcelFernwickFisher/scripts.pory"
	setflag FLAG_SKALD_Q_GRETTIR
# 36 "data/maps/ParcelFernwickFisher/scripts.pory"
	release
	end

ParcelFernwickFisher_OldMan_2:
# 8 "data/maps/ParcelFernwickFisher/scripts.pory"
	msgbox ParcelFernwickFisher_OldMan_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelFernwickFisher/scripts.pory"
	release
	end

ParcelFernwickFisher_OldMan_5:
# 13 "data/maps/ParcelFernwickFisher/scripts.pory"
	msgbox ParcelFernwickFisher_OldMan_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ParcelFernwickFisher/scripts.pory"
	release
	end

ParcelFernwickFisher_OldMan_8:
# 18 "data/maps/ParcelFernwickFisher/scripts.pory"
	msgbox ParcelFernwickFisher_OldMan_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/ParcelFernwickFisher/scripts.pory"
	giveitem ITEM_NET_BALL, 5
# 20 "data/maps/ParcelFernwickFisher/scripts.pory"
	setflag FLAG_SKALD_Q_GRETTIR_DONE
# 21 "data/maps/ParcelFernwickFisher/scripts.pory"
	release
	end

ParcelFernwickFisher_OldMan_11:
# 25 "data/maps/ParcelFernwickFisher/scripts.pory"
	msgbox ParcelFernwickFisher_OldMan_Text_3, MSGBOX_DEFAULT
# 26 "data/maps/ParcelFernwickFisher/scripts.pory"
	release
	end

ParcelFernwickFisher_OldMan_14:
# 30 "data/maps/ParcelFernwickFisher/scripts.pory"
	msgbox ParcelFernwickFisher_OldMan_Text_4, MSGBOX_DEFAULT
	goto ParcelFernwickFisher_OldMan_13


ParcelFernwickFisher_TideTable::
# 43 "data/maps/ParcelFernwickFisher/scripts.pory"
	msgbox ParcelFernwickFisher_TideTable_Text_0, MSGBOX_SIGN
	return


ParcelFernwickFisher_OldMan_Text_0:
# 8 "data/maps/ParcelFernwickFisher/scripts.pory"
	.string "GRETTIR: A POLIWAG. In the CORPS pond.\n"
	.string "One. I've told nobody but you and the\l"
	.string "girl who watches me. That's how it\l"
	.string "starts. That's always how it starts.$"

ParcelFernwickFisher_OldMan_Text_1:
# 13 "data/maps/ParcelFernwickFisher/scripts.pory"
	.string "GRETTIR: One SURSKIT. On a pond the\n"
	.string "CORPS dug last spring. That's how it\l"
	.string "starts. That's always how it starts.$"

ParcelFernwickFisher_OldMan_Text_2:
# 18 "data/maps/ParcelFernwickFisher/scripts.pory"
	.string "GRETTIR: Well? …A SURSKIT. On the new\n"
	.string "pond. On its own.\p"
	.string "Huh. Take these. I'd stocked them for\n"
	.string "nothing worth catching. Now there might\l"
	.string "be.$"

ParcelFernwickFisher_OldMan_Text_3:
# 25 "data/maps/ParcelFernwickFisher/scripts.pory"
	.string "GRETTIR: The park pond. Go and look.\n"
	.string "Properly, at the water, not at the\l"
	.string "bench. Then tell me.$"

ParcelFernwickFisher_OldMan_Text_4:
# 30 "data/maps/ParcelFernwickFisher/scripts.pory"
	.string "GRETTIR: That's TOBIN's old rod! He lent\n"
	.string "it to you? Then you're the first. Bait's\l"
	.string "on the shelf. Advice is free.\p"
	.string "Don't wade past the second stake. The\n"
	.string "marsh doesn't give things back.$"

ParcelFernwickFisher_OldMan_Text_5:
# 32 "data/maps/ParcelFernwickFisher/scripts.pory"
	.string "GRETTIR: Rods, bait, marsh advice. The\n"
	.string "advice is free: don't wade past the\l"
	.string "second stake.\p"
	.string "The marsh doesn't give things back.$"

ParcelFernwickFisher_OldMan_Text_6:
# 34 "data/maps/ParcelFernwickFisher/scripts.pory"
	.string "GRETTIR: The CORPS dug a pond in the\n"
	.string "park. 'Habitat.' A hole with water in it,\l"
	.string "is what it is.\p"
	.string "Go and look at it for me. Properly. Tell\n"
	.string "me if anything's found it on its own.\l"
	.string "Nothing has, I'll bet you.$"

ParcelFernwickFisher_TideTable_Text_0:
# 43 "data/maps/ParcelFernwickFisher/scripts.pory"
	.string "A tide table nailed to the wall, this\n"
	.string "year's, with the old man's marks on it.\p"
	.string "The springs and the neaps in print. In\n"
	.string "pencil beside them: HIGH, in a shaky\l"
	.string "capital, on nine days that the table\l"
	.string "calls ordinary.\p"
	.string "The nine days are all in the same month.\n"
	.string "The month the basin flooded. The water\l"
	.string "that came down the river that month\l"
	.string "went out to sea past this door, and the\l"
	.string "table did not know.$"
