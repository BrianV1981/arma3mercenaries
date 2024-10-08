/*

	Author: BrianV1981
    Description:
	Set AI to Non-Captive, Enabled Movement, Enabled Combat, and Enabled Damage.

	Testing the Code:
	Open the Debug Console (ESC -> "Debug Console").
	Paste either of the code blocks above into the debug console.
	Run the code by clicking Local

*/

    {
        private _unit = _x;
        if (!isPlayer _unit) then {
            [_x, false] call ACE_captives_fnc_setHandcuffed;  // Remove handcuffs
        };
    } forEach allUnits;
