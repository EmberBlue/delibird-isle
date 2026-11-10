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
	goto_if_set FLAG_SKALD_Q_FIRSTONE, ParcelDelibirdCliffs_Einar_5
ParcelDelibirdCliffs_Einar_4:
# 85 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_FIRSTONE_DONE, ParcelDelibirdCliffs_Einar_3
# 91 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdCliffs_Einar_9
# 96 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelDelibirdCliffs_Einar_16
# 101 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_5, MSGBOX_DEFAULT
# 102 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Einar_2:
# 76 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FIRSTONE_FOUND, ParcelDelibirdCliffs_Einar_12
# 81 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_1, MSGBOX_DEFAULT
ParcelDelibirdCliffs_Einar_11:
# 83 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Einar_3:
# 86 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_2, MSGBOX_DEFAULT
# 87 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	setflag FLAG_SKALD_Q_FIRSTONE
# 88 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Einar_5:
# 75 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_FIRSTONE_DONE, ParcelDelibirdCliffs_Einar_2
	goto ParcelDelibirdCliffs_Einar_4

ParcelDelibirdCliffs_Einar_9:
# 92 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_3, MSGBOX_DEFAULT
# 93 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Einar_12:
# 77 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_0, MSGBOX_DEFAULT
# 78 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	giveitem ITEM_DIVE_BALL, 2
# 79 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	setflag FLAG_SKALD_Q_FIRSTONE_DONE
	goto ParcelDelibirdCliffs_Einar_11

ParcelDelibirdCliffs_Einar_16:
# 97 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_4, MSGBOX_DEFAULT
# 98 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_TrailSign::
# 108 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_TrailSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdCliffs_BeaconSign::
# 113 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_BeaconSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdCliffs_ItemMaxRepel::
# 119 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	finditem ITEM_MAX_REPEL
	end


ParcelDelibirdCliffs_ItemBigPearl::
# 123 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	finditem ITEM_BIG_PEARL
	end


ParcelDelibirdCliffs_ItemUltraBall::
# 127 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	finditem ITEM_ULTRA_BALL
	end


ParcelDelibirdCliffs_T_Solveig::
# 133 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_SOLVEIG, ParcelDelibirdCliffs_T_Solveig_Text_0, ParcelDelibirdCliffs_T_Solveig_Text_1, ParcelDelibirdCliffs_T_Solveig_FirstWin
# 137 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 138 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_3
ParcelDelibirdCliffs_T_Solveig_1:
# 141 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_8
ParcelDelibirdCliffs_T_Solveig_6:
# 144 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_13
ParcelDelibirdCliffs_T_Solveig_11:
# 147 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_18
ParcelDelibirdCliffs_T_Solveig_16:
# 150 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Solveig_2:
# 139 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R2
	goto ParcelDelibirdCliffs_T_Solveig_1

ParcelDelibirdCliffs_T_Solveig_3:
# 138 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R2
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_2
	goto ParcelDelibirdCliffs_T_Solveig_1

ParcelDelibirdCliffs_T_Solveig_7:
# 142 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R3
	goto ParcelDelibirdCliffs_T_Solveig_6

ParcelDelibirdCliffs_T_Solveig_8:
# 141 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R3
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_7
	goto ParcelDelibirdCliffs_T_Solveig_6

ParcelDelibirdCliffs_T_Solveig_12:
# 145 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R4
	goto ParcelDelibirdCliffs_T_Solveig_11

ParcelDelibirdCliffs_T_Solveig_13:
# 144 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R4
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_12
	goto ParcelDelibirdCliffs_T_Solveig_11

ParcelDelibirdCliffs_T_Solveig_17:
# 148 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R5
	goto ParcelDelibirdCliffs_T_Solveig_16

ParcelDelibirdCliffs_T_Solveig_18:
# 147 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R5
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_17
	goto ParcelDelibirdCliffs_T_Solveig_16


