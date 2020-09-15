// https://forums.bohemia.net/forums/topic/134103-delete-empty-vehicles/
_vehicles = nearestObjects [[15000,15000,0], [
"ace_csw_kordTripod",
"ace_csw_kordTripodLow",
"ace_csw_m3Tripod",
"ace_csw_m3TripodLow",
"ace_csw_mortarBaseplate"
], 99999]; 
 
{ 
 
if (count crew vehicle _x == 0) then {deleteVehicle _x}; 
 
} forEach _vehicles;