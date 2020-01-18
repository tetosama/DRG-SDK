
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

// Function BP_DeepDiveConsole_CharSelect.BP_DeepDiveConsole_CharSelect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DeepDiveConsole_CharSelect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeepDiveConsole_CharSelect.BP_DeepDiveConsole_CharSelect_C.ReceiveBeginPlay");

	ABP_DeepDiveConsole_CharSelect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeepDiveConsole_CharSelect.BP_DeepDiveConsole_CharSelect_C.ExecuteUbergraph_BP_DeepDiveConsole_CharSelect
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeepDiveConsole_CharSelect_C::ExecuteUbergraph_BP_DeepDiveConsole_CharSelect(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeepDiveConsole_CharSelect.BP_DeepDiveConsole_CharSelect_C.ExecuteUbergraph_BP_DeepDiveConsole_CharSelect");

	ABP_DeepDiveConsole_CharSelect_C_ExecuteUbergraph_BP_DeepDiveConsole_CharSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
