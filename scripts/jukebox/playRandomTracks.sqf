// Define the function to play a random track
fnc_playRandomTrack = {
    // Choose a random track and set the hint text
    private _trackInfo = switch (round(random 16)) do {
        case 0 : {["myTrack1", "The Trashmen", "Surfing Bird"]};
        case 1 : {["myTrack2", "The Rolling Stones", "Paint It, Black"]};
        case 2 : {["myTrack3", "Nancy Sinatra", "These Boots Are Made For Walkin"]};
        case 3 : {["myTrack4", "Sam the Sham & the Pharaos", "Wooly Bully"]};
        case 4 : {["myTrack5", "WAR", "Cisco Kid"]};
        case 5 : {["myTrack6", "Creedence Clearwater Revival", "Fortunate Son"]};
        case 6 : {["myTrack7", "FOX", "Iran Update 1"]};
        case 7 : {["myTrack8", "Deep Purple", "Hush"]};
        case 8 : {["myTrack9", "The Box Tops", "The Letter"]};
        case 9 : {["myTrack10", "Foreign Press Center", "Iran Update 2"]};
        case 10 : {["myTrack11", "Dusty Springfield", "Son of a Preacher Man"]};
        case 11 : {["myTrack12", "The Guess Who", "Shakin All Over"]};
        case 12 : {["myTrack13", "President Donald J. Trump", "Iran Update 3"]};
        case 13 : {["myTrack14", "", ""]};
        case 14 : {["myTrack15", "", ""]};
        case 15 : {["myTrack16", "", ""]};
        case 16 : {["myTrack17", "", ""]};
        default {["defaultTrack", "Unknown Artist", "Unknown Title"]};  // Default case
    };

    private _track = _trackInfo select 0;
    private _artist = _trackInfo select 1;
    private _title = _trackInfo select 2;

    // Display the hint with artist and song name
    hint format ["Now Playing: %1 - %2", _artist, _title];

    // Play the chosen track
    playMusic _track;
};

// Wrap the function call for remote execution
fnc_remotePlayRandomTrack = {
    // Call the random track function
    [] call fnc_playRandomTrack;
};

// Execute on the server
[] remoteExecCall ["fnc_remotePlayRandomTrack", 0, true];

// Add an event handler to play a new random track when the current track stops
addMusicEventHandler ["MusicStop", {
    // Call the function to play a new random track on the server
    [] remoteExecCall ["fnc_remotePlayRandomTrack", 0, true];
}];
