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
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelDelibirdCliffs_Einar_3
ParcelDelibirdCliffs_Einar_1:
# 80 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FIRSTONE, ParcelDelibirdCliffs_Einar_10
ParcelDelibirdCliffs_Einar_9:
# 90 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_FIRSTONE_DONE, ParcelDelibirdCliffs_Einar_8
# 96 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdCliffs_Einar_14
# 101 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelDelibirdCliffs_Einar_21
# 106 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_6, MSGBOX_DEFAULT
# 107 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Einar_2:
# 76 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_0, MSGBOX_DEFAULT
# 77 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Einar_3:
# 75 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FIRSTONE_DONE, ParcelDelibirdCliffs_Einar_2
	goto ParcelDelibirdCliffs_Einar_1

ParcelDelibirdCliffs_Einar_7:
# 81 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FIRSTONE_FOUND, ParcelDelibirdCliffs_Einar_17
# 86 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_2, MSGBOX_DEFAULT
ParcelDelibirdCliffs_Einar_16:
# 88 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Einar_8:
# 91 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_3, MSGBOX_DEFAULT
# 92 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	setflag FLAG_SKALD_Q_FIRSTONE
# 93 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Einar_10:
# 80 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_FIRSTONE_DONE, ParcelDelibirdCliffs_Einar_7
	goto ParcelDelibirdCliffs_Einar_9

ParcelDelibirdCliffs_Einar_14:
# 97 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_4, MSGBOX_DEFAULT
# 98 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Einar_17:
# 82 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_1, MSGBOX_DEFAULT
# 83 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	giveitem ITEM_DIVE_BALL, 2
# 84 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	setflag FLAG_SKALD_Q_FIRSTONE_DONE
	goto ParcelDelibirdCliffs_Einar_16

ParcelDelibirdCliffs_Einar_21:
# 102 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_5, MSGBOX_DEFAULT
# 103 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_TrailSign::
# 113 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_TrailSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdCliffs_BeaconSign::
# 118 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_BeaconSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdCliffs_ItemMaxRepel::
# 124 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	finditem ITEM_MAX_REPEL
	end


ParcelDelibirdCliffs_ItemBigPearl::
# 128 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	finditem ITEM_BIG_PEARL
	end


ParcelDelibirdCliffs_ItemUltraBall::
# 132 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	finditem ITEM_ULTRA_BALL
	end


ParcelDelibirdCliffs_T_Solveig::
# 138 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_SOLVEIG, ParcelDelibirdCliffs_T_Solveig_Text_0, ParcelDelibirdCliffs_T_Solveig_Text_1, ParcelDelibirdCliffs_T_Solveig_FirstWin
# 142 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 143 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_3
ParcelDelibirdCliffs_T_Solveig_1:
# 146 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_8
ParcelDelibirdCliffs_T_Solveig_6:
# 149 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_13
ParcelDelibirdCliffs_T_Solveig_11:
# 152 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_18
ParcelDelibirdCliffs_T_Solveig_16:
# 155 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Solveig_2:
# 144 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R2
	goto ParcelDelibirdCliffs_T_Solveig_1

ParcelDelibirdCliffs_T_Solveig_3:
# 143 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R2
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_2
	goto ParcelDelibirdCliffs_T_Solveig_1

ParcelDelibirdCliffs_T_Solveig_7:
# 147 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R3
	goto ParcelDelibirdCliffs_T_Solveig_6

ParcelDelibirdCliffs_T_Solveig_8:
# 146 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R3
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_7
	goto ParcelDelibirdCliffs_T_Solveig_6

ParcelDelibirdCliffs_T_Solveig_12:
# 150 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R4
	goto ParcelDelibirdCliffs_T_Solveig_11

ParcelDelibirdCliffs_T_Solveig_13:
# 149 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R4
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_12
	goto ParcelDelibirdCliffs_T_Solveig_11

ParcelDelibirdCliffs_T_Solveig_17:
# 153 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R5
	goto ParcelDelibirdCliffs_T_Solveig_16

ParcelDelibirdCliffs_T_Solveig_18:
# 152 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R5
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_17
	goto ParcelDelibirdCliffs_T_Solveig_16


