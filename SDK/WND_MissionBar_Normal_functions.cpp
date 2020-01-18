
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

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.CampaignChecks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CampaignMission                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AreRestrictionsMet             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWND_MissionBar_Normal_C::CampaignChecks(class UGeneratedMission** mission, bool* CampaignMission, bool* AreRestrictionsMet)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.CampaignChecks");

	UWND_MissionBar_Normal_C_CampaignChecks_Params params;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CampaignMission != nullptr)
		*CampaignMission = params.CampaignMission;
	if (AreRestrictionsMet != nullptr)
		*AreRestrictionsMet = params.AreRestrictionsMet;
}


// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.SetGeneratedMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      InMission                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MissionBar_Normal_C::SetGeneratedMission(class UGeneratedMission** InMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.SetGeneratedMission");

	UWND_MissionBar_Normal_C_SetGeneratedMission_Params params;
	params.InMission = InMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MissionBar_Normal_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.PreConstruct");

	UWND_MissionBar_Normal_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWND_MissionBar_Normal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.Construct");

	UWND_MissionBar_Normal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.ExecuteUbergraph_WND_MissionBar_Normal
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MissionBar_Normal_C::ExecuteUbergraph_WND_MissionBar_Normal(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.ExecuteUbergraph_WND_MissionBar_Normal");

	UWND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
