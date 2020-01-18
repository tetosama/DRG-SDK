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

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.UpdateGoogleAnalytics
struct UUI_CampaignNotificationManager_C_UpdateGoogleAnalytics_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.UpdateCampaignProgressBar
struct UUI_CampaignNotificationManager_C_UpdateCampaignProgressBar_Params
{
	bool*                                              ShowLastMission;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.IsWindowOpen
struct UUI_CampaignNotificationManager_C_IsWindowOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnKeyUp
struct UUI_CampaignNotificationManager_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.SetFrameColor
struct UUI_CampaignNotificationManager_C_SetFrameColor_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.GetMissionCompleteShout
struct UUI_CampaignNotificationManager_C_GetMissionCompleteShout_Params
{
	class UDialogDataAsset*                            MissionCompleteShout;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.CreateRewardWidget
struct UUI_CampaignNotificationManager_C_CreateRewardWidget_Params
{
	class UReward**                                    Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class URewardWidget*                               Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Add Reward List
struct UUI_CampaignNotificationManager_C_Add_Reward_List_Params
{
	TArray<class UReward*>*                            List;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Add Reward
struct UUI_CampaignNotificationManager_C_Add_Reward_Params
{
	class UReward**                                    Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.PreConstruct
struct UUI_CampaignNotificationManager_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UUI_CampaignNotificationManager_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnShown
struct UUI_CampaignNotificationManager_C_OnShown_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnClosed
struct UUI_CampaignNotificationManager_C_OnClosed_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.SetMissionControlPaused
struct UUI_CampaignNotificationManager_C_SetMissionControlPaused_Params
{
	bool*                                              IsPaused;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Continue
struct UUI_CampaignNotificationManager_C_Continue_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.CursorInputHack
struct UUI_CampaignNotificationManager_C_CursorInputHack_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Init Window
struct UUI_CampaignNotificationManager_C_Init_Window_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Start Mission Control Speak
struct UUI_CampaignNotificationManager_C_Start_Mission_Control_Speak_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnAppearFinished
struct UUI_CampaignNotificationManager_C_OnAppearFinished_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.On Mission Control Finished
struct UUI_CampaignNotificationManager_C_On_Mission_Control_Finished_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Count Down
struct UUI_CampaignNotificationManager_C_Count_Down_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Reward Claimed
struct UUI_CampaignNotificationManager_C_Reward_Claimed_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnNewTopWindow
struct UUI_CampaignNotificationManager_C_OnNewTopWindow_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnProgressBarMoveFinished
struct UUI_CampaignNotificationManager_C_OnProgressBarMoveFinished_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnUpdateProgressBarFinished
struct UUI_CampaignNotificationManager_C_OnUpdateProgressBarFinished_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnProgressBarUpdateStep
struct UUI_CampaignNotificationManager_C_OnProgressBarUpdateStep_Params
{
};

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.ExecuteUbergraph_UI_CampaignNotificationManager
struct UUI_CampaignNotificationManager_C_ExecuteUbergraph_UI_CampaignNotificationManager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
