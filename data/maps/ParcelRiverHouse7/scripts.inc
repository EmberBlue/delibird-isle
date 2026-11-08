ParcelRiverHouse7_MapScripts::
	.byte 0


ParcelRiverHouse7_Woman::
# 7 "data/maps/ParcelRiverHouse7/scripts.pory"
	lock
# 8 "data/maps/ParcelRiverHouse7/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelRiverHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse7_Woman_2
# 14 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_Woman_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelRiverHouse7/scripts.pory"
	release
	end

ParcelRiverHouse7_Woman_2:
# 10 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_Woman_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelRiverHouse7/scripts.pory"
	release
	end


ParcelRiverHouse7_Man::
# 20 "data/maps/ParcelRiverHouse7/scripts.pory"
	lock
# 21 "data/maps/ParcelRiverHouse7/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelRiverHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse7_Man_2
# 27 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_Man_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelRiverHouse7/scripts.pory"
	release
	end

ParcelRiverHouse7_Man_2:
# 23 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_Man_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelRiverHouse7/scripts.pory"
	release
	end


ParcelRiverHouse7_Woman_Text_0:
# 10 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "WOMAN: HARLAND spoke at the hearing\n"
	.string "for the river people too. His name was in\l"
	.string "it where he put it. So's mine, under his.$"

ParcelRiverHouse7_Woman_Text_1:
# 14 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "WOMAN: I net the slow water below the\n"
	.string "town. Ten years ago the net came up\l"
	.string "heavy. Now it comes up honest.$"

ParcelRiverHouse7_Man_Text_0:
# 23 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "MAN: Mended the net for the review\n"
	.string "season. Smaller mesh, she says. Let the\l"
	.string "small ones through. We've learnt that\l"
	.string "the slow way.$"

ParcelRiverHouse7_Man_Text_1:
# 27 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "MAN: My wife fishes; I mend. The holes in\n"
	.string "the net are the same size every year.\l"
	.string "The fish aren't.$"
