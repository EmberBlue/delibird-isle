ParcelFernwickFlats_MapScripts::
	.byte 0


ParcelFernwickFlats_Man::
# 5 "data/maps/ParcelFernwickFlats/scripts.pory"
	lock
# 6 "data/maps/ParcelFernwickFlats/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFernwickFlats/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickFlats_Man_2
# 12 "data/maps/ParcelFernwickFlats/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickFlats_Man_5
# 17 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Man_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end

ParcelFernwickFlats_Man_2:
# 8 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Man_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end

ParcelFernwickFlats_Man_5:
# 13 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Man_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end


ParcelFernwickFlats_Girl::
# 23 "data/maps/ParcelFernwickFlats/scripts.pory"
	lock
# 24 "data/maps/ParcelFernwickFlats/scripts.pory"
	faceplayer
# 25 "data/maps/ParcelFernwickFlats/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickFlats_Girl_2
# 30 "data/maps/ParcelFernwickFlats/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickFlats_Girl_5
# 35 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Girl_Text_2, MSGBOX_DEFAULT
# 36 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end

ParcelFernwickFlats_Girl_2:
# 26 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Girl_Text_0, MSGBOX_DEFAULT
# 27 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end

ParcelFernwickFlats_Girl_5:
# 31 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Girl_Text_1, MSGBOX_DEFAULT
# 32 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end


ParcelFernwickFlats_ReadFridge::
# 41 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_ReadFridge_Text_0, MSGBOX_SIGN
	end


ParcelFernwickFlats_ReadBunk::
# 46 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_ReadBunk_Text_0, MSGBOX_SIGN
	end


ParcelFernwickFlats_Man_Text_0:
# 8 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "MAN: Corps housing. Six rangers, one\n"
	.string "bathroom, and a transcript on the\l"
	.string "kitchen table that everyone's read\l"
	.string "twice. We reduce harm. We still don't\l"
	.string "reduce queues.$"

ParcelFernwickFlats_Man_Text_1:
# 13 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "MAN: Two of us got sent to the basin\n"
	.string "for the relief line and came back not\l"
	.string "talking. Not sulking. Thinking.\p"
	.string "Six rangers, one bathroom, and now a\n"
	.string "queue for the kettle as well.$"

ParcelFernwickFlats_Man_Text_2:
# 17 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "MAN: Corps housing. Six rangers, one\n"
	.string "bathroom.\p"
	.string "We reduce harm. We do not reduce\n"
	.string "queues.$"

ParcelFernwickFlats_Girl_Text_0:
# 26 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "GIRL: Daddy came home from the hearing\n"
	.string "and said 'we reduced some harm'. Then he\l"
	.string "laughed. I didn't know the job had\l"
	.string "laughing in it.$"

ParcelFernwickFlats_Girl_Text_1:
# 31 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "GIRL: Daddy came back from the river\n"
	.string "smelling like a meeting. That's a smell.\l"
	.string "Coffee and paper.\p"
	.string "He said six people stood up. I asked if\n"
	.string "he did. He said he was holding the door.\l"
	.string "That counts.$"

ParcelFernwickFlats_Girl_Text_2:
# 35 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "GIRL: Daddy's a RANGER. He says he\n"
	.string "doesn't win, he reduces harm.\p"
	.string "I told him that's a weird job.$"

ParcelFernwickFlats_ReadFridge_Text_0:
# 41 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "Six names on the fridge, six shelves,\n"
	.string "one note: WHOEVER TOOK THE BASIN LOT'S\l"
	.string "SUGAR, THE COOK KNOWS.$"

ParcelFernwickFlats_ReadBunk_Text_0:
# 46 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "Six bunks, one bathroom. Each bunk has\n"
	.string "a boot print on the wall at the same\l"
	.string "height, where a ranger lies down without\l"
	.string "taking the boots off first.$"
