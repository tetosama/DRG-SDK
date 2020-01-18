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

// BlueprintGeneratedClass GM_Mining.GM_Mining_C
// 0x0008 (0x05E0 - 0x05D8)
class AGM_Mining_C : public ABP_NetworkPlayGameMode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GM_Mining.GM_Mining_C");
		return ptr;
	}


	void BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature();
	void DonkeyButtonPressed();
	void ExecuteUbergraph_GM_Mining(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
