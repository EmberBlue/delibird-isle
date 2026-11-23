ParcelCoastBreakwater_MapScripts::
	.byte 0


ParcelCoastBreakwater_Ansgar::
# 12 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_ANSGAR, ParcelCoastBreakwater_Ansgar_Text_0, ParcelCoastBreakwater_Ansgar_Text_1, ParcelCoastBreakwater_Ansgar_FirstWin
# 16 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 17 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Ansgar_3
ParcelCoastBreakwater_Ansgar_1:
# 20 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Ansgar_8
ParcelCoastBreakwater_Ansgar_6:
# 23 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Ansgar_13
ParcelCoastBreakwater_Ansgar_11:
# 26 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Ansgar_18
ParcelCoastBreakwater_Ansgar_16:
# 29 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Ansgar_2:
# 18 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Ansgar_R2
	goto ParcelCoastBreakwater_Ansgar_1

ParcelCoastBreakwater_Ansgar_3:
# 17 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_ANSGAR_R2
	goto_if 0, ParcelCoastBreakwater_Ansgar_2
	goto ParcelCoastBreakwater_Ansgar_1

ParcelCoastBreakwater_Ansgar_7:
# 21 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Ansgar_R3
	goto ParcelCoastBreakwater_Ansgar_6

ParcelCoastBreakwater_Ansgar_8:
# 20 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_ANSGAR_R3
	goto_if 0, ParcelCoastBreakwater_Ansgar_7
	goto ParcelCoastBreakwater_Ansgar_6

ParcelCoastBreakwater_Ansgar_12:
# 24 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Ansgar_R4
	goto ParcelCoastBreakwater_Ansgar_11

ParcelCoastBreakwater_Ansgar_13:
# 23 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_ANSGAR_R4
	goto_if 0, ParcelCoastBreakwater_Ansgar_12
	goto ParcelCoastBreakwater_Ansgar_11

ParcelCoastBreakwater_Ansgar_17:
# 27 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Ansgar_R5
	goto ParcelCoastBreakwater_Ansgar_16

ParcelCoastBreakwater_Ansgar_18:
# 26 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_ANSGAR_R5
	goto_if 0, ParcelCoastBreakwater_Ansgar_17
	goto ParcelCoastBreakwater_Ansgar_16


ParcelCoastBreakwater_Ansgar_FirstWin::
# 33 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_Text_2, MSGBOX_DEFAULT
# 34 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Ansgar_R2::
# 38 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 39 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 40 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_0, MSGBOX_YESNO
# 41 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Ansgar_R2_2
# 46 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_ANSGAR_R2, ParcelCoastBreakwater_Ansgar_R2_Text_2
# 47 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_3, MSGBOX_DEFAULT
# 48 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Ansgar_R2_2:
# 42 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_1, MSGBOX_DEFAULT
# 43 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Ansgar_R3::
# 52 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 53 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 54 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R3_Text_0, MSGBOX_YESNO
# 55 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Ansgar_R3_2
# 60 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_ANSGAR_R3, ParcelCoastBreakwater_Ansgar_R3_Text_1
# 61 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R3_Text_2, MSGBOX_DEFAULT
# 62 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Ansgar_R3_2:
# 56 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_1, MSGBOX_DEFAULT
# 57 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Ansgar_R4::
# 66 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 67 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 68 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R4_Text_0, MSGBOX_YESNO
# 69 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Ansgar_R4_2
# 74 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_ANSGAR_R4, ParcelCoastBreakwater_Ansgar_R4_Text_1
# 75 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R4_Text_2, MSGBOX_DEFAULT
# 76 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Ansgar_R4_2:
# 70 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_1, MSGBOX_DEFAULT
# 71 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Ansgar_R5::
# 80 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 81 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 82 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R5_Text_0, MSGBOX_YESNO
# 83 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Ansgar_R5_2
# 88 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_ANSGAR_R5, ParcelCoastBreakwater_Ansgar_R5_Text_1
# 89 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R5_Text_2, MSGBOX_DEFAULT
# 90 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Ansgar_R5_2:
# 84 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Ansgar_R2_Text_1, MSGBOX_DEFAULT
# 85 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Kasper::
# 94 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_KASPER, ParcelCoastBreakwater_Kasper_Text_0, ParcelCoastBreakwater_Kasper_Text_1, ParcelCoastBreakwater_Kasper_FirstWin
# 98 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 99 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Kasper_3
ParcelCoastBreakwater_Kasper_1:
# 102 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Kasper_8
ParcelCoastBreakwater_Kasper_6:
# 105 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Kasper_13
ParcelCoastBreakwater_Kasper_11:
# 108 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Kasper_18
ParcelCoastBreakwater_Kasper_16:
# 111 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Kasper_2:
# 100 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Kasper_R2
	goto ParcelCoastBreakwater_Kasper_1

ParcelCoastBreakwater_Kasper_3:
# 99 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_KASPER_R2
	goto_if 0, ParcelCoastBreakwater_Kasper_2
	goto ParcelCoastBreakwater_Kasper_1

ParcelCoastBreakwater_Kasper_7:
# 103 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Kasper_R3
	goto ParcelCoastBreakwater_Kasper_6

ParcelCoastBreakwater_Kasper_8:
# 102 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_KASPER_R3
	goto_if 0, ParcelCoastBreakwater_Kasper_7
	goto ParcelCoastBreakwater_Kasper_6

ParcelCoastBreakwater_Kasper_12:
# 106 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Kasper_R4
	goto ParcelCoastBreakwater_Kasper_11

ParcelCoastBreakwater_Kasper_13:
# 105 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_KASPER_R4
	goto_if 0, ParcelCoastBreakwater_Kasper_12
	goto ParcelCoastBreakwater_Kasper_11

ParcelCoastBreakwater_Kasper_17:
# 109 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Kasper_R5
	goto ParcelCoastBreakwater_Kasper_16

ParcelCoastBreakwater_Kasper_18:
# 108 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_KASPER_R5
	goto_if 0, ParcelCoastBreakwater_Kasper_17
	goto ParcelCoastBreakwater_Kasper_16


