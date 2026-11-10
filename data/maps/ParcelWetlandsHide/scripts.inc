ParcelWetlandsHide_MapScripts::
	.byte 0


ParcelWetlandsHide_Aslak::
# 9 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_ASLAK, ParcelWetlandsHide_Aslak_Text_0, ParcelWetlandsHide_Aslak_Text_1, ParcelWetlandsHide_Aslak_FirstWin
# 13 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 14 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Aslak_3
ParcelWetlandsHide_Aslak_1:
# 17 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Aslak_8
ParcelWetlandsHide_Aslak_6:
# 20 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Aslak_13
ParcelWetlandsHide_Aslak_11:
# 23 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Aslak_18
ParcelWetlandsHide_Aslak_16:
# 26 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Aslak_2:
# 15 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Aslak_R2
	goto ParcelWetlandsHide_Aslak_1

ParcelWetlandsHide_Aslak_3:
# 14 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASLAK_R2
	goto_if 0, ParcelWetlandsHide_Aslak_2
	goto ParcelWetlandsHide_Aslak_1

ParcelWetlandsHide_Aslak_7:
# 18 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Aslak_R3
	goto ParcelWetlandsHide_Aslak_6

ParcelWetlandsHide_Aslak_8:
# 17 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASLAK_R3
	goto_if 0, ParcelWetlandsHide_Aslak_7
	goto ParcelWetlandsHide_Aslak_6

ParcelWetlandsHide_Aslak_12:
# 21 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Aslak_R4
	goto ParcelWetlandsHide_Aslak_11

ParcelWetlandsHide_Aslak_13:
# 20 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASLAK_R4
	goto_if 0, ParcelWetlandsHide_Aslak_12
	goto ParcelWetlandsHide_Aslak_11

ParcelWetlandsHide_Aslak_17:
# 24 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Aslak_R5
	goto ParcelWetlandsHide_Aslak_16

ParcelWetlandsHide_Aslak_18:
# 23 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASLAK_R5
	goto_if 0, ParcelWetlandsHide_Aslak_17
	goto ParcelWetlandsHide_Aslak_16


ParcelWetlandsHide_Aslak_FirstWin::
# 30 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_Text_2, MSGBOX_DEFAULT
# 31 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Aslak_R2::
# 35 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 36 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 37 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R2_Text_0, MSGBOX_YESNO
# 38 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Aslak_R2_2
# 43 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASLAK_R2, ParcelWetlandsHide_Aslak_R2_Text_2
# 44 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R2_Text_3, MSGBOX_DEFAULT
# 45 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Aslak_R2_2:
# 39 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R2_Text_1, MSGBOX_DEFAULT
# 40 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Aslak_R3::
# 49 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 50 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 51 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R3_Text_0, MSGBOX_YESNO
# 52 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Aslak_R3_2
# 57 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASLAK_R3, ParcelWetlandsHide_Aslak_R3_Text_1
# 58 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R3_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Aslak_R3_2:
# 53 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R2_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Aslak_R4::
# 63 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 64 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 65 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R4_Text_0, MSGBOX_YESNO
# 66 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Aslak_R4_2
# 71 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASLAK_R4, ParcelWetlandsHide_Aslak_R4_Text_1
# 72 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R4_Text_2, MSGBOX_DEFAULT
# 73 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Aslak_R4_2:
# 67 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R2_Text_1, MSGBOX_DEFAULT
# 68 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Aslak_R5::
# 77 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 78 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 79 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R5_Text_0, MSGBOX_YESNO
# 80 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Aslak_R5_2
# 85 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASLAK_R5, ParcelWetlandsHide_Aslak_R3_Text_1
# 86 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R5_Text_1, MSGBOX_DEFAULT
# 87 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Aslak_R5_2:
# 81 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R2_Text_1, MSGBOX_DEFAULT
# 82 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Hjalte::
# 91 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_HJALTE, ParcelWetlandsHide_Hjalte_Text_0, ParcelWetlandsHide_Hjalte_Text_1, ParcelWetlandsHide_Hjalte_FirstWin
# 95 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 96 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Hjalte_3
ParcelWetlandsHide_Hjalte_1:
# 99 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Hjalte_8
ParcelWetlandsHide_Hjalte_6:
# 102 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Hjalte_13
ParcelWetlandsHide_Hjalte_11:
# 105 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Hjalte_18
ParcelWetlandsHide_Hjalte_16:
# 108 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Hjalte_2:
# 97 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Hjalte_R2
	goto ParcelWetlandsHide_Hjalte_1

ParcelWetlandsHide_Hjalte_3:
# 96 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_HJALTE_R2
	goto_if 0, ParcelWetlandsHide_Hjalte_2
	goto ParcelWetlandsHide_Hjalte_1

ParcelWetlandsHide_Hjalte_7:
# 100 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Hjalte_R3
	goto ParcelWetlandsHide_Hjalte_6

ParcelWetlandsHide_Hjalte_8:
# 99 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_HJALTE_R3
	goto_if 0, ParcelWetlandsHide_Hjalte_7
	goto ParcelWetlandsHide_Hjalte_6

ParcelWetlandsHide_Hjalte_12:
# 103 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Hjalte_R4
	goto ParcelWetlandsHide_Hjalte_11

ParcelWetlandsHide_Hjalte_13:
# 102 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_HJALTE_R4
	goto_if 0, ParcelWetlandsHide_Hjalte_12
	goto ParcelWetlandsHide_Hjalte_11

ParcelWetlandsHide_Hjalte_17:
# 106 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Hjalte_R5
	goto ParcelWetlandsHide_Hjalte_16

ParcelWetlandsHide_Hjalte_18:
# 105 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_HJALTE_R5
	goto_if 0, ParcelWetlandsHide_Hjalte_17
	goto ParcelWetlandsHide_Hjalte_16


