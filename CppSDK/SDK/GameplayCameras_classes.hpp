﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayCameras

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MovieSceneTracks_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayCameras_structs.hpp"


namespace SDK
{

// Class GameplayCameras.TestCameraShake
// 0x0000 (0x00B0 - 0x00B0)
class UTestCameraShake final : public UCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestCameraShake">();
	}
	static class UTestCameraShake* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestCameraShake>();
	}
};
static_assert(alignof(UTestCameraShake) == 0x000010, "Wrong alignment on UTestCameraShake");
static_assert(sizeof(UTestCameraShake) == 0x0000B0, "Wrong size on UTestCameraShake");

// Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneMatineeCameraShakeEvaluator final : public UMovieSceneCameraShakeEvaluator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneMatineeCameraShakeEvaluator">();
	}
	static class UMovieSceneMatineeCameraShakeEvaluator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneMatineeCameraShakeEvaluator>();
	}
};
static_assert(alignof(UMovieSceneMatineeCameraShakeEvaluator) == 0x000008, "Wrong alignment on UMovieSceneMatineeCameraShakeEvaluator");
static_assert(sizeof(UMovieSceneMatineeCameraShakeEvaluator) == 0x000028, "Wrong size on UMovieSceneMatineeCameraShakeEvaluator");

// Class GameplayCameras.SimpleCameraShakePattern
// 0x0010 (0x0038 - 0x0028)
class USimpleCameraShakePattern : public UCameraShakePattern
{
public:
	float                                         duration;                                          // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         blendInTime;                                       // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         blendOutTime;                                      // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimpleCameraShakePattern">();
	}
	static class USimpleCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleCameraShakePattern>();
	}
};
static_assert(alignof(USimpleCameraShakePattern) == 0x000008, "Wrong alignment on USimpleCameraShakePattern");
static_assert(sizeof(USimpleCameraShakePattern) == 0x000038, "Wrong size on USimpleCameraShakePattern");
static_assert(offsetof(USimpleCameraShakePattern, duration) == 0x000028, "Member 'USimpleCameraShakePattern::duration' has a wrong offset!");
static_assert(offsetof(USimpleCameraShakePattern, blendInTime) == 0x00002C, "Member 'USimpleCameraShakePattern::blendInTime' has a wrong offset!");
static_assert(offsetof(USimpleCameraShakePattern, blendOutTime) == 0x000030, "Member 'USimpleCameraShakePattern::blendOutTime' has a wrong offset!");

// Class GameplayCameras.ConstantCameraShakePattern
// 0x0018 (0x0050 - 0x0038)
class UConstantCameraShakePattern final : public USimpleCameraShakePattern
{
public:
	struct FVector                                LocationOffset;                                    // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RotationOffset;                                    // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConstantCameraShakePattern">();
	}
	static class UConstantCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConstantCameraShakePattern>();
	}
};
static_assert(alignof(UConstantCameraShakePattern) == 0x000008, "Wrong alignment on UConstantCameraShakePattern");
static_assert(sizeof(UConstantCameraShakePattern) == 0x000050, "Wrong size on UConstantCameraShakePattern");
static_assert(offsetof(UConstantCameraShakePattern, LocationOffset) == 0x000038, "Member 'UConstantCameraShakePattern::LocationOffset' has a wrong offset!");
static_assert(offsetof(UConstantCameraShakePattern, RotationOffset) == 0x000044, "Member 'UConstantCameraShakePattern::RotationOffset' has a wrong offset!");

// Class GameplayCameras.CompositeCameraShakePattern
// 0x0020 (0x0048 - 0x0028)
class UCompositeCameraShakePattern final : public UCameraShakePattern
{
public:
	TArray<class UCameraShakePattern*>            ChildPatterns;                                     // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x10];                                      // 0x0038(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompositeCameraShakePattern">();
	}
	static class UCompositeCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompositeCameraShakePattern>();
	}
};
static_assert(alignof(UCompositeCameraShakePattern) == 0x000008, "Wrong alignment on UCompositeCameraShakePattern");
static_assert(sizeof(UCompositeCameraShakePattern) == 0x000048, "Wrong size on UCompositeCameraShakePattern");
static_assert(offsetof(UCompositeCameraShakePattern, ChildPatterns) == 0x000028, "Member 'UCompositeCameraShakePattern::ChildPatterns' has a wrong offset!");

