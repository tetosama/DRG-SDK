
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

// Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_JobsEntry_Resource_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.PreConstruct");

	UITM_JobsEntry_Resource_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           RequiredLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_JobsEntry_Resource_C::SetData(int* RequiredLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.SetData");

	UITM_JobsEntry_Resource_C_SetData_Params params;
	params.RequiredLevel = RequiredLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.ExecuteUbergraph_ITM_JobsEntry_Resource
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_JobsEntry_Resource_C::ExecuteUbergraph_ITM_JobsEntry_Resource(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.ExecuteUbergraph_ITM_JobsEntry_Resource");

	UITM_JobsEntry_Resource_C_ExecuteUbergraph_ITM_JobsEntry_Resource_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
