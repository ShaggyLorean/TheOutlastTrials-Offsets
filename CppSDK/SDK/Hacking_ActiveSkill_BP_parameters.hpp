﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hacking_ActiveSkill_BP

#include "Basic.hpp"


namespace SDK::Params
{

// Function Hacking_ActiveSkill_BP.Hacking_ActiveSkill_BP_C.ExecuteUbergraph_Hacking_ActiveSkill_BP
// 0x0018 (0x0018 - 0x0000)
struct Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AHacking_SkillController_BP_C*          K2Node_DynamicCast_AsHacking_Skill_Controller_BP;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlayLoopingSoundOnActor_ReturnValue;      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP) == 0x000008, "Wrong alignment on Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP");
static_assert(sizeof(Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP) == 0x000018, "Wrong size on Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP");
static_assert(offsetof(Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP, EntryPoint) == 0x000000, "Member 'Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP, K2Node_DynamicCast_AsHacking_Skill_Controller_BP) == 0x000008, "Member 'Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP::K2Node_DynamicCast_AsHacking_Skill_Controller_BP' has a wrong offset!");
static_assert(offsetof(Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP, CallFunc_PlayLoopingSoundOnActor_ReturnValue) == 0x000014, "Member 'Hacking_ActiveSkill_BP_C_ExecuteUbergraph_Hacking_ActiveSkill_BP::CallFunc_PlayLoopingSoundOnActor_ReturnValue' has a wrong offset!");

}
