ParcelCoast_MapScripts::
# 27 "data/maps/ParcelCoast/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelCoast_HideAide
# 28 "data/maps/ParcelCoast/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelCoast_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelCoast_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 29 "data/maps/ParcelCoast/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelCoast_SetMapVar
	.2byte 0


ParcelCoast_HideAide::
# 36 "data/maps/ParcelCoast/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_HideAide_2
ParcelCoast_HideAide_1:
	end

ParcelCoast_HideAide_2:
# 37 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_TEMP_4
	goto ParcelCoast_HideAide_1


ParcelCoast_SetMapVar::
# 43 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


ParcelCoast_FirstEntry::
# 48 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_TEMP_1, 1
# 49 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COAST_ARRIVAL, ParcelCoast_FirstEntry_2
# 52 "data/maps/ParcelCoast/scripts.pory"
	lockall
# 53 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FirstEntry_Text_0, MSGBOX_DEFAULT
# 54 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FirstEntry_Text_1, MSGBOX_DEFAULT
# 55 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_FirstEntry_Text_2, MSGBOX_DEFAULT
# 56 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALDMERE_COAST_ARRIVAL
# 57 "data/maps/ParcelCoast/scripts.pory"
	releaseall
	end

ParcelCoast_FirstEntry_2:
	end


ParcelCoast_Dredge::
# 64 "data/maps/ParcelCoast/scripts.pory"
	lock
# 65 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 66 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 0
# 67 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 68 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Dredge_2
# 73 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dredge_Text_1, MSGBOX_SIGN
# 74 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 75 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Dredge_2:
# 69 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Dredge_Text_0, MSGBOX_SIGN
# 70 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Barren::
# 81 "data/maps/ParcelCoast/scripts.pory"
	lock
# 82 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 83 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 1
# 84 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 85 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Barren_2
# 90 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Barren_Text_1, MSGBOX_SIGN
# 91 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 92 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Barren_2:
# 86 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Barren_Text_0, MSGBOX_SIGN
# 87 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Catch::
# 98 "data/maps/ParcelCoast/scripts.pory"
	lock
# 99 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 100 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 2
# 101 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 102 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Catch_2
# 107 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Catch_Text_1, MSGBOX_SIGN
# 108 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 109 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Catch_2:
# 103 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Catch_Text_0, MSGBOX_SIGN
# 104 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Pilings::
# 115 "data/maps/ParcelCoast/scripts.pory"
	lock
# 116 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 117 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 3
# 118 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 119 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Pilings_2
# 124 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Pilings_Text_1, MSGBOX_SIGN
# 125 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 126 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Pilings_2:
# 120 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Pilings_Text_0, MSGBOX_SIGN
# 121 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Plaque::
# 132 "data/maps/ParcelCoast/scripts.pory"
	lock
# 133 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 134 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 4
# 135 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 136 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoast_Plaque_2
# 141 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Plaque_Text_1, MSGBOX_SIGN
# 142 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Plaque_Text_2, MSGBOX_DEFAULT
# 143 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Plaque_Text_3, MSGBOX_DEFAULT
# 144 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Plaque_Text_4, MSGBOX_DEFAULT
# 145 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 146 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Plaque_2:
# 137 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Plaque_Text_0, MSGBOX_SIGN
# 138 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_GymHarland::
# 158 "data/maps/ParcelCoast/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GYM6, ParcelCoast_GymHarland_Text_0, ParcelCoast_GymHarland_Text_1, ParcelCoast_GymHarland_Defeated
# 163 "data/maps/ParcelCoast/scripts.pory"
	lock
# 164 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 165 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoast_GymHarland_2
# 172 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_5, MSGBOX_DEFAULT
# 173 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 174 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 5
# 175 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 176 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_GymHarland_2:
# 166 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_2, MSGBOX_DEFAULT
# 167 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_3, MSGBOX_DEFAULT
# 168 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Text_4, MSGBOX_DEFAULT
# 169 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_GymHarland_Defeated::
# 181 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_BADGE06_GET
# 182 "data/maps/ParcelCoast/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 184 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 185 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 5
# 186 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 187 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Defeated_Text_0, MSGBOX_DEFAULT
# 188 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_HM02
# 189 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_GymHarland_Defeated_Text_1, MSGBOX_DEFAULT
# 190 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hollis::
# 196 "data/maps/ParcelCoast/scripts.pory"
	lock
