ParcelCoastBreakwater_MapScripts::
	.byte 0


ParcelCoastBreakwater_Ansgar::
# 9 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_ANSGAR, ParcelCoastBreakwater_Ansgar_Text_0, ParcelCoastBreakwater_Ansgar_Text_1, ParcelCoastBreakwater_Ansgar_FirstWin
# 13 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 14 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Ansgar_3
ParcelCoastBreakwater_Ansgar_1:
# 17 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Ansgar_8
ParcelCoastBreakwater_Ansgar_6:
# 20 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Ansgar_13
ParcelCoastBreakwater_Ansgar_11:
# 23 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Ansgar_18
ParcelCoastBreakwater_Ansgar_16:
# 26 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Ansgar_2:
# 15 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Ansgar_R2
	goto ParcelCoastBreakwater_Ansgar_1

ParcelCoastBreakwater_Ansgar_3:
# 14 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_ANSGAR_R2
	goto_if 0, ParcelCoastBreakwater_Ansgar_2
	goto ParcelCoastBreakwater_Ansgar_1

ParcelCoastBreakwater_Ansgar_7:
# 18 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Ansgar_R3
	goto ParcelCoastBreakwater_Ansgar_6

ParcelCoastBreakwater_Ansgar_8:
# 17 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_ANSGAR_R3
	goto_if 0, ParcelCoastBreakwater_Ansgar_7
	goto ParcelCoastBreakwater_Ansgar_6

ParcelCoastBreakwater_Ansgar_12:
# 21 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Ansgar_R4
	goto ParcelCoastBreakwater_Ansgar_11

ParcelCoastBreakwater_Ansgar_13:
# 20 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_ANSGAR_R4
	goto_if 0, ParcelCoastBreakwater_Ansgar_12
	goto ParcelCoastBreakwater_Ansgar_11

ParcelCoastBreakwater_Ansgar_17:
# 24 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Ansgar_R5
	goto ParcelCoastBreakwater_Ansgar_16

ParcelCoastBreakwater_Ansgar_18:
# 23 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_ANSGAR_R5
	goto_if 0, ParcelCoastBreakwater_Ansgar_17
	goto ParcelCoastBreakwater_Ansgar_16


ParcelCoastBreakwater_Ansgar_FirstWin::
# 30 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_Text_2, MSGBOX_DEFAULT
# 31 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Ansgar_R2::
# 35 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 36 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 37 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_0, MSGBOX_YESNO
# 38 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Ansgar_R2_2
# 43 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_ANSGAR_R2, ParcelCoastBreakwater_Ansgar_R2_Text_2
# 44 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_3, MSGBOX_DEFAULT
# 45 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Ansgar_R2_2:
# 39 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_1, MSGBOX_DEFAULT
# 40 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Ansgar_R3::
# 49 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 50 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 51 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R3_Text_0, MSGBOX_YESNO
# 52 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Ansgar_R3_2
# 57 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_ANSGAR_R3, ParcelCoastBreakwater_Ansgar_R3_Text_1
# 58 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R3_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Ansgar_R3_2:
# 53 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Ansgar_R4::
# 63 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 64 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 65 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R4_Text_0, MSGBOX_YESNO
# 66 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Ansgar_R4_2
# 71 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_ANSGAR_R4, ParcelCoastBreakwater_Ansgar_R4_Text_1
# 72 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R4_Text_2, MSGBOX_DEFAULT
# 73 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Ansgar_R4_2:
# 67 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_1, MSGBOX_DEFAULT
# 68 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Ansgar_R5::
# 77 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 78 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 79 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R5_Text_0, MSGBOX_YESNO
# 80 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Ansgar_R5_2
# 85 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_ANSGAR_R5, ParcelCoastBreakwater_Ansgar_R5_Text_1
# 86 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R5_Text_2, MSGBOX_DEFAULT
# 87 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Ansgar_R5_2:
# 81 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_1, MSGBOX_DEFAULT
# 82 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Kasper::
# 91 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_KASPER, ParcelCoastBreakwater_Kasper_Text_0, ParcelCoastBreakwater_Kasper_Text_1, ParcelCoastBreakwater_Kasper_FirstWin
# 95 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 96 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Kasper_3
ParcelCoastBreakwater_Kasper_1:
# 99 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Kasper_8
ParcelCoastBreakwater_Kasper_6:
# 102 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Kasper_13
ParcelCoastBreakwater_Kasper_11:
# 105 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Kasper_18
ParcelCoastBreakwater_Kasper_16:
# 108 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Kasper_2:
# 97 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Kasper_R2
	goto ParcelCoastBreakwater_Kasper_1

ParcelCoastBreakwater_Kasper_3:
# 96 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_KASPER_R2
	goto_if 0, ParcelCoastBreakwater_Kasper_2
	goto ParcelCoastBreakwater_Kasper_1

ParcelCoastBreakwater_Kasper_7:
# 100 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Kasper_R3
	goto ParcelCoastBreakwater_Kasper_6

ParcelCoastBreakwater_Kasper_8:
# 99 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_KASPER_R3
	goto_if 0, ParcelCoastBreakwater_Kasper_7
	goto ParcelCoastBreakwater_Kasper_6

ParcelCoastBreakwater_Kasper_12:
# 103 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Kasper_R4
	goto ParcelCoastBreakwater_Kasper_11

ParcelCoastBreakwater_Kasper_13:
# 102 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_KASPER_R4
	goto_if 0, ParcelCoastBreakwater_Kasper_12
	goto ParcelCoastBreakwater_Kasper_11

ParcelCoastBreakwater_Kasper_17:
# 106 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Kasper_R5
	goto ParcelCoastBreakwater_Kasper_16

ParcelCoastBreakwater_Kasper_18:
# 105 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_KASPER_R5
	goto_if 0, ParcelCoastBreakwater_Kasper_17
	goto ParcelCoastBreakwater_Kasper_16


