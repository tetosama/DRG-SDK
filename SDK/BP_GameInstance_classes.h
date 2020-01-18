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

// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// 0x0030 (0x1760 - 0x1730)
class UBP_GameInstance_C : public UFSDGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1730(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnAvailableCraftingItems;                                 // 0x1738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               EligibleForRetirementAssignment;                          // 0x1748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1749(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEligibleForRetirementAssignment;                        // 0x1750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C");
		return ptr;
	}


	void IsEligibleForRetirementAassignment(bool* EligibleForRetirementAssignment);
	void SetEligibleForRetirementAssignment(bool* IsEligible);
	void OnFailure_D72617F2470A6492F0633884F8A94A97();
	void OnSuccess_D72617F2470A6492F0633884F8A94A97();
	void OnFailure_E6A52403462766A65D96D581DEE58F2A();
	void OnSuccess_E6A52403462766A65D96D581DEE58F2A();
	void ReceiveInit();
	void JoinFriendInvite(struct FBlueprintSessionResult* Session);
	void OnLoadComplete(struct FString* MapName);
	void ExecuteUbergraph_BP_GameInstance(int* EntryPoint);
	void OnEligibleForRetirementAssignment__DelegateSignature(class UBP_GameInstance_C** GameInstance);
	void OnAvailableCraftingItems__DelegateSignature(TArray<TScriptInterface<class UCraftable>>* NewItems);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
