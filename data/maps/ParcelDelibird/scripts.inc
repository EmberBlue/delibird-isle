ParcelDelibird_MapScripts::
# 30 "data/maps/ParcelDelibird/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelDelibird_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelDelibird_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 31 "data/maps/ParcelDelibird/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelDelibird_SetMapVar
	.2byte 0


ParcelDelibird_SetMapVar::
# 36 "data/maps/ParcelDelibird/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


ParcelDelibird_FirstEntry::
# 42 "data/maps/ParcelDelibird/scripts.pory"
	setvar VAR_TEMP_1, 1
# 43 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_ARRIVAL, ParcelDelibird_FirstEntry_2
# 46 "data/maps/ParcelDelibird/scripts.pory"
	lockall
# 47 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FirstEntry_Text_0, MSGBOX_DEFAULT
# 48 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FirstEntry_Text_1, MSGBOX_DEFAULT
# 49 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FirstEntry_Text_2, MSGBOX_DEFAULT
# 50 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_ARRIVAL
# 51 "data/maps/ParcelDelibird/scripts.pory"
	releaseall
	end

ParcelDelibird_FirstEntry_2:
	end


ParcelDelibird_Elder::
# 59 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 60 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 61 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibird_Elder_2
# 68 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibird_Elder_5
# 73 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_DELIVERED, ParcelDelibird_Elder_8
# 85 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_PARCEL, ParcelDelibird_Elder_11
# 90 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_10, MSGBOX_DEFAULT
# 91 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_11, MSGBOX_DEFAULT
# 92 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_12, MSGBOX_DEFAULT
# 93 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_PARCEL
# 94 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_13, MSGBOX_DEFAULT
# 95 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_2:
# 62 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_0, MSGBOX_DEFAULT
# 63 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_1, MSGBOX_DEFAULT
# 64 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_2, MSGBOX_DEFAULT
# 65 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_5:
# 69 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_3, MSGBOX_DEFAULT
# 70 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_8:
# 74 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_4, MSGBOX_DEFAULT
# 75 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_5, MSGBOX_DEFAULT
# 76 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_6, MSGBOX_DEFAULT
# 77 "data/maps/ParcelDelibird/scripts.pory"
	playse SE_PIN
# 78 "data/maps/ParcelDelibird/scripts.pory"
	givemon SPECIES_DELIBIRD, 22
# 79 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_GIFT
# 80 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_7, MSGBOX_DEFAULT
# 81 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_8, MSGBOX_DEFAULT
# 82 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_11:
# 86 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_9, MSGBOX_DEFAULT
# 87 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Fisher::
# 101 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 102 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 103 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_DELIVERED, ParcelDelibird_Fisher_2
# 108 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_PARCEL, ParcelDelibird_Fisher_5
# 117 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Fisher_Text_4, MSGBOX_DEFAULT
# 118 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Fisher_2:
# 104 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Fisher_Text_0, MSGBOX_DEFAULT
# 105 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Fisher_5:
# 109 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Fisher_Text_1, MSGBOX_DEFAULT
# 110 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Fisher_Text_2, MSGBOX_DEFAULT
# 111 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_HYPER_POTION
# 112 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_DELIVERED
# 113 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Fisher_Text_3, MSGBOX_DEFAULT
# 114 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Giver::
# 124 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 125 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 126 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIVER, ParcelDelibird_Giver_2
# 131 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_1, MSGBOX_DEFAULT
# 132 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_NEVER_MELT_ICE
# 133 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_GIVER
# 134 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_2, MSGBOX_DEFAULT
# 135 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Giver_2:
# 127 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_0, MSGBOX_DEFAULT
# 128 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Relief::
# 141 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 142 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 143 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_RELIEF, ParcelDelibird_Relief_2
# 148 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_1, MSGBOX_DEFAULT
# 149 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_2, MSGBOX_DEFAULT
# 150 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_RELIEF
# 151 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_3, MSGBOX_DEFAULT
# 152 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Relief_2:
# 144 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_0, MSGBOX_DEFAULT
# 145 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Delibird::
# 158 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 159 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Delibird_Text_0, MSGBOX_DEFAULT
# 160 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_SlumpSign::
# 166 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SlumpSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_SummitSign::
# 171 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SummitSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_BannerSign::
# 176 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_BannerSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_ReturnFerry::
# 182 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 183 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 184 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_ReturnFerry_Text_0, MSGBOX_YESNO
# 185 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_ReturnFerry_2
# 190 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 191 "data/maps/ParcelDelibird/scripts.pory"
	playse SE_SHIP
