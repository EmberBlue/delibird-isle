ParcelDelibirdSummit_MapScripts::
# 13 "data/maps/ParcelDelibirdSummit/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ParcelDelibirdSummit_OnLoad
	.byte 0


ParcelDelibirdSummit_OnLoad::
# 19 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdSummit_OnLoad_2
ParcelDelibirdSummit_OnLoad_1:
	end

ParcelDelibirdSummit_OnLoad_2:
# 20 "data/maps/ParcelDelibirdSummit/scripts.pory"
	setmetatile 5, 9, 1, FALSE
# 21 "data/maps/ParcelDelibirdSummit/scripts.pory"
	setmetatile 6, 9, 1, FALSE
# 22 "data/maps/ParcelDelibirdSummit/scripts.pory"
	setmetatile 5, 10, 1, FALSE
# 23 "data/maps/ParcelDelibirdSummit/scripts.pory"
	setmetatile 6, 10, 1, FALSE
	goto ParcelDelibirdSummit_OnLoad_1


ParcelDelibirdSummit_Ingrid::
# 30 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 31 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 32 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdSummit_Ingrid_2
# 37 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALD_DEL_INGRID_DONE, ParcelDelibirdSummit_Ingrid_5
# 42 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_PARCEL, ParcelDelibirdSummit_Ingrid_8
# 52 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Ingrid_Text_6, MSGBOX_DEFAULT
# 53 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Ingrid_2:
# 33 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Ingrid_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Ingrid_5:
# 38 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Ingrid_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Ingrid_8:
# 43 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Ingrid_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Ingrid_Text_3, MSGBOX_DEFAULT
# 45 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Ingrid_Text_4, MSGBOX_DEFAULT
# 46 "data/maps/ParcelDelibirdSummit/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 47 "data/maps/ParcelDelibirdSummit/scripts.pory"
	setflag FLAG_SKALD_DEL_INGRID_DONE
# 48 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Ingrid_Text_5, MSGBOX_DEFAULT
# 49 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_Kari::
# 59 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 60 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 61 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SLEDGE, ParcelDelibirdSummit_Kari_3
ParcelDelibirdSummit_Kari_1:
# 75 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdSummit_Kari_7
# 80 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SLEDGE_DONE, ParcelDelibirdSummit_Kari_13
# 86 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelDelibirdSummit_Kari_16
# 91 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_7, MSGBOX_DEFAULT
# 92 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Kari_2:
# 62 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SLEDGE_FOUND, ParcelDelibirdSummit_Kari_10
# 71 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_3, MSGBOX_DEFAULT
# 72 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Kari_3:
# 61 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SLEDGE_DONE, ParcelDelibirdSummit_Kari_2
	goto ParcelDelibirdSummit_Kari_1

ParcelDelibirdSummit_Kari_7:
# 76 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_4, MSGBOX_DEFAULT
# 77 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Kari_10:
# 63 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_0, MSGBOX_DEFAULT
# 64 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_1, MSGBOX_DEFAULT
# 65 "data/maps/ParcelDelibirdSummit/scripts.pory"
	giveitem ITEM_SHELL_BELL
# 66 "data/maps/ParcelDelibirdSummit/scripts.pory"
	setflag FLAG_SKALD_Q_SLEDGE_DONE
# 67 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_2, MSGBOX_DEFAULT
# 68 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Kari_13:
# 81 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_5, MSGBOX_DEFAULT
# 82 "data/maps/ParcelDelibirdSummit/scripts.pory"
	setflag FLAG_SKALD_Q_SLEDGE
# 83 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_Kari_16:
# 87 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Kari_Text_6, MSGBOX_DEFAULT
# 88 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_PeakSign::
# 98 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PeakSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_StakesSign::
# 103 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_StakesSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_PondSign::
# 108 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PondSign_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_ItemMaxRevive::
# 114 "data/maps/ParcelDelibirdSummit/scripts.pory"
	finditem ITEM_MAX_REVIVE
	end


ParcelDelibirdSummit_ItemHyperPotion::
# 118 "data/maps/ParcelDelibirdSummit/scripts.pory"
	finditem ITEM_HYPER_POTION
	end


ParcelDelibirdSummit_ItemRareCandy::
# 122 "data/maps/ParcelDelibirdSummit/scripts.pory"
	finditem ITEM_RARE_CANDY
	end


ParcelDelibirdSummit_T_Ragnar::
# 128 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_RAGNAR, ParcelDelibirdSummit_T_Ragnar_Text_0, ParcelDelibirdSummit_T_Ragnar_Text_1, ParcelDelibirdSummit_T_Ragnar_FirstWin
# 132 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 133 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_3
ParcelDelibirdSummit_T_Ragnar_1:
# 136 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_8
ParcelDelibirdSummit_T_Ragnar_6:
# 139 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_13
ParcelDelibirdSummit_T_Ragnar_11:
# 142 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Ragnar_18
ParcelDelibirdSummit_T_Ragnar_16:
# 145 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Ragnar_2:
# 134 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R2
	goto ParcelDelibirdSummit_T_Ragnar_1

ParcelDelibirdSummit_T_Ragnar_3:
# 133 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R2
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_2
	goto ParcelDelibirdSummit_T_Ragnar_1

ParcelDelibirdSummit_T_Ragnar_7:
# 137 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R3
	goto ParcelDelibirdSummit_T_Ragnar_6

ParcelDelibirdSummit_T_Ragnar_8:
# 136 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R3
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_7
	goto ParcelDelibirdSummit_T_Ragnar_6

ParcelDelibirdSummit_T_Ragnar_12:
# 140 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R4
	goto ParcelDelibirdSummit_T_Ragnar_11

ParcelDelibirdSummit_T_Ragnar_13:
# 139 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R4
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_12
	goto ParcelDelibirdSummit_T_Ragnar_11

