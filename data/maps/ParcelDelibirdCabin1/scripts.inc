ParcelDelibirdCabin1_MapScripts::
	.byte 0


ParcelDelibirdCabin1_Gran::
# 7 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	lock
# 8 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdCabin1_Gran_2
# 11 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibirdCabin1_Gran_3
# 14 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	msgbox ParcelDelibirdCabin1_Gran_Text_2, MSGBOX_DEFAULT
ParcelDelibirdCabin1_Gran_1:
# 16 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	release
	end

ParcelDelibirdCabin1_Gran_2:
# 10 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	msgbox ParcelDelibirdCabin1_Gran_Text_0, MSGBOX_DEFAULT
	goto ParcelDelibirdCabin1_Gran_1

ParcelDelibirdCabin1_Gran_3:
# 12 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	msgbox ParcelDelibirdCabin1_Gran_Text_1, MSGBOX_DEFAULT
	goto ParcelDelibirdCabin1_Gran_1


ParcelDelibirdCabin1_Father::
# 21 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	lock
# 22 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	faceplayer
# 23 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	msgbox ParcelDelibirdCabin1_Father_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	release
	end


ParcelDelibirdCabin1_Chest::
# 29 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	msgbox ParcelDelibirdCabin1_Chest_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdCabin1_Gran_Text_0:
# 10 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	.string "GRAN: Sixty-one Midwinters. I kept\n"
	.string "every programme. The Survey girl asked\l"
	.string "to copy the dates. I said copy them\l"
	.string "here. They don't leave the house.\p"
	.string "She sat on the floor and copied them.\n"
	.string "That's a proper surveyor.$"

ParcelDelibirdCabin1_Gran_Text_1:
# 12 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	.string "GRAN: They lit the square. I could see\n"
	.string "all of it from this chair.\p"
	.string "That's how I know it's smaller. I used to\n"
	.string "have to go outside to see the end of it.$"

ParcelDelibirdCabin1_Gran_Text_2:
# 14 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	.string "GRAN: NOEL is on the stage again, I\n"
	.string "expect, challenging anybody with a\l"
	.string "badge.\p"
	.string "I told that boy the festival is smaller\n"
	.string "every year. He heard 'festival'. Good.\l"
	.string "Let him.$"

ParcelDelibirdCabin1_Father_Text_0:
# 23 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	.string "MAN: The runners want waxing. They've\n"
	.string "wanted waxing for three winters. I do it\l"
	.string "anyway, first week of December.\p"
	.string "You keep a sledge ready the way you\n"
	.string "keep a spare bed made.$"

ParcelDelibirdCabin1_Chest_Text_0:
# 29 "data/maps/ParcelDelibirdCabin1/scripts.pory"
	.string "A chest of festival programmes, one a\n"
	.string "year, sixty-one of them.\p"
	.string "The early ones give two dates: the\n"
	.string "festival, and the day the strait froze.\l"
	.string "The last nine give one.$"
