
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

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetTrackingId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                TrackingId                     (Parm, ZeroConstructor)

void UGoogleAnalyticsBlueprintLibrary::STATIC_SetTrackingId(struct FString* TrackingId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetTrackingId");

	UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Params params;
	params.TrackingId = TrackingId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetAnonymizeIP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          Anonymize                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGoogleAnalyticsBlueprintLibrary::STATIC_SetAnonymizeIP(bool* Anonymize)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetAnonymizeIP");

	UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Params params;
	params.Anonymize = Anonymize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleUserTiming
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                TimingCategory                 (Parm, ZeroConstructor)
// int*                           TimingValue                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                TimingName                     (Parm, ZeroConstructor)
// TArray<struct FCustomDimension>* CustomDimensions               (ConstParm, Parm, ZeroConstructor)
// TArray<struct FCustomMetric>*  CustomMetrics                  (ConstParm, Parm, ZeroConstructor)

void UGoogleAnalyticsBlueprintLibrary::STATIC_RecordGoogleUserTiming(struct FString* TimingCategory, int* TimingValue, struct FString* TimingName, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleUserTiming");

	UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Params params;
	params.TimingCategory = TimingCategory;
	params.TimingValue = TimingValue;
	params.TimingName = TimingName;
	params.CustomDimensions = CustomDimensions;
	params.CustomMetrics = CustomMetrics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleSocialInteraction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                SocialNetwork                  (Parm, ZeroConstructor)
// struct FString*                SocialAction                   (Parm, ZeroConstructor)
// struct FString*                SocialTarget                   (Parm, ZeroConstructor)
// TArray<struct FCustomDimension>* CustomDimensions               (ConstParm, Parm, ZeroConstructor)
// TArray<struct FCustomMetric>*  CustomMetrics                  (ConstParm, Parm, ZeroConstructor)

void UGoogleAnalyticsBlueprintLibrary::STATIC_RecordGoogleSocialInteraction(struct FString* SocialNetwork, struct FString* SocialAction, struct FString* SocialTarget, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleSocialInteraction");

	UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Params params;
	params.SocialNetwork = SocialNetwork;
	params.SocialAction = SocialAction;
	params.SocialTarget = SocialTarget;
	params.CustomDimensions = CustomDimensions;
	params.CustomMetrics = CustomMetrics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                ScreenName                     (Parm, ZeroConstructor)
// TArray<struct FCustomDimension>* CustomDimensions               (ConstParm, Parm, ZeroConstructor)
// TArray<struct FCustomMetric>*  CustomMetrics                  (ConstParm, Parm, ZeroConstructor)

void UGoogleAnalyticsBlueprintLibrary::STATIC_RecordGoogleScreen(struct FString* ScreenName, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleScreen");

	UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Params params;
	params.ScreenName = ScreenName;
	params.CustomDimensions = CustomDimensions;
	params.CustomMetrics = CustomMetrics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                EventCategory                  (Parm, ZeroConstructor)
// struct FString*                EventAction                    (Parm, ZeroConstructor)
// struct FString*                EventLabel                     (Parm, ZeroConstructor)
// int*                           EventValue                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FCustomDimension>* CustomDimensions               (ConstParm, Parm, ZeroConstructor)
// TArray<struct FCustomMetric>*  CustomMetrics                  (ConstParm, Parm, ZeroConstructor)

void UGoogleAnalyticsBlueprintLibrary::STATIC_RecordGoogleEvent(struct FString* EventCategory, struct FString* EventAction, struct FString* EventLabel, int* EventValue, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleEvent");

	UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Params params;
	params.EventCategory = EventCategory;
	params.EventAction = EventAction;
	params.EventLabel = EventLabel;
	params.EventValue = EventValue;
	params.CustomDimensions = CustomDimensions;
	params.CustomMetrics = CustomMetrics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.GetTrackingId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGoogleAnalyticsBlueprintLibrary::STATIC_GetTrackingId()
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.GetTrackingId");

	UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
