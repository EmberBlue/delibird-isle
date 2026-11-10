ParcelFernwickHQ_MapScripts::
	.byte 0


ParcelFernwickHQ_Reception::
# 9 "data/maps/ParcelFernwickHQ/scripts.pory"
	lock
# 10 "data/maps/ParcelFernwickHQ/scripts.pory"
	faceplayer
# 11 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHQ_Reception_2
# 16 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHQ_Reception_5
# 21 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Reception_Text_2, MSGBOX_DEFAULT
# 22 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Reception_2:
# 12 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Reception_Text_0, MSGBOX_DEFAULT
# 13 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Reception_5:
# 17 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Reception_Text_1, MSGBOX_DEFAULT
# 18 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end


ParcelFernwickHQ_Ranger::
# 27 "data/maps/ParcelFernwickHQ/scripts.pory"
	lock
# 28 "data/maps/ParcelFernwickHQ/scripts.pory"
	faceplayer
# 29 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHQ_Ranger_2
# 34 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHQ_Ranger_5
# 39 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Ranger_Text_2, MSGBOX_DEFAULT
# 40 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Ranger_2:
# 30 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Ranger_Text_0, MSGBOX_DEFAULT
# 31 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Ranger_5:
# 35 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Ranger_Text_1, MSGBOX_DEFAULT
# 36 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end


ParcelFernwickHQ_Hale::
# 45 "data/maps/ParcelFernwickHQ/scripts.pory"
	lock
# 46 "data/maps/ParcelFernwickHQ/scripts.pory"
	faceplayer
# 47 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelFernwickHQ_Hale_2
# 121 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ParcelFernwickHQ_Hale_5
# 134 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_STATION_BRIEF, ParcelFernwickHQ_Hale_11
# 139 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_28, MSGBOX_DEFAULT
# 140 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_29, MSGBOX_DEFAULT
# 141 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_30, MSGBOX_DEFAULT
# 142 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_31, MSGBOX_DEFAULT
# 143 "data/maps/ParcelFernwickHQ/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 144 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_32, MSGBOX_DEFAULT
# 145 "data/maps/ParcelFernwickHQ/scripts.pory"
	giveitem ITEM_FIELD_NOTEBOOK
# 146 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_33, MSGBOX_DEFAULT
# 147 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_34, MSGBOX_DEFAULT
# 148 "data/maps/ParcelFernwickHQ/scripts.pory"
	setflag FLAG_SKALDMERE_STATION_BRIEF
# 149 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_2:
# 48 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFernwickHQ_Hale_8
# 96 "data/maps/ParcelFernwickHQ/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 97 "data/maps/ParcelFernwickHQ/scripts.pory"
	setvar VAR_0x8004, 6
# 98 "data/maps/ParcelFernwickHQ/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 99 "data/maps/ParcelFernwickHQ/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFernwickHQ_Hale_14
# 110 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FLOODBASIN_ARRIVAL, ParcelFernwickHQ_Hale_20
# 115 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_20, MSGBOX_DEFAULT
# 116 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_21, MSGBOX_DEFAULT
# 117 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_22, MSGBOX_DEFAULT
# 118 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_5:
# 122 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_23, MSGBOX_DEFAULT
# 123 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_24, MSGBOX_DEFAULT
# 124 "data/maps/ParcelFernwickHQ/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 125 "data/maps/ParcelFernwickHQ/scripts.pory"
	waitfanfare
# 126 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_25, MSGBOX_DEFAULT
# 127 "data/maps/ParcelFernwickHQ/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 128 "data/maps/ParcelFernwickHQ/scripts.pory"
	giveitem ITEM_POTION, 5
# 129 "data/maps/ParcelFernwickHQ/scripts.pory"
	setflag FLAG_SKALDMERE_FOREST_CERT
# 130 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_26, MSGBOX_DEFAULT
# 131 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_8:
# 49 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHQ_Hale_17
# 90 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_12, MSGBOX_DEFAULT
# 91 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_13, MSGBOX_DEFAULT
# 92 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_14, MSGBOX_DEFAULT
# 93 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_11:
# 135 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_27, MSGBOX_DEFAULT
# 136 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_14:
# 100 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_15, MSGBOX_DEFAULT
# 101 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_16, MSGBOX_DEFAULT
# 102 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_17, MSGBOX_DEFAULT
# 103 "data/maps/ParcelFernwickHQ/scripts.pory"
	giveitem ITEM_SUPER_POTION, 5
