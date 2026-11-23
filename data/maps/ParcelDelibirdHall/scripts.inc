ParcelDelibirdHall_MapScripts::
	.byte 0


ParcelDelibirdHall_Warden::
# 8 "data/maps/ParcelDelibirdHall/scripts.pory"
	lock
# 9 "data/maps/ParcelDelibirdHall/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelDelibirdHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdHall_Warden_2
# 13 "data/maps/ParcelDelibirdHall/scripts.pory"
	msgbox ParcelDelibirdHall_Warden_Text_1, MSGBOX_DEFAULT
ParcelDelibirdHall_Warden_1:
# 15 "data/maps/ParcelDelibirdHall/scripts.pory"
	release
	end

ParcelDelibirdHall_Warden_2:
# 11 "data/maps/ParcelDelibirdHall/scripts.pory"
	msgbox ParcelDelibirdHall_Warden_Text_0, MSGBOX_DEFAULT
	goto ParcelDelibirdHall_Warden_1


ParcelDelibirdHall_Boy::
# 20 "data/maps/ParcelDelibirdHall/scripts.pory"
	lock
# 21 "data/maps/ParcelDelibirdHall/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelDelibirdHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibirdHall_Boy_2
# 25 "data/maps/ParcelDelibirdHall/scripts.pory"
	msgbox ParcelDelibirdHall_Boy_Text_1, MSGBOX_DEFAULT
ParcelDelibirdHall_Boy_1:
# 27 "data/maps/ParcelDelibirdHall/scripts.pory"
	release
	end

ParcelDelibirdHall_Boy_2:
# 23 "data/maps/ParcelDelibirdHall/scripts.pory"
	msgbox ParcelDelibirdHall_Boy_Text_0, MSGBOX_DEFAULT
	goto ParcelDelibirdHall_Boy_1


ParcelDelibirdHall_OldMan::
# 32 "data/maps/ParcelDelibirdHall/scripts.pory"
	lock
# 33 "data/maps/ParcelDelibirdHall/scripts.pory"
	faceplayer
# 34 "data/maps/ParcelDelibirdHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdHall_OldMan_2
# 37 "data/maps/ParcelDelibirdHall/scripts.pory"
	msgbox ParcelDelibirdHall_OldMan_Text_1, MSGBOX_DEFAULT
ParcelDelibirdHall_OldMan_1:
# 39 "data/maps/ParcelDelibirdHall/scripts.pory"
	release
	end

ParcelDelibirdHall_OldMan_2:
# 35 "data/maps/ParcelDelibirdHall/scripts.pory"
	msgbox ParcelDelibirdHall_OldMan_Text_0, MSGBOX_DEFAULT
	goto ParcelDelibirdHall_OldMan_1


ParcelDelibirdHall_Letter::
# 44 "data/maps/ParcelDelibirdHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibirdHall_Letter_2
# 47 "data/maps/ParcelDelibirdHall/scripts.pory"
	msgbox ParcelDelibirdHall_Letter_Text_1, MSGBOX_SIGN
ParcelDelibirdHall_Letter_1:
	end

ParcelDelibirdHall_Letter_2:
# 45 "data/maps/ParcelDelibirdHall/scripts.pory"
	msgbox ParcelDelibirdHall_Letter_Text_0, MSGBOX_SIGN
	goto ParcelDelibirdHall_Letter_1


ParcelDelibirdHall_Round::
# 53 "data/maps/ParcelDelibirdHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelDelibirdHall_Round_2
# 55 "data/maps/ParcelDelibirdHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibirdHall_Round_3
# 58 "data/maps/ParcelDelibirdHall/scripts.pory"
	msgbox ParcelDelibirdHall_Round_Text_2, MSGBOX_SIGN
ParcelDelibirdHall_Round_1:
	end

ParcelDelibirdHall_Round_2:
# 54 "data/maps/ParcelDelibirdHall/scripts.pory"
	msgbox ParcelDelibirdHall_Round_Text_0, MSGBOX_SIGN
	goto ParcelDelibirdHall_Round_1

ParcelDelibirdHall_Round_3:
# 56 "data/maps/ParcelDelibirdHall/scripts.pory"
	msgbox ParcelDelibirdHall_Round_Text_1, MSGBOX_SIGN
	goto ParcelDelibirdHall_Round_1


ParcelDelibirdHall_Blankets::
# 64 "data/maps/ParcelDelibirdHall/scripts.pory"
	msgbox ParcelDelibirdHall_Blankets_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdHall_Warden_Text_0:
# 11 "data/maps/ParcelDelibirdHall/scripts.pory"
	.string "WARDEN: Someone from the Council came\n"
	.string "and counted the loft. She asked who\l"
	.string "paid for it. I said read the corners.\p"
	.string "She read the corners. She wrote it down.\n"
	.string "First time anyone has written down what\l"
	.string "is on a blanket.$"

ParcelDelibirdHall_Warden_Text_1:
# 13 "data/maps/ParcelDelibirdHall/scripts.pory"
	.string "WARDEN: The loft is full to the stairs,\n"
	.string "RANGER. Blankets, mostly. The\l"
	.string "FOUNDATION sends them by the pallet.\p"
	.string "We haven't the heart to send them back\n"
	.string "cold. You can't sleep under a crest. You\l"
	.string "can sleep under wool.$"

ParcelDelibirdHall_Boy_Text_0:
# 23 "data/maps/ParcelDelibirdHall/scripts.pory"
	.string "BOY: I said it! 'It's lit.' Nobody\n"
	.string "cheered.\p"
	.string "MARTA says that means I said it right.$"

ParcelDelibirdHall_Boy_Text_1:
# 25 "data/maps/ParcelDelibirdHall/scripts.pory"
	.string "BOY: I've got one line for the lighting.\n"
	.string "'It's lit.' That's the whole line.\p"
	.string "I've been practising since autumn.$"

ParcelDelibirdHall_OldMan_Text_0:
# 35 "data/maps/ParcelDelibirdHall/scripts.pory"
	.string "OLD MAN: They read out the sill in a\n"
	.string "hearing, I'm told. Our sill. A hand lower\l"
	.string "in nine years.\p"
	.string "I could have told them that for\n"
	.string "nothing. Nobody asked me for nothing.\l"
	.string "They asked the ranger.$"

ParcelDelibirdHall_OldMan_Text_1:
# 37 "data/maps/ParcelDelibirdHall/scripts.pory"
	.string "OLD MAN: Sixty Midwinters in this hall.\n"
	.string "The door sill used to be a step up. Now\l"
	.string "you step down to come in.\p"
	.string "Same door. Same step. I've stopped\n"
	.string "arguing about which of them moved.$"

ParcelDelibirdHall_Letter_Text_0:
# 45 "data/maps/ParcelDelibirdHall/scripts.pory"
	.string "A letter on FOUNDATION paper, pinned up\n"
	.string "with one pin. RE: RELOCATION OF THE\l"
	.string "MIDWINTER FESTIVAL TO A SITE OF LOWER\l"
	.string "FLOOD EXPOSURE. It offers transport,\l"
	.string "tents and a sum.\p"
	.string "Pinned over the sum, on the back of a\n"
	.string "programme, in MARTA's hand: THANK YOU,\l"
	.string "AND NO.$"

ParcelDelibirdHall_Letter_Text_1:
# 47 "data/maps/ParcelDelibirdHall/scripts.pory"
	.string "A letter on FOUNDATION paper, pinned up\n"
	.string "with one pin. RE: RELOCATION OF THE\l"
	.string "MIDWINTER FESTIVAL TO A SITE OF LOWER\l"
	.string "FLOOD EXPOSURE.\p"
	.string "Three pages. The third offers\n"
	.string "transport, tents and a sum. Nobody has\l"
	.string "answered it. Nobody has taken it down.$"

ParcelDelibirdHall_Round_Text_0:
# 54 "data/maps/ParcelDelibirdHall/scripts.pory"
	.string "THE RELIEF ROUND. Every door on the\n"
	.string "island and who carries to it.\p"
	.string "Your name is on it now, beside a door you\n"
	.string "have never been through.$"

ParcelDelibirdHall_Round_Text_1:
# 56 "data/maps/ParcelDelibirdHall/scripts.pory"
	.string "THE RELIEF ROUND. Every door on the\n"
	.string "island and who carries to it.\p"
	.string "Beside TOMAS, INGRID and RUNE someone\n"
	.string "has written RANGER, and ticked it, three\l"
	.string "times.$"

ParcelDelibirdHall_Round_Text_2:
# 58 "data/maps/ParcelDelibirdHall/scripts.pory"
	.string "THE RELIEF ROUND. Every door on the\n"
	.string "island and who carries to it.\p"
	.string "Three doors have no name beside them\n"
	.string "this winter: TOMAS, INGRID, RUNE. The\l"
	.string "bird's wings are not what they were.$"

ParcelDelibirdHall_Blankets_Text_0:
# 64 "data/maps/ParcelDelibirdHall/scripts.pory"
	.string "Relief blankets, folded in thirds, good\n"
	.string "thick wool. Every corner has the same\l"
	.string "small crest.\p"
	.string "A few corners have been unpicked. The\n"
	.string "wool underneath is the same wool.$"
