ParcelCorridorWorkings_MapScripts::
	.byte 0


ParcelCorridorWorkings_Olav::
# 9 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WRK_OLAV, ParcelCorridorWorkings_Olav_Text_0, ParcelCorridorWorkings_Olav_Text_1, ParcelCorridorWorkings_Olav_FirstWin
# 13 "data/maps/ParcelCorridorWorkings/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 14 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridorWorkings_Olav_3
ParcelCorridorWorkings_Olav_1:
# 17 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridorWorkings_Olav_8
ParcelCorridorWorkings_Olav_6:
# 20 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridorWorkings_Olav_13
ParcelCorridorWorkings_Olav_11:
# 23 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridorWorkings_Olav_18
ParcelCorridorWorkings_Olav_16:
# 26 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Olav_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridorWorkings_Olav_2:
# 15 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Olav_R2
	goto ParcelCorridorWorkings_Olav_1

ParcelCorridorWorkings_Olav_3:
# 14 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_OLAV_R2
	goto_if 0, ParcelCorridorWorkings_Olav_2
	goto ParcelCorridorWorkings_Olav_1

ParcelCorridorWorkings_Olav_7:
# 18 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Olav_R3
	goto ParcelCorridorWorkings_Olav_6

ParcelCorridorWorkings_Olav_8:
# 17 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_OLAV_R3
	goto_if 0, ParcelCorridorWorkings_Olav_7
	goto ParcelCorridorWorkings_Olav_6

ParcelCorridorWorkings_Olav_12:
# 21 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Olav_R4
	goto ParcelCorridorWorkings_Olav_11

ParcelCorridorWorkings_Olav_13:
# 20 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_OLAV_R4
	goto_if 0, ParcelCorridorWorkings_Olav_12
	goto ParcelCorridorWorkings_Olav_11

ParcelCorridorWorkings_Olav_17:
# 24 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Olav_R5
	goto ParcelCorridorWorkings_Olav_16

ParcelCorridorWorkings_Olav_18:
# 23 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_OLAV_R5
	goto_if 0, ParcelCorridorWorkings_Olav_17
	goto ParcelCorridorWorkings_Olav_16


ParcelCorridorWorkings_Olav_FirstWin::
# 30 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Olav_Text_2, MSGBOX_DEFAULT
# 31 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Olav_R2::
# 35 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 36 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 37 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Olav_R2_Text_0, MSGBOX_YESNO
# 38 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Olav_R2_2
# 43 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_OLAV_R2, ParcelCorridorWorkings_Olav_R2_Text_2
# 44 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Olav_R2_Text_3, MSGBOX_DEFAULT
# 45 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Olav_R2_2:
# 39 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Olav_R2_Text_1, MSGBOX_DEFAULT
# 40 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Olav_R3::
# 49 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 50 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 51 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Olav_R3_Text_0, MSGBOX_YESNO
# 52 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Olav_R3_2
# 57 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_OLAV_R3, ParcelCorridorWorkings_Olav_R3_Text_1
# 58 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Olav_R3_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Olav_R3_2:
# 53 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Olav_R2_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Olav_R4::
# 63 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 64 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 65 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Olav_R4_Text_0, MSGBOX_YESNO
# 66 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Olav_R4_2
# 71 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_OLAV_R4, ParcelCorridorWorkings_Olav_R4_Text_1
# 72 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Olav_R4_Text_2, MSGBOX_DEFAULT
# 73 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Olav_R4_2:
# 67 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Olav_R2_Text_1, MSGBOX_DEFAULT
# 68 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Olav_R5::
# 77 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 78 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 79 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Olav_R5_Text_0, MSGBOX_YESNO
# 80 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Olav_R5_2
# 85 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_OLAV_R5, ParcelCorridorWorkings_Olav_R5_Text_1
# 86 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Olav_R5_Text_2, MSGBOX_DEFAULT
# 87 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Olav_R5_2:
# 81 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Olav_R2_Text_1, MSGBOX_DEFAULT
# 82 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Sigurd::
# 91 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WRK_SIGURD, ParcelCorridorWorkings_Sigurd_Text_0, ParcelCorridorWorkings_Sigurd_Text_1, ParcelCorridorWorkings_Sigurd_FirstWin
# 95 "data/maps/ParcelCorridorWorkings/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 96 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridorWorkings_Sigurd_3
ParcelCorridorWorkings_Sigurd_1:
# 99 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridorWorkings_Sigurd_8
ParcelCorridorWorkings_Sigurd_6:
# 102 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridorWorkings_Sigurd_13
ParcelCorridorWorkings_Sigurd_11:
# 105 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridorWorkings_Sigurd_18
ParcelCorridorWorkings_Sigurd_16:
# 108 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Sigurd_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridorWorkings_Sigurd_2:
# 97 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Sigurd_R2
	goto ParcelCorridorWorkings_Sigurd_1

ParcelCorridorWorkings_Sigurd_3:
# 96 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_SIGURD_R2
	goto_if 0, ParcelCorridorWorkings_Sigurd_2
	goto ParcelCorridorWorkings_Sigurd_1

ParcelCorridorWorkings_Sigurd_7:
# 100 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Sigurd_R3
	goto ParcelCorridorWorkings_Sigurd_6

ParcelCorridorWorkings_Sigurd_8:
# 99 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_SIGURD_R3
	goto_if 0, ParcelCorridorWorkings_Sigurd_7
	goto ParcelCorridorWorkings_Sigurd_6

ParcelCorridorWorkings_Sigurd_12:
# 103 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Sigurd_R4
	goto ParcelCorridorWorkings_Sigurd_11

ParcelCorridorWorkings_Sigurd_13:
# 102 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_SIGURD_R4
	goto_if 0, ParcelCorridorWorkings_Sigurd_12
	goto ParcelCorridorWorkings_Sigurd_11

ParcelCorridorWorkings_Sigurd_17:
# 106 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Sigurd_R5
	goto ParcelCorridorWorkings_Sigurd_16

ParcelCorridorWorkings_Sigurd_18:
# 105 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_SIGURD_R5
	goto_if 0, ParcelCorridorWorkings_Sigurd_17
	goto ParcelCorridorWorkings_Sigurd_16


