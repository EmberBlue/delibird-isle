ParcelRiverMillWood_MapScripts::
	.byte 0


ParcelRiverMillWood_Halle::
# 9 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MWD_HALLE, ParcelRiverMillWood_Halle_Text_0, ParcelRiverMillWood_Halle_Text_1, ParcelRiverMillWood_Halle_FirstWin
# 13 "data/maps/ParcelRiverMillWood/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 14 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiverMillWood_Halle_3
ParcelRiverMillWood_Halle_1:
# 17 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiverMillWood_Halle_8
ParcelRiverMillWood_Halle_6:
# 20 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiverMillWood_Halle_13
ParcelRiverMillWood_Halle_11:
# 23 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiverMillWood_Halle_18
ParcelRiverMillWood_Halle_16:
# 26 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Halle_Text_2, MSGBOX_DEFAULT
	end

ParcelRiverMillWood_Halle_2:
# 15 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Halle_R2
	goto ParcelRiverMillWood_Halle_1

ParcelRiverMillWood_Halle_3:
# 14 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_HALLE_R2
	goto_if 0, ParcelRiverMillWood_Halle_2
	goto ParcelRiverMillWood_Halle_1

ParcelRiverMillWood_Halle_7:
# 18 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Halle_R3
	goto ParcelRiverMillWood_Halle_6

ParcelRiverMillWood_Halle_8:
# 17 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_HALLE_R3
	goto_if 0, ParcelRiverMillWood_Halle_7
	goto ParcelRiverMillWood_Halle_6

ParcelRiverMillWood_Halle_12:
# 21 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Halle_R4
	goto ParcelRiverMillWood_Halle_11

ParcelRiverMillWood_Halle_13:
# 20 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_HALLE_R4
	goto_if 0, ParcelRiverMillWood_Halle_12
	goto ParcelRiverMillWood_Halle_11

ParcelRiverMillWood_Halle_17:
# 24 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Halle_R5
	goto ParcelRiverMillWood_Halle_16

ParcelRiverMillWood_Halle_18:
# 23 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_HALLE_R5
	goto_if 0, ParcelRiverMillWood_Halle_17
	goto ParcelRiverMillWood_Halle_16


ParcelRiverMillWood_Halle_FirstWin::
# 30 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Halle_Text_2, MSGBOX_DEFAULT
# 31 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Halle_R2::
# 35 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 36 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 37 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Halle_R2_Text_0, MSGBOX_YESNO
# 38 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Halle_R2_2
# 43 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_HALLE_R2, ParcelRiverMillWood_Halle_R2_Text_2
# 44 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Halle_R2_Text_3, MSGBOX_DEFAULT
# 45 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Halle_R2_2:
# 39 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Halle_R2_Text_1, MSGBOX_DEFAULT
# 40 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Halle_R3::
# 49 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 50 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 51 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Halle_R3_Text_0, MSGBOX_YESNO
# 52 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Halle_R3_2
# 57 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_HALLE_R3, ParcelRiverMillWood_Halle_R3_Text_1
# 58 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Halle_R3_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Halle_R3_2:
# 53 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Halle_R2_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Halle_R4::
# 63 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 64 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 65 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Halle_R4_Text_0, MSGBOX_YESNO
# 66 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Halle_R4_2
# 71 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_HALLE_R4, ParcelRiverMillWood_Halle_R4_Text_1
# 72 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Halle_R4_Text_2, MSGBOX_DEFAULT
# 73 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Halle_R4_2:
# 67 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Halle_R2_Text_1, MSGBOX_DEFAULT
# 68 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Halle_R5::
# 77 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 78 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 79 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Halle_R5_Text_0, MSGBOX_YESNO
# 80 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Halle_R5_2
# 85 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_HALLE_R5, ParcelRiverMillWood_Halle_R5_Text_1
# 86 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Halle_R5_Text_2, MSGBOX_DEFAULT
# 87 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Halle_R5_2:
# 81 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Halle_R2_Text_1, MSGBOX_DEFAULT
# 82 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Petter::
# 91 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MWD_PETTER, ParcelRiverMillWood_Petter_Text_0, ParcelRiverMillWood_Petter_Text_1, ParcelRiverMillWood_Petter_FirstWin
# 95 "data/maps/ParcelRiverMillWood/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 96 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiverMillWood_Petter_3
ParcelRiverMillWood_Petter_1:
# 99 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiverMillWood_Petter_8
ParcelRiverMillWood_Petter_6:
# 102 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiverMillWood_Petter_13
ParcelRiverMillWood_Petter_11:
# 105 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiverMillWood_Petter_18
ParcelRiverMillWood_Petter_16:
# 108 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Petter_Text_2, MSGBOX_DEFAULT
	end

ParcelRiverMillWood_Petter_2:
# 97 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Petter_R2
	goto ParcelRiverMillWood_Petter_1

ParcelRiverMillWood_Petter_3:
# 96 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_PETTER_R2
	goto_if 0, ParcelRiverMillWood_Petter_2
	goto ParcelRiverMillWood_Petter_1

ParcelRiverMillWood_Petter_7:
# 100 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Petter_R3
	goto ParcelRiverMillWood_Petter_6

ParcelRiverMillWood_Petter_8:
# 99 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_PETTER_R3
	goto_if 0, ParcelRiverMillWood_Petter_7
	goto ParcelRiverMillWood_Petter_6

ParcelRiverMillWood_Petter_12:
# 103 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Petter_R4
	goto ParcelRiverMillWood_Petter_11

ParcelRiverMillWood_Petter_13:
# 102 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_PETTER_R4
	goto_if 0, ParcelRiverMillWood_Petter_12
	goto ParcelRiverMillWood_Petter_11

ParcelRiverMillWood_Petter_17:
# 106 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Petter_R5
	goto ParcelRiverMillWood_Petter_16

ParcelRiverMillWood_Petter_18:
# 105 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_PETTER_R5
	goto_if 0, ParcelRiverMillWood_Petter_17
	goto ParcelRiverMillWood_Petter_16


ParcelRiverMillWood_Petter_FirstWin::
# 112 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Petter_Text_2, MSGBOX_DEFAULT
# 113 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Petter_R2::
# 117 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 118 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 119 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Petter_R2_Text_0, MSGBOX_YESNO
# 120 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Petter_R2_2
# 125 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_PETTER_R2, ParcelRiverMillWood_Petter_R2_Text_2
# 126 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Petter_R2_Text_3, MSGBOX_DEFAULT
# 127 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Petter_R2_2:
# 121 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Petter_R2_Text_1, MSGBOX_DEFAULT
# 122 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Petter_R3::
# 131 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 132 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 133 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Petter_R3_Text_0, MSGBOX_YESNO
# 134 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Petter_R3_2
# 139 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_PETTER_R3, ParcelRiverMillWood_Petter_R2_Text_2
# 140 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Petter_R3_Text_1, MSGBOX_DEFAULT
# 141 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Petter_R3_2:
# 135 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Petter_R2_Text_1, MSGBOX_DEFAULT
# 136 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Petter_R4::
# 145 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 146 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 147 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Petter_R4_Text_0, MSGBOX_YESNO
# 148 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Petter_R4_2
# 153 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_PETTER_R4, ParcelRiverMillWood_Petter_R4_Text_1
# 154 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Petter_R4_Text_2, MSGBOX_DEFAULT
# 155 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Petter_R4_2:
# 149 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Petter_R2_Text_1, MSGBOX_DEFAULT
# 150 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Petter_R5::
# 159 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 160 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 161 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Petter_R5_Text_0, MSGBOX_YESNO
# 162 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Petter_R5_2
# 167 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_PETTER_R5, ParcelRiverMillWood_Petter_R5_Text_1
# 168 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Petter_R5_Text_2, MSGBOX_DEFAULT
# 169 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Petter_R5_2:
# 163 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Petter_R2_Text_1, MSGBOX_DEFAULT
# 164 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Ingrid::
# 173 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MWD_INGRID, ParcelRiverMillWood_Ingrid_Text_0, ParcelRiverMillWood_Ingrid_Text_1, ParcelRiverMillWood_Ingrid_FirstWin
# 177 "data/maps/ParcelRiverMillWood/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 178 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiverMillWood_Ingrid_3
ParcelRiverMillWood_Ingrid_1:
# 181 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiverMillWood_Ingrid_8
ParcelRiverMillWood_Ingrid_6:
# 184 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiverMillWood_Ingrid_13
ParcelRiverMillWood_Ingrid_11:
# 187 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiverMillWood_Ingrid_18
ParcelRiverMillWood_Ingrid_16:
# 190 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Ingrid_Text_2, MSGBOX_DEFAULT
	end