ParcelDelibirdCliffs_T_Solveig_FirstWin::
# 159 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_Text_2, MSGBOX_DEFAULT
# 160 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R2::
# 164 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 165 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 166 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_0, MSGBOX_YESNO
# 167 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R2_2
# 172 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R2, ParcelDelibirdCliffs_T_Solveig_R2_Text_2
# 173 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_3, MSGBOX_DEFAULT
# 174 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R2_2:
# 168 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 169 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R3::
# 178 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 179 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 180 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R3_Text_0, MSGBOX_YESNO
# 181 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R3_2
# 186 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R3, ParcelDelibirdCliffs_T_Solveig_R2_Text_2
# 187 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R3_Text_1, MSGBOX_DEFAULT
# 188 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R3_2:
# 182 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 183 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R4::
# 192 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 193 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 194 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R4_Text_0, MSGBOX_YESNO
# 195 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R4_2
# 200 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R4, ParcelDelibirdCliffs_T_Solveig_R4_Text_1
# 201 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R4_Text_2, MSGBOX_DEFAULT
# 202 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R4_2:
# 196 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 197 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R5::
# 206 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 207 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 208 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R5_Text_0, MSGBOX_YESNO
# 209 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R5_2
# 214 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R5, ParcelDelibirdCliffs_T_Solveig_R5_Text_1
# 215 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R5_Text_2, MSGBOX_DEFAULT
# 216 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R5_2:
# 210 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 211 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav::
# 221 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_OLAV, ParcelDelibirdCliffs_T_Olav_Text_0, ParcelDelibirdCliffs_T_Olav_Text_1, ParcelDelibirdCliffs_T_Olav_FirstWin
# 225 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 226 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Olav_3
ParcelDelibirdCliffs_T_Olav_1:
# 229 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Olav_8
ParcelDelibirdCliffs_T_Olav_6:
# 232 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Olav_13
ParcelDelibirdCliffs_T_Olav_11:
# 235 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Olav_18
ParcelDelibirdCliffs_T_Olav_16:
# 238 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Olav_2:
# 227 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R2
	goto ParcelDelibirdCliffs_T_Olav_1

ParcelDelibirdCliffs_T_Olav_3:
# 226 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R2
	goto_if 0, ParcelDelibirdCliffs_T_Olav_2
	goto ParcelDelibirdCliffs_T_Olav_1

ParcelDelibirdCliffs_T_Olav_7:
# 230 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R3
	goto ParcelDelibirdCliffs_T_Olav_6

ParcelDelibirdCliffs_T_Olav_8:
# 229 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R3
	goto_if 0, ParcelDelibirdCliffs_T_Olav_7
	goto ParcelDelibirdCliffs_T_Olav_6

ParcelDelibirdCliffs_T_Olav_12:
# 233 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R4
	goto ParcelDelibirdCliffs_T_Olav_11

ParcelDelibirdCliffs_T_Olav_13:
# 232 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R4
	goto_if 0, ParcelDelibirdCliffs_T_Olav_12
	goto ParcelDelibirdCliffs_T_Olav_11

ParcelDelibirdCliffs_T_Olav_17:
# 236 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R5
	goto ParcelDelibirdCliffs_T_Olav_16

ParcelDelibirdCliffs_T_Olav_18:
# 235 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R5
	goto_if 0, ParcelDelibirdCliffs_T_Olav_17
	goto ParcelDelibirdCliffs_T_Olav_16


ParcelDelibirdCliffs_T_Olav_FirstWin::
# 242 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_Text_2, MSGBOX_DEFAULT
# 243 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R2::
# 247 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 248 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 249 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_0, MSGBOX_YESNO
# 250 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R2_2
# 255 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R2, ParcelDelibirdCliffs_T_Olav_R2_Text_2
# 256 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_3, MSGBOX_DEFAULT
# 257 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R2_2:
# 251 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 252 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R3::
# 261 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 262 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 263 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R3_Text_0, MSGBOX_YESNO
# 264 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R3_2
# 269 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R3, ParcelDelibirdCliffs_T_Olav_R3_Text_1
# 270 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R3_Text_2, MSGBOX_DEFAULT
# 271 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R3_2:
# 265 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 266 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R4::
# 275 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 276 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 277 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R4_Text_0, MSGBOX_YESNO
# 278 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R4_2
# 283 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R4, ParcelDelibirdCliffs_T_Olav_R4_Text_1
# 284 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R4_Text_2, MSGBOX_DEFAULT
# 285 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R4_2:
# 279 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 280 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R5::
# 289 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 290 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 291 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R5_Text_0, MSGBOX_YESNO
# 292 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R5_2
# 297 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R5, ParcelDelibirdCliffs_T_Olav_R5_Text_1
# 298 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R5_Text_2, MSGBOX_DEFAULT
# 299 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R5_2:
# 293 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 294 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir::
# 304 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_GEIR, ParcelDelibirdCliffs_T_Geir_Text_0, ParcelDelibirdCliffs_T_Geir_Text_1, ParcelDelibirdCliffs_T_Geir_FirstWin
# 308 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 309 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Geir_3
ParcelDelibirdCliffs_T_Geir_1:
# 312 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Geir_8
ParcelDelibirdCliffs_T_Geir_6:
# 315 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Geir_13
ParcelDelibirdCliffs_T_Geir_11:
# 318 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Geir_18
ParcelDelibirdCliffs_T_Geir_16:
# 321 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Geir_2:
# 310 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R2
	goto ParcelDelibirdCliffs_T_Geir_1

