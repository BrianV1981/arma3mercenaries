// Adds an action to the vehicle to flip it when the action is used
_this addAction ["Flip vehicle", {

    // Extracts parameters passed to the action
    params ["_this", "_caller", "_actionId", "_arguments"];
    
    // Calculates the surface normal vector at the vehicle's position
    _normalVec = surfaceNormal getPos _this;
    
    // Checks if the vehicle is not local to the executing machine (client or server)
    if (!local _this) then {
        // If the vehicle is not local, use remote execution to set the vehicle's vector up direction on the machine where the vehicle is local
        [_this, _normalVec] remoteExec ["setVectorUp", _this];
        // Use remote execution to set the vehicle's position above the ground on the machine where the vehicle is local
        [_this, [getPosATL _this select 0, getPosATL _this select 1, 0]] remoteExec ["setPosATL", _this];
    } else {
        // If the vehicle is local, directly set the vehicle's vector up direction
        _this setVectorUp _normalVec;
        // Directly set the vehicle's position above the ground
        _this setPosATL [getPosATL _this select 0, getPosATL _this select 1, 0];
    };
    
}, [], 1.5, true, true, "", "(vectorUp _target) vectorCos (surfaceNormal getPos _target) < 0.7", 5];

// Explanation of addAction parameters:
// "Flip vehicle" - The text displayed for the action in the interaction menu.
// Code block - The code to be executed when the action is selected.
// [] - Arguments passed to the action (none in this case).
// 1.5 - Priority of the action. Higher numbers mean higher priority.
// true - Show the action in the menu.
// true - Enable the action for all players.
// "" - No additional condition to show the action.
// Condition - Shows the action if the vehicle is significantly tilted or upside down (i.e., its vector up direction is not aligned with the surface normal).
// 5 - Maximum distance from which the action can be used (in meters).
