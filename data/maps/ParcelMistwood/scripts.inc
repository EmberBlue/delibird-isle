ParcelMistwood_MapScripts::
	.byte 0


ParcelMistwood_Sanna::
# 15 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MISTWOOD_SANNA, ParcelMistwood_Sanna_Text_0, ParcelMistwood_Sanna_Text_1
# 18 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Sanna_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelMistwood_Pim::
# 23 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MISTWOOD_PIM, ParcelMistwood_Pim_Text_0, ParcelMistwood_Pim_Text_1
# 26 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Pim_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelMistwood_Freya::
# 31 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MISTWOOD_FREYA, ParcelMistwood_Freya_Text_0, ParcelMistwood_Freya_Text_1
# 34 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Freya_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelMistwood_Arvid::
# 39 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MISTWOOD_ARVID, ParcelMistwood_Arvid_Text_0, ParcelMistwood_Arvid_Text_1
# 42 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Arvid_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelMistwood_Tove::
# 47 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MISTWOOD_TOVE, ParcelMistwood_Tove_Text_0, ParcelMistwood_Tove_Text_1
# 50 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Tove_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelMistwood_Ole::
# 55 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MISTWOOD_OLE, ParcelMistwood_Ole_Text_0, ParcelMistwood_Ole_Text_1
# 58 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Ole_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelMistwood_SnareZigzagoon::
# 64 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 65 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 66 "data/maps/ParcelMistwood/scripts.pory"
	waitse
# 67 "data/maps/ParcelMistwood/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_ENCOUNTER
# 68 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareZigzagoon_Text_0, MSGBOX_YESNO
# 69 "data/maps/ParcelMistwood/scripts.pory"
	waitmoncry
# 70 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMistwood_SnareZigzagoon_2
# 76 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareZigzagoon_Text_2, MSGBOX_DEFAULT
ParcelMistwood_SnareZigzagoon_1:
# 78 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_SnareZigzagoon_2:
# 71 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareZigzagoon_Text_1, MSGBOX_DEFAULT
# 72 "data/maps/ParcelMistwood/scripts.pory"
	closemessage
# 73 "data/maps/ParcelMistwood/scripts.pory"
	setflag FLAG_SKALD_SNARE_FREED_1
# 74 "data/maps/ParcelMistwood/scripts.pory"
	removeobject 10
	goto ParcelMistwood_SnareZigzagoon_1


ParcelMistwood_SnareHoothoot::
# 83 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 84 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 85 "data/maps/ParcelMistwood/scripts.pory"
	waitse
# 86 "data/maps/ParcelMistwood/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_ENCOUNTER
# 87 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareHoothoot_Text_0, MSGBOX_YESNO
# 88 "data/maps/ParcelMistwood/scripts.pory"
	waitmoncry
# 89 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMistwood_SnareHoothoot_2
# 95 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareHoothoot_Text_2, MSGBOX_DEFAULT
ParcelMistwood_SnareHoothoot_1:
# 97 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_SnareHoothoot_2:
# 90 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareHoothoot_Text_1, MSGBOX_DEFAULT
# 91 "data/maps/ParcelMistwood/scripts.pory"
	closemessage
# 92 "data/maps/ParcelMistwood/scripts.pory"
	setflag FLAG_SKALD_SNARE_FREED_2
# 93 "data/maps/ParcelMistwood/scripts.pory"
	removeobject 11
	goto ParcelMistwood_SnareHoothoot_1


ParcelMistwood_SnareSeedot::
# 102 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 103 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 104 "data/maps/ParcelMistwood/scripts.pory"
	waitse
# 105 "data/maps/ParcelMistwood/scripts.pory"
	playmoncry SPECIES_SEEDOT, CRY_MODE_ENCOUNTER
# 106 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareSeedot_Text_0, MSGBOX_YESNO
# 107 "data/maps/ParcelMistwood/scripts.pory"
	waitmoncry
# 108 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMistwood_SnareSeedot_2
# 114 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareSeedot_Text_2, MSGBOX_DEFAULT
ParcelMistwood_SnareSeedot_1:
# 116 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_SnareSeedot_2:
# 109 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareSeedot_Text_1, MSGBOX_DEFAULT
# 110 "data/maps/ParcelMistwood/scripts.pory"
	closemessage
# 111 "data/maps/ParcelMistwood/scripts.pory"
	setflag FLAG_SKALD_SNARE_FREED_3
# 112 "data/maps/ParcelMistwood/scripts.pory"
	removeobject 12
	goto ParcelMistwood_SnareSeedot_1


ParcelMistwood_ItemPokeBall::
# 122 "data/maps/ParcelMistwood/scripts.pory"
	finditem ITEM_POKE_BALL, 2
	end


ParcelMistwood_ItemPotion::
# 127 "data/maps/ParcelMistwood/scripts.pory"
	finditem ITEM_POTION
	end


ParcelMistwood_ItemAntidote::
# 132 "data/maps/ParcelMistwood/scripts.pory"
	finditem ITEM_ANTIDOTE
	end


ParcelMistwood_Sign::
# 137 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Sign_Text_0, MSGBOX_SIGN
	end


ParcelMistwood_Board::
# 142 "data/maps/ParcelMistwood/scripts.pory"
	goto_if_set FLAG_SKALD_MISTWOOD_CUT_GIVEN, ParcelMistwood_Board_2
# 145 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Board_Text_1, MSGBOX_SIGN
ParcelMistwood_Board_1:
	end

ParcelMistwood_Board_2:
# 143 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Board_Text_0, MSGBOX_SIGN
	goto ParcelMistwood_Board_1


