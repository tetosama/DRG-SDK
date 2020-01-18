
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

// Function Options_Language.Options_Language_C.GetLanguageName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString*                InName                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                InCode                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOptions_Language_C::GetLanguageName(struct FString* InName, struct FString* InCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Language.Options_Language_C.GetLanguageName");

	UOptions_Language_C_GetLanguageName_Params params;
	params.InName = InName;
	params.InCode = InCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options_Language.Options_Language_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Language_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Language.Options_Language_C.Construct");

	UOptions_Language_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Language.Options_Language_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_Language_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Language.Options_Language_C.UINeedsUpdate");

	UOptions_Language_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Language.Options_Language_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Language_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(struct FText* Value, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Language.Options_Language_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");

	UOptions_Language_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Language.Options_Language_C.ExecuteUbergraph_Options_Language
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Language_C::ExecuteUbergraph_Options_Language(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Language.Options_Language_C.ExecuteUbergraph_Options_Language");

	UOptions_Language_C_ExecuteUbergraph_Options_Language_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Language.Options_Language_C.OnLanguageChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLocalizedLanguageInfo* Selected_Language              (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Language_C::OnLanguageChanged__DelegateSignature(struct FLocalizedLanguageInfo* Selected_Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Language.Options_Language_C.OnLanguageChanged__DelegateSignature");

	UOptions_Language_C_OnLanguageChanged__DelegateSignature_Params params;
	params.Selected_Language = Selected_Language;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
