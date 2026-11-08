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
	msgbox ParcelRiverHouse6_Man_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end

ParcelRiverHouse6_Man_2:
# 10 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Man_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end


ParcelRiverHouse6_Girl::
# 20 "data/maps/ParcelRiverHouse6/scripts.pory"
	lock
# 21 "data/maps/ParcelRiverHouse6/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelRiverHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse6_Girl_2
# 27 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Girl_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end

ParcelRiverHouse6_Girl_2:
# 23 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Girl_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end


ParcelRiverHouse6_Man_Text_0:
# 10 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "MAN: SLUICE had me re-read every gauge\n"
	.string "on the spine after the hearing. Same\l"
	.string "numbers. She wanted them in my hand,\l"
	.string "not the Board's.$"

ParcelRiverHouse6_Man_Text_1:
# 14 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "MAN: Meter reader for the WATER BOARD.\n"
	.string "I read what the river does. The Board\l"
	.string "reads what I write. Different things,\l"
	.string "sometimes.$"

ParcelRiverHouse6_Girl_Text_0:
# 23 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "GIRL: The river's budget got bigger!\n"
	.string "Dad says it's not money. I said I know,\l"
	.string "Dad.$"

ParcelRiverHouse6_Girl_Text_1:
# 27 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "GIRL: Dad says the river has a budget. I\n"
	.string "said rivers don't have money. He said\l"
	.string "that's the problem.$"
