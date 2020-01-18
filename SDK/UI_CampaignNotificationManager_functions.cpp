
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

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.UpdateGoogleAnalytics
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CampaignNotificationManager_C::UpdateGoogleAnalytics()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.UpdateGoogleAnalytics");

	UUI_CampaignNotificationManager_C_UpdateGoogleAnalytics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.UpdateCampaignProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowLastMission                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CampaignNotificationManager_C::UpdateCampaignProgressBar(bool* ShowLastMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.UpdateCampaignProgressBar");

	UUI_CampaignNotificationManager_C_UpdateCampaignProgressBar_Params params;
	params.ShowLastMission = ShowLastMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.IsWindowOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_CampaignNotificationManager_C::IsWindowOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.IsWindowOpen");

	UUI_CampaignNotificationManager_C_IsWindowOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CampaignNotificationManager_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnKeyUp");

	UUI_CampaignNotificationManager_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.SetFrameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CampaignNotificationManager_C::SetFrameColor(TEnumAsByte<ENUM_MenuColors>* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.SetFrameColor");

	UUI_CampaignNotificationManager_C_SetFrameColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.GetMissionCompleteShout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDialogDataAsset*        MissionCompleteShout           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CampaignNotificationManager_C::GetMissionCompleteShout(class UDialogDataAsset** MissionCompleteShout)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.GetMissionCompleteShout");

	UUI_CampaignNotificationManager_C_GetMissionCompleteShout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionCompleteShout != nullptr)
		*MissionCompleteShout = params.MissionCompleteShout;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.CreateRewardWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UReward**                Reward                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URewardWidget*           Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CampaignNotificationManager_C::CreateRewardWidget(class UReward** Reward, class URewardWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.CreateRewardWidget");

	UUI_CampaignNotificationManager_C_CreateRewardWidget_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Add Reward List
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UReward*>*        List                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_CampaignNotificationManager_C::Add_Reward_List(TArray<class UReward*>* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Add Reward List");

	UUI_CampaignNotificationManager_C_Add_Reward_List_Params params;
	params.List = List;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Add Reward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UReward**                Reward                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CampaignNotificationManager_C::Add_Reward(class UReward** Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Add Reward");

	UUI_CampaignNotificationManager_C_Add_Reward_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CampaignNotificationManager_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.PreConstruct");

	UUI_CampaignNotificationManager_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_CampaignNotificationManager_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UUI_CampaignNotificationManager_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnShown
// (Event, Public, BlueprintEvent)

void UUI_CampaignNotificationManager_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnShown");

	UUI_CampaignNotificationManager_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnClosed
// (Event, Public, BlueprintEvent)

void UUI_CampaignNotificationManager_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnClosed");

	UUI_CampaignNotificationManager_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.SetMissionControlPaused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsPaused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CampaignNotificationManager_C::SetMissionControlPaused(bool* IsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.SetMissionControlPaused");

	UUI_CampaignNotificationManager_C_SetMissionControlPaused_Params params;
	params.IsPaused = IsPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Continue
// (BlueprintCallable, BlueprintEvent)

void UUI_CampaignNotificationManager_C::Continue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Continue");

	UUI_CampaignNotificationManager_C_Continue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.CursorInputHack
// (BlueprintCallable, BlueprintEvent)

void UUI_CampaignNotificationManager_C::CursorInputHack()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.CursorInputHack");

	UUI_CampaignNotificationManager_C_CursorInputHack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Init Window
// (BlueprintCallable, BlueprintEvent)

void UUI_CampaignNotificationManager_C::Init_Window()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Init Window");

	UUI_CampaignNotificationManager_C_Init_Window_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Start Mission Control Speak
// (BlueprintCallable, BlueprintEvent)

void UUI_CampaignNotificationManager_C::Start_Mission_Control_Speak()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Start Mission Control Speak");

	UUI_CampaignNotificationManager_C_Start_Mission_Control_Speak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnAppearFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_CampaignNotificationManager_C::OnAppearFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnAppearFinished");

	UUI_CampaignNotificationManager_C_OnAppearFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.On Mission Control Finished
// (BlueprintCallable, BlueprintEvent)

void UUI_CampaignNotificationManager_C::On_Mission_Control_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.On Mission Control Finished");

	UUI_CampaignNotificationManager_C_On_Mission_Control_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Count Down
// (BlueprintCallable, BlueprintEvent)

void UUI_CampaignNotificationManager_C::Count_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Count Down");

	UUI_CampaignNotificationManager_C_Count_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Reward Claimed
// (BlueprintCallable, BlueprintEvent)

void UUI_CampaignNotificationManager_C::Reward_Claimed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Reward Claimed");

	UUI_CampaignNotificationManager_C_Reward_Claimed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnNewTopWindow
// (Event, Public, BlueprintEvent)

void UUI_CampaignNotificationManager_C::OnNewTopWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnNewTopWindow");

	UUI_CampaignNotificationManager_C_OnNewTopWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnProgressBarMoveFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_CampaignNotificationManager_C::OnProgressBarMoveFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnProgressBarMoveFinished");

	UUI_CampaignNotificationManager_C_OnProgressBarMoveFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnUpdateProgressBarFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_CampaignNotificationManager_C::OnUpdateProgressBarFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnUpdateProgressBarFinished");

	UUI_CampaignNotificationManager_C_OnUpdateProgressBarFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnProgressBarUpdateStep
// (BlueprintCallable, BlueprintEvent)

void UUI_CampaignNotificationManager_C::OnProgressBarUpdateStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnProgressBarUpdateStep");

	UUI_CampaignNotificationManager_C_OnProgressBarUpdateStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.ExecuteUbergraph_UI_CampaignNotificationManager
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CampaignNotificationManager_C::ExecuteUbergraph_UI_CampaignNotificationManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.ExecuteUbergraph_UI_CampaignNotificationManager");

	UUI_CampaignNotificationManager_C_ExecuteUbergraph_UI_CampaignNotificationManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
