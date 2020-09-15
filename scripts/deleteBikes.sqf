// https://forums.bohemia.net/forums/topic/134103-delete-empty-vehicles/
_vehicles = nearestObjects [player, ["gm_xx_civ_bicycle_01"], 99999]; 
 
{ 
 
if (count crew vehicle _x == 0) then {deleteVehicle _x}; 
 
} forEach _vehicles;