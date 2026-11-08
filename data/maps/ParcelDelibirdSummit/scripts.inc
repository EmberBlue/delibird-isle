ParcelDelibirdSummit_MapScripts::
	.byte 0


ParcelDelibirdSummit_Ingrid::
# 17 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 18 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 19 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdSummit_Ingrid_2
# 24 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALD_DEL_INGRID_DONE, ParcelDelibirdSummit_Ingrid_5
# 29 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_PARCEL, ParcelDelibirdSummit_Ingrid_8
# 39 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Ingrid_Text_6, MSGBOX_DEFAULT
# 40 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Ingrid_2:
# 20 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Ingrid_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Ingrid_5:
# 25 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Ingrid_Text_1, MSGBOX_DEFAULT
# 26 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Ingrid_8:
# 30 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Ingrid_Text_2, MSGBOX_DEFAULT
# 31 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Ingrid_Text_3, MSGBOX_DEFAULT
# 32 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Ingrid_Text_4, MSGBOX_DEFAULT
# 33 "data/maps/ParcelDelibirdSummit/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 34 "data/maps/ParcelDelibirdSummit/scripts.pory"
	setflag FLAG_SKALD_DEL_INGRID_DONE
# 35 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Ingrid_Text_5, MSGBOX_DEFAULT
# 36 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_Kari::
# 46 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 47 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 48 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdSummit_Kari_2
# 53 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelDelibirdSummit_Kari_5
# 58 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Kari_2:
# 49 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Kari_5:
# 54 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_1, MSGBOX_DEFAULT
# 55 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_PeakSign::
# 65 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PeakSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_StakesSign::
# 70 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_StakesSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_PondSign::
# 75 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PondSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_ItemMaxRevive::
# 81 "data/maps/ParcelDelibirdSummit/scripts.pory"
	finditem ITEM_MAX_REVIVE
	end


ParcelDelibirdSummit_ItemHyperPotion::
# 85 "data/maps/ParcelDelibirdSummit/scripts.pory"
	finditem ITEM_HYPER_POTION
	end


ParcelDelibirdSummit_ItemRareCandy::
# 89 "data/maps/ParcelDelibirdSummit/scripts.pory"
	finditem ITEM_RARE_CANDY
	end


ParcelDelibirdSummit_T_Ragnar::
# 95 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_RAGNAR, ParcelDelibirdSummit_T_Ragnar_Text_0, ParcelDelibirdSummit_T_Ragnar_Text_1, ParcelDelibirdSummit_T_Ragnar_FirstWin
# 99 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 100 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_3
ParcelDelibirdSummit_T_Ragnar_1:
# 103 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_8
ParcelDelibirdSummit_T_Ragnar_6:
# 106 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_13
ParcelDelibirdSummit_T_Ragnar_11:
# 109 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_18
ParcelDelibirdSummit_T_Ragnar_16:
# 112 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Ragnar_2:
# 101 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R2
	goto ParcelDelibirdSummit_T_Ragnar_1

ParcelDelibirdSummit_T_Ragnar_3:
# 100 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R2
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_2
	goto ParcelDelibirdSummit_T_Ragnar_1

ParcelDelibirdSummit_T_Ragnar_7:
# 104 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R3
	goto ParcelDelibirdSummit_T_Ragnar_6

ParcelDelibirdSummit_T_Ragnar_8:
# 103 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R3
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_7
	goto ParcelDelibirdSummit_T_Ragnar_6

ParcelDelibirdSummit_T_Ragnar_12:
# 107 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R4
	goto ParcelDelibirdSummit_T_Ragnar_11

ParcelDelibirdSummit_T_Ragnar_13:
# 106 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R4
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_12
	goto ParcelDelibirdSummit_T_Ragnar_11

ParcelDelibirdSummit_T_Ragnar_17:
# 110 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R5
	goto ParcelDelibirdSummit_T_Ragnar_16

