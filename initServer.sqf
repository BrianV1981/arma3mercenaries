execVM "scripts\alivetaskreward.sqf";
/////////////////////////////////ALIVE GROUP PERSISTANCE INIT.SQF//////////////////////////////////////////////////

waituntil {(player getvariable ["alive_sys_player_playerloaded",false])};
sleep 2;
{
	if !(isPlayer _x) then {
		if !(_x getVariable ["Persistent_Teleport", false]) then {
			_x setPos (getPos player);
			_x setVariable ["Persistent_Teleport", true, true];
			sleep .5;
		};
	};
} forEach units group player;
