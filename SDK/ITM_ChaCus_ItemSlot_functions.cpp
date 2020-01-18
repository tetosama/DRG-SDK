
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

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.SetCurrentItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_C::SetCurrentItem(int* InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.SetCurrentItem");

	UITM_ChaCus_ItemSlot_C_SetCurrentItem_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UITM_ChaCus_ItemSlot_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.IsInteractable");

	UITM_ChaCus_ItemSlot_C_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.SetCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 InCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_C::SetCharacter(class UClass** InCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.SetCharacter");

	UITM_ChaCus_ItemSlot_C_SetCharacter_Params params;
	params.InCharacter = InCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateItemUINotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                InItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_C::UpdateItemUINotification(class UObject** InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateItemUINotification");

	UITM_ChaCus_ItemSlot_C_UpdateItemUINotification_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateCategoryUINotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InitialSetup                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_C::UpdateCategoryUINotification(bool* InitialSetup)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateCategoryUINotification");

	UITM_ChaCus_ItemSlot_C_UpdateCategoryUINotification_Params params;
	params.InitialSetup = InitialSetup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UITM_ChaCus_ItemSlot_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.OnKeyUp");

	UITM_ChaCus_ItemSlot_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateCounterText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSlot_C::UpdateCounterText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateCounterText");

	UITM_ChaCus_ItemSlot_C_UpdateCounterText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.GetCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerCharacter*        AsPlayer_Character             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_C::GetCharacter(class APlayerCharacter** AsPlayer_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.GetCharacter");

	UITM_ChaCus_ItemSlot_C_GetCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsPlayer_Character != nullptr)
		*AsPlayer_Character = params.AsPlayer_Character;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVanityItem**            Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_C::UpdateItem(class UVanityItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateItem");

	UITM_ChaCus_ItemSlot_C_UpdateItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.PreConstruct");

	UITM_ChaCus_ItemSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.BndEvt__BasicScrollArrow_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ChaCus_ItemSlot_C::BndEvt__BasicScrollArrow_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.BndEvt__BasicScrollArrow_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UITM_ChaCus_ItemSlot_C_BndEvt__BasicScrollArrow_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ChaCus_ItemSlot_C::BndEvt__ArrowRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UITM_ChaCus_ItemSlot_C_BndEvt__ArrowRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.Prev
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSlot_C::Prev()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.Prev");

	UITM_ChaCus_ItemSlot_C_Prev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.Next
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSlot_C::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.Next");

	UITM_ChaCus_ItemSlot_C_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.ScheduleHideNotification
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSlot_C::ScheduleHideNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.ScheduleHideNotification");

	UITM_ChaCus_ItemSlot_C_ScheduleHideNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.OnHideNotification
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSlot_C::OnHideNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.OnHideNotification");

	UITM_ChaCus_ItemSlot_C_OnHideNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.ExecuteUbergraph_ITM_ChaCus_ItemSlot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_C::ExecuteUbergraph_ITM_ChaCus_ItemSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.ExecuteUbergraph_ITM_ChaCus_ItemSlot");

	UITM_ChaCus_ItemSlot_C_ExecuteUbergraph_ITM_ChaCus_ItemSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