ParcelDelibirdSummit_T_Ragnar_18:
# 109 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R5
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_17
	goto ParcelDelibirdSummit_T_Ragnar_16


ParcelDelibirdSummit_T_Ragnar_FirstWin::
# 116 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_Text_2, MSGBOX_DEFAULT
# 117 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R2::
# 121 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 122 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 123 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_0, MSGBOX_YESNO
# 124 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R2_2
# 129 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R2, ParcelDelibirdSummit_T_Ragnar_R2_Text_2
# 130 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_3, MSGBOX_DEFAULT
# 131 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R2_2:
# 125 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 126 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R3::
# 135 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 136 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 137 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R3_Text_0, MSGBOX_YESNO
# 138 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R3_2
# 143 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R3, ParcelDelibirdSummit_T_Ragnar_R3_Text_1
# 144 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R3_Text_2, MSGBOX_DEFAULT
# 145 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R3_2:
# 139 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 140 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R4::
# 149 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 150 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 151 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R4_Text_0, MSGBOX_YESNO
# 152 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R4_2
# 157 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R4, ParcelDelibirdSummit_T_Ragnar_R3_Text_1
# 158 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R4_Text_1, MSGBOX_DEFAULT
# 159 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R4_2:
# 153 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 154 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R5::
# 163 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 164 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 165 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R5_Text_0, MSGBOX_YESNO
# 166 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R5_2
# 171 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R5, ParcelDelibirdSummit_T_Ragnar_R2_Text_2
# 172 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R5_Text_1, MSGBOX_DEFAULT
# 173 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R5_2:
# 167 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 168 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil::
# 178 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_ESKIL, ParcelDelibirdSummit_T_Eskil_Text_0, ParcelDelibirdSummit_T_Eskil_Text_1, ParcelDelibirdSummit_T_Eskil_FirstWin
# 182 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 183 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Eskil_3
ParcelDelibirdSummit_T_Eskil_1:
# 186 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Eskil_8
ParcelDelibirdSummit_T_Eskil_6:
# 189 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Eskil_13
ParcelDelibirdSummit_T_Eskil_11:
# 192 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Eskil_18
ParcelDelibirdSummit_T_Eskil_16:
# 195 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Eskil_2:
# 184 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R2
	goto ParcelDelibirdSummit_T_Eskil_1

ParcelDelibirdSummit_T_Eskil_3:
# 183 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R2
	goto_if 0, ParcelDelibirdSummit_T_Eskil_2
	goto ParcelDelibirdSummit_T_Eskil_1

ParcelDelibirdSummit_T_Eskil_7:
# 187 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R3
	goto ParcelDelibirdSummit_T_Eskil_6

ParcelDelibirdSummit_T_Eskil_8:
# 186 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R3
	goto_if 0, ParcelDelibirdSummit_T_Eskil_7
	goto ParcelDelibirdSummit_T_Eskil_6

ParcelDelibirdSummit_T_Eskil_12:
# 190 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R4
	goto ParcelDelibirdSummit_T_Eskil_11

ParcelDelibirdSummit_T_Eskil_13:
# 189 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R4
	goto_if 0, ParcelDelibirdSummit_T_Eskil_12
	goto ParcelDelibirdSummit_T_Eskil_11

ParcelDelibirdSummit_T_Eskil_17:
# 193 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R5
	goto ParcelDelibirdSummit_T_Eskil_16

ParcelDelibirdSummit_T_Eskil_18:
# 192 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R5
	goto_if 0, ParcelDelibirdSummit_T_Eskil_17
	goto ParcelDelibirdSummit_T_Eskil_16


