
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

// Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.OnColorSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_ChaCus_ColorChange_ColorBox_C** InItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ColorChange_C::OnColorSelected(class UITM_ChaCus_ColorChange_ColorBox_C** InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.OnColorSelected");

	UITM_ChaCus_ColorChange_C_OnColorSelected_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.SetCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 InCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ColorChange_C::SetCharacter(class UClass** InCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.SetCharacter");

	UITM_ChaCus_ColorChange_C_SetCharacter_Params params;
	params.InCharacter = InCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ColorChange_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.PreConstruct");

	UITM_ChaCus_ColorChange_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.ExecuteUbergraph_ITM_ChaCus_ColorChange
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ColorChange_C::ExecuteUbergraph_ITM_ChaCus_ColorChange(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.ExecuteUbergraph_ITM_ChaCus_ColorChange");

	UITM_ChaCus_ColorChange_C_ExecuteUbergraph_ITM_ChaCus_ColorChange_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
