/*  

arma3mercenaries_saveGroups.sqf
enhanced by BrianV1981

Saves groups in format:
[[side of group, unitsData],[side of group, unitsData],[...]]

unitsData:
[unit hash, unit hash, unit hash, [...]]

*/


#include "script_component.hpp"

if (!isServer) exitWith {}; // Ensure the script only runs on the server

params [["_area", false], ["_allVariableClasses", []]]; // Define parameters with default values

// Filter out the variable classes specific to groups
private _allGroupsVariableClasses = _allVariableClasses select {
    ([_x, "varNamespace", ""] call BIS_fnc_returnConfigEntry) == "group"
};

// Filter out the variable classes specific to units
private _allUnitsVariableClasses = _allVariableClasses select {
    ([_x, "varNamespace", ""] call BIS_fnc_returnConfigEntry) == "unit"
};

// Handle area selection if provided
if (_area isEqualType []) then {
    _area params ["_center", "_a", "_b", ["_angle", 0], ["_isRectangle", false], ["_c", -1]];
    if (isNil "_b") then {_b = _a};
    _area = [_center, _a, _b, _angle, _isRectangle, _c];
};

// Initialize mission tag and group data storage
private _missionTag = [] call FUNC(getMissionTag);
private _groupsTag = _missionTag + "_groups";
private _groupsData = [_groupsTag] call FUNC(getSaveData);
private _foundUnitsVarnames = GVAR(allFoundVarNames) select 0;
_groupsData resize 0;

private _allGroups = allGroups; // Get all groups
private _saveGroupsMode = [missionConfigFile >> "CfgGradPersistence", "saveUnits", 1] call BIS_fnc_returnConfigEntry; // Determine save mode

{
    private _thisGroup = _x; // Current group being processed
    private _thisGroupData = [side _thisGroup, [], []]; // Initialize group data array
    private _thisUnitsData = _thisGroupData select 1; // Reference to units data within the group data array

    {
        private _thisUnit = _x; // Current unit being processed

        // Check if the unit meets the conditions for saving
        if (
            !(isPlayer _thisUnit) && // Exclude player units
            {!(isNull _thisUnit)} && // Exclude null units
            {alive _thisUnit} && // Only save alive units
            {vehicle _thisUnit == _thisUnit} && // Ensure unit is not in a vehicle
            {!([_thisUnit] call FUNC(isBlacklisted))} && // Exclude blacklisted units
            {!((group _thisUnit) getVariable [QGVAR(isExcluded), false])} && // Exclude explicitly excluded units
            {!isNil {_thisUnit getVariable "arma3mercenaries_persistence_groupMembers"}} &&  // Only save units tagged with the variable
            {
                _saveGroupsMode == 2 || 
                (_thisUnit getVariable [QGVAR(isEditorObject), false]) isEqualTo (_saveGroupsMode == 1)
            } &&
            {if (_area isEqualType false) then {true} else {_thisUnit inArea _area}} // Check if the unit is within the specified area
        ) then {

            _thisUnitHash = [] call CBA_fnc_hashCreate; // Create a new hash for this unit

            private _vehVarName = vehicleVarName _thisUnit; // Get the vehicle variable name
            if (_vehVarName != "") then {
                [_thisUnitHash, "varName", _vehVarName] call CBA_fnc_hashSet; // Store vehicle variable name in the hash
                _foundUnitsVarnames deleteAt (_foundUnitsVarnames find _vehVarName); // Remove the vehicle name from found variable names
            };

            // Save essential unit attributes
            [_thisUnitHash, "type", typeOf _thisUnit] call CBA_fnc_hashSet;
            [_thisUnitHash, "posASL", getPosASL _thisUnit] call CBA_fnc_hashSet;
            [_thisUnitHash, "dir", getDir _thisUnit] call CBA_fnc_hashSet;
            [_thisUnitHash, "damage", damage _thisUnit] call CBA_fnc_hashSet;

            // Save additional variables associated with the unit
            private _thisUnitVars = [_allUnitsVariableClasses, _thisUnit] call FUNC(saveObjectVars);
            [_thisUnitHash, "vars", _thisUnitVars] call CBA_fnc_hashSet;

            // Save the player's UID associated with this group
            [_thisUnitHash, "playerUID", _thisUnit getVariable "arma3mercenaries_persistence_groupMembers"] call CBA_fnc_hashSet;

            _thisUnitsData pushBack _thisUnitHash; // Add the unit's hash data to the group data array
        };

    } forEach (units _thisGroup); // Process each unit in the group

    // Only save the group if it has units that were saved
    if (count (_thisGroupData select 1) > 0) then {
        _groupsData pushBack _thisGroupData; // Add the group data to the overall groups data array
        _thisGroupData set [2, [_allGroupsVariableClasses, _thisGroup] call FUNC(saveObjectVars)]; // Save additional group-level variables
    };

    false
} count _allGroups; // Process each group

// Handle units that were removed or killed by adding them to the killed variable names array
private _killedVarnames = [_missionTag + "_killedVarnames"] call FUNC(getSaveData);
private _killedUnitsVarnames = _killedVarnames param [0, []];
_killedUnitsVarnames append _foundUnitsVarnames;
_killedUnitsVarnames arrayIntersect _killedUnitsVarnames;
_killedVarnames set [0, _killedUnitsVarnames];

saveProfileNamespace; // Save the updated profile namespace