ParcelDelibirdSummit_T_Eskil_FirstWin::
# 199 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_Text_2, MSGBOX_DEFAULT
# 200 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R2::
# 204 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 205 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 206 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_0, MSGBOX_YESNO
# 207 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R2_2
# 212 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R2, ParcelDelibirdSummit_T_Eskil_R2_Text_2
# 213 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_3, MSGBOX_DEFAULT
# 214 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R2_2:
# 208 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 209 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R3::
# 218 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 219 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 220 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R3_Text_0, MSGBOX_YESNO
# 221 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R3_2
# 226 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R3, ParcelDelibirdSummit_T_Eskil_R3_Text_1
# 227 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R3_Text_2, MSGBOX_DEFAULT
# 228 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R3_2:
# 222 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 223 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R4::
# 232 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 233 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 234 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R4_Text_0, MSGBOX_YESNO
# 235 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R4_2
# 240 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R4, ParcelDelibirdSummit_T_Eskil_R2_Text_2
# 241 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R4_Text_1, MSGBOX_DEFAULT
# 242 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R4_2:
# 236 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 237 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R5::
# 246 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 247 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 248 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R5_Text_0, MSGBOX_YESNO
# 249 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R5_2
# 254 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R5, ParcelDelibirdSummit_T_Eskil_R5_Text_1
# 255 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R5_Text_2, MSGBOX_DEFAULT
# 256 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R5_2:
# 250 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 251 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv::
# 261 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_LIV, ParcelDelibirdSummit_T_Liv_Text_0, ParcelDelibirdSummit_T_Liv_Text_1, ParcelDelibirdSummit_T_Liv_FirstWin
# 265 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 266 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Liv_3
ParcelDelibirdSummit_T_Liv_1:
# 269 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Liv_8
ParcelDelibirdSummit_T_Liv_6:
# 272 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Liv_13
ParcelDelibirdSummit_T_Liv_11:
# 275 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Liv_18
ParcelDelibirdSummit_T_Liv_16:
# 278 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Liv_2:
# 267 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R2
	goto ParcelDelibirdSummit_T_Liv_1

ParcelDelibirdSummit_T_Liv_3:
# 266 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R2
	goto_if 0, ParcelDelibirdSummit_T_Liv_2
	goto ParcelDelibirdSummit_T_Liv_1

ParcelDelibirdSummit_T_Liv_7:
# 270 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R3
	goto ParcelDelibirdSummit_T_Liv_6

ParcelDelibirdSummit_T_Liv_8:
# 269 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R3
	goto_if 0, ParcelDelibirdSummit_T_Liv_7
	goto ParcelDelibirdSummit_T_Liv_6

ParcelDelibirdSummit_T_Liv_12:
# 273 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R4
	goto ParcelDelibirdSummit_T_Liv_11

ParcelDelibirdSummit_T_Liv_13:
# 272 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R4
	goto_if 0, ParcelDelibirdSummit_T_Liv_12
	goto ParcelDelibirdSummit_T_Liv_11

ParcelDelibirdSummit_T_Liv_17:
# 276 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R5
	goto ParcelDelibirdSummit_T_Liv_16

ParcelDelibirdSummit_T_Liv_18:
# 275 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R5
	goto_if 0, ParcelDelibirdSummit_T_Liv_17
	goto ParcelDelibirdSummit_T_Liv_16


