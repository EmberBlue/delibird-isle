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
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelDelibirdCliffs_Einar_5
# 85 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_2, MSGBOX_DEFAULT
# 86 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Einar_2:
# 76 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_0, MSGBOX_DEFAULT
# 77 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_Einar_5:
# 81 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_Einar_Text_1, MSGBOX_DEFAULT
# 82 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_TrailSign::
# 92 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_TrailSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdCliffs_BeaconSign::
# 97 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_BeaconSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdCliffs_ItemMaxRepel::
# 103 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	finditem ITEM_MAX_REPEL
	end


ParcelDelibirdCliffs_ItemBigPearl::
# 107 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	finditem ITEM_BIG_PEARL
	end


ParcelDelibirdCliffs_ItemUltraBall::
# 111 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	finditem ITEM_ULTRA_BALL
	end


ParcelDelibirdCliffs_T_Solveig::
# 117 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_SOLVEIG, ParcelDelibirdCliffs_T_Solveig_Text_0, ParcelDelibirdCliffs_T_Solveig_Text_1, ParcelDelibirdCliffs_T_Solveig_FirstWin
# 121 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 122 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_3
ParcelDelibirdCliffs_T_Solveig_1:
# 125 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_8
ParcelDelibirdCliffs_T_Solveig_6:
# 128 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_13
ParcelDelibirdCliffs_T_Solveig_11:
# 131 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Solveig_18
ParcelDelibirdCliffs_T_Solveig_16:
# 134 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Solveig_2:
# 123 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R2
	goto ParcelDelibirdCliffs_T_Solveig_1

ParcelDelibirdCliffs_T_Solveig_3:
# 122 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R2
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_2
	goto ParcelDelibirdCliffs_T_Solveig_1

ParcelDelibirdCliffs_T_Solveig_7:
# 126 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R3
	goto ParcelDelibirdCliffs_T_Solveig_6

ParcelDelibirdCliffs_T_Solveig_8:
# 125 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R3
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_7
	goto ParcelDelibirdCliffs_T_Solveig_6

ParcelDelibirdCliffs_T_Solveig_12:
# 129 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R4
	goto ParcelDelibirdCliffs_T_Solveig_11

ParcelDelibirdCliffs_T_Solveig_13:
# 128 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R4
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_12
	goto ParcelDelibirdCliffs_T_Solveig_11

ParcelDelibirdCliffs_T_Solveig_17:
# 132 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Solveig_R5
	goto ParcelDelibirdCliffs_T_Solveig_16

ParcelDelibirdCliffs_T_Solveig_18:
# 131 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_SOLVEIG_R5
	goto_if 0, ParcelDelibirdCliffs_T_Solveig_17
	goto ParcelDelibirdCliffs_T_Solveig_16


ParcelDelibirdCliffs_T_Solveig_FirstWin::
# 138 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_Text_2, MSGBOX_DEFAULT
# 139 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R2::
# 143 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 144 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 145 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_0, MSGBOX_YESNO
# 146 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R2_2
# 151 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R2, ParcelDelibirdCliffs_T_Solveig_R2_Text_2
# 152 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_3, MSGBOX_DEFAULT
# 153 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R2_2:
# 147 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 148 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R3::
# 157 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 158 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 159 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R3_Text_0, MSGBOX_YESNO
# 160 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R3_2
# 165 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R3, ParcelDelibirdCliffs_T_Solveig_R2_Text_2
# 166 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R3_Text_1, MSGBOX_DEFAULT
# 167 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R3_2:
# 161 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 162 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R4::
# 171 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 172 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 173 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R4_Text_0, MSGBOX_YESNO
# 174 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R4_2
# 179 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R4, ParcelDelibirdCliffs_T_Solveig_R4_Text_1
# 180 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R4_Text_2, MSGBOX_DEFAULT
# 181 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R4_2:
# 175 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 176 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Solveig_R5::
# 185 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 186 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 187 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R5_Text_0, MSGBOX_YESNO
# 188 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Solveig_R5_2
# 193 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_SOLVEIG_R5, ParcelDelibirdCliffs_T_Solveig_R5_Text_1
# 194 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R5_Text_2, MSGBOX_DEFAULT
# 195 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Solveig_R5_2:
# 189 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 190 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav::
# 200 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_OLAV, ParcelDelibirdCliffs_T_Olav_Text_0, ParcelDelibirdCliffs_T_Olav_Text_1, ParcelDelibirdCliffs_T_Olav_FirstWin
# 204 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 205 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Olav_3
ParcelDelibirdCliffs_T_Olav_1:
# 208 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Olav_8
ParcelDelibirdCliffs_T_Olav_6:
# 211 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Olav_13
ParcelDelibirdCliffs_T_Olav_11:
# 214 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Olav_18
ParcelDelibirdCliffs_T_Olav_16:
# 217 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Olav_2:
# 206 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R2
	goto ParcelDelibirdCliffs_T_Olav_1

