/*
    Author - HoverGuy
    Modified by - [Your Name]
    Description - Limits the number of vehicles a player can store in their garage.
    enhanced by BrianV1981
    added garage vehicle limit
    fn_storeVehicleServer.sqf
*/
params["_mode","_unit","_vehicle",["_plate",round(random(9999))],["_color",""]];

private _maxVehicles = 5;  // Set your desired vehicle limit here

if(!HG_SAVING_EXTDB) then
{
    private _garage = profileNamespace getVariable[format["HG_Garage_%1",(getPlayerUID _unit)],[]];
    
    // Count the number of vehicles the player currently owns
    private _currentVehicles = count _garage;

    // Check if the player has reached the vehicle limit
    if (_currentVehicles >= _maxVehicles) then {
        hint format ["You have reached the maximum limit of %1 vehicles in your garage.", _maxVehicles];
        // Exit the script to prevent storing another vehicle
        false
    } else {
        if(_mode isEqualTo 0) then
        {
            _garage pushBack [_vehicle,_plate,_color,0];
        } else {
            private _index = [_plate,_garage] call HG_fnc_findIndex;
            
            if(_index != -1) then
            {
                (_garage select _index) set [3,0];
            } else {
                private _color = (_vehicle getVariable "HG_Owner") select 2;
                _garage pushBack [(typeOf _vehicle),_plate,_color,0];
            };
        };
        
        profileNamespace setVariable[format["HG_Garage_%1",(getPlayerUID _unit)],_garage];
        saveProfileNamespace;
        true
    };
} else {
    private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
    {
        [
            format["INSERT INTO HG_Vehicles (PID, Classname, Plate, Inventory, Active, Color) VALUES ('%1','%2','%3','%4','%5','%6')",(getPlayerUID _unit),_vehicle,_plate,[],0,_color],
            format["UPDATE HG_Vehicles SET Active = '%1' WHERE PID = '%2' AND Plate = '%3'",0,(getPlayerUID _unit),_plate]
        ] select _mode;
    } else {
        [
            format["HG_vehicleInsert:%1:%2:%3:%4:%5:%6",(getPlayerUID _unit),_vehicle,_plate,[],0,_color],
            format["HG_vehicleActiveUpdate:%1:%2:%3",0,(getPlayerUID _unit),_plate]
        ] select _mode;
    };
    
    [1,_query] call HG_fnc_asyncCall;
    true
};

if(_mode isEqualTo 1) then
{
    if((getNumber(getMissionConfig "CfgClient" >> "enableVehicleInventorySave")) isEqualTo 1) then
    {
        [_vehicle] call HG_fnc_getInventory;
    };
    
    deleteVehicle _vehicle;
    
    (localize "STR_HG_GRG_VEHICLE_STORED") remoteExecCall ["hint",(owner _unit),false];
};
