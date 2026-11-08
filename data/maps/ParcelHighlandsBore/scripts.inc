ParcelHighlandsBore_MapScripts::
	.byte 0


ParcelHighlandsBore_Geologist::
# 5 "data/maps/ParcelHighlandsBore/scripts.pory"
	lock
# 6 "data/maps/ParcelHighlandsBore/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelHighlandsBore/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsBore_Geologist_2
# 12 "data/maps/ParcelHighlandsBore/scripts.pory"
	msgbox ParcelHighlandsBore_Geologist_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelHighlandsBore/scripts.pory"
	release
	end

ParcelHighlandsBore_Geologist_2:
# 8 "data/maps/ParcelHighlandsBore/scripts.pory"
	msgbox ParcelHighlandsBore_Geologist_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelHighlandsBore/scripts.pory"
	release
	end


ParcelHighlandsBore_ItemMaxRevive::
# 16 "data/maps/ParcelHighlandsBore/scripts.pory"
	finditem ITEM_MAX_REVIVE
	end


ParcelHighlandsBore_Cores::
# 18 "data/maps/ParcelHighlandsBore/scripts.pory"
	msgbox ParcelHighlandsBore_Cores_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsBore_Geologist_Text_0:
# 8 "data/maps/ParcelHighlandsBore/scripts.pory"
	.string "GEOLOGIST: Housing's dead. Capped at\n"
	.string "ninety metres. The freeze starts at\l"
	.string "forty and now nobody's drilling through\l"
	.string "it. I'm on half pay to watch a cap. It's\l"
	.string "the best job I've had here.$"

ParcelHighlandsBore_Geologist_Text_1:
# 12 "data/maps/ParcelHighlandsBore/scripts.pory"
	.string "GEOLOGIST: Don't touch the housing,\n"
	.string "it's live. The bore's at ninety metres.\l"
	.string "The freeze starts at forty. Started at\l"
	.string "twelve, in the old logs.\p"
	.string "Exploratory. Yes. We're exploring how\n"
	.string "fast forty becomes fifty.$"

ParcelHighlandsBore_Cores_Text_0:
# 18 "data/maps/ParcelHighlandsBore/scripts.pory"
	.string "Core samples racked by depth. The\n"
	.string "labels change colour at forty metres:\l"
	.string "ICE. Below that, a second set of labels\l"
	.string "in a different hand: GAS -- EST. YIELD.\l"
	.string "The second set is newer.$"