// Class GameplayCameras.DefaultCameraShakeBase
// 0x0000 (0x00B0 - 0x00B0)
class UDefaultCameraShakeBase final : public UCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DefaultCameraShakeBase">();
	}
	static class UDefaultCameraShakeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultCameraShakeBase>();
	}
};
static_assert(alignof(UDefaultCameraShakeBase) == 0x000010, "Wrong alignment on UDefaultCameraShakeBase");
static_assert(sizeof(UDefaultCameraShakeBase) == 0x0000B0, "Wrong size on UDefaultCameraShakeBase");

// Class GameplayCameras.MatineeCameraShake
// 0x0100 (0x01B0 - 0x00B0)
class UMatineeCameraShake final : public UCameraShakeBase
{
public:
	float                                         OscillationDuration;                               // 0x00A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OscillationBlendInTime;                            // 0x00AC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OscillationBlendOutTime;                           // 0x00B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FROscillator                           RotOscillation;                                    // 0x00B4(0x0024)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVOscillator                           LocOscillation;                                    // 0x00D8(0x0024)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           FOVOscillation;                                    // 0x00FC(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         AnimPlayRate;                                      // 0x0108(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimScale;                                         // 0x010C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimBlendInTime;                                   // 0x0110(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimBlendOutTime;                                  // 0x0114(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RandomAnimSegmentDuration;                         // 0x0118(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraAnim*                            Anim;                                              // 0x0120(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraAnimationSequence*               AnimSequence;                                      // 0x0128(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bRandomAnimSegment : 1;                            // 0x0130(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_131[0x3];                                      // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OscillatorTimeRemaining;                           // 0x0134(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraAnimInst*                        AnimInst;                                          // 0x0138(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_140[0x40];                                     // 0x0140(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	class USequenceCameraShakePattern*            SequenceShakePattern;                              // 0x0180(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_188[0x28];                                     // 0x0188(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UMatineeCameraShake* StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class UMatineeCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);
	static class UMatineeCameraShake* StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class UMatineeCameraShake> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);

	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);
	void ReceivePlayShake(float Scale);
	void ReceiveStopShake(bool bImmediately);

	bool ReceiveIsFinished() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MatineeCameraShake">();
	}
	static class UMatineeCameraShake* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatineeCameraShake>();
	}
};
static_assert(alignof(UMatineeCameraShake) == 0x000010, "Wrong alignment on UMatineeCameraShake");
static_assert(sizeof(UMatineeCameraShake) == 0x0001B0, "Wrong size on UMatineeCameraShake");
static_assert(offsetof(UMatineeCameraShake, OscillationDuration) == 0x0000A8, "Member 'UMatineeCameraShake::OscillationDuration' has a wrong offset!");
static_assert(offsetof(UMatineeCameraShake, OscillationBlendInTime) == 0x0000AC, "Member 'UMatineeCameraShake::OscillationBlendInTime' has a wrong offset!");
static_assert(offsetof(UMatineeCameraShake, OscillationBlendOutTime) == 0x0000B0, "Member 'UMatineeCameraShake::OscillationBlendOutTime' has a wrong offset!");
static_assert(offsetof(UMatineeCameraShake, RotOscillation) == 0x0000B4, "Member 'UMatineeCameraShake::RotOscillation' has a wrong offset!");
static_assert(offsetof(UMatineeCameraShake, LocOscillation) == 0x0000D8, "Member 'UMatineeCameraShake::LocOscillation' has a wrong offset!");
static_assert(offsetof(UMatineeCameraShake, FOVOscillation) == 0x0000FC, "Member 'UMatineeCameraShake::FOVOscillation' has a wrong offset!");
static_assert(offsetof(UMatineeCameraShake, AnimPlayRate) == 0x000108, "Member 'UMatineeCameraShake::AnimPlayRate' has a wrong offset!");
static_assert(offsetof(UMatineeCameraShake, AnimScale) == 0x00010C, "Member 'UMatineeCameraShake::AnimScale' has a wrong offset!");
static_assert(offsetof(UMatineeCameraShake, AnimBlendInTime) == 0x000110, "Member 'UMatineeCameraShake::AnimBlendInTime' has a wrong offset!");
static_assert(offsetof(UMatineeCameraShake, AnimBlendOutTime) == 0x000114, "Member 'UMatineeCameraShake::AnimBlendOutTime' has a wrong offset!");
static_assert(offsetof(UMatineeCameraShake, RandomAnimSegmentDuration) == 0x000118, "Member 'UMatineeCameraShake::RandomAnimSegmentDuration' has a wrong offset!");
static_assert(offsetof(UMatineeCameraShake, Anim) == 0x000120, "Member 'UMatineeCameraShake::Anim' has a wrong offset!");
static_assert(offsetof(UMatineeCameraShake, AnimSequence) == 0x000128, "Member 'UMatineeCameraShake::AnimSequence' has a wrong offset!");
static_assert(offsetof(UMatineeCameraShake, OscillatorTimeRemaining) == 0x000134, "Member 'UMatineeCameraShake::OscillatorTimeRemaining' has a wrong offset!");
static_assert(offsetof(UMatineeCameraShake, AnimInst) == 0x000138, "Member 'UMatineeCameraShake::AnimInst' has a wrong offset!");
static_assert(offsetof(UMatineeCameraShake, SequenceShakePattern) == 0x000180, "Member 'UMatineeCameraShake::SequenceShakePattern' has a wrong offset!");