ParcelDelibirdSummit_T_Ragnar_17:
# 143 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Ragnar_R5
	goto ParcelDelibirdSummit_T_Ragnar_16

ParcelDelibirdSummit_T_Ragnar_18:
# 142 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_RAGNAR_R5
	goto_if 0, ParcelDelibirdSummit_T_Ragnar_17
	goto ParcelDelibirdSummit_T_Ragnar_16


ParcelDelibirdSummit_T_Ragnar_FirstWin::
# 149 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_Text_2, MSGBOX_DEFAULT
# 150 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R2::
# 154 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 155 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 156 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_0, MSGBOX_YESNO
# 157 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R2_2
# 162 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R2, ParcelDelibirdSummit_T_Ragnar_R2_Text_2
# 163 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_3, MSGBOX_DEFAULT
# 164 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R2_2:
# 158 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 159 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R3::
# 168 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 169 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 170 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R3_Text_0, MSGBOX_YESNO
# 171 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R3_2
# 176 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R3, ParcelDelibirdSummit_T_Ragnar_R3_Text_1
# 177 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R3_Text_2, MSGBOX_DEFAULT
# 178 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R3_2:
# 172 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 173 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R4::
# 182 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 183 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 184 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R4_Text_0, MSGBOX_YESNO
# 185 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R4_2
# 190 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R4, ParcelDelibirdSummit_T_Ragnar_R3_Text_1
# 191 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R4_Text_1, MSGBOX_DEFAULT
# 192 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R4_2:
# 186 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 187 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Ragnar_R5::
# 196 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 197 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 198 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R5_Text_0, MSGBOX_YESNO
# 199 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Ragnar_R5_2
# 204 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_RAGNAR_R5, ParcelDelibirdSummit_T_Ragnar_R2_Text_2
# 205 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R5_Text_1, MSGBOX_DEFAULT
# 206 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Ragnar_R5_2:
# 200 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Ragnar_R2_Text_1, MSGBOX_DEFAULT
# 201 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil::
# 211 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_ESKIL, ParcelDelibirdSummit_T_Eskil_Text_0, ParcelDelibirdSummit_T_Eskil_Text_1, ParcelDelibirdSummit_T_Eskil_FirstWin
# 215 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 216 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Eskil_3
ParcelDelibirdSummit_T_Eskil_1:
# 219 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Eskil_8
ParcelDelibirdSummit_T_Eskil_6:
# 222 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Eskil_13
ParcelDelibirdSummit_T_Eskil_11:
# 225 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Eskil_18
ParcelDelibirdSummit_T_Eskil_16:
# 228 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Eskil_2:
# 217 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R2
	goto ParcelDelibirdSummit_T_Eskil_1

ParcelDelibirdSummit_T_Eskil_3:
# 216 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R2
	goto_if 0, ParcelDelibirdSummit_T_Eskil_2
	goto ParcelDelibirdSummit_T_Eskil_1

ParcelDelibirdSummit_T_Eskil_7:
# 220 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R3
	goto ParcelDelibirdSummit_T_Eskil_6

ParcelDelibirdSummit_T_Eskil_8:
# 219 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R3
	goto_if 0, ParcelDelibirdSummit_T_Eskil_7
	goto ParcelDelibirdSummit_T_Eskil_6

ParcelDelibirdSummit_T_Eskil_12:
# 223 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R4
	goto ParcelDelibirdSummit_T_Eskil_11

ParcelDelibirdSummit_T_Eskil_13:
# 222 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R4
	goto_if 0, ParcelDelibirdSummit_T_Eskil_12
	goto ParcelDelibirdSummit_T_Eskil_11

ParcelDelibirdSummit_T_Eskil_17:
# 226 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Eskil_R5
	goto ParcelDelibirdSummit_T_Eskil_16

ParcelDelibirdSummit_T_Eskil_18:
# 225 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_ESKIL_R5
	goto_if 0, ParcelDelibirdSummit_T_Eskil_17
	goto ParcelDelibirdSummit_T_Eskil_16


ParcelDelibirdSummit_T_Eskil_FirstWin::
# 232 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_Text_2, MSGBOX_DEFAULT
# 233 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R2::
# 237 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 238 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 239 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_0, MSGBOX_YESNO
# 240 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R2_2
# 245 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R2, ParcelDelibirdSummit_T_Eskil_R2_Text_2
# 246 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_3, MSGBOX_DEFAULT
# 247 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R2_2:
# 241 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 242 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R3::
# 251 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 252 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 253 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R3_Text_0, MSGBOX_YESNO
# 254 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R3_2
# 259 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R3, ParcelDelibirdSummit_T_Eskil_R3_Text_1
# 260 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R3_Text_2, MSGBOX_DEFAULT
# 261 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R3_2:
# 255 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 256 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R4::
# 265 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 266 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 267 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R4_Text_0, MSGBOX_YESNO
# 268 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R4_2
# 273 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R4, ParcelDelibirdSummit_T_Eskil_R2_Text_2
# 274 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R4_Text_1, MSGBOX_DEFAULT
# 275 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R4_2:
# 269 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 270 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Eskil_R5::
# 279 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 280 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 281 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R5_Text_0, MSGBOX_YESNO
# 282 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Eskil_R5_2
# 287 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_ESKIL_R5, ParcelDelibirdSummit_T_Eskil_R5_Text_1
# 288 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R5_Text_2, MSGBOX_DEFAULT
# 289 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Eskil_R5_2:
# 283 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Eskil_R2_Text_1, MSGBOX_DEFAULT
# 284 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv::
# 294 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_LIV, ParcelDelibirdSummit_T_Liv_Text_0, ParcelDelibirdSummit_T_Liv_Text_1, ParcelDelibirdSummit_T_Liv_FirstWin
# 298 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 299 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Liv_3
ParcelDelibirdSummit_T_Liv_1:
# 302 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Liv_8
ParcelDelibirdSummit_T_Liv_6:
# 305 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Liv_13
ParcelDelibirdSummit_T_Liv_11:
# 308 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Liv_18
ParcelDelibirdSummit_T_Liv_16:
# 311 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Liv_2:
# 300 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R2
	goto ParcelDelibirdSummit_T_Liv_1

