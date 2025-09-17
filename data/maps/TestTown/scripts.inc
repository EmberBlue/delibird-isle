TestTown_MapScripts::
# 2 "data/maps/TestTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestTown_SetVisited
# 3 "data/maps/TestTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TestTown_SetVisited
	.byte 0


TestTown_SetVisited::
# 7 "data/maps/TestTown/scripts.pory"
	setflag FLAG_VISITED_TEST_TOWN
	end


ShowVisitedFlag::
# 13 "data/maps/TestTown/scripts.pory"
	goto_if_set FLAG_VISITED_TEST_TOWN, ShowVisitedFlag_2
# 16 "data/maps/TestTown/scripts.pory"
	msgbox ShowVisitedFlag_Text_1, MSGBOX_DEFAULT
ShowVisitedFlag_1:
	end

ShowVisitedFlag_2:
# 14 "data/maps/TestTown/scripts.pory"
	msgbox ShowVisitedFlag_Text_0, MSGBOX_DEFAULT
	goto ShowVisitedFlag_1


Test_Town_OnTransition::
# 22 "data/maps/TestTown/scripts.pory"
	setflag FLAG_VISITED_TEST_TOWN
	end


BuzzTrainerScript::
# 29 "data/maps/TestTown/scripts.pory"
	trainerbattle_single TRAINER_BUZZ_TEST, BuzzIntroText, BuzzWinText
# 30 "data/maps/TestTown/scripts.pory"
	msgbox BuzzAfterText, MSGBOX_AUTOCLOSE
# 31 "data/maps/TestTown/scripts.pory"
	waitmessage
	end


ShowVisitedFlag_Text_0:
# 14 "data/maps/TestTown/scripts.pory"
	.string "Visited flag is SET.$"

ShowVisitedFlag_Text_1:
# 16 "data/maps/TestTown/scripts.pory"
	.string "Visited flag is NOT set.$"

BuzzIntroText::
# 35 "data/maps/TestTown/scripts.pory"
	.string "I'm Buzz, and this bug-themed powerhouse is going to flatten you!$"

BuzzWinText::
# 39 "data/maps/TestTown/scripts.pory"
	.string "Whoa... even Hariyama couldn’t stop you.$"

BuzzAfterText::
# 43 "data/maps/TestTown/scripts.pory"
	.string "Maybe I’ll train with some actual bugs next time...$"
