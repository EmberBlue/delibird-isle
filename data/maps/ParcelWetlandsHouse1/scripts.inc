ParcelWetlandsHouse1_MapScripts::
	.byte 0


ParcelWetlandsHouse1_Fisher::
# 7 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	lock
# 8 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelWetlandsHouse1_Fisher_2
# 14 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse1_Fisher_5
# 19 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsHouse1_Fisher_8
# 24 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_Fisher_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/ParcelWetlandsHouse1/scripts.pory"
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

ParcelWetlandsHouse1_Fisher_8:
# 20 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_Fisher_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	release
	end


ParcelWetlandsHouse1_Woman::
# 30 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	lock
# 31 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	faceplayer
# 32 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelWetlandsHouse1_Woman_2
# 37 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse1_Woman_5
# 42 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsHouse1_Woman_8
# 47 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_Woman_Text_3, MSGBOX_DEFAULT
# 48 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	release
	end

ParcelWetlandsHouse1_Woman_2:
# 33 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_Woman_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	release
	end

ParcelWetlandsHouse1_Woman_5:
# 38 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_Woman_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	release
	end

ParcelWetlandsHouse1_Woman_8:
# 43 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_Woman_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	release
	end


ParcelWetlandsHouse1_ReadDresser::
# 53 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHouse1_ReadDrawer::
# 58 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHouse1_PaperCatchDiary::
# 65 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse1_PaperCatchDiary_2
# 68 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_PaperCatchDiary_Text_1, MSGBOX_SIGN
ParcelWetlandsHouse1_PaperCatchDiary_1:
	end

ParcelWetlandsHouse1_PaperCatchDiary_2:
# 66 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	msgbox ParcelWetlandsHouse1_PaperCatchDiary_Text_0, MSGBOX_SIGN
	goto ParcelWetlandsHouse1_PaperCatchDiary_1


ParcelWetlandsHouse1_Fisher_Text_0:
# 10 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "FISHER: I fish below the works now.\n"
	.string "First time in six years. Small catch.\l"
	.string "Clean catch.\p"
	.string "The number on the permit's held. I check\n"
	.string "it before I check the weather.$"

ParcelWetlandsHouse1_Fisher_Text_1:
# 15 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "FISHER: The works' permit has a new\n"
	.string "page. I read it at the office. The\l"
	.string "discharge has a number on it now. A\l"
	.string "number you can argue with.$"

ParcelWetlandsHouse1_Fisher_Text_2:
# 20 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "FISHER: I still fish upstream of it. But\n"
	.string "the dredge crew's stood down and the\l"
	.string "discharge has a number on it now, like\l"
	.string "the river's water has.\p"
	.string "Numbers don't clean a channel. They do\n"
	.string "make it harder to pretend it's clean.$"

ParcelWetlandsHouse1_Fisher_Text_3:
# 24 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "FISHER: Landing's been sick since the\n"
	.string "discharge. I fish upstream of it now.\l"
	.string "Upstream of it is a long way.$"

ParcelWetlandsHouse1_Woman_Text_0:
# 33 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "WOMAN: The monitor still sits with his\n"
	.string "jar. The jar's clear. I still bring tea. He\l"
	.string "says he'll be here five years.\p"
	.string "I said I'll be here longer. We're both\n"
	.string "counting.$"

ParcelWetlandsHouse1_Woman_Text_1:
# 38 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "WOMAN: A CORPS monitor sits on the bank\n"
	.string "with a jar. I bring him tea. He says the\l"
	.string "jar's getting clearer. I'll believe the\l"
	.string "children's feet before the jar.$"

ParcelWetlandsHouse1_Woman_Text_2:
# 43 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "WOMAN: The children still swim off the\n"
	.string "landing. But the councilman's boat\l"
	.string "hasn't been out since the river meeting.\p"
	.string "Funny what children notice. They've\n"
	.string "stopped waving at the boat. Nobody\l"
	.string "told them to.$"

ParcelWetlandsHouse1_Woman_Text_3:
# 47 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "WOMAN: The children aren't to swim off\n"
	.string "the landing. They do anyway. We did.$"

ParcelWetlandsHouse1_ReadDresser_Text_0:
# 53 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "A map of the backwater on the dresser\n"
	.string "with a line drawn across it: UPSTREAM OF\l"
	.string "IT. Everything below the line has been\l"
	.string "shaded in.$"

ParcelWetlandsHouse1_ReadDrawer_Text_0:
# 58 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "Children's swimming things in the\n"
	.string "drawer, damp. Nobody has told them to\l"
	.string "stop. Nobody has put the things away\l"
	.string "either.$"

ParcelWetlandsHouse1_PaperCatchDiary_Text_0:
# 66 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "The fisher's catch diary. The\n"
	.string "downstream column has writing in it\l"
	.string "again: a date, the monitor's jar, and one\l"
	.string "fish, small, let go.\p"
	.string "Under it, in capitals he does not\n"
	.string "usually use: FIRST SINCE. He has not\l"
	.string "written since what. Everyone on the\l"
	.string "landing knows since what.$"

ParcelWetlandsHouse1_PaperCatchDiary_Text_1:
# 68 "data/maps/ParcelWetlandsHouse1/scripts.pory"
	.string "The fisher's catch diary, two columns\n"
	.string "since the year the pipe went in:\l"
	.string "UPSTREAM and DOWNSTREAM. Upstream,\l"
	.string "fish. Downstream, the word SHEEN more\l"
	.string "often than any number.\p"
	.string "He stopped writing the downstream\n"
	.string "column two winters ago. The column is\l"
	.string "still ruled. He keeps ruling it.$"
