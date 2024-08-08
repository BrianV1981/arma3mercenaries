class VirtualBarracksDialog {
    idd = 12345;
    movingEnable = 0;
    enableSimulation = 1;
    controlsBackground[] = {MainBackground};
    objects[] = {};
    controls[] = {
        Title,
        UnitList,
        RecallButton,
        CloseButton
    };

    class MainBackground {
        idc = -1;
        type = 0; // CT_STATIC
        style = 512; // ST_HUD_BACKGROUND
        text = "";
        colorText[] = {0, 0, 0, 0};
        font = "RobotoCondensed";
        sizeEx = 0.04;
        shadow = 0;
        colorBackground[] = {0, 0, 0, 0.6};
        x = 0.3;
        y = 0.2;
        w = 0.4;
        h = 0.6;
    };

    class Title {
        idc = -1;
        type = 0; // CT_STATIC
        style = 2; // ST_CENTER
        text = "arma3mercenaries Barracks";
        colorText[] = {1, 1, 1, 1};
        font = "RobotoCondensed";
        sizeEx = 0.06;
        shadow = 0;
        colorBackground[] = {0, 0.5, 0, 1};
        x = 0.3;
        y = 0.2;
        w = 0.4;
        h = 0.05;
    };

    class UnitList {
        idc = 1500;
        type = 5; // CT_LISTBOX
        style = 16; // LB_TEXTURES
        font = "RobotoCondensed";
        sizeEx = 0.04;
        rowHeight = 0.04;
        colorText[] = {1, 1, 1, 1};
        colorDisabled[] = {1, 1, 1, 0.25};
        colorScrollbar[] = {1, 0, 0, 0};
        colorSelect[] = {0, 0, 0, 1};
        colorSelect2[] = {0, 0, 0, 1};
        colorSelectBackground[] = {0.6, 0.6, 0.6, 1};
        colorSelectBackground2[] = {0.6, 0.6, 0.6, 1};
        colorBackground[] = {0, 0, 0, 0.3};
        maxHistoryDelay = 1.0;
        soundSelect[] = {"", 0.1, 1};
        period = 1;
        shadow = 0;
        x = 0.31;
        y = 0.26;
        w = 0.38;
        h = 0.4;
    };

    class RecallButton {
        idc = 1600;
        type = 1; // CT_BUTTON
        style = 2; // ST_CENTER
        text = "Recall Unit";
        font = "RobotoCondensed";
        sizeEx = 0.04;
        colorText[] = {1, 1, 1, 1};
        colorDisabled[] = {1, 1, 1, 0.25};
        colorBackground[] = {0, 0, 0, 0.8};
        colorFocused[] = {1, 1, 1, 0.5};
        colorBackgroundActive[] = {1, 1, 1, 0.8}; // hover
        colorBackgroundDisabled[] = {0.3, 0.3, 0.3, 1};
        colorBackgroundFocused[] = {0, 0, 0, 0.5};
        colorShadow[] = {0, 0, 0, 0};
        colorBorder[] = {0, 0, 0, 1};
        soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
        soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
        soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
        soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};
        shadow = 0;
        offsetX = 0.003;
        offsetY = 0.003;
        offsetPressedX = 0.002;
        offsetPressedY = 0.002;
        borderSize = 0;
        x = 0.31;
        y = 0.67;
        w = 0.18;
        h = 0.05;
        action = "call recallSelectedUnit;";
    };

    class CloseButton {
        idc = 1601;
        type = 1; // CT_BUTTON
        style = 2; // ST_CENTER
        text = "Close";
        font = "RobotoCondensed";
        sizeEx = 0.04;
        colorText[] = {1, 1, 1, 1};
        colorDisabled[] = {1, 1, 1, 0.25};
        colorBackground[] = {0, 0, 0, 0.8};
        colorFocused[] = {1, 1, 1, 0.5};
        colorBackgroundActive[] = {1, 1, 1, 0.8}; // hover
        colorBackgroundDisabled[] = {0.3, 0.3, 0.3, 1};
        colorBackgroundFocused[] = {0, 0, 0, 0.5};
        colorShadow[] = {0, 0, 0, 0};
        colorBorder[] = {0, 0, 0, 1};
        soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
        soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
        soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
        soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};
        shadow = 0;
        offsetX = 0.003;
        offsetY = 0.003;
        offsetPressedX = 0.002;
        offsetPressedY = 0.002;
        borderSize = 0;
        x = 0.51;
        y = 0.67;
        w = 0.18;
        h = 0.05;
        action = "closeDialog 0;";
    };
};
