ParcelDelibird_MapScripts::
# 25 "data/maps/ParcelDelibird/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelDelibird_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelDelibird_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data/maps/ParcelDelibird/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelDelibird_SetMapVar
	.2byte 0


ParcelDelibird_SetMapVar::
# 31 "data/maps/ParcelDelibird/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


ParcelDelibird_FirstEntry::
# 37 "data/maps/ParcelDelibird/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_ARRIVAL, ParcelDelibird_FirstEntry_2
# 41 "data/maps/ParcelDelibird/scripts.pory"
	lockall
# 42 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FirstEntry_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FirstEntry_Text_1, MSGBOX_DEFAULT
# 44 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_FirstEntry_Text_2, MSGBOX_DEFAULT
# 45 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_ARRIVAL
# 46 "data/maps/ParcelDelibird/scripts.pory"
	releaseall
	end

ParcelDelibird_FirstEntry_2:
	end


ParcelDelibird_Elder::
# 52 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 53 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 54 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibird_Elder_2
# 59 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_DELIVERED, ParcelDelibird_Elder_5
# 71 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_PARCEL, ParcelDelibird_Elder_8
# 76 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_7, MSGBOX_DEFAULT
# 77 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_8, MSGBOX_DEFAULT
# 78 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_9, MSGBOX_DEFAULT
# 79 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_PARCEL
# 80 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_10, MSGBOX_DEFAULT
# 81 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_2:
# 55 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_0, MSGBOX_DEFAULT
# 56 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_5:
# 60 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_1, MSGBOX_DEFAULT
# 61 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_2, MSGBOX_DEFAULT
# 62 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_3, MSGBOX_DEFAULT
# 63 "data/maps/ParcelDelibird/scripts.pory"
	playse SE_PIN
# 64 "data/maps/ParcelDelibird/scripts.pory"
	givemon SPECIES_DELIBIRD, 22
# 65 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_GIFT
# 66 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_4, MSGBOX_DEFAULT
# 67 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_5, MSGBOX_DEFAULT
# 68 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Elder_8:
# 72 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Elder_Text_6, MSGBOX_DEFAULT
# 73 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Fisher::
# 87 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 88 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 89 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_DELIVERED, ParcelDelibird_Fisher_2
# 94 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_PARCEL, ParcelDelibird_Fisher_5
# 103 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Fisher_Text_4, MSGBOX_DEFAULT
# 104 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Fisher_2:
# 90 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Fisher_Text_0, MSGBOX_DEFAULT
# 91 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Fisher_5:
# 95 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Fisher_Text_1, MSGBOX_DEFAULT
# 96 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Fisher_Text_2, MSGBOX_DEFAULT
# 97 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_HYPER_POTION
# 98 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_DELIVERED
# 99 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Fisher_Text_3, MSGBOX_DEFAULT
# 100 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Giver::
# 110 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 111 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 112 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIVER, ParcelDelibird_Giver_2
# 117 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_1, MSGBOX_DEFAULT
# 118 "data/maps/ParcelDelibird/scripts.pory"
	giveitem ITEM_NEVER_MELT_ICE
# 119 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_GIVER
# 120 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_2, MSGBOX_DEFAULT
# 121 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Giver_2:
# 113 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Giver_Text_0, MSGBOX_DEFAULT
# 114 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Relief::
# 127 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 128 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 129 "data/maps/ParcelDelibird/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_RELIEF, ParcelDelibird_Relief_2
# 134 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_1, MSGBOX_DEFAULT
# 135 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_2, MSGBOX_DEFAULT
# 136 "data/maps/ParcelDelibird/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_RELIEF
# 137 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_3, MSGBOX_DEFAULT
# 138 "data/maps/ParcelDelibird/scripts.pory"
	release
	end

ParcelDelibird_Relief_2:
# 130 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Relief_Text_0, MSGBOX_DEFAULT
# 131 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_Delibird::
# 144 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 145 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_Delibird_Text_0, MSGBOX_DEFAULT
# 146 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_SlumpSign::
# 152 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SlumpSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_SummitSign::
# 157 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_SummitSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_BannerSign::
# 162 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_BannerSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibird_ReturnFerry::
# 168 "data/maps/ParcelDelibird/scripts.pory"
	lock
