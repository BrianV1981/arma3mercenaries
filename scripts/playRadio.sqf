// bird            radioH        Land_Loudspeakers_F
_songlist = selectRandom [["trumpspeach1", 180], ["foxiran1", 85], ["bird", 150], ["black", 230], ["boots", 155], ["bully", 160], ["hush", 260], ["letter", 120], ["preacher", 150], ["shakin", 185]];
_song = (_songList select 0);
_songLength = (_songList select 1);

[radio, [_song, 250, 1]] remoteExec ["say3D"];

radio remoteExec ["removeAllActions"];

[radio, ["Turn Off Radio",
{
	_pos = getPosATL (_this select 0);
	_dir = getDir (_this select 0);
	deleteVehicle (_this select 0);
	
	radio = "Land_Loudspeakers_F" createVehicle [0, 0, 0];
	radio setPosATL [_pos select 0, _pos select 1, _pos select 2];
	radio setDir _dir;
	radioH remoteExec ["terminate"];
	
	[radio, ["Play Radio", {radioH = [] execVM "scripts\playRadio.sqf"}, [], 6, false, true, "", "_target distance _this < 10"]] remoteExec ["addAction"];
}, [], 6, false, true, "", "_target distance _this < 10"]] remoteExec ["addAction"];


_waitTime = time + _songLength;
waitUntil{time >= _waitTime};
radio remoteExec ["removeAllActions"];

radioH = [] execVM "scripts\playRadio.sqf";


