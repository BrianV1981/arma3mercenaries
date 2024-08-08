// jukeboxGUIDisplay.hpp

// Define the GUI display
class RscDisplayJukebox {
    idd = -1;
    movingEnable = true;
    class Controls {
        class RscText {
            idc = -1;
            type = 0;
            style = 0;
            font = "PuristaMedium";
            sizeEx = 0.04;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0};
            shadow = 1;
            x = 0.35; y = 0.1;
            w = 0.3; h = 0.05;
            text = "Jukebox Player";
        };
        class Track1Button: RscButton {
            idc = 1000;
            text = "Play Track 1";
            x = 0.35; y = 0.2;
            w = 0.3; h = 0.05;
            action = "[0, 'Track1', 'play'] execVM 'jukebox.sqf';";
        };
        class Track2Button: RscButton {
            idc = 1001;
            text = "Play Track 2";
            x = 0.35; y = 0.3;
            w = 0.3; h = 0.05;
            action = "[0, 'Track2', 'play'] execVM 'jukebox.sqf';";
        };
        class PauseButton: RscButton {
            idc = 1003;
            text = "Pause";
            x = 0.35; y = 0.4;
            w = 0.3; h = 0.05;
            action = "[0, '', 'pause'] execVM 'jukebox.sqf';";
        };
        class ResumeButton: RscButton {
            idc = 1004;
            text = "Resume";
            x = 0.35; y = 0.5;
            w = 0.3; h = 0.05;
            action = "[0, '', 'resume'] execVM 'jukebox.sqf';";
        };
        class StopButton: RscButton {
            idc = 1005;
            text = "Stop";
            x = 0.35; y = 0.6;
            w = 0.3; h = 0.05;
            action = "[0, '', 'stop'] execVM 'jukebox.sqf';";
        };
    };
};
