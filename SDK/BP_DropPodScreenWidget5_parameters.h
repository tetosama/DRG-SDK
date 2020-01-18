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

// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.GetNewOperation
struct UBP_DropPodScreenWidget5_C_GetNewOperation_Params
{
};

// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.DoOperation
struct UBP_DropPodScreenWidget5_C_DoOperation_Params
{
};

// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.Construct
struct UBP_DropPodScreenWidget5_C_Construct_Params
{
};

// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.PreConstruct
struct UBP_DropPodScreenWidget5_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.Tick
struct UBP_DropPodScreenWidget5_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.OnGeneratedMissionChanged
struct UBP_DropPodScreenWidget5_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.ExecuteUbergraph_BP_DropPodScreenWidget5
struct UBP_DropPodScreenWidget5_C_ExecuteUbergraph_BP_DropPodScreenWidget5_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
