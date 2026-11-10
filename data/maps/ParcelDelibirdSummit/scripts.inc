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
	goto_if_set FLAG_SKALD_Q_SLEDGE, ParcelDelibirdSummit_Kari_3
ParcelDelibirdSummit_Kari_1:
# 62 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdSummit_Kari_7
# 67 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SLEDGE_DONE, ParcelDelibirdSummit_Kari_13
# 73 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelDelibirdSummit_Kari_16
# 78 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_7, MSGBOX_DEFAULT
# 79 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Kari_2:
# 49 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SLEDGE_FOUND, ParcelDelibirdSummit_Kari_10
# 58 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_3, MSGBOX_DEFAULT
# 59 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Kari_3:
# 48 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SLEDGE_DONE, ParcelDelibirdSummit_Kari_2
	goto ParcelDelibirdSummit_Kari_1

ParcelDelibirdSummit_Kari_7:
# 63 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_4, MSGBOX_DEFAULT
# 64 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Kari_10:
# 50 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_0, MSGBOX_DEFAULT
# 51 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_1, MSGBOX_DEFAULT
# 52 "data/maps/ParcelDelibirdSummit/scripts.pory"
	giveitem ITEM_SHELL_BELL
# 53 "data/maps/ParcelDelibirdSummit/scripts.pory"
	setflag FLAG_SKALD_Q_SLEDGE_DONE
# 54 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_2, MSGBOX_DEFAULT
# 55 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Kari_13:
# 68 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_5, MSGBOX_DEFAULT
# 69 "data/maps/ParcelDelibirdSummit/scripts.pory"
	setflag FLAG_SKALD_Q_SLEDGE
# 70 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Kari_16:
# 74 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_6, MSGBOX_DEFAULT
# 75 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_PeakSign::
# 85 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PeakSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_StakesSign::
# 90 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_StakesSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_PondSign::
# 95 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PondSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_ItemMaxRevive::
# 101 "data/maps/ParcelDelibirdSummit/scripts.pory"
	finditem ITEM_MAX_REVIVE
	end


ParcelDelibirdSummit_ItemHyperPotion::
# 105 "data/maps/ParcelDelibirdSummit/scripts.pory"
	finditem ITEM_HYPER_POTION
	end


ParcelDelibirdSummit_ItemRareCandy::
# 109 "data/maps/ParcelDelibirdSummit/scripts.pory"
	finditem ITEM_RARE_CANDY
	end


ParcelDelibirdSummit_T_Ragnar::
# 115 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_RAGNAR, ParcelDelibirdSummit_T_Ragnar_Text_0, ParcelDelibirdSummit_T_Ragnar_Text_1, ParcelDelibirdSummit_T_Ragnar_FirstWin
# 119 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 120 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_3
ParcelDelibirdSummit_T_Ragnar_1:
# 123 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_8
ParcelDelibirdSummit_T_Ragnar_6:
# 126 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_13
ParcelDelibirdSummit_T_Ragnar_11:
# 129 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_18
ParcelDelibirdSummit_T_Ragnar_16:
# 132 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Ragnar_2:
# 121 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R2
	goto ParcelDelibirdSummit_T_Ragnar_1

ParcelDelibirdSummit_T_Ragnar_3:
# 120 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R2
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_2
	goto ParcelDelibirdSummit_T_Ragnar_1

ParcelDelibirdSummit_T_Ragnar_7:
# 124 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R3
	goto ParcelDelibirdSummit_T_Ragnar_6

ParcelDelibirdSummit_T_Ragnar_8:
# 123 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R3
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_7
	goto ParcelDelibirdSummit_T_Ragnar_6

ParcelDelibirdSummit_T_Ragnar_12:
# 127 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R4
	goto ParcelDelibirdSummit_T_Ragnar_11

ParcelDelibirdSummit_T_Ragnar_13:
# 126 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R4
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_12
	goto ParcelDelibirdSummit_T_Ragnar_11

ParcelDelibirdSummit_T_Ragnar_17:
# 130 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R5
	goto ParcelDelibirdSummit_T_Ragnar_16

ParcelDelibirdSummit_T_Ragnar_18:
# 129 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R5
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_17
	goto ParcelDelibirdSummit_T_Ragnar_16