ParcelDelibirdCliffs_T_Olav_3:
# 205 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R2
	goto_if 0, ParcelDelibirdCliffs_T_Olav_2
	goto ParcelDelibirdCliffs_T_Olav_1

ParcelDelibirdCliffs_T_Olav_7:
# 209 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R3
	goto ParcelDelibirdCliffs_T_Olav_6

ParcelDelibirdCliffs_T_Olav_8:
# 208 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R3
	goto_if 0, ParcelDelibirdCliffs_T_Olav_7
	goto ParcelDelibirdCliffs_T_Olav_6

ParcelDelibirdCliffs_T_Olav_12:
# 212 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R4
	goto ParcelDelibirdCliffs_T_Olav_11

ParcelDelibirdCliffs_T_Olav_13:
# 211 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R4
	goto_if 0, ParcelDelibirdCliffs_T_Olav_12
	goto ParcelDelibirdCliffs_T_Olav_11

ParcelDelibirdCliffs_T_Olav_17:
# 215 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Olav_R5
	goto ParcelDelibirdCliffs_T_Olav_16

ParcelDelibirdCliffs_T_Olav_18:
# 214 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_OLAV_R5
	goto_if 0, ParcelDelibirdCliffs_T_Olav_17
	goto ParcelDelibirdCliffs_T_Olav_16


ParcelDelibirdCliffs_T_Olav_FirstWin::
# 221 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_Text_2, MSGBOX_DEFAULT
# 222 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R2::
# 226 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 227 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 228 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_0, MSGBOX_YESNO
# 229 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R2_2
# 234 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R2, ParcelDelibirdCliffs_T_Olav_R2_Text_2
# 235 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_3, MSGBOX_DEFAULT
# 236 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R2_2:
# 230 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 231 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R3::
# 240 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 241 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 242 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R3_Text_0, MSGBOX_YESNO
# 243 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R3_2
# 248 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R3, ParcelDelibirdCliffs_T_Olav_R3_Text_1
# 249 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R3_Text_2, MSGBOX_DEFAULT
# 250 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R3_2:
# 244 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 245 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R4::
# 254 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 255 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 256 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R4_Text_0, MSGBOX_YESNO
# 257 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R4_2
# 262 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R4, ParcelDelibirdCliffs_T_Olav_R4_Text_1
# 263 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R4_Text_2, MSGBOX_DEFAULT
# 264 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R4_2:
# 258 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 259 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Olav_R5::
# 268 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 269 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 270 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R5_Text_0, MSGBOX_YESNO
# 271 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Olav_R5_2
# 276 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_OLAV_R5, ParcelDelibirdCliffs_T_Olav_R5_Text_1
# 277 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R5_Text_2, MSGBOX_DEFAULT
# 278 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Olav_R5_2:
# 272 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Olav_R2_Text_1, MSGBOX_DEFAULT
# 273 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir::
# 283 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_GEIR, ParcelDelibirdCliffs_T_Geir_Text_0, ParcelDelibirdCliffs_T_Geir_Text_1, ParcelDelibirdCliffs_T_Geir_FirstWin
# 287 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 288 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Geir_3
ParcelDelibirdCliffs_T_Geir_1:
# 291 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Geir_8
ParcelDelibirdCliffs_T_Geir_6:
# 294 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Geir_13
ParcelDelibirdCliffs_T_Geir_11:
# 297 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Geir_18
ParcelDelibirdCliffs_T_Geir_16:
# 300 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Geir_2:
# 289 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R2
	goto ParcelDelibirdCliffs_T_Geir_1

