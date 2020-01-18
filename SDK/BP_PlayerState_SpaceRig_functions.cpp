
#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetHealthInsuranceStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            HealthInsuranceStatus          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::GetHealthInsuranceStatus(int* HealthInsuranceStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetHealthInsuranceStatus");

	ABP_PlayerState_SpaceRig_C_GetHealthInsuranceStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthInsuranceStatus != nullptr)
		*HealthInsuranceStatus = params.HealthInsuranceStatus;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_SpaceRig_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UserConstructionScript");

	ABP_PlayerState_SpaceRig_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.WatchStat
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionStat**           MissionStat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::WatchStat(class UMissionStat** MissionStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.WatchStat");

	ABP_PlayerState_SpaceRig_C_WatchStat_Params params;
	params.MissionStat = MissionStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionStat**           MissionStat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::OnStatChanged(class UMissionStat** MissionStat, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChanged");

	ABP_PlayerState_SpaceRig_C_OnStatChanged_Params params;
	params.MissionStat = MissionStat;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CommunicatStatChangeToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                StatTitle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                StatValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PlayerState_SpaceRig_C::CommunicatStatChangeToServer(struct FString* StatTitle, struct FString* StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CommunicatStatChangeToServer");

	ABP_PlayerState_SpaceRig_C_CommunicatStatChangeToServer_Params params;
	params.StatTitle = StatTitle;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CommunicateStatChangeToAll
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                StatTitle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                StatValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PlayerState_SpaceRig_C::CommunicateStatChangeToAll(struct FString* StatTitle, struct FString* StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CommunicateStatChangeToAll");

	ABP_PlayerState_SpaceRig_C_CommunicateStatChangeToAll_Params params;
	params.StatTitle = StatTitle;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerState_SpaceRig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ReceiveBeginPlay");

	ABP_PlayerState_SpaceRig_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CheckCampaign
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_SpaceRig_C::CheckCampaign()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CheckCampaign");

	ABP_PlayerState_SpaceRig_C_CheckCampaign_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ExecuteUbergraph_BP_PlayerState_SpaceRig
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::ExecuteUbergraph_BP_PlayerState_SpaceRig(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ExecuteUbergraph_BP_PlayerState_SpaceRig");

	ABP_PlayerState_SpaceRig_C_ExecuteUbergraph_BP_PlayerState_SpaceRig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                StatTitle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                StatValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PlayerState_SpaceRig_C::OnStatChange__DelegateSignature(struct FString* StatTitle, struct FString* StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChange__DelegateSignature");

	ABP_PlayerState_SpaceRig_C_OnStatChange__DelegateSignature_Params params;
	params.StatTitle = StatTitle;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