ParcelCoastBreakwater_Kasper_FirstWin::
# 115 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_Text_2, MSGBOX_DEFAULT
# 116 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Kasper_R2::
# 120 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 121 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 122 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_0, MSGBOX_YESNO
# 123 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Kasper_R2_2
# 128 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_KASPER_R2, ParcelCoastBreakwater_Kasper_R2_Text_2
# 129 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_3, MSGBOX_DEFAULT
# 130 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Kasper_R2_2:
# 124 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_1, MSGBOX_DEFAULT
# 125 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Kasper_R3::
# 134 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 135 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 136 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R3_Text_0, MSGBOX_YESNO
# 137 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Kasper_R3_2
# 142 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_KASPER_R3, ParcelCoastBreakwater_Kasper_R2_Text_2
# 143 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R3_Text_1, MSGBOX_DEFAULT
# 144 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Kasper_R3_2:
# 138 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_1, MSGBOX_DEFAULT
# 139 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Kasper_R4::
# 148 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 149 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 150 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R4_Text_0, MSGBOX_YESNO
# 151 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Kasper_R4_2
# 156 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_KASPER_R4, ParcelCoastBreakwater_Kasper_R4_Text_1
# 157 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R4_Text_2, MSGBOX_DEFAULT
# 158 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Kasper_R4_2:
# 152 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_1, MSGBOX_DEFAULT
# 153 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Kasper_R5::
# 162 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 163 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 164 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R5_Text_0, MSGBOX_YESNO
# 165 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Kasper_R5_2
# 170 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_KASPER_R5, ParcelCoastBreakwater_Kasper_R5_Text_1
# 171 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R5_Text_2, MSGBOX_DEFAULT
# 172 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Kasper_R5_2:
# 166 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Kasper_R2_Text_1, MSGBOX_DEFAULT
# 167 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Emma::
# 176 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_EMMA, ParcelCoastBreakwater_Emma_Text_0, ParcelCoastBreakwater_Emma_Text_1, ParcelCoastBreakwater_Emma_FirstWin
# 180 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 181 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Emma_3
ParcelCoastBreakwater_Emma_1:
# 184 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Emma_8
ParcelCoastBreakwater_Emma_6:
# 187 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Emma_13
ParcelCoastBreakwater_Emma_11:
# 190 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Emma_18
ParcelCoastBreakwater_Emma_16:
# 193 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Emma_2:
# 182 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Emma_R2
	goto ParcelCoastBreakwater_Emma_1

ParcelCoastBreakwater_Emma_3:
# 181 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_EMMA_R2
	goto_if 0, ParcelCoastBreakwater_Emma_2
	goto ParcelCoastBreakwater_Emma_1

ParcelCoastBreakwater_Emma_7:
# 185 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Emma_R3
	goto ParcelCoastBreakwater_Emma_6

ParcelCoastBreakwater_Emma_8:
# 184 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_EMMA_R3
	goto_if 0, ParcelCoastBreakwater_Emma_7
	goto ParcelCoastBreakwater_Emma_6

ParcelCoastBreakwater_Emma_12:
# 188 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Emma_R4
	goto ParcelCoastBreakwater_Emma_11

ParcelCoastBreakwater_Emma_13:
# 187 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_EMMA_R4
	goto_if 0, ParcelCoastBreakwater_Emma_12
	goto ParcelCoastBreakwater_Emma_11

ParcelCoastBreakwater_Emma_17:
# 191 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Emma_R5
	goto ParcelCoastBreakwater_Emma_16

ParcelCoastBreakwater_Emma_18:
# 190 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_EMMA_R5
	goto_if 0, ParcelCoastBreakwater_Emma_17
	goto ParcelCoastBreakwater_Emma_16


ParcelCoastBreakwater_Emma_FirstWin::
# 197 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_Text_2, MSGBOX_DEFAULT
# 198 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Emma_R2::
# 202 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 203 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 204 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_0, MSGBOX_YESNO
# 205 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Emma_R2_2
# 210 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_EMMA_R2, ParcelCoastBreakwater_Emma_R2_Text_2
# 211 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_3, MSGBOX_DEFAULT
# 212 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Emma_R2_2:
# 206 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_1, MSGBOX_DEFAULT
# 207 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Emma_R3::
# 216 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 217 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 218 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R3_Text_0, MSGBOX_YESNO
# 219 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Emma_R3_2
# 224 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_EMMA_R3, ParcelCoastBreakwater_Emma_R3_Text_1
# 225 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R3_Text_2, MSGBOX_DEFAULT
# 226 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Emma_R3_2:
# 220 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_1, MSGBOX_DEFAULT
# 221 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Emma_R4::
# 230 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 231 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 232 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R4_Text_0, MSGBOX_YESNO
# 233 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Emma_R4_2
# 238 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_EMMA_R4, ParcelCoastBreakwater_Emma_R3_Text_1
# 239 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R4_Text_1, MSGBOX_DEFAULT
# 240 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Emma_R4_2:
# 234 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_1, MSGBOX_DEFAULT
# 235 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Emma_R5::
# 244 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 245 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 246 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R5_Text_0, MSGBOX_YESNO
# 247 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Emma_R5_2
# 252 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_EMMA_R5, ParcelCoastBreakwater_Emma_R5_Text_1
# 253 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R5_Text_2, MSGBOX_DEFAULT
# 254 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Emma_R5_2:
# 248 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Emma_R2_Text_1, MSGBOX_DEFAULT
# 249 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Vidar::
# 258 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_VIDAR, ParcelCoastBreakwater_Vidar_Text_0, ParcelCoastBreakwater_Vidar_Text_1, ParcelCoastBreakwater_Vidar_FirstWin
# 262 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 263 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Vidar_3
ParcelCoastBreakwater_Vidar_1:
# 266 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Vidar_8
ParcelCoastBreakwater_Vidar_6:
# 269 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Vidar_13
ParcelCoastBreakwater_Vidar_11:
# 272 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Vidar_18
ParcelCoastBreakwater_Vidar_16:
# 275 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Vidar_2:
# 264 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Vidar_R2
	goto ParcelCoastBreakwater_Vidar_1

ParcelCoastBreakwater_Vidar_3:
# 263 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_VIDAR_R2
	goto_if 0, ParcelCoastBreakwater_Vidar_2
	goto ParcelCoastBreakwater_Vidar_1

ParcelCoastBreakwater_Vidar_7:
# 267 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Vidar_R3
	goto ParcelCoastBreakwater_Vidar_6

ParcelCoastBreakwater_Vidar_8:
# 266 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_VIDAR_R3
	goto_if 0, ParcelCoastBreakwater_Vidar_7
	goto ParcelCoastBreakwater_Vidar_6

ParcelCoastBreakwater_Vidar_12:
# 270 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Vidar_R4
	goto ParcelCoastBreakwater_Vidar_11

ParcelCoastBreakwater_Vidar_13:
# 269 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_VIDAR_R4
	goto_if 0, ParcelCoastBreakwater_Vidar_12
	goto ParcelCoastBreakwater_Vidar_11

ParcelCoastBreakwater_Vidar_17:
# 273 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Vidar_R5
	goto ParcelCoastBreakwater_Vidar_16

ParcelCoastBreakwater_Vidar_18:
# 272 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_VIDAR_R5
	goto_if 0, ParcelCoastBreakwater_Vidar_17
	goto ParcelCoastBreakwater_Vidar_16


