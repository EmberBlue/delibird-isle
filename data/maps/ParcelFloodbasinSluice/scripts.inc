ParcelFloodbasinSluice_MapScripts::
	.byte 0


ParcelFloodbasinSluice_Nils::
# 9 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SLU_NILS, ParcelFloodbasinSluice_Nils_Text_0, ParcelFloodbasinSluice_Nils_Text_1, ParcelFloodbasinSluice_Nils_FirstWin
# 13 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 14 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasinSluice_Nils_3
ParcelFloodbasinSluice_Nils_1:
# 17 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasinSluice_Nils_8
ParcelFloodbasinSluice_Nils_6:
# 20 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasinSluice_Nils_13
ParcelFloodbasinSluice_Nils_11:
# 23 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasinSluice_Nils_18
ParcelFloodbasinSluice_Nils_16:
# 26 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Nils_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasinSluice_Nils_2:
# 15 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Nils_R2
	goto ParcelFloodbasinSluice_Nils_1

ParcelFloodbasinSluice_Nils_3:
# 14 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_NILS_R2
	goto_if 0, ParcelFloodbasinSluice_Nils_2
	goto ParcelFloodbasinSluice_Nils_1

ParcelFloodbasinSluice_Nils_7:
# 18 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Nils_R3
	goto ParcelFloodbasinSluice_Nils_6

ParcelFloodbasinSluice_Nils_8:
# 17 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_NILS_R3
	goto_if 0, ParcelFloodbasinSluice_Nils_7
	goto ParcelFloodbasinSluice_Nils_6

ParcelFloodbasinSluice_Nils_12:
# 21 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Nils_R4
	goto ParcelFloodbasinSluice_Nils_11

ParcelFloodbasinSluice_Nils_13:
# 20 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_NILS_R4
	goto_if 0, ParcelFloodbasinSluice_Nils_12
	goto ParcelFloodbasinSluice_Nils_11

ParcelFloodbasinSluice_Nils_17:
# 24 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Nils_R5
	goto ParcelFloodbasinSluice_Nils_16

ParcelFloodbasinSluice_Nils_18:
# 23 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_NILS_R5
	goto_if 0, ParcelFloodbasinSluice_Nils_17
	goto ParcelFloodbasinSluice_Nils_16


ParcelFloodbasinSluice_Nils_FirstWin::
# 30 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Nils_Text_2, MSGBOX_DEFAULT
# 31 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Nils_R2::
# 35 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 36 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 37 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Nils_R2_Text_0, MSGBOX_YESNO
# 38 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Nils_R2_2
# 43 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_NILS_R2, ParcelFloodbasinSluice_Nils_R2_Text_2
# 44 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Nils_R2_Text_3, MSGBOX_DEFAULT
# 45 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Nils_R2_2:
# 39 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Nils_R2_Text_1, MSGBOX_DEFAULT
# 40 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Nils_R3::
# 49 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 50 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 51 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Nils_R3_Text_0, MSGBOX_YESNO
# 52 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Nils_R3_2
# 57 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_NILS_R3, ParcelFloodbasinSluice_Nils_R2_Text_2
# 58 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Nils_R3_Text_1, MSGBOX_DEFAULT
# 59 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Nils_R3_2:
# 53 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Nils_R2_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Nils_R4::
# 63 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 64 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 65 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Nils_R4_Text_0, MSGBOX_YESNO
# 66 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Nils_R4_2
# 71 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_NILS_R4, ParcelFloodbasinSluice_Nils_R4_Text_1
# 72 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Nils_R4_Text_2, MSGBOX_DEFAULT
# 73 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Nils_R4_2:
# 67 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Nils_R2_Text_1, MSGBOX_DEFAULT
# 68 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Nils_R5::
# 77 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 78 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 79 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Nils_R5_Text_0, MSGBOX_YESNO
# 80 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Nils_R5_2
# 85 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_NILS_R5, ParcelFloodbasinSluice_Nils_R2_Text_2
# 86 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Nils_R5_Text_1, MSGBOX_DEFAULT
# 87 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Nils_R5_2:
# 81 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Nils_R2_Text_1, MSGBOX_DEFAULT
# 82 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Sverre::
# 91 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SLU_SVERRE, ParcelFloodbasinSluice_Sverre_Text_0, ParcelFloodbasinSluice_Sverre_Text_1, ParcelFloodbasinSluice_Sverre_FirstWin
# 95 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 96 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasinSluice_Sverre_3
ParcelFloodbasinSluice_Sverre_1:
# 99 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasinSluice_Sverre_8
ParcelFloodbasinSluice_Sverre_6:
# 102 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasinSluice_Sverre_13
ParcelFloodbasinSluice_Sverre_11:
# 105 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasinSluice_Sverre_18
ParcelFloodbasinSluice_Sverre_16:
# 108 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Sverre_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasinSluice_Sverre_2:
# 97 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Sverre_R2
	goto ParcelFloodbasinSluice_Sverre_1

ParcelFloodbasinSluice_Sverre_3:
# 96 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_SVERRE_R2
	goto_if 0, ParcelFloodbasinSluice_Sverre_2
	goto ParcelFloodbasinSluice_Sverre_1

ParcelFloodbasinSluice_Sverre_7:
# 100 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Sverre_R3
	goto ParcelFloodbasinSluice_Sverre_6

ParcelFloodbasinSluice_Sverre_8:
# 99 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_SVERRE_R3
	goto_if 0, ParcelFloodbasinSluice_Sverre_7
	goto ParcelFloodbasinSluice_Sverre_6

ParcelFloodbasinSluice_Sverre_12:
# 103 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Sverre_R4
	goto ParcelFloodbasinSluice_Sverre_11

ParcelFloodbasinSluice_Sverre_13:
# 102 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_SVERRE_R4
	goto_if 0, ParcelFloodbasinSluice_Sverre_12
	goto ParcelFloodbasinSluice_Sverre_11

