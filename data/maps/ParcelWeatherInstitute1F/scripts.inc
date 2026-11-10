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
	goto_if_set FLAG_SKALD_Q_CASTFORM_DONE, ParcelWeatherInstitute1F_Tech2_2
# 36 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CASTFORM_FOUND, ParcelWeatherInstitute1F_Tech2_5
# 43 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CASTFORM, ParcelWeatherInstitute1F_Tech2_8
# 48 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_ARRIVAL, ParcelWeatherInstitute1F_Tech2_11
# 54 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeatherInstitute1F_Tech2_14
# 59 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_5, MSGBOX_DEFAULT
# 60 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_2:
# 32 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_5:
# 37 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_1, MSGBOX_DEFAULT
# 38 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 39 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	setflag FLAG_SKALD_Q_CASTFORM_DONE
# 40 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_8:
# 44 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_2, MSGBOX_DEFAULT
# 45 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_11:
# 49 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_3, MSGBOX_DEFAULT
# 50 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	setflag FLAG_SKALD_Q_CASTFORM
# 51 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_14:
# 55 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_4, MSGBOX_DEFAULT
# 56 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end


ParcelWeatherInstitute1F_Board::
# 64 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 65 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Board_Text_0, MSGBOX_SIGN
# 66 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DRAWER, ParcelWeatherInstitute1F_Board_3
ParcelWeatherInstitute1F_Board_1:
# 70 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Board_2:
# 67 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Board_Text_1, MSGBOX_SIGN
# 68 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	setflag FLAG_SKALD_Q_DRAWER_SEEN
	goto ParcelWeatherInstitute1F_Board_1

ParcelWeatherInstitute1F_Board_3:
# 66 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DRAWER_SEEN, ParcelWeatherInstitute1F_Board_2
	goto ParcelWeatherInstitute1F_Board_1


ParcelWeatherInstitute1F_Scenarios::
# 77 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Scenarios_Text_0, MSGBOX_SIGN
	end


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
	.string "TECHNICIAN: Back at its desk. Rain\n"
	.string "form, still. It rains very gently on my\l"
	.string "in-tray now. I've moved the in-tray.$"

ParcelWeatherInstitute1F_Tech2_Text_1:
# 37 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: Under the director's desk.\n"
	.string "Of course. Rain form. Of course.\p"
	.string "Take this. Management sends them for\n"
	.string "'morale'. This is the most morale I've\l"
	.string "had all year.$"

ParcelWeatherInstitute1F_Tech2_Text_2:
# 44 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: Upstairs. It went up the\n"
	.string "back stair during the storm drill. Look\l"
	.string "under things. It likes under things.$"

ParcelWeatherInstitute1F_Tech2_Text_3:
# 49 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: Ours is missing. The\n"
	.string "CASTFORM. It went up the back stair\l"
	.string "during the storm drill and nobody's seen\l"
	.string "it since.\p"
	.string "If you're going up to the director\n"
	.string "anyway. Look under things.$"

ParcelWeatherInstitute1F_Tech2_Text_4:
# 55 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: A CASTFORM in every\n"
	.string "office, still. 'Adaptive thinking.' One of\l"
	.string "them changed form during the hearing\l"
	.string "broadcast. Rain. Nobody's explained it.\l"
	.string "Nobody wants to.$"

ParcelWeatherInstitute1F_Tech2_Text_5:
# 59 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: A CASTFORM in every\n"
	.string "office. Management's idea. 'Adaptive\l"
	.string "thinking.' They mostly sleep.$"

ParcelWeatherInstitute1F_Board_Text_0:
# 65 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "STATION MISSION. 'To demonstrate that\n"
	.string "regional climate outcomes are\l"
	.string "manageable through targeted\l"
	.string "intervention.' Somebody has underlined\l"
	.string "'demonstrate' in pencil and written: to\l"
	.string "whom?$"

ParcelWeatherInstitute1F_Board_Text_1:
# 67 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "Under the board, a drawer. Inside: the\n"
	.string "over-the-fence log. Twelve months of\l"
	.string "the real sky, in pencil.\p"
	.string "Rain up a third. Frost days down by half.\n"
	.string "Nobody signed it. Written down, with the\l"
	.string "date.$"

ParcelWeatherInstitute1F_Scenarios_Text_0:
# 77 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "The model, pinned to the wall in three\n"
	.string "sheets. SCENARIO A: TARGETED\l"
	.string "INTERVENTION. SCENARIO B: ENHANCED\l"
	.string "INTERVENTION. SCENARIO C: FULL\l"
	.string "MANAGEMENT.\p"
	.string "Every curve on every sheet ends in the\n"
	.string "same word: MANAGEABLE. Someone has\l"
	.string "pencilled a fourth sheet on the back of\l"
	.string "a requisition form and pinned it under\l"
	.string "the three. SCENARIO D: WHAT HAPPENED.\l"
	.string "The curve is the over-the-fence log,\l"
	.string "copied out. It does not end in a word. It\l"
	.string "ends at this month, because that is\l"
	.string "where the pencil stopped.$"