ParcelDelibirdCliffs_T_Solveig_FirstWin::
# 154 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_Text_2, MSGBOX_DEFAULT
# 155 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R2::
# 159 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 160 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 161 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_0, MSGBOX_YESNO
# 162 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R2_2
# 167 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R2, ParcelDelibirdCliffs_T_Solveig_R2_Text_2
# 168 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_3, MSGBOX_DEFAULT
# 169 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R2_2:
# 163 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 164 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R3::
# 173 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 174 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 175 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R3_Text_0, MSGBOX_YESNO
# 176 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R3_2
# 181 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R3, ParcelDelibirdCliffs_T_Solveig_R2_Text_2
# 182 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R3_Text_1, MSGBOX_DEFAULT
# 183 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R3_2:
# 177 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 178 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R4::
# 187 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 188 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 189 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R4_Text_0, MSGBOX_YESNO
# 190 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R4_2
# 195 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R4, ParcelDelibirdCliffs_T_Solveig_R4_Text_1
# 196 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R4_Text_2, MSGBOX_DEFAULT
# 197 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R4_2:
# 191 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 192 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R5::
# 201 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 202 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 203 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R5_Text_0, MSGBOX_YESNO
# 204 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R5_2
# 209 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R5, ParcelDelibirdCliffs_T_Solveig_R5_Text_1
# 210 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R5_Text_2, MSGBOX_DEFAULT
# 211 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R5_2:
# 205 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 206 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav::
# 216 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_OLAV, ParcelDelibirdCliffs_T_Olav_Text_0, ParcelDelibirdCliffs_T_Olav_Text_1, ParcelDelibirdCliffs_T_Olav_FirstWin
# 220 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 221 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Olav_3
ParcelDelibirdCliffs_T_Olav_1:
# 224 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Olav_8
ParcelDelibirdCliffs_T_Olav_6:
# 227 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Olav_13
ParcelDelibirdCliffs_T_Olav_11:
# 230 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Olav_18
ParcelDelibirdCliffs_T_Olav_16:
# 233 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Olav_2:
# 222 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R2
	goto ParcelDelibirdCliffs_T_Olav_1

ParcelDelibirdCliffs_T_Olav_3:
# 221 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R2
	goto_if 0, ParcelDelibirdCliffs_T_Olav_2
	goto ParcelDelibirdCliffs_T_Olav_1

ParcelDelibirdCliffs_T_Olav_7:
# 225 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R3
	goto ParcelDelibirdCliffs_T_Olav_6

ParcelDelibirdCliffs_T_Olav_8:
# 224 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R3
	goto_if 0, ParcelDelibirdCliffs_T_Olav_7
	goto ParcelDelibirdCliffs_T_Olav_6

ParcelDelibirdCliffs_T_Olav_12:
# 228 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R4
	goto ParcelDelibirdCliffs_T_Olav_11

ParcelDelibirdCliffs_T_Olav_13:
# 227 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R4
	goto_if 0, ParcelDelibirdCliffs_T_Olav_12
	goto ParcelDelibirdCliffs_T_Olav_11

ParcelDelibirdCliffs_T_Olav_17:
# 231 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R5
	goto ParcelDelibirdCliffs_T_Olav_16

ParcelDelibirdCliffs_T_Olav_18:
# 230 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R5
	goto_if 0, ParcelDelibirdCliffs_T_Olav_17
	goto ParcelDelibirdCliffs_T_Olav_16


ParcelDelibirdCliffs_T_Olav_FirstWin::
# 237 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_Text_2, MSGBOX_DEFAULT
# 238 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R2::
# 242 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 243 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 244 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_0, MSGBOX_YESNO
# 245 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R2_2
# 250 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R2, ParcelDelibirdCliffs_T_Olav_R2_Text_2
# 251 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_3, MSGBOX_DEFAULT
# 252 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R2_2:
# 246 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 247 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R3::
# 256 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 257 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 258 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R3_Text_0, MSGBOX_YESNO
# 259 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R3_2
# 264 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R3, ParcelDelibirdCliffs_T_Olav_R3_Text_1
# 265 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R3_Text_2, MSGBOX_DEFAULT
# 266 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R3_2:
# 260 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 261 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R4::
# 270 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 271 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 272 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R4_Text_0, MSGBOX_YESNO
# 273 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R4_2
# 278 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R4, ParcelDelibirdCliffs_T_Olav_R4_Text_1
# 279 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R4_Text_2, MSGBOX_DEFAULT
# 280 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R4_2:
# 274 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 275 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R5::
# 284 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 285 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 286 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R5_Text_0, MSGBOX_YESNO
# 287 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R5_2
# 292 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R5, ParcelDelibirdCliffs_T_Olav_R5_Text_1
# 293 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R5_Text_2, MSGBOX_DEFAULT
# 294 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R5_2:
# 288 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 289 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir::
# 299 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_GEIR, ParcelDelibirdCliffs_T_Geir_Text_0, ParcelDelibirdCliffs_T_Geir_Text_1, ParcelDelibirdCliffs_T_Geir_FirstWin
# 303 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 304 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Geir_3
ParcelDelibirdCliffs_T_Geir_1:
# 307 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Geir_8
ParcelDelibirdCliffs_T_Geir_6:
# 310 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Geir_13
ParcelDelibirdCliffs_T_Geir_11:
# 313 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Geir_18
ParcelDelibirdCliffs_T_Geir_16:
# 316 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Geir_2:
# 305 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R2
	goto ParcelDelibirdCliffs_T_Geir_1

