class Extended_Init_EventHandlers {
 class Car {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\claimCar.sqf')";
 };
 class Truck {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\claimTruck.sqf')";
 };
 class Tank {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\claimTank.sqf')";
 };
 class Ship {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\claimShip.sqf')";
 };
 class Submarine {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\claimVehicle.sqf')";
 };
 class Air {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\claimVehicle.sqf')";
 };
 class StaticWeapon {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\claimStaticWeapon.sqf')";
 };
 //////repair vehicles//////
 class gm_ge_army_fuchsa0_engineer {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetRepairVehicle.sqf');";
 };
 class gm_dk_army_m113a1dk_engineer {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetRepairVehicle.sqf')";
 };
 class gm_gc_army_ural4320_repair {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetRepairVehicle.sqf')";
 };
 class gm_gc_bgs_ural4320_repair {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetRepairVehicle.sqf')";
 };
 class gm_pl_army_ural4320_repair {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetRepairVehicle.sqf')";
 };
 class gm_ge_army_u1300l_repair {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetRepairVehicle.sqf')";
 };
 
 ////////rearm vehicles////////
 class gm_gc_army_ural4320_reammo {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetAmmoVehicle.sqf')";
 };
 class gm_gc_bgs_ural4320_reammo {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetAmmoVehicle.sqf')";
 };
 class gm_pl_army_ural4320_reammo {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetAmmoVehicle.sqf')";
 };
 class gm_ge_army_kat1_451_reammo {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetAmmoVehicle.sqf')";
 };
 
 //////refuel vehicles///////////
  class gm_gc_army_ural375d_refuel {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetRefuelVehicle.sqf')";
 };
 class gm_gc_bgs_ural375d_refuel {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetRefuelVehicle.sqf')";
 };
 class gm_pl_army_ural375d_refuel {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetRefuelVehicle.sqf')";
 };
 class gm_ge_army_kat1_451_refuel {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetRefuelVehicle.sqf')";
 };
 
 //////repair, rearm, refuel vehicles///////////
  class gm_dk_army_bpz2a0 {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetRefuelVehicle.sqf');_this call (compile preprocessFileLineNumbers 'scripts\ACEsetAmmoVehicle.sqf');_this call (compile preprocessFileLineNumbers 'scripts\ACEsetRepairVehicle.sqf')";
 };
 class gm_ge_army_bpz2a0 {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\ACEsetRefuelVehicle.sqf');_this call (compile preprocessFileLineNumbers 'scripts\ACEsetAmmoVehicle.sqf');_this call (compile preprocessFileLineNumbers 'scripts\ACEsetRepairVehicle.sqf')";
 };

///FOBs in a box
 class I_EAF_supplyCrate_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\addBasicFOB.sqf')";
 };
 class I_E_CargoNet_01_ammo_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\addAdvancedFOB.sqf')";
 };
 class Box_EAF_Equip_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\addBasicRoadBlock.sqf')";
 };
 
 ///mobile spawn points
 class B_T_APC_Tracked_01_CRV_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
 class B_APC_Tracked_01_CRV_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
  class B_T_VTOL_01_armed_olive_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
 class B_T_VTOL_01_armed_blue_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
 class B_T_VTOL_01_armed_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
 class B_T_VTOL_01_infantry_olive_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
 class B_T_VTOL_01_infantry_blue_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
 class B_T_VTOL_01_infantry_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
 class I_Heli_Transport_02_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
 class B_Heli_Transport_03_unarmed_green_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
 class B_Heli_Transport_03_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
 class B_Heli_Transport_03_black_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
 class O_Heli_Transport_04_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
 
 class B_Slingload_01_Medevac_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
 class Land_Pod_Heli_Transport_04_medevac_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
 class I_E_Van_02_medevac_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
 class B_Truck_01_medical_F {
  init = "_this call (compile preprocessFileLineNumbers 'scripts\mobileSpawnPoints.sqf')";
 };
};