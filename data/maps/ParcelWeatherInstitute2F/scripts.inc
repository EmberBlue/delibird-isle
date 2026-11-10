ParcelWeatherInstitute2F_MapScripts::
	.byte 0


ParcelWeatherInstitute2F_Director::
# 6 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	lock
# 7 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	faceplayer
# 8 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelWeatherInstitute2F_Director_2
ParcelWeatherInstitute2F_Director_1:
# 11 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_CLEARED, ParcelWeatherInstitute2F_Director_5
# 16 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	checktrainerflag TRAINER_SKALD_RAIN
	goto_if 0, ParcelWeatherInstitute2F_Director_8
# 16 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUN
	goto_if 0, ParcelWeatherInstitute2F_Director_8
# 16 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	checktrainerflag TRAINER_SKALD_SAND
	goto_if 0, ParcelWeatherInstitute2F_Director_8
# 16 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	checktrainerflag TRAINER_SKALD_ICE
	goto_if 0, ParcelWeatherInstitute2F_Director_8
# 21 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_2, MSGBOX_DEFAULT
# 22 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_3, MSGBOX_DEFAULT
# 23 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_4, MSGBOX_DEFAULT
# 24 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_5, MSGBOX_YESNO
# 25 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWeatherInstitute2F_Director_17
# 28 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_7, MSGBOX_DEFAULT
# 29 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	setflag FLAG_SKALD_EXAM_7
ParcelWeatherInstitute2F_Director_16:
# 31 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DIRECTOR, ParcelWeatherInstitute2F_Director_Text_8
# 32 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_9, MSGBOX_DEFAULT
# 33 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	giveitem ITEM_DAMP_ROCK
# 34 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	giveitem ITEM_HEAT_ROCK
# 35 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	giveitem ITEM_SMOOTH_ROCK
# 36 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	giveitem ITEM_ICY_ROCK
# 37 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	setflag FLAG_BADGE07_GET
# 38 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 39 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_10, MSGBOX_DEFAULT
# 40 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	giveitem ITEM_HM08
# 41 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	setflag FLAG_SKALDMERE_WEATHER_CLEARED
# 42 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_11, MSGBOX_DEFAULT
# 43 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	release
	end

ParcelWeatherInstitute2F_Director_2:
# 9 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	goto ParcelWeatherInstitute2F_Director_Rematch
	goto ParcelWeatherInstitute2F_Director_1

ParcelWeatherInstitute2F_Director_5:
# 12 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_0, MSGBOX_DEFAULT
# 13 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	release
	end

ParcelWeatherInstitute2F_Director_8:
# 17 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_1, MSGBOX_DEFAULT
# 18 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	release
	end

ParcelWeatherInstitute2F_Director_17:
# 26 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_6, MSGBOX_DEFAULT
	goto ParcelWeatherInstitute2F_Director_16


ParcelWeatherInstitute2F_Aide::
# 47 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	lock
# 48 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	faceplayer
# 49 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeatherInstitute2F_Aide_2
# 54 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Aide_Text_1, MSGBOX_DEFAULT
# 55 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	release
	end

ParcelWeatherInstitute2F_Aide_2:
# 50 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Aide_Text_0, MSGBOX_DEFAULT
# 51 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	release
	end


ParcelWeatherInstitute2F_Window::
# 59 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Window_Text_0, MSGBOX_SIGN
	end


ParcelWeatherInstitute2F_Director_Rematch::
# 65 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	lock
# 66 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	faceplayer
# 67 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Rematch_Text_0, MSGBOX_YESNO
# 68 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeatherInstitute2F_Director_Rematch_2
# 73 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DIRECTOR_R, ParcelWeatherInstitute2F_Director_Rematch_Text_2
# 74 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Rematch_Text_3, MSGBOX_DEFAULT
# 75 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	release
	end

ParcelWeatherInstitute2F_Director_Rematch_2:
# 69 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Rematch_Text_1, MSGBOX_DEFAULT
# 70 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	release
	end


ParcelWeatherInstitute2F_Castform::
# 80 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CASTFORM, ParcelWeatherInstitute2F_Castform_2
# 83 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Castform_Text_0, MSGBOX_SIGN
# 84 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	setflag FLAG_SKALD_Q_CASTFORM_FOUND
	end

ParcelWeatherInstitute2F_Castform_2:
	end


ParcelWeatherInstitute2F_Director_Text_0:
# 12 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: The four are yours, and the\n"
	.string "station's models with them.\p"
	.string "We found every knob on the sky and\n"
	.string "learned the wrong lesson from it. Don't\l"
	.string "you.$"

ParcelWeatherInstitute2F_Director_Text_1:
# 17 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: Not yet. Beat my four divisions\n"
	.string "first. I don't spend a battle on half a\l"
	.string "job. Rain, sun, sand, ice. All of them.$"