ParcelDelibirdCliffs_T_Geir_3:
# 304 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R2
	goto_if 0, ParcelDelibirdCliffs_T_Geir_2
	goto ParcelDelibirdCliffs_T_Geir_1

ParcelDelibirdCliffs_T_Geir_7:
# 308 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R3
	goto ParcelDelibirdCliffs_T_Geir_6

ParcelDelibirdCliffs_T_Geir_8:
# 307 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R3
	goto_if 0, ParcelDelibirdCliffs_T_Geir_7
	goto ParcelDelibirdCliffs_T_Geir_6

ParcelDelibirdCliffs_T_Geir_12:
# 311 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R4
	goto ParcelDelibirdCliffs_T_Geir_11

ParcelDelibirdCliffs_T_Geir_13:
# 310 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R4
	goto_if 0, ParcelDelibirdCliffs_T_Geir_12
	goto ParcelDelibirdCliffs_T_Geir_11

ParcelDelibirdCliffs_T_Geir_17:
# 314 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R5
	goto ParcelDelibirdCliffs_T_Geir_16

ParcelDelibirdCliffs_T_Geir_18:
# 313 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R5
	goto_if 0, ParcelDelibirdCliffs_T_Geir_17
	goto ParcelDelibirdCliffs_T_Geir_16


ParcelDelibirdCliffs_T_Geir_FirstWin::
# 320 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_Text_2, MSGBOX_DEFAULT
# 321 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R2::
# 325 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 326 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 327 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_0, MSGBOX_YESNO
# 328 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R2_2
# 333 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R2, ParcelDelibirdCliffs_T_Geir_R2_Text_2
# 334 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_3, MSGBOX_DEFAULT
# 335 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R2_2:
# 329 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 330 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R3::
# 339 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 340 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 341 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R3_Text_0, MSGBOX_YESNO
# 342 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R3_2
# 347 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R3, ParcelDelibirdCliffs_T_Geir_R3_Text_1
# 348 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R3_Text_2, MSGBOX_DEFAULT
# 349 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R3_2:
# 343 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 344 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R4::
# 353 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 354 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 355 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R4_Text_0, MSGBOX_YESNO
# 356 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R4_2
# 361 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R4, ParcelDelibirdCliffs_T_Geir_R4_Text_1
# 362 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R4_Text_2, MSGBOX_DEFAULT
# 363 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R4_2:
# 357 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 358 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R5::
# 367 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 368 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 369 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R5_Text_0, MSGBOX_YESNO
# 370 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R5_2
# 375 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R5, ParcelDelibirdCliffs_T_Geir_R2_Text_2
# 376 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R5_Text_1, MSGBOX_DEFAULT
# 377 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R5_2:
# 371 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 372 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle::
# 382 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_PELLE, ParcelDelibirdCliffs_T_Pelle_Text_0, ParcelDelibirdCliffs_T_Pelle_Text_1, ParcelDelibirdCliffs_T_Pelle_FirstWin
# 386 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 387 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_3
ParcelDelibirdCliffs_T_Pelle_1:
# 390 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_8
ParcelDelibirdCliffs_T_Pelle_6:
# 393 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_13
ParcelDelibirdCliffs_T_Pelle_11:
# 396 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_18
ParcelDelibirdCliffs_T_Pelle_16:
# 399 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Pelle_2:
# 388 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R2
	goto ParcelDelibirdCliffs_T_Pelle_1

