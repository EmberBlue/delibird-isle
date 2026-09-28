ParcelFernwickHQ_MapScripts::
	.byte 0


ParcelFernwickHQ_Reception::
# 9 "data/maps/ParcelFernwickHQ/scripts.pory"
	lock
# 10 "data/maps/ParcelFernwickHQ/scripts.pory"
	faceplayer
# 11 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Reception_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end


ParcelFernwickHQ_Ranger::
# 17 "data/maps/ParcelFernwickHQ/scripts.pory"
	lock
# 18 "data/maps/ParcelFernwickHQ/scripts.pory"
	faceplayer
# 19 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Ranger_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end


ParcelFernwickHQ_Hale::
# 25 "data/maps/ParcelFernwickHQ/scripts.pory"
	lock
# 26 "data/maps/ParcelFernwickHQ/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelFernwickHQ_Hale_2
# 101 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ParcelFernwickHQ_Hale_5
# 114 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_STATION_BRIEF, ParcelFernwickHQ_Hale_11
# 119 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_28, MSGBOX_DEFAULT
# 120 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_29, MSGBOX_DEFAULT
# 121 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_30, MSGBOX_DEFAULT
# 122 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_31, MSGBOX_DEFAULT
# 123 "data/maps/ParcelFernwickHQ/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 124 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_32, MSGBOX_DEFAULT
# 125 "data/maps/ParcelFernwickHQ/scripts.pory"
	setflag FLAG_SKALDMERE_STATION_BRIEF
# 126 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_2:
# 28 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFernwickHQ_Hale_8
# 76 "data/maps/ParcelFernwickHQ/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 77 "data/maps/ParcelFernwickHQ/scripts.pory"
	setvar VAR_0x8004, 6
# 78 "data/maps/ParcelFernwickHQ/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 79 "data/maps/ParcelFernwickHQ/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFernwickHQ_Hale_14
# 90 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FLOODBASIN_ARRIVAL, ParcelFernwickHQ_Hale_20
# 95 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_20, MSGBOX_DEFAULT
# 96 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_21, MSGBOX_DEFAULT
# 97 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_22, MSGBOX_DEFAULT
# 98 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_5:
# 102 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_23, MSGBOX_DEFAULT
# 103 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_24, MSGBOX_DEFAULT
# 104 "data/maps/ParcelFernwickHQ/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 105 "data/maps/ParcelFernwickHQ/scripts.pory"
	waitfanfare
# 106 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_25, MSGBOX_DEFAULT
# 107 "data/maps/ParcelFernwickHQ/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 108 "data/maps/ParcelFernwickHQ/scripts.pory"
	giveitem ITEM_POTION, 5
# 109 "data/maps/ParcelFernwickHQ/scripts.pory"
	setflag FLAG_SKALDMERE_FOREST_CERT
# 110 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_26, MSGBOX_DEFAULT
# 111 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_8:
# 29 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHQ_Hale_17
# 70 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_12, MSGBOX_DEFAULT
# 71 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_13, MSGBOX_DEFAULT
# 72 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_14, MSGBOX_DEFAULT
# 73 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_11:
# 115 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_27, MSGBOX_DEFAULT
# 116 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_14:
# 80 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_15, MSGBOX_DEFAULT
# 81 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_16, MSGBOX_DEFAULT
# 82 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_17, MSGBOX_DEFAULT
# 83 "data/maps/ParcelFernwickHQ/scripts.pory"
	giveitem ITEM_SUPER_POTION, 5
# 84 "data/maps/ParcelFernwickHQ/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL, 5
# 85 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_18, MSGBOX_DEFAULT
# 86 "data/maps/ParcelFernwickHQ/scripts.pory"
	setflag FLAG_SKALDMERE_WETLAND_CERT
# 87 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_17:
# 30 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelFernwickHQ_Hale_23
# 61 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_9, MSGBOX_DEFAULT
# 62 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_10, MSGBOX_DEFAULT
# 63 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_RANGER_KIT, ParcelFernwickHQ_Hale_26
ParcelFernwickHQ_Hale_25:
# 67 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_20:
# 91 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_19, MSGBOX_DEFAULT
# 92 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_23:
# 31 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelFernwickHQ_Hale_29
# 56 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_7, MSGBOX_DEFAULT
# 57 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_8, MSGBOX_DEFAULT
# 58 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_26:
# 64 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_11, MSGBOX_DEFAULT
# 65 "data/maps/ParcelFernwickHQ/scripts.pory"
	setflag FLAG_SKALDMERE_RANGER_KIT
	goto ParcelFernwickHQ_Hale_25

ParcelFernwickHQ_Hale_29:
# 32 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHQ_Hale_32
# 43 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_3, MSGBOX_DEFAULT
# 44 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_4, MSGBOX_DEFAULT
# 45 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_5, MSGBOX_YESNO
# 46 "data/maps/ParcelFernwickHQ/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwickHQ_Hale_35
# 51 "data/maps/ParcelFernwickHQ/scripts.pory"
	closemessage
