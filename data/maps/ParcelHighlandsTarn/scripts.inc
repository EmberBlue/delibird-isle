ParcelHighlandsTarn_MapScripts::
	.byte 0


ParcelHighlandsTarn_Arnfinn::
# 9 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_single TRAINER_SKALD_TRN_ARNFINN, ParcelHighlandsTarn_Arnfinn_Text_0, ParcelHighlandsTarn_Arnfinn_Text_1, ParcelHighlandsTarn_Arnfinn_FirstWin
# 13 "data/maps/ParcelHighlandsTarn/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 14 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlandsTarn_Arnfinn_3
ParcelHighlandsTarn_Arnfinn_1:
# 17 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlandsTarn_Arnfinn_8
ParcelHighlandsTarn_Arnfinn_6:
# 20 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlandsTarn_Arnfinn_13
ParcelHighlandsTarn_Arnfinn_11:
# 23 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlandsTarn_Arnfinn_18
ParcelHighlandsTarn_Arnfinn_16:
# 26 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Arnfinn_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlandsTarn_Arnfinn_2:
# 15 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Arnfinn_R2
	goto ParcelHighlandsTarn_Arnfinn_1

ParcelHighlandsTarn_Arnfinn_3:
# 14 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_ARNFINN_R2
	goto_if 0, ParcelHighlandsTarn_Arnfinn_2
	goto ParcelHighlandsTarn_Arnfinn_1

ParcelHighlandsTarn_Arnfinn_7:
# 18 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Arnfinn_R3
	goto ParcelHighlandsTarn_Arnfinn_6

ParcelHighlandsTarn_Arnfinn_8:
# 17 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_ARNFINN_R3
	goto_if 0, ParcelHighlandsTarn_Arnfinn_7
	goto ParcelHighlandsTarn_Arnfinn_6

ParcelHighlandsTarn_Arnfinn_12:
# 21 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Arnfinn_R4
	goto ParcelHighlandsTarn_Arnfinn_11

ParcelHighlandsTarn_Arnfinn_13:
# 20 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_ARNFINN_R4
	goto_if 0, ParcelHighlandsTarn_Arnfinn_12
	goto ParcelHighlandsTarn_Arnfinn_11

ParcelHighlandsTarn_Arnfinn_17:
# 24 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Arnfinn_R5
	goto ParcelHighlandsTarn_Arnfinn_16

ParcelHighlandsTarn_Arnfinn_18:
# 23 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_ARNFINN_R5
	goto_if 0, ParcelHighlandsTarn_Arnfinn_17
	goto ParcelHighlandsTarn_Arnfinn_16


ParcelHighlandsTarn_Arnfinn_FirstWin::
# 30 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Arnfinn_Text_2, MSGBOX_DEFAULT
# 31 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Arnfinn_R2::
# 35 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 36 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 37 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Arnfinn_R2_Text_0, MSGBOX_YESNO
# 38 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Arnfinn_R2_2
# 43 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_ARNFINN_R2, ParcelHighlandsTarn_Arnfinn_R2_Text_2
# 44 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Arnfinn_R2_Text_3, MSGBOX_DEFAULT
# 45 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Arnfinn_R2_2:
# 39 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Arnfinn_R2_Text_1, MSGBOX_DEFAULT
# 40 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Arnfinn_R3::
# 49 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 50 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 51 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Arnfinn_R3_Text_0, MSGBOX_YESNO
# 52 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Arnfinn_R3_2
# 57 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_ARNFINN_R3, ParcelHighlandsTarn_Arnfinn_R3_Text_1
# 58 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Arnfinn_R3_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Arnfinn_R3_2:
# 53 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Arnfinn_R2_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Arnfinn_R4::
# 63 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 64 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 65 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Arnfinn_R4_Text_0, MSGBOX_YESNO
# 66 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Arnfinn_R4_2
# 71 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_ARNFINN_R4, ParcelHighlandsTarn_Arnfinn_R4_Text_1
# 72 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Arnfinn_R4_Text_2, MSGBOX_DEFAULT
# 73 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Arnfinn_R4_2:
# 67 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Arnfinn_R2_Text_1, MSGBOX_DEFAULT
# 68 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Arnfinn_R5::
# 77 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 78 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 79 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Arnfinn_R5_Text_0, MSGBOX_YESNO
# 80 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Arnfinn_R5_2
# 85 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_ARNFINN_R5, ParcelHighlandsTarn_Arnfinn_R5_Text_1
# 86 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Arnfinn_R5_Text_2, MSGBOX_DEFAULT
# 87 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Arnfinn_R5_2:
# 81 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Arnfinn_R2_Text_1, MSGBOX_DEFAULT
# 82 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Halvard::
# 91 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_single TRAINER_SKALD_TRN_HALVARD, ParcelHighlandsTarn_Halvard_Text_0, ParcelHighlandsTarn_Halvard_Text_1, ParcelHighlandsTarn_Halvard_FirstWin
# 95 "data/maps/ParcelHighlandsTarn/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 96 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlandsTarn_Halvard_3
ParcelHighlandsTarn_Halvard_1:
# 99 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlandsTarn_Halvard_8
ParcelHighlandsTarn_Halvard_6:
# 102 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlandsTarn_Halvard_13
ParcelHighlandsTarn_Halvard_11:
# 105 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlandsTarn_Halvard_18
ParcelHighlandsTarn_Halvard_16:
# 108 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Halvard_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlandsTarn_Halvard_2:
# 97 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Halvard_R2
	goto ParcelHighlandsTarn_Halvard_1

ParcelHighlandsTarn_Halvard_3:
# 96 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_HALVARD_R2
	goto_if 0, ParcelHighlandsTarn_Halvard_2
	goto ParcelHighlandsTarn_Halvard_1

ParcelHighlandsTarn_Halvard_7:
# 100 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Halvard_R3
	goto ParcelHighlandsTarn_Halvard_6

ParcelHighlandsTarn_Halvard_8:
# 99 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_HALVARD_R3
	goto_if 0, ParcelHighlandsTarn_Halvard_7
	goto ParcelHighlandsTarn_Halvard_6

ParcelHighlandsTarn_Halvard_12:
# 103 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Halvard_R4
	goto ParcelHighlandsTarn_Halvard_11

ParcelHighlandsTarn_Halvard_13:
# 102 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_HALVARD_R4
	goto_if 0, ParcelHighlandsTarn_Halvard_12
	goto ParcelHighlandsTarn_Halvard_11

ParcelHighlandsTarn_Halvard_17:
# 106 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Halvard_R5
	goto ParcelHighlandsTarn_Halvard_16

ParcelHighlandsTarn_Halvard_18:
# 105 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_HALVARD_R5
	goto_if 0, ParcelHighlandsTarn_Halvard_17
	goto ParcelHighlandsTarn_Halvard_16