ParcelDelibirdCliffs_T_Pelle_3:
# 387 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R2
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_2
	goto ParcelDelibirdCliffs_T_Pelle_1

ParcelDelibirdCliffs_T_Pelle_7:
# 391 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R3
	goto ParcelDelibirdCliffs_T_Pelle_6

ParcelDelibirdCliffs_T_Pelle_8:
# 390 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R3
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_7
	goto ParcelDelibirdCliffs_T_Pelle_6

ParcelDelibirdCliffs_T_Pelle_12:
# 394 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R4
	goto ParcelDelibirdCliffs_T_Pelle_11

ParcelDelibirdCliffs_T_Pelle_13:
# 393 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R4
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_12
	goto ParcelDelibirdCliffs_T_Pelle_11

ParcelDelibirdCliffs_T_Pelle_17:
# 397 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R5
	goto ParcelDelibirdCliffs_T_Pelle_16

ParcelDelibirdCliffs_T_Pelle_18:
# 396 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R5
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_17
	goto ParcelDelibirdCliffs_T_Pelle_16


ParcelDelibirdCliffs_T_Pelle_FirstWin::
# 403 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_Text_2, MSGBOX_DEFAULT
# 404 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R2::
# 408 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 409 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 410 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_0, MSGBOX_YESNO
# 411 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R2_2
# 416 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R2, ParcelDelibirdCliffs_T_Pelle_R2_Text_2
# 417 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_3, MSGBOX_DEFAULT
# 418 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R2_2:
# 412 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 413 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R3::
# 422 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 423 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 424 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R3_Text_0, MSGBOX_YESNO
# 425 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R3_2
# 430 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R3, ParcelDelibirdCliffs_T_Pelle_R3_Text_1
# 431 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R3_Text_2, MSGBOX_DEFAULT
# 432 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R3_2:
# 426 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 427 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R4::
# 436 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 437 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 438 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R4_Text_0, MSGBOX_YESNO
# 439 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R4_2
# 444 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R4, ParcelDelibirdCliffs_T_Pelle_R2_Text_2
# 445 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R4_Text_1, MSGBOX_DEFAULT
# 446 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R4_2:
# 440 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 441 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R5::
# 450 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 451 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 452 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R5_Text_0, MSGBOX_YESNO
# 453 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R5_2
# 458 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R5, ParcelDelibirdCliffs_T_Pelle_R5_Text_1
# 459 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R5_Text_2, MSGBOX_DEFAULT
# 460 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R5_2:
# 454 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 455 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid::
# 465 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_ASTRID, ParcelDelibirdCliffs_T_Astrid_Text_0, ParcelDelibirdCliffs_T_Astrid_Text_1, ParcelDelibirdCliffs_T_Astrid_FirstWin
# 469 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 470 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_3
ParcelDelibirdCliffs_T_Astrid_1:
# 473 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_8
ParcelDelibirdCliffs_T_Astrid_6:
# 476 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_13
ParcelDelibirdCliffs_T_Astrid_11:
# 479 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_18
ParcelDelibirdCliffs_T_Astrid_16:
# 482 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Astrid_2:
# 471 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R2
	goto ParcelDelibirdCliffs_T_Astrid_1

ParcelDelibirdCliffs_T_Astrid_3:
# 470 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R2
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_2
	goto ParcelDelibirdCliffs_T_Astrid_1

ParcelDelibirdCliffs_T_Astrid_7:
# 474 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R3
	goto ParcelDelibirdCliffs_T_Astrid_6

ParcelDelibirdCliffs_T_Astrid_8:
# 473 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R3
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_7
	goto ParcelDelibirdCliffs_T_Astrid_6

ParcelDelibirdCliffs_T_Astrid_12:
# 477 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R4
	goto ParcelDelibirdCliffs_T_Astrid_11

ParcelDelibirdCliffs_T_Astrid_13:
# 476 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R4
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_12
	goto ParcelDelibirdCliffs_T_Astrid_11

