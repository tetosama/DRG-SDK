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

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.HasSelectedCharacterBeenPromoted
struct ABP_HUD_SpaceRig_C_HasSelectedCharacterBeenPromoted_Params
{
	bool                                               IsPromoted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ShowNextQueuedWindow
struct ABP_HUD_SpaceRig_C_ShowNextQueuedWindow_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.EnqueueWindow
struct ABP_HUD_SpaceRig_C_EnqueueWindow_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.PlayerSpawned
struct ABP_HUD_SpaceRig_C_PlayerSpawned_Params
{
	class APlayerCharacter**                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnVisibilityChanged
struct ABP_HUD_SpaceRig_C_OnVisibilityChanged_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveDestroyed
struct ABP_HUD_SpaceRig_C_ReceiveDestroyed_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveBeginPlay
struct ABP_HUD_SpaceRig_C_ReceiveBeginPlay_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCountdownCompleted
struct ABP_HUD_SpaceRig_C_OnCountdownCompleted_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Update Visibility
struct ABP_HUD_SpaceRig_C_Update_Visibility_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Handle Count Down
struct ABP_HUD_SpaceRig_C_Handle_Count_Down_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Campaign Notifications
struct ABP_HUD_SpaceRig_C_Setup_Campaign_Notifications_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCampaignNotification_Event
struct ABP_HUD_SpaceRig_C_OnCampaignNotification_Event_Params
{
	class UCampaignNotification**                      Notification;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Retirement Shouts
struct ABP_HUD_SpaceRig_C_Setup_Retirement_Shouts_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnEligibleForRetirementAssignment
struct ABP_HUD_SpaceRig_C_OnEligibleForRetirementAssignment_Params
{
	class UBP_GameInstance_C**                         GameInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Spacerig Notifications
struct ABP_HUD_SpaceRig_C_Setup_Spacerig_Notifications_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup UI Notifications
struct ABP_HUD_SpaceRig_C_Setup_UI_Notifications_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Promotion Rewards
struct ABP_HUD_SpaceRig_C_Setup_Promotion_Rewards_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnLastWindowClosed
struct ABP_HUD_SpaceRig_C_OnLastWindowClosed_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup First Infused Core
struct ABP_HUD_SpaceRig_C_Setup_First_Infused_Core_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Pending Rewards
struct ABP_HUD_SpaceRig_C_Setup_Pending_Rewards_Params
{
};

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ExecuteUbergraph_BP_HUD_SpaceRig
struct ABP_HUD_SpaceRig_C_ExecuteUbergraph_BP_HUD_SpaceRig_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