ParcelDelibirdSummit_T_Ragnar_FirstWin::
# 136 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_Text_2, MSGBOX_DEFAULT
# 137 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R2::
# 141 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 142 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 143 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_0, MSGBOX_YESNO
# 144 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R2_2
# 149 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R2, ParcelDelibirdSummit_T_Ragnar_R2_Text_2
# 150 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_3, MSGBOX_DEFAULT
# 151 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R2_2:
# 145 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 146 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R3::
# 155 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 156 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 157 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R3_Text_0, MSGBOX_YESNO
# 158 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R3_2
# 163 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R3, ParcelDelibirdSummit_T_Ragnar_R3_Text_1
# 164 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R3_Text_2, MSGBOX_DEFAULT
# 165 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R3_2:
# 159 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 160 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R4::
# 169 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 170 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 171 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R4_Text_0, MSGBOX_YESNO
# 172 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R4_2
# 177 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R4, ParcelDelibirdSummit_T_Ragnar_R3_Text_1
# 178 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R4_Text_1, MSGBOX_DEFAULT
# 179 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R4_2:
# 173 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 174 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R5::
# 183 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 184 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 185 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R5_Text_0, MSGBOX_YESNO
# 186 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R5_2
# 191 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R5, ParcelDelibirdSummit_T_Ragnar_R2_Text_2
# 192 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R5_Text_1, MSGBOX_DEFAULT
# 193 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R5_2:
# 187 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 188 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil::
# 198 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_ESKIL, ParcelDelibirdSummit_T_Eskil_Text_0, ParcelDelibirdSummit_T_Eskil_Text_1, ParcelDelibirdSummit_T_Eskil_FirstWin
# 202 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 203 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Eskil_3
ParcelDelibirdSummit_T_Eskil_1:
# 206 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Eskil_8
ParcelDelibirdSummit_T_Eskil_6:
# 209 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Eskil_13
ParcelDelibirdSummit_T_Eskil_11:
# 212 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Eskil_18
ParcelDelibirdSummit_T_Eskil_16:
# 215 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Eskil_2:
# 204 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R2
	goto ParcelDelibirdSummit_T_Eskil_1

ParcelDelibirdSummit_T_Eskil_3:
# 203 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R2
	goto_if 0, ParcelDelibirdSummit_T_Eskil_2
	goto ParcelDelibirdSummit_T_Eskil_1

ParcelDelibirdSummit_T_Eskil_7:
# 207 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R3
	goto ParcelDelibirdSummit_T_Eskil_6

ParcelDelibirdSummit_T_Eskil_8:
# 206 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R3
	goto_if 0, ParcelDelibirdSummit_T_Eskil_7
	goto ParcelDelibirdSummit_T_Eskil_6

ParcelDelibirdSummit_T_Eskil_12:
# 210 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R4
	goto ParcelDelibirdSummit_T_Eskil_11

ParcelDelibirdSummit_T_Eskil_13:
# 209 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R4
	goto_if 0, ParcelDelibirdSummit_T_Eskil_12
	goto ParcelDelibirdSummit_T_Eskil_11

ParcelDelibirdSummit_T_Eskil_17:
# 213 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R5
	goto ParcelDelibirdSummit_T_Eskil_16

ParcelDelibirdSummit_T_Eskil_18:
# 212 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R5
	goto_if 0, ParcelDelibirdSummit_T_Eskil_17
	goto ParcelDelibirdSummit_T_Eskil_16


ParcelDelibirdSummit_T_Eskil_FirstWin::
# 219 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_Text_2, MSGBOX_DEFAULT
# 220 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R2::
# 224 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 225 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 226 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_0, MSGBOX_YESNO
# 227 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R2_2
# 232 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R2, ParcelDelibirdSummit_T_Eskil_R2_Text_2
# 233 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_3, MSGBOX_DEFAULT
# 234 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R2_2:
# 228 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 229 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R3::
# 238 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 239 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 240 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R3_Text_0, MSGBOX_YESNO
# 241 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R3_2
# 246 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R3, ParcelDelibirdSummit_T_Eskil_R3_Text_1
# 247 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R3_Text_2, MSGBOX_DEFAULT
# 248 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R3_2:
# 242 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 243 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R4::
# 252 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 253 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 254 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R4_Text_0, MSGBOX_YESNO
# 255 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R4_2
# 260 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R4, ParcelDelibirdSummit_T_Eskil_R2_Text_2
# 261 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R4_Text_1, MSGBOX_DEFAULT
# 262 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R4_2:
# 256 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 257 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R5::
# 266 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 267 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 268 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R5_Text_0, MSGBOX_YESNO
# 269 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R5_2
# 274 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R5, ParcelDelibirdSummit_T_Eskil_R5_Text_1
# 275 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R5_Text_2, MSGBOX_DEFAULT
# 276 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R5_2:
# 270 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 271 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv::
# 281 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_LIV, ParcelDelibirdSummit_T_Liv_Text_0, ParcelDelibirdSummit_T_Liv_Text_1, ParcelDelibirdSummit_T_Liv_FirstWin
# 285 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 286 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Liv_3
ParcelDelibirdSummit_T_Liv_1:
# 289 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Liv_8
ParcelDelibirdSummit_T_Liv_6:
# 292 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Liv_13
ParcelDelibirdSummit_T_Liv_11:
# 295 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Liv_18
ParcelDelibirdSummit_T_Liv_16:
# 298 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Liv_2:
# 287 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R2
	goto ParcelDelibirdSummit_T_Liv_1

