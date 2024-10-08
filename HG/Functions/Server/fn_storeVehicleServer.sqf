/*
    Author - HoverGuy
    GitHub - https://github.com/Ppgtjmad/SimpleShops
    Steam - https://steamcommunity.com/id/HoverGuy/
    Enhanced By: BrianV1981
    Description: 
    Added a process for removing mobile spawn points and added comments to explain each process.
*/
params["_mode","_unit","_vehicle",["_plate",round(random(9999))],["_color",""]];

if(!HG_SAVING_EXTDB) then
{
    // Retrieve the garage data from profileNamespace for the player, or initialize an empty array if none exists
    private _garage = profileNamespace getVariable[format["HG_Garage_%1",(getPlayerUID _unit)],[]];
    
    if(_mode isEqualTo 0) then
    {
        // Mode 0: Add the vehicle to the garage array with its plate, color, and inactive status (0)
        _garage pushBack [_vehicle,_plate,_color,0];
    } else {
        // Mode 1: Update the status of an existing vehicle in the garage array
        
        // Find the index of the vehicle in the garage array using its plate number
        private _index = [_plate,_garage] call HG_fnc_findIndex;
        
        if(_index != -1) then
        {
            // If the vehicle is found, set its status to inactive (0)
            (_garage select _index) set [3,0];
        } else {
            // If the vehicle is not found, retrieve its color and add it to the garage array
            private _color = (_vehicle getVariable "HG_Owner") select 2;
            _garage pushBack [(typeOf _vehicle),_plate,_color,0];
        };
    };
    
    // Save the updated garage array back to profileNamespace
    profileNamespace setVariable[format["HG_Garage_%1",(getPlayerUID _unit)],_garage];
    saveProfileNamespace;
} else {
    // If using extDB for remote storage, generate the appropriate SQL or NoSQL query
    
    // The query generated depends on the saving protocol (SQL or NoSQL) and the mode (0 for insert, 1 for update)
    private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
    {
        [
            // SQL insertion query to add a new vehicle record
            format["INSERT INTO HG_Vehicles (PID, Classname, Plate, Inventory, Active, Color) VALUES ('%1','%2','%3','%4','%5','%6')",(getPlayerUID _unit),_vehicle,_plate,[],0,_color],
            // SQL update query to set the vehicle's active status to 0 (inactive)
            format["UPDATE HG_Vehicles SET Active = '%1' WHERE PID = '%2' AND Plate = '%3'",0,(getPlayerUID _unit),_plate]
        ] select _mode;
    } else {
        [
            // NoSQL insertion query for a new vehicle record
            format["HG_vehicleInsert:%1:%2:%3:%4:%5:%6",(getPlayerUID _unit),_vehicle,_plate,[],0,_color],
            // NoSQL update query to set the vehicle's active status to 0 (inactive)
            format["HG_vehicleActiveUpdate:%1:%2:%3",0,(getPlayerUID _unit),_plate]
        ] select _mode;
    };
    
    // Execute the query asynchronously to avoid blocking the main game thread
    [1,_query] call HG_fnc_asyncCall;
};

// Mobile Respawn Point Removal integration
if(_mode isEqualTo 1) then
{
    // Remove associated respawn points before deleting the vehicle
    // [_vehicle] call compile preprocessFileLineNumbers "arma3mercenaries\mobile_respawns\removeRespawnPoints.sqf"; // does not work yet
    
    // If vehicle inventory saving is enabled in the mission config, save the inventory before deleting the vehicle
    if((getNumber(getMissionConfig "CfgClient" >> "enableVehicleInventorySave")) isEqualTo 1) then
    {
        [_vehicle] call HG_fnc_getInventory;
    };
    
    // Delete the vehicle from the game world
    deleteVehicle _vehicle;
    
    // Inform the player that the vehicle has been stored successfully
    (localize "STR_HG_GRG_VEHICLE_STORED") remoteExecCall ["hint",(owner _unit),false];
};
    
true;
