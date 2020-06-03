//http://www.armaholic.com/page.php?id=19139
//Installation / Usage:
//- Place a trigger on your map. The defined area of the trigger in the editor translates to the area a vehicle must enter to be serviced.
//- Ensure that the trigger is set to be activated repeatedly and may be activated by anyone or whomever you wish it to be activated by.
//- For land vehicles, place this in the trigger conditions
//("LandVehicle" countType thislist  > 0) && ((getpos (thislist select 0)) select 2 < 1)
//- For air vehicles, place this in the trigger condition and replace triggername with the name of the trigger:
//(getPos ((list triggername) select 0) select 2) <= 1
//- Place the following into the Trigger On Act field.
//_xhandle= (thislist select 0) execVM "x_reload.sqf";
//
//("AllVehicles" countType thislist  > 0) && ((getpos (thislist select 0)) select 2 < 1)
//will rearm UNITS as well!

_object = _this;

_type = typeOf _object;

x_reload_time_factor = 0.01;

_object setVehicleAmmo 1;

_object vehicleChat format ["Servicing %1... Please stand by...", _type];

_magazines = getArray(configFile >> "CfgVehicles" >> _type >> "magazines");

if (count _magazines > 0) then {
	_removed = [];
	{
		if (!(_x in _removed)) then {
			_object removeMagazines _x;
			_removed = _removed + [_x];
		};
	} forEach _magazines;
	{
		_object vehicleChat format ["Reloading %1", _x];
		sleep x_reload_time_factor;
		_object addMagazine _x;
	} forEach _magazines;
};

_count = count (configFile >> "CfgVehicles" >> _type >> "Turrets");

if (_count > 0) then {
	for "_i" from 0 to (_count - 1) do {
		scopeName "xx_reload2_xx";
		_config = (configFile >> "CfgVehicles" >> _type >> "Turrets") select _i;
		_magazines = getArray(_config >> "magazines");
		_removed = [];
		{
			if (!(_x in _removed)) then {
				_object removeMagazines _x;
				_removed = _removed + [_x];
			};
		} forEach _magazines;
		{
			_object vehicleChat format ["Reloading %1", _x];
			sleep x_reload_time_factor;
			_object addMagazine _x;
			sleep x_reload_time_factor;
		} forEach _magazines;
		_count_other = count (_config >> "Turrets");
		if (_count_other > 0) then {
			for "_i" from 0 to (_count_other - 1) do {
				_config2 = (_config >> "Turrets") select _i;
				_magazines = getArray(_config2 >> "magazines");
				_removed = [];
				{
					if (!(_x in _removed)) then {
						_object removeMagazines _x;
						_removed = _removed + [_x];
					};
				} forEach _magazines;
				{
					_object vehicleChat format ["Reloading %1", _x]; 
					sleep x_reload_time_factor;
					_object addMagazine _x;
					sleep x_reload_time_factor;
				} forEach _magazines;
			};
		};
	};
};
_object setVehicleAmmo 1;	// Reload turrets / drivers magazine

sleep x_reload_time_factor;
_object vehicleChat "Repairing...";
_object setDamage 0;
sleep x_reload_time_factor;
_object vehicleChat "Refueling...";
while {fuel _object < 0.99} do {
	//_object setFuel ((fuel _vehicle + 0.1) min 1);
	_object setFuel 1;
	sleep 0.01;
};
sleep x_reload_time_factor;
_object vehicleChat format ["%1 is ready...", _type];

if (true) exitWith {};
