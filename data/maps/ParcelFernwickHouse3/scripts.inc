ParcelFernwickHouse3_MapScripts::
	.byte 0


ParcelFernwickHouse3_OldWoman::
# 5 "data/maps/ParcelFernwickHouse3/scripts.pory"
	lock
# 6 "data/maps/ParcelFernwickHouse3/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFernwickHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse3_OldWoman_2
# 10 "data/maps/ParcelFernwickHouse3/scripts.pory"
	msgbox ParcelFernwickHouse3_OldWoman_Text_1, MSGBOX_DEFAULT
ParcelFernwickHouse3_OldWoman_1:
# 12 "data/maps/ParcelFernwickHouse3/scripts.pory"
	release
	end

ParcelFernwickHouse3_OldWoman_2:
# 8 "data/maps/ParcelFernwickHouse3/scripts.pory"
	msgbox ParcelFernwickHouse3_OldWoman_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwickHouse3_OldWoman_1


ParcelFernwickHouse3_OldWoman_Text_0:
# 8 "data/maps/ParcelFernwickHouse3/scripts.pory"
	.string "OLD WOMAN: So that's where she went.\n"
	.string "The marsh. I sold her the bread for it.\p"
	.string "I'm glad somebody found her. I'm glad it\n"
	.string "was you.$"

ParcelFernwickHouse3_OldWoman_Text_1:
# 10 "data/maps/ParcelFernwickHouse3/scripts.pory"
	.string "OLD WOMAN: The scientist came through\n"
	.string "here on her way somewhere. Bought\l"
	.string "bread. Didn't say where she was going.\p"
	.string "I've thought about that bread a lot.$"
