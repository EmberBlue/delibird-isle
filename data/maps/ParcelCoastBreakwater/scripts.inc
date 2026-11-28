ParcelCoastBreakwater_MapScripts::
	.byte 0


ParcelCoastBreakwater_Ansgar::
# 14 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_ANSGAR, ParcelCoastBreakwater_Ansgar_Text_0, ParcelCoastBreakwater_Ansgar_Text_1, ParcelCoastBreakwater_Ansgar_FirstWin
# 18 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 19 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Ansgar_3
ParcelCoastBreakwater_Ansgar_1:
# 22 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Ansgar_8
ParcelCoastBreakwater_Ansgar_6:
# 25 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Ansgar_13
ParcelCoastBreakwater_Ansgar_11:
# 28 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Ansgar_18
ParcelCoastBreakwater_Ansgar_16:
# 31 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Ansgar_2:
# 20 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Ansgar_R2
	goto ParcelCoastBreakwater_Ansgar_1

ParcelCoastBreakwater_Ansgar_3:
# 19 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_ANSGAR_R2
	goto_if 0, ParcelCoastBreakwater_Ansgar_2
	goto ParcelCoastBreakwater_Ansgar_1

ParcelCoastBreakwater_Ansgar_7:
# 23 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Ansgar_R3
	goto ParcelCoastBreakwater_Ansgar_6

ParcelCoastBreakwater_Ansgar_8:
# 22 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_ANSGAR_R3
	goto_if 0, ParcelCoastBreakwater_Ansgar_7
	goto ParcelCoastBreakwater_Ansgar_6

ParcelCoastBreakwater_Ansgar_12:
# 26 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Ansgar_R4
	goto ParcelCoastBreakwater_Ansgar_11

ParcelCoastBreakwater_Ansgar_13:
# 25 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_ANSGAR_R4
	goto_if 0, ParcelCoastBreakwater_Ansgar_12
	goto ParcelCoastBreakwater_Ansgar_11

ParcelCoastBreakwater_Ansgar_17:
# 29 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Ansgar_R5
	goto ParcelCoastBreakwater_Ansgar_16

ParcelCoastBreakwater_Ansgar_18:
# 28 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_ANSGAR_R5
	goto_if 0, ParcelCoastBreakwater_Ansgar_17
	goto ParcelCoastBreakwater_Ansgar_16


ParcelCoastBreakwater_Ansgar_FirstWin::
# 35 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_Text_2, MSGBOX_DEFAULT
# 36 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Ansgar_R2::
# 40 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 41 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 42 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_0, MSGBOX_YESNO
# 43 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Ansgar_R2_2
# 48 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_ANSGAR_R2, ParcelCoastBreakwater_Ansgar_R2_Text_2
# 49 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_3, MSGBOX_DEFAULT
# 50 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Ansgar_R2_2:
# 44 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_1, MSGBOX_DEFAULT
# 45 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Ansgar_R3::
# 54 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 55 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 56 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R3_Text_0, MSGBOX_YESNO
# 57 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Ansgar_R3_2
# 62 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_ANSGAR_R3, ParcelCoastBreakwater_Ansgar_R3_Text_1
# 63 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R3_Text_2, MSGBOX_DEFAULT
# 64 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Ansgar_R3_2:
# 58 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_1, MSGBOX_DEFAULT
# 59 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Ansgar_R4::
# 68 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 69 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 70 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R4_Text_0, MSGBOX_YESNO
# 71 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Ansgar_R4_2
# 76 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_ANSGAR_R4, ParcelCoastBreakwater_Ansgar_R4_Text_1
# 77 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R4_Text_2, MSGBOX_DEFAULT
# 78 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Ansgar_R4_2:
# 72 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_1, MSGBOX_DEFAULT
# 73 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Ansgar_R5::
# 82 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 83 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 84 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R5_Text_0, MSGBOX_YESNO
# 85 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Ansgar_R5_2
# 90 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_ANSGAR_R5, ParcelCoastBreakwater_Ansgar_R5_Text_1
# 91 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R5_Text_2, MSGBOX_DEFAULT
# 92 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Ansgar_R5_2:
# 86 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_1, MSGBOX_DEFAULT
# 87 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Kasper::
# 96 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_KASPER, ParcelCoastBreakwater_Kasper_Text_0, ParcelCoastBreakwater_Kasper_Text_1, ParcelCoastBreakwater_Kasper_FirstWin
# 100 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 101 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Kasper_3
ParcelCoastBreakwater_Kasper_1:
# 104 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Kasper_8
ParcelCoastBreakwater_Kasper_6:
# 107 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Kasper_13
ParcelCoastBreakwater_Kasper_11:
# 110 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Kasper_18
ParcelCoastBreakwater_Kasper_16:
# 113 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Kasper_2:
# 102 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Kasper_R2
	goto ParcelCoastBreakwater_Kasper_1

ParcelCoastBreakwater_Kasper_3:
# 101 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_KASPER_R2
	goto_if 0, ParcelCoastBreakwater_Kasper_2
	goto ParcelCoastBreakwater_Kasper_1

ParcelCoastBreakwater_Kasper_7:
# 105 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Kasper_R3
	goto ParcelCoastBreakwater_Kasper_6

ParcelCoastBreakwater_Kasper_8:
# 104 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_KASPER_R3
	goto_if 0, ParcelCoastBreakwater_Kasper_7
	goto ParcelCoastBreakwater_Kasper_6

ParcelCoastBreakwater_Kasper_12:
# 108 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Kasper_R4
	goto ParcelCoastBreakwater_Kasper_11

ParcelCoastBreakwater_Kasper_13:
# 107 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_KASPER_R4
	goto_if 0, ParcelCoastBreakwater_Kasper_12
	goto ParcelCoastBreakwater_Kasper_11

ParcelCoastBreakwater_Kasper_17:
# 111 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Kasper_R5
	goto ParcelCoastBreakwater_Kasper_16

ParcelCoastBreakwater_Kasper_18:
# 110 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_KASPER_R5
	goto_if 0, ParcelCoastBreakwater_Kasper_17
	goto ParcelCoastBreakwater_Kasper_16


