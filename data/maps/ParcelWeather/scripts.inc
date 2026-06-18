ParcelWeather_MapScripts::
# 18 "data/maps/ParcelWeather/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelWeather_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelWeather_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 19 "data/maps/ParcelWeather/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelWeather_SetMapVar
	.2byte 0


ParcelWeather_SetMapVar::
# 24 "data/maps/ParcelWeather/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


ParcelWeather_FirstEntry::
# 29 "data/maps/ParcelWeather/scripts.pory"
	setvar VAR_TEMP_1, 1
# 30 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_ARRIVAL, ParcelWeather_FirstEntry_2
# 33 "data/maps/ParcelWeather/scripts.pory"
	lockall
# 34 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_FirstEntry_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_FirstEntry_Text_1, MSGBOX_DEFAULT
# 36 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_FirstEntry_Text_2, MSGBOX_DEFAULT
# 37 "data/maps/ParcelWeather/scripts.pory"
	setflag FLAG_SKALDMERE_WEATHER_ARRIVAL
# 38 "data/maps/ParcelWeather/scripts.pory"
	releaseall
	end

ParcelWeather_FirstEntry_2:
	end


ParcelWeather_Rain::
# 44 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RAIN, ParcelWeather_Rain_Text_0, ParcelWeather_Rain_Text_1
# 47 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_Sun::
# 52 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUN, ParcelWeather_Sun_Text_0, ParcelWeather_Sun_Text_1
# 55 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_Sand::
# 60 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SAND, ParcelWeather_Sand_Text_0, ParcelWeather_Sand_Text_1
# 63 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_Ice::
# 68 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ICE, ParcelWeather_Ice_Text_0, ParcelWeather_Ice_Text_1
# 71 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_Director::
# 77 "data/maps/ParcelWeather/scripts.pory"
	lock
# 78 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 79 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_CLEARED, ParcelWeather_Director_2
# 84 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_RAIN
	goto_if 0, ParcelWeather_Director_5
# 89 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUN
	goto_if 0, ParcelWeather_Director_8
# 94 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SAND
	goto_if 0, ParcelWeather_Director_11
# 99 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_ICE
	goto_if 0, ParcelWeather_Director_14
# 104 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Director_Text_5, MSGBOX_DEFAULT
# 105 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Director_Text_6, MSGBOX_DEFAULT
# 106 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Director_Text_7, MSGBOX_DEFAULT
# 107 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_DIRECTOR, ParcelWeather_Director_Text_8, ParcelWeather_Director_Text_9
# 110 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Director_Text_10, MSGBOX_DEFAULT
# 111 "data/maps/ParcelWeather/scripts.pory"
	giveitem ITEM_DAMP_ROCK
# 112 "data/maps/ParcelWeather/scripts.pory"
	giveitem ITEM_HEAT_ROCK
# 113 "data/maps/ParcelWeather/scripts.pory"
	giveitem ITEM_SMOOTH_ROCK
# 114 "data/maps/ParcelWeather/scripts.pory"
	giveitem ITEM_ICY_ROCK
# 117 "data/maps/ParcelWeather/scripts.pory"
	setflag FLAG_BADGE07_GET
# 118 "data/maps/ParcelWeather/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 119 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Director_Text_11, MSGBOX_DEFAULT
# 120 "data/maps/ParcelWeather/scripts.pory"
	giveitem ITEM_HM08
# 121 "data/maps/ParcelWeather/scripts.pory"
	setflag FLAG_SKALDMERE_WEATHER_CLEARED
# 122 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Director_Text_12, MSGBOX_DEFAULT
# 123 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Director_2:
# 80 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Director_Text_0, MSGBOX_DEFAULT
# 81 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Director_5:
# 85 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Director_Text_1, MSGBOX_DEFAULT
# 86 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Director_8:
# 90 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Director_Text_2, MSGBOX_DEFAULT
# 91 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Director_11:
# 95 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Director_Text_3, MSGBOX_DEFAULT
# 96 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Director_14:
# 100 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Director_Text_4, MSGBOX_DEFAULT
# 101 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_ReturnFerry::
# 128 "data/maps/ParcelWeather/scripts.pory"
	lock
# 129 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 130 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_ReturnFerry_Text_0, MSGBOX_YESNO
# 131 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_ReturnFerry_2
# 136 "data/maps/ParcelWeather/scripts.pory"
	closemessage
# 137 "data/maps/ParcelWeather/scripts.pory"
	playse SE_SHIP
# 138 "data/maps/ParcelWeather/scripts.pory"
	delay 40
# 139 "data/maps/ParcelWeather/scripts.pory"
	warp MAP_PARCEL_ISLE, 41, 48
# 140 "data/maps/ParcelWeather/scripts.pory"
	waitstate
	end

