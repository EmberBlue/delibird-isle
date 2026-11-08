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
	msgbox ParcelDelibirdSummit_Kari_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Kari_2:
# 49 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_PeakSign::
# 60 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PeakSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_StakesSign::
# 65 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_StakesSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_PondSign::
# 70 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PondSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_ItemMaxRevive::
# 76 "data/maps/ParcelDelibirdSummit/scripts.pory"
	finditem ITEM_MAX_REVIVE
	end


ParcelDelibirdSummit_ItemHyperPotion::
# 80 "data/maps/ParcelDelibirdSummit/scripts.pory"
	finditem ITEM_HYPER_POTION
	end


ParcelDelibirdSummit_ItemRareCandy::
# 84 "data/maps/ParcelDelibirdSummit/scripts.pory"
	finditem ITEM_RARE_CANDY
	end


ParcelDelibirdSummit_T_Ragnar::
# 90 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_RAGNAR, ParcelDelibirdSummit_T_Ragnar_Text_0, ParcelDelibirdSummit_T_Ragnar_Text_1, ParcelDelibirdSummit_T_Ragnar_FirstWin
# 94 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 95 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_3
ParcelDelibirdSummit_T_Ragnar_1:
# 98 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_8
ParcelDelibirdSummit_T_Ragnar_6:
# 101 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_13
ParcelDelibirdSummit_T_Ragnar_11:
# 104 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_18
ParcelDelibirdSummit_T_Ragnar_16:
# 107 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Ragnar_2:
# 96 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R2
	goto ParcelDelibirdSummit_T_Ragnar_1

ParcelDelibirdSummit_T_Ragnar_3:
# 95 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R2
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_2
	goto ParcelDelibirdSummit_T_Ragnar_1

ParcelDelibirdSummit_T_Ragnar_7:
# 99 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R3
	goto ParcelDelibirdSummit_T_Ragnar_6

ParcelDelibirdSummit_T_Ragnar_8:
# 98 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R3
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_7
	goto ParcelDelibirdSummit_T_Ragnar_6

ParcelDelibirdSummit_T_Ragnar_12:
# 102 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R4
	goto ParcelDelibirdSummit_T_Ragnar_11

ParcelDelibirdSummit_T_Ragnar_13:
# 101 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R4
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_12
	goto ParcelDelibirdSummit_T_Ragnar_11

ParcelDelibirdSummit_T_Ragnar_17:
# 105 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R5
	goto ParcelDelibirdSummit_T_Ragnar_16

ParcelDelibirdSummit_T_Ragnar_18:
# 104 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R5
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_17
	goto ParcelDelibirdSummit_T_Ragnar_16


ParcelDelibirdSummit_T_Ragnar_FirstWin::
# 111 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_Text_2, MSGBOX_DEFAULT
# 112 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R2::
# 116 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 117 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 118 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_0, MSGBOX_YESNO
# 119 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R2_2
# 124 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R2, ParcelDelibirdSummit_T_Ragnar_R2_Text_2
# 125 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_3, MSGBOX_DEFAULT
# 126 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R2_2:
# 120 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 121 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R3::
# 130 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 131 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 132 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R3_Text_0, MSGBOX_YESNO
# 133 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R3_2
# 138 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R3, ParcelDelibirdSummit_T_Ragnar_R3_Text_1
# 139 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R3_Text_2, MSGBOX_DEFAULT
# 140 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R3_2:
# 134 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 135 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R4::
# 144 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 145 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 146 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R4_Text_0, MSGBOX_YESNO
# 147 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R4_2
# 152 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R4, ParcelDelibirdSummit_T_Ragnar_R3_Text_1
# 153 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R4_Text_1, MSGBOX_DEFAULT
# 154 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R4_2:
# 148 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 149 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R5::
# 158 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 159 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 160 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R5_Text_0, MSGBOX_YESNO
# 161 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R5_2
# 166 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R5, ParcelDelibirdSummit_T_Ragnar_R2_Text_2
# 167 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R5_Text_1, MSGBOX_DEFAULT
# 168 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R5_2:
# 162 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 163 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil::
# 173 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_ESKIL, ParcelDelibirdSummit_T_Eskil_Text_0, ParcelDelibirdSummit_T_Eskil_Text_1, ParcelDelibirdSummit_T_Eskil_FirstWin
# 177 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 178 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Eskil_3
ParcelDelibirdSummit_T_Eskil_1:
# 181 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Eskil_8
ParcelDelibirdSummit_T_Eskil_6:
# 184 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Eskil_13
ParcelDelibirdSummit_T_Eskil_11:
# 187 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Eskil_18
ParcelDelibirdSummit_T_Eskil_16:
# 190 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Eskil_2:
# 179 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R2
	goto ParcelDelibirdSummit_T_Eskil_1