ParcelDelibirdSummit_T_Liv_3:
# 286 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R2
	goto_if 0, ParcelDelibirdSummit_T_Liv_2
	goto ParcelDelibirdSummit_T_Liv_1

ParcelDelibirdSummit_T_Liv_7:
# 290 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R3
	goto ParcelDelibirdSummit_T_Liv_6

ParcelDelibirdSummit_T_Liv_8:
# 289 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R3
	goto_if 0, ParcelDelibirdSummit_T_Liv_7
	goto ParcelDelibirdSummit_T_Liv_6

ParcelDelibirdSummit_T_Liv_12:
# 293 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R4
	goto ParcelDelibirdSummit_T_Liv_11

ParcelDelibirdSummit_T_Liv_13:
# 292 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R4
	goto_if 0, ParcelDelibirdSummit_T_Liv_12
	goto ParcelDelibirdSummit_T_Liv_11

ParcelDelibirdSummit_T_Liv_17:
# 296 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R5
	goto ParcelDelibirdSummit_T_Liv_16

ParcelDelibirdSummit_T_Liv_18:
# 295 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R5
	goto_if 0, ParcelDelibirdSummit_T_Liv_17
	goto ParcelDelibirdSummit_T_Liv_16


ParcelDelibirdSummit_T_Liv_FirstWin::
# 302 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_Text_2, MSGBOX_DEFAULT
# 303 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R2::
# 307 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 308 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 309 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_0, MSGBOX_YESNO
# 310 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R2_2
# 315 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R2, ParcelDelibirdSummit_T_Liv_R2_Text_2
# 316 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_3, MSGBOX_DEFAULT
# 317 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R2_2:
# 311 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 312 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R3::
# 321 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 322 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 323 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R3_Text_0, MSGBOX_YESNO
# 324 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R3_2
# 329 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R3, ParcelDelibirdSummit_T_Liv_R3_Text_1
# 330 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R3_Text_2, MSGBOX_DEFAULT
# 331 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R3_2:
# 325 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 326 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R4::
# 335 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 336 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 337 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R4_Text_0, MSGBOX_YESNO
# 338 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R4_2
# 343 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R4, ParcelDelibirdSummit_T_Liv_R3_Text_1
# 344 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R4_Text_1, MSGBOX_DEFAULT
# 345 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R4_2:
# 339 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 340 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R5::
# 349 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 350 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 351 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R5_Text_0, MSGBOX_YESNO
# 352 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R5_2
# 357 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R5, ParcelDelibirdSummit_T_Liv_R5_Text_1
# 358 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R5_Text_2, MSGBOX_DEFAULT
# 359 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R5_2:
# 353 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 354 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta::
# 364 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_BIRGITTA, ParcelDelibirdSummit_T_Birgitta_Text_0, ParcelDelibirdSummit_T_Birgitta_Text_1, ParcelDelibirdSummit_T_Birgitta_FirstWin
# 368 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 369 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_3
ParcelDelibirdSummit_T_Birgitta_1:
# 372 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_8
ParcelDelibirdSummit_T_Birgitta_6:
# 375 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_13
ParcelDelibirdSummit_T_Birgitta_11:
# 378 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_18
ParcelDelibirdSummit_T_Birgitta_16:
# 381 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Birgitta_2:
# 370 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R2
	goto ParcelDelibirdSummit_T_Birgitta_1

ParcelDelibirdSummit_T_Birgitta_3:
# 369 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R2
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_2
	goto ParcelDelibirdSummit_T_Birgitta_1

ParcelDelibirdSummit_T_Birgitta_7:
# 373 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R3
	goto ParcelDelibirdSummit_T_Birgitta_6

ParcelDelibirdSummit_T_Birgitta_8:
# 372 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R3
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_7
	goto ParcelDelibirdSummit_T_Birgitta_6

