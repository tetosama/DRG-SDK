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

// BlueprintGeneratedClass GM_Tutorial.GM_Tutorial_C
// 0x0008 (0x05E8 - 0x05E0)
class AGM_Tutorial_C : public AGM_Mining_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GM_Tutorial.GM_Tutorial_C");
		return ptr;
	}


	void SpawnBosco(struct FTransform* Location);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GM_Tutorial(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