ParcelCorridorWorkings_Sigurd_FirstWin::
# 112 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Sigurd_Text_2, MSGBOX_DEFAULT
# 113 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Sigurd_R2::
# 117 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 118 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 119 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Sigurd_R2_Text_0, MSGBOX_YESNO
# 120 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Sigurd_R2_2
# 125 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_SIGURD_R2, ParcelCorridorWorkings_Sigurd_R2_Text_2
# 126 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Sigurd_R2_Text_3, MSGBOX_DEFAULT
# 127 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Sigurd_R2_2:
# 121 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 122 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Sigurd_R3::
# 131 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 132 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 133 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Sigurd_R3_Text_0, MSGBOX_YESNO
# 134 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Sigurd_R3_2
# 139 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_SIGURD_R3, ParcelCorridorWorkings_Sigurd_R3_Text_1
# 140 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Sigurd_R3_Text_2, MSGBOX_DEFAULT
# 141 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Sigurd_R3_2:
# 135 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 136 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Sigurd_R4::
# 145 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 146 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 147 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Sigurd_R4_Text_0, MSGBOX_YESNO
# 148 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Sigurd_R4_2
# 153 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_SIGURD_R4, ParcelCorridorWorkings_Sigurd_R3_Text_1
# 154 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Sigurd_R4_Text_1, MSGBOX_DEFAULT
# 155 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Sigurd_R4_2:
# 149 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 150 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Sigurd_R5::
# 159 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 160 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 161 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Sigurd_R5_Text_0, MSGBOX_YESNO
# 162 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Sigurd_R5_2
# 167 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_SIGURD_R5, ParcelCorridorWorkings_Sigurd_R5_Text_1
# 168 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Sigurd_R5_Text_2, MSGBOX_DEFAULT
# 169 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Sigurd_R5_2:
# 163 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 164 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Rannveig::
# 173 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WRK_RANNVEIG, ParcelCorridorWorkings_Rannveig_Text_0, ParcelCorridorWorkings_Rannveig_Text_1, ParcelCorridorWorkings_Rannveig_FirstWin
# 177 "data/maps/ParcelCorridorWorkings/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 178 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridorWorkings_Rannveig_3
ParcelCorridorWorkings_Rannveig_1:
# 181 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridorWorkings_Rannveig_8
ParcelCorridorWorkings_Rannveig_6:
# 184 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridorWorkings_Rannveig_13
ParcelCorridorWorkings_Rannveig_11:
# 187 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridorWorkings_Rannveig_18
ParcelCorridorWorkings_Rannveig_16:
# 190 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Rannveig_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridorWorkings_Rannveig_2:
# 179 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Rannveig_R2
	goto ParcelCorridorWorkings_Rannveig_1

ParcelCorridorWorkings_Rannveig_3:
# 178 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_RANNVEIG_R2
	goto_if 0, ParcelCorridorWorkings_Rannveig_2
	goto ParcelCorridorWorkings_Rannveig_1

ParcelCorridorWorkings_Rannveig_7:
# 182 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Rannveig_R3
	goto ParcelCorridorWorkings_Rannveig_6

ParcelCorridorWorkings_Rannveig_8:
# 181 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_RANNVEIG_R3
	goto_if 0, ParcelCorridorWorkings_Rannveig_7
	goto ParcelCorridorWorkings_Rannveig_6

ParcelCorridorWorkings_Rannveig_12:
# 185 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Rannveig_R4
	goto ParcelCorridorWorkings_Rannveig_11

ParcelCorridorWorkings_Rannveig_13:
# 184 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_RANNVEIG_R4
	goto_if 0, ParcelCorridorWorkings_Rannveig_12
	goto ParcelCorridorWorkings_Rannveig_11

ParcelCorridorWorkings_Rannveig_17:
# 188 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Rannveig_R5
	goto ParcelCorridorWorkings_Rannveig_16

ParcelCorridorWorkings_Rannveig_18:
# 187 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_RANNVEIG_R5
	goto_if 0, ParcelCorridorWorkings_Rannveig_17
	goto ParcelCorridorWorkings_Rannveig_16


ParcelCorridorWorkings_Rannveig_FirstWin::
# 194 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Rannveig_Text_2, MSGBOX_DEFAULT
# 195 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Rannveig_R2::
# 199 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 200 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 201 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Rannveig_R2_Text_0, MSGBOX_YESNO
# 202 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Rannveig_R2_2
# 207 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_RANNVEIG_R2, ParcelCorridorWorkings_Rannveig_R2_Text_2
# 208 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Rannveig_R2_Text_3, MSGBOX_DEFAULT
# 209 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Rannveig_R2_2:
# 203 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 204 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Rannveig_R3::
# 213 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 214 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 215 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Rannveig_R3_Text_0, MSGBOX_YESNO
# 216 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Rannveig_R3_2
# 221 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_RANNVEIG_R3, ParcelCorridorWorkings_Rannveig_R3_Text_1
# 222 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Rannveig_R3_Text_2, MSGBOX_DEFAULT
# 223 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Rannveig_R3_2:
# 217 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 218 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Rannveig_R4::
# 227 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 228 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 229 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Rannveig_R4_Text_0, MSGBOX_YESNO
# 230 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Rannveig_R4_2
# 235 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_RANNVEIG_R4, ParcelCorridorWorkings_Rannveig_R2_Text_2
# 236 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Rannveig_R4_Text_1, MSGBOX_DEFAULT
# 237 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Rannveig_R4_2:
# 231 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 232 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Rannveig_R5::
# 241 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 242 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 243 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Rannveig_R5_Text_0, MSGBOX_YESNO
# 244 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Rannveig_R5_2
# 249 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_RANNVEIG_R5, ParcelCorridorWorkings_Rannveig_R3_Text_1
# 250 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Rannveig_R5_Text_1, MSGBOX_DEFAULT
# 251 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Rannveig_R5_2:
# 245 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 246 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Torgeir::
# 255 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WRK_TORGEIR, ParcelCorridorWorkings_Torgeir_Text_0, ParcelCorridorWorkings_Torgeir_Text_1, ParcelCorridorWorkings_Torgeir_FirstWin
# 259 "data/maps/ParcelCorridorWorkings/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 260 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridorWorkings_Torgeir_3
ParcelCorridorWorkings_Torgeir_1:
# 263 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridorWorkings_Torgeir_8
ParcelCorridorWorkings_Torgeir_6:
# 266 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridorWorkings_Torgeir_13
ParcelCorridorWorkings_Torgeir_11:
# 269 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridorWorkings_Torgeir_18
ParcelCorridorWorkings_Torgeir_16:
# 272 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Torgeir_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridorWorkings_Torgeir_2:
# 261 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Torgeir_R2
	goto ParcelCorridorWorkings_Torgeir_1

ParcelCorridorWorkings_Torgeir_3:
# 260 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_TORGEIR_R2
	goto_if 0, ParcelCorridorWorkings_Torgeir_2
	goto ParcelCorridorWorkings_Torgeir_1

ParcelCorridorWorkings_Torgeir_7:
# 264 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Torgeir_R3
	goto ParcelCorridorWorkings_Torgeir_6

ParcelCorridorWorkings_Torgeir_8:
# 263 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_TORGEIR_R3
	goto_if 0, ParcelCorridorWorkings_Torgeir_7
	goto ParcelCorridorWorkings_Torgeir_6

