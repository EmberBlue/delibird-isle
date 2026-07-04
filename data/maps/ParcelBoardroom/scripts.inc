ParcelBoardroom_MapScripts::
# 17 "data/maps/ParcelBoardroom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelBoardroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelBoardroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 18 "data/maps/ParcelBoardroom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ParcelBoardroom_Arrival
	.2byte 0


ParcelBoardroom_Arrival::
# 24 "data/maps/ParcelBoardroom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 25 "data/maps/ParcelBoardroom/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelBoardroom_Arrival_2
# 28 "data/maps/ParcelBoardroom/scripts.pory"
	lockall
# 29 "data/maps/ParcelBoardroom/scripts.pory"
	msgbox ParcelBoardroom_Arrival_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/ParcelBoardroom/scripts.pory"
	closemessage
# 31 "data/maps/ParcelBoardroom/scripts.pory"
	releaseall
	end

ParcelBoardroom_Arrival_2:
	end


ParcelBoardroom_Leave::
# 37 "data/maps/ParcelBoardroom/scripts.pory"
	lockall
# 38 "data/maps/ParcelBoardroom/scripts.pory"
	warp MAP_PARCEL_COAST, 15, 36
# 39 "data/maps/ParcelBoardroom/scripts.pory"
	waitstate
	end


ParcelBoardroom_Cordelia::
# 44 "data/maps/ParcelBoardroom/scripts.pory"
	lock
# 45 "data/maps/ParcelBoardroom/scripts.pory"
	faceplayer
# 46 "data/maps/ParcelBoardroom/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelBoardroom_Cordelia_2
# 51 "data/maps/ParcelBoardroom/scripts.pory"
	msgbox ParcelBoardroom_Cordelia_Text_1, MSGBOX_DEFAULT
# 52 "data/maps/ParcelBoardroom/scripts.pory"
	msgbox ParcelBoardroom_Cordelia_Text_2, MSGBOX_DEFAULT
# 53 "data/maps/ParcelBoardroom/scripts.pory"
	msgbox ParcelBoardroom_Cordelia_Text_3, MSGBOX_DEFAULT
# 54 "data/maps/ParcelBoardroom/scripts.pory"
	msgbox ParcelBoardroom_Cordelia_Text_4, MSGBOX_DEFAULT
# 55 "data/maps/ParcelBoardroom/scripts.pory"
	msgbox ParcelBoardroom_Cordelia_Text_5, MSGBOX_DEFAULT
# 56 "data/maps/ParcelBoardroom/scripts.pory"
	msgbox ParcelBoardroom_Cordelia_Text_6, MSGBOX_DEFAULT
# 57 "data/maps/ParcelBoardroom/scripts.pory"
	msgbox ParcelBoardroom_Cordelia_Text_7, MSGBOX_DEFAULT
# 58 "data/maps/ParcelBoardroom/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CORDELIA, ParcelBoardroom_Cordelia_Text_8, ParcelBoardroom_Cordelia_Text_9
# 61 "data/maps/ParcelBoardroom/scripts.pory"
	msgbox ParcelBoardroom_Cordelia_Text_10, MSGBOX_DEFAULT
# 62 "data/maps/ParcelBoardroom/scripts.pory"
	msgbox ParcelBoardroom_Cordelia_Text_11, MSGBOX_DEFAULT
# 63 "data/maps/ParcelBoardroom/scripts.pory"
	msgbox ParcelBoardroom_Cordelia_Text_12, MSGBOX_DEFAULT
# 64 "data/maps/ParcelBoardroom/scripts.pory"
	setflag FLAG_SKALDMERE_CORDELIA_DONE
# 65 "data/maps/ParcelBoardroom/scripts.pory"
	release
	end

ParcelBoardroom_Cordelia_2:
# 47 "data/maps/ParcelBoardroom/scripts.pory"
	msgbox ParcelBoardroom_Cordelia_Text_0, MSGBOX_DEFAULT
# 48 "data/maps/ParcelBoardroom/scripts.pory"
	release
	end


ParcelBoardroom_Arrival_Text_0:
# 29 "data/maps/ParcelBoardroom/scripts.pory"
	.string "The boardroom runs the whole length of\n"
	.string "the building, and she has put all of it\l"
	.string "between the door and her chair.\p"
	.string "No board. No counsel. No second cup.\p"
	.string "For this, she wanted no witnesses.$"

ParcelBoardroom_Cordelia_Text_0:
# 47 "data/maps/ParcelBoardroom/scripts.pory"
	.string "Cordelia: The door is where you left it,\n"
	.string "Ranger.\p"
	.string "One of us still has a region to run.$"

ParcelBoardroom_Cordelia_Text_1:
# 51 "data/maps/ParcelBoardroom/scripts.pory"
	.string "Cordelia Brooke does not stand to\n"
	.string "greet you. She finishes the line she is\l"
	.string "writing, caps the pen, and squares the\l"
	.string "page against the edge of the desk.\p"
	.string "Cordelia: Ranger. Sit, don't sit. The\n"
	.string "meeting runs the same length either\l"
	.string "way.$"