ParcelWetlandsHide_Hjalte_FirstWin::
# 112 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_Text_2, MSGBOX_DEFAULT
# 113 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Hjalte_R2::
# 117 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 118 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 119 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R2_Text_0, MSGBOX_YESNO
# 120 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Hjalte_R2_2
# 125 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_HJALTE_R2, ParcelWetlandsHide_Hjalte_R2_Text_2
# 126 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R2_Text_3, MSGBOX_DEFAULT
# 127 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Hjalte_R2_2:
# 121 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R2_Text_1, MSGBOX_DEFAULT
# 122 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Hjalte_R3::
# 131 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 132 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 133 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R3_Text_0, MSGBOX_YESNO
# 134 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Hjalte_R3_2
# 139 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_HJALTE_R3, ParcelWetlandsHide_Hjalte_R3_Text_1
# 140 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R3_Text_2, MSGBOX_DEFAULT
# 141 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Hjalte_R3_2:
# 135 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R2_Text_1, MSGBOX_DEFAULT
# 136 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Hjalte_R4::
# 145 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 146 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 147 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R4_Text_0, MSGBOX_YESNO
# 148 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Hjalte_R4_2
# 153 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_HJALTE_R4, ParcelWetlandsHide_Hjalte_R4_Text_1
# 154 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R4_Text_2, MSGBOX_DEFAULT
# 155 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Hjalte_R4_2:
# 149 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R2_Text_1, MSGBOX_DEFAULT
# 150 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Hjalte_R5::
# 159 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 160 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 161 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R5_Text_0, MSGBOX_YESNO
# 162 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Hjalte_R5_2
# 167 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_HJALTE_R5, ParcelWetlandsHide_Hjalte_R3_Text_1
# 168 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R5_Text_1, MSGBOX_DEFAULT
# 169 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Hjalte_R5_2:
# 163 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R2_Text_1, MSGBOX_DEFAULT
# 164 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Ragna::
# 173 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_RAGNA, ParcelWetlandsHide_Ragna_Text_0, ParcelWetlandsHide_Ragna_Text_1, ParcelWetlandsHide_Ragna_FirstWin
# 177 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 178 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Ragna_3
ParcelWetlandsHide_Ragna_1:
# 181 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Ragna_8
ParcelWetlandsHide_Ragna_6:
# 184 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Ragna_13
ParcelWetlandsHide_Ragna_11:
# 187 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Ragna_18
ParcelWetlandsHide_Ragna_16:
# 190 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Ragna_2:
# 179 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Ragna_R2
	goto ParcelWetlandsHide_Ragna_1

ParcelWetlandsHide_Ragna_3:
# 178 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_RAGNA_R2
	goto_if 0, ParcelWetlandsHide_Ragna_2
	goto ParcelWetlandsHide_Ragna_1

ParcelWetlandsHide_Ragna_7:
# 182 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Ragna_R3
	goto ParcelWetlandsHide_Ragna_6

ParcelWetlandsHide_Ragna_8:
# 181 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_RAGNA_R3
	goto_if 0, ParcelWetlandsHide_Ragna_7
	goto ParcelWetlandsHide_Ragna_6

ParcelWetlandsHide_Ragna_12:
# 185 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Ragna_R4
	goto ParcelWetlandsHide_Ragna_11

ParcelWetlandsHide_Ragna_13:
# 184 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_RAGNA_R4
	goto_if 0, ParcelWetlandsHide_Ragna_12
	goto ParcelWetlandsHide_Ragna_11

ParcelWetlandsHide_Ragna_17:
# 188 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Ragna_R5
	goto ParcelWetlandsHide_Ragna_16

ParcelWetlandsHide_Ragna_18:
# 187 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_RAGNA_R5
	goto_if 0, ParcelWetlandsHide_Ragna_17
	goto ParcelWetlandsHide_Ragna_16


ParcelWetlandsHide_Ragna_FirstWin::
# 194 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_Text_2, MSGBOX_DEFAULT
# 195 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Ragna_R2::
# 199 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 200 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 201 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R2_Text_0, MSGBOX_YESNO
# 202 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Ragna_R2_2
# 207 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_RAGNA_R2, ParcelWetlandsHide_Ragna_R2_Text_2
# 208 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R2_Text_3, MSGBOX_DEFAULT
# 209 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Ragna_R2_2:
# 203 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 204 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Ragna_R3::
# 213 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 214 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 215 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R3_Text_0, MSGBOX_YESNO
# 216 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Ragna_R3_2
# 221 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_RAGNA_R3, ParcelWetlandsHide_Ragna_R3_Text_1
# 222 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R3_Text_2, MSGBOX_DEFAULT
# 223 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Ragna_R3_2:
# 217 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 218 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Ragna_R4::
# 227 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 228 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 229 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R4_Text_0, MSGBOX_YESNO
# 230 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Ragna_R4_2
# 235 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_RAGNA_R4, ParcelWetlandsHide_Ragna_R4_Text_1
# 236 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R4_Text_2, MSGBOX_DEFAULT
# 237 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Ragna_R4_2:
# 231 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 232 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Ragna_R5::
# 241 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 242 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 243 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R5_Text_0, MSGBOX_YESNO
# 244 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Ragna_R5_2
# 249 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_RAGNA_R5, ParcelWetlandsHide_Ragna_R2_Text_2
# 250 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R5_Text_1, MSGBOX_DEFAULT
# 251 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Ragna_R5_2:
# 245 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 246 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Vemund::
# 255 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_VEMUND, ParcelWetlandsHide_Vemund_Text_0, ParcelWetlandsHide_Vemund_Text_1, ParcelWetlandsHide_Vemund_FirstWin
# 259 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 260 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Vemund_3
ParcelWetlandsHide_Vemund_1:
# 263 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Vemund_8
ParcelWetlandsHide_Vemund_6:
# 266 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Vemund_13
ParcelWetlandsHide_Vemund_11:
# 269 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Vemund_18
ParcelWetlandsHide_Vemund_16:
# 272 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Vemund_2:
# 261 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Vemund_R2
	goto ParcelWetlandsHide_Vemund_1

ParcelWetlandsHide_Vemund_3:
# 260 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_VEMUND_R2
	goto_if 0, ParcelWetlandsHide_Vemund_2
	goto ParcelWetlandsHide_Vemund_1

ParcelWetlandsHide_Vemund_7:
# 264 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Vemund_R3
	goto ParcelWetlandsHide_Vemund_6

