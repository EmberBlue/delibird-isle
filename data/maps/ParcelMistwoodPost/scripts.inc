ParcelMistwoodPost_MapScripts::
	.byte 0


ParcelMistwoodPost_Skeld::
# 10 "data/maps/ParcelMistwoodPost/scripts.pory"
	lock
# 11 "data/maps/ParcelMistwoodPost/scripts.pory"
	faceplayer
# 12 "data/maps/ParcelMistwoodPost/scripts.pory"
	goto_if_set FLAG_SKALD_MISTWOOD_CUT_GIVEN, ParcelMistwoodPost_Skeld_2
# 21 "data/maps/ParcelMistwoodPost/scripts.pory"
	goto_if_set FLAG_SKALD_SNARE_FREED_1, ParcelMistwoodPost_Skeld_7
ParcelMistwoodPost_Skeld_4:
# 30 "data/maps/ParcelMistwoodPost/scripts.pory"
	goto_if_set FLAG_SKALD_SNARE_FREED_1, ParcelMistwoodPost_Skeld_16
# 30 "data/maps/ParcelMistwoodPost/scripts.pory"
	goto_if_set FLAG_SKALD_SNARE_FREED_2, ParcelMistwoodPost_Skeld_16
# 30 "data/maps/ParcelMistwoodPost/scripts.pory"
	goto_if_set FLAG_SKALD_SNARE_FREED_3, ParcelMistwoodPost_Skeld_16
# 35 "data/maps/ParcelMistwoodPost/scripts.pory"
	msgbox ParcelMistwoodPost_Skeld_Text_6, MSGBOX_DEFAULT
# 36 "data/maps/ParcelMistwoodPost/scripts.pory"
	msgbox ParcelMistwoodPost_Skeld_Text_7, MSGBOX_DEFAULT
# 37 "data/maps/ParcelMistwoodPost/scripts.pory"
	release
	end

ParcelMistwoodPost_Skeld_2:
# 13 "data/maps/ParcelMistwoodPost/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelMistwoodPost_Skeld_12
# 16 "data/maps/ParcelMistwoodPost/scripts.pory"
	msgbox ParcelMistwoodPost_Skeld_Text_1, MSGBOX_DEFAULT
ParcelMistwoodPost_Skeld_11:
# 18 "data/maps/ParcelMistwoodPost/scripts.pory"
	release
	end

ParcelMistwoodPost_Skeld_5:
# 22 "data/maps/ParcelMistwoodPost/scripts.pory"
	msgbox ParcelMistwoodPost_Skeld_Text_2, MSGBOX_DEFAULT
# 23 "data/maps/ParcelMistwoodPost/scripts.pory"
	msgbox ParcelMistwoodPost_Skeld_Text_3, MSGBOX_DEFAULT
# 24 "data/maps/ParcelMistwoodPost/scripts.pory"
	giveitem ITEM_HM01
# 25 "data/maps/ParcelMistwoodPost/scripts.pory"
	msgbox ParcelMistwoodPost_Skeld_Text_4, MSGBOX_DEFAULT
# 26 "data/maps/ParcelMistwoodPost/scripts.pory"
	setflag FLAG_SKALD_MISTWOOD_CUT_GIVEN
# 27 "data/maps/ParcelMistwoodPost/scripts.pory"
	release
	end

ParcelMistwoodPost_Skeld_6:
# 21 "data/maps/ParcelMistwoodPost/scripts.pory"
	goto_if_set FLAG_SKALD_SNARE_FREED_3, ParcelMistwoodPost_Skeld_5
	goto ParcelMistwoodPost_Skeld_4

ParcelMistwoodPost_Skeld_7:
# 21 "data/maps/ParcelMistwoodPost/scripts.pory"
	goto_if_set FLAG_SKALD_SNARE_FREED_2, ParcelMistwoodPost_Skeld_6
	goto ParcelMistwoodPost_Skeld_4

ParcelMistwoodPost_Skeld_12:
# 14 "data/maps/ParcelMistwoodPost/scripts.pory"
	msgbox ParcelMistwoodPost_Skeld_Text_0, MSGBOX_DEFAULT
	goto ParcelMistwoodPost_Skeld_11

