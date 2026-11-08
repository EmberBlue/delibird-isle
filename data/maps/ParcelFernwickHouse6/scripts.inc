ParcelFernwickHouse6_MapScripts::
	.byte 0


ParcelFernwickHouse6_Man::
# 7 "data/maps/ParcelFernwickHouse6/scripts.pory"
	lock
# 8 "data/maps/ParcelFernwickHouse6/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelFernwickHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse6_Man_2
# 14 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Man_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelFernwickHouse6/scripts.pory"
	release
	end

ParcelFernwickHouse6_Man_2:
# 10 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Man_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelFernwickHouse6/scripts.pory"
	release
	end


ParcelFernwickHouse6_Girl::
# 20 "data/maps/ParcelFernwickHouse6/scripts.pory"
	lock
# 21 "data/maps/ParcelFernwickHouse6/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelFernwickHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse6_Girl_2
# 27 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Girl_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelFernwickHouse6/scripts.pory"
	release
	end

ParcelFernwickHouse6_Girl_2:
# 23 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Girl_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelFernwickHouse6/scripts.pory"
	release
	end


ParcelFernwickHouse6_Man_Text_0:
# 10 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "MAN: Fed the hearing's clerks for a\n"
	.string "week. They eat like people who sit all\l"
	.string "day. They have.$"

ParcelFernwickHouse6_Man_Text_1:
# 14 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "MAN: I cook for the District Station.\n"
	.string "Rangers eat like people who've walked\l"
	.string "all day, because they have.$"

ParcelFernwickHouse6_Girl_Text_0:
# 23 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "GIRL: Dad says you fed a whole region a\n"
	.string "truth. He says that's cooking.$"

ParcelFernwickHouse6_Girl_Text_1:
# 27 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "GIRL: I'm going to be a ranger. Or a\n"
	.string "cook. Dad says they're the same job.$"
