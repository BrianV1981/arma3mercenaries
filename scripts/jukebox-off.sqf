/*Simple and efficient Radio Jukebox - by Rick0Shay
  Tunes need to <= 65 secs see below sleep time and adjust accordingly.
  this addAction ["<img size='1' color='#ee4444' shadow='2' image='images\stop.paa'/>STOP", "scripts\jukebox-off.sqf","",8];
*/

_jukebox = _this select 0;
jukestate = "OFF";
publicVariable "jukestate";
curindex = nil;
publicVariable "curindex";

// OFF //////////////////////////////////////

hint "";
deletevehicle virtualplayer2;