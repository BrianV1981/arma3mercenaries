/*
  File: groupTeleport.sqf
  Author: BrianV1981
  Description: This script provides functionality to teleport AI-controlled group members to a safe position near the player, after displaying a confirmation dialog. It offers a simple interface for the player to recall their AI teammates during a mission, ensuring they can regroup efficiently. The script is designed to be non-intrusive, offering players the option to cancel the recall if desired.
  
// Adding an action to an ingame object named recallGroupCPU_1 (i.e. a laptop) with a 5m distance check

   recallGroupCPU_1 addAction [
       "Recall Group",                             // Action text
       "arma3mercenaries\group_teleport\groupTeleport.sqf", // Path to the script
       [],                                         // Arguments passed to the script (none in this case)
       1.5,                                        // Priority of the action
       false,                                      // Show on unconscious (false means don't show)
       true,                                       // Enable (always enabled)
       "",                                         // Condition: leave empty for default behavior
       "_this distance recallGroupCPU_1 < 5"       // Condition: only show when the player is within 5 meters of the object
   ];

or to remove affter 1 use per server restart

recallGroupCPU_1 addAction ["Recall Group", "arma3mercenaries\group_teleport\groupTeleport.sqf", [], 1.5, false, true, "", "_this distance recallGroupCPU_1 < 5"];
recallGroupCPU_1 removeAction _this select 2;

// execute the script with ace self interaction menu execute this in the initplayerlocal.sqf
 
_action = ["groupTeleport","Group Recall","",{execVM "arma3mercenaries\group_teleport\groupTeleport.sqf"},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

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

BIS_fnc_findSafePos Parmaters used:

player: The center object, using the player's position.
1: Minimum distance (m) from the player.
150: Maximum distance (m) from the player.
5: Minimum distance (m) to nearby objects.
0: The position cannot be in water.
0.75: Maximum terrain gradient (steepness) (0.1 -1.0).
0: No requirement to be at a shore.


*/
[] spawn {
    // Show the confirmation dialog
    private _result = ["Are you sure you want to recall your group members?", "Confirm Group Recall", true, true] call BIS_fnc_guiMessage;

    // Check the result of the dialog
    if (_result) then {
        // Get the player's group
        private _group = group player;

        // Find a safe position near the player
     private _safePos = [player, 1, 150, 5, 0, 0.75, 0] call BIS_fnc_findSafePos;

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
    } else {
        // Player canceled the action
        hint "Group recall canceled.";
    };
};
