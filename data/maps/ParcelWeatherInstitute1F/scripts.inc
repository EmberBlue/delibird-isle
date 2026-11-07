ParcelWeatherInstitute1F_MapScripts::
	.byte 0


ParcelWeatherInstitute1F_Reception::
# 5 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 6 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Reception_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end


ParcelWeatherInstitute1F_Tech1::
# 12 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 13 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	faceplayer
# 14 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech1_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end


ParcelWeatherInstitute1F_Tech2::
# 19 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 20 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	faceplayer
# 21 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end


ParcelWeatherInstitute1F_Board::
# 26 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 27 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Board_Text_0, MSGBOX_SIGN
# 28 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DRAWER, ParcelWeatherInstitute1F_Board_3
ParcelWeatherInstitute1F_Board_1:
# 32 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Board_2:
# 29 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Board_Text_1, MSGBOX_SIGN
# 30 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	setflag FLAG_SKALD_Q_DRAWER_SEEN
	goto ParcelWeatherInstitute1F_Board_1

ParcelWeatherInstitute1F_Board_3:
# 28 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DRAWER_SEEN, ParcelWeatherInstitute1F_Board_2
	goto ParcelWeatherInstitute1F_Board_1


ParcelWeatherInstitute1F_Reception_Text_0:
# 7 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "RECEPTION: The director is upstairs. He\n"
	.string "sees anyone who's beaten the four\l"
	.string "divisions, and nobody who hasn't. Those\l"
	.string "are his rules. They're the only rules\l"
	.string "here he made himself.$"

ParcelWeatherInstitute1F_Tech1_Text_0:
# 14 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: We publish the plot data\n"
	.string "monthly. The over-the-fence data goes\l"
	.string "in a drawer. The drawer is very full.$"

ParcelWeatherInstitute1F_Tech2_Text_0:
# 21 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: A CASTFORM in every\n"
	.string "office. Management's idea. 'Adaptive\l"
	.string "thinking.' They mostly sleep.$"

ParcelWeatherInstitute1F_Board_Text_0:
# 27 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "STATION MISSION. 'To demonstrate that\n"
	.string "regional climate outcomes are\l"
	.string "manageable through targeted\l"
	.string "intervention.' Somebody has underlined\l"
	.string "'demonstrate' in pencil and written: to\l"
	.string "whom?$"

ParcelWeatherInstitute1F_Board_Text_1:
# 29 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "Under the board, a drawer. Inside: the\n"
	.string "over-the-fence log. Twelve months of\l"
	.string "the real sky, in pencil.\p"
	.string "Rain up a third. Frost days down by half.\n"
	.string "Nobody signed it. Written down, with the\l"
	.string "date.$"
