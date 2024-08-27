/*
    Save containers associated with grad fortifications in the following format:
      [[type, position, direction, damage, inventory, ...], [...], ...]
	  
	  Enhanced By: BrianV1981
	  Certainly! Below is a Markdown README explaining the enhancements made to the container save/load script with the `grad_fortifications_fortOwner` variable integration.

---

# Arma 3 Grad Fortifications Container Persistence Script

## Overview

This README provides an explanation of the modifications made to the original container save/load scripts to support saving and loading containers as part of the Grad Fortifications system. The enhancements involve using the `grad_fortifications_fortOwner` variable to ensure containers are associated with specific owners and are accurately persisted across game sessions.

## Enhancements

### 1. **Save Script (`fn_saveGradFortificationContainers.sqf`)**

#### **Original Functionality:**
- The original script saved all containers (vehicles) within the mission, capturing their type, position, direction, damage, and inventory.
- Containers were filtered based on several criteria, including whether they were alive, not blacklisted, and within a specified area.

#### **Modifications:**
- **Filtering by Grad Fortifications Ownership:**
  - The script now includes a check for the `grad_fortifications_fortOwner` variable. Only containers that have this variable set are considered for saving, ensuring that only those related to the Grad Fortifications system are persisted.

- **Saving the `grad_fortifications_fortOwner` Variable:**
  - The script saves the `grad_fortifications_fortOwner` variable alongside other attributes like type, position, direction, damage, and inventory. This ensures that the ownership information is retained.

- **Enhanced Documentation:**
  - The script has been updated with detailed comments explaining each step, from filtering containers to saving their attributes and handling special cases like editor-placed vehicles.

### 2. **Load Script (`fn_loadGradFortificationContainers.sqf`)**

#### **Original Functionality:**
- The original script was responsible for recreating saved containers during mission startup.
- It restored containers based on their saved attributes, such as type, position, direction, damage, and inventory.

#### **Modifications:**
- **Loading Containers with Grad Fortifications Ownership:**
  - The script now ensures that containers associated with the Grad Fortifications system are loaded by reapplying the `grad_fortifications_fortOwner` variable.

- **Reinitializing Grad Fortifications:**
  - After recreating each container, the script checks if it is part of the Grad Fortifications system and reinitializes it using `grad_fortifications_fnc_initFort`. This restores the container's functionality within the system.

- **Handling Grad Moneymenu Storage:**
  - The script also re-applies and reinitializes any moneymenu-related functionality if the container was used as storage within the Grad Fortifications system.

- **Cleaner Code and Documentation:**
  - The script has been restructured for better readability and maintainability, with clear separation of concerns and consistent variable naming conventions.

### 3. **General Enhancements**

- **Namespace Management:**
  - Both scripts use a mission-specific tag for namespacing to ensure that saved data is uniquely associated with the current mission.

- **Handling Removed or Killed Containers:**
  - The scripts include logic to detect and handle containers that were removed or killed in previous sessions, ensuring they do not reappear during the loading process.

- **Improved Clarity:**
  - Detailed comments have been added throughout the scripts to explain the purpose of each block of code, making it easier to understand and modify as needed.

## How to Use

1. **Save Script**:
   - Place the modified save script (`fn_saveGradFortificationContainers.sqf`) in your mission's scripts directory.
   - The script will automatically filter and save containers with the `grad_fortifications_fortOwner` variable when triggered.

2. **Load Script**:
   - Place the modified load script (`fn_loadGradFortificationContainers.sqf`) in your mission's scripts directory.
   - During mission startup, the script will restore all saved containers, reapplying the `grad_fortifications_fortOwner` variable and initializing them as part of the Grad Fortifications system.

3. **Integration**:
   - Ensure that your mission setup correctly triggers these scripts at the appropriate times (e.g., on mission start and mission end) to maintain persistence across sessions.
	// Assuming '_container' is the newly created container and '_player' is the player who "owns" the container

	_container setVariable ["grad_fortifications_fortOwner", getPlayerUID _player, true];

## Conclusion

These modifications enhance the original persistence scripts by introducing selective saving and loading of containers based on the `grad_fortifications_fortOwner` variable. The enhanced documentation and code structure make the scripts easier to understand and integrate into your Arma 3 mission.

For further customization or assistance, feel free to reach out or contribute to the project.

---
 
*/

#include "script_component.hpp"

// Ensure the script is only executed on the server
if (!isServer) exitWith {};

// Parameters: _area for defining the area to save containers from, _allVariableClasses for filtering variables to be saved
params [["_area", false], ["_allVariableClasses", []]];

