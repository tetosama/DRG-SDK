
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

// Function ITM_MisDes_Mutator.ITM_MisDes_Mutator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisDes_Mutator_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisDes_Mutator.ITM_MisDes_Mutator_C.PreConstruct");

	UITM_MisDes_Mutator_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisDes_Mutator.ITM_MisDes_Mutator_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisDes_Mutator_C::SetData(class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisDes_Mutator.ITM_MisDes_Mutator_C.SetData");

	UITM_MisDes_Mutator_C_SetData_Params params;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisDes_Mutator.ITM_MisDes_Mutator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_MisDes_Mutator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisDes_Mutator.ITM_MisDes_Mutator_C.Construct");

	UITM_MisDes_Mutator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisDes_Mutator.ITM_MisDes_Mutator_C.ExecuteUbergraph_ITM_MisDes_Mutator
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisDes_Mutator_C::ExecuteUbergraph_ITM_MisDes_Mutator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisDes_Mutator.ITM_MisDes_Mutator_C.ExecuteUbergraph_ITM_MisDes_Mutator");

	UITM_MisDes_Mutator_C_ExecuteUbergraph_ITM_MisDes_Mutator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