ParcelCoastBreakwater_Kasper_FirstWin::
# 117 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_Text_2, MSGBOX_DEFAULT
# 118 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Kasper_R2::
# 122 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 123 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 124 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_0, MSGBOX_YESNO
# 125 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Kasper_R2_2
# 130 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_KASPER_R2, ParcelCoastBreakwater_Kasper_R2_Text_2
# 131 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_3, MSGBOX_DEFAULT
# 132 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Kasper_R2_2:
# 126 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_1, MSGBOX_DEFAULT
# 127 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Kasper_R3::
# 136 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 137 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 138 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R3_Text_0, MSGBOX_YESNO
# 139 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Kasper_R3_2
# 144 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_KASPER_R3, ParcelCoastBreakwater_Kasper_R2_Text_2
# 145 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R3_Text_1, MSGBOX_DEFAULT
# 146 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Kasper_R3_2:
# 140 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_1, MSGBOX_DEFAULT
# 141 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Kasper_R4::
# 150 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 151 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 152 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R4_Text_0, MSGBOX_YESNO
# 153 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Kasper_R4_2
# 158 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_KASPER_R4, ParcelCoastBreakwater_Kasper_R4_Text_1
# 159 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R4_Text_2, MSGBOX_DEFAULT
# 160 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Kasper_R4_2:
# 154 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_1, MSGBOX_DEFAULT
# 155 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Kasper_R5::
# 164 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 165 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 166 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R5_Text_0, MSGBOX_YESNO
# 167 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Kasper_R5_2
# 172 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_KASPER_R5, ParcelCoastBreakwater_Kasper_R5_Text_1
# 173 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R5_Text_2, MSGBOX_DEFAULT
# 174 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Kasper_R5_2:
# 168 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_1, MSGBOX_DEFAULT
# 169 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Emma::
# 178 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_EMMA, ParcelCoastBreakwater_Emma_Text_0, ParcelCoastBreakwater_Emma_Text_1, ParcelCoastBreakwater_Emma_FirstWin
# 182 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 183 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Emma_3
ParcelCoastBreakwater_Emma_1:
# 186 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Emma_8
ParcelCoastBreakwater_Emma_6:
# 189 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Emma_13
ParcelCoastBreakwater_Emma_11:
# 192 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Emma_18
ParcelCoastBreakwater_Emma_16:
# 195 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Emma_2:
# 184 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Emma_R2
	goto ParcelCoastBreakwater_Emma_1

ParcelCoastBreakwater_Emma_3:
# 183 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_EMMA_R2
	goto_if 0, ParcelCoastBreakwater_Emma_2
	goto ParcelCoastBreakwater_Emma_1

ParcelCoastBreakwater_Emma_7:
# 187 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Emma_R3
	goto ParcelCoastBreakwater_Emma_6

ParcelCoastBreakwater_Emma_8:
# 186 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_EMMA_R3
	goto_if 0, ParcelCoastBreakwater_Emma_7
	goto ParcelCoastBreakwater_Emma_6

ParcelCoastBreakwater_Emma_12:
# 190 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Emma_R4
	goto ParcelCoastBreakwater_Emma_11

ParcelCoastBreakwater_Emma_13:
# 189 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_EMMA_R4
	goto_if 0, ParcelCoastBreakwater_Emma_12
	goto ParcelCoastBreakwater_Emma_11

ParcelCoastBreakwater_Emma_17:
# 193 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Emma_R5
	goto ParcelCoastBreakwater_Emma_16

ParcelCoastBreakwater_Emma_18:
# 192 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_EMMA_R5
	goto_if 0, ParcelCoastBreakwater_Emma_17
	goto ParcelCoastBreakwater_Emma_16


ParcelCoastBreakwater_Emma_FirstWin::
# 199 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_Text_2, MSGBOX_DEFAULT
# 200 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Emma_R2::
# 204 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 205 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 206 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_0, MSGBOX_YESNO
# 207 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Emma_R2_2
# 212 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_EMMA_R2, ParcelCoastBreakwater_Emma_R2_Text_2
# 213 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_3, MSGBOX_DEFAULT
# 214 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Emma_R2_2:
# 208 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_1, MSGBOX_DEFAULT
# 209 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Emma_R3::
# 218 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 219 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 220 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R3_Text_0, MSGBOX_YESNO
# 221 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Emma_R3_2
# 226 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_EMMA_R3, ParcelCoastBreakwater_Emma_R3_Text_1
# 227 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R3_Text_2, MSGBOX_DEFAULT
# 228 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Emma_R3_2:
# 222 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_1, MSGBOX_DEFAULT
# 223 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Emma_R4::
# 232 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 233 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 234 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R4_Text_0, MSGBOX_YESNO
# 235 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Emma_R4_2
# 240 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_EMMA_R4, ParcelCoastBreakwater_Emma_R3_Text_1
# 241 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R4_Text_1, MSGBOX_DEFAULT
# 242 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Emma_R4_2:
# 236 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_1, MSGBOX_DEFAULT
# 237 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Emma_R5::
# 246 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 247 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 248 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R5_Text_0, MSGBOX_YESNO
# 249 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Emma_R5_2
# 254 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_EMMA_R5, ParcelCoastBreakwater_Emma_R5_Text_1
# 255 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R5_Text_2, MSGBOX_DEFAULT
# 256 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Emma_R5_2:
# 250 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_1, MSGBOX_DEFAULT
# 251 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Vidar::
# 260 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_VIDAR, ParcelCoastBreakwater_Vidar_Text_0, ParcelCoastBreakwater_Vidar_Text_1, ParcelCoastBreakwater_Vidar_FirstWin
# 264 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 265 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Vidar_3
ParcelCoastBreakwater_Vidar_1:
# 268 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Vidar_8
ParcelCoastBreakwater_Vidar_6:
# 271 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Vidar_13
ParcelCoastBreakwater_Vidar_11:
# 274 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Vidar_18
ParcelCoastBreakwater_Vidar_16:
# 277 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Vidar_2:
# 266 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Vidar_R2
	goto ParcelCoastBreakwater_Vidar_1

ParcelCoastBreakwater_Vidar_3:
# 265 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_VIDAR_R2
	goto_if 0, ParcelCoastBreakwater_Vidar_2
	goto ParcelCoastBreakwater_Vidar_1

ParcelCoastBreakwater_Vidar_7:
# 269 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Vidar_R3
	goto ParcelCoastBreakwater_Vidar_6

ParcelCoastBreakwater_Vidar_8:
# 268 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_VIDAR_R3
	goto_if 0, ParcelCoastBreakwater_Vidar_7
	goto ParcelCoastBreakwater_Vidar_6

ParcelCoastBreakwater_Vidar_12:
# 272 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Vidar_R4
	goto ParcelCoastBreakwater_Vidar_11

ParcelCoastBreakwater_Vidar_13:
# 271 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_VIDAR_R4
	goto_if 0, ParcelCoastBreakwater_Vidar_12
	goto ParcelCoastBreakwater_Vidar_11

ParcelCoastBreakwater_Vidar_17:
# 275 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Vidar_R5
	goto ParcelCoastBreakwater_Vidar_16

ParcelCoastBreakwater_Vidar_18:
# 274 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_VIDAR_R5
	goto_if 0, ParcelCoastBreakwater_Vidar_17
	goto ParcelCoastBreakwater_Vidar_16


