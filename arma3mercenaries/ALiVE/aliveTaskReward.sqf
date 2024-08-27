/*

US Army: “This we’ll Defend” and the guttural call of “Hooah!” which sounds a lot like someone throwing up. US Army Special Forces have the motto “De Oppresso Liber” (“To Free the Oppressed”). They too use the call “Hooah!”

US Navy: “Semper Fortis” (“Always Strong”) and the call of “Aye Aye!”, the affirmative response for instruction or orders, plus the “Hooyah!” used primarily by Navy SEALs.

US Marine Corps: “Semper Fidelis” (“Always Faithful”) and the guttural call of “Oorah!”

*Note: It is believed the USMC call is derived from the sound made by Navy Klaxon horns used to call out General Quarters / Battle Stations during the Korean action in the 1950’s. The Marines shortened the definitive “ah-ru-ga” sound of the Klaxons to the now famous “Oo-rah!” call.

US Air Force: “Aim high, Fly-Fight-Win” and the call of “Hooah”, which is the Army’s, but the Air Force apparently borrowed it, as they were once the Army Air Corps, and today often work in concert with the Army. Colloquially, the USAF has defined the verbal call as “H.U.A.”, or “Heard, Understood and Acknowledged.”

US Coast Guard: “Semper Paratus” (“Always Ready”). Currently, the Coast Guard doesn’t have a defined call. Maybe one of our “Coastie” brethren will let us know what the Coast Guard uses as a battle cry.

private _messages = [
    "Did you even help during that last mission? Anyways, this $100,000 is now your problem. Good luck!",
    "Line 'em up, mow 'em down! Get some, 100k Oorah!",
    "Nice job, soldier! $100,000 has been added to your tab. Don't spend it all in one place!",
    "Looks like your aim was true. Here's $100,000 for your efforts. Keep it up, Hooah!",
    "We saw what you did out there. Good news: $100,000 is yours. Bad news: you owe us a favor.",
    "Surviving that mission was impressive. Here's $100,000. Just don't ask where it came from.",
    "Consider this $100,000 a bonus for not getting blown up. Keep it that way.",
    "You didn’t screw up this time, so here's $100,000. Try not to waste it!",
    "The good news is you survived. The better news is you’re now $100,000 richer. Spend it wisely… or don’t.",
    "That last mission was brutal, but the reward isn’t. $100,000 coming your way. Maybe buy some better gear next time.",
    "You really earned your keep this time. $100,000 to help forget what you just went through.",
    "You didn’t just survive; you thrived. Here’s $100,000 to celebrate your newfound luck.",
    "Someone had to do the dirty work, and you did it well. $100,000 for your troubles.",
    "That was close. Too close. Here’s $100,000 to remind you why you keep doing this.",
    "War is hell, but $100,000 makes it a little more bearable, doesn’t it?",
    "Another day, another blood-soaked paycheck. $100,000 added to your account.",
    "The battlefield isn’t pretty, but this $100,000 should make things a little easier to stomach.",
    "You may need therapy after that mission, but at least you’ll have $100,000 to pay for it."
];

*/



SAV_fnc_taskSucceeded = {
    params ["_logic", "_operation", "_args"];
 
    switch (_operation) do {
        case "handleEvent": {
[p_1, 100000] call grad_lbm_fnc_addFunds;
[p_2, 100000] call grad_lbm_fnc_addFunds;
[p_3, 100000] call grad_lbm_fnc_addFunds;
[p_4, 100000] call grad_lbm_fnc_addFunds;
[p_5, 100000] call grad_lbm_fnc_addFunds;
[p_6, 100000] call grad_lbm_fnc_addFunds;
[p_7, 100000] call grad_lbm_fnc_addFunds;
[p_8, 100000] call grad_lbm_fnc_addFunds;
[p_9, 100000] call grad_lbm_fnc_addFunds;
[p_10, 100000] call grad_lbm_fnc_addFunds;
[p_11, 100000] call grad_lbm_fnc_addFunds;
[p_12, 100000] call grad_lbm_fnc_addFunds;
[p_13, 100000] call grad_lbm_fnc_addFunds;
[p_14, 100000] call grad_lbm_fnc_addFunds;
[p_15, 100000] call grad_lbm_fnc_addFunds;
[p_16, 100000] call grad_lbm_fnc_addFunds;
["An OPCOM task has been completed and a payment of 50,000 Cr. has been delivered to you in person by a CIA courier.", "hint", true, true] call BIS_fnc_MP;

            // do your reward stuff here
            // task data is in _args
        };
    };
};
 
private _listener = [nil, "create"] call ALIVE_fnc_baseClass;
_listener setVariable ["class", SAV_fnc_taskSucceeded];
 
private _listenerID = [ALIVE_eventLog, "addListener", [_listener, ["TASK_SUCCEEDED"]]] call ALIVE_fnc_eventLog;