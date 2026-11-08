ParcelDelibirdCliffs_MapScripts::
	.byte 0


ParcelDelibirdCliffs_Tomas::
# 17 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 18 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 19 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdCliffs_Tomas_2
# 24 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_DELIVERED, ParcelDelibirdCliffs_Tomas_5
# 29 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_PARCEL, ParcelDelibirdCliffs_Tomas_8
# 38 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Tomas_Text_5, MSGBOX_DEFAULT
# 39 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Tomas_2:
# 20 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Tomas_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Tomas_5:
# 25 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Tomas_Text_1, MSGBOX_DEFAULT
# 26 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Tomas_8:
# 30 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Tomas_Text_2, MSGBOX_DEFAULT
# 31 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Tomas_Text_3, MSGBOX_DEFAULT
# 32 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	giveitem ITEM_HYPER_POTION
# 33 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	setflag FLAG_SKALDMERE_DELIBIRD_DELIVERED
# 34 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Tomas_Text_4, MSGBOX_DEFAULT
# 35 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_Rune::
# 45 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 46 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 47 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdCliffs_Rune_2
# 52 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALD_DEL_RUNE_DONE, ParcelDelibirdCliffs_Rune_5
# 57 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_PARCEL, ParcelDelibirdCliffs_Rune_8
# 66 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Rune_Text_5, MSGBOX_DEFAULT
# 67 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Rune_2:
# 48 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Rune_Text_0, MSGBOX_DEFAULT
# 49 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Rune_5:
# 53 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Rune_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Rune_8:
# 58 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Rune_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Rune_Text_3, MSGBOX_DEFAULT
# 60 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Rune_Text_4, MSGBOX_DEFAULT
# 61 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	giveitem ITEM_BRIGHT_POWDER
# 62 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	setflag FLAG_SKALD_DEL_RUNE_DONE
# 63 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_Einar::
# 73 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 74 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 75 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdCliffs_Einar_2
# 80 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_1, MSGBOX_DEFAULT
# 81 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Einar_2:
# 76 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_0, MSGBOX_DEFAULT
# 77 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_TrailSign::
# 87 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_TrailSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdCliffs_BeaconSign::
# 92 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_BeaconSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdCliffs_ItemMaxRepel::
# 98 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	finditem ITEM_MAX_REPEL
	end


ParcelDelibirdCliffs_ItemBigPearl::
# 102 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	finditem ITEM_BIG_PEARL
	end


ParcelDelibirdCliffs_ItemUltraBall::
# 106 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	finditem ITEM_ULTRA_BALL
	end


ParcelDelibirdCliffs_T_Solveig::
# 112 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_SOLVEIG, ParcelDelibirdCliffs_T_Solveig_Text_0, ParcelDelibirdCliffs_T_Solveig_Text_1, ParcelDelibirdCliffs_T_Solveig_FirstWin
# 116 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 117 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_3
ParcelDelibirdCliffs_T_Solveig_1:
# 120 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_8
ParcelDelibirdCliffs_T_Solveig_6:
# 123 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_13
ParcelDelibirdCliffs_T_Solveig_11:
# 126 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_18
ParcelDelibirdCliffs_T_Solveig_16:
# 129 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Solveig_2:
# 118 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R2
	goto ParcelDelibirdCliffs_T_Solveig_1

ParcelDelibirdCliffs_T_Solveig_3:
# 117 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R2
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_2
	goto ParcelDelibirdCliffs_T_Solveig_1

ParcelDelibirdCliffs_T_Solveig_7:
# 121 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R3
	goto ParcelDelibirdCliffs_T_Solveig_6

ParcelDelibirdCliffs_T_Solveig_8:
# 120 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R3
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_7
	goto ParcelDelibirdCliffs_T_Solveig_6

ParcelDelibirdCliffs_T_Solveig_12:
# 124 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R4
	goto ParcelDelibirdCliffs_T_Solveig_11

ParcelDelibirdCliffs_T_Solveig_13:
# 123 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R4
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_12
	goto ParcelDelibirdCliffs_T_Solveig_11

