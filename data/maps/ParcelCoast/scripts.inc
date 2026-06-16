ParcelCoast_MapScripts::
# 27 "data/maps/ParcelCoast/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelCoast_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelCoast_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 28 "data/maps/ParcelCoast/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelCoast_SetMapVar
	.2byte 0


ParcelCoast_SetMapVar::
# 33 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


ParcelCoast_FirstEntry::
# 38 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_TEMP_1, 1
# 39 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COAST_ARRIVAL, ParcelCoast_FirstEntry_2
# 42 "data/maps/ParcelCoast/scripts.pory"
	lockall
# 43 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FirstEntry_Text_0, MSGBOX_DEFAULT
# 44 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FirstEntry_Text_1, MSGBOX_DEFAULT
# 45 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FirstEntry_Text_2, MSGBOX_DEFAULT
# 46 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALDMERE_COAST_ARRIVAL
# 47 "data/maps/ParcelCoast/scripts.pory"
	releaseall
	end

ParcelCoast_FirstEntry_2:
	end


ParcelCoast_Dredge::
# 54 "data/maps/ParcelCoast/scripts.pory"
	lock
# 55 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 56 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 0
# 57 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 58 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Dredge_2
# 63 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dredge_Text_1, MSGBOX_SIGN
# 64 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 65 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Dredge_2:
# 59 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dredge_Text_0, MSGBOX_SIGN
# 60 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Barren::
# 71 "data/maps/ParcelCoast/scripts.pory"
	lock
# 72 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 73 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 1
# 74 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 75 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Barren_2
# 80 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Barren_Text_1, MSGBOX_SIGN
# 81 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 82 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Barren_2:
# 76 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Barren_Text_0, MSGBOX_SIGN
# 77 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Catch::
# 88 "data/maps/ParcelCoast/scripts.pory"
	lock
# 89 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 90 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 2
# 91 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 92 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Catch_2
# 97 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Catch_Text_1, MSGBOX_SIGN
# 98 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 99 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Catch_2:
# 93 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Catch_Text_0, MSGBOX_SIGN
# 94 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Pilings::
# 105 "data/maps/ParcelCoast/scripts.pory"
	lock
# 106 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 107 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 3
# 108 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 109 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Pilings_2
# 114 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Pilings_Text_1, MSGBOX_SIGN
# 115 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 116 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Pilings_2:
# 110 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Pilings_Text_0, MSGBOX_SIGN
# 111 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Plaque::
# 122 "data/maps/ParcelCoast/scripts.pory"
	lock
# 123 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 124 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 4
# 125 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 126 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Plaque_2
# 131 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Plaque_Text_1, MSGBOX_SIGN
# 132 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Plaque_Text_2, MSGBOX_DEFAULT
# 133 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Plaque_Text_3, MSGBOX_DEFAULT
# 134 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Plaque_Text_4, MSGBOX_DEFAULT
# 135 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 136 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Plaque_2:
# 127 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Plaque_Text_0, MSGBOX_SIGN
# 128 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Harland::
# 142 "data/maps/ParcelCoast/scripts.pory"
	lock
# 143 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 144 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 145 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 5
# 146 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 147 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Harland_2
# 152 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Harland_Text_1, MSGBOX_DEFAULT
# 153 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Harland_Text_2, MSGBOX_DEFAULT
# 154 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Harland_Text_3, MSGBOX_DEFAULT
# 155 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Harland_Text_4, MSGBOX_DEFAULT
# 156 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Harland_Text_5, MSGBOX_DEFAULT
# 157 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Harland_Text_6, MSGBOX_DEFAULT
# 158 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Harland_Text_7, MSGBOX_DEFAULT
# 159 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 160 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Harland_2:
# 148 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Harland_Text_0, MSGBOX_DEFAULT
# 149 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hollis::
# 166 "data/maps/ParcelCoast/scripts.pory"
	lock
# 167 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 168 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Hollis_2
# 173 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_1, MSGBOX_DEFAULT
# 174 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_2, MSGBOX_DEFAULT
# 175 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_3, MSGBOX_DEFAULT
# 176 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_4, MSGBOX_DEFAULT
# 177 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_5, MSGBOX_DEFAULT
# 178 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_6, MSGBOX_DEFAULT
# 179 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hollis_2:
# 169 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_0, MSGBOX_DEFAULT
# 170 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hale::
# 186 "data/maps/ParcelCoast/scripts.pory"
	lock