ParcelCoastBreakwater_Kasper_FirstWin::
# 112 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_Text_2, MSGBOX_DEFAULT
# 113 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Kasper_R2::
# 117 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 118 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 119 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_0, MSGBOX_YESNO
# 120 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Kasper_R2_2
# 125 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_KASPER_R2, ParcelCoastBreakwater_Kasper_R2_Text_2
# 126 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_3, MSGBOX_DEFAULT
# 127 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Kasper_R2_2:
# 121 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_1, MSGBOX_DEFAULT
# 122 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Kasper_R3::
# 131 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 132 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 133 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R3_Text_0, MSGBOX_YESNO
# 134 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Kasper_R3_2
# 139 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_KASPER_R3, ParcelCoastBreakwater_Kasper_R2_Text_2
# 140 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R3_Text_1, MSGBOX_DEFAULT
# 141 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Kasper_R3_2:
# 135 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_1, MSGBOX_DEFAULT
# 136 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Kasper_R4::
# 145 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 146 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 147 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R4_Text_0, MSGBOX_YESNO
# 148 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Kasper_R4_2
# 153 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_KASPER_R4, ParcelCoastBreakwater_Kasper_R4_Text_1
# 154 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R4_Text_2, MSGBOX_DEFAULT
# 155 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Kasper_R4_2:
# 149 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_1, MSGBOX_DEFAULT
# 150 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Kasper_R5::
# 159 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 160 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 161 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R5_Text_0, MSGBOX_YESNO
# 162 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Kasper_R5_2
# 167 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_KASPER_R5, ParcelCoastBreakwater_Kasper_R5_Text_1
# 168 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R5_Text_2, MSGBOX_DEFAULT
# 169 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Kasper_R5_2:
# 163 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_1, MSGBOX_DEFAULT
# 164 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Emma::
# 173 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_EMMA, ParcelCoastBreakwater_Emma_Text_0, ParcelCoastBreakwater_Emma_Text_1, ParcelCoastBreakwater_Emma_FirstWin
# 177 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 178 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Emma_3
ParcelCoastBreakwater_Emma_1:
# 181 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Emma_8
ParcelCoastBreakwater_Emma_6:
# 184 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Emma_13
ParcelCoastBreakwater_Emma_11:
# 187 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Emma_18
ParcelCoastBreakwater_Emma_16:
# 190 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Emma_2:
# 179 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Emma_R2
	goto ParcelCoastBreakwater_Emma_1

ParcelCoastBreakwater_Emma_3:
# 178 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_EMMA_R2
	goto_if 0, ParcelCoastBreakwater_Emma_2
	goto ParcelCoastBreakwater_Emma_1

ParcelCoastBreakwater_Emma_7:
# 182 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Emma_R3
	goto ParcelCoastBreakwater_Emma_6

ParcelCoastBreakwater_Emma_8:
# 181 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_EMMA_R3
	goto_if 0, ParcelCoastBreakwater_Emma_7
	goto ParcelCoastBreakwater_Emma_6

ParcelCoastBreakwater_Emma_12:
# 185 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Emma_R4
	goto ParcelCoastBreakwater_Emma_11

ParcelCoastBreakwater_Emma_13:
# 184 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_EMMA_R4
	goto_if 0, ParcelCoastBreakwater_Emma_12
	goto ParcelCoastBreakwater_Emma_11

ParcelCoastBreakwater_Emma_17:
# 188 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Emma_R5
	goto ParcelCoastBreakwater_Emma_16

ParcelCoastBreakwater_Emma_18:
# 187 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_EMMA_R5
	goto_if 0, ParcelCoastBreakwater_Emma_17
	goto ParcelCoastBreakwater_Emma_16


ParcelCoastBreakwater_Emma_FirstWin::
# 194 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_Text_2, MSGBOX_DEFAULT
# 195 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Emma_R2::
# 199 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 200 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 201 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_0, MSGBOX_YESNO
# 202 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Emma_R2_2
# 207 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_EMMA_R2, ParcelCoastBreakwater_Emma_R2_Text_2
# 208 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_3, MSGBOX_DEFAULT
# 209 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Emma_R2_2:
# 203 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_1, MSGBOX_DEFAULT
# 204 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Emma_R3::
# 213 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 214 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 215 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R3_Text_0, MSGBOX_YESNO
# 216 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Emma_R3_2
# 221 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_EMMA_R3, ParcelCoastBreakwater_Emma_R3_Text_1
# 222 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R3_Text_2, MSGBOX_DEFAULT
# 223 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Emma_R3_2:
# 217 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_1, MSGBOX_DEFAULT
# 218 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Emma_R4::
# 227 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 228 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 229 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R4_Text_0, MSGBOX_YESNO
# 230 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Emma_R4_2
# 235 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_EMMA_R4, ParcelCoastBreakwater_Emma_R3_Text_1
# 236 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R4_Text_1, MSGBOX_DEFAULT
# 237 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Emma_R4_2:
# 231 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_1, MSGBOX_DEFAULT
# 232 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Emma_R5::
# 241 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 242 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 243 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R5_Text_0, MSGBOX_YESNO
# 244 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Emma_R5_2
# 249 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_EMMA_R5, ParcelCoastBreakwater_Emma_R5_Text_1
# 250 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R5_Text_2, MSGBOX_DEFAULT
# 251 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Emma_R5_2:
# 245 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_1, MSGBOX_DEFAULT
# 246 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Vidar::
# 255 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_VIDAR, ParcelCoastBreakwater_Vidar_Text_0, ParcelCoastBreakwater_Vidar_Text_1, ParcelCoastBreakwater_Vidar_FirstWin
# 259 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 260 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Vidar_3
ParcelCoastBreakwater_Vidar_1:
# 263 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Vidar_8
ParcelCoastBreakwater_Vidar_6:
# 266 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Vidar_13
ParcelCoastBreakwater_Vidar_11:
# 269 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Vidar_18
ParcelCoastBreakwater_Vidar_16:
# 272 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Vidar_2:
# 261 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Vidar_R2
	goto ParcelCoastBreakwater_Vidar_1