ParcelHighlandsTarn_Halvard_FirstWin::
# 112 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Halvard_Text_2, MSGBOX_DEFAULT
# 113 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Halvard_R2::
# 117 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 118 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 119 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Halvard_R2_Text_0, MSGBOX_YESNO
# 120 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Halvard_R2_2
# 125 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_HALVARD_R2, ParcelHighlandsTarn_Halvard_R2_Text_2
# 126 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Halvard_R2_Text_3, MSGBOX_DEFAULT
# 127 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Halvard_R2_2:
# 121 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Halvard_R2_Text_1, MSGBOX_DEFAULT
# 122 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Halvard_R3::
# 131 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 132 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 133 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Halvard_R3_Text_0, MSGBOX_YESNO
# 134 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Halvard_R3_2
# 139 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_HALVARD_R3, ParcelHighlandsTarn_Halvard_R3_Text_1
# 140 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Halvard_R3_Text_2, MSGBOX_DEFAULT
# 141 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Halvard_R3_2:
# 135 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Halvard_R2_Text_1, MSGBOX_DEFAULT
# 136 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Halvard_R4::
# 145 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 146 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 147 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Halvard_R4_Text_0, MSGBOX_YESNO
# 148 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Halvard_R4_2
# 153 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_HALVARD_R4, ParcelHighlandsTarn_Halvard_R4_Text_1
# 154 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Halvard_R4_Text_2, MSGBOX_DEFAULT
# 155 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Halvard_R4_2:
# 149 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Halvard_R2_Text_1, MSGBOX_DEFAULT
# 150 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Halvard_R5::
# 159 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 160 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 161 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Halvard_R5_Text_0, MSGBOX_YESNO
# 162 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Halvard_R5_2
# 167 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_HALVARD_R5, ParcelHighlandsTarn_Halvard_R2_Text_2
# 168 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Halvard_R5_Text_1, MSGBOX_DEFAULT
# 169 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Halvard_R5_2:
# 163 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Halvard_R2_Text_1, MSGBOX_DEFAULT
# 164 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Dagrun::
# 173 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_single TRAINER_SKALD_TRN_DAGRUN, ParcelHighlandsTarn_Dagrun_Text_0, ParcelHighlandsTarn_Dagrun_Text_1, ParcelHighlandsTarn_Dagrun_FirstWin
# 177 "data/maps/ParcelHighlandsTarn/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 178 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlandsTarn_Dagrun_3
ParcelHighlandsTarn_Dagrun_1:
# 181 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlandsTarn_Dagrun_8
ParcelHighlandsTarn_Dagrun_6:
# 184 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlandsTarn_Dagrun_13
ParcelHighlandsTarn_Dagrun_11:
# 187 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlandsTarn_Dagrun_18
ParcelHighlandsTarn_Dagrun_16:
# 190 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Dagrun_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlandsTarn_Dagrun_2:
# 179 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Dagrun_R2
	goto ParcelHighlandsTarn_Dagrun_1

ParcelHighlandsTarn_Dagrun_3:
# 178 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_DAGRUN_R2
	goto_if 0, ParcelHighlandsTarn_Dagrun_2
	goto ParcelHighlandsTarn_Dagrun_1

ParcelHighlandsTarn_Dagrun_7:
# 182 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Dagrun_R3
	goto ParcelHighlandsTarn_Dagrun_6

ParcelHighlandsTarn_Dagrun_8:
# 181 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_DAGRUN_R3
	goto_if 0, ParcelHighlandsTarn_Dagrun_7
	goto ParcelHighlandsTarn_Dagrun_6

ParcelHighlandsTarn_Dagrun_12:
# 185 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Dagrun_R4
	goto ParcelHighlandsTarn_Dagrun_11

ParcelHighlandsTarn_Dagrun_13:
# 184 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_DAGRUN_R4
	goto_if 0, ParcelHighlandsTarn_Dagrun_12
	goto ParcelHighlandsTarn_Dagrun_11

ParcelHighlandsTarn_Dagrun_17:
# 188 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Dagrun_R5
	goto ParcelHighlandsTarn_Dagrun_16

ParcelHighlandsTarn_Dagrun_18:
# 187 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_DAGRUN_R5
	goto_if 0, ParcelHighlandsTarn_Dagrun_17
	goto ParcelHighlandsTarn_Dagrun_16


ParcelHighlandsTarn_Dagrun_FirstWin::
# 194 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Dagrun_Text_2, MSGBOX_DEFAULT
# 195 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Dagrun_R2::
# 199 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 200 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 201 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Dagrun_R2_Text_0, MSGBOX_YESNO
# 202 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Dagrun_R2_2
# 207 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_DAGRUN_R2, ParcelHighlandsTarn_Dagrun_R2_Text_2
# 208 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Dagrun_R2_Text_3, MSGBOX_DEFAULT
# 209 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Dagrun_R2_2:
# 203 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Dagrun_R2_Text_1, MSGBOX_DEFAULT
# 204 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Dagrun_R3::
# 213 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 214 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 215 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Dagrun_R3_Text_0, MSGBOX_YESNO
# 216 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Dagrun_R3_2
# 221 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_DAGRUN_R3, ParcelHighlandsTarn_Dagrun_R3_Text_1
# 222 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Dagrun_R3_Text_2, MSGBOX_DEFAULT
# 223 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Dagrun_R3_2:
# 217 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Dagrun_R2_Text_1, MSGBOX_DEFAULT
# 218 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Dagrun_R4::
# 227 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 228 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 229 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Dagrun_R4_Text_0, MSGBOX_YESNO
# 230 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Dagrun_R4_2
# 235 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_DAGRUN_R4, ParcelHighlandsTarn_Dagrun_R2_Text_2
# 236 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Dagrun_R4_Text_1, MSGBOX_DEFAULT
# 237 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Dagrun_R4_2:
# 231 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Dagrun_R2_Text_1, MSGBOX_DEFAULT
# 232 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Dagrun_R5::
# 241 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 242 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 243 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Dagrun_R5_Text_0, MSGBOX_YESNO
# 244 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Dagrun_R5_2
# 249 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_DAGRUN_R5, ParcelHighlandsTarn_Dagrun_R5_Text_1
# 250 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Dagrun_R5_Text_2, MSGBOX_DEFAULT
# 251 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Dagrun_R5_2:
# 245 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Dagrun_R2_Text_1, MSGBOX_DEFAULT
# 246 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Gunnvor::
# 255 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_single TRAINER_SKALD_TRN_GUNNVOR, ParcelHighlandsTarn_Gunnvor_Text_0, ParcelHighlandsTarn_Gunnvor_Text_1, ParcelHighlandsTarn_Gunnvor_FirstWin
# 259 "data/maps/ParcelHighlandsTarn/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 260 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlandsTarn_Gunnvor_3
ParcelHighlandsTarn_Gunnvor_1:
# 263 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlandsTarn_Gunnvor_8
ParcelHighlandsTarn_Gunnvor_6:
# 266 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlandsTarn_Gunnvor_13
ParcelHighlandsTarn_Gunnvor_11:
# 269 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlandsTarn_Gunnvor_18
ParcelHighlandsTarn_Gunnvor_16:
# 272 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Gunnvor_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlandsTarn_Gunnvor_2:
# 261 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Gunnvor_R2
	goto ParcelHighlandsTarn_Gunnvor_1