ParcelDelibirdCliffs_T_Geir_3:
# 309 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R2
	goto_if 0, ParcelDelibirdCliffs_T_Geir_2
	goto ParcelDelibirdCliffs_T_Geir_1

ParcelDelibirdCliffs_T_Geir_7:
# 313 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R3
	goto ParcelDelibirdCliffs_T_Geir_6

ParcelDelibirdCliffs_T_Geir_8:
# 312 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R3
	goto_if 0, ParcelDelibirdCliffs_T_Geir_7
	goto ParcelDelibirdCliffs_T_Geir_6

ParcelDelibirdCliffs_T_Geir_12:
# 316 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R4
	goto ParcelDelibirdCliffs_T_Geir_11

ParcelDelibirdCliffs_T_Geir_13:
# 315 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R4
	goto_if 0, ParcelDelibirdCliffs_T_Geir_12
	goto ParcelDelibirdCliffs_T_Geir_11

ParcelDelibirdCliffs_T_Geir_17:
# 319 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R5
	goto ParcelDelibirdCliffs_T_Geir_16

ParcelDelibirdCliffs_T_Geir_18:
# 318 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R5
	goto_if 0, ParcelDelibirdCliffs_T_Geir_17
	goto ParcelDelibirdCliffs_T_Geir_16


ParcelDelibirdCliffs_T_Geir_FirstWin::
# 325 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_Text_2, MSGBOX_DEFAULT
# 326 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R2::
# 330 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 331 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 332 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_0, MSGBOX_YESNO
# 333 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R2_2
# 338 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R2, ParcelDelibirdCliffs_T_Geir_R2_Text_2
# 339 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_3, MSGBOX_DEFAULT
# 340 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R2_2:
# 334 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 335 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R3::
# 344 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 345 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 346 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R3_Text_0, MSGBOX_YESNO
# 347 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R3_2
# 352 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R3, ParcelDelibirdCliffs_T_Geir_R3_Text_1
# 353 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R3_Text_2, MSGBOX_DEFAULT
# 354 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R3_2:
# 348 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 349 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R4::
# 358 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 359 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 360 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R4_Text_0, MSGBOX_YESNO
# 361 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R4_2
# 366 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R4, ParcelDelibirdCliffs_T_Geir_R4_Text_1
# 367 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R4_Text_2, MSGBOX_DEFAULT
# 368 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R4_2:
# 362 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 363 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R5::
# 372 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 373 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 374 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R5_Text_0, MSGBOX_YESNO
# 375 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R5_2
# 380 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R5, ParcelDelibirdCliffs_T_Geir_R2_Text_2
# 381 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R5_Text_1, MSGBOX_DEFAULT
# 382 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R5_2:
# 376 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 377 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle::
# 387 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_PELLE, ParcelDelibirdCliffs_T_Pelle_Text_0, ParcelDelibirdCliffs_T_Pelle_Text_1, ParcelDelibirdCliffs_T_Pelle_FirstWin
# 391 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 392 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_3
ParcelDelibirdCliffs_T_Pelle_1:
# 395 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_8
ParcelDelibirdCliffs_T_Pelle_6:
# 398 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_13
ParcelDelibirdCliffs_T_Pelle_11:
# 401 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_18
ParcelDelibirdCliffs_T_Pelle_16:
# 404 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Pelle_2:
# 393 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R2
	goto ParcelDelibirdCliffs_T_Pelle_1

ParcelDelibirdCliffs_T_Pelle_3:
# 392 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R2
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_2
	goto ParcelDelibirdCliffs_T_Pelle_1

ParcelDelibirdCliffs_T_Pelle_7:
# 396 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R3
	goto ParcelDelibirdCliffs_T_Pelle_6

ParcelDelibirdCliffs_T_Pelle_8:
# 395 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R3
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_7
	goto ParcelDelibirdCliffs_T_Pelle_6

ParcelDelibirdCliffs_T_Pelle_12:
# 399 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R4
	goto ParcelDelibirdCliffs_T_Pelle_11

ParcelDelibirdCliffs_T_Pelle_13:
# 398 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R4
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_12
	goto ParcelDelibirdCliffs_T_Pelle_11

ParcelDelibirdCliffs_T_Pelle_17:
# 402 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R5
	goto ParcelDelibirdCliffs_T_Pelle_16

ParcelDelibirdCliffs_T_Pelle_18:
# 401 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R5
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_17
	goto ParcelDelibirdCliffs_T_Pelle_16


