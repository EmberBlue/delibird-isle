ParcelWeatherInstitute2F_MapScripts::
	.byte 0


ParcelWeatherInstitute2F_Director::
# 6 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	lock
# 7 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	faceplayer
# 8 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_CLEARED, ParcelWeatherInstitute2F_Director_2
# 13 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	checktrainerflag TRAINER_SKALD_RAIN
	goto_if 0, ParcelWeatherInstitute2F_Director_5
# 13 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUN
	goto_if 0, ParcelWeatherInstitute2F_Director_5
# 13 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	checktrainerflag TRAINER_SKALD_SAND
	goto_if 0, ParcelWeatherInstitute2F_Director_5
# 13 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	checktrainerflag TRAINER_SKALD_ICE
	goto_if 0, ParcelWeatherInstitute2F_Director_5
# 18 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_3, MSGBOX_DEFAULT
# 20 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_4, MSGBOX_DEFAULT
# 21 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_DIRECTOR, ParcelWeatherInstitute2F_Director_Text_5
# 22 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_6, MSGBOX_DEFAULT
# 23 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	giveitem ITEM_DAMP_ROCK
# 24 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	giveitem ITEM_HEAT_ROCK
# 25 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	giveitem ITEM_SMOOTH_ROCK
# 26 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	giveitem ITEM_ICY_ROCK
# 27 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	setflag FLAG_BADGE07_GET
# 28 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 29 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_7, MSGBOX_DEFAULT
# 30 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	giveitem ITEM_HM08
# 31 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	setflag FLAG_SKALDMERE_WEATHER_CLEARED
# 32 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_8, MSGBOX_DEFAULT
# 33 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	release
	end

ParcelWeatherInstitute2F_Director_2:
# 9 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	release
	end

ParcelWeatherInstitute2F_Director_5:
# 14 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Director_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	release
	end


ParcelWeatherInstitute2F_Aide::
# 37 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	lock
# 38 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	faceplayer
# 39 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Aide_Text_0, MSGBOX_DEFAULT
# 40 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	release
	end


ParcelWeatherInstitute2F_Window::
# 44 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	msgbox ParcelWeatherInstitute2F_Window_Text_0, MSGBOX_SIGN
	end


ParcelWeatherInstitute2F_Director_Text_0:
# 9 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: The four are yours, and the\n"
	.string "station's models with them.\p"
	.string "We found every knob on the sky and\n"
	.string "learned the wrong lesson from it. Don't\l"
	.string "you.$"

ParcelWeatherInstitute2F_Director_Text_1:
# 14 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: Not yet. Beat my four divisions\n"
	.string "first. I don't spend a battle on half a\l"
	.string "job. Rain, sun, sand, ice. All of them.$"

ParcelWeatherInstitute2F_Director_Text_2:
# 18 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: All four. Good. They're the best\n"
	.string "minds I have, and you walked through\l"
	.string "every one.\p"
	.string "Director, Climate Futures. We model the\n"
	.string "whole sky here. MEREHOLT pays us to\l"
	.string "insist it's a machine with knobs.$"

ParcelWeatherInstitute2F_Director_Text_3:
# 19 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: The trouble is, it was never a\n"
	.string "machine. It's a body. You can fever it;\l"
	.string "you can't tune it.\p"
	.string "But 'we can manage it' is so much easier\n"
	.string "to fund than 'we have to stop'. So\l"
	.string "that's the line we sell.$"

ParcelWeatherInstitute2F_Director_Text_4:
# 20 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: You've read the real weather out\n"
	.string "there. The thaw. The bloom. The dredged\l"
	.string "sea. Now beat the man paid to call it\l"
	.string "adjustable. Show me you've earned the\l"
	.string "kit. All four skies. Right now.$"

ParcelWeatherInstitute2F_Director_Text_5:
# 21 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: …Cleanly done. In any weather I\n"
	.string "could throw. That's the whole of the\l"
	.string "skill, in the end.$"

ParcelWeatherInstitute2F_Director_Text_6:
# 22 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: The weather rocks. They hold a\n"
	.string "sky longer in a fight. We used them to\l"
	.string "lie more convincingly. Maybe you'll use\l"
	.string "them for something else.$"

ParcelWeatherInstitute2F_Director_Text_7:
# 29 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: And the stamp that rides with the\n"
	.string "kit. A Deepwater clearance. MEREHOLT's\l"
	.string "notion, not mine. It authorises the gear\l"
	.string "that goes under the water, not only\l"
	.string "over it.$"

ParcelWeatherInstitute2F_Director_Text_8:
# 32 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "VANE: DIVE. Now go. Before I remember\n"
	.string "which side of this fence pays me.$"

ParcelWeatherInstitute2F_Aide_Text_0:
# 39 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "AIDE: The director keeps two logbooks.\n"
	.string "One for the Board. One for himself. He\l"
	.string "says the second one is for whoever\l"
	.string "comes after. I think he means you.$"

ParcelWeatherInstitute2F_Window_Text_0:
# 44 "data/maps/ParcelWeatherInstitute2F/scripts.pory"
	.string "From the window: four plots, four skies,\n"
	.string "and past the fence the one real one,\l"
	.string "grey and ordinary and not for sale.$"