ParcelMistwood_T_Simen::
# 152 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MW_SIMEN, ParcelMistwood_T_Simen_Text_0, ParcelMistwood_T_Simen_Text_1, ParcelMistwood_T_Simen_FirstWin
# 156 "data/maps/ParcelMistwood/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 157 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelMistwood_T_Simen_3
ParcelMistwood_T_Simen_1:
# 160 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelMistwood_T_Simen_8
ParcelMistwood_T_Simen_6:
# 163 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelMistwood_T_Simen_13
ParcelMistwood_T_Simen_11:
# 166 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelMistwood_T_Simen_18
ParcelMistwood_T_Simen_16:
# 169 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Simen_Text_2, MSGBOX_DEFAULT
	end

ParcelMistwood_T_Simen_2:
# 158 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Simen_R2
	goto ParcelMistwood_T_Simen_1

ParcelMistwood_T_Simen_3:
# 157 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_SIMEN_R2
	goto_if 0, ParcelMistwood_T_Simen_2
	goto ParcelMistwood_T_Simen_1

ParcelMistwood_T_Simen_7:
# 161 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Simen_R3
	goto ParcelMistwood_T_Simen_6

ParcelMistwood_T_Simen_8:
# 160 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_SIMEN_R3
	goto_if 0, ParcelMistwood_T_Simen_7
	goto ParcelMistwood_T_Simen_6

ParcelMistwood_T_Simen_12:
# 164 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Simen_R4
	goto ParcelMistwood_T_Simen_11

ParcelMistwood_T_Simen_13:
# 163 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_SIMEN_R4
	goto_if 0, ParcelMistwood_T_Simen_12
	goto ParcelMistwood_T_Simen_11

ParcelMistwood_T_Simen_17:
# 167 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Simen_R5
	goto ParcelMistwood_T_Simen_16

ParcelMistwood_T_Simen_18:
# 166 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_SIMEN_R5
	goto_if 0, ParcelMistwood_T_Simen_17
	goto ParcelMistwood_T_Simen_16


ParcelMistwood_T_Simen_FirstWin::
# 173 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Simen_Text_2, MSGBOX_DEFAULT
# 174 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Simen_R2::
# 178 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 179 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 180 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Simen_R2_Text_0, MSGBOX_YESNO
# 181 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Simen_R2_2
# 186 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_SIMEN_R2, ParcelMistwood_T_Simen_R2_Text_2
# 187 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Simen_R2_Text_3, MSGBOX_DEFAULT
# 188 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Simen_R2_2:
# 182 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Simen_R2_Text_1, MSGBOX_DEFAULT
# 183 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Simen_R3::
# 192 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 193 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 194 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Simen_R3_Text_0, MSGBOX_YESNO
# 195 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Simen_R3_2
# 200 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_SIMEN_R3, ParcelMistwood_T_Simen_R3_Text_1
# 201 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Simen_R3_Text_2, MSGBOX_DEFAULT
# 202 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Simen_R3_2:
# 196 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Simen_R2_Text_1, MSGBOX_DEFAULT
# 197 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Simen_R4::
# 206 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 207 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 208 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Simen_R4_Text_0, MSGBOX_YESNO
# 209 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Simen_R4_2
# 214 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_SIMEN_R4, ParcelMistwood_T_Simen_R4_Text_1
# 215 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Simen_R4_Text_2, MSGBOX_DEFAULT
# 216 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Simen_R4_2:
# 210 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Simen_R2_Text_1, MSGBOX_DEFAULT
# 211 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Simen_R5::
# 220 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 221 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 222 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Simen_R5_Text_0, MSGBOX_YESNO
# 223 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Simen_R5_2
# 228 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_SIMEN_R5, ParcelMistwood_T_Simen_R5_Text_1
# 229 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Simen_R5_Text_2, MSGBOX_DEFAULT
# 230 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Simen_R5_2:
# 224 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Simen_R2_Text_1, MSGBOX_DEFAULT
# 225 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Hanna::
# 234 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MW_HANNA, ParcelMistwood_T_Hanna_Text_0, ParcelMistwood_T_Hanna_Text_1, ParcelMistwood_T_Hanna_FirstWin
# 238 "data/maps/ParcelMistwood/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 239 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelMistwood_T_Hanna_3
ParcelMistwood_T_Hanna_1:
# 242 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelMistwood_T_Hanna_8
ParcelMistwood_T_Hanna_6:
# 245 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelMistwood_T_Hanna_13
ParcelMistwood_T_Hanna_11:
# 248 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelMistwood_T_Hanna_18
ParcelMistwood_T_Hanna_16:
# 251 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Hanna_Text_2, MSGBOX_DEFAULT
	end

ParcelMistwood_T_Hanna_2:
# 240 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Hanna_R2
	goto ParcelMistwood_T_Hanna_1

ParcelMistwood_T_Hanna_3:
# 239 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_HANNA_R2
	goto_if 0, ParcelMistwood_T_Hanna_2
	goto ParcelMistwood_T_Hanna_1

ParcelMistwood_T_Hanna_7:
# 243 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Hanna_R3
	goto ParcelMistwood_T_Hanna_6

ParcelMistwood_T_Hanna_8:
# 242 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_HANNA_R3
	goto_if 0, ParcelMistwood_T_Hanna_7
	goto ParcelMistwood_T_Hanna_6

ParcelMistwood_T_Hanna_12:
# 246 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Hanna_R4
	goto ParcelMistwood_T_Hanna_11

ParcelMistwood_T_Hanna_13:
# 245 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_HANNA_R4
	goto_if 0, ParcelMistwood_T_Hanna_12
	goto ParcelMistwood_T_Hanna_11

ParcelMistwood_T_Hanna_17:
# 249 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Hanna_R5
	goto ParcelMistwood_T_Hanna_16

