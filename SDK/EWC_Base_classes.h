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

// BlueprintGeneratedClass EWC_Base.EWC_Base_C
// 0x0018 (0x0048 - 0x0030)
class UEWC_Base_C : public UEnemyWaveController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class USoundCue*>                           Music;                                                    // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EWC_Base.EWC_Base_C");
		return ptr;
	}


	void PlayWaveMusic();
	void PlayEndWaveMusic();
	void StopWaveMusic();
	void ExecuteUbergraph_EWC_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
