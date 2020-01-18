
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

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnShow
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  ControllerOverrideText         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  Title                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUD_TutorialWidget_C::OnShow(struct FText* Text, struct FText* ControllerOverrideText, struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnShow");

	UHUD_TutorialWidget_C_OnShow_Params params;
	params.Text = Text;
	params.ControllerOverrideText = ControllerOverrideText;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_TutorialWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.Construct");

	UHUD_TutorialWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnHide
// (Event, Protected, BlueprintEvent)

void UHUD_TutorialWidget_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnHide");

	UHUD_TutorialWidget_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TutorialWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.PreConstruct");

	UHUD_TutorialWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnEnterExitFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_TutorialWidget_C::OnEnterExitFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnEnterExitFinished");

	UHUD_TutorialWidget_C_OnEnterExitFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.ExecuteUbergraph_HUD_TutorialWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TutorialWidget_C::ExecuteUbergraph_HUD_TutorialWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.ExecuteUbergraph_HUD_TutorialWidget");

	UHUD_TutorialWidget_C_ExecuteUbergraph_HUD_TutorialWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
