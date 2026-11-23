ParcelWetlandsHide_MapScripts::
	.byte 0


ParcelWetlandsHide_Aslak::
# 13 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_ASLAK, ParcelWetlandsHide_Aslak_Text_0, ParcelWetlandsHide_Aslak_Text_1, ParcelWetlandsHide_Aslak_FirstWin
# 17 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 18 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Aslak_3
ParcelWetlandsHide_Aslak_1:
# 21 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Aslak_8
ParcelWetlandsHide_Aslak_6:
# 24 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Aslak_13
ParcelWetlandsHide_Aslak_11:
# 27 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Aslak_18
ParcelWetlandsHide_Aslak_16:
# 30 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Aslak_2:
# 19 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Aslak_R2
	goto ParcelWetlandsHide_Aslak_1

ParcelWetlandsHide_Aslak_3:
# 18 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASLAK_R2
	goto_if 0, ParcelWetlandsHide_Aslak_2
	goto ParcelWetlandsHide_Aslak_1

ParcelWetlandsHide_Aslak_7:
# 22 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Aslak_R3
	goto ParcelWetlandsHide_Aslak_6

ParcelWetlandsHide_Aslak_8:
# 21 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASLAK_R3
	goto_if 0, ParcelWetlandsHide_Aslak_7
	goto ParcelWetlandsHide_Aslak_6

ParcelWetlandsHide_Aslak_12:
# 25 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Aslak_R4
	goto ParcelWetlandsHide_Aslak_11

ParcelWetlandsHide_Aslak_13:
# 24 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASLAK_R4
	goto_if 0, ParcelWetlandsHide_Aslak_12
	goto ParcelWetlandsHide_Aslak_11

ParcelWetlandsHide_Aslak_17:
# 28 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Aslak_R5
	goto ParcelWetlandsHide_Aslak_16

ParcelWetlandsHide_Aslak_18:
# 27 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASLAK_R5
	goto_if 0, ParcelWetlandsHide_Aslak_17
	goto ParcelWetlandsHide_Aslak_16


ParcelWetlandsHide_Aslak_FirstWin::
# 34 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_Text_2, MSGBOX_DEFAULT
# 35 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Aslak_R2::
# 39 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 40 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 41 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R2_Text_0, MSGBOX_YESNO
# 42 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Aslak_R2_2
# 47 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASLAK_R2, ParcelWetlandsHide_Aslak_R2_Text_2
# 48 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R2_Text_3, MSGBOX_DEFAULT
# 49 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Aslak_R2_2:
# 43 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R2_Text_1, MSGBOX_DEFAULT
# 44 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Aslak_R3::
# 53 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 54 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 55 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R3_Text_0, MSGBOX_YESNO
# 56 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Aslak_R3_2
# 61 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASLAK_R3, ParcelWetlandsHide_Aslak_R3_Text_1
# 62 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R3_Text_2, MSGBOX_DEFAULT
# 63 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Aslak_R3_2:
# 57 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R2_Text_1, MSGBOX_DEFAULT
# 58 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Aslak_R4::
# 67 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 68 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 69 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R4_Text_0, MSGBOX_YESNO
# 70 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Aslak_R4_2
# 75 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASLAK_R4, ParcelWetlandsHide_Aslak_R4_Text_1
# 76 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R4_Text_2, MSGBOX_DEFAULT
# 77 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Aslak_R4_2:
# 71 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R2_Text_1, MSGBOX_DEFAULT
# 72 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Aslak_R5::
# 81 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 82 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 83 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R5_Text_0, MSGBOX_YESNO
# 84 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Aslak_R5_2
# 89 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASLAK_R5, ParcelWetlandsHide_Aslak_R3_Text_1
# 90 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R5_Text_1, MSGBOX_DEFAULT
# 91 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Aslak_R5_2:
# 85 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Aslak_R2_Text_1, MSGBOX_DEFAULT
# 86 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Hjalte::
# 95 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_HJALTE, ParcelWetlandsHide_Hjalte_Text_0, ParcelWetlandsHide_Hjalte_Text_1, ParcelWetlandsHide_Hjalte_FirstWin
# 99 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 100 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Hjalte_3
ParcelWetlandsHide_Hjalte_1:
# 103 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Hjalte_8
ParcelWetlandsHide_Hjalte_6:
# 106 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Hjalte_13
ParcelWetlandsHide_Hjalte_11:
# 109 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Hjalte_18
ParcelWetlandsHide_Hjalte_16:
# 112 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Hjalte_2:
# 101 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Hjalte_R2
	goto ParcelWetlandsHide_Hjalte_1

ParcelWetlandsHide_Hjalte_3:
# 100 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_HJALTE_R2
	goto_if 0, ParcelWetlandsHide_Hjalte_2
	goto ParcelWetlandsHide_Hjalte_1

ParcelWetlandsHide_Hjalte_7:
# 104 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Hjalte_R3
	goto ParcelWetlandsHide_Hjalte_6

ParcelWetlandsHide_Hjalte_8:
# 103 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_HJALTE_R3
	goto_if 0, ParcelWetlandsHide_Hjalte_7
	goto ParcelWetlandsHide_Hjalte_6

ParcelWetlandsHide_Hjalte_12:
# 107 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Hjalte_R4
	goto ParcelWetlandsHide_Hjalte_11

ParcelWetlandsHide_Hjalte_13:
# 106 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_HJALTE_R4
	goto_if 0, ParcelWetlandsHide_Hjalte_12
	goto ParcelWetlandsHide_Hjalte_11

ParcelWetlandsHide_Hjalte_17:
# 110 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Hjalte_R5
	goto ParcelWetlandsHide_Hjalte_16

ParcelWetlandsHide_Hjalte_18:
# 109 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_HJALTE_R5
	goto_if 0, ParcelWetlandsHide_Hjalte_17
	goto ParcelWetlandsHide_Hjalte_16