ParcelRiverMillWood_Ingrid_2:
# 179 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Ingrid_R2
	goto ParcelRiverMillWood_Ingrid_1

ParcelRiverMillWood_Ingrid_3:
# 178 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_INGRID_R2
	goto_if 0, ParcelRiverMillWood_Ingrid_2
	goto ParcelRiverMillWood_Ingrid_1

ParcelRiverMillWood_Ingrid_7:
# 182 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Ingrid_R3
	goto ParcelRiverMillWood_Ingrid_6

ParcelRiverMillWood_Ingrid_8:
# 181 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_INGRID_R3
	goto_if 0, ParcelRiverMillWood_Ingrid_7
	goto ParcelRiverMillWood_Ingrid_6

ParcelRiverMillWood_Ingrid_12:
# 185 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Ingrid_R4
	goto ParcelRiverMillWood_Ingrid_11

ParcelRiverMillWood_Ingrid_13:
# 184 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_INGRID_R4
	goto_if 0, ParcelRiverMillWood_Ingrid_12
	goto ParcelRiverMillWood_Ingrid_11

ParcelRiverMillWood_Ingrid_17:
# 188 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Ingrid_R5
	goto ParcelRiverMillWood_Ingrid_16

ParcelRiverMillWood_Ingrid_18:
# 187 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_INGRID_R5
	goto_if 0, ParcelRiverMillWood_Ingrid_17
	goto ParcelRiverMillWood_Ingrid_16


ParcelRiverMillWood_Ingrid_FirstWin::
# 194 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Ingrid_Text_2, MSGBOX_DEFAULT
# 195 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Ingrid_R2::
# 199 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 200 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 201 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Ingrid_R2_Text_0, MSGBOX_YESNO
# 202 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Ingrid_R2_2
# 207 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_INGRID_R2, ParcelRiverMillWood_Ingrid_R2_Text_2
# 208 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Ingrid_R2_Text_3, MSGBOX_DEFAULT
# 209 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Ingrid_R2_2:
# 203 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Ingrid_R2_Text_1, MSGBOX_DEFAULT
# 204 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Ingrid_R3::
# 213 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 214 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 215 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Ingrid_R3_Text_0, MSGBOX_YESNO
# 216 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Ingrid_R3_2
# 221 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_INGRID_R3, ParcelRiverMillWood_Ingrid_R3_Text_1
# 222 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Ingrid_R3_Text_2, MSGBOX_DEFAULT
# 223 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Ingrid_R3_2:
# 217 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Ingrid_R2_Text_1, MSGBOX_DEFAULT
# 218 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Ingrid_R4::
# 227 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 228 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 229 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Ingrid_R4_Text_0, MSGBOX_YESNO
# 230 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Ingrid_R4_2
# 235 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_INGRID_R4, ParcelRiverMillWood_Ingrid_R4_Text_1
# 236 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Ingrid_R4_Text_2, MSGBOX_DEFAULT
# 237 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Ingrid_R4_2:
# 231 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Ingrid_R2_Text_1, MSGBOX_DEFAULT
# 232 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Ingrid_R5::
# 241 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 242 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 243 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Ingrid_R5_Text_0, MSGBOX_YESNO
# 244 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Ingrid_R5_2
# 249 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_INGRID_R5, ParcelRiverMillWood_Ingrid_R5_Text_1
# 250 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Ingrid_R5_Text_2, MSGBOX_DEFAULT
# 251 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Ingrid_R5_2:
# 245 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Ingrid_R2_Text_1, MSGBOX_DEFAULT
# 246 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Espen::
# 255 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MWD_ESPEN, ParcelRiverMillWood_Espen_Text_0, ParcelRiverMillWood_Espen_Text_1, ParcelRiverMillWood_Espen_FirstWin
# 259 "data/maps/ParcelRiverMillWood/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 260 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiverMillWood_Espen_3
ParcelRiverMillWood_Espen_1:
# 263 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiverMillWood_Espen_8
ParcelRiverMillWood_Espen_6:
# 266 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiverMillWood_Espen_13
ParcelRiverMillWood_Espen_11:
# 269 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiverMillWood_Espen_18
ParcelRiverMillWood_Espen_16:
# 272 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Espen_Text_2, MSGBOX_DEFAULT
	end

ParcelRiverMillWood_Espen_2:
# 261 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Espen_R2
	goto ParcelRiverMillWood_Espen_1

ParcelRiverMillWood_Espen_3:
# 260 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_ESPEN_R2
	goto_if 0, ParcelRiverMillWood_Espen_2
	goto ParcelRiverMillWood_Espen_1

ParcelRiverMillWood_Espen_7:
# 264 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Espen_R3
	goto ParcelRiverMillWood_Espen_6

ParcelRiverMillWood_Espen_8:
# 263 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_ESPEN_R3
	goto_if 0, ParcelRiverMillWood_Espen_7
	goto ParcelRiverMillWood_Espen_6

ParcelRiverMillWood_Espen_12:
# 267 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Espen_R4
	goto ParcelRiverMillWood_Espen_11

ParcelRiverMillWood_Espen_13:
# 266 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_ESPEN_R4
	goto_if 0, ParcelRiverMillWood_Espen_12
	goto ParcelRiverMillWood_Espen_11

ParcelRiverMillWood_Espen_17:
# 270 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Espen_R5
	goto ParcelRiverMillWood_Espen_16

ParcelRiverMillWood_Espen_18:
# 269 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_ESPEN_R5
	goto_if 0, ParcelRiverMillWood_Espen_17
	goto ParcelRiverMillWood_Espen_16


ParcelRiverMillWood_Espen_FirstWin::
# 276 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Espen_Text_2, MSGBOX_DEFAULT
# 277 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Espen_R2::
# 281 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 282 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 283 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Espen_R2_Text_0, MSGBOX_YESNO
# 284 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Espen_R2_2
# 289 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_ESPEN_R2, ParcelRiverMillWood_Espen_R2_Text_2
# 290 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Espen_R2_Text_3, MSGBOX_DEFAULT
# 291 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Espen_R2_2:
# 285 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Espen_R2_Text_1, MSGBOX_DEFAULT
# 286 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Espen_R3::
# 295 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 296 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 297 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Espen_R3_Text_0, MSGBOX_YESNO
# 298 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Espen_R3_2
# 303 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_ESPEN_R3, ParcelRiverMillWood_Espen_R3_Text_1
# 304 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Espen_R3_Text_2, MSGBOX_DEFAULT
# 305 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Espen_R3_2:
# 299 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Espen_R2_Text_1, MSGBOX_DEFAULT
# 300 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Espen_R4::
# 309 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 310 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 311 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Espen_R4_Text_0, MSGBOX_YESNO
# 312 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Espen_R4_2
# 317 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_ESPEN_R4, ParcelRiverMillWood_Espen_R4_Text_1
# 318 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Espen_R4_Text_2, MSGBOX_DEFAULT
# 319 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Espen_R4_2:
# 313 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Espen_R2_Text_1, MSGBOX_DEFAULT
# 314 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Espen_R5::
# 323 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 324 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 325 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Espen_R5_Text_0, MSGBOX_YESNO
# 326 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Espen_R5_2
# 331 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_ESPEN_R5, ParcelRiverMillWood_Espen_R2_Text_2
# 332 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Espen_R5_Text_1, MSGBOX_DEFAULT
# 333 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Espen_R5_2:
# 327 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Espen_R2_Text_1, MSGBOX_DEFAULT
# 328 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Solveig::
# 337 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MWD_SOLVEIG, ParcelRiverMillWood_Solveig_Text_0, ParcelRiverMillWood_Solveig_Text_1, ParcelRiverMillWood_Solveig_FirstWin
# 341 "data/maps/ParcelRiverMillWood/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 342 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiverMillWood_Solveig_3
ParcelRiverMillWood_Solveig_1:
# 345 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiverMillWood_Solveig_8
ParcelRiverMillWood_Solveig_6:
# 348 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiverMillWood_Solveig_13
ParcelRiverMillWood_Solveig_11:
# 351 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiverMillWood_Solveig_18
ParcelRiverMillWood_Solveig_16:
# 354 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Solveig_Text_2, MSGBOX_DEFAULT
	end