ParcelWetlandsHide_Vemund_8:
# 263 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_VEMUND_R3
	goto_if 0, ParcelWetlandsHide_Vemund_7
	goto ParcelWetlandsHide_Vemund_6

ParcelWetlandsHide_Vemund_12:
# 267 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Vemund_R4
	goto ParcelWetlandsHide_Vemund_11

ParcelWetlandsHide_Vemund_13:
# 266 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_VEMUND_R4
	goto_if 0, ParcelWetlandsHide_Vemund_12
	goto ParcelWetlandsHide_Vemund_11

ParcelWetlandsHide_Vemund_17:
# 270 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Vemund_R5
	goto ParcelWetlandsHide_Vemund_16

ParcelWetlandsHide_Vemund_18:
# 269 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_VEMUND_R5
	goto_if 0, ParcelWetlandsHide_Vemund_17
	goto ParcelWetlandsHide_Vemund_16


ParcelWetlandsHide_Vemund_FirstWin::
# 276 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_Text_2, MSGBOX_DEFAULT
# 277 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Vemund_R2::
# 281 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 282 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 283 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R2_Text_0, MSGBOX_YESNO
# 284 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Vemund_R2_2
# 289 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_VEMUND_R2, ParcelWetlandsHide_Vemund_R2_Text_2
# 290 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R2_Text_3, MSGBOX_DEFAULT
# 291 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Vemund_R2_2:
# 285 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R2_Text_1, MSGBOX_DEFAULT
# 286 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Vemund_R3::
# 295 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 296 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 297 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R3_Text_0, MSGBOX_YESNO
# 298 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Vemund_R3_2
# 303 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_VEMUND_R3, ParcelWetlandsHide_Vemund_R3_Text_1
# 304 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R3_Text_2, MSGBOX_DEFAULT
# 305 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Vemund_R3_2:
# 299 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R2_Text_1, MSGBOX_DEFAULT
# 300 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Vemund_R4::
# 309 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 310 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 311 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R4_Text_0, MSGBOX_YESNO
# 312 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Vemund_R4_2
# 317 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_VEMUND_R4, ParcelWetlandsHide_Vemund_R4_Text_1
# 318 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R4_Text_2, MSGBOX_DEFAULT
# 319 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Vemund_R4_2:
# 313 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R2_Text_1, MSGBOX_DEFAULT
# 314 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Vemund_R5::
# 323 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 324 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 325 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R5_Text_0, MSGBOX_YESNO
# 326 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Vemund_R5_2
# 331 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_VEMUND_R5, ParcelWetlandsHide_Vemund_R4_Text_1
# 332 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R5_Text_1, MSGBOX_DEFAULT
# 333 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Vemund_R5_2:
# 327 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R2_Text_1, MSGBOX_DEFAULT
# 328 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Sindre::
# 337 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_SINDRE, ParcelWetlandsHide_Sindre_Text_0, ParcelWetlandsHide_Sindre_Text_1, ParcelWetlandsHide_Sindre_FirstWin
# 341 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 342 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Sindre_3
ParcelWetlandsHide_Sindre_1:
# 345 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Sindre_8
ParcelWetlandsHide_Sindre_6:
# 348 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Sindre_13
ParcelWetlandsHide_Sindre_11:
# 351 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Sindre_18
ParcelWetlandsHide_Sindre_16:
# 354 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Sindre_2:
# 343 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Sindre_R2
	goto ParcelWetlandsHide_Sindre_1

ParcelWetlandsHide_Sindre_3:
# 342 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_SINDRE_R2
	goto_if 0, ParcelWetlandsHide_Sindre_2
	goto ParcelWetlandsHide_Sindre_1

ParcelWetlandsHide_Sindre_7:
# 346 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Sindre_R3
	goto ParcelWetlandsHide_Sindre_6

ParcelWetlandsHide_Sindre_8:
# 345 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_SINDRE_R3
	goto_if 0, ParcelWetlandsHide_Sindre_7
	goto ParcelWetlandsHide_Sindre_6

ParcelWetlandsHide_Sindre_12:
# 349 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Sindre_R4
	goto ParcelWetlandsHide_Sindre_11

ParcelWetlandsHide_Sindre_13:
# 348 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_SINDRE_R4
	goto_if 0, ParcelWetlandsHide_Sindre_12
	goto ParcelWetlandsHide_Sindre_11

ParcelWetlandsHide_Sindre_17:
# 352 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Sindre_R5
	goto ParcelWetlandsHide_Sindre_16

ParcelWetlandsHide_Sindre_18:
# 351 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_SINDRE_R5
	goto_if 0, ParcelWetlandsHide_Sindre_17
	goto ParcelWetlandsHide_Sindre_16


ParcelWetlandsHide_Sindre_FirstWin::
# 358 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_Text_2, MSGBOX_DEFAULT
# 359 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Sindre_R2::
# 363 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 364 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 365 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R2_Text_0, MSGBOX_YESNO
# 366 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Sindre_R2_2
# 371 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_SINDRE_R2, ParcelWetlandsHide_Sindre_R2_Text_2
# 372 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R2_Text_3, MSGBOX_DEFAULT
# 373 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Sindre_R2_2:
# 367 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R2_Text_1, MSGBOX_DEFAULT
# 368 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Sindre_R3::
# 377 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 378 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 379 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R3_Text_0, MSGBOX_YESNO
# 380 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Sindre_R3_2
# 385 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_SINDRE_R3, ParcelWetlandsHide_Sindre_R3_Text_1
# 386 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R3_Text_2, MSGBOX_DEFAULT
# 387 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Sindre_R3_2:
# 381 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R2_Text_1, MSGBOX_DEFAULT
# 382 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Sindre_R4::
# 391 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 392 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 393 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R4_Text_0, MSGBOX_YESNO
# 394 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Sindre_R4_2
# 399 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_SINDRE_R4, ParcelWetlandsHide_Sindre_R4_Text_1
# 400 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R4_Text_2, MSGBOX_DEFAULT
# 401 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Sindre_R4_2:
# 395 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R2_Text_1, MSGBOX_DEFAULT
# 396 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Sindre_R5::
# 405 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 406 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 407 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R5_Text_0, MSGBOX_YESNO
# 408 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Sindre_R5_2
# 413 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_SINDRE_R5, ParcelWetlandsHide_Sindre_R5_Text_1
# 414 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R5_Text_2, MSGBOX_DEFAULT
# 415 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Sindre_R5_2:
# 409 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R2_Text_1, MSGBOX_DEFAULT
# 410 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Unni::
# 419 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_UNNI, ParcelWetlandsHide_Unni_Text_0, ParcelWetlandsHide_Unni_Text_1, ParcelWetlandsHide_Unni_FirstWin
# 423 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 424 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Unni_3
ParcelWetlandsHide_Unni_1:
# 427 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Unni_8
ParcelWetlandsHide_Unni_6:
# 430 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Unni_13
ParcelWetlandsHide_Unni_11:
# 433 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Unni_18
ParcelWetlandsHide_Unni_16:
# 436 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Unni_2:
# 425 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Unni_R2
	goto ParcelWetlandsHide_Unni_1

