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
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse4_Woman_5
# 19 "data/maps/ParcelFernwickHouse4/scripts.pory"
	msgbox ParcelFernwickHouse4_Woman_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelFernwickHouse4/scripts.pory"
	release
	end

ParcelFernwickHouse4_Woman_2:
# 10 "data/maps/ParcelFernwickHouse4/scripts.pory"
	msgbox ParcelFernwickHouse4_Woman_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelFernwickHouse4/scripts.pory"
	release
	end

ParcelFernwickHouse4_Woman_5:
# 15 "data/maps/ParcelFernwickHouse4/scripts.pory"
	msgbox ParcelFernwickHouse4_Woman_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelFernwickHouse4/scripts.pory"
	release
	end


ParcelFernwickHouse4_Boy::
# 25 "data/maps/ParcelFernwickHouse4/scripts.pory"
	lock
# 26 "data/maps/ParcelFernwickHouse4/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelFernwickHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse4_Boy_2
# 32 "data/maps/ParcelFernwickHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse4_Boy_5
# 37 "data/maps/ParcelFernwickHouse4/scripts.pory"
	msgbox ParcelFernwickHouse4_Boy_Text_2, MSGBOX_DEFAULT
# 38 "data/maps/ParcelFernwickHouse4/scripts.pory"
	release
	end

ParcelFernwickHouse4_Boy_2:
# 28 "data/maps/ParcelFernwickHouse4/scripts.pory"
	msgbox ParcelFernwickHouse4_Boy_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/ParcelFernwickHouse4/scripts.pory"
	release
	end

ParcelFernwickHouse4_Boy_5:
# 33 "data/maps/ParcelFernwickHouse4/scripts.pory"
	msgbox ParcelFernwickHouse4_Boy_Text_1, MSGBOX_DEFAULT
# 34 "data/maps/ParcelFernwickHouse4/scripts.pory"
	release
	end


ParcelFernwickHouse4_ReadDresser::
# 43 "data/maps/ParcelFernwickHouse4/scripts.pory"
	msgbox ParcelFernwickHouse4_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse4_ReadDrawer::
# 48 "data/maps/ParcelFernwickHouse4/scripts.pory"
	msgbox ParcelFernwickHouse4_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse4_Woman_Text_0:
# 10 "data/maps/ParcelFernwickHouse4/scripts.pory"
	.string "WOMAN: The hearing asked for every\n"
	.string "page. I carried them to the coast\l"
	.string "myself. Eleven hundred, their clerk\l"
	.string "said. I'd counted twelve.$"

ParcelFernwickHouse4_Woman_Text_1:
# 15 "data/maps/ParcelFernwickHouse4/scripts.pory"
	.string "WOMAN: The river report filled the\n"
	.string "second drawer on its own. I've asked for\l"
	.string "a cabinet.\p"
	.string "The Survey's never asked for a cabinet.\n"
	.string "ILEX signed the form without reading\l"
	.string "it. ILEX reads everything.$"

ParcelFernwickHouse4_Woman_Text_2:
# 19 "data/maps/ParcelFernwickHouse4/scripts.pory"
	.string "WOMAN: I file the field reports at the\n"
	.string "Survey office. Yours come in thicker\l"
	.string "than anyone's. I've started a second\l"
	.string "drawer.$"

ParcelFernwickHouse4_Boy_Text_0:
# 28 "data/maps/ParcelFernwickHouse4/scripts.pory"
	.string "BOY: Dad read your name in the paper\n"
	.string "and said 'wet on purpose'. He was smiling\l"
	.string "when he said it.$"

ParcelFernwickHouse4_Boy_Text_1:
# 33 "data/maps/ParcelFernwickHouse4/scripts.pory"
	.string "BOY: Dad says you went to the river and\n"
	.string "made the Board count out loud.\p"
	.string "I didn't know you could make grown-ups\n"
	.string "count. I'm going to try it on Dad.$"

ParcelFernwickHouse4_Boy_Text_2:
# 37 "data/maps/ParcelFernwickHouse4/scripts.pory"
	.string "BOY: Dad says the rangers are the ones\n"
	.string "who get wet on purpose.$"

ParcelFernwickHouse4_ReadDresser_Text_0:
# 43 "data/maps/ParcelFernwickHouse4/scripts.pory"
	.string "A Survey office lanyard hung on the\n"
	.string "mirror, and a second-drawer key on a\l"
	.string "ribbon beside it. The ribbon is new.$"

ParcelFernwickHouse4_ReadDrawer_Text_0:
# 48 "data/maps/ParcelFernwickHouse4/scripts.pory"
	.string "A boy's boots drying on newspaper. The\n"
	.string "newspaper is a river report. The boots\l"
	.string "are wet on purpose.$"