ParcelRiverMillWood_Solveig_2:
# 343 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Solveig_R2
	goto ParcelRiverMillWood_Solveig_1

ParcelRiverMillWood_Solveig_3:
# 342 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_SOLVEIG_R2
	goto_if 0, ParcelRiverMillWood_Solveig_2
	goto ParcelRiverMillWood_Solveig_1

ParcelRiverMillWood_Solveig_7:
# 346 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Solveig_R3
	goto ParcelRiverMillWood_Solveig_6

ParcelRiverMillWood_Solveig_8:
# 345 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_SOLVEIG_R3
	goto_if 0, ParcelRiverMillWood_Solveig_7
	goto ParcelRiverMillWood_Solveig_6

ParcelRiverMillWood_Solveig_12:
# 349 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Solveig_R4
	goto ParcelRiverMillWood_Solveig_11

ParcelRiverMillWood_Solveig_13:
# 348 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_SOLVEIG_R4
	goto_if 0, ParcelRiverMillWood_Solveig_12
	goto ParcelRiverMillWood_Solveig_11

ParcelRiverMillWood_Solveig_17:
# 352 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Solveig_R5
	goto ParcelRiverMillWood_Solveig_16

ParcelRiverMillWood_Solveig_18:
# 351 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_SOLVEIG_R5
	goto_if 0, ParcelRiverMillWood_Solveig_17
	goto ParcelRiverMillWood_Solveig_16


ParcelRiverMillWood_Solveig_FirstWin::
# 358 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Solveig_Text_2, MSGBOX_DEFAULT
# 359 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Solveig_R2::
# 363 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 364 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 365 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Solveig_R2_Text_0, MSGBOX_YESNO
# 366 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Solveig_R2_2
# 371 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_SOLVEIG_R2, ParcelRiverMillWood_Solveig_R2_Text_2
# 372 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Solveig_R2_Text_3, MSGBOX_DEFAULT
# 373 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Solveig_R2_2:
# 367 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 368 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Solveig_R3::
# 377 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 378 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 379 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Solveig_R3_Text_0, MSGBOX_YESNO
# 380 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Solveig_R3_2
# 385 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_SOLVEIG_R3, ParcelRiverMillWood_Solveig_R3_Text_1
# 386 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Solveig_R3_Text_2, MSGBOX_DEFAULT
# 387 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Solveig_R3_2:
# 381 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 382 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Solveig_R4::
# 391 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 392 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 393 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Solveig_R4_Text_0, MSGBOX_YESNO
# 394 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Solveig_R4_2
# 399 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_SOLVEIG_R4, ParcelRiverMillWood_Solveig_R2_Text_2
# 400 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Solveig_R4_Text_1, MSGBOX_DEFAULT
# 401 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Solveig_R4_2:
# 395 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 396 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Solveig_R5::
# 405 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 406 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 407 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Solveig_R5_Text_0, MSGBOX_YESNO
# 408 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Solveig_R5_2
# 413 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_SOLVEIG_R5, ParcelRiverMillWood_Solveig_R5_Text_1
# 414 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Solveig_R5_Text_2, MSGBOX_DEFAULT
# 415 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Solveig_R5_2:
# 409 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 410 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Audun::
# 419 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MWD_AUDUN, ParcelRiverMillWood_Audun_Text_0, ParcelRiverMillWood_Audun_Text_1, ParcelRiverMillWood_Audun_FirstWin
# 423 "data/maps/ParcelRiverMillWood/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 424 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiverMillWood_Audun_3
ParcelRiverMillWood_Audun_1:
# 427 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiverMillWood_Audun_8
ParcelRiverMillWood_Audun_6:
# 430 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiverMillWood_Audun_13
ParcelRiverMillWood_Audun_11:
# 433 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiverMillWood_Audun_18
ParcelRiverMillWood_Audun_16:
# 436 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Audun_Text_2, MSGBOX_DEFAULT
	end

ParcelRiverMillWood_Audun_2:
# 425 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Audun_R2
	goto ParcelRiverMillWood_Audun_1

ParcelRiverMillWood_Audun_3:
# 424 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_AUDUN_R2
	goto_if 0, ParcelRiverMillWood_Audun_2
	goto ParcelRiverMillWood_Audun_1

ParcelRiverMillWood_Audun_7:
# 428 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Audun_R3
	goto ParcelRiverMillWood_Audun_6

ParcelRiverMillWood_Audun_8:
# 427 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_AUDUN_R3
	goto_if 0, ParcelRiverMillWood_Audun_7
	goto ParcelRiverMillWood_Audun_6

ParcelRiverMillWood_Audun_12:
# 431 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Audun_R4
	goto ParcelRiverMillWood_Audun_11

ParcelRiverMillWood_Audun_13:
# 430 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_AUDUN_R4
	goto_if 0, ParcelRiverMillWood_Audun_12
	goto ParcelRiverMillWood_Audun_11

ParcelRiverMillWood_Audun_17:
# 434 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Audun_R5
	goto ParcelRiverMillWood_Audun_16

ParcelRiverMillWood_Audun_18:
# 433 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_AUDUN_R5
	goto_if 0, ParcelRiverMillWood_Audun_17
	goto ParcelRiverMillWood_Audun_16


ParcelRiverMillWood_Audun_FirstWin::
# 440 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Audun_Text_2, MSGBOX_DEFAULT
# 441 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Audun_R2::
# 445 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 446 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 447 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Audun_R2_Text_0, MSGBOX_YESNO
# 448 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Audun_R2_2
# 453 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_AUDUN_R2, ParcelRiverMillWood_Audun_R2_Text_2
# 454 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Audun_R2_Text_3, MSGBOX_DEFAULT
# 455 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Audun_R2_2:
# 449 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Audun_R2_Text_1, MSGBOX_DEFAULT
# 450 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Audun_R3::
# 459 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 460 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 461 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Audun_R3_Text_0, MSGBOX_YESNO
# 462 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Audun_R3_2
# 467 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_AUDUN_R3, ParcelRiverMillWood_Audun_R2_Text_2
# 468 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Audun_R3_Text_1, MSGBOX_DEFAULT
# 469 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Audun_R3_2:
# 463 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Audun_R2_Text_1, MSGBOX_DEFAULT
# 464 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Audun_R4::
# 473 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 474 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 475 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Audun_R4_Text_0, MSGBOX_YESNO
# 476 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Audun_R4_2
# 481 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_AUDUN_R4, ParcelRiverMillWood_Audun_R4_Text_1
# 482 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Audun_R4_Text_2, MSGBOX_DEFAULT
# 483 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Audun_R4_2:
# 477 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Audun_R2_Text_1, MSGBOX_DEFAULT
# 478 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Audun_R5::
# 487 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 488 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 489 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Audun_R5_Text_0, MSGBOX_YESNO
# 490 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Audun_R5_2
# 495 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_AUDUN_R5, ParcelRiverMillWood_Audun_R5_Text_1
# 496 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Audun_R5_Text_2, MSGBOX_DEFAULT
# 497 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Audun_R5_2:
# 491 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Audun_R2_Text_1, MSGBOX_DEFAULT
# 492 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Folke::
# 501 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MWD_FOLKE, ParcelRiverMillWood_Folke_Text_0, ParcelRiverMillWood_Folke_Text_1, ParcelRiverMillWood_Folke_FirstWin
# 505 "data/maps/ParcelRiverMillWood/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 506 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiverMillWood_Folke_3
ParcelRiverMillWood_Folke_1:
# 509 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiverMillWood_Folke_8
ParcelRiverMillWood_Folke_6:
# 512 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiverMillWood_Folke_13
ParcelRiverMillWood_Folke_11:
# 515 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiverMillWood_Folke_18
ParcelRiverMillWood_Folke_16:
# 518 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Folke_Text_2, MSGBOX_DEFAULT
	end

