/*
    arma3mercenaries_fn_spawnSectorControlUnit_1.sqf
    Author: BrianV1981
    Description:
    This script dynamically manages the spawning and despawning of military groups based on the proximity of ALiVE-mod virtual entities to the waypoint marker, which serves as the center for these checks. The script has been updated to perform entity checks from the waypoint marker instead of the spawn marker. This change aims to enhance tactical realism by focusing actions around key points of interest or engagement areas rather than the initial spawn locations of the units.

    The script operates by continuously checking for virtual entities within a 1000-meter radius centered on the waypoint marker (`waypointMarker_8`). It evaluates the presence of entities affiliated with different factions (EAST, WEST, and GUER) and manages group activities accordingly. Each group that is spawned moves from their designated spawn point (`spawnMarker_8`) towards the waypoint, reacting based on the strategic importance of the waypoint location.

    Installation:
    1. Place this script in your mission folder under the following path:
       `arma3mercenaries\sector_control\arma3mercenaries_fn_spawnSectorControlUnit_1.sqf`
    
    2. In your mission's `init.sqf` or `serverInit.sqf`, execute the script with the following command:
       `execVM "arma3mercenaries\sector_control\arma3mercenaries_fn_spawnSectorControlUnit_1.sqf";`
    
    3. Ensure that the markers defined by `spawnMarker_8` and `waypointMarker_8` exist in your mission. The script utilizes `waypointMarker_8` as the focal point for checking the presence of ALiVE-mod virtual entities, influencing the dynamic control of spawning and despawning groups.
    
    4. Test your mission to ensure that the groups are spawning and despawning correctly based on the strategic dynamics around the waypoint marker. Monitor the group's movement to ensure they respond effectively to the situation around the waypoint.
*/


if (isServer) then {
    private _spawnMarkerName = "spawnMarker_8"; 
    private _waypointMarkerName = "waypointMarker_8"; 
    private _spawnPos = getMarkerPos _spawnMarkerName; 
    private _waypointPos = getMarkerPos _waypointMarkerName; 
    private _markerRadius = 250; // Radius for checking virtual entity presence

    private _eastGroupType = ["O_Soldier_F"]; 
    private _westGroupType = ["B_Soldier_F"]; 
    private _guerGroupType = ["I_C_Soldier_Para_1_F"]; 

    private _groupEast = grpNull;
    private _groupWest = grpNull;
    private _groupGuer = grpNull;

    while {true} do {
        // Check for any players within the radius
        private _playersInArea = _waypointPos nearEntities ["CAManBase", _markerRadius];

        if ((count _playersInArea) > 0) then {
            // Despawn all groups if players are detected
            if (!isNull _groupEast && {count units _groupEast > 0}) then {
                ////hint "Removing OPFOR group due to player proximity.";
                { _x setDamage 1 } forEach units _groupEast;
                deleteGroup _groupEast;
                _groupEast = grpNull;
            };

            if (!isNull _groupWest && {count units _groupWest > 0}) then {
                ////hint "Removing BLUFOR group due to player proximity.";
                { _x setDamage 1 } forEach units _groupWest;
                deleteGroup _groupWest;
                _groupWest = grpNull;
            };

            if (!isNull _groupGuer && {count units _groupGuer > 0}) then {
                ////hint "Removing INDEPENDENT group due to player proximity.";
                { _x setDamage 1 } forEach units _groupGuer;
                deleteGroup _groupGuer;
                _groupGuer = grpNull;
            };

        } else {
            // Handle EAST group
            if ((count ([_waypointPos, _markerRadius, ["EAST", "entity"]] call ALIVE_fnc_getNearProfiles)) > 0) then {
                if (isNull _groupEast || {count units _groupEast == 0}) then {
                    ////hint "Spawning OPFOR group.";
                    _groupEast = [_spawnPos, EAST, _eastGroupType] call BIS_fnc_spawnGroup;
                    if (!isNull _groupEast) then {
                        private _wp = _groupEast addWaypoint [_waypointPos, 0];
                        _wp setWaypointType "MOVE";
                        _wp setWaypointSpeed "FULL";
                    } else {
                        ////hint "Failed to create OPFOR group!";
                    };
                };
            } else {
                if (!isNull _groupEast && {count units _groupEast > 0}) then {
                    ////hint "Removing OPFOR group.";
                    { _x setDamage 1 } forEach units _groupEast;
                    deleteGroup _groupEast;
                    _groupEast = grpNull;
                };
            };

            // Handle WEST group
            if ((count ([_waypointPos, _markerRadius, ["WEST", "entity"]] call ALIVE_fnc_getNearProfiles)) > 0) then {
                if (isNull _groupWest || {count units _groupWest == 0}) then {
                    ////hint "Spawning BLUFOR group.";
                    _groupWest = [_spawnPos, WEST, _westGroupType] call BIS_fnc_spawnGroup;
                    if (!isNull _groupWest) then {
                        private _wp = _groupWest addWaypoint [_waypointPos, 0];
                        _wp setWaypointType "MOVE";
                        _wp setWaypointSpeed "FULL";
                    } else {
                        ////hint "Failed to create BLUFOR group!";
                    };
                };
            } else {
                if (!isNull _groupWest && {count units _groupWest > 0}) then {
                    ////hint "Removing BLUFOR group.";
                    { _x setDamage 1 } forEach units _groupWest;
                    deleteGroup _groupWest;
                    _groupWest = grpNull;
                };
            };

            // Handle GUER group
            if ((count ([_waypointPos, _markerRadius, ["GUER", "entity"]] call ALIVE_fnc_getNearProfiles)) > 0) then {
                if (isNull _groupGuer || {count units _groupGuer == 0}) then {
                    ////hint "Spawning INDEPENDENT group.";
                    _groupGuer = [_spawnPos, INDEPENDENT, _guerGroupType] call BIS_fnc_spawnGroup;
                    if (!isNull _groupGuer) then {
                        private _wp = _groupGuer addWaypoint [_waypointPos, 0];
                        _wp setWaypointType "MOVE";
                        _wp setWaypointSpeed "FULL";
                    } else {
                        ////hint "Failed to create INDEPENDENT group!";
                    };
                };
            } else {
                if (!isNull _groupGuer && {count units _groupGuer > 0}) then {
                    ////hint "Removing INDEPENDENT group.";
                    { _x setDamage 1 } forEach units _groupGuer;
                    deleteGroup _groupGuer;
                    _groupGuer = grpNull;
                };
            };
        };

        sleep 30;
    };
};