ParcelMistwood_T_Hanna_18:
# 248 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_HANNA_R5
	goto_if 0, ParcelMistwood_T_Hanna_17
	goto ParcelMistwood_T_Hanna_16


ParcelMistwood_T_Hanna_FirstWin::
# 255 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Hanna_Text_2, MSGBOX_DEFAULT
# 256 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Hanna_R2::
# 260 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 261 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 262 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Hanna_R2_Text_0, MSGBOX_YESNO
# 263 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Hanna_R2_2
# 268 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_HANNA_R2, ParcelMistwood_T_Hanna_R2_Text_2
# 269 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Hanna_R2_Text_3, MSGBOX_DEFAULT
# 270 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Hanna_R2_2:
# 264 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Hanna_R2_Text_1, MSGBOX_DEFAULT
# 265 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Hanna_R3::
# 274 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 275 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 276 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Hanna_R3_Text_0, MSGBOX_YESNO
# 277 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Hanna_R3_2
# 282 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_HANNA_R3, ParcelMistwood_T_Hanna_R3_Text_1
# 283 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Hanna_R3_Text_2, MSGBOX_DEFAULT
# 284 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Hanna_R3_2:
# 278 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Hanna_R2_Text_1, MSGBOX_DEFAULT
# 279 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Hanna_R4::
# 288 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 289 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 290 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Hanna_R4_Text_0, MSGBOX_YESNO
# 291 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Hanna_R4_2
# 296 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_HANNA_R4, ParcelMistwood_T_Hanna_R3_Text_1
# 297 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Hanna_R4_Text_1, MSGBOX_DEFAULT
# 298 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Hanna_R4_2:
# 292 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Hanna_R2_Text_1, MSGBOX_DEFAULT
# 293 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Hanna_R5::
# 302 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 303 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 304 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Hanna_R5_Text_0, MSGBOX_YESNO
# 305 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Hanna_R5_2
# 310 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_HANNA_R5, ParcelMistwood_T_Hanna_R5_Text_1
# 311 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Hanna_R5_Text_2, MSGBOX_DEFAULT
# 312 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Hanna_R5_2:
# 306 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Hanna_R2_Text_1, MSGBOX_DEFAULT
# 307 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Vetle::
# 316 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MW_VETLE, ParcelMistwood_T_Vetle_Text_0, ParcelMistwood_T_Vetle_Text_1, ParcelMistwood_T_Vetle_FirstWin
# 320 "data/maps/ParcelMistwood/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 321 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelMistwood_T_Vetle_3
ParcelMistwood_T_Vetle_1:
# 324 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelMistwood_T_Vetle_8
ParcelMistwood_T_Vetle_6:
# 327 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelMistwood_T_Vetle_13
ParcelMistwood_T_Vetle_11:
# 330 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelMistwood_T_Vetle_18
ParcelMistwood_T_Vetle_16:
# 333 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Vetle_Text_2, MSGBOX_DEFAULT
	end

ParcelMistwood_T_Vetle_2:
# 322 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Vetle_R2
	goto ParcelMistwood_T_Vetle_1

ParcelMistwood_T_Vetle_3:
# 321 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_VETLE_R2
	goto_if 0, ParcelMistwood_T_Vetle_2
	goto ParcelMistwood_T_Vetle_1

ParcelMistwood_T_Vetle_7:
# 325 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Vetle_R3
	goto ParcelMistwood_T_Vetle_6

ParcelMistwood_T_Vetle_8:
# 324 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_VETLE_R3
	goto_if 0, ParcelMistwood_T_Vetle_7
	goto ParcelMistwood_T_Vetle_6

ParcelMistwood_T_Vetle_12:
# 328 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Vetle_R4
	goto ParcelMistwood_T_Vetle_11

ParcelMistwood_T_Vetle_13:
# 327 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_VETLE_R4
	goto_if 0, ParcelMistwood_T_Vetle_12
	goto ParcelMistwood_T_Vetle_11

ParcelMistwood_T_Vetle_17:
# 331 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Vetle_R5
	goto ParcelMistwood_T_Vetle_16

ParcelMistwood_T_Vetle_18:
# 330 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_VETLE_R5
	goto_if 0, ParcelMistwood_T_Vetle_17
	goto ParcelMistwood_T_Vetle_16


ParcelMistwood_T_Vetle_FirstWin::
# 337 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Vetle_Text_2, MSGBOX_DEFAULT
# 338 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Vetle_R2::
# 342 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 343 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 344 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Vetle_R2_Text_0, MSGBOX_YESNO
# 345 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Vetle_R2_2
# 350 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_VETLE_R2, ParcelMistwood_T_Vetle_R2_Text_2
# 351 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Vetle_R2_Text_3, MSGBOX_DEFAULT
# 352 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Vetle_R2_2:
# 346 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Vetle_R2_Text_1, MSGBOX_DEFAULT
# 347 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Vetle_R3::
# 356 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 357 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 358 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Vetle_R3_Text_0, MSGBOX_YESNO
# 359 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Vetle_R3_2
# 364 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_VETLE_R3, ParcelMistwood_T_Vetle_R3_Text_1
# 365 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Vetle_R3_Text_2, MSGBOX_DEFAULT
# 366 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Vetle_R3_2:
# 360 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Vetle_R2_Text_1, MSGBOX_DEFAULT
# 361 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Vetle_R4::
# 370 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 371 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 372 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Vetle_R4_Text_0, MSGBOX_YESNO
# 373 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Vetle_R4_2
# 378 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_VETLE_R4, ParcelMistwood_T_Vetle_R4_Text_1
# 379 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Vetle_R4_Text_2, MSGBOX_DEFAULT
# 380 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Vetle_R4_2:
# 374 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Vetle_R2_Text_1, MSGBOX_DEFAULT
# 375 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Vetle_R5::
# 384 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 385 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 386 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Vetle_R5_Text_0, MSGBOX_YESNO
# 387 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Vetle_R5_2
# 392 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_VETLE_R5, ParcelMistwood_T_Vetle_R4_Text_1
# 393 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Vetle_R5_Text_1, MSGBOX_DEFAULT
# 394 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Vetle_R5_2:
# 388 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Vetle_R2_Text_1, MSGBOX_DEFAULT
# 389 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Selma::
# 398 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MW_SELMA, ParcelMistwood_T_Selma_Text_0, ParcelMistwood_T_Selma_Text_1, ParcelMistwood_T_Selma_FirstWin
# 402 "data/maps/ParcelMistwood/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 403 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelMistwood_T_Selma_3
ParcelMistwood_T_Selma_1:
# 406 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelMistwood_T_Selma_8
ParcelMistwood_T_Selma_6:
# 409 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelMistwood_T_Selma_13
ParcelMistwood_T_Selma_11:
# 412 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelMistwood_T_Selma_18
ParcelMistwood_T_Selma_16:
# 415 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Selma_Text_2, MSGBOX_DEFAULT
	end

