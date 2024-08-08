/*

// Init field of the Jukebox object
this addAction ["Open Jukebox", {
    createDialog "RscDisplayJukebox";
}];

*/

// jukebox.sqf
_jukebox = _this select 0;
_music = _this select 1;
_state = _this select 2;

if (!isServer) exitWith {}; // Ensure this runs only on the server

switch (_state) do {
    case "play": {
        0 fadeMusic 0;
        playMusic _music;
        0 fadeMusic 1;
    };
    case "pause": {
        0 fadeMusic 0;
        stopMusic;
    };
    case "resume": {
        0 fadeMusic 0;
        playMusic _music;
        0 fadeMusic 1;
    };
    case "stop": {
        0 fadeMusic 0;
        stopMusic;
    };
};

// Optional: Store current music if needed
currentMusic = _music;