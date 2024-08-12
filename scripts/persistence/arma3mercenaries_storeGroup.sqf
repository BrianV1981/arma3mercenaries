/*

arma3mercenaries_getGroup.sqf

by BrianV1981

During Saving: The variable arma3mercenaries_persistence_groupMembers is checked for each unit to determine if it should be saved.

!_isNil {_thisUnit getVariable "arma3mercenaries_persistence_groupMembers"} // Ensure only units tagged with this variable are saved.

During Loading: The variable arma3mercenaries_persistence_groupMembers is loaded and reassigned to the unit to maintain the association with the player.

_thisUnit setVariable ["arma3mercenaries_persistence_groupMembers", _playerUID

// Add an action to store the player's group
_barracksObject = createVehicle ["Land_BagFence_Long_F", position player, [], 0, "NONE"];
_barracksObject addAction ["Store Group in Barracks", {
    [] execVM "scripts\barracks\arma3mercenaries_saveGroups.sqf";
}];

//You can add these scripts to an object in the game world using addAction. For example, place the following code in the object's initialization field:
this addAction ["Give your team some time off...", {
    execVM "scripts\barracks\arma3mercenaries_storeGroup.sqf";
}];

this addAction ["Recall your team of mercenaries!", {
    execVM "scripts\barracks\arma3mercenaries_getGroup.sqf";
}];

*/


/* arma3mercenaries_storeGroup.sqf */

private _storedGroupData = profileNamespace getVariable [format ["arma3mercenaries_group_%1", getPlayerUID player], []];

// Check if a group is already stored
if (count _storedGroupData > 0) exitWith {
    hint "You already have men in the barracks! Wake them up and have them join your group.";
};

private _groupData = []; // Initialize an empty array to store group data.

{
    private _unit = _x;

    // Store data for the unit
    private _unitData = [
        typeOf _unit, // Unit type
        getPosASL _unit, // Position
        getDir _unit, // Direction
        damage _unit, // Damage
        _unit getVariable ["arma3mercenaries_persistence_groupMembers", ""] // Custom persistence variable (e.g., player UID)
    ];

    _groupData pushBack _unitData; // Add the unit's data to the group data array.

    // Remove the unit without triggering the Killed event handler
    _unit removeAllEventHandlers "Killed";
    deleteVehicle _unit;

} forEach units (group player); // Process each unit in the player's group.

profileNamespace setVariable [format ["arma3mercenaries_group_%1", getPlayerUID player], _groupData];
saveProfileNamespace;

hint "Your group has entered the barracks!";