# 187 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 188 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Hale_2
# 193 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 194 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 63
# 195 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 196 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelCoast_Hale_5
# 215 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_10, MSGBOX_DEFAULT
# 216 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_2:
# 189 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_0, MSGBOX_DEFAULT
# 190 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_5:
# 197 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_1, MSGBOX_DEFAULT
# 198 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyCoast
# 199 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_2, MSGBOX_DEFAULT
# 200 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_3, MSGBOX_DEFAULT
# 201 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_4, MSGBOX_DEFAULT
# 202 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_5, MSGBOX_DEFAULT
# 203 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_6, MSGBOX_DEFAULT
# 204 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 6
# 205 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 206 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_7, MSGBOX_DEFAULT
# 207 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALDMERE_COASTAL_CERT
# 208 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_MAX_POTION, 5
# 209 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 210 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_8, MSGBOX_DEFAULT
# 211 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_9, MSGBOX_DEFAULT
# 212 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Worker::
# 222 "data/maps/ParcelCoast/scripts.pory"
	lock
# 223 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 224 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Worker_Text_0, MSGBOX_DEFAULT
# 225 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_ItemA::
# 230 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_PEARL
	end


ParcelCoast_ItemB::
# 234 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_BIG_PEARL
	end


ParcelCoast_ReturnFerry::
# 240 "data/maps/ParcelCoast/scripts.pory"
	lock
# 241 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 242 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_0, MSGBOX_YESNO
# 243 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_ReturnFerry_2
# 248 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 249 "data/maps/ParcelCoast/scripts.pory"
	playse SE_SHIP
# 250 "data/maps/ParcelCoast/scripts.pory"
	delay 40
# 251 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_ISLE, 41, 48
# 252 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end

ParcelCoast_ReturnFerry_2:
# 244 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_1, MSGBOX_DEFAULT
# 245 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_FirstEntry_Text_0:
# 43 "data/maps/ParcelCoast/scripts.pory"
	.string "The boat rounds the headland and the\n"
	.string "harbour opens up -- and it is BUSY.\l"
	.string "Cranes, hulls, the gut-and-ice smell of\l"
	.string "a working catch. Gulls wheeling over all\l"
	.string "of it.\p"
	.string "It looks alive. You have learned, by now,\n"
	.string "to distrust how alive a place can look.$"

ParcelCoast_FirstEntry_Text_1:
# 44 "data/maps/ParcelCoast/scripts.pory"
	.string "Everything here wears the Mereholt\n"
	.string "crest. The cranes. The fuel drums. The\l"
	.string "waiting trucks.\p"
	.string "The side of the fishing boat tied at the\n"
	.string "end of the quay.$"

ParcelCoast_FirstEntry_Text_2:
# 45 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale's note is shorter than usual:\p"
	.string "THE COAST. You've read the others. This\n"
	.string "one doesn't bother to hide.\n"
	.string "See if you can still read it anyway.$"

ParcelCoast_Dredge_Text_0:
# 59 "data/maps/ParcelCoast/scripts.pory"
	.string "The dredge scar. Logged.$"

ParcelCoast_Dredge_Text_1:
# 63 "data/maps/ParcelCoast/scripts.pory"
	.string "Off the end of the quay a band of the\n"
	.string "seabed shows pale through the water --\l"
	.string "scraped to bare rock where the dredge\l"
	.string "passed, the kelp's holdfasts torn out\l"
	.string "with everything they anchored.\p"
	.string "The fish can come back, in time, if they\n"
	.string "let them. The seafloor they grew on\l"
	.string "cannot. They dredged the foundation\l"
	.string "out from under the recovery.$"

ParcelCoast_Barren_Text_0:
# 76 "data/maps/ParcelCoast/scripts.pory"
	.string "The urchin barren. Counted.$"

ParcelCoast_Barren_Text_1:
# 80 "data/maps/ParcelCoast/scripts.pory"
	.string "Where the kelp forest stood, urchins --\n"
	.string "a grey carpet of them, spines and\l"
	.string "nothing else, grazing the last fronds\l"
	.string "to stubble.\p"
	.string "Nothing thins their numbers anymore.\n"
	.string "The animal that ate the urchins was\l"
	.string "fished out years back. Pull one\l"
	.string "creature from a web and the whole\l"
	.string "forest follows it down. You are\l"
	.string "watching that happen, slowly, from a\l"
	.string "dock.$"

ParcelCoast_Catch_Text_0:
# 93 "data/maps/ParcelCoast/scripts.pory"
	.string "The sorted catch. Measured.$"