ParcelCorridorWorkings_Torgeir_12:
# 267 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Torgeir_R4
	goto ParcelCorridorWorkings_Torgeir_11

ParcelCorridorWorkings_Torgeir_13:
# 266 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_TORGEIR_R4
	goto_if 0, ParcelCorridorWorkings_Torgeir_12
	goto ParcelCorridorWorkings_Torgeir_11

ParcelCorridorWorkings_Torgeir_17:
# 270 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Torgeir_R5
	goto ParcelCorridorWorkings_Torgeir_16

ParcelCorridorWorkings_Torgeir_18:
# 269 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_TORGEIR_R5
	goto_if 0, ParcelCorridorWorkings_Torgeir_17
	goto ParcelCorridorWorkings_Torgeir_16


ParcelCorridorWorkings_Torgeir_FirstWin::
# 276 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Torgeir_Text_2, MSGBOX_DEFAULT
# 277 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Torgeir_R2::
# 281 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 282 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 283 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Torgeir_R2_Text_0, MSGBOX_YESNO
# 284 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Torgeir_R2_2
# 289 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_TORGEIR_R2, ParcelCorridorWorkings_Torgeir_R2_Text_2
# 290 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Torgeir_R2_Text_3, MSGBOX_DEFAULT
# 291 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Torgeir_R2_2:
# 285 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 286 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Torgeir_R3::
# 295 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 296 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 297 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Torgeir_R3_Text_0, MSGBOX_YESNO
# 298 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Torgeir_R3_2
# 303 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_TORGEIR_R3, ParcelCorridorWorkings_Torgeir_R2_Text_2
# 304 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Torgeir_R3_Text_1, MSGBOX_DEFAULT
# 305 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Torgeir_R3_2:
# 299 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 300 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Torgeir_R4::
# 309 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 310 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 311 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Torgeir_R4_Text_0, MSGBOX_YESNO
# 312 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Torgeir_R4_2
# 317 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_TORGEIR_R4, ParcelCorridorWorkings_Torgeir_R4_Text_1
# 318 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Torgeir_R4_Text_2, MSGBOX_DEFAULT
# 319 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Torgeir_R4_2:
# 313 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 314 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Torgeir_R5::
# 323 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 324 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 325 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Torgeir_R5_Text_0, MSGBOX_YESNO
# 326 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Torgeir_R5_2
# 331 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_TORGEIR_R5, ParcelCorridorWorkings_Torgeir_R2_Text_2
# 332 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Torgeir_R5_Text_1, MSGBOX_DEFAULT
# 333 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Torgeir_R5_2:
# 327 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 328 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Einar::
# 337 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WRK_EINAR, ParcelCorridorWorkings_Einar_Text_0, ParcelCorridorWorkings_Einar_Text_1, ParcelCorridorWorkings_Einar_FirstWin
# 341 "data/maps/ParcelCorridorWorkings/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 342 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridorWorkings_Einar_3
ParcelCorridorWorkings_Einar_1:
# 345 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridorWorkings_Einar_8
ParcelCorridorWorkings_Einar_6:
# 348 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridorWorkings_Einar_13
ParcelCorridorWorkings_Einar_11:
# 351 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridorWorkings_Einar_18
ParcelCorridorWorkings_Einar_16:
# 354 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Einar_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridorWorkings_Einar_2:
# 343 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Einar_R2
	goto ParcelCorridorWorkings_Einar_1

ParcelCorridorWorkings_Einar_3:
# 342 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_EINAR_R2
	goto_if 0, ParcelCorridorWorkings_Einar_2
	goto ParcelCorridorWorkings_Einar_1

ParcelCorridorWorkings_Einar_7:
# 346 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Einar_R3
	goto ParcelCorridorWorkings_Einar_6

ParcelCorridorWorkings_Einar_8:
# 345 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_EINAR_R3
	goto_if 0, ParcelCorridorWorkings_Einar_7
	goto ParcelCorridorWorkings_Einar_6

ParcelCorridorWorkings_Einar_12:
# 349 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Einar_R4
	goto ParcelCorridorWorkings_Einar_11

ParcelCorridorWorkings_Einar_13:
# 348 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_EINAR_R4
	goto_if 0, ParcelCorridorWorkings_Einar_12
	goto ParcelCorridorWorkings_Einar_11

ParcelCorridorWorkings_Einar_17:
# 352 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Einar_R5
	goto ParcelCorridorWorkings_Einar_16

ParcelCorridorWorkings_Einar_18:
# 351 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_EINAR_R5
	goto_if 0, ParcelCorridorWorkings_Einar_17
	goto ParcelCorridorWorkings_Einar_16


ParcelCorridorWorkings_Einar_FirstWin::
# 358 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Einar_Text_2, MSGBOX_DEFAULT
# 359 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Einar_R2::
# 363 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 364 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 365 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Einar_R2_Text_0, MSGBOX_YESNO
# 366 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Einar_R2_2
# 371 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_EINAR_R2, ParcelCorridorWorkings_Einar_R2_Text_2
# 372 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Einar_R2_Text_3, MSGBOX_DEFAULT
# 373 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Einar_R2_2:
# 367 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Einar_R2_Text_1, MSGBOX_DEFAULT
# 368 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Einar_R3::
# 377 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 378 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 379 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Einar_R3_Text_0, MSGBOX_YESNO
# 380 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Einar_R3_2
# 385 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_EINAR_R3, ParcelCorridorWorkings_Einar_R3_Text_1
# 386 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Einar_R3_Text_2, MSGBOX_DEFAULT
# 387 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Einar_R3_2:
# 381 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Einar_R2_Text_1, MSGBOX_DEFAULT
# 382 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Einar_R4::
# 391 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 392 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 393 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Einar_R4_Text_0, MSGBOX_YESNO
# 394 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Einar_R4_2
# 399 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_EINAR_R4, ParcelCorridorWorkings_Einar_R4_Text_1
# 400 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Einar_R4_Text_2, MSGBOX_DEFAULT
# 401 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Einar_R4_2:
# 395 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Einar_R2_Text_1, MSGBOX_DEFAULT
# 396 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Einar_R5::
# 405 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 406 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 407 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Einar_R5_Text_0, MSGBOX_YESNO
# 408 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Einar_R5_2
# 413 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_EINAR_R5, ParcelCorridorWorkings_Einar_R5_Text_1
# 414 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Einar_R5_Text_2, MSGBOX_DEFAULT
# 415 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Einar_R5_2:
# 409 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Einar_R2_Text_1, MSGBOX_DEFAULT
# 410 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Bjorg::
# 419 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WRK_BJORG, ParcelCorridorWorkings_Bjorg_Text_0, ParcelCorridorWorkings_Bjorg_Text_1, ParcelCorridorWorkings_Bjorg_FirstWin
# 423 "data/maps/ParcelCorridorWorkings/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 424 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridorWorkings_Bjorg_3
ParcelCorridorWorkings_Bjorg_1:
# 427 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridorWorkings_Bjorg_8
ParcelCorridorWorkings_Bjorg_6:
# 430 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridorWorkings_Bjorg_13
ParcelCorridorWorkings_Bjorg_11:
# 433 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridorWorkings_Bjorg_18
ParcelCorridorWorkings_Bjorg_16:
# 436 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Bjorg_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridorWorkings_Bjorg_2:
# 425 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Bjorg_R2
	goto ParcelCorridorWorkings_Bjorg_1

