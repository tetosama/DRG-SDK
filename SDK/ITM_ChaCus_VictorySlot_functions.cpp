
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

// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.UpdateItemUINotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVictoryPose**           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_VictorySlot_C::UpdateItemUINotification(class UVictoryPose** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.UpdateItemUINotification");

	UITM_ChaCus_VictorySlot_C_UpdateItemUINotification_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.UpdateCategoryUINotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InitialSetup                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_VictorySlot_C::UpdateCategoryUINotification(bool* InitialSetup)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.UpdateCategoryUINotification");

	UITM_ChaCus_VictorySlot_C_UpdateCategoryUINotification_Params params;
	params.InitialSetup = InitialSetup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.GetPreviewVictoryPose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVictoryPose*            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_VictorySlot_C::GetPreviewVictoryPose(class UVictoryPose** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.GetPreviewVictoryPose");

	UITM_ChaCus_VictorySlot_C_GetPreviewVictoryPose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UITM_ChaCus_VictorySlot_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.OnKeyUp");

	UITM_ChaCus_VictorySlot_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.UpdateCounterText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_VictorySlot_C::UpdateCounterText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.UpdateCounterText");

	UITM_ChaCus_VictorySlot_C_UpdateCounterText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.GetCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerCharacter*        AsPlayer_Character             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_VictorySlot_C::GetCharacter(class APlayerCharacter** AsPlayer_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.GetCharacter");

	UITM_ChaCus_VictorySlot_C_GetCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsPlayer_Character != nullptr)
		*AsPlayer_Character = params.AsPlayer_Character;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.UpdateItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVictoryPose**           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          TriggerPreview                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_VictorySlot_C::UpdateItem(class UVictoryPose** Item, bool* TriggerPreview)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.UpdateItem");

	UITM_ChaCus_VictorySlot_C_UpdateItem_Params params;
	params.Item = Item;
	params.TriggerPreview = TriggerPreview;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.SetData
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UVictoryPose*>*   vanityItems                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UVictoryPose**           currentItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerCharacterID**     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_VictorySlot_C::SetData(TArray<class UVictoryPose*>* vanityItems, class UVictoryPose** currentItem, class UPlayerCharacterID** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.SetData");

	UITM_ChaCus_VictorySlot_C_SetData_Params params;
	params.vanityItems = vanityItems;
	params.currentItem = currentItem;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_VictorySlot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.PreConstruct");

	UITM_ChaCus_VictorySlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.BndEvt__BasicScrollArrow_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ChaCus_VictorySlot_C::BndEvt__BasicScrollArrow_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.BndEvt__BasicScrollArrow_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UITM_ChaCus_VictorySlot_C_BndEvt__BasicScrollArrow_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ChaCus_VictorySlot_C::BndEvt__ArrowRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UITM_ChaCus_VictorySlot_C_BndEvt__ArrowRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.Prev
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_VictorySlot_C::Prev()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.Prev");

	UITM_ChaCus_VictorySlot_C_Prev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.Next
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_VictorySlot_C::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.Next");

	UITM_ChaCus_VictorySlot_C_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_ChaCus_VictorySlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UITM_ChaCus_VictorySlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.ScheduleHideNotification
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_VictorySlot_C::ScheduleHideNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.ScheduleHideNotification");

	UITM_ChaCus_VictorySlot_C_ScheduleHideNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.OnHideNotification
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_VictorySlot_C::OnHideNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.OnHideNotification");

	UITM_ChaCus_VictorySlot_C_OnHideNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.ExecuteUbergraph_ITM_ChaCus_VictorySlot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_VictorySlot_C::ExecuteUbergraph_ITM_ChaCus_VictorySlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_VictorySlot.ITM_ChaCus_VictorySlot_C.ExecuteUbergraph_ITM_ChaCus_VictorySlot");

	UITM_ChaCus_VictorySlot_C_ExecuteUbergraph_ITM_ChaCus_VictorySlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
