ParcelHighlandsHomestead_MapScripts::
	.byte 0


ParcelHighlandsHomestead_Grandson::
# 5 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	lock
# 6 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_Grandson_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	release
	end


ParcelHighlandsHomestead_Swinub::
# 12 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	lock
# 13 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	faceplayer
# 14 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_Swinub_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	release
	end


ParcelHighlandsHomestead_Corner::
# 19 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_Corner_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsHomestead_Grandson_Text_0:
# 7 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "GRANDSON: I signed. The grant. Gran\n"
	.string "won't, so somebody has to carry the\l"
	.string "boxes down when the time comes.\p"
	.string "Don't tell her I've started packing. She\n"
	.string "knows. Don't tell her anyway.$"

ParcelHighlandsHomestead_Swinub_Text_0:
# 14 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "SWINUB: It won't leave either. Gran\n"
	.string "says that's the only vote in the house\l"
	.string "that counts.$"

ParcelHighlandsHomestead_Corner_Text_0:
# 19 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "The floorboards slope to this corner. A\n"
	.string "marble on the table would roll here.\l"
	.string "There is a marble on the table. It has.$"