ParcelHighlandsTarn_Gunnvor_3:
# 260 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_GUNNVOR_R2
	goto_if 0, ParcelHighlandsTarn_Gunnvor_2
	goto ParcelHighlandsTarn_Gunnvor_1

ParcelHighlandsTarn_Gunnvor_7:
# 264 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Gunnvor_R3
	goto ParcelHighlandsTarn_Gunnvor_6

ParcelHighlandsTarn_Gunnvor_8:
# 263 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_GUNNVOR_R3
	goto_if 0, ParcelHighlandsTarn_Gunnvor_7
	goto ParcelHighlandsTarn_Gunnvor_6

ParcelHighlandsTarn_Gunnvor_12:
# 267 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Gunnvor_R4
	goto ParcelHighlandsTarn_Gunnvor_11

ParcelHighlandsTarn_Gunnvor_13:
# 266 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_GUNNVOR_R4
	goto_if 0, ParcelHighlandsTarn_Gunnvor_12
	goto ParcelHighlandsTarn_Gunnvor_11

ParcelHighlandsTarn_Gunnvor_17:
# 270 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Gunnvor_R5
	goto ParcelHighlandsTarn_Gunnvor_16

ParcelHighlandsTarn_Gunnvor_18:
# 269 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_GUNNVOR_R5
	goto_if 0, ParcelHighlandsTarn_Gunnvor_17
	goto ParcelHighlandsTarn_Gunnvor_16


ParcelHighlandsTarn_Gunnvor_FirstWin::
# 276 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Gunnvor_Text_2, MSGBOX_DEFAULT
# 277 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Gunnvor_R2::
# 281 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 282 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 283 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Gunnvor_R2_Text_0, MSGBOX_YESNO
# 284 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Gunnvor_R2_2
# 289 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_GUNNVOR_R2, ParcelHighlandsTarn_Gunnvor_R2_Text_2
# 290 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Gunnvor_R2_Text_3, MSGBOX_DEFAULT
# 291 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Gunnvor_R2_2:
# 285 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Gunnvor_R2_Text_1, MSGBOX_DEFAULT
# 286 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Gunnvor_R3::
# 295 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 296 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 297 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Gunnvor_R3_Text_0, MSGBOX_YESNO
# 298 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Gunnvor_R3_2
# 303 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_GUNNVOR_R3, ParcelHighlandsTarn_Gunnvor_R2_Text_2
# 304 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Gunnvor_R3_Text_1, MSGBOX_DEFAULT
# 305 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Gunnvor_R3_2:
# 299 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Gunnvor_R2_Text_1, MSGBOX_DEFAULT
# 300 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Gunnvor_R4::
# 309 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 310 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 311 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Gunnvor_R4_Text_0, MSGBOX_YESNO
# 312 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Gunnvor_R4_2
# 317 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_GUNNVOR_R4, ParcelHighlandsTarn_Gunnvor_R4_Text_1
# 318 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Gunnvor_R4_Text_2, MSGBOX_DEFAULT
# 319 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Gunnvor_R4_2:
# 313 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Gunnvor_R2_Text_1, MSGBOX_DEFAULT
# 314 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Gunnvor_R5::
# 323 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 324 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 325 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Gunnvor_R5_Text_0, MSGBOX_YESNO
# 326 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Gunnvor_R5_2
# 331 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_GUNNVOR_R5, ParcelHighlandsTarn_Gunnvor_R5_Text_1
# 332 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Gunnvor_R5_Text_2, MSGBOX_DEFAULT
# 333 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Gunnvor_R5_2:
# 327 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Gunnvor_R2_Text_1, MSGBOX_DEFAULT
# 328 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Jorund::
# 337 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_single TRAINER_SKALD_TRN_JORUND, ParcelHighlandsTarn_Jorund_Text_0, ParcelHighlandsTarn_Jorund_Text_1, ParcelHighlandsTarn_Jorund_FirstWin
# 341 "data/maps/ParcelHighlandsTarn/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 342 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlandsTarn_Jorund_3
ParcelHighlandsTarn_Jorund_1:
# 345 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlandsTarn_Jorund_8
ParcelHighlandsTarn_Jorund_6:
# 348 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlandsTarn_Jorund_13
ParcelHighlandsTarn_Jorund_11:
# 351 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlandsTarn_Jorund_18
ParcelHighlandsTarn_Jorund_16:
# 354 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Jorund_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlandsTarn_Jorund_2:
# 343 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Jorund_R2
	goto ParcelHighlandsTarn_Jorund_1

ParcelHighlandsTarn_Jorund_3:
# 342 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_JORUND_R2
	goto_if 0, ParcelHighlandsTarn_Jorund_2
	goto ParcelHighlandsTarn_Jorund_1

ParcelHighlandsTarn_Jorund_7:
# 346 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Jorund_R3
	goto ParcelHighlandsTarn_Jorund_6

ParcelHighlandsTarn_Jorund_8:
# 345 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_JORUND_R3
	goto_if 0, ParcelHighlandsTarn_Jorund_7
	goto ParcelHighlandsTarn_Jorund_6

ParcelHighlandsTarn_Jorund_12:
# 349 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Jorund_R4
	goto ParcelHighlandsTarn_Jorund_11

ParcelHighlandsTarn_Jorund_13:
# 348 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_JORUND_R4
	goto_if 0, ParcelHighlandsTarn_Jorund_12
	goto ParcelHighlandsTarn_Jorund_11

ParcelHighlandsTarn_Jorund_17:
# 352 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Jorund_R5
	goto ParcelHighlandsTarn_Jorund_16

ParcelHighlandsTarn_Jorund_18:
# 351 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_JORUND_R5
	goto_if 0, ParcelHighlandsTarn_Jorund_17
	goto ParcelHighlandsTarn_Jorund_16


