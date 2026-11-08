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
	msgbox ParcelCoastHouse2_Skipper_Text_1, MSGBOX_DEFAULT
# 12 "data/maps/ParcelCoastHouse2/scripts.pory"
	release
	end

ParcelCoastHouse2_Skipper_2:
# 7 "data/maps/ParcelCoastHouse2/scripts.pory"
	msgbox ParcelCoastHouse2_Skipper_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelCoastHouse2/scripts.pory"
	release
	end


ParcelCoastHouse2_Wife::
# 16 "data/maps/ParcelCoastHouse2/scripts.pory"
	lock
# 17 "data/maps/ParcelCoastHouse2/scripts.pory"
	faceplayer
# 18 "data/maps/ParcelCoastHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse2_Wife_2
# 23 "data/maps/ParcelCoastHouse2/scripts.pory"
	msgbox ParcelCoastHouse2_Wife_Text_1, MSGBOX_DEFAULT
# 24 "data/maps/ParcelCoastHouse2/scripts.pory"
	release
	end

ParcelCoastHouse2_Wife_2:
# 19 "data/maps/ParcelCoastHouse2/scripts.pory"
	msgbox ParcelCoastHouse2_Wife_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/ParcelCoastHouse2/scripts.pory"
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
# 11 "data/maps/ParcelCoastHouse2/scripts.pory"
	.string "SKIPPER: Sold the boat to the lending\n"
	.string "company the year the dredge came. Took\l"
	.string "the money. Bought this house. Best\l"
	.string "decision I ever made and I've never\l"
	.string "forgiven myself for it.$"

ParcelCoastHouse2_Wife_Text_0:
# 19 "data/maps/ParcelCoastHouse2/scripts.pory"
	.string "WIFE: He went down to the union hall.\n"
	.string "First time in six years he's gone\l"
	.string "anywhere but the window. Came back with\l"
	.string "ink on his fingers. He'd signed\l"
	.string "something. He wouldn't say what.$"

ParcelCoastHouse2_Wife_Text_1:
# 23 "data/maps/ParcelCoastHouse2/scripts.pory"
	.string "WIFE: He stands at the window and\n"
	.string "watches the boats go out. Forty years\l"
	.string "he went out. Now he watches. Watching's\l"
	.string "harder, he says.$"
