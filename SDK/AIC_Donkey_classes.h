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

// BlueprintGeneratedClass AIC_Donkey.AIC_Donkey_C
// 0x0008 (0x0458 - 0x0450)
class AAIC_Donkey_C : public AFSDAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIC_Donkey.AIC_Donkey_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnOverlapsChanged(int* OverlapCount);
	void ExecuteUbergraph_AIC_Donkey(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
