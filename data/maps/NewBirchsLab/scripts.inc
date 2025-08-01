NewBirchsLab_MapScripts::
# 2 "data/maps/NewBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewBirchsLab_EventScript_BallDefault
	.byte 0


NewBirchsLab_EventScript_BallDefault::
# 7 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
# 8 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


NewBirchsLab_EventScript_Birch::
# 12 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 13 "data/maps/NewBirchsLab/scripts.pory"
	faceplayer
# 14 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_Birch_4
NewBirchsLab_EventScript_Birch_3:
# 30 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Birch_Text_2
NewBirchsLab_EventScript_Birch_1:
# 32 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 33 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_Birch_2:
# 15 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Birch_Text_0, MSGBOX_YESNO
# 16 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Birch_9
# 26 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Birch_Text_1
	goto NewBirchsLab_EventScript_Birch_1

NewBirchsLab_EventScript_Birch_4:
# 14 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_Birch_6
	goto NewBirchsLab_EventScript_Birch_3

NewBirchsLab_EventScript_Birch_6:
# 14 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_Birch_2
	goto NewBirchsLab_EventScript_Birch_3

NewBirchsLab_EventScript_Birch_9:
# 17 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_ne NewBirchsLab_EventScript_Birch_13
# 21 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
NewBirchsLab_EventScript_Birch_12:
# 23 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Birch_Text_1
	goto NewBirchsLab_EventScript_Birch_1

NewBirchsLab_EventScript_Birch_13:
# 18 "data/maps/NewBirchsLab/scripts.pory"
	addvar VAR_UNUSED_0x40F7, 1
	goto NewBirchsLab_EventScript_Birch_12


NewBirchsLab_EventScript_PokeballOne::
# 38 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 39 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_PokeballOne_4
NewBirchsLab_EventScript_PokeballOne_3:
# 51 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
NewBirchsLab_EventScript_PokeballOne_1:
# 53 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 54 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballOne_2:
# 40 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_9
# 43 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_10
# 46 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_11
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_4:
# 39 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_PokeballOne_6
	goto NewBirchsLab_EventScript_PokeballOne_3

NewBirchsLab_EventScript_PokeballOne_6:
# 39 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_PokeballOne_2
	goto NewBirchsLab_EventScript_PokeballOne_3

NewBirchsLab_EventScript_PokeballOne_9:
# 41 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Mudkip
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_10:
# 44 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Totodile
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_11:
# 47 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Squirtle
	goto NewBirchsLab_EventScript_PokeballOne_1


NewBirchsLab_EventScript_PokeballTwo::
# 59 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 60 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_PokeballTwo_4
NewBirchsLab_EventScript_PokeballTwo_3:
# 72 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
NewBirchsLab_EventScript_PokeballTwo_1:
# 74 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 75 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballTwo_2:
# 61 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_9
# 64 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_10
# 67 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_11
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_4:
# 60 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_PokeballTwo_6
	goto NewBirchsLab_EventScript_PokeballTwo_3

NewBirchsLab_EventScript_PokeballTwo_6:
# 60 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_PokeballTwo_2
	goto NewBirchsLab_EventScript_PokeballTwo_3

NewBirchsLab_EventScript_PokeballTwo_9:
# 62 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Treecko
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_10:
# 65 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chikorita
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_11:
# 68 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Bulbasaur
	goto NewBirchsLab_EventScript_PokeballTwo_1


NewBirchsLab_EventScript_PokeballThree::
# 80 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 81 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_PokeballThree_4
NewBirchsLab_EventScript_PokeballThree_3:
# 93 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
NewBirchsLab_EventScript_PokeballThree_1:
# 95 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 96 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballThree_2:
# 82 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_9
# 85 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_10
# 88 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_11
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_4:
# 81 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_PokeballThree_6
	goto NewBirchsLab_EventScript_PokeballThree_3

NewBirchsLab_EventScript_PokeballThree_6:
# 81 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_PokeballThree_2
	goto NewBirchsLab_EventScript_PokeballThree_3

NewBirchsLab_EventScript_PokeballThree_9:
# 83 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Torchic
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_10:
# 86 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Cyndaquil
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_11:
# 89 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Charmander
	goto NewBirchsLab_EventScript_PokeballThree_1


