/*
  File: groupTeleport.sqf
  Author: BrianV1981
  Description: Teleports all AI group members to the player's current position and then removes the addaction.
  
  // Adding an action to the object with a 5m distance check
recallGroupCPU_1 addAction [
    "Recall Group",                            // Action text
    "groupTeleport.sqf",                 // Script to execute
    [],                                          // Arguments passed to the script (none in this case)
    1.5,                                         // Priority
    false,                                       // Show on unconscious (false means do not show)
    true,                                        // Enable (true means always enabled)
    "",                                          // Condition: leave empty for default condition
    "_this distance recallGroupCPU_1 < 5"        // Distance (5 meters) condition to object (recallGroupCPU_1)
];

// Removing the action after it has been used
recallGroupCPU_1 removeAction _this select 2;

////////////removed comments and formatted for ingame use
  
recallGroupCPU_1 addAction ["Recall Group", "arma3mercenaries\group_teleport\groupTeleport.sqf", [], 1.5, false, true, "", "_this distance recallGroupCPU_1 < 5"];

or to remove affter 1 use per server restart

recallGroupCPU_1 addAction ["Recall Group", "arma3mercenaries\group_teleport\groupTeleport.sqf", [], 1.5, false, true, "", "_this distance recallGroupCPU_1 < 5"];
recallGroupCPU_1 removeAction _this select 2;


 ////////ace interaction /// DOES NOT WORK...yet.
 
 
 // Define the action for the ACE interaction menu
_action = ["TeleportGroup", "Teleport Group", "", {
    private _group = group player;
    private _playerPos = getPos player;
    {
        if (!isPlayer _x) then {
            _x setPos _playerPos;
        };
    } forEach units _group;
    recallGroupCPU_1 removeAction _this select 2;
}, {(_this distance recallGroupCPU_1) < 5}] call ace_interact_menu_fnc_createAction;

// Add the action to the ACE interaction menu of the object
[recallGroupCPU_1, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

/////removed commments

_action = ["TeleportGroup", "Teleport Group", "", {
    private _group = group player;
    private _playerPos = getPos player;
    {
        if (!isPlayer _x) then {
            _x setPos _playerPos;
        };
    } forEach units _group;
    recallGroupCPU_1 removeAction _this select 2;
}, {(_this distance recallGroupCPU_1) < 5}] call ace_interact_menu_fnc_createAction;

[recallGroupCPU_1, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

 

*/

/*

BIS_fnc_findSafePos Syntax:
[center, minDist, maxDist, objDist, waterMode, maxGrad, shoreMode, blacklistPos, defaultPos] call BIS_fnc_findSafePos
Parameters:
center: (Optional, default []) center position. Can be one of:
Array - position in format Position2D or Position3D
Object - object which position will be used
Nothing - when passing empty array [] or nothing, the world's "safePositionAnchor" entry will be used
minDist: Number - (Optional, default 0) minimum distance from the center position
maxDist: Number - (Optional, default -1) maximum distance from the center position. If -1, the world's "safePositionRadius" entry will be used
objDist: Number - (Optional, default 0) minimum distance from the resulting position to the center of nearest object. Specifying quite large distance here will slow the function and might often fail to find suitable position. Recommended value: 0..10
waterMode: Number - (Optional, default 0) water mode. Can be one of:
0 - cannot be in water
1 - can either be in water or not
2 - must be in water
maxGrad: Number - (Optional, default 0) maximum terrain gradient (hill steepness). A quite small non-zero value could result in failure to find suitable position. Recommended: 0.1+
shoreMode: Number - (Optional, default 0) shore mode. Can be one of:
0 - does not have to be at a shore
1 - must be at a shore
blacklistPos: Array - (Optional, default []) list of blacklisted areas in format [area1, area2, area3... areaN]. Can be one of:
Array - in format [topLeftCorner, bottomRightCorner] - top and bottom coordinates of blacklisted area
Object - trigger area
String - marker area
Location - location
Array - array in format [center, distance] or [center, a, b, angle, rect] or [center, a, b, angle, rect, height]
defaultPos: Array - (Optional, default []) default position when no position is found. Array format is [landPosition, seaPosition], where:
landPosition: Array - in format [x,y] or [x,y,z] - default position on land
seaPosition: Array - in format [x,y] or [x,y,z] - default position on water
Return Value:
Array - in format [x,y] on success. When position cannot be found at all, default map center position is returned, which will be in format [x,y,0]

*/

// Get the player's group
private _group = group player;

// Find a safe position near the player
private _safePos = [player, 1, 150, 3, 0, 20, 0] call BIS_fnc_findSafePos;



// Loop through each unit in the group
{
    // Check if the unit is AI-controlled
    if (!isPlayer _x) then {
        // Teleport the unit to the safe position
        _x setPos _safePos;
    };
} forEach units _group;

// Notify the player that the group has been recalled
hint "Group members have been recalled to a safe location near you.";

// Optional: Remove the action after the group has been recalled
// recallGroupCPU_1 removeAction _this select 2;