ParcelDelibirdCliffs_T_Pelle_FirstWin::
# 408 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_Text_2, MSGBOX_DEFAULT
# 409 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R2::
# 413 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 414 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 415 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_0, MSGBOX_YESNO
# 416 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R2_2
# 421 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R2, ParcelDelibirdCliffs_T_Pelle_R2_Text_2
# 422 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_3, MSGBOX_DEFAULT
# 423 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R2_2:
# 417 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 418 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R3::
# 427 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 428 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 429 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R3_Text_0, MSGBOX_YESNO
# 430 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R3_2
# 435 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R3, ParcelDelibirdCliffs_T_Pelle_R3_Text_1
# 436 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R3_Text_2, MSGBOX_DEFAULT
# 437 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R3_2:
# 431 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 432 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R4::
# 441 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 442 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 443 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R4_Text_0, MSGBOX_YESNO
# 444 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R4_2
# 449 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R4, ParcelDelibirdCliffs_T_Pelle_R2_Text_2
# 450 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R4_Text_1, MSGBOX_DEFAULT
# 451 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R4_2:
# 445 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 446 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R5::
# 455 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 456 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 457 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R5_Text_0, MSGBOX_YESNO
# 458 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R5_2
# 463 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R5, ParcelDelibirdCliffs_T_Pelle_R5_Text_1
# 464 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R5_Text_2, MSGBOX_DEFAULT
# 465 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R5_2:
# 459 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 460 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid::
# 470 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_ASTRID, ParcelDelibirdCliffs_T_Astrid_Text_0, ParcelDelibirdCliffs_T_Astrid_Text_1, ParcelDelibirdCliffs_T_Astrid_FirstWin
# 474 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 475 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_3
ParcelDelibirdCliffs_T_Astrid_1:
# 478 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_8
ParcelDelibirdCliffs_T_Astrid_6:
# 481 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_13
ParcelDelibirdCliffs_T_Astrid_11:
# 484 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_18
ParcelDelibirdCliffs_T_Astrid_16:
# 487 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Astrid_2:
# 476 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R2
	goto ParcelDelibirdCliffs_T_Astrid_1

ParcelDelibirdCliffs_T_Astrid_3:
# 475 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R2
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_2
	goto ParcelDelibirdCliffs_T_Astrid_1

ParcelDelibirdCliffs_T_Astrid_7:
# 479 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R3
	goto ParcelDelibirdCliffs_T_Astrid_6

ParcelDelibirdCliffs_T_Astrid_8:
# 478 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R3
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_7
	goto ParcelDelibirdCliffs_T_Astrid_6

ParcelDelibirdCliffs_T_Astrid_12:
# 482 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R4
	goto ParcelDelibirdCliffs_T_Astrid_11

ParcelDelibirdCliffs_T_Astrid_13:
# 481 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R4
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_12
	goto ParcelDelibirdCliffs_T_Astrid_11

ParcelDelibirdCliffs_T_Astrid_17:
# 485 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R5
	goto ParcelDelibirdCliffs_T_Astrid_16

ParcelDelibirdCliffs_T_Astrid_18:
# 484 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R5
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_17
	goto ParcelDelibirdCliffs_T_Astrid_16


ParcelDelibirdCliffs_T_Astrid_FirstWin::
# 491 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_Text_2, MSGBOX_DEFAULT
# 492 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R2::
# 496 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 497 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 498 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_0, MSGBOX_YESNO
# 499 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R2_2
# 504 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R2, ParcelDelibirdCliffs_T_Astrid_R2_Text_2
# 505 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_3, MSGBOX_DEFAULT
# 506 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R2_2:
# 500 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 501 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R3::
# 510 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 511 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 512 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R3_Text_0, MSGBOX_YESNO
# 513 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R3_2
# 518 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R3, ParcelDelibirdCliffs_T_Astrid_R3_Text_1
# 519 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R3_Text_2, MSGBOX_DEFAULT
# 520 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R3_2:
# 514 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 515 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R4::
# 524 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 525 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 526 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R4_Text_0, MSGBOX_YESNO
# 527 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R4_2
# 532 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R4, ParcelDelibirdCliffs_T_Astrid_R4_Text_1
# 533 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R4_Text_2, MSGBOX_DEFAULT
# 534 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R4_2:
# 528 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 529 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R5::
# 538 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 539 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 540 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R5_Text_0, MSGBOX_YESNO
# 541 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R5_2
# 546 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R5, ParcelDelibirdCliffs_T_Astrid_R5_Text_1
# 547 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R5_Text_2, MSGBOX_DEFAULT
# 548 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R5_2:
# 542 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 543 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_PairBeach::
# 555 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 556 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdCliffs_PairBeach_2
# 560 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibirdCliffs_PairBeach_3
# 566 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_7, MSGBOX_DEFAULT
# 567 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_8, MSGBOX_DEFAULT
# 568 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_9, MSGBOX_DEFAULT
# 569 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_10, MSGBOX_DEFAULT
ParcelDelibirdCliffs_PairBeach_1:
# 571 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_PairBeach_2:
# 557 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_0, MSGBOX_DEFAULT
# 558 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_1, MSGBOX_DEFAULT
# 559 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_2, MSGBOX_DEFAULT
	goto ParcelDelibirdCliffs_PairBeach_1