ParcelBoardroom_Cordelia_Text_2:
# 52 "data/maps/ParcelBoardroom/scripts.pory"
	.string "Cordelia: You filed the truth. All of it,\n"
	.string "I'm told. I've had it read to me twice --\l"
	.string "once by the lawyers, once by the people\l"
	.string "I pay to translate lawyers.\p"
	.string "Review of the coastal quotas. The\n"
	.string "permafrost leases enjoined pending\l"
	.string "survey. The corridor listing,\l"
	.string "fast-tracked.\p"
	.string "My expansion, priced this morning at\n"
	.string "eighteen months of delay. Thirty, if the\l"
	.string "hearings run long.$"

ParcelBoardroom_Cordelia_Text_3:
# 53 "data/maps/ParcelBoardroom/scripts.pory"
	.string "Cordelia: That is what you bought. I\n"
	.string "wanted you to hear the price from me,\l"
	.string "because nobody who celebrates you this\l"
	.string "week will say it to your face.\p"
	.string "When the Politoed data is corrected,\n"
	.string "the Mahogany preserve loses its\l"
	.string "listing. Her lie protected that marsh\l"
	.string "for twenty years. Your truth\l"
	.string "un-protects it in a filing season.\p"
	.string "I don't say it to wound. I say it\n"
	.string "because the accounts should be kept\l"
	.string "whole. Someone in this room still keeps\l"
	.string "accounts.$"

ParcelBoardroom_Cordelia_Text_4:
# 54 "data/maps/ParcelBoardroom/scripts.pory"
	.string "Cordelia: And you are owed one\n"
	.string "correction, since we're keeping them.\p"
	.string "You did not fight a company. Mereholt is\n"
	.string "the ferry you arrived on. The wage of\l"
	.string "the man who fed you on the crossing.\l"
	.string "Half the fuel in this harbour, and a\l"
	.string "third of the budget of the Corps that\l"
	.string "trained you.\p"
	.string "You fought the way this region eats,\n"
	.string "Ranger. And you have won a delay.$"

ParcelBoardroom_Cordelia_Text_5:
# 55 "data/maps/ParcelBoardroom/scripts.pory"
	.string "For a moment the only sound is the\n"
	.string "harbour below -- the cranes, swinging\l"
	.string "weight through the cold air, on\l"
	.string "schedule.\p"
	.string "Cordelia: The board would have my seat\n"
	.string "in a week if the figures faltered. There\l"
	.string "are covenants older than my chair that\l"
	.string "decide most of what I sign.\p"
	.string "I mention that once, for accuracy. Not\n"
	.string "absolution. Do not write it down as\l"
	.string "regret.$"

ParcelBoardroom_Cordelia_Text_6:
# 56 "data/maps/ParcelBoardroom/scripts.pory"
	.string "Cordelia: One item remains, and then the\n"
	.string "door.\p"
	.string "I have read eleven hundred pages about\n"
	.string "you, most of them in your own hand.\l"
	.string "Paper flattens people -- it is the only\l"
	.string "thing paper does reliably.\p"
	.string "I should like the primary source.$"

ParcelBoardroom_Cordelia_Text_7:
# 57 "data/maps/ParcelBoardroom/scripts.pory"
	.string "She rises, and the room seems to rise\n"
	.string "with her. From beside the desk,\l"
	.string "unhurried, her partners come out to\l"
	.string "stand where they have stood in ten\l"
	.string "years of photographs.\p"
	.string "Groomed. Calm. Asked for nothing, ever,\n"
	.string "until now.\p"
	.string "Cordelia: Neither of us is used to\n"
	.string "losing in a room like this. Shall we?$"

ParcelBoardroom_Cordelia_Text_8:
# 59 "data/maps/ParcelBoardroom/scripts.pory"
	.string "Cordelia: Gently, now.\n"
	.string "This is still a boardroom.$"

ParcelBoardroom_Cordelia_Text_9:
# 60 "data/maps/ParcelBoardroom/scripts.pory"
	.string "Cordelia: …There it is.\n"
	.string "The thing the paper flattened.$"

ParcelBoardroom_Cordelia_Text_10:
# 61 "data/maps/ParcelBoardroom/scripts.pory"
	.string "She recalls her partners the way a\n"
	.string "person closes a ledger -- precisely,\l"
	.string "without haste, finished.\p"
	.string "Cordelia: No settlement. No\n"
	.string "counter-offer. There would be no\l"
	.string "number on it anyway.\p"
	.string "You have made honesty expensive, which\n"
	.string "is more than most people manage with a\l"
	.string "whole life. It will not be enough. I think\l"
	.string "you know that better than the ones\l"
	.string "who'll drink to you tonight.$"

ParcelBoardroom_Cordelia_Text_11:
# 62 "data/maps/ParcelBoardroom/scripts.pory"
	.string "Cordelia: For what it is worth -- and\n"
	.string "you may price this however you like -- I\l"
	.string "read her model the year it was\l"
	.string "published, and I believed it.\p"
	.string "I wanted a region that could bear us. I\n"
	.string "still believe it can.\p"
	.string "We differ on the arithmetic.$"

ParcelBoardroom_Cordelia_Text_12:
# 63 "data/maps/ParcelBoardroom/scripts.pory"
	.string "She turns her chair to the window, to\n"
	.string "the harbour, to the cranes still\l"
	.string "swinging on schedule.\p"
	.string "Whatever her face does next, she has\n"
	.string "put the whole length of the room\l"
	.string "between you and it.\p"
	.string "The meeting is over. Nobody says so. It\n"
	.string "is over anyway.$"