ParcelDelibirdCliffs_T_Geir_3:
# 288 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R2
	goto_if 0, ParcelDelibirdCliffs_T_Geir_2
	goto ParcelDelibirdCliffs_T_Geir_1

ParcelDelibirdCliffs_T_Geir_7:
# 292 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R3
	goto ParcelDelibirdCliffs_T_Geir_6

ParcelDelibirdCliffs_T_Geir_8:
# 291 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R3
	goto_if 0, ParcelDelibirdCliffs_T_Geir_7
	goto ParcelDelibirdCliffs_T_Geir_6

ParcelDelibirdCliffs_T_Geir_12:
# 295 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R4
	goto ParcelDelibirdCliffs_T_Geir_11

ParcelDelibirdCliffs_T_Geir_13:
# 294 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R4
	goto_if 0, ParcelDelibirdCliffs_T_Geir_12
	goto ParcelDelibirdCliffs_T_Geir_11

ParcelDelibirdCliffs_T_Geir_17:
# 298 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Geir_R5
	goto ParcelDelibirdCliffs_T_Geir_16

ParcelDelibirdCliffs_T_Geir_18:
# 297 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_GEIR_R5
	goto_if 0, ParcelDelibirdCliffs_T_Geir_17
	goto ParcelDelibirdCliffs_T_Geir_16


ParcelDelibirdCliffs_T_Geir_FirstWin::
# 304 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_Text_2, MSGBOX_DEFAULT
# 305 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R2::
# 309 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 310 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 311 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_0, MSGBOX_YESNO
# 312 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R2_2
# 317 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R2, ParcelDelibirdCliffs_T_Geir_R2_Text_2
# 318 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_3, MSGBOX_DEFAULT
# 319 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R2_2:
# 313 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 314 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R3::
# 323 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 324 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 325 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R3_Text_0, MSGBOX_YESNO
# 326 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R3_2
# 331 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R3, ParcelDelibirdCliffs_T_Geir_R3_Text_1
# 332 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R3_Text_2, MSGBOX_DEFAULT
# 333 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R3_2:
# 327 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 328 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R4::
# 337 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 338 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 339 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R4_Text_0, MSGBOX_YESNO
# 340 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R4_2
# 345 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R4, ParcelDelibirdCliffs_T_Geir_R4_Text_1
# 346 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R4_Text_2, MSGBOX_DEFAULT
# 347 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R4_2:
# 341 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 342 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Geir_R5::
# 351 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 352 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 353 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R5_Text_0, MSGBOX_YESNO
# 354 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Geir_R5_2
# 359 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_GEIR_R5, ParcelDelibirdCliffs_T_Geir_R2_Text_2
# 360 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R5_Text_1, MSGBOX_DEFAULT
# 361 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Geir_R5_2:
# 355 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Geir_R2_Text_1, MSGBOX_DEFAULT
# 356 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle::
# 366 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_PELLE, ParcelDelibirdCliffs_T_Pelle_Text_0, ParcelDelibirdCliffs_T_Pelle_Text_1, ParcelDelibirdCliffs_T_Pelle_FirstWin
# 370 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 371 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_3
ParcelDelibirdCliffs_T_Pelle_1:
# 374 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_8
ParcelDelibirdCliffs_T_Pelle_6:
# 377 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_13
ParcelDelibirdCliffs_T_Pelle_11:
# 380 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Pelle_18
ParcelDelibirdCliffs_T_Pelle_16:
# 383 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Pelle_2:
# 372 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R2
	goto ParcelDelibirdCliffs_T_Pelle_1