ParcelFloodbasinSluice_Sverre_17:
# 106 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Sverre_R5
	goto ParcelFloodbasinSluice_Sverre_16

ParcelFloodbasinSluice_Sverre_18:
# 105 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_SVERRE_R5
	goto_if 0, ParcelFloodbasinSluice_Sverre_17
	goto ParcelFloodbasinSluice_Sverre_16


ParcelFloodbasinSluice_Sverre_FirstWin::
# 112 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Sverre_Text_2, MSGBOX_DEFAULT
# 113 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Sverre_R2::
# 117 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 118 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 119 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Sverre_R2_Text_0, MSGBOX_YESNO
# 120 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Sverre_R2_2
# 125 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_SVERRE_R2, ParcelFloodbasinSluice_Sverre_R2_Text_2
# 126 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Sverre_R2_Text_3, MSGBOX_DEFAULT
# 127 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Sverre_R2_2:
# 121 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Sverre_R2_Text_1, MSGBOX_DEFAULT
# 122 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Sverre_R3::
# 131 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 132 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 133 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Sverre_R3_Text_0, MSGBOX_YESNO
# 134 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Sverre_R3_2
# 139 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_SVERRE_R3, ParcelFloodbasinSluice_Sverre_R2_Text_2
# 140 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Sverre_R3_Text_1, MSGBOX_DEFAULT
# 141 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Sverre_R3_2:
# 135 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Sverre_R2_Text_1, MSGBOX_DEFAULT
# 136 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Sverre_R4::
# 145 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 146 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 147 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Sverre_R4_Text_0, MSGBOX_YESNO
# 148 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Sverre_R4_2
# 153 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_SVERRE_R4, ParcelFloodbasinSluice_Sverre_R4_Text_1
# 154 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Sverre_R4_Text_2, MSGBOX_DEFAULT
# 155 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Sverre_R4_2:
# 149 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Sverre_R2_Text_1, MSGBOX_DEFAULT
# 150 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Sverre_R5::
# 159 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 160 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 161 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Sverre_R5_Text_0, MSGBOX_YESNO
# 162 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Sverre_R5_2
# 167 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_SVERRE_R5, ParcelFloodbasinSluice_Sverre_R2_Text_2
# 168 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Sverre_R5_Text_1, MSGBOX_DEFAULT
# 169 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Sverre_R5_2:
# 163 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Sverre_R2_Text_1, MSGBOX_DEFAULT
# 164 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Elin::
# 173 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SLU_ELIN, ParcelFloodbasinSluice_Elin_Text_0, ParcelFloodbasinSluice_Elin_Text_1, ParcelFloodbasinSluice_Elin_FirstWin
# 177 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 178 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasinSluice_Elin_3
ParcelFloodbasinSluice_Elin_1:
# 181 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasinSluice_Elin_8
ParcelFloodbasinSluice_Elin_6:
# 184 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasinSluice_Elin_13
ParcelFloodbasinSluice_Elin_11:
# 187 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasinSluice_Elin_18
ParcelFloodbasinSluice_Elin_16:
# 190 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Elin_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasinSluice_Elin_2:
# 179 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Elin_R2
	goto ParcelFloodbasinSluice_Elin_1

ParcelFloodbasinSluice_Elin_3:
# 178 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_ELIN_R2
	goto_if 0, ParcelFloodbasinSluice_Elin_2
	goto ParcelFloodbasinSluice_Elin_1

ParcelFloodbasinSluice_Elin_7:
# 182 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Elin_R3
	goto ParcelFloodbasinSluice_Elin_6

ParcelFloodbasinSluice_Elin_8:
# 181 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_ELIN_R3
	goto_if 0, ParcelFloodbasinSluice_Elin_7
	goto ParcelFloodbasinSluice_Elin_6

ParcelFloodbasinSluice_Elin_12:
# 185 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Elin_R4
	goto ParcelFloodbasinSluice_Elin_11

ParcelFloodbasinSluice_Elin_13:
# 184 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_ELIN_R4
	goto_if 0, ParcelFloodbasinSluice_Elin_12
	goto ParcelFloodbasinSluice_Elin_11

ParcelFloodbasinSluice_Elin_17:
# 188 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Elin_R5
	goto ParcelFloodbasinSluice_Elin_16

ParcelFloodbasinSluice_Elin_18:
# 187 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_ELIN_R5
	goto_if 0, ParcelFloodbasinSluice_Elin_17
	goto ParcelFloodbasinSluice_Elin_16


ParcelFloodbasinSluice_Elin_FirstWin::
# 194 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Elin_Text_2, MSGBOX_DEFAULT
# 195 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Elin_R2::
# 199 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 200 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 201 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Elin_R2_Text_0, MSGBOX_YESNO
# 202 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Elin_R2_2
# 207 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_ELIN_R2, ParcelFloodbasinSluice_Elin_R2_Text_2
# 208 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Elin_R2_Text_3, MSGBOX_DEFAULT
# 209 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Elin_R2_2:
# 203 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Elin_R2_Text_1, MSGBOX_DEFAULT
# 204 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Elin_R3::
# 213 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 214 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 215 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Elin_R3_Text_0, MSGBOX_YESNO
# 216 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Elin_R3_2
# 221 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_ELIN_R3, ParcelFloodbasinSluice_Elin_R2_Text_2
# 222 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Elin_R3_Text_1, MSGBOX_DEFAULT
# 223 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Elin_R3_2:
# 217 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Elin_R2_Text_1, MSGBOX_DEFAULT
# 218 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Elin_R4::
# 227 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 228 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 229 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Elin_R4_Text_0, MSGBOX_YESNO
# 230 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Elin_R4_2
# 235 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_ELIN_R4, ParcelFloodbasinSluice_Elin_R4_Text_1
# 236 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Elin_R4_Text_2, MSGBOX_DEFAULT
# 237 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Elin_R4_2:
# 231 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Elin_R2_Text_1, MSGBOX_DEFAULT
# 232 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Elin_R5::
# 241 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 242 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 243 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Elin_R5_Text_0, MSGBOX_YESNO
# 244 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Elin_R5_2
# 249 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_ELIN_R5, ParcelFloodbasinSluice_Elin_R5_Text_1
# 250 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Elin_R5_Text_2, MSGBOX_DEFAULT
# 251 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Elin_R5_2:
# 245 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Elin_R2_Text_1, MSGBOX_DEFAULT
# 246 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Erik::
# 255 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SLU_ERIK, ParcelFloodbasinSluice_Erik_Text_0, ParcelFloodbasinSluice_Erik_Text_1, ParcelFloodbasinSluice_Erik_FirstWin
# 259 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 260 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasinSluice_Erik_3
ParcelFloodbasinSluice_Erik_1:
# 263 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasinSluice_Erik_8
ParcelFloodbasinSluice_Erik_6:
# 266 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasinSluice_Erik_13
ParcelFloodbasinSluice_Erik_11:
# 269 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasinSluice_Erik_18
ParcelFloodbasinSluice_Erik_16:
# 272 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Erik_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasinSluice_Erik_2:
# 261 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Erik_R2
	goto ParcelFloodbasinSluice_Erik_1