ParcelDelibirdSummit_T_Birgitta_12:
# 376 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R4
	goto ParcelDelibirdSummit_T_Birgitta_11

ParcelDelibirdSummit_T_Birgitta_13:
# 375 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R4
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_12
	goto ParcelDelibirdSummit_T_Birgitta_11

ParcelDelibirdSummit_T_Birgitta_17:
# 379 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R5
	goto ParcelDelibirdSummit_T_Birgitta_16

ParcelDelibirdSummit_T_Birgitta_18:
# 378 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R5
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_17
	goto ParcelDelibirdSummit_T_Birgitta_16


ParcelDelibirdSummit_T_Birgitta_FirstWin::
# 385 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_Text_2, MSGBOX_DEFAULT
# 386 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R2::
# 390 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 391 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 392 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_0, MSGBOX_YESNO
# 393 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R2_2
# 398 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R2, ParcelDelibirdSummit_T_Birgitta_R2_Text_2
# 399 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_3, MSGBOX_DEFAULT
# 400 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R2_2:
# 394 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 395 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R3::
# 404 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 405 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 406 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R3_Text_0, MSGBOX_YESNO
# 407 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R3_2
# 412 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R3, ParcelDelibirdSummit_T_Birgitta_R3_Text_1
# 413 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R3_Text_2, MSGBOX_DEFAULT
# 414 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R3_2:
# 408 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 409 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R4::
# 418 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 419 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 420 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R4_Text_0, MSGBOX_YESNO
# 421 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R4_2
# 426 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R4, ParcelDelibirdSummit_T_Birgitta_R4_Text_1
# 427 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R4_Text_2, MSGBOX_DEFAULT
# 428 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R4_2:
# 422 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 423 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R5::
# 432 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 433 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 434 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R5_Text_0, MSGBOX_YESNO
# 435 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R5_2
# 440 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R5, ParcelDelibirdSummit_T_Birgitta_R3_Text_1
# 441 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R5_Text_1, MSGBOX_DEFAULT
# 442 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R5_2:
# 436 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 437 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald::
# 447 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_TORVALD, ParcelDelibirdSummit_T_Torvald_Text_0, ParcelDelibirdSummit_T_Torvald_Text_1, ParcelDelibirdSummit_T_Torvald_FirstWin
# 451 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 452 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Torvald_3
ParcelDelibirdSummit_T_Torvald_1:
# 455 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Torvald_8
ParcelDelibirdSummit_T_Torvald_6:
# 458 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Torvald_13
ParcelDelibirdSummit_T_Torvald_11:
# 461 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Torvald_18
ParcelDelibirdSummit_T_Torvald_16:
# 464 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Torvald_2:
# 453 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R2
	goto ParcelDelibirdSummit_T_Torvald_1

ParcelDelibirdSummit_T_Torvald_3:
# 452 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R2
	goto_if 0, ParcelDelibirdSummit_T_Torvald_2
	goto ParcelDelibirdSummit_T_Torvald_1

ParcelDelibirdSummit_T_Torvald_7:
# 456 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R3
	goto ParcelDelibirdSummit_T_Torvald_6

ParcelDelibirdSummit_T_Torvald_8:
# 455 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R3
	goto_if 0, ParcelDelibirdSummit_T_Torvald_7
	goto ParcelDelibirdSummit_T_Torvald_6

ParcelDelibirdSummit_T_Torvald_12:
# 459 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R4
	goto ParcelDelibirdSummit_T_Torvald_11

ParcelDelibirdSummit_T_Torvald_13:
# 458 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R4
	goto_if 0, ParcelDelibirdSummit_T_Torvald_12
	goto ParcelDelibirdSummit_T_Torvald_11

ParcelDelibirdSummit_T_Torvald_17:
# 462 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R5
	goto ParcelDelibirdSummit_T_Torvald_16

ParcelDelibirdSummit_T_Torvald_18:
# 461 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R5
	goto_if 0, ParcelDelibirdSummit_T_Torvald_17
	goto ParcelDelibirdSummit_T_Torvald_16


