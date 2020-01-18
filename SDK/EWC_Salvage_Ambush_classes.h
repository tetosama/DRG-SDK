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

// BlueprintGeneratedClass EWC_Salvage_Ambush.EWC_Salvage_Ambush_C
// 0x0014 (0x005C - 0x0048)
class UEWC_Salvage_Ambush_C : public UEWC_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     MuleLocation;                                             // 0x0050(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EWC_Salvage_Ambush.EWC_Salvage_Ambush_C");
		return ptr;
	}


	void StartWave();
	void ExecuteUbergraph_EWC_Salvage_Ambush(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