ParcelCoastBreakwater_Vidar_3:
# 260 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_VIDAR_R2
	goto_if 0, ParcelCoastBreakwater_Vidar_2
	goto ParcelCoastBreakwater_Vidar_1

ParcelCoastBreakwater_Vidar_7:
# 264 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Vidar_R3
	goto ParcelCoastBreakwater_Vidar_6

ParcelCoastBreakwater_Vidar_8:
# 263 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_VIDAR_R3
	goto_if 0, ParcelCoastBreakwater_Vidar_7
	goto ParcelCoastBreakwater_Vidar_6

ParcelCoastBreakwater_Vidar_12:
# 267 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Vidar_R4
	goto ParcelCoastBreakwater_Vidar_11

ParcelCoastBreakwater_Vidar_13:
# 266 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_VIDAR_R4
	goto_if 0, ParcelCoastBreakwater_Vidar_12
	goto ParcelCoastBreakwater_Vidar_11

ParcelCoastBreakwater_Vidar_17:
# 270 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Vidar_R5
	goto ParcelCoastBreakwater_Vidar_16

ParcelCoastBreakwater_Vidar_18:
# 269 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_VIDAR_R5
	goto_if 0, ParcelCoastBreakwater_Vidar_17
	goto ParcelCoastBreakwater_Vidar_16


ParcelCoastBreakwater_Vidar_FirstWin::
# 276 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_Text_2, MSGBOX_DEFAULT
# 277 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Vidar_R2::
# 281 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 282 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 283 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_0, MSGBOX_YESNO
# 284 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Vidar_R2_2
# 289 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_VIDAR_R2, ParcelCoastBreakwater_Vidar_R2_Text_2
# 290 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_3, MSGBOX_DEFAULT
# 291 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Vidar_R2_2:
# 285 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 286 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Vidar_R3::
# 295 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 296 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 297 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R3_Text_0, MSGBOX_YESNO
# 298 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Vidar_R3_2
# 303 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_VIDAR_R3, ParcelCoastBreakwater_Vidar_R3_Text_1
# 304 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R3_Text_2, MSGBOX_DEFAULT
# 305 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Vidar_R3_2:
# 299 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 300 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Vidar_R4::
# 309 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 310 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 311 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R4_Text_0, MSGBOX_YESNO
# 312 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Vidar_R4_2
# 317 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_VIDAR_R4, ParcelCoastBreakwater_Vidar_R3_Text_1
# 318 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R4_Text_1, MSGBOX_DEFAULT
# 319 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Vidar_R4_2:
# 313 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 314 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Vidar_R5::
# 323 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 324 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 325 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R5_Text_0, MSGBOX_YESNO
# 326 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Vidar_R5_2
# 331 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_VIDAR_R5, ParcelCoastBreakwater_Vidar_R3_Text_1
# 332 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R5_Text_1, MSGBOX_DEFAULT
# 333 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Vidar_R5_2:
# 327 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 328 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Linnea::
# 337 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_LINNEA, ParcelCoastBreakwater_Linnea_Text_0, ParcelCoastBreakwater_Linnea_Text_1, ParcelCoastBreakwater_Linnea_FirstWin
# 341 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 342 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Linnea_3
ParcelCoastBreakwater_Linnea_1:
# 345 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Linnea_8
ParcelCoastBreakwater_Linnea_6:
# 348 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Linnea_13
ParcelCoastBreakwater_Linnea_11:
# 351 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Linnea_18
ParcelCoastBreakwater_Linnea_16:
# 354 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Linnea_2:
# 343 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Linnea_R2
	goto ParcelCoastBreakwater_Linnea_1

ParcelCoastBreakwater_Linnea_3:
# 342 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_LINNEA_R2
	goto_if 0, ParcelCoastBreakwater_Linnea_2
	goto ParcelCoastBreakwater_Linnea_1

ParcelCoastBreakwater_Linnea_7:
# 346 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Linnea_R3
	goto ParcelCoastBreakwater_Linnea_6

ParcelCoastBreakwater_Linnea_8:
# 345 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_LINNEA_R3
	goto_if 0, ParcelCoastBreakwater_Linnea_7
	goto ParcelCoastBreakwater_Linnea_6

ParcelCoastBreakwater_Linnea_12:
# 349 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Linnea_R4
	goto ParcelCoastBreakwater_Linnea_11

ParcelCoastBreakwater_Linnea_13:
# 348 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_LINNEA_R4
	goto_if 0, ParcelCoastBreakwater_Linnea_12
	goto ParcelCoastBreakwater_Linnea_11

ParcelCoastBreakwater_Linnea_17:
# 352 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Linnea_R5
	goto ParcelCoastBreakwater_Linnea_16

ParcelCoastBreakwater_Linnea_18:
# 351 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_LINNEA_R5
	goto_if 0, ParcelCoastBreakwater_Linnea_17
	goto ParcelCoastBreakwater_Linnea_16


