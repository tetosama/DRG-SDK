
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

// Function UI_RetirementInfo.UI_RetirementInfo_C.UpdateBenefits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InNoCharactersPromoted         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InCharacterRetirementCount     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RetirementInfo_C::UpdateBenefits(bool* InNoCharactersPromoted, int* InCharacterRetirementCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RetirementInfo.UI_RetirementInfo_C.UpdateBenefits");

	UUI_RetirementInfo_C_UpdateBenefits_Params params;
	params.InNoCharactersPromoted = InNoCharactersPromoted;
	params.InCharacterRetirementCount = InCharacterRetirementCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RetirementInfo.UI_RetirementInfo_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RetirementInfo_C::SetData(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RetirementInfo.UI_RetirementInfo_C.SetData");

	UUI_RetirementInfo_C_SetData_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RetirementInfo.UI_RetirementInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RetirementInfo_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RetirementInfo.UI_RetirementInfo_C.PreConstruct");

	UUI_RetirementInfo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RetirementInfo.UI_RetirementInfo_C.ExecuteUbergraph_UI_RetirementInfo
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RetirementInfo_C::ExecuteUbergraph_UI_RetirementInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RetirementInfo.UI_RetirementInfo_C.ExecuteUbergraph_UI_RetirementInfo");

	UUI_RetirementInfo_C_ExecuteUbergraph_UI_RetirementInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