ParcelDelibirdCliffs_PairBeach_3:
# 561 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_3, MSGBOX_DEFAULT
# 562 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_4, MSGBOX_DEFAULT
# 563 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_5, MSGBOX_DEFAULT
# 564 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_6, MSGBOX_DEFAULT
	goto ParcelDelibirdCliffs_PairBeach_1


ParcelDelibirdCliffs_FindFirstone::
# 578 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FIRSTONE, ParcelDelibirdCliffs_FindFirstone_4
ParcelDelibirdCliffs_FindFirstone_3:
# 582 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_FindFirstone_Text_1, MSGBOX_SIGN
ParcelDelibirdCliffs_FindFirstone_1:
	end

ParcelDelibirdCliffs_FindFirstone_2:
# 579 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_FindFirstone_Text_0, MSGBOX_SIGN
# 580 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	setflag FLAG_SKALD_Q_FIRSTONE_FOUND
	goto ParcelDelibirdCliffs_FindFirstone_1

ParcelDelibirdCliffs_FindFirstone_4:
# 578 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_FIRSTONE_FOUND, ParcelDelibirdCliffs_FindFirstone_2
	goto ParcelDelibirdCliffs_FindFirstone_3


ParcelDelibirdCliffs_Board1::
# 590 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Board1_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdCliffs_Board2::
# 595 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Board2_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdCliffs_PairLedge::
# 602 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 603 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdCliffs_PairLedge_2
# 607 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibirdCliffs_PairLedge_3
# 613 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairLedge_Text_7, MSGBOX_DEFAULT
# 614 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairLedge_Text_8, MSGBOX_DEFAULT
# 615 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairLedge_Text_9, MSGBOX_DEFAULT
# 616 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairLedge_Text_10, MSGBOX_DEFAULT
# 617 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairLedge_Text_11, MSGBOX_DEFAULT
ParcelDelibirdCliffs_PairLedge_1:
# 619 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_PairLedge_2:
# 604 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairLedge_Text_0, MSGBOX_DEFAULT
# 605 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairLedge_Text_1, MSGBOX_DEFAULT
# 606 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairLedge_Text_2, MSGBOX_DEFAULT
	goto ParcelDelibirdCliffs_PairLedge_1

ParcelDelibirdCliffs_PairLedge_3:
# 608 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairLedge_Text_3, MSGBOX_DEFAULT
# 609 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairLedge_Text_4, MSGBOX_DEFAULT
# 610 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairLedge_Text_5, MSGBOX_DEFAULT
# 611 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairLedge_Text_6, MSGBOX_DEFAULT
	goto ParcelDelibirdCliffs_PairLedge_1


ParcelDelibirdCliffs_Board3::
# 626 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Board3_Text_0, MSGBOX_SIGN
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
	.string "EINAR: Midwinter again this year, in\n"
	.string "chalk, in a better hand. The children\l"
	.string "keep the list now. I just read it.\p"
	.string "Forty-two years. Dated.$"

ParcelDelibirdCliffs_Einar_Text_1:
# 82 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "EINAR: Midwinter, this year, in chalk, in\n"
	.string "a hand with a backwards letter. It's on\l"
	.string "the list, then. Dated.\p"
	.string "Forty-one years and the list has\n"
	.string "started writing itself faster than I\l"
	.string "can. Here. From the point, from when the\l"
	.string "water was cold.$"

ParcelDelibirdCliffs_Einar_Text_2:
# 86 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "EINAR: The beach pools below. The\n"
	.string "children's chalk. The date.$"

ParcelDelibirdCliffs_Einar_Text_3:
# 91 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "EINAR: Forty years of the list and\n"
	.string "CORSOLA's on it. The next thing on it, by\l"
	.string "my reckoning, will be a TENTACOOL in the\l"
	.string "beach pools. The children say there's\l"
	.string "one already.\p"
	.string "Go down and look. If there is, read me\n"
	.string "the date off whatever they've written\l"
	.string "beside it. Children date things.$"

ParcelDelibirdCliffs_Einar_Text_4:
# 97 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Einar: Your paper has my list in it.\n"
	.string "Forty years of a shore, in a footnote.\p"
	.string "I'll take a footnote. Footnotes are\n"
	.string "where the truth gets kept while the\l"
	.string "main text is still arguing.$"

ParcelDelibirdCliffs_Einar_Text_5:
# 102 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Einar: The coast counted its catch out\n"
	.string "loud, I hear. All one age. I've been\l"
	.string "saying it about the gulls for ten years.\p"
	.string "Nobody counts the gulls. The gulls are\n"
	.string "fine. The gulls are always fine, until\l"
	.string "the list says otherwise.$"

