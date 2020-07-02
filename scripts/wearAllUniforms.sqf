// https://forums.bohemia.net/forums/topic/215096-wear-what-you-want/
fnc_otherUnif = {  
  params ["_type","_return"];  
  if (_type == 0) exitWith {  
    MGI_button = _return #1; false  
  };  
  if (_type == 1 and !isnil "MGI_button" && {MGI_button == 1}) then {  
    disableSerialization;  
    _control = _return select 0;  
    _index = _return select 1;  
    private _idc = ctrlIDC _control;  
    private _text = lbText [_idc, _index];  
    private _picture = lbPicture [_idc,_index];  
    private _uniforms = ("getText (_x >> 'displayName') == _text && getNumber (_x >> 'ItemInfo' >> 'type') == 801" configClasses (configFile >> "CfgWeapons")); 
 
    if (_uniforms isEqualType [] && {!(_uniforms isEqualTo [])}) then {  
      [_idc,_text,_picture,_index,_uniforms] spawn {  
        params ["_idc","_text","_picture","_index","_uniforms",["_selectedUnif",""],"_unifConts",["_uniformObject",objNull],"_otherItems","_g0"];  
        private _currentUnif = uniform player;  
        private _currentInvent = uniformItems player;  
        _currentInvent = (_currentInvent arrayIntersect _currentInvent) apply {private _v= _x;[_x]+[{_v isEqualTo _x} count _currentInvent]}; 
        private _selectedUnif = ((_uniforms select {toLower (gettext (_x >> "picture")) splitString "\"joinString "\" == _picture}) apply {configName _x}); 
        if (_selectedUnif isEqualTo []) exitWith {};
  
        if !(pl_container isKindOf "CAManBase") then {  
          _unifConts = (everyContainer pl_container select {getNumber (configFile >> "CfgWeapons" >> _x #0 >> 'ItemInfo' >> 'type') == 801});
          _uniformObject = objNull;
          private ["_cnt","_selectedCfg"];
          scopeName "main";
          for "_i" from 0 to count _selectedUnif -1 do {
            _cnt = 0;
            _selectedCfg = _selectedUnif #_i; 
            for "_j" from 0 to _index do {  
              if (lbText [_idc,_j] == _text) then {  
                _cnt = _cnt +1;
                _uniformObject = _unifConts select {_selectedCfg == (_x #0)} select (_cnt -1) select 1;
                if (!isnil "_uniformObject" && {!isNull _uniformObject}) then {
                  _selectedUnif = _selectedCfg;
                  breakTo "main"
                };
              };
            };
            _uniformObject = objNull;
          };  
        } else {
          _selectedUnif = _selectedUnif #0;  
          _uniformObject = uniformContainer pl_container  
        }; 
 
        if (!isNull _uniformObject && !(player isUniformAllowed _selectedUnif)) then { 
           
          private _itemsAndMags = (_uniformObject call MGI_orderItsAndMgs) params ["_selectedItems","_selectedMags"]; 
           
          if !(pl_container isKindOf "CAmanbase" or isNull pl_container) then {  
            private _its = getItemCargo pl_container; 
            private _mgs = magazinesAmmoCargo pl_container; 
            private _unifItems = _unifConts apply {_x #0}; 
            private _vestConts = (everyContainer pl_container select {getNumber (configFile >> "CfgWeapons" >> _x #0 >> 'ItemInfo' >> 'type') == 701}); 
            private _vestItems = _vestConts apply {_x #0}; 
            _otherItems = +(_its #0) - _unifItems - _vestItems; 
            _otherItems = _otherItems apply {[_x,_its #1#(_its #0 find _x)]}; 
            private _conts = _unifConts + _vestConts; 
            for '_i' from 0 to count _Conts -1 do { 
              if (_conts #_i #1 == _uniformObject) exitWith { 
                _conts deleteAt _i 
              }; 
            }; 
           
            pl_container setVariable ["MGIallContForWear",[]]; 
            { 
              private _itsAndMgs = ((_x #1) call MGI_orderItsAndMgs) params ["_its","_mgs"]; 
              (pl_container getVariable "MGIallContForWear") pushBack [_x #0,_its,_mgs]; 
            } forEach _conts; 
            _g0 = pl_container; 
            clearItemCargoGlobal _g0; 
          } else { 
            _g0 = createVehicle ['WeaponHolderSimulated_Scripted', (player modelToWorld [0,1,1]), [], 0, 'CAN_COLLIDE'] 
          }; 
 
          player forceAddUniform _selectedUnif;  
          private _unif = uniformContainer player; 
          {_unif addItemCargoGlobal [_x#0,_x#1]} count _selectedItems; 
          {_unif addMagazineAmmoCargo [_x#0,_x#2,_x#1]} count _selectedMags;  
          call {  
            if (pl_container isKindOf "CAManBase") exitWith {  
              removeUniform pl_container  
            };  
            {  
              _x params ["_cont",["_it",[]],["_mag",[]]];  
              pl_container addItemCargoGlobal [_cont,1];  
              private _createdCont = pl_container call MGI_lastCont; 
              {_createdCont addItemCargoGlobal [_x#0,_x#1]} count _it; 
              {_createdCont addMagazineAmmoCargo [_x#0,_x#2,_x#1]} count _mag;  
            } forEach (pl_container getVariable "MGIallContForWear"); 
            {_g0 addItemCargoGlobal [_x #0,_x #1]} forEach _otherItems;  
          };  
           
          _g0 addItemCargoGlobal [_currentUnif,1]; 
          _lastCont = _g0 call MGI_lastCont;  
          {_lastCont addItemCargoGlobal [_x #0,_x #1]} forEach _currentInvent;  
          if (_g0 isKindOf "WeaponHolderSimulated" && {(count itemCargo _g0 + count magazineCargo _g0 + count weaponCargo _g0 + count backpackCargo _g0) == 0}) then {  
            deleteVehicle _g0  
          };  
        };  
      }; 
    };  
  MGI_button = 0; false  
  };  
}; 
 
MGI_orderItsAndMgs = compileFinal " 
  params [['_uniformObject', objNull,[objNull]]]; 
  private _items = getItemCargo _uniformObject; 
  private _mags = magazinesAmmoCargo _uniformObject; 
  private _selectedItems = (_items #0) apply {[_x,_items #1#(_items #0 find _x)]}; 
  private _selectedMags = (_mags arrayintersect _mags) apply {private _v= _x;_x+[{_v isEqualTo _x} count _mags]}; 
  [_selectedItems,_selectedMags]; 
"; 
 
MGI_lastCont = compileFinal "  
  params [['_cont',objNull]];  
  private '_lastCont';  
   _invent = (everyContainer _cont - (everyBackpack _cont apply {[typeOf _x,_x]}));  
   if !(_invent isEqualTo []) then {  
    _lastCont = _invent select (count _invent -1) select 1;  
   } else {  
    _lastCont = _cont;  
   };  
   _lastCont  
";  
  
player addEventHandler ["InventoryOpened", {  
  params ["_unit", "_container"];  
  pl_container = _container;  
  [] spawn {  
    waitUntil {!(isNull findDisplay 602)};  
    disableSerialization;  
    {(findDisplay 602 displayCtrl _x) ctrlAddEventHandler ["MouseButtonClick", "[0,_this] call fnc_otherUnif"]} forEach [632,640];  
    {(findDisplay 602 displayCtrl _x) ctrlAddEventHandler ["LBSelChanged", "[1,_this] spawn fnc_otherUnif"]} forEach [632,640];  
  };  
}];