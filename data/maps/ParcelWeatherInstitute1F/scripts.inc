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
	goto_if_set FLAG_SKALDMERE_WEATHER_CLEARED, ParcelWeatherInstitute1F_Reception_5
# 17 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Reception_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Reception_2:
# 8 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Reception_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Reception_5:
# 13 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Reception_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end


ParcelWeatherInstitute1F_Tech1::
# 22 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 23 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	faceplayer
# 24 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeatherInstitute1F_Tech1_2
# 29 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_CLEARED, ParcelWeatherInstitute1F_Tech1_5
# 34 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech1_Text_2, MSGBOX_DEFAULT
# 35 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech1_2:
# 25 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech1_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech1_5:
# 30 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech1_Text_1, MSGBOX_DEFAULT
# 31 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end


ParcelWeatherInstitute1F_Tech2::
# 39 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 40 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	faceplayer
# 41 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CASTFORM_DONE, ParcelWeatherInstitute1F_Tech2_2
# 46 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CASTFORM_FOUND, ParcelWeatherInstitute1F_Tech2_5
# 53 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CASTFORM, ParcelWeatherInstitute1F_Tech2_8
# 58 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_ARRIVAL, ParcelWeatherInstitute1F_Tech2_11
# 64 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeatherInstitute1F_Tech2_14
# 69 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_5, MSGBOX_DEFAULT
# 70 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_2:
# 42 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_5:
# 47 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_1, MSGBOX_DEFAULT
# 48 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 49 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	setflag FLAG_SKALD_Q_CASTFORM_DONE
# 50 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_8:
# 54 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_2, MSGBOX_DEFAULT
# 55 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_11:
# 59 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_3, MSGBOX_DEFAULT
# 60 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	setflag FLAG_SKALD_Q_CASTFORM
# 61 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_14:
# 65 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_4, MSGBOX_DEFAULT
# 66 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end


ParcelWeatherInstitute1F_Board::
# 74 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 75 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Board_Text_0, MSGBOX_SIGN
# 76 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DRAWER, ParcelWeatherInstitute1F_Board_3
ParcelWeatherInstitute1F_Board_1:
# 80 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Board_2:
# 77 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Board_Text_1, MSGBOX_SIGN
# 78 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	setflag FLAG_SKALD_Q_DRAWER_SEEN
	goto ParcelWeatherInstitute1F_Board_1

ParcelWeatherInstitute1F_Board_3:
# 76 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DRAWER_SEEN, ParcelWeatherInstitute1F_Board_2
	goto ParcelWeatherInstitute1F_Board_1


ParcelWeatherInstitute1F_Scenarios::
# 87 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Scenarios_Text_0, MSGBOX_SIGN
	end


ParcelWeatherInstitute1F_Reception_Text_0:
# 8 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "RECEPTION: The director is upstairs. He\n"
	.string "sees anyone now. He says the four\l"
	.string "divisions were the easy part. Go up.$"

ParcelWeatherInstitute1F_Reception_Text_1:
# 13 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "RECEPTION: You've beaten the four and\n"
	.string "the director. He's asked me to stop\l"
	.string "saying 'the rules'.\p"
	.string "He says there was only ever one rule,\n"
	.string "and it was his, and he isn't sure about\l"
	.string "it any more. I've never heard him say\l"
	.string "isn't sure. I wrote it down.$"

ParcelWeatherInstitute1F_Reception_Text_2:
# 17 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "RECEPTION: The director is upstairs. He\n"
	.string "sees anyone who's beaten the four\l"
	.string "divisions, and nobody who hasn't. Those\l"
	.string "are his rules. They're the only rules\l"
	.string "here he made himself.$"

ParcelWeatherInstitute1F_Tech1_Text_0:
# 25 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: The drawer's open. The\n"
	.string "over-the-fence data went to the\l"
	.string "review in three boxes. We publish it\l"
	.string "monthly now, next to the plot data. The\l"
	.string "drawer's for sandwiches.$"

ParcelWeatherInstitute1F_Tech1_Text_1:
# 30 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: The director took the\n"
	.string "drawer upstairs after your battle. All\l"
	.string "twelve months of the over-the-fence\l"
	.string "log.\p"
	.string "He said he wanted to read what the sky\n"
	.string "did while he was modelling it. He hasn't\l"
	.string "come down. We've started sending the\l"
	.string "sandwiches up.$"

ParcelWeatherInstitute1F_Tech1_Text_2:
# 34 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: We publish the plot data\n"
	.string "monthly. The over-the-fence data goes\l"
	.string "in a drawer. The drawer is very full.$"

ParcelWeatherInstitute1F_Tech2_Text_0:
# 42 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: Back at its desk. Rain\n"
	.string "form, still. It rains very gently on my\l"
	.string "in-tray now. I've moved the in-tray.$"

ParcelWeatherInstitute1F_Tech2_Text_1:
# 47 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: Under the director's desk.\n"
	.string "Of course. Rain form. Of course.\p"
	.string "Take this. Management sends them for\n"
	.string "'morale'. This is the most morale I've\l"
	.string "had all year.$"

ParcelWeatherInstitute1F_Tech2_Text_2:
# 54 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: Upstairs. It went up the\n"
	.string "back stair during the storm drill. Look\l"
	.string "under things. It likes under things.$"

ParcelWeatherInstitute1F_Tech2_Text_3:
# 59 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: Ours is missing. The\n"
	.string "CASTFORM. It went up the back stair\l"
	.string "during the storm drill and nobody's seen\l"
	.string "it since.\p"
	.string "If you're going up to the director\n"
	.string "anyway. Look under things.$"

ParcelWeatherInstitute1F_Tech2_Text_4:
# 65 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: A CASTFORM in every\n"
	.string "office, still. 'Adaptive thinking.' One of\l"
	.string "them changed form during the hearing\l"
	.string "broadcast. Rain. Nobody's explained it.\l"
	.string "Nobody wants to.$"

ParcelWeatherInstitute1F_Tech2_Text_5:
# 69 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: A CASTFORM in every\n"
	.string "office. Management's idea. 'Adaptive\l"
	.string "thinking.' They mostly sleep.$"

ParcelWeatherInstitute1F_Board_Text_0:
# 75 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "STATION MISSION. 'To demonstrate that\n"
	.string "regional climate outcomes are\l"
	.string "manageable through targeted\l"
	.string "intervention.' Somebody has underlined\l"
	.string "'demonstrate' in pencil and written: to\l"
	.string "whom?$"

ParcelWeatherInstitute1F_Board_Text_1:
# 77 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "Under the board, a drawer. Inside: the\n"
	.string "over-the-fence log. Twelve months of\l"
	.string "the real sky, in pencil.\p"
	.string "Rain up a third. Frost days down by half.\n"
	.string "Nobody signed it. Written down, with the\l"
	.string "date.$"

ParcelWeatherInstitute1F_Scenarios_Text_0:
# 87 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
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
