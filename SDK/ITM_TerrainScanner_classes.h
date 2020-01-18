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

// BlueprintGeneratedClass ITM_TerrainScanner.ITM_TerrainScanner_C
// 0x0018 (0x04F8 - 0x04E0)
class AITM_TerrainScanner_C : public ATerrainScannerItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      HUD;                                                      // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ITM_TerrainScanner.ITM_TerrainScanner_C");
		return ptr;
	}


	void AddedToInventory(class APlayerCharacter** ItemOwner);
	void OnTerrainScannerPressed();
	void OnTerrainScannerReleased();
	void ExecuteUbergraph_ITM_TerrainScanner(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
