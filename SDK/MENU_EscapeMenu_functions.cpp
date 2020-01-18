
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

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetHUDVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::SetHUDVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetHUDVisible");

	UMENU_EscapeMenu_C_SetHUDVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.NotInParty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMENU_EscapeMenu_C::NotInParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.NotInParty");

	UMENU_EscapeMenu_C_NotInParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.UpdateDebugTerrainHash
// (Public, BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::UpdateDebugTerrainHash()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.UpdateDebugTerrainHash");

	UMENU_EscapeMenu_C_UpdateDebugTerrainHash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetupLeaveButton
// (Public, BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::SetupLeaveButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetupLeaveButton");

	UMENU_EscapeMenu_C_SetupLeaveButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMENU_EscapeMenu_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnKeyUp");

	UMENU_EscapeMenu_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_C683F28B449A36320FC36D96F11FEA56
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnFailure_C683F28B449A36320FC36D96F11FEA56()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_C683F28B449A36320FC36D96F11FEA56");

	UMENU_EscapeMenu_C_OnFailure_C683F28B449A36320FC36D96F11FEA56_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_C683F28B449A36320FC36D96F11FEA56
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnSuccess_C683F28B449A36320FC36D96F11FEA56()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_C683F28B449A36320FC36D96F11FEA56");

	UMENU_EscapeMenu_C_OnSuccess_C683F28B449A36320FC36D96F11FEA56_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_218A9EEE48590CCAA620C7BD9900B6A8
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnFailure_218A9EEE48590CCAA620C7BD9900B6A8()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_218A9EEE48590CCAA620C7BD9900B6A8");

	UMENU_EscapeMenu_C_OnFailure_218A9EEE48590CCAA620C7BD9900B6A8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_218A9EEE48590CCAA620C7BD9900B6A8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult* Result                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UMENU_EscapeMenu_C::OnSuccess_218A9EEE48590CCAA620C7BD9900B6A8(struct FBlueprintSessionResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_218A9EEE48590CCAA620C7BD9900B6A8");

	UMENU_EscapeMenu_C_OnSuccess_218A9EEE48590CCAA620C7BD9900B6A8_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_730F188F487EF8647F19229A9AC9433B
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnFailure_730F188F487EF8647F19229A9AC9433B()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_730F188F487EF8647F19229A9AC9433B");

	UMENU_EscapeMenu_C_OnFailure_730F188F487EF8647F19229A9AC9433B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_730F188F487EF8647F19229A9AC9433B
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnSuccess_730F188F487EF8647F19229A9AC9433B()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_730F188F487EF8647F19229A9AC9433B");

	UMENU_EscapeMenu_C_OnSuccess_730F188F487EF8647F19229A9AC9433B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_9986045E4FD278DC31D204A1DF47B8DA
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnFailure_9986045E4FD278DC31D204A1DF47B8DA()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_9986045E4FD278DC31D204A1DF47B8DA");

	UMENU_EscapeMenu_C_OnFailure_9986045E4FD278DC31D204A1DF47B8DA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_9986045E4FD278DC31D204A1DF47B8DA
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnSuccess_9986045E4FD278DC31D204A1DF47B8DA()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_9986045E4FD278DC31D204A1DF47B8DA");

	UMENU_EscapeMenu_C_OnSuccess_9986045E4FD278DC31D204A1DF47B8DA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMENU_EscapeMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.Construct");

	UMENU_EscapeMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnCloseLayout
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnCloseLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnCloseLayout");

	UMENU_EscapeMenu_C_OnCloseLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetFocus
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetFocus");

	UMENU_EscapeMenu_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnQuitGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::OnQuitGame(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnQuitGame");

	UMENU_EscapeMenu_C_OnQuitGame_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnLeaveTeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::OnLeaveTeam(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnLeaveTeam");

	UMENU_EscapeMenu_C_OnLeaveTeam_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_LeaveTeam_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_LeaveTeam_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_LeaveTeam_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_LeaveTeam_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Options_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Options_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Options_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_Options_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Exit_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Exit_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Exit_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_Exit_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Tutorial_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Tutorial_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Tutorial_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_Tutorial_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.PreConstruct");

	UMENU_EscapeMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_InviteFriends_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_InviteFriends_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_InviteFriends_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_InviteFriends_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnShown
// (Event, Public, BlueprintEvent)

void UMENU_EscapeMenu_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnShown");

	UMENU_EscapeMenu_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnClosed
// (Event, Public, BlueprintEvent)

void UMENU_EscapeMenu_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnClosed");

	UMENU_EscapeMenu_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__Basic_ChangeProfile_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__Basic_ChangeProfile_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__Basic_ChangeProfile_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__Basic_ChangeProfile_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnXBoxAccountPickerClosed_Event_1
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnXBoxAccountPickerClosed_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnXBoxAccountPickerClosed_Event_1");

	UMENU_EscapeMenu_C_OnXBoxAccountPickerClosed_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.Answer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::Answer(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.Answer");

	UMENU_EscapeMenu_C_Answer_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.UpdateMissionTime
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::UpdateMissionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.UpdateMissionTime");

	UMENU_EscapeMenu_C_UpdateMissionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Reconnect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Reconnect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Reconnect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_Reconnect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.ExecuteUbergraph_MENU_EscapeMenu
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::ExecuteUbergraph_MENU_EscapeMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.ExecuteUbergraph_MENU_EscapeMenu");

	UMENU_EscapeMenu_C_ExecuteUbergraph_MENU_EscapeMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
