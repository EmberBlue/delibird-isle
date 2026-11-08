Skald_EventScript_FieldNotebook::
# 6 "data/scripts/skald_notebook.pory"
	lockall
Skald_EventScript_FieldNotebook_3:
# 8 "data/scripts/skald_notebook.pory"
	multichoice 0, 0, MULTI_SKALD_NOTEBOOK, FALSE
# 9 "data/scripts/skald_notebook.pory"
	switch VAR_RESULT
# 10 "data/scripts/skald_notebook.pory"
	case 0, Skald_EventScript_FieldNotebook_6
# 14 "data/scripts/skald_notebook.pory"
	case 1, Skald_EventScript_FieldNotebook_7
# 18 "data/scripts/skald_notebook.pory"
	case 2, Skald_EventScript_FieldNotebook_8
# 22 "data/scripts/skald_notebook.pory"
	case 3, Skald_EventScript_FieldNotebook_9
# 26 "data/scripts/skald_notebook.pory"
	case 4, Skald_EventScript_FieldNotebook_10
Skald_EventScript_FieldNotebook_2:
# 31 "data/scripts/skald_notebook.pory"
	compare VAR_RESULT, 5
	goto_if_lt Skald_EventScript_FieldNotebook_3
# 32 "data/scripts/skald_notebook.pory"
	closemessage
# 33 "data/scripts/skald_notebook.pory"
	releaseall
	end

Skald_EventScript_FieldNotebook_6:
# 11 "data/scripts/skald_notebook.pory"
	setvar VAR_0x8004, 0
# 12 "data/scripts/skald_notebook.pory"
	special SkaldNotebookBuffer
# 13 "data/scripts/skald_notebook.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
	goto Skald_EventScript_FieldNotebook_2

Skald_EventScript_FieldNotebook_7:
# 15 "data/scripts/skald_notebook.pory"
	setvar VAR_0x8004, 1
# 16 "data/scripts/skald_notebook.pory"
	special SkaldNotebookBuffer
# 17 "data/scripts/skald_notebook.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
	goto Skald_EventScript_FieldNotebook_2

Skald_EventScript_FieldNotebook_8:
# 19 "data/scripts/skald_notebook.pory"
	setvar VAR_0x8004, 2
# 20 "data/scripts/skald_notebook.pory"
	special SkaldNotebookBuffer
# 21 "data/scripts/skald_notebook.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
	goto Skald_EventScript_FieldNotebook_2

Skald_EventScript_FieldNotebook_9:
# 23 "data/scripts/skald_notebook.pory"
	setvar VAR_0x8004, 3
# 24 "data/scripts/skald_notebook.pory"
	special SkaldNotebookBuffer
# 25 "data/scripts/skald_notebook.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
	goto Skald_EventScript_FieldNotebook_2

Skald_EventScript_FieldNotebook_10:
# 27 "data/scripts/skald_notebook.pory"
	setvar VAR_0x8004, 4
# 28 "data/scripts/skald_notebook.pory"
	special SkaldNotebookBuffer
# 29 "data/scripts/skald_notebook.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
	goto Skald_EventScript_FieldNotebook_2