ParcelRiverMillWood_Folke_2:
# 507 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Folke_R2
	goto ParcelRiverMillWood_Folke_1

ParcelRiverMillWood_Folke_3:
# 506 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_FOLKE_R2
	goto_if 0, ParcelRiverMillWood_Folke_2
	goto ParcelRiverMillWood_Folke_1

ParcelRiverMillWood_Folke_7:
# 510 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Folke_R3
	goto ParcelRiverMillWood_Folke_6

ParcelRiverMillWood_Folke_8:
# 509 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_FOLKE_R3
	goto_if 0, ParcelRiverMillWood_Folke_7
	goto ParcelRiverMillWood_Folke_6

ParcelRiverMillWood_Folke_12:
# 513 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Folke_R4
	goto ParcelRiverMillWood_Folke_11

ParcelRiverMillWood_Folke_13:
# 512 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_FOLKE_R4
	goto_if 0, ParcelRiverMillWood_Folke_12
	goto ParcelRiverMillWood_Folke_11

ParcelRiverMillWood_Folke_17:
# 516 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Folke_R5
	goto ParcelRiverMillWood_Folke_16

ParcelRiverMillWood_Folke_18:
# 515 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_FOLKE_R5
	goto_if 0, ParcelRiverMillWood_Folke_17
	goto ParcelRiverMillWood_Folke_16


ParcelRiverMillWood_Folke_FirstWin::
# 522 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Folke_Text_2, MSGBOX_DEFAULT
# 523 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Folke_R2::
# 527 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 528 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 529 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Folke_R2_Text_0, MSGBOX_YESNO
# 530 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Folke_R2_2
# 535 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_FOLKE_R2, ParcelRiverMillWood_Folke_R2_Text_2
# 536 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Folke_R2_Text_3, MSGBOX_DEFAULT
# 537 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Folke_R2_2:
# 531 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Folke_R2_Text_1, MSGBOX_DEFAULT
# 532 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Folke_R3::
# 541 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 542 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 543 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Folke_R3_Text_0, MSGBOX_YESNO
# 544 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Folke_R3_2
# 549 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_FOLKE_R3, ParcelRiverMillWood_Folke_R3_Text_1
# 550 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Folke_R3_Text_2, MSGBOX_DEFAULT
# 551 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Folke_R3_2:
# 545 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Folke_R2_Text_1, MSGBOX_DEFAULT
# 546 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Folke_R4::
# 555 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 556 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 557 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Folke_R4_Text_0, MSGBOX_YESNO
# 558 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Folke_R4_2
# 563 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_FOLKE_R4, ParcelRiverMillWood_Folke_R4_Text_1
# 564 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Folke_R4_Text_2, MSGBOX_DEFAULT
# 565 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Folke_R4_2:
# 559 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Folke_R2_Text_1, MSGBOX_DEFAULT
# 560 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Folke_R5::
# 569 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 570 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 571 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Folke_R5_Text_0, MSGBOX_YESNO
# 572 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Folke_R5_2
# 577 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_FOLKE_R5, ParcelRiverMillWood_Folke_R5_Text_1
# 578 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Folke_R5_Text_2, MSGBOX_DEFAULT
# 579 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Folke_R5_2:
# 573 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Folke_R2_Text_1, MSGBOX_DEFAULT
# 574 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Jens::
# 583 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MWD_JENS, ParcelRiverMillWood_Jens_Text_0, ParcelRiverMillWood_Jens_Text_1, ParcelRiverMillWood_Jens_FirstWin
# 587 "data/maps/ParcelRiverMillWood/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 588 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiverMillWood_Jens_3
ParcelRiverMillWood_Jens_1:
# 591 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiverMillWood_Jens_8
ParcelRiverMillWood_Jens_6:
# 594 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiverMillWood_Jens_13
ParcelRiverMillWood_Jens_11:
# 597 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiverMillWood_Jens_18
ParcelRiverMillWood_Jens_16:
# 600 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Jens_Text_2, MSGBOX_DEFAULT
	end

ParcelRiverMillWood_Jens_2:
# 589 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Jens_R2
	goto ParcelRiverMillWood_Jens_1

ParcelRiverMillWood_Jens_3:
# 588 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_JENS_R2
	goto_if 0, ParcelRiverMillWood_Jens_2
	goto ParcelRiverMillWood_Jens_1

ParcelRiverMillWood_Jens_7:
# 592 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Jens_R3
	goto ParcelRiverMillWood_Jens_6

ParcelRiverMillWood_Jens_8:
# 591 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_JENS_R3
	goto_if 0, ParcelRiverMillWood_Jens_7
	goto ParcelRiverMillWood_Jens_6

ParcelRiverMillWood_Jens_12:
# 595 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Jens_R4
	goto ParcelRiverMillWood_Jens_11

ParcelRiverMillWood_Jens_13:
# 594 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_JENS_R4
	goto_if 0, ParcelRiverMillWood_Jens_12
	goto ParcelRiverMillWood_Jens_11

ParcelRiverMillWood_Jens_17:
# 598 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto ParcelRiverMillWood_Jens_R5
	goto ParcelRiverMillWood_Jens_16

ParcelRiverMillWood_Jens_18:
# 597 "data/maps/ParcelRiverMillWood/scripts.pory"
	checktrainerflag TRAINER_SKALD_MWD_JENS_R5
	goto_if 0, ParcelRiverMillWood_Jens_17
	goto ParcelRiverMillWood_Jens_16


ParcelRiverMillWood_Jens_FirstWin::
# 604 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Jens_Text_2, MSGBOX_DEFAULT
# 605 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Jens_R2::
# 609 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 610 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 611 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Jens_R2_Text_0, MSGBOX_YESNO
# 612 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Jens_R2_2
# 617 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_JENS_R2, ParcelRiverMillWood_Jens_R2_Text_2
# 618 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Jens_R2_Text_3, MSGBOX_DEFAULT
# 619 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Jens_R2_2:
# 613 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Jens_R2_Text_1, MSGBOX_DEFAULT
# 614 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Jens_R3::
# 623 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 624 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 625 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Jens_R3_Text_0, MSGBOX_YESNO
# 626 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Jens_R3_2
# 631 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_JENS_R3, ParcelRiverMillWood_Jens_R3_Text_1
# 632 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Jens_R3_Text_2, MSGBOX_DEFAULT
# 633 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Jens_R3_2:
# 627 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Jens_R2_Text_1, MSGBOX_DEFAULT
# 628 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Jens_R4::
# 637 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 638 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 639 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Jens_R4_Text_0, MSGBOX_YESNO
# 640 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Jens_R4_2
# 645 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_JENS_R4, ParcelRiverMillWood_Jens_R4_Text_1
# 646 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Jens_R4_Text_2, MSGBOX_DEFAULT
# 647 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Jens_R4_2:
# 641 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Jens_R2_Text_1, MSGBOX_DEFAULT
# 642 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Jens_R5::
# 651 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 652 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 653 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Jens_R5_Text_0, MSGBOX_YESNO
# 654 "data/maps/ParcelRiverMillWood/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverMillWood_Jens_R5_2
# 659 "data/maps/ParcelRiverMillWood/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MWD_JENS_R5, ParcelRiverMillWood_Jens_R5_Text_1
# 660 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Jens_R5_Text_2, MSGBOX_DEFAULT
# 661 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Jens_R5_2:
# 655 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Jens_R2_Text_1, MSGBOX_DEFAULT
# 656 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_Sawyer::
# 665 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 666 "data/maps/ParcelRiverMillWood/scripts.pory"
	faceplayer