ParcelCoastBreakwater_Vidar_FirstWin::
# 281 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_Text_2, MSGBOX_DEFAULT
# 282 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Vidar_R2::
# 286 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 287 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 288 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_0, MSGBOX_YESNO
# 289 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Vidar_R2_2
# 294 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_VIDAR_R2, ParcelCoastBreakwater_Vidar_R2_Text_2
# 295 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_3, MSGBOX_DEFAULT
# 296 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Vidar_R2_2:
# 290 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 291 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Vidar_R3::
# 300 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 301 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 302 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R3_Text_0, MSGBOX_YESNO
# 303 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Vidar_R3_2
# 308 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_VIDAR_R3, ParcelCoastBreakwater_Vidar_R3_Text_1
# 309 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R3_Text_2, MSGBOX_DEFAULT
# 310 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Vidar_R3_2:
# 304 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 305 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Vidar_R4::
# 314 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 315 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 316 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R4_Text_0, MSGBOX_YESNO
# 317 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Vidar_R4_2
# 322 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_VIDAR_R4, ParcelCoastBreakwater_Vidar_R3_Text_1
# 323 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R4_Text_1, MSGBOX_DEFAULT
# 324 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Vidar_R4_2:
# 318 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 319 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Vidar_R5::
# 328 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 329 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 330 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R5_Text_0, MSGBOX_YESNO
# 331 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Vidar_R5_2
# 336 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_VIDAR_R5, ParcelCoastBreakwater_Vidar_R3_Text_1
# 337 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R5_Text_1, MSGBOX_DEFAULT
# 338 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Vidar_R5_2:
# 332 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 333 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Linnea::
# 342 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_LINNEA, ParcelCoastBreakwater_Linnea_Text_0, ParcelCoastBreakwater_Linnea_Text_1, ParcelCoastBreakwater_Linnea_FirstWin
# 346 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 347 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Linnea_3
ParcelCoastBreakwater_Linnea_1:
# 350 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Linnea_8
ParcelCoastBreakwater_Linnea_6:
# 353 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Linnea_13
ParcelCoastBreakwater_Linnea_11:
# 356 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Linnea_18
ParcelCoastBreakwater_Linnea_16:
# 359 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Linnea_2:
# 348 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Linnea_R2
	goto ParcelCoastBreakwater_Linnea_1

ParcelCoastBreakwater_Linnea_3:
# 347 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_LINNEA_R2
	goto_if 0, ParcelCoastBreakwater_Linnea_2
	goto ParcelCoastBreakwater_Linnea_1

ParcelCoastBreakwater_Linnea_7:
# 351 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Linnea_R3
	goto ParcelCoastBreakwater_Linnea_6

ParcelCoastBreakwater_Linnea_8:
# 350 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_LINNEA_R3
	goto_if 0, ParcelCoastBreakwater_Linnea_7
	goto ParcelCoastBreakwater_Linnea_6

ParcelCoastBreakwater_Linnea_12:
# 354 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Linnea_R4
	goto ParcelCoastBreakwater_Linnea_11

ParcelCoastBreakwater_Linnea_13:
# 353 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_LINNEA_R4
	goto_if 0, ParcelCoastBreakwater_Linnea_12
	goto ParcelCoastBreakwater_Linnea_11

ParcelCoastBreakwater_Linnea_17:
# 357 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Linnea_R5
	goto ParcelCoastBreakwater_Linnea_16

ParcelCoastBreakwater_Linnea_18:
# 356 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_LINNEA_R5
	goto_if 0, ParcelCoastBreakwater_Linnea_17
	goto ParcelCoastBreakwater_Linnea_16


ParcelCoastBreakwater_Linnea_FirstWin::
# 363 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_Text_2, MSGBOX_DEFAULT
# 364 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Linnea_R2::
# 368 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 369 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 370 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_0, MSGBOX_YESNO
# 371 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Linnea_R2_2
# 376 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_LINNEA_R2, ParcelCoastBreakwater_Linnea_R2_Text_2
# 377 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_3, MSGBOX_DEFAULT
# 378 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Linnea_R2_2:
# 372 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_1, MSGBOX_DEFAULT
# 373 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Linnea_R3::
# 382 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 383 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 384 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R3_Text_0, MSGBOX_YESNO
# 385 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Linnea_R3_2
# 390 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_LINNEA_R3, ParcelCoastBreakwater_Linnea_R3_Text_1
# 391 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R3_Text_2, MSGBOX_DEFAULT
# 392 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Linnea_R3_2:
# 386 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_1, MSGBOX_DEFAULT
# 387 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Linnea_R4::
# 396 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 397 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 398 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R4_Text_0, MSGBOX_YESNO
# 399 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Linnea_R4_2
# 404 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_LINNEA_R4, ParcelCoastBreakwater_Linnea_R4_Text_1
# 405 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R4_Text_2, MSGBOX_DEFAULT
# 406 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Linnea_R4_2:
# 400 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_1, MSGBOX_DEFAULT
# 401 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Linnea_R5::
# 410 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 411 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 412 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R5_Text_0, MSGBOX_YESNO
# 413 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Linnea_R5_2
# 418 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_LINNEA_R5, ParcelCoastBreakwater_Linnea_R5_Text_1
# 419 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R5_Text_2, MSGBOX_DEFAULT
# 420 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Linnea_R5_2:
# 414 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_1, MSGBOX_DEFAULT
# 415 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Stig::
# 424 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_STIG, ParcelCoastBreakwater_Stig_Text_0, ParcelCoastBreakwater_Stig_Text_1, ParcelCoastBreakwater_Stig_FirstWin
# 428 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 429 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Stig_3
ParcelCoastBreakwater_Stig_1:
# 432 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Stig_8
ParcelCoastBreakwater_Stig_6:
# 435 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Stig_13
ParcelCoastBreakwater_Stig_11:
# 438 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Stig_18
ParcelCoastBreakwater_Stig_16:
# 441 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Stig_2:
# 430 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Stig_R2
	goto ParcelCoastBreakwater_Stig_1

ParcelCoastBreakwater_Stig_3:
# 429 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_STIG_R2
	goto_if 0, ParcelCoastBreakwater_Stig_2
	goto ParcelCoastBreakwater_Stig_1

ParcelCoastBreakwater_Stig_7:
# 433 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Stig_R3
	goto ParcelCoastBreakwater_Stig_6

ParcelCoastBreakwater_Stig_8:
# 432 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_STIG_R3
	goto_if 0, ParcelCoastBreakwater_Stig_7
	goto ParcelCoastBreakwater_Stig_6

ParcelCoastBreakwater_Stig_12:
# 436 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Stig_R4
	goto ParcelCoastBreakwater_Stig_11

ParcelCoastBreakwater_Stig_13:
# 435 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_STIG_R4
	goto_if 0, ParcelCoastBreakwater_Stig_12
	goto ParcelCoastBreakwater_Stig_11

ParcelCoastBreakwater_Stig_17:
# 439 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Stig_R5
	goto ParcelCoastBreakwater_Stig_16

ParcelCoastBreakwater_Stig_18:
# 438 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_STIG_R5
	goto_if 0, ParcelCoastBreakwater_Stig_17
	goto ParcelCoastBreakwater_Stig_16


