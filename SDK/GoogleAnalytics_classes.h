#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class GoogleAnalytics.GoogleAnalyticsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UGoogleAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GoogleAnalytics.GoogleAnalyticsBlueprintLibrary");
		return ptr;
	}


	void STATIC_SetTrackingId(struct FString* TrackingId);
	void STATIC_SetAnonymizeIP(bool* Anonymize);
	void STATIC_RecordGoogleUserTiming(struct FString* TimingCategory, int* TimingValue, struct FString* TimingName, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics);
	void STATIC_RecordGoogleSocialInteraction(struct FString* SocialNetwork, struct FString* SocialAction, struct FString* SocialTarget, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics);
	void STATIC_RecordGoogleScreen(struct FString* ScreenName, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics);
	void STATIC_RecordGoogleEvent(struct FString* EventCategory, struct FString* EventAction, struct FString* EventLabel, int* EventValue, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics);
	struct FString STATIC_GetTrackingId();
};


// Class GoogleAnalytics.GoogleAnalyticsSettings
// 0x0008 (0x0030 - 0x0028)
class UGoogleAnalyticsSettings : public UObject
{
public:
	bool                                               bEnableIDFACollection;                                    // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GoogleAnalytics.GoogleAnalyticsSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