# 192 "data/maps/ParcelDelibird/scripts.pory"
	delay 40
# 193 "data/maps/ParcelDelibird/scripts.pory"
	warp MAP_PARCEL_ISLE, 41, 48
# 194 "data/maps/ParcelDelibird/scripts.pory"
	waitstate
	end

ParcelDelibird_ReturnFerry_2:
# 186 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_ReturnFerry_Text_1, MSGBOX_DEFAULT
# 187 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_ItemA::
# 199 "data/maps/ParcelDelibird/scripts.pory"
	finditem ITEM_NUGGET
	end


ParcelDelibird_ItemB::
# 203 "data/maps/ParcelDelibird/scripts.pory"
	finditem ITEM_STAR_PIECE
	end


ParcelDelibird_CaveMouth::
# 209 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 210 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 211 "data/maps/ParcelDelibird/scripts.pory"
	checkpartymove MOVE_FLASH
# 212 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq ParcelDelibird_CaveMouth_2
# 217 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_CaveMouth_Text_1, MSGBOX_YESNO
# 218 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_CaveMouth_5
# 223 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 224 "data/maps/ParcelDelibird/scripts.pory"
	warp MAP_PARCEL_CAVERN, 19, 30
# 225 "data/maps/ParcelDelibird/scripts.pory"
	waitstate
	end

ParcelDelibird_CaveMouth_2:
# 213 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_CaveMouth_Text_0, MSGBOX_DEFAULT
# 214 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_CaveMouth_5:
# 219 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_CaveMouth_Text_2, MSGBOX_DEFAULT
# 220 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_RevelerTrainer::
# 231 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_REVELER, ParcelDelibird_RevelerTrainer_Text_0, ParcelDelibird_RevelerTrainer_Text_1
# 234 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_RevelerTrainer_Text_2, MSGBOX_DEFAULT
	end


ParcelDelibird_GymIlex::
# 246 "data/maps/ParcelDelibird/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GYM8, ParcelDelibird_GymIlex_Text_0, ParcelDelibird_GymIlex_Text_1, ParcelDelibird_GymIlex_Defeated
# 251 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 252 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 253 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Text_2, MSGBOX_DEFAULT
# 254 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_GymIlex_Defeated::
# 259 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_BADGE08_GET
# 260 "data/maps/ParcelDelibird/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 261 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Defeated_Text_0, MSGBOX_DEFAULT
# 262 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_HM07
# 263 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_GymIlex_Defeated_Text_1, MSGBOX_DEFAULT
# 264 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_SquareKeeper::
# 273 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 274 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 275 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALD_DEL_GIFT_SQUARE, ParcelDelibird_SquareKeeper_2
# 280 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_1, MSGBOX_DEFAULT
# 281 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_2, MSGBOX_DEFAULT
# 282 "data/maps/ParcelDelibird/scripts.pory"
	random 4
# 283 "data/maps/ParcelDelibird/scripts.pory"
	switch VAR_RESULT
# 284 "data/maps/ParcelDelibird/scripts.pory"
	case 0, ParcelDelibird_SquareKeeper_6
# 286 "data/maps/ParcelDelibird/scripts.pory"
	case 1, ParcelDelibird_SquareKeeper_7
# 288 "data/maps/ParcelDelibird/scripts.pory"
	case 2, ParcelDelibird_SquareKeeper_8