# 52 "data/maps/ParcelFernwickHQ/scripts.pory"
	warp MAP_PARCEL_MARSH, 28, 38
# 53 "data/maps/ParcelFernwickHQ/scripts.pory"
	waitstate
	end

ParcelFernwickHQ_Hale_32:
# 33 "data/maps/ParcelFernwickHQ/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_CORDELIA_DONE, ParcelFernwickHQ_Hale_38
# 39 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_2, MSGBOX_DEFAULT
# 40 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_35:
# 47 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_6, MSGBOX_DEFAULT
# 48 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end

ParcelFernwickHQ_Hale_38:
# 34 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/ParcelFernwickHQ/scripts.pory"
	msgbox ParcelFernwickHQ_Hale_Text_1, MSGBOX_DEFAULT
# 36 "data/maps/ParcelFernwickHQ/scripts.pory"
	release
	end


ParcelFernwickHQ_Reception_Text_0:
# 11 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "RECEPTION: Welcome to the District\n"
	.string "Station. HALE's the one who looks like\l"
	.string "he hasn't slept.\p"
	.string "He hasn't.$"

ParcelFernwickHQ_Ranger_Text_0:
# 19 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "RANGER: 'We don't win. We reduce harm.'\n"
	.string "It was on a poster in here.\p"
	.string "HALE took the poster down. Said\n"
	.string "posters don't reduce anything.$"

ParcelFernwickHQ_Hale_Text_0:
# 34 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: It's filed. It's true. Who reads it\n"
	.string "was never ours to control. Writing it\l"
	.string "down was.$"

ParcelFernwickHQ_Hale_Text_1:
# 35 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: One reader's asked for you\n"
	.string "already. MEREHOLT. The coast office.\l"
	.string "BROOKE herself, up from the mainland.\p"
	.string "You owe her nothing. Go anyway. You've\n"
	.string "earned watching her face while she says\l"
	.string "whatever she's decided to say.$"

ParcelFernwickHQ_Hale_Text_2:
# 39 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: It's filed. It's true. Who reads it\n"
	.string "was never ours to control.\p"
	.string "Get some rest, {PLAYER}. You've\n"
	.string "earned a night that isn't about the\l"
	.string "work.$"

ParcelFernwickHQ_Hale_Text_3:
# 43 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Five certifications. You've seen\n"
	.string "the whole sweep of it now, forest to\l"
	.string "mountain to the works on the coast.\p"
	.string "And you've seen whose name is in the\n"
	.string "footnotes.$"

ParcelFernwickHQ_Hale_Text_4:
# 44 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: One place left. The Last Corridor,\n"
	.string "inland. The keystone marsh everything\l"
	.string "drains from. Where she went.\p"
	.string "I'll walk you to the treeline. I won't go\n"
	.string "in. This one's yours.$"

ParcelFernwickHQ_Hale_Text_5:
# 45 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Ready?$"

ParcelFernwickHQ_Hale_Text_6:
# 47 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Take the time you need. It's kept\n"
	.string "this long.$"

ParcelFernwickHQ_Hale_Text_7:
# 56 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Four. Forest, basin, watershed,\n"
	.string "and a mountain you couldn't save and\l"
	.string "didn't pretend to.\p"
	.string "That last one's what makes a RANGER.\n"
	.string "The rest is competence.$"

ParcelFernwickHQ_Hale_Text_8:
# 57 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Take the ferry from SALTWICK.\n"
	.string "DELIBIRD ISLE first; you've earned the\l"
	.string "breather. Then up the coast to the\l"
	.string "MEREHOLT works.\p"
	.string "The coast won't bother hiding what it\n"
	.string "is.$"

ParcelFernwickHQ_Hale_Text_9:
# 61 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Three certifications. Forest,\n"
	.string "basin, watershed.\p"
	.string "Now the climb. Follow the river up past\n"
	.string "the clean water, to where it comes from.\l"
	.string "The high cold.$"

ParcelFernwickHQ_Hale_Text_10:
# 62 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: It won't be like the others. You\n"
	.string "won't get to fix this one.\p"
	.string "ILEX is up there already, measuring how\n"
	.string "much of it is left. Go learn what 'too\l"
	.string "late' looks like, so you know it next\l"
	.string "time it isn't.$"

ParcelFernwickHQ_Hale_Text_11:
# 64 "data/maps/ParcelFernwickHQ/scripts.pory"
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
# 70 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Two certifications. A sick forest\n"
	.string "corridor and a sicker basin.\p"
	.string "The river's next. First place you'll go\n"
	.string "that isn't already lost. There's still a\l"
	.string "window there.$"

