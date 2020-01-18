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

// BlueprintGeneratedClass BP_ZipLineState.BP_ZipLineState_C
// 0x0000 (0x01E8 - 0x01E8)
class UBP_ZipLineState_C : public UZipLineStateComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZipLineState.BP_ZipLineState_C");
		return ptr;
	}


	struct FVector GetJumpVector(struct FVector* LookVector, struct FVector* CurrentVelocity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
