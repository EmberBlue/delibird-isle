ParcelHighlandsBore_MapScripts::
	.byte 0


ParcelHighlandsBore_Geologist::
# 5 "data/maps/ParcelHighlandsBore/scripts.pory"
	lock
# 6 "data/maps/ParcelHighlandsBore/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelHighlandsBore/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CORE, ParcelHighlandsBore_Geologist_3
ParcelHighlandsBore_Geologist_1:
# 21 "data/maps/ParcelHighlandsBore/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsBore_Geologist_7
# 26 "data/maps/ParcelHighlandsBore/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CORE_DONE, ParcelHighlandsBore_Geologist_13
# 32 "data/maps/ParcelHighlandsBore/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsBore_Geologist_16
# 37 "data/maps/ParcelHighlandsBore/scripts.pory"
	msgbox ParcelHighlandsBore_Geologist_Text_7, MSGBOX_DEFAULT
# 38 "data/maps/ParcelHighlandsBore/scripts.pory"
	release
	end

ParcelHighlandsBore_Geologist_2:
# 8 "data/maps/ParcelHighlandsBore/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CORE_FOUND, ParcelHighlandsBore_Geologist_10
# 17 "data/maps/ParcelHighlandsBore/scripts.pory"
	msgbox ParcelHighlandsBore_Geologist_Text_3, MSGBOX_DEFAULT
# 18 "data/maps/ParcelHighlandsBore/scripts.pory"
	release
	end

ParcelHighlandsBore_Geologist_3:
# 7 "data/maps/ParcelHighlandsBore/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CORE_DONE, ParcelHighlandsBore_Geologist_2
	goto ParcelHighlandsBore_Geologist_1

ParcelHighlandsBore_Geologist_7:
# 22 "data/maps/ParcelHighlandsBore/scripts.pory"
	msgbox ParcelHighlandsBore_Geologist_Text_4, MSGBOX_DEFAULT
# 23 "data/maps/ParcelHighlandsBore/scripts.pory"
	release
	end

ParcelHighlandsBore_Geologist_10:
# 9 "data/maps/ParcelHighlandsBore/scripts.pory"
	msgbox ParcelHighlandsBore_Geologist_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/ParcelHighlandsBore/scripts.pory"
	msgbox ParcelHighlandsBore_Geologist_Text_1, MSGBOX_DEFAULT
# 11 "data/maps/ParcelHighlandsBore/scripts.pory"
	giveitem ITEM_METAL_COAT
# 12 "data/maps/ParcelHighlandsBore/scripts.pory"
	setflag FLAG_SKALD_Q_CORE_DONE
# 13 "data/maps/ParcelHighlandsBore/scripts.pory"
	msgbox ParcelHighlandsBore_Geologist_Text_2, MSGBOX_DEFAULT
# 14 "data/maps/ParcelHighlandsBore/scripts.pory"
	release
	end

ParcelHighlandsBore_Geologist_13:
# 27 "data/maps/ParcelHighlandsBore/scripts.pory"
	msgbox ParcelHighlandsBore_Geologist_Text_5, MSGBOX_DEFAULT
# 28 "data/maps/ParcelHighlandsBore/scripts.pory"
	setflag FLAG_SKALD_Q_CORE
# 29 "data/maps/ParcelHighlandsBore/scripts.pory"
	release
	end

ParcelHighlandsBore_Geologist_16:
# 33 "data/maps/ParcelHighlandsBore/scripts.pory"
	msgbox ParcelHighlandsBore_Geologist_Text_6, MSGBOX_DEFAULT
# 34 "data/maps/ParcelHighlandsBore/scripts.pory"
	release
	end


ParcelHighlandsBore_ItemMaxRevive::
# 41 "data/maps/ParcelHighlandsBore/scripts.pory"
	finditem ITEM_MAX_REVIVE
	end


