
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

// Function Basic_Menu_LargeWindowWithHeaderWhite.Basic_Menu_LargeWindowWithHeaderWhite_C.Set Header Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasic_Menu_LargeWindowWithHeaderWhite_C::Set_Header_Text(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowWithHeaderWhite.Basic_Menu_LargeWindowWithHeaderWhite_C.Set Header Text");

	UBasic_Menu_LargeWindowWithHeaderWhite_C_Set_Header_Text_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_LargeWindowWithHeaderWhite.Basic_Menu_LargeWindowWithHeaderWhite_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_LargeWindowWithHeaderWhite_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowWithHeaderWhite.Basic_Menu_LargeWindowWithHeaderWhite_C.PreConstruct");

	UBasic_Menu_LargeWindowWithHeaderWhite_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_LargeWindowWithHeaderWhite.Basic_Menu_LargeWindowWithHeaderWhite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBasic_Menu_LargeWindowWithHeaderWhite_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowWithHeaderWhite.Basic_Menu_LargeWindowWithHeaderWhite_C.Construct");

	UBasic_Menu_LargeWindowWithHeaderWhite_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_LargeWindowWithHeaderWhite.Basic_Menu_LargeWindowWithHeaderWhite_C.ExecuteUbergraph_Basic_Menu_LargeWindowWithHeaderWhite
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_LargeWindowWithHeaderWhite_C::ExecuteUbergraph_Basic_Menu_LargeWindowWithHeaderWhite(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowWithHeaderWhite.Basic_Menu_LargeWindowWithHeaderWhite_C.ExecuteUbergraph_Basic_Menu_LargeWindowWithHeaderWhite");

	UBasic_Menu_LargeWindowWithHeaderWhite_C_ExecuteUbergraph_Basic_Menu_LargeWindowWithHeaderWhite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
