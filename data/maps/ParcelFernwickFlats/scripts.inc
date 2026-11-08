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
	msgbox ParcelFernwickFlats_Man_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end

ParcelFernwickFlats_Man_2:
# 8 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Man_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end


ParcelFernwickFlats_Girl::
# 18 "data/maps/ParcelFernwickFlats/scripts.pory"
	lock
# 19 "data/maps/ParcelFernwickFlats/scripts.pory"
	faceplayer
# 20 "data/maps/ParcelFernwickFlats/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickFlats_Girl_2
# 25 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Girl_Text_1, MSGBOX_DEFAULT
# 26 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end

ParcelFernwickFlats_Girl_2:
# 21 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Girl_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end


ParcelFernwickFlats_Man_Text_0:
# 8 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "MAN: Corps housing. Six rangers, one\n"
	.string "bathroom, and a transcript on the\l"
	.string "kitchen table that everyone's read\l"
	.string "twice. We reduce harm. We still don't\l"
	.string "reduce queues.$"

ParcelFernwickFlats_Man_Text_1:
# 12 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "MAN: Corps housing. Six rangers, one\n"
	.string "bathroom.\p"
	.string "We reduce harm. We do not reduce\n"
	.string "queues.$"

ParcelFernwickFlats_Girl_Text_0:
# 21 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "GIRL: Daddy came home from the hearing\n"
	.string "and said 'we reduced some harm'. Then he\l"
	.string "laughed. I didn't know the job had\l"
	.string "laughing in it.$"

ParcelFernwickFlats_Girl_Text_1:
# 25 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "GIRL: Daddy's a RANGER. He says he\n"
	.string "doesn't win, he reduces harm.\p"
	.string "I told him that's a weird job.$"
