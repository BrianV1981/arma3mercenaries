hint "Emergency HALO drop will be available in 5 minutes!";
sleep 300;
hint "Emergency HALO drop is available!";
MGI_compHALO = compileFinal "
  _plyr = _this;
  MGI_fnc_orient = {
    _obj = _this select 0;
    _p = _this select 1;
    _obj setVectorDirAndUp [
      [ 0,cos _p,sin _p],
      [[0,-sin _p,cos _p],0] call BIS_fnc_rotateVector2D
    ]
  };
  _plyr setVariable ['bpk',unitBackpack _plyr];
  if (backpack _plyr != '') then {
    _whs = createVehicle ['WeaponHolderSimulated_Scripted',getpos _plyr,[],0,'can_collide'];
    _plyr action ['DropBag', _whs, typeOf (_plyr getVariable 'bpk')];
    ['EHid','onEachFrame', {
      params ['_plyr','_whs'];
      if (backpack _plyr != 'B_parachute') then {
        _plyr action ['dropBag', _whs, typeOf (_plyr getVariable 'bpk')];
        _plyr action ['AddBag', _whs, 'B_Parachute']
      };
      call{
        if (stance _plyr == 'UNDEFINED') exitWith {
          _whs attachTo [_plyr,[-0.1,-0.05,-0.7],'leaning_axis'];
          [_whs,-180]  call MGI_fnc_orient
        };
        if (stance _plyr != 'UNDEFINED') exitWith {
          _whs  attachTo [_plyr,[-0.1,0.75,-0.05],'leaning_axis'];
          [_whs,-90] call MGI_fnc_orient
        };
      };
      if (isNil {_plyr getVariable ['bpk',nil]}) then {
        ['EHid', 'onEachFrame'] call BIS_fnc_removeStackedEventHandler
      };
    },[_plyr,_whs] ] call BIS_fnc_addStackedEventHandler
  };
";


0 = [] spawn {
  params [["_jump_alt",2000,[0]],["_jump_safety",90,[0]]];
  openmap [true,false];
  titleText["Select Map Position", "PLAIN"];

  ["Jump","onMapSingleClick", {
    0 cutText ["","black",0.01,true];
    params ["","_pos","","","_jump_alt","_jump_safety","_MGI_forSquad"];
      [player,_forEachIndex,_pos,_jump_alt,_jump_safety] spawn {
        params ["_unit","_index","_pos","_jump_alt","_jump_safety"];
        private ["_bpk","_bpktype","_whs","_para"];
 
         _unit call MGI_compHALO;

        uisleep 2;
        _unit allowDamage false;
        _unit setPos [(_pos select 0),(_pos select 1), (_jump_alt max 200)];
        waitUntil {(getpos _unit select 2) > _jump_safety -50};
        uisleep 0.2;

          _bpk = _unit getVariable "bpk";
          _bpktype = typeOf (_unit getVariable "bpk");
          _whs = objectParent _bpk;
          _unit addBackpackGlobal "B_parachute";
 
        0 cutText ["","black in",1,true];
        waitUntil {(getpos _unit select 2) < _jump_safety or  !isnull objectParent player};

          _unit allowDamage true;
          if (!isTouchingGround _unit) then {
          _unit action ["OpenParachute", _unit];
         };
        _para = objectParent _unit;
        waitUntil {!isnull _para};
        _para allowDamage false;
        waitUntil {sleep 0.5; (isTouchingGround _unit && isNull _para) or surfaceIsWater (getpos _unit) or !alive _unit};

          _unit setVariable ["bpk",nil];
          waitUntil {isNull _para};
          deleteVehicle _para;
          sleep 0.5;
          detach _whs;
          if (!isNull _whs) then {
            _unit action ["AddBag",objectParent _bpk, _bpktype];
            sleep 2;
            deleteVehicle _whs;
          };
      };

    openmap [false,false];
    ["Jump","onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;
    false
  },  [_jump_alt,_jump_safety]] call bis_fnc_addStackedEventHandler;
};