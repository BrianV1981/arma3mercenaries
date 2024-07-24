///http://alivemod.com/forum/2584-using-objective-capture-status-for-triggering-events/1


//Reddog ALIVE CODE	
///////////////////////////////////////////////////////////////////////////////////////////////////
//Put in init.sqf
//only use on an ALiVE mission with virtual AI module placed
waituntil {!isnil "ALiVE_eventLog"};

//Leave alone
_fnc_custom = {

    //Do not touch that
    params ["_logic","_operation","_args"];

    //Also do not touch that
    switch (_operation) do {
        case "handleEvent": {
            _event = _args;
            
            _event params ["_id","_data"];
            _id = [_event, "id"] call ALIVE_fnc_hashGet;
            _data = [_event, "data"] call ALIVE_fnc_hashGet;
            
            _data params ["_side","_objective"];


            ///////////////////////////////////////////////////////////////////////////
            /////
            /////
            /////
            //// This is the part you can put your code in
            /////
            //
            //
            /* Example objective data from _objective call ALiVE_fnc_InspectHash;
            ---------------- Inspecting Hash --------------------
            k [0]: objectiveID v: OPCOM_2390318919_objective_0
            k [1]: center v: [23334.9,19291.6,0]
            k [2]: size v: 50
            k [3]: objectiveType v: MIL
            k [4]: priority v: 50
            k [5]: opcom_state v: idle
            k [6]: clusterID v: CUSTOM_42626
            k [7]: opcomID v: 2390318919
            k [8]: _rev v:
            k [9]: opcom_orders v: none
            k [10]: danger v: -1
            k [11]: sectionAssist v: ["BLU_F-entity_12"]
            k [12]: section v: ["BLU_F-entity_12"]
            k [13]: tacom_state v: reserve
            ---------------- Inspection Complete --------------------
            */

            //Get objective id and position
            private _objectiveID = [_objective,"objectiveID","empty"] call ALiVE_fnc_hashGet;
            private _objectivePos = [_objective,"center",[]] call ALiVE_fnc_hashGet;

            //If objective is of side east ("GUER" for resistance)
            if (_side == "WEST") then {
systemchat format ["WEST JUST CAPTURED OBJ- %1 at position %2", _objectiveID, _objectivePos];                
            };

            ////
            ///////////////////////////////////////////////////////////////////////////
        };
    };
};

//Register function
_listener = [nil,"create"] call ALiVE_fnc_baseClass;
_listener setVariable ["class",_fnc_custom];

//Will always fire the function above if one of the events below is fired
//Possible values are: "OPCOM_RESERVE","OPCOM_RECON","OPCOM_CAPTURE","OPCOM_DEFEND","OPCOM_TERRORIZE"
_listenerID =   [ALiVE_eventLog,"addListener",[_listener, ["OPCOM_RESERVE"]]] call ALIVE_fnc_eventLog;

//
///////////////////////////////////////////////////////////////////////////////////////////////////