#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum FSDAnsel.EUIControlEffectTarget
enum class EUIControlEffectTarget : uint8_t
{
	Bloom                          = 0,
	DepthOfField                   = 1,
	ChromaticAberration            = 2,
	MotionBlur                     = 3,
	EUIControlEffectTarget_MAX     = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
