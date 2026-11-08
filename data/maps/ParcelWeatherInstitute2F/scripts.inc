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
	trainerbattle_no_intro TRAINER_SKALD_DIRECTOR, ParcelWeatherInstitute2F_Director_Text_5
# 25 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_6, MSGBOX_DEFAULT
# 26 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	giveitem ITEM_DAMP_ROCK
# 27 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	giveitem ITEM_HEAT_ROCK
# 28 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	giveitem ITEM_SMOOTH_ROCK
# 29 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	giveitem ITEM_ICY_ROCK
# 30 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	setflag FLAG_BADGE07_GET
# 31 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 32 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_7, MSGBOX_DEFAULT
# 33 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	giveitem ITEM_HM08
# 34 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	setflag FLAG_SKALDMERE_WEATHER_CLEARED
# 35 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_8, MSGBOX_DEFAULT
# 36 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
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


ParcelWeatherInstitute2F_Aide::
# 40 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	lock
# 41 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	faceplayer
# 42 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeatherInstitute2F_Aide_2
# 47 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Aide_Text_1, MSGBOX_DEFAULT
# 48 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	release
	end

ParcelWeatherInstitute2F_Aide_2:
# 43 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Aide_Text_0, MSGBOX_DEFAULT
# 44 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	release
	end


ParcelWeatherInstitute2F_Window::
# 52 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Window_Text_0, MSGBOX_SIGN
	end


ParcelWeatherInstitute2F_Director_Rematch::
# 58 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	lock
# 59 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	faceplayer
# 60 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Rematch_Text_0, MSGBOX_YESNO
# 61 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeatherInstitute2F_Director_Rematch_2
# 66 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DIRECTOR_R, ParcelWeatherInstitute2F_Director_Rematch_Text_2
# 67 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Rematch_Text_3, MSGBOX_DEFAULT
# 68 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	release
	end

ParcelWeatherInstitute2F_Director_Rematch_2:
# 62 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Rematch_Text_1, MSGBOX_DEFAULT
# 63 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	release
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
	.string "VANE: …Cleanly done. In any weather I\n"
	.string "could throw. That's the whole of the\l"
	.string "skill, in the end.$"

ParcelWeatherInstitute2F_Director_Text_6:
# 25 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: The weather rocks. They hold a\n"
	.string "sky longer in a fight. We used them to\l"
	.string "lie more convincingly. Maybe you'll use\l"
	.string "them for something else.$"

ParcelWeatherInstitute2F_Director_Text_7:
# 32 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: And the stamp that rides with the\n"
	.string "kit. A Deepwater clearance. MEREHOLT's\l"
	.string "notion, not mine. It authorises the gear\l"
	.string "that goes under the water, not only\l"
	.string "over it.$"

ParcelWeatherInstitute2F_Director_Text_8:
# 35 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: DIVE. Now go. Before I remember\n"
	.string "which side of this fence pays me.$"

ParcelWeatherInstitute2F_Aide_Text_0:
# 43 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "AIDE: The director's second logbook\n"
	.string "went into the record. The one he said\l"
	.string "was for whoever comes after. It was for\l"
	.string "you, it turns out. He's started a third.$"

ParcelWeatherInstitute2F_Aide_Text_1:
# 47 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "AIDE: The director keeps two logbooks.\n"
	.string "One for the Board. One for himself. He\l"
	.string "says the second one is for whoever\l"
	.string "comes after. I think he means you.$"

ParcelWeatherInstitute2F_Window_Text_0:
# 52 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "From the window: four plots, four skies,\n"
	.string "and past the fence the one real one,\l"
	.string "grey and ordinary and not for sale.$"

ParcelWeatherInstitute2F_Director_Rematch_Text_0:
# 60 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: The hearing cited the station's\n"
	.string "models. Both logbooks. I'd like one more\l"
	.string "reading, in weather of my choosing, with\l"
	.string "nothing on the end of it.\p"
	.string "All four of mine are watching. Yes?$"

ParcelWeatherInstitute2F_Director_Rematch_Text_1:
# 62 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: The forecast holds. So does the\n"
	.string "offer.$"

ParcelWeatherInstitute2F_Director_Rematch_Text_2:
# 66 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: …Cleanly done. In any weather. I\n"
	.string "keep saying it.$"

ParcelWeatherInstitute2F_Director_Rematch_Text_3:
# 67 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: Come back. The sky changes. So do\n"
	.string "I, slower.$"
