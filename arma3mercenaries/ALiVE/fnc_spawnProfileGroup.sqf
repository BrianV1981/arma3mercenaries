/*

// Define your base spawn position and the random radius range
private _basePos = getMarkerPos "spawnMarker_1";
private _minRadius = 800;
private _maxRadius = 1200;

// Use BIS_fnc_findSafePos to find a safe random position within the specified range
private _randomPos = [_basePos, _minRadius, _maxRadius, 3, 0, 0.2, 0, [], [getMarkerPos "spawnMarker_1", getMarkerPos "spawnMarker_1"]] call BIS_fnc_findSafePos;

// Define an array of possible groups
private _groupArray = [
    "O_TankPlatoon_Heavy",    // Heavy tank platoon
    "OIA_MechInfSquad",       // Mechanized infantry platoon
    "OI_ViperTeam",     // Infantry squad
    "OIA_MechInf_AT",           // Anti-tank team
    "OIA_MechInf_AA"                // Anti-Air team
];

// Select a random group from the array
private _randomGroup = _groupArray select floor random count _groupArray;

// Spawn the group at the safe random position
[_randomPos, false, getMarkerPos "waypointMarker_1", _randomGroup, "OPF_F"] call ALIVE_spawnProfileGroup;

*/


/*
Filename:  fnc_spawnProfileGroup.sqf 
Locality: Runs on server
Description: Spawns a group faction and sends them to a waypoint.
 
Params:
* _spawnPosition  -> Array. Position to spawn group
* _spawnExactLocation -> Boolean. Set to false if you want to spawn it in an exact position.
* _destinationPosition -> Array. Position of waypoint destination.
* _group -> String. CfgGroups name 
* _faction -> String. CfgGroups faction
 
Optional Params:
* _debug -> Boolean. Enable debug output
* _waypointPlacementRadius -> Scalar. Random placement radius. http://community.bistudio.com/wiki/Mission_Editor:_Waypoints#Placement_Radius
* _waypointType -> String. Type of waypoint. NOTE: at the moment only MOVE is supported by the profiler. http://community.bistudio.com/wiki/Mission_Editor:_Waypoints#Select_Type
* _waypointMovement -> String. Speed of waypoint movement. http://community.bistudio.com/wiki/Mission_Editor:_Waypoints#Speed
* _waypointCompletionRadius -> Scalar. Completion radius of waypoint. http://community.bistudio.com/wiki/Mission_Editor:_Waypoints#Completion_Radius
* _waypointTimeoutCounters -> Array.  Timeout counters. http://community.bistudio.com/wiki/Mission_Editor:_Waypoints#Timeout_Counters
* _waypointFormation -> String. Formation type. http://community.bistudio.com/wiki/Mission_Editor:_Waypoints#Formation
* _waypointCombatMode -> String. Combat mode. http://community.bistudio.com/wiki/Mission_Editor:_Waypoints#Combat_Mode
* _waypointBehaviour -> String. Behaviour type. http://community.bistudio.com/wiki/Mission_Editor:_Waypoints#Behaviour
* _waypointDescription -> String. Description. http://community.bistudio.com/wiki/Mission_Editor:_Waypoints#Description
* 
 
Usage:
 
init.sqf:
* ALIVE_spawnProfileGroup = compile (preprocessFileLineNumbers "fnc_spawnProfileGroup.sqf");
 
Create a trigger or call in script:
 
Syntax: [array, boolean, array, string, string, boolean, scalar, string, string, scalar, array, string, string, string, string] call ALIVE_spawnProfileGroup;
 
Example(s):
* [getMarkerPos "nmeGrp01_spawn_pos", false, getMarkerPos "nmeGrp01_dest_pos", "10_men_ME", "caf_ag_me"] call ALIVE_spawnProfileGroup;
* [getMarkerPos "nmeGrp01_spawn_pos", false, getMarkerPos "nmeGrp01_dest_pos", "10_men_ME", "caf_ag_me", true, 0, "Move", "Full", 0, [0,0,0], "Wedge", "Red", "Aware", ""] call ALIVE_spawnProfileGroup;
 
Credits: ALiVE functions: The ALiVE team. Web: http://www.alivemod.com
* Script Created by [KH]Jman
* Creation date: 06/02/2014
* Email: jman@kellys-heroes.eu
* Web: http://www.kellys-heroes.eu
*/
 
