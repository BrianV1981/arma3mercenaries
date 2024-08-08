// server.sqf or similar server-side script
waitUntil { !isServer }; // Ensure this runs only on the server

// Ensure playlist_1.sqf is executed
execVM "scripts\playlist_1.sqf";

// Function to play a random track at regular intervals
_playRandomTrackRepeatedly = {
    while { true } do {
        [] remoteExecCall ["playRandomTrack", 0]; // Call playRandomTrack on the server
        sleep 130; // Wait for 600 seconds
    };
};

// Start the repeating timer
[_playRandomTrackRepeatedly] spawn {
    while { true } do {
        [] call _this;
        sleep 130; // Wait for 600 seconds before the next iteration
    };
};