# 290 "data/maps/ParcelDelibird/scripts.pory"
	case 3, ParcelDelibird_SquareKeeper_9
ParcelDelibird_SquareKeeper_4:
# 293 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALD_DEL_GIFT_SQUARE
# 294 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_3, MSGBOX_YESNO
# 295 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelDelibird_SquareKeeper_11
# 307 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_6, MSGBOX_DEFAULT
# 308 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_SquareKeeper_2:
# 276 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_0, MSGBOX_DEFAULT
# 277 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_SquareKeeper_6:
# 285 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_LUCKY_EGG
	goto ParcelDelibird_SquareKeeper_4

ParcelDelibird_SquareKeeper_7:
# 287 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_STAR_PIECE
	goto ParcelDelibird_SquareKeeper_4

ParcelDelibird_SquareKeeper_8:
# 289 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_PP_UP
	goto ParcelDelibird_SquareKeeper_4

ParcelDelibird_SquareKeeper_9:
# 291 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 3
	goto ParcelDelibird_SquareKeeper_4

ParcelDelibird_SquareKeeper_11:
# 296 "data/maps/ParcelDelibird/scripts.pory"
	checkitem ITEM_POTION
# 297 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelDelibird_SquareKeeper_14
# 303 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_5, MSGBOX_DEFAULT
# 304 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_SquareKeeper_14:
# 298 "data/maps/ParcelDelibird/scripts.pory"
	removeitem ITEM_POTION
# 299 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SquareKeeper_Text_4, MSGBOX_DEFAULT
# 300 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_WarmingHut::
# 314 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 315 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 316 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_WarmingHut_Text_0, MSGBOX_DEFAULT
# 317 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_WarmingHut_Text_1, MSGBOX_DEFAULT
# 318 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 319 "data/maps/ParcelDelibird/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 320 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_WarmingHut_Text_2, MSGBOX_DEFAULT
# 321 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Stringer::
# 327 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 328 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 329 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Stringer_Text_0, MSGBOX_DEFAULT
# 330 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Stringer_Text_1, MSGBOX_DEFAULT
# 331 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Blankets::
# 337 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 338 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 339 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Blankets_Text_0, MSGBOX_DEFAULT
# 340 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Blankets_Text_1, MSGBOX_DEFAULT
# 341 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_FirstEntry_Text_0:
# 47 "data/maps/ParcelDelibird/scripts.pory"
	.string "The boat noses in and the island takes\n"
	.string "you by surprise. String lights, cabins\l"
	.string "the colours of sweets, woodsmoke and\l"
	.string "something baking.\p"
	.string "People wave. They don't know you, and\n"
	.string "they wave anyway.$"

ParcelDelibird_FirstEntry_Text_1:
# 48 "data/maps/ParcelDelibird/scripts.pory"
	.string "It is the warmest place you have set\n"
	.string "foot in since you started keeping the\l"
	.string "notebook.\p"
	.string "You know, now, what the warmth is\n"
	.string "standing on. You climbed it. You\l"
	.string "couldn't fix it.$"

ParcelDelibird_FirstEntry_Text_2:
# 49 "data/maps/ParcelDelibird/scripts.pory"
	.string "A banner over the square snaps in the\n"
	.string "wind:\n"
	.string "DELIBIRD ISLE MIDWINTER -- ALL\l"
	.string "WELCOME.\p"
	.string "Smaller, underneath: in partnership\n"
	.string "with the Mereholt Foundation.\p"
	.string "Doduo leans into your leg. You go up\n"
	.string "into the lights.$"

ParcelDelibird_Elder_Text_0:
# 62 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Word reached us. Word always\n"
	.string "reaches an island last, and stays\l"
	.string "longest.\p"
	.string "You wrote it down and you didn't soften\n"
	.string "it. Herself in it too, I hear. That took\l"
	.string "something out of you, I expect.\p"
	.string "It ought to. The true ones cost.$"

