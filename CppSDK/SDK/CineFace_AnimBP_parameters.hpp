﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CineFace_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CineFace_AnimBP.CineFace_AnimBP_C.ExecuteUbergraph_CineFace_AnimBP
// 0x0058 (0x0058 - 0x0000)
struct CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACineCharacterBase_BP_C*                K2Node_DynamicCast_AsCine_Character_Base_BP;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPoseAsset*                             CallFunc_GetPoseAsset_PoseAsset;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue_1;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetOwningComponent_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineCharacterBase_BP_C*                K2Node_DynamicCast_AsCine_Character_Base_BP_1;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          CallFunc_GetFacialAnimation_Anim;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP) == 0x000008, "Wrong alignment on CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP");
static_assert(sizeof(CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP) == 0x000058, "Wrong size on CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP");
static_assert(offsetof(CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP, EntryPoint) == 0x000000, "Member 'CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP, K2Node_DynamicCast_AsCine_Character_Base_BP) == 0x000018, "Member 'CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP::K2Node_DynamicCast_AsCine_Character_Base_BP' has a wrong offset!");
static_assert(offsetof(CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP, CallFunc_GetPoseAsset_PoseAsset) == 0x000028, "Member 'CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP::CallFunc_GetPoseAsset_PoseAsset' has a wrong offset!");
static_assert(offsetof(CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP, CallFunc_GetOwningActor_ReturnValue_1) == 0x000030, "Member 'CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP::CallFunc_GetOwningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP, CallFunc_GetOwningComponent_ReturnValue) == 0x000038, "Member 'CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP::CallFunc_GetOwningComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP, K2Node_DynamicCast_AsCine_Character_Base_BP_1) == 0x000040, "Member 'CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP::K2Node_DynamicCast_AsCine_Character_Base_BP_1' has a wrong offset!");
static_assert(offsetof(CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP, CallFunc_GetFacialAnimation_Anim) == 0x000050, "Member 'CineFace_AnimBP_C_ExecuteUbergraph_CineFace_AnimBP::CallFunc_GetFacialAnimation_Anim' has a wrong offset!");

// Function CineFace_AnimBP.CineFace_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct CineFace_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(CineFace_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on CineFace_AnimBP_C_AnimGraph");
static_assert(sizeof(CineFace_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on CineFace_AnimBP_C_AnimGraph");
static_assert(offsetof(CineFace_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'CineFace_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