ParcelDelibirdSummit_T_Torvald_FirstWin::
# 468 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_Text_2, MSGBOX_DEFAULT
# 469 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R2::
# 473 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 474 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 475 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_0, MSGBOX_YESNO
# 476 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R2_2
# 481 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R2, ParcelDelibirdSummit_T_Torvald_R2_Text_2
# 482 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_3, MSGBOX_DEFAULT
# 483 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R2_2:
# 477 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 478 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R3::
# 487 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 488 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 489 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R3_Text_0, MSGBOX_YESNO
# 490 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R3_2
# 495 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R3, ParcelDelibirdSummit_T_Torvald_R3_Text_1
# 496 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R3_Text_2, MSGBOX_DEFAULT
# 497 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R3_2:
# 491 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 492 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R4::
# 501 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 502 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 503 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R4_Text_0, MSGBOX_YESNO
# 504 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R4_2
# 509 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R4, ParcelDelibirdSummit_T_Torvald_R4_Text_1
# 510 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R4_Text_2, MSGBOX_DEFAULT
# 511 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R4_2:
# 505 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 506 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R5::
# 515 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 516 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 517 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R5_Text_0, MSGBOX_YESNO
# 518 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R5_2
# 523 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R5, ParcelDelibirdSummit_T_Torvald_R5_Text_1
# 524 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R5_Text_2, MSGBOX_DEFAULT
# 525 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R5_2:
# 519 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 520 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_Sledge::
# 530 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SLEDGE, ParcelDelibirdSummit_Sledge_3
ParcelDelibirdSummit_Sledge_1:
# 535 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Sledge_Text_1, MSGBOX_SIGN
	end

ParcelDelibirdSummit_Sledge_2:
# 531 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Sledge_Text_0, MSGBOX_SIGN
# 532 "data/maps/ParcelDelibirdSummit/scripts.pory"
	setflag FLAG_SKALD_Q_SLEDGE_FOUND
	end

ParcelDelibirdSummit_Sledge_3:
# 530 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SLEDGE_FOUND, ParcelDelibirdSummit_Sledge_2
	goto ParcelDelibirdSummit_Sledge_1


ParcelDelibirdSummit_PairStakes::
# 542 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 543 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdSummit_PairStakes_2
# 548 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibirdSummit_PairStakes_3
# 553 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_7, MSGBOX_DEFAULT
# 554 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_8, MSGBOX_DEFAULT
# 555 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_9, MSGBOX_DEFAULT
# 556 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_10, MSGBOX_DEFAULT
ParcelDelibirdSummit_PairStakes_1:
# 558 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_PairStakes_2:
# 544 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_0, MSGBOX_DEFAULT
# 545 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_1, MSGBOX_DEFAULT
# 546 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_2, MSGBOX_DEFAULT
# 547 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_3, MSGBOX_DEFAULT
	goto ParcelDelibirdSummit_PairStakes_1

ParcelDelibirdSummit_PairStakes_3:
# 549 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_4, MSGBOX_DEFAULT
# 550 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_5, MSGBOX_DEFAULT
# 551 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_6, MSGBOX_DEFAULT
	goto ParcelDelibirdSummit_PairStakes_1


ParcelDelibirdSummit_Board1::
# 565 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Board1_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_Board2::
# 570 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Board2_Text_0, MSGBOX_SIGN
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
# 50 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Kari: You got it! It's got moss on it. It\n"
	.string "didn't have moss.\p"
	.string "There's nowhere to use it. Gran says\n"
	.string "there will be, up the top, if the snow\l"
	.string "comes back. Gran says 'if' now. She used\l"
	.string "to say 'when'.$"

ParcelDelibirdSummit_Kari_Text_1:
# 51 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Kari: Here. Gran gave me this for being\n"
	.string "brave about the pond. I wasn't brave. I\l"
	.string "was just here. You should have it; you\l"
	.string "climbed.$"

ParcelDelibirdSummit_Kari_Text_2:
# 54 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Kari: I'm going to keep the sledge\n"
	.string "inside. Dad says that's silly. I say the\l"
	.string "tree was silly.$"

ParcelDelibirdSummit_Kari_Text_3:
# 58 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Kari: The tree by the pond. The fork.\n"
	.string "You can see the runner sticking out.$"

ParcelDelibirdSummit_Kari_Text_4:
# 63 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Kari: They put a rope round my pond. Dad\n"
	.string "says it's for the little ones.\p"
	.string "I'm little. I think it's for everybody.$"

ParcelDelibirdSummit_Kari_Text_5:
# 68 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Kari: My sledge is up in the tree. Dad\n"
	.string "put it there, out of the wet, when the\l"
	.string "pond came. He says it's safe there. I\l"
	.string "can see it from here.\p"
	.string "It's not safe. It's just high.\p"
	.string "Can you get it down? You're tall. I'm not\n"
	.string "allowed to climb since the ground went\l"
	.string "soft.$"