ParcelDelibird_Elder_Text_1:
# 63 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: The channel won't refreeze for\n"
	.string "it, child. The winters don't read filings.\p"
	.string "But the lights are going up early this\n"
	.string "year -- you'll have seen. That's not us\l"
	.string "pretending.\p"
	.string "That's us carrying it.$"

ParcelDelibird_Elder_Text_2:
# 64 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: The festival was never about the\n"
	.string "cold, whatever the name says. It was\l"
	.string "about each other, in the cold.\p"
	.string "That part keeps. That part we don't\n"
	.string "need anyone's permission to keep.$"

ParcelDelibird_Elder_Text_3:
# 69 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: The young ones say give until\n"
	.string "it's a habit, so the giving's already\l"
	.string "done when the storm comes and there's\l"
	.string "no time to decide.\p"
	.string "You've got the habit now. I can see it\n"
	.string "on the bird.$"

ParcelDelibird_Elder_Text_4:
# 74 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Tomas got his blanket, then.\n"
	.string "Bless you.\p"
	.string "Come here. There's a thing we do for\n"
	.string "someone who carries for a stranger\l"
	.string "without being asked twice.$"

ParcelDelibird_Elder_Text_5:
# 75 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: We raise Delibird here. Have for\n"
	.string "longer than the records. In a hard\l"
	.string "winter they carry food cabin to cabin\l"
	.string "-- they find the door that needs it.\l"
	.string "Nobody trained that into them. It's\l"
	.string "just what they are.$"

ParcelDelibird_Elder_Text_6:
# 76 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: This one took to you off the\n"
	.string "boat. Take it. It'll deliver for you the\l"
	.string "way it delivered for us.\p"
	.string "The storms are worse now. We'll need\n"
	.string "more of that, not less.$"

ParcelDelibird_Elder_Text_7:
# 80 "data/maps/ParcelDelibird/scripts.pory"
	.string "WREN received DELIBIRD.\p"
	.string "It shifts its little sack to one side\n"
	.string "and looks at you, ready to be useful.$"

ParcelDelibird_Elder_Text_8:
# 81 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder, quieter:\p"
	.string "Elder: There's a paper from the\n"
	.string "Foundation says we should think about\l"
	.string "relocating the festival. Somewhere it\l"
	.string "won't flood.\p"
	.string "We held it here anyway. While there's a\n"
	.string "here.\p"
	.string "Tell your people we said thank you, and\n"
	.string "no.$"

ParcelDelibird_Elder_Text_9:
# 86 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Old Tomas keeps to the south\n"
	.string "shore, by the water. The blanket's for\l"
	.string "him -- his cabin's the one with the cold\l"
	.string "corner.\p"
	.string "Go on. Reciprocity doesn't keep.$"

ParcelDelibird_Elder_Text_10:
# 90 "data/maps/ParcelDelibird/scripts.pory"
	.string "An old woman sorts folded blankets into\n"
	.string "oilcloth parcels, quick and sure, a\l"
	.string "Delibird stacking them at her elbow.\p"
	.string "Elder: Ranger, is it? Then make yourself\n"
	.string "useful in the good way, not the\l"
	.string "clipboard way.$"

ParcelDelibird_Elder_Text_11:
# 91 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: The island runs on this -- you\n"
	.string "give before you're asked, and the island\l"
	.string "gives back before you need. It's not\l"
	.string "charity. It's how a cold place keeps\l"
	.string "everyone alive through a bad season.\p"
	.string "The opposite of the people who only\n"
	.string "ever take from it.$"

ParcelDelibird_Elder_Text_12:
# 92 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Here. A storm-relief parcel for\n"
	.string "old Tomas, down on the south shore.\l"
	.string "Carry it for me?$"

ParcelDelibird_Elder_Text_13:
# 94 "data/maps/ParcelDelibird/scripts.pory"
	.string "You take the parcel. It is heavier than\n"
	.string "a blanket should be. There's food in it\l"
	.string "too.$"