ParcelHighlandsBore_Cores::
# 43 "data/maps/ParcelHighlandsBore/scripts.pory"
	msgbox ParcelHighlandsBore_Cores_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsBore_Geologist_Text_0:
# 9 "data/maps/ParcelHighlandsBore/scripts.pory"
	.string "GEOLOGIST: 48-50. That's the core\n"
	.string "where the ice turns to mud, the one\l"
	.string "they most want unlabelled.$"

ParcelHighlandsBore_Geologist_Text_1:
# 10 "data/maps/ParcelHighlandsBore/scripts.pory"
	.string "GEOLOGIST: It's labelled. Thank you.\n"
	.string "Here -- the housing's spare lining. It\l"
	.string "stops a drill bit going dull on hard\l"
	.string "ground. Put it on something you want to\l"
	.string "stay sharp.$"

ParcelHighlandsBore_Geologist_Text_2:
# 13 "data/maps/ParcelHighlandsBore/scripts.pory"
	.string "GEOLOGIST: Fifty-two metres. I wrote\n"
	.string "it. Now the one core that proves it has\l"
	.string "a name again.$"

ParcelHighlandsBore_Geologist_Text_3:
# 17 "data/maps/ParcelHighlandsBore/scripts.pory"
	.string "GEOLOGIST: The tarn cave. A brass tag,\n"
	.string "48-50. I had it in my hand at the old\l"
	.string "water line.$"

ParcelHighlandsBore_Geologist_Text_4:
# 22 "data/maps/ParcelHighlandsBore/scripts.pory"
	.string "GEOLOGIST: Housing's dead. Capped at\n"
	.string "ninety metres. The freeze starts at\l"
	.string "forty and now nobody's drilling through\l"
	.string "it. I'm on half pay to watch a cap. It's\l"
	.string "the best job I've had here.$"

ParcelHighlandsBore_Geologist_Text_5:
# 27 "data/maps/ParcelHighlandsBore/scripts.pory"
	.string "GEOLOGIST: Fifty-two metres and a\n"
	.string "missing tag. The core from forty-eight\l"
	.string "to fifty is labelled, bagged, and the\l"
	.string "tag is not on it.\p"
	.string "I dropped it in the tarn cave when I\n"
	.string "went down to check the old water line. A\l"
	.string "brass tag, stamped 48-50. Without it\l"
	.string "the coast office gets to call that core\l"
	.string "'unlabelled', and 'unlabelled' is a word\l"
	.string "that means 'forget it'.\p"
	.string "The cave's up the slope, west of the\n"
	.string "bore. I'd go myself, but I'm not allowed\l"
	.string "off the housing while it's live.$"

ParcelHighlandsBore_Geologist_Text_6:
# 33 "data/maps/ParcelHighlandsBore/scripts.pory"
	.string "GEOLOGIST: Fifty-two metres to the\n"
	.string "freeze this week. The coast office\l"
	.string "asked me to round it to fifty. I wrote\l"
	.string "fifty-two and 'rounded by request'\l"
	.string "beside it.\p"
	.string "You put a quay full of fishermen on\n"
	.string "paper, I hear. I can manage a number.$"

ParcelHighlandsBore_Geologist_Text_7:
# 37 "data/maps/ParcelHighlandsBore/scripts.pory"
	.string "GEOLOGIST: Don't touch the housing,\n"
	.string "it's live. The bore's at ninety metres.\l"
	.string "The freeze starts at forty. Started at\l"
	.string "twelve, in the old logs.\p"
	.string "Exploratory. Yes. We're exploring how\n"
	.string "fast forty becomes fifty.$"

ParcelHighlandsBore_Cores_Text_0:
# 43 "data/maps/ParcelHighlandsBore/scripts.pory"
	.string "Core samples racked by depth. The\n"
	.string "labels change colour at forty metres:\l"
	.string "ICE. Below that, a second set of labels\l"
	.string "in a different hand: GAS -- EST. YIELD.\l"
	.string "The second set is newer.$"
