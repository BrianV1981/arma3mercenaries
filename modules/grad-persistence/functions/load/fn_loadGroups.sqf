/*


---

# Grad-Persistence Group Saves
### Enhanced By: BrianV1981

## Summary of Changes and Logic

### Objective
The objective is to create a persistent system for saving and loading AI units linked to specific player groups in Arma 3. The system assigns unique identifiers to both AI units and player groups based on the player's UID, ensuring that these identifiers are consistently saved and reloaded across game sessions.

### Key Concepts

1. **AI Unit ID (`arma3mercenaries_aiUnit`)**:
   - **Purpose**: To uniquely identify each AI unit associated with a player.
   - **Format**: `arma3mercenaries_aiUnit_*uniqueUnitID*_*playerUID*`.
   - **Logic**: Generated during the unit creation process, ensuring each AI unit has a distinct ID tied to the player who created it.

2. **Group ID (`arma3mercenaries_groupID`)**:
   - **Purpose**: To uniquely identify a group of AI units associated with a player.
   - **Format**: `arma3mercenaries_groupID_*playerUID*`.
   - **Logic**: Generated once for each player's group, ensuring that all units within that group are correctly associated with the player. This ID is used to restore groups upon loading.

3. **AI Unit Loadout**:
   - **Purpose**: To save and restore the loadout (inventory) of AI units.
   - **Logic**: The AI unit's loadout is saved using the `getUnitLoadout` command and stored in the mission namespace. During loading, the saved loadout is retrieved and applied to the unit using `setUnitLoadout`.

### Implementation Details

#### 1. **Unit Creation Script**
   - **Logic**:
     - When an AI unit is created, it is assigned an `arma3mercenaries_aiUnit` variable, which includes a unique identifier and the player’s UID.
     - It also receives an `arma3mercenaries_groupID` variable based solely on the player’s UID.
   - **Purpose**: Ensures that each unit is correctly tagged with identifiers that can be used for saving and reloading.

#### 2. **Saving Script**
   - **Logic**:
     - The script checks whether the group leader (the player) has a valid `arma3mercenaries_groupID`.
     - During the save process, the group of AI units is processed, and their relevant data, including their AI Unit ID, Group ID, and loadout, is saved.
   - **Purpose**: Ensures that all relevant data for units and groups, including loadouts, is stored for later retrieval, preserving the structure, relationships, and state of each unit.

#### 3. **Loading Script**
   - **Logic**:
     - The script retrieves saved groups and units based on their saved data.
     - Each unit is reassigned its `arma3mercenaries_aiUnit`, `arma3mercenaries_groupID`, and loadout, ensuring they are placed back into their correct group with their original inventory.
	- Each unit is reassigned the `ALiVE_disableDynamicSimulation` and `Vcm_Disable` variables, disableing them from VCOM and ALiVE
   - **Purpose**: Ensures that when the mission is reloaded, all units and groups are restored to their original state, maintaining consistency across sessions, including their equipment.

### Rationale Behind the Logic

- **Consistency**: By tying both the AI Unit ID and Group ID to the player's UID, and saving the loadout, the relationship between the player, their AI units, and their groups remains consistent across save/load cycles.
- **Simplicity**: The format and assignment of IDs, along with the handling of loadouts, are straightforward, making it easier to debug and manage within the mission.
- **Persistence**: The use of Grad Persistence functions ensures that all relevant data, including loadouts, is saved and reloaded correctly, minimizing the risk of data loss or corruption.

---

## Installation Instructions

### 1. **Setting Up `CfgGradPersistence`**
   
Add the following configuration to your mission's `description.ext` file:

```cpp
class CfgGradPersistence {
    missionTag = "my_persistent_mission";
    loadOnMissionStart = 1;
    missionWaitCondition = "true";
    playerWaitCondition = "true";

    saveUnits = 3;
    saveVehicles = 3;
    saveContainers = 3;
    saveStatics = 0;
    saveGradFortificationsStatics = 3;

    savePlayerInventory = 1;
    savePlayerDamage = 1;
    savePlayerPosition = 1;
    savePlayerMoney = 1;

    saveMarkers = 3;
    saveTasks = 0;
    saveTriggers = 0;
    saveTeamAccounts = 0;
    saveTimeAndDate = 0;

    class customVariables {
        class aiUnit {
            varName = "arma3mercenaries_aiUnit";
            varNamespace = "unit";
            public = 1;  // Broadcast across the network
        };
        class groupID {
            varName = "arma3mercenaries_groupID";
            varNamespace = "unit";
            public = 1;
        };
    };
};
```

### 2. **Setting Up `initPlayerLocal.sqf`**

In your mission's `initPlayerLocal.sqf`, add the following:

```sqf
// Get the player's UID
private _playerUID = getPlayerUID player;

// Create the group ID using the player's UID
private _groupID = format ["arma3mercenaries_groupID_%1", _playerUID];

// Assign the group ID to the player
player setVariable ["arma3mercenaries_groupID", _groupID, true];
```

### 3. **Reassign AI Units to Player's Group**

To ensure AI units rejoin the player's group upon loading:

```sqf
{
    private _unit = _x;
    if (!isPlayer _unit) then {
        [_unit] joinSilent group player;
    };
} forEach (allUnits select {
    _x getVariable ["arma3mercenaries_groupID", ""] == player getVariable ["arma3mercenaries_groupID", ""]
});
```

### 4. **Updating the Save Script**

Ensure your save script captures the `arma3mercenaries_groupID`, `arma3mercenaries_aiUnit`, and loadout for each unit:

```cpp
// Logic to save groups and units based on the variables assigned
// Include saving the loadout using `getUnitLoadout` and storing it under the "inventory" key
```

### 5. **Updating the Load Script**

Ensure your load script reassigns the saved `arma3mercenaries_groupID`, `arma3mercenaries_aiUnit`, and loadout to the appropriate units:

```cpp
// Logic to load and reassign the saved variables
// Ensure the loadout is retrieved using the "inventory" key and applied using `setUnitLoadout`
```

---


*/

