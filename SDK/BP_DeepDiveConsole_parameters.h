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

// Function BP_DeepDiveConsole.BP_DeepDiveConsole_C.IsNewPlayer
struct ABP_DeepDiveConsole_C_IsNewPlayer_Params
{
	class ABP_PlayerController_SpaceRig_C**            PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNewPlayer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeepDiveConsole.BP_DeepDiveConsole_C.ReceiveBeginPlay
struct ABP_DeepDiveConsole_C_ReceiveBeginPlay_Params
{
};

// Function BP_DeepDiveConsole.BP_DeepDiveConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
struct ABP_DeepDiveConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeepDiveConsole.BP_DeepDiveConsole_C.ExecuteUbergraph_BP_DeepDiveConsole
struct ABP_DeepDiveConsole_C_ExecuteUbergraph_BP_DeepDiveConsole_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
