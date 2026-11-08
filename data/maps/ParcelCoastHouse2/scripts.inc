ParcelCoastHouse2_MapScripts::
	.byte 0


ParcelCoastHouse2_Skipper::
# 4 "data/maps/ParcelCoastHouse2/scripts.pory"
	lock
# 5 "data/maps/ParcelCoastHouse2/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelCoastHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse2_Skipper_2
# 11 "data/maps/ParcelCoastHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHouse2_Skipper_5
# 16 "data/maps/ParcelCoastHouse2/scripts.pory"
	msgbox ParcelCoastHouse2_Skipper_Text_2, MSGBOX_DEFAULT
# 17 "data/maps/ParcelCoastHouse2/scripts.pory"
	release
	end

ParcelCoastHouse2_Skipper_2:
# 7 "data/maps/ParcelCoastHouse2/scripts.pory"
	msgbox ParcelCoastHouse2_Skipper_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelCoastHouse2/scripts.pory"
	release
	end

ParcelCoastHouse2_Skipper_5:
# 12 "data/maps/ParcelCoastHouse2/scripts.pory"
	msgbox ParcelCoastHouse2_Skipper_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelCoastHouse2/scripts.pory"
	release
	end


ParcelCoastHouse2_Wife::
# 21 "data/maps/ParcelCoastHouse2/scripts.pory"
	lock
# 22 "data/maps/ParcelCoastHouse2/scripts.pory"
	faceplayer
# 23 "data/maps/ParcelCoastHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse2_Wife_2
# 28 "data/maps/ParcelCoastHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHouse2_Wife_5
# 33 "data/maps/ParcelCoastHouse2/scripts.pory"
	msgbox ParcelCoastHouse2_Wife_Text_2, MSGBOX_DEFAULT
# 34 "data/maps/ParcelCoastHouse2/scripts.pory"
	release
	end

ParcelCoastHouse2_Wife_2:
# 24 "data/maps/ParcelCoastHouse2/scripts.pory"
	msgbox ParcelCoastHouse2_Wife_Text_0, MSGBOX_DEFAULT
# 25 "data/maps/ParcelCoastHouse2/scripts.pory"
	release
	end

ParcelCoastHouse2_Wife_5:
# 29 "data/maps/ParcelCoastHouse2/scripts.pory"
	msgbox ParcelCoastHouse2_Wife_Text_1, MSGBOX_DEFAULT
# 30 "data/maps/ParcelCoastHouse2/scripts.pory"
	release
	end


ParcelCoastHouse2_Skipper_Text_0:
# 7 "data/maps/ParcelCoastHouse2/scripts.pory"
	.string "SKIPPER: Sold the boat the year the\n"
	.string "dredge came. The lending company's got\l"
	.string "forty boats tied up now and no quota to\l"
	.string "run them. I sat in my window and didn't\l"
	.string "gloat. Much.$"

ParcelCoastHouse2_Skipper_Text_1:
# 12 "data/maps/ParcelCoastHouse2/scripts.pory"
	.string "SKIPPER: Sold the boat the year the\n"
	.string "dredge came. Took the money. Today\l"
	.string "HARLAND lost on his own quay to a\l"
	.string "ranger and shook hands after, and I\l"
	.string "thought: that's what a man does who\l"
	.string "still has a boat to stand on.\p"
	.string "Best decision I ever made. I still\n"
	.string "haven't forgiven it.$"

ParcelCoastHouse2_Skipper_Text_2:
# 16 "data/maps/ParcelCoastHouse2/scripts.pory"
	.string "SKIPPER: Sold the boat to the lending\n"
	.string "company the year the dredge came. Took\l"
	.string "the money. Bought this house. Best\l"
	.string "decision I ever made and I've never\l"
	.string "forgiven myself for it.$"

ParcelCoastHouse2_Wife_Text_0:
# 24 "data/maps/ParcelCoastHouse2/scripts.pory"
	.string "WIFE: He went down to the union hall.\n"
	.string "First time in six years he's gone\l"
	.string "anywhere but the window. Came back with\l"
	.string "ink on his fingers. He'd signed\l"
	.string "something. He wouldn't say what.$"

ParcelCoastHouse2_Wife_Text_1:
# 29 "data/maps/ParcelCoastHouse2/scripts.pory"
	.string "WIFE: He watched the boats go out this\n"
	.string "morning, and then he watched a ranger\l"
	.string "walk off the quay with HARLAND's badge.\p"
	.string "He said 'good'. Just that. Forty years\n"
	.string "out, and the first 'good' I've heard from\l"
	.string "the window.$"

ParcelCoastHouse2_Wife_Text_2:
# 33 "data/maps/ParcelCoastHouse2/scripts.pory"
	.string "WIFE: He stands at the window and\n"
	.string "watches the boats go out. Forty years\l"
	.string "he went out. Now he watches. Watching's\l"
	.string "harder, he says.$"
