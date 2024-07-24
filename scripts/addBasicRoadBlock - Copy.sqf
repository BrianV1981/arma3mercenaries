// Made with Chat GPT 7-21-2024
private "_this";
_this = _this select 0;

// Ensure the script runs only on the server
if (!isServer) exitWith {};

// Clear existing inventory
clearMagazineCargoGlobal _this;
clearWeaponCargoGlobal _this;
clearItemCargoGlobal _this;
clearBackpackCargoGlobal _this;

// Add items to the container
_this addItemCargoGlobal ["B_UavTerminal", 1];   // 10000
_this addBackpackCargo ["B_UAV_01_backpack_F", 2];   //5000
_this addBackpackCargo ["B_Respawn_TentDome_F", 5];   // 500cr
_this addBackpackCargo ["B_Respawn_Sleeping_bag_blue_F", 10];   // 100cr
_this addBackpackCargo ["B_LegStrapBag_black_F", 5];   // 0cr
_this addItemCargoGlobal ["30Rnd_9x21_Mag_SMG_02_Tracer_Red", 50];   // 0cr
_this addItemCargoGlobal ["SMG_05_F", 5];   // 0cr
_this addItemCargoGlobal ["optic_ACO_grn_smg", 5];   // 0cr
_this addItemCargoGlobal ["V_Rangemaster_belt", 5];   // 0cr
_this addItemCargoGlobal ["U_Rangemaster", 5];   // 0cr
_this addItemCargoGlobal ["ACE_CableTie", 50];   // 0cr
_this addItemCargoGlobal ["ACE_EntrenchingTool", 5];  // 0cr
_this addItemCargoGlobal ["ACE_wirecutter", 5];       // 0cr
_this addItemCargoGlobal ["ACE_Sandbag_empty", 50];   // 10cr

// Call grad_fortifications functions to add items with their specific functions
[_this, 'ACE_ConcertinaWireCoil', 10] call grad_fortifications_fnc_addFort; // 10cr
[_this, 'Land_BagBunker_Small_F', 2] call grad_fortifications_fnc_addFort;   // 2000cr
[_this, 'Land_TentLamp_01_standing_F', 10] call grad_fortifications_fnc_addFort; // 50cr
[_this, 'Flag_US_F', 1] call grad_fortifications_fnc_addFort;                // 500cr
[_this, 'Land_WaterBarrel_F', 1] call grad_fortifications_fnc_addFort;       // 100cr
[_this, 'Land_WoodenCrate_01_F', 1] call grad_fortifications_fnc_addFort;    // 250cr
[_this, 'CargoNet_01_box_F', 2] call grad_fortifications_fnc_addFort;        // 200cr
[_this, 'ACE_medicalSupplyCrate', 1] call grad_fortifications_fnc_addFort;   // 1000cr
[_this, 'Land_PaperBox_01_small_closed_brown_food_F', 1] call grad_fortifications_fnc_addFort;   // 200cr
[_this, 'Land_PaperBox_01_small_closed_brown_F', 1] call grad_fortifications_fnc_addFort;   // 10cr
[_this, 'ACE_Box_Chemlights', 1] call grad_fortifications_fnc_addFort;       // 0cr
[_this, 'Box_Wps_F', 1] call grad_fortifications_fnc_addFort;   // 25cr
[_this, 'Land_RoadBarrier_01_F', 2] call grad_fortifications_fnc_addFort;   // 100cr
[_this, 'Land_CncBarrier_stripes_F', 8] call grad_fortifications_fnc_addFort;   // 200cr
[_this, 'Land_CncBarrierMedium4_F', 6] call grad_fortifications_fnc_addFort;    // 300cr
[_this, 'Land_BagFence_Round_F', 10] call grad_fortifications_fnc_addFort;    // 20cr
[_this, 'Land_BagFence_Long_F', 10] call grad_fortifications_fnc_addFort;    // 20cr
[_this, 'Land_CzechHedgehog_01_new_F', 8] call grad_fortifications_fnc_addFort;    // 100cr
[_this, 'Land_DragonsTeeth_01_4x2_new_F', 2] call grad_fortifications_fnc_addFort;    // 500c