ParcelHighlandsTarn_Jorund_FirstWin::
# 358 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Jorund_Text_2, MSGBOX_DEFAULT
# 359 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Jorund_R2::
# 363 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 364 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 365 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Jorund_R2_Text_0, MSGBOX_YESNO
# 366 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Jorund_R2_2
# 371 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_JORUND_R2, ParcelHighlandsTarn_Jorund_R2_Text_2
# 372 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Jorund_R2_Text_3, MSGBOX_DEFAULT
# 373 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Jorund_R2_2:
# 367 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Jorund_R2_Text_1, MSGBOX_DEFAULT
# 368 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Jorund_R3::
# 377 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 378 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 379 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Jorund_R3_Text_0, MSGBOX_YESNO
# 380 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Jorund_R3_2
# 385 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_JORUND_R3, ParcelHighlandsTarn_Jorund_R3_Text_1
# 386 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Jorund_R3_Text_2, MSGBOX_DEFAULT
# 387 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Jorund_R3_2:
# 381 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Jorund_R2_Text_1, MSGBOX_DEFAULT
# 382 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Jorund_R4::
# 391 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 392 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 393 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Jorund_R4_Text_0, MSGBOX_YESNO
# 394 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Jorund_R4_2
# 399 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_JORUND_R4, ParcelHighlandsTarn_Jorund_R4_Text_1
# 400 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Jorund_R4_Text_2, MSGBOX_DEFAULT
# 401 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Jorund_R4_2:
# 395 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Jorund_R2_Text_1, MSGBOX_DEFAULT
# 396 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Jorund_R5::
# 405 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 406 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 407 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Jorund_R5_Text_0, MSGBOX_YESNO
# 408 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Jorund_R5_2
# 413 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_JORUND_R5, ParcelHighlandsTarn_Jorund_R3_Text_1
# 414 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Jorund_R5_Text_1, MSGBOX_DEFAULT
# 415 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Jorund_R5_2:
# 409 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Jorund_R2_Text_1, MSGBOX_DEFAULT
# 410 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Roar::
# 419 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_single TRAINER_SKALD_TRN_ROAR, ParcelHighlandsTarn_Roar_Text_0, ParcelHighlandsTarn_Roar_Text_1, ParcelHighlandsTarn_Roar_FirstWin
# 423 "data/maps/ParcelHighlandsTarn/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 424 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlandsTarn_Roar_3
ParcelHighlandsTarn_Roar_1:
# 427 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlandsTarn_Roar_8
ParcelHighlandsTarn_Roar_6:
# 430 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlandsTarn_Roar_13
ParcelHighlandsTarn_Roar_11:
# 433 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlandsTarn_Roar_18
ParcelHighlandsTarn_Roar_16:
# 436 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Roar_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlandsTarn_Roar_2:
# 425 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Roar_R2
	goto ParcelHighlandsTarn_Roar_1

ParcelHighlandsTarn_Roar_3:
# 424 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_ROAR_R2
	goto_if 0, ParcelHighlandsTarn_Roar_2
	goto ParcelHighlandsTarn_Roar_1

ParcelHighlandsTarn_Roar_7:
# 428 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Roar_R3
	goto ParcelHighlandsTarn_Roar_6

ParcelHighlandsTarn_Roar_8:
# 427 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_ROAR_R3
	goto_if 0, ParcelHighlandsTarn_Roar_7
	goto ParcelHighlandsTarn_Roar_6

ParcelHighlandsTarn_Roar_12:
# 431 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Roar_R4
	goto ParcelHighlandsTarn_Roar_11

ParcelHighlandsTarn_Roar_13:
# 430 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_ROAR_R4
	goto_if 0, ParcelHighlandsTarn_Roar_12
	goto ParcelHighlandsTarn_Roar_11

ParcelHighlandsTarn_Roar_17:
# 434 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Roar_R5
	goto ParcelHighlandsTarn_Roar_16

ParcelHighlandsTarn_Roar_18:
# 433 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_ROAR_R5
	goto_if 0, ParcelHighlandsTarn_Roar_17
	goto ParcelHighlandsTarn_Roar_16


ParcelHighlandsTarn_Roar_FirstWin::
# 440 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Roar_Text_2, MSGBOX_DEFAULT
# 441 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Roar_R2::
# 445 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 446 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 447 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Roar_R2_Text_0, MSGBOX_YESNO
# 448 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Roar_R2_2
# 453 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_ROAR_R2, ParcelHighlandsTarn_Roar_R2_Text_2
# 454 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Roar_R2_Text_3, MSGBOX_DEFAULT
# 455 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Roar_R2_2:
# 449 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Roar_R2_Text_1, MSGBOX_DEFAULT
# 450 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Roar_R3::
# 459 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 460 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 461 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Roar_R3_Text_0, MSGBOX_YESNO
# 462 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Roar_R3_2
# 467 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_ROAR_R3, ParcelHighlandsTarn_Roar_R3_Text_1
# 468 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Roar_R3_Text_2, MSGBOX_DEFAULT
# 469 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Roar_R3_2:
# 463 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Roar_R2_Text_1, MSGBOX_DEFAULT
# 464 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Roar_R4::
# 473 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 474 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 475 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Roar_R4_Text_0, MSGBOX_YESNO
# 476 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Roar_R4_2
# 481 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_ROAR_R4, ParcelHighlandsTarn_Roar_R3_Text_1
# 482 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Roar_R4_Text_1, MSGBOX_DEFAULT
# 483 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Roar_R4_2:
# 477 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Roar_R2_Text_1, MSGBOX_DEFAULT
# 478 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Roar_R5::
# 487 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 488 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 489 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Roar_R5_Text_0, MSGBOX_YESNO
# 490 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Roar_R5_2
# 495 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_ROAR_R5, ParcelHighlandsTarn_Roar_R5_Text_1
# 496 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Roar_R5_Text_2, MSGBOX_DEFAULT
# 497 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Roar_R5_2:
# 491 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Roar_R2_Text_1, MSGBOX_DEFAULT
# 492 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Sigbjorn::
# 501 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_single TRAINER_SKALD_TRN_SIGBJORN, ParcelHighlandsTarn_Sigbjorn_Text_0, ParcelHighlandsTarn_Sigbjorn_Text_1, ParcelHighlandsTarn_Sigbjorn_FirstWin
# 505 "data/maps/ParcelHighlandsTarn/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 506 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlandsTarn_Sigbjorn_3
ParcelHighlandsTarn_Sigbjorn_1:
# 509 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlandsTarn_Sigbjorn_8
ParcelHighlandsTarn_Sigbjorn_6:
# 512 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlandsTarn_Sigbjorn_13
ParcelHighlandsTarn_Sigbjorn_11:
# 515 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlandsTarn_Sigbjorn_18
ParcelHighlandsTarn_Sigbjorn_16:
# 518 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Sigbjorn_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlandsTarn_Sigbjorn_2:
# 507 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Sigbjorn_R2
	goto ParcelHighlandsTarn_Sigbjorn_1

ParcelHighlandsTarn_Sigbjorn_3:
# 506 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_SIGBJORN_R2
	goto_if 0, ParcelHighlandsTarn_Sigbjorn_2
	goto ParcelHighlandsTarn_Sigbjorn_1

ParcelHighlandsTarn_Sigbjorn_7:
# 510 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Sigbjorn_R3
	goto ParcelHighlandsTarn_Sigbjorn_6

ParcelHighlandsTarn_Sigbjorn_8:
# 509 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_SIGBJORN_R3
	goto_if 0, ParcelHighlandsTarn_Sigbjorn_7
	goto ParcelHighlandsTarn_Sigbjorn_6

ParcelHighlandsTarn_Sigbjorn_12:
# 513 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Sigbjorn_R4
	goto ParcelHighlandsTarn_Sigbjorn_11

ParcelHighlandsTarn_Sigbjorn_13:
# 512 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_SIGBJORN_R4
	goto_if 0, ParcelHighlandsTarn_Sigbjorn_12
	goto ParcelHighlandsTarn_Sigbjorn_11

ParcelHighlandsTarn_Sigbjorn_17:
# 516 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Sigbjorn_R5
	goto ParcelHighlandsTarn_Sigbjorn_16

