ParcelRiver_MapScripts::
# 29 "data/maps/ParcelRiver/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelRiver_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelRiver_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 30 "data/maps/ParcelRiver/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelRiver_SetMapVar
	.2byte 0


ParcelRiver_SetMapVar::
# 35 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


ParcelRiver_FirstEntry::
# 42 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_TEMP_1, 1
# 43 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_RIVER_ARRIVAL, ParcelRiver_FirstEntry_2
# 46 "data/maps/ParcelRiver/scripts.pory"
	lockall
# 47 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FirstEntry_Text_0, MSGBOX_DEFAULT
# 48 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FirstEntry_Text_1, MSGBOX_DEFAULT
# 49 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FirstEntry_Text_2, MSGBOX_DEFAULT
# 50 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALDMERE_RIVER_ARRIVAL
# 51 "data/maps/ParcelRiver/scripts.pory"
	releaseall
	end

ParcelRiver_FirstEntry_2:
	end


ParcelRiver_ChannelCut::
# 58 "data/maps/ParcelRiver/scripts.pory"
	lock
# 59 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 60 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 0
# 61 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 62 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_ChannelCut_2
# 67 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_ChannelCut_Text_1, MSGBOX_SIGN
# 68 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 69 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_ChannelCut_2:
# 63 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_ChannelCut_Text_0, MSGBOX_SIGN
# 64 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_DamRelic::
# 75 "data/maps/ParcelRiver/scripts.pory"
	lock
# 76 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 77 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 1
# 78 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 79 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_DamRelic_2
# 84 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_DamRelic_Text_1, MSGBOX_SIGN
# 85 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 86 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_DamRelic_2:
# 80 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_DamRelic_Text_0, MSGBOX_SIGN
# 81 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_RunoffStain::
# 92 "data/maps/ParcelRiver/scripts.pory"
	lock
# 93 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 94 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 2
# 95 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 96 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_RunoffStain_2
# 101 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_RunoffStain_Text_1, MSGBOX_SIGN
# 102 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 103 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_RunoffStain_2:
# 97 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_RunoffStain_Text_0, MSGBOX_SIGN
# 98 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_CleanReach::
# 109 "data/maps/ParcelRiver/scripts.pory"
	lock
# 110 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 111 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 3
# 112 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 113 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_CleanReach_2
# 118 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_CleanReach_Text_1, MSGBOX_SIGN
# 119 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 120 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_CleanReach_2:
# 114 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_CleanReach_Text_0, MSGBOX_SIGN
# 115 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_IrrigationBoard::
# 126 "data/maps/ParcelRiver/scripts.pory"
	lock
# 127 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 128 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 4
# 129 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 130 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_IrrigationBoard_Text_0, MSGBOX_SIGN
# 131 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Harland::
# 137 "data/maps/ParcelRiver/scripts.pory"
	lock
# 138 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 139 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 140 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 5
# 141 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 142 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_Harland_2
# 147 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_1, MSGBOX_DEFAULT
# 148 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_2, MSGBOX_DEFAULT
# 149 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_3, MSGBOX_DEFAULT
# 150 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_4, MSGBOX_DEFAULT
# 151 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_5, MSGBOX_DEFAULT
# 152 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_6, MSGBOX_DEFAULT
# 153 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_7, MSGBOX_DEFAULT
# 154 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 155 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_2:
# 143 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_0, MSGBOX_DEFAULT
# 144 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Farmer::
# 161 "data/maps/ParcelRiver/scripts.pory"
	lock
# 162 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 163 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_0, MSGBOX_DEFAULT
# 164 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_1, MSGBOX_DEFAULT
# 165 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ilex::
# 171 "data/maps/ParcelRiver/scripts.pory"
	lock
# 172 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 173 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_Ilex_2
# 178 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 179 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 63
# 180 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 181 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelRiver_Ilex_5
# 198 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_8, MSGBOX_DEFAULT
# 199 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ilex_2:
# 174 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_0, MSGBOX_DEFAULT
# 175 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ilex_5:
# 182 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_1, MSGBOX_DEFAULT
# 183 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyRiver
# 184 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_2, MSGBOX_DEFAULT
# 185 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_3, MSGBOX_DEFAULT
# 186 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_4, MSGBOX_DEFAULT
# 187 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_5, MSGBOX_DEFAULT
# 188 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_6, MSGBOX_DEFAULT
# 189 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 6
# 190 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 191 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_7, MSGBOX_DEFAULT
# 192 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALDMERE_WATERSHED_CERT
# 193 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_SUPER_POTION, 5
# 194 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_REVIVE, 2
# 195 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_ItemPotion::
# 204 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_HYPER_POTION
	end