ParcelCoastBreakwater_Stig_FirstWin::
# 445 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_Text_2, MSGBOX_DEFAULT
# 446 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Stig_R2::
# 450 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 451 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 452 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_0, MSGBOX_YESNO
# 453 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Stig_R2_2
# 458 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_STIG_R2, ParcelCoastBreakwater_Stig_R2_Text_2
# 459 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_3, MSGBOX_DEFAULT
# 460 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Stig_R2_2:
# 454 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_1, MSGBOX_DEFAULT
# 455 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Stig_R3::
# 464 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 465 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 466 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R3_Text_0, MSGBOX_YESNO
# 467 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Stig_R3_2
# 472 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_STIG_R3, ParcelCoastBreakwater_Stig_R3_Text_1
# 473 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R3_Text_2, MSGBOX_DEFAULT
# 474 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Stig_R3_2:
# 468 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_1, MSGBOX_DEFAULT
# 469 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Stig_R4::
# 478 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 479 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 480 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R4_Text_0, MSGBOX_YESNO
# 481 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Stig_R4_2
# 486 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_STIG_R4, ParcelCoastBreakwater_Stig_R3_Text_1
# 487 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R4_Text_1, MSGBOX_DEFAULT
# 488 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Stig_R4_2:
# 482 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_1, MSGBOX_DEFAULT
# 483 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Stig_R5::
# 492 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 493 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 494 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R5_Text_0, MSGBOX_YESNO
# 495 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Stig_R5_2
# 500 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_STIG_R5, ParcelCoastBreakwater_Stig_R2_Text_2
# 501 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R5_Text_1, MSGBOX_DEFAULT
# 502 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Stig_R5_2:
# 496 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_1, MSGBOX_DEFAULT
# 497 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tone::
# 506 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_TONE, ParcelCoastBreakwater_Tone_Text_0, ParcelCoastBreakwater_Tone_Text_1, ParcelCoastBreakwater_Tone_FirstWin
# 510 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 511 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Tone_3
ParcelCoastBreakwater_Tone_1:
# 514 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Tone_8
ParcelCoastBreakwater_Tone_6:
# 517 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Tone_13
ParcelCoastBreakwater_Tone_11:
# 520 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Tone_18
ParcelCoastBreakwater_Tone_16:
# 523 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Tone_2:
# 512 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Tone_R2
	goto ParcelCoastBreakwater_Tone_1

ParcelCoastBreakwater_Tone_3:
# 511 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_TONE_R2
	goto_if 0, ParcelCoastBreakwater_Tone_2
	goto ParcelCoastBreakwater_Tone_1

ParcelCoastBreakwater_Tone_7:
# 515 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Tone_R3
	goto ParcelCoastBreakwater_Tone_6

ParcelCoastBreakwater_Tone_8:
# 514 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_TONE_R3
	goto_if 0, ParcelCoastBreakwater_Tone_7
	goto ParcelCoastBreakwater_Tone_6

ParcelCoastBreakwater_Tone_12:
# 518 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Tone_R4
	goto ParcelCoastBreakwater_Tone_11

ParcelCoastBreakwater_Tone_13:
# 517 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_TONE_R4
	goto_if 0, ParcelCoastBreakwater_Tone_12
	goto ParcelCoastBreakwater_Tone_11

ParcelCoastBreakwater_Tone_17:
# 521 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Tone_R5
	goto ParcelCoastBreakwater_Tone_16

ParcelCoastBreakwater_Tone_18:
# 520 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_TONE_R5
	goto_if 0, ParcelCoastBreakwater_Tone_17
	goto ParcelCoastBreakwater_Tone_16


ParcelCoastBreakwater_Tone_FirstWin::
# 527 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_Text_2, MSGBOX_DEFAULT
# 528 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tone_R2::
# 532 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 533 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 534 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_0, MSGBOX_YESNO
# 535 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Tone_R2_2
# 540 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_TONE_R2, ParcelCoastBreakwater_Tone_R2_Text_2
# 541 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_3, MSGBOX_DEFAULT
# 542 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Tone_R2_2:
# 536 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_1, MSGBOX_DEFAULT
# 537 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tone_R3::
# 546 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 547 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 548 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R3_Text_0, MSGBOX_YESNO
# 549 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Tone_R3_2
# 554 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_TONE_R3, ParcelCoastBreakwater_Tone_R2_Text_2
# 555 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R3_Text_1, MSGBOX_DEFAULT
# 556 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Tone_R3_2:
# 550 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_1, MSGBOX_DEFAULT
# 551 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tone_R4::
# 560 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 561 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 562 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R4_Text_0, MSGBOX_YESNO
# 563 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Tone_R4_2
# 568 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_TONE_R4, ParcelCoastBreakwater_Tone_R4_Text_1
# 569 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R4_Text_2, MSGBOX_DEFAULT
# 570 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Tone_R4_2:
# 564 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_1, MSGBOX_DEFAULT
# 565 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tone_R5::
# 574 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 575 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 576 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R5_Text_0, MSGBOX_YESNO
# 577 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Tone_R5_2
# 582 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_TONE_R5, ParcelCoastBreakwater_Tone_R5_Text_1
# 583 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R5_Text_2, MSGBOX_DEFAULT
# 584 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Tone_R5_2:
# 578 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_1, MSGBOX_DEFAULT
# 579 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Holger::
# 588 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_HOLGER, ParcelCoastBreakwater_Holger_Text_0, ParcelCoastBreakwater_Holger_Text_1, ParcelCoastBreakwater_Holger_FirstWin
# 592 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 593 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Holger_3
ParcelCoastBreakwater_Holger_1:
# 596 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Holger_8
ParcelCoastBreakwater_Holger_6:
# 599 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Holger_13
ParcelCoastBreakwater_Holger_11:
# 602 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Holger_18
ParcelCoastBreakwater_Holger_16:
# 605 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Holger_2:
# 594 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Holger_R2
	goto ParcelCoastBreakwater_Holger_1

ParcelCoastBreakwater_Holger_3:
# 593 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_HOLGER_R2
	goto_if 0, ParcelCoastBreakwater_Holger_2
	goto ParcelCoastBreakwater_Holger_1

ParcelCoastBreakwater_Holger_7:
# 597 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Holger_R3
	goto ParcelCoastBreakwater_Holger_6

ParcelCoastBreakwater_Holger_8:
# 596 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_HOLGER_R3
	goto_if 0, ParcelCoastBreakwater_Holger_7
	goto ParcelCoastBreakwater_Holger_6

ParcelCoastBreakwater_Holger_12:
# 600 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Holger_R4
	goto ParcelCoastBreakwater_Holger_11

ParcelCoastBreakwater_Holger_13:
# 599 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_HOLGER_R4
	goto_if 0, ParcelCoastBreakwater_Holger_12
	goto ParcelCoastBreakwater_Holger_11

ParcelCoastBreakwater_Holger_17:
# 603 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Holger_R5
	goto ParcelCoastBreakwater_Holger_16