ParcelCorridorWorkings_Bjorg_3:
# 424 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_BJORG_R2
	goto_if 0, ParcelCorridorWorkings_Bjorg_2
	goto ParcelCorridorWorkings_Bjorg_1

ParcelCorridorWorkings_Bjorg_7:
# 428 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Bjorg_R3
	goto ParcelCorridorWorkings_Bjorg_6

ParcelCorridorWorkings_Bjorg_8:
# 427 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_BJORG_R3
	goto_if 0, ParcelCorridorWorkings_Bjorg_7
	goto ParcelCorridorWorkings_Bjorg_6

ParcelCorridorWorkings_Bjorg_12:
# 431 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Bjorg_R4
	goto ParcelCorridorWorkings_Bjorg_11

ParcelCorridorWorkings_Bjorg_13:
# 430 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_BJORG_R4
	goto_if 0, ParcelCorridorWorkings_Bjorg_12
	goto ParcelCorridorWorkings_Bjorg_11

ParcelCorridorWorkings_Bjorg_17:
# 434 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Bjorg_R5
	goto ParcelCorridorWorkings_Bjorg_16

ParcelCorridorWorkings_Bjorg_18:
# 433 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_BJORG_R5
	goto_if 0, ParcelCorridorWorkings_Bjorg_17
	goto ParcelCorridorWorkings_Bjorg_16


ParcelCorridorWorkings_Bjorg_FirstWin::
# 440 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Bjorg_Text_2, MSGBOX_DEFAULT
# 441 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Bjorg_R2::
# 445 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 446 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 447 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Bjorg_R2_Text_0, MSGBOX_YESNO
# 448 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Bjorg_R2_2
# 453 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_BJORG_R2, ParcelCorridorWorkings_Bjorg_R2_Text_2
# 454 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Bjorg_R2_Text_3, MSGBOX_DEFAULT
# 455 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Bjorg_R2_2:
# 449 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Bjorg_R2_Text_1, MSGBOX_DEFAULT
# 450 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Bjorg_R3::
# 459 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 460 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 461 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Bjorg_R3_Text_0, MSGBOX_YESNO
# 462 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Bjorg_R3_2
# 467 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_BJORG_R3, ParcelCorridorWorkings_Bjorg_R3_Text_1
# 468 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Bjorg_R3_Text_2, MSGBOX_DEFAULT
# 469 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Bjorg_R3_2:
# 463 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Bjorg_R2_Text_1, MSGBOX_DEFAULT
# 464 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Bjorg_R4::
# 473 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 474 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 475 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Bjorg_R4_Text_0, MSGBOX_YESNO
# 476 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Bjorg_R4_2
# 481 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_BJORG_R4, ParcelCorridorWorkings_Bjorg_R4_Text_1
# 482 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Bjorg_R4_Text_2, MSGBOX_DEFAULT
# 483 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Bjorg_R4_2:
# 477 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Bjorg_R2_Text_1, MSGBOX_DEFAULT
# 478 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Bjorg_R5::
# 487 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 488 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 489 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Bjorg_R5_Text_0, MSGBOX_YESNO
# 490 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Bjorg_R5_2
# 495 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_BJORG_R5, ParcelCorridorWorkings_Bjorg_R5_Text_1
# 496 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Bjorg_R5_Text_2, MSGBOX_DEFAULT
# 497 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Bjorg_R5_2:
# 491 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Bjorg_R2_Text_1, MSGBOX_DEFAULT
# 492 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Knut::
# 501 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WRK_KNUT, ParcelCorridorWorkings_Knut_Text_0, ParcelCorridorWorkings_Knut_Text_1, ParcelCorridorWorkings_Knut_FirstWin
# 505 "data/maps/ParcelCorridorWorkings/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 506 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridorWorkings_Knut_3
ParcelCorridorWorkings_Knut_1:
# 509 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridorWorkings_Knut_8
ParcelCorridorWorkings_Knut_6:
# 512 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridorWorkings_Knut_13
ParcelCorridorWorkings_Knut_11:
# 515 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridorWorkings_Knut_18
ParcelCorridorWorkings_Knut_16:
# 518 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Knut_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridorWorkings_Knut_2:
# 507 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Knut_R2
	goto ParcelCorridorWorkings_Knut_1

ParcelCorridorWorkings_Knut_3:
# 506 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_KNUT_R2
	goto_if 0, ParcelCorridorWorkings_Knut_2
	goto ParcelCorridorWorkings_Knut_1

ParcelCorridorWorkings_Knut_7:
# 510 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Knut_R3
	goto ParcelCorridorWorkings_Knut_6

ParcelCorridorWorkings_Knut_8:
# 509 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_KNUT_R3
	goto_if 0, ParcelCorridorWorkings_Knut_7
	goto ParcelCorridorWorkings_Knut_6

ParcelCorridorWorkings_Knut_12:
# 513 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Knut_R4
	goto ParcelCorridorWorkings_Knut_11

ParcelCorridorWorkings_Knut_13:
# 512 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_KNUT_R4
	goto_if 0, ParcelCorridorWorkings_Knut_12
	goto ParcelCorridorWorkings_Knut_11

ParcelCorridorWorkings_Knut_17:
# 516 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Knut_R5
	goto ParcelCorridorWorkings_Knut_16

ParcelCorridorWorkings_Knut_18:
# 515 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_KNUT_R5
	goto_if 0, ParcelCorridorWorkings_Knut_17
	goto ParcelCorridorWorkings_Knut_16


