/*
    fn_spawnSectorControlUnits_combined.sqf
    Author: BrianV1981

    This script handles spawning and managing groups for multiple sectors.
*/

if (isServer) then {
    // Define sector configurations
    private _sectors = [
        ["spawnMarker_1", "waypointMarker_1", 100],    // Sector 1 - Fort MAGA
        ["spawnMarker_2", "waypointMarker_2", 300],    // Sector 2 - Paros
        ["spawnMarker_3", "waypointMarker_3", 150],    // Sector 3 - Pefkas Military Base
        ["spawnMarker_4", "waypointMarker_4", 600],    // Sector 4 - Pyrgos
        ["spawnMarker_5", "waypointMarker_5", 400],    // Sector 5 - Charkia
        ["spawnMarker_6", "waypointMarker_6", 250],    // Sector 6 - Anthrakia
        ["spawnMarker_7", "waypointMarker_7", 300],    // Sector 7 - Nechori
        ["spawnMarker_8", "waypointMarker_8", 350],    // Sector 8 - Athira
        ["spawnMarker_9", "waypointMarker_9", 300],    // Sector 9 - Lakka Military Base
        ["spawnMarker_10", "waypointMarker_10", 250],  // Sector 10 - Rodopoli
        ["spawnMarker_11", "waypointMarker_11", 300],  // Sector 11 - Telos
        ["spawnMarker_12", "waypointMarker_12", 1000]  // Sector 12 - Gravia Airfield
    ];

    // Define group types for each faction
    private _eastGroupType = ["O_Soldier_F"];
    private _westGroupType = ["B_Soldier_F"];
    private _guerGroupType = ["I_C_Soldier_Para_1_F"];

    // Initialize group variables for each sector
    private _groups = [];

    {
        private _sector = _x;
        private _groupEast = grpNull;
        private _groupWest = grpNull;
        private _groupGuer = grpNull;

        // Store groups in array corresponding to each sector
        _groups pushBack [_groupEast, _groupWest, _groupGuer];
    } forEach _sectors;

    while {true} do {
        {
            // Extract sector details
            private _sector = _x;
            private _spawnMarkerName = _sector select 0;
            private _waypointMarkerName = _sector select 1;
            private _markerRadius = _sector select 2;

            private _spawnPos = getMarkerPos _spawnMarkerName;
            private _waypointPos = getMarkerPos _waypointMarkerName;

            // Extract group variables for the current sector
            private _groupEast = (_groups select _forEachIndex) select 0;
            private _groupWest = (_groups select _forEachIndex) select 1;
            private _groupGuer = (_groups select _forEachIndex) select 2;

            // Check for any players within the radius, filtering out AI units
            private _playersInArea = _waypointPos nearEntities ["CAManBase", _markerRadius];
            private _realPlayersInArea = _playersInArea select {isPlayer _x};

            if ((count _realPlayersInArea) > 0) then {
                // Get the name of the first player detected
                private _playerName = name (_realPlayersInArea select 0);
                private _sectorName = _spawnMarkerName;

                // Despawn all groups if players are detected
                if (!isNull _groupEast) then {
					// hint format ["'%1' detected in sector", _playerName, _sectorName];
                    // hint format ["DEBUG: Player '%1' detected in sector '%2' - Despawning EAST group", _playerName, _sectorName];
                    // diag_log format ["DEBUG: Player '%1' detected in sector '%2' - Despawning EAST group", _playerName, _sectorName];
                    { _x setDamage 1 } forEach units _groupEast;
                    _groupEast deleteGroupWhenEmpty true;
                };

                if (!isNull _groupWest) then {
					// hint format ["'%1' detected in sector", _playerName, _sectorName];
                    // hint format ["DEBUG: Player '%1' detected in sector '%2' - Despawning WEST group", _playerName, _sectorName];
                    // diag_log format ["DEBUG: Player '%1' detected in sector '%2' - Despawning WEST group", _playerName, _sectorName];
                    { _x setDamage 1 } forEach units _groupWest;
                    _groupWest deleteGroupWhenEmpty true;
                };

                if (!isNull _groupGuer) then {
					// hint format ["'%1' detected in sector", _playerName, _sectorName];
                    // hint format ["DEBUG: Player '%1' detected in sector '%2' - Despawning GUER group", _playerName, _sectorName];
                    // diag_log format ["DEBUG: Player '%1' detected in sector '%2' - Despawning GUER group", _playerName, _sectorName];
                    { _x setDamage 1 } forEach units _groupGuer;
                    _groupGuer deleteGroupWhenEmpty true;
                };
            } else {
                // Handle EAST group
                if ((count ([_waypointPos, _markerRadius, ["EAST", "entity"]] call ALIVE_fnc_getNearProfiles)) > 0) then {
                    if (isNull _groupEast || {count units _groupEast == 0}) then {
                        // hint format ["DEBUG: Spawning EAST group in sector '%1'", _spawnMarkerName];
                        // diag_log format ["DEBUG: Spawning EAST group in sector '%1'", _spawnMarkerName];
                        _groupEast = [_spawnPos, EAST, _eastGroupType] call BIS_fnc_spawnGroup;
                        if (!isNull _groupEast) then {
                            _groupEast deleteGroupWhenEmpty true; // Mark for deletion when empty
                            private _wp = _groupEast addWaypoint [_waypointPos, 0];
                            _wp setWaypointType "MOVE";
                            _wp setWaypointSpeed "FULL";
                        } else {
                            // hint format ["DEBUG: Failed to spawn EAST group in sector '%1'", _spawnMarkerName];
                            // diag_log format ["DEBUG: Failed to spawn EAST group in sector '%1'", _spawnMarkerName];
                        };
                    };
                } else {
                    if (!isNull _groupEast) then {
                        // hint format ["DEBUG: No EAST profiles nearby in sector '%1' - Deleting group", _spawnMarkerName];
                        // diag_log format ["DEBUG: No EAST profiles nearby in sector '%1' - Deleting group", _spawnMarkerName];
                        { _x setDamage 1 } forEach units _groupEast;
                        _groupEast deleteGroupWhenEmpty true;
                    };
                };

                // Handle WEST group
                if ((count ([_waypointPos, _markerRadius, ["WEST", "entity"]] call ALIVE_fnc_getNearProfiles)) > 0) then {
                    if (isNull _groupWest || {count units _groupWest == 0}) then {
                        // hint format ["DEBUG: Spawning WEST group in sector '%1'", _spawnMarkerName];
                        // diag_log format ["DEBUG: Spawning WEST group in sector '%1'", _spawnMarkerName];
                        _groupWest = [_spawnPos, WEST, _westGroupType] call BIS_fnc_spawnGroup;
                        if (!isNull _groupWest) then {
                            _groupWest deleteGroupWhenEmpty true; // Mark for deletion when empty
                            private _wp = _groupWest addWaypoint [_waypointPos, 0];
                            _wp setWaypointType "MOVE";
                            _wp setWaypointSpeed "FULL";
                        } else {
                            // hint format ["DEBUG: Failed to spawn WEST group in sector '%1'", _spawnMarkerName];
                            // diag_log format ["DEBUG: Failed to spawn WEST group in sector '%1'", _spawnMarkerName];
                        };
                    };
                } else {
                    if (!isNull _groupWest) then {
                        // hint format ["DEBUG: No WEST profiles nearby in sector '%1' - Deleting group", _spawnMarkerName];
                        // diag_log format ["DEBUG: No WEST profiles nearby in sector '%1' - Deleting group", _spawnMarkerName];
                        { _x setDamage 1 } forEach units _groupWest;
                        _groupWest deleteGroupWhenEmpty true;
                    };
                };

                // Handle GUER group
                if ((count ([_waypointPos, _markerRadius, ["GUER", "entity"]] call ALIVE_fnc_getNearProfiles)) > 0) then {
                    if (isNull _groupGuer || {count units _groupGuer == 0}) then {
                        // hint format ["DEBUG: Spawning GUER group in sector '%1'", _spawnMarkerName];
                        // diag_log format ["DEBUG: Spawning GUER group in sector '%1'", _spawnMarkerName];
                        _groupGuer = [_spawnPos, INDEPENDENT, _guerGroupType] call BIS_fnc_spawnGroup;
                        if (!isNull _groupGuer) then {
                            _groupGuer deleteGroupWhenEmpty true; // Mark for deletion when empty
                            private _wp = _groupGuer addWaypoint [_waypointPos, 0];
                            _wp setWaypointType "MOVE";
                            _wp setWaypointSpeed "FULL";
                        } else {
                            // hint format ["DEBUG: Failed to spawn GUER group in sector '%1'", _spawnMarkerName];
                            // diag_log format ["DEBUG: Failed to spawn GUER group in sector '%1'", _spawnMarkerName];
                        };
                    };
                } else {
                    if (!isNull _groupGuer) then {
                        // hint format ["DEBUG: No GUER profiles nearby in sector '%1' - Deleting group", _spawnMarkerName];
                        // diag_log format ["DEBUG: No GUER profiles nearby in sector '%1' - Deleting group", _spawnMarkerName];
                        { _x setDamage 1 } forEach units _groupGuer;
                        _groupGuer deleteGroupWhenEmpty true;
                    };
                };
            };

            // Update group variables in array
            (_groups select _forEachIndex) set [0, _groupEast];
            (_groups select _forEachIndex) set [1, _groupWest];
            (_groups select _forEachIndex) set [2, _groupGuer];

        } forEach _sectors;

        sleep 120;
    };
};