ParcelMistwood_T_Selma_2:
# 404 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Selma_R2
	goto ParcelMistwood_T_Selma_1

ParcelMistwood_T_Selma_3:
# 403 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_SELMA_R2
	goto_if 0, ParcelMistwood_T_Selma_2
	goto ParcelMistwood_T_Selma_1

ParcelMistwood_T_Selma_7:
# 407 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Selma_R3
	goto ParcelMistwood_T_Selma_6

ParcelMistwood_T_Selma_8:
# 406 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_SELMA_R3
	goto_if 0, ParcelMistwood_T_Selma_7
	goto ParcelMistwood_T_Selma_6

ParcelMistwood_T_Selma_12:
# 410 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Selma_R4
	goto ParcelMistwood_T_Selma_11

ParcelMistwood_T_Selma_13:
# 409 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_SELMA_R4
	goto_if 0, ParcelMistwood_T_Selma_12
	goto ParcelMistwood_T_Selma_11

ParcelMistwood_T_Selma_17:
# 413 "data/maps/ParcelMistwood/scripts.pory"
	goto ParcelMistwood_T_Selma_R5
	goto ParcelMistwood_T_Selma_16

ParcelMistwood_T_Selma_18:
# 412 "data/maps/ParcelMistwood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MW_SELMA_R5
	goto_if 0, ParcelMistwood_T_Selma_17
	goto ParcelMistwood_T_Selma_16


ParcelMistwood_T_Selma_FirstWin::
# 419 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Selma_Text_2, MSGBOX_DEFAULT
# 420 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Selma_R2::
# 424 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 425 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 426 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Selma_R2_Text_0, MSGBOX_YESNO
# 427 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Selma_R2_2
# 432 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_SELMA_R2, ParcelMistwood_T_Selma_R2_Text_2
# 433 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Selma_R2_Text_3, MSGBOX_DEFAULT
# 434 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Selma_R2_2:
# 428 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Selma_R2_Text_1, MSGBOX_DEFAULT
# 429 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Selma_R3::
# 438 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 439 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 440 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Selma_R3_Text_0, MSGBOX_YESNO
# 441 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Selma_R3_2
# 446 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_SELMA_R3, ParcelMistwood_T_Selma_R3_Text_1
# 447 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Selma_R3_Text_2, MSGBOX_DEFAULT
# 448 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Selma_R3_2:
# 442 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Selma_R2_Text_1, MSGBOX_DEFAULT
# 443 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Selma_R4::
# 452 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 453 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 454 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Selma_R4_Text_0, MSGBOX_YESNO
# 455 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Selma_R4_2
# 460 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_SELMA_R4, ParcelMistwood_T_Selma_R3_Text_1
# 461 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Selma_R4_Text_1, MSGBOX_DEFAULT
# 462 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Selma_R4_2:
# 456 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Selma_R2_Text_1, MSGBOX_DEFAULT
# 457 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_T_Selma_R5::
# 466 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 467 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 468 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Selma_R5_Text_0, MSGBOX_YESNO
# 469 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMistwood_T_Selma_R5_2
# 474 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MW_SELMA_R5, ParcelMistwood_T_Selma_R5_Text_1
# 475 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Selma_R5_Text_2, MSGBOX_DEFAULT
# 476 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_T_Selma_R5_2:
# 470 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_T_Selma_R2_Text_1, MSGBOX_DEFAULT
# 471 "data/maps/ParcelMistwood/scripts.pory"
	release
	end


ParcelMistwood_PairSnares::
# 483 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 484 "data/maps/ParcelMistwood/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMistwood_PairSnares_2
# 488 "data/maps/ParcelMistwood/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelMistwood_PairSnares_3
# 493 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_PairSnares_Text_6, MSGBOX_DEFAULT
# 494 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_PairSnares_Text_7, MSGBOX_DEFAULT
# 495 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_PairSnares_Text_8, MSGBOX_DEFAULT
# 496 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_PairSnares_Text_9, MSGBOX_DEFAULT
# 497 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_PairSnares_Text_10, MSGBOX_DEFAULT
ParcelMistwood_PairSnares_1:
# 499 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_PairSnares_2:
# 485 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_PairSnares_Text_0, MSGBOX_DEFAULT
# 486 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_PairSnares_Text_1, MSGBOX_DEFAULT
# 487 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_PairSnares_Text_2, MSGBOX_DEFAULT
	goto ParcelMistwood_PairSnares_1