# 667 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverMillWood_Sawyer_3
ParcelRiverMillWood_Sawyer_1:
# 672 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLANK, ParcelRiverMillWood_Sawyer_8
ParcelRiverMillWood_Sawyer_6:
# 680 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverMillWood_Sawyer_12
# 685 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverMillWood_Sawyer_15
# 690 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Sawyer_Text_6, MSGBOX_DEFAULT
# 691 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Sawyer_2:
# 668 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Sawyer_Text_0, MSGBOX_DEFAULT
# 669 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Sawyer_3:
# 667 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLANK_DONE, ParcelRiverMillWood_Sawyer_2
	goto ParcelRiverMillWood_Sawyer_1

ParcelRiverMillWood_Sawyer_7:
# 673 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Sawyer_Text_1, MSGBOX_DEFAULT
# 674 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Sawyer_Text_2, MSGBOX_DEFAULT
# 675 "data/maps/ParcelRiverMillWood/scripts.pory"
	setflag FLAG_SKALD_Q_PLANK_HAVE
# 676 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Sawyer_Text_3, MSGBOX_DEFAULT
# 677 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Sawyer_8:
# 672 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_PLANK_HAVE, ParcelRiverMillWood_Sawyer_7
	goto ParcelRiverMillWood_Sawyer_6

ParcelRiverMillWood_Sawyer_12:
# 681 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Sawyer_Text_4, MSGBOX_DEFAULT
# 682 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_Sawyer_15:
# 686 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Sawyer_Text_5, MSGBOX_DEFAULT
# 687 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end


ParcelRiverMillWood_SignEdge::
# 695 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_SignEdge_Text_0, MSGBOX_SIGN
	end


ParcelRiverMillWood_SignRace::
# 699 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_SignRace_Text_0, MSGBOX_SIGN
	end


ParcelRiverMillWood_ItemGreatBall::
# 702 "data/maps/ParcelRiverMillWood/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelRiverMillWood_ItemEther::
# 703 "data/maps/ParcelRiverMillWood/scripts.pory"
	finditem ITEM_ETHER
	end


ParcelRiverMillWood_ItemParalyzeHeal::
# 704 "data/maps/ParcelRiverMillWood/scripts.pory"
	finditem ITEM_PARALYZE_HEAL
	end


ParcelRiverMillWood_DeadEndNorth::
# 706 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_DeadEndNorth_Text_0, MSGBOX_SIGN
	end


ParcelRiverMillWood_DeadEndSouth::
# 710 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_DeadEndSouth_Text_0, MSGBOX_SIGN
	end


ParcelRiverMillWood_PairCoppice::
# 717 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 718 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverMillWood_PairCoppice_2
# 722 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiverMillWood_PairCoppice_3
# 728 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairCoppice_Text_7, MSGBOX_DEFAULT
# 729 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairCoppice_Text_8, MSGBOX_DEFAULT
# 730 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairCoppice_Text_9, MSGBOX_DEFAULT
# 731 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairCoppice_Text_10, MSGBOX_DEFAULT
# 732 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairCoppice_Text_11, MSGBOX_DEFAULT
ParcelRiverMillWood_PairCoppice_1:
# 734 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_PairCoppice_2:
# 719 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairCoppice_Text_0, MSGBOX_DEFAULT
# 720 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairCoppice_Text_1, MSGBOX_DEFAULT
# 721 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairCoppice_Text_2, MSGBOX_DEFAULT
	goto ParcelRiverMillWood_PairCoppice_1

ParcelRiverMillWood_PairCoppice_3:
# 723 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairCoppice_Text_3, MSGBOX_DEFAULT
# 724 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairCoppice_Text_4, MSGBOX_DEFAULT
# 725 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairCoppice_Text_5, MSGBOX_DEFAULT
# 726 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairCoppice_Text_6, MSGBOX_DEFAULT
	goto ParcelRiverMillWood_PairCoppice_1


ParcelRiverMillWood_Board1::
# 741 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Board1_Text_0, MSGBOX_SIGN
	end


ParcelRiverMillWood_Board2::
# 746 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Board2_Text_0, MSGBOX_SIGN
	end


ParcelRiverMillWood_PairStump::
# 753 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 754 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverMillWood_PairStump_2
# 758 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiverMillWood_PairStump_3
# 764 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairStump_Text_7, MSGBOX_DEFAULT
# 765 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairStump_Text_8, MSGBOX_DEFAULT
# 766 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairStump_Text_9, MSGBOX_DEFAULT
# 767 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairStump_Text_10, MSGBOX_DEFAULT
# 768 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairStump_Text_11, MSGBOX_DEFAULT
ParcelRiverMillWood_PairStump_1:
# 770 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_PairStump_2:
# 755 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairStump_Text_0, MSGBOX_DEFAULT
# 756 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairStump_Text_1, MSGBOX_DEFAULT
# 757 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairStump_Text_2, MSGBOX_DEFAULT
	goto ParcelRiverMillWood_PairStump_1

ParcelRiverMillWood_PairStump_3:
# 759 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairStump_Text_3, MSGBOX_DEFAULT
# 760 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairStump_Text_4, MSGBOX_DEFAULT
# 761 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairStump_Text_5, MSGBOX_DEFAULT
# 762 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairStump_Text_6, MSGBOX_DEFAULT
	goto ParcelRiverMillWood_PairStump_1


ParcelRiverMillWood_Board3::
# 777 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Board3_Text_0, MSGBOX_SIGN
	end


ParcelRiverMillWood_Board10::
# 784 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_Board10_Text_0, MSGBOX_SIGN
	end


ParcelRiverMillWood_PairRide::
# 791 "data/maps/ParcelRiverMillWood/scripts.pory"
	lock
# 792 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverMillWood_PairRide_2
# 796 "data/maps/ParcelRiverMillWood/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiverMillWood_PairRide_3
# 802 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairRide_Text_7, MSGBOX_DEFAULT
# 803 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairRide_Text_8, MSGBOX_DEFAULT
# 804 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairRide_Text_9, MSGBOX_DEFAULT
# 805 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairRide_Text_10, MSGBOX_DEFAULT
# 806 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairRide_Text_11, MSGBOX_DEFAULT
ParcelRiverMillWood_PairRide_1:
# 808 "data/maps/ParcelRiverMillWood/scripts.pory"
	release
	end

ParcelRiverMillWood_PairRide_2:
# 793 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairRide_Text_0, MSGBOX_DEFAULT
# 794 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairRide_Text_1, MSGBOX_DEFAULT
# 795 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairRide_Text_2, MSGBOX_DEFAULT
	goto ParcelRiverMillWood_PairRide_1

ParcelRiverMillWood_PairRide_3:
# 797 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairRide_Text_3, MSGBOX_DEFAULT
# 798 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairRide_Text_4, MSGBOX_DEFAULT
# 799 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairRide_Text_5, MSGBOX_DEFAULT
# 800 "data/maps/ParcelRiverMillWood/scripts.pory"
	msgbox ParcelRiverMillWood_PairRide_Text_6, MSGBOX_DEFAULT
	goto ParcelRiverMillWood_PairRide_1


ParcelRiverMillWood_Halle_Text_0:
# 10 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: This stand is twelve years old.\n"
	.string "The beetles know it to the week. Battle!$"

ParcelRiverMillWood_Halle_Text_1:
# 11 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: To the week.$"

ParcelRiverMillWood_Halle_Text_2:
# 26 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: Cut on a round and the wood\n"
	.string "never runs out. Cut it all once and you\l"
	.string "get one winter.$"

