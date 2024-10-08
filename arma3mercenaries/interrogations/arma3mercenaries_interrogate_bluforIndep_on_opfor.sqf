/*
    arma3mercenaries_interrogate_bluforIndep_on_opfor.sqf
    Author: BrianV1981

	Description:
    This script allows a BLUFOR or Independent player to "interrogate" captured OPFOR units within a 30-meter radius.
    The nearest player to the object with the addAction is identified and tagged with a temporary variable.
    Each captured OPFOR unit is assigned a unique variable and processed with a random health bleed between 1% and 10% damage.
    The health bleed ticks at a random interval between 10 and 30 seconds until the captured OPFOR unit is dead, 
    at which point the player receives a random financial reward between 10,000 and 50,000 credits.
    Additionally, a 3D sound will be played (from an in-game object with a variable 'interrogation_house_1') every time an interrogation is complete.
    Built for multiplayer and dedicated servers:
    Filtering Logic: Ensured that the logic filters out units that are already being interrogated by you or other players.
	Player Processing Check: Added a unique ID system to track if the player is already processing an interrogation.

	%1: _capturedCount — The number of units lined up for interrogation.
	%2: _factionInterrogated — The faction of the unit being interrogated (interrogated faction).
	%3: _rewardText — The reward amount in credits.
	%4: _playerFaction — The faction of the player initiating the interrogation (the player who used the addAction).

*/

// Faction messages, replace "civilian" with "OPFOR"
private _factionRestrictionMessages = [
    "%4 huh? If you don't get out of here, you're the one who's going to be getting interrogated!",
    "This ain’t your fight.",
    "I would suggest turning around and looking for your %4 buddies.",
    "Are you wearing the wrong %4 uniform by chance?",
    "You’re on the wrong side of the fence. Doesn't %4 know how to read?"
];

private _noCapturedMessages = [
    "I don't see anybody to interrogate. You must make %4 real proud...",
    "Are you blind, son? The only person standing here that should be interrogated is you...",
    "Bring me someone with some information to extract or get out of my face, soldier!",
    "%4 must be having problems filling the ranks...",
    "It's not that hard to figure out. Go find and bring me someone to interrogate!",
    "What’s the matter, soldier? Did you forget to bring the prisoners? Get out there and do your job!",
    "I don't see any targets. Are you planning on interrogating the air?",
    "You expect me to interrogate ghosts? Bring me a real target, or get lost!",
    "Nice job, genius. You brought me nothing. Go fetch some real intel, or don't come back!",
    "What, did they all vanish? Next time, try bringing someone I can actually interrogate.",
    "I can’t work with thin air, soldier! Find someone for me to interrogate or get out of my sight!",
    "You brought me a whole lot of nothing. Did you think I’d interrogate the shadows?",
    "Great plan, bringing no one for interrogation. Maybe next time, try doing your job right."
];

private _interrogationStartMessages = [
    "%1 %2 lined up—%1 targets. Cash comes after they sing or bleed.",
    "%1 %2 marked for questioning—%1 of them. Cash comes when the job’s finished.",
    "%1 %2 under the gun—%1 in total. Cash is yours when the talking’s over.",
    "%1 %2 in the hot seat—%1 marked. You’ll get the cash once they spill or drop.",
    "Line up the %1 %2—%1 lives hanging by a thread. Cash rolls in when they start to break.",
    "Ready the %1 %2—%1 souls to crack. The money's yours once they start screaming.",
    "The %1 %2 are ready—%1 chances to make them bleed. Blood or tears, cash is coming either way.",
    "%1 %2, %1 whispers away from breaking. The cash flows when they stop breathing.",
    "%1 %2 in the spotlight—%1 chances to push them over the edge. Only one thing matters—the payday.",
    "The %1 %2 are sweating—%1 opportunities to break them. Cash doesn’t care how they fall.",
    "Eyes on the %1 %2—%1 lives on the line. Once they’re shattered, the cash is yours.",
    "%1 %2—%1 stories to cut short. Cash is what’s left when the screams fade away.",
    "The %1 %2 are ready—%1 chances to make them beg. The only thing left is the payoff.",
    "%1 %2 under pressure—%1 lives about to end. When the silence falls, the money rises."
];

