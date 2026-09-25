ParcelIsleHall_MapScripts::
	.byte 0


ParcelIsleHall_Brenna::
# 10 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 11 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 12 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Brenna_2
# 14 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Brenna_3
# 17 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Brenna_Text_2, MSGBOX_DEFAULT
ParcelIsleHall_Brenna_1:
# 19 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Brenna_2:
# 13 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Brenna_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleHall_Brenna_1

ParcelIsleHall_Brenna_3:
# 15 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Brenna_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHall_Brenna_1


ParcelIsleHall_Ivar::
# 24 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 25 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 26 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Ivar_2
# 28 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Ivar_3
# 31 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Ivar_Text_2, MSGBOX_DEFAULT
ParcelIsleHall_Ivar_1:
# 33 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Ivar_2:
# 27 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Ivar_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleHall_Ivar_1

ParcelIsleHall_Ivar_3:
# 29 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Ivar_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHall_Ivar_1


ParcelIsleHall_Jorunn::
# 38 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 39 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 40 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Jorunn_2
# 42 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Jorunn_3
# 45 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Jorunn_Text_2, MSGBOX_DEFAULT
ParcelIsleHall_Jorunn_1:
# 47 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Jorunn_2:
# 41 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Jorunn_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleHall_Jorunn_1

ParcelIsleHall_Jorunn_3:
# 43 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Jorunn_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHall_Jorunn_1


ParcelIsleHall_Bard::
# 52 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 53 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 54 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Bard_2
# 56 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Bard_3
# 59 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Bard_Text_2, MSGBOX_DEFAULT
ParcelIsleHall_Bard_1:
# 61 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Bard_2:
# 55 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Bard_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleHall_Bard_1

ParcelIsleHall_Bard_3:
# 57 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Bard_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHall_Bard_1


ParcelIsleHall_Kid::
# 66 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 67 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 68 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Kid_Text_0, MSGBOX_DEFAULT
# 69 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end


ParcelIsleHall_Minutes::
# 74 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Minutes_2
# 76 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Minutes_3
# 79 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Minutes_Text_2, MSGBOX_SIGN
ParcelIsleHall_Minutes_1:
	end

ParcelIsleHall_Minutes_2:
# 75 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Minutes_Text_0, MSGBOX_SIGN
	goto ParcelIsleHall_Minutes_1

ParcelIsleHall_Minutes_3:
# 77 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Minutes_Text_1, MSGBOX_SIGN
	goto ParcelIsleHall_Minutes_1


ParcelIsleHall_Brenna_Text_0:
# 13 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Brenna: We voted. Twelve to nine, to\n"
	.string "back your filing at the hearing.\p"
	.string "Nine is a lot of nine, in a town this size.\n"
	.string "I'll be buying nine people's drinks for a\l"
	.string "year. That's what chairing is.$"

ParcelIsleHall_Brenna_Text_1:
# 15 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Brenna: The Corps sent you? Then you'll\n"
	.string "want the quota minutes. They're on the\l"
	.string "board.\p"
	.string "Read fast. The Foundation reads them\n"
	.string "slower, and they read them first.$"

ParcelIsleHall_Brenna_Text_2:
# 17 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Brenna: Members and guests. You're a\n"
	.string "guest. Sit anywhere the members aren't.\p"
	.string "We're between meetings. We're always\n"
	.string "between meetings. Nobody wants to be\l"
	.string "the one who calls the next one.$"

ParcelIsleHall_Ivar_Text_0:
# 27 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Ivar: My berth's gone. Pending. My berth\n"
	.string "is pending, and she's over there\l"
	.string "counting votes like it's a catch.\p"
	.string "I'm not angry at you. I've decided that.\n"
	.string "It's taking effort.$"

ParcelIsleHall_Ivar_Text_1:
# 29 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Ivar: Ranger. Good. Tell her the basin's\n"
	.string "fine. The Council says it's fine, the\l"
	.string "Foundation says it's remediated--\p"
	.string "Tell her. You've got the knot; she'll\n"
	.string "listen to a knot.$"