ParcelHighlandsTarn_Sigbjorn_18:
# 515 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_SIGBJORN_R5
	goto_if 0, ParcelHighlandsTarn_Sigbjorn_17
	goto ParcelHighlandsTarn_Sigbjorn_16


ParcelHighlandsTarn_Sigbjorn_FirstWin::
# 522 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Sigbjorn_Text_2, MSGBOX_DEFAULT
# 523 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Sigbjorn_R2::
# 527 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 528 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 529 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Sigbjorn_R2_Text_0, MSGBOX_YESNO
# 530 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Sigbjorn_R2_2
# 535 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_SIGBJORN_R2, ParcelHighlandsTarn_Sigbjorn_R2_Text_2
# 536 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Sigbjorn_R2_Text_3, MSGBOX_DEFAULT
# 537 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Sigbjorn_R2_2:
# 531 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Sigbjorn_R2_Text_1, MSGBOX_DEFAULT
# 532 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Sigbjorn_R3::
# 541 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 542 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 543 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Sigbjorn_R3_Text_0, MSGBOX_YESNO
# 544 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Sigbjorn_R3_2
# 549 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_SIGBJORN_R3, ParcelHighlandsTarn_Sigbjorn_R3_Text_1
# 550 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Sigbjorn_R3_Text_2, MSGBOX_DEFAULT
# 551 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Sigbjorn_R3_2:
# 545 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Sigbjorn_R2_Text_1, MSGBOX_DEFAULT
# 546 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Sigbjorn_R4::
# 555 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 556 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 557 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Sigbjorn_R4_Text_0, MSGBOX_YESNO
# 558 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Sigbjorn_R4_2
# 563 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_SIGBJORN_R4, ParcelHighlandsTarn_Sigbjorn_R2_Text_2
# 564 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Sigbjorn_R4_Text_1, MSGBOX_DEFAULT
# 565 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Sigbjorn_R4_2:
# 559 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Sigbjorn_R2_Text_1, MSGBOX_DEFAULT
# 560 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Sigbjorn_R5::
# 569 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 570 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 571 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Sigbjorn_R5_Text_0, MSGBOX_YESNO
# 572 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Sigbjorn_R5_2
# 577 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_SIGBJORN_R5, ParcelHighlandsTarn_Sigbjorn_R2_Text_2
# 578 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Sigbjorn_R5_Text_1, MSGBOX_DEFAULT
# 579 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Sigbjorn_R5_2:
# 573 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Sigbjorn_R2_Text_1, MSGBOX_DEFAULT
# 574 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Randi::
# 583 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_single TRAINER_SKALD_TRN_RANDI, ParcelHighlandsTarn_Randi_Text_0, ParcelHighlandsTarn_Randi_Text_1, ParcelHighlandsTarn_Randi_FirstWin
# 587 "data/maps/ParcelHighlandsTarn/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 588 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlandsTarn_Randi_3
ParcelHighlandsTarn_Randi_1:
# 591 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlandsTarn_Randi_8
ParcelHighlandsTarn_Randi_6:
# 594 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlandsTarn_Randi_13
ParcelHighlandsTarn_Randi_11:
# 597 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlandsTarn_Randi_18
ParcelHighlandsTarn_Randi_16:
# 600 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Randi_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlandsTarn_Randi_2:
# 589 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Randi_R2
	goto ParcelHighlandsTarn_Randi_1

ParcelHighlandsTarn_Randi_3:
# 588 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_RANDI_R2
	goto_if 0, ParcelHighlandsTarn_Randi_2
	goto ParcelHighlandsTarn_Randi_1

ParcelHighlandsTarn_Randi_7:
# 592 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Randi_R3
	goto ParcelHighlandsTarn_Randi_6

ParcelHighlandsTarn_Randi_8:
# 591 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_RANDI_R3
	goto_if 0, ParcelHighlandsTarn_Randi_7
	goto ParcelHighlandsTarn_Randi_6

ParcelHighlandsTarn_Randi_12:
# 595 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Randi_R4
	goto ParcelHighlandsTarn_Randi_11

ParcelHighlandsTarn_Randi_13:
# 594 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_RANDI_R4
	goto_if 0, ParcelHighlandsTarn_Randi_12
	goto ParcelHighlandsTarn_Randi_11

ParcelHighlandsTarn_Randi_17:
# 598 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto ParcelHighlandsTarn_Randi_R5
	goto ParcelHighlandsTarn_Randi_16

ParcelHighlandsTarn_Randi_18:
# 597 "data/maps/ParcelHighlandsTarn/scripts.pory"
	checktrainerflag TRAINER_SKALD_TRN_RANDI_R5
	goto_if 0, ParcelHighlandsTarn_Randi_17
	goto ParcelHighlandsTarn_Randi_16


ParcelHighlandsTarn_Randi_FirstWin::
# 604 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Randi_Text_2, MSGBOX_DEFAULT
# 605 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Randi_R2::
# 609 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 610 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 611 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Randi_R2_Text_0, MSGBOX_YESNO
# 612 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Randi_R2_2
# 617 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_RANDI_R2, ParcelHighlandsTarn_Randi_R2_Text_2
# 618 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Randi_R2_Text_3, MSGBOX_DEFAULT
# 619 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Randi_R2_2:
# 613 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Randi_R2_Text_1, MSGBOX_DEFAULT
# 614 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Randi_R3::
# 623 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 624 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 625 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Randi_R3_Text_0, MSGBOX_YESNO
# 626 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Randi_R3_2
# 631 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_RANDI_R3, ParcelHighlandsTarn_Randi_R3_Text_1
# 632 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Randi_R3_Text_2, MSGBOX_DEFAULT
# 633 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Randi_R3_2:
# 627 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Randi_R2_Text_1, MSGBOX_DEFAULT
# 628 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Randi_R4::
# 637 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 638 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 639 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Randi_R4_Text_0, MSGBOX_YESNO
# 640 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Randi_R4_2
# 645 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_RANDI_R4, ParcelHighlandsTarn_Randi_R4_Text_1
# 646 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Randi_R4_Text_2, MSGBOX_DEFAULT
# 647 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Randi_R4_2:
# 641 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Randi_R2_Text_1, MSGBOX_DEFAULT
# 642 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Randi_R5::
# 651 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 652 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 653 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Randi_R5_Text_0, MSGBOX_YESNO
# 654 "data/maps/ParcelHighlandsTarn/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlandsTarn_Randi_R5_2
# 659 "data/maps/ParcelHighlandsTarn/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_TRN_RANDI_R5, ParcelHighlandsTarn_Randi_R2_Text_2
# 660 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Randi_R5_Text_1, MSGBOX_DEFAULT
# 661 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Randi_R5_2:
# 655 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Randi_R2_Text_1, MSGBOX_DEFAULT
# 656 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_Cadet::
# 665 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 666 "data/maps/ParcelHighlandsTarn/scripts.pory"
	faceplayer