ParcelCorridorWorkings_Knut_FirstWin::
# 522 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Knut_Text_2, MSGBOX_DEFAULT
# 523 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Knut_R2::
# 527 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 528 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 529 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Knut_R2_Text_0, MSGBOX_YESNO
# 530 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Knut_R2_2
# 535 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_KNUT_R2, ParcelCorridorWorkings_Knut_R2_Text_2
# 536 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Knut_R2_Text_3, MSGBOX_DEFAULT
# 537 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Knut_R2_2:
# 531 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Knut_R2_Text_1, MSGBOX_DEFAULT
# 532 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Knut_R3::
# 541 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 542 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 543 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Knut_R3_Text_0, MSGBOX_YESNO
# 544 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Knut_R3_2
# 549 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_KNUT_R3, ParcelCorridorWorkings_Knut_R3_Text_1
# 550 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Knut_R3_Text_2, MSGBOX_DEFAULT
# 551 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Knut_R3_2:
# 545 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Knut_R2_Text_1, MSGBOX_DEFAULT
# 546 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Knut_R4::
# 555 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 556 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 557 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Knut_R4_Text_0, MSGBOX_YESNO
# 558 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Knut_R4_2
# 563 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_KNUT_R4, ParcelCorridorWorkings_Knut_R4_Text_1
# 564 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Knut_R4_Text_2, MSGBOX_DEFAULT
# 565 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Knut_R4_2:
# 559 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Knut_R2_Text_1, MSGBOX_DEFAULT
# 560 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Knut_R5::
# 569 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 570 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 571 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Knut_R5_Text_0, MSGBOX_YESNO
# 572 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Knut_R5_2
# 577 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_KNUT_R5, ParcelCorridorWorkings_Knut_R5_Text_1
# 578 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Knut_R5_Text_2, MSGBOX_DEFAULT
# 579 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Knut_R5_2:
# 573 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Knut_R2_Text_1, MSGBOX_DEFAULT
# 574 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Lise::
# 583 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WRK_LISE, ParcelCorridorWorkings_Lise_Text_0, ParcelCorridorWorkings_Lise_Text_1, ParcelCorridorWorkings_Lise_FirstWin
# 587 "data/maps/ParcelCorridorWorkings/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 588 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelCorridorWorkings_Lise_3
ParcelCorridorWorkings_Lise_1:
# 591 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelCorridorWorkings_Lise_8
ParcelCorridorWorkings_Lise_6:
# 594 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelCorridorWorkings_Lise_13
ParcelCorridorWorkings_Lise_11:
# 597 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelCorridorWorkings_Lise_18
ParcelCorridorWorkings_Lise_16:
# 600 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Lise_Text_2, MSGBOX_DEFAULT
	end

ParcelCorridorWorkings_Lise_2:
# 589 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Lise_R2
	goto ParcelCorridorWorkings_Lise_1

ParcelCorridorWorkings_Lise_3:
# 588 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_LISE_R2
	goto_if 0, ParcelCorridorWorkings_Lise_2
	goto ParcelCorridorWorkings_Lise_1

ParcelCorridorWorkings_Lise_7:
# 592 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Lise_R3
	goto ParcelCorridorWorkings_Lise_6

ParcelCorridorWorkings_Lise_8:
# 591 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_LISE_R3
	goto_if 0, ParcelCorridorWorkings_Lise_7
	goto ParcelCorridorWorkings_Lise_6

ParcelCorridorWorkings_Lise_12:
# 595 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Lise_R4
	goto ParcelCorridorWorkings_Lise_11

ParcelCorridorWorkings_Lise_13:
# 594 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_LISE_R4
	goto_if 0, ParcelCorridorWorkings_Lise_12
	goto ParcelCorridorWorkings_Lise_11

ParcelCorridorWorkings_Lise_17:
# 598 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto ParcelCorridorWorkings_Lise_R5
	goto ParcelCorridorWorkings_Lise_16

ParcelCorridorWorkings_Lise_18:
# 597 "data/maps/ParcelCorridorWorkings/scripts.pory"
	checktrainerflag TRAINER_SKALD_WRK_LISE_R5
	goto_if 0, ParcelCorridorWorkings_Lise_17
	goto ParcelCorridorWorkings_Lise_16


ParcelCorridorWorkings_Lise_FirstWin::
# 604 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Lise_Text_2, MSGBOX_DEFAULT
# 605 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Lise_R2::
# 609 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 610 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 611 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Lise_R2_Text_0, MSGBOX_YESNO
# 612 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Lise_R2_2
# 617 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_LISE_R2, ParcelCorridorWorkings_Lise_R2_Text_2
# 618 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Lise_R2_Text_3, MSGBOX_DEFAULT
# 619 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Lise_R2_2:
# 613 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Lise_R2_Text_1, MSGBOX_DEFAULT
# 614 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Lise_R3::
# 623 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 624 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 625 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Lise_R3_Text_0, MSGBOX_YESNO
# 626 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Lise_R3_2
# 631 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_LISE_R3, ParcelCorridorWorkings_Lise_R3_Text_1
# 632 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Lise_R3_Text_2, MSGBOX_DEFAULT
# 633 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Lise_R3_2:
# 627 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Lise_R2_Text_1, MSGBOX_DEFAULT
# 628 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Lise_R4::
# 637 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 638 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 639 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Lise_R4_Text_0, MSGBOX_YESNO
# 640 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Lise_R4_2
# 645 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_LISE_R4, ParcelCorridorWorkings_Lise_R4_Text_1
# 646 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Lise_R4_Text_2, MSGBOX_DEFAULT
# 647 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Lise_R4_2:
# 641 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Lise_R2_Text_1, MSGBOX_DEFAULT
# 642 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Lise_R5::
# 651 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 652 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 653 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Lise_R5_Text_0, MSGBOX_YESNO
# 654 "data/maps/ParcelCorridorWorkings/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCorridorWorkings_Lise_R5_2
# 659 "data/maps/ParcelCorridorWorkings/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WRK_LISE_R5, ParcelCorridorWorkings_Lise_R5_Text_1
# 660 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Lise_R5_Text_2, MSGBOX_DEFAULT
# 661 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Lise_R5_2:
# 655 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Lise_R2_Text_1, MSGBOX_DEFAULT
# 656 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_Miner::
# 665 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 666 "data/maps/ParcelCorridorWorkings/scripts.pory"
	faceplayer
# 667 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCorridorWorkings_Miner_3
ParcelCorridorWorkings_Miner_1:
# 672 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGN_DONE, ParcelCorridorWorkings_Miner_7
# 677 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGN, ParcelCorridorWorkings_Miner_10
# 682 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGN_SEEN, ParcelCorridorWorkings_Miner_13
# 688 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCorridorWorkings_Miner_16
# 693 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Miner_Text_5, MSGBOX_DEFAULT
# 694 "data/maps/ParcelCorridorWorkings/scripts.pory"
	setflag FLAG_SKALD_Q_SIGN_SEEN
# 695 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Miner_2:
# 668 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Miner_Text_0, MSGBOX_DEFAULT
# 669 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Miner_3:
# 667 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGN_DONE, ParcelCorridorWorkings_Miner_2
	goto ParcelCorridorWorkings_Miner_1

