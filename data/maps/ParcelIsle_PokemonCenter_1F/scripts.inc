ParcelIsle_PokemonCenter_1F_MapScripts::
# 8 "data/maps/ParcelIsle_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelIsle_PokemonCenter_1F_OnTransition
# 9 "data/maps/ParcelIsle_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ParcelIsle_PokemonCenter_1F_OnTransition::
# 13 "data/maps/ParcelIsle_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PARCEL_ISLE
	end


ParcelIsle_PokemonCenter_1F_EventScript_Nurse::
# 18 "data/maps/ParcelIsle_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 19 "data/maps/ParcelIsle_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 20 "data/maps/ParcelIsle_PokemonCenter_1F/scripts.pory"
	waitmessage
# 21 "data/maps/ParcelIsle_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 22 "data/maps/ParcelIsle_PokemonCenter_1F/scripts.pory"
	release
	end


ParcelIsle_PokemonCenter_1F_EventScript_Fisher::
# 27 "data/maps/ParcelIsle_PokemonCenter_1F/scripts.pory"
	lock
# 28 "data/maps/ParcelIsle_PokemonCenter_1F/scripts.pory"
	faceplayer
# 29 "data/maps/ParcelIsle_PokemonCenter_1F/scripts.pory"
	msgbox ParcelIsle_PokemonCenter_1F_EventScript_Fisher_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/ParcelIsle_PokemonCenter_1F/scripts.pory"
	release
	end


ParcelIsle_PokemonCenter_1F_EventScript_Fisher_Text_0:
# 29 "data/maps/ParcelIsle_PokemonCenter_1F/scripts.pory"
	.string "Aid's free for provisionals. Corps\n"
	.string "covers it.\p"
	.string "You'll need it--the bridge corridor\n"
	.string "doesn't forgive a tired team.$"
