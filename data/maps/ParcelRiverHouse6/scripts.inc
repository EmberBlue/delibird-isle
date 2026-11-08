ParcelRiverHouse6_MapScripts::
	.byte 0


ParcelRiverHouse6_Man::
# 7 "data/maps/ParcelRiverHouse6/scripts.pory"
	lock
# 8 "data/maps/ParcelRiverHouse6/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelRiverHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse6_Man_2
# 14 "data/maps/ParcelRiverHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHouse6_Man_5
# 19 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Man_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end

ParcelRiverHouse6_Man_2:
# 10 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Man_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end

ParcelRiverHouse6_Man_5:
# 15 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Man_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end


ParcelRiverHouse6_Girl::
# 25 "data/maps/ParcelRiverHouse6/scripts.pory"
	lock
# 26 "data/maps/ParcelRiverHouse6/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelRiverHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse6_Girl_2
# 32 "data/maps/ParcelRiverHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHouse6_Girl_5
# 37 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Girl_Text_2, MSGBOX_DEFAULT
# 38 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end

ParcelRiverHouse6_Girl_2:
# 28 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Girl_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end

ParcelRiverHouse6_Girl_5:
# 33 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Girl_Text_1, MSGBOX_DEFAULT
# 34 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end


ParcelRiverHouse6_Man_Text_0:
# 10 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "MAN: SLUICE had me re-read every gauge\n"
	.string "on the spine after the hearing. Same\l"
	.string "numbers. She wanted them in my hand,\l"
	.string "not the Board's.$"

ParcelRiverHouse6_Man_Text_1:
# 15 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "MAN: Readings are up, all fourteen\n"
	.string "plots. The Board wrote 'seasonal'. I\l"
	.string "wrote 'meltwater, HAUKFELL'. The Board\l"
	.string "reads what I write, then writes over it.\p"
	.string "I've started keeping the first sheet.\n"
	.string "SLUICE's idea. She's full of them.$"

ParcelRiverHouse6_Man_Text_2:
# 19 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "MAN: Meter reader for the WATER BOARD.\n"
	.string "I read what the river does. The Board\l"
	.string "reads what I write. Different things,\l"
	.string "sometimes.$"

ParcelRiverHouse6_Girl_Text_0:
# 28 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "GIRL: The river's budget got bigger!\n"
	.string "Dad says it's not money. I said I know,\l"
	.string "Dad.$"

ParcelRiverHouse6_Girl_Text_1:
# 33 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "GIRL: Dad says the mountain's spending\n"
	.string "the river's budget. I said that's\l"
	.string "stealing. He said it's accounting. I said\l"
	.string "that's the same thing. He laughed, but\l"
	.string "not the good laugh.$"

ParcelRiverHouse6_Girl_Text_2:
# 37 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "GIRL: Dad says the river has a budget. I\n"
	.string "said rivers don't have money. He said\l"
	.string "that's the problem.$"
