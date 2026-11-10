ParcelFernwickHouse3_MapScripts::
	.byte 0


ParcelFernwickHouse3_OldWoman::
# 5 "data/maps/ParcelFernwickHouse3/scripts.pory"
	lock
# 6 "data/maps/ParcelFernwickHouse3/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFernwickHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse3_OldWoman_2
ParcelFernwickHouse3_OldWoman_1:
# 10 "data/maps/ParcelFernwickHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse3_OldWoman_5
# 15 "data/maps/ParcelFernwickHouse3/scripts.pory"
	msgbox ParcelFernwickHouse3_OldWoman_Text_2, MSGBOX_DEFAULT
# 17 "data/maps/ParcelFernwickHouse3/scripts.pory"
	release
	end

ParcelFernwickHouse3_OldWoman_2:
# 8 "data/maps/ParcelFernwickHouse3/scripts.pory"
	msgbox ParcelFernwickHouse3_OldWoman_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwickHouse3_OldWoman_1

ParcelFernwickHouse3_OldWoman_5:
# 11 "data/maps/ParcelFernwickHouse3/scripts.pory"
	msgbox ParcelFernwickHouse3_OldWoman_Text_1, MSGBOX_DEFAULT
# 12 "data/maps/ParcelFernwickHouse3/scripts.pory"
	release
	end


ParcelFernwickHouse3_ReadShelf::
# 22 "data/maps/ParcelFernwickHouse3/scripts.pory"
	msgbox ParcelFernwickHouse3_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse3_ReadFridge::
# 27 "data/maps/ParcelFernwickHouse3/scripts.pory"
	msgbox ParcelFernwickHouse3_ReadFridge_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse3_ReadDresser::
# 32 "data/maps/ParcelFernwickHouse3/scripts.pory"
	msgbox ParcelFernwickHouse3_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse3_Granddaughter::
# 37 "data/maps/ParcelFernwickHouse3/scripts.pory"
	lock
# 38 "data/maps/ParcelFernwickHouse3/scripts.pory"
	faceplayer
# 39 "data/maps/ParcelFernwickHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse3_Granddaughter_2
# 41 "data/maps/ParcelFernwickHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFernwickHouse3_Granddaughter_3
# 44 "data/maps/ParcelFernwickHouse3/scripts.pory"
	msgbox ParcelFernwickHouse3_Granddaughter_Text_2, MSGBOX_DEFAULT
ParcelFernwickHouse3_Granddaughter_1:
# 46 "data/maps/ParcelFernwickHouse3/scripts.pory"
	release
	end

ParcelFernwickHouse3_Granddaughter_2:
# 40 "data/maps/ParcelFernwickHouse3/scripts.pory"
	msgbox ParcelFernwickHouse3_Granddaughter_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwickHouse3_Granddaughter_1

ParcelFernwickHouse3_Granddaughter_3:
# 42 "data/maps/ParcelFernwickHouse3/scripts.pory"
	msgbox ParcelFernwickHouse3_Granddaughter_Text_1, MSGBOX_DEFAULT
	goto ParcelFernwickHouse3_Granddaughter_1


ParcelFernwickHouse3_OldWoman_Text_0:
# 8 "data/maps/ParcelFernwickHouse3/scripts.pory"
	.string "OLD WOMAN: So that's where she went.\n"
	.string "The marsh. I sold her the bread for it.\p"
	.string "I'm glad somebody found her. I'm glad it\n"
	.string "was you.$"

ParcelFernwickHouse3_OldWoman_Text_1:
# 11 "data/maps/ParcelFernwickHouse3/scripts.pory"
	.string "OLD WOMAN: Somebody from the river\n"
	.string "bought bread here on the way to the\l"
	.string "coast. Said the whole village had stood\l"
	.string "up to the Board.\p"
	.string "I thought about the scientist's bread\n"
	.string "again. She never stood up to anything\l"
	.string "in my shop. She just bought it and went.$"

ParcelFernwickHouse3_OldWoman_Text_2:
# 15 "data/maps/ParcelFernwickHouse3/scripts.pory"
	.string "OLD WOMAN: The scientist came through\n"
	.string "here on her way somewhere. Bought\l"
	.string "bread. Didn't say where she was going.\p"
	.string "I've thought about that bread a lot.$"

ParcelFernwickHouse3_ReadShelf_Text_0:
# 22 "data/maps/ParcelFernwickHouse3/scripts.pory"
	.string "Recipe books, and one field guide to\n"
	.string "marsh plants that does not belong with\l"
	.string "them. A receipt marks a page.\p"
	.string "One loaf. Paid in coin.$"

ParcelFernwickHouse3_ReadFridge_Text_0:
# 27 "data/maps/ParcelFernwickHouse3/scripts.pory"
	.string "Bread, under a cloth. Today's. She bakes\n"
	.string "whether or not anyone is coming\l"
	.string "through.$"

ParcelFernwickHouse3_ReadDresser_Text_0:
# 32 "data/maps/ParcelFernwickHouse3/scripts.pory"
	.string "A dresser of good plates. One has been\n"
	.string "moved to the front and turned so its\l"
	.string "chip faces the wall.$"

ParcelFernwickHouse3_Granddaughter_Text_0:
# 40 "data/maps/ParcelFernwickHouse3/scripts.pory"
	.string "GIRL: Gran kept the receipt. One loaf,\n"
	.string "paid in coin. It's in the field guide now,\l"
	.string "at the marsh plants, where she says the\l"
	.string "scientist would have wanted it.\p"
	.string "I'm not allowed to bake with the field\n"
	.string "guide open. I do anyway. The pages smell\l"
	.string "of flour. She pretends not to notice.$"

ParcelFernwickHouse3_Granddaughter_Text_1:
# 42 "data/maps/ParcelFernwickHouse3/scripts.pory"
	.string "GIRL: Gran says a loaf is a day. You\n"
	.string "bake it in the morning and it's gone by\l"
	.string "night, and the next day you bake again,\l"
	.string "and that's how you know you're alive.\p"
	.string "She said it about the scientist's bread.\n"
	.string "Then she stopped talking and kneaded\l"
	.string "for a long time.$"

ParcelFernwickHouse3_Granddaughter_Text_2:
# 44 "data/maps/ParcelFernwickHouse3/scripts.pory"
	.string "GIRL: I do the morning batch. Gran does\n"
	.string "the talking.\p"
	.string "She says the ovens in this town have\n"
	.string "been warm for two hundred years\l"
	.string "without a break and she's not going to\l"
	.string "be the one who lets them go cold. So I\l"
	.string "get up at four.$"
