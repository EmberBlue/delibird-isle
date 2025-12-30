TestDesertRoute_MapScripts::
# 4 "data/maps/TestDesertRoute/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestDesertRoute_OnTransition
# 5 "data/maps/TestDesertRoute/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TestDesertRoute_OnLoad
	.byte 0


TestDesertRoute_OnTransition::
	end


TestDesertRoute_OnLoad::
	end


# 17 "data/maps/TestDesertRoute/scripts.pory"
TestDesertRoute_Bounce:
# 18 "data/maps/TestDesertRoute/scripts.pory"
	jump_in_place_up
# 19 "data/maps/TestDesertRoute/scripts.pory"
	delay_8
# 20 "data/maps/TestDesertRoute/scripts.pory"
	jump_in_place_up
# 21 "data/maps/TestDesertRoute/scripts.pory"
	end
	step_end

TestDesertRoute_CacneaScript::
# 26 "data/maps/TestDesertRoute/scripts.pory"
	lock
# 27 "data/maps/TestDesertRoute/scripts.pory"
	faceplayer
# 28 "data/maps/TestDesertRoute/scripts.pory"
	applymovement THIS_OBJECT, TestDesertRoute_Bounce
# 29 "data/maps/TestDesertRoute/scripts.pory"
	waitmovement 0
# 32 "data/maps/TestDesertRoute/scripts.pory"
	msgbox gText_TestDesertRoute_Cacnea, MSGBOX_DEFAULT
# 33 "data/maps/TestDesertRoute/scripts.pory"
	release
	end


AcerolaTrainerScript::
# 47 "data/maps/TestDesertRoute/scripts.pory"
	trainerbattle_single TRAINER_ACEROLA_1, AcerolaIntroText, AcerolaDefeatText
# 48 "data/maps/TestDesertRoute/scripts.pory"
	msgbox AcerolaAfterText, MSGBOX_AUTOCLOSE
# 49 "data/maps/TestDesertRoute/scripts.pory"
	waitmessage
	end


gText_TestDesertRoute_Cacnea::
# 37 "data/maps/TestDesertRoute/scripts.pory"
	.string "Cacnea perks up and bounces in the hot sand!$"

AcerolaIntroText::
# 54 "data/maps/TestDesertRoute/scripts.pory"
	.string "Heehee… I’m Acerola! Let’s see if you can handle some spooky fun!$"

AcerolaDefeatText::
# 58 "data/maps/TestDesertRoute/scripts.pory"
	.string "Whaaat~? You weren’t scared at all… you’re super strong!$"

AcerolaAfterText::
# 62 "data/maps/TestDesertRoute/scripts.pory"
	.string "The ghosts adore tough Trainers. Come play again sometime, okay?$"