ParcelCoastBreakwater_Vidar_FirstWin::
# 279 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_Text_2, MSGBOX_DEFAULT
# 280 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Vidar_R2::
# 284 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 285 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 286 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_0, MSGBOX_YESNO
# 287 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Vidar_R2_2
# 292 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_VIDAR_R2, ParcelCoastBreakwater_Vidar_R2_Text_2
# 293 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_3, MSGBOX_DEFAULT
# 294 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Vidar_R2_2:
# 288 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 289 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Vidar_R3::
# 298 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 299 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 300 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R3_Text_0, MSGBOX_YESNO
# 301 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Vidar_R3_2
# 306 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_VIDAR_R3, ParcelCoastBreakwater_Vidar_R3_Text_1
# 307 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R3_Text_2, MSGBOX_DEFAULT
# 308 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Vidar_R3_2:
# 302 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 303 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Vidar_R4::
# 312 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 313 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 314 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R4_Text_0, MSGBOX_YESNO
# 315 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Vidar_R4_2
# 320 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_VIDAR_R4, ParcelCoastBreakwater_Vidar_R3_Text_1
# 321 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R4_Text_1, MSGBOX_DEFAULT
# 322 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Vidar_R4_2:
# 316 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 317 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Vidar_R5::
# 326 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 327 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 328 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R5_Text_0, MSGBOX_YESNO
# 329 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Vidar_R5_2
# 334 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_VIDAR_R5, ParcelCoastBreakwater_Vidar_R3_Text_1
# 335 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R5_Text_1, MSGBOX_DEFAULT
# 336 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Vidar_R5_2:
# 330 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Vidar_R2_Text_1, MSGBOX_DEFAULT
# 331 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Linnea::
# 340 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_LINNEA, ParcelCoastBreakwater_Linnea_Text_0, ParcelCoastBreakwater_Linnea_Text_1, ParcelCoastBreakwater_Linnea_FirstWin
# 344 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 345 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Linnea_3
ParcelCoastBreakwater_Linnea_1:
# 348 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Linnea_8
ParcelCoastBreakwater_Linnea_6:
# 351 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Linnea_13
ParcelCoastBreakwater_Linnea_11:
# 354 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Linnea_18
ParcelCoastBreakwater_Linnea_16:
# 357 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Linnea_2:
# 346 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Linnea_R2
	goto ParcelCoastBreakwater_Linnea_1

ParcelCoastBreakwater_Linnea_3:
# 345 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_LINNEA_R2
	goto_if 0, ParcelCoastBreakwater_Linnea_2
	goto ParcelCoastBreakwater_Linnea_1

ParcelCoastBreakwater_Linnea_7:
# 349 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Linnea_R3
	goto ParcelCoastBreakwater_Linnea_6

ParcelCoastBreakwater_Linnea_8:
# 348 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_LINNEA_R3
	goto_if 0, ParcelCoastBreakwater_Linnea_7
	goto ParcelCoastBreakwater_Linnea_6

ParcelCoastBreakwater_Linnea_12:
# 352 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Linnea_R4
	goto ParcelCoastBreakwater_Linnea_11

ParcelCoastBreakwater_Linnea_13:
# 351 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_LINNEA_R4
	goto_if 0, ParcelCoastBreakwater_Linnea_12
	goto ParcelCoastBreakwater_Linnea_11

ParcelCoastBreakwater_Linnea_17:
# 355 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Linnea_R5
	goto ParcelCoastBreakwater_Linnea_16

ParcelCoastBreakwater_Linnea_18:
# 354 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_LINNEA_R5
	goto_if 0, ParcelCoastBreakwater_Linnea_17
	goto ParcelCoastBreakwater_Linnea_16


ParcelCoastBreakwater_Linnea_FirstWin::
# 361 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_Text_2, MSGBOX_DEFAULT
# 362 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Linnea_R2::
# 366 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 367 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 368 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_0, MSGBOX_YESNO
# 369 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Linnea_R2_2
# 374 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_LINNEA_R2, ParcelCoastBreakwater_Linnea_R2_Text_2
# 375 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_3, MSGBOX_DEFAULT
# 376 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Linnea_R2_2:
# 370 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_1, MSGBOX_DEFAULT
# 371 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Linnea_R3::
# 380 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 381 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 382 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R3_Text_0, MSGBOX_YESNO
# 383 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Linnea_R3_2
# 388 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_LINNEA_R3, ParcelCoastBreakwater_Linnea_R3_Text_1
# 389 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R3_Text_2, MSGBOX_DEFAULT
# 390 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Linnea_R3_2:
# 384 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_1, MSGBOX_DEFAULT
# 385 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Linnea_R4::
# 394 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 395 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 396 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R4_Text_0, MSGBOX_YESNO
# 397 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Linnea_R4_2
# 402 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_LINNEA_R4, ParcelCoastBreakwater_Linnea_R4_Text_1
# 403 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R4_Text_2, MSGBOX_DEFAULT
# 404 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Linnea_R4_2:
# 398 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_1, MSGBOX_DEFAULT
# 399 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Linnea_R5::
# 408 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 409 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 410 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R5_Text_0, MSGBOX_YESNO
# 411 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Linnea_R5_2
# 416 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_LINNEA_R5, ParcelCoastBreakwater_Linnea_R5_Text_1
# 417 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R5_Text_2, MSGBOX_DEFAULT
# 418 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Linnea_R5_2:
# 412 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Linnea_R2_Text_1, MSGBOX_DEFAULT
# 413 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Stig::
# 422 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_STIG, ParcelCoastBreakwater_Stig_Text_0, ParcelCoastBreakwater_Stig_Text_1, ParcelCoastBreakwater_Stig_FirstWin
# 426 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 427 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Stig_3
ParcelCoastBreakwater_Stig_1:
# 430 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Stig_8
ParcelCoastBreakwater_Stig_6:
# 433 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Stig_13
ParcelCoastBreakwater_Stig_11:
# 436 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Stig_18
ParcelCoastBreakwater_Stig_16:
# 439 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Stig_2:
# 428 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Stig_R2
	goto ParcelCoastBreakwater_Stig_1

ParcelCoastBreakwater_Stig_3:
# 427 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_STIG_R2
	goto_if 0, ParcelCoastBreakwater_Stig_2
	goto ParcelCoastBreakwater_Stig_1

ParcelCoastBreakwater_Stig_7:
# 431 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Stig_R3
	goto ParcelCoastBreakwater_Stig_6

ParcelCoastBreakwater_Stig_8:
# 430 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_STIG_R3
	goto_if 0, ParcelCoastBreakwater_Stig_7
	goto ParcelCoastBreakwater_Stig_6

ParcelCoastBreakwater_Stig_12:
# 434 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Stig_R4
	goto ParcelCoastBreakwater_Stig_11

ParcelCoastBreakwater_Stig_13:
# 433 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_STIG_R4
	goto_if 0, ParcelCoastBreakwater_Stig_12
	goto ParcelCoastBreakwater_Stig_11

ParcelCoastBreakwater_Stig_17:
# 437 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Stig_R5
	goto ParcelCoastBreakwater_Stig_16

ParcelCoastBreakwater_Stig_18:
# 436 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_STIG_R5
	goto_if 0, ParcelCoastBreakwater_Stig_17
	goto ParcelCoastBreakwater_Stig_16


