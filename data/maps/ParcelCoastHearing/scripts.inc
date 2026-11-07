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
	msgbox ParcelCoastHearing_Clerk_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Clerk_2:
# 9 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Clerk_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end


ParcelCoastHearing_Waiter1::
# 18 "data/maps/ParcelCoastHearing/scripts.pory"
	lock
# 19 "data/maps/ParcelCoastHearing/scripts.pory"
	faceplayer
# 20 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter1_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end


ParcelCoastHearing_Waiter2::
# 25 "data/maps/ParcelCoastHearing/scripts.pory"
	lock
# 26 "data/maps/ParcelCoastHearing/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter2_Text_0, MSGBOX_DEFAULT
# 28 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end


ParcelCoastHearing_Notice::
# 32 "data/maps/ParcelCoastHearing/scripts.pory"
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
# 13 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "CLERK: Quota hearings are seasonal.\n"
	.string "Next session after the harvest.\l"
	.string "Objections in writing, to the Board. The\l"
	.string "Board reads them. The Board's very good\l"
	.string "at reading.$"

ParcelCoastHearing_Waiter1_Text_0:
# 20 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "FISHER: I've sat in this chair every\n"
	.string "season for nine years. Nine objections.\l"
	.string "I keep the carbon copies. Nobody else\l"
	.string "has them.$"

ParcelCoastHearing_Waiter2_Text_0:
# 27 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "WOMAN: My husband's boat was grounded\n"
	.string "for an undersize catch. The size\l"
	.string "changed the week before. Nobody told\l"
	.string "the fish.$"

ParcelCoastHearing_Notice_Text_0:
# 32 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "QUOTA REVIEW BOARD -- members:\n"
	.string "MEREHOLT COASTAL HOLDINGS (3), the\l"
	.string "FOUNDATION (2), the Union (1), the\l"
	.string "Council (1). Quorum: four. The Union\l"
	.string "seat has been vacant for two years.$"
