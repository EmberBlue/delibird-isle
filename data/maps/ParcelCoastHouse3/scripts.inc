ParcelCoastHouse3_MapScripts::
	.byte 0


ParcelCoastHouse3_Clerk::
# 4 "data/maps/ParcelCoastHouse3/scripts.pory"
	lock
# 5 "data/maps/ParcelCoastHouse3/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelCoastHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse3_Clerk_2
# 11 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_Clerk_Text_1, MSGBOX_DEFAULT
# 12 "data/maps/ParcelCoastHouse3/scripts.pory"
	release
	end

ParcelCoastHouse3_Clerk_2:
# 7 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_Clerk_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelCoastHouse3/scripts.pory"
	release
	end


ParcelCoastHouse3_Clerk_Text_0:
# 7 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "CLERK: The exact day the numbers\n"
	.string "started going down: I gave it to the\l"
	.string "hearing. The date, the ledger page, the\l"
	.string "signature under it. It wasn't mine. It\l"
	.string "wasn't HOLLIS's either. It was above\l"
	.string "both of us.$"

ParcelCoastHouse3_Clerk_Text_1:
# 11 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "CLERK: I file the catch logs at the\n"
	.string "coast office. I could tell you the exact\l"
	.string "day the numbers started going down. I\l"
	.string "won't. I like my flat. It has a view of\l"
	.string "the harbour.$"
