// arma3mercenaries_salvagingInit.sqf
// Author: BrianV1981

// Description: 
// Initializes the event handler to add the ACE interaction to destroyed vehicles.

// Define the list of vehicle types that can be salvaged
private _salvageableVehicles = [
    // Helicopters
    "O_Heli_Light_02_F",
    "O_Heli_Light_02_unarmed_F",
    "O_Heli_Light_02_v2_F",
    "O_Heli_Attack_02_F",
    "O_Heli_Attack_02_black_F",
    "O_Heli_Transport_04_F",
    "O_Heli_Transport_04_ammo_F",
    "O_Heli_Transport_04_bench_F",
    "O_Heli_Transport_04_box_F",
    "O_Heli_Transport_04_covered_F",
    "O_Heli_Transport_04_fuel_F",
    "O_Heli_Transport_04_medevac_F",
    "O_Heli_Transport_04_repair_F",
    "O_Heli_Transport_04_black_F",
    "O_Heli_Transport_04_ammo_black_F",
    "O_Heli_Transport_04_bench_black_F",
    "O_Heli_Transport_04_box_black_F",
    "O_Heli_Transport_04_covered_black_F",
    "O_Heli_Transport_04_fuel_black_F",
    "O_Heli_Transport_04_medevac_black_F",
    "O_Heli_Transport_04_repair_black_F",
    "O_Plane_CAS_02_F",
    "O_Plane_Fighter_02_F",
    "O_Plane_Fighter_02_Stealth_F",

    // Tanks and APCs
    "O_APC_Tracked_02_cannon_F",
    "O_APC_Tracked_02_AA_F",
    "O_MBT_02_cannon_F",
    "O_MBT_02_arty_F",
    "O_APC_Wheeled_02_rcws_F",
    "O_T_APC_Tracked_02_cannon_ghex_F",
    "O_T_APC_Tracked_02_AA_ghex_F",
    "O_T_APC_Wheeled_02_rcws_ghex_F",
    "O_T_MBT_02_cannon_ghex_F",
    "O_T_MBT_02_arty_ghex_F",

    // Drones and UGVs
    "O_UAV_01_F",
    "O_UAV_02_F",
    "O_UAV_02_CAS_F",
    "O_UGV_01_F",
    "O_UGV_01_rcws_F",
    "O_T_UGV_01_ghex_F",
    "O_T_UGV_01_rcws_ghex_F",
    "O_T_UAV_04_CAS_F",

    // MRAPs and Light Vehicles
    "O_MRAP_02_F",
    "O_MRAP_02_hmg_F",
    "O_MRAP_02_gmg_F",
    "O_G_Offroad_01_F",
    "O_G_Offroad_01_armed_F",
    "O_Quadbike_01_F",
    "O_G_Quadbike_01_F",
    "O_Truck_02_covered_F",
    "O_Truck_02_transport_F",
    "O_G_Van_01_transport_F",
    "O_Truck_03_transport_F",
    "O_Truck_03_covered_F",
    "O_Truck_03_device_F",
    "O_T_LSV_02_armed_F",
    "O_T_LSV_02_armed_viper_F",
    "O_T_LSV_02_unarmed_F",
    "O_T_LSV_02_unarmed_viper_F",
    "O_LSV_02_armed_F",
    "O_LSV_02_armed_viper_F",
    "O_LSV_02_unarmed_F",
    "O_LSV_02_unarmed_viper_F",
    "O_T_LSV_02_armed_black_F",
    "O_T_LSV_02_armed_ghex_F",
    "O_T_LSV_02_armed_arid_F",
    "O_T_LSV_02_unarmed_black_F",
    "O_T_LSV_02_unarmed_ghex_F",
    "O_T_LSV_02_unarmed_arid_F",
    "O_LSV_02_armed_black_F",
    "O_LSV_02_armed_ghex_F",
    "O_LSV_02_armed_arid_F",
    "O_LSV_02_unarmed_black_F",
    "O_LSV_02_unarmed_ghex_F",
    "O_LSV_02_unarmed_arid_F",
    "O_T_MRAP_02_ghex_F",
    "O_T_MRAP_02_hmg_ghex_F",
    "O_T_MRAP_02_gmg_ghex_F",
    "O_T_Quadbike_01_ghex_F",
    "O_T_Truck_03_transport_ghex_F",
    "O_T_Truck_03_covered_ghex_F",
    "O_T_Truck_03_device_ghex_F",

    // Boats
    "O_Boat_Armed_01_hmg_F",
    "O_Boat_Transport_01_F",
    "O_Lifeboat",
    "O_G_Boat_Transport_01_F",
    "O_T_Boat_Armed_01_hmg_F",
    "O_T_Boat_Transport_01_F",
    "O_T_Lifeboat",
    "O_G_Boat_Transport_02_F",
    "O_SDV_01_F",

    // Repair and Support Vehicles
    "O_G_Offroad_01_repair_F",
    "O_Truck_02_box_F",
    "O_Truck_02_medical_F",
    "O_Truck_02_Ammo_F",
    "O_Truck_02_fuel_F",
    "O_G_Van_01_fuel_F",
    "O_Truck_03_repair_F",
    "O_Truck_03_ammo_F",
    "O_Truck_03_fuel_F",
    "O_Truck_03_medical_F",
    "Land_Pod_Heli_Transport_04_bench_F",
    "Land_Pod_Heli_Transport_04_covered_F",
    "Land_Pod_Heli_Transport_04_medevac_F",
    "Land_Pod_Heli_Transport_04_bench_black_F",
    "Land_Pod_Heli_Transport_04_covered_black_F",
    "Land_Pod_Heli_Transport_04_medevac_black_F",
    "O_T_Truck_03_repair_ghex_F",
    "O_T_Truck_03_ammo_ghex_F",
    "O_T_Truck_03_fuel_ghex_F",
    "O_T_Truck_03_medical_ghex_F"
];

// Add the "Killed" event handler to all vehicles after they are created
{
    _x addEventHandler ["Killed", {
        params ["_vehicle", "_killer"];
        
        // Only apply the interaction if the vehicle is in the list of salvageable vehicles
        if (typeOf _vehicle in _salvageableVehicles) then {
            [_vehicle] remoteExec ["arma3mercenaries_fnc_addSalvageInteraction", 0, true];
            systemChat format ["Salvage interaction added to vehicle: %1", typeOf _vehicle];
        };
    }];
} forEach vehicles;
