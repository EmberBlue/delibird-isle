ParcelCoastHouse5_MapScripts::
	.byte 0


ParcelCoastHouse5_OldMan::
# 7 "data/maps/ParcelCoastHouse5/scripts.pory"
	lock
# 8 "data/maps/ParcelCoastHouse5/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelCoastHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse5_OldMan_2
# 14 "data/maps/ParcelCoastHouse5/scripts.pory"
	msgbox ParcelCoastHouse5_OldMan_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelCoastHouse5/scripts.pory"
	release
	end

ParcelCoastHouse5_OldMan_2:
# 10 "data/maps/ParcelCoastHouse5/scripts.pory"
	msgbox ParcelCoastHouse5_OldMan_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelCoastHouse5/scripts.pory"
	release
	end


ParcelCoastHouse5_Girl::
# 20 "data/maps/ParcelCoastHouse5/scripts.pory"
	lock
# 21 "data/maps/ParcelCoastHouse5/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelCoastHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse5_Girl_2
# 27 "data/maps/ParcelCoastHouse5/scripts.pory"
	msgbox ParcelCoastHouse5_Girl_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelCoastHouse5/scripts.pory"
	release
	end

ParcelCoastHouse5_Girl_2:
# 23 "data/maps/ParcelCoastHouse5/scripts.pory"
	msgbox ParcelCoastHouse5_Girl_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelCoastHouse5/scripts.pory"
	release
	end


ParcelCoastHouse5_OldMan_Text_0:
# 10 "data/maps/ParcelCoastHouse5/scripts.pory"
	.string "OLD MAN: The review grounds half the\n"
	.string "fleet to spring. The reef won't come\l"
	.string "back in a spring. But it'll know we\l"
	.string "stopped.$"

ParcelCoastHouse5_OldMan_Text_1:
# 14 "data/maps/ParcelCoastHouse5/scripts.pory"
	.string "OLD MAN: Fished the dredge line before\n"
	.string "it was a line. It was a reef. Then it was\l"
	.string "a resource. Now it's a line.$"

ParcelCoastHouse5_Girl_Text_0:
# 23 "data/maps/ParcelCoastHouse5/scripts.pory"
	.string "GIRL: Grandad cried at the hearing on\n"
	.string "the radio. Then he said 'good'. Both at\l"
	.string "once.$"

ParcelCoastHouse5_Girl_Text_1:
# 27 "data/maps/ParcelCoastHouse5/scripts.pory"
	.string "GIRL: Grandad takes me to see the\n"
	.string "boats not go out. He says it's important\l"
	.string "to look at it.$"