ParcelWeatherInstitute2F_Director_Text_2:
# 21 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: All four. Good. They're the best\n"
	.string "minds I have, and you walked through\l"
	.string "every one.\p"
	.string "Director, Climate Futures. We model the\n"
	.string "whole sky here. MEREHOLT pays us to\l"
	.string "insist it's a machine with knobs.$"

ParcelWeatherInstitute2F_Director_Text_3:
# 22 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: The trouble is, it was never a\n"
	.string "machine. It's a body. You can fever it;\l"
	.string "you can't tune it.\p"
	.string "But 'we can manage it' is so much easier\n"
	.string "to fund than 'we have to stop'. So\l"
	.string "that's the line we sell.$"

ParcelWeatherInstitute2F_Director_Text_4:
# 23 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: You've read the real weather out\n"
	.string "there. The thaw. The bloom. The dredged\l"
	.string "sea. Now beat the man paid to call it\l"
	.string "adjustable. Show me you've earned the\l"
	.string "kit. All four skies. Right now.$"

ParcelWeatherInstitute2F_Director_Text_5:
# 24 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: One reading before the four\n"
	.string "skies. The programme from the Tidewater\l"
	.string "opening: five gauges drawn, the fifth\l"
	.string "at the falls. Is there a falls on that\l"
	.string "river?$"

ParcelWeatherInstitute2F_Director_Text_6:
# 26 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: There was, before the sluice. The\n"
	.string "drawing is forty years out of date and\l"
	.string "nobody at the ribbon knew the river.\p"
	.string "Instruments don't flatter and they\n"
	.string "don't forget. Read them.$"

ParcelWeatherInstitute2F_Director_Text_7:
# 28 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: There was. Before the sluice. The\n"
	.string "artist worked from the Board's old map\l"
	.string "and nobody at the ribbon knew the river\l"
	.string "well enough to laugh.\p"
	.string "You did. Instruments don't flatter. Now\n"
	.string "read mine.$"

ParcelWeatherInstitute2F_Director_Text_8:
# 31 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: …Cleanly done. In any weather I\n"
	.string "could throw. That's the whole of the\l"
	.string "skill, in the end.$"

ParcelWeatherInstitute2F_Director_Text_9:
# 32 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: The weather rocks. They hold a\n"
	.string "sky longer in a fight. We used them to\l"
	.string "lie more convincingly. Maybe you'll use\l"
	.string "them for something else.$"

ParcelWeatherInstitute2F_Director_Text_10:
# 39 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: And the stamp that rides with the\n"
	.string "kit. A Deepwater clearance. MEREHOLT's\l"
	.string "notion, not mine. It authorises the gear\l"
	.string "that goes under the water, not only\l"
	.string "over it.$"

ParcelWeatherInstitute2F_Director_Text_11:
# 42 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: DIVE. Now go. Before I remember\n"
	.string "which side of this fence pays me.$"

ParcelWeatherInstitute2F_Aide_Text_0:
# 50 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "AIDE: The director's second logbook\n"
	.string "went into the record. The one he said\l"
	.string "was for whoever comes after. It was for\l"
	.string "you, it turns out. He's started a third.$"

ParcelWeatherInstitute2F_Aide_Text_1:
# 54 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "AIDE: The director keeps two logbooks.\n"
	.string "One for the Board. One for himself. He\l"
	.string "says the second one is for whoever\l"
	.string "comes after. I think he means you.$"

ParcelWeatherInstitute2F_Window_Text_0:
# 59 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "From the window: four plots, four skies,\n"
	.string "and past the fence the one real one,\l"
	.string "grey and ordinary and not for sale.$"

ParcelWeatherInstitute2F_Director_Rematch_Text_0:
# 67 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: The hearing cited the station's\n"
	.string "models. Both logbooks. I'd like one more\l"
	.string "reading, in weather of my choosing, with\l"
	.string "nothing on the end of it.\p"
	.string "All four of mine are watching. Yes?$"

ParcelWeatherInstitute2F_Director_Rematch_Text_1:
# 69 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: The forecast holds. So does the\n"
	.string "offer.$"

ParcelWeatherInstitute2F_Director_Rematch_Text_2:
# 73 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: …Cleanly done. In any weather. I\n"
	.string "keep saying it.$"

ParcelWeatherInstitute2F_Director_Rematch_Text_3:
# 74 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: Come back. The sky changes. So do\n"
	.string "I, slower.$"

ParcelWeatherInstitute2F_Castform_Text_0:
# 83 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "Under the director's second desk, a\n"
	.string "CASTFORM, asleep in its rain form.\p"
	.string "It has been raining very gently on a box\n"
	.string "of files for some time.$"