# 197 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 198 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelCoast_Hollis_2
# 205 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Hollis_5
# 210 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_4, MSGBOX_DEFAULT
# 211 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_5, MSGBOX_DEFAULT
# 212 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_6, MSGBOX_DEFAULT
# 213 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_7, MSGBOX_DEFAULT
# 214 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_8, MSGBOX_DEFAULT
# 215 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_9, MSGBOX_DEFAULT
# 216 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hollis_2:
# 199 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_0, MSGBOX_DEFAULT
# 200 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_1, MSGBOX_DEFAULT
# 201 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_2, MSGBOX_DEFAULT
# 202 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hollis_5:
# 206 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hollis_Text_3, MSGBOX_DEFAULT
# 207 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Hale::
# 223 "data/maps/ParcelCoast/scripts.pory"
	lock
# 224 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 225 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoast_Hale_2
# 230 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 231 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 63
# 232 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 233 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelCoast_Hale_5
# 252 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_10, MSGBOX_DEFAULT
# 253 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_2:
# 226 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_0, MSGBOX_DEFAULT
# 227 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_Hale_5:
# 234 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_1, MSGBOX_DEFAULT
# 235 "data/maps/ParcelCoast/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyCoast
# 236 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_2, MSGBOX_DEFAULT
# 237 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_3, MSGBOX_DEFAULT
# 238 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_4, MSGBOX_DEFAULT
# 239 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_5, MSGBOX_DEFAULT
# 240 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_6, MSGBOX_DEFAULT
# 241 "data/maps/ParcelCoast/scripts.pory"
	setvar VAR_0x8004, 6
# 242 "data/maps/ParcelCoast/scripts.pory"
	special SkaldmereCertTaskMark
# 243 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_7, MSGBOX_DEFAULT
# 244 "data/maps/ParcelCoast/scripts.pory"
	setflag FLAG_SKALDMERE_COASTAL_CERT
# 245 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_MAX_POTION, 5
# 246 "data/maps/ParcelCoast/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 247 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_8, MSGBOX_DEFAULT
# 248 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Hale_Text_9, MSGBOX_DEFAULT
# 249 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_Worker::
# 259 "data/maps/ParcelCoast/scripts.pory"
	lock
# 260 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 261 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_Worker_Text_0, MSGBOX_DEFAULT
# 262 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_ItemA::
# 267 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_PEARL
	end


ParcelCoast_ItemB::
# 271 "data/maps/ParcelCoast/scripts.pory"
	finditem ITEM_BIG_PEARL
	end


ParcelCoast_ReturnFerry::
# 277 "data/maps/ParcelCoast/scripts.pory"
	lock
# 278 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 279 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_0, MSGBOX_YESNO
# 280 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_ReturnFerry_2
# 285 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 286 "data/maps/ParcelCoast/scripts.pory"
	playse SE_SHIP
# 287 "data/maps/ParcelCoast/scripts.pory"
	delay 40
# 288 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_ISLE, 41, 48
# 289 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end

ParcelCoast_ReturnFerry_2:
# 281 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_ReturnFerry_Text_1, MSGBOX_DEFAULT
# 282 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_MereholtAide::
# 298 "data/maps/ParcelCoast/scripts.pory"
	lock
# 299 "data/maps/ParcelCoast/scripts.pory"
	faceplayer
# 300 "data/maps/ParcelCoast/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelCoast_MereholtAide_2
# 305 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_1, MSGBOX_DEFAULT
# 306 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_2, MSGBOX_YESNO
# 307 "data/maps/ParcelCoast/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoast_MereholtAide_5
# 312 "data/maps/ParcelCoast/scripts.pory"
	closemessage
# 313 "data/maps/ParcelCoast/scripts.pory"
	warp MAP_PARCEL_BOARDROOM, 4, 2
# 314 "data/maps/ParcelCoast/scripts.pory"
	waitstate
	end

ParcelCoast_MereholtAide_2:
# 301 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_0, MSGBOX_DEFAULT
# 302 "data/maps/ParcelCoast/scripts.pory"
	release
	end

ParcelCoast_MereholtAide_5:
# 308 "data/maps/ParcelCoast/scripts.pory"
	msgbox ParcelCoast_MereholtAide_Text_3, MSGBOX_DEFAULT
# 309 "data/maps/ParcelCoast/scripts.pory"
	release
	end


