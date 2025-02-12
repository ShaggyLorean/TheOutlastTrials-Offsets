﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBNPC_Gooseberry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RBNPC_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RBNPC_Gooseberry.RBNPC_Gooseberry_C
// 0x0040 (0x5AB0 - 0x5A70)
class ARBNPC_Gooseberry_C final : public ARBNPC_BP_C
{
public:
	uint8                                         Pad_5A61[0x7];                                     // 0x5A61(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_RBNPC_Gooseberry_C;                 // 0x5A68(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Futterman;                                         // 0x5A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Gooseberry_Skirt;                                  // 0x5A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Head;                                              // 0x5A80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 FullBodyMesh;                                      // 0x5A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TimeToPlayNextIdleBreaker;                         // 0x5A90(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A94[0x4];                                     // 0x5A94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              PlayFuttermanIdleBreaker;                          // 0x5A98(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bFaceFXUseFuttermanHead;                           // 0x5AA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_RBNPC_Gooseberry(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UpdateTimeToPlayFuttermanIdleBreaker();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();
	bool TryPlayFacialAnim(const class FString& lineId);
	class UPoseAsset* GetFacePoseAsset();
	void GetFaceAnimBP(class UenemyFace_AnimBlueprint_C** EnemyFaceAnimBP);
	void SetFuttermanDrillValue(bool DrillValue, bool DrillManual, bool* Success);

	class USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent() const;
	class USkeletalMeshComponent* GetFaceFXSkeletalMeshComponentWithLineId(const class FString& lineId) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RBNPC_Gooseberry_C">();
	}
	static class ARBNPC_Gooseberry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARBNPC_Gooseberry_C>();
	}
};
static_assert(alignof(ARBNPC_Gooseberry_C) == 0x000010, "Wrong alignment on ARBNPC_Gooseberry_C");
static_assert(sizeof(ARBNPC_Gooseberry_C) == 0x005AB0, "Wrong size on ARBNPC_Gooseberry_C");
static_assert(offsetof(ARBNPC_Gooseberry_C, UberGraphFrame_RBNPC_Gooseberry_C) == 0x005A68, "Member 'ARBNPC_Gooseberry_C::UberGraphFrame_RBNPC_Gooseberry_C' has a wrong offset!");
static_assert(offsetof(ARBNPC_Gooseberry_C, Futterman) == 0x005A70, "Member 'ARBNPC_Gooseberry_C::Futterman' has a wrong offset!");
static_assert(offsetof(ARBNPC_Gooseberry_C, Gooseberry_Skirt) == 0x005A78, "Member 'ARBNPC_Gooseberry_C::Gooseberry_Skirt' has a wrong offset!");
static_assert(offsetof(ARBNPC_Gooseberry_C, Head) == 0x005A80, "Member 'ARBNPC_Gooseberry_C::Head' has a wrong offset!");
static_assert(offsetof(ARBNPC_Gooseberry_C, FullBodyMesh) == 0x005A88, "Member 'ARBNPC_Gooseberry_C::FullBodyMesh' has a wrong offset!");
static_assert(offsetof(ARBNPC_Gooseberry_C, TimeToPlayNextIdleBreaker) == 0x005A90, "Member 'ARBNPC_Gooseberry_C::TimeToPlayNextIdleBreaker' has a wrong offset!");
static_assert(offsetof(ARBNPC_Gooseberry_C, PlayFuttermanIdleBreaker) == 0x005A98, "Member 'ARBNPC_Gooseberry_C::PlayFuttermanIdleBreaker' has a wrong offset!");
static_assert(offsetof(ARBNPC_Gooseberry_C, bFaceFXUseFuttermanHead) == 0x005AA8, "Member 'ARBNPC_Gooseberry_C::bFaceFXUseFuttermanHead' has a wrong offset!");

}