ParcelDelibirdCliffs_T_Solveig_17:
# 127 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R5
	goto ParcelDelibirdCliffs_T_Solveig_16

ParcelDelibirdCliffs_T_Solveig_18:
# 126 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R5
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_17
	goto ParcelDelibirdCliffs_T_Solveig_16


ParcelDelibirdCliffs_T_Solveig_FirstWin::
# 133 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_Text_2, MSGBOX_DEFAULT
# 134 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R2::
# 138 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 139 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 140 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_0, MSGBOX_YESNO
# 141 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R2_2
# 146 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R2, ParcelDelibirdCliffs_T_Solveig_R2_Text_2
# 147 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_3, MSGBOX_DEFAULT
# 148 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R2_2:
# 142 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 143 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R3::
# 152 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 153 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 154 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R3_Text_0, MSGBOX_YESNO
# 155 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R3_2
# 160 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R3, ParcelDelibirdCliffs_T_Solveig_R2_Text_2
# 161 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R3_Text_1, MSGBOX_DEFAULT
# 162 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R3_2:
# 156 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 157 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R4::
# 166 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 167 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 168 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R4_Text_0, MSGBOX_YESNO
# 169 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R4_2
# 174 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R4, ParcelDelibirdCliffs_T_Solveig_R4_Text_1
# 175 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R4_Text_2, MSGBOX_DEFAULT
# 176 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R4_2:
# 170 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 171 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R5::
# 180 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 181 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 182 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R5_Text_0, MSGBOX_YESNO
# 183 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R5_2
# 188 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R5, ParcelDelibirdCliffs_T_Solveig_R5_Text_1
# 189 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R5_Text_2, MSGBOX_DEFAULT
# 190 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R5_2:
# 184 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 185 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav::
# 195 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_OLAV, ParcelDelibirdCliffs_T_Olav_Text_0, ParcelDelibirdCliffs_T_Olav_Text_1, ParcelDelibirdCliffs_T_Olav_FirstWin
# 199 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 200 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Olav_3
ParcelDelibirdCliffs_T_Olav_1:
# 203 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Olav_8
ParcelDelibirdCliffs_T_Olav_6:
# 206 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Olav_13
ParcelDelibirdCliffs_T_Olav_11:
# 209 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Olav_18
ParcelDelibirdCliffs_T_Olav_16:
# 212 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Olav_2:
# 201 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R2
	goto ParcelDelibirdCliffs_T_Olav_1

ParcelDelibirdCliffs_T_Olav_3:
# 200 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R2
	goto_if 0, ParcelDelibirdCliffs_T_Olav_2
	goto ParcelDelibirdCliffs_T_Olav_1

ParcelDelibirdCliffs_T_Olav_7:
# 204 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R3
	goto ParcelDelibirdCliffs_T_Olav_6

ParcelDelibirdCliffs_T_Olav_8:
# 203 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R3
	goto_if 0, ParcelDelibirdCliffs_T_Olav_7
	goto ParcelDelibirdCliffs_T_Olav_6

ParcelDelibirdCliffs_T_Olav_12:
# 207 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R4
	goto ParcelDelibirdCliffs_T_Olav_11

ParcelDelibirdCliffs_T_Olav_13:
# 206 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R4
	goto_if 0, ParcelDelibirdCliffs_T_Olav_12
	goto ParcelDelibirdCliffs_T_Olav_11

ParcelDelibirdCliffs_T_Olav_17:
# 210 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R5
	goto ParcelDelibirdCliffs_T_Olav_16

ParcelDelibirdCliffs_T_Olav_18:
# 209 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R5
	goto_if 0, ParcelDelibirdCliffs_T_Olav_17
	goto ParcelDelibirdCliffs_T_Olav_16


