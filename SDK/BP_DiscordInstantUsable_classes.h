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

// BlueprintGeneratedClass BP_DiscordInstantUsable.BP_DiscordInstantUsable_C
// 0x0000 (0x0180 - 0x0180)
class UBP_DiscordInstantUsable_C : public UBPInstantUsable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DiscordInstantUsable.BP_DiscordInstantUsable_C");
		return ptr;
	}


	bool BPCanUse(class APlayerCharacter** user, class USceneComponent** UseCollider);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