ParcelWetlandsHide_Hjalte_FirstWin::
# 116 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_Text_2, MSGBOX_DEFAULT
# 117 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Hjalte_R2::
# 121 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 122 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 123 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R2_Text_0, MSGBOX_YESNO
# 124 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Hjalte_R2_2
# 129 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_HJALTE_R2, ParcelWetlandsHide_Hjalte_R2_Text_2
# 130 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R2_Text_3, MSGBOX_DEFAULT
# 131 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Hjalte_R2_2:
# 125 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R2_Text_1, MSGBOX_DEFAULT
# 126 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Hjalte_R3::
# 135 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 136 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 137 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R3_Text_0, MSGBOX_YESNO
# 138 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Hjalte_R3_2
# 143 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_HJALTE_R3, ParcelWetlandsHide_Hjalte_R3_Text_1
# 144 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R3_Text_2, MSGBOX_DEFAULT
# 145 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Hjalte_R3_2:
# 139 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R2_Text_1, MSGBOX_DEFAULT
# 140 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Hjalte_R4::
# 149 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 150 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 151 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R4_Text_0, MSGBOX_YESNO
# 152 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Hjalte_R4_2
# 157 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_HJALTE_R4, ParcelWetlandsHide_Hjalte_R4_Text_1
# 158 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R4_Text_2, MSGBOX_DEFAULT
# 159 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Hjalte_R4_2:
# 153 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R2_Text_1, MSGBOX_DEFAULT
# 154 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Hjalte_R5::
# 163 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 164 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 165 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R5_Text_0, MSGBOX_YESNO
# 166 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Hjalte_R5_2
# 171 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_HJALTE_R5, ParcelWetlandsHide_Hjalte_R3_Text_1
# 172 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R5_Text_1, MSGBOX_DEFAULT
# 173 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Hjalte_R5_2:
# 167 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Hjalte_R2_Text_1, MSGBOX_DEFAULT
# 168 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Ragna::
# 177 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_RAGNA, ParcelWetlandsHide_Ragna_Text_0, ParcelWetlandsHide_Ragna_Text_1, ParcelWetlandsHide_Ragna_FirstWin
# 181 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 182 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Ragna_3
ParcelWetlandsHide_Ragna_1:
# 185 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Ragna_8
ParcelWetlandsHide_Ragna_6:
# 188 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Ragna_13
ParcelWetlandsHide_Ragna_11:
# 191 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Ragna_18
ParcelWetlandsHide_Ragna_16:
# 194 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Ragna_2:
# 183 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Ragna_R2
	goto ParcelWetlandsHide_Ragna_1

ParcelWetlandsHide_Ragna_3:
# 182 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_RAGNA_R2
	goto_if 0, ParcelWetlandsHide_Ragna_2
	goto ParcelWetlandsHide_Ragna_1

ParcelWetlandsHide_Ragna_7:
# 186 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Ragna_R3
	goto ParcelWetlandsHide_Ragna_6

ParcelWetlandsHide_Ragna_8:
# 185 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_RAGNA_R3
	goto_if 0, ParcelWetlandsHide_Ragna_7
	goto ParcelWetlandsHide_Ragna_6

ParcelWetlandsHide_Ragna_12:
# 189 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Ragna_R4
	goto ParcelWetlandsHide_Ragna_11

ParcelWetlandsHide_Ragna_13:
# 188 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_RAGNA_R4
	goto_if 0, ParcelWetlandsHide_Ragna_12
	goto ParcelWetlandsHide_Ragna_11

ParcelWetlandsHide_Ragna_17:
# 192 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Ragna_R5
	goto ParcelWetlandsHide_Ragna_16

ParcelWetlandsHide_Ragna_18:
# 191 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_RAGNA_R5
	goto_if 0, ParcelWetlandsHide_Ragna_17
	goto ParcelWetlandsHide_Ragna_16


ParcelWetlandsHide_Ragna_FirstWin::
# 198 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_Text_2, MSGBOX_DEFAULT
# 199 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Ragna_R2::
# 203 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 204 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 205 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R2_Text_0, MSGBOX_YESNO
# 206 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Ragna_R2_2
# 211 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_RAGNA_R2, ParcelWetlandsHide_Ragna_R2_Text_2
# 212 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R2_Text_3, MSGBOX_DEFAULT
# 213 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Ragna_R2_2:
# 207 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 208 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Ragna_R3::
# 217 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 218 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 219 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R3_Text_0, MSGBOX_YESNO
# 220 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Ragna_R3_2
# 225 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_RAGNA_R3, ParcelWetlandsHide_Ragna_R3_Text_1
# 226 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R3_Text_2, MSGBOX_DEFAULT
# 227 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Ragna_R3_2:
# 221 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 222 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Ragna_R4::
# 231 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 232 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 233 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R4_Text_0, MSGBOX_YESNO
# 234 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Ragna_R4_2
# 239 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_RAGNA_R4, ParcelWetlandsHide_Ragna_R4_Text_1
# 240 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R4_Text_2, MSGBOX_DEFAULT
# 241 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Ragna_R4_2:
# 235 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 236 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Ragna_R5::
# 245 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 246 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 247 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R5_Text_0, MSGBOX_YESNO
# 248 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Ragna_R5_2
# 253 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_RAGNA_R5, ParcelWetlandsHide_Ragna_R2_Text_2
# 254 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R5_Text_1, MSGBOX_DEFAULT
# 255 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Ragna_R5_2:
# 249 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 250 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Vemund::
# 259 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_VEMUND, ParcelWetlandsHide_Vemund_Text_0, ParcelWetlandsHide_Vemund_Text_1, ParcelWetlandsHide_Vemund_FirstWin
# 263 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 264 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Vemund_3
ParcelWetlandsHide_Vemund_1:
# 267 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Vemund_8
ParcelWetlandsHide_Vemund_6:
# 270 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Vemund_13
ParcelWetlandsHide_Vemund_11:
# 273 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Vemund_18
ParcelWetlandsHide_Vemund_16:
# 276 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Vemund_2:
# 265 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Vemund_R2
	goto ParcelWetlandsHide_Vemund_1

ParcelWetlandsHide_Vemund_3:
# 264 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_VEMUND_R2
	goto_if 0, ParcelWetlandsHide_Vemund_2
	goto ParcelWetlandsHide_Vemund_1

ParcelWetlandsHide_Vemund_7:
# 268 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Vemund_R3
	goto ParcelWetlandsHide_Vemund_6

ParcelWetlandsHide_Vemund_8:
# 267 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_VEMUND_R3
	goto_if 0, ParcelWetlandsHide_Vemund_7
	goto ParcelWetlandsHide_Vemund_6

ParcelWetlandsHide_Vemund_12:
# 271 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Vemund_R4
	goto ParcelWetlandsHide_Vemund_11

ParcelWetlandsHide_Vemund_13:
# 270 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_VEMUND_R4
	goto_if 0, ParcelWetlandsHide_Vemund_12
	goto ParcelWetlandsHide_Vemund_11

ParcelWetlandsHide_Vemund_17:
# 274 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Vemund_R5
	goto ParcelWetlandsHide_Vemund_16

ParcelWetlandsHide_Vemund_18:
# 273 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_VEMUND_R5
	goto_if 0, ParcelWetlandsHide_Vemund_17
	goto ParcelWetlandsHide_Vemund_16