ParcelCorridorWorkings_Miner_7:
# 673 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Miner_Text_1, MSGBOX_DEFAULT
# 674 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Miner_10:
# 678 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Miner_Text_2, MSGBOX_DEFAULT
# 679 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Miner_13:
# 683 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Miner_Text_3, MSGBOX_DEFAULT
# 684 "data/maps/ParcelCorridorWorkings/scripts.pory"
	setflag FLAG_SKALD_Q_SIGN
# 685 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_Miner_16:
# 689 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_Miner_Text_4, MSGBOX_DEFAULT
# 690 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end


ParcelCorridorWorkings_ItemRevive::
# 698 "data/maps/ParcelCorridorWorkings/scripts.pory"
	finditem ITEM_REVIVE
	end


ParcelCorridorWorkings_ItemHardStone::
# 699 "data/maps/ParcelCorridorWorkings/scripts.pory"
	finditem ITEM_HARD_STONE
	end


ParcelCorridorWorkings_PairCrew::
# 704 "data/maps/ParcelCorridorWorkings/scripts.pory"
	lock
# 705 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCorridorWorkings_PairCrew_2
# 709 "data/maps/ParcelCorridorWorkings/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelCorridorWorkings_PairCrew_3
# 715 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_PairCrew_Text_7, MSGBOX_DEFAULT
# 716 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_PairCrew_Text_8, MSGBOX_DEFAULT
# 717 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_PairCrew_Text_9, MSGBOX_DEFAULT
# 718 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_PairCrew_Text_10, MSGBOX_DEFAULT
# 719 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_PairCrew_Text_11, MSGBOX_DEFAULT
ParcelCorridorWorkings_PairCrew_1:
# 721 "data/maps/ParcelCorridorWorkings/scripts.pory"
	release
	end

ParcelCorridorWorkings_PairCrew_2:
# 706 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_PairCrew_Text_0, MSGBOX_DEFAULT
# 707 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_PairCrew_Text_1, MSGBOX_DEFAULT
# 708 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_PairCrew_Text_2, MSGBOX_DEFAULT
	goto ParcelCorridorWorkings_PairCrew_1

ParcelCorridorWorkings_PairCrew_3:
# 710 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_PairCrew_Text_3, MSGBOX_DEFAULT
# 711 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_PairCrew_Text_4, MSGBOX_DEFAULT
# 712 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_PairCrew_Text_5, MSGBOX_DEFAULT
# 713 "data/maps/ParcelCorridorWorkings/scripts.pory"
	msgbox ParcelCorridorWorkings_PairCrew_Text_6, MSGBOX_DEFAULT
	goto ParcelCorridorWorkings_PairCrew_1


ParcelCorridorWorkings_Olav_Text_0:
# 10 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: Ballast crew. The road eats rock,\n"
	.string "and this hole had rock going spare. Mind\l"
	.string "the props. Battle.$"

ParcelCorridorWorkings_Olav_Text_1:
# 11 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: …Props held. Fair.$"

ParcelCorridorWorkings_Olav_Text_2:
# 26 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: They logged this gallery closed.\n"
	.string "Then they logged it a quarry. Same book,\l"
	.string "two pages.$"

ParcelCorridorWorkings_Olav_R2_Text_0:
# 37 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelCorridorWorkings_Olav_R2_Text_1:
# 39 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: No hurry. The water keeps.$"

ParcelCorridorWorkings_Olav_R2_Text_2:
# 43 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: That's the one I wanted to see.$"

ParcelCorridorWorkings_Olav_R2_Text_3:
# 44 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridorWorkings_Olav_R3_Text_0:
# 51 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelCorridorWorkings_Olav_R3_Text_1:
# 57 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: …Fair.$"

ParcelCorridorWorkings_Olav_R3_Text_2:
# 58 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridorWorkings_Olav_R4_Text_0:
# 65 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelCorridorWorkings_Olav_R4_Text_1:
# 71 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: Still yours.$"

ParcelCorridorWorkings_Olav_R4_Text_2:
# 72 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridorWorkings_Olav_R5_Text_0:
# 79 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelCorridorWorkings_Olav_R5_Text_1:
# 85 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: Right. That's the whole of it.$"

ParcelCorridorWorkings_Olav_R5_Text_2:
# 86 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLAV: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridorWorkings_Sigurd_Text_0:
# 92 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "SIGURD: Deeper than it looks.\n"
	.string "Everything is, down here. Go on.$"

ParcelCorridorWorkings_Sigurd_Text_1:
# 93 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "SIGURD: Deep enough.$"

ParcelCorridorWorkings_Sigurd_Text_2:
# 108 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "SIGURD: Water comes in on the left side\n"
	.string "after rain. The road crew didn't ask\l"
	.string "where it goes out.$"

ParcelCorridorWorkings_Sigurd_R2_Text_0:
# 119 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "SIGURD: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelCorridorWorkings_Sigurd_R2_Text_1:
# 121 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "SIGURD: Suit yourself. I'm here.$"

ParcelCorridorWorkings_Sigurd_R2_Text_2:
# 125 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "SIGURD: …Again, then. Later.$"

ParcelCorridorWorkings_Sigurd_R2_Text_3:
# 126 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "SIGURD: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCorridorWorkings_Sigurd_R3_Text_0:
# 133 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "SIGURD: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelCorridorWorkings_Sigurd_R3_Text_1:
# 139 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "SIGURD: Noted. Properly, this time.$"

ParcelCorridorWorkings_Sigurd_R3_Text_2:
# 140 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "SIGURD: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridorWorkings_Sigurd_R4_Text_0:
# 147 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "SIGURD: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCorridorWorkings_Sigurd_R4_Text_1:
# 154 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "SIGURD: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCorridorWorkings_Sigurd_R5_Text_0:
# 161 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "SIGURD: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelCorridorWorkings_Sigurd_R5_Text_1:
# 167 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "SIGURD: Still yours.$"

ParcelCorridorWorkings_Sigurd_R5_Text_2:
# 168 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "SIGURD: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCorridorWorkings_Rannveig_Text_0:
# 174 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "RANNVEIG: I train where the air is thin.\n"
	.string "Makes the lungs honest. You, now.$"

ParcelCorridorWorkings_Rannveig_Text_1:
# 175 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "RANNVEIG: …Honest.$"

ParcelCorridorWorkings_Rannveig_Text_2:
# 190 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "RANNVEIG: The miners say the walls talk\n"
	.string "after dark. The walls are settling.\l"
	.string "Nothing talks.$"

ParcelCorridorWorkings_Rannveig_R2_Text_0:
# 201 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "RANNVEIG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelCorridorWorkings_Rannveig_R2_Text_1:
# 203 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "RANNVEIG: Suit yourself. I'm here.$"

