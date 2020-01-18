
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

// Function LoreScreen_Template.LoreScreen_Template_C.SetHeadline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  SetHeadline                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ULoreScreen_Template_C::SetHeadline(struct FText* SetHeadline)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.SetHeadline");

	ULoreScreen_Template_C_SetHeadline_Params params;
	params.SetHeadline = SetHeadline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Template.LoreScreen_Template_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_Template_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.PreConstruct");

	ULoreScreen_Template_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderMovie
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource**           MediaSource                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_Template_C::SetHeaderMovie(class UMediaSource** MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderMovie");

	ULoreScreen_Template_C_SetHeaderMovie_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             HeaderImage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_Template_C::SetHeaderImage(class UTexture2D** HeaderImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderImage");

	ULoreScreen_Template_C_SetHeaderImage_Params params;
	params.HeaderImage = HeaderImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Template.LoreScreen_Template_C.StartMovie
// (BlueprintCallable, BlueprintEvent)

void ULoreScreen_Template_C::StartMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.StartMovie");

	ULoreScreen_Template_C_StartMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Template.LoreScreen_Template_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void ULoreScreen_Template_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	ULoreScreen_Template_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Template.LoreScreen_Template_C.OnScreenOut
// (BlueprintCallable, BlueprintEvent)

void ULoreScreen_Template_C::OnScreenOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.OnScreenOut");

	ULoreScreen_Template_C_OnScreenOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Template.LoreScreen_Template_C.SetMissionTypeHeadline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  TextBeforeIcon                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FObjectiveMissionIcon*  MissionIcon                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextAfterIcon                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ULoreScreen_Template_C::SetMissionTypeHeadline(struct FText* TextBeforeIcon, struct FObjectiveMissionIcon* MissionIcon, struct FText* TextAfterIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.SetMissionTypeHeadline");

	ULoreScreen_Template_C_SetMissionTypeHeadline_Params params;
	params.TextBeforeIcon = TextBeforeIcon;
	params.MissionIcon = MissionIcon;
	params.TextAfterIcon = TextAfterIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Template.LoreScreen_Template_C.ExecuteUbergraph_LoreScreen_Template
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_Template_C::ExecuteUbergraph_LoreScreen_Template(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.ExecuteUbergraph_LoreScreen_Template");

	ULoreScreen_Template_C_ExecuteUbergraph_LoreScreen_Template_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
