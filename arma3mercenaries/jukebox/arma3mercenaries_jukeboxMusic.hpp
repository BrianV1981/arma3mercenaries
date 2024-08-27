/*
<summary>Arma3Mercenaries Jukebox Music and Sounds Configuration</summary>

// File: arma3mercenaries/jukebox/arma3mercenaries_jukeboxMusic.hpp
// File: arma3mercenaries/jukebox/arma3mercenaries_jukeboxSounds.hpp

## Overview

The Arma3Mercenaries Jukebox system uses two specific configuration files to manage music and sound settings efficiently. These files are included in the main mission configuration (`description.ext`) to maintain a clean and tidy structure, avoiding clutter from extensive music and sound class definitions.

- **`arma3mercenaries_jukeboxMusic.hpp`**: Contains the music tracks definitions used by the jukebox, detailing the sound files, tags, durations, and artist information for each track.
- **`arma3mercenaries_jukeboxSounds.hpp`**: Specifies additional sound configurations that are not classified as music tracks but are used in the jukebox system, ensuring all sound-related settings are centralized.

## Features

- **Organized Configuration**: By separating music and sound configurations into dedicated files, the `description.ext` remains organized and focused on broader mission settings.
- **Easy Maintenance**: Updates to music or sound settings are straightforward, as they are concentrated in these specific files, making maintenance and modifications easier.
- **Modular Design**: This structure supports modularity, allowing for easier integration or removal of the jukebox system from different missions without extensive changes to the main configuration file.

## How to Use

### Including in `description.ext`

To utilize these configuration files within your mission, include them in your `description.ext` like so:

class CfgMusic {
    #include "arma3mercenaries/jukebox/arma3mercenaries_jukeboxMusic.hpp"
};

class CfgSounds {
    #include "arma3mercenaries/jukebox/arma3mercenaries_jukeboxSounds.hpp"
};

### Modifying Music and Sounds

- **Editing Music Tracks**: To change music tracks or their details (like duration or artist), modify the `arma3mercenaries_jukeboxMusic.hpp` file.
- **Updating Sounds**: For sound changes not covered by music tracks, adjust the `arma3mercenaries_jukeboxSounds.hpp` file.

## Important Notes

- **Centralized Configuration**: All music and sound settings related to the jukebox are centralized in these files, ensuring that the `description.ext` is not overloaded with extensive sound and music definitions.
- **Flexible Integration**: These files can be easily modified or replaced to suit the specific needs of different missions, enhancing the flexibility of the jukebox system.

## Warning: `sound[]` Conflicts

When defining multiple music tracks or sound effects, it’s crucial to ensure that the `sound[]` arrays are properly configured to avoid conflicts:

- **Conflicting `sound[]` Definitions**: If different sounds or music tracks share similar `sound[]` definitions (such as identical file paths or incorrect tags), it can lead to conflicts where the wrong sound is played or the game fails to recognize the correct sound file.
- **Debugging Issues**: If you encounter issues where the wrong track is played or no sound is heard, double-check the `sound[]` definitions in both `arma3mercenaries_jukeboxMusic.hpp` and `arma3mercenaries_jukeboxSounds.hpp` to ensure they are unique and correctly configured.
- **Best Practices**: Always test sound and music configurations in a controlled environment before deploying them in a live mission to ensure no conflicts arise.

// Add arma3mercenaries Radio action
_this addAction ["arma3mercenaries Radio", {
    createDialog "customInterface";
}, "", 0, false, false, "", "player distance _target < 5"];

*/

	class myTrack1 {
        name = "myTrack1";
        sound[] = {"music\bird.ogg", db+3, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 121;
        artist = "The Trashmen";
        title = "Surfing Bird";
    };
    class myTrack2 {
        name = "myTrack2";
        sound[] = {"music\black.ogg", db+3, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 121;
        artist = "The Rolling Stones";
        title = "Paint It, Black";
    };
    class myTrack3 {
        name = "myTrack3";
        sound[] = {"music\boots.ogg", db+3, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 121;
        artist = "Nancy Sinatra";
        title = "These Boots Are Made For Walkin";
    };
    class myTrack4 {
        name = "myTrack4";
        sound[] = {"music\bully.ogg", db+3, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 121;
        artist = "Sam the Sham & the Pharaos";
        title = "Wooly Bully";
    };
    class myTrack5 {
        name = "myTrack5";
        sound[] = {"music\cisco.ogg", db+3, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 121;
        artist = "WAR";
        title = "Cisco Kid";
    };
    class myTrack6 {
        name = "myTrack6";
        sound[] = {"music\fortunate.ogg", db+3, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 121;
        artist = "Creedence Clearwater Revival";
        title = "Fortunate Son";
    };
    class myTrack7 {
        name = "myTrack7";
        sound[] = {"music\foxiran1.ogg", db+3, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 121;
        artist = "FOX";
        title = "Iran Update 1";
    };
    class myTrack8 {
        name = "myTrack8";
        sound[] = {"music\hush.ogg", db+3, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 121;
        artist = "Deep Purple";
        title = "Hush";
    };
    class myTrack9 {
        name = "myTrack9";
        sound[] = {"music\letter.ogg", db+3, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 121;
        artist = "The Box Tops";
        title = "The Letter";
    };
    class myTrack10 {
        name = "myTrack10";
        sound[] = {"music\pompeo1.ogg", db+3, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 121;
        artist = "Foriegn Press Center";
        title = "Iran Update 2";
    };
    class myTrack11 {
        name = "myTrack11";
        sound[] = {"music\preacher.ogg", db+3, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 121;
        artist = "Dusty Springfield";
        title = "Son of a Preacher Man";
    };
    class myTrack12 {
        name = "myTrack12";
        sound[] = {"music\shakin.ogg", db+3, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 121;
        artist = "The Guess Who";
        title = "Shakin All Over";
    };
    class myTrack13 {
        name = "myTrack13";
        sound[] = {"music\trumpspeach1.ogg", db+3, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 121;
        artist = "President Donald J. Trump";
        title = "Iran Update 3";
    };
    class myTrack14 {
        name = "myTrack14";
        sound[] = {"music\silence_60m.ogg", db+0, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 3600;
        artist = "";
        title = "";
    };
    class myTrack15 {
        name = "myTrack15";
        sound[] = {"music\silence_45m.ogg", db+0, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 2700;
        artist = "";
        title = "";
    };
    class myTrack16 {
        name = "myTrack16";
        sound[] = {"music\silence_30m.ogg", db+0, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 1800;
        artist = "";
        title = "";
    };
    class myTrack17 {
        name = "myTrack17";
        sound[] = {"music\silence_15m.ogg", db+0, 1};
        titles[] = {};
        tag = "jukeboxRadio";
        duration = 900;
        artist = "";
        title = "";
    };