// jukeboxGUIDefinitions.hpp

// Define RscText1 control (previously RscText)
class RscText1 {
    idc = -1;
    type = 0;
    style = 0;
    font = "PuristaMedium";
    sizeEx = 0.04;
    colorText[] = {1,1,1,1};
    colorBackground[] = {0,0,0,0};
    shadow = 1;
    x = 0;
    y = 0;
    w = 0.1;
    h = 0.05;
};

// Define RscButton control
class RscButton {
    idc = -1;
    type = 1;
    style = 2;
    font = "PuristaMedium";
    sizeEx = 0.04;
    colorText[] = {1,1,1,1};
    colorDisabled[] = {0.5,0.5,0.5,1};
    colorBackground[] = {0.2,0.2,0.2,1};
    colorBackgroundActive[] = {0.4,0.4,0.4,1};
    colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
    colorFocused[] = {1,1,1,1};
    colorShadow[] = {0,0,0,0.5};
    offsetX = 0.004;
    offsetY = 0.004;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
    borderSize = 0.0;
    shadow = 2;
    x = 0;
    y = 0;
    w = 0.1;
    h = 0.05;
};

// Define RscSlider control
class RscSlider {
    idc = -1;
    type = 3;
    style = 1024;
    color[] = {1,1,1,1};
    colorActive[] = {1,1,1,1};
    colorDisabled[] = {0.5,0.5,0.5,1};
    shadow = 0;
    x = 0;
    y = 0;
    w = 0.1;
    h = 0.05;
};