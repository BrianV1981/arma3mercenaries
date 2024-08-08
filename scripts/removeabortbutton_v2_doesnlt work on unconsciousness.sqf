//https://forums.bohemia.net/forums/topic/220059-disable-abort-button/
[] spawn {
  while {uiSleep 0.2; true} do {
    if (!isNull findDisplay 49) then {
      (findDisplay 49)displayCtrl 104 ctrlshow false;
    };
  };
};