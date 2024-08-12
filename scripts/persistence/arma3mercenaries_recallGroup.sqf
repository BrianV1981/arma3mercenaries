/* arma3mercenaries_getGroup.sqf */

private _groupData = profileNamespace getVariable [format ["arma3mercenaries_group_%1", getPlayerUID player], []];

if (count _groupData == 0) exitWith {
    hint "No group to recall!";
};

private _spawnPos = getPos player;

{
    private _unitData = _x;
    private _type = _unitData select 0;
    private _dir = _unitData select 2;
    private _posASL = _unitData select 1;
    private _damage = _unitData select 3;
    private _playerUID = _unitData select 4;

    private _unit = _type createUnit [_posASL, group player];

    _unit setDir _dir;
    _unit setDamage _damage;
    _unit setPosASL _spawnPos;
    _unit setVariable ["arma3mercenaries_persistence_groupMembers", _playerUID, true];

} forEach _groupData;

hint "Your group has been recalled!";