ParcelWetlandsHide_Unni_3:
# 424 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_UNNI_R2
	goto_if 0, ParcelWetlandsHide_Unni_2
	goto ParcelWetlandsHide_Unni_1

ParcelWetlandsHide_Unni_7:
# 428 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Unni_R3
	goto ParcelWetlandsHide_Unni_6

ParcelWetlandsHide_Unni_8:
# 427 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_UNNI_R3
	goto_if 0, ParcelWetlandsHide_Unni_7
	goto ParcelWetlandsHide_Unni_6

ParcelWetlandsHide_Unni_12:
# 431 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Unni_R4
	goto ParcelWetlandsHide_Unni_11

ParcelWetlandsHide_Unni_13:
# 430 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_UNNI_R4
	goto_if 0, ParcelWetlandsHide_Unni_12
	goto ParcelWetlandsHide_Unni_11

ParcelWetlandsHide_Unni_17:
# 434 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Unni_R5
	goto ParcelWetlandsHide_Unni_16

ParcelWetlandsHide_Unni_18:
# 433 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_UNNI_R5
	goto_if 0, ParcelWetlandsHide_Unni_17
	goto ParcelWetlandsHide_Unni_16


ParcelWetlandsHide_Unni_FirstWin::
# 440 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_Text_2, MSGBOX_DEFAULT
# 441 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Unni_R2::
# 445 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 446 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 447 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R2_Text_0, MSGBOX_YESNO
# 448 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Unni_R2_2
# 453 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_UNNI_R2, ParcelWetlandsHide_Unni_R2_Text_2
# 454 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R2_Text_3, MSGBOX_DEFAULT
# 455 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Unni_R2_2:
# 449 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R2_Text_1, MSGBOX_DEFAULT
# 450 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Unni_R3::
# 459 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 460 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 461 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R3_Text_0, MSGBOX_YESNO
# 462 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Unni_R3_2
# 467 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_UNNI_R3, ParcelWetlandsHide_Unni_R3_Text_1
# 468 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R3_Text_2, MSGBOX_DEFAULT
# 469 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Unni_R3_2:
# 463 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R2_Text_1, MSGBOX_DEFAULT
# 464 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Unni_R4::
# 473 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 474 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 475 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R4_Text_0, MSGBOX_YESNO
# 476 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Unni_R4_2
# 481 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_UNNI_R4, ParcelWetlandsHide_Unni_R3_Text_1
# 482 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R4_Text_1, MSGBOX_DEFAULT
# 483 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Unni_R4_2:
# 477 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R2_Text_1, MSGBOX_DEFAULT
# 478 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Unni_R5::
# 487 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 488 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 489 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R5_Text_0, MSGBOX_YESNO
# 490 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Unni_R5_2
# 495 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_UNNI_R5, ParcelWetlandsHide_Unni_R5_Text_1
# 496 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R5_Text_2, MSGBOX_DEFAULT
# 497 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Unni_R5_2:
# 491 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R2_Text_1, MSGBOX_DEFAULT
# 492 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Torvald::
# 501 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_TORVALD, ParcelWetlandsHide_Torvald_Text_0, ParcelWetlandsHide_Torvald_Text_1, ParcelWetlandsHide_Torvald_FirstWin
# 505 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 506 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Torvald_3
ParcelWetlandsHide_Torvald_1:
# 509 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Torvald_8
ParcelWetlandsHide_Torvald_6:
# 512 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Torvald_13
ParcelWetlandsHide_Torvald_11:
# 515 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Torvald_18
ParcelWetlandsHide_Torvald_16:
# 518 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Torvald_2:
# 507 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Torvald_R2
	goto ParcelWetlandsHide_Torvald_1

ParcelWetlandsHide_Torvald_3:
# 506 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_TORVALD_R2
	goto_if 0, ParcelWetlandsHide_Torvald_2
	goto ParcelWetlandsHide_Torvald_1

ParcelWetlandsHide_Torvald_7:
# 510 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Torvald_R3
	goto ParcelWetlandsHide_Torvald_6

ParcelWetlandsHide_Torvald_8:
# 509 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_TORVALD_R3
	goto_if 0, ParcelWetlandsHide_Torvald_7
	goto ParcelWetlandsHide_Torvald_6

ParcelWetlandsHide_Torvald_12:
# 513 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Torvald_R4
	goto ParcelWetlandsHide_Torvald_11

ParcelWetlandsHide_Torvald_13:
# 512 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_TORVALD_R4
	goto_if 0, ParcelWetlandsHide_Torvald_12
	goto ParcelWetlandsHide_Torvald_11

ParcelWetlandsHide_Torvald_17:
# 516 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Torvald_R5
	goto ParcelWetlandsHide_Torvald_16

ParcelWetlandsHide_Torvald_18:
# 515 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_TORVALD_R5
	goto_if 0, ParcelWetlandsHide_Torvald_17
	goto ParcelWetlandsHide_Torvald_16


