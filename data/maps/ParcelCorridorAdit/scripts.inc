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


ParcelCorridorAdit_Mark_Text_0:
# 12 "data/maps/ParcelCorridorAdit/scripts.pory"
	.string "Survey marks chalked on the rock, one\n"
	.string "above the other. Dates. Water heights.\p"
	.string "The oldest is the highest. The newest is\n"
	.string "a hand-span lower, and the hand that\l"
	.string "wrote it is not the same hand.\p"
	.string "Under it, small: H.$"