ParcelDelibirdSummit_T_Liv_3:
# 299 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R2
	goto_if 0, ParcelDelibirdSummit_T_Liv_2
	goto ParcelDelibirdSummit_T_Liv_1

ParcelDelibirdSummit_T_Liv_7:
# 303 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R3
	goto ParcelDelibirdSummit_T_Liv_6

ParcelDelibirdSummit_T_Liv_8:
# 302 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R3
	goto_if 0, ParcelDelibirdSummit_T_Liv_7
	goto ParcelDelibirdSummit_T_Liv_6

ParcelDelibirdSummit_T_Liv_12:
# 306 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R4
	goto ParcelDelibirdSummit_T_Liv_11

ParcelDelibirdSummit_T_Liv_13:
# 305 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R4
	goto_if 0, ParcelDelibirdSummit_T_Liv_12
	goto ParcelDelibirdSummit_T_Liv_11

ParcelDelibirdSummit_T_Liv_17:
# 309 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Liv_R5
	goto ParcelDelibirdSummit_T_Liv_16

ParcelDelibirdSummit_T_Liv_18:
# 308 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_LIV_R5
	goto_if 0, ParcelDelibirdSummit_T_Liv_17
	goto ParcelDelibirdSummit_T_Liv_16


ParcelDelibirdSummit_T_Liv_FirstWin::
# 315 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_Text_2, MSGBOX_DEFAULT
# 316 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R2::
# 320 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 321 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 322 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_0, MSGBOX_YESNO
# 323 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R2_2
# 328 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R2, ParcelDelibirdSummit_T_Liv_R2_Text_2
# 329 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_3, MSGBOX_DEFAULT
# 330 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R2_2:
# 324 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 325 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R3::
# 334 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 335 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 336 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R3_Text_0, MSGBOX_YESNO
# 337 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R3_2
# 342 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R3, ParcelDelibirdSummit_T_Liv_R3_Text_1
# 343 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R3_Text_2, MSGBOX_DEFAULT
# 344 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R3_2:
# 338 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 339 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R4::
# 348 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 349 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 350 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R4_Text_0, MSGBOX_YESNO
# 351 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R4_2
# 356 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R4, ParcelDelibirdSummit_T_Liv_R3_Text_1
# 357 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R4_Text_1, MSGBOX_DEFAULT
# 358 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R4_2:
# 352 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 353 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Liv_R5::
# 362 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 363 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 364 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R5_Text_0, MSGBOX_YESNO
# 365 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Liv_R5_2
# 370 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_LIV_R5, ParcelDelibirdSummit_T_Liv_R5_Text_1
# 371 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R5_Text_2, MSGBOX_DEFAULT
# 372 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Liv_R5_2:
# 366 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Liv_R2_Text_1, MSGBOX_DEFAULT
# 367 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta::
# 377 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_BIRGITTA, ParcelDelibirdSummit_T_Birgitta_Text_0, ParcelDelibirdSummit_T_Birgitta_Text_1, ParcelDelibirdSummit_T_Birgitta_FirstWin
# 381 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 382 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_3
ParcelDelibirdSummit_T_Birgitta_1:
# 385 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_8
ParcelDelibirdSummit_T_Birgitta_6:
# 388 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_13
ParcelDelibirdSummit_T_Birgitta_11:
# 391 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Birgitta_18
ParcelDelibirdSummit_T_Birgitta_16:
# 394 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Birgitta_2:
# 383 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R2
	goto ParcelDelibirdSummit_T_Birgitta_1

ParcelDelibirdSummit_T_Birgitta_3:
# 382 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R2
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_2
	goto ParcelDelibirdSummit_T_Birgitta_1

ParcelDelibirdSummit_T_Birgitta_7:
# 386 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R3
	goto ParcelDelibirdSummit_T_Birgitta_6

ParcelDelibirdSummit_T_Birgitta_8:
# 385 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R3
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_7
	goto ParcelDelibirdSummit_T_Birgitta_6

ParcelDelibirdSummit_T_Birgitta_12:
# 389 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R4
	goto ParcelDelibirdSummit_T_Birgitta_11

ParcelDelibirdSummit_T_Birgitta_13:
# 388 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R4
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_12
	goto ParcelDelibirdSummit_T_Birgitta_11

ParcelDelibirdSummit_T_Birgitta_17:
# 392 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Birgitta_R5
	goto ParcelDelibirdSummit_T_Birgitta_16

ParcelDelibirdSummit_T_Birgitta_18:
# 391 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_BIRGITTA_R5
	goto_if 0, ParcelDelibirdSummit_T_Birgitta_17
	goto ParcelDelibirdSummit_T_Birgitta_16