ParcelMistwood_PairSnares_3:
# 489 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_PairSnares_Text_3, MSGBOX_DEFAULT
# 490 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_PairSnares_Text_4, MSGBOX_DEFAULT
# 491 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_PairSnares_Text_5, MSGBOX_DEFAULT
	goto ParcelMistwood_PairSnares_1


ParcelMistwood_Board1::
# 506 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Board1_Text_0, MSGBOX_SIGN
	end


ParcelMistwood_Board2::
# 511 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Board2_Text_0, MSGBOX_SIGN
	end


ParcelMistwood_Board3::
# 518 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Board3_Text_0, MSGBOX_SIGN
	end


ParcelMistwood_Board5::
# 525 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Board5_Text_0, MSGBOX_SIGN
	end


ParcelMistwood_Sanna_Text_0:
# 16 "data/maps/ParcelMistwood/scripts.pory"
	.string "SANNA: I've got two WURMPLE. Two! You\n"
	.string "can't beat two!$"

ParcelMistwood_Sanna_Text_1:
# 17 "data/maps/ParcelMistwood/scripts.pory"
	.string "SANNA: Two wasn't enough...$"

ParcelMistwood_Sanna_Text_2:
# 18 "data/maps/ParcelMistwood/scripts.pory"
	.string "SANNA: The warden says don't touch the\n"
	.string "snares. But he also says report them.\l"
	.string "How do you report a thing you can't\l"
	.string "touch?$"

ParcelMistwood_Pim_Text_0:
# 24 "data/maps/ParcelMistwood/scripts.pory"
	.string "PIM: Nobody gets past this corridor\n"
	.string "without battling PIM! That's me.$"

ParcelMistwood_Pim_Text_1:
# 25 "data/maps/ParcelMistwood/scripts.pory"
	.string "PIM: Okay, one person gets past.$"

ParcelMistwood_Pim_Text_2:
# 26 "data/maps/ParcelMistwood/scripts.pory"
	.string "PIM: There's a ZIGZAGOON stuck in a\n"
	.string "snare by the west wall. I'm not allowed\l"
	.string "to touch it. It's been there since\l"
	.string "yesterday.$"

ParcelMistwood_Freya_Text_0:
# 32 "data/maps/ParcelMistwood/scripts.pory"
	.string "FREYA: My HOOTHOOT sleeps all day.\n"
	.string "Let's see if yours can wake it up!$"

ParcelMistwood_Freya_Text_1:
# 33 "data/maps/ParcelMistwood/scripts.pory"
	.string "FREYA: Well, it's awake now.$"

ParcelMistwood_Freya_Text_2:
# 34 "data/maps/ParcelMistwood/scripts.pory"
	.string "FREYA: The ranger post is in the\n"
	.string "clearing up ahead. The warden's grumpy,\l"
	.string "but he's got a map.$"

ParcelMistwood_Arvid_Text_0:
# 40 "data/maps/ParcelMistwood/scripts.pory"
	.string "ARVID: I'm training to be a RANGER. Step\n"
	.string "one: beat everyone in the woods!$"

ParcelMistwood_Arvid_Text_1:
# 41 "data/maps/ParcelMistwood/scripts.pory"
	.string "ARVID: Step one is harder than it\n"
	.string "sounds.$"

ParcelMistwood_Arvid_Text_2:
# 42 "data/maps/ParcelMistwood/scripts.pory"
	.string "ARVID: Step two is the snares, I think.\n"
	.string "The warden won't tell me step two until\l"
	.string "I finish step one.$"

ParcelMistwood_Tove_Text_0:
# 48 "data/maps/ParcelMistwood/scripts.pory"
	.string "TOVE: Shh! You'll scare the SEEDOT!\n"
	.string "...Too late. Battle!$"

ParcelMistwood_Tove_Text_1:
# 49 "data/maps/ParcelMistwood/scripts.pory"
	.string "TOVE: The SEEDOT are all gone now.\n"
	.string "Thanks.$"

ParcelMistwood_Tove_Text_2:
# 50 "data/maps/ParcelMistwood/scripts.pory"
	.string "TOVE: The north exit's blocked. A whole\n"
	.string "tree came down in the storm. You'd need\l"
	.string "CUT to get through, and nobody out here\l"
	.string "has it.$"

ParcelMistwood_Ole_Text_0:
# 56 "data/maps/ParcelMistwood/scripts.pory"
	.string "OLE: Camping in the woods builds\n"
	.string "character! And POKéMON! Let's go!$"

ParcelMistwood_Ole_Text_1:
# 57 "data/maps/ParcelMistwood/scripts.pory"
	.string "OLE: My character needs more building.$"

ParcelMistwood_Ole_Text_2:
# 58 "data/maps/ParcelMistwood/scripts.pory"
	.string "OLE: I found a snare by the east wall\n"
	.string "with a HOOTHOOT in it, up past the\l"
	.string "clearing. I didn't know what to do so I\l"
	.string "did nothing. That's what the sign said.$"

ParcelMistwood_SnareZigzagoon_Text_0:
# 68 "data/maps/ParcelMistwood/scripts.pory"
	.string "A ZIGZAGOON is caught in a wire snare!\n"
	.string "It's pulling, and the wire's pulling back.\p"
	.string "Loosen the wire?$"

ParcelMistwood_SnareZigzagoon_Text_1:
# 71 "data/maps/ParcelMistwood/scripts.pory"
	.string "You work the wire loose, one loop at a\n"
	.string "time.\p"
	.string "The ZIGZAGOON bolts into the trees\n"
	.string "without looking back.$"

ParcelMistwood_SnareZigzagoon_Text_2:
# 76 "data/maps/ParcelMistwood/scripts.pory"
	.string "The ZIGZAGOON stops pulling and stares\n"
	.string "at you.$"