ParcelDelibirdCliffs_T_Pelle_3:
# 371 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R2
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_2
	goto ParcelDelibirdCliffs_T_Pelle_1

ParcelDelibirdCliffs_T_Pelle_7:
# 375 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R3
	goto ParcelDelibirdCliffs_T_Pelle_6

ParcelDelibirdCliffs_T_Pelle_8:
# 374 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R3
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_7
	goto ParcelDelibirdCliffs_T_Pelle_6

ParcelDelibirdCliffs_T_Pelle_12:
# 378 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R4
	goto ParcelDelibirdCliffs_T_Pelle_11

ParcelDelibirdCliffs_T_Pelle_13:
# 377 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R4
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_12
	goto ParcelDelibirdCliffs_T_Pelle_11

ParcelDelibirdCliffs_T_Pelle_17:
# 381 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Pelle_R5
	goto ParcelDelibirdCliffs_T_Pelle_16

ParcelDelibirdCliffs_T_Pelle_18:
# 380 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_PELLE_R5
	goto_if 0, ParcelDelibirdCliffs_T_Pelle_17
	goto ParcelDelibirdCliffs_T_Pelle_16


ParcelDelibirdCliffs_T_Pelle_FirstWin::
# 387 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_Text_2, MSGBOX_DEFAULT
# 388 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R2::
# 392 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 393 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 394 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_0, MSGBOX_YESNO
# 395 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R2_2
# 400 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R2, ParcelDelibirdCliffs_T_Pelle_R2_Text_2
# 401 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_3, MSGBOX_DEFAULT
# 402 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R2_2:
# 396 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 397 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R3::
# 406 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 407 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 408 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R3_Text_0, MSGBOX_YESNO
# 409 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R3_2
# 414 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R3, ParcelDelibirdCliffs_T_Pelle_R3_Text_1
# 415 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R3_Text_2, MSGBOX_DEFAULT
# 416 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R3_2:
# 410 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 411 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R4::
# 420 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 421 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 422 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R4_Text_0, MSGBOX_YESNO
# 423 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R4_2
# 428 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R4, ParcelDelibirdCliffs_T_Pelle_R2_Text_2
# 429 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R4_Text_1, MSGBOX_DEFAULT
# 430 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R4_2:
# 424 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 425 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Pelle_R5::
# 434 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 435 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 436 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R5_Text_0, MSGBOX_YESNO
# 437 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Pelle_R5_2
# 442 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_PELLE_R5, ParcelDelibirdCliffs_T_Pelle_R5_Text_1
# 443 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R5_Text_2, MSGBOX_DEFAULT
# 444 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Pelle_R5_2:
# 438 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Pelle_R2_Text_1, MSGBOX_DEFAULT
# 439 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid::
# 449 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_single TRAINER_SKALD_CLF_ASTRID, ParcelDelibirdCliffs_T_Astrid_Text_0, ParcelDelibirdCliffs_T_Astrid_Text_1, ParcelDelibirdCliffs_T_Astrid_FirstWin
# 453 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 454 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_3
ParcelDelibirdCliffs_T_Astrid_1:
# 457 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_8
ParcelDelibirdCliffs_T_Astrid_6:
# 460 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_13
ParcelDelibirdCliffs_T_Astrid_11:
# 463 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdCliffs_T_Astrid_18
ParcelDelibirdCliffs_T_Astrid_16:
# 466 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdCliffs_T_Astrid_2:
# 455 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R2
	goto ParcelDelibirdCliffs_T_Astrid_1

ParcelDelibirdCliffs_T_Astrid_3:
# 454 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R2
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_2
	goto ParcelDelibirdCliffs_T_Astrid_1

ParcelDelibirdCliffs_T_Astrid_7:
# 458 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R3
	goto ParcelDelibirdCliffs_T_Astrid_6

ParcelDelibirdCliffs_T_Astrid_8:
# 457 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R3
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_7
	goto ParcelDelibirdCliffs_T_Astrid_6

ParcelDelibirdCliffs_T_Astrid_12:
# 461 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R4
	goto ParcelDelibirdCliffs_T_Astrid_11

