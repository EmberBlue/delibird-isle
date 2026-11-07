ParcelRiverHouse3_MapScripts::
	.byte 0


ParcelRiverHouse3_Mother::
# 4 "data/maps/ParcelRiverHouse3/scripts.pory"
	lock
# 5 "data/maps/ParcelRiverHouse3/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelRiverHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiverHouse3_Mother_2
# 11 "data/maps/ParcelRiverHouse3/scripts.pory"
	msgbox ParcelRiverHouse3_Mother_Text_1, MSGBOX_DEFAULT
# 12 "data/maps/ParcelRiverHouse3/scripts.pory"
	release
	end

ParcelRiverHouse3_Mother_2:
# 7 "data/maps/ParcelRiverHouse3/scripts.pory"
	msgbox ParcelRiverHouse3_Mother_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelRiverHouse3/scripts.pory"
	release
	end


ParcelRiverHouse3_Zigzagoon::
# 16 "data/maps/ParcelRiverHouse3/scripts.pory"
	lock
# 17 "data/maps/ParcelRiverHouse3/scripts.pory"
	faceplayer
# 18 "data/maps/ParcelRiverHouse3/scripts.pory"
	msgbox ParcelRiverHouse3_Zigzagoon_Text_0, MSGBOX_DEFAULT
# 19 "data/maps/ParcelRiverHouse3/scripts.pory"
	release
	end


ParcelRiverHouse3_Mother_Text_0:
# 7 "data/maps/ParcelRiverHouse3/scripts.pory"
	.string "MOTHER: Two rows. The CORPS woman\n"
	.string "wrote it in her report, with a fund\l"
	.string "named beside it. My husband's already\l"
	.string "measured the strip. He's never measured\l"
	.string "anything before it was paid for.$"

ParcelRiverHouse3_Mother_Text_1:
# 11 "data/maps/ParcelRiverHouse3/scripts.pory"
	.string "MOTHER: The drain runs under MARIT's\n"
	.string "window. She says she can smell the\l"
	.string "sacks in the water at night. I tell her\l"
	.string "it's the river. She says that's what she\l"
	.string "means.$"

ParcelRiverHouse3_Zigzagoon_Text_0:
# 18 "data/maps/ParcelRiverHouse3/scripts.pory"
	.string "ZIGZAGOON: Zig! Zig!$"