ParcelDelibirdCliffs_T_Astrid_17:
# 480 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R5
	goto ParcelDelibirdCliffs_T_Astrid_16

ParcelDelibirdCliffs_T_Astrid_18:
# 479 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R5
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_17
	goto ParcelDelibirdCliffs_T_Astrid_16


ParcelDelibirdCliffs_T_Astrid_FirstWin::
# 486 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_Text_2, MSGBOX_DEFAULT
# 487 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R2::
# 491 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 492 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 493 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_0, MSGBOX_YESNO
# 494 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R2_2
# 499 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R2, ParcelDelibirdCliffs_T_Astrid_R2_Text_2
# 500 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_3, MSGBOX_DEFAULT
# 501 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R2_2:
# 495 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 496 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R3::
# 505 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 506 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 507 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R3_Text_0, MSGBOX_YESNO
# 508 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R3_2
# 513 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R3, ParcelDelibirdCliffs_T_Astrid_R3_Text_1
# 514 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R3_Text_2, MSGBOX_DEFAULT
# 515 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R3_2:
# 509 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 510 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R4::
# 519 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 520 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 521 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R4_Text_0, MSGBOX_YESNO
# 522 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R4_2
# 527 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R4, ParcelDelibirdCliffs_T_Astrid_R4_Text_1
# 528 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R4_Text_2, MSGBOX_DEFAULT
# 529 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R4_2:
# 523 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 524 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R5::
# 533 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 534 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 535 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R5_Text_0, MSGBOX_YESNO
# 536 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R5_2
# 541 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R5, ParcelDelibirdCliffs_T_Astrid_R5_Text_1
# 542 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R5_Text_2, MSGBOX_DEFAULT
# 543 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R5_2:
# 537 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 538 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_PairBeach::
# 550 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 551 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdCliffs_PairBeach_2
# 555 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibirdCliffs_PairBeach_3
# 561 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_7, MSGBOX_DEFAULT
# 562 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_8, MSGBOX_DEFAULT
# 563 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_9, MSGBOX_DEFAULT
# 564 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_10, MSGBOX_DEFAULT
ParcelDelibirdCliffs_PairBeach_1:
# 566 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_PairBeach_2:
# 552 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_0, MSGBOX_DEFAULT
# 553 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_1, MSGBOX_DEFAULT
# 554 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_2, MSGBOX_DEFAULT
	goto ParcelDelibirdCliffs_PairBeach_1

ParcelDelibirdCliffs_PairBeach_3:
# 556 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_3, MSGBOX_DEFAULT
# 557 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_4, MSGBOX_DEFAULT
# 558 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_5, MSGBOX_DEFAULT
# 559 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_PairBeach_Text_6, MSGBOX_DEFAULT
	goto ParcelDelibirdCliffs_PairBeach_1


ParcelDelibirdCliffs_FindFirstone::
# 573 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FIRSTONE, ParcelDelibirdCliffs_FindFirstone_4
ParcelDelibirdCliffs_FindFirstone_3:
# 577 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_FindFirstone_Text_1, MSGBOX_SIGN
ParcelDelibirdCliffs_FindFirstone_1:
	end

ParcelDelibirdCliffs_FindFirstone_2:
# 574 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_FindFirstone_Text_0, MSGBOX_SIGN
# 575 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	setflag FLAG_SKALD_Q_FIRSTONE_FOUND
	goto ParcelDelibirdCliffs_FindFirstone_1

ParcelDelibirdCliffs_FindFirstone_4:
# 573 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_FIRSTONE_FOUND, ParcelDelibirdCliffs_FindFirstone_2
	goto ParcelDelibirdCliffs_FindFirstone_3


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
# 77 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "EINAR: Midwinter, this year, in chalk, in\n"
	.string "a hand with a backwards letter. It's on\l"
	.string "the list, then. Dated.\p"
	.string "Forty-one years and the list has\n"
	.string "started writing itself faster than I\l"
	.string "can. Here. From the point, from when the\l"
	.string "water was cold.$"

ParcelDelibirdCliffs_Einar_Text_1:
# 81 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "EINAR: The beach pools below. The\n"
	.string "children's chalk. The date.$"