ParcelDelibirdCliffs_T_Astrid_13:
# 460 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R4
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_12
	goto ParcelDelibirdCliffs_T_Astrid_11

ParcelDelibirdCliffs_T_Astrid_17:
# 464 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	goto ParcelDelibirdCliffs_T_Astrid_R5
	goto ParcelDelibirdCliffs_T_Astrid_16

ParcelDelibirdCliffs_T_Astrid_18:
# 463 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	checktrainerflag TRAINER_SKALD_CLF_ASTRID_R5
	goto_if 0, ParcelDelibirdCliffs_T_Astrid_17
	goto ParcelDelibirdCliffs_T_Astrid_16


ParcelDelibirdCliffs_T_Astrid_FirstWin::
# 470 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_Text_2, MSGBOX_DEFAULT
# 471 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R2::
# 475 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 476 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 477 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_0, MSGBOX_YESNO
# 478 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R2_2
# 483 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R2, ParcelDelibirdCliffs_T_Astrid_R2_Text_2
# 484 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_3, MSGBOX_DEFAULT
# 485 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R2_2:
# 479 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 480 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R3::
# 489 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 490 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 491 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R3_Text_0, MSGBOX_YESNO
# 492 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R3_2
# 497 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R3, ParcelDelibirdCliffs_T_Astrid_R3_Text_1
# 498 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R3_Text_2, MSGBOX_DEFAULT
# 499 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R3_2:
# 493 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 494 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R4::
# 503 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 504 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 505 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R4_Text_0, MSGBOX_YESNO
# 506 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R4_2
# 511 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R4, ParcelDelibirdCliffs_T_Astrid_R4_Text_1
# 512 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R4_Text_2, MSGBOX_DEFAULT
# 513 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R4_2:
# 507 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 508 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end


ParcelDelibirdCliffs_T_Astrid_R5::
# 517 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	lock
# 518 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	faceplayer
# 519 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R5_Text_0, MSGBOX_YESNO
# 520 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdCliffs_T_Astrid_R5_2
# 525 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_CLF_ASTRID_R5, ParcelDelibirdCliffs_T_Astrid_R5_Text_1
# 526 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R5_Text_2, MSGBOX_DEFAULT
# 527 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	release
	end

ParcelDelibirdCliffs_T_Astrid_R5_2:
# 521 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	msgbox ParcelDelibirdCliffs_T_Astrid_R2_Text_1, MSGBOX_DEFAULT
# 522 "data/maps/ParcelDelibirdCliffs/scripts.pory"
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
# 81 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "Einar: The coast counted its catch out\n"
	.string "loud, I hear. All one age. I've been\l"
	.string "saying it about the gulls for ten years.\p"
	.string "Nobody counts the gulls. The gulls are\n"
	.string "fine. The gulls are always fine, until\l"
	.string "the list says otherwise.$"

ParcelDelibirdCliffs_Einar_Text_2:
# 85 "data/maps/ParcelDelibirdCliffs/scripts.pory"
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
# 92 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SHORELINE CLIFFS\p"
	.string "The beach is by the stairs at either\n"
	.string "end. Tomas's cabin is below the east\l"
	.string "stairs. The point beacon is past the\l"
	.string "rocks.\p"
	.string "Mind the edge. It is not where the map\n"
	.string "says.$"

ParcelDelibirdCliffs_BeaconSign_Text_0:
# 97 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "THE POINT BEACON\p"
	.string "Kept by the Reikvold family, four\n"
	.string "generations. Fire, then oil, then the\l"
	.string "bulb.\p"
	.string "Smaller, newer, bolted on: LIGHTING\n"
	.string "UPGRADE FUNDED BY THE MEREHOLT\l"
	.string "FOUNDATION.$"

ParcelDelibirdCliffs_T_Solveig_Text_0:
# 118 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: A picnic on the cliffs at\n"
	.string "Midwinter! Gran would have called me\l"
	.string "mad. Gran never had a Midwinter you\l"
	.string "could sit out in.\p"
	.string "Battle while the tea brews?$"

