execVM "scripts\killedEventHandlers.sqf";
execVM "modules\moneyStorage.sqf";
[west, "LOADOUT1"] call BIS_fnc_addRespawnInventory;
/////////////////////////////////////////////////Ambient Radio Chatter in/near Vehicles////////////////////////////////
while {true} do
{
private ["_sound","_veh"];
if (player != vehicle player) then 
	{
	playmusic format ["RadioAmbient%1",floor (random 31)];
	} 
	else
	{
	_veh = ((position player) nearEntities [["Air", "Landvehicle"], 10]) select 0;
	if !(isnil "_veh") then
		{
		_sound = format ["A3\Sounds_F\sfx\radio\ambient_radio%1.wss",floor (random 31)];
		playsound3d [_sound,_veh,true,getPosasl _veh,1,1,50];
		};
	};
sleep random 60;
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////