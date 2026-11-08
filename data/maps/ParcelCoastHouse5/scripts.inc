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
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHouse5_OldMan_5
# 19 "data/maps/ParcelCoastHouse5/scripts.pory"
	msgbox ParcelCoastHouse5_OldMan_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelCoastHouse5/scripts.pory"
	release
	end

ParcelCoastHouse5_OldMan_2:
# 10 "data/maps/ParcelCoastHouse5/scripts.pory"
	msgbox ParcelCoastHouse5_OldMan_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelCoastHouse5/scripts.pory"
	release
	end

ParcelCoastHouse5_OldMan_5:
# 15 "data/maps/ParcelCoastHouse5/scripts.pory"
	msgbox ParcelCoastHouse5_OldMan_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelCoastHouse5/scripts.pory"
	release
	end


ParcelCoastHouse5_Girl::
# 25 "data/maps/ParcelCoastHouse5/scripts.pory"
	lock
# 26 "data/maps/ParcelCoastHouse5/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelCoastHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse5_Girl_2
# 32 "data/maps/ParcelCoastHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHouse5_Girl_5
# 37 "data/maps/ParcelCoastHouse5/scripts.pory"
	msgbox ParcelCoastHouse5_Girl_Text_2, MSGBOX_DEFAULT
# 38 "data/maps/ParcelCoastHouse5/scripts.pory"
	release
	end

ParcelCoastHouse5_Girl_2:
# 28 "data/maps/ParcelCoastHouse5/scripts.pory"
	msgbox ParcelCoastHouse5_Girl_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/ParcelCoastHouse5/scripts.pory"
	release
	end

ParcelCoastHouse5_Girl_5:
# 33 "data/maps/ParcelCoastHouse5/scripts.pory"
	msgbox ParcelCoastHouse5_Girl_Text_1, MSGBOX_DEFAULT
# 34 "data/maps/ParcelCoastHouse5/scripts.pory"
	release
	end


ParcelCoastHouse5_OldMan_Text_0:
# 10 "data/maps/ParcelCoastHouse5/scripts.pory"
	.string "OLD MAN: The review grounds half the\n"
	.string "fleet to spring. The reef won't come\l"
	.string "back in a spring. But it'll know we\l"
	.string "stopped.$"

ParcelCoastHouse5_OldMan_Text_1:
# 15 "data/maps/ParcelCoastHouse5/scripts.pory"
	.string "OLD MAN: A reef, then a resource, then a\n"
	.string "line. You wrote 'line' and the Board read\l"
	.string "'line', and nobody can say 'resource'\l"
	.string "with a straight face this week.\p"
	.string "That's not a reef back. It's a word back.\n"
	.string "Start there.$"

ParcelCoastHouse5_OldMan_Text_2:
# 19 "data/maps/ParcelCoastHouse5/scripts.pory"
	.string "OLD MAN: Fished the dredge line before\n"
	.string "it was a line. It was a reef. Then it was\l"
	.string "a resource. Now it's a line.$"

ParcelCoastHouse5_Girl_Text_0:
# 28 "data/maps/ParcelCoastHouse5/scripts.pory"
	.string "GIRL: Grandad cried at the hearing on\n"
	.string "the radio. Then he said 'good'. Both at\l"
	.string "once.$"

ParcelCoastHouse5_Girl_Text_1:
# 33 "data/maps/ParcelCoastHouse5/scripts.pory"
	.string "GIRL: Grandad took me to see the boats\n"
	.string "not go out, and today a lady from the\l"
	.string "FOUNDATION was watching them not go\l"
	.string "out too.\p"
	.string "Grandad said: good. Now there's two of\n"
	.string "us looking. He didn't say it to her.$"

ParcelCoastHouse5_Girl_Text_2:
# 37 "data/maps/ParcelCoastHouse5/scripts.pory"
	.string "GIRL: Grandad takes me to see the\n"
	.string "boats not go out. He says it's important\l"
	.string "to look at it.$"
