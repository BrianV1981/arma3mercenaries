// playlist_1.sqf
private["_playlist_1"];

// Define the playlist
_playlist_1 = [
    "myTrack1",
    "myTrack2",
    "myTrack3",
    "myTrack4",
    "myTrack5",
    "myTrack6",
    "myTrack7",
    "myTrack8",
    "myTrack9",
    "myTrack10",
    "myTrack11",
    "myTrack12",
    "myTrack13"
    // Add more tracks as needed
];

playlist_1 = _playlist_1;


/*

// Function to display info about the current track
_displayTrackInfo = {
    private["_track", "_trackConfig", "_title", "_artist"];

    _track = _this;
    
    // Get the configuration for the current track
    _trackConfig = configFile >> "CfgMusic" >> _track;

    // Extract title and artist
    _title = getText (_trackConfig >> "title");
    _artist = getText (_trackConfig >> "artist");

    // Display the info
    ["%1 by %2", _title, _artist] call BIS_fnc_infoText;
};


*/