ParcelDelibirdSummit_Kari_Text_6:
# 74 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Kari: Gran says the sea by the coast is\n"
	.string "sick and the ranger wrote it in a book.\l"
	.string "Is my pond in the book?\p"
	.string "I want it in the book. Not because it's\n"
	.string "sick. Because it was my sledge run\l"
	.string "first.$"

ParcelDelibirdSummit_Kari_Text_7:
# 78 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "Kari: The pond wasn't here last\n"
	.string "Midwinter. My sledge run went right\l"
	.string "where the middle is.\p"
	.string "Gran says keep off it. There's nothing\n"
	.string "to keep off.\p"
	.string "The trees are leaning. Dad says they're\n"
	.string "sad. I think they're just leaning.$"

ParcelDelibirdSummit_PeakSign_Text_0:
# 85 "data/maps/ParcelDelibirdSummit/scripts.pory"
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
# 90 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "SNOW STAKES\p"
	.string "Painted to the snowline every Midwinter\n"
	.string "morning for sixty years. The lowest\l"
	.string "stake has been bare three winters. The\l"
	.string "one above it, two.\p"
	.string "Someone has painted this year's date on\n"
	.string "the top stake and left the line where it\l"
	.string "was.$"

ParcelDelibirdSummit_PondSign_Text_0:
# 95 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "The ground here has let go. A pond\n"
	.string "nobody dug. Trees leaning away from\l"
	.string "each other like people who have\l"
	.string "stopped speaking.\p"
	.string "A child's sledge has been wedged up in\n"
	.string "the fork of the nearest tree, out of\l"
	.string "the wet, as if someone expected to need\l"
	.string "it again.$"

ParcelDelibirdSummit_T_Ragnar_Text_0:
# 116 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Twenty years I've climbed this\n"
	.string "on Midwinter morning. Used to be on\l"
	.string "skis. Now it's boots, and mud to the\l"
	.string "ankle.\p"
	.string "Battle me before the mud gets you too.$"

ParcelDelibirdSummit_T_Ragnar_Text_1:
# 117 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Good footing.$"

ParcelDelibirdSummit_T_Ragnar_Text_2:
# 132 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: The stairs are cut where the\n"
	.string "old snow slope was. We didn't need\l"
	.string "stairs when there was snow.$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_0:
# 143 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_1:
# 145 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_2:
# 149 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_3:
# 150 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelDelibirdSummit_T_Ragnar_R3_Text_0:
# 157 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelDelibirdSummit_T_Ragnar_R3_Text_1:
# 163 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: That's the one I wanted to see.$"

ParcelDelibirdSummit_T_Ragnar_R3_Text_2:
# 164 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibirdSummit_T_Ragnar_R4_Text_0:
# 171 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelDelibirdSummit_T_Ragnar_R4_Text_1:
# 178 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdSummit_T_Ragnar_R5_Text_0:
# 185 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdSummit_T_Ragnar_R5_Text_1:
# 192 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelDelibirdSummit_T_Eskil_Text_0:
# 199 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Hush. The DELIBIRD nest on the\n"
	.string "far side of the stakes. Fewer every\l"
	.string "year.\p"
	.string "If you must make noise, make it a\n"
	.string "battle.$"

ParcelDelibirdSummit_T_Eskil_Text_1:
# 200 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Loud enough.$"

ParcelDelibirdSummit_T_Eskil_Text_2:
# 215 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: They cache food in the snow for\n"
	.string "the hard months. There's less snow to\l"
	.string "cache in, so they're learning the rocks.\p"
	.string "Clever birds. Cleverer than us, maybe.\n"
	.string "We're still caching in the snow.$"

ParcelDelibirdSummit_T_Eskil_R2_Text_0:
# 226 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: I kept the team up for this.\n"
	.string "Again?$"

ParcelDelibirdSummit_T_Eskil_R2_Text_1:
# 228 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: No hurry. The water keeps.$"

ParcelDelibirdSummit_T_Eskil_R2_Text_2:
# 232 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: …Again, then. Later.$"

ParcelDelibirdSummit_T_Eskil_R2_Text_3:
# 233 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibirdSummit_T_Eskil_R3_Text_0:
# 240 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelDelibirdSummit_T_Eskil_R3_Text_1:
# 246 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Eskil_R3_Text_2:
# 247 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibirdSummit_T_Eskil_R4_Text_0:
# 254 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdSummit_T_Eskil_R4_Text_1:
# 261 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdSummit_T_Eskil_R5_Text_0:
# 268 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdSummit_T_Eskil_R5_Text_1:
# 274 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Right. That's the whole of it.$"