ParcelCoastBreakwater_Stig_FirstWin::
# 443 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_Text_2, MSGBOX_DEFAULT
# 444 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Stig_R2::
# 448 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 449 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 450 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_0, MSGBOX_YESNO
# 451 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Stig_R2_2
# 456 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_STIG_R2, ParcelCoastBreakwater_Stig_R2_Text_2
# 457 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_3, MSGBOX_DEFAULT
# 458 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Stig_R2_2:
# 452 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_1, MSGBOX_DEFAULT
# 453 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Stig_R3::
# 462 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 463 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 464 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R3_Text_0, MSGBOX_YESNO
# 465 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Stig_R3_2
# 470 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_STIG_R3, ParcelCoastBreakwater_Stig_R3_Text_1
# 471 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R3_Text_2, MSGBOX_DEFAULT
# 472 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Stig_R3_2:
# 466 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_1, MSGBOX_DEFAULT
# 467 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Stig_R4::
# 476 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 477 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 478 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R4_Text_0, MSGBOX_YESNO
# 479 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Stig_R4_2
# 484 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_STIG_R4, ParcelCoastBreakwater_Stig_R3_Text_1
# 485 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R4_Text_1, MSGBOX_DEFAULT
# 486 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Stig_R4_2:
# 480 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_1, MSGBOX_DEFAULT
# 481 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Stig_R5::
# 490 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 491 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 492 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R5_Text_0, MSGBOX_YESNO
# 493 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Stig_R5_2
# 498 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_STIG_R5, ParcelCoastBreakwater_Stig_R2_Text_2
# 499 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R5_Text_1, MSGBOX_DEFAULT
# 500 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Stig_R5_2:
# 494 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Stig_R2_Text_1, MSGBOX_DEFAULT
# 495 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tone::
# 504 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_TONE, ParcelCoastBreakwater_Tone_Text_0, ParcelCoastBreakwater_Tone_Text_1, ParcelCoastBreakwater_Tone_FirstWin
# 508 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 509 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Tone_3
ParcelCoastBreakwater_Tone_1:
# 512 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Tone_8
ParcelCoastBreakwater_Tone_6:
# 515 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Tone_13
ParcelCoastBreakwater_Tone_11:
# 518 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Tone_18
ParcelCoastBreakwater_Tone_16:
# 521 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Tone_2:
# 510 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Tone_R2
	goto ParcelCoastBreakwater_Tone_1

ParcelCoastBreakwater_Tone_3:
# 509 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_TONE_R2
	goto_if 0, ParcelCoastBreakwater_Tone_2
	goto ParcelCoastBreakwater_Tone_1

ParcelCoastBreakwater_Tone_7:
# 513 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Tone_R3
	goto ParcelCoastBreakwater_Tone_6

ParcelCoastBreakwater_Tone_8:
# 512 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_TONE_R3
	goto_if 0, ParcelCoastBreakwater_Tone_7
	goto ParcelCoastBreakwater_Tone_6

ParcelCoastBreakwater_Tone_12:
# 516 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Tone_R4
	goto ParcelCoastBreakwater_Tone_11

ParcelCoastBreakwater_Tone_13:
# 515 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_TONE_R4
	goto_if 0, ParcelCoastBreakwater_Tone_12
	goto ParcelCoastBreakwater_Tone_11

ParcelCoastBreakwater_Tone_17:
# 519 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Tone_R5
	goto ParcelCoastBreakwater_Tone_16

ParcelCoastBreakwater_Tone_18:
# 518 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_TONE_R5
	goto_if 0, ParcelCoastBreakwater_Tone_17
	goto ParcelCoastBreakwater_Tone_16


ParcelCoastBreakwater_Tone_FirstWin::
# 525 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_Text_2, MSGBOX_DEFAULT
# 526 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tone_R2::
# 530 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 531 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 532 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_0, MSGBOX_YESNO
# 533 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Tone_R2_2
# 538 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_TONE_R2, ParcelCoastBreakwater_Tone_R2_Text_2
# 539 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_3, MSGBOX_DEFAULT
# 540 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Tone_R2_2:
# 534 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_1, MSGBOX_DEFAULT
# 535 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tone_R3::
# 544 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 545 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 546 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R3_Text_0, MSGBOX_YESNO
# 547 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Tone_R3_2
# 552 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_TONE_R3, ParcelCoastBreakwater_Tone_R2_Text_2
# 553 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R3_Text_1, MSGBOX_DEFAULT
# 554 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Tone_R3_2:
# 548 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_1, MSGBOX_DEFAULT
# 549 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tone_R4::
# 558 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 559 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 560 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R4_Text_0, MSGBOX_YESNO
# 561 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Tone_R4_2
# 566 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_TONE_R4, ParcelCoastBreakwater_Tone_R4_Text_1
# 567 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R4_Text_2, MSGBOX_DEFAULT
# 568 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Tone_R4_2:
# 562 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_1, MSGBOX_DEFAULT
# 563 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tone_R5::
# 572 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 573 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 574 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R5_Text_0, MSGBOX_YESNO
# 575 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Tone_R5_2
# 580 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_TONE_R5, ParcelCoastBreakwater_Tone_R5_Text_1
# 581 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R5_Text_2, MSGBOX_DEFAULT
# 582 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Tone_R5_2:
# 576 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tone_R2_Text_1, MSGBOX_DEFAULT
# 577 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Holger::
# 586 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BRK_HOLGER, ParcelCoastBreakwater_Holger_Text_0, ParcelCoastBreakwater_Holger_Text_1, ParcelCoastBreakwater_Holger_FirstWin
# 590 "data/maps/ParcelCoastBreakwater/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 591 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCoastBreakwater_Holger_3
ParcelCoastBreakwater_Holger_1:
# 594 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCoastBreakwater_Holger_8
ParcelCoastBreakwater_Holger_6:
# 597 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCoastBreakwater_Holger_13
ParcelCoastBreakwater_Holger_11:
# 600 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCoastBreakwater_Holger_18
ParcelCoastBreakwater_Holger_16:
# 603 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_Text_2, MSGBOX_DEFAULT
	end

ParcelCoastBreakwater_Holger_2:
# 592 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Holger_R2
	goto ParcelCoastBreakwater_Holger_1

ParcelCoastBreakwater_Holger_3:
# 591 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_HOLGER_R2
	goto_if 0, ParcelCoastBreakwater_Holger_2
	goto ParcelCoastBreakwater_Holger_1

ParcelCoastBreakwater_Holger_7:
# 595 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Holger_R3
	goto ParcelCoastBreakwater_Holger_6

ParcelCoastBreakwater_Holger_8:
# 594 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_HOLGER_R3
	goto_if 0, ParcelCoastBreakwater_Holger_7
	goto ParcelCoastBreakwater_Holger_6

ParcelCoastBreakwater_Holger_12:
# 598 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Holger_R4
	goto ParcelCoastBreakwater_Holger_11

ParcelCoastBreakwater_Holger_13:
# 597 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_HOLGER_R4
	goto_if 0, ParcelCoastBreakwater_Holger_12
	goto ParcelCoastBreakwater_Holger_11

ParcelCoastBreakwater_Holger_17:
# 601 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto ParcelCoastBreakwater_Holger_R5
	goto ParcelCoastBreakwater_Holger_16

ParcelCoastBreakwater_Holger_18:
# 600 "data/maps/ParcelCoastBreakwater/scripts.pory"
	checktrainerflag TRAINER_SKALD_BRK_HOLGER_R5
	goto_if 0, ParcelCoastBreakwater_Holger_17
	goto ParcelCoastBreakwater_Holger_16