ParcelIsleHall_Ivar_Text_2:
# 31 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Ivar: The dredge widened the channel.\n"
	.string "Widened it! More boats in, bigger boats.\p"
	.string "You don't fix a town by making it\n"
	.string "smaller. Tell her.$"

ParcelIsleHall_Jorunn_Text_0:
# 41 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Jorunn: I'm not smiling. I'm counting.\n"
	.string "Twelve to nine.\p"
	.string "He thinks I won. Nobody won. I'd rather\n"
	.string "have the herring than the vote.$"

ParcelIsleHall_Jorunn_Text_1:
# 43 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Jorunn: Tell HIM the herring's thin. Tell\n"
	.string "him the Poliwag went up the inlet in a\l"
	.string "line like a funeral.\p"
	.string "He knows. He was on the boat. He wants\n"
	.string "somebody else to say it so it isn't him.$"

ParcelIsleHall_Jorunn_Text_2:
# 45 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Jorunn: More boats, less fish. Do the\n"
	.string "sum. He won't do the sum.\p"
	.string "I've done it. On the back of the quota\n"
	.string "form. It doesn't come out.$"

ParcelIsleHall_Bard_Text_0:
# 55 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Bard: The notes. From the night she sat\n"
	.string "with the ones who didn't clap.\p"
	.string "They were yours all along, then. In the\n"
	.string "margins. She was writing to you before\l"
	.string "she'd met you.\p"
	.string "I've lived long enough to see a thing\n"
	.string "like that. I'm not sure I wanted to.$"

ParcelIsleHall_Bard_Text_1:
# 57 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Bard: After the talk she came back and\n"
	.string "sat with the ones who hadn't clapped.\l"
	.string "Me among them.\p"
	.string "She wrote it all down. Every complaint. I\n"
	.string "never saw the notes. I've wondered,\l"
	.string "since, who did.$"

ParcelIsleHall_Bard_Text_2:
# 59 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Bard: The scientist gave a talk in here\n"
	.string "once. Resilience. Big word for a small\l"
	.string "room.\p"
	.string "Half of us clapped. I remember which\n"
	.string "half.$"

ParcelIsleHall_Kid_Text_0:
# 68 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Dad says the meeting's boring.\p"
	.string "Dad's AT the meeting. Every time.$"

ParcelIsleHall_Minutes_Text_0:
# 75 "data/maps/ParcelIsleHall/scripts.pory"
	.string "CO-OPERATIVE MINUTES (extraordinary)\p"
	.string "Motion: the Co-op to appear at the\n"
	.string "regional hearing in support of the filed\l"
	.string "record. CARRIED, 12-9.\p"
	.string "Motion: to write to the Foundation\n"
	.string "regarding the hall's roof grant.\l"
	.string "WITHDRAWN.\p"
	.string "Chair's note: nobody stayed for tea.$"

ParcelIsleHall_Minutes_Text_1:
# 77 "data/maps/ParcelIsleHall/scripts.pory"
	.string "CO-OPERATIVE MINUTES\p"
	.string "Item 3: the quota. Coastal division\n"
	.string "proposes a 'sustainable harvest' figure\l"
	.string "based on the resilience model. Chair\l"
	.string "asks whose model. No answer minuted.\p"
	.string "Item 4: the Foundation renews the\n"
	.string "hall's roof grant. Carried, with thanks.$"

ParcelIsleHall_Minutes_Text_2:
# 79 "data/maps/ParcelIsleHall/scripts.pory"
	.string "CO-OPERATIVE MINUTES\p"
	.string "Item 1: the channel dredge is complete.\n"
	.string "Item 2: the Foundation's storm-relief\l"
	.string "blankets have arrived and are in the\l"
	.string "loft.\p"
	.string "Item 3: the herring. Discussion. No\n"
	.string "motion.\p"
	.string "Item 4: the schedule board. Discussion.\n"
	.string "No motion.$"