ParcelCoastBreakwater_Linnea_FirstWin::
# 358 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_Text_2, MSGBOX_DEFAULT
# 359 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Linnea_R2::
# 363 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 364 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 365 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_0, MSGBOX_YESNO
# 366 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Linnea_R2_2
# 371 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_LINNEA_R2, ParcelCoastBreakwater_Linnea_R2_Text_2
# 372 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_3, MSGBOX_DEFAULT
# 373 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Linnea_R2_2:
# 367 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_1, MSGBOX_DEFAULT
# 368 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Linnea_R3::
# 377 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 378 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 379 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R3_Text_0, MSGBOX_YESNO
# 380 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Linnea_R3_2
# 385 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_LINNEA_R3, ParcelCoastBreakwater_Linnea_R3_Text_1
# 386 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R3_Text_2, MSGBOX_DEFAULT
# 387 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Linnea_R3_2:
# 381 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_1, MSGBOX_DEFAULT
# 382 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Linnea_R4::
# 391 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 392 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 393 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R4_Text_0, MSGBOX_YESNO
# 394 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Linnea_R4_2
# 399 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_LINNEA_R4, ParcelCoastBreakwater_Linnea_R4_Text_1
# 400 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R4_Text_2, MSGBOX_DEFAULT
# 401 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Linnea_R4_2:
# 395 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_1, MSGBOX_DEFAULT
# 396 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Linnea_R5::
# 405 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 406 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 407 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R5_Text_0, MSGBOX_YESNO
# 408 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Linnea_R5_2
# 413 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_LINNEA_R5, ParcelCoastBreakwater_Linnea_R5_Text_1
# 414 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R5_Text_2, MSGBOX_DEFAULT
# 415 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Linnea_R5_2:
# 409 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_1, MSGBOX_DEFAULT
# 410 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Stig::
# 419 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_STIG, ParcelCoastBreakwater_Stig_Text_0, ParcelCoastBreakwater_Stig_Text_1, ParcelCoastBreakwater_Stig_FirstWin
# 423 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 424 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Stig_3
ParcelCoastBreakwater_Stig_1:
# 427 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Stig_8
ParcelCoastBreakwater_Stig_6:
# 430 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Stig_13
ParcelCoastBreakwater_Stig_11:
# 433 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Stig_18
ParcelCoastBreakwater_Stig_16:
# 436 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Stig_2:
# 425 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Stig_R2
	goto ParcelCoastBreakwater_Stig_1

ParcelCoastBreakwater_Stig_3:
# 424 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_STIG_R2
	goto_if 0, ParcelCoastBreakwater_Stig_2
	goto ParcelCoastBreakwater_Stig_1

ParcelCoastBreakwater_Stig_7:
# 428 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Stig_R3
	goto ParcelCoastBreakwater_Stig_6

ParcelCoastBreakwater_Stig_8:
# 427 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_STIG_R3
	goto_if 0, ParcelCoastBreakwater_Stig_7
	goto ParcelCoastBreakwater_Stig_6

ParcelCoastBreakwater_Stig_12:
# 431 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Stig_R4
	goto ParcelCoastBreakwater_Stig_11

ParcelCoastBreakwater_Stig_13:
# 430 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_STIG_R4
	goto_if 0, ParcelCoastBreakwater_Stig_12
	goto ParcelCoastBreakwater_Stig_11

ParcelCoastBreakwater_Stig_17:
# 434 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Stig_R5
	goto ParcelCoastBreakwater_Stig_16

ParcelCoastBreakwater_Stig_18:
# 433 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_STIG_R5
	goto_if 0, ParcelCoastBreakwater_Stig_17
	goto ParcelCoastBreakwater_Stig_16


ParcelCoastBreakwater_Stig_FirstWin::
# 440 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_Text_2, MSGBOX_DEFAULT
# 441 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Stig_R2::
# 445 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 446 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 447 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_0, MSGBOX_YESNO
# 448 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Stig_R2_2
# 453 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_STIG_R2, ParcelCoastBreakwater_Stig_R2_Text_2
# 454 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_3, MSGBOX_DEFAULT
# 455 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Stig_R2_2:
# 449 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_1, MSGBOX_DEFAULT
# 450 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Stig_R3::
# 459 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 460 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 461 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R3_Text_0, MSGBOX_YESNO
# 462 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Stig_R3_2
# 467 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_STIG_R3, ParcelCoastBreakwater_Stig_R3_Text_1
# 468 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R3_Text_2, MSGBOX_DEFAULT
# 469 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Stig_R3_2:
# 463 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_1, MSGBOX_DEFAULT
# 464 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Stig_R4::
# 473 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 474 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 475 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R4_Text_0, MSGBOX_YESNO
# 476 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Stig_R4_2
# 481 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_STIG_R4, ParcelCoastBreakwater_Stig_R3_Text_1
# 482 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R4_Text_1, MSGBOX_DEFAULT
# 483 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Stig_R4_2:
# 477 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_1, MSGBOX_DEFAULT
# 478 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Stig_R5::
# 487 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 488 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 489 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R5_Text_0, MSGBOX_YESNO
# 490 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Stig_R5_2
# 495 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_STIG_R5, ParcelCoastBreakwater_Stig_R2_Text_2
# 496 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R5_Text_1, MSGBOX_DEFAULT
# 497 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Stig_R5_2:
# 491 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_1, MSGBOX_DEFAULT
# 492 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tone::
# 501 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_TONE, ParcelCoastBreakwater_Tone_Text_0, ParcelCoastBreakwater_Tone_Text_1, ParcelCoastBreakwater_Tone_FirstWin
# 505 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 506 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Tone_3
ParcelCoastBreakwater_Tone_1:
# 509 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Tone_8
ParcelCoastBreakwater_Tone_6:
# 512 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Tone_13
ParcelCoastBreakwater_Tone_11:
# 515 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Tone_18
ParcelCoastBreakwater_Tone_16:
# 518 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Tone_2:
# 507 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Tone_R2
	goto ParcelCoastBreakwater_Tone_1

ParcelCoastBreakwater_Tone_3:
# 506 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_TONE_R2
	goto_if 0, ParcelCoastBreakwater_Tone_2
	goto ParcelCoastBreakwater_Tone_1

