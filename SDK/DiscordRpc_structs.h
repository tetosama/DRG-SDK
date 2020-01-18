#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DiscordRpc.DiscordRichPresence
// 0x00B8
struct FDiscordRichPresence
{
	struct FString                                     State;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     details;                                                  // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                startTimestamp;                                           // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                endTimestamp;                                             // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     largeImageKey;                                            // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     largeImageText;                                           // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     smallImageKey;                                            // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     smallImageText;                                           // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     partyId;                                                  // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                partySize;                                                // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                partyMax;                                                 // 0x007C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     matchSecret;                                              // 0x0080(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     joinSecret;                                               // 0x0090(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     spectateSecret;                                           // 0x00A0(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               instance;                                                 // 0x00B0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct DiscordRpc.DiscordUserData
// 0x0040
struct FDiscordUserData
{
	struct FString                                     userId;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     discriminator;                                            // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     avatar;                                                   // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