ParcelDelibirdSummit_T_Liv_FirstWin::
# 282 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_Text_2, MSGBOX_DEFAULT
# 283 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R2::
# 287 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 288 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 289 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_0, MSGBOX_YESNO
# 290 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R2_2
# 295 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R2, ParcelDelibirdSummit_T_Liv_R2_Text_2
# 296 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_3, MSGBOX_DEFAULT
# 297 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R2_2:
# 291 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 292 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R3::
# 301 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 302 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 303 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R3_Text_0, MSGBOX_YESNO
# 304 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R3_2
# 309 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R3, ParcelDelibirdSummit_T_Liv_R3_Text_1
# 310 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R3_Text_2, MSGBOX_DEFAULT
# 311 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R3_2:
# 305 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 306 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R4::
# 315 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 316 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 317 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R4_Text_0, MSGBOX_YESNO
# 318 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R4_2
# 323 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R4, ParcelDelibirdSummit_T_Liv_R3_Text_1
# 324 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R4_Text_1, MSGBOX_DEFAULT
# 325 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R4_2:
# 319 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 320 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R5::
# 329 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 330 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 331 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R5_Text_0, MSGBOX_YESNO
# 332 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R5_2
# 337 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R5, ParcelDelibirdSummit_T_Liv_R5_Text_1
# 338 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R5_Text_2, MSGBOX_DEFAULT
# 339 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R5_2:
# 333 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 334 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta::
# 344 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_BIRGITTA, ParcelDelibirdSummit_T_Birgitta_Text_0, ParcelDelibirdSummit_T_Birgitta_Text_1, ParcelDelibirdSummit_T_Birgitta_FirstWin
# 348 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 349 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_3
ParcelDelibirdSummit_T_Birgitta_1:
# 352 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_8
ParcelDelibirdSummit_T_Birgitta_6:
# 355 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_13
ParcelDelibirdSummit_T_Birgitta_11:
# 358 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_18
ParcelDelibirdSummit_T_Birgitta_16:
# 361 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Birgitta_2:
# 350 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R2
	goto ParcelDelibirdSummit_T_Birgitta_1

ParcelDelibirdSummit_T_Birgitta_3:
# 349 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R2
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_2
	goto ParcelDelibirdSummit_T_Birgitta_1

ParcelDelibirdSummit_T_Birgitta_7:
# 353 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R3
	goto ParcelDelibirdSummit_T_Birgitta_6

ParcelDelibirdSummit_T_Birgitta_8:
# 352 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R3
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_7
	goto ParcelDelibirdSummit_T_Birgitta_6

ParcelDelibirdSummit_T_Birgitta_12:
# 356 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R4
	goto ParcelDelibirdSummit_T_Birgitta_11

ParcelDelibirdSummit_T_Birgitta_13:
# 355 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R4
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_12
	goto ParcelDelibirdSummit_T_Birgitta_11

ParcelDelibirdSummit_T_Birgitta_17:
# 359 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R5
	goto ParcelDelibirdSummit_T_Birgitta_16

ParcelDelibirdSummit_T_Birgitta_18:
# 358 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R5
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_17
	goto ParcelDelibirdSummit_T_Birgitta_16


ParcelDelibirdSummit_T_Birgitta_FirstWin::
# 365 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_Text_2, MSGBOX_DEFAULT
# 366 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R2::
# 370 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 371 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 372 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_0, MSGBOX_YESNO
# 373 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R2_2
# 378 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R2, ParcelDelibirdSummit_T_Birgitta_R2_Text_2
# 379 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_3, MSGBOX_DEFAULT
# 380 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R2_2:
# 374 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 375 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R3::
# 384 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 385 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 386 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R3_Text_0, MSGBOX_YESNO
# 387 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R3_2
# 392 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R3, ParcelDelibirdSummit_T_Birgitta_R3_Text_1
# 393 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R3_Text_2, MSGBOX_DEFAULT
# 394 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R3_2:
# 388 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 389 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R4::
# 398 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 399 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 400 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R4_Text_0, MSGBOX_YESNO
# 401 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R4_2
# 406 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R4, ParcelDelibirdSummit_T_Birgitta_R4_Text_1
# 407 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R4_Text_2, MSGBOX_DEFAULT
# 408 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R4_2:
# 402 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 403 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R5::
# 412 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 413 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 414 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R5_Text_0, MSGBOX_YESNO
# 415 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R5_2
# 420 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R5, ParcelDelibirdSummit_T_Birgitta_R3_Text_1
# 421 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R5_Text_1, MSGBOX_DEFAULT
# 422 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R5_2:
# 416 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 417 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald::
# 427 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_TORVALD, ParcelDelibirdSummit_T_Torvald_Text_0, ParcelDelibirdSummit_T_Torvald_Text_1, ParcelDelibirdSummit_T_Torvald_FirstWin
# 431 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 432 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Torvald_3
ParcelDelibirdSummit_T_Torvald_1:
# 435 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Torvald_8
ParcelDelibirdSummit_T_Torvald_6:
# 438 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Torvald_13
ParcelDelibirdSummit_T_Torvald_11:
# 441 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Torvald_18
ParcelDelibirdSummit_T_Torvald_16:
# 444 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Torvald_2:
# 433 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R2
	goto ParcelDelibirdSummit_T_Torvald_1