ParcelWetlandsHide_Torvald_FirstWin::
# 522 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_Text_2, MSGBOX_DEFAULT
# 523 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Torvald_R2::
# 527 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 528 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 529 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R2_Text_0, MSGBOX_YESNO
# 530 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Torvald_R2_2
# 535 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_TORVALD_R2, ParcelWetlandsHide_Torvald_R2_Text_2
# 536 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R2_Text_3, MSGBOX_DEFAULT
# 537 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Torvald_R2_2:
# 531 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 532 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Torvald_R3::
# 541 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 542 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 543 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R3_Text_0, MSGBOX_YESNO
# 544 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Torvald_R3_2
# 549 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_TORVALD_R3, ParcelWetlandsHide_Torvald_R3_Text_1
# 550 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R3_Text_2, MSGBOX_DEFAULT
# 551 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Torvald_R3_2:
# 545 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 546 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Torvald_R4::
# 555 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 556 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 557 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R4_Text_0, MSGBOX_YESNO
# 558 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Torvald_R4_2
# 563 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_TORVALD_R4, ParcelWetlandsHide_Torvald_R4_Text_1
# 564 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R4_Text_2, MSGBOX_DEFAULT
# 565 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Torvald_R4_2:
# 559 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 560 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Torvald_R5::
# 569 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 570 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 571 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R5_Text_0, MSGBOX_YESNO
# 572 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Torvald_R5_2
# 577 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_TORVALD_R5, ParcelWetlandsHide_Torvald_R3_Text_1
# 578 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R5_Text_1, MSGBOX_DEFAULT
# 579 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Torvald_R5_2:
# 573 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 574 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Asta::
# 583 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_ASTA, ParcelWetlandsHide_Asta_Text_0, ParcelWetlandsHide_Asta_Text_1, ParcelWetlandsHide_Asta_FirstWin
# 587 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 588 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Asta_3
ParcelWetlandsHide_Asta_1:
# 591 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Asta_8
ParcelWetlandsHide_Asta_6:
# 594 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Asta_13
ParcelWetlandsHide_Asta_11:
# 597 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Asta_18
ParcelWetlandsHide_Asta_16:
# 600 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Asta_2:
# 589 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Asta_R2
	goto ParcelWetlandsHide_Asta_1

ParcelWetlandsHide_Asta_3:
# 588 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASTA_R2
	goto_if 0, ParcelWetlandsHide_Asta_2
	goto ParcelWetlandsHide_Asta_1

ParcelWetlandsHide_Asta_7:
# 592 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Asta_R3
	goto ParcelWetlandsHide_Asta_6

ParcelWetlandsHide_Asta_8:
# 591 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASTA_R3
	goto_if 0, ParcelWetlandsHide_Asta_7
	goto ParcelWetlandsHide_Asta_6

ParcelWetlandsHide_Asta_12:
# 595 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Asta_R4
	goto ParcelWetlandsHide_Asta_11

ParcelWetlandsHide_Asta_13:
# 594 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASTA_R4
	goto_if 0, ParcelWetlandsHide_Asta_12
	goto ParcelWetlandsHide_Asta_11

ParcelWetlandsHide_Asta_17:
# 598 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Asta_R5
	goto ParcelWetlandsHide_Asta_16

ParcelWetlandsHide_Asta_18:
# 597 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASTA_R5
	goto_if 0, ParcelWetlandsHide_Asta_17
	goto ParcelWetlandsHide_Asta_16


ParcelWetlandsHide_Asta_FirstWin::
# 604 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_Text_2, MSGBOX_DEFAULT
# 605 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Asta_R2::
# 609 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 610 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 611 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R2_Text_0, MSGBOX_YESNO
# 612 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Asta_R2_2
# 617 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASTA_R2, ParcelWetlandsHide_Asta_R2_Text_2
# 618 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R2_Text_3, MSGBOX_DEFAULT
# 619 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Asta_R2_2:
# 613 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R2_Text_1, MSGBOX_DEFAULT
# 614 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Asta_R3::
# 623 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 624 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 625 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R3_Text_0, MSGBOX_YESNO
# 626 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Asta_R3_2
# 631 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASTA_R3, ParcelWetlandsHide_Asta_R3_Text_1
# 632 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R3_Text_2, MSGBOX_DEFAULT
# 633 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Asta_R3_2:
# 627 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R2_Text_1, MSGBOX_DEFAULT
# 628 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Asta_R4::
# 637 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 638 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 639 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R4_Text_0, MSGBOX_YESNO
# 640 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Asta_R4_2
# 645 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASTA_R4, ParcelWetlandsHide_Asta_R4_Text_1
# 646 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R4_Text_2, MSGBOX_DEFAULT
# 647 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Asta_R4_2:
# 641 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R2_Text_1, MSGBOX_DEFAULT
# 642 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Asta_R5::
# 651 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 652 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 653 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R5_Text_0, MSGBOX_YESNO
# 654 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Asta_R5_2
# 659 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASTA_R5, ParcelWetlandsHide_Asta_R5_Text_1
# 660 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R5_Text_2, MSGBOX_DEFAULT
# 661 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Asta_R5_2:
# 655 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R2_Text_1, MSGBOX_DEFAULT
# 656 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Warden::
# 665 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 666 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 667 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DUSK_DONE, ParcelWetlandsHide_Warden_2
# 672 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DUSK_FOUND, ParcelWetlandsHide_Warden_5
# 679 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DUSK, ParcelWetlandsHide_Warden_8
# 684 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ParcelWetlandsHide_Warden_11
# 690 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHide_Warden_14
# 695 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Warden_Text_5, MSGBOX_DEFAULT
# 696 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Warden_2:
# 668 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Warden_Text_0, MSGBOX_DEFAULT
# 669 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Warden_5:
# 673 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Warden_Text_1, MSGBOX_DEFAULT
# 674 "data/maps/ParcelWetlandsHide/scripts.pory"
	giveitem ITEM_NET_BALL, 5
# 675 "data/maps/ParcelWetlandsHide/scripts.pory"
	setflag FLAG_SKALD_Q_DUSK_DONE
# 676 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Warden_8:
# 680 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Warden_Text_2, MSGBOX_DEFAULT
# 681 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Warden_11:
# 685 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Warden_Text_3, MSGBOX_DEFAULT
# 686 "data/maps/ParcelWetlandsHide/scripts.pory"
	setflag FLAG_SKALD_Q_DUSK