ParcelFloodbasinSluice_Erik_3:
# 260 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_ERIK_R2
	goto_if 0, ParcelFloodbasinSluice_Erik_2
	goto ParcelFloodbasinSluice_Erik_1

ParcelFloodbasinSluice_Erik_7:
# 264 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Erik_R3
	goto ParcelFloodbasinSluice_Erik_6

ParcelFloodbasinSluice_Erik_8:
# 263 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_ERIK_R3
	goto_if 0, ParcelFloodbasinSluice_Erik_7
	goto ParcelFloodbasinSluice_Erik_6

ParcelFloodbasinSluice_Erik_12:
# 267 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Erik_R4
	goto ParcelFloodbasinSluice_Erik_11

ParcelFloodbasinSluice_Erik_13:
# 266 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_ERIK_R4
	goto_if 0, ParcelFloodbasinSluice_Erik_12
	goto ParcelFloodbasinSluice_Erik_11

ParcelFloodbasinSluice_Erik_17:
# 270 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Erik_R5
	goto ParcelFloodbasinSluice_Erik_16

ParcelFloodbasinSluice_Erik_18:
# 269 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_ERIK_R5
	goto_if 0, ParcelFloodbasinSluice_Erik_17
	goto ParcelFloodbasinSluice_Erik_16


ParcelFloodbasinSluice_Erik_FirstWin::
# 276 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Erik_Text_2, MSGBOX_DEFAULT
# 277 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Erik_R2::
# 281 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 282 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 283 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Erik_R2_Text_0, MSGBOX_YESNO
# 284 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Erik_R2_2
# 289 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_ERIK_R2, ParcelFloodbasinSluice_Erik_R2_Text_2
# 290 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Erik_R2_Text_3, MSGBOX_DEFAULT
# 291 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Erik_R2_2:
# 285 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Erik_R2_Text_1, MSGBOX_DEFAULT
# 286 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Erik_R3::
# 295 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 296 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 297 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Erik_R3_Text_0, MSGBOX_YESNO
# 298 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Erik_R3_2
# 303 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_ERIK_R3, ParcelFloodbasinSluice_Erik_R2_Text_2
# 304 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Erik_R3_Text_1, MSGBOX_DEFAULT
# 305 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Erik_R3_2:
# 299 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Erik_R2_Text_1, MSGBOX_DEFAULT
# 300 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Erik_R4::
# 309 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 310 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 311 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Erik_R4_Text_0, MSGBOX_YESNO
# 312 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Erik_R4_2
# 317 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_ERIK_R4, ParcelFloodbasinSluice_Erik_R2_Text_2
# 318 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Erik_R4_Text_1, MSGBOX_DEFAULT
# 319 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Erik_R4_2:
# 313 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Erik_R2_Text_1, MSGBOX_DEFAULT
# 314 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Erik_R5::
# 323 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 324 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 325 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Erik_R5_Text_0, MSGBOX_YESNO
# 326 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Erik_R5_2
# 331 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_ERIK_R5, ParcelFloodbasinSluice_Erik_R5_Text_1
# 332 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Erik_R5_Text_2, MSGBOX_DEFAULT
# 333 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Erik_R5_2:
# 327 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Erik_R2_Text_1, MSGBOX_DEFAULT
# 328 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Siri::
# 337 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SLU_SIRI, ParcelFloodbasinSluice_Siri_Text_0, ParcelFloodbasinSluice_Siri_Text_1, ParcelFloodbasinSluice_Siri_FirstWin
# 341 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 342 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasinSluice_Siri_3
ParcelFloodbasinSluice_Siri_1:
# 345 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasinSluice_Siri_8
ParcelFloodbasinSluice_Siri_6:
# 348 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasinSluice_Siri_13
ParcelFloodbasinSluice_Siri_11:
# 351 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasinSluice_Siri_18
ParcelFloodbasinSluice_Siri_16:
# 354 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Siri_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasinSluice_Siri_2:
# 343 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Siri_R2
	goto ParcelFloodbasinSluice_Siri_1

ParcelFloodbasinSluice_Siri_3:
# 342 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_SIRI_R2
	goto_if 0, ParcelFloodbasinSluice_Siri_2
	goto ParcelFloodbasinSluice_Siri_1

ParcelFloodbasinSluice_Siri_7:
# 346 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Siri_R3
	goto ParcelFloodbasinSluice_Siri_6

ParcelFloodbasinSluice_Siri_8:
# 345 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_SIRI_R3
	goto_if 0, ParcelFloodbasinSluice_Siri_7
	goto ParcelFloodbasinSluice_Siri_6