ParcelCoastBreakwater_Holger_18:
# 602 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_HOLGER_R5
	goto_if 0, ParcelCoastBreakwater_Holger_17
	goto ParcelCoastBreakwater_Holger_16


ParcelCoastBreakwater_Holger_FirstWin::
# 609 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_Text_2, MSGBOX_DEFAULT
# 610 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Holger_R2::
# 614 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 615 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 616 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_0, MSGBOX_YESNO
# 617 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Holger_R2_2
# 622 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_HOLGER_R2, ParcelCoastBreakwater_Holger_R2_Text_2
# 623 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_3, MSGBOX_DEFAULT
# 624 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Holger_R2_2:
# 618 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_1, MSGBOX_DEFAULT
# 619 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Holger_R3::
# 628 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 629 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 630 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R3_Text_0, MSGBOX_YESNO
# 631 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Holger_R3_2
# 636 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_HOLGER_R3, ParcelCoastBreakwater_Holger_R3_Text_1
# 637 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R3_Text_2, MSGBOX_DEFAULT
# 638 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Holger_R3_2:
# 632 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_1, MSGBOX_DEFAULT
# 633 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Holger_R4::
# 642 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 643 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 644 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R4_Text_0, MSGBOX_YESNO
# 645 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Holger_R4_2
# 650 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_HOLGER_R4, ParcelCoastBreakwater_Holger_R3_Text_1
# 651 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R4_Text_1, MSGBOX_DEFAULT
# 652 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Holger_R4_2:
# 646 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_1, MSGBOX_DEFAULT
# 647 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Holger_R5::
# 656 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 657 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 658 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R5_Text_0, MSGBOX_YESNO
# 659 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Holger_R5_2
# 664 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_HOLGER_R5, ParcelCoastBreakwater_Holger_R5_Text_1
# 665 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R5_Text_2, MSGBOX_DEFAULT
# 666 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Holger_R5_2:
# 660 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_1, MSGBOX_DEFAULT
# 661 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Beachcomber::
# 670 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 671 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 672 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCoastBreakwater_Beachcomber_3
ParcelCoastBreakwater_Beachcomber_1:
# 677 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TINS_DONE, ParcelCoastBreakwater_Beachcomber_7
# 682 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TINS_FOUND, ParcelCoastBreakwater_Beachcomber_10
# 689 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TINS, ParcelCoastBreakwater_Beachcomber_13
# 694 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COAST_ARRIVAL, ParcelCoastBreakwater_Beachcomber_16
# 700 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwater_Beachcomber_19
# 705 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_6, MSGBOX_DEFAULT
# 706 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_2:
# 673 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_0, MSGBOX_DEFAULT
# 674 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_3:
# 672 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TINS_DONE, ParcelCoastBreakwater_Beachcomber_2
	goto ParcelCoastBreakwater_Beachcomber_1

ParcelCoastBreakwater_Beachcomber_7:
# 678 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_1, MSGBOX_DEFAULT
# 679 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_10:
# 683 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_2, MSGBOX_DEFAULT
# 684 "data/maps/ParcelCoastBreakwater/scripts.pory"
	giveitem ITEM_NUGGET
# 685 "data/maps/ParcelCoastBreakwater/scripts.pory"
	setflag FLAG_SKALD_Q_TINS_DONE
# 686 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_13:
# 690 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_3, MSGBOX_DEFAULT
# 691 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_16:
# 695 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_4, MSGBOX_DEFAULT
# 696 "data/maps/ParcelCoastBreakwater/scripts.pory"
	setflag FLAG_SKALD_Q_TINS
# 697 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_19:
# 701 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_5, MSGBOX_DEFAULT
# 702 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Sign::
# 710 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Sign_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_SignHouse::
# 714 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_SignHouse_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_ItemPPUp::
# 717 "data/maps/ParcelCoastBreakwater/scripts.pory"
	finditem ITEM_PP_UP
	end


ParcelCoastBreakwater_Dorsey::
# 721 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 722 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 723 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwater_Dorsey_2
# 728 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Dorsey_Text_1, MSGBOX_DEFAULT
# 729 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Dorsey_2:
# 724 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Dorsey_Text_0, MSGBOX_DEFAULT
# 725 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tins::
# 734 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_TINS, ParcelCoastBreakwater_Tins_2
# 737 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tins_Text_0, MSGBOX_SIGN
# 738 "data/maps/ParcelCoastBreakwater/scripts.pory"
	setflag FLAG_SKALD_Q_TINS_FOUND
	end

ParcelCoastBreakwater_Tins_2:
	end


ParcelCoastBreakwater_PairBeach::
# 745 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 746 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwater_PairBeach_2
# 751 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastBreakwater_PairBeach_3
# 756 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_7, MSGBOX_DEFAULT
# 757 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_8, MSGBOX_DEFAULT
# 758 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_9, MSGBOX_DEFAULT
# 759 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_10, MSGBOX_DEFAULT
ParcelCoastBreakwater_PairBeach_1:
# 761 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_PairBeach_2:
# 747 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_0, MSGBOX_DEFAULT
# 748 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_1, MSGBOX_DEFAULT
# 749 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_2, MSGBOX_DEFAULT
# 750 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_3, MSGBOX_DEFAULT
	goto ParcelCoastBreakwater_PairBeach_1

ParcelCoastBreakwater_PairBeach_3:
# 752 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_4, MSGBOX_DEFAULT
# 753 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_5, MSGBOX_DEFAULT
# 754 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_6, MSGBOX_DEFAULT
	goto ParcelCoastBreakwater_PairBeach_1


ParcelCoastBreakwater_Board1::
# 768 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Board1_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_Board2::
# 773 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Board2_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_PairWall::
# 780 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 781 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwater_PairWall_2
# 785 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastBreakwater_PairWall_3
# 790 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_6, MSGBOX_DEFAULT
# 791 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_7, MSGBOX_DEFAULT
# 792 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_8, MSGBOX_DEFAULT
# 793 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_9, MSGBOX_DEFAULT
ParcelCoastBreakwater_PairWall_1:
# 795 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_PairWall_2:
# 782 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_0, MSGBOX_DEFAULT
# 783 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_1, MSGBOX_DEFAULT
# 784 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_2, MSGBOX_DEFAULT
	goto ParcelCoastBreakwater_PairWall_1

ParcelCoastBreakwater_PairWall_3:
# 786 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_3, MSGBOX_DEFAULT
# 787 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_4, MSGBOX_DEFAULT
# 788 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_5, MSGBOX_DEFAULT
	goto ParcelCoastBreakwater_PairWall_1


ParcelCoastBreakwater_Board3::
# 802 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Board3_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_Spoil::
# 809 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Spoil_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_OuterBoard::
# 814 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_OuterBoard_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_Ansgar_Text_0:
# 15 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Off the boats a week. The\n"
	.string "quota review grounded us. Nothing to do\l"
	.string "but this. Battle.$"

