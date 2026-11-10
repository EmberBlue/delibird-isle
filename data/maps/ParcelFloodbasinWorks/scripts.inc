ParcelFloodbasinWorks_MapScripts::
	.byte 0


ParcelFloodbasinWorks_ItemTM18::
# 5 "data/maps/ParcelFloodbasinWorks/scripts.pory"
	finditem ITEM_TM18
	end


ParcelFloodbasinWorks_Plate::
# 7 "data/maps/ParcelFloodbasinWorks/scripts.pory"
	msgbox ParcelFloodbasinWorks_Plate_Text_0, MSGBOX_SIGN
# 8 "data/maps/ParcelFloodbasinWorks/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLATE, ParcelFloodbasinWorks_Plate_2
ParcelFloodbasinWorks_Plate_1:
	end

ParcelFloodbasinWorks_Plate_2:
# 9 "data/maps/ParcelFloodbasinWorks/scripts.pory"
	setflag FLAG_SKALD_Q_PLATE_FOUND
	goto ParcelFloodbasinWorks_Plate_1


ParcelFloodbasinWorks_Permit::
# 17 "data/maps/ParcelFloodbasinWorks/scripts.pory"
	msgbox ParcelFloodbasinWorks_Permit_Text_0, MSGBOX_SIGN
	return


ParcelFloodbasinWorks_Plate_Text_0:
# 7 "data/maps/ParcelFloodbasinWorks/scripts.pory"
	.string "A brass plate, green with damp:\n"
	.string "MEREHOLT BASIN WORKS -- PUMP HOUSE 2.\l"
	.string "DISCHARGE LICENSED.\p"
	.string "Below it, scratched in by hand: WHERE\n"
	.string "DID YOU THINK IT WENT?$"

ParcelFloodbasinWorks_Permit_Text_0:
# 17 "data/maps/ParcelFloodbasinWorks/scripts.pory"
	.string "Behind glass on the wall of the works,\n"
	.string "the consent, as the law requires it to\l"
	.string "be displayed. The glass is cracked and\l"
	.string "the paper has yellowed to the colour of\l"
	.string "the water.\p"
	.string "CONSENT TO OPERATE. Granted to\n"
	.string "Mereholt Resources Ltd for the\l"
	.string "recovery of ore from the Leirvik seam,\l"
	.string "subject to conditions.\p"
	.string "CONDITION 4. Tailings to be contained\n"
	.string "and lined. CONDITION 7. Discharge to\l"
	.string "the basin not to exceed the levels in\l"
	.string "Schedule B. CONDITION 12. On cessation,\l"
	.string "the site to be restored to its prior\l"
	.string "state within five years.\p"
	.string "The operation ceased twenty-two years\n"
	.string "ago. A stamp over the conditions reads:\l"
	.string "UNDER REVIEW.\p"
	.string "The stamp is newer than the paper.\n"
	.string "Someone comes to renew the stamp.$"
