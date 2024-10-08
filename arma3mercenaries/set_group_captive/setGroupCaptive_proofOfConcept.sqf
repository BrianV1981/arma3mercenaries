/*

	Author: BrianV1981
    Description:
	Set AI to Captive, Disable Movement, Combat, and Disable Damage.

	Testing the Code:
	Open the Debug Console (ESC -> "Debug Console").
	Paste either of the code blocks above into the debug console.
	Run the code by clicking Local

*/

    {
        // Check if the unit is AI
        if (!isPlayer _x) then {
            [_x, true] call ACE_captives_fnc_setHandcuffed;  // Apply handcuffs
        };
    } forEach units group player;