ParcelCorridorWorkings_Rannveig_R2_Text_2:
# 207 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "RANNVEIG: Right. That's the whole of it.$"

ParcelCorridorWorkings_Rannveig_R2_Text_3:
# 208 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "RANNVEIG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCorridorWorkings_Rannveig_R3_Text_0:
# 215 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "RANNVEIG: Three stamps, then five.\n"
	.string "Fine. Me next?$"

ParcelCorridorWorkings_Rannveig_R3_Text_1:
# 221 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "RANNVEIG: Noted. Properly, this time.$"

ParcelCorridorWorkings_Rannveig_R3_Text_2:
# 222 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "RANNVEIG: One more in me. After the\n"
	.string "high ground.$"

ParcelCorridorWorkings_Rannveig_R4_Text_0:
# 229 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "RANNVEIG: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCorridorWorkings_Rannveig_R4_Text_1:
# 236 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "RANNVEIG: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCorridorWorkings_Rannveig_R5_Text_0:
# 243 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "RANNVEIG: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCorridorWorkings_Rannveig_R5_Text_1:
# 250 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "RANNVEIG: Five. Write that one down\n"
	.string "too. I'll know you did.$"

ParcelCorridorWorkings_Torgeir_Text_0:
# 256 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "TORGEIR: Stand still a second. There.\n"
	.string "Feel it? The whole hill's breathing.\l"
	.string "Battle while it does.$"

ParcelCorridorWorkings_Torgeir_Text_1:
# 257 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "TORGEIR: It breathes out, too.$"

ParcelCorridorWorkings_Torgeir_Text_2:
# 272 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "TORGEIR: They'll bore the far side for\n"
	.string "the Phase 2 fill. A hill with holes on\l"
	.string "both sides isn't a hill for long.$"

ParcelCorridorWorkings_Torgeir_R2_Text_0:
# 283 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "TORGEIR: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelCorridorWorkings_Torgeir_R2_Text_1:
# 285 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "TORGEIR: Suit yourself. I'm here.$"

ParcelCorridorWorkings_Torgeir_R2_Text_2:
# 289 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "TORGEIR: That's the one I wanted to\n"
	.string "see.$"

ParcelCorridorWorkings_Torgeir_R2_Text_3:
# 290 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "TORGEIR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelCorridorWorkings_Torgeir_R3_Text_0:
# 297 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "TORGEIR: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelCorridorWorkings_Torgeir_R3_Text_1:
# 304 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "TORGEIR: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelCorridorWorkings_Torgeir_R4_Text_0:
# 311 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "TORGEIR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelCorridorWorkings_Torgeir_R4_Text_1:
# 317 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "TORGEIR: …Fair.$"

ParcelCorridorWorkings_Torgeir_R4_Text_2:
# 318 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "TORGEIR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelCorridorWorkings_Torgeir_R5_Text_0:
# 325 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "TORGEIR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelCorridorWorkings_Torgeir_R5_Text_1:
# 332 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "TORGEIR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelCorridorWorkings_Einar_Text_0:
# 338 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: Scratches on the north wall. Old.\n"
	.string "Not mining marks. Don't touch them.\l"
	.string "Fight.$"

ParcelCorridorWorkings_Einar_Text_1:
# 339 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: …Still standing. Good.$"

ParcelCorridorWorkings_Einar_Text_2:
# 354 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: Somebody was in this hill before\n"
	.string "the CORPS, before the road, before\l"
	.string "anyone wrote things down. They wrote\l"
	.string "on the wall anyway.$"

ParcelCorridorWorkings_Einar_R2_Text_0:
# 365 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelCorridorWorkings_Einar_R2_Text_1:
# 367 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelCorridorWorkings_Einar_R2_Text_2:
# 371 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: …Again, then. Later.$"

ParcelCorridorWorkings_Einar_R2_Text_3:
# 372 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridorWorkings_Einar_R3_Text_0:
# 379 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelCorridorWorkings_Einar_R3_Text_1:
# 385 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: Still yours.$"

ParcelCorridorWorkings_Einar_R3_Text_2:
# 386 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridorWorkings_Einar_R4_Text_0:
# 393 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelCorridorWorkings_Einar_R4_Text_1:
# 399 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: Noted. Properly, this time.$"

ParcelCorridorWorkings_Einar_R4_Text_2:
# 400 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridorWorkings_Einar_R5_Text_0:
# 407 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelCorridorWorkings_Einar_R5_Text_1:
# 413 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: Right. That's the whole of it.$"

ParcelCorridorWorkings_Einar_R5_Text_2:
# 414 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "EINAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCorridorWorkings_Bjorg_Text_0:
# 420 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: Ore cart's rusted to the rail. I\n"
	.string "sit on it. It's a good seat. Battle for\l"
	.string "it.$"

ParcelCorridorWorkings_Bjorg_Text_1:
# 421 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: Seat's yours.$"

ParcelCorridorWorkings_Bjorg_Text_2:
# 436 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: The seam ran out in two years.\n"
	.string "The road wants ten. Somebody's sums are\l"
	.string "off.$"

ParcelCorridorWorkings_Bjorg_R2_Text_0:
# 447 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: I kept the team up for this.\n"
	.string "Again?$"

ParcelCorridorWorkings_Bjorg_R2_Text_1:
# 449 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: Another time, then.$"

ParcelCorridorWorkings_Bjorg_R2_Text_2:
# 453 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: Noted. Properly, this time.$"

ParcelCorridorWorkings_Bjorg_R2_Text_3:
# 454 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridorWorkings_Bjorg_R3_Text_0:
# 461 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelCorridorWorkings_Bjorg_R3_Text_1:
# 467 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: …Again, then. Later.$"

ParcelCorridorWorkings_Bjorg_R3_Text_2:
# 468 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridorWorkings_Bjorg_R4_Text_0:
# 475 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelCorridorWorkings_Bjorg_R4_Text_1:
# 481 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: That's the one I wanted to see.$"

ParcelCorridorWorkings_Bjorg_R4_Text_2:
# 482 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelCorridorWorkings_Bjorg_R5_Text_0:
# 489 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelCorridorWorkings_Bjorg_R5_Text_1:
# 495 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: …Fair.$"

ParcelCorridorWorkings_Bjorg_R5_Text_2:
# 496 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "BJORG: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelCorridorWorkings_Knut_Text_0:
# 502 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: Echo's good in here. Try it. No?\n"
	.string "Then this.$"

ParcelCorridorWorkings_Knut_Text_1:
# 503 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: …Echo of that one, too.$"

ParcelCorridorWorkings_Knut_Text_2:
# 518 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: Don't shout. The props are older\n"
	.string "than you.$"