ParcelCoastBreakwater_Holger_FirstWin::
# 607 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_Text_2, MSGBOX_DEFAULT
# 608 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Holger_R2::
# 612 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 613 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 614 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_0, MSGBOX_YESNO
# 615 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Holger_R2_2
# 620 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_HOLGER_R2, ParcelCoastBreakwater_Holger_R2_Text_2
# 621 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_3, MSGBOX_DEFAULT
# 622 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Holger_R2_2:
# 616 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_1, MSGBOX_DEFAULT
# 617 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Holger_R3::
# 626 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 627 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 628 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R3_Text_0, MSGBOX_YESNO
# 629 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Holger_R3_2
# 634 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_HOLGER_R3, ParcelCoastBreakwater_Holger_R3_Text_1
# 635 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R3_Text_2, MSGBOX_DEFAULT
# 636 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Holger_R3_2:
# 630 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_1, MSGBOX_DEFAULT
# 631 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Holger_R4::
# 640 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 641 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 642 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R4_Text_0, MSGBOX_YESNO
# 643 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Holger_R4_2
# 648 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_HOLGER_R4, ParcelCoastBreakwater_Holger_R3_Text_1
# 649 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R4_Text_1, MSGBOX_DEFAULT
# 650 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Holger_R4_2:
# 644 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_1, MSGBOX_DEFAULT
# 645 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Holger_R5::
# 654 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 655 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 656 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R5_Text_0, MSGBOX_YESNO
# 657 "data/maps/ParcelCoastBreakwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastBreakwater_Holger_R5_2
# 662 "data/maps/ParcelCoastBreakwater/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BRK_HOLGER_R5, ParcelCoastBreakwater_Holger_R5_Text_1
# 663 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R5_Text_2, MSGBOX_DEFAULT
# 664 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Holger_R5_2:
# 658 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Holger_R2_Text_1, MSGBOX_DEFAULT
# 659 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Beachcomber::
# 668 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 669 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 670 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCoastBreakwater_Beachcomber_3
ParcelCoastBreakwater_Beachcomber_1:
# 675 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TINS_DONE, ParcelCoastBreakwater_Beachcomber_7
# 680 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TINS_FOUND, ParcelCoastBreakwater_Beachcomber_10
# 687 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TINS, ParcelCoastBreakwater_Beachcomber_13
# 692 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COAST_ARRIVAL, ParcelCoastBreakwater_Beachcomber_16
# 698 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwater_Beachcomber_19
# 703 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_6, MSGBOX_DEFAULT
# 704 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_2:
# 671 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_0, MSGBOX_DEFAULT
# 672 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_3:
# 670 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALD_Q_TINS_DONE, ParcelCoastBreakwater_Beachcomber_2
	goto ParcelCoastBreakwater_Beachcomber_1

ParcelCoastBreakwater_Beachcomber_7:
# 676 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_1, MSGBOX_DEFAULT
# 677 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_10:
# 681 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_2, MSGBOX_DEFAULT
# 682 "data/maps/ParcelCoastBreakwater/scripts.pory"
	giveitem ITEM_NUGGET
# 683 "data/maps/ParcelCoastBreakwater/scripts.pory"
	setflag FLAG_SKALD_Q_TINS_DONE
# 684 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_13:
# 688 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_3, MSGBOX_DEFAULT
# 689 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_16:
# 693 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_4, MSGBOX_DEFAULT
# 694 "data/maps/ParcelCoastBreakwater/scripts.pory"
	setflag FLAG_SKALD_Q_TINS
# 695 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Beachcomber_19:
# 699 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Beachcomber_Text_5, MSGBOX_DEFAULT
# 700 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Sign::
# 708 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Sign_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_SignHouse::
# 712 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_SignHouse_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_ItemPPUp::
# 715 "data/maps/ParcelCoastBreakwater/scripts.pory"
	finditem ITEM_PP_UP
	end


ParcelCoastBreakwater_Dorsey::
# 719 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 720 "data/maps/ParcelCoastBreakwater/scripts.pory"
	faceplayer
# 721 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwater_Dorsey_2
# 726 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Dorsey_Text_1, MSGBOX_DEFAULT
# 727 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_Dorsey_2:
# 722 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Dorsey_Text_0, MSGBOX_DEFAULT
# 723 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end


ParcelCoastBreakwater_Tins::
# 732 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_TINS, ParcelCoastBreakwater_Tins_2
# 735 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Tins_Text_0, MSGBOX_SIGN
# 736 "data/maps/ParcelCoastBreakwater/scripts.pory"
	setflag FLAG_SKALD_Q_TINS_FOUND
	end

ParcelCoastBreakwater_Tins_2:
	end


ParcelCoastBreakwater_PairBeach::
# 743 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 744 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwater_PairBeach_2
# 749 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastBreakwater_PairBeach_3
# 754 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_7, MSGBOX_DEFAULT
# 755 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_8, MSGBOX_DEFAULT
# 756 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_9, MSGBOX_DEFAULT
# 757 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_10, MSGBOX_DEFAULT
ParcelCoastBreakwater_PairBeach_1:
# 759 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_PairBeach_2:
# 745 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_0, MSGBOX_DEFAULT
# 746 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_1, MSGBOX_DEFAULT
# 747 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_2, MSGBOX_DEFAULT
# 748 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_3, MSGBOX_DEFAULT
	goto ParcelCoastBreakwater_PairBeach_1

ParcelCoastBreakwater_PairBeach_3:
# 750 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_4, MSGBOX_DEFAULT
# 751 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_5, MSGBOX_DEFAULT
# 752 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairBeach_Text_6, MSGBOX_DEFAULT
	goto ParcelCoastBreakwater_PairBeach_1


ParcelCoastBreakwater_Board1::
# 766 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Board1_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_Board2::
# 771 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Board2_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_PairWall::
# 778 "data/maps/ParcelCoastBreakwater/scripts.pory"
	lock
# 779 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwater_PairWall_2
# 783 "data/maps/ParcelCoastBreakwater/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastBreakwater_PairWall_3
# 788 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_6, MSGBOX_DEFAULT
# 789 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_7, MSGBOX_DEFAULT
# 790 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_8, MSGBOX_DEFAULT
# 791 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_9, MSGBOX_DEFAULT
ParcelCoastBreakwater_PairWall_1:
# 793 "data/maps/ParcelCoastBreakwater/scripts.pory"
	release
	end

ParcelCoastBreakwater_PairWall_2:
# 780 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_0, MSGBOX_DEFAULT
# 781 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_1, MSGBOX_DEFAULT
# 782 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_2, MSGBOX_DEFAULT
	goto ParcelCoastBreakwater_PairWall_1

ParcelCoastBreakwater_PairWall_3:
# 784 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_3, MSGBOX_DEFAULT
# 785 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_4, MSGBOX_DEFAULT
# 786 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_PairWall_Text_5, MSGBOX_DEFAULT
	goto ParcelCoastBreakwater_PairWall_1


ParcelCoastBreakwater_Board3::
# 800 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Board3_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_Spoil::
# 807 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_Spoil_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_OuterBoard::
# 812 "data/maps/ParcelCoastBreakwater/scripts.pory"
	msgbox ParcelCoastBreakwater_OuterBoard_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwater_Ansgar_Text_0:
