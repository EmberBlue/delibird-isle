ParcelWeather_MapScripts::
# 11 "data/maps/ParcelWeather/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelWeather_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelWeather_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/ParcelWeather/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ParcelWeather_FirstEntry
	.2byte 0


ParcelWeather_FirstEntry::
# 17 "data/maps/ParcelWeather/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_ARRIVAL, ParcelWeather_FirstEntry_2
# 21 "data/maps/ParcelWeather/scripts.pory"
	lockall
# 22 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_FirstEntry_Text_0, MSGBOX_DEFAULT
# 23 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_FirstEntry_Text_1, MSGBOX_DEFAULT
# 24 "data/maps/ParcelWeather/scripts.pory"
	setflag FLAG_SKALDMERE_WEATHER_ARRIVAL
# 25 "data/maps/ParcelWeather/scripts.pory"
	releaseall
	end

ParcelWeather_FirstEntry_2:
	end


ParcelWeather_Rain::
# 31 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RAIN, ParcelWeather_Rain_Text_0, ParcelWeather_Rain_Text_1
# 34 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_Sun::
# 38 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUN, ParcelWeather_Sun_Text_0, ParcelWeather_Sun_Text_1
# 41 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_Sand::
# 45 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SAND, ParcelWeather_Sand_Text_0, ParcelWeather_Sand_Text_1
# 48 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_Ice::
# 52 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ICE, ParcelWeather_Ice_Text_0, ParcelWeather_Ice_Text_1
# 55 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_Ask::
# 61 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_ASK, ParcelWeather_Ask_Text_0, ParcelWeather_Ask_Text_1
# 64 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_Brit::
# 68 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_BRIT, ParcelWeather_Brit_Text_0, ParcelWeather_Brit_Text_1
# 71 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_Cato::
# 75 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_CATO, ParcelWeather_Cato_Text_0, ParcelWeather_Cato_Text_1
# 78 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_Dis::
# 82 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_DIS, ParcelWeather_Dis_Text_0, ParcelWeather_Dis_Text_1
# 85 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_Ebba::
# 89 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_EBBA, ParcelWeather_Ebba_Text_0, ParcelWeather_Ebba_Text_1
# 92 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_Frode::
# 96 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_FINN2, ParcelWeather_Frode_Text_0, ParcelWeather_Frode_Text_1
# 99 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_Gaute::
# 103 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_GAUTE, ParcelWeather_Gaute_Text_0, ParcelWeather_Gaute_Text_1
# 106 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Gaute_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_Hege::
# 110 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_HEGE, ParcelWeather_Hege_Text_0, ParcelWeather_Hege_Text_1
# 113 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_ReturnFerry::
# 119 "data/maps/ParcelWeather/scripts.pory"
	lock
# 120 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 121 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_ReturnFerry_Text_0, MSGBOX_YESNO
# 122 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_ReturnFerry_2
# 127 "data/maps/ParcelWeather/scripts.pory"
	closemessage
# 128 "data/maps/ParcelWeather/scripts.pory"
	playse SE_SHIP
# 129 "data/maps/ParcelWeather/scripts.pory"
	delay 40
# 130 "data/maps/ParcelWeather/scripts.pory"
	warp MAP_PARCEL_ISLE, 15, 31
# 131 "data/maps/ParcelWeather/scripts.pory"
	waitstate
	end

ParcelWeather_ReturnFerry_2:
# 123 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_ReturnFerry_Text_1, MSGBOX_DEFAULT
# 124 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_ItemMaxEther::
# 134 "data/maps/ParcelWeather/scripts.pory"
	finditem ITEM_MAX_ETHER
	end


ParcelWeather_ItemRareCandy::
# 135 "data/maps/ParcelWeather/scripts.pory"
	finditem ITEM_RARE_CANDY
	end


ParcelWeather_SignGate::
# 137 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_SignGate_Text_0, MSGBOX_SIGN
	end