ParcelCoast_Catch_Text_1:
# 97 "data/maps/ParcelCoast/scripts.pory"
	.string "A pallet of sorted catch, iced and\n"
	.string "waiting. You walk the rows.\p"
	.string "All one size. All one age. The big old\n"
	.string "breeders that used to anchor a haul\l"
	.string "simply are not in it -- caught out years\l"
	.string "ago, never replaced.\p"
	.string "They are fishing the children now. The\n"
	.string "parents are already gone.$"

ParcelCoast_Pilings_Text_0:
# 110 "data/maps/ParcelCoast/scripts.pory"
	.string "The bare pilings. Noted.$"

ParcelCoast_Pilings_Text_1:
# 114 "data/maps/ParcelCoast/scripts.pory"
	.string "The pilings should be white with gulls\n"
	.string "this season. A hunched handful sit\l"
	.string "there instead, and the ledges past the\l"
	.string "breakwater are bare.\p"
	.string "The gulls eat the small fish. The small\n"
	.string "fish need the kelp's shelter. Take the\l"
	.string "bottom out of a web and the top falls\l"
	.string "last -- but it falls.$"

ParcelCoast_Plaque_Text_0:
# 127 "data/maps/ParcelCoast/scripts.pory"
	.string "MEREHOLT COASTAL -- CERTIFIED\n"
	.string "SUSTAINABLE HARVEST.\p"
	.string "You do not need to read it again. You\n"
	.string "know whose name holds it up now.$"

ParcelCoast_Plaque_Text_1:
# 131 "data/maps/ParcelCoast/scripts.pory"
	.string "MEREHOLT COASTAL -- CERTIFIED\n"
	.string "SUSTAINABLE HARVEST\p"
	.string "Yields managed to a scientific recovery\n"
	.string "model. Independently validated.\n"
	.string "A future for the fishery, and for the\l"
	.string "families who work it.$"

ParcelCoast_Plaque_Text_2:
# 132 "data/maps/ParcelCoast/scripts.pory"
	.string "You open your own notebook to hold the\n"
	.string "model against what you just surveyed.\p"
	.string "The margins stop you cold.$"

ParcelCoast_Plaque_Text_3:
# 133 "data/maps/ParcelCoast/scripts.pory"
	.string "The recovery curves on that plaque. The\n"
	.string "stocking formulas. The red-cloth\l"
	.string "sampling method.\p"
	.string "They are already in your notebook -- in\n"
	.string "the hand you have been reading as\l"
	.string "marginalia since the first marsh. Dr.\l"
	.string "Heron's hand.$"

ParcelCoast_Plaque_Text_4:
# 134 "data/maps/ParcelCoast/scripts.pory"
	.string "She is not missing. She was never\n"
	.string "silenced.\p"
	.string "She is the citation. Her science is the\n"
	.string "thing that signed off on all of this.\p"
	.string "You close the notebook very carefully\n"
	.string "-- the way you would close a door on\l"
	.string "something sleeping.$"

ParcelCoast_Harland_Text_0:
# 148 "data/maps/ParcelCoast/scripts.pory"
	.string "Harland works the line he isn't using.\p"
	.string "Harland: Write it true. That's the whole\n"
	.string "of what I've got left to ask anyone.$"

ParcelCoast_Harland_Text_1:
# 152 "data/maps/ParcelCoast/scripts.pory"
	.string "Harland is aboard, coiling a line he has\n"
	.string "no use for, because his hands need\l"
	.string "something to do. He sees you and does\l"
	.string "not pretend otherwise.\p"
	.string "Harland: So. You came all the way down\n"
	.string "to the bottom of it. Where the money's\l"
	.string "made and the fish aren't.$"

ParcelCoast_Harland_Text_2:
# 153 "data/maps/ParcelCoast/scripts.pory"
	.string "{PLAYER}: The grounds are collapsing.\n"
	.string "The dredge, the catch, the empty\l"
	.string "pilings. You've fished this your whole\l"
	.string "life. You knew before I did.$"

ParcelCoast_Harland_Text_3:
# 154 "data/maps/ParcelCoast/scripts.pory"
	.string "Harland: Course I knew. Better eye for\n"
	.string "this water than your whole Corps.\p"
	.string "And every season I take her out and add\n"
	.string "to it. You want to hear me say it plain?\l"
	.string "I'm helping kill it. There. Said.$"

