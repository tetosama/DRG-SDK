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

// WidgetBlueprintGeneratedClass WND_MissionBar.WND_MissionBar_C
// 0x0010 (0x0240 - 0x0230)
class UWND_MissionBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                CanvasRoot;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_MissionBar.WND_MissionBar_C");
		return ptr;
	}


	void SetMissionType(EMissionStructure* Type);
	void SetGeneratedMission(class UGeneratedMission** InMission);
	void OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission);
	void Construct();
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_WND_MissionBar(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
