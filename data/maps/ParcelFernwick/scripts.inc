ParcelFernwick_MapScripts::
	.byte 0


ParcelFernwick_ToMistwood::
# 12 "data/maps/ParcelFernwick/scripts.pory"
	warp MAP_PARCEL_MISTWOOD, 14, 1
# 13 "data/maps/ParcelFernwick/scripts.pory"
	waitstate
	end


ParcelFernwick_GateWard::
# 19 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GATE_STATION, ParcelFernwick_GateWard_Text_0, ParcelFernwick_GateWard_Text_1, ParcelFernwick_GateWard_Defeated
# 23 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 24 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 25 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_GateWard_Text_2, MSGBOX_DEFAULT
# 26 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_GateWard_Defeated::
# 31 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_STATION
# 32 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_GateWard_Defeated_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Lookout::
# 39 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_LOOKOUT, ParcelFernwick_Lookout_Text_0, ParcelFernwick_Lookout_Text_1
# 42 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Lookout_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelFernwick_Birder::
# 47 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BIRDER, ParcelFernwick_Birder_Text_0, ParcelFernwick_Birder_Text_1
# 50 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Birder_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelFernwick_Ranger::
# 56 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 57 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 58 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Ranger_2
# 61 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Ranger_Text_1, MSGBOX_DEFAULT
ParcelFernwick_Ranger_1:
# 63 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Ranger_2:
# 59 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Ranger_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwick_Ranger_1


ParcelFernwick_OldMan::
# 68 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 69 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 70 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_OldMan_Text_0, MSGBOX_DEFAULT
# 71 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Woman::
# 76 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 77 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 78 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ParcelFernwick_Woman_2
# 81 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_1, MSGBOX_DEFAULT
ParcelFernwick_Woman_1:
# 83 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Woman_2:
# 79 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwick_Woman_1


ParcelFernwick_Boy::
# 88 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 89 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 90 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Boy_Text_0, MSGBOX_DEFAULT
# 91 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Girl::
# 96 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 97 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 98 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Girl_Text_0, MSGBOX_DEFAULT
# 99 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Fisher::
# 104 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 105 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 106 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Fisher_Text_0, MSGBOX_DEFAULT
# 107 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Scientist::
# 112 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 113 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 114 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Scientist_2
# 117 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_1, MSGBOX_DEFAULT
ParcelFernwick_Scientist_1:
# 119 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Scientist_2:
# 115 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwick_Scientist_1


ParcelFernwick_Gentleman::
# 124 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 125 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 126 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gentleman_Text_0, MSGBOX_DEFAULT
# 127 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Clerk::
# 132 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 133 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 134 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Clerk_Text_0, MSGBOX_DEFAULT
# 135 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Mother::
# 140 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 141 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 142 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Mother_Text_0, MSGBOX_DEFAULT
# 143 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_ItemSuperPotion::
# 148 "data/maps/ParcelFernwick/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelFernwick_HallSign::
# 154 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HallSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_HQSign::
# 159 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HQSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_SurveySign::
# 164 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_SurveySign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_FisherSign::
# 169 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_FisherSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_CitySign::
# 174 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_CitySign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_T_Ella::
# 180 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_ELLA, ParcelFernwick_T_Ella_Text_0, ParcelFernwick_T_Ella_Text_1
# 183 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_Text_2, MSGBOX_DEFAULT
	end


ParcelFernwick_T_Henrik::
# 187 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_HENRIK, ParcelFernwick_T_Henrik_Text_0, ParcelFernwick_T_Henrik_Text_1
# 190 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_Text_2, MSGBOX_DEFAULT
	end


ParcelFernwick_T_Steinar::
# 194 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_STEINAR, ParcelFernwick_T_Steinar_Text_0, ParcelFernwick_T_Steinar_Text_1
# 197 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_Text_2, MSGBOX_DEFAULT
	end


ParcelFernwick_T_Marte::
# 201 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_MARTE, ParcelFernwick_T_Marte_Text_0, ParcelFernwick_T_Marte_Text_1
# 204 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_Text_2, MSGBOX_DEFAULT
	end


ParcelFernwick_T_Leon::
# 208 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_LEON, ParcelFernwick_T_Leon_Text_0, ParcelFernwick_T_Leon_Text_1
# 211 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_Text_2, MSGBOX_DEFAULT
	end


ParcelFernwick_T_Thea::
# 215 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_THEA, ParcelFernwick_T_Thea_Text_0, ParcelFernwick_T_Thea_Text_1
# 218 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_Text_2, MSGBOX_DEFAULT
	end


ParcelFernwick_GateWard_Text_0:
# 20 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: Station checkpoint. Nobody goes\n"
	.string "north to the marsh without clearance.\p"
	.string "You want it? Earn it.$"

