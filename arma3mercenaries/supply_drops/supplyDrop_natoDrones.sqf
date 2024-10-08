//________________  Author : [GR]GEORGE F ___________ 08.03.18 _____________ 
 
// Spawn the notification and drop logic in a scheduled environment 
[] spawn { 
    // Notify the player about the incoming supply drop 
    hint "SUPPLY DROP INCOMING AT YOUR POSITION!"; 
    playSound3D ["A3\dubbing_f\modules\supports\drop_request.ogg", player]; 
    sleep 5; 
    playSound3D ["A3\dubbing_f\modules\supports\drop_acknowledged.ogg", player]; 
    sleep 20; 
 
    // Use the player's position for the drop 
    _playerPos = getPos player; 
 
    // Play plane sound before drop 
    playMusic "Plane_sound3"; 
    sleep 10; 
    playSound3D ["A3\dubbing_f\modules\supports\drop_accomplished.ogg", player]; 
 
    _next_drop_in_sec = 5;  // Time before drop (5 seconds for testing) 
    _height_of_drop = 100;   // Drop height (50 meters for testing) 
 
    sleep _next_drop_in_sec; 
 
    // Create the parachute at the player's position 
    _parachute = createVehicle ["B_Parachute_02_F", _playerPos, [], 0, "FLY"]; 
    _parachute setPosATL [_playerPos select 0, _playerPos select 1, _height_of_drop]; 
 
    // Create the cargo box and attach it to the parachute 
    _Cargo = createVehicle ["Box_NATO_Equip_F", position _parachute, [], 0, 'NONE']; 
    _Cargo attachTo [_parachute, [0,0,0]]; 
 
    // Clear existing cargo and add custom items 
    clearWeaponCargoGlobal _Cargo; 
    clearMagazineCargoGlobal _Cargo; 
    clearItemCargoGlobal _Cargo; 
    clearBackpackCargoGlobal _Cargo; 


	_Cargo addBackpackCargoGlobal ["B_UAV_01_backpack_F", 2];
	_Cargo addBackpackCargoGlobal ["B_UAV_06_medical_backpack_F", 1];
	_Cargo addBackpackCargoGlobal ["B_UAV_06_backpack_F", 1];
	_Cargo addBackpackCargoGlobal ["B_UGV_02_Demining_backpack_F", 1];
	_Cargo addBackpackCargoGlobal ["B_UGV_02_Science_backpack_F", 1];
	_Cargo addItemCargoGlobal ["ACE_UAVBattery", 20];


 
    // Attach chemlights and smoke to the cargo for visibility 
    _Chemlight1 = "Chemlight_red" createVehicle (position _Cargo); 
    _Chemlight1 attachTo [_Cargo, [0,0.5,-0.4]]; 
    _Chemlight2 = "Chemlight_red" createVehicle (position _Cargo); 
    _Chemlight2 attachTo [_Cargo, [0,-0.5,-0.4]]; 
    _Smoke = "SmokeShellRed" createVehicle (position _Cargo); 
    _Smoke attachTo [_Cargo, [0,0,0]]; 
 
    // Handle the landing 
    waitUntil {getPos _Cargo select 2 < 4}; 
    _vel = velocity _Cargo; 
    _Cargo setVelocity _vel; 
 
    waitUntil {getPos _Cargo select 2 < 0}; 
    playSound3D ["a3\sounds_f\weapons\Flare_Gun\flaregun_1_shoot.wss", _Cargo]; 
    detach _Cargo; 
    _parachute disableCollisionWith _Cargo; 
 
    // Clean up the parachute after landing 
    _time = time + 6; 
    waitUntil {time > _time};        
    if (!isNull _parachute) then {deleteVehicle _parachute}; 
}; 