ParcelWetlandsHide_Vemund_FirstWin::
# 280 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_Text_2, MSGBOX_DEFAULT
# 281 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Vemund_R2::
# 285 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 286 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 287 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R2_Text_0, MSGBOX_YESNO
# 288 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Vemund_R2_2
# 293 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_VEMUND_R2, ParcelWetlandsHide_Vemund_R2_Text_2
# 294 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R2_Text_3, MSGBOX_DEFAULT
# 295 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Vemund_R2_2:
# 289 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R2_Text_1, MSGBOX_DEFAULT
# 290 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Vemund_R3::
# 299 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 300 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 301 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R3_Text_0, MSGBOX_YESNO
# 302 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Vemund_R3_2
# 307 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_VEMUND_R3, ParcelWetlandsHide_Vemund_R3_Text_1
# 308 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R3_Text_2, MSGBOX_DEFAULT
# 309 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Vemund_R3_2:
# 303 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R2_Text_1, MSGBOX_DEFAULT
# 304 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Vemund_R4::
# 313 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 314 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 315 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R4_Text_0, MSGBOX_YESNO
# 316 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Vemund_R4_2
# 321 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_VEMUND_R4, ParcelWetlandsHide_Vemund_R4_Text_1
# 322 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R4_Text_2, MSGBOX_DEFAULT
# 323 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Vemund_R4_2:
# 317 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R2_Text_1, MSGBOX_DEFAULT
# 318 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Vemund_R5::
# 327 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 328 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 329 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R5_Text_0, MSGBOX_YESNO
# 330 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Vemund_R5_2
# 335 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_VEMUND_R5, ParcelWetlandsHide_Vemund_R4_Text_1
# 336 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R5_Text_1, MSGBOX_DEFAULT
# 337 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Vemund_R5_2:
# 331 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Vemund_R2_Text_1, MSGBOX_DEFAULT
# 332 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Sindre::
# 341 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_SINDRE, ParcelWetlandsHide_Sindre_Text_0, ParcelWetlandsHide_Sindre_Text_1, ParcelWetlandsHide_Sindre_FirstWin
# 345 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 346 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Sindre_3
ParcelWetlandsHide_Sindre_1:
# 349 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Sindre_8
ParcelWetlandsHide_Sindre_6:
# 352 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Sindre_13
ParcelWetlandsHide_Sindre_11:
# 355 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Sindre_18
ParcelWetlandsHide_Sindre_16:
# 358 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Sindre_2:
# 347 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Sindre_R2
	goto ParcelWetlandsHide_Sindre_1

ParcelWetlandsHide_Sindre_3:
# 346 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_SINDRE_R2
	goto_if 0, ParcelWetlandsHide_Sindre_2
	goto ParcelWetlandsHide_Sindre_1

ParcelWetlandsHide_Sindre_7:
# 350 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Sindre_R3
	goto ParcelWetlandsHide_Sindre_6

ParcelWetlandsHide_Sindre_8:
# 349 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_SINDRE_R3
	goto_if 0, ParcelWetlandsHide_Sindre_7
	goto ParcelWetlandsHide_Sindre_6

ParcelWetlandsHide_Sindre_12:
# 353 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Sindre_R4
	goto ParcelWetlandsHide_Sindre_11

ParcelWetlandsHide_Sindre_13:
# 352 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_SINDRE_R4
	goto_if 0, ParcelWetlandsHide_Sindre_12
	goto ParcelWetlandsHide_Sindre_11

ParcelWetlandsHide_Sindre_17:
# 356 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Sindre_R5
	goto ParcelWetlandsHide_Sindre_16

ParcelWetlandsHide_Sindre_18:
# 355 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_SINDRE_R5
	goto_if 0, ParcelWetlandsHide_Sindre_17
	goto ParcelWetlandsHide_Sindre_16


ParcelWetlandsHide_Sindre_FirstWin::
# 362 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_Text_2, MSGBOX_DEFAULT
# 363 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Sindre_R2::
# 367 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 368 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 369 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R2_Text_0, MSGBOX_YESNO
# 370 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Sindre_R2_2
# 375 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_SINDRE_R2, ParcelWetlandsHide_Sindre_R2_Text_2
# 376 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R2_Text_3, MSGBOX_DEFAULT
# 377 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Sindre_R2_2:
# 371 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R2_Text_1, MSGBOX_DEFAULT
# 372 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Sindre_R3::
# 381 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 382 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 383 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R3_Text_0, MSGBOX_YESNO
# 384 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Sindre_R3_2
# 389 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_SINDRE_R3, ParcelWetlandsHide_Sindre_R3_Text_1
# 390 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R3_Text_2, MSGBOX_DEFAULT
# 391 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Sindre_R3_2:
# 385 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R2_Text_1, MSGBOX_DEFAULT
# 386 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Sindre_R4::
# 395 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 396 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 397 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R4_Text_0, MSGBOX_YESNO
# 398 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Sindre_R4_2
# 403 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_SINDRE_R4, ParcelWetlandsHide_Sindre_R4_Text_1
# 404 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R4_Text_2, MSGBOX_DEFAULT
# 405 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Sindre_R4_2:
# 399 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R2_Text_1, MSGBOX_DEFAULT
# 400 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Sindre_R5::
# 409 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 410 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 411 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R5_Text_0, MSGBOX_YESNO
# 412 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Sindre_R5_2
# 417 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_SINDRE_R5, ParcelWetlandsHide_Sindre_R5_Text_1
# 418 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R5_Text_2, MSGBOX_DEFAULT
# 419 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Sindre_R5_2:
# 413 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sindre_R2_Text_1, MSGBOX_DEFAULT
# 414 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Unni::
# 423 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_UNNI, ParcelWetlandsHide_Unni_Text_0, ParcelWetlandsHide_Unni_Text_1, ParcelWetlandsHide_Unni_FirstWin
# 427 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 428 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Unni_3
ParcelWetlandsHide_Unni_1:
# 431 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Unni_8
ParcelWetlandsHide_Unni_6:
# 434 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Unni_13
ParcelWetlandsHide_Unni_11:
# 437 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Unni_18
ParcelWetlandsHide_Unni_16:
# 440 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Unni_2:
# 429 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Unni_R2
	goto ParcelWetlandsHide_Unni_1

ParcelWetlandsHide_Unni_3:
# 428 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_UNNI_R2
	goto_if 0, ParcelWetlandsHide_Unni_2
	goto ParcelWetlandsHide_Unni_1

ParcelWetlandsHide_Unni_7:
# 432 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Unni_R3
	goto ParcelWetlandsHide_Unni_6

ParcelWetlandsHide_Unni_8:
# 431 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_UNNI_R3
	goto_if 0, ParcelWetlandsHide_Unni_7
	goto ParcelWetlandsHide_Unni_6

ParcelWetlandsHide_Unni_12:
# 435 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Unni_R4
	goto ParcelWetlandsHide_Unni_11

ParcelWetlandsHide_Unni_13:
# 434 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_UNNI_R4
	goto_if 0, ParcelWetlandsHide_Unni_12
	goto ParcelWetlandsHide_Unni_11

ParcelWetlandsHide_Unni_17:
# 438 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Unni_R5
	goto ParcelWetlandsHide_Unni_16

ParcelWetlandsHide_Unni_18:
# 437 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_UNNI_R5
	goto_if 0, ParcelWetlandsHide_Unni_17
	goto ParcelWetlandsHide_Unni_16


