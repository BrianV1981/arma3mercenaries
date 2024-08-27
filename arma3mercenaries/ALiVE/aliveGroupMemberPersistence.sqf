///http://alivemod.com/wiki/index.php/Script_Snippets
/// If you use the ALiVE saving feature one 'issue' is that AI members in the player's group do not get saved or restored. If they are editor-placed units then they will spawn at their original editor start location instead of wherever the player is. To work around this do the following:

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