ParcelDelibirdCliffs_T_Solveig_Text_1:
# 119 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Tea's ready anyway.$"

ParcelDelibirdCliffs_T_Solveig_Text_2:
# 134 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: It's lovely. That's the awful\n"
	.string "part.\p"
	.string "It's genuinely lovely up here now.$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_0:
# 145 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_1:
# 147 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Suit yourself. I'm here.$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_2:
# 151 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: …Fair.$"

ParcelDelibirdCliffs_T_Solveig_R2_Text_3:
# 152 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelDelibirdCliffs_T_Solveig_R3_Text_0:
# 159 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelDelibirdCliffs_T_Solveig_R3_Text_1:
# 166 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Solveig_R4_Text_0:
# 173 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdCliffs_T_Solveig_R4_Text_1:
# 179 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: Right. That's the whole of it.$"

ParcelDelibirdCliffs_T_Solveig_R4_Text_2:
# 180 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdCliffs_T_Solveig_R5_Text_0:
# 187 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibirdCliffs_T_Solveig_R5_Text_1:
# 193 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: …Again, then. Later.$"

ParcelDelibirdCliffs_T_Solveig_R5_Text_2:
# 194 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "SOLVEIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibirdCliffs_T_Olav_Text_0:
# 201 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Hold still. WINGULL count. Three\n"
	.string "hundred and -- never mind, you've put\l"
	.string "them up.\p"
	.string "Battle, since you've cost me the number.$"

ParcelDelibirdCliffs_T_Olav_Text_1:
# 202 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Fair's fair.$"

ParcelDelibirdCliffs_T_Olav_Text_2:
# 217 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: The gulls are fine. The gulls are\n"
	.string "always fine.\p"
	.string "It's the ones you don't see any more\n"
	.string "that tell you anything.$"

ParcelDelibirdCliffs_T_Olav_R2_Text_0:
# 228 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: I kept the team up for this.\n"
	.string "Again?$"

ParcelDelibirdCliffs_T_Olav_R2_Text_1:
# 230 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: No hurry. The water keeps.$"

ParcelDelibirdCliffs_T_Olav_R2_Text_2:
# 234 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: …Again, then. Later.$"

ParcelDelibirdCliffs_T_Olav_R2_Text_3:
# 235 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibirdCliffs_T_Olav_R3_Text_0:
# 242 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelDelibirdCliffs_T_Olav_R3_Text_1:
# 248 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: That's the one I wanted to see.$"

ParcelDelibirdCliffs_T_Olav_R3_Text_2:
# 249 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Olav_R4_Text_0:
# 256 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelDelibirdCliffs_T_Olav_R4_Text_1:
# 262 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: …Fair.$"

ParcelDelibirdCliffs_T_Olav_R4_Text_2:
# 263 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdCliffs_T_Olav_R5_Text_0:
# 270 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdCliffs_T_Olav_R5_Text_1:
# 276 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Noted. Properly, this time.$"

ParcelDelibirdCliffs_T_Olav_R5_Text_2:
# 277 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "OLAV: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelDelibirdCliffs_T_Geir_Text_0:
# 284 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: CORSOLA on the line. In this\n"
	.string "water. My father fished this tide line\l"
	.string "fifty years and never saw one north of\l"
	.string "the Coast.\p"
	.string "Battle while I think about that.$"

ParcelDelibirdCliffs_T_Geir_Text_1:
# 285 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Hm. Caught, properly.$"

ParcelDelibirdCliffs_T_Geir_Text_2:
# 300 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: New fish in the pots and the old\n"
	.string "ones gone north. Same work, different\l"
	.string "names.\p"
	.string "I'd rather the old names.$"

ParcelDelibirdCliffs_T_Geir_R2_Text_0:
# 311 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelDelibirdCliffs_T_Geir_R2_Text_1:
# 313 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Fine. Same spot.$"

ParcelDelibirdCliffs_T_Geir_R2_Text_2:
# 317 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: That's the one I wanted to see.$"

