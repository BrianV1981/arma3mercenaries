// File: scripts/jukebox/customInterface.hpp

class CustomInterface {
    idd = -1;
    movingEnable = 0;
    enableSimulation = 1;
    controlsBackground[] = {CustomBackground};
    objects[] = {};
    controls[] = {
        Title, MuteButton,
        TrackButton1, TrackButton2, TrackButton3, TrackButton4, TrackButton5,
        TrackButton6, TrackButton7, TrackButton8, TrackButton9, TrackButton10,
        TrackButton11, TrackButton12, TrackButton13, MercenaryRadioButton
    };

    class CustomBackground {
        idc = -1;
        type = 0; // CT_STATIC
        style = 512; // ST_HUD_BACKGROUND
        text = "";
        colorText[] = {0, 0, 0, 0};
        font = "RobotoCondensed";
        sizeEx = 0.04;
        shadow = 0;
        colorBackground[] = {0, 0, 0, 0.6};
        x = 0.2; // Adjusted for the new title and buttons
        y = 0.2;
        w = 0.6;
        h = 0.6;
    };

    class CustomButton {
        idc = -1;
        type = 1; // CT_BUTTON
        style = 2; // ST_CENTER
        text = "";
        colorText[] = {1,1,1,1};
        colorDisabled[] = {1,1,1,0.1};
        colorBackground[] = {0,0,0,0.8};
        colorFocused[] = {1,1,1,0.5};
        colorBackgroundActive[] = {1,1,1,0.8}; // hover
        colorBackgroundDisabled[] = {0.3,0.3,0.3,1};
        colorBackgroundFocused[] = {0,0,0,0.5};
        colorShadow[] = {0,0,0,0};
        colorBorder[] = {0,0,0,1};
        soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
        soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
        soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
        soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};
        animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
        animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
        animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
        animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
        animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
        animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
        shadow = 0;
        font = "RobotoCondensed";
        sizeEx = 0.04;
        offsetX = 0.003;
        offsetY = 0.003;
        offsetPressedX = 0.002;
        offsetPressedY = 0.002;
        borderSize = 0;
        w = 0.3; // Button width
        h = 0.05; // Button height
    };

    class Title {
        idc = -1;
        type = 0; // CT_STATIC
        style = 2; // ST_CENTER
        text = "arma3mercenaries Radio";
        colorText[] = {1, 1, 1, 1};
        font = "RobotoCondensed";
        sizeEx = 0.06;
        shadow = 0;
        colorBackground[] = {0, 0.5, 0, 1};
        x = 0.2;
        y = 0.2;
        w = 0.6;
        h = 0.05;
    };
    
    // Track buttons
    class TrackButton1: CustomButton {
        text = "Surfing Bird";
        x = 0.2;
        y = 0.3;
        action = "['myTrack1'] remoteExecCall ['playMusic', 0, true]; hintSilent format ['Now Playing: %1 - %2', 'The Trashmen', 'Surfing Bird'];";
    };

    class TrackButton2: CustomButton {
        text = "Paint It, Black";
        x = 0.2;
        y = 0.36;
        action = "['myTrack2'] remoteExecCall ['playMusic', 0, true]; hintSilent format ['Now Playing: %1 - %2', 'The Rolling Stones', 'Paint It, Black'];";
    };

    class TrackButton3: CustomButton {
        text = "These Boots Are Made For Walkin";
        x = 0.2;
        y = 0.42;
        action = "['myTrack3'] remoteExecCall ['playMusic', 0, true]; hintSilent format ['Now Playing: %1 - %2', 'Nancy Sinatra', 'These Boots Are Made For Walkin'];";
    };

    class TrackButton4: CustomButton {
        text = "Wooly Bully";
        x = 0.2;
        y = 0.48;
        action = "['myTrack4'] remoteExecCall ['playMusic', 0, true]; hintSilent format ['Now Playing: %1 - %2', 'Sam the Sham & the Pharaos', 'Wooly Bully'];";
    };

    class TrackButton5: CustomButton {
        text = "Cisco Kid";
        x = 0.2;
        y = 0.54;
        action = "['myTrack5'] remoteExecCall ['playMusic', 0, true]; hintSilent format ['Now Playing: %1 - %2', 'WAR', 'Cisco Kid'];";
    };

    class TrackButton6: CustomButton {
        text = "Fortunate Son";
        x = 0.2;
        y = 0.6;
        action = "['myTrack6'] remoteExecCall ['playMusic', 0, true]; hintSilent format ['Now Playing: %1 - %2', 'Creedence Clearwater Revival', 'Fortunate Son'];";
    };

    class TrackButton7: CustomButton {
        text = "Iran Update 1";
        x = 0.2;
        y = 0.66;
        action = "['myTrack7'] remoteExecCall ['playMusic', 0, true]; hintSilent format ['Now Playing: %1 - %2', 'FOX', 'Iran Update 1'];";
    };

    class TrackButton8: CustomButton {
        text = "Hush";
        x = 0.5;
        y = 0.3;
        action = "['myTrack8'] remoteExecCall ['playMusic', 0, true]; hintSilent format ['Now Playing: %1 - %2', 'Deep Purple', 'Hush'];";
    };

    class TrackButton9: CustomButton {
        text = "The Letter";
        x = 0.5;
        y = 0.36;
        action = "['myTrack9'] remoteExecCall ['playMusic', 0, true]; hintSilent format ['Now Playing: %1 - %2', 'The Box Tops', 'The Letter'];";
    };

    class TrackButton10: CustomButton {
        text = "Iran Update 2";
        x = 0.5;
        y = 0.42;
        action = "['myTrack10'] remoteExecCall ['playMusic', 0, true]; hintSilent format ['Now Playing: %1 - %2', 'Foriegn Press Center', 'Iran Update 2'];";
    };

    class TrackButton11: CustomButton {
        text = "Son of a Preacher Man";
        x = 0.5;
        y = 0.48;
        action = "['myTrack11'] remoteExecCall ['playMusic', 0, true]; hintSilent format ['Now Playing: %1 - %2', 'Dusty Springfield', 'Son of a Preacher Man'];";
    };

    class TrackButton12: CustomButton {
        text = "Shakin All Over";
        x = 0.5;
        y = 0.54;
        action = "['myTrack12'] remoteExecCall ['playMusic', 0, true]; hintSilent format ['Now Playing: %1 - %2', 'The Guess Who', 'Shakin All Over'];";
    };

    class TrackButton13: CustomButton {
        text = "Iran Update 3";
        x = 0.5;
        y = 0.6;
        action = "['myTrack13'] remoteExecCall ['playMusic', 0, true]; hintSilent format ['Now Playing: %1 - %2', 'President Donald J. Trump', 'Iran Update 3'];";
    };

    class MercenaryRadioButton: CustomButton {
        text = "Arma3mercenaries Radio";
        x = 0.5;
        y = 0.66;
        action = "hintSilent 'arma3mercenaries Radio\nCreated By: BrianV1981 w/ ChatGPT.';";
    };

    class MuteButton: CustomButton {
        text = "Mute";
        x = 0.35;
        y = 0.72;
        action = "['myTrack14'] remoteExecCall ['playMusic', 0, true]; hintSilent 'Now Playing: Muted';";
    };
};
