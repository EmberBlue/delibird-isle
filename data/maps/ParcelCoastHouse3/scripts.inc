ParcelCoastHouse3_MapScripts::
	.byte 0


ParcelCoastHouse3_Clerk::
# 4 "data/maps/ParcelCoastHouse3/scripts.pory"
	lock
# 5 "data/maps/ParcelCoastHouse3/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelCoastHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCoastHouse3_Clerk_2
# 11 "data/maps/ParcelCoastHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse3_Clerk_5
# 16 "data/maps/ParcelCoastHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHouse3_Clerk_8
# 21 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_Clerk_Text_3, MSGBOX_DEFAULT
# 22 "data/maps/ParcelCoastHouse3/scripts.pory"
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

ParcelCoastHouse3_Clerk_8:
# 17 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_Clerk_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/ParcelCoastHouse3/scripts.pory"
	release
	end


ParcelCoastHouse3_ReadDresser::
# 27 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelCoastHouse3_ReadDrawer::
# 32 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelCoastHouse3_PaperLease::
# 39 "data/maps/ParcelCoastHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse3_PaperLease_2
# 42 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_PaperLease_Text_1, MSGBOX_SIGN
ParcelCoastHouse3_PaperLease_1:
	end

ParcelCoastHouse3_PaperLease_2:
# 40 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_PaperLease_Text_0, MSGBOX_SIGN
	goto ParcelCoastHouse3_PaperLease_1


ParcelCoastHouse3_Clerk_Text_0:
# 7 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "CLERK: The catch logs are public.\n"
	.string "Anyone can read the day the numbers\l"
	.string "turned. Three people have.\p"
	.string "One was a child doing homework. That's\n"
	.string "the best reader a ledger ever had.$"

ParcelCoastHouse3_Clerk_Text_1:
# 12 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "CLERK: The exact day the numbers\n"
	.string "started going down: I gave it to the\l"
	.string "hearing. The date, the ledger page, the\l"
	.string "signature under it. It wasn't mine. It\l"
	.string "wasn't HOLLIS's either. It was above\l"
	.string "both of us.$"

ParcelCoastHouse3_Clerk_Text_2:
# 17 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "CLERK: I file the catch logs. I know the\n"
	.string "day the numbers turned. Today a survey\l"
	.string "came in that knows the same day, from\l"
	.string "the fish's side of it.\p"
	.string "I still like my flat. I've started\n"
	.string "keeping a copy, though. Of the day.$"

ParcelCoastHouse3_Clerk_Text_3:
# 21 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "CLERK: I file the catch logs at the\n"
	.string "coast office. I could tell you the exact\l"
	.string "day the numbers started going down. I\l"
	.string "won't. I like my flat. It has a view of\l"
	.string "the harbour.$"

ParcelCoastHouse3_ReadDresser_Text_0:
# 27 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "A view of the harbour, framed, on the\n"
	.string "dresser. The frame is better than the\l"
	.string "photograph. The photograph is older\l"
	.string "than the flat.$"

ParcelCoastHouse3_ReadDrawer_Text_0:
# 32 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "A locked drawer. Behind the lock, by the\n"
	.string "shape of it, a ledger.\p"
	.string "The clerk said she wouldn't tell you the\n"
	.string "day. The drawer knows it.$"

ParcelCoastHouse3_PaperLease_Text_0:
# 40 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "The lease for the flat, still framed. The\n"
	.string "rent went up the month after the\l"
	.string "sitting, by a figure that is not an\l"
	.string "accident.\p"
	.string "He stayed. He has started keeping a\n"
	.string "copy of the day the numbers turned in\l"
	.string "the frame behind the lease, where the\l"
	.string "landlord's agent will not think to look.$"

ParcelCoastHouse3_PaperLease_Text_1:
# 42 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "The lease for the flat, framed, which\n"
	.string "tells you something. HARBOUR VIEW,\l"
	.string "FURNISHED. The landlord is a company\l"
	.string "with a quay address and a parent you\l"
	.string "have seen the kerning of.\p"
	.string "The rent is low for the view. The clerk\n"
	.string "knows exactly how low, and files the\l"
	.string "catch logs accordingly.$"
