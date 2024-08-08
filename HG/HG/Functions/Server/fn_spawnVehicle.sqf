/*
  fn_spawnVehicle.sqf
  Script to spawn a vehicle for a player, saving vehicle data locally or in a database depending on settings.
*/

// Parameters passed to the function
params["_mode", // Mode of operation, e.g., 0 for inserting, 1 for updating
        "_unit", // The player unit
        "_classname", // The classname of the vehicle to spawn
        "_sp", // Spawn position (array or marker name)
        ["_plate", round(random(9999))], // Optional: Vehicle plate number (default is a random number)
        ["_color", ""], // Optional: Vehicle color
        "_vehicle"]; // Variable to hold the created vehicle

// Check if the saving method is not using extDB
if (!HG_SAVING_EXTDB) then {
    private["_garage", "_index"];

    // Retrieve the player's garage from profileNamespace
    _garage = profileNamespace getVariable [format["HG_Garage_%1", (getPlayerUID _unit)], []];
    
    // Find the index of the vehicle with the given plate in the garage
    _index = [_plate, _garage] call HG_fnc_findIndex;

    if (_index != -1) then {
        // If vehicle exists in the garage, set it as active and retrieve its color
        (_garage select _index) set [3, 1];
        _color = (_garage select _index) select 2;
    } else {
        // If vehicle does not exist, add it to the garage
        _garage pushBack [_classname, _plate, _color, 1];
    };

    // Save the updated garage back to profileNamespace
    profileNamespace setVariable [format["HG_Garage_%1", (getPlayerUID _unit)], _garage];
    saveProfileNamespace;
} else {
    // If using extDB, prepare the SQL query based on the saving protocol
    private _query = if (HG_SAVING_PROTOCOL isEqualTo "SQL") then {
        [
            // SQL query to insert a new vehicle
            format ["INSERT INTO HG_Vehicles (PID, Classname, Plate, Inventory, Active, Color) VALUES ('%1','%2','%3','%4','%5','%6')", (getPlayerUID _unit), _classname, _plate, [], 1, _color],
            // SQL query to update an existing vehicle's active status
            format ["UPDATE HG_Vehicles SET Active = '%1' WHERE PID = '%2' AND Plate = '%3'", 1, (getPlayerUID _unit), _plate]
        ] select _mode;
    } else {
        [
            // extDB query to insert a new vehicle
            format ["HG_vehicleInsert:%1:%2:%3:%4:%5:%6", (getPlayerUID _unit), _classname, _plate, [], 1, _color],
            // extDB query to update an existing vehicle's active status
            format ["HG_vehicleActiveUpdate:%1:%2:%3", 1, (getPlayerUID _unit), _plate]
        ] select _mode;
    };

    // Execute the query asynchronously
    [1, _query] call HG_fnc_asyncCall;
};

// Check if the spawn position (_sp) is an array
if ((typeName _sp) isEqualTo "ARRAY") then {
    // Create the vehicle at the specified position
    _vehicle = createVehicle [_classname, _sp, [], 0, "CAN_COLLIDE"];
} else {
    // Create the vehicle at the position of the marker
    _vehicle = createVehicle [_classname, (markerPos _sp), [], 0, "CAN_COLLIDE"];
    _vehicle setVectorUp (surfaceNormal (markerPos _sp)); // Set the vehicle orientation based on surface normal
    _vehicle setDir (markerDir _sp); // Set the vehicle direction based on marker direction
};

// Make the vehicle invulnerable temporarily
_vehicle allowDamage false;

// Set the vehicle's owner and metadata
_vehicle setVariable ["HG_Owner", [(getPlayerUID _unit), _plate, _color, []], true];

// Lock the vehicle
[_vehicle, 2] call HG_fnc_lock;

// Clear the vehicle's inventory if the mission config specifies it
if ((getNumber (getMissionConfig "CfgClient" >> "clearInventory")) isEqualTo 1) then {
    clearItemCargoGlobal _vehicle;
    clearMagazineCargoGlobal _vehicle;
    clearWeaponCargoGlobal _vehicle;
    clearBackpackCargoGlobal _vehicle;
};

// Apply the specified color to the vehicle if any
if (_color != "") then {
    private _textures = getArray (configFile >> "CfgVehicles" >> _classname >> "TextureSources" >> _color >> "textures");

    for "_i" from 0 to (count _textures) - 1 do {
        _vehicle setObjectTextureGlobal [_i, (_textures select _i)];
    };
};

// Allow the vehicle to take damage again
_vehicle allowDamage true;

// Add an event handler to handle vehicle destruction
_vehicle addEventHandler ["Killed", {_this call HG_fnc_killedVehicle}];

// Add custom actions to the vehicle for the player who spawned it
[_vehicle] remoteExecCall ["HG_fnc_addActions", (owner _unit), false];

// Save the vehicle's inventory if the mission config and mode specify it
if (((getNumber (getMissionConfig "CfgClient" >> "enableVehicleInventorySave")) isEqualTo 1) AND (_mode isEqualTo 1)) then {
    [_vehicle] call HG_fnc_setInventory;
};

// Notify the player that the vehicle has been spawned if in update mode
if (_mode isEqualTo 1) then {
    (localize "STR_HG_GRG_VEHICLE_SPAWNED") remoteExecCall ["hint", (owner _unit), false];
};

true; // Return true to indicate success
