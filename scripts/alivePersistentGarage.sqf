//////////////////////////////http://alivemod.com/wiki/index.php/Persistence////////////////////////////////////////////////////////
/////////////////////////////https://forums.bohemia.net/forums/topic/175646-lifemans-storage-functions-release//////////////////////
["L_Veh_Storage",_value] call ALiVE_fnc_ProfileNameSpaceSave;
_value = "L_Veh_Storage" call ALiVE_fnc_ProfileNameSpaceLoad;
["L_Item_Storage",_value] call ALiVE_fnc_ProfileNameSpaceSave;
_value = "L_Item_Storage" call ALiVE_fnc_ProfileNameSpaceLoad;