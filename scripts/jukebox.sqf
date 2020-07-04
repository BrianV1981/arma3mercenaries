/*Simple 3D music player - by Rick0Shay
  In the example below all tunes need to all be <= 60 secs.
  Or change _maxSongLength time below and adjust length of tunes accordingly.

  Place the following addactions on a laptop or suitable music device in editor. Sound will originate from this object.

	[this,["<img size='1' color='#00eeaa' shadow='2' image='images\play.paa'/>PLAY","scripts\ROS_jukebox.sqf","PLAY",9,false,true,"","_this distance _target < 3"]] remoteExec ["addAction",0];
	[this,["<img size='1' color='#00aaee' shadow='2' image='images\next.paa'/>NEXT","scripts\ROS_jukebox.sqf","NEXT",8,false,true,"","_this distance _target < 3"]] remoteExec ["addAction",0];
	[this,["<img size='1' color='#ee4444' shadow='2' image='images\stop.paa'/>OFF","scripts\ROS_jukebox.sqf","OFF",7,false,true,"","_this distance _target < 3"]] remoteExec ["addAction",0];
*/

// Change this value - it must be >= longest song length in seconds. Try to make songs of similar length.
_maxSongLength = 121;

// Add your tune classes here. Tunes must be declared in Cfg_Sounds in description.ext
_tunestoplay =
[
"cisco",
"black",
"fortunate",
"trumpspeach1",
"bully",
"shakin",
"hush",
"preacher",
"foxiran1",
"letter",
"boots",
"bird",
"pompeo1"
];

///////////////////////////////////////////////////////////////////////////////////////////////////////

if (isnil "ROS_radiostate") then {ROS_radiostate = "OFF"}; // for future use
if (isnil "ROS_jukestate") then {ROS_jukestate = "OFF"};

_numoftunes = count _tunestoplay;

_jukebox = _this select 0;
_actionID = _this select 2;
_state = _this select 3;
_nextselected = "";
_songend = 0;

if (isnil "ROS_nextindex") then {ROS_nextindex = 0};
if (isnil "ROS_curindex") then {ROS_curindex = 0; publicVariable "ROS_curindex";};
if (isnil "ROS_virtualplayer") then {ROS_virtualplayer = objNull};

// PLAY = plays sequentially through all songs then stops
ROS_FncPlayer_PLAY = {
	{if (typeof _x == "Land_HelipadEmpty_F") then {deleteVehicle _x}} forEach attachedObjects _jukebox;
	if (alive ROS_virtualplayer) then {deleteVehicle ROS_virtualplayer};
	ROS_virtualplayer = "Land_HelipadEmpty_F" createVehicle position _jukebox;
	ROS_virtualplayer attachTo [_jukebox,[0,0,0]];
	for "_i" from ROS_curindex to (_numoftunes - 1) do {
		ROS_curindex = _i;
		publicVariable "ROS_curindex";
		_nextselected = _tunestoplay select _i;
		[ROS_virtualplayer, _nextselected] remoteExec ["say3D",0];
		hint format ["Now playing:\n%1", _nextselected];
		_songend = time + _maxsonglength;
		waitUntil {time >= _songend or !(alive ROS_virtualplayer) or ROS_jukestate != "PLAY"};
		if (ROS_curindex == (_numoftunes - 1)) then {_i = -1; ROS_curindex = 0; publicVariable "ROS_curindex";};
		if (!(alive ROS_virtualplayer) or ROS_jukestate != "PLAY") exitWith {};
		sleep 1;
	};
	true
};

// NEXT
ROS_FncPlayer_NEXT = {
	{if (typeof _x == "Land_HelipadEmpty_F") then {deleteVehicle _x}} forEach attachedObjects _jukebox;
	if (alive ROS_virtualplayer) then {deleteVehicle ROS_virtualplayer};
	if (ROS_curindex + 1 == _numoftunes) then {ROS_nextindex = 0} else {ROS_nextindex = (ROS_curindex + 1)};
	_nextselected = _tunestoplay select ROS_nextindex;
	ROS_curindex = ROS_nextindex;
	publicVariable "ROS_curindex";
	ROS_virtualplayer = "Land_HelipadEmpty_F" createVehicle position _jukebox;
	ROS_virtualplayer attachTo [_jukebox,[0,0,0]];
	[ROS_virtualplayer, _nextselected] remoteExec ["say3D",0];
	hint format ["Now playing:\n%1", _nextselected];
	_songend = time + _maxsonglength;
	waitUntil {time >= _songend or !(alive ROS_virtualplayer)};
	{if (typeof _x == "Land_HelipadEmpty_F") then {deleteVehicle _x}} forEach attachedObjects _jukebox;
	deleteVehicle ROS_virtualplayer;
	ROS_jukestate == "OFF";
	publicVariable "ROS_jukestate";

	true
};

// OFF
ROS_FncPlayer_OFF = {
	{if (typeof _x == "Land_HelipadEmpty_F") then {deleteVehicle _x}} forEach attachedObjects _jukebox;
	if (alive ROS_virtualplayer) then {deleteVehicle ROS_virtualplayer};
	ROS_jukestate = "OFF";
	publicVariable "ROS_jukestate";
	hint "";
	true
};

// Stop player
call ROS_FncPlayer_OFF;

// set new state
ROS_jukestate = _state;
publicVariable "ROS_jukestate";

if (ROS_jukestate == "PLAY") exitWith {call ROS_FncPlayer_PLAY};
if (ROS_jukestate == "NEXT") exitWith {call ROS_FncPlayer_NEXT};
if (ROS_jukestate == "OFF") exitWith {call ROS_FncPlayer_OFF};