ParcelMistwood_SnareHoothoot_Text_0:
# 87 "data/maps/ParcelMistwood/scripts.pory"
	.string "A HOOTHOOT has one foot in a snare. It's\n"
	.string "standing on the other one, very calmly,\l"
	.string "like this is fine.\p"
	.string "Loosen the wire?$"

ParcelMistwood_SnareHoothoot_Text_1:
# 90 "data/maps/ParcelMistwood/scripts.pory"
	.string "You slip the loop off its foot.\p"
	.string "The HOOTHOOT looks at you, hops once,\n"
	.string "and flies straight up.$"

ParcelMistwood_SnareHoothoot_Text_2:
# 95 "data/maps/ParcelMistwood/scripts.pory"
	.string "The HOOTHOOT blinks. Slowly. It can\n"
	.string "wait.$"

ParcelMistwood_SnareSeedot_Text_0:
# 106 "data/maps/ParcelMistwood/scripts.pory"
	.string "A SEEDOT is dangling from a snare by its\n"
	.string "stem. It's pretending to be an acorn. It\l"
	.string "is not a very convincing acorn.\p"
	.string "Loosen the wire?$"

ParcelMistwood_SnareSeedot_Text_1:
# 109 "data/maps/ParcelMistwood/scripts.pory"
	.string "You untwist the wire. The SEEDOT drops,\n"
	.string "rolls, and vanishes under a root.$"

ParcelMistwood_SnareSeedot_Text_2:
# 114 "data/maps/ParcelMistwood/scripts.pory"
	.string "The SEEDOT keeps pretending.$"

ParcelMistwood_Sign_Text_0:
# 137 "data/maps/ParcelMistwood/scripts.pory"
	.string "MISTWOOD\n"
	.string "Skaldmere Climate Corps managed\l"
	.string "woodland\p"
	.string "Stay on the track. Report snares at the\n"
	.string "RANGER POST. Do not touch them.$"

ParcelMistwood_Board_Text_0:
# 143 "data/maps/ParcelMistwood/scripts.pory"
	.string "RANGER POST\p"
	.string "Snares found this week: 3\n"
	.string "Snares cleared: 3\p"
	.string "In different handwriting: by a tourist.\n"
	.string "-- S.$"

ParcelMistwood_Board_Text_1:
# 145 "data/maps/ParcelMistwood/scripts.pory"
	.string "RANGER POST\p"
	.string "Snares found this week: 3\n"
	.string "Snares cleared: 0\p"
	.string "The warden is inside. He is not in a good\n"
	.string "mood.$"

ParcelMistwood_T_Simen_Text_0:
# 153 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: Shh. There's a SILCOON about to\n"
	.string "open. Right there. Battle quietly.$"

ParcelMistwood_T_Simen_Text_1:
# 154 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: It opened. It's a BEAUTIFLY.\n"
	.string "Worth it.$"

ParcelMistwood_T_Simen_Text_2:
# 169 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: Three snares I've found this\n"
	.string "spring. The warden says report them. I\l"
	.string "report them. The snares keep coming.$"

ParcelMistwood_T_Simen_R2_Text_0:
# 180 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelMistwood_T_Simen_R2_Text_1:
# 182 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelMistwood_T_Simen_R2_Text_2:
# 186 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: That's the one I wanted to see.$"

ParcelMistwood_T_Simen_R2_Text_3:
# 187 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelMistwood_T_Simen_R3_Text_0:
# 194 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelMistwood_T_Simen_R3_Text_1:
# 200 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: Right. That's the whole of it.$"

ParcelMistwood_T_Simen_R3_Text_2:
# 201 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelMistwood_T_Simen_R4_Text_0:
# 208 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelMistwood_T_Simen_R4_Text_1:
# 214 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: Noted. Properly, this time.$"

ParcelMistwood_T_Simen_R4_Text_2:
# 215 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelMistwood_T_Simen_R5_Text_0:
# 222 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelMistwood_T_Simen_R5_Text_1:
# 228 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: …Again, then. Later.$"

ParcelMistwood_T_Simen_R5_Text_2:
# 229 "data/maps/ParcelMistwood/scripts.pory"
	.string "SIMEN: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelMistwood_T_Hanna_Text_0:
# 235 "data/maps/ParcelMistwood/scripts.pory"
	.string "HANNA: Lost in the galleries. Again.\n"
	.string "Battle me and then tell me which way's\l"
	.string "out.$"

ParcelMistwood_T_Hanna_Text_1:
# 236 "data/maps/ParcelMistwood/scripts.pory"
	.string "HANNA: North. It's always north.$"

ParcelMistwood_T_Hanna_Text_2:
# 251 "data/maps/ParcelMistwood/scripts.pory"
	.string "HANNA: HOOTHOOT only call from the big\n"
	.string "trees. There are fewer big trees every\l"
	.string "year. Fewer calls.$"

ParcelMistwood_T_Hanna_R2_Text_0:
# 262 "data/maps/ParcelMistwood/scripts.pory"
	.string "HANNA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelMistwood_T_Hanna_R2_Text_1:
# 264 "data/maps/ParcelMistwood/scripts.pory"
	.string "HANNA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelMistwood_T_Hanna_R2_Text_2:
# 268 "data/maps/ParcelMistwood/scripts.pory"
	.string "HANNA: That's the one I wanted to see.$"

ParcelMistwood_T_Hanna_R2_Text_3:
# 269 "data/maps/ParcelMistwood/scripts.pory"
	.string "HANNA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelMistwood_T_Hanna_R3_Text_0:
# 276 "data/maps/ParcelMistwood/scripts.pory"
	.string "HANNA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelMistwood_T_Hanna_R3_Text_1:
# 282 "data/maps/ParcelMistwood/scripts.pory"
	.string "HANNA: Still yours.$"

ParcelMistwood_T_Hanna_R3_Text_2:
# 283 "data/maps/ParcelMistwood/scripts.pory"
	.string "HANNA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelMistwood_T_Hanna_R4_Text_0:
# 290 "data/maps/ParcelMistwood/scripts.pory"
	.string "HANNA: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelMistwood_T_Hanna_R4_Text_1:
# 297 "data/maps/ParcelMistwood/scripts.pory"
	.string "HANNA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelMistwood_T_Hanna_R5_Text_0:
# 304 "data/maps/ParcelMistwood/scripts.pory"
	.string "HANNA: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelMistwood_T_Hanna_R5_Text_1:
# 310 "data/maps/ParcelMistwood/scripts.pory"
	.string "HANNA: Noted. Properly, this time.$"

ParcelMistwood_T_Hanna_R5_Text_2:
# 311 "data/maps/ParcelMistwood/scripts.pory"
	.string "HANNA: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelMistwood_T_Vetle_Text_0:
# 317 "data/maps/ParcelMistwood/scripts.pory"
	.string "VETLE: Camped by the gallery three\n"
	.string "nights. Something's been dragging\l"
	.string "snares past my tent. Battle, I'm jumpy.$"

ParcelMistwood_T_Vetle_Text_1:
# 318 "data/maps/ParcelMistwood/scripts.pory"
	.string "VETLE: Less jumpy. Thanks.$"

ParcelMistwood_T_Vetle_Text_2:
# 333 "data/maps/ParcelMistwood/scripts.pory"
	.string "VETLE: The poachers come in from\n"
	.string "REEDMERE side. The warden knows. He's\l"
	.string "one man and the forest's a lot of\l"
	.string "forest.$"

ParcelMistwood_T_Vetle_R2_Text_0:
# 344 "data/maps/ParcelMistwood/scripts.pory"
	.string "VETLE: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelMistwood_T_Vetle_R2_Text_1:
# 346 "data/maps/ParcelMistwood/scripts.pory"
	.string "VETLE: Suit yourself. I'm here.$"

ParcelMistwood_T_Vetle_R2_Text_2:
# 350 "data/maps/ParcelMistwood/scripts.pory"
	.string "VETLE: That's the one I wanted to see.$"

ParcelMistwood_T_Vetle_R2_Text_3:
# 351 "data/maps/ParcelMistwood/scripts.pory"
	.string "VETLE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelMistwood_T_Vetle_R3_Text_0:
# 358 "data/maps/ParcelMistwood/scripts.pory"
	.string "VETLE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelMistwood_T_Vetle_R3_Text_1:
# 364 "data/maps/ParcelMistwood/scripts.pory"
	.string "VETLE: Right. That's the whole of it.$"

ParcelMistwood_T_Vetle_R3_Text_2:
# 365 "data/maps/ParcelMistwood/scripts.pory"
	.string "VETLE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelMistwood_T_Vetle_R4_Text_0:
# 372 "data/maps/ParcelMistwood/scripts.pory"
	.string "VETLE: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelMistwood_T_Vetle_R4_Text_1:
# 378 "data/maps/ParcelMistwood/scripts.pory"
	.string "VETLE: Still yours.$"

ParcelMistwood_T_Vetle_R4_Text_2:
# 379 "data/maps/ParcelMistwood/scripts.pory"
	.string "VETLE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelMistwood_T_Vetle_R5_Text_0:
# 386 "data/maps/ParcelMistwood/scripts.pory"
	.string "VETLE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelMistwood_T_Vetle_R5_Text_1:
# 393 "data/maps/ParcelMistwood/scripts.pory"
	.string "VETLE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelMistwood_T_Selma_Text_0:
# 399 "data/maps/ParcelMistwood/scripts.pory"
	.string "SELMA: The deadfall blocks the north\n"
	.string "corridor. I've waited two days for\l"
	.string "someone with CUT. Battle while we wait?$"

ParcelMistwood_T_Selma_Text_1:
# 400 "data/maps/ParcelMistwood/scripts.pory"
	.string "SELMA: You've got CUT, haven't you. Go\n"
	.string "on, then.$"

ParcelMistwood_T_Selma_Text_2:
# 415 "data/maps/ParcelMistwood/scripts.pory"
	.string "SELMA: FERNWICK's past the deadfall.\n"
	.string "Big town. CORPS station. The HALL where\l"
	.string "TARN fails everybody.$"

ParcelMistwood_T_Selma_R2_Text_0:
# 426 "data/maps/ParcelMistwood/scripts.pory"
	.string "SELMA: I kept the team up for this.\n"
	.string "Again?$"

ParcelMistwood_T_Selma_R2_Text_1:
# 428 "data/maps/ParcelMistwood/scripts.pory"
	.string "SELMA: No hurry. The water keeps.$"

ParcelMistwood_T_Selma_R2_Text_2:
# 432 "data/maps/ParcelMistwood/scripts.pory"
	.string "SELMA: Noted. Properly, this time.$"

ParcelMistwood_T_Selma_R2_Text_3:
# 433 "data/maps/ParcelMistwood/scripts.pory"
	.string "SELMA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelMistwood_T_Selma_R3_Text_0:
# 440 "data/maps/ParcelMistwood/scripts.pory"
	.string "SELMA: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelMistwood_T_Selma_R3_Text_1:
# 446 "data/maps/ParcelMistwood/scripts.pory"
	.string "SELMA: …Again, then. Later.$"

ParcelMistwood_T_Selma_R3_Text_2:
# 447 "data/maps/ParcelMistwood/scripts.pory"
	.string "SELMA: One more in me. After the high\n"
	.string "ground.$"

