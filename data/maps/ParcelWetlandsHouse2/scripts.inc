ParcelWetlandsHouse2_MapScripts::
	.byte 0


ParcelWetlandsHouse2_OldMan::
# 7 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	lock
# 8 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse2_OldMan_2
# 14 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_2:
# 10 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end


ParcelWetlandsHouse2_Boy::
# 20 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	lock
# 21 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse2_Boy_2
# 27 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_Boy_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_Boy_2:
# 23 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_Boy_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end


ParcelWetlandsHouse2_OldMan_Text_0:
# 10 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: GUNNAR's SURSKIT count went\n"
	.string "up this month. First time. He told\l"
	.string "everyone. He told me twice.$"

ParcelWetlandsHouse2_OldMan_Text_1:
# 14 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: I cut reed for thatch.\n"
	.string "Twelve-year rounds, like the mill wood.\l"
	.string "The reeds don't come back on the twelve\l"
	.string "now. Eight, maybe.$"

ParcelWetlandsHouse2_Boy_Text_0:
# 23 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "BOY: Forty-nine! I'm the clicker now.\n"
	.string "GUNNAR says I'm 'very accurate'.$"

ParcelWetlandsHouse2_Boy_Text_1:
# 27 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "BOY: I helped GUNNAR count. He let me\n"
	.string "hold the clicker. Forty-four!$"
