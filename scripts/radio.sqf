// radio.sqf
_radio = _this select 0;
_music = _this select 1;

if (!isServer) exitWith {}; // Ensure this runs only on the server

// Check if music is already playing
if (isMusicPlaying) exitWith {};

// Play the selected track using say3D
switch (_music) do {
    case "myTrack1": {
        _radio say3D "Sound_myTrack1";
        currentRadioSound = "Sound_myTrack1";
        currentTrackDuration = 121; // Duration in seconds for "myTrack1"
    };
    case "myTrack2": {
        _radio say3D "Sound_myTrack2";
        currentRadioSound = "Sound_myTrack2";
        currentTrackDuration = 121; // Duration in seconds for "myTrack2"
    };
};

// Disable play actions
isMusicPlaying = true;
[_radio] spawn {
    private _radioObject = _this select 0; // Select the first element

    // Ensure currentTrackDuration is defined and use it correctly
    if (isNil "currentTrackDuration") then {
        hint "currentTrackDuration is not defined";
        exitWith {}; // Exit if the variable is not defined
    };

    _radioObject removeAllActions; // Remove all actions from the radio object

    // Wait for the duration of the track
    sleep currentTrackDuration;

    // Re-enable play actions after the track ends
    _radioObject addAction ["Play Track 1", {[_this select 0, "myTrack1"] execVM "scripts\radio.sqf";}];
    _radioObject addAction ["Play Track 2", {[_this select 0, "myTrack2"] execVM "scripts\radio.sqf";}];
    
    currentRadioSound = "";
    isMusicPlaying = false;
};