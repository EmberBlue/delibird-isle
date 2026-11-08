ParcelFernwickHouse4_MapScripts::
	.byte 0


ParcelFernwickHouse4_Woman::
# 7 "data/maps/ParcelFernwickHouse4/scripts.pory"
	lock
# 8 "data/maps/ParcelFernwickHouse4/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelFernwickHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse4_Woman_2
# 14 "data/maps/ParcelFernwickHouse4/scripts.pory"
	msgbox ParcelFernwickHouse4_Woman_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelFernwickHouse4/scripts.pory"
	release
	end

ParcelFernwickHouse4_Woman_2:
# 10 "data/maps/ParcelFernwickHouse4/scripts.pory"
	msgbox ParcelFernwickHouse4_Woman_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelFernwickHouse4/scripts.pory"
	release
	end


ParcelFernwickHouse4_Boy::
# 20 "data/maps/ParcelFernwickHouse4/scripts.pory"
	lock
# 21 "data/maps/ParcelFernwickHouse4/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelFernwickHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse4_Boy_2
# 27 "data/maps/ParcelFernwickHouse4/scripts.pory"
	msgbox ParcelFernwickHouse4_Boy_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelFernwickHouse4/scripts.pory"
	release
	end

ParcelFernwickHouse4_Boy_2:
# 23 "data/maps/ParcelFernwickHouse4/scripts.pory"
	msgbox ParcelFernwickHouse4_Boy_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelFernwickHouse4/scripts.pory"
	release
	end


ParcelFernwickHouse4_Woman_Text_0:
# 10 "data/maps/ParcelFernwickHouse4/scripts.pory"
	.string "WOMAN: The hearing asked for every\n"
	.string "page. I carried them to the coast\l"
	.string "myself. Eleven hundred, their clerk\l"
	.string "said. I'd counted twelve.$"

ParcelFernwickHouse4_Woman_Text_1:
# 14 "data/maps/ParcelFernwickHouse4/scripts.pory"
	.string "WOMAN: I file the field reports at the\n"
	.string "Survey office. Yours come in thicker\l"
	.string "than anyone's. I've started a second\l"
	.string "drawer.$"

ParcelFernwickHouse4_Boy_Text_0:
# 23 "data/maps/ParcelFernwickHouse4/scripts.pory"
	.string "BOY: Dad read your name in the paper\n"
	.string "and said 'wet on purpose'. He was smiling\l"
	.string "when he said it.$"

ParcelFernwickHouse4_Boy_Text_1:
# 27 "data/maps/ParcelFernwickHouse4/scripts.pory"
	.string "BOY: Dad says the rangers are the ones\n"
	.string "who get wet on purpose.$"
