ParcelRiverHouse2_MapScripts::
	.byte 0


ParcelRiverHouse2_Woman::
# 4 "data/maps/ParcelRiverHouse2/scripts.pory"
	lock
# 5 "data/maps/ParcelRiverHouse2/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelRiverHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse2_Woman_2
# 11 "data/maps/ParcelRiverHouse2/scripts.pory"
	msgbox ParcelRiverHouse2_Woman_Text_1, MSGBOX_DEFAULT
# 12 "data/maps/ParcelRiverHouse2/scripts.pory"
	release
	end

ParcelRiverHouse2_Woman_2:
# 7 "data/maps/ParcelRiverHouse2/scripts.pory"
	msgbox ParcelRiverHouse2_Woman_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelRiverHouse2/scripts.pory"
	release
	end


ParcelRiverHouse2_Girl::
# 16 "data/maps/ParcelRiverHouse2/scripts.pory"
	lock
# 17 "data/maps/ParcelRiverHouse2/scripts.pory"
	faceplayer
# 18 "data/maps/ParcelRiverHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse2_Girl_2
# 23 "data/maps/ParcelRiverHouse2/scripts.pory"
	msgbox ParcelRiverHouse2_Girl_Text_1, MSGBOX_DEFAULT
# 24 "data/maps/ParcelRiverHouse2/scripts.pory"
	release
	end

ParcelRiverHouse2_Girl_2:
# 19 "data/maps/ParcelRiverHouse2/scripts.pory"
	msgbox ParcelRiverHouse2_Girl_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/ParcelRiverHouse2/scripts.pory"
	release
	end


ParcelRiverHouse2_Woman_Text_0:
# 7 "data/maps/ParcelRiverHouse2/scripts.pory"
	.string "WOMAN: My husband reads the meters for\n"
	.string "the Board. He read them to the hearing.\l"
	.string "Out loud. Fourteen plots. His voice held.\l"
	.string "I was proud, and I was frightened, and\l"
	.string "the pay's still steady.$"

ParcelRiverHouse2_Woman_Text_1:
# 11 "data/maps/ParcelRiverHouse2/scripts.pory"
	.string "WOMAN: My husband reads the meters for\n"
	.string "the Board. Good wage. Steady. I don't\l"
	.string "ask what the readings say. He doesn't\l"
	.string "tell me. That's a marriage.$"

ParcelRiverHouse2_Girl_Text_0:
# 19 "data/maps/ParcelRiverHouse2/scripts.pory"
	.string "GIRL: Dad read the river's ledger to a\n"
	.string "room full of people. I went. It's still\l"
	.string "not a book. It was a book for one\l"
	.string "afternoon.$"

ParcelRiverHouse2_Girl_Text_1:
# 23 "data/maps/ParcelRiverHouse2/scripts.pory"
	.string "GIRL: Dad says the river's a ledger. I\n"
	.string "thought a ledger was a book. The river\l"
	.string "isn't a book. I checked.$"