// Class GameplayCameras.MatineeCameraShakePattern
// 0x0000 (0x0028 - 0x0028)
class UMatineeCameraShakePattern final : public UCameraShakePattern
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MatineeCameraShakePattern">();
	}
	static class UMatineeCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatineeCameraShakePattern>();
	}
};
static_assert(alignof(UMatineeCameraShakePattern) == 0x000008, "Wrong alignment on UMatineeCameraShakePattern");
static_assert(sizeof(UMatineeCameraShakePattern) == 0x000028, "Wrong size on UMatineeCameraShakePattern");

// Class GameplayCameras.MatineeCameraShakeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMatineeCameraShakeFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UMatineeCameraShake* Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MatineeCameraShakeFunctionLibrary">();
	}
	static class UMatineeCameraShakeFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatineeCameraShakeFunctionLibrary>();
	}
};
static_assert(alignof(UMatineeCameraShakeFunctionLibrary) == 0x000008, "Wrong alignment on UMatineeCameraShakeFunctionLibrary");
static_assert(sizeof(UMatineeCameraShakeFunctionLibrary) == 0x000028, "Wrong size on UMatineeCameraShakeFunctionLibrary");

// Class GameplayCameras.PerlinNoiseCameraShakePattern
// 0x0080 (0x00B8 - 0x0038)
class UPerlinNoiseCameraShakePattern final : public USimpleCameraShakePattern
{
public:
	float                                         LocationAmplitudeMultiplier;                       // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LocationFrequencyMultiplier;                       // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     X;                                                 // 0x0040(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Y;                                                 // 0x0048(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Z;                                                 // 0x0050(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         RotationAmplitudeMultiplier;                       // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationFrequencyMultiplier;                       // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Pitch;                                             // 0x0060(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Yaw;                                               // 0x0068(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Roll;                                              // 0x0070(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     FOV;                                               // 0x0078(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_80[0x38];                                      // 0x0080(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PerlinNoiseCameraShakePattern">();
	}
	static class UPerlinNoiseCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPerlinNoiseCameraShakePattern>();
	}
};
static_assert(alignof(UPerlinNoiseCameraShakePattern) == 0x000008, "Wrong alignment on UPerlinNoiseCameraShakePattern");
static_assert(sizeof(UPerlinNoiseCameraShakePattern) == 0x0000B8, "Wrong size on UPerlinNoiseCameraShakePattern");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, LocationAmplitudeMultiplier) == 0x000038, "Member 'UPerlinNoiseCameraShakePattern::LocationAmplitudeMultiplier' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, LocationFrequencyMultiplier) == 0x00003C, "Member 'UPerlinNoiseCameraShakePattern::LocationFrequencyMultiplier' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, X) == 0x000040, "Member 'UPerlinNoiseCameraShakePattern::X' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Y) == 0x000048, "Member 'UPerlinNoiseCameraShakePattern::Y' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Z) == 0x000050, "Member 'UPerlinNoiseCameraShakePattern::Z' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, RotationAmplitudeMultiplier) == 0x000058, "Member 'UPerlinNoiseCameraShakePattern::RotationAmplitudeMultiplier' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, RotationFrequencyMultiplier) == 0x00005C, "Member 'UPerlinNoiseCameraShakePattern::RotationFrequencyMultiplier' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Pitch) == 0x000060, "Member 'UPerlinNoiseCameraShakePattern::Pitch' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Yaw) == 0x000068, "Member 'UPerlinNoiseCameraShakePattern::Yaw' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Roll) == 0x000070, "Member 'UPerlinNoiseCameraShakePattern::Roll' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, FOV) == 0x000078, "Member 'UPerlinNoiseCameraShakePattern::FOV' has a wrong offset!");