ParcelRiver_AnglerTrainer::
# 210 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ANGLER, ParcelRiver_AnglerTrainer_Text_0, ParcelRiver_AnglerTrainer_Text_1
# 213 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_FirstEntry_Text_0:
# 47 "data/maps/ParcelRiver/scripts.pory"
	.string "The land lifts and the trees thin. The\n"
	.string "water that fouled the basin runs out of\l"
	.string "here -- clearer than below, but not\l"
	.string "clear.\p"
	.string "Upstream, somewhere, it is still right.\n"
	.string "You can almost see the line where it\l"
	.string "stops being right.$"

ParcelRiver_FirstEntry_Text_1:
# 48 "data/maps/ParcelRiver/scripts.pory"
	.string "This is worked country. Nets dry on a\n"
	.string "far rail. A crop runs green right down to\l"
	.string "the bank. A boat sits low at a mooring.\p"
	.string "Doduo takes the bank ahead, and does\n"
	.string "not hurry.$"

ParcelRiver_FirstEntry_Text_2:
# 49 "data/maps/ParcelRiver/scripts.pory"
	.string "Hale's note, folded in your kit:\p"
	.string "WATERSHED -- LIVING SYSTEM, ACTIVE\n"
	.string "USE.\n"
	.string "Read the whole river before you judge\l"
	.string "any part of it.$"

ParcelRiver_ChannelCut_Text_0:
# 63 "data/maps/ParcelRiver/scripts.pory"
	.string "The straightened cut. Measured.$"

ParcelRiver_ChannelCut_Text_1:
# 67 "data/maps/ParcelRiver/scripts.pory"
	.string "Here the river stops wandering and runs\n"
	.string "dead straight between graded banks.\l"
	.string "The water moves faster, and there is\l"
	.string "nowhere in it to rest.\p"
	.string "Someone filed this as an improvement.\n"
	.string "The fish that lived in the slack water\l"
	.string "it erased did not get a vote.$"

ParcelRiver_DamRelic_Text_0:
# 80 "data/maps/ParcelRiver/scripts.pory"
	.string "The broken dam. Noted.$"

ParcelRiver_DamRelic_Text_1:
# 84 "data/maps/ParcelRiver/scripts.pory"
	.string "A low ridge of cut timber lies across\n"
	.string "the old oxbow -- a dam, breached and\l"
	.string "never repaired. The ones that built it,\l"
	.string "and kept it whole, are not here anymore.\p"
	.string "The pond it held has gone still and\n"
	.string "green. A wetland is a thing that gets\l"
	.string "BUILT, and tended. This one is coming\l"
	.string "unbuilt, quietly, with nobody to mend it.$"

ParcelRiver_RunoffStain_Text_0:
# 97 "data/maps/ParcelRiver/scripts.pory"
	.string "The runoff edge. Recorded.$"

ParcelRiver_RunoffStain_Text_1:
# 101 "data/maps/ParcelRiver/scripts.pory"
	.string "Where the cropland meets the water, the\n"
	.string "river greens -- a bloom, fed by whatever\l"
	.string "the rain rinses off the fields.\p"
	.string "This is not poison the way the basin's\n"
	.string "pipe was poison. It is too much of an\l"
	.string "ordinary thing, all at once. It chokes a\l"
	.string "river just the same.$"

ParcelRiver_CleanReach_Text_0:
# 114 "data/maps/ParcelRiver/scripts.pory"
	.string "The clean reach. Held against the rest.$"

ParcelRiver_CleanReach_Text_1:
# 118 "data/maps/ParcelRiver/scripts.pory"
	.string "The braided reach above the cut still\n"
	.string "does it right -- splitting and rejoining\l"
	.string "over gravel bars, the water broken and\l"
	.string "bright and cold.\p"
	.string "Mayflies lift off it in the chill. Fewer\n"
	.string "than there should be. But there. This\l"
	.string "reach is the proof the river can come\l"
	.string "back -- and it is the clock running on\l"
	.string "that proof.$"