ParcelCoastBreakwater_Tone_7:
# 510 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Tone_R3
	goto ParcelCoastBreakwater_Tone_6

ParcelCoastBreakwater_Tone_8:
# 509 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_TONE_R3
	goto_if 0, ParcelCoastBreakwater_Tone_7
	goto ParcelCoastBreakwater_Tone_6

ParcelCoastBreakwater_Tone_12:
# 513 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Tone_R4
	goto ParcelCoastBreakwater_Tone_11

ParcelCoastBreakwater_Tone_13:
# 512 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_TONE_R4
	goto_if 0, ParcelCoastBreakwater_Tone_12
	goto ParcelCoastBreakwater_Tone_11

ParcelCoastBreakwater_Tone_17:
# 516 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Tone_R5
	goto ParcelCoastBreakwater_Tone_16

ParcelCoastBreakwater_Tone_18:
# 515 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_TONE_R5
	goto_if 0, ParcelCoastBreakwater_Tone_17
	goto ParcelCoastBreakwater_Tone_16


ParcelCoastBreakwater_Tone_FirstWin::
# 522 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_Text_2, MSGBOX_DEFAULT
# 523 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tone_R2::
# 527 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 528 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 529 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_0, MSGBOX_YESNO
# 530 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Tone_R2_2
# 535 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_TONE_R2, ParcelCoastBreakwater_Tone_R2_Text_2
# 536 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_3, MSGBOX_DEFAULT
# 537 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Tone_R2_2:
# 531 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_1, MSGBOX_DEFAULT
# 532 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tone_R3::
# 541 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 542 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 543 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R3_Text_0, MSGBOX_YESNO
# 544 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Tone_R3_2
# 549 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_TONE_R3, ParcelCoastBreakwater_Tone_R2_Text_2
# 550 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R3_Text_1, MSGBOX_DEFAULT
# 551 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Tone_R3_2:
# 545 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_1, MSGBOX_DEFAULT
# 546 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tone_R4::
# 555 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 556 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 557 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R4_Text_0, MSGBOX_YESNO
# 558 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Tone_R4_2
# 563 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_TONE_R4, ParcelCoastBreakwater_Tone_R4_Text_1
# 564 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R4_Text_2, MSGBOX_DEFAULT
# 565 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Tone_R4_2:
# 559 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_1, MSGBOX_DEFAULT
# 560 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tone_R5::
# 569 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 570 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 571 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R5_Text_0, MSGBOX_YESNO
# 572 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Tone_R5_2
# 577 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_TONE_R5, ParcelCoastBreakwater_Tone_R5_Text_1
# 578 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R5_Text_2, MSGBOX_DEFAULT
# 579 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Tone_R5_2:
# 573 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_1, MSGBOX_DEFAULT
# 574 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Holger::
# 583 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_HOLGER, ParcelCoastBreakwater_Holger_Text_0, ParcelCoastBreakwater_Holger_Text_1, ParcelCoastBreakwater_Holger_FirstWin
# 587 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 588 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Holger_3
ParcelCoastBreakwater_Holger_1:
# 591 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Holger_8
ParcelCoastBreakwater_Holger_6:
# 594 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Holger_13
ParcelCoastBreakwater_Holger_11:
# 597 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Holger_18
ParcelCoastBreakwater_Holger_16:
# 600 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Holger_2:
# 589 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Holger_R2
	goto ParcelCoastBreakwater_Holger_1

ParcelCoastBreakwater_Holger_3:
# 588 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_HOLGER_R2
	goto_if 0, ParcelCoastBreakwater_Holger_2
	goto ParcelCoastBreakwater_Holger_1

ParcelCoastBreakwater_Holger_7:
# 592 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Holger_R3
	goto ParcelCoastBreakwater_Holger_6

ParcelCoastBreakwater_Holger_8:
# 591 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_HOLGER_R3
	goto_if 0, ParcelCoastBreakwater_Holger_7
	goto ParcelCoastBreakwater_Holger_6

ParcelCoastBreakwater_Holger_12:
# 595 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Holger_R4
	goto ParcelCoastBreakwater_Holger_11

ParcelCoastBreakwater_Holger_13:
# 594 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_HOLGER_R4
	goto_if 0, ParcelCoastBreakwater_Holger_12
	goto ParcelCoastBreakwater_Holger_11

ParcelCoastBreakwater_Holger_17:
# 598 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Holger_R5
	goto ParcelCoastBreakwater_Holger_16

ParcelCoastBreakwater_Holger_18:
# 597 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_HOLGER_R5
	goto_if 0, ParcelCoastBreakwater_Holger_17
	goto ParcelCoastBreakwater_Holger_16


