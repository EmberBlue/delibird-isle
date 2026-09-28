ParcelFernwickFisher_MapScripts::
	.byte 0


ParcelFernwickFisher_OldMan::
# 5 "data/maps/ParcelFernwickFisher/scripts.pory"
	lock
# 6 "data/maps/ParcelFernwickFisher/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFernwickFisher/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_DONE, ParcelFernwickFisher_OldMan_2
# 10 "data/maps/ParcelFernwickFisher/scripts.pory"
	msgbox ParcelFernwickFisher_OldMan_Text_1, MSGBOX_DEFAULT
ParcelFernwickFisher_OldMan_1:
# 12 "data/maps/ParcelFernwickFisher/scripts.pory"
	release
	end

ParcelFernwickFisher_OldMan_2:
# 8 "data/maps/ParcelFernwickFisher/scripts.pory"
	msgbox ParcelFernwickFisher_OldMan_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwickFisher_OldMan_1


ParcelFernwickFisher_OldMan_Text_0:
# 8 "data/maps/ParcelFernwickFisher/scripts.pory"
	.string "GRETTIR: That's TOBIN's old rod! He lent\n"
	.string "it to you? Then you're the first. Bait's\l"
	.string "on the shelf. Advice is free.\p"
	.string "Don't wade past the second stake. The\n"
	.string "marsh doesn't give things back.$"

ParcelFernwickFisher_OldMan_Text_1:
# 10 "data/maps/ParcelFernwickFisher/scripts.pory"
	.string "GRETTIR: Rods, bait, marsh advice. The\n"
	.string "advice is free: don't wade past the\l"
	.string "second stake.\p"
	.string "The marsh doesn't give things back.$"
