﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MedPharma_SkillController_BP

#include "Basic.hpp"


namespace SDK::Params
{

// Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.ExecuteUbergraph_MedPharma_SkillController_BP
// 0x0008 (0x0008 - 0x0000)
struct MedPharma_SkillController_BP_C_ExecuteUbergraph_MedPharma_SkillController_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHeldInHand;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsInZone;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MedPharma_SkillController_BP_C_ExecuteUbergraph_MedPharma_SkillController_BP) == 0x000004, "Wrong alignment on MedPharma_SkillController_BP_C_ExecuteUbergraph_MedPharma_SkillController_BP");
static_assert(sizeof(MedPharma_SkillController_BP_C_ExecuteUbergraph_MedPharma_SkillController_BP) == 0x000008, "Wrong size on MedPharma_SkillController_BP_C_ExecuteUbergraph_MedPharma_SkillController_BP");
static_assert(offsetof(MedPharma_SkillController_BP_C_ExecuteUbergraph_MedPharma_SkillController_BP, EntryPoint) == 0x000000, "Member 'MedPharma_SkillController_BP_C_ExecuteUbergraph_MedPharma_SkillController_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(MedPharma_SkillController_BP_C_ExecuteUbergraph_MedPharma_SkillController_BP, K2Node_Event_bHeldInHand) == 0x000004, "Member 'MedPharma_SkillController_BP_C_ExecuteUbergraph_MedPharma_SkillController_BP::K2Node_Event_bHeldInHand' has a wrong offset!");
static_assert(offsetof(MedPharma_SkillController_BP_C_ExecuteUbergraph_MedPharma_SkillController_BP, K2Node_CustomEvent_IsInZone) == 0x000005, "Member 'MedPharma_SkillController_BP_C_ExecuteUbergraph_MedPharma_SkillController_BP::K2Node_CustomEvent_IsInZone' has a wrong offset!");

// Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.On Skill Deactivate FX
// 0x0001 (0x0001 - 0x0000)
struct MedPharma_SkillController_BP_C_On_Skill_Deactivate_FX final
{
public:
	bool                                          IsInZone;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MedPharma_SkillController_BP_C_On_Skill_Deactivate_FX) == 0x000001, "Wrong alignment on MedPharma_SkillController_BP_C_On_Skill_Deactivate_FX");
static_assert(sizeof(MedPharma_SkillController_BP_C_On_Skill_Deactivate_FX) == 0x000001, "Wrong size on MedPharma_SkillController_BP_C_On_Skill_Deactivate_FX");
static_assert(offsetof(MedPharma_SkillController_BP_C_On_Skill_Deactivate_FX, IsInZone) == 0x000000, "Member 'MedPharma_SkillController_BP_C_On_Skill_Deactivate_FX::IsInZone' has a wrong offset!");

// Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.Event_OnItemHeldInHandChanged
// 0x0001 (0x0001 - 0x0000)
struct MedPharma_SkillController_BP_C_Event_OnItemHeldInHandChanged final
{
public:
	bool                                          bHeldInHand;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MedPharma_SkillController_BP_C_Event_OnItemHeldInHandChanged) == 0x000001, "Wrong alignment on MedPharma_SkillController_BP_C_Event_OnItemHeldInHandChanged");
static_assert(sizeof(MedPharma_SkillController_BP_C_Event_OnItemHeldInHandChanged) == 0x000001, "Wrong size on MedPharma_SkillController_BP_C_Event_OnItemHeldInHandChanged");
static_assert(offsetof(MedPharma_SkillController_BP_C_Event_OnItemHeldInHandChanged, bHeldInHand) == 0x000000, "Member 'MedPharma_SkillController_BP_C_Event_OnItemHeldInHandChanged::bHeldInHand' has a wrong offset!");

// Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.UpdateParticleEmitter
// 0x0002 (0x0002 - 0x0000)
struct MedPharma_SkillController_BP_C_UpdateParticleEmitter final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MedPharma_SkillController_BP_C_UpdateParticleEmitter) == 0x000001, "Wrong alignment on MedPharma_SkillController_BP_C_UpdateParticleEmitter");
static_assert(sizeof(MedPharma_SkillController_BP_C_UpdateParticleEmitter) == 0x000002, "Wrong size on MedPharma_SkillController_BP_C_UpdateParticleEmitter");
static_assert(offsetof(MedPharma_SkillController_BP_C_UpdateParticleEmitter, IsActive) == 0x000000, "Member 'MedPharma_SkillController_BP_C_UpdateParticleEmitter::IsActive' has a wrong offset!");
static_assert(offsetof(MedPharma_SkillController_BP_C_UpdateParticleEmitter, CallFunc_IsDedicatedServer_ReturnValue) == 0x000001, "Member 'MedPharma_SkillController_BP_C_UpdateParticleEmitter::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

}

