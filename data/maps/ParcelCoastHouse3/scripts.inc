ParcelCoastHouse3_MapScripts::
	.byte 0


ParcelCoastHouse3_Clerk::
# 4 "data/maps/ParcelCoastHouse3/scripts.pory"
	lock
# 5 "data/maps/ParcelCoastHouse3/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelCoastHouse3/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SCALE, ParcelCoastHouse3_Clerk_5
ParcelCoastHouse3_Clerk_4:
# 16 "data/maps/ParcelCoastHouse3/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SCALE_DONE, ParcelCoastHouse3_Clerk_3
# 22 "data/maps/ParcelCoastHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCoastHouse3_Clerk_9
# 27 "data/maps/ParcelCoastHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse3_Clerk_16
# 32 "data/maps/ParcelCoastHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHouse3_Clerk_19
# 37 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_Clerk_Text_6, MSGBOX_DEFAULT
# 38 "data/maps/ParcelCoastHouse3/scripts.pory"
	release
	end

ParcelCoastHouse3_Clerk_2:
# 7 "data/maps/ParcelCoastHouse3/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SCALE_FOUND, ParcelCoastHouse3_Clerk_12
# 12 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_Clerk_Text_1, MSGBOX_DEFAULT
ParcelCoastHouse3_Clerk_11:
# 14 "data/maps/ParcelCoastHouse3/scripts.pory"
	release
	end

ParcelCoastHouse3_Clerk_3:
# 17 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_Clerk_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/ParcelCoastHouse3/scripts.pory"
	setflag FLAG_SKALD_Q_SCALE
# 19 "data/maps/ParcelCoastHouse3/scripts.pory"
	release
	end

ParcelCoastHouse3_Clerk_5:
# 6 "data/maps/ParcelCoastHouse3/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SCALE_DONE, ParcelCoastHouse3_Clerk_2
	goto ParcelCoastHouse3_Clerk_4

ParcelCoastHouse3_Clerk_9:
# 23 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_Clerk_Text_3, MSGBOX_DEFAULT
# 24 "data/maps/ParcelCoastHouse3/scripts.pory"
	release
	end

ParcelCoastHouse3_Clerk_12:
# 8 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_Clerk_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelCoastHouse3/scripts.pory"
	giveitem ITEM_DIVE_BALL, 2
# 10 "data/maps/ParcelCoastHouse3/scripts.pory"
	setflag FLAG_SKALD_Q_SCALE_DONE
	goto ParcelCoastHouse3_Clerk_11

ParcelCoastHouse3_Clerk_16:
# 28 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_Clerk_Text_4, MSGBOX_DEFAULT
# 29 "data/maps/ParcelCoastHouse3/scripts.pory"
	release
	end

ParcelCoastHouse3_Clerk_19:
# 33 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_Clerk_Text_5, MSGBOX_DEFAULT
# 34 "data/maps/ParcelCoastHouse3/scripts.pory"
	release
	end


ParcelCoastHouse3_ReadDresser::
# 43 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelCoastHouse3_ReadDrawer::
# 48 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelCoastHouse3_PaperLease::
# 55 "data/maps/ParcelCoastHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse3_PaperLease_2
# 58 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_PaperLease_Text_1, MSGBOX_SIGN
ParcelCoastHouse3_PaperLease_1:
	end

ParcelCoastHouse3_PaperLease_2:
# 56 "data/maps/ParcelCoastHouse3/scripts.pory"
	msgbox ParcelCoastHouse3_PaperLease_Text_0, MSGBOX_SIGN
	goto ParcelCoastHouse3_PaperLease_1


ParcelCoastHouse3_Clerk_Text_0:
# 8 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "CLERK: The same year. The same year.\n"
	.string "They certified the scale and the\l"
	.string "numbers turned, and I filed both\l"
	.string "without seeing it.\p"
	.string "It's in the review now, with my name on\n"
	.string "the finding. Here. I was given these for\l"
	.string "twenty years' service. The service\l"
	.string "wasn't to them.$"

ParcelCoastHouse3_Clerk_Text_1:
# 12 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "CLERK: The quay scale, by the cold\n"
	.string "store. The brass plate. The year.$"

ParcelCoastHouse3_Clerk_Text_2:
# 17 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "CLERK: The catch logs turn on one date;\n"
	.string "I know the page. The quay scale has a\l"
	.string "brass plate with the year it was last\l"
	.string "certified. I've always wondered if the\l"
	.string "two dates are the same year.\p"
	.string "Go and read the plate. If they match,\n"
	.string "I'll know the scale was reset the year\l"
	.string "the numbers started lying.$"

ParcelCoastHouse3_Clerk_Text_3:
# 23 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "CLERK: The catch logs are public.\n"
	.string "Anyone can read the day the numbers\l"
	.string "turned. Three people have.\p"
	.string "One was a child doing homework. That's\n"
	.string "the best reader a ledger ever had.$"

ParcelCoastHouse3_Clerk_Text_4:
# 28 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "CLERK: The exact day the numbers\n"
	.string "started going down: I gave it to the\l"
	.string "hearing. The date, the ledger page, the\l"
	.string "signature under it. It wasn't mine. It\l"
	.string "wasn't HOLLIS's either. It was above\l"
	.string "both of us.$"

ParcelCoastHouse3_Clerk_Text_5:
# 33 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "CLERK: I file the catch logs. I know the\n"
	.string "day the numbers turned. Today a survey\l"
	.string "came in that knows the same day, from\l"
	.string "the fish's side of it.\p"
	.string "I still like my flat. I've started\n"
	.string "keeping a copy, though. Of the day.$"

ParcelCoastHouse3_Clerk_Text_6:
# 37 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "CLERK: I file the catch logs at the\n"
	.string "coast office. I could tell you the exact\l"
	.string "day the numbers started going down. I\l"
	.string "won't. I like my flat. It has a view of\l"
	.string "the harbour.$"

ParcelCoastHouse3_ReadDresser_Text_0:
# 43 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "A view of the harbour, framed, on the\n"
	.string "dresser. The frame is better than the\l"
	.string "photograph. The photograph is older\l"
	.string "than the flat.$"

ParcelCoastHouse3_ReadDrawer_Text_0:
# 48 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "A locked drawer. Behind the lock, by the\n"
	.string "shape of it, a ledger.\p"
	.string "The clerk said she wouldn't tell you the\n"
	.string "day. The drawer knows it.$"

ParcelCoastHouse3_PaperLease_Text_0:
# 56 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "The lease for the flat, still framed. The\n"
	.string "rent went up the month after the\l"
	.string "sitting, by a figure that is not an\l"
	.string "accident.\p"
	.string "He stayed. He has started keeping a\n"
	.string "copy of the day the numbers turned in\l"
	.string "the frame behind the lease, where the\l"
	.string "landlord's agent will not think to look.$"

ParcelCoastHouse3_PaperLease_Text_1:
# 58 "data/maps/ParcelCoastHouse3/scripts.pory"
	.string "The lease for the flat, framed, which\n"
	.string "tells you something. HARBOUR VIEW,\l"
	.string "FURNISHED. The landlord is a company\l"
	.string "with a quay address and a parent you\l"
	.string "have seen the kerning of.\p"
	.string "The rent is low for the view. The clerk\n"
	.string "knows exactly how low, and files the\l"
	.string "catch logs accordingly.$"