private _interrogationCompleteMessages = [
    "Interrogation’s done. %3 cash from the %2 in hand—don’t spend it all in one place.",
    "Job’s done. The %2 screamed about his family. Here’s your %3—I hope you can sleep at night.",
    "All done. That %2 was tough, but he finally cracked. %3 cash delivered—straight to your hands.",
    "Interrogation complete on a %2. %3 cash in hand—use it wisely.",
    "He begged for mercy, but the info came first. %3 cash for a job well done on the %2.",
    "That %2 couldn’t hold out forever—now you’ve got %3 cash in your pocket.",
    "War isn’t pretty, but it pays well. %3 cash earned from interrogating a %2.",
    "They broke under pressure, and so did their bank—%3 cash delivered.",
    "The %2 didn’t make it home for dinner, that's for sure. %3 cash delivered!",
    "It’s not about the pain, it’s about the payday. %3 cash for your efforts.",
    "The screams still echo, but so does the sound of cash. %3 from the %2 in hand.",
    "%2 didn’t stand a chance—%3 cash earned. Maybe next time they’ll listen.",
    "%2 cried until the end. %3 cash is yours, but the guilt’s on you.",
    "%2 gave up everything—%3 cash won’t bring back their dignity.",
    "%3 cash for shattering a %2. The money feels heavy, doesn’t it?",
    "The %2 begged for mercy. %3 cash in your pocket, their blood on your hands.",
    "%2 couldn’t take it anymore. %3 cash earned, but at what cost?",
    "The %2’s last words were about family. %3 cash won’t silence the echoes.",
    "%3 cash for breaking a soul. The %2 never saw it coming.",
    "%2 broke down, and so did their wallet. %3 cash for a job well done."
];

// Search for the nearest player within 5 meters of the object
private _object = _this select 0;
private _nearestPlayer = _object nearEntities ["CAManBase", 5] select 0;

// Determine the faction side of the player for %4
private _playerFaction = switch (side _nearestPlayer) do {
    case west: {"BLUFOR"};
    case east: {"OPFOR"};
    case independent: {"Independent"};
    case civilian: {"Civilian"};
    default {"Unknown"};
};

// Check if a player was found
if (isNull _nearestPlayer) exitWith {
    private _noCapturedMessage = format [selectRandom _noCapturedMessages, "", "", "", _playerFaction];
    [_noCapturedMessage, 0.0, 0.1, 5, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _nearestPlayer, true];
};

// Generate a unique ID for this interrogation process
private _uniqueInterrogationID = format ["%1_%2", getPlayerUID _nearestPlayer, diag_tickTime];

// Check if the player is already performing an interrogation
if (_nearestPlayer getVariable [format ["isProcessingInterrogation_%1", _uniqueInterrogationID], false]) exitWith {
    hintSilent "You are already interrogating!";
};

// Assign a temporary variable using the player's unique playerUID and the unique ID for this interrogation process
_nearestPlayer setVariable [format ["isProcessingInterrogation_%1", _uniqueInterrogationID], true];

// Check if the player belongs to BLUFOR or Independent, if not, end the script
if (!(side _nearestPlayer in [west, independent])) exitWith {
    private _factionRestrictionMessage = format [selectRandom _factionRestrictionMessages, _playerFaction];
    [_factionRestrictionMessage, 0.0, 0.1, 5, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _nearestPlayer, true];
};

// Get the position of the nearest player and find captured OPFOR units within 30 meters
private _pos = getPos _nearestPlayer;
private _capturedUnits = _pos nearEntities ["Man", 30]; 
_capturedUnits = _capturedUnits select {alive _x && side _x == east}; // Targeting OPFOR units

// DEBUG: Check how many units are detected initially
// hint format ["Initial captured units count: %1", count _capturedUnits];