ParcelFernwickHQ_Hale_Text_13:
# 71 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Follow the channel up out of the\n"
	.string "basin. North, past the discharge, where\l"
	.string "the trees thin out. ILEX is working the\l"
	.string "bank up there.\p"
	.string "Read the whole river before you name\n"
	.string "any part of it.$"

ParcelFernwickHQ_Hale_Text_14:
# 72 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: The people on that water have\n"
	.string "even less reason to like us than the\l"
	.string "last lot. Listen anyway.$"

ParcelFernwickHQ_Hale_Text_15:
# 80 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: I read it twice. I'm not going to\n"
	.string "argue with any of it.\p"
	.string "You couldn't fix it.$"

ParcelFernwickHQ_Hale_Text_16:
# 81 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "{PLAYER}: No.$"

ParcelFernwickHQ_Hale_Text_17:
# 82 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: And you didn't pretend you had.\n"
	.string "That's the certification. Not the\l"
	.string "cleanup. Refusing to sign off on a lie.\p"
	.string "Wetland Certification. Done.$"

ParcelFernwickHQ_Hale_Text_18:
# 85 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Kit's topped up. ILEX will tell you\n"
	.string "it won't just come back. Now you know\l"
	.string "that in your hands.$"

ParcelFernwickHQ_Hale_Text_19:
# 91 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Walk it slowly. Read every stake.\n"
	.string "Talk to whoever's manning the booth.\p"
	.string "Then tell ILEX what you saw.$"

ParcelFernwickHQ_Hale_Text_20:
# 95 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Forest Certification. Don't get\n"
	.string "attached to praise. Get attached to\l"
	.string "results.$"

ParcelFernwickHQ_Hale_Text_21:
# 96 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: The wetlands are sick. North of\n"
	.string "here the forest gives out and the marsh\l"
	.string "begins; there's a fishing landing on the\l"
	.string "backwater.\p"
	.string "People up there are angry, and\n"
	.string "somebody's feeding them a story. Go\l"
	.string "listen. Document what you see. Don't\l"
	.string "argue with anyone's paycheck.$"

ParcelFernwickHQ_Hale_Text_22:
# 97 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Past the landing, east, there's an\n"
	.string "old service cut through the trees. It\l"
	.string "opens onto the FLOODBASIN.\p"
	.string "Your exam was the warm-up. That's the\n"
	.string "work.$"

ParcelFernwickHQ_Hale_Text_23:
# 102 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: TARN passed you. He doesn't pass\n"
	.string "people. I've seen him fail a man for\l"
	.string "standing wrong.$"

ParcelFernwickHQ_Hale_Text_24:
# 103 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Forest Certification. No fanfare.\n"
	.string "That's how it should feel.$"

ParcelFernwickHQ_Hale_Text_25:
# 106 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Proper field kit. Sample vials, a\n"
	.string "flow gauge, a better headlamp, spare\l"
	.string "red cloth. And these.$"

ParcelFernwickHQ_Hale_Text_26:
# 110 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Now the wetlands. North of here\n"
	.string "the forest gives out and the marsh\l"
	.string "begins; there's a fishing landing on the\l"
	.string "backwater.\p"
	.string "People up there are angry, and\n"
	.string "somebody's feeding them a story. Go\l"
	.string "listen. Document what you see. Don't\l"
	.string "argue with anyone's paycheck.$"

ParcelFernwickHQ_Hale_Text_27:
# 115 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: The Certification Hall is across\n"
	.string "the boulevard. TARN. Practical exam.\p"
	.string "Go on. I've got paperwork, and you've\n"
	.string "got a partner that needs the practice.$"

ParcelFernwickHQ_Hale_Text_28:
# 119 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: No welcome ceremony. We document\n"
	.string "ecological change, we interrupt\l"
	.string "exploitation, we coordinate\l"
	.string "restoration. Often without anyone's\l"
	.string "support.$"

ParcelFernwickHQ_Hale_Text_29:
# 120 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: We don't win. We reduce harm. We\n"
	.string "keep corridors open. We stop the worst\l"
	.string "of it.$"

ParcelFernwickHQ_Hale_Text_30:
# 121 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Your mentor worked with us.\n"
	.string "Whatever happened at that lab wasn't\l"
	.string "random.\p"
	.string "That's all I'll say about it today.$"

ParcelFernwickHQ_Hale_Text_31:
# 122 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: Here. A proper pack, a marked map,\n"
	.string "and a card stamped PROVISIONAL. This\l"
	.string "isn't ownership. It's responsibility.$"

ParcelFernwickHQ_Hale_Text_32:
# 124 "data/maps/ParcelFernwickHQ/scripts.pory"
	.string "HALE: The Certification Hall is across\n"
	.string "the boulevard. TARN runs the practical.\l"
	.string "Pass it and you're a provisional for\l"
	.string "real.\p"
	.string "Then we'll talk about the marsh.$"