ParcelWetlandsHide_Unni_FirstWin::
# 444 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_Text_2, MSGBOX_DEFAULT
# 445 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Unni_R2::
# 449 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 450 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 451 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R2_Text_0, MSGBOX_YESNO
# 452 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Unni_R2_2
# 457 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_UNNI_R2, ParcelWetlandsHide_Unni_R2_Text_2
# 458 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R2_Text_3, MSGBOX_DEFAULT
# 459 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Unni_R2_2:
# 453 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R2_Text_1, MSGBOX_DEFAULT
# 454 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Unni_R3::
# 463 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 464 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 465 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R3_Text_0, MSGBOX_YESNO
# 466 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Unni_R3_2
# 471 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_UNNI_R3, ParcelWetlandsHide_Unni_R3_Text_1
# 472 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R3_Text_2, MSGBOX_DEFAULT
# 473 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Unni_R3_2:
# 467 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R2_Text_1, MSGBOX_DEFAULT
# 468 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Unni_R4::
# 477 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 478 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 479 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R4_Text_0, MSGBOX_YESNO
# 480 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Unni_R4_2
# 485 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_UNNI_R4, ParcelWetlandsHide_Unni_R3_Text_1
# 486 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R4_Text_1, MSGBOX_DEFAULT
# 487 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Unni_R4_2:
# 481 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R2_Text_1, MSGBOX_DEFAULT
# 482 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Unni_R5::
# 491 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 492 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 493 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R5_Text_0, MSGBOX_YESNO
# 494 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Unni_R5_2
# 499 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_UNNI_R5, ParcelWetlandsHide_Unni_R5_Text_1
# 500 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R5_Text_2, MSGBOX_DEFAULT
# 501 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Unni_R5_2:
# 495 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Unni_R2_Text_1, MSGBOX_DEFAULT
# 496 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Torvald::
# 505 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_TORVALD, ParcelWetlandsHide_Torvald_Text_0, ParcelWetlandsHide_Torvald_Text_1, ParcelWetlandsHide_Torvald_FirstWin
# 509 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 510 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Torvald_3
ParcelWetlandsHide_Torvald_1:
# 513 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Torvald_8
ParcelWetlandsHide_Torvald_6:
# 516 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Torvald_13
ParcelWetlandsHide_Torvald_11:
# 519 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Torvald_18
ParcelWetlandsHide_Torvald_16:
# 522 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Torvald_2:
# 511 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Torvald_R2
	goto ParcelWetlandsHide_Torvald_1

ParcelWetlandsHide_Torvald_3:
# 510 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_TORVALD_R2
	goto_if 0, ParcelWetlandsHide_Torvald_2
	goto ParcelWetlandsHide_Torvald_1

ParcelWetlandsHide_Torvald_7:
# 514 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Torvald_R3
	goto ParcelWetlandsHide_Torvald_6

ParcelWetlandsHide_Torvald_8:
# 513 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_TORVALD_R3
	goto_if 0, ParcelWetlandsHide_Torvald_7
	goto ParcelWetlandsHide_Torvald_6

ParcelWetlandsHide_Torvald_12:
# 517 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Torvald_R4
	goto ParcelWetlandsHide_Torvald_11

ParcelWetlandsHide_Torvald_13:
# 516 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_TORVALD_R4
	goto_if 0, ParcelWetlandsHide_Torvald_12
	goto ParcelWetlandsHide_Torvald_11

ParcelWetlandsHide_Torvald_17:
# 520 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Torvald_R5
	goto ParcelWetlandsHide_Torvald_16

ParcelWetlandsHide_Torvald_18:
# 519 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_TORVALD_R5
	goto_if 0, ParcelWetlandsHide_Torvald_17
	goto ParcelWetlandsHide_Torvald_16


ParcelWetlandsHide_Torvald_FirstWin::
# 526 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_Text_2, MSGBOX_DEFAULT
# 527 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Torvald_R2::
# 531 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 532 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 533 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R2_Text_0, MSGBOX_YESNO
# 534 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Torvald_R2_2
# 539 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_TORVALD_R2, ParcelWetlandsHide_Torvald_R2_Text_2
# 540 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R2_Text_3, MSGBOX_DEFAULT
# 541 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Torvald_R2_2:
# 535 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 536 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Torvald_R3::
# 545 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 546 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 547 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R3_Text_0, MSGBOX_YESNO
# 548 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Torvald_R3_2
# 553 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_TORVALD_R3, ParcelWetlandsHide_Torvald_R3_Text_1
# 554 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R3_Text_2, MSGBOX_DEFAULT
# 555 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Torvald_R3_2:
# 549 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 550 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Torvald_R4::
# 559 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 560 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 561 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R4_Text_0, MSGBOX_YESNO
# 562 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Torvald_R4_2
# 567 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_TORVALD_R4, ParcelWetlandsHide_Torvald_R4_Text_1
# 568 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R4_Text_2, MSGBOX_DEFAULT
# 569 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Torvald_R4_2:
# 563 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 564 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Torvald_R5::
# 573 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 574 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 575 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R5_Text_0, MSGBOX_YESNO
# 576 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Torvald_R5_2
# 581 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_TORVALD_R5, ParcelWetlandsHide_Torvald_R3_Text_1
# 582 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R5_Text_1, MSGBOX_DEFAULT
# 583 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Torvald_R5_2:
# 577 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Torvald_R2_Text_1, MSGBOX_DEFAULT
# 578 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Asta::
# 587 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HID_ASTA, ParcelWetlandsHide_Asta_Text_0, ParcelWetlandsHide_Asta_Text_1, ParcelWetlandsHide_Asta_FirstWin
# 591 "data/maps/ParcelWetlandsHide/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 592 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWetlandsHide_Asta_3
ParcelWetlandsHide_Asta_1:
# 595 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWetlandsHide_Asta_8
ParcelWetlandsHide_Asta_6:
# 598 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWetlandsHide_Asta_13
ParcelWetlandsHide_Asta_11:
# 601 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWetlandsHide_Asta_18
ParcelWetlandsHide_Asta_16:
# 604 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_Text_2, MSGBOX_DEFAULT
	end

ParcelWetlandsHide_Asta_2:
# 593 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Asta_R2
	goto ParcelWetlandsHide_Asta_1

ParcelWetlandsHide_Asta_3:
# 592 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASTA_R2
	goto_if 0, ParcelWetlandsHide_Asta_2
	goto ParcelWetlandsHide_Asta_1

ParcelWetlandsHide_Asta_7:
# 596 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Asta_R3
	goto ParcelWetlandsHide_Asta_6

ParcelWetlandsHide_Asta_8:
# 595 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASTA_R3
	goto_if 0, ParcelWetlandsHide_Asta_7
	goto ParcelWetlandsHide_Asta_6

ParcelWetlandsHide_Asta_12:
# 599 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Asta_R4
	goto ParcelWetlandsHide_Asta_11

ParcelWetlandsHide_Asta_13:
# 598 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASTA_R4
	goto_if 0, ParcelWetlandsHide_Asta_12
	goto ParcelWetlandsHide_Asta_11

ParcelWetlandsHide_Asta_17:
# 602 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto ParcelWetlandsHide_Asta_R5
	goto ParcelWetlandsHide_Asta_16