# 104 "data/maps/ParcelFernwickHQ/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL, 5
# 105 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_18, MSGBOX_DEFAULT
# 106 "data/maps/ParcelFernwickHQ/scripts.pory"
	setflag FLAG_SKALDMERE_WETLAND_CERT
# 107 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_17:
# 50 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelFernwickHQ_Hale_23
# 81 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_9, MSGBOX_DEFAULT
# 82 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_10, MSGBOX_DEFAULT
# 83 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_RANGER_KIT, ParcelFernwickHQ_Hale_26
ParcelFernwickHQ_Hale_25:
# 87 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_20:
# 111 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_19, MSGBOX_DEFAULT
# 112 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_23:
# 51 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelFernwickHQ_Hale_29
# 76 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_7, MSGBOX_DEFAULT
# 77 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_8, MSGBOX_DEFAULT
# 78 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_26:
# 84 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_11, MSGBOX_DEFAULT
# 85 "data/maps/ParcelFernwickHQ/scripts.pory"
	setflag FLAG_SKALDMERE_RANGER_KIT
	goto ParcelFernwickHQ_Hale_25

ParcelFernwickHQ_Hale_29:
# 52 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHQ_Hale_32
# 63 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_3, MSGBOX_DEFAULT
# 64 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_4, MSGBOX_DEFAULT
# 65 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_5, MSGBOX_YESNO
# 66 "data/maps/ParcelFernwickHQ/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwickHQ_Hale_35
# 71 "data/maps/ParcelFernwickHQ/scripts.pory"
	closemessage
# 72 "data/maps/ParcelFernwickHQ/scripts.pory"
	warp MAP_PARCEL_MARSH, 37, 27
# 73 "data/maps/ParcelFernwickHQ/scripts.pory"
	waitstate
	end

ParcelFernwickHQ_Hale_32:
# 53 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_CORDELIA_DONE, ParcelFernwickHQ_Hale_38
# 59 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_2, MSGBOX_DEFAULT
# 60 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_35:
# 67 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_6, MSGBOX_DEFAULT
# 68 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_38:
# 54 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_0, MSGBOX_DEFAULT
# 55 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_1, MSGBOX_DEFAULT
# 56 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end


ParcelFernwickHQ_ReadCase::
# 154 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_ReadCase_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHQ_ReadCounter::
# 159 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_ReadCounter_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHQ_Pinned::
# 166 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHQ_Pinned_1
# 174 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Pinned_Text_3, MSGBOX_SIGN
	return

ParcelFernwickHQ_Pinned_1:
# 167 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Pinned_Text_0, MSGBOX_SIGN
# 168 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALD_CH_SPOKE, ParcelFernwickHQ_Pinned_4
# 171 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Pinned_Text_2, MSGBOX_SIGN
	return

ParcelFernwickHQ_Pinned_4:
# 169 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Pinned_Text_1, MSGBOX_SIGN
	return


ParcelFernwickHQ_Reception_Text_0:
# 12 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "RECEPTION: HALE slept. A whole night. I\n"
	.string "know because he came in and didn't look\l"
	.string "like that. Don't tell him I noticed.$"

ParcelFernwickHQ_Reception_Text_1:
# 17 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "RECEPTION: HALE slept. Four hours, in\n"
	.string "the chair. First time since you went\l"
	.string "north.\p"
	.string "Don't tell him I noticed. He thinks\n"
	.string "nobody notices anything in this\l"
	.string "building. It's a building full of rangers.$"

ParcelFernwickHQ_Reception_Text_2:
# 21 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "RECEPTION: Welcome to the District\n"
	.string "Station. HALE's the one who looks like\l"
	.string "he hasn't slept.\p"
	.string "He hasn't.$"

ParcelFernwickHQ_Ranger_Text_0:
# 30 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "RANGER: 'We don't win. We reduce harm.'\n"
	.string "HALE put the poster back up. He didn't\l"
	.string "say anything. He just put it back up.$"

