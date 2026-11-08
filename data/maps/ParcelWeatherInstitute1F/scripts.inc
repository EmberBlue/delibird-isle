ParcelWeatherInstitute1F_MapScripts::
	.byte 0


ParcelWeatherInstitute1F_Reception::
# 5 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 6 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeatherInstitute1F_Reception_2
# 12 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Reception_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Reception_2:
# 8 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Reception_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end


ParcelWeatherInstitute1F_Tech1::
# 17 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 18 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	faceplayer
# 19 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeatherInstitute1F_Tech1_2
# 24 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech1_Text_1, MSGBOX_DEFAULT
# 25 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech1_2:
# 20 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech1_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end


ParcelWeatherInstitute1F_Tech2::
# 29 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 30 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	faceplayer
# 31 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeatherInstitute1F_Tech2_2
# 36 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_1, MSGBOX_DEFAULT
# 37 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_2:
# 32 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end


ParcelWeatherInstitute1F_Board::
# 41 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 42 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Board_Text_0, MSGBOX_SIGN
# 43 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DRAWER, ParcelWeatherInstitute1F_Board_3
ParcelWeatherInstitute1F_Board_1:
# 47 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Board_2:
# 44 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Board_Text_1, MSGBOX_SIGN
# 45 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	setflag FLAG_SKALD_Q_DRAWER_SEEN
	goto ParcelWeatherInstitute1F_Board_1

ParcelWeatherInstitute1F_Board_3:
# 43 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DRAWER_SEEN, ParcelWeatherInstitute1F_Board_2
	goto ParcelWeatherInstitute1F_Board_1


ParcelWeatherInstitute1F_Reception_Text_0:
# 8 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "RECEPTION: The director is upstairs. He\n"
	.string "sees anyone now. He says the four\l"
	.string "divisions were the easy part. Go up.$"

ParcelWeatherInstitute1F_Reception_Text_1:
# 12 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "RECEPTION: The director is upstairs. He\n"
	.string "sees anyone who's beaten the four\l"
	.string "divisions, and nobody who hasn't. Those\l"
	.string "are his rules. They're the only rules\l"
	.string "here he made himself.$"

ParcelWeatherInstitute1F_Tech1_Text_0:
# 20 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: The drawer's open. The\n"
	.string "over-the-fence data went to the\l"
	.string "review in three boxes. We publish it\l"
	.string "monthly now, next to the plot data. The\l"
	.string "drawer's for sandwiches.$"

ParcelWeatherInstitute1F_Tech1_Text_1:
# 24 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: We publish the plot data\n"
	.string "monthly. The over-the-fence data goes\l"
	.string "in a drawer. The drawer is very full.$"

ParcelWeatherInstitute1F_Tech2_Text_0:
# 32 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: A CASTFORM in every\n"
	.string "office, still. 'Adaptive thinking.' One of\l"
	.string "them changed form during the hearing\l"
	.string "broadcast. Rain. Nobody's explained it.\l"
	.string "Nobody wants to.$"

ParcelWeatherInstitute1F_Tech2_Text_1:
# 36 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: A CASTFORM in every\n"
	.string "office. Management's idea. 'Adaptive\l"
	.string "thinking.' They mostly sleep.$"

ParcelWeatherInstitute1F_Board_Text_0:
# 42 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "STATION MISSION. 'To demonstrate that\n"
	.string "regional climate outcomes are\l"
	.string "manageable through targeted\l"
	.string "intervention.' Somebody has underlined\l"
	.string "'demonstrate' in pencil and written: to\l"
	.string "whom?$"

ParcelWeatherInstitute1F_Board_Text_1:
# 44 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "Under the board, a drawer. Inside: the\n"
	.string "over-the-fence log. Twelve months of\l"
	.string "the real sky, in pencil.\p"
	.string "Rain up a third. Frost days down by half.\n"
	.string "Nobody signed it. Written down, with the\l"
	.string "date.$"