# 667 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlandsTarn_Cadet_2
# 672 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsTarn_Cadet_5
# 677 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsTarn_Cadet_8
# 682 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Cadet_Text_3, MSGBOX_DEFAULT
# 683 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Cadet_2:
# 668 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Cadet_Text_0, MSGBOX_DEFAULT
# 669 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Cadet_5:
# 673 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Cadet_Text_1, MSGBOX_DEFAULT
# 674 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_Cadet_8:
# 678 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_Cadet_Text_2, MSGBOX_DEFAULT
# 679 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end


ParcelHighlandsTarn_ItemNeverMeltIce::
# 686 "data/maps/ParcelHighlandsTarn/scripts.pory"
	finditem ITEM_NEVER_MELT_ICE
	end


ParcelHighlandsTarn_CoreTag::
# 689 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CORE, ParcelHighlandsTarn_CoreTag_3
ParcelHighlandsTarn_CoreTag_1:
# 694 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_CoreTag_Text_1, MSGBOX_SIGN
	end

ParcelHighlandsTarn_CoreTag_2:
# 690 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_CoreTag_Text_0, MSGBOX_SIGN
# 691 "data/maps/ParcelHighlandsTarn/scripts.pory"
	setflag FLAG_SKALD_Q_CORE_FOUND
	end

ParcelHighlandsTarn_CoreTag_3:
# 689 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CORE_FOUND, ParcelHighlandsTarn_CoreTag_2
	goto ParcelHighlandsTarn_CoreTag_1


ParcelHighlandsTarn_PairMelt::
# 701 "data/maps/ParcelHighlandsTarn/scripts.pory"
	lock
# 702 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsTarn_PairMelt_2
# 706 "data/maps/ParcelHighlandsTarn/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlandsTarn_PairMelt_3
# 712 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_PairMelt_Text_7, MSGBOX_DEFAULT
# 713 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_PairMelt_Text_8, MSGBOX_DEFAULT
# 714 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_PairMelt_Text_9, MSGBOX_DEFAULT
# 715 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_PairMelt_Text_10, MSGBOX_DEFAULT
ParcelHighlandsTarn_PairMelt_1:
# 717 "data/maps/ParcelHighlandsTarn/scripts.pory"
	release
	end

ParcelHighlandsTarn_PairMelt_2:
# 703 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_PairMelt_Text_0, MSGBOX_DEFAULT
# 704 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_PairMelt_Text_1, MSGBOX_DEFAULT
# 705 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_PairMelt_Text_2, MSGBOX_DEFAULT
	goto ParcelHighlandsTarn_PairMelt_1

ParcelHighlandsTarn_PairMelt_3:
# 707 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_PairMelt_Text_3, MSGBOX_DEFAULT
# 708 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_PairMelt_Text_4, MSGBOX_DEFAULT
# 709 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_PairMelt_Text_5, MSGBOX_DEFAULT
# 710 "data/maps/ParcelHighlandsTarn/scripts.pory"
	msgbox ParcelHighlandsTarn_PairMelt_Text_6, MSGBOX_DEFAULT
	goto ParcelHighlandsTarn_PairMelt_1


ParcelHighlandsTarn_Arnfinn_Text_0:
# 10 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: The tarn's under the hill. Cold\n"
	.string "enough to stop a clock. You'll want to\l"
	.string "be warm for this. Battle.$"

ParcelHighlandsTarn_Arnfinn_Text_1:
# 11 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: …Warm enough.$"

ParcelHighlandsTarn_Arnfinn_Text_2:
# 26 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: VALE sends the cadets up here\n"
	.string "to learn cold. Most learn it in an hour\l"
	.string "and go down.$"

ParcelHighlandsTarn_Arnfinn_R2_Text_0:
# 37 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelHighlandsTarn_Arnfinn_R2_Text_1:
# 39 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: No hurry. The water keeps.$"

ParcelHighlandsTarn_Arnfinn_R2_Text_2:
# 43 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: Still yours.$"

ParcelHighlandsTarn_Arnfinn_R2_Text_3:
# 44 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelHighlandsTarn_Arnfinn_R3_Text_0:
# 51 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelHighlandsTarn_Arnfinn_R3_Text_1:
# 57 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: That's the one I wanted to\n"
	.string "see.$"

ParcelHighlandsTarn_Arnfinn_R3_Text_2:
# 58 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelHighlandsTarn_Arnfinn_R4_Text_0:
# 65 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelHighlandsTarn_Arnfinn_R4_Text_1:
# 71 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: …Again, then. Later.$"

ParcelHighlandsTarn_Arnfinn_R4_Text_2:
# 72 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlandsTarn_Arnfinn_R5_Text_0:
# 79 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlandsTarn_Arnfinn_R5_Text_1:
# 85 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: Right. That's the whole of it.$"

ParcelHighlandsTarn_Arnfinn_R5_Text_2:
# 86 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ARNFINN: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlandsTarn_Halvard_Text_0:
# 92 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "HALVARD: Ice scour on the walls, head\n"
	.string "height. The tarn was higher once. Much.\l"
	.string "Fight.$"

ParcelHighlandsTarn_Halvard_Text_1:
# 93 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "HALVARD: …Scoured.$"

ParcelHighlandsTarn_Halvard_Text_2:
# 108 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "HALVARD: Everything in this region was\n"
	.string "higher, colder or wetter once. The hard\l"
	.string "part is which ones are coming back.$"

ParcelHighlandsTarn_Halvard_R2_Text_0:
# 119 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "HALVARD: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelHighlandsTarn_Halvard_R2_Text_1:
# 121 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "HALVARD: Another time, then.$"

ParcelHighlandsTarn_Halvard_R2_Text_2:
# 125 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "HALVARD: …Again, then. Later.$"

ParcelHighlandsTarn_Halvard_R2_Text_3:
# 126 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "HALVARD: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelHighlandsTarn_Halvard_R3_Text_0:
# 133 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "HALVARD: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelHighlandsTarn_Halvard_R3_Text_1:
# 139 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "HALVARD: That's the one I wanted to\n"
	.string "see.$"

ParcelHighlandsTarn_Halvard_R3_Text_2:
# 140 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "HALVARD: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelHighlandsTarn_Halvard_R4_Text_0:
# 147 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "HALVARD: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelHighlandsTarn_Halvard_R4_Text_1:
# 153 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "HALVARD: Noted. Properly, this time.$"

ParcelHighlandsTarn_Halvard_R4_Text_2:
# 154 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "HALVARD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlandsTarn_Halvard_R5_Text_0:
# 161 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "HALVARD: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlandsTarn_Halvard_R5_Text_1:
# 168 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "HALVARD: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlandsTarn_Dagrun_Text_0:
# 174 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "DAGRUN: I train in the cold on purpose.\n"
	.string "You're in it by accident. Let's see which\l"
	.string "is worth more.$"

ParcelHighlandsTarn_Dagrun_Text_1:
# 175 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "DAGRUN: …Accident, then.$"

ParcelHighlandsTarn_Dagrun_Text_2:
# 190 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "DAGRUN: The warming centre is open all\n"
	.string "night now. HOLLIS cut the ribbon. Good\l"
	.string "tea. Watch her.$"

