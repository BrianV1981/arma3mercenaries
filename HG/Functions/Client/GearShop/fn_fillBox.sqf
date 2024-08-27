/*
    fn_fillBox.sqf
    Author - HoverGuy
    Website - https://northernimpulse.com
    Enhanced by - BrianV1981
    Changes:
    - Corrected the usage of `addItemCargo` and `addWeaponCargo` to ensure both item name and count are passed correctly.
    - Added comments to explain each section and potential error points.
*/

private ["_itemType", "_type"];

{
    // Check if the gear slot has any item in it (not empty)
    if ((count _x) != 0) then
    {
        _itemType = [_x select 0] call BIS_fnc_itemType; // Get the type of the item
        _type = _itemType select 1; // Extract the specific type of item (e.g., weapon, uniform, etc.)

        // Switch case to handle different types of items
        switch (_type) do
        {
            case "Uniform":
            {
                // Check if a uniform is saved and add it to the player's box
                if (((HG_GEAR_SAVED select 0) select 0) != "") then
                {
                    HG_PLAYER_BOX addItemCargo [((HG_GEAR_SAVED select 0) select 0), 1];

                    // Add uniform items if any are saved
                    if ((count ((HG_GEAR_SAVED select 0) select 1)) != 0) then
                    {
                        {
                            HG_PLAYER_BOX addItemCargo [_x, 1];
                        } forEach ((HG_GEAR_SAVED select 0) select 1);
                    };
                };
            };
            case "Vest":
            {
                // Check if a vest is saved and add it to the player's box
                if (((HG_GEAR_SAVED select 1) select 0) != "") then
                {
                    HG_PLAYER_BOX addItemCargo [((HG_GEAR_SAVED select 1) select 0), 1];

                    // Add vest items if any are saved
                    if ((count ((HG_GEAR_SAVED select 1) select 1)) != 0) then
                    {
                        {
                            HG_PLAYER_BOX addItemCargo [_x, 1];
                        } forEach ((HG_GEAR_SAVED select 1) select 1);
                    };
                };
            };
            case "Backpack":
            {
                // Check if a backpack is saved and add it to the player's box
                if (((HG_GEAR_SAVED select 2) select 0) != "") then
                {
                    HG_PLAYER_BOX addBackpackCargo [((HG_GEAR_SAVED select 2) select 0), 1];

                    // Add backpack items if any are saved
                    if ((count ((HG_GEAR_SAVED select 2) select 1)) != 0) then
                    {
                        {
                            HG_PLAYER_BOX addItemCargo [_x, 1];
                        } forEach ((HG_GEAR_SAVED select 2) select 1);
                    };
                };
            };
            case "Glasses":
            {
                // Check if glasses are saved and add them to the player's box
                if ((HG_GEAR_SAVED select 3) != "") then
                {
                    HG_PLAYER_BOX addItemCargo [(HG_GEAR_SAVED select 3), 1];
                };
            };
            case "Headgear":
            {
                // Check if headgear is saved and add it to the player's box
                if ((HG_GEAR_SAVED select 4) != "") then
                {
                    HG_PLAYER_BOX addItemCargo [(HG_GEAR_SAVED select 4), 1];
                };
            };
            case "MissileLauncher":
            {
                // Check if a missile launcher is saved and add it to the player's box
                if (((HG_GEAR_SAVED select 6) select 0) != "") then
                {
                    HG_PLAYER_BOX addWeaponCargo [((HG_GEAR_SAVED select 6) select 0), 1];

                    // Add missile launcher magazines if any are saved
                    if ((count ((HG_GEAR_SAVED select 6) select 1)) != 0) then
                    {
                        {
                            HG_PLAYER_BOX addItemCargo [_x, 1];
                        } forEach ((HG_GEAR_SAVED select 6) select 1);
                    };

                    // Add any additional items associated with the missile launcher
                    {
                        if (_x != "") then
                        {
                            HG_PLAYER_BOX addItemCargo [_x, 1];
                        };
                    } forEach ((HG_GEAR_SAVED select 6) select 2);
                };
            };
            case "RocketLauncher":
            {
                // Check if a rocket launcher is saved and add it to the player's box
                if (((HG_GEAR_SAVED select 6) select 0) != "") then
                {
                    HG_PLAYER_BOX addWeaponCargo [((HG_GEAR_SAVED select 6) select 0), 1];

                    // Add rocket launcher magazines if any are saved
                    if ((count ((HG_GEAR_SAVED select 6) select 1)) != 0) then
                    {
                        {
                            HG_PLAYER_BOX addItemCargo [_x, 1];
                        } forEach ((HG_GEAR_SAVED select 6) select 1);
                    };

                    // Add any additional items associated with the rocket launcher
                    {
                        if (_x != "") then
                        {
                            HG_PLAYER_BOX addItemCargo [_x, 1];
                        };
                    } forEach ((HG_GEAR_SAVED select 6) select 2);
                };
            };
            case "Handgun":
            {
                // Check if a handgun is saved and add it to the player's box
                if (((HG_GEAR_SAVED select 7) select 0) != "") then
                {
                    HG_PLAYER_BOX addWeaponCargo [((HG_GEAR_SAVED select 7) select 0), 1];

                    // Add handgun magazines if any are saved
                    if ((count ((HG_GEAR_SAVED select 7) select 1)) != 0) then
                    {
                        {
                            HG_PLAYER_BOX addItemCargo [_x, 1];
                        } forEach ((HG_GEAR_SAVED select 7) select 1);
                    };

                    // Add any additional items associated with the handgun
                    {
                        if (_x != "") then
                        {
                            HG_PLAYER_BOX addItemCargo [_x, 1];
                        };
                    } forEach ((HG_GEAR_SAVED select 7) select 2);
                };
            };
            default
            {
                // Check if a primary weapon is saved and add it to the player's box
                if (((HG_GEAR_SAVED select 5) select 0) != "") then
                {
                    HG_PLAYER_BOX addWeaponCargo [((HG_GEAR_SAVED select 5) select 0), 1];

                    // Add primary weapon magazines if any are saved
                    if ((count ((HG_GEAR_SAVED select 5) select 1)) != 0) then
                    {
                        {
                            HG_PLAYER_BOX addItemCargo [_x, 1];
                        } forEach ((HG_GEAR_SAVED select 5) select 1);
                    };

                    // Add any additional items associated with the primary weapon
                    {
                        if (_x != "") then
                        {
                            HG_PLAYER_BOX addItemCargo [_x, 1];
                        };
                    } forEach ((HG_GEAR_SAVED select 5) select 2);
                };
            };
        };
    };
} forEach HG_GEAR_PREVIEW;

true;
