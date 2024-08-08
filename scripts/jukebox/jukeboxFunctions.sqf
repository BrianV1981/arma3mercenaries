// File: scripts/jukebox/jukeboxFunctions.sqf

// Initialize the playlist and current track index
_jukeboxPlaylist = ["myTrack1", "myTrack2", "myTrack3", "myTrack4", "myTrack5", "myTrack6", "myTrack7", "myTrack8", "myTrack9", "myTrack10", "myTrack11", "myTrack12", "myTrack13"];
_currentTrackIndex = -1;
_isPaused = false;

// Define the play function
playFunction = {
    params ["_track"];
    if (_track isEqualTo "") exitWith { hint "No track specified."; };

    // Stop any current track
    call stopFunction;

    // Start the specified track
    playMusic _track;

    // Update current track index
    _currentTrackIndex = _jukeboxPlaylist find _track;

    // Display artist and title using BIS_fnc_infoText
    private _trackCfg = configFile >> "CfgMusic" >> _track;
    private _artist = getText (_trackCfg >> "artist");
    private _title = getText (_trackCfg >> "title");
    [format ["Artist: %1 - Title: %2", _artist, _title]] call BIS_fnc_infoText;

    _isPaused = false;
};

// Define the stop function
stopFunction = {
    playMusic "";
    _currentTrackIndex = -1;
    _isPaused = false;
};

// Define the next function
nextFunction = {
    if (_currentTrackIndex == -1) then {
        _currentTrackIndex = 0;
    } else {
        _currentTrackIndex = (_currentTrackIndex + 1) % count _jukeboxPlaylist;
    };
    [_jukeboxPlaylist select _currentTrackIndex] call playFunction;
};

// Define the back function
backFunction = {
    if (_currentTrackIndex == -1) then {
        _currentTrackIndex = 0;
    } else {
        _currentTrackIndex = (_currentTrackIndex - 1 + count _jukeboxPlaylist) % count _jukeboxPlaylist;
    };
    [_jukeboxPlaylist select _currentTrackIndex] call playFunction;
};

// Define the pause function
pauseFunction = {
    if (_isPaused) then {
        hint "Resuming track...";
        playMusic (_jukeboxPlaylist select _currentTrackIndex);
        _isPaused = false;
    } else {
        hint "Pausing track...";
        playMusic "";
        _isPaused = true;
    };
};