ParcelDelibirdSummit_T_Birgitta_FirstWin::
# 398 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_Text_2, MSGBOX_DEFAULT
# 399 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R2::
# 403 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 404 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 405 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_0, MSGBOX_YESNO
# 406 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R2_2
# 411 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R2, ParcelDelibirdSummit_T_Birgitta_R2_Text_2
# 412 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_3, MSGBOX_DEFAULT
# 413 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R2_2:
# 407 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 408 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R3::
# 417 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 418 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 419 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R3_Text_0, MSGBOX_YESNO
# 420 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R3_2
# 425 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R3, ParcelDelibirdSummit_T_Birgitta_R3_Text_1
# 426 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R3_Text_2, MSGBOX_DEFAULT
# 427 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R3_2:
# 421 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 422 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R4::
# 431 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 432 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 433 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R4_Text_0, MSGBOX_YESNO
# 434 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R4_2
# 439 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R4, ParcelDelibirdSummit_T_Birgitta_R4_Text_1
# 440 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R4_Text_2, MSGBOX_DEFAULT
# 441 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R4_2:
# 435 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 436 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Birgitta_R5::
# 445 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 446 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 447 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R5_Text_0, MSGBOX_YESNO
# 448 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Birgitta_R5_2
# 453 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_BIRGITTA_R5, ParcelDelibirdSummit_T_Birgitta_R3_Text_1
# 454 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R5_Text_1, MSGBOX_DEFAULT
# 455 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Birgitta_R5_2:
# 449 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Birgitta_R2_Text_1, MSGBOX_DEFAULT
# 450 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald::
# 460 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUM_TORVALD, ParcelDelibirdSummit_T_Torvald_Text_0, ParcelDelibirdSummit_T_Torvald_Text_1, ParcelDelibirdSummit_T_Torvald_FirstWin
# 464 "data/maps/ParcelDelibirdSummit/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 465 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelDelibirdSummit_T_Torvald_3
ParcelDelibirdSummit_T_Torvald_1:
# 468 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelDelibirdSummit_T_Torvald_8
ParcelDelibirdSummit_T_Torvald_6:
# 471 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelDelibirdSummit_T_Torvald_13
ParcelDelibirdSummit_T_Torvald_11:
# 474 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelDelibirdSummit_T_Torvald_18
ParcelDelibirdSummit_T_Torvald_16:
# 477 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_Text_2, MSGBOX_DEFAULT
	end

ParcelDelibirdSummit_T_Torvald_2:
# 466 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R2
	goto ParcelDelibirdSummit_T_Torvald_1

ParcelDelibirdSummit_T_Torvald_3:
# 465 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R2
	goto_if 0, ParcelDelibirdSummit_T_Torvald_2
	goto ParcelDelibirdSummit_T_Torvald_1

ParcelDelibirdSummit_T_Torvald_7:
# 469 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R3
	goto ParcelDelibirdSummit_T_Torvald_6

ParcelDelibirdSummit_T_Torvald_8:
# 468 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R3
	goto_if 0, ParcelDelibirdSummit_T_Torvald_7
	goto ParcelDelibirdSummit_T_Torvald_6

ParcelDelibirdSummit_T_Torvald_12:
# 472 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R4
	goto ParcelDelibirdSummit_T_Torvald_11

ParcelDelibirdSummit_T_Torvald_13:
# 471 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R4
	goto_if 0, ParcelDelibirdSummit_T_Torvald_12
	goto ParcelDelibirdSummit_T_Torvald_11

ParcelDelibirdSummit_T_Torvald_17:
# 475 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto ParcelDelibirdSummit_T_Torvald_R5
	goto ParcelDelibirdSummit_T_Torvald_16

ParcelDelibirdSummit_T_Torvald_18:
# 474 "data/maps/ParcelDelibirdSummit/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUM_TORVALD_R5
	goto_if 0, ParcelDelibirdSummit_T_Torvald_17
	goto ParcelDelibirdSummit_T_Torvald_16


ParcelDelibirdSummit_T_Torvald_FirstWin::
# 481 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_Text_2, MSGBOX_DEFAULT
# 482 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R2::
# 486 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 487 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 488 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_0, MSGBOX_YESNO
# 489 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R2_2
# 494 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R2, ParcelDelibirdSummit_T_Torvald_R2_Text_2
# 495 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_3, MSGBOX_DEFAULT
# 496 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R2_2:
# 490 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 491 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R3::
# 500 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 501 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 502 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R3_Text_0, MSGBOX_YESNO
# 503 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R3_2
# 508 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R3, ParcelDelibirdSummit_T_Torvald_R3_Text_1
# 509 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R3_Text_2, MSGBOX_DEFAULT
# 510 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R3_2:
# 504 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 505 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R4::
# 514 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 515 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 516 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R4_Text_0, MSGBOX_YESNO
# 517 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R4_2
# 522 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R4, ParcelDelibirdSummit_T_Torvald_R4_Text_1
# 523 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R4_Text_2, MSGBOX_DEFAULT
# 524 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R4_2:
# 518 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 519 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_T_Torvald_R5::
# 528 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 529 "data/maps/ParcelDelibirdSummit/scripts.pory"
	faceplayer
# 530 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R5_Text_0, MSGBOX_YESNO
# 531 "data/maps/ParcelDelibirdSummit/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelDelibirdSummit_T_Torvald_R5_2
# 536 "data/maps/ParcelDelibirdSummit/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUM_TORVALD_R5, ParcelDelibirdSummit_T_Torvald_R5_Text_1
# 537 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R5_Text_2, MSGBOX_DEFAULT
# 538 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_T_Torvald_R5_2:
# 532 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_T_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 533 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end


ParcelDelibirdSummit_Sledge::
# 543 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SLEDGE, ParcelDelibirdSummit_Sledge_3
ParcelDelibirdSummit_Sledge_1:
# 548 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Sledge_Text_1, MSGBOX_SIGN
	end

ParcelDelibirdSummit_Sledge_2:
# 544 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Sledge_Text_0, MSGBOX_SIGN
# 545 "data/maps/ParcelDelibirdSummit/scripts.pory"
	setflag FLAG_SKALD_Q_SLEDGE_FOUND
	end

ParcelDelibirdSummit_Sledge_3:
# 543 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SLEDGE_FOUND, ParcelDelibirdSummit_Sledge_2
	goto ParcelDelibirdSummit_Sledge_1


