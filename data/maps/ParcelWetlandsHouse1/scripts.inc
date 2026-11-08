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
	msgbox ParcelWetlandsHouse1_Fisher_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	release
	end

ParcelWetlandsHouse1_Fisher_2:
# 10 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_Fisher_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	release
	end


ParcelWetlandsHouse1_Woman::
# 20 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	lock
# 21 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse1_Woman_2
# 27 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_Woman_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	release
	end

ParcelWetlandsHouse1_Woman_2:
# 23 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_Woman_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	release
	end


ParcelWetlandsHouse1_Fisher_Text_0:
# 10 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "FISHER: The works' permit has a new\n"
	.string "page. I read it at the office. The\l"
	.string "discharge has a number on it now. A\l"
	.string "number you can argue with.$"

ParcelWetlandsHouse1_Fisher_Text_1:
# 14 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "FISHER: Landing's been sick since the\n"
	.string "discharge. I fish upstream of it now.\l"
	.string "Upstream of it is a long way.$"

ParcelWetlandsHouse1_Woman_Text_0:
# 23 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "WOMAN: A CORPS monitor sits on the bank\n"
	.string "with a jar. I bring him tea. He says the\l"
	.string "jar's getting clearer. I'll believe the\l"
	.string "children's feet before the jar.$"

ParcelWetlandsHouse1_Woman_Text_1:
# 27 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "WOMAN: The children aren't to swim off\n"
	.string "the landing. They do anyway. We did.$"
