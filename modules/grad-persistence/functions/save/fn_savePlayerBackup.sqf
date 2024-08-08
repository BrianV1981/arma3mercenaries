/////THIS SCRIPT DOES NOT WORK
#include "script_component.hpp"

// Function to create a backup of a player's data
params ["_unit", "_uid"];

// Get the mission tag
private _missionTag = [] call GRAD_persistence_fnc_getMissionTag;

// Construct the tag for player data
private _playersTag = _missionTag + "_players";

// Retrieve the players data hash
private _playersDataHash = [_playersTag, true, false] call GRAD_persistence_fnc_getSaveData;

// If the UID is not provided, get it from the player unit
if (isNil "_uid") then {
    _uid = getPlayerUID _unit;
};

// Exit if the UID is empty
if (_uid == "") exitWith {};

// Retrieve the unit data hash for the specified player
private _unitDataHash = [_playersDataHash, _uid] call CBA_fnc_hashGet;
if (_unitDataHash isEqualType false) exitWith {};

// Get the current time as a timestamp
private _timestamp = time; // Changed from diag_tickTime

// Define the backup path
private _backupFolderPath = format ["%1/playerBackups_%2", profileNamespace, _uid];
private _backupFilePath = format ["%1/playerData_%2_backup_%3.sav", _backupFolderPath, _uid, _timestamp];

// Create the backup folder if it doesn't exist
if !(isDir _backupFolderPath) then {
    makeDir _backupFolderPath;
};

// Save the backup
saveProfileNamespace;
copyFile [_backupFilePath, _unitDataHash];

// Limit to 5 backups
private _backupFiles = call {
    private _pattern = format ["%1/playerData_%2_backup_*.sav", _backupFolderPath, _uid];
    findFiles _pattern
};

// If there are more than 5 backups, delete the oldest ones
if (count _backupFiles > 5) then {
    _backupFiles sort true;
    private _excessBackups = _backupFiles resize (count _backupFiles - 5);
    {deleteFile _x} forEach _excessBackups;
};
