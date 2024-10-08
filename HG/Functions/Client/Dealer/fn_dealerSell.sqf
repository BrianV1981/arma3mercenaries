#include "HG_Macros.h"
/*
    Author - HoverGuy
    GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
    Enhanced By - BrianV1981
    Changes:
    - Integrated Grad Money system for adding funds when selling vehicles.
    - Replaced the HG cash handling function with the Grad Money function for payout.
    - Added detailed comments for clarity and understanding.
*/

private["_sel","_val","_vehicle","_plate"];

disableSerialization;

_sel = HG_DEALER_V_LIST lbData (lbCurSel HG_DEALER_V_LIST);
_val = HG_DEALER_V_LIST lbValue (lbCurSel HG_DEALER_V_LIST);
_vehicle = HG_VEHICLES_HANDLER select _val;
_plate = (_vehicle getVariable "HG_Owner") select 1;

deleteVehicle _vehicle;
[HG_PRICE_HANDLER,0] call HG_fnc_addOrSubCash;

///ADD GRAD FUNDS FOR PAYOUT
[player,HG_PRICE_HANDLER] call grad_moneymenu_fnc_addFunds;

/*

deletes alive profile http://alivemod.com/forum/3128-remove-profiles/0
[_vehicle, "destroy"] call ALiVE_fnc_profileVehicle;

update:
The better idea is to apply the variable ALiVE_disableDynamicSimulation when creating the vehicle.
If you want to exclude an object from ALiVE persistence only (and not from profiling), you can apply the ALiVE_sys_persistence_skip variable

*/

hint format[(localize "STR_HG_DLG_DE_SOLD"),(getText(configFile >> "CfgVehicles" >> _sel >> "displayName")),[HG_PRICE_HANDLER,true] call HG_fnc_currencyToText];
[player,_plate] remoteExecCall ["HG_fnc_deleteVehicle",2,false];

[] spawn HG_fnc_refreshDealer;

true;
