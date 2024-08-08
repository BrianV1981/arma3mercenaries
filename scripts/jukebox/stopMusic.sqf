// File: scripts/jukebox/stopMusic.sqf

// Function to stop the music and manage event handler
fnc_stopMusic = {
    // Stop the music
    [] remoteExecCall ['playMusic', -2, true];
    
    // Disable or remove the event handler
    if (isNil "eventHandlerAdded") then {
        eventHandlerAdded = false;
    };

    if (eventHandlerAdded) then {
        removeMusicEventHandler ["MusicStop", fnc_remotePlayRandomTrack];
        eventHandlerAdded = false;
    };
    
    hint "Music Stopped";
};

// Execute the stop music function on the server
[] call fnc_stopMusic;
