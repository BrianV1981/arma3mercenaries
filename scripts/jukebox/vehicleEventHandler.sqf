// Event handler function
params ["_logic", "_args"];
private _vehicle = _args select 0;

if ((vehicle _vehicle) isKindOf "Car" || (vehicle _vehicle) isKindOf "Tank" || (vehicle _vehicle) isKindOf "Helicopter" || (vehicle _vehicle) isKindOf "Plane") then {
    // Add the radio action to the vehicle
    [_vehicle] execVM "scripts\jukebox\addRadioActionToVehicle.sqf";
};