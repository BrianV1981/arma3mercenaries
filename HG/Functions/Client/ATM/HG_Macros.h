#include "..\..\..\UI\HG_IDCS.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/

// Finds the ATM display using its IDD (Dialog ID)
#define HG_ATM_DISP               findDisplay HG_ATM_IDD

// Retrieves the control for the bank account balance text display
#define HG_ATM_ACC_TEXT           (HG_ATM_DISP displayCtrl HG_ATM_ACC_TEXT_IDC)

// Retrieves the control for the player's cash balance text display
#define HG_ATM_CASH_TEXT          (HG_ATM_DISP displayCtrl HG_ATM_CASH_TEXT_IDC)

// Retrieves the control for the bank account balance input field
#define HG_ATM_ACC_EDIT           (HG_ATM_DISP displayCtrl HG_ATM_ACC_EDIT_IDC)

// Retrieves the control for the player's cash balance input field
#define HG_ATM_CASH_EDIT          (HG_ATM_DISP displayCtrl HG_ATM_CASH_EDIT_IDC)

// Retrieves the control for the player selection combo box (used to transfer money to another player)
#define HG_ATM_PLAYERS_COMBO      (HG_ATM_DISP displayCtrl HG_ATM_PLAYERS_COMBO_IDC)

// Retrieves the control for the transfer button
#define HG_ATM_TRANSFER_BTN       (HG_ATM_DISP displayCtrl HG_ATM_TRANSFER_BTN_IDC)

// Retrieves the control for the refresh button
#define HG_ATM_REFRESH_BTN        (HG_ATM_DISP displayCtrl HG_ATM_REFRESH_BTN_IDC)
