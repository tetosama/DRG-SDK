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

// BlueprintGeneratedClass OBJ_1st_PointExtraction.OBJ_1st_PointExtraction_C
// 0x0000 (0x01A0 - 0x01A0)
class UOBJ_1st_PointExtraction_C : public UOBJ_Gather_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_1st_PointExtraction.OBJ_1st_PointExtraction_C");
		return ptr;
	}


	struct FObjectiveMissionIcon GetMissionIcon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
