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
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHouse3_Clerk_5
# 16 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_Clerk_Text_2, MSGBOX_DEFAULT
# 17 "data/maps/ParcelCoastHouse3/scripts.pory"
	release
	end

ParcelCoastHouse3_Clerk_2:
# 7 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_Clerk_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelCoastHouse3/scripts.pory"
	release
	end

ParcelCoastHouse3_Clerk_5:
# 12 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_Clerk_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelCoastHouse3/scripts.pory"
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
# 12 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "CLERK: I file the catch logs. I know the\n"
	.string "day the numbers turned. Today a survey\l"
	.string "came in that knows the same day, from\l"
	.string "the fish's side of it.\p"
	.string "I still like my flat. I've started\n"
	.string "keeping a copy, though. Of the day.$"

ParcelCoastHouse3_Clerk_Text_2:
# 16 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "CLERK: I file the catch logs at the\n"
	.string "coast office. I could tell you the exact\l"
	.string "day the numbers started going down. I\l"
	.string "won't. I like my flat. It has a view of\l"
	.string "the harbour.$"
