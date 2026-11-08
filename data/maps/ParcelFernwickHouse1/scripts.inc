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
	msgbox ParcelFernwickHouse1_Man_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelFernwickHouse1/scripts.pory"
	release
	end

ParcelFernwickHouse1_Man_2:
# 8 "data/maps/ParcelFernwickHouse1/scripts.pory"
	msgbox ParcelFernwickHouse1_Man_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelFernwickHouse1/scripts.pory"
	release
	end


ParcelFernwickHouse1_Man_Text_0:
# 8 "data/maps/ParcelFernwickHouse1/scripts.pory"
	.string "MAN: My brother's dredge is idle pending\n"
	.string "survey. My sister wrote the survey.\l"
	.string "Dinner at ours is louder now. That's\l"
	.string "better. I think it's better.$"

ParcelFernwickHouse1_Man_Text_1:
# 12 "data/maps/ParcelFernwickHouse1/scripts.pory"
	.string "MAN: My brother works the marsh dredge.\n"
	.string "My sister works for the Corps.\p"
	.string "Dinner at ours is very quiet.$"