ParcelCoastBreakwater_Ansgar_Text_1:
# 16 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: …Grounded again.$"

ParcelCoastBreakwater_Ansgar_Text_2:
# 31 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Season to season, HARLAND\n"
	.string "says. I say season to hearing to\l"
	.string "season.$"

ParcelCoastBreakwater_Ansgar_R2_Text_0:
# 42 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelCoastBreakwater_Ansgar_R2_Text_1:
# 44 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Fine. Same spot.$"

ParcelCoastBreakwater_Ansgar_R2_Text_2:
# 48 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Noted. Properly, this time.$"

ParcelCoastBreakwater_Ansgar_R2_Text_3:
# 49 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Ansgar_R3_Text_0:
# 56 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCoastBreakwater_Ansgar_R3_Text_1:
# 62 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: That's the one I wanted to see.$"

ParcelCoastBreakwater_Ansgar_R3_Text_2:
# 63 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Ansgar_R4_Text_0:
# 70 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCoastBreakwater_Ansgar_R4_Text_1:
# 76 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: …Again, then. Later.$"

ParcelCoastBreakwater_Ansgar_R4_Text_2:
# 77 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoastBreakwater_Ansgar_R5_Text_0:
# 84 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoastBreakwater_Ansgar_R5_Text_1:
# 90 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Right. That's the whole of it.$"

ParcelCoastBreakwater_Ansgar_R5_Text_2:
# 91 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoastBreakwater_Kasper_Text_0:
# 97 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Mum says the beach is fine to\n"
	.string "swim. The sign says don't. I can read.\l"
	.string "Battle!$"

ParcelCoastBreakwater_Kasper_Text_1:
# 98 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: …Mum was right.$"

ParcelCoastBreakwater_Kasper_Text_2:
# 113 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: The sign went up the week the\n"
	.string "cannery drum washed in. It's still up.$"

ParcelCoastBreakwater_Kasper_R2_Text_0:
# 124 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelCoastBreakwater_Kasper_R2_Text_1:
# 126 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: No hurry. The water keeps.$"

ParcelCoastBreakwater_Kasper_R2_Text_2:
# 130 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: …Fair.$"

ParcelCoastBreakwater_Kasper_R2_Text_3:
# 131 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoastBreakwater_Kasper_R3_Text_0:
# 138 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCoastBreakwater_Kasper_R3_Text_1:
# 145 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoastBreakwater_Kasper_R4_Text_0:
# 152 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCoastBreakwater_Kasper_R4_Text_1:
# 158 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Noted. Properly, this time.$"

ParcelCoastBreakwater_Kasper_R4_Text_2:
# 159 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoastBreakwater_Kasper_R5_Text_0:
# 166 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCoastBreakwater_Kasper_R5_Text_1:
# 172 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: That's the one I wanted to see.$"

ParcelCoastBreakwater_Kasper_R5_Text_2:
# 173 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoastBreakwater_Emma_Text_0:
# 179 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: I collect the tins. Seventeen\n"
	.string "with the crest. Fight me and I'll show\l"
	.string "you.$"

ParcelCoastBreakwater_Emma_Text_1:
# 180 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: …Eighteen, if you count that.$"

ParcelCoastBreakwater_Emma_Text_2:
# 195 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: The crest's the same as on the\n"
	.string "blankets. And the ferry. And the school\l"
	.string "roof.$"

ParcelCoastBreakwater_Emma_R2_Text_0:
# 206 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoastBreakwater_Emma_R2_Text_1:
# 208 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: Fine. Same spot.$"

ParcelCoastBreakwater_Emma_R2_Text_2:
# 212 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: …Again, then. Later.$"

ParcelCoastBreakwater_Emma_R2_Text_3:
# 213 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Emma_R3_Text_0:
# 220 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCoastBreakwater_Emma_R3_Text_1:
# 226 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: Right. That's the whole of it.$"

ParcelCoastBreakwater_Emma_R3_Text_2:
# 227 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Emma_R4_Text_0:
# 234 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCoastBreakwater_Emma_R4_Text_1:
# 241 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoastBreakwater_Emma_R5_Text_0:
# 248 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCoastBreakwater_Emma_R5_Text_1:
# 254 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: That's the one I wanted to see.$"

ParcelCoastBreakwater_Emma_R5_Text_2:
# 255 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCoastBreakwater_Vidar_Text_0:
# 261 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: Breakwater's MEREHOLT's. Beach\n"
	.string "is the town's. The line's about here.\l"
	.string "Battle on the line.$"

ParcelCoastBreakwater_Vidar_Text_1:
# 262 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: …Your side of the line.$"

ParcelCoastBreakwater_Vidar_Text_2:
# 277 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: They built the breakwater to\n"
	.string "shelter the boats. It silted the beach.\l"
	.string "Everything shelters something and\l"
	.string "silts something.$"

ParcelCoastBreakwater_Vidar_R2_Text_0:
# 288 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelCoastBreakwater_Vidar_R2_Text_1:
# 290 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: No hurry. The water keeps.$"

ParcelCoastBreakwater_Vidar_R2_Text_2:
# 294 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: Still yours.$"

ParcelCoastBreakwater_Vidar_R2_Text_3:
# 295 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Vidar_R3_Text_0:
# 302 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoastBreakwater_Vidar_R3_Text_1:
# 308 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: Right. That's the whole of it.$"

ParcelCoastBreakwater_Vidar_R3_Text_2:
# 309 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Vidar_R4_Text_0:
# 316 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoastBreakwater_Vidar_R4_Text_1:
# 323 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoastBreakwater_Vidar_R5_Text_0:
# 330 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoastBreakwater_Vidar_R5_Text_1:
# 337 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoastBreakwater_Linnea_Text_0:
# 343 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: We swim out to the island when\n"
	.string "the tide's low. The tide's never low now.\l"
	.string "Battle!$"

ParcelCoastBreakwater_Linnea_Text_1:
# 344 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: …High tide for you.$"

ParcelCoastBreakwater_Linnea_Text_2:
# 359 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Dad says the breakwater\n"
	.string "changed the tide. The sea doesn't ask\l"
	.string "permission either.$"

ParcelCoastBreakwater_Linnea_R2_Text_0:
# 370 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoastBreakwater_Linnea_R2_Text_1:
# 372 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCoastBreakwater_Linnea_R2_Text_2:
# 376 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: That's the one I wanted to see.$"

ParcelCoastBreakwater_Linnea_R2_Text_3:
# 377 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoastBreakwater_Linnea_R3_Text_0:
# 384 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelCoastBreakwater_Linnea_R3_Text_1:
# 390 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Noted. Properly, this time.$"

ParcelCoastBreakwater_Linnea_R3_Text_2:
# 391 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoastBreakwater_Linnea_R4_Text_0:
# 398 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoastBreakwater_Linnea_R4_Text_1:
# 404 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: …Fair.$"