ParcelFernwickHQ_Ranger_Text_1:
# 35 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "RANGER: The poster's still down. But\n"
	.string "he's pinned up the river minutes where\l"
	.string "it was.\p"
	.string "Six names in the margin, in his hand. Not\n"
	.string "ours. Theirs. The ones who stood up.$"

ParcelFernwickHQ_Ranger_Text_2:
# 39 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "RANGER: 'We don't win. We reduce harm.'\n"
	.string "It was on a poster in here.\p"
	.string "HALE took the poster down. Said\n"
	.string "posters don't reduce anything.$"

ParcelFernwickHQ_Hale_Text_0:
# 54 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: It's filed. It's true. Who reads it\n"
	.string "was never ours to control. Writing it\l"
	.string "down was.$"

ParcelFernwickHQ_Hale_Text_1:
# 55 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: One reader's asked for you\n"
	.string "already. MEREHOLT. The coast office.\l"
	.string "BROOKE herself, up from the mainland.\p"
	.string "You owe her nothing. Go anyway. You've\n"
	.string "earned watching her face while she says\l"
	.string "whatever she's decided to say.$"

ParcelFernwickHQ_Hale_Text_2:
# 59 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: It's filed. It's true. Who reads it\n"
	.string "was never ours to control.\p"
	.string "Get some rest, {PLAYER}. You've\n"
	.string "earned a night that isn't about the\l"
	.string "work.$"

ParcelFernwickHQ_Hale_Text_3:
# 63 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Five certifications. You've seen\n"
	.string "the whole sweep of it now, forest to\l"
	.string "mountain to the works on the coast.\p"
	.string "And you've seen whose name is in the\n"
	.string "footnotes.$"

ParcelFernwickHQ_Hale_Text_4:
# 64 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: One place left. The Last Corridor,\n"
	.string "inland. The keystone marsh everything\l"
	.string "drains from. Where she went.\p"
	.string "I'll walk you to the treeline. I won't go\n"
	.string "in. This one's yours.$"

ParcelFernwickHQ_Hale_Text_5:
# 65 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Ready?$"

ParcelFernwickHQ_Hale_Text_6:
# 67 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Take the time you need. It's kept\n"
	.string "this long.$"

ParcelFernwickHQ_Hale_Text_7:
# 76 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Four. Forest, basin, watershed,\n"
	.string "and a mountain you couldn't save and\l"
	.string "didn't pretend to.\p"
	.string "That last one's what makes a RANGER.\n"
	.string "The rest is competence.$"

ParcelFernwickHQ_Hale_Text_8:
# 77 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Take the ferry from SALTWICK.\n"
	.string "DELIBIRD ISLE first; you've earned the\l"
	.string "breather. Then up the coast to the\l"
	.string "MEREHOLT works.\p"
	.string "The coast won't bother hiding what it\n"
	.string "is.$"

ParcelFernwickHQ_Hale_Text_9:
# 81 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Three certifications. Forest,\n"
	.string "basin, watershed.\p"
	.string "Now the climb. Follow the river up past\n"
	.string "the clean water, to where it comes from.\l"
	.string "The high cold.$"

ParcelFernwickHQ_Hale_Text_10:
# 82 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: It won't be like the others. You\n"
	.string "won't get to fix this one.\p"
	.string "ILEX is up there already, measuring how\n"
	.string "much of it is left. Go learn what 'too\l"
	.string "late' looks like, so you know it next\l"
	.string "time it isn't.$"

ParcelFernwickHQ_Hale_Text_11:
# 84 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: One more thing. The country gets\n"
	.string "rough from here. Your clearances open\l"
	.string "the hard ground now.\p"
	.string "Field craft, not force. A deadfall\n"
	.string "across the only path, a slide of rock\l"
	.string "over a culvert, we clear those. We don't\l"
	.string "tear up a living place for fun.\p"
	.string "Move what has to move. Light what has\n"
	.string "to be seen.$"

ParcelFernwickHQ_Hale_Text_12:
# 90 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Two certifications. A sick forest\n"
	.string "corridor and a sicker basin.\p"
	.string "The river's next. First place you'll go\n"
	.string "that isn't already lost. There's still a\l"
	.string "window there.$"