ParcelWetlandsHide_Asta_18:
# 601 "data/maps/ParcelWetlandsHide/scripts.pory"
	checktrainerflag TRAINER_SKALD_HID_ASTA_R5
	goto_if 0, ParcelWetlandsHide_Asta_17
	goto ParcelWetlandsHide_Asta_16


ParcelWetlandsHide_Asta_FirstWin::
# 608 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_Text_2, MSGBOX_DEFAULT
# 609 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Asta_R2::
# 613 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 614 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 615 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R2_Text_0, MSGBOX_YESNO
# 616 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Asta_R2_2
# 621 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASTA_R2, ParcelWetlandsHide_Asta_R2_Text_2
# 622 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R2_Text_3, MSGBOX_DEFAULT
# 623 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Asta_R2_2:
# 617 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R2_Text_1, MSGBOX_DEFAULT
# 618 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Asta_R3::
# 627 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 628 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 629 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R3_Text_0, MSGBOX_YESNO
# 630 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Asta_R3_2
# 635 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASTA_R3, ParcelWetlandsHide_Asta_R3_Text_1
# 636 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R3_Text_2, MSGBOX_DEFAULT
# 637 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Asta_R3_2:
# 631 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R2_Text_1, MSGBOX_DEFAULT
# 632 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Asta_R4::
# 641 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 642 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 643 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R4_Text_0, MSGBOX_YESNO
# 644 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Asta_R4_2
# 649 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASTA_R4, ParcelWetlandsHide_Asta_R4_Text_1
# 650 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R4_Text_2, MSGBOX_DEFAULT
# 651 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Asta_R4_2:
# 645 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R2_Text_1, MSGBOX_DEFAULT
# 646 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Asta_R5::
# 655 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 656 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 657 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R5_Text_0, MSGBOX_YESNO
# 658 "data/maps/ParcelWetlandsHide/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWetlandsHide_Asta_R5_2
# 663 "data/maps/ParcelWetlandsHide/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HID_ASTA_R5, ParcelWetlandsHide_Asta_R5_Text_1
# 664 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R5_Text_2, MSGBOX_DEFAULT
# 665 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Asta_R5_2:
# 659 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Asta_R2_Text_1, MSGBOX_DEFAULT
# 660 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Warden::
# 669 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 670 "data/maps/ParcelWetlandsHide/scripts.pory"
	faceplayer
# 671 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelWetlandsHide_Warden_3
ParcelWetlandsHide_Warden_1:
# 676 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DUSK_DONE, ParcelWetlandsHide_Warden_7
# 681 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DUSK_FOUND, ParcelWetlandsHide_Warden_10
# 688 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DUSK, ParcelWetlandsHide_Warden_13
# 693 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ParcelWetlandsHide_Warden_16
# 699 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHide_Warden_19
# 704 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Warden_Text_6, MSGBOX_DEFAULT
# 705 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Warden_2:
# 672 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Warden_Text_0, MSGBOX_DEFAULT
# 673 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Warden_3:
# 671 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DUSK_DONE, ParcelWetlandsHide_Warden_2
	goto ParcelWetlandsHide_Warden_1

ParcelWetlandsHide_Warden_7:
# 677 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Warden_Text_1, MSGBOX_DEFAULT
# 678 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Warden_10:
# 682 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Warden_Text_2, MSGBOX_DEFAULT
# 683 "data/maps/ParcelWetlandsHide/scripts.pory"
	giveitem ITEM_NET_BALL, 5
# 684 "data/maps/ParcelWetlandsHide/scripts.pory"
	setflag FLAG_SKALD_Q_DUSK_DONE
# 685 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Warden_13:
# 689 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Warden_Text_3, MSGBOX_DEFAULT
# 690 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Warden_16:
# 694 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Warden_Text_4, MSGBOX_DEFAULT
# 695 "data/maps/ParcelWetlandsHide/scripts.pory"
	setflag FLAG_SKALD_Q_DUSK
# 696 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_Warden_19:
# 700 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Warden_Text_5, MSGBOX_DEFAULT
# 701 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end


ParcelWetlandsHide_Sign::
# 709 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Sign_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHide_SignEast::
# 713 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_SignEast_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHide_ItemGreatBall::
# 716 "data/maps/ParcelWetlandsHide/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelWetlandsHide_Leave::
# 718 "data/maps/ParcelWetlandsHide/scripts.pory"
	warp MAP_PARCEL_WETLANDS, 3, 27
# 719 "data/maps/ParcelWetlandsHide/scripts.pory"
	waitstate
	end


ParcelWetlandsHide_DuskCount::
# 724 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DUSK, ParcelWetlandsHide_DuskCount_2
# 727 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_DuskCount_Text_0, MSGBOX_SIGN
# 728 "data/maps/ParcelWetlandsHide/scripts.pory"
	setflag FLAG_SKALD_Q_DUSK_FOUND
	end

ParcelWetlandsHide_DuskCount_2:
	end


ParcelWetlandsHide_PairBirders::
# 735 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 736 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHide_PairBirders_2
# 741 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelWetlandsHide_PairBirders_3
# 747 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_8, MSGBOX_DEFAULT
# 748 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_9, MSGBOX_DEFAULT
# 749 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_10, MSGBOX_DEFAULT
# 750 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_11, MSGBOX_DEFAULT
ParcelWetlandsHide_PairBirders_1:
# 752 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_PairBirders_2:
# 737 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_0, MSGBOX_DEFAULT
# 738 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_1, MSGBOX_DEFAULT
# 739 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_2, MSGBOX_DEFAULT
# 740 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_3, MSGBOX_DEFAULT
	goto ParcelWetlandsHide_PairBirders_1

ParcelWetlandsHide_PairBirders_3:
# 742 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_4, MSGBOX_DEFAULT
# 743 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_5, MSGBOX_DEFAULT
# 744 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_6, MSGBOX_DEFAULT
# 745 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairBirders_Text_7, MSGBOX_DEFAULT
	goto ParcelWetlandsHide_PairBirders_1


ParcelWetlandsHide_Board1::
# 759 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Board1_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHide_Board2::
# 764 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Board2_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHide_PairPath::
# 771 "data/maps/ParcelWetlandsHide/scripts.pory"
	lock
# 772 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHide_PairPath_2
# 776 "data/maps/ParcelWetlandsHide/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelWetlandsHide_PairPath_3
# 782 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairPath_Text_7, MSGBOX_DEFAULT
# 783 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairPath_Text_8, MSGBOX_DEFAULT
# 784 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairPath_Text_9, MSGBOX_DEFAULT
# 785 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairPath_Text_10, MSGBOX_DEFAULT
# 786 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairPath_Text_11, MSGBOX_DEFAULT
ParcelWetlandsHide_PairPath_1:
# 788 "data/maps/ParcelWetlandsHide/scripts.pory"
	release
	end

