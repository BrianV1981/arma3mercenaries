if (isNil "radioSoundBlockTime") then { 
    radioSoundBlockTime = 0; 
}; 

[] spawn { 
    private _currentTime = time; 

    if (_currentTime > radioSoundBlockTime) then { 
        radioSoundBlockTime = _currentTime + 120; 
        playSound3D ["a3\dubbing_f\modules\supports\transport_request.ogg", player]; 
        private _randomRadioDelay = 5 + random 5; 
        sleep _randomRadioDelay; 
        playSound3D ["a3\dubbing_f\modules\supports\transport_acknowledged.ogg", player]; 
    }; 

    private _randomTransportTime = 5 + random 5; 
    sleep _randomTransportTime; 

    private _playerPos = getPos player; 
    private _direction = random 360; 
    private _startPos = _playerPos getPos [1000, _direction]; 

    private _blackfish = createVehicle ["B_T_VTOL_01_armed_F", _startPos, [], 0, "FLY"]; 
    _blackfish allowDamage false; 
    _blackfish animateDoor ['Door_1_source', 1]; 

    private _group = createGroup [west, true]; 
    _group setVariable ["Vcm_Disable", true, true]; 
    _group setVariable ["ALiVE_disableDynamicSimulation", true, true]; 

    private _pilot = _group createUnit ["B_HeliPilot_F", _startPos, [], 0, "FORM"]; 
    _pilot moveInDriver _blackfish; 

    private _gunner1 = _group createUnit ["B_crew_F", _startPos, [], 0, "FORM"]; 
    private _gunner2 = _group createUnit ["B_crew_F", _startPos, [], 0, "FORM"]; 
    private _gunner3 = _group createUnit ["B_crew_F", _startPos, [], 0, "FORM"]; 

    _gunner1 moveInTurret [_blackfish, [0]];  
    _gunner2 moveInTurret [_blackfish, [1]];  
    _gunner3 moveInTurret [_blackfish, [2]];  

    {    
        _x setVariable ["ALiVE_disableDynamicSimulation", true, true];    
        _x setVariable ["Vcm_Disable", true, true];    
    } forEach [_pilot, _gunner1, _gunner2, _gunner3]; 

    private _endPos = _playerPos getPos [2000, _direction]; 

    private _wp1 = _group addWaypoint [_playerPos, 0]; 
    _wp1 setWaypointType "MOVE"; 
    _wp1 setWaypointSpeed "FULL";  
    _wp1 setWaypointBehaviour "CARELESS";  

    private _wp2 = _group addWaypoint [_endPos, 0]; 
    _wp2 setWaypointType "MOVE"; 
    _wp2 setWaypointSpeed "FULL";  
    _wp2 setWaypointBehaviour "COMBAT";  

    [_group] spawn {
        params ["_group"]; 

        private _wp1Index = currentWaypoint _group; 
        
        waitUntil {
            currentWaypoint _group > _wp1Index 
        };
        
        playSound3D ["a3\dubbing_f\modules\supports\transport_accomplished.ogg", player];

        private _parachute = createVehicle ["Steerable_Parachute_F", [0, 0, 0], [], 0, "FLY"];
        
        if (!isNull _parachute) then {
            _parachute setPos (player modelToWorld [0, 0, 50]);
            private _playerUID = getPlayerUID player;
            private _uniqueUnitID = str (diag_tickTime + random 1000);
            private _aiUnitID = format ["arma3mercenaries_aiUnit_%1_%2", _uniqueUnitID, _playerUID];
            private _groupID = format ["arma3mercenaries_groupID_%1", _playerUID];

            private _unit = "I_G_Soldier_LAT_F" createUnit [position _parachute, (group player), format [
                "this setVariable ['arma3mercenaries_aiUnit', '%1', true];
                this setVariable ['arma3mercenaries_groupID', '%2', true];
                this setVariable ['Vcm_Disable', true, true];
                (group this) setVariable ['Vcm_Disable', true];
                (group this) setVariable ['ALiVE_disableDynamicSimulation', true, true];
                this moveInDriver _parachute;", _aiUnitID, _groupID], 0.5, 'PRIVATE'];
        };
    };

    sleep 30; 

    _blackfish animateDoor ['Door_1_source', 0];  
    _blackfish allowDamage true; 

    sleep 30;

    deleteVehicle _blackfish;
    {deleteVehicle _x} forEach units _group;  
};
