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

// BlueprintGeneratedClass MAG_M1000.MAG_M1000_C
// 0x0000 (0x036C - 0x036C)
class AMAG_M1000_C : public AMAG_BaseClass_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MAG_M1000.MAG_M1000_C");
		return ptr;
	}


	bool Released();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
