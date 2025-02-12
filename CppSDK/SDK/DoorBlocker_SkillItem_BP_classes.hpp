﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DoorBlocker_SkillItem_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ESOPBarricadeState_structs.hpp"
#include "AkAudio_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DoorBlocker_SkillItem_BP.DoorBlocker_SkillItem_BP_C
// 0x00F0 (0x0D50 - 0x0C60)
class ADoorBlocker_SkillItem_BP_C final : public ARBDoorBlockerSkillItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Ngr_SkillDeactivate_02;                            // 0x0C68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Ngr_SkillDeactivate_01;                            // 0x0C70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSoundComponent*                      RBSound;                                           // 0x0C78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          PhysicsCollision;                                  // 0x0C80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOutTimeline_a_4C9CCE564E283378F890679BF4783E79; // 0x0C88(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FadeOutTimeline__Direction_4C9CCE564E283378F890679BF4783E79; // 0x0C8C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C8D[0x3];                                      // 0x0C8D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeOutTimeline;                                   // 0x0C90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBroken;                                           // 0x0C98(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          bWaitingForPhysicallize;                           // 0x0C99(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9A[0x6];                                      // 0x0C9A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UESOP_Barricade_AnimBP_C*               ESOPGhostAnimBP;                                   // 0x0CA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESOPBarricadeState                            State;                                             // 0x0CA8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	ESOPBarricadeState                            LocalState;                                        // 0x0CA9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CAA[0x6];                                      // 0x0CAA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           BreakHit1;                                         // 0x0CB0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           WakeHit1_2;                                        // 0x0CC0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           BreakHit2;                                         // 0x0CD0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           WakeHit3;                                          // 0x0CE0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           BreakHit3;                                         // 0x0CF0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           WakeHit4;                                          // 0x0D00(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           BreakHit4;                                         // 0x0D10(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           WakeHit5;                                          // 0x0D20(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           BreakHit5;                                         // 0x0D30(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         NumBreaks;                                         // 0x0D40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bashDoActionDone;                                  // 0x0D44(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D45[0x3];                                      // 0x0D45(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBPawn*                                LastBasher;                                        // 0x0D48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DoorBlocker_SkillItem_BP(int32 EntryPoint);
	void On_Skill_Deactivate_FX();
	void FadeOut();
	void OnConsumeItemCancelledNotify(class ARBPawn* Pawn);
	void Event_OnTargetChanged(class AActor* Target_0);
	void Event_OnBashCompleted(class ARBPawn* basher);
	void Event_OnBashDoAction(class ARBPawn* basher);
	void OnInstallationDone(class ARBPickup* Item);
	void ReceiveBeginPlay();
	void Event_OnSizeChanged();
	void FadeOutTimeline__UpdateFunc();
	void FadeOutTimeline__FinishedFunc();
	void UserConstructionScript();
	void Break();
	void OnRep_bBroken();
	struct FVector GetPhysicallizeDirection(const struct FVector& positionRef);
	void RefreshPhysicsCollisionSize();
	void InitializeAnimationInstance(bool* bInitializedTriggered, class UESOP_Barricade_AnimBP_C** ESOPAnimInstance);
	void OnRep_State();
	void SetESOPState(ESOPBarricadeState State_0);
	void SetESOPState_Local(ESOPBarricadeState State_0);
	void UpdateBarricadeSFX(bool Start_Looping_SFX);
	void OnDamage(float DurabilityRatio, bool Destroy, const struct FVector& Direction);
	void InitPhysicsAsset();
	void HitPhysicsAsset(TArray<class FName>& WakeList, TArray<class FName>& BreakList, const struct FVector& Direction);
	void GetFadeAndDestroyDelay(float* delay);
	void Get_Sound_Component();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DoorBlocker_SkillItem_BP_C">();
	}
	static class ADoorBlocker_SkillItem_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADoorBlocker_SkillItem_BP_C>();
	}
};
static_assert(alignof(ADoorBlocker_SkillItem_BP_C) == 0x000010, "Wrong alignment on ADoorBlocker_SkillItem_BP_C");
static_assert(sizeof(ADoorBlocker_SkillItem_BP_C) == 0x000D50, "Wrong size on ADoorBlocker_SkillItem_BP_C");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, UberGraphFrame) == 0x000C60, "Member 'ADoorBlocker_SkillItem_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, Ngr_SkillDeactivate_02) == 0x000C68, "Member 'ADoorBlocker_SkillItem_BP_C::Ngr_SkillDeactivate_02' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, Ngr_SkillDeactivate_01) == 0x000C70, "Member 'ADoorBlocker_SkillItem_BP_C::Ngr_SkillDeactivate_01' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, RBSound) == 0x000C78, "Member 'ADoorBlocker_SkillItem_BP_C::RBSound' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, PhysicsCollision) == 0x000C80, "Member 'ADoorBlocker_SkillItem_BP_C::PhysicsCollision' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, FadeOutTimeline_a_4C9CCE564E283378F890679BF4783E79) == 0x000C88, "Member 'ADoorBlocker_SkillItem_BP_C::FadeOutTimeline_a_4C9CCE564E283378F890679BF4783E79' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, FadeOutTimeline__Direction_4C9CCE564E283378F890679BF4783E79) == 0x000C8C, "Member 'ADoorBlocker_SkillItem_BP_C::FadeOutTimeline__Direction_4C9CCE564E283378F890679BF4783E79' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, FadeOutTimeline) == 0x000C90, "Member 'ADoorBlocker_SkillItem_BP_C::FadeOutTimeline' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, bBroken) == 0x000C98, "Member 'ADoorBlocker_SkillItem_BP_C::bBroken' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, bWaitingForPhysicallize) == 0x000C99, "Member 'ADoorBlocker_SkillItem_BP_C::bWaitingForPhysicallize' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, ESOPGhostAnimBP) == 0x000CA0, "Member 'ADoorBlocker_SkillItem_BP_C::ESOPGhostAnimBP' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, State) == 0x000CA8, "Member 'ADoorBlocker_SkillItem_BP_C::State' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, LocalState) == 0x000CA9, "Member 'ADoorBlocker_SkillItem_BP_C::LocalState' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, BreakHit1) == 0x000CB0, "Member 'ADoorBlocker_SkillItem_BP_C::BreakHit1' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, WakeHit1_2) == 0x000CC0, "Member 'ADoorBlocker_SkillItem_BP_C::WakeHit1_2' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, BreakHit2) == 0x000CD0, "Member 'ADoorBlocker_SkillItem_BP_C::BreakHit2' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, WakeHit3) == 0x000CE0, "Member 'ADoorBlocker_SkillItem_BP_C::WakeHit3' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, BreakHit3) == 0x000CF0, "Member 'ADoorBlocker_SkillItem_BP_C::BreakHit3' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, WakeHit4) == 0x000D00, "Member 'ADoorBlocker_SkillItem_BP_C::WakeHit4' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, BreakHit4) == 0x000D10, "Member 'ADoorBlocker_SkillItem_BP_C::BreakHit4' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, WakeHit5) == 0x000D20, "Member 'ADoorBlocker_SkillItem_BP_C::WakeHit5' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, BreakHit5) == 0x000D30, "Member 'ADoorBlocker_SkillItem_BP_C::BreakHit5' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, NumBreaks) == 0x000D40, "Member 'ADoorBlocker_SkillItem_BP_C::NumBreaks' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, bashDoActionDone) == 0x000D44, "Member 'ADoorBlocker_SkillItem_BP_C::bashDoActionDone' has a wrong offset!");
static_assert(offsetof(ADoorBlocker_SkillItem_BP_C, LastBasher) == 0x000D48, "Member 'ADoorBlocker_SkillItem_BP_C::LastBasher' has a wrong offset!");

}