ParcelDelibirdSummit_T_Eskil_R5_Text_2:
# 275 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelDelibirdSummit_T_Liv_Text_0:
# 282 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Cadet LIV, Skaldmere Survey, snow\n"
	.string "gauge detail. The gauge reads zero. It\l"
	.string "has read zero since I was posted.\p"
	.string "A battle would at least be a number.$"

ParcelDelibirdSummit_T_Liv_Text_1:
# 283 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's a number.$"

ParcelDelibirdSummit_T_Liv_Text_2:
# 298 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: ILEX says write the zero down\n"
	.string "anyway. A zero is data.\p"
	.string "Nobody believes you until there are\n"
	.string "twenty of them in a row.$"

ParcelDelibirdSummit_T_Liv_R2_Text_0:
# 309 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelDelibirdSummit_T_Liv_R2_Text_1:
# 311 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: No hurry. The water keeps.$"

ParcelDelibirdSummit_T_Liv_R2_Text_2:
# 315 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Liv_R2_Text_3:
# 316 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelDelibirdSummit_T_Liv_R3_Text_0:
# 323 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdSummit_T_Liv_R3_Text_1:
# 329 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: …Again, then. Later.$"

ParcelDelibirdSummit_T_Liv_R3_Text_2:
# 330 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibirdSummit_T_Liv_R4_Text_0:
# 337 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelDelibirdSummit_T_Liv_R4_Text_1:
# 344 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdSummit_T_Liv_R5_Text_0:
# 351 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelDelibirdSummit_T_Liv_R5_Text_1:
# 357 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's the one I wanted to see.$"

ParcelDelibirdSummit_T_Liv_R5_Text_2:
# 358 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelDelibirdSummit_T_Birgitta_Text_0:
# 365 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: I taught every child on this\n"
	.string "island to ski on this slope. Watch your\l"
	.string "step -- there is nothing to ski on.\p"
	.string "Let me see what you've learned instead.$"

ParcelDelibirdSummit_T_Birgitta_Text_1:
# 366 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Well taught, by someone.$"

ParcelDelibirdSummit_T_Birgitta_Text_2:
# 381 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: The young ones will remember\n"
	.string "a green summit at Midwinter and think it\l"
	.string "normal.\p"
	.string "That is the part I cannot forgive. Not\n"
	.string "the thaw. The forgetting.$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_0:
# 392 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Clearances or not, I want\n"
	.string "that one back. Go?$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_1:
# 394 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_2:
# 398 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Still yours.$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_3:
# 399 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelDelibirdSummit_T_Birgitta_R3_Text_0:
# 406 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Three stamps, then five.\n"
	.string "Fine. Me next?$"

ParcelDelibirdSummit_T_Birgitta_R3_Text_1:
# 412 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: …Again, then. Later.$"

ParcelDelibirdSummit_T_Birgitta_R3_Text_2:
# 413 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: One more in me. After the\n"
	.string "high ground.$"

ParcelDelibirdSummit_T_Birgitta_R4_Text_0:
# 420 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdSummit_T_Birgitta_R4_Text_1:
# 426 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: That's the one I wanted to\n"
	.string "see.$"

ParcelDelibirdSummit_T_Birgitta_R4_Text_2:
# 427 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdSummit_T_Birgitta_R5_Text_0:
# 434 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelDelibirdSummit_T_Birgitta_R5_Text_1:
# 441 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Five. Write that one down\n"
	.string "too. I'll know you did.$"

ParcelDelibirdSummit_T_Torvald_Text_0:
# 448 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: The tarn's new. Three winters.\n"
	.string "INGRID says the ground under it was ice\l"
	.string "since before the island had a name.\p"
	.string "You want the top, you come through me\n"
	.string "first.$"

ParcelDelibirdSummit_T_Torvald_Text_1:
# 449 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Go on up, then.$"

ParcelDelibirdSummit_T_Torvald_Text_2:
# 464 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Look at the tarn and tell me\n"
	.string "you can see the bottom. You can.\p"
	.string "That's the problem. There's no bottom\n"
	.string "to it that isn't us.$"

ParcelDelibirdSummit_T_Torvald_R2_Text_0:
# 475 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelDelibirdSummit_T_Torvald_R2_Text_1:
# 477 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Fine. Same spot.$"

ParcelDelibirdSummit_T_Torvald_R2_Text_2:
# 481 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: That's the one I wanted to\n"
	.string "see.$"