ParcelHighlandsTarn_Dagrun_R2_Text_0:
# 201 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "DAGRUN: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelHighlandsTarn_Dagrun_R2_Text_1:
# 203 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "DAGRUN: No hurry. The water keeps.$"

ParcelHighlandsTarn_Dagrun_R2_Text_2:
# 207 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "DAGRUN: …Fair.$"

ParcelHighlandsTarn_Dagrun_R2_Text_3:
# 208 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "DAGRUN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlandsTarn_Dagrun_R3_Text_0:
# 215 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "DAGRUN: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelHighlandsTarn_Dagrun_R3_Text_1:
# 221 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "DAGRUN: Still yours.$"

ParcelHighlandsTarn_Dagrun_R3_Text_2:
# 222 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "DAGRUN: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlandsTarn_Dagrun_R4_Text_0:
# 229 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "DAGRUN: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelHighlandsTarn_Dagrun_R4_Text_1:
# 236 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "DAGRUN: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelHighlandsTarn_Dagrun_R5_Text_0:
# 243 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "DAGRUN: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelHighlandsTarn_Dagrun_R5_Text_1:
# 249 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "DAGRUN: That's the one I wanted to see.$"

ParcelHighlandsTarn_Dagrun_R5_Text_2:
# 250 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "DAGRUN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlandsTarn_Gunnvor_Text_0:
# 256 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUNNVOR: Found the bore's test hole.\n"
	.string "Through the roof, there. They drilled\l"
	.string "into the tarn and called it\l"
	.string "'groundwater'. Fight.$"

ParcelHighlandsTarn_Gunnvor_Text_1:
# 257 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUNNVOR: …Groundwater.$"

ParcelHighlandsTarn_Gunnvor_Text_2:
# 272 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUNNVOR: The leases are enjoined\n"
	.string "pending survey. The survey's you. No\l"
	.string "pressure.$"

ParcelHighlandsTarn_Gunnvor_R2_Text_0:
# 283 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUNNVOR: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelHighlandsTarn_Gunnvor_R2_Text_1:
# 285 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUNNVOR: Fine. Same spot.$"

ParcelHighlandsTarn_Gunnvor_R2_Text_2:
# 289 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUNNVOR: Right. That's the whole of it.$"

ParcelHighlandsTarn_Gunnvor_R2_Text_3:
# 290 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUNNVOR: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelHighlandsTarn_Gunnvor_R3_Text_0:
# 297 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUNNVOR: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelHighlandsTarn_Gunnvor_R3_Text_1:
# 304 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUNNVOR: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelHighlandsTarn_Gunnvor_R4_Text_0:
# 311 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUNNVOR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelHighlandsTarn_Gunnvor_R4_Text_1:
# 317 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUNNVOR: …Fair.$"

ParcelHighlandsTarn_Gunnvor_R4_Text_2:
# 318 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUNNVOR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlandsTarn_Gunnvor_R5_Text_0:
# 325 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUNNVOR: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlandsTarn_Gunnvor_R5_Text_1:
# 331 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUNNVOR: Still yours.$"

ParcelHighlandsTarn_Gunnvor_R5_Text_2:
# 332 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUNNVOR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlandsTarn_Jorund_Text_0:
# 338 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "JORUND: Bones in the sand. Old\n"
	.string "DELIBIRD, by the bills. They wintered\l"
	.string "here when the island froze through.\l"
	.string "Battle.$"

ParcelHighlandsTarn_Jorund_Text_1:
# 339 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "JORUND: …Still wintering.$"

ParcelHighlandsTarn_Jorund_Text_2:
# 354 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "JORUND: The island doesn't freeze\n"
	.string "through now. The bones are the only\l"
	.string "ones who remember it did.$"

ParcelHighlandsTarn_Jorund_R2_Text_0:
# 365 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "JORUND: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelHighlandsTarn_Jorund_R2_Text_1:
# 367 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "JORUND: No hurry. The water keeps.$"

ParcelHighlandsTarn_Jorund_R2_Text_2:
# 371 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "JORUND: That's the one I wanted to see.$"

ParcelHighlandsTarn_Jorund_R2_Text_3:
# 372 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "JORUND: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlandsTarn_Jorund_R3_Text_0:
# 379 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "JORUND: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelHighlandsTarn_Jorund_R3_Text_1:
# 385 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "JORUND: …Fair.$"

ParcelHighlandsTarn_Jorund_R3_Text_2:
# 386 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "JORUND: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlandsTarn_Jorund_R4_Text_0:
# 393 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "JORUND: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelHighlandsTarn_Jorund_R4_Text_1:
# 399 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "JORUND: Noted. Properly, this time.$"

ParcelHighlandsTarn_Jorund_R4_Text_2:
# 400 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "JORUND: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelHighlandsTarn_Jorund_R5_Text_0:
# 407 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "JORUND: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelHighlandsTarn_Jorund_R5_Text_1:
# 414 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "JORUND: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlandsTarn_Roar_Text_0:
# 420 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ROAR: The tarn's edge. Don't drink it.\n"
	.string "It's older than the hill and it tastes\l"
	.string "it. Battle.$"

ParcelHighlandsTarn_Roar_Text_1:
# 421 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ROAR: …Older than me.$"

ParcelHighlandsTarn_Roar_Text_2:
# 436 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ROAR: It's three degrees in summer. The\n"
	.string "bore pumps it out at three degrees and\l"
	.string "calls it a resource.$"

ParcelHighlandsTarn_Roar_R2_Text_0:
# 447 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ROAR: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelHighlandsTarn_Roar_R2_Text_1:
# 449 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ROAR: Suit yourself. I'm here.$"

ParcelHighlandsTarn_Roar_R2_Text_2:
# 453 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ROAR: …Again, then. Later.$"

ParcelHighlandsTarn_Roar_R2_Text_3:
# 454 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ROAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelHighlandsTarn_Roar_R3_Text_0:
# 461 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ROAR: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelHighlandsTarn_Roar_R3_Text_1:
# 467 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ROAR: That's the one I wanted to see.$"

ParcelHighlandsTarn_Roar_R3_Text_2:
# 468 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ROAR: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlandsTarn_Roar_R4_Text_0:
# 475 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ROAR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlandsTarn_Roar_R4_Text_1:
# 482 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ROAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelHighlandsTarn_Roar_R5_Text_0:
# 489 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ROAR: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelHighlandsTarn_Roar_R5_Text_1:
# 495 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ROAR: Still yours.$"

ParcelHighlandsTarn_Roar_R5_Text_2:
# 496 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "ROAR: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelHighlandsTarn_Sigbjorn_Text_0:
# 502 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "SIGBJORN: I carry the cadets down when\n"
	.string "they stop talking. Nobody carries me.\l"
	.string "Fight.$"

ParcelHighlandsTarn_Sigbjorn_Text_1:
# 503 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "SIGBJORN: …Carry on, then.$"