ParcelFloodbasinSluice_Siri_12:
# 349 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Siri_R4
	goto ParcelFloodbasinSluice_Siri_11

ParcelFloodbasinSluice_Siri_13:
# 348 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_SIRI_R4
	goto_if 0, ParcelFloodbasinSluice_Siri_12
	goto ParcelFloodbasinSluice_Siri_11

ParcelFloodbasinSluice_Siri_17:
# 352 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Siri_R5
	goto ParcelFloodbasinSluice_Siri_16

ParcelFloodbasinSluice_Siri_18:
# 351 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_SIRI_R5
	goto_if 0, ParcelFloodbasinSluice_Siri_17
	goto ParcelFloodbasinSluice_Siri_16


ParcelFloodbasinSluice_Siri_FirstWin::
# 358 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Siri_Text_2, MSGBOX_DEFAULT
# 359 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Siri_R2::
# 363 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 364 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 365 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Siri_R2_Text_0, MSGBOX_YESNO
# 366 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Siri_R2_2
# 371 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_SIRI_R2, ParcelFloodbasinSluice_Siri_R2_Text_2
# 372 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Siri_R2_Text_3, MSGBOX_DEFAULT
# 373 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Siri_R2_2:
# 367 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Siri_R2_Text_1, MSGBOX_DEFAULT
# 368 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Siri_R3::
# 377 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 378 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 379 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Siri_R3_Text_0, MSGBOX_YESNO
# 380 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Siri_R3_2
# 385 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_SIRI_R3, ParcelFloodbasinSluice_Siri_R3_Text_1
# 386 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Siri_R3_Text_2, MSGBOX_DEFAULT
# 387 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Siri_R3_2:
# 381 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Siri_R2_Text_1, MSGBOX_DEFAULT
# 382 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Siri_R4::
# 391 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 392 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 393 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Siri_R4_Text_0, MSGBOX_YESNO
# 394 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Siri_R4_2
# 399 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_SIRI_R4, ParcelFloodbasinSluice_Siri_R4_Text_1
# 400 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Siri_R4_Text_2, MSGBOX_DEFAULT
# 401 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Siri_R4_2:
# 395 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Siri_R2_Text_1, MSGBOX_DEFAULT
# 396 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Siri_R5::
# 405 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 406 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 407 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Siri_R5_Text_0, MSGBOX_YESNO
# 408 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Siri_R5_2
# 413 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_SIRI_R5, ParcelFloodbasinSluice_Siri_R2_Text_2
# 414 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Siri_R5_Text_1, MSGBOX_DEFAULT
# 415 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Siri_R5_2:
# 409 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Siri_R2_Text_1, MSGBOX_DEFAULT
# 410 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Bjarte::
# 419 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SLU_BJARTE, ParcelFloodbasinSluice_Bjarte_Text_0, ParcelFloodbasinSluice_Bjarte_Text_1, ParcelFloodbasinSluice_Bjarte_FirstWin
# 423 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 424 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasinSluice_Bjarte_3
ParcelFloodbasinSluice_Bjarte_1:
# 427 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasinSluice_Bjarte_8
ParcelFloodbasinSluice_Bjarte_6:
# 430 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasinSluice_Bjarte_13
ParcelFloodbasinSluice_Bjarte_11:
# 433 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasinSluice_Bjarte_18
ParcelFloodbasinSluice_Bjarte_16:
# 436 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Bjarte_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasinSluice_Bjarte_2:
# 425 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Bjarte_R2
	goto ParcelFloodbasinSluice_Bjarte_1

ParcelFloodbasinSluice_Bjarte_3:
# 424 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_BJARTE_R2
	goto_if 0, ParcelFloodbasinSluice_Bjarte_2
	goto ParcelFloodbasinSluice_Bjarte_1

ParcelFloodbasinSluice_Bjarte_7:
# 428 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Bjarte_R3
	goto ParcelFloodbasinSluice_Bjarte_6

ParcelFloodbasinSluice_Bjarte_8:
# 427 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_BJARTE_R3
	goto_if 0, ParcelFloodbasinSluice_Bjarte_7
	goto ParcelFloodbasinSluice_Bjarte_6

ParcelFloodbasinSluice_Bjarte_12:
# 431 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Bjarte_R4
	goto ParcelFloodbasinSluice_Bjarte_11

ParcelFloodbasinSluice_Bjarte_13:
# 430 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_BJARTE_R4
	goto_if 0, ParcelFloodbasinSluice_Bjarte_12
	goto ParcelFloodbasinSluice_Bjarte_11

ParcelFloodbasinSluice_Bjarte_17:
# 434 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Bjarte_R5
	goto ParcelFloodbasinSluice_Bjarte_16

ParcelFloodbasinSluice_Bjarte_18:
# 433 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_BJARTE_R5
	goto_if 0, ParcelFloodbasinSluice_Bjarte_17
	goto ParcelFloodbasinSluice_Bjarte_16


