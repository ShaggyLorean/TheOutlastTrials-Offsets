﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cine_Body_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Cine_Body_AnimBP.Cine_Body_AnimBP_C.ExecuteUbergraph_Cine_Body_AnimBP
// 0x0030 (0x0030 - 0x0000)
struct Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetOwningComponent_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineCharacterBase_BP_C*                K2Node_DynamicCast_AsCine_Character_Base_BP;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          CallFunc_GetBodyAnimation_Anim;                    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP) == 0x000008, "Wrong alignment on Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP");
static_assert(sizeof(Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP) == 0x000030, "Wrong size on Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP");
static_assert(offsetof(Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP, EntryPoint) == 0x000000, "Member 'Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP, CallFunc_GetOwningComponent_ReturnValue) == 0x000010, "Member 'Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP::CallFunc_GetOwningComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP, K2Node_DynamicCast_AsCine_Character_Base_BP) == 0x000018, "Member 'Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP::K2Node_DynamicCast_AsCine_Character_Base_BP' has a wrong offset!");
static_assert(offsetof(Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP, CallFunc_GetBodyAnimation_Anim) == 0x000028, "Member 'Cine_Body_AnimBP_C_ExecuteUbergraph_Cine_Body_AnimBP::CallFunc_GetBodyAnimation_Anim' has a wrong offset!");

// Function Cine_Body_AnimBP.Cine_Body_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Cine_Body_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Cine_Body_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Cine_Body_AnimBP_C_AnimGraph");
static_assert(sizeof(Cine_Body_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on Cine_Body_AnimBP_C_AnimGraph");
static_assert(offsetof(Cine_Body_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Cine_Body_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