ParcelRiverMillWood_Halle_R2_Text_0:
# 37 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelRiverMillWood_Halle_R2_Text_1:
# 39 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: Another time, then.$"

ParcelRiverMillWood_Halle_R2_Text_2:
# 43 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: Still yours.$"

ParcelRiverMillWood_Halle_R2_Text_3:
# 44 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiverMillWood_Halle_R3_Text_0:
# 51 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelRiverMillWood_Halle_R3_Text_1:
# 57 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: Noted. Properly, this time.$"

ParcelRiverMillWood_Halle_R3_Text_2:
# 58 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiverMillWood_Halle_R4_Text_0:
# 65 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiverMillWood_Halle_R4_Text_1:
# 71 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: …Fair.$"

ParcelRiverMillWood_Halle_R4_Text_2:
# 72 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiverMillWood_Halle_R5_Text_0:
# 79 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelRiverMillWood_Halle_R5_Text_1:
# 85 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: That's the one I wanted to see.$"

ParcelRiverMillWood_Halle_R5_Text_2:
# 86 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "HALLE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRiverMillWood_Petter_Text_0:
# 92 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "PETTER: NINCADA under every stump. I\n"
	.string "count them for the mill book. Don't step\l"
	.string "on the stumps. Fight!$"

ParcelRiverMillWood_Petter_Text_1:
# 93 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "PETTER: You stepped round them. Good.$"

ParcelRiverMillWood_Petter_Text_2:
# 108 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "PETTER: The mill book has columns for\n"
	.string "timber and columns for bugs. The bugs\l"
	.string "are the only column that's gone up.$"

ParcelRiverMillWood_Petter_R2_Text_0:
# 119 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "PETTER: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelRiverMillWood_Petter_R2_Text_1:
# 121 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "PETTER: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiverMillWood_Petter_R2_Text_2:
# 125 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "PETTER: Right. That's the whole of it.$"

ParcelRiverMillWood_Petter_R2_Text_3:
# 126 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "PETTER: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiverMillWood_Petter_R3_Text_0:
# 133 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "PETTER: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelRiverMillWood_Petter_R3_Text_1:
# 140 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "PETTER: One more in me. After the high\n"
	.string "ground.$"

ParcelRiverMillWood_Petter_R4_Text_0:
# 147 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "PETTER: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelRiverMillWood_Petter_R4_Text_1:
# 153 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "PETTER: That's the one I wanted to see.$"

ParcelRiverMillWood_Petter_R4_Text_2:
# 154 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "PETTER: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelRiverMillWood_Petter_R5_Text_0:
# 161 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "PETTER: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelRiverMillWood_Petter_R5_Text_1:
# 167 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "PETTER: …Again, then. Later.$"

ParcelRiverMillWood_Petter_R5_Text_2:
# 168 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "PETTER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiverMillWood_Ingrid_Text_0:
# 174 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: Mill's quiet. Nothing to do but\n"
	.string "this. Go on.$"

ParcelRiverMillWood_Ingrid_Text_1:
# 175 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: Still quiet.$"

ParcelRiverMillWood_Ingrid_Text_2:
# 190 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: The race hasn't turned the\n"
	.string "wheel since the Board metered the\l"
	.string "water. My father oils it anyway.$"

ParcelRiverMillWood_Ingrid_R2_Text_0:
# 201 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelRiverMillWood_Ingrid_R2_Text_1:
# 203 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiverMillWood_Ingrid_R2_Text_2:
# 207 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: Noted. Properly, this time.$"

ParcelRiverMillWood_Ingrid_R2_Text_3:
# 208 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiverMillWood_Ingrid_R3_Text_0:
# 215 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelRiverMillWood_Ingrid_R3_Text_1:
# 221 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: …Fair.$"

ParcelRiverMillWood_Ingrid_R3_Text_2:
# 222 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiverMillWood_Ingrid_R4_Text_0:
# 229 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelRiverMillWood_Ingrid_R4_Text_1:
# 235 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: That's the one I wanted to see.$"

ParcelRiverMillWood_Ingrid_R4_Text_2:
# 236 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiverMillWood_Ingrid_R5_Text_0:
# 243 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelRiverMillWood_Ingrid_R5_Text_1:
# 249 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: Still yours.$"

ParcelRiverMillWood_Ingrid_R5_Text_2:
# 250 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "INGRID: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRiverMillWood_Espen_Text_0:
# 256 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ESPEN: I know every track in here. Race\n"
	.string "you to the mill. No, battle first!$"

ParcelRiverMillWood_Espen_Text_1:
# 257 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ESPEN: Then race you.$"

ParcelRiverMillWood_Espen_Text_2:
# 272 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ESPEN: The far track's grown over.\n"
	.string "That's the one to the old race. Nobody\l"
	.string "uses it.$"

ParcelRiverMillWood_Espen_R2_Text_0:
# 283 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ESPEN: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelRiverMillWood_Espen_R2_Text_1:
# 285 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ESPEN: Suit yourself. I'm here.$"

ParcelRiverMillWood_Espen_R2_Text_2:
# 289 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ESPEN: Still yours.$"

ParcelRiverMillWood_Espen_R2_Text_3:
# 290 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ESPEN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiverMillWood_Espen_R3_Text_0:
# 297 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ESPEN: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiverMillWood_Espen_R3_Text_1:
# 303 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ESPEN: That's the one I wanted to see.$"

ParcelRiverMillWood_Espen_R3_Text_2:
# 304 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ESPEN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiverMillWood_Espen_R4_Text_0:
# 311 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ESPEN: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelRiverMillWood_Espen_R4_Text_1:
# 317 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ESPEN: Noted. Properly, this time.$"

ParcelRiverMillWood_Espen_R4_Text_2:
# 318 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ESPEN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiverMillWood_Espen_R5_Text_0:
# 325 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ESPEN: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiverMillWood_Espen_R5_Text_1:
# 332 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ESPEN: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRiverMillWood_Solveig_Text_0:
# 338 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SOLVEIG: I came for the quiet. You're\n"
	.string "the third today. Battle, since you're\l"
	.string "here.$"

ParcelRiverMillWood_Solveig_Text_1:
# 339 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SOLVEIG: Quiet again, nearly.$"

ParcelRiverMillWood_Solveig_Text_2:
# 354 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SOLVEIG: You can hear the river\n"
	.string "through the trees if you stand still. It\l"
	.string "sounds lower than last year.$"

ParcelRiverMillWood_Solveig_R2_Text_0:
# 365 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SOLVEIG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelRiverMillWood_Solveig_R2_Text_1:
# 367 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SOLVEIG: No hurry. The water keeps.$"

ParcelRiverMillWood_Solveig_R2_Text_2:
# 371 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SOLVEIG: …Fair.$"

ParcelRiverMillWood_Solveig_R2_Text_3:
# 372 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SOLVEIG: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelRiverMillWood_Solveig_R3_Text_0:
# 379 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SOLVEIG: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelRiverMillWood_Solveig_R3_Text_1:
# 385 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SOLVEIG: …Again, then. Later.$"

ParcelRiverMillWood_Solveig_R3_Text_2:
# 386 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SOLVEIG: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelRiverMillWood_Solveig_R4_Text_0:
# 393 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SOLVEIG: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiverMillWood_Solveig_R4_Text_1:
# 400 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SOLVEIG: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiverMillWood_Solveig_R5_Text_0:
# 407 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SOLVEIG: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelRiverMillWood_Solveig_R5_Text_1:
# 413 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SOLVEIG: Still yours.$"

ParcelRiverMillWood_Solveig_R5_Text_2:
# 414 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SOLVEIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRiverMillWood_Audun_Text_0:
# 420 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "AUDUN: Charcoal pits under the moss.\n"
	.string "Old ones. The whole wood was fuel once.\l"
	.string "Battle!$"

ParcelRiverMillWood_Audun_Text_1:
# 421 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "AUDUN: Cooling off.$"