ParcelWetlandsHide_PairPath_2:
# 773 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairPath_Text_0, MSGBOX_DEFAULT
# 774 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairPath_Text_1, MSGBOX_DEFAULT
# 775 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairPath_Text_2, MSGBOX_DEFAULT
	goto ParcelWetlandsHide_PairPath_1

ParcelWetlandsHide_PairPath_3:
# 777 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairPath_Text_3, MSGBOX_DEFAULT
# 778 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairPath_Text_4, MSGBOX_DEFAULT
# 779 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairPath_Text_5, MSGBOX_DEFAULT
# 780 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_PairPath_Text_6, MSGBOX_DEFAULT
	goto ParcelWetlandsHide_PairPath_1


ParcelWetlandsHide_Board3::
# 795 "data/maps/ParcelWetlandsHide/scripts.pory"
	msgbox ParcelWetlandsHide_Board3_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHide_Aslak_Text_0:
# 14 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Hide's full. Sit on the bank with\n"
	.string "me and keep your voice down. After this.$"

ParcelWetlandsHide_Aslak_Text_1:
# 15 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: …Quietly done.$"

ParcelWetlandsHide_Aslak_Text_2:
# 30 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Forty-one WINGULL on the count\n"
	.string "this morning. Last spring it was ninety.\l"
	.string "Nobody wants that number.$"

ParcelWetlandsHide_Aslak_R2_Text_0:
# 41 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelWetlandsHide_Aslak_R2_Text_1:
# 43 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Suit yourself. I'm here.$"

ParcelWetlandsHide_Aslak_R2_Text_2:
# 47 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Still yours.$"

ParcelWetlandsHide_Aslak_R2_Text_3:
# 48 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlandsHide_Aslak_R3_Text_0:
# 55 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlandsHide_Aslak_R3_Text_1:
# 61 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Right. That's the whole of it.$"

ParcelWetlandsHide_Aslak_R3_Text_2:
# 62 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlandsHide_Aslak_R4_Text_0:
# 69 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelWetlandsHide_Aslak_R4_Text_1:
# 75 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: …Again, then. Later.$"

ParcelWetlandsHide_Aslak_R4_Text_2:
# 76 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlandsHide_Aslak_R5_Text_0:
# 83 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWetlandsHide_Aslak_R5_Text_1:
# 90 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASLAK: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlandsHide_Hjalte_Text_0:
# 96 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: The pond's the last clean water\n"
	.string "on the backwater. I fish it and I don't\l"
	.string "tell. Battle for my silence.$"

ParcelWetlandsHide_Hjalte_Text_1:
# 97 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: …Silence it is.$"

ParcelWetlandsHide_Hjalte_Text_2:
# 112 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: MAGIKARP in the pond.\n"
	.string "Hundreds. They came up from the\l"
	.string "backwater when it went bad. Fish know.$"

ParcelWetlandsHide_Hjalte_R2_Text_0:
# 123 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelWetlandsHide_Hjalte_R2_Text_1:
# 125 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: Fine. Same spot.$"

ParcelWetlandsHide_Hjalte_R2_Text_2:
# 129 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: Still yours.$"

ParcelWetlandsHide_Hjalte_R2_Text_3:
# 130 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlandsHide_Hjalte_R3_Text_0:
# 137 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelWetlandsHide_Hjalte_R3_Text_1:
# 143 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: …Fair.$"

ParcelWetlandsHide_Hjalte_R3_Text_2:
# 144 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlandsHide_Hjalte_R4_Text_0:
# 151 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelWetlandsHide_Hjalte_R4_Text_1:
# 157 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: Noted. Properly, this time.$"

ParcelWetlandsHide_Hjalte_R4_Text_2:
# 158 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelWetlandsHide_Hjalte_R5_Text_0:
# 165 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWetlandsHide_Hjalte_R5_Text_1:
# 172 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "HJALTE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlandsHide_Ragna_Text_0:
# 178 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: The hide's for watching, not\n"
	.string "talking. You've talked. Battle.$"

ParcelWetlandsHide_Ragna_Text_1:
# 179 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: …Fine. Watch, then.$"

ParcelWetlandsHide_Ragna_Text_2:
# 194 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: The herons come at dusk. Fewer\n"
	.string "every year. My mother's book says sixty.\l"
	.string "I count eleven.$"

ParcelWetlandsHide_Ragna_R2_Text_0:
# 205 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelWetlandsHide_Ragna_R2_Text_1:
# 207 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Suit yourself. I'm here.$"

ParcelWetlandsHide_Ragna_R2_Text_2:
# 211 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: That's the one I wanted to see.$"

ParcelWetlandsHide_Ragna_R2_Text_3:
# 212 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWetlandsHide_Ragna_R3_Text_0:
# 219 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelWetlandsHide_Ragna_R3_Text_1:
# 225 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Noted. Properly, this time.$"

ParcelWetlandsHide_Ragna_R3_Text_2:
# 226 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlandsHide_Ragna_R4_Text_0:
# 233 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelWetlandsHide_Ragna_R4_Text_1:
# 239 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Right. That's the whole of it.$"

ParcelWetlandsHide_Ragna_R4_Text_2:
# 240 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlandsHide_Ragna_R5_Text_0:
# 247 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelWetlandsHide_Ragna_R5_Text_1:
# 254 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "RAGNA: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlandsHide_Vemund_Text_0:
# 260 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: SURSKIT walk on the pond. They\n"
	.string "can't walk on the backwater. Too thick.\l"
	.string "Fight.$"

ParcelWetlandsHide_Vemund_Text_1:
# 261 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: …Too thick for me too.$"

ParcelWetlandsHide_Vemund_Text_2:
# 276 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: GUNNAR counts them at the\n"
	.string "landing. I count them here. His number's\l"
	.string "going down and mine's going up. Same\l"
	.string "bugs.$"

ParcelWetlandsHide_Vemund_R2_Text_0:
# 287 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelWetlandsHide_Vemund_R2_Text_1:
# 289 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelWetlandsHide_Vemund_R2_Text_2:
# 293 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Right. That's the whole of it.$"

ParcelWetlandsHide_Vemund_R2_Text_3:
# 294 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlandsHide_Vemund_R3_Text_0:
# 301 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWetlandsHide_Vemund_R3_Text_1:
# 307 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Still yours.$"

ParcelWetlandsHide_Vemund_R3_Text_2:
# 308 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlandsHide_Vemund_R4_Text_0:
# 315 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelWetlandsHide_Vemund_R4_Text_1:
# 321 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Noted. Properly, this time.$"

ParcelWetlandsHide_Vemund_R4_Text_2:
# 322 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlandsHide_Vemund_R5_Text_0:
# 329 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelWetlandsHide_Vemund_R5_Text_1:
# 336 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "VEMUND: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlandsHide_Sindre_Text_0:
# 342 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: My dad built the hide. The\n"
	.string "CORPS put a plaque on it. The plaque's\l"
	.string "worth more than the hide now. Battle!$"

ParcelWetlandsHide_Sindre_Text_1:
# 343 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: …Dad would've won.$"