ParcelDelibirdCliffs_Einar_Text_6:
# 106 "data/maps/ParcelDelibirdCliffs/scripts.pory"
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
# 113 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SHORELINE CLIFFS\p"
	.string "The beach is by the stairs at either\n"
	.string "end. Tomas's cabin is below the east\l"
	.string "stairs. The point beacon is past the\l"
	.string "rocks.\p"
	.string "Mind the edge. It is not where the map\n"
	.string "says.$"

ParcelDelibirdCliffs_BeaconSign_Text_0:
# 118 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "THE POINT BEACON\p"
	.string "Kept by the Reikvold family, four\n"
	.string "generations. Fire, then oil, then the\l"
	.string "bulb.\p"
	.string "Smaller, newer, bolted on: LIGHTING\n"
	.string "UPGRADE FUNDED BY THE MEREHOLT\l"
	.string "FOUNDATION.$"

ParcelDelibirdCliffs_T_Solveig_Text_0:
# 139 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: A picnic on the cliffs at\n"
	.string "Midwinter! Gran would have called me\l"
	.string "mad. Gran never had a Midwinter you\l"
	.string "could sit out in.\p"
	.string "Battle while the tea brews?$"

ParcelDelibirdCliffs_T_Solveig_Text_1:
# 140 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Tea's ready anyway.$"

ParcelDelibirdCliffs_T_Solveig_Text_2:
# 155 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: It's lovely. That's the awful\n"
	.string "part.\p"
	.string "It's genuinely lovely up here now.$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_0:
# 166 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_1:
# 168 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Suit yourself. I'm here.$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_2:
# 172 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: …Fair.$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_3:
# 173 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelDelibirdCliffs_T_Solveig_R3_Text_0:
# 180 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelDelibirdCliffs_T_Solveig_R3_Text_1:
# 187 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Solveig_R4_Text_0:
# 194 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdCliffs_T_Solveig_R4_Text_1:
# 200 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Right. That's the whole of it.$"

ParcelDelibirdCliffs_T_Solveig_R4_Text_2:
# 201 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdCliffs_T_Solveig_R5_Text_0:
# 208 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibirdCliffs_T_Solveig_R5_Text_1:
# 214 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: …Again, then. Later.$"

ParcelDelibirdCliffs_T_Solveig_R5_Text_2:
# 215 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibirdCliffs_T_Olav_Text_0:
# 222 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Hold still. WINGULL count. Three\n"
	.string "hundred and -- never mind, you've put\l"
	.string "them up.\p"
	.string "Battle, since you've cost me the number.$"

ParcelDelibirdCliffs_T_Olav_Text_1:
# 223 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Fair's fair.$"

ParcelDelibirdCliffs_T_Olav_Text_2:
# 238 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: The gulls are fine. The gulls are\n"
	.string "always fine.\p"
	.string "It's the ones you don't see any more\n"
	.string "that tell you anything.$"

ParcelDelibirdCliffs_T_Olav_R2_Text_0:
# 249 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: I kept the team up for this.\n"
	.string "Again?$"

ParcelDelibirdCliffs_T_Olav_R2_Text_1:
# 251 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: No hurry. The water keeps.$"

ParcelDelibirdCliffs_T_Olav_R2_Text_2:
# 255 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: …Again, then. Later.$"

ParcelDelibirdCliffs_T_Olav_R2_Text_3:
# 256 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibirdCliffs_T_Olav_R3_Text_0:
# 263 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelDelibirdCliffs_T_Olav_R3_Text_1:
# 269 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: That's the one I wanted to see.$"

ParcelDelibirdCliffs_T_Olav_R3_Text_2:
# 270 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Olav_R4_Text_0:
# 277 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelDelibirdCliffs_T_Olav_R4_Text_1:
# 283 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: …Fair.$"

ParcelDelibirdCliffs_T_Olav_R4_Text_2:
# 284 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdCliffs_T_Olav_R5_Text_0:
# 291 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdCliffs_T_Olav_R5_Text_1:
# 297 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Noted. Properly, this time.$"

ParcelDelibirdCliffs_T_Olav_R5_Text_2:
# 298 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelDelibirdCliffs_T_Geir_Text_0:
# 305 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: CORSOLA on the line. In this\n"
	.string "water. My father fished this tide line\l"
	.string "fifty years and never saw one north of\l"
	.string "the Coast.\p"
	.string "Battle while I think about that.$"

ParcelDelibirdCliffs_T_Geir_Text_1:
# 306 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Hm. Caught, properly.$"

ParcelDelibirdCliffs_T_Geir_Text_2:
# 321 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: New fish in the pots and the old\n"
	.string "ones gone north. Same work, different\l"
	.string "names.\p"
	.string "I'd rather the old names.$"

ParcelDelibirdCliffs_T_Geir_R2_Text_0:
# 332 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelDelibirdCliffs_T_Geir_R2_Text_1:
# 334 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Fine. Same spot.$"