ParcelDelibirdSummit_T_Eskil_3:
# 178 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R2
	goto_if 0, ParcelDelibirdSummit_T_Eskil_2
	goto ParcelDelibirdSummit_T_Eskil_1

ParcelDelibirdSummit_T_Eskil_7:
# 182 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R3
	goto ParcelDelibirdSummit_T_Eskil_6

ParcelDelibirdSummit_T_Eskil_8:
# 181 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R3
	goto_if 0, ParcelDelibirdSummit_T_Eskil_7
	goto ParcelDelibirdSummit_T_Eskil_6

ParcelDelibirdSummit_T_Eskil_12:
# 185 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R4
	goto ParcelDelibirdSummit_T_Eskil_11

ParcelDelibirdSummit_T_Eskil_13:
# 184 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R4
	goto_if 0, ParcelDelibirdSummit_T_Eskil_12
	goto ParcelDelibirdSummit_T_Eskil_11

ParcelDelibirdSummit_T_Eskil_17:
# 188 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R5
	goto ParcelDelibirdSummit_T_Eskil_16

ParcelDelibirdSummit_T_Eskil_18:
# 187 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R5
	goto_if 0, ParcelDelibirdSummit_T_Eskil_17
	goto ParcelDelibirdSummit_T_Eskil_16


ParcelDelibirdSummit_T_Eskil_FirstWin::
# 194 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_Text_2, MSGBOX_DEFAULT
# 195 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R2::
# 199 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 200 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 201 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_0, MSGBOX_YESNO
# 202 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R2_2
# 207 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R2, ParcelDelibirdSummit_T_Eskil_R2_Text_2
# 208 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_3, MSGBOX_DEFAULT
# 209 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R2_2:
# 203 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 204 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R3::
# 213 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 214 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 215 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R3_Text_0, MSGBOX_YESNO
# 216 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R3_2
# 221 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R3, ParcelDelibirdSummit_T_Eskil_R3_Text_1
# 222 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R3_Text_2, MSGBOX_DEFAULT
# 223 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R3_2:
# 217 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 218 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R4::
# 227 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 228 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 229 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R4_Text_0, MSGBOX_YESNO
# 230 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R4_2
# 235 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R4, ParcelDelibirdSummit_T_Eskil_R2_Text_2
# 236 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R4_Text_1, MSGBOX_DEFAULT
# 237 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R4_2:
# 231 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 232 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R5::
# 241 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 242 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 243 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R5_Text_0, MSGBOX_YESNO
# 244 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R5_2
# 249 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R5, ParcelDelibirdSummit_T_Eskil_R5_Text_1
# 250 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R5_Text_2, MSGBOX_DEFAULT
# 251 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R5_2:
# 245 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 246 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv::
# 256 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_LIV, ParcelDelibirdSummit_T_Liv_Text_0, ParcelDelibirdSummit_T_Liv_Text_1, ParcelDelibirdSummit_T_Liv_FirstWin
# 260 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 261 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Liv_3
ParcelDelibirdSummit_T_Liv_1:
# 264 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Liv_8
ParcelDelibirdSummit_T_Liv_6:
# 267 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Liv_13
ParcelDelibirdSummit_T_Liv_11:
# 270 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Liv_18
ParcelDelibirdSummit_T_Liv_16:
# 273 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Liv_2:
# 262 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R2
	goto ParcelDelibirdSummit_T_Liv_1

ParcelDelibirdSummit_T_Liv_3:
# 261 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R2
	goto_if 0, ParcelDelibirdSummit_T_Liv_2
	goto ParcelDelibirdSummit_T_Liv_1

ParcelDelibirdSummit_T_Liv_7:
# 265 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R3
	goto ParcelDelibirdSummit_T_Liv_6

ParcelDelibirdSummit_T_Liv_8:
# 264 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R3
	goto_if 0, ParcelDelibirdSummit_T_Liv_7
	goto ParcelDelibirdSummit_T_Liv_6

ParcelDelibirdSummit_T_Liv_12:
# 268 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R4
	goto ParcelDelibirdSummit_T_Liv_11

ParcelDelibirdSummit_T_Liv_13:
# 267 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R4
	goto_if 0, ParcelDelibirdSummit_T_Liv_12
	goto ParcelDelibirdSummit_T_Liv_11

