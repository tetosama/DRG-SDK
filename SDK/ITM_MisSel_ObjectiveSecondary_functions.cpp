
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

// Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         missionLength                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HazardBonus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_ObjectiveSecondary_C::SetData(class UClass** Objective, float* missionLength, float* HazardBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.SetData");

	UITM_MisSel_ObjectiveSecondary_C_SetData_Params params;
	params.Objective = Objective;
	params.missionLength = missionLength;
	params.HazardBonus = HazardBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_ObjectiveSecondary_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.PreConstruct");

	UITM_MisSel_ObjectiveSecondary_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_ObjectiveSecondary_C::ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary");

	UITM_MisSel_ObjectiveSecondary_C_ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
