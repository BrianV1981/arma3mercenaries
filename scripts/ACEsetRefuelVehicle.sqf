///////////////////////              https://www.reddit.com/r/armadev/comments/dsyicy/setting_object_as_ace3_medical_facility_via_script/   ////////////////////
//////////////////////               https://ace3mod.com/wiki/framework/refuel-framework.html             /////////////////////////////
if (!isServer) exitWith {};

private "_this";
_this = _this select 0;
[_this, 10000] call ace_refuel_fnc_makeSource;
claimVehicleAction = _this addAction["Claim this vehicle",{[(_this select 0)] call HG_fnc_setOwner;
(_this select 0) removeAction (_this select 2)},"",0,false,false,"",'(alive player) && !dialog && player distance _target < 5'];
[_this,'ACE_Wheel'] call grad_fortifications_fnc_addFort;
[_this,'Land_CanisterFuel_F'] call grad_fortifications_fnc_addFort;