ParcelDelibirdSummit_T_Liv_17:
# 271 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R5
	goto ParcelDelibirdSummit_T_Liv_16

ParcelDelibirdSummit_T_Liv_18:
# 270 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R5
	goto_if 0, ParcelDelibirdSummit_T_Liv_17
	goto ParcelDelibirdSummit_T_Liv_16


ParcelDelibirdSummit_T_Liv_FirstWin::
# 277 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_Text_2, MSGBOX_DEFAULT
# 278 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R2::
# 282 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 283 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 284 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_0, MSGBOX_YESNO
# 285 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R2_2
# 290 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R2, ParcelDelibirdSummit_T_Liv_R2_Text_2
# 291 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_3, MSGBOX_DEFAULT
# 292 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R2_2:
# 286 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 287 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R3::
# 296 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 297 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 298 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R3_Text_0, MSGBOX_YESNO
# 299 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R3_2
# 304 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R3, ParcelDelibirdSummit_T_Liv_R3_Text_1
# 305 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R3_Text_2, MSGBOX_DEFAULT
# 306 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R3_2:
# 300 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 301 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R4::
# 310 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 311 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 312 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R4_Text_0, MSGBOX_YESNO
# 313 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R4_2
# 318 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R4, ParcelDelibirdSummit_T_Liv_R3_Text_1
# 319 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R4_Text_1, MSGBOX_DEFAULT
# 320 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R4_2:
# 314 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 315 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R5::
# 324 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 325 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 326 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R5_Text_0, MSGBOX_YESNO
# 327 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R5_2
# 332 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R5, ParcelDelibirdSummit_T_Liv_R5_Text_1
# 333 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R5_Text_2, MSGBOX_DEFAULT
# 334 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R5_2:
# 328 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 329 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta::
# 339 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_BIRGITTA, ParcelDelibirdSummit_T_Birgitta_Text_0, ParcelDelibirdSummit_T_Birgitta_Text_1, ParcelDelibirdSummit_T_Birgitta_FirstWin
# 343 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 344 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_3
ParcelDelibirdSummit_T_Birgitta_1:
# 347 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_8
ParcelDelibirdSummit_T_Birgitta_6:
# 350 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_13
ParcelDelibirdSummit_T_Birgitta_11:
# 353 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_18
ParcelDelibirdSummit_T_Birgitta_16:
# 356 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Birgitta_2:
# 345 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R2
	goto ParcelDelibirdSummit_T_Birgitta_1

ParcelDelibirdSummit_T_Birgitta_3:
# 344 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R2
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_2
	goto ParcelDelibirdSummit_T_Birgitta_1

ParcelDelibirdSummit_T_Birgitta_7:
# 348 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R3
	goto ParcelDelibirdSummit_T_Birgitta_6

ParcelDelibirdSummit_T_Birgitta_8:
# 347 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R3
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_7
	goto ParcelDelibirdSummit_T_Birgitta_6

ParcelDelibirdSummit_T_Birgitta_12:
# 351 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R4
	goto ParcelDelibirdSummit_T_Birgitta_11

ParcelDelibirdSummit_T_Birgitta_13:
# 350 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R4
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_12
	goto ParcelDelibirdSummit_T_Birgitta_11

ParcelDelibirdSummit_T_Birgitta_17:
# 354 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R5
	goto ParcelDelibirdSummit_T_Birgitta_16

ParcelDelibirdSummit_T_Birgitta_18:
# 353 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R5
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_17
	goto ParcelDelibirdSummit_T_Birgitta_16