ParcelWeather_ReturnFerry_2:
# 132 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_ReturnFerry_Text_1, MSGBOX_DEFAULT
# 133 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_FirstEntry_Text_0:
# 34 "data/maps/ParcelWeather/scripts.pory"
	.string "A walled compound, humming with fans\n"
	.string "and instruments. A sign over the gate:\p"
	.string "MEREHOLT CLIMATE FUTURES --\n"
	.string "ATMOSPHERIC DIVISION.\n"
	.string "Managing tomorrow's weather, today.$"

ParcelWeather_FirstEntry_Text_1:
# 35 "data/maps/ParcelWeather/scripts.pory"
	.string "Four test plots, four climatologists,\n"
	.string "each running their own private weather\l"
	.string "over a patch of ground. Rain on one,\l"
	.string "drought on the next, sand, frost.\p"
	.string "They are very good at the small sky.\n"
	.string "They have decided that means they\l"
	.string "understand the big one.$"

ParcelWeather_FirstEntry_Text_2:
# 36 "data/maps/ParcelWeather/scripts.pory"
	.string "You have spent a whole journey reading\n"
	.string "the real weather -- the thaw, the bloom,\l"
	.string "the failing marsh.\p"
	.string "These are the people paid to call it\n"
	.string "adjustable. Beat them on their own\l"
	.string "plots. Then take what they know\l"
	.string "somewhere honest.$"

ParcelWeather_Rain_Text_0:
# 45 "data/maps/ParcelWeather/scripts.pory"
	.string "Marlowe: Hydrology Division. I don't\n"
	.string "forecast the rain, Ranger.\n"
	.string "I make it. Stand under this and learn.$"

ParcelWeather_Rain_Text_1:
# 46 "data/maps/ParcelWeather/scripts.pory"
	.string "Marlowe: …Hm. The model held. The team\n"
	.string "didn't. I hate when those come apart\l"
	.string "separately.$"

ParcelWeather_Rain_Text_2:
# 47 "data/maps/ParcelWeather/scripts.pory"
	.string "Marlowe: We can drop a monsoon on a\n"
	.string "test plot to order. People see the demo\l"
	.string "and assume we can end a drought.\p"
	.string "We can't. We can only move the misery to\n"
	.string "someone else's map. But the demo is\l"
	.string "what gets funded.$"

ParcelWeather_Sun_Text_0:
# 53 "data/maps/ParcelWeather/scripts.pory"
	.string "Helio: Solar Forcing. I keep this plot in\n"
	.string "a permanent fine afternoon.\p"
	.string "Nothing dies of a fine afternoon. Until\n"
	.string "it does.$"

ParcelWeather_Sun_Text_1:
# 54 "data/maps/ParcelWeather/scripts.pory"
	.string "Helio: Bright work. You don't wilt. Most\n"
	.string "do, in my weather.$"

ParcelWeather_Sun_Text_2:
# 55 "data/maps/ParcelWeather/scripts.pory"
	.string "Helio: A little more sun, a longer\n"
	.string "season, a bigger yield -- that's the\l"
	.string "pitch. They leave out the part where\l"
	.string "the soil cooks and the water leaves.\p"
	.string "Pleasant is not the same as alive. I tell\n"
	.string "them. They like the brochure better.$"

ParcelWeather_Sand_Text_0:
# 61 "data/maps/ParcelWeather/scripts.pory"
	.string "Dune: Aridity Division. This plot used\n"
	.string "to be marsh. I made it a desert in a\l"
	.string "season, for science.\p"
	.string "Watch your footing.$"

ParcelWeather_Sand_Text_1:
# 62 "data/maps/ParcelWeather/scripts.pory"
	.string "Dune: Grit, you've got. Fitting. It's the\n"
	.string "only thing that grows in my conditions.$"

ParcelWeather_Sand_Text_2:
# 63 "data/maps/ParcelWeather/scripts.pory"
	.string "Dune: My job is proving a dried-out\n"
	.string "place can still 'support managed use.'\l"
	.string "It can support a sandstorm and a\l"
	.string "lawsuit, mostly.\p"
	.string "You can take a wetland apart fast.\n"
	.string "Putting one back is not in my budget\l"
	.string "line.$"

ParcelWeather_Ice_Text_0:
# 69 "data/maps/ParcelWeather/scripts.pory"
	.string "Frosk: Cryosphere Division. I keep one\n"
	.string "plot frozen while the world thaws.\p"
	.string "It costs a fortune. That's rather the\n"
	.string "point.$"

ParcelWeather_Ice_Text_1:
# 70 "data/maps/ParcelWeather/scripts.pory"
	.string "Frosk: Cold-blooded battling. I\n"
	.string "approve. The warm-hearted ones never\l"
	.string "last my hail.$"