ParcelCoast_FirstEntry_Text_0:
# 53 "data/maps/ParcelCoast/scripts.pory"
	.string "The boat rounds the headland and the\n"
	.string "harbour opens up -- and it is BUSY.\l"
	.string "Cranes, hulls, the gut-and-ice smell of\l"
	.string "a working catch. Gulls wheeling over all\l"
	.string "of it.\p"
	.string "It looks alive. You have learned, by now,\n"
	.string "to distrust how alive a place can look.$"

ParcelCoast_FirstEntry_Text_1:
# 54 "data/maps/ParcelCoast/scripts.pory"
	.string "Everything here wears the Mereholt\n"
	.string "crest. The cranes. The fuel drums. The\l"
	.string "waiting trucks.\p"
	.string "The side of the fishing boat tied at the\n"
	.string "end of the quay.$"

ParcelCoast_FirstEntry_Text_2:
# 55 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale's note is shorter than usual:\p"
	.string "THE COAST. You've read the others. This\n"
	.string "one doesn't bother to hide.\n"
	.string "See if you can still read it anyway.$"

ParcelCoast_Dredge_Text_0:
# 69 "data/maps/ParcelCoast/scripts.pory"
	.string "The dredge scar. Logged.$"

ParcelCoast_Dredge_Text_1:
# 73 "data/maps/ParcelCoast/scripts.pory"
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
# 86 "data/maps/ParcelCoast/scripts.pory"
	.string "The urchin barren. Counted.$"

ParcelCoast_Barren_Text_1:
# 90 "data/maps/ParcelCoast/scripts.pory"
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
# 103 "data/maps/ParcelCoast/scripts.pory"
	.string "The sorted catch. Measured.$"

ParcelCoast_Catch_Text_1:
# 107 "data/maps/ParcelCoast/scripts.pory"
	.string "A pallet of sorted catch, iced and\n"
	.string "waiting. You walk the rows.\p"
	.string "All one size. All one age. The big old\n"
	.string "breeders that used to anchor a haul\l"
	.string "simply are not in it -- caught out years\l"
	.string "ago, never replaced.\p"
	.string "They are fishing the children now. The\n"
	.string "parents are already gone.$"

ParcelCoast_Pilings_Text_0:
# 120 "data/maps/ParcelCoast/scripts.pory"
	.string "The bare pilings. Noted.$"

ParcelCoast_Pilings_Text_1:
# 124 "data/maps/ParcelCoast/scripts.pory"
	.string "The pilings should be white with gulls\n"
	.string "this season. A hunched handful sit\l"
	.string "there instead, and the ledges past the\l"
	.string "breakwater are bare.\p"
	.string "The gulls eat the small fish. The small\n"
	.string "fish need the kelp's shelter. Take the\l"
	.string "bottom out of a web and the top falls\l"
	.string "last -- but it falls.$"

ParcelCoast_Plaque_Text_0:
# 137 "data/maps/ParcelCoast/scripts.pory"
	.string "MEREHOLT COASTAL -- CERTIFIED\n"
	.string "SUSTAINABLE HARVEST.\p"
	.string "You do not need to read it again. You\n"
	.string "know whose name holds it up now.$"

ParcelCoast_Plaque_Text_1:
# 141 "data/maps/ParcelCoast/scripts.pory"
	.string "MEREHOLT COASTAL -- CERTIFIED\n"
	.string "SUSTAINABLE HARVEST\p"
	.string "Yields managed to a scientific recovery\n"
	.string "model. Independently validated.\n"
	.string "A future for the fishery, and for the\l"
	.string "families who work it.$"

ParcelCoast_Plaque_Text_2:
# 142 "data/maps/ParcelCoast/scripts.pory"
	.string "You open your own notebook to hold the\n"
	.string "model against what you just surveyed.\p"
	.string "The margins stop you cold.$"

ParcelCoast_Plaque_Text_3:
# 143 "data/maps/ParcelCoast/scripts.pory"
	.string "The recovery curves on that plaque. The\n"
	.string "stocking formulas. The red-cloth\l"
	.string "sampling method.\p"
	.string "They are already in your notebook -- in\n"
	.string "the hand you have been reading as\l"
	.string "marginalia since the first marsh. Dr.\l"
	.string "Heron's hand.$"

ParcelCoast_Plaque_Text_4:
# 144 "data/maps/ParcelCoast/scripts.pory"
	.string "She is not missing. She was never\n"
	.string "silenced.\p"
	.string "She is the citation. Her science is the\n"
	.string "thing that signed off on all of this.\p"
	.string "You close the notebook very carefully\n"
	.string "-- the way you would close a door on\l"
	.string "something sleeping.$"