ParcelDelibirdSummit_T_Birgitta_FirstWin::
# 360 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_Text_2, MSGBOX_DEFAULT
# 361 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R2::
# 365 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 366 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 367 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_0, MSGBOX_YESNO
# 368 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R2_2
# 373 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R2, ParcelDelibirdSummit_T_Birgitta_R2_Text_2
# 374 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_3, MSGBOX_DEFAULT
# 375 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R2_2:
# 369 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 370 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R3::
# 379 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 380 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 381 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R3_Text_0, MSGBOX_YESNO
# 382 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R3_2
# 387 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R3, ParcelDelibirdSummit_T_Birgitta_R3_Text_1
# 388 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R3_Text_2, MSGBOX_DEFAULT
# 389 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R3_2:
# 383 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 384 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R4::
# 393 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 394 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 395 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R4_Text_0, MSGBOX_YESNO
# 396 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R4_2
# 401 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R4, ParcelDelibirdSummit_T_Birgitta_R4_Text_1
# 402 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R4_Text_2, MSGBOX_DEFAULT
# 403 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R4_2:
# 397 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 398 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R5::
# 407 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 408 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 409 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R5_Text_0, MSGBOX_YESNO
# 410 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R5_2
# 415 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R5, ParcelDelibirdSummit_T_Birgitta_R3_Text_1
# 416 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R5_Text_1, MSGBOX_DEFAULT
# 417 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R5_2:
# 411 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 412 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald::
# 422 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_TORVALD, ParcelDelibirdSummit_T_Torvald_Text_0, ParcelDelibirdSummit_T_Torvald_Text_1, ParcelDelibirdSummit_T_Torvald_FirstWin
# 426 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 427 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Torvald_3
ParcelDelibirdSummit_T_Torvald_1:
# 430 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Torvald_8
ParcelDelibirdSummit_T_Torvald_6:
# 433 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Torvald_13
ParcelDelibirdSummit_T_Torvald_11:
# 436 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Torvald_18
ParcelDelibirdSummit_T_Torvald_16:
# 439 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Torvald_2:
# 428 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R2
	goto ParcelDelibirdSummit_T_Torvald_1

ParcelDelibirdSummit_T_Torvald_3:
# 427 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R2
	goto_if 0, ParcelDelibirdSummit_T_Torvald_2
	goto ParcelDelibirdSummit_T_Torvald_1

ParcelDelibirdSummit_T_Torvald_7:
# 431 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R3
	goto ParcelDelibirdSummit_T_Torvald_6

ParcelDelibirdSummit_T_Torvald_8:
# 430 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R3
	goto_if 0, ParcelDelibirdSummit_T_Torvald_7
	goto ParcelDelibirdSummit_T_Torvald_6

ParcelDelibirdSummit_T_Torvald_12:
# 434 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R4
	goto ParcelDelibirdSummit_T_Torvald_11

ParcelDelibirdSummit_T_Torvald_13:
# 433 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R4
	goto_if 0, ParcelDelibirdSummit_T_Torvald_12
	goto ParcelDelibirdSummit_T_Torvald_11

ParcelDelibirdSummit_T_Torvald_17:
# 437 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R5
	goto ParcelDelibirdSummit_T_Torvald_16

ParcelDelibirdSummit_T_Torvald_18:
# 436 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R5
	goto_if 0, ParcelDelibirdSummit_T_Torvald_17
	goto ParcelDelibirdSummit_T_Torvald_16


ParcelDelibirdSummit_T_Torvald_FirstWin::
# 443 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_Text_2, MSGBOX_DEFAULT
# 444 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R2::
# 448 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 449 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 450 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_0, MSGBOX_YESNO
# 451 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R2_2
# 456 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R2, ParcelDelibirdSummit_T_Torvald_R2_Text_2
# 457 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_3, MSGBOX_DEFAULT
# 458 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R2_2:
# 452 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 453 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R3::
# 462 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 463 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 464 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R3_Text_0, MSGBOX_YESNO
# 465 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R3_2
# 470 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R3, ParcelDelibirdSummit_T_Torvald_R3_Text_1
# 471 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R3_Text_2, MSGBOX_DEFAULT
# 472 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R3_2:
# 466 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 467 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R4::
# 476 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 477 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 478 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R4_Text_0, MSGBOX_YESNO
# 479 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R4_2
# 484 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R4, ParcelDelibirdSummit_T_Torvald_R4_Text_1
# 485 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R4_Text_2, MSGBOX_DEFAULT
# 486 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R4_2:
# 480 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 481 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R5::
# 490 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 491 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 492 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R5_Text_0, MSGBOX_YESNO
# 493 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R5_2
# 498 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R5, ParcelDelibirdSummit_T_Torvald_R5_Text_1
# 499 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R5_Text_2, MSGBOX_DEFAULT
# 500 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R5_2:
# 494 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 495 "data/maps/ParcelDelibirdSummit/scripts.pory"
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
# 53 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Kari: The pond wasn't here last\n"
	.string "Midwinter. My sledge run went right\l"
	.string "where the middle is.\p"
	.string "Gran says keep off it. There's nothing\n"
	.string "to keep off.\p"
	.string "The trees are leaning. Dad says they're\n"
	.string "sad. I think they're just leaning.$"

