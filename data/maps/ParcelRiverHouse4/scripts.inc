ParcelRiverHouse4_MapScripts::
	.byte 0


ParcelRiverHouse4_Woman::
# 7 "data/maps/ParcelRiverHouse4/scripts.pory"
	lock
# 8 "data/maps/ParcelRiverHouse4/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelRiverHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse4_Woman_2
# 14 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Woman_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end

ParcelRiverHouse4_Woman_2:
# 10 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Woman_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end


ParcelRiverHouse4_Boy::
# 20 "data/maps/ParcelRiverHouse4/scripts.pory"
	lock
# 21 "data/maps/ParcelRiverHouse4/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelRiverHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse4_Boy_2
# 27 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Boy_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end

ParcelRiverHouse4_Boy_2:
# 23 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Boy_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end


ParcelRiverHouse4_Woman_Text_0:
# 10 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "WOMAN: The Board posted the\n"
	.string "allocations with six names under them. I\l"
	.string "read mine twice. It's fair. First time\l"
	.string "I've written 'fair' on a form.$"

ParcelRiverHouse4_Woman_Text_1:
# 14 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "WOMAN: Fish on market day, vegetables\n"
	.string "the rest. The river gives both and the\l"
	.string "Board meters both.$"

ParcelRiverHouse4_Boy_Text_0:
# 23 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "BOY: Nineteen stalls today! I counted\n"
	.string "twice, like the ranger does.$"

ParcelRiverHouse4_Boy_Text_1:
# 27 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "BOY: I count the stalls. Twenty-two on\n"
	.string "a good day. Fourteen this spring.$"
