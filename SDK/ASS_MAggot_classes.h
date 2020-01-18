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

// AnimBlueprintGeneratedClass ASS_MAggot.ASS_Maggot_C
// 0x00A0 (0x0330 - 0x0290)
class UASS_Maggot_C : public UAnimSharingStateInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DE9FB7AB4AA9B5083C2D5A88EBE4C5E1;      // 0x0298(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_598CB8044A2ED99809D524AB82CB9DA8;// 0x02B8(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ASS_MAggot.ASS_Maggot_C");
		return ptr;
	}


	void ExecuteUbergraph_ASS_Maggot(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
