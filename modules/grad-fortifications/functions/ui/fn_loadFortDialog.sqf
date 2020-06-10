#include "..\..\dialog\menu\defines.hpp"

params ["_container","_caller"];

disableSerialization;
createDialog "grad_fortifications";
_dialog = findDisplay grad_fortifications_DIALOG;
_modelCtrl = _dialog displayCtrl grad_fortifications_3DMODEL;
_listCtrl = _dialog displayCtrl grad_fortifications_ITEMLIST;
_titleCtrl = _dialog displayCtrl grad_fortifications_TITLE;
_buildCtrl = _dialog displayCtrl grad_fortifications_BUILDBUTTON;
_takeCtrl = _dialog displayCtrl grad_fortifications_DROPBUTTON;

_caller setVariable ["grad_fortifications_currentContainer", _container];
[_container] call grad_fortifications_fnc_updateItemList;
