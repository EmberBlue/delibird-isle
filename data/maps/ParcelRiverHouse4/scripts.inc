ParcelRiverHouse4_MapScripts::
	.byte 0


ParcelRiverHouse4_Woman::
# 7 "data/maps/ParcelRiverHouse4/scripts.pory"
	lock
# 8 "data/maps/ParcelRiverHouse4/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelRiverHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse4_Woman_2
# 14 "data/maps/ParcelRiverHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHouse4_Woman_5
# 19 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Woman_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end

ParcelRiverHouse4_Woman_2:
# 10 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Woman_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end

ParcelRiverHouse4_Woman_5:
# 15 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Woman_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end


ParcelRiverHouse4_Boy::
# 25 "data/maps/ParcelRiverHouse4/scripts.pory"
	lock
# 26 "data/maps/ParcelRiverHouse4/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelRiverHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse4_Boy_2
# 32 "data/maps/ParcelRiverHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHouse4_Boy_5
# 37 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Boy_Text_2, MSGBOX_DEFAULT
# 38 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end

ParcelRiverHouse4_Boy_2:
# 28 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Boy_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end

ParcelRiverHouse4_Boy_5:
# 33 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Boy_Text_1, MSGBOX_DEFAULT
# 34 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end


ParcelRiverHouse4_Woman_Text_0:
# 10 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "WOMAN: The Board posted the\n"
	.string "allocations with six names under them. I\l"
	.string "read mine twice. It's fair. First time\l"
	.string "I've written 'fair' on a form.$"

ParcelRiverHouse4_Woman_Text_1:
# 15 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "WOMAN: Fish on market day, vegetables\n"
	.string "the rest, and now blankets with a crest\l"
	.string "from a van. The Board meters the water\l"
	.string "and the FOUNDATION hands out the wool.\p"
	.string "I took a blanket. It's a good blanket. I\n"
	.string "know what I took it with.$"

ParcelRiverHouse4_Woman_Text_2:
# 19 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "WOMAN: Fish on market day, vegetables\n"
	.string "the rest. The river gives both and the\l"
	.string "Board meters both.$"

ParcelRiverHouse4_Boy_Text_0:
# 28 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "BOY: Nineteen stalls today! I counted\n"
	.string "twice, like the ranger does.$"

ParcelRiverHouse4_Boy_Text_1:
# 33 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "BOY: Fourteen stalls this spring, and\n"
	.string "now nineteen, because the hill people\l"
	.string "set up on the end with nothing on the\l"
	.string "table.\p"
	.string "I count them anyway. Mum says an empty\n"
	.string "stall still counts. I don't know. I\l"
	.string "counted it.$"

ParcelRiverHouse4_Boy_Text_2:
# 37 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "BOY: I count the stalls. Twenty-two on\n"
	.string "a good day. Fourteen this spring.$"