ParcelRiver_IrrigationBoard_Text_0:
# 130 "data/maps/ParcelRiver/scripts.pory"
	.string "SKALDMERE WATER BOARD\n"
	.string "MEREHOLT FOUNDATION -- STEWARD\l"
	.string "MEMBER\p"
	.string "IRRIGATION AND WATERSHED HEALTH\n"
	.string "INITIATIVE\n"
	.string "Sustainable use. Shared future.\p"
	.string "The Board sets the water rights. The\n"
	.string "Board ordered the cut straightened.\l"
	.string "The Board's steward sells the fertilizer\l"
	.string "that greens the bank.\p"
	.string "The paint is new. The signatures are the\n"
	.string "same.$"

ParcelRiver_Harland_Text_0:
# 143 "data/maps/ParcelRiver/scripts.pory"
	.string "Harland works his line and says nothing\n"
	.string "more.\p"
	.string "The water hasn't changed its mind\n"
	.string "either.$"

ParcelRiver_Harland_Text_1:
# 147 "data/maps/ParcelRiver/scripts.pory"
	.string "Harland doesn't turn from the water.\p"
	.string "Harland: You're the one with the\n"
	.string "notebook. Word came up the river ahead\l"
	.string "of you.\p"
	.string "Come to tell me the fishing's poor. As if\n"
	.string "I can't read my own water.$"

ParcelRiver_Harland_Text_2:
# 148 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: The catch is down because\n"
	.string "the river is. The cut. The bloom off the\l"
	.string "fields.$"

ParcelRiver_Harland_Text_3:
# 149 "data/maps/ParcelRiver/scripts.pory"
	.string "Harland: I KNOW why it's down. Knew\n"
	.string "before you could walk.\p"
	.string "My father fished this. His father\n"
	.string "helped build half that dam your people\l"
	.string "keep photographing -- back when\l"
	.string "building it was the work.$"

ParcelRiver_Harland_Text_4:
# 150 "data/maps/ParcelRiver/scripts.pory"
	.string "Harland: And the Board says straighten\n"
	.string "the cut, the floods stop taking my gear.\l"
	.string "The Foundation carries the note on the\l"
	.string "boat so I keep working while it all gets\l"
	.string "sorted.\p"
	.string "So what is it you'd have me do. Tie up\n"
	.string "and starve on principle?$"

ParcelRiver_Harland_Text_5:
# 151 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: …Who holds the note on the\n"
	.string "boat?$"

ParcelRiver_Harland_Text_6:
# 152 "data/maps/ParcelRiver/scripts.pory"
	.string "Harland stops reeling.\p"
	.string "Harland: A Mereholt outfit. Coastal\n"
	.string "lending.\p"
	.string "Same crest as the fertilizer sacks.\n"
	.string "Same crest as the Board.\p"
	.string "Hadn't set those side by side before.\n"
	.string "Don't care for how they line up.$"

ParcelRiver_Harland_Text_7:
# 153 "data/maps/ParcelRiver/scripts.pory"
	.string "Harland: Write your report, Ranger. Read\n"
	.string "me right when you do.\p"
	.string "I'm not your villain. I'm the man they'll\n"
	.string "send the bill to.$"

ParcelRiver_Farmer_Text_0:
# 163 "data/maps/ParcelRiver/scripts.pory"
	.string "Farmer: Mind the rows, Ranger.\p"
	.string "They tell me my runoff greens the\n"
	.string "water. Likely true. They also tell me\l"
	.string "grow more for less, or sell to the\l"
	.string "Foundation buyer at the Foundation's\l"
	.string "number.$"

ParcelRiver_Farmer_Text_1:
# 164 "data/maps/ParcelRiver/scripts.pory"
	.string "Farmer: I'd put a buffer strip along the\n"
	.string "bank tomorrow. Costs me two rows and a\l"
	.string "season's yield.\p"
	.string "You find me the one who'll pay for those\n"
	.string "two rows, and I'll dig it before you've\l"
	.string "walked home.$"