ParcelDelibirdCliffs_T_Olav_FirstWin::
# 216 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_Text_2, MSGBOX_DEFAULT
# 217 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R2::
# 221 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 222 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 223 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_0, MSGBOX_YESNO
# 224 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R2_2
# 229 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R2, ParcelDelibirdCliffs_T_Olav_R2_Text_2
# 230 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_3, MSGBOX_DEFAULT
# 231 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R2_2:
# 225 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 226 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R3::
# 235 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 236 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 237 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R3_Text_0, MSGBOX_YESNO
# 238 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R3_2
# 243 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R3, ParcelDelibirdCliffs_T_Olav_R3_Text_1
# 244 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R3_Text_2, MSGBOX_DEFAULT
# 245 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R3_2:
# 239 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 240 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R4::
# 249 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 250 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 251 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R4_Text_0, MSGBOX_YESNO
# 252 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R4_2
# 257 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R4, ParcelDelibirdCliffs_T_Olav_R4_Text_1
# 258 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R4_Text_2, MSGBOX_DEFAULT
# 259 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R4_2:
# 253 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 254 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R5::
# 263 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 264 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 265 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R5_Text_0, MSGBOX_YESNO
# 266 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R5_2
# 271 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R5, ParcelDelibirdCliffs_T_Olav_R5_Text_1
# 272 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R5_Text_2, MSGBOX_DEFAULT
# 273 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R5_2:
# 267 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 268 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir::
# 278 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_GEIR, ParcelDelibirdCliffs_T_Geir_Text_0, ParcelDelibirdCliffs_T_Geir_Text_1, ParcelDelibirdCliffs_T_Geir_FirstWin
# 282 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 283 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Geir_3
ParcelDelibirdCliffs_T_Geir_1:
# 286 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Geir_8
ParcelDelibirdCliffs_T_Geir_6:
# 289 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Geir_13
ParcelDelibirdCliffs_T_Geir_11:
# 292 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Geir_18
ParcelDelibirdCliffs_T_Geir_16:
# 295 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Geir_2:
# 284 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R2
	goto ParcelDelibirdCliffs_T_Geir_1

ParcelDelibirdCliffs_T_Geir_3:
# 283 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R2
	goto_if 0, ParcelDelibirdCliffs_T_Geir_2
	goto ParcelDelibirdCliffs_T_Geir_1

ParcelDelibirdCliffs_T_Geir_7:
# 287 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R3
	goto ParcelDelibirdCliffs_T_Geir_6

ParcelDelibirdCliffs_T_Geir_8:
# 286 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R3
	goto_if 0, ParcelDelibirdCliffs_T_Geir_7
	goto ParcelDelibirdCliffs_T_Geir_6

ParcelDelibirdCliffs_T_Geir_12:
# 290 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R4
	goto ParcelDelibirdCliffs_T_Geir_11

ParcelDelibirdCliffs_T_Geir_13:
# 289 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R4
	goto_if 0, ParcelDelibirdCliffs_T_Geir_12
	goto ParcelDelibirdCliffs_T_Geir_11

ParcelDelibirdCliffs_T_Geir_17:
# 293 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R5
	goto ParcelDelibirdCliffs_T_Geir_16

ParcelDelibirdCliffs_T_Geir_18:
# 292 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R5
	goto_if 0, ParcelDelibirdCliffs_T_Geir_17
	goto ParcelDelibirdCliffs_T_Geir_16