ParcelDelibirdCliffs_Einar_Text_2:
# 86 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "EINAR: Forty years of the list and\n"
	.string "CORSOLA's on it. The next thing on it, by\l"
	.string "my reckoning, will be a TENTACOOL in the\l"
	.string "beach pools. The children say there's\l"
	.string "one already.\p"
	.string "Go down and look. If there is, read me\n"
	.string "the date off whatever they've written\l"
	.string "beside it. Children date things.$"

ParcelDelibirdCliffs_Einar_Text_3:
# 92 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Einar: Your paper has my list in it.\n"
	.string "Forty years of a shore, in a footnote.\p"
	.string "I'll take a footnote. Footnotes are\n"
	.string "where the truth gets kept while the\l"
	.string "main text is still arguing.$"

ParcelDelibirdCliffs_Einar_Text_4:
# 97 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Einar: The coast counted its catch out\n"
	.string "loud, I hear. All one age. I've been\l"
	.string "saying it about the gulls for ten years.\p"
	.string "Nobody counts the gulls. The gulls are\n"
	.string "fine. The gulls are always fine, until\l"
	.string "the list says otherwise.$"

ParcelDelibirdCliffs_Einar_Text_5:
# 101 "data/maps/ParcelDelibirdCliffs/scripts.pory"
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
# 108 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SHORELINE CLIFFS\p"
	.string "The beach is by the stairs at either\n"
	.string "end. Tomas's cabin is below the east\l"
	.string "stairs. The point beacon is past the\l"
	.string "rocks.\p"
	.string "Mind the edge. It is not where the map\n"
	.string "says.$"

ParcelDelibirdCliffs_BeaconSign_Text_0:
# 113 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "THE POINT BEACON\p"
	.string "Kept by the Reikvold family, four\n"
	.string "generations. Fire, then oil, then the\l"
	.string "bulb.\p"
	.string "Smaller, newer, bolted on: LIGHTING\n"
	.string "UPGRADE FUNDED BY THE MEREHOLT\l"
	.string "FOUNDATION.$"

ParcelDelibirdCliffs_T_Solveig_Text_0:
# 134 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: A picnic on the cliffs at\n"
	.string "Midwinter! Gran would have called me\l"
	.string "mad. Gran never had a Midwinter you\l"
	.string "could sit out in.\p"
	.string "Battle while the tea brews?$"

ParcelDelibirdCliffs_T_Solveig_Text_1:
# 135 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Tea's ready anyway.$"

ParcelDelibirdCliffs_T_Solveig_Text_2:
# 150 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: It's lovely. That's the awful\n"
	.string "part.\p"
	.string "It's genuinely lovely up here now.$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_0:
# 161 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_1:
# 163 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Suit yourself. I'm here.$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_2:
# 167 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: …Fair.$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_3:
# 168 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelDelibirdCliffs_T_Solveig_R3_Text_0:
# 175 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelDelibirdCliffs_T_Solveig_R3_Text_1:
# 182 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Solveig_R4_Text_0:
# 189 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdCliffs_T_Solveig_R4_Text_1:
# 195 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Right. That's the whole of it.$"

ParcelDelibirdCliffs_T_Solveig_R4_Text_2:
# 196 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdCliffs_T_Solveig_R5_Text_0:
# 203 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibirdCliffs_T_Solveig_R5_Text_1:
# 209 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: …Again, then. Later.$"

ParcelDelibirdCliffs_T_Solveig_R5_Text_2:
# 210 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibirdCliffs_T_Olav_Text_0:
# 217 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Hold still. WINGULL count. Three\n"
	.string "hundred and -- never mind, you've put\l"
	.string "them up.\p"
	.string "Battle, since you've cost me the number.$"

ParcelDelibirdCliffs_T_Olav_Text_1:
# 218 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Fair's fair.$"

ParcelDelibirdCliffs_T_Olav_Text_2:
# 233 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: The gulls are fine. The gulls are\n"
	.string "always fine.\p"
	.string "It's the ones you don't see any more\n"
	.string "that tell you anything.$"

ParcelDelibirdCliffs_T_Olav_R2_Text_0:
# 244 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: I kept the team up for this.\n"
	.string "Again?$"