ParcelFernwick_GateWard_Text_1:
# 21 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: Cleared. Logged.$"

ParcelFernwick_GateWard_Text_2:
# 25 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: You're in the log. Keep your card\n"
	.string "on you. The next checkpoint won't take\l"
	.string "my word for it.$"

ParcelFernwick_GateWard_Defeated_Text_0:
# 32 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: Station clearance: granted. No\n"
	.string "ceremony. That's not what this is.$"

ParcelFernwick_Lookout_Text_0:
# 40 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARR: Nice view from up here. You can\n"
	.string "see the whole marsh.\p"
	.string "You can see who's coming, too.$"

ParcelFernwick_Lookout_Text_1:
# 41 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARR: Tch.$"

ParcelFernwick_Lookout_Text_2:
# 42 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARR: Write your little report. It\n"
	.string "changes nothing out here.$"

ParcelFernwick_Birder_Text_0:
# 48 "data/maps/ParcelFernwick/scripts.pory"
	.string "NERI: Shh! I'm counting nests! ...Okay.\n"
	.string "Fine. One battle.$"

ParcelFernwick_Birder_Text_1:
# 49 "data/maps/ParcelFernwick/scripts.pory"
	.string "NERI: Fewer nests every spring, and now\n"
	.string "fewer wins.$"

ParcelFernwick_Birder_Text_2:
# 50 "data/maps/ParcelFernwick/scripts.pory"
	.string "NERI: Nobody writes the nest counts\n"
	.string "down but me. Somebody should.$"

ParcelFernwick_Ranger_Text_0:
# 59 "data/maps/ParcelFernwick/scripts.pory"
	.string "RANGER: Half the station's been called\n"
	.string "to the hearings as witnesses. The other\l"
	.string "half is covering their shifts.\p"
	.string "HALE's doing both.$"

ParcelFernwick_Ranger_Text_1:
# 61 "data/maps/ParcelFernwick/scripts.pory"
	.string "RANGER: District Station. HALE's inside,\n"
	.string "if you're the one he keeps mentioning.\p"
	.string "He mentions you a lot, for a man who\n"
	.string "doesn't talk.$"

ParcelFernwick_OldMan_Text_0:
# 70 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: This was a fishing village\n"
	.string "before the Corps put the station here.\p"
	.string "Now it's a fishing village with\n"
	.string "paperwork.$"

ParcelFernwick_Woman_Text_0:
# 79 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: You passed TARN's exam? He\n"
	.string "didn't smile, did he. He never smiles. I\l"
	.string "think it's a Tidewater regulation.$"

ParcelFernwick_Woman_Text_1:
# 81 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: The Certification Hall's right\n"
	.string "there. TARN runs the exams.\p"
	.string "He's not as scary as the sign makes him\n"
	.string "look. He's scarier.$"

ParcelFernwick_Boy_Text_0:
# 90 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: I'm gonna be a RANGER when I grow\n"
	.string "up! Or a fisherman.\p"
	.string "Or a MEREHOLT guy. They have the best\n"
	.string "boots.$"

ParcelFernwick_Girl_Text_0:
# 98 "data/maps/ParcelFernwick/scripts.pory"
	.string "GIRL: The pond used to have POLIWAG in\n"
	.string "it! Now it just has ducks.\p"
	.string "Well. WINGULL. Same thing.$"

ParcelFernwick_Fisher_Text_0:
# 106 "data/maps/ParcelFernwick/scripts.pory"
	.string "FISHER: The marsh water's been low\n"
	.string "since spring. You can walk to places you\l"
	.string "used to row to.\p"
	.string "That's not good, whatever the Council\n"
	.string "says.$"

ParcelFernwick_Scientist_Text_0:
# 115 "data/maps/ParcelFernwick/scripts.pory"
	.string "SURVEYOR: Forty years of measuring and\n"
	.string "nobody cared. Now the lawyers want the\l"
	.string "numbers by Thursday.\p"
	.string "We don't have a Thursday setting.$"

ParcelFernwick_Scientist_Text_1:
# 117 "data/maps/ParcelFernwick/scripts.pory"
	.string "SURVEYOR: We measure. That's all we do.\n"
	.string "Forty years of measuring.\p"
	.string "ILEX is inside. She'll tell you it's\n"
	.string "boring. She's lying.$"

ParcelFernwick_Gentleman_Text_0:
# 126 "data/maps/ParcelFernwick/scripts.pory"
	.string "GENTLEMAN: MEREHOLT paid for the\n"
	.string "fountain. It says so on the fountain.\p"
	.string "It says so on most things around here,\n"
	.string "if you read the small plates.$"

ParcelFernwick_Clerk_Text_0:
# 134 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Day rate at the marsh works is\n"
	.string "up again. Don't ask what the work is.\p"
	.string "Nobody asks. That's the deal.$"