ParcelDelibirdCliffs_T_Geir_FirstWin::
# 299 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_Text_2, MSGBOX_DEFAULT
# 300 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R2::
# 304 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 305 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 306 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_0, MSGBOX_YESNO
# 307 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R2_2
# 312 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R2, ParcelDelibirdCliffs_T_Geir_R2_Text_2
# 313 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_3, MSGBOX_DEFAULT
# 314 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R2_2:
# 308 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 309 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R3::
# 318 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 319 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 320 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R3_Text_0, MSGBOX_YESNO
# 321 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R3_2
# 326 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R3, ParcelDelibirdCliffs_T_Geir_R3_Text_1
# 327 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R3_Text_2, MSGBOX_DEFAULT
# 328 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R3_2:
# 322 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 323 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R4::
# 332 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 333 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 334 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R4_Text_0, MSGBOX_YESNO
# 335 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R4_2
# 340 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R4, ParcelDelibirdCliffs_T_Geir_R4_Text_1
# 341 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R4_Text_2, MSGBOX_DEFAULT
# 342 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R4_2:
# 336 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 337 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R5::
# 346 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 347 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 348 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R5_Text_0, MSGBOX_YESNO
# 349 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R5_2
# 354 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R5, ParcelDelibirdCliffs_T_Geir_R2_Text_2
# 355 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R5_Text_1, MSGBOX_DEFAULT
# 356 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R5_2:
# 350 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 351 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle::
# 361 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_PELLE, ParcelDelibirdCliffs_T_Pelle_Text_0, ParcelDelibirdCliffs_T_Pelle_Text_1, ParcelDelibirdCliffs_T_Pelle_FirstWin
# 365 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 366 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_3
ParcelDelibirdCliffs_T_Pelle_1:
# 369 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_8
ParcelDelibirdCliffs_T_Pelle_6:
# 372 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_13
ParcelDelibirdCliffs_T_Pelle_11:
# 375 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_18
ParcelDelibirdCliffs_T_Pelle_16:
# 378 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Pelle_2:
# 367 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R2
	goto ParcelDelibirdCliffs_T_Pelle_1

ParcelDelibirdCliffs_T_Pelle_3:
# 366 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R2
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_2
	goto ParcelDelibirdCliffs_T_Pelle_1

ParcelDelibirdCliffs_T_Pelle_7:
# 370 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R3
	goto ParcelDelibirdCliffs_T_Pelle_6

ParcelDelibirdCliffs_T_Pelle_8:
# 369 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R3
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_7
	goto ParcelDelibirdCliffs_T_Pelle_6

ParcelDelibirdCliffs_T_Pelle_12:
# 373 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R4
	goto ParcelDelibirdCliffs_T_Pelle_11

ParcelDelibirdCliffs_T_Pelle_13:
# 372 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R4
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_12
	goto ParcelDelibirdCliffs_T_Pelle_11

ParcelDelibirdCliffs_T_Pelle_17:
# 376 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R5
	goto ParcelDelibirdCliffs_T_Pelle_16

ParcelDelibirdCliffs_T_Pelle_18:
# 375 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R5
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_17
	goto ParcelDelibirdCliffs_T_Pelle_16


ParcelDelibirdCliffs_T_Pelle_FirstWin::
# 382 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_Text_2, MSGBOX_DEFAULT
# 383 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R2::
# 387 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 388 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 389 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_0, MSGBOX_YESNO
# 390 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R2_2
# 395 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R2, ParcelDelibirdCliffs_T_Pelle_R2_Text_2
# 396 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_3, MSGBOX_DEFAULT
# 397 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R2_2:
# 391 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 392 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R3::
# 401 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 402 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 403 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R3_Text_0, MSGBOX_YESNO
# 404 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R3_2
# 409 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R3, ParcelDelibirdCliffs_T_Pelle_R3_Text_1
# 410 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R3_Text_2, MSGBOX_DEFAULT
# 411 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R3_2:
# 405 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 406 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R4::
# 415 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 416 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 417 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R4_Text_0, MSGBOX_YESNO
# 418 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R4_2
# 423 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R4, ParcelDelibirdCliffs_T_Pelle_R2_Text_2
# 424 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R4_Text_1, MSGBOX_DEFAULT
# 425 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R4_2:
# 419 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 420 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R5::
# 429 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 430 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 431 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R5_Text_0, MSGBOX_YESNO
# 432 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R5_2
# 437 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R5, ParcelDelibirdCliffs_T_Pelle_R5_Text_1
# 438 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R5_Text_2, MSGBOX_DEFAULT
# 439 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R5_2:
# 433 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 434 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid::
# 444 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_ASTRID, ParcelDelibirdCliffs_T_Astrid_Text_0, ParcelDelibirdCliffs_T_Astrid_Text_1, ParcelDelibirdCliffs_T_Astrid_FirstWin
# 448 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 449 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_3
ParcelDelibirdCliffs_T_Astrid_1:
# 452 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_8
ParcelDelibirdCliffs_T_Astrid_6:
# 455 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_13
ParcelDelibirdCliffs_T_Astrid_11:
# 458 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_18
ParcelDelibirdCliffs_T_Astrid_16:
# 461 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Astrid_2:
# 450 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R2
	goto ParcelDelibirdCliffs_T_Astrid_1

