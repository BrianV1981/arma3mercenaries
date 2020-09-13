private "_this";
_this = _this select 0;
flipVehicleAction = _this addAction["Flip vehicle",{
 params ["_vehicle", "_caller", "_actionId", "_arguments"];
 _normalVec = surfaceNormal getPos _vehicle;
 if (!local _vehicle) then {
 [_vehicle,_normalVec] remoteExec ["setVectorUp",_vehicle];
 } else {
 _vehicle setVectorUp _normalVec;
 };
 _vehicle setPosATL [getPosATL _vehicle select 0, getPosATL _vehicle select 1, 0];
 },[],1.5,true,true,"","(vectorUp _target) vectorCos (surfaceNormal getPos _target) <0.5",5];