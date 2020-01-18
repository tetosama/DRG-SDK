#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetHUDVisible
struct UMENU_EscapeMenu_C_SetHUDVisible_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.NotInParty
struct UMENU_EscapeMenu_C_NotInParty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.UpdateDebugTerrainHash
struct UMENU_EscapeMenu_C_UpdateDebugTerrainHash_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetupLeaveButton
struct UMENU_EscapeMenu_C_SetupLeaveButton_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnKeyUp
struct UMENU_EscapeMenu_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_C683F28B449A36320FC36D96F11FEA56
struct UMENU_EscapeMenu_C_OnFailure_C683F28B449A36320FC36D96F11FEA56_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_C683F28B449A36320FC36D96F11FEA56
struct UMENU_EscapeMenu_C_OnSuccess_C683F28B449A36320FC36D96F11FEA56_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_218A9EEE48590CCAA620C7BD9900B6A8
struct UMENU_EscapeMenu_C_OnFailure_218A9EEE48590CCAA620C7BD9900B6A8_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_218A9EEE48590CCAA620C7BD9900B6A8
struct UMENU_EscapeMenu_C_OnSuccess_218A9EEE48590CCAA620C7BD9900B6A8_Params
{
	struct FBlueprintSessionResult*                    Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_730F188F487EF8647F19229A9AC9433B
struct UMENU_EscapeMenu_C_OnFailure_730F188F487EF8647F19229A9AC9433B_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_730F188F487EF8647F19229A9AC9433B
struct UMENU_EscapeMenu_C_OnSuccess_730F188F487EF8647F19229A9AC9433B_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_9986045E4FD278DC31D204A1DF47B8DA
struct UMENU_EscapeMenu_C_OnFailure_9986045E4FD278DC31D204A1DF47B8DA_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_9986045E4FD278DC31D204A1DF47B8DA
struct UMENU_EscapeMenu_C_OnSuccess_9986045E4FD278DC31D204A1DF47B8DA_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.Construct
struct UMENU_EscapeMenu_C_Construct_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnCloseLayout
struct UMENU_EscapeMenu_C_OnCloseLayout_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetFocus
struct UMENU_EscapeMenu_C_SetFocus_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnQuitGame
struct UMENU_EscapeMenu_C_OnQuitGame_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnLeaveTeam
struct UMENU_EscapeMenu_C_OnLeaveTeam_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_LeaveTeam_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_LeaveTeam_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Options_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_Options_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Exit_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_Exit_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Tutorial_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_Tutorial_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.PreConstruct
struct UMENU_EscapeMenu_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_InviteFriends_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_InviteFriends_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnShown
struct UMENU_EscapeMenu_C_OnShown_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnClosed
struct UMENU_EscapeMenu_C_OnClosed_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__Basic_ChangeProfile_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__Basic_ChangeProfile_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnXBoxAccountPickerClosed_Event_1
struct UMENU_EscapeMenu_C_OnXBoxAccountPickerClosed_Event_1_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.Answer
struct UMENU_EscapeMenu_C_Answer_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.UpdateMissionTime
struct UMENU_EscapeMenu_C_UpdateMissionTime_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Reconnect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_Reconnect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.ExecuteUbergraph_MENU_EscapeMenu
struct UMENU_EscapeMenu_C_ExecuteUbergraph_MENU_EscapeMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