ParcelCorridorWorkings_Knut_R2_Text_0:
# 529 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelCorridorWorkings_Knut_R2_Text_1:
# 531 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: Fine. Same spot.$"

ParcelCorridorWorkings_Knut_R2_Text_2:
# 535 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: …Again, then. Later.$"

ParcelCorridorWorkings_Knut_R2_Text_3:
# 536 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelCorridorWorkings_Knut_R3_Text_0:
# 543 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelCorridorWorkings_Knut_R3_Text_1:
# 549 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: Right. That's the whole of it.$"

ParcelCorridorWorkings_Knut_R3_Text_2:
# 550 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelCorridorWorkings_Knut_R4_Text_0:
# 557 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCorridorWorkings_Knut_R4_Text_1:
# 563 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: …Fair.$"

ParcelCorridorWorkings_Knut_R4_Text_2:
# 564 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridorWorkings_Knut_R5_Text_0:
# 571 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridorWorkings_Knut_R5_Text_1:
# 577 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: That's the one I wanted to see.$"

ParcelCorridorWorkings_Knut_R5_Text_2:
# 578 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "KNUT: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelCorridorWorkings_Lise_Text_0:
# 584 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: Lamp's going. Fight me before it\n"
	.string "does. I don't want to walk out in the\l"
	.string "dark.$"

ParcelCorridorWorkings_Lise_Text_1:
# 585 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: Lamp held. So did you.$"

ParcelCorridorWorkings_Lise_Text_2:
# 600 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: Dark places tell you how much you\n"
	.string "brought. Most people bring too little.$"

ParcelCorridorWorkings_Lise_R2_Text_0:
# 611 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelCorridorWorkings_Lise_R2_Text_1:
# 613 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: Suit yourself. I'm here.$"

ParcelCorridorWorkings_Lise_R2_Text_2:
# 617 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: Noted. Properly, this time.$"

ParcelCorridorWorkings_Lise_R2_Text_3:
# 618 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelCorridorWorkings_Lise_R3_Text_0:
# 625 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelCorridorWorkings_Lise_R3_Text_1:
# 631 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: That's the one I wanted to see.$"

ParcelCorridorWorkings_Lise_R3_Text_2:
# 632 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: One more in me. After the high\n"
	.string "ground.$"

ParcelCorridorWorkings_Lise_R4_Text_0:
# 639 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelCorridorWorkings_Lise_R4_Text_1:
# 645 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: Right. That's the whole of it.$"

ParcelCorridorWorkings_Lise_R4_Text_2:
# 646 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelCorridorWorkings_Lise_R5_Text_0:
# 653 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelCorridorWorkings_Lise_R5_Text_1:
# 659 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: …Again, then. Later.$"

ParcelCorridorWorkings_Lise_R5_Text_2:
# 660 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "LISE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelCorridorWorkings_Miner_Text_0:
# 668 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "MINER: I go and look at the sign in its\n"
	.string "case. My name's on the back and the\l"
	.string "glass hides it.\p"
	.string "That's right. It was never about the\n"
	.string "name.$"

ParcelCorridorWorkings_Miner_Text_1:
# 673 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "MINER: The sign's in the file. Exhibit\n"
	.string "one, the clerk says. Thirty years I\l"
	.string "carried it and it took a ranger to carry\l"
	.string "it the last hundred yards.$"

ParcelCorridorWorkings_Miner_Text_2:
# 678 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "MINER: You've got the sign. The crew\n"
	.string "hut, up the cut. Give it to the clerk,\l"
	.string "not the foreman. The clerk reads.$"

ParcelCorridorWorkings_Miner_Text_3:
# 683 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "MINER: The closure sign. 1998, CORPS\n"
	.string "stamp, my name on the back. It's in my\l"
	.string "shed behind the hut and the clerk wants\l"
	.string "it for the Phase 2 file.\p"
	.string "My knees won't carry it up the cut. You\n"
	.string "carry it.$"

ParcelCorridorWorkings_Miner_Text_4:
# 689 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "MINER: They logged it a quarry; now it's\n"
	.string "logged 'pending'. I carried the closure\l"
	.string "sign in '98. I'd carry it again. Nobody's\l"
	.string "asked. I've got it in the shed.$"

ParcelCorridorWorkings_Miner_Text_5:
# 693 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "MINER: Closed in '98. The CORPS signed\n"
	.string "the closure; I carried the sign. The\l"
	.string "road crew took the sign down for the\l"
	.string "ballast and nobody signed that.\p"
	.string "Eight of them in here now with lamps and\n"
	.string "opinions. Mind the props.$"

ParcelCorridorWorkings_PairCrew_Text_0:
# 706 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLD CREW: The MAWILE's still at the\n"
	.string "back. Patient.$"

ParcelCorridorWorkings_PairCrew_Text_1:
# 707 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "YOUNGER CREW: For what?$"

ParcelCorridorWorkings_PairCrew_Text_2:
# 708 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLD CREW: For the hole to fill. Then it'll\n"
	.string "move up a level, like the rest of us.\l"
	.string "Everything in here waits better than\l"
	.string "people do.$"

ParcelCorridorWorkings_PairCrew_Text_3:
# 710 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "YOUNGER CREW: The ranger walked every\n"
	.string "chamber with a lamp and wrote down the\l"
	.string "pools.$"

ParcelCorridorWorkings_PairCrew_Text_4:
# 711 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLD CREW: Pools?$"

ParcelCorridorWorkings_PairCrew_Text_5:
# 712 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "YOUNGER CREW: The seepage. Said it's\n"
	.string "the water table coming back to where it\l"
	.string "was before we pumped it. The hole's\l"
	.string "filling in from underneath. Slowly.$"

ParcelCorridorWorkings_PairCrew_Text_6:
# 713 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLD CREW: Good. Something should get\n"
	.string "its own back.$"

ParcelCorridorWorkings_PairCrew_Text_7:
# 715 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLD CREW: We pumped this dry in a month\n"
	.string "and pulled out of it in a year. The seam\l"
	.string "went nowhere.$"

ParcelCorridorWorkings_PairCrew_Text_8:
# 716 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "YOUNGER CREW: Then why's the sand still\n"
	.string "here?$"

ParcelCorridorWorkings_PairCrew_Text_9:
# 717 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLD CREW: Nobody takes sand home.\n"
	.string "Nobody takes anything home from a hole.\l"
	.string "That's the whole history of holes.$"

ParcelCorridorWorkings_PairCrew_Text_10:
# 718 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "YOUNGER CREW: The ARON take the rails.$"

ParcelCorridorWorkings_PairCrew_Text_11:
# 719 "data/maps/ParcelCorridorWorkings/scripts.pory"
	.string "OLD CREW: The ARON are the only\n"
	.string "remediation this place has had. I'd give\l"
	.string "them a contract.$"
