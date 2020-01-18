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

// BlueprintGeneratedClass LIB_Input.LIB_Input_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_Input_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_Input.LIB_Input_C");
		return ptr;
	}


	bool STATIC_IsOkMenu(struct FKeyEvent* Input, class UObject** __WorldContext);
	bool STATIC_IsCloseMenu(class UObject** __WorldContext, struct FKeyEvent* Input);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
