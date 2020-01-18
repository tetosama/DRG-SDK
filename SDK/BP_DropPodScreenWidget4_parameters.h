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

// Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.SetGeneratedMission
struct UBP_DropPodScreenWidget4_C_SetGeneratedMission_Params
{
	class UGeneratedMission**                          In_Mission;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.Construct
struct UBP_DropPodScreenWidget4_C_Construct_Params
{
};

// Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.OnGeneratedMissionChanged
struct UBP_DropPodScreenWidget4_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.OnDifficultyChanged_Event_1
struct UBP_DropPodScreenWidget4_C_OnDifficultyChanged_Event_1_Params
{
	class UDifficultySetting**                         Setting;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.ExecuteUbergraph_BP_DropPodScreenWidget4
struct UBP_DropPodScreenWidget4_C_ExecuteUbergraph_BP_DropPodScreenWidget4_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