ParcelCoastBreakwater_Holger_FirstWin::
# 604 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_Text_2, MSGBOX_DEFAULT
# 605 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Holger_R2::
# 609 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 610 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 611 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_0, MSGBOX_YESNO
# 612 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Holger_R2_2
# 617 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_HOLGER_R2, ParcelCoastBreakwater_Holger_R2_Text_2
# 618 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_3, MSGBOX_DEFAULT
# 619 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Holger_R2_2:
# 613 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_1, MSGBOX_DEFAULT
# 614 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Holger_R3::
# 623 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 624 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 625 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R3_Text_0, MSGBOX_YESNO
# 626 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Holger_R3_2
# 631 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_HOLGER_R3, ParcelCoastBreakwater_Holger_R3_Text_1
# 632 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R3_Text_2, MSGBOX_DEFAULT
# 633 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Holger_R3_2:
# 627 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_1, MSGBOX_DEFAULT
# 628 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Holger_R4::
# 637 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 638 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 639 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R4_Text_0, MSGBOX_YESNO
# 640 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Holger_R4_2
# 645 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_HOLGER_R4, ParcelCoastBreakwater_Holger_R3_Text_1
# 646 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R4_Text_1, MSGBOX_DEFAULT
# 647 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Holger_R4_2:
# 641 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_1, MSGBOX_DEFAULT
# 642 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Holger_R5::
# 651 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 652 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 653 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R5_Text_0, MSGBOX_YESNO
# 654 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Holger_R5_2
# 659 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_HOLGER_R5, ParcelCoastBreakwater_Holger_R5_Text_1
# 660 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R5_Text_2, MSGBOX_DEFAULT
# 661 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Holger_R5_2:
# 655 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_1, MSGBOX_DEFAULT
# 656 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Beachcomber::
# 665 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 666 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 667 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TINS_DONE, ParcelCoastBreakwater_Beachcomber_2
# 672 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TINS_FOUND, ParcelCoastBreakwater_Beachcomber_5
# 679 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TINS, ParcelCoastBreakwater_Beachcomber_8
# 684 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COAST_ARRIVAL, ParcelCoastBreakwater_Beachcomber_11
# 690 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwater_Beachcomber_14
# 695 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_5, MSGBOX_DEFAULT
# 696 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_2:
# 668 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_0, MSGBOX_DEFAULT
# 669 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_5:
# 673 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_1, MSGBOX_DEFAULT
# 674 "data/maps/ParcelCoastBreakwater/scripts.pory"
	giveitem ITEM_NUGGET
# 675 "data/maps/ParcelCoastBreakwater/scripts.pory"
	setflag FLAG_SKALD_Q_TINS_DONE
# 676 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_8:
# 680 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_2, MSGBOX_DEFAULT
# 681 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_11:
# 685 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_3, MSGBOX_DEFAULT
# 686 "data/maps/ParcelCoastBreakwater/scripts.pory"
	setflag FLAG_SKALD_Q_TINS
# 687 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_14:
# 691 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_4, MSGBOX_DEFAULT
# 692 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Sign::
# 700 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Sign_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_SignHouse::
# 704 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_SignHouse_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_ItemPPUp::
# 707 "data/maps/ParcelCoastBreakwater/scripts.pory"
	finditem ITEM_PP_UP
	end


ParcelCoastBreakwater_Dorsey::
# 711 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 712 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 713 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwater_Dorsey_2
# 718 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Dorsey_Text_1, MSGBOX_DEFAULT
# 719 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Dorsey_2:
# 714 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Dorsey_Text_0, MSGBOX_DEFAULT
# 715 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tins::
# 724 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_TINS, ParcelCoastBreakwater_Tins_2
# 727 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tins_Text_0, MSGBOX_SIGN
# 728 "data/maps/ParcelCoastBreakwater/scripts.pory"
	setflag FLAG_SKALD_Q_TINS_FOUND
	end

ParcelCoastBreakwater_Tins_2:
	end


ParcelCoastBreakwater_Ansgar_Text_0:
# 10 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Off the boats a week. The\n"
	.string "quota review grounded us. Nothing to do\l"
	.string "but this. Battle.$"

ParcelCoastBreakwater_Ansgar_Text_1:
# 11 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: …Grounded again.$"

ParcelCoastBreakwater_Ansgar_Text_2:
# 26 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Season to season, HARLAND\n"
	.string "says. I say season to hearing to\l"
	.string "season.$"

ParcelCoastBreakwater_Ansgar_R2_Text_0:
# 37 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelCoastBreakwater_Ansgar_R2_Text_1:
# 39 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Fine. Same spot.$"

ParcelCoastBreakwater_Ansgar_R2_Text_2:
# 43 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Noted. Properly, this time.$"

ParcelCoastBreakwater_Ansgar_R2_Text_3:
# 44 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Ansgar_R3_Text_0:
# 51 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCoastBreakwater_Ansgar_R3_Text_1:
# 57 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: That's the one I wanted to see.$"

ParcelCoastBreakwater_Ansgar_R3_Text_2:
# 58 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Ansgar_R4_Text_0:
# 65 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCoastBreakwater_Ansgar_R4_Text_1:
# 71 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: …Again, then. Later.$"

ParcelCoastBreakwater_Ansgar_R4_Text_2:
# 72 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoastBreakwater_Ansgar_R5_Text_0:
# 79 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoastBreakwater_Ansgar_R5_Text_1:
# 85 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Right. That's the whole of it.$"

ParcelCoastBreakwater_Ansgar_R5_Text_2:
# 86 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoastBreakwater_Kasper_Text_0:
# 92 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Mum says the beach is fine to\n"
	.string "swim. The sign says don't. I can read.\l"
	.string "Battle!$"

ParcelCoastBreakwater_Kasper_Text_1:
# 93 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: …Mum was right.$"

ParcelCoastBreakwater_Kasper_Text_2:
# 108 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: The sign went up the week the\n"
	.string "cannery drum washed in. It's still up.$"

ParcelCoastBreakwater_Kasper_R2_Text_0:
# 119 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelCoastBreakwater_Kasper_R2_Text_1:
# 121 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: No hurry. The water keeps.$"

ParcelCoastBreakwater_Kasper_R2_Text_2:
# 125 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: …Fair.$"

ParcelCoastBreakwater_Kasper_R2_Text_3:
# 126 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoastBreakwater_Kasper_R3_Text_0:
# 133 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCoastBreakwater_Kasper_R3_Text_1:
# 140 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoastBreakwater_Kasper_R4_Text_0:
# 147 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCoastBreakwater_Kasper_R4_Text_1:
# 153 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Noted. Properly, this time.$"

ParcelCoastBreakwater_Kasper_R4_Text_2:
# 154 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoastBreakwater_Kasper_R5_Text_0:
# 161 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCoastBreakwater_Kasper_R5_Text_1:
# 167 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: That's the one I wanted to see.$"