ParcelDelibirdCliffs_T_Geir_R2_Text_3:
# 318 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibirdCliffs_T_Geir_R3_Text_0:
# 325 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdCliffs_T_Geir_R3_Text_1:
# 331 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Noted. Properly, this time.$"

ParcelDelibirdCliffs_T_Geir_R3_Text_2:
# 332 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Geir_R4_Text_0:
# 339 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelDelibirdCliffs_T_Geir_R4_Text_1:
# 345 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: …Fair.$"

ParcelDelibirdCliffs_T_Geir_R4_Text_2:
# 346 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelDelibirdCliffs_T_Geir_R5_Text_0:
# 353 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelDelibirdCliffs_T_Geir_R5_Text_1:
# 360 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "GEIR: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelDelibirdCliffs_T_Pelle_Text_0:
# 367 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: I'm swimming at MIDWINTER! Dad\n"
	.string "says when he was little the sea had ice\l"
	.string "on it here. Ice!\p"
	.string "Battle me, I'm warm enough!$"

ParcelDelibirdCliffs_T_Pelle_Text_1:
# 368 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Brrr. Lost.$"

ParcelDelibirdCliffs_T_Pelle_Text_2:
# 383 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Dad doesn't swim. He stands at\n"
	.string "the edge and looks at the water like it\l"
	.string "owes him something.$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_0:
# 394 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_1:
# 396 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Fine. Same spot.$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_2:
# 400 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: That's the one I wanted to see.$"

ParcelDelibirdCliffs_T_Pelle_R2_Text_3:
# 401 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelDelibirdCliffs_T_Pelle_R3_Text_0:
# 408 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdCliffs_T_Pelle_R3_Text_1:
# 414 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: …Again, then. Later.$"

ParcelDelibirdCliffs_T_Pelle_R3_Text_2:
# 415 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Pelle_R4_Text_0:
# 422 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdCliffs_T_Pelle_R4_Text_1:
# 429 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdCliffs_T_Pelle_R5_Text_0:
# 436 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelDelibirdCliffs_T_Pelle_R5_Text_1:
# 442 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: …Fair.$"

ParcelDelibirdCliffs_T_Pelle_R5_Text_2:
# 443 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "PELLE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelDelibirdCliffs_T_Astrid_Text_0:
# 450 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Out here the water's the same\n"
	.string "every year. It's the land that changes.\p"
	.string "You've got a board under you, you've got\n"
	.string "a battle.$"

ParcelDelibirdCliffs_T_Astrid_Text_1:
# 451 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Good current on you.$"

ParcelDelibirdCliffs_T_Astrid_Text_2:
# 466 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: I used to have to watch for ice\n"
	.string "floes off the point. Now I watch for the\l"
	.string "tour boats.\p"
	.string "I'd take the floes back.$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_0:
# 477 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_1:
# 479 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Fine. Same spot.$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_2:
# 483 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Still yours.$"

ParcelDelibirdCliffs_T_Astrid_R2_Text_3:
# 484 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelDelibirdCliffs_T_Astrid_R3_Text_0:
# 491 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelDelibirdCliffs_T_Astrid_R3_Text_1:
# 497 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: …Fair.$"

ParcelDelibirdCliffs_T_Astrid_R3_Text_2:
# 498 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: One more in me. After the high\n"
	.string "ground.$"

ParcelDelibirdCliffs_T_Astrid_R4_Text_0:
# 505 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelDelibirdCliffs_T_Astrid_R4_Text_1:
# 511 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Right. That's the whole of it.$"

ParcelDelibirdCliffs_T_Astrid_R4_Text_2:
# 512 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelDelibirdCliffs_T_Astrid_R5_Text_0:
# 519 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelDelibirdCliffs_T_Astrid_R5_Text_1:
# 525 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Noted. Properly, this time.$"

ParcelDelibirdCliffs_T_Astrid_R5_Text_2:
# 526 "data/maps/ParcelDelibirdCliffs/scripts.pory"
	.string "ASTRID: Five. Write that one down too.\n"
	.string "I'll know you did.$"