ParcelDelibirdCliffs_T_Geir_R2_Text_2:
# 338 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: That's the one I wanted to see.$"

ParcelDelibirdCliffs_T_Geir_R2_Text_3:
# 339 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibirdCliffs_T_Geir_R3_Text_0:
# 346 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdCliffs_T_Geir_R3_Text_1:
# 352 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Noted. Properly, this time.$"

ParcelDelibirdCliffs_T_Geir_R3_Text_2:
# 353 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Geir_R4_Text_0:
# 360 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelDelibirdCliffs_T_Geir_R4_Text_1:
# 366 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: …Fair.$"

ParcelDelibirdCliffs_T_Geir_R4_Text_2:
# 367 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelDelibirdCliffs_T_Geir_R5_Text_0:
# 374 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelDelibirdCliffs_T_Geir_R5_Text_1:
# 381 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelDelibirdCliffs_T_Pelle_Text_0:
# 388 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: I'm swimming at MIDWINTER! Dad\n"
	.string "says when he was little the sea had ice\l"
	.string "on it here. Ice!\p"
	.string "Battle me, I'm warm enough!$"

ParcelDelibirdCliffs_T_Pelle_Text_1:
# 389 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Brrr. Lost.$"

ParcelDelibirdCliffs_T_Pelle_Text_2:
# 404 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Dad doesn't swim. He stands at\n"
	.string "the edge and looks at the water like it\l"
	.string "owes him something.$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_0:
# 415 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_1:
# 417 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Fine. Same spot.$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_2:
# 421 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: That's the one I wanted to see.$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_3:
# 422 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelDelibirdCliffs_T_Pelle_R3_Text_0:
# 429 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdCliffs_T_Pelle_R3_Text_1:
# 435 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: …Again, then. Later.$"

ParcelDelibirdCliffs_T_Pelle_R3_Text_2:
# 436 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Pelle_R4_Text_0:
# 443 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdCliffs_T_Pelle_R4_Text_1:
# 450 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdCliffs_T_Pelle_R5_Text_0:
# 457 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibirdCliffs_T_Pelle_R5_Text_1:
# 463 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: …Fair.$"

ParcelDelibirdCliffs_T_Pelle_R5_Text_2:
# 464 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibirdCliffs_T_Astrid_Text_0:
# 471 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Out here the water's the same\n"
	.string "every year. It's the land that changes.\p"
	.string "You've got a board under you, you've got\n"
	.string "a battle.$"

ParcelDelibirdCliffs_T_Astrid_Text_1:
# 472 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Good current on you.$"

ParcelDelibirdCliffs_T_Astrid_Text_2:
# 487 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: I used to have to watch for ice\n"
	.string "floes off the point. Now I watch for the\l"
	.string "tour boats.\p"
	.string "I'd take the floes back.$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_0:
# 498 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_1:
# 500 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Fine. Same spot.$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_2:
# 504 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Still yours.$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_3:
# 505 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelDelibirdCliffs_T_Astrid_R3_Text_0:
# 512 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelDelibirdCliffs_T_Astrid_R3_Text_1:
# 518 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: …Fair.$"

ParcelDelibirdCliffs_T_Astrid_R3_Text_2:
# 519 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Astrid_R4_Text_0:
# 526 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelDelibirdCliffs_T_Astrid_R4_Text_1:
# 532 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Right. That's the whole of it.$"

ParcelDelibirdCliffs_T_Astrid_R4_Text_2:
# 533 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelDelibirdCliffs_T_Astrid_R5_Text_0:
# 540 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelDelibirdCliffs_T_Astrid_R5_Text_1:
# 546 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Noted. Properly, this time.$"

ParcelDelibirdCliffs_T_Astrid_R5_Text_2:
# 547 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelDelibirdCliffs_PairBeach_Text_0:
# 557 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "MOTHER: EINAR's put the date on the\n"
	.string "CORSOLA. Then he put the date the first\l"
	.string "TENTACOOL came, under it. He says the\l"
	.string "list is a clock now.$"

ParcelDelibirdCliffs_PairBeach_Text_1:
# 558 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GIRL: What time is it?$"

ParcelDelibirdCliffs_PairBeach_Text_2:
# 559 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "MOTHER: Later than it was. Go and swim.\n"
	.string "It really is warm.$"

ParcelDelibirdCliffs_PairBeach_Text_3:
# 561 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GIRL: The ranger wrote down the\n"
	.string "CORSOLA. EINAR showed them the list.$"

ParcelDelibirdCliffs_PairBeach_Text_4:
# 562 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "MOTHER: Forty years on the list and\n"
	.string "never seen till now.$"

ParcelDelibirdCliffs_PairBeach_Text_5:
# 563 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GIRL: That's good, isn't it? It's on the\n"
	.string "list!$"

ParcelDelibirdCliffs_PairBeach_Text_6:
# 564 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "MOTHER: It's on the list the way a storm\n"
	.string "is on the forecast, love. Being right\l"
	.string "about it is not the same as wanting it.$"

