ParcelCoastHearing_MapScripts::
	.byte 0


ParcelCoastHearing_Clerk::
# 6 "data/maps/ParcelCoastHearing/scripts.pory"
	lock
# 7 "data/maps/ParcelCoastHearing/scripts.pory"
	faceplayer
# 8 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHearing_Clerk_2
# 13 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHearing_Clerk_5
# 18 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Clerk_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Clerk_2:
# 9 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Clerk_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Clerk_5:
# 14 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Clerk_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end


ParcelCoastHearing_Waiter1::
# 23 "data/maps/ParcelCoastHearing/scripts.pory"
	lock
# 24 "data/maps/ParcelCoastHearing/scripts.pory"
	faceplayer
# 25 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHearing_Waiter1_2
# 30 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHearing_Waiter1_5
# 35 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter1_Text_2, MSGBOX_DEFAULT
# 36 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Waiter1_2:
# 26 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter1_Text_0, MSGBOX_DEFAULT
# 27 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Waiter1_5:
# 31 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter1_Text_1, MSGBOX_DEFAULT
# 32 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end


ParcelCoastHearing_Waiter2::
# 40 "data/maps/ParcelCoastHearing/scripts.pory"
	lock
# 41 "data/maps/ParcelCoastHearing/scripts.pory"
	faceplayer
# 42 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHearing_Waiter2_2
# 47 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHearing_Waiter2_5
# 52 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter2_Text_2, MSGBOX_DEFAULT
# 53 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Waiter2_2:
# 43 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter2_Text_0, MSGBOX_DEFAULT
# 44 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Waiter2_5:
# 48 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter2_Text_1, MSGBOX_DEFAULT
# 49 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end


ParcelCoastHearing_Notice::
# 57 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Notice_Text_0, MSGBOX_SIGN
	end


ParcelCoastHearing_Clerk_Text_0:
# 9 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "CLERK: The hearing's in session. They\n"
	.string "read a CORPS filing into the record this\l"
	.string "morning. Parts of it twice.\p"
	.string "The review board wants the author. I\n"
	.string "told them the author was a RANGER. They\l"
	.string "said that's not a title. I said no, it\l"
	.string "isn't.$"

ParcelCoastHearing_Clerk_Text_1:
# 14 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "CLERK: Objections in writing, to the\n"
	.string "Board. One came in today that wasn't an\l"
	.string "objection. It was a survey, with a card\l"
	.string "number on it.\p"
	.string "The Board reads everything. I've put\n"
	.string "yours on top. I'm not supposed to have\l"
	.string "a top.$"

ParcelCoastHearing_Clerk_Text_2:
# 18 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "CLERK: Quota hearings are seasonal.\n"
	.string "Next session after the harvest.\l"
	.string "Objections in writing, to the Board. The\l"
	.string "Board reads them. The Board's very good\l"
	.string "at reading.$"

ParcelCoastHearing_Waiter1_Text_0:
# 26 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "FISHER: Nine objections, nine carbon\n"
	.string "copies, and the tenth one got read into\l"
	.string "the record. I've kept the chair warm\l"
	.string "nine years. It was worth the sitting.$"

ParcelCoastHearing_Waiter1_Text_1:
# 31 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "FISHER: Nine seasons, nine objections,\n"
	.string "nine carbons. Today a ranger's survey\l"
	.string "went in the same tray as mine.\p"
	.string "First time I've had company in the tray.\n"
	.string "I've started a tenth. Might as well have\l"
	.string "it ready.$"

ParcelCoastHearing_Waiter1_Text_2:
# 35 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "FISHER: I've sat in this chair every\n"
	.string "season for nine years. Nine objections.\l"
	.string "I keep the carbon copies. Nobody else\l"
	.string "has them.$"

ParcelCoastHearing_Waiter2_Text_0:
# 43 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "WOMAN: They changed the size rule back.\n"
	.string "Nobody told us when they changed it\l"
	.string "the first time. This time there was a\l"
	.string "notice, in the hall, in big letters.\l"
	.string "Progress is a notice.$"

ParcelCoastHearing_Waiter2_Text_1:
# 48 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "WOMAN: The size changed the week\n"
	.string "before and nobody told the fish. Your\l"
	.string "survey says the fish are all one size\l"
	.string "now, so maybe the fish told the size.\p"
	.string "My husband laughed when I said that.\n"
	.string "First time since the grounding.$"

ParcelCoastHearing_Waiter2_Text_2:
# 52 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "WOMAN: My husband's boat was grounded\n"
	.string "for an undersize catch. The size\l"
	.string "changed the week before. Nobody told\l"
	.string "the fish.$"

ParcelCoastHearing_Notice_Text_0:
# 57 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "QUOTA REVIEW BOARD -- members:\n"
	.string "MEREHOLT COASTAL HOLDINGS (3), the\l"
	.string "FOUNDATION (2), the Union (1), the\l"
	.string "Council (1). Quorum: four. The Union\l"
	.string "seat has been vacant for two years.$"
