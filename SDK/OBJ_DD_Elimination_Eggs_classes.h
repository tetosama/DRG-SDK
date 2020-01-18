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

// BlueprintGeneratedClass OBJ_DD_Elimination_Eggs.OBJ_DD_Elimination_Eggs_C
// 0x0000 (0x01F8 - 0x01F8)
class UOBJ_DD_Elimination_Eggs_C : public UOBJ_Eliminate_Eggs_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_DD_Elimination_Eggs.OBJ_DD_Elimination_Eggs_C");
		return ptr;
	}


	int GetObjectiveAmount(float* missionLength);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
