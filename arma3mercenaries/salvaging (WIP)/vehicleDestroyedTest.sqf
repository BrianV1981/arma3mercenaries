// Add a handler for vehicle destruction
["VehicleDestroyed", {
    params ["_vehicle"];
    hint format ["Vehicle %1 was destroyed!", _vehicle];
}] call CBA_fnc_addEventHandler;