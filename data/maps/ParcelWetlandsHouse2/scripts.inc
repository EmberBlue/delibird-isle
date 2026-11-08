ParcelWetlandsHouse2_MapScripts::
	.byte 0


ParcelWetlandsHouse2_OldMan::
# 7 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	lock
# 8 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse2_OldMan_2
# 14 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsHouse2_OldMan_5
# 19 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_2:
# 10 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_5:
# 15 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end


ParcelWetlandsHouse2_Boy::
# 25 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	lock
# 26 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse2_Boy_2
# 32 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsHouse2_Boy_5
# 37 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_Boy_Text_2, MSGBOX_DEFAULT
# 38 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_Boy_2:
# 28 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_Boy_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_Boy_5:
# 33 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_Boy_Text_1, MSGBOX_DEFAULT
# 34 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end


ParcelWetlandsHouse2_OldMan_Text_0:
# 10 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: GUNNAR's SURSKIT count went\n"
	.string "up this month. First time. He told\l"
	.string "everyone. He told me twice.$"

ParcelWetlandsHouse2_OldMan_Text_1:
# 15 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: The reeds came back at eight\n"
	.string "years this time. Not twelve. I wrote\l"
	.string "eight down and sent it to the river hall,\l"
	.string "because somebody said they were\l"
	.string "collecting.\p"
	.string "Sixty years cutting reed and I've never\n"
	.string "sent a number anywhere. It felt like\l"
	.string "posting a letter to the weather.$"

ParcelWetlandsHouse2_OldMan_Text_2:
# 19 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: I cut reed for thatch.\n"
	.string "Twelve-year rounds, like the mill wood.\l"
	.string "The reeds don't come back on the twelve\l"
	.string "now. Eight, maybe.$"

ParcelWetlandsHouse2_Boy_Text_0:
# 28 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "BOY: Forty-nine! I'm the clicker now.\n"
	.string "GUNNAR says I'm 'very accurate'.$"

ParcelWetlandsHouse2_Boy_Text_1:
# 33 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "BOY: GUNNAR says the river people\n"
	.string "counted their frogs in front of\l"
	.string "everybody. With a clicker, like ours!\p"
	.string "Forty-four. I'm going to count again\n"
	.string "when the water's colder. GUNNAR says\l"
	.string "colder is when it matters.$"

ParcelWetlandsHouse2_Boy_Text_2:
# 37 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "BOY: I helped GUNNAR count. He let me\n"
	.string "hold the clicker. Forty-four!$"