ParcelFloodbasinSluice_Bjarte_FirstWin::
# 440 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Bjarte_Text_2, MSGBOX_DEFAULT
# 441 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Bjarte_R2::
# 445 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 446 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 447 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Bjarte_R2_Text_0, MSGBOX_YESNO
# 448 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Bjarte_R2_2
# 453 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_BJARTE_R2, ParcelFloodbasinSluice_Bjarte_R2_Text_2
# 454 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Bjarte_R2_Text_3, MSGBOX_DEFAULT
# 455 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Bjarte_R2_2:
# 449 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Bjarte_R2_Text_1, MSGBOX_DEFAULT
# 450 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Bjarte_R3::
# 459 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 460 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 461 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Bjarte_R3_Text_0, MSGBOX_YESNO
# 462 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Bjarte_R3_2
# 467 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_BJARTE_R3, ParcelFloodbasinSluice_Bjarte_R3_Text_1
# 468 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Bjarte_R3_Text_2, MSGBOX_DEFAULT
# 469 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Bjarte_R3_2:
# 463 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Bjarte_R2_Text_1, MSGBOX_DEFAULT
# 464 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Bjarte_R4::
# 473 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 474 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 475 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Bjarte_R4_Text_0, MSGBOX_YESNO
# 476 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Bjarte_R4_2
# 481 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_BJARTE_R4, ParcelFloodbasinSluice_Bjarte_R4_Text_1
# 482 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Bjarte_R4_Text_2, MSGBOX_DEFAULT
# 483 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Bjarte_R4_2:
# 477 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Bjarte_R2_Text_1, MSGBOX_DEFAULT
# 478 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Bjarte_R5::
# 487 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 488 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 489 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Bjarte_R5_Text_0, MSGBOX_YESNO
# 490 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Bjarte_R5_2
# 495 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_BJARTE_R5, ParcelFloodbasinSluice_Bjarte_R5_Text_1
# 496 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Bjarte_R5_Text_2, MSGBOX_DEFAULT
# 497 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Bjarte_R5_2:
# 491 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Bjarte_R2_Text_1, MSGBOX_DEFAULT
# 492 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Odd::
# 501 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SLU_ODD, ParcelFloodbasinSluice_Odd_Text_0, ParcelFloodbasinSluice_Odd_Text_1, ParcelFloodbasinSluice_Odd_FirstWin
# 505 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 506 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasinSluice_Odd_3
ParcelFloodbasinSluice_Odd_1:
# 509 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasinSluice_Odd_8
ParcelFloodbasinSluice_Odd_6:
# 512 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasinSluice_Odd_13
ParcelFloodbasinSluice_Odd_11:
# 515 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasinSluice_Odd_18
ParcelFloodbasinSluice_Odd_16:
# 518 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Odd_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasinSluice_Odd_2:
# 507 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Odd_R2
	goto ParcelFloodbasinSluice_Odd_1

ParcelFloodbasinSluice_Odd_3:
# 506 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_ODD_R2
	goto_if 0, ParcelFloodbasinSluice_Odd_2
	goto ParcelFloodbasinSluice_Odd_1

ParcelFloodbasinSluice_Odd_7:
# 510 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Odd_R3
	goto ParcelFloodbasinSluice_Odd_6

ParcelFloodbasinSluice_Odd_8:
# 509 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_ODD_R3
	goto_if 0, ParcelFloodbasinSluice_Odd_7
	goto ParcelFloodbasinSluice_Odd_6

ParcelFloodbasinSluice_Odd_12:
# 513 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Odd_R4
	goto ParcelFloodbasinSluice_Odd_11

ParcelFloodbasinSluice_Odd_13:
# 512 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_ODD_R4
	goto_if 0, ParcelFloodbasinSluice_Odd_12
	goto ParcelFloodbasinSluice_Odd_11

ParcelFloodbasinSluice_Odd_17:
# 516 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Odd_R5
	goto ParcelFloodbasinSluice_Odd_16

ParcelFloodbasinSluice_Odd_18:
# 515 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_ODD_R5
	goto_if 0, ParcelFloodbasinSluice_Odd_17
	goto ParcelFloodbasinSluice_Odd_16


ParcelFloodbasinSluice_Odd_FirstWin::
# 522 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Odd_Text_2, MSGBOX_DEFAULT
# 523 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Odd_R2::
# 527 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 528 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 529 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Odd_R2_Text_0, MSGBOX_YESNO
# 530 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Odd_R2_2
# 535 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_ODD_R2, ParcelFloodbasinSluice_Odd_R2_Text_2
# 536 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Odd_R2_Text_3, MSGBOX_DEFAULT
# 537 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Odd_R2_2:
# 531 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Odd_R2_Text_1, MSGBOX_DEFAULT
# 532 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Odd_R3::
# 541 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 542 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 543 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Odd_R3_Text_0, MSGBOX_YESNO
# 544 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Odd_R3_2
# 549 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_ODD_R3, ParcelFloodbasinSluice_Odd_R3_Text_1
# 550 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Odd_R3_Text_2, MSGBOX_DEFAULT
# 551 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Odd_R3_2:
# 545 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Odd_R2_Text_1, MSGBOX_DEFAULT
# 546 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Odd_R4::
# 555 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 556 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 557 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Odd_R4_Text_0, MSGBOX_YESNO
# 558 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Odd_R4_2
# 563 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_ODD_R4, ParcelFloodbasinSluice_Odd_R3_Text_1
# 564 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Odd_R4_Text_1, MSGBOX_DEFAULT
# 565 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Odd_R4_2:
# 559 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Odd_R2_Text_1, MSGBOX_DEFAULT
# 560 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Odd_R5::
# 569 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 570 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 571 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Odd_R5_Text_0, MSGBOX_YESNO
# 572 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Odd_R5_2
# 577 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_ODD_R5, ParcelFloodbasinSluice_Odd_R5_Text_1
# 578 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Odd_R5_Text_2, MSGBOX_DEFAULT
# 579 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Odd_R5_2:
# 573 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Odd_R2_Text_1, MSGBOX_DEFAULT
# 574 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Grim::
# 583 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SLU_GRIM, ParcelFloodbasinSluice_Grim_Text_0, ParcelFloodbasinSluice_Grim_Text_1, ParcelFloodbasinSluice_Grim_FirstWin
# 587 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 588 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasinSluice_Grim_3
ParcelFloodbasinSluice_Grim_1:
# 591 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasinSluice_Grim_8
ParcelFloodbasinSluice_Grim_6:
# 594 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasinSluice_Grim_13
ParcelFloodbasinSluice_Grim_11:
# 597 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasinSluice_Grim_18
ParcelFloodbasinSluice_Grim_16:
# 600 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Grim_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasinSluice_Grim_2:
# 589 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Grim_R2
	goto ParcelFloodbasinSluice_Grim_1

