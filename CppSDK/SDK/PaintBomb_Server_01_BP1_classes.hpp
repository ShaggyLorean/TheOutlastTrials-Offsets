﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PaintBomb_Server_01_BP1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PaintBomb_Server-01_BP1.PaintBomb_Server-01_BP1_C
// 0x0028 (0x0258 - 0x0230)
class APaintBomb_Server_01_BP1_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Collision;                                         // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ARBPawn*>                        OverlappingPawns;                                  // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_PaintBomb_Server_01_BP1(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Boom(float duration, float Radius);
	void Cleanup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PaintBomb_Server-01_BP1_C">();
	}
	static class APaintBomb_Server_01_BP1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APaintBomb_Server_01_BP1_C>();
	}
};
static_assert(alignof(APaintBomb_Server_01_BP1_C) == 0x000008, "Wrong alignment on APaintBomb_Server_01_BP1_C");
static_assert(sizeof(APaintBomb_Server_01_BP1_C) == 0x000258, "Wrong size on APaintBomb_Server_01_BP1_C");
static_assert(offsetof(APaintBomb_Server_01_BP1_C, UberGraphFrame) == 0x000230, "Member 'APaintBomb_Server_01_BP1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APaintBomb_Server_01_BP1_C, Collision) == 0x000238, "Member 'APaintBomb_Server_01_BP1_C::Collision' has a wrong offset!");
static_assert(offsetof(APaintBomb_Server_01_BP1_C, DefaultSceneRoot) == 0x000240, "Member 'APaintBomb_Server_01_BP1_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APaintBomb_Server_01_BP1_C, OverlappingPawns) == 0x000248, "Member 'APaintBomb_Server_01_BP1_C::OverlappingPawns' has a wrong offset!");

}