ParcelCoast_Harland_Text_4:
# 155 "data/maps/ParcelCoast/scripts.pory"
	.string "Harland: The note on this boat is\n"
	.string "Mereholt's. The buyer's Mereholt's. The\l"
	.string "fuel, the ice, the loan against a catch I\l"
	.string "haven't landed yet -- Mereholt's.\p"
	.string "I stop fishing, I lose her. I lose her, my\n"
	.string "crew doesn't eat. So I fish it down to\l"
	.string "bones and I hate every haul. That's the\l"
	.string "whole arithmetic.$"

ParcelCoast_Harland_Text_5:
# 156 "data/maps/ParcelCoast/scripts.pory"
	.string "{PLAYER}: …I'm going to write down\n"
	.string "what I saw. All of it.$"

ParcelCoast_Harland_Text_6:
# 157 "data/maps/ParcelCoast/scripts.pory"
	.string "Harland: I know you are. I'll not ask you\n"
	.string "not to.\p"
	.string "Just -- when they read it and decide on\n"
	.string "nothing, the way they will? Remember I\l"
	.string "told you they would. So you don't go\l"
	.string "thinking it was your report that wasn't\l"
	.string "good enough.$"

ParcelCoast_Harland_Text_7:
# 158 "data/maps/ParcelCoast/scripts.pory"
	.string "Harland: It was never going to be one\n"
	.string "report that turned this. It was always\l"
	.string "going to take all of them. Mine too, if I\l"
	.string "ever find the spine.\p"
	.string "Write it true, Ranger. Somebody should,\n"
	.string "before there's nothing left out there\l"
	.string "to lie about.$"

ParcelCoast_Hollis_Text_0:
# 169 "data/maps/ParcelCoast/scripts.pory"
	.string "Hollis: The tea's still on, Ranger. The\n"
	.string "offer with it.\p"
	.string "Think about how you write it. That's all\n"
	.string "I ever ask.$"

ParcelCoast_Hollis_Text_1:
# 173 "data/maps/ParcelCoast/scripts.pory"
	.string "Hollis Aune again -- a clean desk, a\n"
	.string "window full of working harbour behind\l"
	.string "her. She pours two cups without asking.\p"
	.string "Hollis: Ranger. You've been thorough.\n"
	.string "The whole coast, I hear. Good.\l"
	.string "Thoroughness is rare.$"

ParcelCoast_Hollis_Text_2:
# 174 "data/maps/ParcelCoast/scripts.pory"
	.string "Hollis: I'll be direct, since you've\n"
	.string "earned direct. Your survey will be read\l"
	.string "-- by the Board, by the press, by the\l"
	.string "people who fund what recovery there is\l"
	.string "out there.\p"
	.string "And the model they trust, the one\n"
	.string "keeping this fishery open instead of\l"
	.string "shuttered, carries a name. A name I\l"
	.string "think you care about.$"

ParcelCoast_Hollis_Text_3:
# 175 "data/maps/ParcelCoast/scripts.pory"
	.string "{PLAYER}: …Dr. Heron's.$"

ParcelCoast_Hollis_Text_4:
# 176 "data/maps/ParcelCoast/scripts.pory"
	.string "Hollis: I would hate for one unmeasured\n"
	.string "word from you to undo her life's work.\l"
	.string "For her to be remembered as the\l"
	.string "scientist whose model failed -- instead\l"
	.string "of the one whose science is the only\l"
	.string "reason there's a fishery left to argue\l"
	.string "over at all.$"

ParcelCoast_Hollis_Text_5:
# 177 "data/maps/ParcelCoast/scripts.pory"
	.string "Hollis: So think about how you write it.\n"
	.string "For her sake.\p"
	.string "That is the whole of what I'm asking.$"

ParcelCoast_Hollis_Text_6:
# 178 "data/maps/ParcelCoast/scripts.pory"
	.string "She slides a cup toward you. It is very\n"
	.string "good tea.\p"
	.string "You understand, now, that she is not\n"
	.string "protecting Dr. Heron's legacy. She is\l"
	.string "protecting Dr. Heron's leash -- and she\l"
	.string "has just shown you, gently, that it runs\l"
	.string "through your hands too.$"

ParcelCoast_Hale_Text_0:
# 189 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale watches a crane swing a full net\n"
	.string "over the rail.\p"
	.string "Hale: Rest while you can. The next place\n"
	.string "doesn't have a quay to stand on, or a\l"
	.string "Hollis to pour you tea.\p"
	.string "It has her.$"