ParcelDelibirdCliffs_PairBeach_Text_7:
# 566 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GIRL: The water's warm enough to swim!\n"
	.string "At Midwinter!$"

ParcelDelibirdCliffs_PairBeach_Text_8:
# 567 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "MOTHER: Yes.$"

ParcelDelibirdCliffs_PairBeach_Text_9:
# 568 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GIRL: Why aren't you happy?$"

ParcelDelibirdCliffs_PairBeach_Text_10:
# 569 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "MOTHER: I'm happy for you. Go and swim.\n"
	.string "I'll be the one on the beach not being\l"
	.string "happy, and you can ask me about it when\l"
	.string "you're older.$"

ParcelDelibirdCliffs_FindFirstone_Text_0:
# 579 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "A tide pool on the warm beach. In it, a\n"
	.string "TENTACOOL, small, slow, a long way from\l"
	.string "anywhere it belongs. On the rock beside\l"
	.string "the pool, in chalk, in a child's hand:\l"
	.string "FIRST ONE, and this Midwinter's date,\l"
	.string "with one letter the wrong way round.\p"
	.string "Somebody has drawn a circle round the\n"
	.string "whole thing, pool and all, to keep it.$"

ParcelDelibirdCliffs_FindFirstone_Text_1:
# 582 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "A tide pool with a chalk circle round it.\n"
	.string "FIRST ONE, and a date. The TENTACOOL\l"
	.string "has gone back out, or down. The chalk is\l"
	.string "staying.$"

ParcelDelibirdCliffs_Board1_Text_0:
# 590 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "A SURVEY BOARD on the cliff path.\n"
	.string "SHORELINE CLIFFS. The ledges hold the\l"
	.string "colony and the SNEASEL rob it, as they\l"
	.string "have since the record began. The board\l"
	.string "gives the nest count and the raid\l"
	.string "count. Both fall.\p"
	.string "When the robber and the robbed fall\n"
	.string "together, the Survey writes, the cause\l"
	.string "is not the robber.$"

ParcelDelibirdCliffs_Board2_Text_0:
# 595 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "A SURVEY BOARD at the bench. STARYU\n"
	.string "below, in the cold current, lit when the\l"
	.string "water is clean. The board's instruction\l"
	.string "is one line: sit until dark and count the\l"
	.string "lights.\p"
	.string "The second line is newer. If there are\n"
	.string "none, write none. None is a reading.$"

ParcelDelibirdCliffs_PairLedge_Text_0:
# 604 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "BIRDER: Two hundred and nine. Up three.$"

ParcelDelibirdCliffs_PairLedge_Text_1:
# 605 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "WOMAN: Three.$"

ParcelDelibirdCliffs_PairLedge_Text_2:
# 606 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "BIRDER: I know. I wrote it in pencil.\n"
	.string "Three is a pencil number. Ten is ink.$"

ParcelDelibirdCliffs_PairLedge_Text_3:
# 608 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "WOMAN: The ranger sat on the bench till\n"
	.string "dark and counted the lights in the\l"
	.string "water.$"

ParcelDelibirdCliffs_PairLedge_Text_4:
# 609 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "BIRDER: STARYU. I've never counted\n"
	.string "them. I count up, not down.$"

ParcelDelibirdCliffs_PairLedge_Text_5:
# 610 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "WOMAN: Maybe that's why the island's\n"
	.string "two counts short.$"

ParcelDelibirdCliffs_PairLedge_Text_6:
# 611 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "BIRDER: Maybe. Hand me the glass.$"

ParcelDelibirdCliffs_PairLedge_Text_7:
# 613 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "BIRDER: Two hundred nests on the\n"
	.string "ledges. Two hundred and six.$"

ParcelDelibirdCliffs_PairLedge_Text_8:
# 614 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "WOMAN: You count every year and every\n"
	.string "year it's less.$"

ParcelDelibirdCliffs_PairLedge_Text_9:
# 615 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "BIRDER: It's less by less this year.$"

ParcelDelibirdCliffs_PairLedge_Text_10:
# 616 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "WOMAN: Is that good?$"

ParcelDelibirdCliffs_PairLedge_Text_11:
# 617 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "BIRDER: It's the shape of the number.\n"
	.string "I'll take the shape.$"

ParcelDelibirdCliffs_Board3_Text_0:
# 626 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "A SURVEY BOARD on the path above the\n"
	.string "pools. CORSOLA in the warm pools, new;\l"
	.string "KRABBY in the cold ones, fewer. The\l"
	.string "children chalk the pools' names on the\l"
	.string "rock and the Survey copies the chalk\l"
	.string "onto the board before the rain takes\l"
	.string "it.\p"
	.string "The children are the Survey's best field\n"
	.string "team on this island, and know it.$"