ParcelDelibirdSummit_PairStakes::
# 555 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 556 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdSummit_PairStakes_2
# 561 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibirdSummit_PairStakes_3
# 566 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_7, MSGBOX_DEFAULT
# 567 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_8, MSGBOX_DEFAULT
# 568 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_9, MSGBOX_DEFAULT
# 569 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_10, MSGBOX_DEFAULT
ParcelDelibirdSummit_PairStakes_1:
# 571 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_PairStakes_2:
# 557 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_0, MSGBOX_DEFAULT
# 558 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_1, MSGBOX_DEFAULT
# 559 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_2, MSGBOX_DEFAULT
# 560 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_3, MSGBOX_DEFAULT
	goto ParcelDelibirdSummit_PairStakes_1

ParcelDelibirdSummit_PairStakes_3:
# 562 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_4, MSGBOX_DEFAULT
# 563 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_5, MSGBOX_DEFAULT
# 564 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairStakes_Text_6, MSGBOX_DEFAULT
	goto ParcelDelibirdSummit_PairStakes_1


ParcelDelibirdSummit_Board1::
# 578 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Board1_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_Board2::
# 583 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Board2_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_PairCairn::
# 590 "data/maps/ParcelDelibirdSummit/scripts.pory"
	lock
# 591 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdSummit_PairCairn_2
# 595 "data/maps/ParcelDelibirdSummit/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibirdSummit_PairCairn_3
# 601 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairCairn_Text_7, MSGBOX_DEFAULT
# 602 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairCairn_Text_8, MSGBOX_DEFAULT
# 603 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairCairn_Text_9, MSGBOX_DEFAULT
# 604 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairCairn_Text_10, MSGBOX_DEFAULT
# 605 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairCairn_Text_11, MSGBOX_DEFAULT
ParcelDelibirdSummit_PairCairn_1:
# 607 "data/maps/ParcelDelibirdSummit/scripts.pory"
	release
	end

ParcelDelibirdSummit_PairCairn_2:
# 592 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairCairn_Text_0, MSGBOX_DEFAULT
# 593 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairCairn_Text_1, MSGBOX_DEFAULT
# 594 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairCairn_Text_2, MSGBOX_DEFAULT
	goto ParcelDelibirdSummit_PairCairn_1

ParcelDelibirdSummit_PairCairn_3:
# 596 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairCairn_Text_3, MSGBOX_DEFAULT
# 597 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairCairn_Text_4, MSGBOX_DEFAULT
# 598 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairCairn_Text_5, MSGBOX_DEFAULT
# 599 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_PairCairn_Text_6, MSGBOX_DEFAULT
	goto ParcelDelibirdSummit_PairCairn_1


ParcelDelibirdSummit_Board3::
# 614 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Board3_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_Board10::
# 621 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_Board10_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_HutDoor::
# 628 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_HutDoor_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_TopStake::
# 633 "data/maps/ParcelDelibirdSummit/scripts.pory"
	msgbox ParcelDelibirdSummit_TopStake_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdSummit_Ingrid_Text_0:
# 33 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "INGRID: You said it to their faces. ILEX\n"
	.string "read me the part about the stakes. My\l"
	.string "stakes, in a hearing, in the capital.\p"
	.string "The paint is still three winters bare.\n"
	.string "But it is on the record now, and the\l"
	.string "record outlasts paint.$"

ParcelDelibirdSummit_Ingrid_Text_1:
# 38 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "INGRID: The lamp's lit. Tell MARTA it's\n"
	.string "lit. She'll know what I mean by it.$"

ParcelDelibirdSummit_Ingrid_Text_2:
# 43 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "An old woman in a canvas coat repaints\n"
	.string "a date on a wooden stake. She does not\l"
	.string "look up until the brush is clean.\p"
	.string "INGRID: From MARTA. Lamp oil, and the\n"
	.string "good tea, and a note I'm not to read till\l"
	.string "dark. Set it down by the hut.$"

ParcelDelibirdSummit_Ingrid_Text_3:
# 44 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "INGRID: Sixty years the stakes were\n"
	.string "painted to the snowline on Midwinter\l"
	.string "morning. I paint the date now, and the\l"
	.string "line stays where it was.\p"
	.string "The line is the only thing on this island\n"
	.string "that isn't moving.$"

ParcelDelibirdSummit_Ingrid_Text_4:
# 45 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "INGRID: Take this. It fell out of the\n"
	.string "sky, near enough -- a bird dropped it by\l"
	.string "the stakes and looked at me as if I'd\l"
	.string "asked.$"

ParcelDelibirdSummit_Ingrid_Text_5:
# 48 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "INGRID: Go down careful. The stairs are\n"
	.string "new and the ground under them isn't.$"

ParcelDelibirdSummit_Ingrid_Text_6:
# 52 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "INGRID: Watcher. Not warden, not\n"
	.string "keeper. I watch. The stakes are what I\l"
	.string "watch.\p"
	.string "The top stake is where the snow should\n"
	.string "start. It never did, this year. Nor last.\l"
	.string "MARTA sends oil up when she can spare\l"
	.string "it. The lamp is company, nights.$"

ParcelDelibirdSummit_Kari_Text_0:
# 63 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "KARI: You got it! It's got moss on it. It\n"
	.string "didn't have moss.\p"
	.string "There's nowhere to use it. Gran says\n"
	.string "there will be, up the top, if the snow\l"
	.string "comes back. Gran says 'if' now. She used\l"
	.string "to say 'when'.$"

ParcelDelibirdSummit_Kari_Text_1:
# 64 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "KARI: Here. Gran gave me this for being\n"
	.string "brave about the pond. I wasn't brave. I\l"
	.string "was just here. You should have it; you\l"
	.string "climbed.$"

ParcelDelibirdSummit_Kari_Text_2:
# 67 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "KARI: I'm going to keep the sledge\n"
	.string "inside. Dad says that's silly. I say the\l"
	.string "tree was silly.$"

ParcelDelibirdSummit_Kari_Text_3:
# 71 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "KARI: The tree by the pond. The fork.\n"
	.string "You can see the runner sticking out.$"