ParcelDelibird_Fisher_Text_0:
# 104 "data/maps/ParcelDelibird/scripts.pory"
	.string "Tomas: Warm through, thanks to you.\n"
	.string "Mind the corner of my cabin -- the floor\l"
	.string "slopes to the sea a little more each\l"
	.string "winter.\p"
	.string "Used to be level. I remember it level.$"

ParcelDelibird_Fisher_Text_1:
# 109 "data/maps/ParcelDelibird/scripts.pory"
	.string "An old fisher straightens, slow, by a\n"
	.string "cabin whose seaward corner has settled\l"
	.string "into the sand.\p"
	.string "Tomas: From Marta? You carried this all\n"
	.string "the way down for an old man you've\l"
	.string "never met.$"

ParcelDelibird_Fisher_Text_2:
# 110 "data/maps/ParcelDelibird/scripts.pory"
	.string "Tomas: That's the island in you already,\n"
	.string "and you only just landed.\p"
	.string "Here -- take this for the road. No, take\n"
	.string "it. That's how it works. You'll learn.$"

ParcelDelibird_Fisher_Text_3:
# 113 "data/maps/ParcelDelibird/scripts.pory"
	.string "Tomas: Now go tell Marta I'm fine. She'll\n"
	.string "have a bird ready for you. She always\l"
	.string "does.\p"
	.string "It's how she says thank you. Don't\n"
	.string "refuse it -- that's the one rude thing\l"
	.string "you can do here.$"

ParcelDelibird_Fisher_Text_4:
# 117 "data/maps/ParcelDelibird/scripts.pory"
	.string "Tomas: Cold off the water today.\n"
	.string "There's coffee in the square if you've\l"
	.string "come up short.\p"
	.string "Up here you never go without. We see to\n"
	.string "that ourselves.$"

ParcelDelibird_Giver_Text_0:
# 127 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: Pass it on someday, that's all.\n"
	.string "To whoever's cold next.$"

ParcelDelibird_Giver_Text_1:
# 131 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: New face! Midwinter rule:\n"
	.string "nobody meets the giving table\l"
	.string "empty-handed.\p"
	.string "Here -- from the square to you. Don't\n"
	.string "thank me. Thank me by doing it to the\l"
	.string "next one.$"

ParcelDelibird_Giver_Text_2:
# 134 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: A feather-charm. The old folk\n"
	.string "say it keeps the cold honest.\p"
	.string "We could use a little more honest cold.\n"
	.string "Less every year to keep.$"

ParcelDelibird_Relief_Text_0:
# 144 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: Bailed dry for now. It'll be\n"
	.string "back by the thaw moon. It always comes\l"
	.string "back a little higher.\p"
	.string "Thanks for the arms, Ranger.$"

ParcelDelibird_Relief_Text_1:
# 148 "data/maps/ParcelDelibird/scripts.pory"
	.string "A man stacks sandbags against a seep\n"
	.string "of meltwater rising through what used\l"
	.string "to be the village green. A Delibird\l"
	.string "ferries icy blocks to shore the wall.\p"
	.string "Villager: Ranger! Spare arms? The\n"
	.string "ground's let go under here -- water\l"
	.string "comes up where there's no rain to\l"
	.string "explain it.$"

ParcelDelibird_Relief_Text_2:
# 149 "data/maps/ParcelDelibird/scripts.pory"
	.string "You work the line until the seep is\n"
	.string "bagged back. The Delibird drops the\l"
	.string "last block and shakes off, pleased.$"

ParcelDelibird_Relief_Text_3:
# 151 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: There. Dry.\p"
	.string "You don't say it and he doesn't ask: the\n"
	.string "ice under us is thawing, and bags hold\l"
	.string "water, not winters. We didn't fix it. We\l"
	.string "bought a season.\p"
	.string "Villager: A season's a lot, some years.\n"
	.string "Thank you.$"

ParcelDelibird_Delibird_Text_0:
# 159 "data/maps/ParcelDelibird/scripts.pory"
	.string "A Delibird works the square, tucking a\n"
	.string "wrapped something into a child's hands,\l"
	.string "then another's, never its own.\p"
	.string "It notices you watching. It considers\n"
	.string "its sack, considers you -- and decides\l"
	.string "you look like you have enough.\p"
	.string "It moves on. That, too, is the lesson.$"