ParcelRiverMillWood_Audun_Text_2:
# 436 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "AUDUN: They burned the wood for the\n"
	.string "forge and planted it back for the mill.\l"
	.string "The forge is gone. The mill's going. The\l"
	.string "wood's still here.$"

ParcelRiverMillWood_Audun_R2_Text_0:
# 447 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "AUDUN: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelRiverMillWood_Audun_R2_Text_1:
# 449 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "AUDUN: Another time, then.$"

ParcelRiverMillWood_Audun_R2_Text_2:
# 453 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "AUDUN: That's the one I wanted to see.$"

ParcelRiverMillWood_Audun_R2_Text_3:
# 454 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "AUDUN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiverMillWood_Audun_R3_Text_0:
# 461 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "AUDUN: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiverMillWood_Audun_R3_Text_1:
# 468 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "AUDUN: One more in me. After the high\n"
	.string "ground.$"

ParcelRiverMillWood_Audun_R4_Text_0:
# 475 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "AUDUN: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiverMillWood_Audun_R4_Text_1:
# 481 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "AUDUN: …Again, then. Later.$"

ParcelRiverMillWood_Audun_R4_Text_2:
# 482 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "AUDUN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiverMillWood_Audun_R5_Text_0:
# 489 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "AUDUN: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelRiverMillWood_Audun_R5_Text_1:
# 495 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "AUDUN: Right. That's the whole of it.$"

ParcelRiverMillWood_Audun_R5_Text_2:
# 496 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "AUDUN: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRiverMillWood_Folke_Text_0:
# 502 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: Marking the next cut. Orange\n"
	.string "paint stays, blue goes. Don't lean on\l"
	.string "the orange ones. Fight.$"

ParcelRiverMillWood_Folke_Text_1:
# 503 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: Orange ones held.$"

ParcelRiverMillWood_Folke_Text_2:
# 518 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: The Board wants the blue ones\n"
	.string "this year AND next year's. I only have\l"
	.string "one tin of blue.$"

ParcelRiverMillWood_Folke_R2_Text_0:
# 529 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelRiverMillWood_Folke_R2_Text_1:
# 531 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiverMillWood_Folke_R2_Text_2:
# 535 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: Still yours.$"

ParcelRiverMillWood_Folke_R2_Text_3:
# 536 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiverMillWood_Folke_R3_Text_0:
# 543 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiverMillWood_Folke_R3_Text_1:
# 549 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: …Fair.$"

ParcelRiverMillWood_Folke_R3_Text_2:
# 550 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiverMillWood_Folke_R4_Text_0:
# 557 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelRiverMillWood_Folke_R4_Text_1:
# 563 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: Noted. Properly, this time.$"

ParcelRiverMillWood_Folke_R4_Text_2:
# 564 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiverMillWood_Folke_R5_Text_0:
# 571 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelRiverMillWood_Folke_R5_Text_1:
# 577 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: …Again, then. Later.$"

ParcelRiverMillWood_Folke_R5_Text_2:
# 578 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FOLKE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRiverMillWood_Jens_Text_0:
# 584 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: Camped a week. Seen a KECLEON\n"
	.string "twice, maybe. Maybe once. Battle while I\l"
	.string "think.$"

ParcelRiverMillWood_Jens_Text_1:
# 585 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: Twice. Definitely twice.$"

ParcelRiverMillWood_Jens_Text_2:
# 600 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: The wood has more in it than the\n"
	.string "mill book says. The book only counts\l"
	.string "what sells.$"

ParcelRiverMillWood_Jens_R2_Text_0:
# 611 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelRiverMillWood_Jens_R2_Text_1:
# 613 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: Suit yourself. I'm here.$"

ParcelRiverMillWood_Jens_R2_Text_2:
# 617 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: That's the one I wanted to see.$"

ParcelRiverMillWood_Jens_R2_Text_3:
# 618 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiverMillWood_Jens_R3_Text_0:
# 625 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelRiverMillWood_Jens_R3_Text_1:
# 631 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: …Fair.$"

ParcelRiverMillWood_Jens_R3_Text_2:
# 632 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: One more in me. After the high\n"
	.string "ground.$"

ParcelRiverMillWood_Jens_R4_Text_0:
# 639 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelRiverMillWood_Jens_R4_Text_1:
# 645 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: Still yours.$"

ParcelRiverMillWood_Jens_R4_Text_2:
# 646 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiverMillWood_Jens_R5_Text_0:
# 653 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelRiverMillWood_Jens_R5_Text_1:
# 659 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: Noted. Properly, this time.$"

ParcelRiverMillWood_Jens_R5_Text_2:
# 660 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "JENS: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelRiverMillWood_Sawyer_Text_0:
# 668 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SAWYER: Five stands on the Board's\n"
	.string "paper became two, and the two are mine\l"
	.string "to leave standing.\p"
	.string "The hill farmer's boat is in the water. I\n"
	.string "went and knocked on the keel. Still\l"
	.string "sound.$"

ParcelRiverMillWood_Sawyer_Text_1:
# 673 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SAWYER: A keel plank for a hill farmer's\n"
	.string "boat. Hm.\p"
	.string "The Board's paper wants five stands.\n"
	.string "This plank came off the one stand I'd\l"
	.string "cut anyway, twelve winters ago, and it's\l"
	.string "been drying under the eaves since. It's\l"
	.string "the only seasoned timber in the valley\l"
	.string "that isn't on a Board invoice.$"

ParcelRiverMillWood_Sawyer_Text_2:
# 674 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SAWYER: Take it to him. Tell him it's the\n"
	.string "last of the old round. He'll know what\l"
	.string "that means for the next one.$"

ParcelRiverMillWood_Sawyer_Text_3:
# 676 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "You shoulder the plank. It smells of a\n"
	.string "summer that happened before you were\l"
	.string "born.$"

ParcelRiverMillWood_Sawyer_Text_4:
# 681 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SAWYER: The Board's paper says one\n"
	.string "stand a year again. The wood's paper\l"
	.string "agrees for once. I read both. The race\l"
	.string "ran an hour last week. The miller stood\l"
	.string "in it.$"

ParcelRiverMillWood_Sawyer_Text_5:
# 686 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SAWYER: The Board's paper said three\n"
	.string "stands. Then HAUKFELL's ground went\l"
	.string "and the Board's paper said five --\l"
	.string "timber for the warming centre, for the\l"
	.string "relocation houses.\p"
	.string "Good cause. The wood's paper still says\n"
	.string "one. I'm cutting two and not sleeping.$"

ParcelRiverMillWood_Sawyer_Text_6:
# 690 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "SAWYER: Coppice wood. Twelve-year\n"
	.string "round, one stand a year, and the mill\l"
	.string "never wanted for timber in forty years.\p"
	.string "The Board's paper says take three\n"
	.string "stands this year. The wood's paper says\l"
	.string "no. I read the wood's.$"

ParcelRiverMillWood_SignEdge_Text_0:
# 695 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "ELVSUND MILL WOOD. Coppice cut on a\n"
	.string "twelve-year round.\p"
	.string "Take what fell. Leave what stands.$"

ParcelRiverMillWood_SignRace_Text_0:
# 699 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "The mill race starts here. The wheel has\n"
	.string "been still since the Board metered the\l"
	.string "water.$"

ParcelRiverMillWood_DeadEndNorth_Text_0:
# 706 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "The track runs out in brush. Nobody has\n"
	.string "cut it since the mill slowed.$"

ParcelRiverMillWood_DeadEndSouth_Text_0:
# 710 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "The old race track. Grown over to the\n"
	.string "knee. The water it fed doesn't come this\l"
	.string "way now.$"

ParcelRiverMillWood_PairCoppice_Text_0:
# 719 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "WOODCUTTER: The race has water in it.\n"
	.string "First time since you started.$"

ParcelRiverMillWood_PairCoppice_Text_1:
# 720 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "APPRENTICE: The Board let it through?$"

