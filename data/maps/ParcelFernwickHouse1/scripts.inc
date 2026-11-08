ParcelFernwickHouse1_MapScripts::
	.byte 0


ParcelFernwickHouse1_Man::
# 5 "data/maps/ParcelFernwickHouse1/scripts.pory"
	lock
# 6 "data/maps/ParcelFernwickHouse1/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFernwickHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse1_Man_2
# 12 "data/maps/ParcelFernwickHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse1_Man_5
# 17 "data/maps/ParcelFernwickHouse1/scripts.pory"
	msgbox ParcelFernwickHouse1_Man_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/ParcelFernwickHouse1/scripts.pory"
	release
	end

ParcelFernwickHouse1_Man_2:
# 8 "data/maps/ParcelFernwickHouse1/scripts.pory"
	msgbox ParcelFernwickHouse1_Man_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelFernwickHouse1/scripts.pory"
	release
	end

ParcelFernwickHouse1_Man_5:
# 13 "data/maps/ParcelFernwickHouse1/scripts.pory"
	msgbox ParcelFernwickHouse1_Man_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ParcelFernwickHouse1/scripts.pory"
	release
	end


ParcelFernwickHouse1_Man_Text_0:
# 8 "data/maps/ParcelFernwickHouse1/scripts.pory"
	.string "MAN: My brother's dredge is idle pending\n"
	.string "survey. My sister wrote the survey.\l"
	.string "Dinner at ours is louder now. That's\l"
	.string "better. I think it's better.$"

ParcelFernwickHouse1_Man_Text_1:
# 13 "data/maps/ParcelFernwickHouse1/scripts.pory"
	.string "MAN: My brother's crew got stood down.\n"
	.string "He came to dinner. He talked. First time\l"
	.string "in a year the table had three voices on\l"
	.string "it.\p"
	.string "He's angry at the wrong people still,\n"
	.string "but he's angry out loud, and that's a\l"
	.string "start.$"

ParcelFernwickHouse1_Man_Text_2:
# 17 "data/maps/ParcelFernwickHouse1/scripts.pory"
	.string "MAN: My brother works the marsh dredge.\n"
	.string "My sister works for the Corps.\p"
	.string "Dinner at ours is very quiet.$"