ParcelDelibird_SlumpSign_Text_0:
# 166 "data/maps/ParcelDelibird/scripts.pory"
	.string "The green dips here into a shallow new\n"
	.string "pond nobody dug. The cabin beside it\l"
	.string "has sunk at one corner; its door no\l"
	.string "longer hangs square.\p"
	.string "The islanders have laid planks across\n"
	.string "the wet and hung a lantern on them.\l"
	.string "They walk the planks to the festival\l"
	.string "and do not look down.\p"
	.string "You look down.$"

ParcelDelibird_SummitSign_Text_0:
# 171 "data/maps/ParcelDelibird/scripts.pory"
	.string "From the peak you can see the whole\n"
	.string "crescent of the island at once -- and\l"
	.string "the meltwater pooling in the high\l"
	.string "hollows where the snowpack should still\l"
	.string "be holding.\p"
	.string "This is the cold the festival is named\n"
	.string "for. There is less of it than there was\l"
	.string "last Midwinter. There will be less next.\p"
	.string "It is the most beautiful view in\n"
	.string "Skaldmere. You write down why it won't\l"
	.string "last.$"

ParcelDelibird_BannerSign_Text_0:
# 176 "data/maps/ParcelDelibird/scripts.pory"
	.string "MEREHOLT FOUNDATION -- PROUD SPONSOR\n"
	.string "OF DELIBIRD ISLE MIDWINTER\p"
	.string "Warm blankets, warm meals, a warmer\n"
	.string "future.\p"
	.string "The blankets are real. The meals are\n"
	.string "real. The warmer future is the part that\l"
	.string "pays for the banner.\p"
	.string "The same crest is on the drill up the\n"
	.string "coast.$"

ParcelDelibird_ReturnFerry_Text_0:
# 184 "data/maps/ParcelDelibird/scripts.pory"
	.string "Sailor: Back to the mainland, Ranger?\n"
	.string "Whenever you're ready.\p"
	.string "The island will be here. For a while yet,\n"
	.string "it'll be here.$"

ParcelDelibird_ReturnFerry_Text_1:
# 186 "data/maps/ParcelDelibird/scripts.pory"
	.string "Sailor: Stay for the lights, then.\n"
	.string "They're worth it.$"

ParcelDelibird_CaveMouth_Text_0:
# 213 "data/maps/ParcelDelibird/scripts.pory"
	.string "A low cleft in the rock breathes cold\n"
	.string "air -- a cave mouth, pitch dark a few\l"
	.string "steps in.\p"
	.string "You'd walk into a wall in there, or worse.\n"
	.string "Nothing in your party can throw light\l"
	.string "that far. Not yet.$"

ParcelDelibird_CaveMouth_Text_1:
# 217 "data/maps/ParcelDelibird/scripts.pory"
	.string "The cave mouth breathes its old, deep\n"
	.string "cold. One of your Pokémon can light the\l"
	.string "dark in there -- the glow reaches in and\l"
	.string "finds no far wall.\p"
	.string "Go in?$"

ParcelDelibird_CaveMouth_Text_2:
# 219 "data/maps/ParcelDelibird/scripts.pory"
	.string "You leave the cold where it is, for now.$"

ParcelDelibird_RevelerTrainer_Text_0:
# 232 "data/maps/ParcelDelibird/scripts.pory"
	.string "Noel: A Ranger! At Midwinter! You HAVE\n"
	.string "to battle me, it's tradition.\p"
	.string "Loser owes the winner cocoa. We don't\n"
	.string "keep score with money up here -- we\l"
	.string "keep it with cocoa.$"

ParcelDelibird_RevelerTrainer_Text_1:
# 233 "data/maps/ParcelDelibird/scripts.pory"
	.string "Noel: Awww. Fine, fine -- cocoa's on me!\n"
	.string "That's the best way to lose anyhow.$"