ParcelRiver_Ilex_Text_0:
# 174 "data/maps/ParcelRiver/scripts.pory"
	.string "Ilex: Stressed, not shifted. Hold that\n"
	.string "difference like a coal.\p"
	.string "Most of the river you'll meet from here\n"
	.string "has already chosen. This one hasn't.\l"
	.string "Yet.$"

ParcelRiver_Ilex_Text_1:
# 182 "data/maps/ParcelRiver/scripts.pory"
	.string "Ilex doesn't look up from the bank she's\n"
	.string "measuring.\p"
	.string "Ilex: The cut. The broken dam. The\n"
	.string "bloom. The clean reach. The Board's sign.\l"
	.string "The man on the boat.\p"
	.string "Put a name on the river.$"

ParcelRiver_Ilex_Text_2:
# 184 "data/maps/ParcelRiver/scripts.pory"
	.string "Ilex: STRESSED.\p"
	.string "The engineers are thinning; the cut\n"
	.string "took the slack water; the bloom is\l"
	.string "climbing. But the sensitive guild is\l"
	.string "still in that upstream reach. The web\l"
	.string "hasn't simplified yet.$"

ParcelRiver_Ilex_Text_3:
# 185 "data/maps/ParcelRiver/scripts.pory"
	.string "Ilex: Which means this is the rarest\n"
	.string "reading you will ever file.\p"
	.string "The one where doing the right thing in\n"
	.string "time still does something.$"

ParcelRiver_Ilex_Text_4:
# 186 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: So we intervene. Pull the\n"
	.string "cut, mend the dam --$"

ParcelRiver_Ilex_Text_5:
# 187 "data/maps/ParcelRiver/scripts.pory"
	.string "Ilex: Some of it. Not all of it, and not\n"
	.string "by signing the Board's plan.\p"
	.string "Relieve what's reversible -- the buffer\n"
	.string "strip, the bloom, the fish passage.\l"
	.string "Refuse what isn't dressed as relief:\l"
	.string "another straightened mile, another\l"
	.string "'flood control' that finishes the slack\l"
	.string "water.$"

ParcelRiver_Ilex_Text_6:
# 188 "data/maps/ParcelRiver/scripts.pory"
	.string "Ilex: A Stressed river doesn't need a\n"
	.string "hero. It needs someone who can tell the\l"
	.string "two apart and has the spine to say so\l"
	.string "out loud.$"

ParcelRiver_Ilex_Text_7:
# 191 "data/maps/ParcelRiver/scripts.pory"
	.string "Ilex straightens, and for once signs\n"
	.string "something on the spot. No ceremony. A\l"
	.string "strip of red cloth, knotted to your kit.\p"
	.string "Ilex: Watershed Certification. Hale\n"
	.string "would make you walk back for it. I won't.\p"
	.string "You read the window. Now you keep it\n"
	.string "open.$"

ParcelRiver_Ilex_Text_8:
# 198 "data/maps/ParcelRiver/scripts.pory"
	.string "Ilex kneels at the waterline, red cloth\n"
	.string "at her wrist.\p"
	.string "Ilex: Don't classify a river from one\n"
	.string "bend. Walk it -- the cut, the old dam,\l"
	.string "the bloom off the fields, the clean\l"
	.string "water above. Read the Board's sign, and\l"
	.string "hear the man on the boat.\p"
	.string "Then come put a name to it.$"

ParcelRiver_AnglerTrainer_Text_0:
# 211 "data/maps/ParcelRiver/scripts.pory"
	.string "Dell: Forty years I worked this reach.\n"
	.string "Pulled Seaking out by the armful, once.\p"
	.string "Now look at it. Battle me -- I could use\n"
	.string "the distraction.$"

ParcelRiver_AnglerTrainer_Text_1:
# 212 "data/maps/ParcelRiver/scripts.pory"
	.string "Dell: Hah. You've still got the eye for\n"
	.string "it.\n"
	.string "Wish the river did.$"

ParcelRiver_AnglerTrainer_Text_2:
# 213 "data/maps/ParcelRiver/scripts.pory"
	.string "Dell: The Board swears the cut'll bring\n"
	.string "the fish back. The Board swears a lot of\l"
	.string "things.\p"
	.string "You're the first one came up here to\n"
	.string "LOOK instead of promise. Means\l"
	.string "something.$"