# 687 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Warden_14:
# 691 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Warden_Text_4, MSGBOX_DEFAULT
# 692 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Sign::
# 700 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sign_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHide_SignEast::
# 704 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_SignEast_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHide_ItemGreatBall::
# 707 "data/maps/ParcelWetlandsHide/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelWetlandsHide_Leave::
# 709 "data/maps/ParcelWetlandsHide/scripts.pory"
	warp MAP_PARCEL_WETLANDS, 3, 27
# 710 "data/maps/ParcelWetlandsHide/scripts.pory"
	waitstate
	end


ParcelWetlandsHide_DuskCount::
# 715 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DUSK, ParcelWetlandsHide_DuskCount_2
# 718 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_DuskCount_Text_0, MSGBOX_SIGN
# 719 "data/maps/ParcelWetlandsHide/scripts.pory"
	setflag FLAG_SKALD_Q_DUSK_FOUND
	end

ParcelWetlandsHide_DuskCount_2:
	end


ParcelWetlandsHide_PairBirders::
# 726 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 727 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHide_PairBirders_2
# 732 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelWetlandsHide_PairBirders_3
# 738 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_8, MSGBOX_DEFAULT
# 739 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_9, MSGBOX_DEFAULT
# 740 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_10, MSGBOX_DEFAULT
# 741 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_11, MSGBOX_DEFAULT
ParcelWetlandsHide_PairBirders_1:
# 743 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_PairBirders_2:
# 728 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_0, MSGBOX_DEFAULT
# 729 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_1, MSGBOX_DEFAULT
# 730 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_2, MSGBOX_DEFAULT
# 731 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_3, MSGBOX_DEFAULT
	goto ParcelWetlandsHide_PairBirders_1

ParcelWetlandsHide_PairBirders_3:
# 733 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_4, MSGBOX_DEFAULT
# 734 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_5, MSGBOX_DEFAULT
# 735 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_6, MSGBOX_DEFAULT
# 736 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_7, MSGBOX_DEFAULT
	goto ParcelWetlandsHide_PairBirders_1


ParcelWetlandsHide_Aslak_Text_0:
# 10 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Hide's full. Sit on the bank with\n"
	.string "me and keep your voice down. After this.$"

ParcelWetlandsHide_Aslak_Text_1:
# 11 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: …Quietly done.$"

ParcelWetlandsHide_Aslak_Text_2:
# 26 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Forty-one WINGULL on the count\n"
	.string "this morning. Last spring it was ninety.\l"
	.string "Nobody wants that number.$"

ParcelWetlandsHide_Aslak_R2_Text_0:
# 37 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelWetlandsHide_Aslak_R2_Text_1:
# 39 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Suit yourself. I'm here.$"

ParcelWetlandsHide_Aslak_R2_Text_2:
# 43 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Still yours.$"

ParcelWetlandsHide_Aslak_R2_Text_3:
# 44 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlandsHide_Aslak_R3_Text_0:
# 51 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlandsHide_Aslak_R3_Text_1:
# 57 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Right. That's the whole of it.$"

ParcelWetlandsHide_Aslak_R3_Text_2:
# 58 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlandsHide_Aslak_R4_Text_0:
# 65 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelWetlandsHide_Aslak_R4_Text_1:
# 71 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: …Again, then. Later.$"

ParcelWetlandsHide_Aslak_R4_Text_2:
# 72 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlandsHide_Aslak_R5_Text_0:
# 79 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWetlandsHide_Aslak_R5_Text_1:
# 86 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlandsHide_Hjalte_Text_0:
# 92 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: The pond's the last clean water\n"
	.string "on the backwater. I fish it and I don't\l"
	.string "tell. Battle for my silence.$"

ParcelWetlandsHide_Hjalte_Text_1:
# 93 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: …Silence it is.$"

ParcelWetlandsHide_Hjalte_Text_2:
# 108 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: MAGIKARP in the pond.\n"
	.string "Hundreds. They came up from the\l"
	.string "backwater when it went bad. Fish know.$"

ParcelWetlandsHide_Hjalte_R2_Text_0:
# 119 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelWetlandsHide_Hjalte_R2_Text_1:
# 121 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: Fine. Same spot.$"

ParcelWetlandsHide_Hjalte_R2_Text_2:
# 125 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: Still yours.$"

ParcelWetlandsHide_Hjalte_R2_Text_3:
# 126 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlandsHide_Hjalte_R3_Text_0:
# 133 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelWetlandsHide_Hjalte_R3_Text_1:
# 139 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: …Fair.$"

ParcelWetlandsHide_Hjalte_R3_Text_2:
# 140 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlandsHide_Hjalte_R4_Text_0:
# 147 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelWetlandsHide_Hjalte_R4_Text_1:
# 153 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: Noted. Properly, this time.$"

ParcelWetlandsHide_Hjalte_R4_Text_2:
# 154 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelWetlandsHide_Hjalte_R5_Text_0:
# 161 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWetlandsHide_Hjalte_R5_Text_1:
# 168 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlandsHide_Ragna_Text_0:
# 174 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: The hide's for watching, not\n"
	.string "talking. You've talked. Battle.$"

ParcelWetlandsHide_Ragna_Text_1:
# 175 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: …Fine. Watch, then.$"

ParcelWetlandsHide_Ragna_Text_2:
# 190 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: The herons come at dusk. Fewer\n"
	.string "every year. My mother's book says sixty.\l"
	.string "I count eleven.$"

ParcelWetlandsHide_Ragna_R2_Text_0:
# 201 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelWetlandsHide_Ragna_R2_Text_1:
# 203 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Suit yourself. I'm here.$"

ParcelWetlandsHide_Ragna_R2_Text_2:
# 207 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: That's the one I wanted to see.$"

ParcelWetlandsHide_Ragna_R2_Text_3:
# 208 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlandsHide_Ragna_R3_Text_0:
# 215 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelWetlandsHide_Ragna_R3_Text_1:
# 221 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Noted. Properly, this time.$"

ParcelWetlandsHide_Ragna_R3_Text_2:
# 222 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlandsHide_Ragna_R4_Text_0:
# 229 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelWetlandsHide_Ragna_R4_Text_1:
# 235 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Right. That's the whole of it.$"