ParcelDelibirdSummit_T_Torvald_3:
# 432 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R2
	goto_if 0, ParcelDelibirdSummit_T_Torvald_2
	goto ParcelDelibirdSummit_T_Torvald_1

ParcelDelibirdSummit_T_Torvald_7:
# 436 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R3
	goto ParcelDelibirdSummit_T_Torvald_6

ParcelDelibirdSummit_T_Torvald_8:
# 435 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R3
	goto_if 0, ParcelDelibirdSummit_T_Torvald_7
	goto ParcelDelibirdSummit_T_Torvald_6

ParcelDelibirdSummit_T_Torvald_12:
# 439 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R4
	goto ParcelDelibirdSummit_T_Torvald_11

ParcelDelibirdSummit_T_Torvald_13:
# 438 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R4
	goto_if 0, ParcelDelibirdSummit_T_Torvald_12
	goto ParcelDelibirdSummit_T_Torvald_11

ParcelDelibirdSummit_T_Torvald_17:
# 442 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R5
	goto ParcelDelibirdSummit_T_Torvald_16

ParcelDelibirdSummit_T_Torvald_18:
# 441 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R5
	goto_if 0, ParcelDelibirdSummit_T_Torvald_17
	goto ParcelDelibirdSummit_T_Torvald_16


ParcelDelibirdSummit_T_Torvald_FirstWin::
# 448 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_Text_2, MSGBOX_DEFAULT
# 449 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R2::
# 453 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 454 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 455 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_0, MSGBOX_YESNO
# 456 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R2_2
# 461 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R2, ParcelDelibirdSummit_T_Torvald_R2_Text_2
# 462 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_3, MSGBOX_DEFAULT
# 463 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R2_2:
# 457 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 458 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R3::
# 467 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 468 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 469 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R3_Text_0, MSGBOX_YESNO
# 470 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R3_2
# 475 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R3, ParcelDelibirdSummit_T_Torvald_R3_Text_1
# 476 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R3_Text_2, MSGBOX_DEFAULT
# 477 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R3_2:
# 471 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 472 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R4::
# 481 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 482 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 483 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R4_Text_0, MSGBOX_YESNO
# 484 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R4_2
# 489 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R4, ParcelDelibirdSummit_T_Torvald_R4_Text_1
# 490 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R4_Text_2, MSGBOX_DEFAULT
# 491 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R4_2:
# 485 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 486 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R5::
# 495 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 496 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 497 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R5_Text_0, MSGBOX_YESNO
# 498 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R5_2
# 503 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R5, ParcelDelibirdSummit_T_Torvald_R5_Text_1
# 504 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R5_Text_2, MSGBOX_DEFAULT
# 505 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R5_2:
# 499 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 500 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_Ingrid_Text_0:
# 20 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Ingrid: You said it to their faces. ILEX\n"
	.string "read me the part about the stakes. My\l"
	.string "stakes, in a hearing, in the capital.\p"
	.string "The paint is still three winters bare.\n"
	.string "But it is on the record now, and the\l"
	.string "record outlasts paint.$"

ParcelDelibirdSummit_Ingrid_Text_1:
# 25 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Ingrid: The lamp's lit. Tell Marta it's\n"
	.string "lit. She'll know what I mean by it.$"