#include "script_component.hpp"

if (!isServer) exitWith {};

private _missionTag = [] call grad_persistence_fnc_getMissionTag;
private _groupsTag = _missionTag + "_groups";
private _groupsData = [_groupsTag] call grad_persistence_fnc_getSaveData;

{
    _x params ["_thisGroupSide","_thisGroupUnits","_thisGroupVars"];
    private _thisGroup = createGroup _thisGroupSide;

    {
        _thisUnitHash = _x;

        private _vehVarName = [_thisUnitHash,"varName"] call CBA_fnc_hashGet;

        private _thisUnit = objNull;
        private _editorVehicleFound = false;
        if (!isNil "_vehVarName") then {
            // editor-placed object that already exists
            private _editorVehicle = call compile _vehVarName;
            if (!isNil "_editorVehicle") then {
                _thisUnit = _editorVehicle;
                _editorVehicleFound = true;
            };
        };

        if (!_editorVehicleFound) then {
            private _type = [_thisUnitHash,"type"] call CBA_fnc_hashGet;
            _thisUnit = _thisGroup createUnit [_type, [0,0,0], [], 0, "CAN_COLLIDE"];

            if (!isNil "_vehVarName") then {
                [_thisVehicle,_vehVarName] remoteExec ["setVehicleVarName",0,_thisVehicle];
            };
        };

        [{!isNull (_this select 0)}, {
            params ["_thisUnit","_thisUnitHash"];

            private _posASL = [_thisUnitHash,"posASL"] call CBA_fnc_hashGet;
            private _dir = [_thisUnitHash,"dir"] call CBA_fnc_hashGet;
            private _damage = [_thisUnitHash,"damage"] call CBA_fnc_hashGet;
            private _vars = [_thisUnitHash,"vars"] call CBA_fnc_hashGet;

            _thisUnit setDir _dir;
            _thisUnit setPosASL _posASL;
            _thisUnit setDamage _damage;

            // Reapply the AI Unit ID and Group ID variables
            private _aiUnitID = [_thisUnitHash,"arma3mercenaries_aiUnit"] call CBA_fnc_hashGet;
            private _groupID = [_thisUnitHash,"arma3mercenaries_groupID"] call CBA_fnc_hashGet;
            _thisUnit setVariable ["arma3mercenaries_aiUnit", _aiUnitID, true];
            _thisUnit setVariable ["arma3mercenaries_groupID", _groupID, true];
			_thisUnit setVariable ["ALiVE_disableDynamicSimulation", true, true];    
            _thisUnit setVariable ["Vcm_Disable", true, true];   

            // Apply the saved loadout to the unit
            private _loadout = [_thisUnitHash, "inventory"] call CBA_fnc_hashGet;
            if (!isNil "_loadout" && {count _loadout > 0}) then {
                _thisUnit setUnitLoadout [_loadout, false];
            } else {
                diag_log format ["Vasquez/log: ERROR: [arma3mercenaries_loadScript] Invalid or missing loadout for unit %1", _thisUnit];
            };

            [_vars,_thisUnit] call FUNC(loadObjectVars);
        },[_thisUnit,_thisUnitHash]] call CBA_fnc_waitUntilAndExecute;

    } forEach _thisGroupUnits;

    [_thisGroupVars,_thisGroup] call FUNC(loadObjectVars);

} forEach _groupsData;

// delete all editor vehicles that were killed in a previous save
private _killedVarnames = [_missionTag + "_killedVarnames"] call FUNC(getSaveData);
private _killedUnitsVarnames = _killedVarnames param [0,[]];
{
    private _editorVehicle = call compile _x;
    if (!isNil "_editorVehicle") then {deleteVehicle _editorVehicle};
} forEach _killedUnitsVarnames;