ParcelFloodbasinSluice_Grim_3:
# 588 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_GRIM_R2
	goto_if 0, ParcelFloodbasinSluice_Grim_2
	goto ParcelFloodbasinSluice_Grim_1

ParcelFloodbasinSluice_Grim_7:
# 592 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Grim_R3
	goto ParcelFloodbasinSluice_Grim_6

ParcelFloodbasinSluice_Grim_8:
# 591 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_GRIM_R3
	goto_if 0, ParcelFloodbasinSluice_Grim_7
	goto ParcelFloodbasinSluice_Grim_6

ParcelFloodbasinSluice_Grim_12:
# 595 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Grim_R4
	goto ParcelFloodbasinSluice_Grim_11

ParcelFloodbasinSluice_Grim_13:
# 594 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_GRIM_R4
	goto_if 0, ParcelFloodbasinSluice_Grim_12
	goto ParcelFloodbasinSluice_Grim_11

ParcelFloodbasinSluice_Grim_17:
# 598 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto ParcelFloodbasinSluice_Grim_R5
	goto ParcelFloodbasinSluice_Grim_16

ParcelFloodbasinSluice_Grim_18:
# 597 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	checktrainerflag TRAINER_SKALD_SLU_GRIM_R5
	goto_if 0, ParcelFloodbasinSluice_Grim_17
	goto ParcelFloodbasinSluice_Grim_16


ParcelFloodbasinSluice_Grim_FirstWin::
# 604 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Grim_Text_2, MSGBOX_DEFAULT
# 605 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Grim_R2::
# 609 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 610 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 611 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Grim_R2_Text_0, MSGBOX_YESNO
# 612 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Grim_R2_2
# 617 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_GRIM_R2, ParcelFloodbasinSluice_Grim_R2_Text_2
# 618 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Grim_R2_Text_3, MSGBOX_DEFAULT
# 619 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Grim_R2_2:
# 613 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Grim_R2_Text_1, MSGBOX_DEFAULT
# 614 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Grim_R3::
# 623 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 624 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 625 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Grim_R3_Text_0, MSGBOX_YESNO
# 626 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Grim_R3_2
# 631 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_GRIM_R3, ParcelFloodbasinSluice_Grim_R3_Text_1
# 632 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Grim_R3_Text_2, MSGBOX_DEFAULT
# 633 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Grim_R3_2:
# 627 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Grim_R2_Text_1, MSGBOX_DEFAULT
# 628 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Grim_R4::
# 637 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 638 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 639 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Grim_R4_Text_0, MSGBOX_YESNO
# 640 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Grim_R4_2
# 645 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_GRIM_R4, ParcelFloodbasinSluice_Grim_R4_Text_1
# 646 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Grim_R4_Text_2, MSGBOX_DEFAULT
# 647 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Grim_R4_2:
# 641 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Grim_R2_Text_1, MSGBOX_DEFAULT
# 642 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Grim_R5::
# 651 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 652 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 653 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Grim_R5_Text_0, MSGBOX_YESNO
# 654 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasinSluice_Grim_R5_2
# 659 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SLU_GRIM_R5, ParcelFloodbasinSluice_Grim_R3_Text_1
# 660 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Grim_R5_Text_1, MSGBOX_DEFAULT
# 661 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Grim_R5_2:
# 655 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Grim_R2_Text_1, MSGBOX_DEFAULT
# 656 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Surveyor::
# 665 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	lock
# 666 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	faceplayer
# 667 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasinSluice_Surveyor_2
# 672 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Surveyor_Text_1, MSGBOX_DEFAULT
# 673 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end

ParcelFloodbasinSluice_Surveyor_2:
# 668 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Surveyor_Text_0, MSGBOX_DEFAULT
# 669 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	release
	end


ParcelFloodbasinSluice_Sign::
# 677 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	msgbox ParcelFloodbasinSluice_Sign_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasinSluice_ItemHyperPotion::
# 680 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	finditem ITEM_HYPER_POTION
	end


ParcelFloodbasinSluice_Nils_Text_0:
# 10 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "NILS: The crossing's the old ford. The\n"
	.string "Board put a gauge on it and called it a\l"
	.string "sluice. Battle.$"

ParcelFloodbasinSluice_Nils_Text_1:
# 11 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "NILS: …Gauged.$"

ParcelFloodbasinSluice_Nils_Text_2:
# 26 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "NILS: Water's two hands lower than the\n"
	.string "gauge says normal. The gauge was set in\l"
	.string "a wet year.$"

ParcelFloodbasinSluice_Nils_R2_Text_0:
# 37 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "NILS: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasinSluice_Nils_R2_Text_1:
# 39 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "NILS: Another time, then.$"

ParcelFloodbasinSluice_Nils_R2_Text_2:
# 43 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "NILS: …Again, then. Later.$"

ParcelFloodbasinSluice_Nils_R2_Text_3:
# 44 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "NILS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasinSluice_Nils_R3_Text_0:
# 51 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "NILS: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasinSluice_Nils_R3_Text_1:
# 58 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "NILS: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasinSluice_Nils_R4_Text_0:
# 65 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "NILS: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelFloodbasinSluice_Nils_R4_Text_1:
# 71 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "NILS: That's the one I wanted to see.$"

ParcelFloodbasinSluice_Nils_R4_Text_2:
# 72 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "NILS: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasinSluice_Nils_R5_Text_0:
# 79 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "NILS: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelFloodbasinSluice_Nils_R5_Text_1:
# 86 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "NILS: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFloodbasinSluice_Sverre_Text_0:
# 92 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SVERRE: Phase 2 starts here. Survey\n"
	.string "stakes to the river. I pulled three up.\l"
	.string "They put five back. Fight.$"

ParcelFloodbasinSluice_Sverre_Text_1:
# 93 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SVERRE: …Five, then.$"