ParcelDelibirdCliffs_T_Astrid_3:
# 449 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R2
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_2
	goto ParcelDelibirdCliffs_T_Astrid_1

ParcelDelibirdCliffs_T_Astrid_7:
# 453 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R3
	goto ParcelDelibirdCliffs_T_Astrid_6

ParcelDelibirdCliffs_T_Astrid_8:
# 452 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R3
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_7
	goto ParcelDelibirdCliffs_T_Astrid_6

ParcelDelibirdCliffs_T_Astrid_12:
# 456 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R4
	goto ParcelDelibirdCliffs_T_Astrid_11

ParcelDelibirdCliffs_T_Astrid_13:
# 455 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R4
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_12
	goto ParcelDelibirdCliffs_T_Astrid_11

ParcelDelibirdCliffs_T_Astrid_17:
# 459 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R5
	goto ParcelDelibirdCliffs_T_Astrid_16

ParcelDelibirdCliffs_T_Astrid_18:
# 458 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R5
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_17
	goto ParcelDelibirdCliffs_T_Astrid_16


ParcelDelibirdCliffs_T_Astrid_FirstWin::
# 465 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_Text_2, MSGBOX_DEFAULT
# 466 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R2::
# 470 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 471 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 472 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_0, MSGBOX_YESNO
# 473 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R2_2
# 478 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R2, ParcelDelibirdCliffs_T_Astrid_R2_Text_2
# 479 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_3, MSGBOX_DEFAULT
# 480 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R2_2:
# 474 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 475 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R3::
# 484 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 485 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 486 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R3_Text_0, MSGBOX_YESNO
# 487 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R3_2
# 492 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R3, ParcelDelibirdCliffs_T_Astrid_R3_Text_1
# 493 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R3_Text_2, MSGBOX_DEFAULT
# 494 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R3_2:
# 488 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 489 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R4::
# 498 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 499 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 500 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R4_Text_0, MSGBOX_YESNO
# 501 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R4_2
# 506 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R4, ParcelDelibirdCliffs_T_Astrid_R4_Text_1
# 507 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R4_Text_2, MSGBOX_DEFAULT
# 508 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R4_2:
# 502 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 503 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R5::
# 512 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 513 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 514 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R5_Text_0, MSGBOX_YESNO
# 515 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R5_2
# 520 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R5, ParcelDelibirdCliffs_T_Astrid_R5_Text_1
# 521 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R5_Text_2, MSGBOX_DEFAULT
# 522 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R5_2:
# 516 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 517 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_Tomas_Text_0:
# 20 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Tomas: The floor slopes a little more\n"
	.string "every year and the hearing didn't\l"
	.string "change that. It changed who's counting.\p"
	.string "Me, now. I've a book.$"

ParcelDelibirdCliffs_Tomas_Text_1:
# 25 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Tomas: Warm through, thanks to you.\n"
	.string "Mind the corner of my cabin -- the floor\l"
	.string "slopes to the sea a little more each\l"
	.string "winter.\p"
	.string "Used to be level. I remember it level.$"

ParcelDelibirdCliffs_Tomas_Text_2:
# 30 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "An old fisher straightens, slow, by a\n"
	.string "cabin whose seaward corner has settled\l"
	.string "into the sand.\p"
	.string "Tomas: From Marta? You carried this all\n"
	.string "the way down the cliff for an old man\l"
	.string "you've never met.$"

ParcelDelibirdCliffs_Tomas_Text_3:
# 31 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Tomas: That's the island in you already,\n"
	.string "and you only just landed.\p"
	.string "Here -- take this for the road. No, take\n"
	.string "it. That's how it works. You'll learn.$"