ParcelDelibirdSummit_Kari_Text_4:
# 76 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "KARI: They put a rope round my pond.\n"
	.string "Dad says it's for the little ones.\p"
	.string "I'm little. I think it's for everybody.$"

ParcelDelibirdSummit_Kari_Text_5:
# 81 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "KARI: My sledge is up in the tree. Dad\n"
	.string "put it there, out of the wet, when the\l"
	.string "pond came. He says it's safe there. I\l"
	.string "can see it from here.\p"
	.string "It's not safe. It's just high.\p"
	.string "Can you get it down? You're tall. I'm not\n"
	.string "allowed to climb since the ground went\l"
	.string "soft.$"

ParcelDelibirdSummit_Kari_Text_6:
# 87 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "KARI: Gran says the sea by the coast is\n"
	.string "sick and the ranger wrote it in a book.\l"
	.string "Is my pond in the book?\p"
	.string "I want it in the book. Not because it's\n"
	.string "sick. Because it was my sledge run\l"
	.string "first.$"

ParcelDelibirdSummit_Kari_Text_7:
# 91 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "KARI: The pond wasn't here last\n"
	.string "Midwinter. My sledge run went right\l"
	.string "where the middle is.\p"
	.string "Gran says keep off it. There's nothing\n"
	.string "to keep off.\p"
	.string "The trees are leaning. Dad says they're\n"
	.string "sad. I think they're just leaning.$"

ParcelDelibirdSummit_PeakSign_Text_0:
# 98 "data/maps/ParcelDelibirdSummit/scripts.pory"
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
# 103 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "SNOW STAKES\p"
	.string "Painted to the snowline every Midwinter\n"
	.string "morning for sixty years. The lowest\l"
	.string "stake has been bare three winters. The\l"
	.string "one above it, two.\p"
	.string "Someone has painted this year's date on\n"
	.string "the top stake and left the line where it\l"
	.string "was.$"

ParcelDelibirdSummit_PondSign_Text_0:
# 108 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "The ground here has let go. A pond\n"
	.string "nobody dug. Trees leaning away from\l"
	.string "each other like people who have\l"
	.string "stopped speaking.\p"
	.string "A child's sledge has been wedged up in\n"
	.string "the fork of the nearest tree, out of\l"
	.string "the wet, as if someone expected to need\l"
	.string "it again.$"

ParcelDelibirdSummit_T_Ragnar_Text_0:
# 129 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Twenty years I've climbed this\n"
	.string "on Midwinter morning. Used to be on\l"
	.string "skis. Now it's boots, and mud to the\l"
	.string "ankle.\p"
	.string "Battle me before the mud gets you too.$"

ParcelDelibirdSummit_T_Ragnar_Text_1:
# 130 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Good footing.$"

ParcelDelibirdSummit_T_Ragnar_Text_2:
# 145 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: The stairs are cut where the\n"
	.string "old snow slope was. We didn't need\l"
	.string "stairs when there was snow.$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_0:
# 156 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_1:
# 158 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_2:
# 162 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Ragnar_R2_Text_3:
# 163 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelDelibirdSummit_T_Ragnar_R3_Text_0:
# 170 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelDelibirdSummit_T_Ragnar_R3_Text_1:
# 176 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: That's the one I wanted to see.$"

ParcelDelibirdSummit_T_Ragnar_R3_Text_2:
# 177 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibirdSummit_T_Ragnar_R4_Text_0:
# 184 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelDelibirdSummit_T_Ragnar_R4_Text_1:
# 191 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdSummit_T_Ragnar_R5_Text_0:
# 198 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdSummit_T_Ragnar_R5_Text_1:
# 205 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "RAGNAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelDelibirdSummit_T_Eskil_Text_0:
# 212 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Hush. The DELIBIRD nest on the\n"
	.string "far side of the stakes. Fewer every\l"
	.string "year.\p"
	.string "If you must make noise, make it a\n"
	.string "battle.$"

ParcelDelibirdSummit_T_Eskil_Text_1:
# 213 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Loud enough.$"

ParcelDelibirdSummit_T_Eskil_Text_2:
# 228 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: They cache food in the snow for\n"
	.string "the hard months. There's less snow to\l"
	.string "cache in, so they're learning the rocks.\p"
	.string "Clever birds. Cleverer than us, maybe.\n"
	.string "We're still caching in the snow.$"

ParcelDelibirdSummit_T_Eskil_R2_Text_0:
# 239 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: I kept the team up for this.\n"
	.string "Again?$"

ParcelDelibirdSummit_T_Eskil_R2_Text_1:
# 241 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: No hurry. The water keeps.$"

ParcelDelibirdSummit_T_Eskil_R2_Text_2:
# 245 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: …Again, then. Later.$"

ParcelDelibirdSummit_T_Eskil_R2_Text_3:
# 246 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelDelibirdSummit_T_Eskil_R3_Text_0:
# 253 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelDelibirdSummit_T_Eskil_R3_Text_1:
# 259 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Eskil_R3_Text_2:
# 260 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibirdSummit_T_Eskil_R4_Text_0:
# 267 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdSummit_T_Eskil_R4_Text_1:
# 274 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdSummit_T_Eskil_R5_Text_0:
# 281 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdSummit_T_Eskil_R5_Text_1:
# 287 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Right. That's the whole of it.$"

ParcelDelibirdSummit_T_Eskil_R5_Text_2:
# 288 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "ESKIL: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelDelibirdSummit_T_Liv_Text_0:
# 295 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Cadet LIV, Skaldmere Survey, snow\n"
	.string "gauge detail. The gauge reads zero. It\l"
	.string "has read zero since I was posted.\p"
	.string "A battle would at least be a number.$"

ParcelDelibirdSummit_T_Liv_Text_1:
# 296 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's a number.$"

