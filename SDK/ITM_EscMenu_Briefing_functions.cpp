
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

// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.UpdateMissionStructure
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDeepDiveAndSpacerig          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_EscMenu_Briefing_C::UpdateMissionStructure(bool* IsDeepDiveAndSpacerig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.UpdateMissionStructure");

	UITM_EscMenu_Briefing_C_UpdateMissionStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDeepDiveAndSpacerig != nullptr)
		*IsDeepDiveAndSpacerig = params.IsDeepDiveAndSpacerig;
}


// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.SetMutatorInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionMutator**        Mutator                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_EscMenu_Briefing_C::SetMutatorInfo(class UMissionMutator** Mutator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.SetMutatorInfo");

	UITM_EscMenu_Briefing_C_SetMutatorInfo_Params params;
	params.Mutator = Mutator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.SetWarningInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionWarning**        Warning                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_EscMenu_Briefing_C::SetWarningInfo(class UMissionWarning** Warning)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.SetWarningInfo");

	UITM_EscMenu_Briefing_C_SetWarningInfo_Params params;
	params.Warning = Warning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.UpdateMissionInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBiome**                 Biome                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_EscMenu_Briefing_C::UpdateMissionInfo(class UBiome** Biome, class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.UpdateMissionInfo");

	UITM_EscMenu_Briefing_C_UpdateMissionInfo_Params params;
	params.Biome = Biome;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_EscMenu_Briefing_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.Tick");

	UITM_EscMenu_Briefing_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_EscMenu_Briefing_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.PreConstruct");

	UITM_EscMenu_Briefing_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.ExecuteUbergraph_ITM_EscMenu_Briefing
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_EscMenu_Briefing_C::ExecuteUbergraph_ITM_EscMenu_Briefing(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.ExecuteUbergraph_ITM_EscMenu_Briefing");

	UITM_EscMenu_Briefing_C_ExecuteUbergraph_ITM_EscMenu_Briefing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