ParcelDelibirdSummit_PeakSign_Text_0:
# 60 "data/maps/ParcelDelibirdSummit/scripts.pory"
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
# 65 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "SNOW STAKES\p"
	.string "Painted to the snowline every Midwinter\n"
	.string "morning for sixty years. The lowest\l"
	.string "stake has been bare three winters. The\l"
	.string "one above it, two.\p"
	.string "Someone has painted this year's date on\n"
	.string "the top stake and left the line where it\l"
	.string "was.$"

ParcelDelibirdSummit_PondSign_Text_0:
# 70 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "The ground here has let go. A pond\n"
	.string "nobody dug. Trees leaning away from\l"
	.string "each other like people who have\l"
	.string "stopped speaking.\p"
	.string "A child's sledge has been wedged up in\n"
	.string "the fork of the nearest tree, out of\l"
	.string "the wet, as if someone expected to need\l"
	.string "it again.$"

ParcelDelibirdSummit_T_Ragnar_Text_0:
# 91 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Twenty years I've climbed this\n"
	.string "on Midwinter morning. Used to be on\l"
	.string "skis. Now it's boots, and mud to the\l"
	.string "ankle.\p"
	.string "Battle me before the mud gets you too.$"

ParcelDelibirdSummit_T_Ragnar_Text_1:
# 92 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Good footing.$"

ParcelDelibirdSummit_T_Ragnar_Text_2:
# 107 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: The stairs are cut where the\n"
	.string "old snow slope was. We didn't need\l"
	.string "stairs when there was snow.$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_0:
# 118 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_1:
# 120 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_2:
# 124 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_3:
# 125 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelDelibirdSummit_T_Ragnar_R3_Text_0:
# 132 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelDelibirdSummit_T_Ragnar_R3_Text_1:
# 138 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: That's the one I wanted to see.$"

ParcelDelibirdSummit_T_Ragnar_R3_Text_2:
# 139 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibirdSummit_T_Ragnar_R4_Text_0:
# 146 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelDelibirdSummit_T_Ragnar_R4_Text_1:
# 153 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdSummit_T_Ragnar_R5_Text_0:
# 160 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdSummit_T_Ragnar_R5_Text_1:
# 167 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelDelibirdSummit_T_Eskil_Text_0:
# 174 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Hush. The DELIBIRD nest on the\n"
	.string "far side of the stakes. Fewer every\l"
	.string "year.\p"
	.string "If you must make noise, make it a\n"
	.string "battle.$"

ParcelDelibirdSummit_T_Eskil_Text_1:
# 175 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Loud enough.$"

ParcelDelibirdSummit_T_Eskil_Text_2:
# 190 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: They cache food in the snow for\n"
	.string "the hard months. There's less snow to\l"
	.string "cache in, so they're learning the rocks.\p"
	.string "Clever birds. Cleverer than us, maybe.\n"
	.string "We're still caching in the snow.$"

ParcelDelibirdSummit_T_Eskil_R2_Text_0:
# 201 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: I kept the team up for this.\n"
	.string "Again?$"

ParcelDelibirdSummit_T_Eskil_R2_Text_1:
# 203 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: No hurry. The water keeps.$"

ParcelDelibirdSummit_T_Eskil_R2_Text_2:
# 207 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: …Again, then. Later.$"

ParcelDelibirdSummit_T_Eskil_R2_Text_3:
# 208 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibirdSummit_T_Eskil_R3_Text_0:
# 215 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelDelibirdSummit_T_Eskil_R3_Text_1:
# 221 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Eskil_R3_Text_2:
# 222 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibirdSummit_T_Eskil_R4_Text_0:
# 229 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdSummit_T_Eskil_R4_Text_1:
# 236 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdSummit_T_Eskil_R5_Text_0:
# 243 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdSummit_T_Eskil_R5_Text_1:
# 249 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Right. That's the whole of it.$"

ParcelDelibirdSummit_T_Eskil_R5_Text_2:
# 250 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelDelibirdSummit_T_Liv_Text_0:
# 257 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Cadet LIV, Skaldmere Survey, snow\n"
	.string "gauge detail. The gauge reads zero. It\l"
	.string "has read zero since I was posted.\p"
	.string "A battle would at least be a number.$"

ParcelDelibirdSummit_T_Liv_Text_1:
# 258 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's a number.$"

ParcelDelibirdSummit_T_Liv_Text_2:
# 273 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: ILEX says write the zero down\n"
	.string "anyway. A zero is data.\p"
	.string "Nobody believes you until there are\n"
	.string "twenty of them in a row.$"