ParcelWeather_SignPlots::
# 141 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_SignPlots_Text_0, MSGBOX_SIGN
	end


ParcelWeather_T_Amund::
# 147 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_AMUND, ParcelWeather_T_Amund_Text_0, ParcelWeather_T_Amund_Text_1
# 150 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_T_Ragnhild::
# 154 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_RAGNHILD, ParcelWeather_T_Ragnhild_Text_0, ParcelWeather_T_Ragnhild_Text_1
# 157 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_T_Oyvind::
# 161 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_OYVIND, ParcelWeather_T_Oyvind_Text_0, ParcelWeather_T_Oyvind_Text_1
# 164 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_Text_2, MSGBOX_DEFAULT
	end


ParcelWeather_FirstEntry_Text_0:
# 22 "data/maps/ParcelWeather/scripts.pory"
	.string "A sign over the landing: MEREHOLT\n"
	.string "CLIMATE FUTURES -- ATMOSPHERIC\l"
	.string "DIVISION. Managing tomorrow's weather,\l"
	.string "today.\p"
	.string "Fans. Instruments. Four plots up the\n"
	.string "slope, each under its own private sky:\l"
	.string "rain on one, a fine afternoon on the\l"
	.string "next, sand, frost.$"

ParcelWeather_FirstEntry_Text_1:
# 23 "data/maps/ParcelWeather/scripts.pory"
	.string "The whole journey has been the real\n"
	.string "weather. The thaw, the bloom, the\l"
	.string "failing marsh.\p"
	.string "These are the people paid to call it\n"
	.string "adjustable. Beat them on their own\l"
	.string "plots. Then take what they know\l"
	.string "somewhere it might do some good.$"

ParcelWeather_Rain_Text_0:
# 32 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: Hydrology Division. I don't\n"
	.string "forecast the rain, RANGER. I make it.\l"
	.string "Stand under this and learn.$"

ParcelWeather_Rain_Text_1:
# 33 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: …Hm. The model held. The team\n"
	.string "didn't. I hate when those come apart\l"
	.string "separately.$"

ParcelWeather_Rain_Text_2:
# 34 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: We can drop a monsoon on a\n"
	.string "test plot to order. People see the demo\l"
	.string "and assume we can end a drought.\p"
	.string "We can't. We can only move the misery to\n"
	.string "someone else's map. But the demo is\l"
	.string "what gets funded.$"

ParcelWeather_Sun_Text_0:
# 39 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Solar Forcing. I keep this plot\n"
	.string "in a permanent fine afternoon. Nothing\l"
	.string "dies of a fine afternoon. Until it does.$"

ParcelWeather_Sun_Text_1:
# 40 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Bright work. You don't wilt. Most\n"
	.string "do, in my weather.$"

ParcelWeather_Sun_Text_2:
# 41 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: A little more sun, a longer\n"
	.string "season, a bigger yield. That's the pitch.\l"
	.string "They leave out the part where the soil\l"
	.string "cooks and the water leaves.\p"
	.string "Pleasant is not the same as alive. I tell\n"
	.string "them. They like pleasant.$"

ParcelWeather_Sand_Text_0:
# 46 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: Aridity Division. This plot used\n"
	.string "to be marsh. I made it a desert in a\l"
	.string "season, for science. Watch your\l"
	.string "footing.$"

ParcelWeather_Sand_Text_1:
# 47 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: Grit, you've got. Fitting. It's the\n"
	.string "only thing that grows in my conditions.$"

ParcelWeather_Sand_Text_2:
# 48 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: My job is proving a dried-out\n"
	.string "place can still 'support managed use'.\l"
	.string "It can support a sandstorm and a\l"
	.string "lawsuit, mostly.\p"
	.string "You can take a wetland apart fast.\n"
	.string "Putting one back is not in my budget\l"
	.string "line.$"

