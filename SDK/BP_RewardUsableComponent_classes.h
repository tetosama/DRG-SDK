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

// BlueprintGeneratedClass BP_RewardUsableComponent.BP_RewardUsableComponent_C
// 0x0000 (0x0210 - 0x0210)
class UBP_RewardUsableComponent_C : public UEventRewarderUsableComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RewardUsableComponent.BP_RewardUsableComponent_C");
		return ptr;
	}


	struct FText CreateUseText(int* blankSchematicCount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