ParcelCoast_GymHarland_Text_0:
# 159 "data/maps/ParcelCoast/scripts.pory"
	.string "Harland is aboard, coiling a line he has\n"
	.string "no use for, because his hands need\l"
	.string "something to do. He sees you and does\l"
	.string "not pretend otherwise.\p"
	.string "Harland: So. You came all the way down\n"
	.string "to the bottom of it. Where the money's\l"
	.string "made and the fish aren't.\p"
	.string "Harland: The note on this boat is\n"
	.string "Mereholt's. The buyer's, the fuel, the\l"
	.string "loan against a catch I haven't landed\l"
	.string "-- all Mereholt's. I fish it down to\l"
	.string "bones and I hate every haul. That's the\l"
	.string "whole arithmetic.\p"
	.string "Harland: You want to cross my waters\n"
	.string "with that badge of yours? Then show an\l"
	.string "old hand you can read a sea before you\l"
	.string "sail it. Humour a tired man. Let's see\l"
	.string "your line.$"

ParcelCoast_GymHarland_Text_1:
# 160 "data/maps/ParcelCoast/scripts.pory"
	.string "Harland: …Aye. You read the water. I'll\n"
	.string "not pretend you didn't.$"

ParcelCoast_GymHarland_Text_2:
# 166 "data/maps/ParcelCoast/scripts.pory"
	.string "The boat is where it always is. Harland\n"
	.string "is watching the water instead of\l"
	.string "working a line, which is new.\p"
	.string "Harland: They read your file aloud at\n"
	.string "the quota hearing. Parts of it twice.\p"
	.string "My name's in it, where I put it. First\n"
	.string "thing I've signed in years that a\l"
	.string "company didn't draft.$"

ParcelCoast_GymHarland_Text_3:
# 167 "data/maps/ParcelCoast/scripts.pory"
	.string "Harland: The review grounds half the\n"
	.string "fleet two days a week now. The lawyers\l"
	.string "call it ruin. It'll pinch, right enough --\l"
	.string "winters pinched anyway.\p"
	.string "Harland: I told you once it'd never be\n"
	.string "one report. It wasn't.$"

ParcelCoast_GymHarland_Text_4:
# 168 "data/maps/ParcelCoast/scripts.pory"
	.string "Harland: They tell me all it bought is\n"
	.string "time. Aye.\p"
	.string "Time's what a season is, Ranger. I've\n"
	.string "lived season to season my whole life.\p"
	.string "It's more than I'd been given yet.$"

ParcelCoast_GymHarland_Text_5:
# 172 "data/maps/ParcelCoast/scripts.pory"
	.string "Harland works the line he isn't using.\p"
	.string "Harland: It was never one report that'd\n"
	.string "turn this. Always all of them. Mine too,\l"
	.string "if I find the spine.\p"
	.string "Write it true, Ranger. That's the whole\n"
	.string "of what I've got left to ask anyone.$"

ParcelCoast_GymHarland_Defeated_Text_0:
# 187 "data/maps/ParcelCoast/scripts.pory"
	.string "Harland: That's the Tradewind\n"
	.string "clearance. Out here it means you can be\l"
	.string "trusted on the water -- a thing I don't\l"
	.string "hand out twice.\p"
	.string "Takes me back. Wish I'd less to be\n"
	.string "resigned about when I give it. Here.\l"
	.string "You'll want this with it.$"

ParcelCoast_GymHarland_Defeated_Text_1:
# 189 "data/maps/ParcelCoast/scripts.pory"
	.string "Harland: FLY. Carries you back to any\n"
	.string "harbour you've already made.\p"
	.string "A fisher's mercy, that. Some days the\n"
	.string "only kindness is a fast way home. Use it\l"
	.string "better than I've used my seasons.$"

ParcelCoast_Hollis_Text_0:
# 199 "data/maps/ParcelCoast/scripts.pory"
	.string "Hollis's desk is clean in the new way --\n"
	.string "the way a desk is clean when the\l"
	.string "drawers are empty.\p"
	.string "Hollis: The conservation program is\n"
	.string "being restructured. Her word. I typed\l"
	.string "the memo myself.\p"
	.string "I still type well.$"

ParcelCoast_Hollis_Text_1:
# 200 "data/maps/ParcelCoast/scripts.pory"
	.string "Hollis: You'll want to know whether I\n"
	.string "would do it again.\p"
	.string "So do I, Ranger. So do I.$"