ParcelWetlandsHide_Sindre_Text_2:
# 358 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: The plaque says 'protected\n"
	.string "wetland'. The water doesn't read.$"

ParcelWetlandsHide_Sindre_R2_Text_0:
# 369 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelWetlandsHide_Sindre_R2_Text_1:
# 371 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: Another time, then.$"

ParcelWetlandsHide_Sindre_R2_Text_2:
# 375 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: Noted. Properly, this time.$"

ParcelWetlandsHide_Sindre_R2_Text_3:
# 376 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelWetlandsHide_Sindre_R3_Text_0:
# 383 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelWetlandsHide_Sindre_R3_Text_1:
# 389 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: Right. That's the whole of it.$"

ParcelWetlandsHide_Sindre_R3_Text_2:
# 390 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlandsHide_Sindre_R4_Text_0:
# 397 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelWetlandsHide_Sindre_R4_Text_1:
# 403 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: That's the one I wanted to see.$"

ParcelWetlandsHide_Sindre_R4_Text_2:
# 404 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlandsHide_Sindre_R5_Text_0:
# 411 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelWetlandsHide_Sindre_R5_Text_1:
# 417 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: …Fair.$"

ParcelWetlandsHide_Sindre_R5_Text_2:
# 418 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SINDRE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelWetlandsHide_Unni_Text_0:
# 424 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: I ring the WINGULL chicks. The\n"
	.string "rings come back from down the coast\l"
	.string "with oil on them. Fight.$"

ParcelWetlandsHide_Unni_Text_1:
# 425 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: …Ringed.$"

ParcelWetlandsHide_Unni_Text_2:
# 440 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: One ring came back from MEREHOLT\n"
	.string "COAST in a cannery tin. I keep it in my\l"
	.string "pocket.$"

ParcelWetlandsHide_Unni_R2_Text_0:
# 451 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelWetlandsHide_Unni_R2_Text_1:
# 453 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: Fine. Same spot.$"

ParcelWetlandsHide_Unni_R2_Text_2:
# 457 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: Right. That's the whole of it.$"

ParcelWetlandsHide_Unni_R2_Text_3:
# 458 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlandsHide_Unni_R3_Text_0:
# 465 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWetlandsHide_Unni_R3_Text_1:
# 471 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: Noted. Properly, this time.$"

ParcelWetlandsHide_Unni_R3_Text_2:
# 472 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: One more in me. After the high\n"
	.string "ground.$"

ParcelWetlandsHide_Unni_R4_Text_0:
# 479 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelWetlandsHide_Unni_R4_Text_1:
# 486 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWetlandsHide_Unni_R5_Text_0:
# 493 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelWetlandsHide_Unni_R5_Text_1:
# 499 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: That's the one I wanted to see.$"

ParcelWetlandsHide_Unni_R5_Text_2:
# 500 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "UNNI: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWetlandsHide_Torvald_Text_0:
# 506 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Caught nothing today. Didn't\n"
	.string "expect to. I come for the sitting.\l"
	.string "Battle, since you've ruined the sitting.$"

ParcelWetlandsHide_Torvald_Text_1:
# 507 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: …Sitting's ruined anyway.$"

ParcelWetlandsHide_Torvald_Text_2:
# 522 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: There used to be BARBOACH in\n"
	.string "the mud here. The mud's dry four months\l"
	.string "a year now. Written down, you say? Good.$"

ParcelWetlandsHide_Torvald_R2_Text_0:
# 533 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelWetlandsHide_Torvald_R2_Text_1:
# 535 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Suit yourself. I'm here.$"

ParcelWetlandsHide_Torvald_R2_Text_2:
# 539 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Right. That's the whole of it.$"

ParcelWetlandsHide_Torvald_R2_Text_3:
# 540 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelWetlandsHide_Torvald_R3_Text_0:
# 547 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelWetlandsHide_Torvald_R3_Text_1:
# 553 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Noted. Properly, this time.$"

ParcelWetlandsHide_Torvald_R3_Text_2:
# 554 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelWetlandsHide_Torvald_R4_Text_0:
# 561 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: I don't care about the paper.\n"
	.string "I care about the one I lost. Go?$"

ParcelWetlandsHide_Torvald_R4_Text_1:
# 567 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: …Again, then. Later.$"

ParcelWetlandsHide_Torvald_R4_Text_2:
# 568 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelWetlandsHide_Torvald_R5_Text_0:
# 575 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWetlandsHide_Torvald_R5_Text_1:
# 582 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "TORVALD: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWetlandsHide_Asta_Text_0:
# 588 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Picnic on the one dry rise. You're\n"
	.string "standing on my cloth. Battle for the\l"
	.string "cloth.$"

ParcelWetlandsHide_Asta_Text_1:
# 589 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: …Keep the cloth.$"

ParcelWetlandsHide_Asta_Text_2:
# 604 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: The rise is dry because they\n"
	.string "drained the far side. My picnic spot is\l"
	.string "somebody's lost marsh.$"

ParcelWetlandsHide_Asta_R2_Text_0:
# 615 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelWetlandsHide_Asta_R2_Text_1:
# 617 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelWetlandsHide_Asta_R2_Text_2:
# 621 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: That's the one I wanted to see.$"

ParcelWetlandsHide_Asta_R2_Text_3:
# 622 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWetlandsHide_Asta_R3_Text_0:
# 629 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWetlandsHide_Asta_R3_Text_1:
# 635 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Still yours.$"

ParcelWetlandsHide_Asta_R3_Text_2:
# 636 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWetlandsHide_Asta_R4_Text_0:
# 643 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelWetlandsHide_Asta_R4_Text_1:
# 649 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Right. That's the whole of it.$"

ParcelWetlandsHide_Asta_R4_Text_2:
# 650 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWetlandsHide_Asta_R5_Text_0:
# 657 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWetlandsHide_Asta_R5_Text_1:
# 663 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: Noted. Properly, this time.$"

ParcelWetlandsHide_Asta_R5_Text_2:
# 664 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "ASTA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWetlandsHide_Warden_Text_0:
# 672 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WARDEN: Twelve. In your book and mine.\n"
	.string "RAGNA was right again.\p"
	.string "I've stopped being tired about it.\n"
	.string "Twelve is a good tired.$"

ParcelWetlandsHide_Warden_Text_1:
# 677 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WARDEN: Eleven. It's in the book in your\n"
	.string "hand, not mine. Next year we'll see if\l"
	.string "it's twelve or ten. That's the whole job.\l"
	.string "Next year.$"

ParcelWetlandsHide_Warden_Text_2:
# 682 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WARDEN: Eleven. RAGNA was right and I\n"
	.string "was tired. Write eleven.\p"
	.string "Take these. The CORPS sent a box for\n"
	.string "the hide and nobody here catches\l"
	.string "anything.$"

ParcelWetlandsHide_Warden_Text_3:
# 689 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WARDEN: The reed cut on the far bank of\n"
	.string "the pond. Stand there. Count what\l"
	.string "comes in. Don't count twice.$"