ParcelMistwood_T_Selma_R4_Text_0:
# 454 "data/maps/ParcelMistwood/scripts.pory"
	.string "SELMA: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelMistwood_T_Selma_R4_Text_1:
# 461 "data/maps/ParcelMistwood/scripts.pory"
	.string "SELMA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelMistwood_T_Selma_R5_Text_0:
# 468 "data/maps/ParcelMistwood/scripts.pory"
	.string "SELMA: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelMistwood_T_Selma_R5_Text_1:
# 474 "data/maps/ParcelMistwood/scripts.pory"
	.string "SELMA: …Fair.$"

ParcelMistwood_T_Selma_R5_Text_2:
# 475 "data/maps/ParcelMistwood/scripts.pory"
	.string "SELMA: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelMistwood_PairSnares_Text_0:
# 485 "data/maps/ParcelMistwood/scripts.pory"
	.string "CADET A: Snare count's down to three a\n"
	.string "row. Either the setters have stopped or\l"
	.string "they've moved.$"

ParcelMistwood_PairSnares_Text_1:
# 486 "data/maps/ParcelMistwood/scripts.pory"
	.string "CADET B: Or the thing they were\n"
	.string "catching has.$"

ParcelMistwood_PairSnares_Text_2:
# 487 "data/maps/ParcelMistwood/scripts.pory"
	.string "CADET A: …Write that down. That's the\n"
	.string "kind of thing that gets read now.$"

ParcelMistwood_PairSnares_Text_3:
# 489 "data/maps/ParcelMistwood/scripts.pory"
	.string "CADET B: The new provisional came\n"
	.string "through here with a Cut-trained\l"
	.string "partner and didn't cut one living tree.\l"
	.string "Walked round every one. Took an hour\l"
	.string "longer.$"

ParcelMistwood_PairSnares_Text_4:
# 490 "data/maps/ParcelMistwood/scripts.pory"
	.string "CADET A: That's the whole FOREST test\n"
	.string "and nobody told us.$"

ParcelMistwood_PairSnares_Text_5:
# 491 "data/maps/ParcelMistwood/scripts.pory"
	.string "CADET B: HALE told us. We weren't\n"
	.string "listening. We were counting snares.$"

ParcelMistwood_PairSnares_Text_6:
# 493 "data/maps/ParcelMistwood/scripts.pory"
	.string "CADET A: Eleven snares this row. The\n"
	.string "FOUNDATION programme pays by the\l"
	.string "snare.$"

ParcelMistwood_PairSnares_Text_7:
# 494 "data/maps/ParcelMistwood/scripts.pory"
	.string "CADET B: Pays who?$"

ParcelMistwood_PairSnares_Text_8:
# 495 "data/maps/ParcelMistwood/scripts.pory"
	.string "CADET A: The Corps. We pull them, the\n"
	.string "Corps invoices the Foundation, the\l"
	.string "Foundation puts it in the report.\l"
	.string "Everyone's happy.$"

ParcelMistwood_PairSnares_Text_9:
# 496 "data/maps/ParcelMistwood/scripts.pory"
	.string "CADET B: Except whoever's setting\n"
	.string "eleven snares a row.$"

ParcelMistwood_PairSnares_Text_10:
# 497 "data/maps/ParcelMistwood/scripts.pory"
	.string "CADET A: They're happy too. They're paid\n"
	.string "by the pelt.$"

ParcelMistwood_Board1_Text_0:
# 506 "data/maps/ParcelMistwood/scripts.pory"
	.string "A SURVEY BOARD under the big spruce.\n"
	.string "MISTWOOD. Fog-fed forest: the trees\l"
	.string "drink from the air more than the ground.\l"
	.string "The SHROOMISH are the Survey's air\l"
	.string "gauge.\p"
	.string "Where they crowd a log the fog still\n"
	.string "comes. Where the log is bare the fog\l"
	.string "stopped coming before the log fell.\l"
	.string "Three bare logs on this ride. Two last\l"
	.string "year.$"

ParcelMistwood_Board2_Text_0:
# 511 "data/maps/ParcelMistwood/scripts.pory"
	.string "A SURVEY BOARD with a snare nailed to\n"
	.string "the back of it as a specimen. The ride is\l"
	.string "checked for snares each week by the\l"
	.string "Corps crew the Foundation funds. The\l"
	.string "board records the finds: 9, 11, 6, 14.\p"
	.string "It does not record the ones not found.\n"
	.string "The HOOTHOOT count is the honest\l"
	.string "version of the same number, and it goes\l"
	.string "one way.$"

ParcelMistwood_Board3_Text_0:
# 518 "data/maps/ParcelMistwood/scripts.pory"
	.string "A SURVEY BOARD by the seep. SLAKOTH in\n"
	.string "the oldest trees, asleep. A sleeping\l"
	.string "SLAKOTH is a count of nothing\l"
	.string "happening, which the Survey says is the\l"
	.string "hardest count to keep honest.\p"
	.string "Nothing is written in the log each\n"
	.string "spring under this board, with a date.\l"
	.string "Nothing is the right word.$"

ParcelMistwood_Board5_Text_0:
# 525 "data/maps/ParcelMistwood/scripts.pory"
	.string "A SURVEY BOARD on the forest's north\n"
	.string "edge, where the fog thins. HOOTHOOT\l"
	.string "call here at dusk and the Survey counts\l"
	.string "calls, not birds, because the fog\l"
	.string "counts the birds for you.\p"
	.string "The calls per dusk are given as a\n"
	.string "column. The column is the shape of a\l"
	.string "hill, and the board is on the far side of\l"
	.string "it.$"