ParcelCoastBreakwater_Linnea_R4_Text_2:
# 405 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoastBreakwater_Linnea_R5_Text_0:
# 412 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoastBreakwater_Linnea_R5_Text_1:
# 418 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Still yours.$"

ParcelCoastBreakwater_Linnea_R5_Text_2:
# 419 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoastBreakwater_Stig_Text_0:
# 425 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: The dredge line's out there. Below\n"
	.string "it, nothing. I swim above it. Battle,\l"
	.string "treading water.$"

ParcelCoastBreakwater_Stig_Text_1:
# 426 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: …Treading.$"

ParcelCoastBreakwater_Stig_Text_2:
# 441 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: Eleven fish, all the same length,\n"
	.string "HARLAND said. I've seen the length. It's\l"
	.string "the length of a tin.$"

ParcelCoastBreakwater_Stig_R2_Text_0:
# 452 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoastBreakwater_Stig_R2_Text_1:
# 454 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: No hurry. The water keeps.$"

ParcelCoastBreakwater_Stig_R2_Text_2:
# 458 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: Still yours.$"

ParcelCoastBreakwater_Stig_R2_Text_3:
# 459 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Stig_R3_Text_0:
# 466 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCoastBreakwater_Stig_R3_Text_1:
# 472 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: That's the one I wanted to see.$"

ParcelCoastBreakwater_Stig_R3_Text_2:
# 473 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Stig_R4_Text_0:
# 480 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCoastBreakwater_Stig_R4_Text_1:
# 487 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoastBreakwater_Stig_R5_Text_0:
# 494 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCoastBreakwater_Stig_R5_Text_1:
# 501 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCoastBreakwater_Tone_Text_0:
# 507 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: I swim to the far rock and back\n"
	.string "every day. The rock's getting further.\l"
	.string "Fight.$"

ParcelCoastBreakwater_Tone_Text_1:
# 508 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: …Further.$"

ParcelCoastBreakwater_Tone_Text_2:
# 523 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: It isn't moving. The water is. The\n"
	.string "water's moving all of us.$"

ParcelCoastBreakwater_Tone_R2_Text_0:
# 534 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoastBreakwater_Tone_R2_Text_1:
# 536 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: Another time, then.$"

ParcelCoastBreakwater_Tone_R2_Text_2:
# 540 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: …Again, then. Later.$"

ParcelCoastBreakwater_Tone_R2_Text_3:
# 541 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Tone_R3_Text_0:
# 548 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoastBreakwater_Tone_R3_Text_1:
# 555 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Tone_R4_Text_0:
# 562 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCoastBreakwater_Tone_R4_Text_1:
# 568 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: That's the one I wanted to see.$"

ParcelCoastBreakwater_Tone_R4_Text_2:
# 569 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoastBreakwater_Tone_R5_Text_0:
# 576 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCoastBreakwater_Tone_R5_Text_1:
# 582 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: Right. That's the whole of it.$"

ParcelCoastBreakwater_Tone_R5_Text_2:
# 583 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCoastBreakwater_Holger_Text_0:
# 589 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Nobody comes out here. The\n"
	.string "quota doesn't count what nobody sees.\l"
	.string "Battle, and then forget you saw me.$"

ParcelCoastBreakwater_Holger_Text_1:
# 590 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: …Forget it.$"

ParcelCoastBreakwater_Holger_Text_2:
# 605 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Four fish. Big ones. Written\n"
	.string "down? Then I'm in the review too. Fine.\l"
	.string "Put my name next to HARLAND's.$"

ParcelCoastBreakwater_Holger_R2_Text_0:
# 616 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelCoastBreakwater_Holger_R2_Text_1:
# 618 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: No hurry. The water keeps.$"

ParcelCoastBreakwater_Holger_R2_Text_2:
# 622 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: That's the one I wanted to see.$"

ParcelCoastBreakwater_Holger_R2_Text_3:
# 623 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Holger_R3_Text_0:
# 630 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelCoastBreakwater_Holger_R3_Text_1:
# 636 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Right. That's the whole of it.$"

ParcelCoastBreakwater_Holger_R3_Text_2:
# 637 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Holger_R4_Text_0:
# 644 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelCoastBreakwater_Holger_R4_Text_1:
# 651 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoastBreakwater_Holger_R5_Text_0:
# 658 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCoastBreakwater_Holger_R5_Text_1:
# 664 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Noted. Properly, this time.$"

ParcelCoastBreakwater_Holger_R5_Text_2:
# 665 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoastBreakwater_Beachcomber_Text_0:
# 673 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Thirty-one in chalk, and\n"
	.string "the tide took it, and I wrote it again.\l"
	.string "Twelve tins this winter. Fewer.\p"
	.string "Either they're dumping less or the sea's\n"
	.string "keeping more. I count what reaches me.$"

ParcelCoastBreakwater_Beachcomber_Text_1:
# 678 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Thirty-one. I've written\n"
	.string "it on the wall in chalk. The tide will\l"
	.string "have it by spring. That's all right. It\l"
	.string "was true in between.$"

ParcelCoastBreakwater_Beachcomber_Text_2:
# 683 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Thirty-one. I had\n"
	.string "twenty-nine. My eyes.\p"
	.string "Here. The FOUNDATION's own coin for the\n"
	.string "FOUNDATION's own tins. I find those\l"
	.string "too.$"

ParcelCoastBreakwater_Beachcomber_Text_3:
# 690 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: The rocks past the hut.\n"
	.string "Start at the wall end. Don't skip the\l"
	.string "crushed ones; crushed is still a tin.$"

ParcelCoastBreakwater_Beachcomber_Text_4:
# 695 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Count the line for me. My\n"
	.string "eyes aren't what they were and the\l"
	.string "CORPS girl's photograph is out of date.\p"
	.string "Start at the wall end, past the hut, and\n"
	.string "don't skip the crushed ones.$"

ParcelCoastBreakwater_Beachcomber_Text_5:
# 701 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Fewer tins this month.\n"
	.string "Three, with the crest. I lined them up\l"
	.string "anyway. A short line is still a line.\l"
	.string "Somebody should keep it.$"

ParcelCoastBreakwater_Beachcomber_Text_6:
# 705 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Every tide brings\n"
	.string "something with the crest on it. I line\l"
	.string "them up along the wall.\p"
	.string "The CORPS girl photographed the line\n"
	.string "for her file. It's longer now than in the\l"
	.string "photograph.$"

ParcelCoastBreakwater_Sign_Text_0:
# 710 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "MEREHOLT BREAKWATER. Beach closed to\n"
	.string "bathing pending water quality review.\l"
	.string "-- Harbour Office$"

ParcelCoastBreakwater_SignHouse_Text_0:
# 714 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "Lifeguard hut. Closed for the season.\n"
	.string "The season was last year.$"

ParcelCoastBreakwater_Dorsey_Text_0:
# 724 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DORSEY: The review kept the beach shut\n"
	.string "and reopened the breakwater side. Half\l"
	.string "a beach. I signed that too.\p"
	.string "First thing I've signed in years that\n"
	.string "I'd put my name on twice.$"

