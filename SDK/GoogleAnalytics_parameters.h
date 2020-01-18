#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetTrackingId
struct UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Params
{
	struct FString*                                    TrackingId;                                               // (Parm, ZeroConstructor)
};

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetAnonymizeIP
struct UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Params
{
	bool*                                              Anonymize;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleUserTiming
struct UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Params
{
	struct FString*                                    TimingCategory;                                           // (Parm, ZeroConstructor)
	int*                                               TimingValue;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    TimingName;                                               // (Parm, ZeroConstructor)
	TArray<struct FCustomDimension>*                   CustomDimensions;                                         // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FCustomMetric>*                      CustomMetrics;                                            // (ConstParm, Parm, ZeroConstructor)
};

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleSocialInteraction
struct UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Params
{
	struct FString*                                    SocialNetwork;                                            // (Parm, ZeroConstructor)
	struct FString*                                    SocialAction;                                             // (Parm, ZeroConstructor)
	struct FString*                                    SocialTarget;                                             // (Parm, ZeroConstructor)
	TArray<struct FCustomDimension>*                   CustomDimensions;                                         // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FCustomMetric>*                      CustomMetrics;                                            // (ConstParm, Parm, ZeroConstructor)
};

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleScreen
struct UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Params
{
	struct FString*                                    ScreenName;                                               // (Parm, ZeroConstructor)
	TArray<struct FCustomDimension>*                   CustomDimensions;                                         // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FCustomMetric>*                      CustomMetrics;                                            // (ConstParm, Parm, ZeroConstructor)
};

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleEvent
struct UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Params
{
	struct FString*                                    EventCategory;                                            // (Parm, ZeroConstructor)
	struct FString*                                    EventAction;                                              // (Parm, ZeroConstructor)
	struct FString*                                    EventLabel;                                               // (Parm, ZeroConstructor)
	int*                                               EventValue;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCustomDimension>*                   CustomDimensions;                                         // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FCustomMetric>*                      CustomMetrics;                                            // (ConstParm, Parm, ZeroConstructor)
};

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.GetTrackingId
struct UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