ParcelFernwickHQ_Hale_Text_13:
# 91 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Follow the channel up out of the\n"
	.string "basin. North, past the discharge, where\l"
	.string "the trees thin out. ILEX is working the\l"
	.string "bank up there.\p"
	.string "Read the whole river before you name\n"
	.string "any part of it.$"

ParcelFernwickHQ_Hale_Text_14:
# 92 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: The people on that water have\n"
	.string "even less reason to like us than the\l"
	.string "last lot. Listen anyway.$"

ParcelFernwickHQ_Hale_Text_15:
# 100 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: I read it twice. I'm not going to\n"
	.string "argue with any of it.\p"
	.string "You couldn't fix it.$"

ParcelFernwickHQ_Hale_Text_16:
# 101 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "{PLAYER}: No.$"

ParcelFernwickHQ_Hale_Text_17:
# 102 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: And you didn't pretend you had.\n"
	.string "That's the certification. Not the\l"
	.string "cleanup. Refusing to sign off on a lie.\p"
	.string "Wetland Certification. Done.$"

ParcelFernwickHQ_Hale_Text_18:
# 105 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Kit's topped up. ILEX will tell you\n"
	.string "it won't just come back. Now you know\l"
	.string "that in your hands.$"

ParcelFernwickHQ_Hale_Text_19:
# 111 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Walk it slowly. Read every stake.\n"
	.string "Talk to whoever's manning the booth.\p"
	.string "Then tell ILEX what you saw.$"

ParcelFernwickHQ_Hale_Text_20:
# 115 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Forest Certification. Don't get\n"
	.string "attached to praise. Get attached to\l"
	.string "results.$"

ParcelFernwickHQ_Hale_Text_21:
# 116 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: The wetlands are sick. North of\n"
	.string "here the forest gives out and the marsh\l"
	.string "begins; there's a fishing landing on the\l"
	.string "backwater.\p"
	.string "People up there are angry, and\n"
	.string "somebody's feeding them a story. Go\l"
	.string "listen. Document what you see. Don't\l"
	.string "argue with anyone's paycheck.$"

ParcelFernwickHQ_Hale_Text_22:
# 117 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Past the landing, east, there's an\n"
	.string "old service cut through the trees. It\l"
	.string "opens onto the FLOODBASIN.\p"
	.string "Your exam was the warm-up. That's the\n"
	.string "work.$"

ParcelFernwickHQ_Hale_Text_23:
# 122 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: TARN passed you. He doesn't pass\n"
	.string "people. I've seen him fail a man for\l"
	.string "standing wrong.$"

ParcelFernwickHQ_Hale_Text_24:
# 123 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Forest Certification. No fanfare.\n"
	.string "That's how it should feel.$"

ParcelFernwickHQ_Hale_Text_25:
# 126 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Proper field kit. Sample vials, a\n"
	.string "flow gauge, a better headlamp, spare\l"
	.string "red cloth. And these.$"

ParcelFernwickHQ_Hale_Text_26:
# 130 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Now the wetlands. North of here\n"
	.string "the forest gives out and the marsh\l"
	.string "begins; there's a fishing landing on the\l"
	.string "backwater.\p"
	.string "People up there are angry, and\n"
	.string "somebody's feeding them a story. Go\l"
	.string "listen. Document what you see. Don't\l"
	.string "argue with anyone's paycheck.$"

ParcelFernwickHQ_Hale_Text_27:
# 135 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: The Certification Hall is across\n"
	.string "the boulevard. TARN. Practical exam.\p"
	.string "Go on. I've got paperwork, and you've\n"
	.string "got a partner that needs the practice.$"

ParcelFernwickHQ_Hale_Text_28:
# 139 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: No welcome ceremony. We document\n"
	.string "ecological change, we interrupt\l"
	.string "exploitation, we coordinate\l"
	.string "restoration. Often without anyone's\l"
	.string "support.$"

ParcelFernwickHQ_Hale_Text_29:
# 140 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: We don't win. We reduce harm. We\n"
	.string "keep corridors open. We stop the worst\l"
	.string "of it.$"

ParcelFernwickHQ_Hale_Text_30:
# 141 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Your mentor worked with us.\n"
	.string "Whatever happened at that lab wasn't\l"
	.string "random.\p"
	.string "That's all I'll say about it today.$"