ParcelHighlandsTarn_Sigbjorn_Text_2:
# 518 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "SIGBJORN: Cold doesn't care about\n"
	.string "clearances. Neither does the tarn.$"

ParcelHighlandsTarn_Sigbjorn_R2_Text_0:
# 529 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "SIGBJORN: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlandsTarn_Sigbjorn_R2_Text_1:
# 531 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "SIGBJORN: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelHighlandsTarn_Sigbjorn_R2_Text_2:
# 535 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "SIGBJORN: Right. That's the whole of it.$"

ParcelHighlandsTarn_Sigbjorn_R2_Text_3:
# 536 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "SIGBJORN: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelHighlandsTarn_Sigbjorn_R3_Text_0:
# 543 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "SIGBJORN: I've been training against\n"
	.string "the lake. You're the test. Yes?$"

ParcelHighlandsTarn_Sigbjorn_R3_Text_1:
# 549 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "SIGBJORN: Still yours.$"

ParcelHighlandsTarn_Sigbjorn_R3_Text_2:
# 550 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "SIGBJORN: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelHighlandsTarn_Sigbjorn_R4_Text_0:
# 557 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "SIGBJORN: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelHighlandsTarn_Sigbjorn_R4_Text_1:
# 564 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "SIGBJORN: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelHighlandsTarn_Sigbjorn_R5_Text_0:
# 571 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "SIGBJORN: Last one. I've put\n"
	.string "everything I've got into this team. Go?$"

ParcelHighlandsTarn_Sigbjorn_R5_Text_1:
# 578 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "SIGBJORN: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlandsTarn_Randi_Text_0:
# 584 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "RANDI: I sketch the ice lines. They're a\n"
	.string "calendar nobody wrote. Battle, quickly,\l"
	.string "my fingers are going.$"

ParcelHighlandsTarn_Randi_Text_1:
# 585 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "RANDI: …Fingers held.$"

ParcelHighlandsTarn_Randi_Text_2:
# 600 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "RANDI: Fourteen lines, fourteen high\n"
	.string "years. Then nothing for thirty. The\l"
	.string "nothing is the part that matters.$"

ParcelHighlandsTarn_Randi_R2_Text_0:
# 611 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "RANDI: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelHighlandsTarn_Randi_R2_Text_1:
# 613 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "RANDI: Suit yourself. I'm here.$"

ParcelHighlandsTarn_Randi_R2_Text_2:
# 617 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "RANDI: Still yours.$"

ParcelHighlandsTarn_Randi_R2_Text_3:
# 618 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "RANDI: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlandsTarn_Randi_R3_Text_0:
# 625 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "RANDI: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelHighlandsTarn_Randi_R3_Text_1:
# 631 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "RANDI: Noted. Properly, this time.$"

ParcelHighlandsTarn_Randi_R3_Text_2:
# 632 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "RANDI: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlandsTarn_Randi_R4_Text_0:
# 639 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "RANDI: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelHighlandsTarn_Randi_R4_Text_1:
# 645 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "RANDI: Right. That's the whole of it.$"

ParcelHighlandsTarn_Randi_R4_Text_2:
# 646 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "RANDI: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlandsTarn_Randi_R5_Text_0:
# 653 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "RANDI: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlandsTarn_Randi_R5_Text_1:
# 660 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "RANDI: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlandsTarn_Cadet_Text_0:
# 668 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "CADET: VALE reads her gate log to the\n"
	.string "new cadets every winter now, in the\l"
	.string "cold, in the dark.\p"
	.string "She says it's the only way they'll\n"
	.string "remember what the cold cost. I\l"
	.string "remember.$"

ParcelHighlandsTarn_Cadet_Text_1:
# 673 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "CADET: VALE said 'learn the cold'. The\n"
	.string "hearing cited her gate log. She came up\l"
	.string "here to read it to us. In the cold. It's a\l"
	.string "good log.$"

ParcelHighlandsTarn_Cadet_Text_2:
# 678 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "CADET: VALE went down to the coast for\n"
	.string "the hearing and left me the cold. I've\l"
	.string "learnt it twice over.\p"
	.string "She sent a postcard. It says 'colder\n"
	.string "here'. There's nothing on the front but\l"
	.string "water.$"

ParcelHighlandsTarn_Cadet_Text_3:
# 682 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "CADET: VALE said 'learn the cold'. I've\n"
	.string "learnt it. Can I go down now?\p"
	.string "She said no. She says it kindly, which is\n"
	.string "worse.$"

ParcelHighlandsTarn_CoreTag_Text_0:
# 690 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "At the edge of the old water line, half\n"
	.string "under a stone, a brass tag stamped\l"
	.string "48-50. Somebody's thumb has worn the\l"
	.string "stamp smooth on one side.\p"
	.string "The tag is colder than the cave.$"

ParcelHighlandsTarn_CoreTag_Text_1:
# 694 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "The old water line in the cave, a pale\n"
	.string "band on the rock, a hand above the\l"
	.string "water that is there now.$"

ParcelHighlandsTarn_PairMelt_Text_0:
# 703 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GEOLOGIST: The bore's capped. The tarn\n"
	.string "is still coming up. Capping a hole\l"
	.string "doesn't put the ice back in a mountain.$"

ParcelHighlandsTarn_PairMelt_Text_1:
# 704 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUIDE: Then what does?$"

ParcelHighlandsTarn_PairMelt_Text_2:
# 705 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GEOLOGIST: Nothing. I wrote 'nothing' in\n"
	.string "the review, and signed it, and I've slept\l"
	.string "better than I have in two years.$"

ParcelHighlandsTarn_PairMelt_Text_3:
# 707 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUIDE: The ranger measured the tarn\n"
	.string "against the core tag. Wrote both\l"
	.string "numbers on the stake.$"

ParcelHighlandsTarn_PairMelt_Text_4:
# 708 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GEOLOGIST: The tag's mine. From the\n"
	.string "bore. I shouldn't have left it here.$"

ParcelHighlandsTarn_PairMelt_Text_5:
# 709 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUIDE: Why did you?$"

ParcelHighlandsTarn_PairMelt_Text_6:
# 710 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GEOLOGIST: So somebody who wasn't paid\n"
	.string "by the bore would find it. Took two\l"
	.string "years. Took a ranger.$"

ParcelHighlandsTarn_PairMelt_Text_7:
# 712 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GEOLOGIST: The tarn came up a hand's\n"
	.string "width since spring. Meltwater, off the\l"
	.string "slope.$"

ParcelHighlandsTarn_PairMelt_Text_8:
# 713 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUIDE: The slope's been there ten\n"
	.string "thousand years. Why now?$"

ParcelHighlandsTarn_PairMelt_Text_9:
# 714 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GEOLOGIST: The ice inside it has been\n"
	.string "there ten thousand years. The ice is\l"
	.string "leaving. The slope's just what it's\l"
	.string "leaving behind.$"

ParcelHighlandsTarn_PairMelt_Text_10:
# 715 "data/maps/ParcelHighlandsTarn/scripts.pory"
	.string "GUIDE: You say that like you're talking\n"
	.string "about a lodger.$"
