ParcelHighlandsHomestead_MapScripts::
	.byte 0


ParcelHighlandsHomestead_Grandson::
# 5 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	lock
# 6 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsHomestead_Grandson_2
# 12 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_Grandson_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	release
	end

ParcelHighlandsHomestead_Grandson_2:
# 8 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_Grandson_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	release
	end


ParcelHighlandsHomestead_Swinub::
# 17 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	lock
# 18 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	faceplayer
# 19 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_Swinub_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	release
	end


ParcelHighlandsHomestead_Corner::
# 24 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_Corner_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsHomestead_Grandson_Text_0:
# 8 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "GRANDSON: I signed. Gran didn't. The\n"
	.string "leases are enjoined pending survey, so\l"
	.string "the boxes stay unpacked. She hasn't\l"
	.string "said 'told you'. She's said it with her\l"
	.string "face every morning.$"

ParcelHighlandsHomestead_Grandson_Text_1:
# 12 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "GRANDSON: I signed. The grant. Gran\n"
	.string "won't, so somebody has to carry the\l"
	.string "boxes down when the time comes.\p"
	.string "Don't tell her I've started packing. She\n"
	.string "knows. Don't tell her anyway.$"

ParcelHighlandsHomestead_Swinub_Text_0:
# 19 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "SWINUB: It won't leave either. Gran\n"
	.string "says that's the only vote in the house\l"
	.string "that counts.$"

ParcelHighlandsHomestead_Corner_Text_0:
# 24 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "The floorboards slope to this corner. A\n"
	.string "marble on the table would roll here.\l"
	.string "There is a marble on the table. It has.$"
