ParcelHighlandsHouse1_MapScripts::
	.byte 0


ParcelHighlandsHouse1_Man::
# 7 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	lock
# 8 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsHouse1_Man_2
# 14 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Man_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Man_2:
# 10 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Man_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end


ParcelHighlandsHouse1_Girl::
# 20 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	lock
# 21 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsHouse1_Girl_2
# 27 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Girl_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Girl_2:
# 23 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Girl_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end


ParcelHighlandsHouse1_Man_Text_0:
# 10 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "MAN: The leases are enjoined. The slope\n"
	.string "doesn't know. It'll keep moving at its\l"
	.string "own speed. So will I.$"

ParcelHighlandsHouse1_Man_Text_1:
# 14 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "MAN: Sheep on the high ground until the\n"
	.string "ground stopped being ground. Now they\l"
	.string "graze the lower slope and I watch the\l"
	.string "upper one move.$"

ParcelHighlandsHouse1_Girl_Text_0:
# 23 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "GIRL: Grandad went to the warming\n"
	.string "centre. He had the cocoa. He said it was\l"
	.string "good, and then he was quiet for a long\l"
	.string "time.$"

ParcelHighlandsHouse1_Girl_Text_1:
# 27 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "GIRL: The warming centre has cocoa.\n"
	.string "HOLLIS said we could have as much as we\l"
	.string "liked. Grandad said nothing's as much as\l"
	.string "you like.$"