// Check the interrogationInProgress variable for each unit
{
    private _isBeingInterrogated = _x getVariable ["interrogationInProgress", false];
    // hint format ["Unit: %1, interrogationInProgress: %2", _x, _isBeingInterrogated];
} forEach _capturedUnits;

// Filter out units that are already being interrogated
private _newCapturedUnits = _capturedUnits select { !(_x getVariable ["interrogationInProgress", false]) };

// DEBUG: Check how many units are left after filtering
// hint format ["Filtered captured units count: %1", count _newCapturedUnits];

// Recalculate the count after filtering
private _newCapturedCount = count _newCapturedUnits;

if (_newCapturedCount == 0) exitWith {
    private _noCapturedMessage = format [selectRandom _noCapturedMessages, "", "", "", _playerFaction];
    [_noCapturedMessage, 0.0, 0.1, 5, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _nearestPlayer, true];
};

// Determine the faction side of the first captured unit for %2
private _capturedSideText = "OPFOR"; // Directly set as OPFOR for all captured units

// Display the interrogation start message
private _interrogationStartMessage = format [selectRandom _interrogationStartMessages, _newCapturedCount, _capturedSideText, "", _playerFaction];
[_interrogationStartMessage, 0.0, 0.1, 5, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _nearestPlayer, true];

// Process each captured OPFOR unit with a random health bleed
{
    private _bleedPercentage = random 0.1 + 0.01; // Random bleed between 1% and 10%

    // Use a unique variable on the captured unit
    private _uniqueID = format ["interrogate_%1", _x getVariable ["BIS_fnc_objectVar", ""]]; 

    _x setVariable [_uniqueID, true]; // Set the unique variable on the captured unit
    _x setVariable ["interrogationInProgress", true]; // Mark the unit as being interrogated

    // Spawn process for each captured unit
    [_x, _nearestPlayer, _uniqueID, _bleedPercentage, _capturedSideText, _playerFaction, _interrogationCompleteMessages] spawn {
        params ["_cap", "_player", "_id", "_bleedPercentage", "_capturedSideText", "_playerFaction", "_interrogationCompleteMessages"];

        // Apply health bleed at a random interval between 10 and 30 seconds
        while {alive _cap && {_cap getVariable [_id, false]}} do {
            sleep (10 + random 20); // Random bleed interval between 10 and 30 seconds
            _cap setDamage (damage _cap + _bleedPercentage); // Apply the random bleed percentage

            if (damage _cap >= 1) then {
                // Kill the captured unit
                _cap setDamage 1;
    
                // Initial reward calculation
                private _reward = 100000 + random 150000; // Random payout between 100,000 and 150,000 credits
    
				// 10x reward multiplier chance
				private _multiplierChance = random 100; // Generate a random number between 0 and 100
				if (_multiplierChance < 50) then { // 50% chance 
					_reward = _reward * 20; // 20x multiplier
					hintSilent "HVT found! The information extracted was invaluable to our war effort!";
					
					// Execute the HVT task
					[] execVM "arma3mercenaries\tasks\HVT_task_1.sqf";
				};

                // Apply the (possibly multiplied) reward to the player
                [_player, _reward] remoteExec ["grad_lbm_fnc_addFunds", _player, true];

                // Display the interrogation complete message
                private _completionMessage = format [selectRandom _interrogationCompleteMessages, "", _capturedSideText, _reward, _playerFaction];
                [_completionMessage, 0.0, 0.1, 5, 1, 0, 789] remoteExec ["BIS_fnc_dynamicText", _player, true];

                // Clean up the variable on the captured unit
                _cap setVariable [_id, nil];
                _cap setVariable ["interrogationInProgress", nil]; // Clear the interrogation in progress marker
            };
        };
    };
} forEach _newCapturedUnits;

// Clean up: Remove the temporary variable from the player
_nearestPlayer setVariable [format ["isProcessingInterrogation_%1", _uniqueInterrogationID], nil];
