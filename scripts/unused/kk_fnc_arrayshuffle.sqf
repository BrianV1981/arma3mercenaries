KK_fnc_arrayShuffle = {
    private ["_cnt","_el1","_indx","_el2"];
    _cnt = count _this - 1;
    _el1 = _this select _cnt;
    _this resize _cnt;
    for "_i" from 0 to _cnt + random 1 do {
        _indx = floor random _cnt;
        _el2 = _this select _indx;
        _this set [_indx, _el1];
        _el1 = _el2;
    };
    _this set [_cnt, _el1];
    _this
};