// Class GameplayCameras.WaveOscillatorCameraShakePattern
// 0x00A0 (0x00D8 - 0x0038)
class UWaveOscillatorCameraShakePattern final : public USimpleCameraShakePattern
{
public:
	float                                         LocationAmplitudeMultiplier;                       // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LocationFrequencyMultiplier;                       // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        X;                                                 // 0x0040(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Y;                                                 // 0x004C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Z;                                                 // 0x0058(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         RotationAmplitudeMultiplier;                       // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationFrequencyMultiplier;                       // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Pitch;                                             // 0x006C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Yaw;                                               // 0x0078(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Roll;                                              // 0x0084(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        FOV;                                               // 0x0090(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x3C];                                      // 0x009C(0x003C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaveOscillatorCameraShakePattern">();
	}
	static class UWaveOscillatorCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaveOscillatorCameraShakePattern>();
	}
};
static_assert(alignof(UWaveOscillatorCameraShakePattern) == 0x000008, "Wrong alignment on UWaveOscillatorCameraShakePattern");
static_assert(sizeof(UWaveOscillatorCameraShakePattern) == 0x0000D8, "Wrong size on UWaveOscillatorCameraShakePattern");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, LocationAmplitudeMultiplier) == 0x000038, "Member 'UWaveOscillatorCameraShakePattern::LocationAmplitudeMultiplier' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, LocationFrequencyMultiplier) == 0x00003C, "Member 'UWaveOscillatorCameraShakePattern::LocationFrequencyMultiplier' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, X) == 0x000040, "Member 'UWaveOscillatorCameraShakePattern::X' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Y) == 0x00004C, "Member 'UWaveOscillatorCameraShakePattern::Y' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Z) == 0x000058, "Member 'UWaveOscillatorCameraShakePattern::Z' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, RotationAmplitudeMultiplier) == 0x000064, "Member 'UWaveOscillatorCameraShakePattern::RotationAmplitudeMultiplier' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, RotationFrequencyMultiplier) == 0x000068, "Member 'UWaveOscillatorCameraShakePattern::RotationFrequencyMultiplier' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Pitch) == 0x00006C, "Member 'UWaveOscillatorCameraShakePattern::Pitch' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Yaw) == 0x000078, "Member 'UWaveOscillatorCameraShakePattern::Yaw' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Roll) == 0x000084, "Member 'UWaveOscillatorCameraShakePattern::Roll' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, FOV) == 0x000090, "Member 'UWaveOscillatorCameraShakePattern::FOV' has a wrong offset!");

}