ParcelDelibirdSummit_T_Liv_Text_2:
# 311 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: ILEX says write the zero down\n"
	.string "anyway. A zero is data.\p"
	.string "Nobody believes you until there are\n"
	.string "twenty of them in a row.$"

ParcelDelibirdSummit_T_Liv_R2_Text_0:
# 322 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelDelibirdSummit_T_Liv_R2_Text_1:
# 324 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: No hurry. The water keeps.$"

ParcelDelibirdSummit_T_Liv_R2_Text_2:
# 328 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Liv_R2_Text_3:
# 329 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelDelibirdSummit_T_Liv_R3_Text_0:
# 336 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdSummit_T_Liv_R3_Text_1:
# 342 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: …Again, then. Later.$"

ParcelDelibirdSummit_T_Liv_R3_Text_2:
# 343 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelDelibirdSummit_T_Liv_R4_Text_0:
# 350 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelDelibirdSummit_T_Liv_R4_Text_1:
# 357 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelDelibirdSummit_T_Liv_R5_Text_0:
# 364 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelDelibirdSummit_T_Liv_R5_Text_1:
# 370 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's the one I wanted to see.$"

ParcelDelibirdSummit_T_Liv_R5_Text_2:
# 371 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "LIV: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelDelibirdSummit_T_Birgitta_Text_0:
# 378 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: I taught every child on this\n"
	.string "island to ski on this slope. Watch your\l"
	.string "step -- there is nothing to ski on.\p"
	.string "Let me see what you've learned instead.$"

ParcelDelibirdSummit_T_Birgitta_Text_1:
# 379 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Well taught, by someone.$"

ParcelDelibirdSummit_T_Birgitta_Text_2:
# 394 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: The young ones will remember\n"
	.string "a green summit at Midwinter and think it\l"
	.string "normal.\p"
	.string "That is the part I cannot forgive. Not\n"
	.string "the thaw. The forgetting.$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_0:
# 405 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Clearances or not, I want\n"
	.string "that one back. Go?$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_1:
# 407 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_2:
# 411 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Still yours.$"

ParcelDelibirdSummit_T_Birgitta_R2_Text_3:
# 412 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelDelibirdSummit_T_Birgitta_R3_Text_0:
# 419 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Three stamps, then five.\n"
	.string "Fine. Me next?$"

ParcelDelibirdSummit_T_Birgitta_R3_Text_1:
# 425 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: …Again, then. Later.$"

ParcelDelibirdSummit_T_Birgitta_R3_Text_2:
# 426 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: One more in me. After the\n"
	.string "high ground.$"

ParcelDelibirdSummit_T_Birgitta_R4_Text_0:
# 433 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdSummit_T_Birgitta_R4_Text_1:
# 439 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: That's the one I wanted to\n"
	.string "see.$"

ParcelDelibirdSummit_T_Birgitta_R4_Text_2:
# 440 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdSummit_T_Birgitta_R5_Text_0:
# 447 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelDelibirdSummit_T_Birgitta_R5_Text_1:
# 454 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "BIRGITTA: Five. Write that one down\n"
	.string "too. I'll know you did.$"

ParcelDelibirdSummit_T_Torvald_Text_0:
# 461 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: The tarn's new. Three winters.\n"
	.string "INGRID says the ground under it was ice\l"
	.string "since before the island had a name.\p"
	.string "You want the top, you come through me\n"
	.string "first.$"

ParcelDelibirdSummit_T_Torvald_Text_1:
# 462 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Go on up, then.$"

ParcelDelibirdSummit_T_Torvald_Text_2:
# 477 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Look at the tarn and tell me\n"
	.string "you can see the bottom. You can.\p"
	.string "That's the problem. There's no bottom\n"
	.string "to it that isn't us.$"

ParcelDelibirdSummit_T_Torvald_R2_Text_0:
# 488 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelDelibirdSummit_T_Torvald_R2_Text_1:
# 490 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Fine. Same spot.$"

ParcelDelibirdSummit_T_Torvald_R2_Text_2:
# 494 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: That's the one I wanted to\n"
	.string "see.$"

ParcelDelibirdSummit_T_Torvald_R2_Text_3:
# 495 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelDelibirdSummit_T_Torvald_R3_Text_0:
# 502 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelDelibirdSummit_T_Torvald_R3_Text_1:
# 508 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: …Fair.$"

ParcelDelibirdSummit_T_Torvald_R3_Text_2:
# 509 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelDelibirdSummit_T_Torvald_R4_Text_0:
# 516 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelDelibirdSummit_T_Torvald_R4_Text_1:
# 522 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: …Again, then. Later.$"

ParcelDelibirdSummit_T_Torvald_R4_Text_2:
# 523 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelDelibirdSummit_T_Torvald_R5_Text_0:
# 530 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelDelibirdSummit_T_Torvald_R5_Text_1:
# 536 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Noted. Properly, this time.$"

ParcelDelibirdSummit_T_Torvald_R5_Text_2:
# 537 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "TORVALD: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelDelibirdSummit_Sledge_Text_0:
# 544 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "A child's sledge wedged in the fork of\n"
	.string "the leaning tree, runners up, out of the\l"
	.string "wet. The tree has leaned further since\l"
	.string "it was put there; the sledge is nearly\l"
	.string "level now.\p"
	.string "You work it loose. It is lighter than it\n"
	.string "looks. A name is burned into the slat:\l"
	.string "KARI.$"

ParcelDelibirdSummit_Sledge_Text_1:
# 548 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "A leaning tree with something wedged in\n"
	.string "its fork, out of the wet. A child's\l"
	.string "sledge, by the runners.$"

ParcelDelibirdSummit_PairStakes_Text_0:
# 557 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "CADET LIV: Thirteen patches. ILEX\n"
	.string "counted them from the cliffs.$"

ParcelDelibirdSummit_PairStakes_Text_1:
# 558 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "OLD WOMAN: Thirteen's a number for a\n"
	.string "sledge run. Not a snowfield.$"

