ParcelRiverHouse3_MapScripts::
	.byte 0


ParcelRiverHouse3_Mother::
# 4 "data/maps/ParcelRiverHouse3/scripts.pory"
	lock
# 5 "data/maps/ParcelRiverHouse3/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelRiverHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverHouse3_Mother_2
# 11 "data/maps/ParcelRiverHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse3_Mother_5
# 16 "data/maps/ParcelRiverHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiverHouse3_Mother_8
# 21 "data/maps/ParcelRiverHouse3/scripts.pory"
	msgbox ParcelRiverHouse3_Mother_Text_3, MSGBOX_DEFAULT
# 22 "data/maps/ParcelRiverHouse3/scripts.pory"
	release
	end

ParcelRiverHouse3_Mother_2:
# 7 "data/maps/ParcelRiverHouse3/scripts.pory"
	msgbox ParcelRiverHouse3_Mother_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelRiverHouse3/scripts.pory"
	release
	end

ParcelRiverHouse3_Mother_5:
# 12 "data/maps/ParcelRiverHouse3/scripts.pory"
	msgbox ParcelRiverHouse3_Mother_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelRiverHouse3/scripts.pory"
	release
	end

ParcelRiverHouse3_Mother_8:
# 17 "data/maps/ParcelRiverHouse3/scripts.pory"
	msgbox ParcelRiverHouse3_Mother_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/ParcelRiverHouse3/scripts.pory"
	release
	end


ParcelRiverHouse3_Zigzagoon::
# 26 "data/maps/ParcelRiverHouse3/scripts.pory"
	lock
# 27 "data/maps/ParcelRiverHouse3/scripts.pory"
	faceplayer
# 28 "data/maps/ParcelRiverHouse3/scripts.pory"
	msgbox ParcelRiverHouse3_Zigzagoon_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/ParcelRiverHouse3/scripts.pory"
	release
	end


ParcelRiverHouse3_ReadDresser::
# 34 "data/maps/ParcelRiverHouse3/scripts.pory"
	msgbox ParcelRiverHouse3_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelRiverHouse3_ReadDrawer::
# 39 "data/maps/ParcelRiverHouse3/scripts.pory"
	msgbox ParcelRiverHouse3_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelRiverHouse3_Mother_Text_0:
# 7 "data/maps/ParcelRiverHouse3/scripts.pory"
	.string "MOTHER: Two rows of alder, waist-high.\n"
	.string "My husband measured them again. He\l"
	.string "says the water under them's clearer.\p"
	.string "The CORPS woman came and looked and\n"
	.string "wrote it. Three looks. That's a fact now.$"

ParcelRiverHouse3_Mother_Text_1:
# 12 "data/maps/ParcelRiverHouse3/scripts.pory"
	.string "MOTHER: Two rows. The fund paid for the\n"
	.string "strip. My husband measured it twice and\l"
	.string "planted it once. The CORPS woman's\l"
	.string "report had our plot number in it. We've\l"
	.string "framed the page.$"

ParcelRiverHouse3_Mother_Text_2:
# 17 "data/maps/ParcelRiverHouse3/scripts.pory"
	.string "MOTHER: Two rows. The CORPS woman\n"
	.string "wrote it in her report, with a fund\l"
	.string "named beside it. My husband's already\l"
	.string "measured the strip. He's never measured\l"
	.string "anything before it was paid for.$"

ParcelRiverHouse3_Mother_Text_3:
# 21 "data/maps/ParcelRiverHouse3/scripts.pory"
	.string "MOTHER: The drain runs under MARIT's\n"
	.string "window. She says she can smell the\l"
	.string "sacks in the water at night. I tell her\l"
	.string "it's the river. She says that's what she\l"
	.string "means.$"

ParcelRiverHouse3_Zigzagoon_Text_0:
# 28 "data/maps/ParcelRiverHouse3/scripts.pory"
	.string "ZIGZAGOON: Zig! Zig!$"

ParcelRiverHouse3_ReadDresser_Text_0:
# 34 "data/maps/ParcelRiverHouse3/scripts.pory"
	.string "A tape measure on the dresser, pulled\n"
	.string "out to two rows' width and left. He\l"
	.string "measured the strip before the fund\l"
	.string "paid.\p"
	.string "He has never done that before.$"

ParcelRiverHouse3_ReadDrawer_Text_0:
# 39 "data/maps/ParcelRiverHouse3/scripts.pory"
	.string "Seed packets in the drawer, sorted, the\n"
	.string "ones for the strip at the front. Hedge,\l"
	.string "alder, sedge. None of them is a crop.$"
