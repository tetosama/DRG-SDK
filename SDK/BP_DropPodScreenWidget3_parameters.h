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

// Function BP_DropPodScreenWidget3.BP_DropPodScreenWidget3_C.AdjustBar
struct UBP_DropPodScreenWidget3_C_AdjustBar_Params
{
	float*                                             InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPodScreenWidget3.BP_DropPodScreenWidget3_C.SetGeneratedMission
struct UBP_DropPodScreenWidget3_C_SetGeneratedMission_Params
{
	class UGeneratedMission**                          In_Mission;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPodScreenWidget3.BP_DropPodScreenWidget3_C.Construct
struct UBP_DropPodScreenWidget3_C_Construct_Params
{
};

// Function BP_DropPodScreenWidget3.BP_DropPodScreenWidget3_C.Tick
struct UBP_DropPodScreenWidget3_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPodScreenWidget3.BP_DropPodScreenWidget3_C.OnGeneratedMissionChanged
struct UBP_DropPodScreenWidget3_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPodScreenWidget3.BP_DropPodScreenWidget3_C.ExecuteUbergraph_BP_DropPodScreenWidget3
struct UBP_DropPodScreenWidget3_C_ExecuteUbergraph_BP_DropPodScreenWidget3_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