// Process the _area parameter to ensure it has a consistent format
if (_area isEqualType []) then {
    _area params ["_center", "_a", "_b", ["_angle", 0], ["_isRectangle", false], ["_c", -1]];
    if (isNil "_b") then { _b = _a };
    _area = [_center, _a, _b, _angle, _isRectangle, _c];
};

// Filter to identify variable classes related to containers
private _allContainerVariableClasses = _allVariableClasses select {
    ([_x, "varNamespace", ""] call BIS_fnc_returnConfigEntry) == "container"
};

// Initialize the mission-specific tag for namespacing and the container data storage
private _missionTag = [] call FUNC(getMissionTag);
private _containersTag = _missionTag + "_containers";
private _containersData = [_containersTag] call FUNC(getSaveData);
private _foundContainersVarnames = GVAR(allFoundVarNames) select 2;
_containersData resize 0;

// Retrieve all containers (vehicles) and configure the saving mode from the mission config
private _allContainers = vehicles;
private _saveContainersMode = [missionConfigFile >> "CfgGradPersistence", "saveContainers", 1] call BIS_fnc_returnConfigEntry;

// Filter containers that are related to grad fortifications
_allContainers = _allContainers select {
    (_x isKindOf "ThingX") &&
    (([configfile >> "CfgVehicles" >> typeOf _x, "maximumLoad", 0] call BIS_fnc_returnConfigEntry) > 0) &&
    !(_x isKindOf "Static") &&
    {alive _x} &&
    {!([_x] call FUNC(isBlacklisted))} &&
    {!isNil {_x getVariable "grad_fortifications_fortOwner"}} && // Check for the grad_fortifications_fortOwner variable
    {
        _saveContainersMode == 2 ||
        (_x getVariable [QGVAR(isEditorObject), false]) isEqualTo (_saveContainersMode == 1)
    } &&
    {if (_area isEqualType false) then {true} else {_x inArea _area}}
};

// Process each container to save relevant data
{
    private _containerInventory = [_x] call FUNC(getInventory); // Get the container's inventory
    private _thisContainerHash = [] call CBA_fnc_hashCreate; // Create a hash to store the container's data

    // Save the container's variable name if it has one
    private _vehVarName = vehicleVarName _x;
    if (_vehVarName != "") then {
        [_thisContainerHash, "varName", _vehVarName] call CBA_fnc_hashSet;
        _foundContainersVarnames deleteAt (_foundContainersVarnames find _vehVarName);
    };

    // Save the container's type, position, direction, and damage
    [_thisContainerHash, "type", typeOf _x] call CBA_fnc_hashSet;
    [_thisContainerHash, "posASL", getPosASL _x] call CBA_fnc_hashSet;
    [_thisContainerHash, "vectorDirAndUp", [vectorDir _x, vectorUp _x]] call CBA_fnc_hashSet;
    [_thisContainerHash, "damage", damage _x] call CBA_fnc_hashSet;
    [_thisContainerHash, "inventory", _containerInventory] call CBA_fnc_hashSet;

    // Save the grad fortifications related variables
    [_thisContainerHash, "gradFortificationsOwner", _x getVariable ["grad_fortifications_fortOwner", objNull]] call CBA_fnc_hashSet;
    [_thisContainerHash, "isGradMoneymenuStorage", _x getVariable ["grad_moneymenu_isStorage", false]] call CBA_fnc_hashSet;
    [_thisContainerHash, "gradMoneymenuOwner", _x getVariable ["grad_moneymenu_owner", objNull]] call CBA_fnc_hashSet;
    [_thisContainerHash, "gradLbmMoney", _x getVariable ["grad_lbm_myFunds", 0]] call CBA_fnc_hashSet;

    // Save additional variables attached to the container
    private _thisContainerVars = [_allContainerVariableClasses, _x] call FUNC(saveObjectVars);
    [_thisContainerHash, "vars", _thisContainerVars] call CBA_fnc_hashSet;

    // Add the container's hash to the containers data array
    _containersData pushBack _thisContainerHash;

} forEach _allContainers; // End of container processing

// Handle any container variable names that were not saved (e.g., removed or killed)
private _killedVarnames = [_missionTag + "_killedVarnames"] call FUNC(getSaveData);
private _killedContainersVarnames = _killedVarnames param [2, []];
_killedContainersVarnames append _foundContainersVarnames;
_killedContainersVarnames arrayIntersect _killedContainersVarnames;
_killedVarnames set [2, _killedContainersVarnames];

// Save the updated profile namespace to ensure persistence
saveProfileNamespace;
