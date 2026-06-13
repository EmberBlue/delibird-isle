ParcelLab_MapScripts::
# 10 "data/maps/ParcelLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/ParcelLab/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelLab_FirstEntry
	.2byte 0


ParcelLab_FirstEntry::
# 16 "data/maps/ParcelLab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 17 "data/maps/ParcelLab/scripts.pory"
	goto_if_set FLAG_SKALDMERE_LAB_SEEN, ParcelLab_FirstEntry_2
# 20 "data/maps/ParcelLab/scripts.pory"
	lockall
# 21 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_FirstEntry_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_FirstEntry_Text_1, MSGBOX_DEFAULT
# 23 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_FirstEntry_Text_2, MSGBOX_DEFAULT
# 24 "data/maps/ParcelLab/scripts.pory"
	setflag FLAG_SKALDMERE_LAB_SEEN
# 25 "data/maps/ParcelLab/scripts.pory"
	releaseall
	end

ParcelLab_FirstEntry_2:
	end


ParcelLab_Official::
# 31 "data/maps/ParcelLab/scripts.pory"
	lock
# 32 "data/maps/ParcelLab/scripts.pory"
	faceplayer
# 33 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_Official_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_Official_Text_1, MSGBOX_DEFAULT
# 35 "data/maps/ParcelLab/scripts.pory"
	release
	end


ParcelLab_Resident::
# 40 "data/maps/ParcelLab/scripts.pory"
	lock
# 41 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_Resident_Text_0, MSGBOX_DEFAULT
# 42 "data/maps/ParcelLab/scripts.pory"
	release
	end


ParcelLab_Shelves::
# 48 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_Shelves_Text_0, MSGBOX_SIGN
	end


ParcelLab_Desk::
# 52 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_Desk_Text_0, MSGBOX_SIGN
	end


ParcelLab_SampleRack::
# 56 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_SampleRack_Text_0, MSGBOX_SIGN
	end


ParcelLab_FirstEntry_Text_0:
# 21 "data/maps/ParcelLab/scripts.pory"
	.string "The door was damaged--but not blown\n"
	.string "open.\p"
	.string "Inside: shelves emptied. Drives\n"
	.string "removed. Sample jars gone.\n"
	.string "A desk lamp on its side.$"

ParcelLab_FirstEntry_Text_1:
# 22 "data/maps/ParcelLab/scripts.pory"
	.string "Whoever did this took what mattered,\n"
	.string "carefully--\p"
	.string "then staged the mess.$"

ParcelLab_FirstEntry_Text_2:
# 23 "data/maps/ParcelLab/scripts.pory"
	.string "Not a burglary.\n"
	.string "An erasure.$"

ParcelLab_Official_Text_0:
# 33 "data/maps/ParcelLab/scripts.pory"
	.string "Official: No signs of forced entry\n"
	.string "beyond the latch. Could be vandalism.\p"
	.string "We've filed it.\n"
	.string "Not much else we can do.$"

ParcelLab_Official_Text_1:
# 34 "data/maps/ParcelLab/scripts.pory"
	.string "He says it the way a man reads a bus\n"
	.string "schedule.\p"
	.string "He has said it before.$"

ParcelLab_Resident_Text_0:
# 41 "data/maps/ParcelLab/scripts.pory"
	.string "She doesn't meet your eyes.\p"
	.string "As you pass, barely a breath:\n"
	.string "Don't make noise about it.$"

ParcelLab_Shelves_Text_0:
# 48 "data/maps/ParcelLab/scripts.pory"
	.string "The shelves are empty--but not swept.\n"
	.string "Every binder gone; the bookends still\l"
	.string "standing.\p"
	.string "Someone took these one at a time.$"

ParcelLab_Desk_Text_0:
# 52 "data/maps/ParcelLab/scripts.pory"
	.string "The desk drawers hang open, contents\n"
	.string "intact: pens, tape, a tin of nails.\p"
	.string "Only the drive bay beneath is empty, its\n"
	.string "cable coiled neatly on the blotter.\p"
	.string "Vandals don't coil cables.$"

ParcelLab_SampleRack_Text_0:
# 56 "data/maps/ParcelLab/scripts.pory"
	.string "A sample rack, every slot bare. No\n"
	.string "broken glass anywhere.\p"
	.string "On the floor, one paper label,\n"
	.string "machine-printed:\n"
	.string "POLIWAG -- MARSH 7 -- WK 41.$"
