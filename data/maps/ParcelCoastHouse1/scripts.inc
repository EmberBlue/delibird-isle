ParcelCoastHouse1_MapScripts::
	.byte 0


ParcelCoastHouse1_Woman::
# 4 "data/maps/ParcelCoastHouse1/scripts.pory"
	lock
# 5 "data/maps/ParcelCoastHouse1/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelCoastHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse1_Woman_2
# 11 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Woman_Text_1, MSGBOX_DEFAULT
# 12 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end

ParcelCoastHouse1_Woman_2:
# 7 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Woman_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end


ParcelCoastHouse1_Boy::
# 16 "data/maps/ParcelCoastHouse1/scripts.pory"
	lock
# 17 "data/maps/ParcelCoastHouse1/scripts.pory"
	faceplayer
# 18 "data/maps/ParcelCoastHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse1_Boy_2
# 23 "data/maps/ParcelCoastHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHELL_DONE, ParcelCoastHouse1_Boy_5
# 28 "data/maps/ParcelCoastHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHELL_FOUND, ParcelCoastHouse1_Boy_8
# 35 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Boy_Text_3, MSGBOX_DEFAULT
# 36 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end

ParcelCoastHouse1_Boy_2:
# 19 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Boy_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end

ParcelCoastHouse1_Boy_5:
# 24 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Boy_Text_1, MSGBOX_DEFAULT
# 25 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end

ParcelCoastHouse1_Boy_8:
# 29 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Boy_Text_2, MSGBOX_DEFAULT
# 30 "data/maps/ParcelCoastHouse1/scripts.pory"
	giveitem ITEM_DIVE_BALL, 3
# 31 "data/maps/ParcelCoastHouse1/scripts.pory"
	setflag FLAG_SKALD_Q_SHELL_DONE
# 32 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end


ParcelCoastHouse1_Woman_Text_0:
# 7 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "WOMAN: Husband on half days, son's boat\n"
	.string "grounded to spring, daughter still at\l"
	.string "the FOUNDATION desk typing the review.\l"
	.string "Three wages, one cramped house, and the\l"
	.string "first dinner in years where nobody\l"
	.string "talked about fish.$"

ParcelCoastHouse1_Woman_Text_1:
# 11 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "WOMAN: My husband's on the cannery\n"
	.string "line, my son's on the boats, my\l"
	.string "daughter's at the FOUNDATION desk.\l"
	.string "Three wages, one crest. If it goes, we\l"
	.string "go with it. That's not loyalty. That's\l"
	.string "arithmetic.$"

ParcelCoastHouse1_Boy_Text_0:
# 19 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "BOY: GYDA says the water's clearer off\n"
	.string "the breakwater. I'm going to dive it\l"
	.string "when I'm old enough. Mum says that's the\l"
	.string "first thing I've said that she can plan\l"
	.string "for.$"

ParcelCoastHouse1_Boy_Text_1:
# 24 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "BOY: It's on the windowsill. Mum says\n"
	.string "it's the first real one in years. I'm\l"
	.string "going to find the second one myself.$"

ParcelCoastHouse1_Boy_Text_2:
# 29 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "BOY: A SHELL! A real one! Whole! Mum,\n"
	.string "LOOK!\p"
	.string "You can have these. They're for divers.\n"
	.string "I'm not one yet. You can give them back\l"
	.string "when I am.$"

ParcelCoastHouse1_Boy_Text_3:
# 35 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "BOY: I'm going to be a diver! GYDA says\n"
	.string "there's nothing down there to see. I'll\l"
	.string "see it anyway.\p"
	.string "I've never found a shell on our beach.\n"
	.string "Not one. Just drum rings. If you find\l"
	.string "one, that's proof there's something.$"