NewBirchsLab_EventScript_Mudkip::
# 102 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 103 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 104 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Mudkip_1
# 126 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 127 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Mudkip_1:
# 105 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_MUDKIP, 50, ITEM_MASTER_BALL
# 106 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Mudkip_4
# 113 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Mudkip_5
# 121 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 122 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Mudkip_4:
# 107 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 108 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_1
# 109 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 110 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 111 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Mudkip_5:
# 114 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 115 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_1
# 116 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 117 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 118 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Totodile::
# 133 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 134 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 135 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Totodile_1
# 157 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 158 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Totodile_1:
# 136 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 50, ITEM_MASTER_BALL
# 137 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Totodile_4
# 144 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Totodile_5
# 152 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 153 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Totodile_4:
# 138 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 139 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_1
# 140 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 141 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 142 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Totodile_5:
# 145 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 146 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_1
# 147 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 148 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 149 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Squirtle::
# 164 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 165 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 166 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Squirtle_1
# 188 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 189 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Squirtle_1:
# 167 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 50, ITEM_MASTER_BALL
# 168 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Squirtle_4
# 175 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Squirtle_5
# 183 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 184 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Squirtle_4:
# 169 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 170 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_1
# 171 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 172 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 173 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Squirtle_5:
# 176 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 177 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_1
# 178 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 179 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 180 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Treecko::
# 195 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 196 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 197 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Treecko_1
# 219 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 220 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Treecko_1:
# 198 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TREECKO, 50, ITEM_MASTER_BALL
# 199 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Treecko_4
# 206 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Treecko_5
# 214 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 215 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Treecko_4:
# 200 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 201 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_1
# 202 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 203 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 204 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Treecko_5:
# 207 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 208 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_1
# 209 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 210 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 211 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Chikorita::
# 226 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 227 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 228 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chikorita_1
# 250 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 251 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chikorita_1:
# 229 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 50, ITEM_MASTER_BALL
# 230 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chikorita_4
# 237 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chikorita_5
# 245 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 246 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Chikorita_4:
# 231 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 232 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_1
# 233 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 234 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 235 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Chikorita_5:
# 238 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 239 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_1
# 240 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 241 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 242 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Bulbasaur::
# 257 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 258 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 259 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_1
# 281 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 282 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Bulbasaur_1:
# 260 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 50, ITEM_MASTER_BALL
# 261 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_4
# 268 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_5
# 276 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 277 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Bulbasaur_4:
# 262 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 263 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_1
# 264 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 265 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 266 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Bulbasaur_5:
# 269 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 270 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_1
# 271 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 272 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 273 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Torchic::
# 288 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 289 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 290 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Torchic_1
# 312 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 313 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Torchic_1:
# 291 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TORCHIC, 50, ITEM_MASTER_BALL
# 292 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Torchic_4
# 299 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Torchic_5
# 307 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 308 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Torchic_4:
# 293 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 294 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_1
# 295 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 296 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 297 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Torchic_5:
# 300 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 301 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_1
# 302 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 303 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 304 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Cyndaquil::
# 319 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 320 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 321 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_1
# 343 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 344 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Cyndaquil_1:
# 322 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 50, ITEM_MASTER_BALL
# 323 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_4
# 330 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_5
# 338 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 339 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Cyndaquil_4:
# 324 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 325 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_1
# 326 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 327 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 328 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Cyndaquil_5:
# 331 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 332 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_1
# 333 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 334 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 335 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Charmander::
# 350 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 351 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 352 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Charmander_1
# 374 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 375 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Charmander_1:
# 353 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 50, ITEM_MASTER_BALL
# 354 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Charmander_4
# 361 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Charmander_5
# 369 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 370 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Charmander_4:
# 355 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 356 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_1
# 357 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 358 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 359 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Charmander_5:
# 362 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 363 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_1
# 364 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 365 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 366 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 382 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 383 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 384 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 385 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 386 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 393 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 394 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 395 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 398 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 396 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewBirchsLab_EventScript_Birch_Text_0:
# 15 "data/maps/NewBirchsLab/scripts.pory"
	.string "Hello, would you like to see more?$"

NewBirchsLab_EventScript_Birch_Text_1:
# 23 "data/maps/NewBirchsLab/scripts.pory"
	.string "Choose your Pokemon wisely$"

NewBirchsLab_EventScript_Birch_Text_2:
# 30 "data/maps/NewBirchsLab/scripts.pory"
	.string "Take care of your Pokemon$"

NewBirchsLab_EventScript_PokeballOne_Text_0:
# 51 "data/maps/NewBirchsLab/scripts.pory"
	.string "Don't Take Another$"

NewBirchsLab_EventScript_Mudkip_Text_0:
# 103 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

NewBirchsLab_EventScript_Mudkip_Text_1:
# 108 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Mudkip$"

NewBirchsLab_EventScript_Mudkip_Text_2:
# 122 "data/maps/NewBirchsLab/scripts.pory"
	.string "No More Room$"

NewBirchsLab_EventScript_Totodile_Text_0:
# 134 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

NewBirchsLab_EventScript_Totodile_Text_1:
# 139 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Totodile$"

NewBirchsLab_EventScript_Squirtle_Text_0:
# 165 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

NewBirchsLab_EventScript_Squirtle_Text_1:
# 170 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Squirtle$"

NewBirchsLab_EventScript_Treecko_Text_0:
# 196 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Treecko?$"

NewBirchsLab_EventScript_Treecko_Text_1:
# 201 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Treecko$"

NewBirchsLab_EventScript_Chikorita_Text_0:
# 227 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

NewBirchsLab_EventScript_Chikorita_Text_1:
# 232 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Chikorita$"

NewBirchsLab_EventScript_Bulbasaur_Text_0:
# 258 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

NewBirchsLab_EventScript_Bulbasaur_Text_1:
# 263 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Bulbasaur$"

NewBirchsLab_EventScript_Torchic_Text_0:
# 289 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Torchic?$"

NewBirchsLab_EventScript_Torchic_Text_1:
# 294 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Torchic$"

NewBirchsLab_EventScript_Cyndaquil_Text_0:
# 320 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewBirchsLab_EventScript_Cyndaquil_Text_1:
# 325 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Cyndaquil$"

NewBirchsLab_EventScript_Charmander_Text_0:
# 351 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

NewBirchsLab_EventScript_Charmander_Text_1:
# 356 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Charmander$"

NicknamePartyMon_Text_0:
# 382 "data/maps/NewBirchsLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 398 "data/maps/NewBirchsLab/scripts.pory"
	.string "Transferred to PC$"

NewBirchsLab_NotChosen::
# 401 "data/maps/NewBirchsLab/scripts.pory"
	.string "You did not choose the Pokemon$"
