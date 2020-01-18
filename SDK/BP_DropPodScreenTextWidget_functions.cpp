
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

// Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_DropPodScreenTextWidget_C::SetColor(struct FSlateColor* InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.SetColor");

	UBP_DropPodScreenTextWidget_C_SetColor_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_DropPodScreenTextWidget_C::SetText(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.SetText");

	UBP_DropPodScreenTextWidget_C_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenTextWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.Tick");

	UBP_DropPodScreenTextWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenTextWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.PreConstruct");

	UBP_DropPodScreenTextWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.ExecuteUbergraph_BP_DropPodScreenTextWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DropPodScreenTextWidget_C::ExecuteUbergraph_BP_DropPodScreenTextWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.ExecuteUbergraph_BP_DropPodScreenTextWidget");

	UBP_DropPodScreenTextWidget_C_ExecuteUbergraph_BP_DropPodScreenTextWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