ParcelWetlandsHide_Ragna_R4_Text_2:
# 236 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlandsHide_Ragna_R5_Text_0:
# 243 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelWetlandsHide_Ragna_R5_Text_1:
# 250 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlandsHide_Vemund_Text_0:
# 256 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: SURSKIT walk on the pond. They\n"
	.string "can't walk on the backwater. Too thick.\l"
	.string "Fight.$"

ParcelWetlandsHide_Vemund_Text_1:
# 257 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: …Too thick for me too.$"

ParcelWetlandsHide_Vemund_Text_2:
# 272 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: GUNNAR counts them at the\n"
	.string "landing. I count them here. His number's\l"
	.string "going down and mine's going up. Same\l"
	.string "bugs.$"

ParcelWetlandsHide_Vemund_R2_Text_0:
# 283 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelWetlandsHide_Vemund_R2_Text_1:
# 285 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelWetlandsHide_Vemund_R2_Text_2:
# 289 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Right. That's the whole of it.$"

ParcelWetlandsHide_Vemund_R2_Text_3:
# 290 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlandsHide_Vemund_R3_Text_0:
# 297 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlandsHide_Vemund_R3_Text_1:
# 303 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Still yours.$"

ParcelWetlandsHide_Vemund_R3_Text_2:
# 304 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlandsHide_Vemund_R4_Text_0:
# 311 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelWetlandsHide_Vemund_R4_Text_1:
# 317 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Noted. Properly, this time.$"

ParcelWetlandsHide_Vemund_R4_Text_2:
# 318 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlandsHide_Vemund_R5_Text_0:
# 325 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelWetlandsHide_Vemund_R5_Text_1:
# 332 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlandsHide_Sindre_Text_0:
# 338 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: My dad built the hide. The\n"
	.string "CORPS put a plaque on it. The plaque's\l"
	.string "worth more than the hide now. Battle!$"

ParcelWetlandsHide_Sindre_Text_1:
# 339 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: …Dad would've won.$"

ParcelWetlandsHide_Sindre_Text_2:
# 354 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: The plaque says 'protected\n"
	.string "wetland'. The water doesn't read.$"

ParcelWetlandsHide_Sindre_R2_Text_0:
# 365 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelWetlandsHide_Sindre_R2_Text_1:
# 367 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: Another time, then.$"

ParcelWetlandsHide_Sindre_R2_Text_2:
# 371 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: Noted. Properly, this time.$"

ParcelWetlandsHide_Sindre_R2_Text_3:
# 372 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelWetlandsHide_Sindre_R3_Text_0:
# 379 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelWetlandsHide_Sindre_R3_Text_1:
# 385 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: Right. That's the whole of it.$"

ParcelWetlandsHide_Sindre_R3_Text_2:
# 386 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlandsHide_Sindre_R4_Text_0:
# 393 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelWetlandsHide_Sindre_R4_Text_1:
# 399 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: That's the one I wanted to see.$"

ParcelWetlandsHide_Sindre_R4_Text_2:
# 400 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlandsHide_Sindre_R5_Text_0:
# 407 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelWetlandsHide_Sindre_R5_Text_1:
# 413 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: …Fair.$"

ParcelWetlandsHide_Sindre_R5_Text_2:
# 414 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelWetlandsHide_Unni_Text_0:
# 420 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: I ring the WINGULL chicks. The\n"
	.string "rings come back from down the coast\l"
	.string "with oil on them. Fight.$"

ParcelWetlandsHide_Unni_Text_1:
# 421 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: …Ringed.$"

ParcelWetlandsHide_Unni_Text_2:
# 436 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: One ring came back from MEREHOLT\n"
	.string "COAST in a cannery tin. I keep it in my\l"
	.string "pocket.$"

ParcelWetlandsHide_Unni_R2_Text_0:
# 447 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelWetlandsHide_Unni_R2_Text_1:
# 449 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: Fine. Same spot.$"

ParcelWetlandsHide_Unni_R2_Text_2:
# 453 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: Right. That's the whole of it.$"

ParcelWetlandsHide_Unni_R2_Text_3:
# 454 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlandsHide_Unni_R3_Text_0:
# 461 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWetlandsHide_Unni_R3_Text_1:
# 467 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: Noted. Properly, this time.$"

ParcelWetlandsHide_Unni_R3_Text_2:
# 468 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlandsHide_Unni_R4_Text_0:
# 475 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelWetlandsHide_Unni_R4_Text_1:
# 482 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlandsHide_Unni_R5_Text_0:
# 489 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelWetlandsHide_Unni_R5_Text_1:
# 495 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: That's the one I wanted to see.$"

ParcelWetlandsHide_Unni_R5_Text_2:
# 496 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWetlandsHide_Torvald_Text_0:
# 502 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Caught nothing today. Didn't\n"
	.string "expect to. I come for the sitting.\l"
	.string "Battle, since you've ruined the sitting.$"

ParcelWetlandsHide_Torvald_Text_1:
# 503 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: …Sitting's ruined anyway.$"

ParcelWetlandsHide_Torvald_Text_2:
# 518 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: There used to be BARBOACH in\n"
	.string "the mud here. The mud's dry four months\l"
	.string "a year now. Written down, you say? Good.$"

ParcelWetlandsHide_Torvald_R2_Text_0:
# 529 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelWetlandsHide_Torvald_R2_Text_1:
# 531 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Suit yourself. I'm here.$"

ParcelWetlandsHide_Torvald_R2_Text_2:
# 535 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Right. That's the whole of it.$"

ParcelWetlandsHide_Torvald_R2_Text_3:
# 536 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelWetlandsHide_Torvald_R3_Text_0:
# 543 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelWetlandsHide_Torvald_R3_Text_1:
# 549 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Noted. Properly, this time.$"

ParcelWetlandsHide_Torvald_R3_Text_2:
# 550 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelWetlandsHide_Torvald_R4_Text_0:
# 557 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: I don't care about the paper.\n"
	.string "I care about the one I lost. Go?$"

ParcelWetlandsHide_Torvald_R4_Text_1:
# 563 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: …Again, then. Later.$"

