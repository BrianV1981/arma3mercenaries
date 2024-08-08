// Initialize an empty array to store AI units
virtualBarracks = [];

// Function to store an AI unit
storeAIUnit = {
    params ["_unit"];

    // Save the unit's information in an array
    private _unitInfo = [
        typeOf _unit,
        getPos _unit,
        direction _unit,
        (group _unit)
    ];

    // Remove the unit from the game
    deleteVehicle _unit;

    // Add the unit information to the virtual barracks array
    virtualBarracks pushBack _unitInfo;
};

// Function to recall an AI unit
recallAIUnit = {
    params ["_index"];

    // Get the unit information from the virtual barracks array
    private _unitInfo = virtualBarracks select _index;
    private _unitType = _unitInfo select 0;
    private _unitPos = _unitInfo select 1;
    private _unitDir = _unitInfo select 2;
    private _unitGroup = _unitInfo select 3;

    // Create the unit and add it to the group
    private _unit = _unitType createUnit [_unitPos, _unitGroup, "", 0.5, "FORM"];
    _unit setDir _unitDir;

    // Remove the unit information from the virtual barracks array
    virtualBarracks deleteAt _index;

    // Add the unit to the player's group
    [group player, _unit] remoteExec ["addVehicle", 2];

    // Disable VCM mod commands for the unit
    (group player) setVariable ["Vcm_Disable", true];
};

// Function to open the Virtual Barracks Dialog
openVirtualBarracksDialog = {
    createDialog "VirtualBarracksDialog";
    private _ctrl = findDisplay 12345 displayCtrl 1500;
    _ctrl clearItems;

    {
        _ctrl lbAdd format ["%1 - %2", _x select 0, _x select 1];
    } forEach virtualBarracks;
};

// Function to recall the selected unit from the dialog
recallSelectedUnit = {
    private _ctrl = findDisplay 12345 displayCtrl 1500;
    private _selectedIndex = lbCurSel _ctrl;

    if (_selectedIndex != -1) then {
        _selectedIndex call recallAIUnit;
        hint format ["Recalled unit: %1", (_ctrl lbText _selectedIndex)];
        _ctrl lbDelete _selectedIndex;
    } else {
        hint "No unit selected.";
    };
};