# 13 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Off the boats a week. The\n"
	.string "quota review grounded us. Nothing to do\l"
	.string "but this. Battle.$"

ParcelCoastBreakwater_Ansgar_Text_1:
# 14 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: …Grounded again.$"

ParcelCoastBreakwater_Ansgar_Text_2:
# 29 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Season to season, HARLAND\n"
	.string "says. I say season to hearing to\l"
	.string "season.$"

ParcelCoastBreakwater_Ansgar_R2_Text_0:
# 40 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelCoastBreakwater_Ansgar_R2_Text_1:
# 42 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Fine. Same spot.$"

ParcelCoastBreakwater_Ansgar_R2_Text_2:
# 46 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Noted. Properly, this time.$"

ParcelCoastBreakwater_Ansgar_R2_Text_3:
# 47 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Ansgar_R3_Text_0:
# 54 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCoastBreakwater_Ansgar_R3_Text_1:
# 60 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: That's the one I wanted to see.$"

ParcelCoastBreakwater_Ansgar_R3_Text_2:
# 61 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Ansgar_R4_Text_0:
# 68 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCoastBreakwater_Ansgar_R4_Text_1:
# 74 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: …Again, then. Later.$"

ParcelCoastBreakwater_Ansgar_R4_Text_2:
# 75 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCoastBreakwater_Ansgar_R5_Text_0:
# 82 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelCoastBreakwater_Ansgar_R5_Text_1:
# 88 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Right. That's the whole of it.$"

ParcelCoastBreakwater_Ansgar_R5_Text_2:
# 89 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "ANSGAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoastBreakwater_Kasper_Text_0:
# 95 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Mum says the beach is fine to\n"
	.string "swim. The sign says don't. I can read.\l"
	.string "Battle!$"

ParcelCoastBreakwater_Kasper_Text_1:
# 96 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: …Mum was right.$"

ParcelCoastBreakwater_Kasper_Text_2:
# 111 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: The sign went up the week the\n"
	.string "cannery drum washed in. It's still up.$"

ParcelCoastBreakwater_Kasper_R2_Text_0:
# 122 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelCoastBreakwater_Kasper_R2_Text_1:
# 124 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: No hurry. The water keeps.$"

ParcelCoastBreakwater_Kasper_R2_Text_2:
# 128 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: …Fair.$"

ParcelCoastBreakwater_Kasper_R2_Text_3:
# 129 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoastBreakwater_Kasper_R3_Text_0:
# 136 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCoastBreakwater_Kasper_R3_Text_1:
# 143 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoastBreakwater_Kasper_R4_Text_0:
# 150 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCoastBreakwater_Kasper_R4_Text_1:
# 156 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Noted. Properly, this time.$"

ParcelCoastBreakwater_Kasper_R4_Text_2:
# 157 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoastBreakwater_Kasper_R5_Text_0:
# 164 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCoastBreakwater_Kasper_R5_Text_1:
# 170 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: That's the one I wanted to see.$"

ParcelCoastBreakwater_Kasper_R5_Text_2:
# 171 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "KASPER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoastBreakwater_Emma_Text_0:
# 177 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: I collect the tins. Seventeen\n"
	.string "with the crest. Fight me and I'll show\l"
	.string "you.$"

ParcelCoastBreakwater_Emma_Text_1:
# 178 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: …Eighteen, if you count that.$"

ParcelCoastBreakwater_Emma_Text_2:
# 193 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: The crest's the same as on the\n"
	.string "blankets. And the ferry. And the school\l"
	.string "roof.$"

ParcelCoastBreakwater_Emma_R2_Text_0:
# 204 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoastBreakwater_Emma_R2_Text_1:
# 206 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: Fine. Same spot.$"

ParcelCoastBreakwater_Emma_R2_Text_2:
# 210 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: …Again, then. Later.$"

ParcelCoastBreakwater_Emma_R2_Text_3:
# 211 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Emma_R3_Text_0:
# 218 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCoastBreakwater_Emma_R3_Text_1:
# 224 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: Right. That's the whole of it.$"

ParcelCoastBreakwater_Emma_R3_Text_2:
# 225 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Emma_R4_Text_0:
# 232 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCoastBreakwater_Emma_R4_Text_1:
# 239 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoastBreakwater_Emma_R5_Text_0:
# 246 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCoastBreakwater_Emma_R5_Text_1:
# 252 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: That's the one I wanted to see.$"

ParcelCoastBreakwater_Emma_R5_Text_2:
# 253 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "EMMA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCoastBreakwater_Vidar_Text_0:
# 259 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: Breakwater's MEREHOLT's. Beach\n"
	.string "is the town's. The line's about here.\l"
	.string "Battle on the line.$"

ParcelCoastBreakwater_Vidar_Text_1:
# 260 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: …Your side of the line.$"

ParcelCoastBreakwater_Vidar_Text_2:
# 275 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: They built the breakwater to\n"
	.string "shelter the boats. It silted the beach.\l"
	.string "Everything shelters something and\l"
	.string "silts something.$"

ParcelCoastBreakwater_Vidar_R2_Text_0:
# 286 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelCoastBreakwater_Vidar_R2_Text_1:
# 288 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: No hurry. The water keeps.$"

ParcelCoastBreakwater_Vidar_R2_Text_2:
# 292 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: Still yours.$"

ParcelCoastBreakwater_Vidar_R2_Text_3:
# 293 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Vidar_R3_Text_0:
# 300 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoastBreakwater_Vidar_R3_Text_1:
# 306 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: Right. That's the whole of it.$"

ParcelCoastBreakwater_Vidar_R3_Text_2:
# 307 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Vidar_R4_Text_0:
# 314 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCoastBreakwater_Vidar_R4_Text_1:
# 321 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoastBreakwater_Vidar_R5_Text_0:
# 328 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoastBreakwater_Vidar_R5_Text_1:
# 335 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "VIDAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCoastBreakwater_Linnea_Text_0:
# 341 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: We swim out to the island when\n"
	.string "the tide's low. The tide's never low now.\l"
	.string "Battle!$"

ParcelCoastBreakwater_Linnea_Text_1:
# 342 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: …High tide for you.$"

ParcelCoastBreakwater_Linnea_Text_2:
# 357 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Dad says the breakwater\n"
	.string "changed the tide. The sea doesn't ask\l"
	.string "permission either.$"

ParcelCoastBreakwater_Linnea_R2_Text_0:
# 368 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCoastBreakwater_Linnea_R2_Text_1:
# 370 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCoastBreakwater_Linnea_R2_Text_2:
# 374 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: That's the one I wanted to see.$"

ParcelCoastBreakwater_Linnea_R2_Text_3:
# 375 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCoastBreakwater_Linnea_R3_Text_0:
# 382 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelCoastBreakwater_Linnea_R3_Text_1:
# 388 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Noted. Properly, this time.$"

ParcelCoastBreakwater_Linnea_R3_Text_2:
# 389 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCoastBreakwater_Linnea_R4_Text_0:
# 396 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelCoastBreakwater_Linnea_R4_Text_1:
# 402 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: …Fair.$"

