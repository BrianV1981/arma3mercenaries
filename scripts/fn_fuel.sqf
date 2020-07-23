/*
	Author: Shiragami aka Skullfox

	Description:
	Changes the fuel consumption of the vehicle

	Parameter(s):
	0: Vehicle

	Returns:
	nothing
*/

_vehicle = _this;

[_vehicle ] spawn{

_vehicle = _this select 0;

while { alive _vehicle} do {

    _tick = _vehicle getVariable ["fox_fuel_settings_tick", 1.5 ];

		if (isengineon _vehicle) then {

    comment "Data from config";
    _rate = _vehicle getVariable ["fox_fuel_settings_rate", 0.00010 ];
    _loadMultiplier = _vehicle getVariable ["fox_fuel_settings_loadMultiplier", 0.00005 ];
    _tooFastRate =_vehicle getVariable ["fox_fuel_settings_tooFastRate", 0.00015 ];
    _tooSlowRate = _vehicle getVariable ["fox_fuel_settings_tooSlowRate", 0.00005 ];


    _crew = count( crew _vehicle);
		_load = _crew * _loadMultiplier;

		_speed = speed _vehicle;

		_speedMult = 0;

		if(_speed < 50 ) then { _speedMult = _tooSlowRate; };
		if(_speed > 75 ) then { _speedMult = _tooFastRate; };

		_realLoad = _rate + _load + _speedMult;

		if (!isNil "FOX_FUEL_DEV") then {
			hint format["Vehicle : %1 \n Crew : %2 \n Load : %3 \n Rate : %4 \n Speedload : %5 \n Realload : %6",_vehicle,_crew,_load,_rate,_speedMult,_realLoad];
      diag_log format ["###FOX_FUEL_DEV DATA: _rate: %1  - _loadMultiplier: %2 - _tooFastRate: %3 - _tooSlowRate: %4 - _tick: %5", _rate,_loadMultiplier,_tooFastRate,_tooSlowRate,_tick ];
		};

		_vehicle setFuel ( (fuel _vehicle) - _realLoad);

		};

		sleep _tick;

	};

};
