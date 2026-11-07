ParcelCoastHouse1_MapScripts::
	.byte 0


ParcelCoastHouse1_Woman::
# 4 "data/maps/ParcelCoastHouse1/scripts.pory"
	lock
# 5 "data/maps/ParcelCoastHouse1/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Woman_Text_0, MSGBOX_DEFAULT
# 7 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end


ParcelCoastHouse1_Boy::
# 11 "data/maps/ParcelCoastHouse1/scripts.pory"
	lock
# 12 "data/maps/ParcelCoastHouse1/scripts.pory"
	faceplayer
# 13 "data/maps/ParcelCoastHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHELL_DONE, ParcelCoastHouse1_Boy_2
# 18 "data/maps/ParcelCoastHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHELL_FOUND, ParcelCoastHouse1_Boy_5
# 25 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Boy_Text_2, MSGBOX_DEFAULT
# 26 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end

ParcelCoastHouse1_Boy_2:
# 14 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Boy_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end

ParcelCoastHouse1_Boy_5:
# 19 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Boy_Text_1, MSGBOX_DEFAULT
# 20 "data/maps/ParcelCoastHouse1/scripts.pory"
	giveitem ITEM_DIVE_BALL, 3
# 21 "data/maps/ParcelCoastHouse1/scripts.pory"
	setflag FLAG_SKALD_Q_SHELL_DONE
# 22 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end


ParcelCoastHouse1_Woman_Text_0:
# 6 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "WOMAN: My husband's on the cannery\n"
	.string "line, my son's on the boats, my\l"
	.string "daughter's at the FOUNDATION desk.\l"
	.string "Three wages, one crest. If it goes, we\l"
	.string "go with it. That's not loyalty. That's\l"
	.string "arithmetic.$"

ParcelCoastHouse1_Boy_Text_0:
# 14 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "BOY: It's on the windowsill. Mum says\n"
	.string "it's the first real one in years. I'm\l"
	.string "going to find the second one myself.$"

ParcelCoastHouse1_Boy_Text_1:
# 19 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "BOY: A SHELL! A real one! Whole! Mum,\n"
	.string "LOOK!\p"
	.string "You can have these. They're for divers.\n"
	.string "I'm not one yet. You can give them back\l"
	.string "when I am.$"

ParcelCoastHouse1_Boy_Text_2:
# 25 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "BOY: I'm going to be a diver! GYDA says\n"
	.string "there's nothing down there to see. I'll\l"
	.string "see it anyway.\p"
	.string "I've never found a shell on our beach.\n"
	.string "Not one. Just drum rings. If you find\l"
	.string "one, that's proof there's something.$"