ParcelFernwickHQ_Hale_Text_31:
# 142 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Here. A proper pack, a marked map,\n"
	.string "and a card stamped PROVISIONAL. This\l"
	.string "isn't ownership. It's responsibility.$"

ParcelFernwickHQ_Hale_Text_32:
# 144 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: And this came care of the\n"
	.string "Station, addressed to you, in her hand.\l"
	.string "Nobody's opened it.\p"
	.string "Her field notebook. Keep it on you. Read\n"
	.string "it when you can; it'll tell you where you\l"
	.string "are.$"

ParcelFernwickHQ_Hale_Text_33:
# 146 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: You keep one of your own, I see.\n"
	.string "Older than you are, by the binding.\p"
	.string "Good. Keep both. Two hands on a page is\n"
	.string "how a thing gets remembered right.$"

ParcelFernwickHQ_Hale_Text_34:
# 147 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: The Certification Hall is across\n"
	.string "the boulevard. TARN runs the practical.\l"
	.string "Pass it and you're a provisional for\l"
	.string "real.\p"
	.string "Then we'll talk about the marsh.$"

ParcelFernwickHQ_ReadCase_Text_0:
# 154 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "Under the glass, a surveyor's red cloth,\n"
	.string "forty years old, the dye gone to rust.\l"
	.string "The card says: FIRST STAKE, KEYSTONE\l"
	.string "MARSH. No name.$"

ParcelFernwickHQ_ReadCounter_Text_0:
# 159 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "The duty counter. A ledger of who is\n"
	.string "where: eight names, eight zones. One\l"
	.string "line reads WREN -- FIELD, and nothing\l"
	.string "after it.\p"
	.string "Hale's hand.$"

ParcelFernwickHQ_Pinned_Text_0:
# 167 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "Where the poster was: the minutes of\n"
	.string "the river meeting at Elvsund, pinned\l"
	.string "with four tacks, typed on the hall's\l"
	.string "machine.\p"
	.string "PRESENT: the Board's clerk, the\n"
	.string "Commissioner's deputy, forty-one\l"
	.string "ratepayers, two rangers, one surveyor.\p"
	.string "THE RATEPAYERS ASKED why the gauge\n"
	.string "read normal when their fields did not.\l"
	.string "THE CLERK SAID the gauge was\l"
	.string "calibrated. THE SURVEYOR ASKED to\l"
	.string "which year.\p"
	.string "THE DEPUTY SAID the Commissioner\n"
	.string "regretted he could not attend. THE\l"
	.string "ROOM NOTED this.\p"
	.string "RESOLVED, by show of hands, that the\n"
	.string "Board publish its readings against the\l"
	.string "old datum as well as the new. Carried.\l"
	.string "Six abstained.$"

ParcelFernwickHQ_Pinned_Text_1:
# 169 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "Down the margin, six names in Hale's\n"
	.string "small capitals. The six who stood up\l"
	.string "first. Under them, smaller, a seventh:\l"
	.string "yours.\p"
	.string "He has not mentioned it. He pinned it\n"
	.string "where you would see it.$"

ParcelFernwickHQ_Pinned_Text_2:
# 171 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "Down the margin, six names in Hale's\n"
	.string "small capitals. The six who stood up\l"
	.string "first. Not ours, the ranger said. Theirs.$"

ParcelFernwickHQ_Pinned_Text_3:
# 174 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "A poster, the Foundation's green and\n"
	.string "grey. A ranger on a ridge with the light\l"
	.string "behind.\p"
	.string "STEWARDSHIP. A Mereholt Foundation\n"
	.string "partnership with the Skaldmere Climate\l"
	.string "Corps. Two field stations. The\l"
	.string "certification programme. Equipment for\l"
	.string "every ranger in the region.\p"
	.string "Smaller, at the bottom: the Climate\n"
	.string "Corps is funded in part by Mereholt\l"
	.string "Foundation conservation grants\l"
	.string "administered through the Office of\l"
	.string "Public-Private Partnerships.\p"
	.string "Someone has pressed a thumbnail into\n"
	.string "the word PART and left a crescent.$"
