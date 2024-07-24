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
};