ParcelCoast_Hale_Text_1:
# 197 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale stands where the quay meets the\n"
	.string "open water, watching the boats.\p"
	.string "Hale: The dredge scar. The urchins. The\n"
	.string "catch all one age. The empty pilings.\l"
	.string "The plaque. The man on the boat.\p"
	.string "Name it.$"

ParcelCoast_Hale_Text_2:
# 199 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale: COLLAPSING.\p"
	.string "The grazer's gone, the urchins own the\n"
	.string "kelp, the apex is fished to nothing, and\l"
	.string "the web is coming apart in front of you\l"
	.string "in real time.$"

ParcelCoast_Hale_Text_3:
# 200 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale: The overfishing, you could still\n"
	.string "stop -- if anyone with the power to\l"
	.string "wanted to. The dredged seabed you\l"
	.string "cannot. Half of it savable, half already\l"
	.string "gone.\p"
	.string "The hardest kind of place to write down\n"
	.string "honestly. You did.$"

ParcelCoast_Hale_Text_4:
# 201 "data/maps/ParcelCoast/scripts.pory"
	.string "{PLAYER}: Hale. The model on the\n"
	.string "plaque. The methods are hers. Dr.\l"
	.string "Heron's. She isn't lost, she's --$"

ParcelCoast_Hale_Text_5:
# 202 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale, not surprised:\p"
	.string "Hale: I know. Have known a while.\p"
	.string "I told you at the start -- her ending up\n"
	.string "at that lab wasn't random. This is the\l"
	.string "rest of that sentence.$"

ParcelCoast_Hale_Text_6:
# 203 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale: Your mentor didn't vanish,\n"
	.string "{PLAYER}. She made a bargain. And the\l"
	.string "bargain is out there right now with her\l"
	.string "name on the paperwork, strangling a\l"
	.string "kelp bed.\p"
	.string "I'm sorry. You came looking for a hero.\n"
	.string "You found a person. That's the worse\l"
	.string "thing, and the truer one.$"

ParcelCoast_Hale_Text_7:
# 206 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale ties the red cloth to your pack\n"
	.string "without ceremony.\p"
	.string "Hale: Coastal Certification. For\n"
	.string "reading a place that's screaming and\l"
	.string "keeping your hand steady enough to\l"
	.string "write it down anyway.$"

ParcelCoast_Hale_Text_8:
# 210 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale: There's one place left. Inland --\n"
	.string "the deep corridor, the marsh all of this\l"
	.string "used to drain from. Unfished, unbuilt.\l"
	.string "Too raw to be worth taking. Yet.\p"
	.string "That's where she went to hide. That's\n"
	.string "where we finish this -- not with a\l"
	.string "survey. With a reckoning.$"

ParcelCoast_Hale_Text_9:
# 211 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale: Rest first. Then we go inland, and\n"
	.string "we tell the truth with our whole chest,\l"
	.string "and we live with what it costs.\p"
	.string "That was always the job, {PLAYER}.\n"
	.string "This is just the first time it's cost\l"
	.string "this much.$"

ParcelCoast_Hale_Text_10:
# 215 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale: Don't name it from the office\n"
	.string "window. Walk the quay -- the dredge\l"
	.string "line, the barren, the catch on the\l"
	.string "pallet, the pilings, the plaque on the\l"
	.string "wall.\p"
	.string "And talk to the man on the boat.\n"
	.string "Especially him.\p"
	.string "Then come tell me what this is.$"

ParcelCoast_Worker_Text_0:
# 224 "data/maps/ParcelCoast/scripts.pory"
	.string "Worker: Four generations my family's\n"
	.string "worked this quay. Good work. Honest\l"
	.string "work.\p"
	.string "Don't let that badge let you forget\n"
	.string "there's people in the frame, Ranger. We\l"
	.string "didn't dredge it. We haul what we're told\l"
	.string "to haul, or we don't eat. Same as the\l"
	.string "fish.$"

ParcelCoast_ReturnFerry_Text_0:
# 242 "data/maps/ParcelCoast/scripts.pory"
	.string "Sailor: Back to the dock town, Ranger?\n"
	.string "Can't say I blame you.\p"
	.string "Nothing to do here but watch them take\n"
	.string "it.$"

ParcelCoast_ReturnFerry_Text_1:
# 244 "data/maps/ParcelCoast/scripts.pory"
	.string "Sailor: I'll wait. The catch isn't going\n"
	.string "anywhere.\n"
	.string "Less of it every run -- but it isn't\l"
	.string "going anywhere.$"