ParcelDelibirdSummit_Ingrid_Text_2:
# 30 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "An old woman in a canvas coat repaints\n"
	.string "a date on a wooden stake. She does not\l"
	.string "look up until the brush is clean.\p"
	.string "Ingrid: From Marta. Lamp oil, and the\n"
	.string "good tea, and a note I'm not to read till\l"
	.string "dark. Set it down by the hut.$"

ParcelDelibirdSummit_Ingrid_Text_3:
# 31 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Ingrid: Sixty years the stakes were\n"
	.string "painted to the snowline on Midwinter\l"
	.string "morning. I paint the date now, and the\l"
	.string "line stays where it was.\p"
	.string "The line is the only thing on this island\n"
	.string "that isn't moving.$"

ParcelDelibirdSummit_Ingrid_Text_4:
# 32 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Ingrid: Take this. It fell out of the\n"
	.string "sky, near enough -- a bird dropped it by\l"
	.string "the stakes and looked at me as if I'd\l"
	.string "asked.$"

ParcelDelibirdSummit_Ingrid_Text_5:
# 35 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Ingrid: Go down careful. The stairs are\n"
	.string "new and the ground under them isn't.$"

ParcelDelibirdSummit_Ingrid_Text_6:
# 39 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Ingrid: Watcher. Not warden, not\n"
	.string "keeper. I watch. The stakes are what I\l"
	.string "watch.\p"
	.string "The top stake is where the snow should\n"
	.string "start. It never did, this year. Nor last.\l"
	.string "Marta sends oil up when she can spare\l"
	.string "it. The lamp is company, nights.$"

ParcelDelibirdSummit_Kari_Text_0:
# 49 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Kari: They put a rope round my pond. Dad\n"
	.string "says it's for the little ones.\p"
	.string "I'm little. I think it's for everybody.$"

ParcelDelibirdSummit_Kari_Text_1:
# 54 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Kari: Gran says the sea by the coast is\n"
	.string "sick and the ranger wrote it in a book.\l"
	.string "Is my pond in the book?\p"
	.string "I want it in the book. Not because it's\n"
	.string "sick. Because it was my sledge run\l"
	.string "first.$"

ParcelDelibirdSummit_Kari_Text_2:
# 58 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Kari: The pond wasn't here last\n"
	.string "Midwinter. My sledge run went right\l"
	.string "where the middle is.\p"
	.string "Gran says keep off it. There's nothing\n"
	.string "to keep off.\p"
	.string "The trees are leaning. Dad says they're\n"
	.string "sad. I think they're just leaning.$"

ParcelDelibirdSummit_PeakSign_Text_0:
# 65 "data/maps/ParcelDelibirdSummit/scripts.pory"
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

ParcelDelibirdSummit_StakesSign_Text_0:
# 70 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "SNOW STAKES\p"
	.string "Painted to the snowline every Midwinter\n"
	.string "morning for sixty years. The lowest\l"
	.string "stake has been bare three winters. The\l"
	.string "one above it, two.\p"
	.string "Someone has painted this year's date on\n"
	.string "the top stake and left the line where it\l"
	.string "was.$"

ParcelDelibirdSummit_PondSign_Text_0:
# 75 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "The ground here has let go. A pond\n"
	.string "nobody dug. Trees leaning away from\l"
	.string "each other like people who have\l"
	.string "stopped speaking.\p"
	.string "A child's sledge has been wedged up in\n"
	.string "the fork of the nearest tree, out of\l"
	.string "the wet, as if someone expected to need\l"
	.string "it again.$"

ParcelDelibirdSummit_T_Ragnar_Text_0:
# 96 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Twenty years I've climbed this\n"
	.string "on Midwinter morning. Used to be on\l"
	.string "skis. Now it's boots, and mud to the\l"
	.string "ankle.\p"
	.string "Battle me before the mud gets you too.$"

ParcelDelibirdSummit_T_Ragnar_Text_1:
# 97 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Good footing.$"

