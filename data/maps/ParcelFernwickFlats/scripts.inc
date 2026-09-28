ParcelFernwickFlats_MapScripts::
	.byte 0


ParcelFernwickFlats_Man::
# 5 "data/maps/ParcelFernwickFlats/scripts.pory"
	lock
# 6 "data/maps/ParcelFernwickFlats/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Man_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end


ParcelFernwickFlats_Girl::
# 13 "data/maps/ParcelFernwickFlats/scripts.pory"
	lock
# 14 "data/maps/ParcelFernwickFlats/scripts.pory"
	faceplayer
# 15 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Girl_Text_0, MSGBOX_DEFAULT
# 16 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end


ParcelFernwickFlats_Man_Text_0:
# 7 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "MAN: Corps housing. Six rangers, one\n"
	.string "bathroom.\p"
	.string "We reduce harm. We do not reduce\n"
	.string "queues.$"

ParcelFernwickFlats_Girl_Text_0:
# 15 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "GIRL: Daddy's a RANGER. He says he\n"
	.string "doesn't win, he reduces harm.\p"
	.string "I told him that's a weird job.$"
