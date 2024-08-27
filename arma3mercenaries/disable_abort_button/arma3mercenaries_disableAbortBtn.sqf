/*
	arma3mercenaries_disableAbortBtn.sqf
	Author: BrianV1981
	Description:
	This script disables the abort button when the player hits the escape key. Additionally, if the player is unconscious (checked using the ACE mod), the abort button in the unconscious menu is also disabled.

	Display Control IDs:
	2    = continue/save
	1010 = respawn
	104  = regular abort
	103  = unconscious abort

	Installation:
	1. Place this script in the following directory:
	   arma3mercenaries\disable_abort_button\arma3mercenaries_disableAbortBtn.sqf

	2. In your mission's `init.sqf` or 'initServer.sqf, add the following line to execute the script:
	   execVM "arma3mercenaries\disable_abort_button\arma3mercenaries_disableAbortBtn.sqf";

	3. Save and test your mission to ensure the abort button is disabled as intended.
	
	update_1: changed 'ACE_isUnconscious isEqualTo true' to 'ace_common_fnc_isAwake isEqualTo false'
*/

/*
 Script: Disable Abort Button
 Purpose: This script disables the abort button in both the regular escape menu and the unconscious menu when the player hits the escape key.

 Display Control IDs:
 - 104 : Regular abort button
 - 103 : Unconscious abort button (when using the ACE mod)
*/

// Disable serialization to modify UI controls
disableSerialization;

// Disable the regular abort button (ID: 104) in the escape menu, if it's open
if (!isNull findDisplay 49) then {
    (findDisplay 49) displayCtrl 104 ctrlShow false;
};

// Check if the player is unconscious using the ACE mod variable
if (player getVariable "ace_common_fnc_isAwake;" isEqualTo false) then {
    // Disable the unconscious abort button (ID: 103) in the unconscious menu
    ((findDisplay 49) displayCtrl 103) ctrlShow false; // change ctrlShow to ctrlEnable to gret out the button lettering instead of totally removing
};
