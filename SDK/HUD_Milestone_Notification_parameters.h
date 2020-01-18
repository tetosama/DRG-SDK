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

// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.PreConstruct
struct UHUD_Milestone_Notification_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Init Widget
struct UHUD_Milestone_Notification_C_Init_Widget_Params
{
};

// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Construct
struct UHUD_Milestone_Notification_C_Construct_Params
{
};

// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached_Event
struct UHUD_Milestone_Notification_C_OnMilestoneReached_Event_Params
{
	class UMilestoneAsset**                            Milestone;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ReachedTier;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.ExecuteUbergraph_HUD_Milestone_Notification
struct UHUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached__DelegateSignature
struct UHUD_Milestone_Notification_C_OnMilestoneReached__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