ParcelCoastBreakwater_Kasper_R5_Text_2:
# 168 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoastBreakwater_Emma_Text_0:
# 174 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: I collect the tins. Seventeen\n"
	.string "with the crest. Fight me and I'll show\l"
	.string "you.$"

ParcelCoastBreakwater_Emma_Text_1:
# 175 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: …Eighteen, if you count that.$"

ParcelCoastBreakwater_Emma_Text_2:
# 190 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: The crest's the same as on the\n"
	.string "blankets. And the ferry. And the school\l"
	.string "roof.$"

ParcelCoastBreakwater_Emma_R2_Text_0:
# 201 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoastBreakwater_Emma_R2_Text_1:
# 203 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: Fine. Same spot.$"

ParcelCoastBreakwater_Emma_R2_Text_2:
# 207 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: …Again, then. Later.$"

ParcelCoastBreakwater_Emma_R2_Text_3:
# 208 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Emma_R3_Text_0:
# 215 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCoastBreakwater_Emma_R3_Text_1:
# 221 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: Right. That's the whole of it.$"

ParcelCoastBreakwater_Emma_R3_Text_2:
# 222 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Emma_R4_Text_0:
# 229 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCoastBreakwater_Emma_R4_Text_1:
# 236 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoastBreakwater_Emma_R5_Text_0:
# 243 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCoastBreakwater_Emma_R5_Text_1:
# 249 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: That's the one I wanted to see.$"

ParcelCoastBreakwater_Emma_R5_Text_2:
# 250 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCoastBreakwater_Vidar_Text_0:
# 256 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: Breakwater's MEREHOLT's. Beach\n"
	.string "is the town's. The line's about here.\l"
	.string "Battle on the line.$"

ParcelCoastBreakwater_Vidar_Text_1:
# 257 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: …Your side of the line.$"

ParcelCoastBreakwater_Vidar_Text_2:
# 272 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: They built the breakwater to\n"
	.string "shelter the boats. It silted the beach.\l"
	.string "Everything shelters something and\l"
	.string "silts something.$"

ParcelCoastBreakwater_Vidar_R2_Text_0:
# 283 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelCoastBreakwater_Vidar_R2_Text_1:
# 285 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: No hurry. The water keeps.$"

ParcelCoastBreakwater_Vidar_R2_Text_2:
# 289 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: Still yours.$"

ParcelCoastBreakwater_Vidar_R2_Text_3:
# 290 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Vidar_R3_Text_0:
# 297 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoastBreakwater_Vidar_R3_Text_1:
# 303 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: Right. That's the whole of it.$"

ParcelCoastBreakwater_Vidar_R3_Text_2:
# 304 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Vidar_R4_Text_0:
# 311 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoastBreakwater_Vidar_R4_Text_1:
# 318 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoastBreakwater_Vidar_R5_Text_0:
# 325 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoastBreakwater_Vidar_R5_Text_1:
# 332 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoastBreakwater_Linnea_Text_0:
# 338 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: We swim out to the island when\n"
	.string "the tide's low. The tide's never low now.\l"
	.string "Battle!$"

ParcelCoastBreakwater_Linnea_Text_1:
# 339 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: …High tide for you.$"

ParcelCoastBreakwater_Linnea_Text_2:
# 354 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Dad says the breakwater\n"
	.string "changed the tide. The sea doesn't ask\l"
	.string "permission either.$"

ParcelCoastBreakwater_Linnea_R2_Text_0:
# 365 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoastBreakwater_Linnea_R2_Text_1:
# 367 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCoastBreakwater_Linnea_R2_Text_2:
# 371 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: That's the one I wanted to see.$"

ParcelCoastBreakwater_Linnea_R2_Text_3:
# 372 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoastBreakwater_Linnea_R3_Text_0:
# 379 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelCoastBreakwater_Linnea_R3_Text_1:
# 385 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Noted. Properly, this time.$"

ParcelCoastBreakwater_Linnea_R3_Text_2:
# 386 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoastBreakwater_Linnea_R4_Text_0:
# 393 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoastBreakwater_Linnea_R4_Text_1:
# 399 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: …Fair.$"

ParcelCoastBreakwater_Linnea_R4_Text_2:
# 400 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoastBreakwater_Linnea_R5_Text_0:
# 407 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoastBreakwater_Linnea_R5_Text_1:
# 413 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Still yours.$"

ParcelCoastBreakwater_Linnea_R5_Text_2:
# 414 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoastBreakwater_Stig_Text_0:
# 420 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: The dredge line's out there. Below\n"
	.string "it, nothing. I swim above it. Battle,\l"
	.string "treading water.$"

ParcelCoastBreakwater_Stig_Text_1:
# 421 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: …Treading.$"

ParcelCoastBreakwater_Stig_Text_2:
# 436 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: Eleven fish, all the same length,\n"
	.string "HARLAND said. I've seen the length. It's\l"
	.string "the length of a tin.$"

ParcelCoastBreakwater_Stig_R2_Text_0:
# 447 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoastBreakwater_Stig_R2_Text_1:
# 449 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: No hurry. The water keeps.$"

ParcelCoastBreakwater_Stig_R2_Text_2:
# 453 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: Still yours.$"

ParcelCoastBreakwater_Stig_R2_Text_3:
# 454 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Stig_R3_Text_0:
# 461 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCoastBreakwater_Stig_R3_Text_1:
# 467 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: That's the one I wanted to see.$"

ParcelCoastBreakwater_Stig_R3_Text_2:
# 468 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Stig_R4_Text_0:
# 475 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCoastBreakwater_Stig_R4_Text_1:
# 482 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoastBreakwater_Stig_R5_Text_0:
# 489 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCoastBreakwater_Stig_R5_Text_1:
# 496 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCoastBreakwater_Tone_Text_0:
# 502 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: I swim to the far rock and back\n"
	.string "every day. The rock's getting further.\l"
	.string "Fight.$"