ParcelCoast_Hollis_Text_2:
# 201 "data/maps/ParcelCoast/scripts.pory"
	.string "She does not pour a cup this time.\p"
	.string "There is nowhere left to put the\n"
	.string "kindness.$"

ParcelCoast_Hollis_Text_3:
# 206 "data/maps/ParcelCoast/scripts.pory"
	.string "Hollis: The tea's still on, Ranger. The\n"
	.string "offer with it.\p"
	.string "Think about how you write it. That's all\n"
	.string "I ever ask.$"

ParcelCoast_Hollis_Text_4:
# 210 "data/maps/ParcelCoast/scripts.pory"
	.string "Hollis Aune again -- a clean desk, a\n"
	.string "window full of working harbour behind\l"
	.string "her. She pours two cups without asking.\p"
	.string "Hollis: Ranger. You've been thorough.\n"
	.string "The whole coast, I hear. Good.\l"
	.string "Thoroughness is rare.$"

ParcelCoast_Hollis_Text_5:
# 211 "data/maps/ParcelCoast/scripts.pory"
	.string "Hollis: I'll be direct, since you've\n"
	.string "earned direct. Your survey will be read\l"
	.string "-- by the Board, by the press, by the\l"
	.string "people who fund what recovery there is\l"
	.string "out there.\p"
	.string "And the model they trust, the one\n"
	.string "keeping this fishery open instead of\l"
	.string "shuttered, carries a name. A name I\l"
	.string "think you care about.$"

ParcelCoast_Hollis_Text_6:
# 212 "data/maps/ParcelCoast/scripts.pory"
	.string "{PLAYER}: …Dr. Heron's.$"

ParcelCoast_Hollis_Text_7:
# 213 "data/maps/ParcelCoast/scripts.pory"
	.string "Hollis: I would hate for one unmeasured\n"
	.string "word from you to undo her life's work.\l"
	.string "For her to be remembered as the\l"
	.string "scientist whose model failed -- instead\l"
	.string "of the one whose science is the only\l"
	.string "reason there's a fishery left to argue\l"
	.string "over at all.$"

ParcelCoast_Hollis_Text_8:
# 214 "data/maps/ParcelCoast/scripts.pory"
	.string "Hollis: So think about how you write it.\n"
	.string "For her sake.\p"
	.string "That is the whole of what I'm asking.$"

ParcelCoast_Hollis_Text_9:
# 215 "data/maps/ParcelCoast/scripts.pory"
	.string "She slides a cup toward you. It is very\n"
	.string "good tea.\p"
	.string "You understand, now, that she is not\n"
	.string "protecting Dr. Heron's legacy. She is\l"
	.string "protecting Dr. Heron's leash -- and she\l"
	.string "has just shown you, gently, that it runs\l"
	.string "through your hands too.$"

ParcelCoast_Hale_Text_0:
# 226 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale watches a crane swing a full net\n"
	.string "over the rail.\p"
	.string "Hale: Rest while you can. The next place\n"
	.string "doesn't have a quay to stand on, or a\l"
	.string "Hollis to pour you tea.\p"
	.string "It has her.$"

ParcelCoast_Hale_Text_1:
# 234 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale stands where the quay meets the\n"
	.string "open water, watching the boats.\p"
	.string "Hale: The dredge scar. The urchins. The\n"
	.string "catch all one age. The empty pilings.\l"
	.string "The plaque. The man on the boat.\p"
	.string "Name it.$"

ParcelCoast_Hale_Text_2:
# 236 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale: COLLAPSING.\p"
	.string "The grazer's gone, the urchins own the\n"
	.string "kelp, the apex is fished to nothing, and\l"
	.string "the web is coming apart in front of you\l"
	.string "in real time.$"

ParcelCoast_Hale_Text_3:
# 237 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale: The overfishing, you could still\n"
	.string "stop -- if anyone with the power to\l"
	.string "wanted to. The dredged seabed you\l"
	.string "cannot. Half of it savable, half already\l"
	.string "gone.\p"
	.string "The hardest kind of place to write down\n"
	.string "honestly. You did.$"

ParcelCoast_Hale_Text_4:
# 238 "data/maps/ParcelCoast/scripts.pory"
	.string "{PLAYER}: Hale. The model on the\n"
	.string "plaque. The methods are hers. Dr.\l"
	.string "Heron's. She isn't lost, she's --$"

