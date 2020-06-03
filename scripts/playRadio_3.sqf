// bird            radioH_3        Land_Loudspeakers_F
_songlist = selectRandom [["trumpspeach1", 180], ["foxiran1", 85], ["bird", 150], ["black", 230], ["boots", 155], ["bully", 160], ["hush", 260], ["letter", 120], ["preacher", 150], ["shakin", 185]];
_song = (_songList select 0);
_songLength = (_songList select 1);

[radio_3, [_song, 250, 1]] remoteExec ["say3D"];

radio_3 remoteExec ["removeAllActions"];

[radio_3, ["Turn Off Radio",
{
	_pos = getPosATL (_this select 0);
	_dir = getDir (_this select 0);
	deleteVehicle (_this select 0);
	
	radio_3 = "Land_CampingChair_V1_F" createVehicle [0, 0, 0];
	radio_3 setPosATL [_pos select 0, _pos select 1, _pos select 2];
	radio_3 setDir _dir;
	radioH_3 remoteExec ["terminate"];
	
	[radio_3, ["Play Radio", {radioH_3 = [] execVM "scripts\playradio_3.sqf"}, [], 6, false, true, "", "_target distance _this < 10"]] remoteExec ["addAction"];
}, [], 6, false, true, "", "_target distance _this < 10"]] remoteExec ["addAction"];


_waitTime = time + _songLength;
waitUntil{time >= _waitTime};
radio remoteExec ["removeAllActions"];

radioH_3 = [] execVM "scripts\playradio_3.sqf";

