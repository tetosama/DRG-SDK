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

// BlueprintGeneratedClass BP_ResupplierLogic.BP_ResupplierLogic_C
// 0x000C (0x0104 - 0x00F8)
class UBP_ResupplierLogic_C : public UPerkLogic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                AutoReloadRank;                                           // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ResupplierLogic.BP_ResupplierLogic_C");
		return ptr;
	}


	struct FText GetAdditionalText(int* Rank);
	void StartLogic(int* Rank);
	void OnResupplied(float* percentage);
	void Client_InstantlyReload();
	void ExecuteUbergraph_BP_ResupplierLogic(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