// ====================================================================================
if (!isServer) exitWith {};
// ====================================================================================
 
// SCOPE -------------------------------------------------------------------------------------
private["_spawnposition","_spawnExactLocation","_destinationPosition","_faction","_profile","_profiles","_profileWaypoint","_group","_debug",
"_waypointPlacementRadius","_waypointType","_waypointMovement","_waypointCompletionRadius","_waypointTimeoutCounters","_waypointFormation",
"_waypointCombatMode","_waypointBehaviour","_waypointDescription","_groupName", "_groupName","_config"];
_config = [];
// SCOPE -------------------------------------------------------------------------------------
 
waitUntil {!isNil "ALIVE_profileSystemInit"};
 
// PARMS -------------------------------------------------------------------------------------
_spawnPosition = _this select 0;
_spawnExactLocation = _this select 1;  
_destinationPosition = _this select 2;
_group = _this select 3;
_faction = _this select 4;
_debug = if(count _this > 5) then {_this select 5} else {false};
_waypointPlacementRadius = if(count _this > 6) then {_this select 6} else {0};
_waypointType = if(count _this > 7) then {_this select 7} else {"Move"};
_waypointMovement = if(count _this > 8) then {_this select 8} else {"Full"};
_waypointCompletionRadius = if(count _this > 9) then {_this select 9} else {0};
_waypointTimeoutCounters  = if(count _this > 10) then {_this select 10} else {[0,0,0]};
_waypointFormation = if(count _this > 11) then {_this select 11} else {"Wedge"};
_waypointCombatMode = if(count _this > 12) then {_this select 12} else {"Red"};
_waypointBehaviour = if(count _this > 13) then {_this select 13} else {"Aware"};
_waypointDescription = if(count _this > 14) then {_this select 14} else {""};
// PARMS -------------------------------------------------------------------------------------
 
// DEBUG -------------------------------------------------------------------------------------
if(_debug) then {
 ["ALIVE_spawnProfileGroup -> _spawnPosition: %1, _spawnExactLocation: %2, _destinationPosition: %3, _group: %4, _faction: %5, 
 _debug: %6, _waypointPlacementRadius: %7, _waypointType: %8, _waypointMovement: %9, _waypointCompletionRadius: %10, 
 _waypointTimeoutCounters: %11, _waypointFormation: %12, _waypointCombatMode: %13, _waypointBehaviour: %14, 
 _waypointDescription: %15,", _spawnPosition,_spawnExactLocation,_destinationPosition,_group,_faction,_debug,_waypointPlacementRadius,
 _waypointType,_waypointMovement,_waypointCompletionRadius,_waypointTimeoutCounters,_waypointFormation,_waypointCombatMode,
 _waypointBehaviour,_waypointDescription] call ALIVE_fnc_dump;
};
// DEBUG -------------------------------------------------------------------------------------
 
// MAIN -------------------------------------------------------------------------------------
_profiles = [_group, _spawnposition, random(360), _spawnExactLocation, _faction] call ALIVE_fnc_createProfilesFromGroupConfig;
 
 
if(_debug) then { ["ALIVE_spawnProfileGroup -> _groupData: %1, _config: %2, _groupName: %3", _groupData, _config, _groupName] call ALIVE_fnc_dump; };
_profileWaypoint = [_destinationPosition, _waypointPlacementRadius, _waypointType, _waypointMovement, _waypointCompletionRadius, 
 _waypointTimeoutCounters,_waypointFormation, _waypointCombatMode, _waypointBehaviour, _waypointDescription] call ALIVE_fnc_createProfileWaypoint;
 
{ _profile = _x;_profileType = _profile select 2 select 5;
 if(_profileType == "entity") then {[_profile, "addWaypoint", _profileWaypoint] call ALIVE_fnc_profileEntity;};
} forEach _profiles;
 
// MAIN -------------------------------------------------------------------------------------
 
// ====================================================================================