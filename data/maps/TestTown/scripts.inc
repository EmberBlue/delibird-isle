TestTown_MapScripts::
	.byte 0


BuzzTrainerScript::
# 6 "data/maps/TestTown/scripts.pory"
	trainerbattle_single TRAINER_BUZZ_TEST, BuzzIntroText, BuzzWinText
# 7 "data/maps/TestTown/scripts.pory"
	msgbox BuzzAfterText, MSGBOX_AUTOCLOSE
# 8 "data/maps/TestTown/scripts.pory"
	waitmessage
	end


BuzzIntroText::
# 12 "data/maps/TestTown/scripts.pory"
	.string "I'm Buzz, and this bug-themed powerhouse is going to flatten you!$"

BuzzWinText::
# 16 "data/maps/TestTown/scripts.pory"
	.string "Whoa... even Hariyama couldn’t stop you.$"

BuzzAfterText::
# 20 "data/maps/TestTown/scripts.pory"
	.string "Maybe I’ll train with some actual bugs next time...$"