# 169 "data/maps/ParcelDelibird/scripts.pory"
	faceplayer
# 170 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_ReturnFerry_Text_0, MSGBOX_YESNO
# 171 "data/maps/ParcelDelibird/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibird_ReturnFerry_2
# 176 "data/maps/ParcelDelibird/scripts.pory"
	closemessage
# 177 "data/maps/ParcelDelibird/scripts.pory"
	playse SE_SHIP
# 178 "data/maps/ParcelDelibird/scripts.pory"
	delay 40
# 179 "data/maps/ParcelDelibird/scripts.pory"
	warp MAP_PARCEL_ISLE, 41, 48
# 180 "data/maps/ParcelDelibird/scripts.pory"
	waitstate
	end

ParcelDelibird_ReturnFerry_2:
# 172 "data/maps/ParcelDelibird/scripts.pory"
	msgbox ParcelDelibird_ReturnFerry_Text_1, MSGBOX_DEFAULT
# 173 "data/maps/ParcelDelibird/scripts.pory"
	release
	end


ParcelDelibird_ItemA::
# 185 "data/maps/ParcelDelibird/scripts.pory"
	finditem ITEM_NUGGET
	end


ParcelDelibird_ItemB::
# 189 "data/maps/ParcelDelibird/scripts.pory"
	finditem ITEM_STAR_PIECE
	end


ParcelDelibird_FirstEntry_Text_0:
# 42 "data/maps/ParcelDelibird/scripts.pory"
	.string "The boat noses in and the island takes\n"
	.string "you by surprise. String lights, cabins\l"
	.string "the colours of sweets, woodsmoke and\l"
	.string "something baking.\p"
	.string "People wave. They don't know you, and\n"
	.string "they wave anyway.$"

ParcelDelibird_FirstEntry_Text_1:
# 43 "data/maps/ParcelDelibird/scripts.pory"
	.string "It is the warmest place you have set\n"
	.string "foot in since you started keeping the\l"
	.string "notebook.\p"
	.string "You know, now, what the warmth is\n"
	.string "standing on. You climbed it. You\l"
	.string "couldn't fix it.$"

ParcelDelibird_FirstEntry_Text_2:
# 44 "data/maps/ParcelDelibird/scripts.pory"
	.string "A banner over the square snaps in the\n"
	.string "wind:\n"
	.string "DELIBIRD ISLE MIDWINTER -- ALL\l"
	.string "WELCOME.\p"
	.string "Smaller, underneath: in partnership\n"
	.string "with the Mereholt Foundation.\p"
	.string "Doduo leans into your leg. You go up\n"
	.string "into the lights.$"

ParcelDelibird_Elder_Text_0:
# 55 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: The young ones say give until\n"
	.string "it's a habit, so the giving's already\l"
	.string "done when the storm comes and there's\l"
	.string "no time to decide.\p"
	.string "You've got the habit now. I can see it\n"
	.string "on the bird.$"

ParcelDelibird_Elder_Text_1:
# 60 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Tomas got his blanket, then.\n"
	.string "Bless you.\p"
	.string "Come here. There's a thing we do for\n"
	.string "someone who carries for a stranger\l"
	.string "without being asked twice.$"

ParcelDelibird_Elder_Text_2:
# 61 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: We raise Delibird here. Have for\n"
	.string "longer than the records. In a hard\l"
	.string "winter they carry food cabin to cabin\l"
	.string "-- they find the door that needs it.\l"
	.string "Nobody trained that into them. It's\l"
	.string "just what they are.$"

ParcelDelibird_Elder_Text_3:
# 62 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: This one took to you off the\n"
	.string "boat. Take it. It'll deliver for you the\l"
	.string "way it delivered for us.\p"
	.string "The storms are worse now. We'll need\n"
	.string "more of that, not less.$"

ParcelDelibird_Elder_Text_4:
# 66 "data/maps/ParcelDelibird/scripts.pory"
	.string "WREN received DELIBIRD.\p"
	.string "It shifts its little sack to one side\n"
	.string "and looks at you, ready to be useful.$"

