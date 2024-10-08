/*

<summary>Arma3Mercenaries Play Random Tracks Script</summary>

// File: arma3mercenaries/jukebox/arma3mercenaries_playRandomTracks.sqf

## Overview

The `arma3mercenaries_playRandomTracks.sqf` script is designed to manage the continuous looping of random music tracks within the Arma3Mercenaries jukebox system. This script is fully functional as a standalone feature or as an optional component that can be integrated into the broader jukebox system.

- **Standalone Usage**: The script can operate independently, continuously playing random tracks from a defined playlist without requiring any other components of the jukebox system.
- **Integration with Jukebox**: When incorporated into the full jukebox system, this script enhances the player experience by ensuring that music tracks play in a loop without requiring manual selection.
- **Optional**: The script is entirely optional. The jukebox will function without it, allowing players to manually select tracks without the automatic looping of music.

## Features

- **Continuous Music Playback**: Automatically plays a random track from the playlist when the current track ends, providing uninterrupted music during gameplay.
- **Customizable Playlist**: The script can be configured to select tracks from a predefined playlist, ensuring a diverse and engaging music experience.
- **Event-Driven Execution**: Utilizes event handlers to trigger the playback of the next track, seamlessly integrating with Arma 3’s game engine.

## How to Use

### Standalone

To use the script as a standalone feature:

1. **Include in Mission Init**:
   - Add the following line to your `init.sqf` file to initialize the script:
     ```sqf
     execVM "arma3mercenaries/jukebox/arma3mercenaries_playRandomTracks.sqf";
     ```

2. **Customize Playlist**:
   - Edit the script to specify the playlist or track selection method as needed for your mission.

### Integrated with Jukebox

To incorporate the script into the full jukebox system:

1. **Ensure Compatibility**:
   - Place the script in the `arma3mercenaries/jukebox/` folder alongside other jukebox components.

2. **Initialize with Jukebox**:
   - Include the initialization line in your mission’s `initServer.sqf` file as described above. This will enable the random looping feature within the full jukebox interface.

3. **Remove If Needed**:
   - The script can be removed entirely without affecting the core functionality of the jukebox, which will revert to manual track selection only.

## Important Notes

- **Optional Feature**: This script is optional and can be added or removed from your mission without disrupting the functionality of the jukebox system.
- **No Interference**: Removing the script will simply stop the automatic looping of tracks, leaving the rest of the jukebox interface fully functional for manual operation.
- **Customizable**: The script is fully customizable, allowing mission creators to define how and when tracks are selected and played.

*/

// Ensure the function is defined on both server and clients
fnc_playRandomTrack = {
    // Choose a random track and set the hint text
    private _trackInfo = switch (round(random 32)) do {
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
        case 17 : {["myTrack18", "Good Morning Vietnam", "First Broadcast"]};
        case 18 : {["myTrack19", "Fox", "Iran Update 4"]};
        case 19 : {["myTrack20", "The Spencer Davis Group", "Gimmie Some Lovin"]};
        case 20 : {["myTrack21", "The Rolling Stones", "Gimmie Shelter"]};
        case 21 : {["myTrack22", "The Doors", "Hello, I Love You"]};
        case 22 : {["myTrack23", "Jefferson Airplane", "White Rabbit"]};
        case 23 : {["myTrack24", "Donovan", "Mellow Yellow"]};
        case 24 : {["myTrack25", "The Chambers Brothers", "Time Has Come Today"]};
        case 25 : {["myTrack26", "The Animals", "House Of The Rising Sun"]};
        case 26 : {["myTrack27", "The Doors", "Light My Fire"]};
        case 27 : {["myTrack28", "Otis Redding", "Sittin On The Dock Of The Bay"]};
        case 28 : {["myTrack29", "Jimmi Hendrix", "All Along The Watchtower"]};
        case 29 : {["myTrack14", "", ""]};
        case 30 : {["myTrack15", "", ""]};
        case 31 : {["myTrack16", "", ""]};
        case 32 : {["myTrack17", "", ""]};
        default {["myTrack14", "", ""]};  // Default case
    };

    private _track = _trackInfo select 0;
    private _artist = _trackInfo select 1;
    private _title = _trackInfo select 2;

    // Display the hint with artist and song name
    hint format ["Now Playing: %1 - %2", _artist, _title];

    // Play the chosen track
    playMusic _track;
};

// Add the MusicStop event handler to ensure a new track plays when the current one ends
addMusicEventHandler ["MusicStop", {
    // Call the function to play a new random track locally
    [] call fnc_playRandomTrack;
}];

// Play the first random track immediately upon loading
[] call fnc_playRandomTrack;
