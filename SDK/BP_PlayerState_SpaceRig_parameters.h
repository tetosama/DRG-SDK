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

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetHealthInsuranceStatus
struct ABP_PlayerState_SpaceRig_C_GetHealthInsuranceStatus_Params
{
	int                                                HealthInsuranceStatus;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UserConstructionScript
struct ABP_PlayerState_SpaceRig_C_UserConstructionScript_Params
{
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.WatchStat
struct ABP_PlayerState_SpaceRig_C_WatchStat_Params
{
	class UMissionStat**                               MissionStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChanged
struct ABP_PlayerState_SpaceRig_C_OnStatChanged_Params
{
	class UMissionStat**                               MissionStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CommunicatStatChangeToServer
struct ABP_PlayerState_SpaceRig_C_CommunicatStatChangeToServer_Params
{
	struct FString*                                    StatTitle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    StatValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CommunicateStatChangeToAll
struct ABP_PlayerState_SpaceRig_C_CommunicateStatChangeToAll_Params
{
	struct FString*                                    StatTitle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    StatValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ReceiveBeginPlay
struct ABP_PlayerState_SpaceRig_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CheckCampaign
struct ABP_PlayerState_SpaceRig_C_CheckCampaign_Params
{
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ExecuteUbergraph_BP_PlayerState_SpaceRig
struct ABP_PlayerState_SpaceRig_C_ExecuteUbergraph_BP_PlayerState_SpaceRig_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChange__DelegateSignature
struct ABP_PlayerState_SpaceRig_C_OnStatChange__DelegateSignature_Params
{
	struct FString*                                    StatTitle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    StatValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
