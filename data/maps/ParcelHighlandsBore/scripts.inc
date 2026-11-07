ParcelHighlandsBore_MapScripts::
	.byte 0


ParcelHighlandsBore_Geologist::
# 5 "data/maps/ParcelHighlandsBore/scripts.pory"
	lock
# 6 "data/maps/ParcelHighlandsBore/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelHighlandsBore/scripts.pory"
	msgbox ParcelHighlandsBore_Geologist_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelHighlandsBore/scripts.pory"
	release
	end


ParcelHighlandsBore_ItemMaxRevive::
# 11 "data/maps/ParcelHighlandsBore/scripts.pory"
	finditem ITEM_MAX_REVIVE
	end


ParcelHighlandsBore_Cores::
# 13 "data/maps/ParcelHighlandsBore/scripts.pory"
	msgbox ParcelHighlandsBore_Cores_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsBore_Geologist_Text_0:
# 7 "data/maps/ParcelHighlandsBore/scripts.pory"
	.string "GEOLOGIST: Don't touch the housing,\n"
	.string "it's live. The bore's at ninety metres.\l"
	.string "The freeze starts at forty. Started at\l"
	.string "twelve, in the old logs.\p"
	.string "Exploratory. Yes. We're exploring how\n"
	.string "fast forty becomes fifty.$"

ParcelHighlandsBore_Cores_Text_0:
# 13 "data/maps/ParcelHighlandsBore/scripts.pory"
	.string "Core samples racked by depth. The\n"
	.string "labels change colour at forty metres:\l"
	.string "ICE. Below that, a second set of labels\l"
	.string "in a different hand: GAS -- EST. YIELD.\l"
	.string "The second set is newer.$"