ParcelDelibird_RevelerTrainer_Text_2:
# 234 "data/maps/ParcelDelibird/scripts.pory"
	.string "Noel: Gran says the festival's smaller\n"
	.string "every year. Says the ice comes in slower\l"
	.string "than it did.\p"
	.string "I don't really get it. But I get the\n"
	.string "cocoa. Come on, before it's cold!$"

ParcelDelibird_GymIlex_Text_0:
# 247 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex stands a little apart from the\n"
	.string "lights, a folded square of red cloth in\l"
	.string "one hand, eyes on the high snowline\l"
	.string "above the cabins.\p"
	.string "Ilex: Surveyor, Skaldmere Survey. I\n"
	.string "don't fix anything. I measure how fast\l"
	.string "it's going.\p"
	.string "Ilex: You read places on the ground --\n"
	.string "snares, residue, the catch on the\l"
	.string "pallet. I read them from above. The\l"
	.string "whole crescent of an island at once,\l"
	.string "before and after, change against\l"
	.string "change.\p"
	.string "Ilex: A field hand should be able to do\n"
	.string "both. Show me you can hold a line of\l"
	.string "sight as steady as a line of evidence.\l"
	.string "From up here, looking down.$"

ParcelDelibird_GymIlex_Text_1:
# 248 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: Steady. You kept the frame. Few\n"
	.string "do, this high up.$"

ParcelDelibird_GymIlex_Text_2:
# 253 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex turns the red cloth over once,\n"
	.string "then pockets it.\p"
	.string "Ilex: The snowline I'm watching is lower\n"
	.string "than last Midwinter. I'll have the\l"
	.string "number before the festival packs up.\p"
	.string "Ilex: Numbers don't save a place. They\n"
	.string "just make it impossible to say later\l"
	.string "that nobody knew. Carry that with the\l"
	.string "badge.$"

ParcelDelibird_GymIlex_Defeated_Text_0:
# 261 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: The Skyline clearance. It marks\n"
	.string "you fit to read a place from any height\l"
	.string "-- and to be trusted on the harder\l"
	.string "water.\p"
	.string "You'll want the tool that goes with it.$"

ParcelDelibird_GymIlex_Defeated_Text_1:
# 263 "data/maps/ParcelDelibird/scripts.pory"
	.string "Ilex: WATERFALL. It takes you up the\n"
	.string "climbs that turn most people back.\p"
	.string "The corridor inland has a few. That's\n"
	.string "where the last of this gets written.\l"
	.string "You're nearly ready for it.$"

ParcelDelibird_SquareKeeper_Text_0:
# 276 "data/maps/ParcelDelibird/scripts.pory"
	.string "Keeper: The shelf thins and fills, thins\n"
	.string "and fills.\p"
	.string "Nobody keeps the ledger, so nobody's\n"
	.string "ever behind.$"

ParcelDelibird_SquareKeeper_Text_1:
# 280 "data/maps/ParcelDelibird/scripts.pory"
	.string "A trestle table under the string lights,\n"
	.string "laid out with parcels -- mittens, dried\l"
	.string "fish, a kettle with a mended spout. A\l"
	.string "hand-lettered sign: TAKE ONE. LEAVE\l"
	.string "ONE, IF YOU CAN.\p"
	.string "The keeper waves you closer.\p"
	.string "Keeper: Off the ferry? Then you're\n"
	.string "furthest from home, and that puts you\l"
	.string "first in line. House rule.$"

ParcelDelibird_SquareKeeper_Text_2:
# 281 "data/maps/ParcelDelibird/scripts.pory"
	.string "Keeper: Go on -- the wrapped ones. No\n"
	.string "peeking, no choosing. That's the whole\l"
	.string "game.\p"
	.string "You take the parcel your hand lands on.$"

ParcelDelibird_SquareKeeper_Text_3:
# 294 "data/maps/ParcelDelibird/scripts.pory"
	.string "Leave something on the shelf?$"

