ParcelCorridorAdit_MapScripts::
	.byte 0


ParcelCorridorAdit_ItemRareCandy::
# 8 "data/maps/ParcelCorridorAdit/scripts.pory"
	finditem ITEM_RARE_CANDY
	end


ParcelCorridorAdit_ItemEscapeRope::
# 9 "data/maps/ParcelCorridorAdit/scripts.pory"
	finditem ITEM_ESCAPE_ROPE
	end


ParcelCorridorAdit_Mark::
# 12 "data/maps/ParcelCorridorAdit/scripts.pory"
	msgbox ParcelCorridorAdit_Mark_Text_0, MSGBOX_SIGN
	end


ParcelCorridorAdit_Satchel::
# 17 "data/maps/ParcelCorridorAdit/scripts.pory"
	lock
# 18 "data/maps/ParcelCorridorAdit/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FLOW, ParcelCorridorAdit_Satchel_3
ParcelCorridorAdit_Satchel_1:
# 24 "data/maps/ParcelCorridorAdit/scripts.pory"
	msgbox ParcelCorridorAdit_Satchel_Text_1, MSGBOX_SIGN
# 25 "data/maps/ParcelCorridorAdit/scripts.pory"
	release
	end

ParcelCorridorAdit_Satchel_2:
# 19 "data/maps/ParcelCorridorAdit/scripts.pory"
	msgbox ParcelCorridorAdit_Satchel_Text_0, MSGBOX_SIGN
# 20 "data/maps/ParcelCorridorAdit/scripts.pory"
	setflag FLAG_SKALD_Q_FLOW_FOUND
# 21 "data/maps/ParcelCorridorAdit/scripts.pory"
	release
	end

ParcelCorridorAdit_Satchel_3:
# 18 "data/maps/ParcelCorridorAdit/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_FLOW_FOUND, ParcelCorridorAdit_Satchel_2
	goto ParcelCorridorAdit_Satchel_1


ParcelCorridorAdit_Mark_Text_0:
# 12 "data/maps/ParcelCorridorAdit/scripts.pory"
	.string "Survey marks chalked on the rock, one\n"
	.string "above the other. Dates. Water heights.\p"
	.string "The oldest is the highest. The newest is\n"
	.string "a hand-span lower, and the hand that\l"
	.string "wrote it is not the same hand.\p"
	.string "Under it, small: H.$"

ParcelCorridorAdit_Satchel_Text_0:
# 19 "data/maps/ParcelCorridorAdit/scripts.pory"
	.string "A survey satchel wedged in the rock,\n"
	.string "dry. Inside: FLOW SURVEY -- HOLLOWBEND\l"
	.string "SPUR -- PRE-CONSTRUCTION. Eleven\l"
	.string "pages.\p"
	.string "The culvert bore in the plan is 1.2\n"
	.string "metres. Taken.$"

ParcelCorridorAdit_Satchel_Text_1:
# 24 "data/maps/ParcelCorridorAdit/scripts.pory"
	.string "A crack in the rock where a satchel\n"
	.string "used to be wedged. Dry. Empty now.$"