ParcelWetlandsHide_Torvald_R4_Text_2:
# 564 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelWetlandsHide_Torvald_R5_Text_0:
# 571 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWetlandsHide_Torvald_R5_Text_1:
# 578 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlandsHide_Asta_Text_0:
# 584 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Picnic on the one dry rise. You're\n"
	.string "standing on my cloth. Battle for the\l"
	.string "cloth.$"

ParcelWetlandsHide_Asta_Text_1:
# 585 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: …Keep the cloth.$"

ParcelWetlandsHide_Asta_Text_2:
# 600 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: The rise is dry because they\n"
	.string "drained the far side. My picnic spot is\l"
	.string "somebody's lost marsh.$"

ParcelWetlandsHide_Asta_R2_Text_0:
# 611 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelWetlandsHide_Asta_R2_Text_1:
# 613 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelWetlandsHide_Asta_R2_Text_2:
# 617 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: That's the one I wanted to see.$"

ParcelWetlandsHide_Asta_R2_Text_3:
# 618 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlandsHide_Asta_R3_Text_0:
# 625 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWetlandsHide_Asta_R3_Text_1:
# 631 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Still yours.$"

ParcelWetlandsHide_Asta_R3_Text_2:
# 632 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlandsHide_Asta_R4_Text_0:
# 639 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelWetlandsHide_Asta_R4_Text_1:
# 645 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Right. That's the whole of it.$"

ParcelWetlandsHide_Asta_R4_Text_2:
# 646 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlandsHide_Asta_R5_Text_0:
# 653 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWetlandsHide_Asta_R5_Text_1:
# 659 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Noted. Properly, this time.$"

ParcelWetlandsHide_Asta_R5_Text_2:
# 660 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWetlandsHide_Warden_Text_0:
# 668 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WARDEN: Eleven. It's in the book in your\n"
	.string "hand, not mine. Next year we'll see if\l"
	.string "it's twelve or ten. That's the whole job.\l"
	.string "Next year.$"

ParcelWetlandsHide_Warden_Text_1:
# 673 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WARDEN: Eleven. RAGNA was right and I\n"
	.string "was tired. Write eleven.\p"
	.string "Take these. The CORPS sent a box for\n"
	.string "the hide and nobody here catches\l"
	.string "anything.$"

ParcelWetlandsHide_Warden_Text_2:
# 680 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WARDEN: The reed cut on the far bank of\n"
	.string "the pond. Stand there. Count what\l"
	.string "comes in. Don't count twice.$"

ParcelWetlandsHide_Warden_Text_3:
# 685 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WARDEN: The herons come at dusk. RAGNA\n"
	.string "counts eleven; I count nine. We need a\l"
	.string "third pair of eyes, and yours are paid\l"
	.string "to count.\p"
	.string "Stand by the reed cut on the far bank\n"
	.string "and count what comes in.$"

ParcelWetlandsHide_Warden_Text_4:
# 691 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WARDEN: DR. HERON's line is still on the\n"
	.string "wall. Somebody's written under it, in a\l"
	.string "steady hand: 'Counted. Written down.' I\l"
	.string "didn't see who. I've left it.$"

ParcelWetlandsHide_Warden_Text_5:
# 695 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WARDEN: The hide was DR. HERON's idea,\n"
	.string "twenty years back. Sit still long enough\l"
	.string "and the place tells you what it is.\p"
	.string "She wrote that on the wall inside. It's\n"
	.string "still there. So are the counts, hers and\l"
	.string "everyone's since.$"

ParcelWetlandsHide_Sign_Text_0:
# 700 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "REEDMERE HIDE. Sit still. Count. Write it\n"
	.string "down.$"

ParcelWetlandsHide_SignEast_Text_0:
# 704 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "The backwater landing is east along the\n"
	.string "bank. Keep to the boards.$"

ParcelWetlandsHide_DuskCount_Text_0:
# 718 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "The herons come in low over the reeds.\n"
	.string "One. Two. Three.\p"
	.string "Eleven. The twelfth doesn't come. You\n"
	.string "count again. Eleven.$"

ParcelWetlandsHide_PairBirders_Text_0:
# 728 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "BIRDER: Forty-four tonight. Three\n"
	.string "more.$"

ParcelWetlandsHide_PairBirders_Text_1:
# 729 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SECOND BIRDER: Three isn't a trend. The\n"
	.string "Survey would say so.$"

ParcelWetlandsHide_PairBirders_Text_2:
# 730 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "BIRDER: Three isn't a trend. Three is\n"
	.string "three more lights than last year and I'm\l"
	.string "allowed to sit here and like it for one\l"
	.string "night.$"

ParcelWetlandsHide_PairBirders_Text_3:
# 731 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SECOND BIRDER: One night. Then count\n"
	.string "properly.$"

ParcelWetlandsHide_PairBirders_Text_4:
# 733 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SECOND BIRDER: The ranger sat the dusk\n"
	.string "count with us. Didn't talk. Didn't\l"
	.string "fidget.$"

ParcelWetlandsHide_PairBirders_Text_5:
# 734 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "BIRDER: Did they get the same number?$"

ParcelWetlandsHide_PairBirders_Text_6:
# 735 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SECOND BIRDER: Forty-one. Then asked\n"
	.string "what the number was the year the pond\l"
	.string "was dug straight. We didn't know. Nobody\l"
	.string "counted that year.$"

ParcelWetlandsHide_PairBirders_Text_7:
# 736 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "BIRDER: Somebody should have been us.$"

ParcelWetlandsHide_PairBirders_Text_8:
# 738 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "BIRDER: Dusk count's down again.\n"
	.string "Forty-one lights, where there were\l"
	.string "hundreds.$"

ParcelWetlandsHide_PairBirders_Text_9:
# 739 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SECOND BIRDER: You counted\n"
	.string "forty-three.$"

ParcelWetlandsHide_PairBirders_Text_10:
# 740 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "BIRDER: I counted forty-one twice and\n"
	.string "forty-three once. The Survey takes the\l"
	.string "twice.$"

ParcelWetlandsHide_PairBirders_Text_11:
# 741 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SECOND BIRDER: The Survey takes the\n"
	.string "honest one. Say it properly.$"