ParcelDelibirdSummit_PairStakes_Text_2:
# 559 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "CADET LIV: It's in the record now.\n"
	.string "Against the regime's books.$"

ParcelDelibirdSummit_PairStakes_Text_3:
# 560 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "OLD WOMAN: Then it's thirteen for good.\n"
	.string "Even when it's nine. Even when it's none.\l"
	.string "Somebody wrote thirteen and the year.$"

ParcelDelibirdSummit_PairStakes_Text_4:
# 562 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "OLD WOMAN: The ranger carried tea to\n"
	.string "INGRID up here and wrote the stakes on\l"
	.string "the way. Both. In the same hour.$"

ParcelDelibirdSummit_PairStakes_Text_5:
# 563 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "CADET LIV: That's the round and the\n"
	.string "survey.$"

ParcelDelibirdSummit_PairStakes_Text_6:
# 564 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "OLD WOMAN: That's the island. Giving and\n"
	.string "counting in the same hour. Nobody off\l"
	.string "the ferry ever managed both before.$"

ParcelDelibirdSummit_PairStakes_Text_7:
# 566 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "CADET LIV: Zero on the gauge. Third\n"
	.string "winter running.$"

ParcelDelibirdSummit_PairStakes_Text_8:
# 567 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "OLD WOMAN: Zero on the gauge means\n"
	.string "snow to the top of the gauge, when I\l"
	.string "was a girl. They've turned the numbers\l"
	.string "over.$"

ParcelDelibirdSummit_PairStakes_Text_9:
# 568 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "CADET LIV: Zero means no snow now.$"

ParcelDelibirdSummit_PairStakes_Text_10:
# 569 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "OLD WOMAN: I know what it means. I'm\n"
	.string "telling you what it meant.$"

ParcelDelibirdSummit_Board1_Text_0:
# 578 "data/maps/ParcelDelibirdSummit/scripts.pory"
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
# 583 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "A SURVEY BOARD on the cairn. The cairn\n"
	.string "is older than the Survey and taller\l"
	.string "every year; the islanders add a stone\l"
	.string "when they reach it.\p"
	.string "The board asks that you add one, count\n"
	.string "the SWINUB tracks on the way up, and\l"
	.string "write the count in the tin. The tin is\l"
	.string "full of slips. The numbers get smaller as\l"
	.string "the stack gets taller.$"

ParcelDelibirdSummit_PairCairn_Text_0:
# 592 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "YOUNG MAN: Twelve patches. Down one.$"

ParcelDelibirdSummit_PairCairn_Text_1:
# 593 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "GIRL: The board says thirteen.$"

ParcelDelibirdSummit_PairCairn_Text_2:
# 594 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "YOUNG MAN: The board's a year old. The\n"
	.string "cairn's a stone taller. Both of those\l"
	.string "are true. Add yours.$"

ParcelDelibirdSummit_PairCairn_Text_3:
# 596 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "GIRL: The ranger wrote the SNORUNT. All\n"
	.string "of them. In the patches.$"

ParcelDelibirdSummit_PairCairn_Text_4:
# 597 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "YOUNG MAN: How many?$"

ParcelDelibirdSummit_PairCairn_Text_5:
# 598 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "GIRL: She wouldn't say. She said the\n"
	.string "number belongs to the island first.$"

ParcelDelibirdSummit_PairCairn_Text_6:
# 599 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "YOUNG MAN: Then it'll be in the hall by\n"
	.string "the festival. That's fair.$"

ParcelDelibirdSummit_PairCairn_Text_7:
# 601 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "YOUNG MAN: Thirteen patches. The board\n"
	.string "at the path says thirteen.$"

ParcelDelibirdSummit_PairCairn_Text_8:
# 602 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "GIRL: There were more when Gran came\n"
	.string "up. She said the snow never left the\l"
	.string "top.$"

ParcelDelibirdSummit_PairCairn_Text_9:
# 603 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "YOUNG MAN: It leaves. It just comes\n"
	.string "back less.$"

ParcelDelibirdSummit_PairCairn_Text_10:
# 604 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "GIRL: Then we should add a stone.$"

ParcelDelibirdSummit_PairCairn_Text_11:
# 605 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "YOUNG MAN: We always add a stone.$"

ParcelDelibirdSummit_Board3_Text_0:
# 614 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "A SURVEY BOARD at the last snow patch.\n"
	.string "PILOSWINE come up to the patches in\l"
	.string "the warm months to lie on the cold. The\l"
	.string "board counts the PILOSWINE on the\l"
	.string "patches, not the patches.\p"
	.string "When the patches go, the count will go\n"
	.string "with them, and the board says so,\l"
	.string "plainly, as the last line.$"

ParcelDelibirdSummit_Board10_Text_0:
# 621 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "A SURVEY BOARD by the upper cairn.\n"
	.string "STANTLER come up with the melt and go\l"
	.string "down with the first snow, and the board\l"
	.string "gives their coming and going by date.\l"
	.string "The two dates used to be a season\l"
	.string "apart. They are six weeks apart now.\p"
	.string "The board does not say where the\n"
	.string "STANTLER spend the rest of the year.\l"
	.string "The Survey does not know.$"

ParcelDelibirdSummit_HutDoor_Text_0:
# 628 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "INGRID's hut. The latch is a loop of\n"
	.string "cord. Through the pane: a lamp, a cot,\l"
	.string "and sixty years of notebooks with the\l"
	.string "same hand on every spine.$"

ParcelDelibirdSummit_TopStake_Text_0:
# 633 "data/maps/ParcelDelibirdSummit/scripts.pory"
	.string "The top stake. This Midwinter's date in\n"
	.string "wet paint, and above it the line where\l"
	.string "the snow should start.\p"
	.string "The paint is the only new thing on it.$"
