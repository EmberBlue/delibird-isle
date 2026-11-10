ParcelHighlandsHomestead_MapScripts::
	.byte 0


ParcelHighlandsHomestead_Grandson::
# 5 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	lock
# 6 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlandsHomestead_Grandson_3
ParcelHighlandsHomestead_Grandson_1:
# 12 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	goto_if_set FLAG_SKALD_Q_LETTER, ParcelHighlandsHomestead_Grandson_8
ParcelHighlandsHomestead_Grandson_6:
# 18 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsHomestead_Grandson_12
# 23 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsHomestead_Grandson_15
# 28 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_Grandson_Text_4, MSGBOX_DEFAULT
# 29 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	release
	end

ParcelHighlandsHomestead_Grandson_2:
# 8 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_Grandson_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	release
	end

ParcelHighlandsHomestead_Grandson_3:
# 7 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	goto_if_set FLAG_SKALD_Q_LETTER_DONE, ParcelHighlandsHomestead_Grandson_2
	goto ParcelHighlandsHomestead_Grandson_1

ParcelHighlandsHomestead_Grandson_7:
# 13 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_Grandson_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	setflag FLAG_SKALD_Q_LETTER_FOUND
# 15 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	release
	end

ParcelHighlandsHomestead_Grandson_8:
# 12 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_LETTER_FOUND, ParcelHighlandsHomestead_Grandson_7
	goto ParcelHighlandsHomestead_Grandson_6

ParcelHighlandsHomestead_Grandson_12:
# 19 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_Grandson_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	release
	end

ParcelHighlandsHomestead_Grandson_15:
# 24 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_Grandson_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	release
	end


ParcelHighlandsHomestead_Swinub::
# 33 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	lock
# 34 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	faceplayer
# 35 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_Swinub_Text_0, MSGBOX_DEFAULT
# 36 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	release
	end


ParcelHighlandsHomestead_Corner::
# 40 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_Corner_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsHomestead_ReadShelf::
# 45 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsHomestead_SeedTin::
# 52 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	msgbox ParcelHighlandsHomestead_SeedTin_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsHomestead_Grandson_Text_0:
# 8 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "GRANDSON: Gran read the letter twice\n"
	.string "and then she told me something. Not\l"
	.string "what was in it. That she'd stay.\p"
	.string "The boxes are unpacked. I did it. She\n"
	.string "watched.$"

ParcelHighlandsHomestead_Grandson_Text_1:
# 13 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "GRANDSON: For Gran? …She'll read it\n"
	.string "twice and tell me nothing. Thank you.\p"
	.string "The carrier can't make the slide any\n"
	.string "more; nobody told us why the letters\l"
	.string "stopped. We thought it was us.$"

ParcelHighlandsHomestead_Grandson_Text_2:
# 19 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "GRANDSON: I signed. Gran didn't. The\n"
	.string "leases are enjoined pending survey, so\l"
	.string "the boxes stay unpacked. She hasn't\l"
	.string "said 'told you'. She's said it with her\l"
	.string "face every morning.$"

ParcelHighlandsHomestead_Grandson_Text_3:
# 24 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "GRANDSON: Gran heard what the coast\n"
	.string "people said about the catch. All one\l"
	.string "size. She said that's what they want us\l"
	.string "to be, down in the valley houses. All one\l"
	.string "size.\p"
	.string "She's unpacked a box. Just one. Don't\n"
	.string "tell her I noticed.$"

ParcelHighlandsHomestead_Grandson_Text_4:
# 28 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "GRANDSON: I signed. The grant. Gran\n"
	.string "won't, so somebody has to carry the\l"
	.string "boxes down when the time comes.\p"
	.string "Don't tell her I've started packing. She\n"
	.string "knows. Don't tell her anyway.$"

ParcelHighlandsHomestead_Swinub_Text_0:
# 35 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "SWINUB: It won't leave either. Gran\n"
	.string "says that's the only vote in the house\l"
	.string "that counts.$"

ParcelHighlandsHomestead_Corner_Text_0:
# 40 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "The floorboards slope to this corner. A\n"
	.string "marble on the table would roll here.\l"
	.string "There is a marble on the table. It has.$"

ParcelHighlandsHomestead_ReadShelf_Text_0:
# 45 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "A shelf of ledgers: lambing, shearing,\n"
	.string "the weather. The weather ledger is the\l"
	.string "thickest.\p"
	.string "The last entry says: ground soft at the\n"
	.string "gate. March. Underlined.$"

ParcelHighlandsHomestead_SeedTin_Text_0:
# 52 "data/maps/ParcelHighlandsHomestead/scripts.pory"
	.string "A seed tin on the dresser, the\n"
	.string "homestead's: packets by year, the\l"
	.string "dates when sowing was possible written\l"
	.string "on the lids.\p"
	.string "The dates walk earlier across the lids,\n"
	.string "and then stop walking and start\l"
	.string "jumping. The last three lids say: sown\l"
	.string "twice. Sown twice means the first\l"
	.string "sowing died in a thaw and a frost.\p"
	.string "There is no packet for next year yet.$"
