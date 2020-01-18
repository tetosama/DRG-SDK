
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

// Function ITM_SkinIcon.ITM_SkinIcon_C.SetBucketVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowBucket                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SkinIcon_C::SetBucketVisibility(bool* ShowBucket)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinIcon.ITM_SkinIcon_C.SetBucketVisibility");

	UITM_SkinIcon_C_SetBucketVisibility_Params params;
	params.ShowBucket = ShowBucket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinIcon.ITM_SkinIcon_C.SetOutlineTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SkinIcon_C::SetOutlineTint(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinIcon.ITM_SkinIcon_C.SetOutlineTint");

	UITM_SkinIcon_C_SetOutlineTint_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinIcon.ITM_SkinIcon_C.GetIsLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_SkinIcon_C::GetIsLocked(bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinIcon.ITM_SkinIcon_C.GetIsLocked");

	UITM_SkinIcon_C_GetIsLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;
}


// Function ITM_SkinIcon.ITM_SkinIcon_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SkinIcon_C::SetSize(float* InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinIcon.ITM_SkinIcon_C.SetSize");

	UITM_SkinIcon_C_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinIcon.ITM_SkinIcon_C.SetSkin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemSkin**              InSkin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InIsLocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SkinIcon_C::SetSkin(class UItemSkin** InSkin, bool* InIsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinIcon.ITM_SkinIcon_C.SetSkin");

	UITM_SkinIcon_C_SetSkin_Params params;
	params.InSkin = InSkin;
	params.InIsLocked = InIsLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinIcon.ITM_SkinIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SkinIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinIcon.ITM_SkinIcon_C.PreConstruct");

	UITM_SkinIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinIcon.ITM_SkinIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_SkinIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinIcon.ITM_SkinIcon_C.Construct");

	UITM_SkinIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SkinIcon.ITM_SkinIcon_C.ExecuteUbergraph_ITM_SkinIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SkinIcon_C::ExecuteUbergraph_ITM_SkinIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinIcon.ITM_SkinIcon_C.ExecuteUbergraph_ITM_SkinIcon");

	UITM_SkinIcon_C_ExecuteUbergraph_ITM_SkinIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