ParcelDelibird_Elder_Text_5:
# 67 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder, quieter:\p"
	.string "Elder: There's a paper from the\n"
	.string "Foundation says we should think about\l"
	.string "relocating the festival. Somewhere it\l"
	.string "won't flood.\p"
	.string "We held it here anyway. While there's a\n"
	.string "here.\p"
	.string "Tell your people we said thank you, and\n"
	.string "no.$"

ParcelDelibird_Elder_Text_6:
# 72 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Old Tomas keeps to the south\n"
	.string "shore, by the water. The blanket's for\l"
	.string "him -- his cabin's the one with the cold\l"
	.string "corner.\p"
	.string "Go on. Reciprocity doesn't keep.$"

ParcelDelibird_Elder_Text_7:
# 76 "data/maps/ParcelDelibird/scripts.pory"
	.string "An old woman sorts folded blankets into\n"
	.string "oilcloth parcels, quick and sure, a\l"
	.string "Delibird stacking them at her elbow.\p"
	.string "Elder: Ranger, is it? Then make yourself\n"
	.string "useful in the good way, not the\l"
	.string "clipboard way.$"

ParcelDelibird_Elder_Text_8:
# 77 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: The island runs on this -- you\n"
	.string "give before you're asked, and the island\l"
	.string "gives back before you need. It's not\l"
	.string "charity. It's how a cold place keeps\l"
	.string "everyone alive through a bad season.\p"
	.string "The opposite of the people who only\n"
	.string "ever take from it.$"

ParcelDelibird_Elder_Text_9:
# 78 "data/maps/ParcelDelibird/scripts.pory"
	.string "Elder: Here. A storm-relief parcel for\n"
	.string "old Tomas, down on the south shore.\l"
	.string "Carry it for me?$"

ParcelDelibird_Elder_Text_10:
# 80 "data/maps/ParcelDelibird/scripts.pory"
	.string "You take the parcel. It is heavier than\n"
	.string "a blanket should be. There's food in it\l"
	.string "too.$"

ParcelDelibird_Fisher_Text_0:
# 90 "data/maps/ParcelDelibird/scripts.pory"
	.string "Tomas: Warm through, thanks to you.\n"
	.string "Mind the corner of my cabin -- the floor\l"
	.string "slopes to the sea a little more each\l"
	.string "winter.\p"
	.string "Used to be level. I remember it level.$"

ParcelDelibird_Fisher_Text_1:
# 95 "data/maps/ParcelDelibird/scripts.pory"
	.string "An old fisher straightens, slow, by a\n"
	.string "cabin whose seaward corner has settled\l"
	.string "into the sand.\p"
	.string "Tomas: From Marta? You carried this all\n"
	.string "the way down for an old man you've\l"
	.string "never met.$"

ParcelDelibird_Fisher_Text_2:
# 96 "data/maps/ParcelDelibird/scripts.pory"
	.string "Tomas: That's the island in you already,\n"
	.string "and you only just landed.\p"
	.string "Here -- take this for the road. No, take\n"
	.string "it. That's how it works. You'll learn.$"

ParcelDelibird_Fisher_Text_3:
# 99 "data/maps/ParcelDelibird/scripts.pory"
	.string "Tomas: Now go tell Marta I'm fine. She'll\n"
	.string "have a bird ready for you. She always\l"
	.string "does.\p"
	.string "It's how she says thank you. Don't\n"
	.string "refuse it -- that's the one rude thing\l"
	.string "you can do here.$"

ParcelDelibird_Fisher_Text_4:
# 103 "data/maps/ParcelDelibird/scripts.pory"
	.string "Tomas: Cold off the water today.\n"
	.string "There's coffee in the square if you've\l"
	.string "come up short.\p"
	.string "Up here you never go without. We see to\n"
	.string "that ourselves.$"

ParcelDelibird_Giver_Text_0:
# 113 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: Pass it on someday, that's all.\n"
	.string "To whoever's cold next.$"

ParcelDelibird_Giver_Text_1:
# 117 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: New face! Midwinter rule:\n"
	.string "nobody meets the giving table\l"
	.string "empty-handed.\p"
	.string "Here -- from the square to you. Don't\n"
	.string "thank me. Thank me by doing it to the\l"
	.string "next one.$"

ParcelDelibird_Giver_Text_2:
# 120 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: A feather-charm. The old folk\n"
	.string "say it keeps the cold honest.\p"
	.string "We could use a little more honest cold.\n"
	.string "Less every year to keep.$"