ParcelDelibirdSummit_T_Torvald_R2_Text_3:
# 482 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelDelibirdSummit_T_Torvald_R3_Text_0:
# 489 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdSummit_T_Torvald_R3_Text_1:
# 495 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: …Fair.$"

ParcelDelibirdSummit_T_Torvald_R3_Text_2:
# 496 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelDelibirdSummit_T_Torvald_R4_Text_0:
# 503 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdSummit_T_Torvald_R4_Text_1:
# 509 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: …Again, then. Later.$"

ParcelDelibirdSummit_T_Torvald_R4_Text_2:
# 510 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdSummit_T_Torvald_R5_Text_0:
# 517 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdSummit_T_Torvald_R5_Text_1:
# 523 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Torvald_R5_Text_2:
# 524 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelDelibirdSummit_Sledge_Text_0:
# 531 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "A child's sledge wedged in the fork of\n"
	.string "the leaning tree, runners up, out of the\l"
	.string "wet. The tree has leaned further since\l"
	.string "it was put there; the sledge is nearly\l"
	.string "level now.\p"
	.string "You work it loose. It is lighter than it\n"
	.string "looks. A name is burned into the slat:\l"
	.string "KARI.$"

ParcelDelibirdSummit_Sledge_Text_1:
# 535 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "A leaning tree with something wedged in\n"
	.string "its fork, out of the wet. A child's\l"
	.string "sledge, by the runners.$"

ParcelDelibirdSummit_PairStakes_Text_0:
# 544 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "CADET LIV: Thirteen patches. ILEX\n"
	.string "counted them from the cliffs.$"

ParcelDelibirdSummit_PairStakes_Text_1:
# 545 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "OLD WOMAN: Thirteen's a number for a\n"
	.string "sledge run. Not a snowfield.$"

ParcelDelibirdSummit_PairStakes_Text_2:
# 546 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "CADET LIV: It's in the record now.\n"
	.string "Against the regime's books.$"

ParcelDelibirdSummit_PairStakes_Text_3:
# 547 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "OLD WOMAN: Then it's thirteen for good.\n"
	.string "Even when it's nine. Even when it's none.\l"
	.string "Somebody wrote thirteen and the year.$"

ParcelDelibirdSummit_PairStakes_Text_4:
# 549 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "OLD WOMAN: The ranger carried tea to\n"
	.string "INGRID up here and wrote the stakes on\l"
	.string "the way. Both. In the same hour.$"

ParcelDelibirdSummit_PairStakes_Text_5:
# 550 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "CADET LIV: That's the round and the\n"
	.string "survey.$"

ParcelDelibirdSummit_PairStakes_Text_6:
# 551 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "OLD WOMAN: That's the island. Giving and\n"
	.string "counting in the same hour. Nobody off\l"
	.string "the ferry ever managed both before.$"

ParcelDelibirdSummit_PairStakes_Text_7:
# 553 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "CADET LIV: Zero on the gauge. Third\n"
	.string "winter running.$"

ParcelDelibirdSummit_PairStakes_Text_8:
# 554 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "OLD WOMAN: Zero on the gauge means\n"
	.string "snow to the top of the gauge, when I\l"
	.string "was a girl. They've turned the numbers\l"
	.string "over.$"

ParcelDelibirdSummit_PairStakes_Text_9:
# 555 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "CADET LIV: Zero means no snow now.$"

ParcelDelibirdSummit_PairStakes_Text_10:
# 556 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "OLD WOMAN: I know what it means. I'm\n"
	.string "telling you what it meant.$"

ParcelDelibirdSummit_Board1_Text_0:
# 565 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "A SURVEY BOARD at the summit path, iced\n"
	.string "over. SNOWY SUMMIT. Snow patches that\l"
	.string "last the year: 31 when the board was\l"
	.string "made, 13 now, each marked on the board's\l"
	.string "map with a nail.\p"
	.string "The SNORUNT live in them and move when\n"
	.string "they move. There is no higher ground.\l"
	.string "The board does not say what happens\l"
	.string "then. It does not need to.$"

ParcelDelibirdSummit_Board2_Text_0:
# 570 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "A SURVEY BOARD on the cairn. The cairn\n"
	.string "is older than the Survey and taller\l"
	.string "every year; the islanders add a stone\l"
	.string "when they reach it.\p"
	.string "The board asks that you add one, count\n"
	.string "the SWINUB tracks on the way up, and\l"
	.string "write the count in the tin. The tin is\l"
	.string "full of slips. The numbers get smaller as\l"
	.string "the stack gets taller.$"