ParcelDelibird_SquareKeeper_Text_4:
# 299 "data/maps/ParcelDelibird/scripts.pory"
	.string "You set a Potion between the mittens\n"
	.string "and the kettle. The keeper doesn't\l"
	.string "watch you do it, which is its own kind of\l"
	.string "manners.\p"
	.string "Keeper: There. Now you're from here.$"

ParcelDelibird_SquareKeeper_Text_5:
# 303 "data/maps/ParcelDelibird/scripts.pory"
	.string "You go through your bag twice. The\n"
	.string "keeper waves it off before you can\l"
	.string "apologize.\p"
	.string "Keeper: The shelf's patient. So's the\n"
	.string "island.\n"
	.string "Bring it when you're rich.$"

ParcelDelibird_SquareKeeper_Text_6:
# 307 "data/maps/ParcelDelibird/scripts.pory"
	.string "Keeper: Then don't. The square doesn't\n"
	.string "keep accounts.\p"
	.string "That's not a kindness, mind. It's a\n"
	.string "discipline.$"

ParcelDelibird_WarmingHut_Text_0:
# 316 "data/maps/ParcelDelibird/scripts.pory"
	.string "The hut smells of woodsmoke and wet\n"
	.string "wool. A row of cots, a kettle always on,\l"
	.string "a crate of donated kit by the door.\p"
	.string "Hutkeeper: In you come. Storm rule --\n"
	.string "nobody asks, nobody pays.\p"
	.string "Weather counts as a storm. So does a\n"
	.string "long day.$"

ParcelDelibird_WarmingHut_Text_1:
# 317 "data/maps/ParcelDelibird/scripts.pory"
	.string "Hutkeeper: Set your partners down by\n"
	.string "the stove. Go on.$"

ParcelDelibird_WarmingHut_Text_2:
# 320 "data/maps/ParcelDelibird/scripts.pory"
	.string "Hutkeeper: There. Warmed through.\p"
	.string "This hut's the oldest building standing\n"
	.string "on the island, you know. The festival is\l"
	.string "younger than the kindness.\p"
	.string "Most things are.$"

ParcelDelibird_Stringer_Text_0:
# 329 "data/maps/ParcelDelibird/scripts.pory"
	.string "A woman on a short ladder feeds string\n"
	.string "lights along the eaves, a spare bulb\l"
	.string "held in her teeth. She talks around it.\p"
	.string "Stringer: Every year they go up a week\n"
	.string "earlier. Notice that? Gran strung them\l"
	.string "the week of first freeze. That was the\l"
	.string "signal -- that was the whole point of\l"
	.string "them.$"

ParcelDelibird_Stringer_Text_1:
# 330 "data/maps/ParcelDelibird/scripts.pory"
	.string "Stringer: There's been no first freeze\n"
	.string "worth the name in six years. So now we\l"
	.string "go by the calendar, like mainlanders.\p"
	.string "She fits the bulb, and it comes on, warm\n"
	.string "against the grey.\p"
	.string "Stringer: Still pretty, though. That's\n"
	.string "not nothing. Some years it's most of\l"
	.string "what we've got.$"

ParcelDelibird_Blankets_Text_0:
# 339 "data/maps/ParcelDelibird/scripts.pory"
	.string "A man folds relief blankets into neat\n"
	.string "thirds on a bench -- good thick wool,\l"
	.string "brand new.\p"
	.string "Folder: Storm stock. We fold it in\n"
	.string "autumn so nobody has to think in\l"
	.string "January.\p"
	.string "He squares a corner with more care than\n"
	.string "it needs.$"

ParcelDelibird_Blankets_Text_1:
# 340 "data/maps/ParcelDelibird/scripts.pory"
	.string "Folder: Good blankets, these. Warm.\n"
	.string "Free.\p"
	.string "You learn not to read the corner.\p"
	.string "The corner, small and tasteful, reads\n"
	.string "MEREHOLT FOUNDATION.$"