ParcelCoastBreakwater_Linnea_R4_Text_2:
# 403 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoastBreakwater_Linnea_R5_Text_0:
# 410 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCoastBreakwater_Linnea_R5_Text_1:
# 416 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Still yours.$"

ParcelCoastBreakwater_Linnea_R5_Text_2:
# 417 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "LINNEA: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoastBreakwater_Stig_Text_0:
# 423 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: The dredge line's out there. Below\n"
	.string "it, nothing. I swim above it. Battle,\l"
	.string "treading water.$"

ParcelCoastBreakwater_Stig_Text_1:
# 424 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: …Treading.$"

ParcelCoastBreakwater_Stig_Text_2:
# 439 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: Eleven fish, all the same length,\n"
	.string "HARLAND said. I've seen the length. It's\l"
	.string "the length of a tin.$"

ParcelCoastBreakwater_Stig_R2_Text_0:
# 450 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCoastBreakwater_Stig_R2_Text_1:
# 452 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: No hurry. The water keeps.$"

ParcelCoastBreakwater_Stig_R2_Text_2:
# 456 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: Still yours.$"

ParcelCoastBreakwater_Stig_R2_Text_3:
# 457 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Stig_R3_Text_0:
# 464 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCoastBreakwater_Stig_R3_Text_1:
# 470 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: That's the one I wanted to see.$"

ParcelCoastBreakwater_Stig_R3_Text_2:
# 471 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Stig_R4_Text_0:
# 478 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCoastBreakwater_Stig_R4_Text_1:
# 485 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoastBreakwater_Stig_R5_Text_0:
# 492 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCoastBreakwater_Stig_R5_Text_1:
# 499 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "STIG: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCoastBreakwater_Tone_Text_0:
# 505 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: I swim to the far rock and back\n"
	.string "every day. The rock's getting further.\l"
	.string "Fight.$"

ParcelCoastBreakwater_Tone_Text_1:
# 506 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: …Further.$"

ParcelCoastBreakwater_Tone_Text_2:
# 521 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: It isn't moving. The water is. The\n"
	.string "water's moving all of us.$"

ParcelCoastBreakwater_Tone_R2_Text_0:
# 532 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCoastBreakwater_Tone_R2_Text_1:
# 534 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: Another time, then.$"

ParcelCoastBreakwater_Tone_R2_Text_2:
# 538 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: …Again, then. Later.$"

ParcelCoastBreakwater_Tone_R2_Text_3:
# 539 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Tone_R3_Text_0:
# 546 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelCoastBreakwater_Tone_R3_Text_1:
# 553 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Tone_R4_Text_0:
# 560 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelCoastBreakwater_Tone_R4_Text_1:
# 566 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: That's the one I wanted to see.$"

ParcelCoastBreakwater_Tone_R4_Text_2:
# 567 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCoastBreakwater_Tone_R5_Text_0:
# 574 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCoastBreakwater_Tone_R5_Text_1:
# 580 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: Right. That's the whole of it.$"

ParcelCoastBreakwater_Tone_R5_Text_2:
# 581 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "TONE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCoastBreakwater_Holger_Text_0:
# 587 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Nobody comes out here. The\n"
	.string "quota doesn't count what nobody sees.\l"
	.string "Battle, and then forget you saw me.$"

ParcelCoastBreakwater_Holger_Text_1:
# 588 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: …Forget it.$"

ParcelCoastBreakwater_Holger_Text_2:
# 603 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Four fish. Big ones. Written\n"
	.string "down? Then I'm in the review too. Fine.\l"
	.string "Put my name next to HARLAND's.$"

ParcelCoastBreakwater_Holger_R2_Text_0:
# 614 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelCoastBreakwater_Holger_R2_Text_1:
# 616 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: No hurry. The water keeps.$"

ParcelCoastBreakwater_Holger_R2_Text_2:
# 620 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: That's the one I wanted to see.$"

ParcelCoastBreakwater_Holger_R2_Text_3:
# 621 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCoastBreakwater_Holger_R3_Text_0:
# 628 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelCoastBreakwater_Holger_R3_Text_1:
# 634 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Right. That's the whole of it.$"

ParcelCoastBreakwater_Holger_R3_Text_2:
# 635 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: One more in me. After the high\n"
	.string "ground.$"

ParcelCoastBreakwater_Holger_R4_Text_0:
# 642 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelCoastBreakwater_Holger_R4_Text_1:
# 649 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCoastBreakwater_Holger_R5_Text_0:
# 656 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCoastBreakwater_Holger_R5_Text_1:
# 662 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Noted. Properly, this time.$"

ParcelCoastBreakwater_Holger_R5_Text_2:
# 663 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "HOLGER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCoastBreakwater_Beachcomber_Text_0:
# 671 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Thirty-one in chalk, and\n"
	.string "the tide took it, and I wrote it again.\l"
	.string "Twelve tins this winter. Fewer.\p"
	.string "Either they're dumping less or the sea's\n"
	.string "keeping more. I count what reaches me.$"

ParcelCoastBreakwater_Beachcomber_Text_1:
# 676 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Thirty-one. I've written\n"
	.string "it on the wall in chalk. The tide will\l"
	.string "have it by spring. That's all right. It\l"
	.string "was true in between.$"

ParcelCoastBreakwater_Beachcomber_Text_2:
# 681 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Thirty-one. I had\n"
	.string "twenty-nine. My eyes.\p"
	.string "Here. The FOUNDATION's own coin for the\n"
	.string "FOUNDATION's own tins. I find those\l"
	.string "too.$"

ParcelCoastBreakwater_Beachcomber_Text_3:
# 688 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: The rocks past the hut.\n"
	.string "Start at the wall end. Don't skip the\l"
	.string "crushed ones; crushed is still a tin.$"

ParcelCoastBreakwater_Beachcomber_Text_4:
# 693 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Count the line for me. My\n"
	.string "eyes aren't what they were and the\l"
	.string "CORPS girl's photograph is out of date.\p"
	.string "Start at the wall end, past the hut, and\n"
	.string "don't skip the crushed ones.$"

ParcelCoastBreakwater_Beachcomber_Text_5:
# 699 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Fewer tins this month.\n"
	.string "Three, with the crest. I lined them up\l"
	.string "anyway. A short line is still a line.\l"
	.string "Somebody should keep it.$"

ParcelCoastBreakwater_Beachcomber_Text_6:
# 703 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "BEACHCOMBER: Every tide brings\n"
	.string "something with the crest on it. I line\l"
	.string "them up along the wall.\p"
	.string "The CORPS girl photographed the line\n"
	.string "for her file. It's longer now than in the\l"
	.string "photograph.$"

ParcelCoastBreakwater_Sign_Text_0:
# 708 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "MEREHOLT BREAKWATER. Beach closed to\n"
	.string "bathing pending water quality review.\l"
	.string "-- Harbour Office$"

ParcelCoastBreakwater_SignHouse_Text_0:
# 712 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "Lifeguard hut. Closed for the season.\n"
	.string "The season was last year.$"