ParcelWeather_Ice_Text_2:
# 71 "data/maps/ParcelWeather/scripts.pory"
	.string "Frosk: I can hold ice on a single square\n"
	.string "against the whole summer, if you pay\l"
	.string "the power bill.\p"
	.string "That's what 'climate resilience' means\n"
	.string "once you read the invoice: a frozen\l"
	.string "plot for whoever can afford one, and\l"
	.string "the thaw for everyone else.$"

ParcelWeather_Director_Text_0:
# 80 "data/maps/ParcelWeather/scripts.pory"
	.string "Vane: The four are yours, and the\n"
	.string "station's models with them.\p"
	.string "We found every knob on the sky and\n"
	.string "learned the wrong lesson from it. Don't\l"
	.string "you.$"

ParcelWeather_Director_Text_1:
# 85 "data/maps/ParcelWeather/scripts.pory"
	.string "Vane: Not yet. Beat my four divisions\n"
	.string "first. I don't spend a battle on half a\l"
	.string "job.\p"
	.string "Rain, sun, sand, ice. All of them.$"

ParcelWeather_Director_Text_2:
# 90 "data/maps/ParcelWeather/scripts.pory"
	.string "Vane: Three of four. The Solar plot is\n"
	.string "still standing. Finish it.$"

ParcelWeather_Director_Text_3:
# 95 "data/maps/ParcelWeather/scripts.pory"
	.string "Vane: Close. The Aridity Division still\n"
	.string "holds. Then come back.$"

ParcelWeather_Director_Text_4:
# 100 "data/maps/ParcelWeather/scripts.pory"
	.string "Vane: All but the ice. Frosk is stubborn\n"
	.string "as the cold. Beat the cold, then me.$"

ParcelWeather_Director_Text_5:
# 104 "data/maps/ParcelWeather/scripts.pory"
	.string "Vane: All four. Good -- they're the best\n"
	.string "minds I have, and you walked through\l"
	.string "every one.\p"
	.string "Director, Climate Futures. We model the\n"
	.string "whole sky here: rain, sun, sand, ice, the\l"
	.string "lot. Mereholt pays us to insist the\l"
	.string "planet is a machine with knobs, and we\l"
	.string "have been very good at finding the\l"
	.string "knobs.$"

ParcelWeather_Director_Text_6:
# 105 "data/maps/ParcelWeather/scripts.pory"
	.string "Vane: The trouble is, it was never a\n"
	.string "machine. It's a body. You can fever it;\l"
	.string "you can't tune it.\p"
	.string "But 'we can manage it' is so much easier\n"
	.string "to fund than 'we have to stop.' So that\l"
	.string "is the line we sell.$"

ParcelWeather_Director_Text_7:
# 106 "data/maps/ParcelWeather/scripts.pory"
	.string "Vane: You've read the real weather out\n"
	.string "there. The thaw. The bloom. The dredged\l"
	.string "sea. Now beat the people paid to call it\l"
	.string "adjustable -- and take what we know\l"
	.string "somewhere it might do some good.$"

ParcelWeather_Director_Text_8:
# 108 "data/maps/ParcelWeather/scripts.pory"
	.string "Vane: Show me you've earned the kit. All\n"
	.string "four skies. Right now.$"

ParcelWeather_Director_Text_9:
# 109 "data/maps/ParcelWeather/scripts.pory"
	.string "Vane: …Cleanly done. In any weather I\n"
	.string "could throw. That's the whole of the\l"
	.string "skill, in the end.$"

ParcelWeather_Director_Text_10:
# 110 "data/maps/ParcelWeather/scripts.pory"
	.string "Vane unclips four small stones from the\n"
	.string "division rack and presses them into\l"
	.string "your hand.\p"
	.string "Vane: The weather rocks. They hold a\n"
	.string "sky longer in a fight. We used them to\l"
	.string "lie more convincingly.\p"
	.string "Maybe you'll use them to keep your feet\n"
	.string "in worse weather than this. Heaven\l"
	.string "knows it's coming.$"

ParcelWeather_Director_Text_11:
# 119 "data/maps/ParcelWeather/scripts.pory"
	.string "Vane: And the stamp that rides with the\n"
	.string "kit -- a Deepwater clearance.\l"
	.string "Mereholt's notion, not mine.\p"
	.string "It authorizes the gear that goes under\n"
	.string "the water, not only over it. DIVE.$"

ParcelWeather_Director_Text_12:
# 122 "data/maps/ParcelWeather/scripts.pory"
	.string "Vane: Now go. Before I remember which\n"
	.string "side of this fence pays me.$"

ParcelWeather_ReturnFerry_Text_0:
# 130 "data/maps/ParcelWeather/scripts.pory"
	.string "Sailor: Back to the dock town, Ranger?\p"
	.string "Honest air out there, at least.\n"
	.string "Whatever they sell in here, it isn't\l"
	.string "that.$"

ParcelWeather_ReturnFerry_Text_1:
# 132 "data/maps/ParcelWeather/scripts.pory"
	.string "Sailor: Take your time. Mind the fans.$"