ParcelRiverMillWood_PairCoppice_Text_2:
# 721 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "WOODCUTTER: The Board publishes two\n"
	.string "columns and can't explain the second\l"
	.string "one, so it lets water through to make\l"
	.string "the numbers quieter. Same wheel either\l"
	.string "way. Turn it.$"

ParcelRiverMillWood_PairCoppice_Text_3:
# 723 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "APPRENTICE: The ranger counted the\n"
	.string "stools. All of them. Took the whole\l"
	.string "afternoon.$"

ParcelRiverMillWood_PairCoppice_Text_4:
# 724 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "WOODCUTTER: And?$"

ParcelRiverMillWood_PairCoppice_Text_5:
# 725 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "APPRENTICE: Said a coppice is the only\n"
	.string "place in the region where the count's\l"
	.string "supposed to go down and come back.\l"
	.string "Wrote that in the notebook and\l"
	.string "underlined it.$"

ParcelRiverMillWood_PairCoppice_Text_6:
# 726 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "WOODCUTTER: …Fetch the saw. We've a\n"
	.string "stand to cut while someone's watching\l"
	.string "how it's done.$"

ParcelRiverMillWood_PairCoppice_Text_7:
# 728 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "WOODCUTTER: You cut the stand to the\n"
	.string "stool and the stool sends up twenty\l"
	.string "poles. Twelve years later you cut again.\l"
	.string "Your grandfather's stools, my cuts.$"

ParcelRiverMillWood_PairCoppice_Text_8:
# 729 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "APPRENTICE: And the trees don't mind?$"

ParcelRiverMillWood_PairCoppice_Text_9:
# 730 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "WOODCUTTER: The trees have been doing\n"
	.string "this with us for a thousand years. It's\l"
	.string "the only thing in this wood that's\l"
	.string "getting older on purpose.$"

ParcelRiverMillWood_PairCoppice_Text_10:
# 731 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "APPRENTICE: Why does the race run dry,\n"
	.string "then?$"

ParcelRiverMillWood_PairCoppice_Text_11:
# 732 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "WOODCUTTER: That's not the wood.\n"
	.string "That's the Board.$"

ParcelRiverMillWood_Board1_Text_0:
# 741 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "A SURVEY BOARD at the mill wood gate.\n"
	.string "Second growth, planted after the mill\l"
	.string "cut the first. The NINCADA husks are\l"
	.string "counted on the trunks in the first week\l"
	.string "of summer; the week comes earlier and\l"
	.string "the husks come fewer.\p"
	.string "The board shows both lines. They cross\n"
	.string "the year the children now in the school\l"
	.string "were born.$"

ParcelRiverMillWood_Board2_Text_0:
# 746 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "A SURVEY BOARD on a stump wide enough\n"
	.string "to sit on. The stump is the count: the\l"
	.string "rings were marked with a nail every\l"
	.string "fifty years by someone with time. The\l"
	.string "last nail is in the bark.\p"
	.string "The Survey added the SEEDOT count\n"
	.string "underneath, because a wood that drops\l"
	.string "seed is a wood that is still trying.$"

ParcelRiverMillWood_PairStump_Text_0:
# 755 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "WOODCUTTER: Two stands, not five. The\n"
	.string "Board's paper came back with three\l"
	.string "crossed out.$"

ParcelRiverMillWood_PairStump_Text_1:
# 756 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "BOY: Which two?$"

ParcelRiverMillWood_PairStump_Text_2:
# 757 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "WOODCUTTER: The two without husks.\n"
	.string "Someone read the count. Someone always\l"
	.string "does, eventually. It's the eventually\l"
	.string "that costs.$"

ParcelRiverMillWood_PairStump_Text_3:
# 759 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "BOY: The ranger counted the husks with\n"
	.string "me. Forty. She wrote the week.$"

ParcelRiverMillWood_PairStump_Text_4:
# 760 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "WOODCUTTER: The week matters more\n"
	.string "than the forty.$"

ParcelRiverMillWood_PairStump_Text_5:
# 761 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "BOY: Why?$"

ParcelRiverMillWood_PairStump_Text_6:
# 762 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "WOODCUTTER: Because forty's a lot and\n"
	.string "the week's early, and only one of those\l"
	.string "is good news.$"

ParcelRiverMillWood_PairStump_Text_7:
# 764 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "WOODCUTTER: Five stands marked for the\n"
	.string "Board. Five.$"

ParcelRiverMillWood_PairStump_Text_8:
# 765 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "BOY: Which five?$"

ParcelRiverMillWood_PairStump_Text_9:
# 766 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "WOODCUTTER: The five with the NINCADA\n"
	.string "on them. Of course. The paper doesn't\l"
	.string "know what a husk is.$"

ParcelRiverMillWood_PairStump_Text_10:
# 767 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "BOY: Can I keep the husks?$"

ParcelRiverMillWood_PairStump_Text_11:
# 768 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "WOODCUTTER: Count them first. Then\n"
	.string "keep them.$"

ParcelRiverMillWood_Board3_Text_0:
# 777 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "A SURVEY BOARD in the second growth.\n"
	.string "SHROOMISH under the planted spruce\l"
	.string "and none under the old oak stump.\p"
	.string "The board explains in one line: planted\n"
	.string "wood holds the damp, cut ground does\l"
	.string "not, and a SHROOMISH knows the\l"
	.string "difference before the soil scientist\l"
	.string "does.$"

ParcelRiverMillWood_Board10_Text_0:
# 784 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "A SURVEY BOARD by the charcoal clamp.\n"
	.string "Burners worked this wood for two\l"
	.string "hundred years and left the clamps as\l"
	.string "rings of black earth. SHROOMISH grow on\l"
	.string "the rings and nowhere else nearby.\p"
	.string "The board explains: the burners fed the\n"
	.string "soil by accident for two centuries. The\l"
	.string "Board's planted spruce feed nothing.$"

ParcelRiverMillWood_PairRide_Text_0:
# 793 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FORESTER: Two stands, marked,\n"
	.string "standing. The paper came back agreeing\l"
	.string "with us.$"

ParcelRiverMillWood_PairRide_Text_1:
# 794 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "APPRENTICE: Because of the count?$"

ParcelRiverMillWood_PairRide_Text_2:
# 795 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FORESTER: Because of the week. Forty\n"
	.string "husks is a lot of husks. An early week is\l"
	.string "a wood in trouble. The Board can read\l"
	.string "trouble when it's underlined.$"

ParcelRiverMillWood_PairRide_Text_3:
# 797 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "APPRENTICE: The ranger walked every\n"
	.string "ride. Counted husks on every trunk.$"

ParcelRiverMillWood_PairRide_Text_4:
# 798 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FORESTER: Every trunk?$"

ParcelRiverMillWood_PairRide_Text_5:
# 799 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "APPRENTICE: Every trunk. It took two\n"
	.string "days. She wrote forty, and the week, and\l"
	.string "underlined the week.$"

ParcelRiverMillWood_PairRide_Text_6:
# 800 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FORESTER: Then she knows more about\n"
	.string "this wood than the Board does. Good.\l"
	.string "Somebody should.$"

ParcelRiverMillWood_PairRide_Text_7:
# 802 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FORESTER: Mark the two with no husks\n"
	.string "on them.$"

ParcelRiverMillWood_PairRide_Text_8:
# 803 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "APPRENTICE: For felling?$"

ParcelRiverMillWood_PairRide_Text_9:
# 804 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FORESTER: For the Board's paper. The\n"
	.string "Board wants five. We'll give it the two\l"
	.string "the NINCADA don't want either.$"

ParcelRiverMillWood_PairRide_Text_10:
# 805 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "APPRENTICE: Will they take two?$"

ParcelRiverMillWood_PairRide_Text_11:
# 806 "data/maps/ParcelRiverMillWood/scripts.pory"
	.string "FORESTER: They'll take what's marked.\n"
	.string "Nobody from the Board has ever walked a\l"
	.string "ride.$"
