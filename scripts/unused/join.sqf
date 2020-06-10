///////https://forums.bohemia.net/forums/topic/187333-what-ai-recruitment-scripts-do-you-use/////////
addedAction = {
  player addAction ["Join my squad",{
    params ["_player","_caller","_id"];
    _ActMenu = (_player actionParams _id) select 0;
    _player setVariable ["idThis",_id];
    if (_ActMenu isEqualTo "Join my squad") then {
      [cursorTarget] join group _player;
    } else {
      [cursorTarget] join (cursorTarget getVariable ["oldGrp",grpNull]);
    };
  },nil,0.8,false,true,"",
  "if ((!isNull cursorTarget) && {isNil {cursorTarget getVariable 'oldGrp'}}) then {
     cursorTarget setVariable ['oldGrp',if (group cursorTarget == group_this) then [{grpNull},{group cursorTarget}]]
   };
   if (!isnil {_this getvariable 'idThis'}) then {
     _this setUserActionText [(_this getvariable 'idThis'),if (group cursorTarget == group _this) then [{'Leave my squad'},{'Join my squad'}]]
   };
   side cursorTarget == playerSide
   && cursorTarget distanceSqr _this < 3"
  ];
};

call addedAction;
player addEventHandler ["respawn", {call addedAction}];