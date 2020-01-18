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

// Enum TimeSynth.ETimeSynthEventQuantization
enum class ETimeSynthEventQuantization : uint8_t
{
	ETimeSynthEventQuantization__None = 0,
	ETimeSynthEventQuantization__Bars8 = 1,
	ETimeSynthEventQuantization__Bars4 = 2,
	ETimeSynthEventQuantization__Bars2 = 3,
	ETimeSynthEventQuantization__Bar = 4,
	ETimeSynthEventQuantization__HalfNote = 5,
	ETimeSynthEventQuantization__HalfNoteTriplet = 6,
	ETimeSynthEventQuantization__QuarterNote = 7,
	ETimeSynthEventQuantization__QuarterNoteTriplet = 8,
	ETimeSynthEventQuantization__EighthNote = 9,
	ETimeSynthEventQuantization__EighthNoteTriplet = 10,
	ETimeSynthEventQuantization__SixteenthNote = 11,
	ETimeSynthEventQuantization__SixteenthNoteTriplet = 12,
	ETimeSynthEventQuantization__ThirtySecondNote = 13,
	ETimeSynthEventQuantization__Count = 14,
	ETimeSynthEventQuantization__ETimeSynthEventQuantization_MAX = 15
};


// Enum TimeSynth.ETimeSynthEnvelopeFollowerPeakMode
enum class ETimeSynthEnvelopeFollowerPeakMode : uint8_t
{
	ETimeSynthEnvelopeFollowerPeakMode__MeanSquared = 0,
	ETimeSynthEnvelopeFollowerPeakMode__RootMeanSquared = 1,
	ETimeSynthEnvelopeFollowerPeakMode__Peak = 2,
	ETimeSynthEnvelopeFollowerPeakMode__Count = 3,
	ETimeSynthEnvelopeFollowerPeakMode__ETimeSynthEnvelopeFollowerPeakMode_MAX = 4
};


// Enum TimeSynth.ETimeSynthFilterType
enum class ETimeSynthFilterType : uint8_t
{
	ETimeSynthFilterType__LowPass  = 0,
	ETimeSynthFilterType__HighPass = 1,
	ETimeSynthFilterType__BandPass = 2,
	ETimeSynthFilterType__BandStop = 3,
	ETimeSynthFilterType__Count    = 4,
	ETimeSynthFilterType__ETimeSynthFilterType_MAX = 5
};


// Enum TimeSynth.ETimeSynthFilter
enum class ETimeSynthFilter : uint8_t
{
	ETimeSynthFilter__FilterA      = 0,
	ETimeSynthFilter__FilterB      = 1,
	ETimeSynthFilter__Count        = 2,
	ETimeSynthFilter__ETimeSynthFilter_MAX = 3
};


// Enum TimeSynth.ETimeSynthEventClipQuantization
enum class ETimeSynthEventClipQuantization : uint8_t
{
	ETimeSynthEventClipQuantization__Global = 0,
	ETimeSynthEventClipQuantization__None = 1,
	ETimeSynthEventClipQuantization__Bars8 = 2,
	ETimeSynthEventClipQuantization__Bars4 = 3,
	ETimeSynthEventClipQuantization__Bars2 = 4,
	ETimeSynthEventClipQuantization__Bar = 5,
	ETimeSynthEventClipQuantization__HalfNote = 6,
	ETimeSynthEventClipQuantization__HalfNoteTriplet = 7,
	ETimeSynthEventClipQuantization__QuarterNote = 8,
	ETimeSynthEventClipQuantization__QuarterNoteTriplet = 9,
	ETimeSynthEventClipQuantization__EighthNote = 10,
	ETimeSynthEventClipQuantization__EighthNoteTriplet = 11,
	ETimeSynthEventClipQuantization__SixteenthNote = 12,
	ETimeSynthEventClipQuantization__SixteenthNoteTriplet = 13,
	ETimeSynthEventClipQuantization__ThirtySecondNote = 14,
	ETimeSynthEventClipQuantization__Count = 15,
	ETimeSynthEventClipQuantization__ETimeSynthEventClipQuantization_MAX = 16
};


// Enum TimeSynth.ETimeSynthFFTSize
enum class ETimeSynthFFTSize : uint8_t
{
	ETimeSynthFFTSize__Min         = 0,
	ETimeSynthFFTSize__Small       = 1,
	ETimeSynthFFTSize__Medium      = 2,
	ETimeSynthFFTSize__Large       = 3,
	ETimeSynthFFTSize__ETimeSynthFFTSize_MAX = 4
};


// Enum TimeSynth.ETimeSynthBeatDivision
enum class ETimeSynthBeatDivision : uint8_t
{
	ETimeSynthBeatDivision__One    = 0,
	ETimeSynthBeatDivision__Two    = 1,
	ETimeSynthBeatDivision__Four   = 2,
	ETimeSynthBeatDivision__Eight  = 3,
	ETimeSynthBeatDivision__Sixteen = 4,
	ETimeSynthBeatDivision__Count  = 5,
	ETimeSynthBeatDivision__ETimeSynthBeatDivision_MAX = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TimeSynth.TimeSynthClipSound
// 0x0018
struct FTimeSynthClipSound
{
	class USoundWave*                                  SoundWave;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomWeight;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DistanceRange;                                            // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct TimeSynth.TimeSynthTimeDef
// 0x0008
struct FTimeSynthTimeDef
{
	int                                                NumBars;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumBeats;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TimeSynth.TimeSynthQuantizationSettings
// 0x0014
struct FTimeSynthQuantizationSettings
{
	float                                              BeatsPerMinute;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BeatsPerBar;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ETimeSynthBeatDivision                             BeatDivision;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              EventDelaySeconds;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ETimeSynthEventQuantization                        GlobalQuantization;                                       // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct TimeSynth.TimeSynthFilterSettings
// 0x000C
struct FTimeSynthFilterSettings
{
	ETimeSynthFilterType                               FilterType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CutoffFrequency;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilterQ;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TimeSynth.TimeSynthEnvelopeFollowerSettings
// 0x000C
struct FTimeSynthEnvelopeFollowerSettings
{
	float                                              AttackTime;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReleaseTime;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ETimeSynthEnvelopeFollowerPeakMode                 PeakMode;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAnalogMode;                                            // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct TimeSynth.TimeSynthClipHandle
// 0x000C
struct FTimeSynthClipHandle
{
	struct FName                                       ClipName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ClipId;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TimeSynth.TimeSynthSpectralData
// 0x0008
struct FTimeSynthSpectralData
{
	float                                              FrequencyHz;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