ParcelDelibirdCliffs_Tomas_Text_4:
# 34 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Tomas: Now go on with the rest of the\n"
	.string "round. Marta will have a bird ready for\l"
	.string "you when it's done. She always does.\p"
	.string "It's how she says thank you. Don't\n"
	.string "refuse it -- that's the one rude thing\l"
	.string "you can do here.$"

ParcelDelibirdCliffs_Tomas_Text_5:
# 38 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Tomas: Moved the cabin down here when\n"
	.string "the green went soft under it. The\l"
	.string "sand's honest, at least. It tells you\l"
	.string "when it's moving.\p"
	.string "Cold off the water today. There's\n"
	.string "coffee in the square if you've come up\l"
	.string "short. Up here you never go without.$"

ParcelDelibirdCliffs_Rune_Text_0:
# 48 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Rune: The beacon's in your record, is\n"
	.string "it? Good.\p"
	.string "It's a long time since anyone wrote the\n"
	.string "point down for anything but wrecks.$"

ParcelDelibirdCliffs_Rune_Text_1:
# 53 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Rune: Tea's on. Marta's tea. You can\n"
	.string "taste the island in it, she says.\p"
	.string "I say you can taste the peat smoke, and\n"
	.string "that's the same thing.$"

ParcelDelibirdCliffs_Rune_Text_2:
# 58 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "An old man polishes a brass fitting on\n"
	.string "the beacon housing. It does not need\l"
	.string "polishing.\p"
	.string "Rune: From Marta. The good tea and a\n"
	.string "blanket for the night watch. She never\l"
	.string "forgets the point. Nobody else\l"
	.string "remembers it.$"

ParcelDelibirdCliffs_Rune_Text_3:
# 59 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Rune: Four generations my family lit a\n"
	.string "fire here for the boats. Now it's a bulb,\l"
	.string "and MEREHOLT paid for the bulb, and the\l"
	.string "boats have radar.\p"
	.string "I polish it anyway. A thing kept is a\n"
	.string "thing kept.$"

ParcelDelibirdCliffs_Rune_Text_4:
# 60 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Rune: Take that -- it's what the old\n"
	.string "lamp used to flash with. Careful of the\l"
	.string "edge going back.\p"
	.string "The edge is a different place every\n"
	.string "spring.$"

ParcelDelibirdCliffs_Rune_Text_5:
# 66 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Rune: The point beacon. Lit every night,\n"
	.string "fire or bulb, for as long as there've\l"
	.string "been boats stupid enough to need it.\p"
	.string "The cliff under us has lost a boat's\n"
	.string "length since my father's day. We'll move\l"
	.string "the housing back again next year. It's\l"
	.string "what we do.$"

ParcelDelibirdCliffs_Einar_Text_0:
# 76 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Einar: Your paper has my list in it.\n"
	.string "Forty years of a shore, in a footnote.\p"
	.string "I'll take a footnote. Footnotes are\n"
	.string "where the truth gets kept while the\l"
	.string "main text is still arguing.$"

ParcelDelibirdCliffs_Einar_Text_1:
# 80 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "A man with binoculars does not lower\n"
	.string "them.\p"
	.string "Einar: CORSOLA. In the shallows off the\n"
	.string "point. Forty years I've kept the list\l"
	.string "for this shore and I had never once\l"
	.string "written that name.\p"
	.string "Now it's every tide. The water's warm\n"
	.string "enough for them. It isn't supposed to\l"
	.string "be warm enough for them.\p"
	.string "That is the whole of what I know, and it\n"
	.string "took forty years.$"

ParcelDelibirdCliffs_TrailSign_Text_0:
# 87 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SHORELINE CLIFFS\p"
	.string "The beach is by the stairs at either\n"
	.string "end. Tomas's cabin is below the east\l"
	.string "stairs. The point beacon is past the\l"
	.string "rocks.\p"
	.string "Mind the edge. It is not where the map\n"
	.string "says.$"

