﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Sanitization_FloorVent_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Sanitization_FloorVent_BP.Sanitization_FloorVent_BP_C
// 0x0038 (0x0268 - 0x0230)
class ASanitization_FloorVent_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Ngr_GasFX;                                         // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSoundComponent*                      Sound_Component;                                   // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBPropOptimizerComponent*              RBPropOptimizer;                                   // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   VentMesh;                                          // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bTriggered;                                        // 0x0260(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

public:
	void ExecuteUbergraph_Sanitization_FloorVent_BP(int32 EntryPoint);
	void BndEvt__Sanitization_FloorVent_BP_RBPropOptimizer_K2Node_ComponentBoundEvent_0_PropOptimizerComponentTickEnabledChangedEvent__DelegateSignature(bool bEnabled);
	void Untrigger();
	void Trigger();
	void OnRep_bTriggered();
	void RefreshVFXActive();

	bool IsTriggered() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Sanitization_FloorVent_BP_C">();
	}
	static class ASanitization_FloorVent_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASanitization_FloorVent_BP_C>();
	}
};
static_assert(alignof(ASanitization_FloorVent_BP_C) == 0x000008, "Wrong alignment on ASanitization_FloorVent_BP_C");
static_assert(sizeof(ASanitization_FloorVent_BP_C) == 0x000268, "Wrong size on ASanitization_FloorVent_BP_C");
static_assert(offsetof(ASanitization_FloorVent_BP_C, UberGraphFrame) == 0x000230, "Member 'ASanitization_FloorVent_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASanitization_FloorVent_BP_C, Ngr_GasFX) == 0x000238, "Member 'ASanitization_FloorVent_BP_C::Ngr_GasFX' has a wrong offset!");
static_assert(offsetof(ASanitization_FloorVent_BP_C, Sound_Component) == 0x000240, "Member 'ASanitization_FloorVent_BP_C::Sound_Component' has a wrong offset!");
static_assert(offsetof(ASanitization_FloorVent_BP_C, RBPropOptimizer) == 0x000248, "Member 'ASanitization_FloorVent_BP_C::RBPropOptimizer' has a wrong offset!");
static_assert(offsetof(ASanitization_FloorVent_BP_C, VentMesh) == 0x000250, "Member 'ASanitization_FloorVent_BP_C::VentMesh' has a wrong offset!");
static_assert(offsetof(ASanitization_FloorVent_BP_C, Root) == 0x000258, "Member 'ASanitization_FloorVent_BP_C::Root' has a wrong offset!");
static_assert(offsetof(ASanitization_FloorVent_BP_C, bTriggered) == 0x000260, "Member 'ASanitization_FloorVent_BP_C::bTriggered' has a wrong offset!");

}