ParcelWeather_Ice_Text_0:
# 53 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Cryosphere Division. I keep one\n"
	.string "plot frozen while the world thaws. It\l"
	.string "costs a fortune. That's rather the\l"
	.string "point.$"

ParcelWeather_Ice_Text_1:
# 54 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Cold-blooded battling. I\n"
	.string "approve. The warm-hearted ones never\l"
	.string "last my hail.$"

ParcelWeather_Ice_Text_2:
# 55 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: I can hold ice on a single square\n"
	.string "against the whole summer, if you pay\l"
	.string "the power bill.\p"
	.string "That's what 'climate resilience' means\n"
	.string "once you read the invoice. A frozen plot\l"
	.string "for whoever can afford one.$"

ParcelWeather_Ask_Text_0:
# 62 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Breeder, Hydrology plot. My\n"
	.string "CASTFORM changes with the plot. So do\l"
	.string "I. Battle.$"

ParcelWeather_Ask_Text_1:
# 63 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Changed again.$"

ParcelWeather_Ask_Text_2:
# 64 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: CASTFORM's the station mascot. It\n"
	.string "becomes whatever sky you put it under.\l"
	.string "The director says that's the whole\l"
	.string "philosophy. He doesn't say it like a\l"
	.string "compliment.$"

ParcelWeather_Brit_Text_0:
# 69 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Solar plot. We're at thirty-one\n"
	.string "days without rain, on purpose. Battle\l"
	.string "before the NUMEL overheats.$"

ParcelWeather_Brit_Text_1:
# 70 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: It overheated.$"

ParcelWeather_Brit_Text_2:
# 71 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Day thirty-two tomorrow. The\n"
	.string "grass went brown on day nine. Nobody's\l"
	.string "written that down. It's not a result,\l"
	.string "it's a side effect.$"

ParcelWeather_Cato_Text_0:
# 76 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Aridity plot. I shovel sand onto a\n"
	.string "marsh for a living. Battle. Please.$"

ParcelWeather_Cato_Text_1:
# 77 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Thanks. Needed that.$"

ParcelWeather_Cato_Text_2:
# 78 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: There were POLIWAG in this plot\n"
	.string "when I started. I don't know where they\l"
	.string "went. I know I'm not supposed to ask.$"

ParcelWeather_Dis_Text_0:
# 83 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Cryosphere plot. We keep one\n"
	.string "square frozen. It's the most expensive\l"
	.string "square on the island. Battle.$"

ParcelWeather_Dis_Text_1:
# 84 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Expensive loss.$"

ParcelWeather_Dis_Text_2:
# 85 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: The power for the ice plot comes\n"
	.string "up from the coast works. The coast\l"
	.string "works run on the catch. So the frozen\l"
	.string "square is made of fish, if you follow it\l"
	.string "back.$"

ParcelWeather_Ebba_Text_0:
# 90 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Corps liaison. I'm meant to\n"
	.string "observe. Observing's dull. Spar.$"

ParcelWeather_Ebba_Text_1:
# 91 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Observed.$"

ParcelWeather_Ebba_Text_2:
# 92 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: HALE sent me to count what the\n"
	.string "station publishes against what it\l"
	.string "measures. Two different numbers. Every\l"
	.string "month.$"

ParcelWeather_Frode_Text_0:
# 97 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: I study the old ground under the\n"
	.string "plots. Pollen. Peat. What the weather\l"
	.string "WAS. Nobody funds what was. Battle.$"

ParcelWeather_Frode_Text_1:
# 98 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: What was, lost to what is.$"

ParcelWeather_Frode_Text_2:
# 99 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: The peat says this slope had a\n"
	.string "marsh for nine thousand years. The\l"
	.string "plot's had sand for one. Guess which\l"
	.string "one's in the brochure.$"

