/*Simple 3D music player - by Rick0Shay
  Tunes need to <= 60 secs see below sleep time and adjust accordingly.
  this addAction ["<img size='1' color='#00eeaa' shadow='2' image='images\play.paa'/>PLAY", "scripts\jukebox.sqf","PLAY",9];
  this addAction ["<img size='1' color='#00aaee' shadow='2' image='images\next.paa'/>NEXT", "scripts\jukebox.sqf","NEXT",8];
  this addAction ["<img size='1' color='#ee4444' shadow='2' image='images\stop.paa'/>STOP", "scripts\jukebox.sqf","OFF",7];
*/

// Must be >= longest song length.
_maxsonglength = 261;

//Tunes in description.ext
_tunestoplay =
[
"black",
"trumpspeach1",
"bully",
"shakin",
"hush",
"preacher",
"foxiran1",
"letter",
"boots",
"bird"
];

/////////////////////////////////////////////////////////////////
_numoftunes = count _tunestoplay;

_jukebox = _this select 0;
_actionID = _this select 2;
_state = _this select 3;

// if same button is pressed more than once for play then exit
if (_state == "PLAY" && jukestate == "PLAY") exitWith {};

// stop player
deleteVehicle virtualplayer2; jukestate = "OFF"; publicVariable "jukestate";

//hint format ["state %1, jukestate %2",_state, jukestate];

sleep 1;

// set new state
jukestate = _state;
publicVariable "jukestate";

if (jukestate == "PLAY") then {
	if (isnil "curindex") then {curindex = 0};

	for "_i" from curindex to (_numoftunes - 1) do {
		curindex = _i;
		publicVariable "curindex";
		if (isnull virtualplayer2) then {virtualplayer2 = "Land_HelipadEmpty_F" createVehicle position _jukebox};
		virtualplayer2 attachTo [_jukebox,[0,0,0]];
		_nextselected = _tunestoplay select _i;
		[virtualplayer2, _nextselected] remoteExec ["say3D",0];
		hint format ["Now playing:\n%1", _nextselected];
		_songend = time + _maxsonglength;
		waitUntil {time >= _songend or isnull virtualplayer2 or jukestate != "PLAY"};
		if (isnull virtualplayer2) exitWith {_state = "OFF"; jukestate = "OFF"; publicVariable "jukestate"};
		sleep 1;
	};
};

if (jukestate == "NEXT") then {
	if !(isnull virtualplayer2) then {deleteVehicle virtualplayer2};
	if (curindex + 1 == _numoftunes) then {nextindex = 0} else {nextindex = (curindex + 1)};
	_nextselected = _tunestoplay select nextindex;
	sleep 1;
	curindex = nextindex;
	publicVariable "curindex";
	if (isnull virtualplayer2) then {virtualplayer2 = "Land_HelipadEmpty_F" createVehicle position _jukebox};
	virtualplayer2 attachTo [_jukebox,[0,0,0]];
	[virtualplayer2, _nextselected] remoteExec ["say3D",0];
	hint format ["Now playing:\n%1", _nextselected];
	_songend = time + _maxsonglength;
	waitUntil {time >= _songend or isnull virtualplayer2 or jukestate != "NEXT"};
};

if (jukestate == "OFF") exitWith {
	deleteVehicle virtualplayer2;
	publicVariable "jukestate";
};