ParcelCoastBreakwater_Dorsey_Text_1:
# 728 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DORSEY: I come down here when the\n"
	.string "office is loud. The bathing sign is mine.\l"
	.string "I signed the closure.\p"
	.string "Nobody signs a beach open, RANGER. You\n"
	.string "only ever sign them shut.\p"
	.string "I keep a tin from this beach on my desk.\n"
	.string "Crest up. I tell visitors it's what we\l"
	.string "make. It's what washes back.$"

ParcelCoastBreakwater_Tins_Text_0:
# 737 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "Tins along the rock, crest up, each with\n"
	.string "a tide line of salt. Thirty-one. Two\l"
	.string "crushed flat, counted anyway.\p"
	.string "The newest still has its label.$"

ParcelCoastBreakwater_PairBeach_Text_0:
# 747 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: Dredge is stopped. I'm on\n"
	.string "the quay crew now.$"

ParcelCoastBreakwater_PairBeach_Text_1:
# 748 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "OLD LIFEGUARD: Then take the sign\n"
	.string "down. There's nothing to keep people\l"
	.string "off.$"

ParcelCoastBreakwater_PairBeach_Text_2:
# 749 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: The sea took the beach.\n"
	.string "The sign stays till the sea gives it\l"
	.string "back.$"

ParcelCoastBreakwater_PairBeach_Text_3:
# 750 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "OLD LIFEGUARD: …Fair. Put a date on the\n"
	.string "sign, then. People should know how long\l"
	.string "they've been waiting.$"

ParcelCoastBreakwater_PairBeach_Text_4:
# 752 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "OLD LIFEGUARD: The ranger walked the\n"
	.string "whole beach reading the line where the\l"
	.string "sand was. Didn't swim. Didn't need to.$"

ParcelCoastBreakwater_PairBeach_Text_5:
# 753 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: What's to read on a beach?$"

ParcelCoastBreakwater_PairBeach_Text_6:
# 754 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "OLD LIFEGUARD: The posts. The\n"
	.string "high-water mark three rows up the\l"
	.string "shingle from where it used to be. Krabby\l"
	.string "burrows with the roofs off. A beach is a\l"
	.string "page if you were ever taught letters.$"

ParcelCoastBreakwater_PairBeach_Text_7:
# 756 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: Beach is closed. Sign says\n"
	.string "so.$"

ParcelCoastBreakwater_PairBeach_Text_8:
# 757 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "OLD LIFEGUARD: I know what the sign\n"
	.string "says. I put the first one up, before the\l"
	.string "sand went. Said no swimming on the\l"
	.string "dredge days.$"

ParcelCoastBreakwater_PairBeach_Text_9:
# 758 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: Now it's every day.$"

ParcelCoastBreakwater_PairBeach_Text_10:
# 759 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "OLD LIFEGUARD: Now there's no sand to\n"
	.string "swim from. The breakwater you built\l"
	.string "took it. You can't close a beach that's\l"
	.string "already gone; you can only put a sign\l"
	.string "where it was.$"

ParcelCoastBreakwater_Board1_Text_0:
# 768 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "A SURVEY BOARD on the breakwater,\n"
	.string "salt-eaten. WAILMER calve in the bay in\l"
	.string "the cold months, and the spoil from the\l"
	.string "dredge is dumped where they calve.\p"
	.string "Calves seen from the end of the wall: 6,\n"
	.string "5, 5, 2, 0, 1. The dumping is on a licence.\l"
	.string "The board reproduces the licence\l"
	.string "number.$"

ParcelCoastBreakwater_Board2_Text_0:
# 773 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "A SURVEY BOARD facing the sea. CORSOLA\n"
	.string "on the old wall's foot, the only hard\l"
	.string "ground the dredge cannot reach. Pink in\l"
	.string "the clean years, white in the warm ones.\p"
	.string "The board is a colour chart: a square\n"
	.string "painted each summer. Read it from the\l"
	.string "left.$"

ParcelCoastBreakwater_PairWall_Text_0:
# 782 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: Dredge is parked. I'm on\n"
	.string "the review's crew, counting what comes\l"
	.string "back on the bottom.$"

ParcelCoastBreakwater_PairWall_Text_1:
# 783 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "NETMENDER: What comes back?$"

ParcelCoastBreakwater_PairWall_Text_2:
# 784 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: Mussels. Weed. A CORSOLA,\n"
	.string "pink, which the inspector made me\l"
	.string "photograph. I used to move that bottom\l"
	.string "a thousand tonnes a day. Now I\l"
	.string "photograph it.$"

ParcelCoastBreakwater_PairWall_Text_3:
# 786 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "NETMENDER: The ranger walked the wall\n"
	.string "to the end and counted the calves. Two.$"

ParcelCoastBreakwater_PairWall_Text_4:
# 787 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: Two's not many.$"

ParcelCoastBreakwater_PairWall_Text_5:
# 788 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "NETMENDER: Two's two more than the\n"
	.string "licence knows about. It's in a book now,\l"
	.string "with the licence number beside it.$"

ParcelCoastBreakwater_PairWall_Text_6:
# 790 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: Spoil run at six. Same as\n"
	.string "every morning.$"

ParcelCoastBreakwater_PairWall_Text_7:
# 791 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "NETMENDER: Same as every morning for\n"
	.string "the WAILMER, too. They calve where you\l"
	.string "dump.$"

ParcelCoastBreakwater_PairWall_Text_8:
# 792 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: I dump where the licence\n"
	.string "says.$"

ParcelCoastBreakwater_PairWall_Text_9:
# 793 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "NETMENDER: The licence has a number.\n"
	.string "The calves don't. That's the whole\l"
	.string "argument, and you've just had it.$"

ParcelCoastBreakwater_Board3_Text_0:
# 802 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "A SURVEY BOARD at the breakwater's\n"
	.string "root. TENTACOOL in the shallows below,\l"
	.string "more every warm year, the board says,\l"
	.string "and KRABBY fewer. The board gives both\l"
	.string "lines and lets them cross.\p"
	.string "Where they cross is a date. The date\n"
	.string "has a tide written beside it, as if the\l"
	.string "Survey wanted the hour too.$"

ParcelCoastBreakwater_Spoil_Text_0:
# 809 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "MEREHOLT HARBOUR WORKS. Dredge spoil.\n"
	.string "Licensed disposal site.\p"
	.string "The licence number is the one the board\n"
	.string "at the end of the wall gives. KRABBY\l"
	.string "have dug into the bank. They are the\l"
	.string "only thing on it that chose to be here.$"

ParcelCoastBreakwater_OuterBoard_Text_0:
# 814 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "A board on the outer bar, facing the\n"
	.string "open water. No crest and no number.\l"
	.string "Painted by hand:\p"
	.string "THEY CALVE HERE. GO ROUND.$"
