
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

// Function UI_RewardUnlock.UI_RewardUnlock_C.GetUnlockDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   OutTitle                       (Parm, OutParm)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            IconTint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              BigImage                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_RewardUnlock_C::GetUnlockDetails(struct FText* OutTitle, class UTexture2D** Icon, struct FLinearColor* IconTint, class UTexture2D** BigImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock.UI_RewardUnlock_C.GetUnlockDetails");

	UUI_RewardUnlock_C_GetUnlockDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTitle != nullptr)
		*OutTitle = params.OutTitle;
	if (Icon != nullptr)
		*Icon = params.Icon;
	if (IconTint != nullptr)
		*IconTint = params.IconTint;
	if (BigImage != nullptr)
		*BigImage = params.BigImage;
}


// Function UI_RewardUnlock.UI_RewardUnlock_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RewardUnlock_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock.UI_RewardUnlock_C.PreConstruct");

	UUI_RewardUnlock_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RewardUnlock.UI_RewardUnlock_C.PlayReceiveAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UUI_RewardUnlock_C::PlayReceiveAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock.UI_RewardUnlock_C.PlayReceiveAnim");

	UUI_RewardUnlock_C_PlayReceiveAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RewardUnlock.UI_RewardUnlock_C.ExecuteUbergraph_UI_RewardUnlock
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RewardUnlock_C::ExecuteUbergraph_UI_RewardUnlock(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock.UI_RewardUnlock_C.ExecuteUbergraph_UI_RewardUnlock");

	UUI_RewardUnlock_C_ExecuteUbergraph_UI_RewardUnlock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
