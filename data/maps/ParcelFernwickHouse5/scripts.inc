ParcelFernwickHouse5_MapScripts::
	.byte 0


ParcelFernwickHouse5_OldMan::
# 7 "data/maps/ParcelFernwickHouse5/scripts.pory"
	lock
# 8 "data/maps/ParcelFernwickHouse5/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelFernwickHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse5_OldMan_2
# 14 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_OldMan_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelFernwickHouse5/scripts.pory"
	release
	end

ParcelFernwickHouse5_OldMan_2:
# 10 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_OldMan_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelFernwickHouse5/scripts.pory"
	release
	end


ParcelFernwickHouse5_Woman::
# 20 "data/maps/ParcelFernwickHouse5/scripts.pory"
	lock
# 21 "data/maps/ParcelFernwickHouse5/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelFernwickHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse5_Woman_2
# 27 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_Woman_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelFernwickHouse5/scripts.pory"
	release
	end

ParcelFernwickHouse5_Woman_2:
# 23 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_Woman_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelFernwickHouse5/scripts.pory"
	release
	end


ParcelFernwickHouse5_OldMan_Text_0:
# 10 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "OLD MAN: HALE came by after the\n"
	.string "hearing. Didn't say much. Sat in that\l"
	.string "chair for an hour. That's him saying a\l"
	.string "lot.$"

ParcelFernwickHouse5_OldMan_Text_1:
# 14 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "OLD MAN: Thirty years in the CORPS. We\n"
	.string "counted everything and saved less than\l"
	.string "we counted.\p"
	.string "HALE was my cadet. He still stands like\n"
	.string "one.$"

ParcelFernwickHouse5_Woman_Text_0:
# 23 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "WOMAN: He got the notebooks out and\n"
	.string "read your filing against them. Then he\l"
	.string "put them away and said 'good'. Just\l"
	.string "that.$"

ParcelFernwickHouse5_Woman_Text_1:
# 27 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "WOMAN: He keeps his old notebooks in\n"
	.string "the chest. Every page is a river that\l"
	.string "isn't there now.$"