ParcelCoastBreakwater_Dorsey_Text_0:
# 722 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DORSEY: The review kept the beach shut\n"
	.string "and reopened the breakwater side. Half\l"
	.string "a beach. I signed that too.\p"
	.string "First thing I've signed in years that\n"
	.string "I'd put my name on twice.$"

ParcelCoastBreakwater_Dorsey_Text_1:
# 726 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DORSEY: I come down here when the\n"
	.string "office is loud. The bathing sign is mine.\l"
	.string "I signed the closure.\p"
	.string "Nobody signs a beach open, RANGER. You\n"
	.string "only ever sign them shut.\p"
	.string "I keep a tin from this beach on my desk.\n"
	.string "Crest up. I tell visitors it's what we\l"
	.string "make. It's what washes back.$"

ParcelCoastBreakwater_Tins_Text_0:
# 735 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "Tins along the rock, crest up, each with\n"
	.string "a tide line of salt. Thirty-one. Two\l"
	.string "crushed flat, counted anyway.\p"
	.string "The newest still has its label.$"

ParcelCoastBreakwater_PairBeach_Text_0:
# 745 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: Dredge is stopped. I'm on\n"
	.string "the quay crew now.$"

ParcelCoastBreakwater_PairBeach_Text_1:
# 746 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "OLD LIFEGUARD: Then take the sign\n"
	.string "down. There's nothing to keep people\l"
	.string "off.$"

ParcelCoastBreakwater_PairBeach_Text_2:
# 747 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: The sea took the beach.\n"
	.string "The sign stays till the sea gives it\l"
	.string "back.$"

ParcelCoastBreakwater_PairBeach_Text_3:
# 748 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "OLD LIFEGUARD: …Fair. Put a date on the\n"
	.string "sign, then. People should know how long\l"
	.string "they've been waiting.$"

ParcelCoastBreakwater_PairBeach_Text_4:
# 750 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "OLD LIFEGUARD: The ranger walked the\n"
	.string "whole beach reading the line where the\l"
	.string "sand was. Didn't swim. Didn't need to.$"

ParcelCoastBreakwater_PairBeach_Text_5:
# 751 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: What's to read on a beach?$"

ParcelCoastBreakwater_PairBeach_Text_6:
# 752 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "OLD LIFEGUARD: The posts. The\n"
	.string "high-water mark three rows up the\l"
	.string "shingle from where it used to be. Krabby\l"
	.string "burrows with the roofs off. A beach is a\l"
	.string "page if you were ever taught letters.$"

ParcelCoastBreakwater_PairBeach_Text_7:
# 754 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: Beach is closed. Sign says\n"
	.string "so.$"

ParcelCoastBreakwater_PairBeach_Text_8:
# 755 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "OLD LIFEGUARD: I know what the sign\n"
	.string "says. I put the first one up, before the\l"
	.string "sand went. Said no swimming on the\l"
	.string "dredge days.$"

ParcelCoastBreakwater_PairBeach_Text_9:
# 756 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: Now it's every day.$"

ParcelCoastBreakwater_PairBeach_Text_10:
# 757 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "OLD LIFEGUARD: Now there's no sand to\n"
	.string "swim from. The breakwater you built\l"
	.string "took it. You can't close a beach that's\l"
	.string "already gone; you can only put a sign\l"
	.string "where it was.$"

ParcelCoastBreakwater_Board1_Text_0:
# 766 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "A SURVEY BOARD on the breakwater,\n"
	.string "salt-eaten. WAILMER calve in the bay in\l"
	.string "the cold months, and the spoil from the\l"
	.string "dredge is dumped where they calve.\p"
	.string "Calves seen from the end of the wall: 6,\n"
	.string "5, 5, 2, 0, 1. The dumping is on a licence.\l"
	.string "The board reproduces the licence\l"
	.string "number.$"

ParcelCoastBreakwater_Board2_Text_0:
# 771 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "A SURVEY BOARD facing the sea. CORSOLA\n"
	.string "on the old wall's foot, the only hard\l"
	.string "ground the dredge cannot reach. Pink in\l"
	.string "the clean years, white in the warm ones.\p"
	.string "The board is a colour chart: a square\n"
	.string "painted each summer. Read it from the\l"
	.string "left.$"

ParcelCoastBreakwater_PairWall_Text_0:
# 780 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: Dredge is parked. I'm on\n"
	.string "the review's crew, counting what comes\l"
	.string "back on the bottom.$"

ParcelCoastBreakwater_PairWall_Text_1:
# 781 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "NETMENDER: What comes back?$"

ParcelCoastBreakwater_PairWall_Text_2:
# 782 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: Mussels. Weed. A CORSOLA,\n"
	.string "pink, which the inspector made me\l"
	.string "photograph. I used to move that bottom\l"
	.string "a thousand tonnes a day. Now I\l"
	.string "photograph it.$"

ParcelCoastBreakwater_PairWall_Text_3:
# 784 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "NETMENDER: The ranger walked the wall\n"
	.string "to the end and counted the calves. Two.$"

ParcelCoastBreakwater_PairWall_Text_4:
# 785 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: Two's not many.$"

ParcelCoastBreakwater_PairWall_Text_5:
# 786 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "NETMENDER: Two's two more than the\n"
	.string "licence knows about. It's in a book now,\l"
	.string "with the licence number beside it.$"

ParcelCoastBreakwater_PairWall_Text_6:
# 788 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: Spoil run at six. Same as\n"
	.string "every morning.$"

ParcelCoastBreakwater_PairWall_Text_7:
# 789 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "NETMENDER: Same as every morning for\n"
	.string "the WAILMER, too. They calve where you\l"
	.string "dump.$"

ParcelCoastBreakwater_PairWall_Text_8:
# 790 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "DREDGE HAND: I dump where the licence\n"
	.string "says.$"

ParcelCoastBreakwater_PairWall_Text_9:
# 791 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "NETMENDER: The licence has a number.\n"
	.string "The calves don't. That's the whole\l"
	.string "argument, and you've just had it.$"

ParcelCoastBreakwater_Board3_Text_0:
# 800 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "A SURVEY BOARD at the breakwater's\n"
	.string "root. TENTACOOL in the shallows below,\l"
	.string "more every warm year, the board says,\l"
	.string "and KRABBY fewer. The board gives both\l"
	.string "lines and lets them cross.\p"
	.string "Where they cross is a date. The date\n"
	.string "has a tide written beside it, as if the\l"
	.string "Survey wanted the hour too.$"

ParcelCoastBreakwater_Spoil_Text_0:
# 807 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "MEREHOLT HARBOUR WORKS. Dredge spoil.\n"
	.string "Licensed disposal site.\p"
	.string "The licence number is the one the board\n"
	.string "at the end of the wall gives. KRABBY\l"
	.string "have dug into the bank. They are the\l"
	.string "only thing on it that chose to be here.$"

ParcelCoastBreakwater_OuterBoard_Text_0:
# 812 "data/maps/ParcelCoastBreakwater/scripts.pory"
	.string "A board on the outer bar, facing the\n"
	.string "open water. No crest and no number.\l"
	.string "Painted by hand:\p"
	.string "THEY CALVE HERE. GO ROUND.$"