ParcelDelibirdSummit_T_Liv_R2_Text_0:
# 284 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelDelibirdSummit_T_Liv_R2_Text_1:
# 286 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: No hurry. The water keeps.$"

ParcelDelibirdSummit_T_Liv_R2_Text_2:
# 290 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Liv_R2_Text_3:
# 291 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelDelibirdSummit_T_Liv_R3_Text_0:
# 298 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdSummit_T_Liv_R3_Text_1:
# 304 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: …Again, then. Later.$"

ParcelDelibirdSummit_T_Liv_R3_Text_2:
# 305 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibirdSummit_T_Liv_R4_Text_0:
# 312 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelDelibirdSummit_T_Liv_R4_Text_1:
# 319 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdSummit_T_Liv_R5_Text_0:
# 326 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelDelibirdSummit_T_Liv_R5_Text_1:
# 332 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's the one I wanted to see.$"

ParcelDelibirdSummit_T_Liv_R5_Text_2:
# 333 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelDelibirdSummit_T_Birgitta_Text_0:
# 340 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: I taught every child on this\n"
	.string "island to ski on this slope. Watch your\l"
	.string "step -- there is nothing to ski on.\p"
	.string "Let me see what you've learned instead.$"

ParcelDelibirdSummit_T_Birgitta_Text_1:
# 341 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Well taught, by someone.$"

ParcelDelibirdSummit_T_Birgitta_Text_2:
# 356 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: The young ones will remember\n"
	.string "a green summit at Midwinter and think it\l"
	.string "normal.\p"
	.string "That is the part I cannot forgive. Not\n"
	.string "the thaw. The forgetting.$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_0:
# 367 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Clearances or not, I want\n"
	.string "that one back. Go?$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_1:
# 369 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_2:
# 373 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Still yours.$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_3:
# 374 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelDelibirdSummit_T_Birgitta_R3_Text_0:
# 381 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Three stamps, then five.\n"
	.string "Fine. Me next?$"

ParcelDelibirdSummit_T_Birgitta_R3_Text_1:
# 387 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: …Again, then. Later.$"

ParcelDelibirdSummit_T_Birgitta_R3_Text_2:
# 388 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: One more in me. After the\n"
	.string "high ground.$"

ParcelDelibirdSummit_T_Birgitta_R4_Text_0:
# 395 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdSummit_T_Birgitta_R4_Text_1:
# 401 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: That's the one I wanted to\n"
	.string "see.$"

ParcelDelibirdSummit_T_Birgitta_R4_Text_2:
# 402 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdSummit_T_Birgitta_R5_Text_0:
# 409 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelDelibirdSummit_T_Birgitta_R5_Text_1:
# 416 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Five. Write that one down\n"
	.string "too. I'll know you did.$"

ParcelDelibirdSummit_T_Torvald_Text_0:
# 423 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: The tarn's new. Three winters.\n"
	.string "INGRID says the ground under it was ice\l"
	.string "since before the island had a name.\p"
	.string "You want the top, you come through me\n"
	.string "first.$"

ParcelDelibirdSummit_T_Torvald_Text_1:
# 424 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Go on up, then.$"

ParcelDelibirdSummit_T_Torvald_Text_2:
# 439 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Look at the tarn and tell me\n"
	.string "you can see the bottom. You can.\p"
	.string "That's the problem. There's no bottom\n"
	.string "to it that isn't us.$"

ParcelDelibirdSummit_T_Torvald_R2_Text_0:
# 450 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelDelibirdSummit_T_Torvald_R2_Text_1:
# 452 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Fine. Same spot.$"

ParcelDelibirdSummit_T_Torvald_R2_Text_2:
# 456 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: That's the one I wanted to\n"
	.string "see.$"

ParcelDelibirdSummit_T_Torvald_R2_Text_3:
# 457 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelDelibirdSummit_T_Torvald_R3_Text_0:
# 464 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdSummit_T_Torvald_R3_Text_1:
# 470 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: …Fair.$"

ParcelDelibirdSummit_T_Torvald_R3_Text_2:
# 471 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelDelibirdSummit_T_Torvald_R4_Text_0:
# 478 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdSummit_T_Torvald_R4_Text_1:
# 484 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: …Again, then. Later.$"

ParcelDelibirdSummit_T_Torvald_R4_Text_2:
# 485 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdSummit_T_Torvald_R5_Text_0:
# 492 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdSummit_T_Torvald_R5_Text_1:
# 498 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Torvald_R5_Text_2:
# 499 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Five. Write that one down too.\n"
	.string "I'll know you did.$"
