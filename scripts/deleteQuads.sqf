// https://forums.bohemia.net/forums/topic/134103-delete-empty-vehicles/
_vehicles = nearestObjects [player, ["B_Quadbike_01_F"], 99999]; 
 
{ 
 
if (count crew vehicle _x == 0) then {deleteVehicle _x}; 
 
} forEach _vehicles;