ParcelCoast_Hale_Text_5:
# 239 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale, not surprised:\p"
	.string "Hale: I know. Have known a while.\p"
	.string "I told you at the start -- her ending up\n"
	.string "at that lab wasn't random. This is the\l"
	.string "rest of that sentence.$"

ParcelCoast_Hale_Text_6:
# 240 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale: Your mentor didn't vanish,\n"
	.string "{PLAYER}. She made a bargain. And the\l"
	.string "bargain is out there right now with her\l"
	.string "name on the paperwork, strangling a\l"
	.string "kelp bed.\p"
	.string "I'm sorry. You came looking for a hero.\n"
	.string "You found a person. That's the worse\l"
	.string "thing, and the truer one.$"

ParcelCoast_Hale_Text_7:
# 243 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale ties the red cloth to your pack\n"
	.string "without ceremony.\p"
	.string "Hale: Coastal Certification. For\n"
	.string "reading a place that's screaming and\l"
	.string "keeping your hand steady enough to\l"
	.string "write it down anyway.$"

ParcelCoast_Hale_Text_8:
# 247 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale: There's one place left. Inland --\n"
	.string "the deep corridor, the marsh all of this\l"
	.string "used to drain from. Unfished, unbuilt.\l"
	.string "Too raw to be worth taking. Yet.\p"
	.string "That's where she went to hide. That's\n"
	.string "where we finish this -- not with a\l"
	.string "survey. With a reckoning.$"

ParcelCoast_Hale_Text_9:
# 248 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale: Rest first. Then we go inland, and\n"
	.string "we tell the truth with our whole chest,\l"
	.string "and we live with what it costs.\p"
	.string "That was always the job, {PLAYER}.\n"
	.string "This is just the first time it's cost\l"
	.string "this much.$"

ParcelCoast_Hale_Text_10:
# 252 "data/maps/ParcelCoast/scripts.pory"
	.string "Hale: Don't name it from the office\n"
	.string "window. Walk the quay -- the dredge\l"
	.string "line, the barren, the catch on the\l"
	.string "pallet, the pilings, the plaque on the\l"
	.string "wall.\p"
	.string "And talk to the man on the boat.\n"
	.string "Especially him.\p"
	.string "Then come tell me what this is.$"

ParcelCoast_Worker_Text_0:
# 261 "data/maps/ParcelCoast/scripts.pory"
	.string "Worker: Four generations my family's\n"
	.string "worked this quay. Good work. Honest\l"
	.string "work.\p"
	.string "Don't let that badge let you forget\n"
	.string "there's people in the frame, Ranger. We\l"
	.string "didn't dredge it. We haul what we're told\l"
	.string "to haul, or we don't eat. Same as the\l"
	.string "fish.$"

ParcelCoast_ReturnFerry_Text_0:
# 279 "data/maps/ParcelCoast/scripts.pory"
	.string "Sailor: Back to the dock town, Ranger?\n"
	.string "Can't say I blame you.\p"
	.string "Nothing to do here but watch them take\n"
	.string "it.$"

ParcelCoast_ReturnFerry_Text_1:
# 281 "data/maps/ParcelCoast/scripts.pory"
	.string "Sailor: I'll wait. The catch isn't going\n"
	.string "anywhere.\n"
	.string "Less of it every run -- but it isn't\l"
	.string "going anywhere.$"

ParcelCoast_MereholtAide_Text_0:
# 301 "data/maps/ParcelCoast/scripts.pory"
	.string "Aide: No message came down.\p"
	.string "She said you would already have\n"
	.string "everything she'd say.$"

ParcelCoast_MereholtAide_Text_1:
# 305 "data/maps/ParcelCoast/scripts.pory"
	.string "A Mereholt suit waits where the office\n"
	.string "lamps meet the quay light. He does not\l"
	.string "make you ask.\p"
	.string "Aide: Ms. Brooke is up from the mainland\n"
	.string "office. She has asked for you. By name\l"
	.string "-- no title on it.\p"
	.string "The boardroom. Top of the stairs.$"

ParcelCoast_MereholtAide_Text_2:
# 306 "data/maps/ParcelCoast/scripts.pory"
	.string "Go up?$"

ParcelCoast_MereholtAide_Text_3:
# 308 "data/maps/ParcelCoast/scripts.pory"
	.string "Aide: She'll wait. She prices patience\n"
	.string "like everything else.\p"
	.string "Accurately.$"