ParcelFernwick_Mother_Text_0:
# 142 "data/maps/ParcelFernwick/scripts.pory"
	.string "MOTHER: My boy wants to be a RANGER. I\n"
	.string "told him RANGERS don't get paid.\p"
	.string "He said that's fine, he'll be a MEREHOLT\n"
	.string "guy on weekends.$"

ParcelFernwick_HallSign_Text_0:
# 154 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE CLIMATE CORPS\n"
	.string "CERTIFICATION HALL\p"
	.string "Forest Certification: practical\n"
	.string "examination.\n"
	.string "Examiner: TARN, Tidewater Division.$"

ParcelFernwick_HQSign_Text_0:
# 159 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE CLIMATE CORPS\n"
	.string "DISTRICT STATION\p"
	.string "Rangers, provisionals and the public:\n"
	.string "front desk.$"

ParcelFernwick_SurveySign_Text_0:
# 164 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE SURVEY\n"
	.string "District office\p"
	.string "Long-baseline monitoring. Soil cores,\n"
	.string "water logs, repeat photography.\p"
	.string "We do not issue press releases.$"

ParcelFernwick_FisherSign_Text_0:
# 169 "data/maps/ParcelFernwick/scripts.pory"
	.string "GRETTIR'S\n"
	.string "Rods. Bait. Marsh advice.\p"
	.string "The advice is free and you won't take\n"
	.string "it.$"

ParcelFernwick_CitySign_Text_0:
# 174 "data/maps/ParcelFernwick/scripts.pory"
	.string "FERNWICK\n"
	.string "District seat, Saltmarsh Coast\p"
	.string "A smaller plate: PROMENADE AND\n"
	.string "FOUNTAIN BY THE MEREHOLT FOUNDATION.$"

ParcelFernwick_T_Ella_Text_0:
# 181 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: The park pond's new. Nothing lives\n"
	.string "in it yet. The CORPS says give it a year.\l"
	.string "Battle?$"

ParcelFernwick_T_Ella_Text_1:
# 182 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: A year, they said.$"

ParcelFernwick_T_Ella_Text_2:
# 183 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: TARN failed my brother twice. He's\n"
	.string "at the HALL every day anyway. That's\l"
	.string "FERNWICK.$"

ParcelFernwick_T_Henrik_Text_0:
# 188 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: The district station sends\n"
	.string "provisionals north and gets reports\l"
	.string "back. Never the provisionals. Battle!$"

ParcelFernwick_T_Henrik_Text_1:
# 189 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Some come back, then.$"

ParcelFernwick_T_Henrik_Text_2:
# 190 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: ILEX files everything at the\n"
	.string "survey office. Everything. I asked her\l"
	.string "what for. She said 'later'.$"

ParcelFernwick_T_Steinar_Text_0:
# 195 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Down from the marsh road. The\n"
	.string "plaza's the only flat ground in forty\l"
	.string "miles. Battle for it.$"

ParcelFernwick_T_Steinar_Text_1:
# 196 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Share the flat ground, then.$"

ParcelFernwick_T_Steinar_Text_2:
# 197 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: The north checkpoint's\n"
	.string "WARD's. He doesn't bend. The marsh is\l"
	.string "past him and the marsh is worse than he\l"
	.string "is.$"

ParcelFernwick_T_Marte_Text_0:
# 202 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: South square's where the\n"
	.string "MISTWOOD road comes in. Everyone comes\l"
	.string "in tired. Easy battles.$"

ParcelFernwick_T_Marte_Text_1:
# 203 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Not that tired, then.$"

ParcelFernwick_T_Marte_Text_2:
# 204 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: The CENTER's free for\n"
	.string "provisionals. The MART isn't. The CORPS\l"
	.string "pays for healing, not REPELS. Funny\l"
	.string "priorities.$"

ParcelFernwick_T_Leon_Text_0:
# 209 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: The square's the only place in\n"
	.string "FERNWICK with grass worth a bug.\l"
	.string "Battle!$"

ParcelFernwick_T_Leon_Text_1:
# 210 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Worth a bug. Not a battle.$"

ParcelFernwick_T_Leon_Text_2:
# 211 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: WURMPLE in the park, none by the\n"
	.string "station. The station's all pavement.\l"
	.string "Pavement's the point, my dad says.$"

ParcelFernwick_T_Thea_Text_0:
# 216 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Cadet THEA, station duty. HALE\n"
	.string "says spar every provisional who\l"
	.string "crosses the plaza. You crossed it.$"

ParcelFernwick_T_Thea_Text_1:
# 217 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: HALE will want the score.$"

ParcelFernwick_T_Thea_Text_2:
# 218 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Every cadet wants the Reedmere\n"
	.string "posting. The marsh is where things\l"
	.string "happen. Things aren't good, but they\l"
	.string "happen.$"
