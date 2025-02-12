﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FX_01_SpawnExploLight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FX_01_SpawnExploLight.BP_FX_01_SpawnExploLight_C
// 0x0028 (0x0258 - 0x0230)
class ABP_FX_01_SpawnExploLight_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Raduis0_1_04B50D3943BBBE4241AE48953AF1BA07; // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_04B50D3943BBBE4241AE48953AF1BA07; // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24D[0x3];                                      // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FX_01_SpawnExploLight(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FX_01_SpawnExploLight_C">();
	}
	static class ABP_FX_01_SpawnExploLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FX_01_SpawnExploLight_C>();
	}
};
static_assert(alignof(ABP_FX_01_SpawnExploLight_C) == 0x000008, "Wrong alignment on ABP_FX_01_SpawnExploLight_C");
static_assert(sizeof(ABP_FX_01_SpawnExploLight_C) == 0x000258, "Wrong size on ABP_FX_01_SpawnExploLight_C");
static_assert(offsetof(ABP_FX_01_SpawnExploLight_C, UberGraphFrame) == 0x000230, "Member 'ABP_FX_01_SpawnExploLight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FX_01_SpawnExploLight_C, PointLight) == 0x000238, "Member 'ABP_FX_01_SpawnExploLight_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_FX_01_SpawnExploLight_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_FX_01_SpawnExploLight_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_FX_01_SpawnExploLight_C, Timeline_0_Raduis0_1_04B50D3943BBBE4241AE48953AF1BA07) == 0x000248, "Member 'ABP_FX_01_SpawnExploLight_C::Timeline_0_Raduis0_1_04B50D3943BBBE4241AE48953AF1BA07' has a wrong offset!");
static_assert(offsetof(ABP_FX_01_SpawnExploLight_C, Timeline_0__Direction_04B50D3943BBBE4241AE48953AF1BA07) == 0x00024C, "Member 'ABP_FX_01_SpawnExploLight_C::Timeline_0__Direction_04B50D3943BBBE4241AE48953AF1BA07' has a wrong offset!");
static_assert(offsetof(ABP_FX_01_SpawnExploLight_C, Timeline_0) == 0x000250, "Member 'ABP_FX_01_SpawnExploLight_C::Timeline_0' has a wrong offset!");

}