ParcelDelibirdCliffs_T_Olav_R2_Text_1:
# 246 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: No hurry. The water keeps.$"

ParcelDelibirdCliffs_T_Olav_R2_Text_2:
# 250 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: …Again, then. Later.$"

ParcelDelibirdCliffs_T_Olav_R2_Text_3:
# 251 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibirdCliffs_T_Olav_R3_Text_0:
# 258 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelDelibirdCliffs_T_Olav_R3_Text_1:
# 264 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: That's the one I wanted to see.$"

ParcelDelibirdCliffs_T_Olav_R3_Text_2:
# 265 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Olav_R4_Text_0:
# 272 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelDelibirdCliffs_T_Olav_R4_Text_1:
# 278 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: …Fair.$"

ParcelDelibirdCliffs_T_Olav_R4_Text_2:
# 279 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdCliffs_T_Olav_R5_Text_0:
# 286 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdCliffs_T_Olav_R5_Text_1:
# 292 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Noted. Properly, this time.$"

ParcelDelibirdCliffs_T_Olav_R5_Text_2:
# 293 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelDelibirdCliffs_T_Geir_Text_0:
# 300 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: CORSOLA on the line. In this\n"
	.string "water. My father fished this tide line\l"
	.string "fifty years and never saw one north of\l"
	.string "the Coast.\p"
	.string "Battle while I think about that.$"

ParcelDelibirdCliffs_T_Geir_Text_1:
# 301 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Hm. Caught, properly.$"

ParcelDelibirdCliffs_T_Geir_Text_2:
# 316 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: New fish in the pots and the old\n"
	.string "ones gone north. Same work, different\l"
	.string "names.\p"
	.string "I'd rather the old names.$"

ParcelDelibirdCliffs_T_Geir_R2_Text_0:
# 327 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelDelibirdCliffs_T_Geir_R2_Text_1:
# 329 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Fine. Same spot.$"

ParcelDelibirdCliffs_T_Geir_R2_Text_2:
# 333 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: That's the one I wanted to see.$"

ParcelDelibirdCliffs_T_Geir_R2_Text_3:
# 334 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibirdCliffs_T_Geir_R3_Text_0:
# 341 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdCliffs_T_Geir_R3_Text_1:
# 347 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Noted. Properly, this time.$"

ParcelDelibirdCliffs_T_Geir_R3_Text_2:
# 348 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Geir_R4_Text_0:
# 355 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelDelibirdCliffs_T_Geir_R4_Text_1:
# 361 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: …Fair.$"

ParcelDelibirdCliffs_T_Geir_R4_Text_2:
# 362 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelDelibirdCliffs_T_Geir_R5_Text_0:
# 369 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelDelibirdCliffs_T_Geir_R5_Text_1:
# 376 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelDelibirdCliffs_T_Pelle_Text_0:
# 383 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: I'm swimming at MIDWINTER! Dad\n"
	.string "says when he was little the sea had ice\l"
	.string "on it here. Ice!\p"
	.string "Battle me, I'm warm enough!$"

ParcelDelibirdCliffs_T_Pelle_Text_1:
# 384 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Brrr. Lost.$"

ParcelDelibirdCliffs_T_Pelle_Text_2:
# 399 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Dad doesn't swim. He stands at\n"
	.string "the edge and looks at the water like it\l"
	.string "owes him something.$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_0:
# 410 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_1:
# 412 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Fine. Same spot.$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_2:
# 416 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: That's the one I wanted to see.$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_3:
# 417 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelDelibirdCliffs_T_Pelle_R3_Text_0:
# 424 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdCliffs_T_Pelle_R3_Text_1:
# 430 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: …Again, then. Later.$"

ParcelDelibirdCliffs_T_Pelle_R3_Text_2:
# 431 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Pelle_R4_Text_0:
# 438 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdCliffs_T_Pelle_R4_Text_1:
# 445 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdCliffs_T_Pelle_R5_Text_0:
# 452 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibirdCliffs_T_Pelle_R5_Text_1:
# 458 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: …Fair.$"

ParcelDelibirdCliffs_T_Pelle_R5_Text_2:
# 459 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibirdCliffs_T_Astrid_Text_0:
# 466 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Out here the water's the same\n"
	.string "every year. It's the land that changes.\p"
	.string "You've got a board under you, you've got\n"
	.string "a battle.$"

