ParcelWetlandsHouse1_MapScripts::
	.byte 0


ParcelWetlandsHouse1_Fisher::
# 7 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	lock
# 8 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse1_Fisher_2
# 14 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsHouse1_Fisher_5
# 19 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_Fisher_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	release
	end

ParcelWetlandsHouse1_Fisher_2:
# 10 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_Fisher_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	release
	end

ParcelWetlandsHouse1_Fisher_5:
# 15 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_Fisher_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	release
	end


ParcelWetlandsHouse1_Woman::
# 25 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	lock
# 26 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse1_Woman_2
# 32 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsHouse1_Woman_5
# 37 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_Woman_Text_2, MSGBOX_DEFAULT
# 38 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	release
	end

ParcelWetlandsHouse1_Woman_2:
# 28 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_Woman_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	release
	end

ParcelWetlandsHouse1_Woman_5:
# 33 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_Woman_Text_1, MSGBOX_DEFAULT
# 34 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	release
	end


ParcelWetlandsHouse1_ReadDresser::
# 43 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHouse1_ReadDrawer::
# 48 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHouse1_Fisher_Text_0:
# 10 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "FISHER: The works' permit has a new\n"
	.string "page. I read it at the office. The\l"
	.string "discharge has a number on it now. A\l"
	.string "number you can argue with.$"

ParcelWetlandsHouse1_Fisher_Text_1:
# 15 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "FISHER: I still fish upstream of it. But\n"
	.string "the dredge crew's stood down and the\l"
	.string "discharge has a number on it now, like\l"
	.string "the river's water has.\p"
	.string "Numbers don't clean a channel. They do\n"
	.string "make it harder to pretend it's clean.$"

ParcelWetlandsHouse1_Fisher_Text_2:
# 19 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "FISHER: Landing's been sick since the\n"
	.string "discharge. I fish upstream of it now.\l"
	.string "Upstream of it is a long way.$"

ParcelWetlandsHouse1_Woman_Text_0:
# 28 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "WOMAN: A CORPS monitor sits on the bank\n"
	.string "with a jar. I bring him tea. He says the\l"
	.string "jar's getting clearer. I'll believe the\l"
	.string "children's feet before the jar.$"

ParcelWetlandsHouse1_Woman_Text_1:
# 33 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "WOMAN: The children still swim off the\n"
	.string "landing. But the councilman's boat\l"
	.string "hasn't been out since the river meeting.\p"
	.string "Funny what children notice. They've\n"
	.string "stopped waving at the boat. Nobody\l"
	.string "told them to.$"

ParcelWetlandsHouse1_Woman_Text_2:
# 37 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "WOMAN: The children aren't to swim off\n"
	.string "the landing. They do anyway. We did.$"

ParcelWetlandsHouse1_ReadDresser_Text_0:
# 43 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "A map of the backwater on the dresser\n"
	.string "with a line drawn across it: UPSTREAM OF\l"
	.string "IT. Everything below the line has been\l"
	.string "shaded in.$"

ParcelWetlandsHouse1_ReadDrawer_Text_0:
# 48 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "Children's swimming things in the\n"
	.string "drawer, damp. Nobody has told them to\l"
	.string "stop. Nobody has put the things away\l"
	.string "either.$"