ParcelMistwoodPost_Skeld_16:
# 31 "data/maps/ParcelMistwoodPost/scripts.pory"
	msgbox ParcelMistwoodPost_Skeld_Text_5, MSGBOX_DEFAULT
# 32 "data/maps/ParcelMistwoodPost/scripts.pory"
	release
	end


ParcelMistwoodPost_Map::
# 42 "data/maps/ParcelMistwoodPost/scripts.pory"
	msgbox ParcelMistwoodPost_Map_Text_0, MSGBOX_SIGN
	end


ParcelMistwoodPost_Skeld_Text_0:
# 14 "data/maps/ParcelMistwoodPost/scripts.pory"
	.string "SKELD: Certified now, are you. Good.\n"
	.string "Means I can send you the paperwork\l"
	.string "instead of doing it.$"

ParcelMistwoodPost_Skeld_Text_1:
# 16 "data/maps/ParcelMistwoodPost/scripts.pory"
	.string "SKELD: The deadfall's on the north\n"
	.string "track. CUT it and you're at the station\l"
	.string "in ten minutes.\p"
	.string "Tell HALE I said you'll do. He'll know\n"
	.string "what that means.$"

ParcelMistwoodPost_Skeld_Text_2:
# 22 "data/maps/ParcelMistwoodPost/scripts.pory"
	.string "SKELD: All three? You freed all three?\p"
	.string "Regulations say I need a second ranger\n"
	.string "present to touch a snare. Been waiting\l"
	.string "a week for one. Instead I get a tourist\l"
	.string "with a new POKéMON.$"

ParcelMistwoodPost_Skeld_Text_3:
# 23 "data/maps/ParcelMistwoodPost/scripts.pory"
	.string "SKELD: ...I'll take it. Here.$"

ParcelMistwoodPost_Skeld_Text_4:
# 25 "data/maps/ParcelMistwoodPost/scripts.pory"
	.string "SKELD: CUT. Teach it to your partner. A\n"
	.string "tree came down across the north track\l"
	.string "in the storm and I've been walking the\l"
	.string "long way round for a month.\p"
	.string "Clear it, and the station's just past.\n"
	.string "Tell HALE you'll do. He'll know what I\l"
	.string "mean.$"

ParcelMistwoodPost_Skeld_Text_5:
# 31 "data/maps/ParcelMistwoodPost/scripts.pory"
	.string "SKELD: You've been touching my snares.\n"
	.string "Don't look at me like that, I can tell.\p"
	.string "There were three. West wall, the nook\n"
	.string "past the clearing, the far end of the\l"
	.string "top gallery. Get them all and we'll talk.$"

ParcelMistwoodPost_Skeld_Text_6:
# 35 "data/maps/ParcelMistwoodPost/scripts.pory"
	.string "SKELD: Warden. Ranger post. Kettle's on,\n"
	.string "don't get excited, it's just water.\p"
	.string "Three snares in my woods this week. Wire\n"
	.string "ones. MEREHOLT day-rate boys, I'd bet\l"
	.string "my boots, catching whatever walks into\l"
	.string "them.$"

ParcelMistwoodPost_Skeld_Text_7:
# 36 "data/maps/ParcelMistwoodPost/scripts.pory"
	.string "SKELD: Regulations say I can't clear a\n"
	.string "snare without a second ranger present.\l"
	.string "You're not a ranger.\p"
	.string "I'm not telling you to go and loosen\n"
	.string "three wires. West wall, the nook past\l"
	.string "the clearing, the far end of the top\l"
	.string "gallery. I'm just telling you where they\l"
	.string "are.$"

ParcelMistwoodPost_Map_Text_0:
# 42 "data/maps/ParcelMistwoodPost/scripts.pory"
	.string "A hand-drawn map of MISTWOOD, pinned\n"
	.string "up. Three red circles: the west wall, the\l"
	.string "nook past the clearing, the far end of\l"
	.string "the top gallery.\p"
	.string "And a fourth mark, up at the north\n"
	.string "track: DEADFALL. LONG WAY ROUND.$"