ParcelDelibirdCliffs_T_Astrid_Text_1:
# 467 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Good current on you.$"

ParcelDelibirdCliffs_T_Astrid_Text_2:
# 482 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: I used to have to watch for ice\n"
	.string "floes off the point. Now I watch for the\l"
	.string "tour boats.\p"
	.string "I'd take the floes back.$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_0:
# 493 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_1:
# 495 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Fine. Same spot.$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_2:
# 499 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Still yours.$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_3:
# 500 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelDelibirdCliffs_T_Astrid_R3_Text_0:
# 507 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelDelibirdCliffs_T_Astrid_R3_Text_1:
# 513 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: …Fair.$"

ParcelDelibirdCliffs_T_Astrid_R3_Text_2:
# 514 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Astrid_R4_Text_0:
# 521 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelDelibirdCliffs_T_Astrid_R4_Text_1:
# 527 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Right. That's the whole of it.$"

ParcelDelibirdCliffs_T_Astrid_R4_Text_2:
# 528 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelDelibirdCliffs_T_Astrid_R5_Text_0:
# 535 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelDelibirdCliffs_T_Astrid_R5_Text_1:
# 541 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Noted. Properly, this time.$"

ParcelDelibirdCliffs_T_Astrid_R5_Text_2:
# 542 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelDelibirdCliffs_PairBeach_Text_0:
# 552 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "MOTHER: EINAR's put the date on the\n"
	.string "CORSOLA. Then he put the date the first\l"
	.string "TENTACOOL came, under it. He says the\l"
	.string "list is a clock now.$"

ParcelDelibirdCliffs_PairBeach_Text_1:
# 553 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GIRL: What time is it?$"

ParcelDelibirdCliffs_PairBeach_Text_2:
# 554 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "MOTHER: Later than it was. Go and swim.\n"
	.string "It really is warm.$"

ParcelDelibirdCliffs_PairBeach_Text_3:
# 556 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GIRL: The ranger wrote down the\n"
	.string "CORSOLA. EINAR showed them the list.$"

ParcelDelibirdCliffs_PairBeach_Text_4:
# 557 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "MOTHER: Forty years on the list and\n"
	.string "never seen till now.$"

ParcelDelibirdCliffs_PairBeach_Text_5:
# 558 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GIRL: That's good, isn't it? It's on the\n"
	.string "list!$"

ParcelDelibirdCliffs_PairBeach_Text_6:
# 559 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "MOTHER: It's on the list the way a storm\n"
	.string "is on the forecast, love. Being right\l"
	.string "about it is not the same as wanting it.$"

ParcelDelibirdCliffs_PairBeach_Text_7:
# 561 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GIRL: The water's warm enough to swim!\n"
	.string "At Midwinter!$"

ParcelDelibirdCliffs_PairBeach_Text_8:
# 562 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "MOTHER: Yes.$"

ParcelDelibirdCliffs_PairBeach_Text_9:
# 563 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GIRL: Why aren't you happy?$"

ParcelDelibirdCliffs_PairBeach_Text_10:
# 564 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "MOTHER: I'm happy for you. Go and swim.\n"
	.string "I'll be the one on the beach not being\l"
	.string "happy, and you can ask me about it when\l"
	.string "you're older.$"

ParcelDelibirdCliffs_FindFirstone_Text_0:
# 574 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "A tide pool on the warm beach. In it, a\n"
	.string "TENTACOOL, small, slow, a long way from\l"
	.string "anywhere it belongs. On the rock beside\l"
	.string "the pool, in chalk, in a child's hand:\l"
	.string "FIRST ONE, and this Midwinter's date,\l"
	.string "with one letter the wrong way round.\p"
	.string "Somebody has drawn a circle round the\n"
	.string "whole thing, pool and all, to keep it.$"

ParcelDelibirdCliffs_FindFirstone_Text_1:
# 577 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "A tide pool with a chalk circle round it.\n"
	.string "FIRST ONE, and a date. The TENTACOOL\l"
	.string "has gone back out, or down. The chalk is\l"
	.string "staying.$"