ParcelDelibird_Relief_Text_0:
# 130 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: Bailed dry for now. It'll be\n"
	.string "back by the thaw moon. It always comes\l"
	.string "back a little higher.\p"
	.string "Thanks for the arms, Ranger.$"

ParcelDelibird_Relief_Text_1:
# 134 "data/maps/ParcelDelibird/scripts.pory"
	.string "A man stacks sandbags against a seep\n"
	.string "of meltwater rising through what used\l"
	.string "to be the village green. A Delibird\l"
	.string "ferries icy blocks to shore the wall.\p"
	.string "Villager: Ranger! Spare arms? The\n"
	.string "ground's let go under here -- water\l"
	.string "comes up where there's no rain to\l"
	.string "explain it.$"

ParcelDelibird_Relief_Text_2:
# 135 "data/maps/ParcelDelibird/scripts.pory"
	.string "You work the line until the seep is\n"
	.string "bagged back. The Delibird drops the\l"
	.string "last block and shakes off, pleased.$"

ParcelDelibird_Relief_Text_3:
# 137 "data/maps/ParcelDelibird/scripts.pory"
	.string "Villager: There. Dry.\p"
	.string "You don't say it and he doesn't ask: the\n"
	.string "ice under us is thawing, and bags hold\l"
	.string "water, not winters. We didn't fix it. We\l"
	.string "bought a season.\p"
	.string "Villager: A season's a lot, some years.\n"
	.string "Thank you.$"

ParcelDelibird_Delibird_Text_0:
# 145 "data/maps/ParcelDelibird/scripts.pory"
	.string "A Delibird works the square, tucking a\n"
	.string "wrapped something into a child's hands,\l"
	.string "then another's, never its own.\p"
	.string "It notices you watching. It considers\n"
	.string "its sack, considers you -- and decides\l"
	.string "you look like you have enough.\p"
	.string "It moves on. That, too, is the lesson.$"

ParcelDelibird_SlumpSign_Text_0:
# 152 "data/maps/ParcelDelibird/scripts.pory"
	.string "The green dips here into a shallow new\n"
	.string "pond nobody dug. The cabin beside it\l"
	.string "has sunk at one corner; its door no\l"
	.string "longer hangs square.\p"
	.string "The islanders have laid planks across\n"
	.string "the wet and hung a lantern on them.\l"
	.string "They walk the planks to the festival\l"
	.string "and do not look down.\p"
	.string "You look down.$"

ParcelDelibird_SummitSign_Text_0:
# 157 "data/maps/ParcelDelibird/scripts.pory"
	.string "From the peak you can see the whole\n"
	.string "crescent of the island at once -- and\l"
	.string "the meltwater pooling in the high\l"
	.string "hollows where the snowpack should still\l"
	.string "be holding.\p"
	.string "This is the cold the festival is named\n"
	.string "for. There is less of it than there was\l"
	.string "last Midwinter. There will be less next.\p"
	.string "It is the most beautiful view in\n"
	.string "Skaldmere. You write down why it won't\l"
	.string "last.$"

ParcelDelibird_BannerSign_Text_0:
# 162 "data/maps/ParcelDelibird/scripts.pory"
	.string "MEREHOLT FOUNDATION -- PROUD SPONSOR\n"
	.string "OF DELIBIRD ISLE MIDWINTER\p"
	.string "Warm blankets, warm meals, a warmer\n"
	.string "future.\p"
	.string "The blankets are real. The meals are\n"
	.string "real. The warmer future is the part that\l"
	.string "pays for the banner.\p"
	.string "The same crest is on the drill up the\n"
	.string "coast.$"

ParcelDelibird_ReturnFerry_Text_0:
# 170 "data/maps/ParcelDelibird/scripts.pory"
	.string "Sailor: Back to the mainland, Ranger?\n"
	.string "Whenever you're ready.\p"
	.string "The island will be here. For a while yet,\n"
	.string "it'll be here.$"

ParcelDelibird_ReturnFerry_Text_1:
# 172 "data/maps/ParcelDelibird/scripts.pory"
	.string "Sailor: Stay for the lights, then.\n"
	.string "They're worth it.$"
