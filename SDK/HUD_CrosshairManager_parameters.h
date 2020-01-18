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

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.ToggleCrosshair
struct UHUD_CrosshairManager_C_ToggleCrosshair_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.ChangeCrosshair
struct UHUD_CrosshairManager_C_ChangeCrosshair_Params
{
	class UUserWidget**                                NewCrosshair;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.Play Intro
struct UHUD_CrosshairManager_C_Play_Intro_Params
{
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCharacterStateChanged
struct UHUD_CrosshairManager_C_OnCharacterStateChanged_Params
{
	ECharacterState*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCameraModeChanged_Event
struct UHUD_CrosshairManager_C_OnCameraModeChanged_Event_Params
{
	ECharacterCameraMode*                              NewCameraMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECharacterCameraMode*                              OldCameraMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.Update Crosshair
struct UHUD_CrosshairManager_C_Update_Crosshair_Params
{
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnItemEquipped_Event
struct UHUD_CrosshairManager_C_OnItemEquipped_Event_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingEnd_Event
struct UHUD_CrosshairManager_C_OnDepositingEnd_Event_Params
{
	class UResourceBank**                              ResourceBank;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingBegin_Event
struct UHUD_CrosshairManager_C_OnDepositingBegin_Event_Params
{
	class UResourceBank**                              ResourceBank;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnToggleMapTool
struct UHUD_CrosshairManager_C_OnToggleMapTool_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.Construct
struct UHUD_CrosshairManager_C_Construct_Params
{
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.ExecuteUbergraph_HUD_CrosshairManager
struct UHUD_CrosshairManager_C_ExecuteUbergraph_HUD_CrosshairManager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