ParcelWetlandsHide_Warden_Text_4:
# 694 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WARDEN: The herons come at dusk. RAGNA\n"
	.string "counts eleven; I count nine. We need a\l"
	.string "third pair of eyes, and yours are paid\l"
	.string "to count.\p"
	.string "Stand by the reed cut on the far bank\n"
	.string "and count what comes in.$"

ParcelWetlandsHide_Warden_Text_5:
# 700 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WARDEN: DR. HERON's line is still on the\n"
	.string "wall. Somebody's written under it, in a\l"
	.string "steady hand: 'Counted. Written down.' I\l"
	.string "didn't see who. I've left it.$"

ParcelWetlandsHide_Warden_Text_6:
# 704 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WARDEN: The hide was DR. HERON's idea,\n"
	.string "twenty years back. Sit still long enough\l"
	.string "and the place tells you what it is.\p"
	.string "She wrote that on the wall inside. It's\n"
	.string "still there. So are the counts, hers and\l"
	.string "everyone's since.$"

ParcelWetlandsHide_Sign_Text_0:
# 709 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "REEDMERE HIDE. Sit still. Count. Write it\n"
	.string "down.$"

ParcelWetlandsHide_SignEast_Text_0:
# 713 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "The backwater landing is east along the\n"
	.string "bank. Keep to the boards.$"

ParcelWetlandsHide_DuskCount_Text_0:
# 727 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "The herons come in low over the reeds.\n"
	.string "One. Two. Three.\p"
	.string "Eleven. The twelfth doesn't come. You\n"
	.string "count again. Eleven.$"

ParcelWetlandsHide_PairBirders_Text_0:
# 737 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "BIRDER: Forty-four tonight. Three\n"
	.string "more.$"

ParcelWetlandsHide_PairBirders_Text_1:
# 738 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SECOND BIRDER: Three isn't a trend. The\n"
	.string "Survey would say so.$"

ParcelWetlandsHide_PairBirders_Text_2:
# 739 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "BIRDER: Three isn't a trend. Three is\n"
	.string "three more lights than last year and I'm\l"
	.string "allowed to sit here and like it for one\l"
	.string "night.$"

ParcelWetlandsHide_PairBirders_Text_3:
# 740 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SECOND BIRDER: One night. Then count\n"
	.string "properly.$"

ParcelWetlandsHide_PairBirders_Text_4:
# 742 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SECOND BIRDER: The ranger sat the dusk\n"
	.string "count with us. Didn't talk. Didn't\l"
	.string "fidget.$"

ParcelWetlandsHide_PairBirders_Text_5:
# 743 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "BIRDER: Did they get the same number?$"

ParcelWetlandsHide_PairBirders_Text_6:
# 744 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SECOND BIRDER: Forty-one. Then asked\n"
	.string "what the number was the year the pond\l"
	.string "was dug straight. We didn't know. Nobody\l"
	.string "counted that year.$"

ParcelWetlandsHide_PairBirders_Text_7:
# 745 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "BIRDER: Somebody should have been us.$"

ParcelWetlandsHide_PairBirders_Text_8:
# 747 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "BIRDER: Dusk count's down again.\n"
	.string "Forty-one lights, where there were\l"
	.string "hundreds.$"

ParcelWetlandsHide_PairBirders_Text_9:
# 748 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SECOND BIRDER: You counted\n"
	.string "forty-three.$"

ParcelWetlandsHide_PairBirders_Text_10:
# 749 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "BIRDER: I counted forty-one twice and\n"
	.string "forty-three once. The Survey takes the\l"
	.string "twice.$"

ParcelWetlandsHide_PairBirders_Text_11:
# 750 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "SECOND BIRDER: The Survey takes the\n"
	.string "honest one. Say it properly.$"

ParcelWetlandsHide_Board1_Text_0:
# 759 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "A SURVEY BOARD inside the hide, where\n"
	.string "the light is bad on purpose. The dusk\l"
	.string "count is the oldest count the Survey\l"
	.string "keeps and the method has not changed:\l"
	.string "sit, do not speak, count what lights.\p"
	.string "The chalked numbers go back along the\n"
	.string "wall and round the corner. The corner is\l"
	.string "where they got smaller.$"

ParcelWetlandsHide_Board2_Text_0:
# 764 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "A SURVEY BOARD on the hide's outer wall,\n"
	.string "for people who will not go in. SURSKIT on\l"
	.string "the open water mean the surface is\l"
	.string "clean enough to stand on.\p"
	.string "The board shows the count by year as a\n"
	.string "row of ticks. You can see the shape of\l"
	.string "it from the path.$"

ParcelWetlandsHide_PairPath_Text_0:
# 773 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "OLD MAN: Twelve this year.$"

ParcelWetlandsHide_PairPath_Text_1:
# 774 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WOMAN: One up.$"

ParcelWetlandsHide_PairPath_Text_2:
# 775 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "OLD MAN: One up is a lantern's worth of\n"
	.string "error. Sit next year and we'll see if it's\l"
	.string "a trend or a lamp.$"

ParcelWetlandsHide_PairPath_Text_3:
# 777 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WOMAN: The ranger sat the whole dusk\n"
	.string "and didn't move. Wrote one number at\l"
	.string "the end.$"

ParcelWetlandsHide_PairPath_Text_4:
# 778 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "OLD MAN: Eleven?$"

ParcelWetlandsHide_PairPath_Text_5:
# 779 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WOMAN: Eleven.$"

ParcelWetlandsHide_PairPath_Text_6:
# 780 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "OLD MAN: RAGNA said eleven. The warden\n"
	.string "said tired. The ranger said eleven. Two\l"
	.string "to one. That's how a count gets its\l"
	.string "number.$"

ParcelWetlandsHide_PairPath_Text_7:
# 782 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "OLD MAN: Lantern off before the gate.\n"
	.string "The lights count, not us.$"

ParcelWetlandsHide_PairPath_Text_8:
# 783 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WOMAN: I know the rule.$"

ParcelWetlandsHide_PairPath_Text_9:
# 784 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "OLD MAN: The rule's the whole count. One\n"
	.string "lantern on and the VOLBEAT lie to you\l"
	.string "for an hour.$"

ParcelWetlandsHide_PairPath_Text_10:
# 785 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "WOMAN: Do they lie or do they leave?$"

ParcelWetlandsHide_PairPath_Text_11:
# 786 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "OLD MAN: Same thing, to a count.$"

ParcelWetlandsHide_Board3_Text_0:
# 795 "data/maps/ParcelWetlandsHide/scripts.pory"
	.string "A SURVEY BOARD at the hide's gate. The\n"
	.string "rule of the dusk count, in full: arrive\l"
	.string "before the light goes, speak to no one,\l"
	.string "count what lights, and write the number\l"
	.string "before you stand up.\p"
	.string "The last rule is the one the Survey\n"
	.string "fought for. A number carried to the\l"
	.string "path is a number changed.$"