ParcelFloodbasinSluice_Sverre_Text_2:
# 108 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SVERRE: The fill they want comes out of\n"
	.string "the hill above the Corridor. Everybody's\l"
	.string "hole is somebody else's hill.$"

ParcelFloodbasinSluice_Sverre_R2_Text_0:
# 119 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SVERRE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasinSluice_Sverre_R2_Text_1:
# 121 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SVERRE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFloodbasinSluice_Sverre_R2_Text_2:
# 125 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SVERRE: Noted. Properly, this time.$"

ParcelFloodbasinSluice_Sverre_R2_Text_3:
# 126 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SVERRE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasinSluice_Sverre_R3_Text_0:
# 133 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SVERRE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasinSluice_Sverre_R3_Text_1:
# 140 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SVERRE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasinSluice_Sverre_R4_Text_0:
# 147 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SVERRE: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasinSluice_Sverre_R4_Text_1:
# 153 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SVERRE: …Fair.$"

ParcelFloodbasinSluice_Sverre_R4_Text_2:
# 154 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SVERRE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasinSluice_Sverre_R5_Text_0:
# 161 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SVERRE: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelFloodbasinSluice_Sverre_R5_Text_1:
# 168 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SVERRE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasinSluice_Elin_Text_0:
# 174 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ELIN: The PELIPPER nest on the far\n"
	.string "bank. They'll move when the works start.\l"
	.string "Birds don't do notice periods. Battle!$"

ParcelFloodbasinSluice_Elin_Text_1:
# 175 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ELIN: …Noted.$"

ParcelFloodbasinSluice_Elin_Text_2:
# 190 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ELIN: I asked DORSEY where the birds\n"
	.string "go. He said 'elsewhere'. He said it\l"
	.string "kindly.$"

ParcelFloodbasinSluice_Elin_R2_Text_0:
# 201 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ELIN: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelFloodbasinSluice_Elin_R2_Text_1:
# 203 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ELIN: Suit yourself. I'm here.$"

ParcelFloodbasinSluice_Elin_R2_Text_2:
# 207 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ELIN: That's the one I wanted to see.$"

ParcelFloodbasinSluice_Elin_R2_Text_3:
# 208 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ELIN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasinSluice_Elin_R3_Text_0:
# 215 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ELIN: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasinSluice_Elin_R3_Text_1:
# 222 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ELIN: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasinSluice_Elin_R4_Text_0:
# 229 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ELIN: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelFloodbasinSluice_Elin_R4_Text_1:
# 235 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ELIN: Noted. Properly, this time.$"

ParcelFloodbasinSluice_Elin_R4_Text_2:
# 236 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ELIN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasinSluice_Elin_R5_Text_0:
# 243 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ELIN: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasinSluice_Elin_R5_Text_1:
# 249 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ELIN: …Fair.$"

ParcelFloodbasinSluice_Elin_R5_Text_2:
# 250 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ELIN: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFloodbasinSluice_Erik_Text_0:
# 256 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ERIK: I camp here every spring to see\n"
	.string "the ford run. This year I'm early. The\l"
	.string "ford ran in winter. Fight.$"

ParcelFloodbasinSluice_Erik_Text_1:
# 257 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ERIK: …Still early.$"

ParcelFloodbasinSluice_Erik_Text_2:
# 272 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ERIK: When the sluice goes in, the\n"
	.string "ford's done. You can't camp by a thing\l"
	.string "that's done.$"

ParcelFloodbasinSluice_Erik_R2_Text_0:
# 283 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ERIK: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasinSluice_Erik_R2_Text_1:
# 285 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ERIK: Fine. Same spot.$"

ParcelFloodbasinSluice_Erik_R2_Text_2:
# 289 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ERIK: Right. That's the whole of it.$"

ParcelFloodbasinSluice_Erik_R2_Text_3:
# 290 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ERIK: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasinSluice_Erik_R3_Text_0:
# 297 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ERIK: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasinSluice_Erik_R3_Text_1:
# 304 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ERIK: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasinSluice_Erik_R4_Text_0:
# 311 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ERIK: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFloodbasinSluice_Erik_R4_Text_1:
# 318 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ERIK: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasinSluice_Erik_R5_Text_0:
# 325 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ERIK: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasinSluice_Erik_R5_Text_1:
# 331 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ERIK: Noted. Properly, this time.$"

ParcelFloodbasinSluice_Erik_R5_Text_2:
# 332 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ERIK: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFloodbasinSluice_Siri_Text_0:
# 338 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SIRI: You're the ranger from the basin.\n"
	.string "Everyone says. Battle, so I can say I\l"
	.string "did.$"

ParcelFloodbasinSluice_Siri_Text_1:
# 339 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SIRI: …Now I can say it.$"

ParcelFloodbasinSluice_Siri_Text_2:
# 354 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SIRI: The relief tent handed out\n"
	.string "blankets with MEREHOLT on them. Warm\l"
	.string "blankets. I kept mine.$"

ParcelFloodbasinSluice_Siri_R2_Text_0:
# 365 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SIRI: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasinSluice_Siri_R2_Text_1:
# 367 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SIRI: Fine. Same spot.$"

ParcelFloodbasinSluice_Siri_R2_Text_2:
# 371 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SIRI: Still yours.$"

ParcelFloodbasinSluice_Siri_R2_Text_3:
# 372 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SIRI: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasinSluice_Siri_R3_Text_0:
# 379 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SIRI: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasinSluice_Siri_R3_Text_1:
# 385 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SIRI: Noted. Properly, this time.$"

ParcelFloodbasinSluice_Siri_R3_Text_2:
# 386 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SIRI: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasinSluice_Siri_R4_Text_0:
# 393 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SIRI: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelFloodbasinSluice_Siri_R4_Text_1:
# 399 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SIRI: Right. That's the whole of it.$"

