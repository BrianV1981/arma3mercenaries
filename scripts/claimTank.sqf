private "_this";
_this = _this select 0;
claimVehicleAction = _this addAction["Claim this vehicle",{[(_this select 0)] call HG_fnc_setOwner;
(_this select 0) removeAction (_this select 2)},"",0,false,false,"",'(alive player) && !dialog && player distance _target < 5'];
[_this,'ACE_Track'] call grad_fortifications_fnc_addFort;
[_this,'Land_CanisterFuel_F'] call grad_fortifications_fnc_addFort;