ParcelDelibirdSummit_T_Ragnar_Text_2:
# 112 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: The stairs are cut where the\n"
	.string "old snow slope was. We didn't need\l"
	.string "stairs when there was snow.$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_0:
# 123 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_1:
# 125 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_2:
# 129 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_3:
# 130 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelDelibirdSummit_T_Ragnar_R3_Text_0:
# 137 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelDelibirdSummit_T_Ragnar_R3_Text_1:
# 143 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: That's the one I wanted to see.$"

ParcelDelibirdSummit_T_Ragnar_R3_Text_2:
# 144 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibirdSummit_T_Ragnar_R4_Text_0:
# 151 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelDelibirdSummit_T_Ragnar_R4_Text_1:
# 158 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdSummit_T_Ragnar_R5_Text_0:
# 165 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdSummit_T_Ragnar_R5_Text_1:
# 172 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelDelibirdSummit_T_Eskil_Text_0:
# 179 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Hush. The DELIBIRD nest on the\n"
	.string "far side of the stakes. Fewer every\l"
	.string "year.\p"
	.string "If you must make noise, make it a\n"
	.string "battle.$"

ParcelDelibirdSummit_T_Eskil_Text_1:
# 180 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Loud enough.$"

ParcelDelibirdSummit_T_Eskil_Text_2:
# 195 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: They cache food in the snow for\n"
	.string "the hard months. There's less snow to\l"
	.string "cache in, so they're learning the rocks.\p"
	.string "Clever birds. Cleverer than us, maybe.\n"
	.string "We're still caching in the snow.$"

ParcelDelibirdSummit_T_Eskil_R2_Text_0:
# 206 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: I kept the team up for this.\n"
	.string "Again?$"

ParcelDelibirdSummit_T_Eskil_R2_Text_1:
# 208 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: No hurry. The water keeps.$"

ParcelDelibirdSummit_T_Eskil_R2_Text_2:
# 212 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: …Again, then. Later.$"

ParcelDelibirdSummit_T_Eskil_R2_Text_3:
# 213 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibirdSummit_T_Eskil_R3_Text_0:
# 220 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelDelibirdSummit_T_Eskil_R3_Text_1:
# 226 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Eskil_R3_Text_2:
# 227 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibirdSummit_T_Eskil_R4_Text_0:
# 234 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdSummit_T_Eskil_R4_Text_1:
# 241 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdSummit_T_Eskil_R5_Text_0:
# 248 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdSummit_T_Eskil_R5_Text_1:
# 254 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Right. That's the whole of it.$"

ParcelDelibirdSummit_T_Eskil_R5_Text_2:
# 255 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelDelibirdSummit_T_Liv_Text_0:
# 262 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Cadet LIV, Skaldmere Survey, snow\n"
	.string "gauge detail. The gauge reads zero. It\l"
	.string "has read zero since I was posted.\p"
	.string "A battle would at least be a number.$"

ParcelDelibirdSummit_T_Liv_Text_1:
# 263 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's a number.$"

ParcelDelibirdSummit_T_Liv_Text_2:
# 278 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: ILEX says write the zero down\n"
	.string "anyway. A zero is data.\p"
	.string "Nobody believes you until there are\n"
	.string "twenty of them in a row.$"

ParcelDelibirdSummit_T_Liv_R2_Text_0:
# 289 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelDelibirdSummit_T_Liv_R2_Text_1:
# 291 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: No hurry. The water keeps.$"

ParcelDelibirdSummit_T_Liv_R2_Text_2:
# 295 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Liv_R2_Text_3:
# 296 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelDelibirdSummit_T_Liv_R3_Text_0:
# 303 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdSummit_T_Liv_R3_Text_1:
# 309 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: …Again, then. Later.$"