ParcelCoastBreakwater_Tone_Text_1:
# 503 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: …Further.$"

ParcelCoastBreakwater_Tone_Text_2:
# 518 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: It isn't moving. The water is. The\n"
	.string "water's moving all of us.$"

ParcelCoastBreakwater_Tone_R2_Text_0:
# 529 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoastBreakwater_Tone_R2_Text_1:
# 531 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: Another time, then.$"

ParcelCoastBreakwater_Tone_R2_Text_2:
# 535 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: …Again, then. Later.$"

ParcelCoastBreakwater_Tone_R2_Text_3:
# 536 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Tone_R3_Text_0:
# 543 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoastBreakwater_Tone_R3_Text_1:
# 550 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Tone_R4_Text_0:
# 557 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCoastBreakwater_Tone_R4_Text_1:
# 563 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: That's the one I wanted to see.$"

ParcelCoastBreakwater_Tone_R4_Text_2:
# 564 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoastBreakwater_Tone_R5_Text_0:
# 571 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCoastBreakwater_Tone_R5_Text_1:
# 577 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: Right. That's the whole of it.$"

ParcelCoastBreakwater_Tone_R5_Text_2:
# 578 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCoastBreakwater_Holger_Text_0:
# 584 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Nobody comes out here. The\n"
	.string "quota doesn't count what nobody sees.\l"
	.string "Battle, and then forget you saw me.$"

ParcelCoastBreakwater_Holger_Text_1:
# 585 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: …Forget it.$"

ParcelCoastBreakwater_Holger_Text_2:
# 600 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Four fish. Big ones. Written\n"
	.string "down? Then I'm in the review too. Fine.\l"
	.string "Put my name next to HARLAND's.$"

ParcelCoastBreakwater_Holger_R2_Text_0:
# 611 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelCoastBreakwater_Holger_R2_Text_1:
# 613 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: No hurry. The water keeps.$"

ParcelCoastBreakwater_Holger_R2_Text_2:
# 617 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: That's the one I wanted to see.$"

ParcelCoastBreakwater_Holger_R2_Text_3:
# 618 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Holger_R3_Text_0:
# 625 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelCoastBreakwater_Holger_R3_Text_1:
# 631 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Right. That's the whole of it.$"

ParcelCoastBreakwater_Holger_R3_Text_2:
# 632 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Holger_R4_Text_0:
# 639 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelCoastBreakwater_Holger_R4_Text_1:
# 646 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoastBreakwater_Holger_R5_Text_0:
# 653 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCoastBreakwater_Holger_R5_Text_1:
# 659 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Noted. Properly, this time.$"

ParcelCoastBreakwater_Holger_R5_Text_2:
# 660 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoastBreakwater_Beachcomber_Text_0:
# 668 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Thirty-one. I've written\n"
	.string "it on the wall in chalk. The tide will\l"
	.string "have it by spring. That's all right. It\l"
	.string "was true in between.$"

ParcelCoastBreakwater_Beachcomber_Text_1:
# 673 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Thirty-one. I had\n"
	.string "twenty-nine. My eyes.\p"
	.string "Here. The FOUNDATION's own coin for the\n"
	.string "FOUNDATION's own tins. I find those\l"
	.string "too.$"

ParcelCoastBreakwater_Beachcomber_Text_2:
# 680 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: The rocks past the hut.\n"
	.string "Start at the wall end. Don't skip the\l"
	.string "crushed ones; crushed is still a tin.$"

ParcelCoastBreakwater_Beachcomber_Text_3:
# 685 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Count the line for me. My\n"
	.string "eyes aren't what they were and the\l"
	.string "CORPS girl's photograph is out of date.\p"
	.string "Start at the wall end, past the hut, and\n"
	.string "don't skip the crushed ones.$"

ParcelCoastBreakwater_Beachcomber_Text_4:
# 691 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Fewer tins this month.\n"
	.string "Three, with the crest. I lined them up\l"
	.string "anyway. A short line is still a line.\l"
	.string "Somebody should keep it.$"

ParcelCoastBreakwater_Beachcomber_Text_5:
# 695 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Every tide brings\n"
	.string "something with the crest on it. I line\l"
	.string "them up along the wall.\p"
	.string "The CORPS girl photographed the line\n"
	.string "for her file. It's longer now than in the\l"
	.string "photograph.$"

ParcelCoastBreakwater_Sign_Text_0:
# 700 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "MEREHOLT BREAKWATER. Beach closed to\n"
	.string "bathing pending water quality review.\l"
	.string "-- Harbour Office$"

ParcelCoastBreakwater_SignHouse_Text_0:
# 704 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "Lifeguard hut. Closed for the season.\n"
	.string "The season was last year.$"

ParcelCoastBreakwater_Dorsey_Text_0:
# 714 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DORSEY: The review kept the beach shut\n"
	.string "and reopened the breakwater side. Half\l"
	.string "a beach. I signed that too.\p"
	.string "First thing I've signed in years that\n"
	.string "I'd put my name on twice.$"

ParcelCoastBreakwater_Dorsey_Text_1:
# 718 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DORSEY: I come down here when the\n"
	.string "office is loud. The bathing sign is mine.\l"
	.string "I signed the closure.\p"
	.string "Nobody signs a beach open, RANGER. You\n"
	.string "only ever sign them shut.\p"
	.string "I keep a tin from this beach on my desk.\n"
	.string "Crest up. I tell visitors it's what we\l"
	.string "make. It's what washes back.$"

ParcelCoastBreakwater_Tins_Text_0:
# 727 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "Tins along the rock, crest up, each with\n"
	.string "a tide line of salt. Thirty-one. Two\l"
	.string "crushed flat, counted anyway.\p"
	.string "The newest still has its label.$"