ParcelDelibirdCliffs_BeaconSign_Text_0:
# 92 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "THE POINT BEACON\p"
	.string "Kept by the Reikvold family, four\n"
	.string "generations. Fire, then oil, then the\l"
	.string "bulb.\p"
	.string "Smaller, newer, bolted on: LIGHTING\n"
	.string "UPGRADE FUNDED BY THE MEREHOLT\l"
	.string "FOUNDATION.$"

ParcelDelibirdCliffs_T_Solveig_Text_0:
# 113 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: A picnic on the cliffs at\n"
	.string "Midwinter! Gran would have called me\l"
	.string "mad. Gran never had a Midwinter you\l"
	.string "could sit out in.\p"
	.string "Battle while the tea brews?$"

ParcelDelibirdCliffs_T_Solveig_Text_1:
# 114 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Tea's ready anyway.$"

ParcelDelibirdCliffs_T_Solveig_Text_2:
# 129 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: It's lovely. That's the awful\n"
	.string "part.\p"
	.string "It's genuinely lovely up here now.$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_0:
# 140 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_1:
# 142 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Suit yourself. I'm here.$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_2:
# 146 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: …Fair.$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_3:
# 147 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelDelibirdCliffs_T_Solveig_R3_Text_0:
# 154 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelDelibirdCliffs_T_Solveig_R3_Text_1:
# 161 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Solveig_R4_Text_0:
# 168 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdCliffs_T_Solveig_R4_Text_1:
# 174 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Right. That's the whole of it.$"

ParcelDelibirdCliffs_T_Solveig_R4_Text_2:
# 175 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdCliffs_T_Solveig_R5_Text_0:
# 182 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibirdCliffs_T_Solveig_R5_Text_1:
# 188 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: …Again, then. Later.$"

ParcelDelibirdCliffs_T_Solveig_R5_Text_2:
# 189 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibirdCliffs_T_Olav_Text_0:
# 196 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Hold still. WINGULL count. Three\n"
	.string "hundred and -- never mind, you've put\l"
	.string "them up.\p"
	.string "Battle, since you've cost me the number.$"

ParcelDelibirdCliffs_T_Olav_Text_1:
# 197 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Fair's fair.$"

ParcelDelibirdCliffs_T_Olav_Text_2:
# 212 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: The gulls are fine. The gulls are\n"
	.string "always fine.\p"
	.string "It's the ones you don't see any more\n"
	.string "that tell you anything.$"

ParcelDelibirdCliffs_T_Olav_R2_Text_0:
# 223 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: I kept the team up for this.\n"
	.string "Again?$"

ParcelDelibirdCliffs_T_Olav_R2_Text_1:
# 225 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: No hurry. The water keeps.$"

ParcelDelibirdCliffs_T_Olav_R2_Text_2:
# 229 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: …Again, then. Later.$"

ParcelDelibirdCliffs_T_Olav_R2_Text_3:
# 230 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibirdCliffs_T_Olav_R3_Text_0:
# 237 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelDelibirdCliffs_T_Olav_R3_Text_1:
# 243 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: That's the one I wanted to see.$"

ParcelDelibirdCliffs_T_Olav_R3_Text_2:
# 244 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Olav_R4_Text_0:
# 251 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelDelibirdCliffs_T_Olav_R4_Text_1:
# 257 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: …Fair.$"

ParcelDelibirdCliffs_T_Olav_R4_Text_2:
# 258 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdCliffs_T_Olav_R5_Text_0:
# 265 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdCliffs_T_Olav_R5_Text_1:
# 271 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Noted. Properly, this time.$"

ParcelDelibirdCliffs_T_Olav_R5_Text_2:
# 272 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelDelibirdCliffs_T_Geir_Text_0:
# 279 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: CORSOLA on the line. In this\n"
	.string "water. My father fished this tide line\l"
	.string "fifty years and never saw one north of\l"
	.string "the Coast.\p"
	.string "Battle while I think about that.$"

ParcelDelibirdCliffs_T_Geir_Text_1:
# 280 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Hm. Caught, properly.$"

ParcelDelibirdCliffs_T_Geir_Text_2:
# 295 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: New fish in the pots and the old\n"
	.string "ones gone north. Same work, different\l"
	.string "names.\p"
	.string "I'd rather the old names.$"