ParcelDelibirdSummit_T_Liv_R3_Text_2:
# 310 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibirdSummit_T_Liv_R4_Text_0:
# 317 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelDelibirdSummit_T_Liv_R4_Text_1:
# 324 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdSummit_T_Liv_R5_Text_0:
# 331 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelDelibirdSummit_T_Liv_R5_Text_1:
# 337 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's the one I wanted to see.$"

ParcelDelibirdSummit_T_Liv_R5_Text_2:
# 338 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelDelibirdSummit_T_Birgitta_Text_0:
# 345 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: I taught every child on this\n"
	.string "island to ski on this slope. Watch your\l"
	.string "step -- there is nothing to ski on.\p"
	.string "Let me see what you've learned instead.$"

ParcelDelibirdSummit_T_Birgitta_Text_1:
# 346 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Well taught, by someone.$"

ParcelDelibirdSummit_T_Birgitta_Text_2:
# 361 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: The young ones will remember\n"
	.string "a green summit at Midwinter and think it\l"
	.string "normal.\p"
	.string "That is the part I cannot forgive. Not\n"
	.string "the thaw. The forgetting.$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_0:
# 372 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Clearances or not, I want\n"
	.string "that one back. Go?$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_1:
# 374 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_2:
# 378 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Still yours.$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_3:
# 379 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelDelibirdSummit_T_Birgitta_R3_Text_0:
# 386 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Three stamps, then five.\n"
	.string "Fine. Me next?$"

ParcelDelibirdSummit_T_Birgitta_R3_Text_1:
# 392 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: …Again, then. Later.$"

ParcelDelibirdSummit_T_Birgitta_R3_Text_2:
# 393 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: One more in me. After the\n"
	.string "high ground.$"

ParcelDelibirdSummit_T_Birgitta_R4_Text_0:
# 400 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdSummit_T_Birgitta_R4_Text_1:
# 406 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: That's the one I wanted to\n"
	.string "see.$"

ParcelDelibirdSummit_T_Birgitta_R4_Text_2:
# 407 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdSummit_T_Birgitta_R5_Text_0:
# 414 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelDelibirdSummit_T_Birgitta_R5_Text_1:
# 421 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Five. Write that one down\n"
	.string "too. I'll know you did.$"

ParcelDelibirdSummit_T_Torvald_Text_0:
# 428 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: The tarn's new. Three winters.\n"
	.string "INGRID says the ground under it was ice\l"
	.string "since before the island had a name.\p"
	.string "You want the top, you come through me\n"
	.string "first.$"

ParcelDelibirdSummit_T_Torvald_Text_1:
# 429 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Go on up, then.$"

ParcelDelibirdSummit_T_Torvald_Text_2:
# 444 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Look at the tarn and tell me\n"
	.string "you can see the bottom. You can.\p"
	.string "That's the problem. There's no bottom\n"
	.string "to it that isn't us.$"

ParcelDelibirdSummit_T_Torvald_R2_Text_0:
# 455 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelDelibirdSummit_T_Torvald_R2_Text_1:
# 457 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Fine. Same spot.$"

ParcelDelibirdSummit_T_Torvald_R2_Text_2:
# 461 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: That's the one I wanted to\n"
	.string "see.$"

ParcelDelibirdSummit_T_Torvald_R2_Text_3:
# 462 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelDelibirdSummit_T_Torvald_R3_Text_0:
# 469 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdSummit_T_Torvald_R3_Text_1:
# 475 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: …Fair.$"

ParcelDelibirdSummit_T_Torvald_R3_Text_2:
# 476 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelDelibirdSummit_T_Torvald_R4_Text_0:
# 483 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdSummit_T_Torvald_R4_Text_1:
# 489 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: …Again, then. Later.$"

ParcelDelibirdSummit_T_Torvald_R4_Text_2:
# 490 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdSummit_T_Torvald_R5_Text_0:
# 497 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdSummit_T_Torvald_R5_Text_1:
# 503 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Torvald_R5_Text_2:
# 504 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Five. Write that one down too.\n"
	.string "I'll know you did.$"