ParcelWeather_Gaute_Text_0:
# 104 "data/maps/ParcelWeather/scripts.pory"
	.string "GAUTE: I fly the instrument birds.\n"
	.string "SWELLOW with sensors. They hate it.\l"
	.string "Battle.$"

ParcelWeather_Gaute_Text_1:
# 105 "data/maps/ParcelWeather/scripts.pory"
	.string "GAUTE: They'd have won.$"

ParcelWeather_Gaute_Text_2:
# 106 "data/maps/ParcelWeather/scripts.pory"
	.string "GAUTE: The birds read the real sky, over\n"
	.string "the fence. The plots read the pretend\l"
	.string "sky. The director keeps both sets. He\l"
	.string "only publishes one.$"

ParcelWeather_Hege_Text_0:
# 111 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: The bridge is the best place to\n"
	.string "think. The water doesn't care what the\l"
	.string "plots say. Battle me on it.$"

ParcelWeather_Hege_Text_1:
# 112 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: The water still doesn't care.$"

ParcelWeather_Hege_Text_2:
# 113 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: The director isn't a liar. That's\n"
	.string "what's hard. He knows exactly what the\l"
	.string "station is. He runs it anyway, so\l"
	.string "somebody honest does.$"

ParcelWeather_ReturnFerry_Text_0:
# 121 "data/maps/ParcelWeather/scripts.pory"
	.string "SAILOR: Back to SALTWICK, RANGER?\n"
	.string "Honest air out there, at least.\l"
	.string "Whatever they sell in here, it isn't\l"
	.string "that.$"

ParcelWeather_ReturnFerry_Text_1:
# 123 "data/maps/ParcelWeather/scripts.pory"
	.string "SAILOR: Take your time. Mind the fans.$"

ParcelWeather_SignGate_Text_0:
# 137 "data/maps/ParcelWeather/scripts.pory"
	.string "MEREHOLT CLIMATE FUTURES --\n"
	.string "ATMOSPHERIC DIVISION\p"
	.string "Managing tomorrow's weather, today.\n"
	.string "Visitors report to the institute. Plots\l"
	.string "are live: do not enter a plot during a\l"
	.string "demonstration.$"

ParcelWeather_SignPlots_Text_0:
# 141 "data/maps/ParcelWeather/scripts.pory"
	.string "TEST PLOTS. North-west: Aridity.\n"
	.string "North-east: Solar Forcing. East slope:\l"
	.string "Cryosphere. River: Hydrology.\p"
	.string "The real sky is not a plot.$"

ParcelWeather_T_Amund_Text_0:
# 148 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Up the east slope. The frost\n"
	.string "plot's behind me. It hums. Battle.$"

ParcelWeather_T_Amund_Text_1:
# 149 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Humming's louder than I am,\n"
	.string "apparently.$"

ParcelWeather_T_Amund_Text_2:
# 150 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: One frozen square on a warming\n"
	.string "hill. I asked what it's for.\l"
	.string "'Demonstration.' Of what? Nobody said.$"

ParcelWeather_T_Ragnhild_Text_0:
# 155 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Breeder, east plots.\n"
	.string "CASTFORM for the demos, LUDICOLO for\l"
	.string "the rain. Battle.$"

ParcelWeather_T_Ragnhild_Text_1:
# 156 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Rained on.$"

ParcelWeather_T_Ragnhild_Text_2:
# 157 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: The station publishes the\n"
	.string "plot weather. The real weather goes in a\l"
	.string "drawer. I've seen the drawer.$"

ParcelWeather_T_Oyvind_Text_0:
# 162 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: Instrument birds. XATU reads\n"
	.string "the sky better than the plots do.\l"
	.string "Battle before it tells me how this ends.$"

ParcelWeather_T_Oyvind_Text_1:
# 163 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: It told me.$"

ParcelWeather_T_Oyvind_Text_2:
# 164 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: XATU watches the real sky over\n"
	.string "the fence. The real sky's not for sale.\l"
	.string "The plots are.$"
