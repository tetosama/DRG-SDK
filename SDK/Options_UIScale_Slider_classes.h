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

// WidgetBlueprintGeneratedClass Options_UIScale_Slider.Options_UIScale_Slider_C
// 0x0020 (0x0250 - 0x0230)
class UOptions_UIScale_Slider_C : public USoundClassWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Slider_C*                             Basic_Slider;                                             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnVolumeChanged;                                          // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_UIScale_Slider.Options_UIScale_Slider_C");
		return ptr;
	}


	void Construct();
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(float* Value);
	void ExecuteUbergraph_Options_UIScale_Slider(int* EntryPoint);
	void OnVolumeChanged__DelegateSignature(float* Volume);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