ParcelFloodbasinSluice_Siri_R4_Text_2:
# 400 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SIRI: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasinSluice_Siri_R5_Text_0:
# 407 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SIRI: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelFloodbasinSluice_Siri_R5_Text_1:
# 414 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SIRI: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFloodbasinSluice_Bjarte_Text_0:
# 420 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: Fish from the sluice side and\n"
	.string "you fish downstream of the Board.\l"
	.string "Everything is. Battle.$"

ParcelFloodbasinSluice_Bjarte_Text_1:
# 421 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: …Downstream of you, now.$"

ParcelFloodbasinSluice_Bjarte_Text_2:
# 436 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: My father fished the ford.\n"
	.string "Barefoot. You can't put your foot in it\l"
	.string "now without a form.$"

ParcelFloodbasinSluice_Bjarte_R2_Text_0:
# 447 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelFloodbasinSluice_Bjarte_R2_Text_1:
# 449 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: Another time, then.$"

ParcelFloodbasinSluice_Bjarte_R2_Text_2:
# 453 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: Still yours.$"

ParcelFloodbasinSluice_Bjarte_R2_Text_3:
# 454 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasinSluice_Bjarte_R3_Text_0:
# 461 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelFloodbasinSluice_Bjarte_R3_Text_1:
# 467 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: That's the one I wanted to see.$"

ParcelFloodbasinSluice_Bjarte_R3_Text_2:
# 468 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasinSluice_Bjarte_R4_Text_0:
# 475 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasinSluice_Bjarte_R4_Text_1:
# 481 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: …Fair.$"

ParcelFloodbasinSluice_Bjarte_R4_Text_2:
# 482 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasinSluice_Bjarte_R5_Text_0:
# 489 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFloodbasinSluice_Bjarte_R5_Text_1:
# 495 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: …Again, then. Later.$"

ParcelFloodbasinSluice_Bjarte_R5_Text_2:
# 496 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "BJARTE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasinSluice_Odd_Text_0:
# 502 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ODD: Nobody comes this side without\n"
	.string "Surf. So you're the one. Full strength.$"

ParcelFloodbasinSluice_Odd_Text_1:
# 503 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ODD: …The one.$"

ParcelFloodbasinSluice_Odd_Text_2:
# 518 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ODD: The far side of a river is where\n"
	.string "things get left alone. Not for long now.$"

ParcelFloodbasinSluice_Odd_R2_Text_0:
# 529 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ODD: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasinSluice_Odd_R2_Text_1:
# 531 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ODD: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFloodbasinSluice_Odd_R2_Text_2:
# 535 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ODD: …Again, then. Later.$"

ParcelFloodbasinSluice_Odd_R2_Text_3:
# 536 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ODD: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasinSluice_Odd_R3_Text_0:
# 543 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ODD: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasinSluice_Odd_R3_Text_1:
# 549 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ODD: Still yours.$"

ParcelFloodbasinSluice_Odd_R3_Text_2:
# 550 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ODD: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasinSluice_Odd_R4_Text_0:
# 557 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ODD: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFloodbasinSluice_Odd_R4_Text_1:
# 564 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ODD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasinSluice_Odd_R5_Text_0:
# 571 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ODD: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasinSluice_Odd_R5_Text_1:
# 577 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ODD: That's the one I wanted to see.$"

ParcelFloodbasinSluice_Odd_R5_Text_2:
# 578 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "ODD: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasinSluice_Grim_Text_0:
# 584 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "GRIM: Stones in the river bed. Worked\n"
	.string "stones. Somebody built a weir here\l"
	.string "before the Board was a word. Battle.$"

ParcelFloodbasinSluice_Grim_Text_1:
# 585 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "GRIM: …Older than me too.$"

ParcelFloodbasinSluice_Grim_Text_2:
# 600 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "GRIM: Every sluice is the third sluice\n"
	.string "on the same river. Nobody writes down\l"
	.string "the first two.$"

ParcelFloodbasinSluice_Grim_R2_Text_0:
# 611 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "GRIM: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasinSluice_Grim_R2_Text_1:
# 613 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "GRIM: Another time, then.$"

ParcelFloodbasinSluice_Grim_R2_Text_2:
# 617 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "GRIM: …Again, then. Later.$"

ParcelFloodbasinSluice_Grim_R2_Text_3:
# 618 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "GRIM: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasinSluice_Grim_R3_Text_0:
# 625 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "GRIM: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelFloodbasinSluice_Grim_R3_Text_1:
# 631 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "GRIM: …Fair.$"

ParcelFloodbasinSluice_Grim_R3_Text_2:
# 632 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "GRIM: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasinSluice_Grim_R4_Text_0:
# 639 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "GRIM: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFloodbasinSluice_Grim_R4_Text_1:
# 645 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "GRIM: Still yours.$"

ParcelFloodbasinSluice_Grim_R4_Text_2:
# 646 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "GRIM: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasinSluice_Grim_R5_Text_0:
# 653 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "GRIM: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasinSluice_Grim_R5_Text_1:
# 660 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "GRIM: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFloodbasinSluice_Surveyor_Text_0:
# 668 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SURVEYOR: Phase 2 goes ahead. Sluice\n"
	.string "gates here. The weir above is 'deferred'.\l"
	.string "I measure what I'm told. There's less to\l"
	.string "measure now, and I'm told it kindly.$"

ParcelFloodbasinSluice_Surveyor_Text_1:
# 672 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "SURVEYOR: Phase 2. Sluice gates here, a\n"
	.string "weir above, a reservoir where the ford\l"
	.string "was. 'Flood control.'\p"
	.string "I measure what I'm told to measure. The\n"
	.string "river measures the rest.$"

ParcelFloodbasinSluice_Sign_Text_0:
# 677 "data/maps/ParcelFloodbasinSluice/scripts.pory"
	.string "UPPER SLUICE (proposed). WATER BOARD /\n"
	.string "MEREHOLT CIVIL. Works commence on\l"
	.string "approval.$"
