ParcelDelibirdCabin2_MapScripts::
	.byte 0


ParcelDelibirdCabin2_Baker::
# 7 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	lock
# 8 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdCabin2_Baker_2
# 11 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibirdCabin2_Baker_3
# 14 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	msgbox ParcelDelibirdCabin2_Baker_Text_2, MSGBOX_DEFAULT
ParcelDelibirdCabin2_Baker_1:
# 16 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	release
	end

ParcelDelibirdCabin2_Baker_2:
# 10 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	msgbox ParcelDelibirdCabin2_Baker_Text_0, MSGBOX_DEFAULT
	goto ParcelDelibirdCabin2_Baker_1

ParcelDelibirdCabin2_Baker_3:
# 12 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	msgbox ParcelDelibirdCabin2_Baker_Text_1, MSGBOX_DEFAULT
	goto ParcelDelibirdCabin2_Baker_1


ParcelDelibirdCabin2_Apprentice::
# 21 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	lock
# 22 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	faceplayer
# 23 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	msgbox ParcelDelibirdCabin2_Apprentice_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	release
	end


ParcelDelibirdCabin2_Oven::
# 29 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	msgbox ParcelDelibirdCabin2_Oven_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdCabin2_Baker_Text_0:
# 10 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	.string "BAKER: The flour comes on the ferry,\n"
	.string "and the ferry runs when the strait is\l"
	.string "clear, and the strait is always clear\l"
	.string "now. So there is always flour.\p"
	.string "That's the one good thing I can find in\n"
	.string "it. I've looked.$"

ParcelDelibirdCabin2_Baker_Text_1:
# 12 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	.string "BAKER: Three doors, on foot. There were\n"
	.string "rolls in those parcels, did MARTA say?\p"
	.string "TOMAS takes his with the crust off. I\n"
	.string "leave the crust on. He needs something\l"
	.string "to complain about.$"

ParcelDelibirdCabin2_Baker_Text_2:
# 14 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	.string "BAKER: Woodsmoke and something baking.\n"
	.string "That's what they all say when they step\l"
	.string "off the boat.\p"
	.string "I've started to think it's what we're\n"
	.string "for. Then I think: there are worse\l"
	.string "things to be for.$"

ParcelDelibirdCabin2_Apprentice_Text_0:
# 23 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	.string "APPRENTICE: She makes me weigh\n"
	.string "everything. Nothing else on this island\l"
	.string "gets weighed. Just flour.\p"
	.string "She says giving is free but bread is\n"
	.string "chemistry.$"

ParcelDelibirdCabin2_Oven_Text_0:
# 29 "data/maps/ParcelDelibirdCabin2/scripts.pory"
	.string "The oven, banked for the night. A slate\n"
	.string "beside it lists who gets bread this week\l"
	.string "without asking.\p"
	.string "It is the whole village.$"