ParcelDelibirdCliffs_T_Geir_R2_Text_0:
# 306 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelDelibirdCliffs_T_Geir_R2_Text_1:
# 308 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Fine. Same spot.$"

ParcelDelibirdCliffs_T_Geir_R2_Text_2:
# 312 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: That's the one I wanted to see.$"

ParcelDelibirdCliffs_T_Geir_R2_Text_3:
# 313 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibirdCliffs_T_Geir_R3_Text_0:
# 320 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdCliffs_T_Geir_R3_Text_1:
# 326 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Noted. Properly, this time.$"

ParcelDelibirdCliffs_T_Geir_R3_Text_2:
# 327 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Geir_R4_Text_0:
# 334 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelDelibirdCliffs_T_Geir_R4_Text_1:
# 340 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: …Fair.$"

ParcelDelibirdCliffs_T_Geir_R4_Text_2:
# 341 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelDelibirdCliffs_T_Geir_R5_Text_0:
# 348 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelDelibirdCliffs_T_Geir_R5_Text_1:
# 355 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelDelibirdCliffs_T_Pelle_Text_0:
# 362 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: I'm swimming at MIDWINTER! Dad\n"
	.string "says when he was little the sea had ice\l"
	.string "on it here. Ice!\p"
	.string "Battle me, I'm warm enough!$"

ParcelDelibirdCliffs_T_Pelle_Text_1:
# 363 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Brrr. Lost.$"

ParcelDelibirdCliffs_T_Pelle_Text_2:
# 378 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Dad doesn't swim. He stands at\n"
	.string "the edge and looks at the water like it\l"
	.string "owes him something.$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_0:
# 389 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_1:
# 391 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Fine. Same spot.$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_2:
# 395 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: That's the one I wanted to see.$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_3:
# 396 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelDelibirdCliffs_T_Pelle_R3_Text_0:
# 403 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdCliffs_T_Pelle_R3_Text_1:
# 409 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: …Again, then. Later.$"

ParcelDelibirdCliffs_T_Pelle_R3_Text_2:
# 410 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Pelle_R4_Text_0:
# 417 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdCliffs_T_Pelle_R4_Text_1:
# 424 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdCliffs_T_Pelle_R5_Text_0:
# 431 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibirdCliffs_T_Pelle_R5_Text_1:
# 437 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: …Fair.$"

ParcelDelibirdCliffs_T_Pelle_R5_Text_2:
# 438 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibirdCliffs_T_Astrid_Text_0:
# 445 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Out here the water's the same\n"
	.string "every year. It's the land that changes.\p"
	.string "You've got a board under you, you've got\n"
	.string "a battle.$"

ParcelDelibirdCliffs_T_Astrid_Text_1:
# 446 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Good current on you.$"

ParcelDelibirdCliffs_T_Astrid_Text_2:
# 461 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: I used to have to watch for ice\n"
	.string "floes off the point. Now I watch for the\l"
	.string "tour boats.\p"
	.string "I'd take the floes back.$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_0:
# 472 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_1:
# 474 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Fine. Same spot.$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_2:
# 478 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Still yours.$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_3:
# 479 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelDelibirdCliffs_T_Astrid_R3_Text_0:
# 486 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelDelibirdCliffs_T_Astrid_R3_Text_1:
# 492 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: …Fair.$"

ParcelDelibirdCliffs_T_Astrid_R3_Text_2:
# 493 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Astrid_R4_Text_0:
# 500 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelDelibirdCliffs_T_Astrid_R4_Text_1:
# 506 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Right. That's the whole of it.$"

ParcelDelibirdCliffs_T_Astrid_R4_Text_2:
# 507 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelDelibirdCliffs_T_Astrid_R5_Text_0:
# 514 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelDelibirdCliffs_T_Astrid_R5_Text_1:
# 520 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Noted. Properly, this time.$"

ParcelDelibirdCliffs_T_Astrid_R5_Text_2:
# 521 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Five. Write that one down too.\n"
	.string "I'll know you did.$"
