﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Futterman_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Shared_Face_Expression_Struct_structs.hpp"
#include "Face_AllList_Enum_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Shared_Face_BaseEmotion_Struct_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "OPP_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Futterman_Skeleton_AnimBlueprint.Futterman_Skeleton_AnimBlueprint_C
// 0x39E0 (0x3CA0 - 0x02C0)
class UFutterman_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x02F8(0x01D8)(ContainsInstancedReference)
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_11;                       // 0x04D0(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x05D8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x05F8(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_10;                   // 0x0618(0x0158)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_9;                    // 0x0770(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_13;                    // 0x08C8(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_10;                       // 0x08F0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_9;                        // 0x09F8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_8;                        // 0x0B00(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_7;                        // 0x0C08(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6;                        // 0x0D10(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x0E18(0x0108)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_2;                      // 0x0F20(0x0018)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x0F38(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_8;                    // 0x0F58(0x0158)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x10B0(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_7;                    // 0x10D0(0x0158)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_1;                      // 0x1228(0x0018)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x1240(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x1260(0x0020)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x1280(0x0018)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x1298(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_6;                    // 0x12B8(0x0158)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x1410(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x1518(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x1620(0x0108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x1728(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x1748(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_12;                    // 0x1850(0x0028)()
	struct FAnimNode_PoseBlendNode                AnimGraphNode_PoseBlendNode;                       // 0x1878(0x00A0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_4;                  // 0x1918(0x00C0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x19D8(0x00A8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_11;                    // 0x1A80(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;                    // 0x1AA8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x1AD0(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_3;                  // 0x1AF8(0x00C0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_5;                    // 0x1BB8(0x0158)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;                   // 0x1D10(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x1D90(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_2;                  // 0x1DB8(0x00C0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x1E78(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_4;                    // 0x1EC0(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x2018(0x0028)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x2040(0x00C8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x2108(0x00C0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x21C8(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x21F0(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x2348(0x0028)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2370(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x2390(0x0108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2498(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x24B8(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x24E0(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x2638(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x2660(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x27B8(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x27E0(0x00C0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x28A0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x28E8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x2910(0x0028)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x2938(0x00B8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x29F0(0x0080)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x2A70(0x00B8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x2B28(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x2BA8(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x2C28(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x2CA8(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x2D28(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x2DA8(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x2E28(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x2EA8(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x2F28(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x2FA8(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x3028(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x30A8(0x0080)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x3128(0x00A8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x31D0(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x3200(0x00B0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x32B0(0x0158)()
	class USkeletalMeshComponent*                 Mesh;                                              // 0x3408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RightHand;                                         // 0x3410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         jawOpen;                                           // 0x3414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               BowTieRotation;                                    // 0x3418(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Futterman_Speaking;                                // 0x3424(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsIdleBreaker;                                     // 0x3425(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3426[0x2];                                     // 0x3426(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class Ugooseberry_AnimBP_C*                   Gooseberry_Anim_BP;                                // 0x3428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UenemyFace_AnimBlueprint_C*             Enemy_Face_BP;                                     // 0x3430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         TimeToPlayNextIdleBreaker;                         // 0x3438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDrilling;                                        // 0x343C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_343D[0x3];                                     // 0x343D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               DrillRotating;                                     // 0x3440(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         DrillRotationRate;                                 // 0x344C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ManualDrill;                                       // 0x3450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EFace_AllList_Enum                            WhichFace;                                         // 0x3451(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENPCSpecificGesture                           WhichExpression;                                   // 0x3452(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3453[0x5];                                     // 0x3453(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FShared_Face_Expression_Struct         ExpressionList;                                    // 0x3458(0x0500)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FShared_Face_BaseEmotion_Struct        BaseEmotionList;                                   // 0x3958(0x0320)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	ENPCBaseEmotion                               WhichBaseEmotion;                                  // 0x3C78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExpressing;                                      // 0x3C79(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C7A[0x6];                                     // 0x3C7A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          LipSyncAnim;                                       // 0x3C80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          ScriptedAnim;                                      // 0x3C88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          SlotAnim;                                          // 0x3C90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            Curve;                                             // 0x3C98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Futterman_Skeleton_AnimBlueprint(int32 EntryPoint);
	void ScriptedFeed();
	void LipSyncFeed();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Futterman_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_A6125743407DD7687277F29B393D3573();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Futterman_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_2EB92D174013E39A3556C59F43D20A74();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Futterman_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_CD736F424F1F2E591404B98753E0DAB6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Futterman_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_B23E1E28460C423EE58C4080D9CC7A8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Futterman_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_737267C847D7FF4631807999855A334D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Futterman_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_A3E2320A48EABD6CEC0B589593B181EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Futterman_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_6F6E241543BAE3333B05B78ED30B781A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Futterman_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_5D83DE064508B0518F7EDFB21CB7D378();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Futterman_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_4F0C86D548C2E1C06D735CB75169D2EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Futterman_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_00BF7C7047199FF792ED17BDA37FDD45();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Futterman_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_432BACA24D11FB482F1F77B476F1445D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Futterman_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_A3FA638B4CE2DE513559429DA627E03B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Futterman_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_388A64914133A4C943F73A9792D4016C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Futterman_Skeleton_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_7FF57B2F4E8D211123C08DB2D570A18C();
	void IsSlotAnimationPlaying(class UAnimSequence* Sequence);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Futterman_Skeleton_AnimBlueprint_C">();
	}
	static class UFutterman_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFutterman_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UFutterman_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UFutterman_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UFutterman_Skeleton_AnimBlueprint_C) == 0x003CA0, "Wrong size on UFutterman_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x0002C0, "Member 'UFutterman_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_CopyPoseFromMesh) == 0x0002F8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_11) == 0x0004D0, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_11' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace_4) == 0x0005D8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace_4' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace_4) == 0x0005F8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace_4' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose_10) == 0x000618, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose_10' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose_9) == 0x000770, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose_9' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_13) == 0x0008C8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_13' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_10) == 0x0008F0, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_10' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_9) == 0x0009F8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_9' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_8) == 0x000B00, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_8' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_7) == 0x000C08, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_7' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_6) == 0x000D10, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_5) == 0x000E18, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalRefPose_2) == 0x000F20, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalRefPose_2' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace_3) == 0x000F38, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace_3' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose_8) == 0x000F58, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose_8' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace_3) == 0x0010B0, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace_3' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose_7) == 0x0010D0, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose_7' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalRefPose_1) == 0x001228, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalRefPose_1' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace_2) == 0x001240, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace_2' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace_2) == 0x001260, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace_2' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalRefPose) == 0x001280, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace_1) == 0x001298, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose_6) == 0x0012B8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose_6' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_4) == 0x001410, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_3) == 0x001518, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_2) == 0x001620, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x001728, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_1) == 0x001748, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_12) == 0x001850, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_12' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_PoseBlendNode) == 0x001878, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_PoseBlendNode' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_LayeredBoneBlend_4) == 0x001918, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_LayeredBoneBlend_4' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_BlendListByBool_1) == 0x0019D8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_11) == 0x001A80, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_11' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_10) == 0x001AA8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_10' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_9) == 0x001AD0, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_9' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_LayeredBoneBlend_3) == 0x001AF8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_LayeredBoneBlend_3' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose_5) == 0x001BB8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose_5' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_13) == 0x001D10, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_8) == 0x001D90, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_8' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_LayeredBoneBlend_2) == 0x001DB8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_LayeredBoneBlend_2' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot_1) == 0x001E78, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose_4) == 0x001EC0, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose_4' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_7) == 0x002018, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_TwoWayBlend) == 0x002040, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_LayeredBoneBlend_1) == 0x002108, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_6) == 0x0021C8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose_3) == 0x0021F0, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_5) == 0x002348, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace) == 0x002370, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone) == 0x002390, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x002498, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_4) == 0x0024B8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose_2) == 0x0024E0, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_3) == 0x002638, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose_1) == 0x002660, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_2) == 0x0027B8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_LayeredBoneBlend) == 0x0027E0, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x0028A0, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_1) == 0x0028E8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose) == 0x002910, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_BlendListByEnum_1) == 0x002938, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_12) == 0x0029F0, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_BlendListByEnum) == 0x002A70, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_11) == 0x002B28, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_10) == 0x002BA8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_9) == 0x002C28, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_8) == 0x002CA8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_7) == 0x002D28, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_6) == 0x002DA8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_5) == 0x002E28, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_4) == 0x002EA8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_3) == 0x002F28, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_2) == 0x002FA8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_1) == 0x003028, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer) == 0x0030A8, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_BlendListByBool) == 0x003128, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult) == 0x0031D0, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_StateMachine) == 0x003200, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose) == 0x0032B0, "Member 'UFutterman_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, Mesh) == 0x003408, "Member 'UFutterman_Skeleton_AnimBlueprint_C::Mesh' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, RightHand) == 0x003410, "Member 'UFutterman_Skeleton_AnimBlueprint_C::RightHand' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, jawOpen) == 0x003414, "Member 'UFutterman_Skeleton_AnimBlueprint_C::jawOpen' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, BowTieRotation) == 0x003418, "Member 'UFutterman_Skeleton_AnimBlueprint_C::BowTieRotation' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, Futterman_Speaking) == 0x003424, "Member 'UFutterman_Skeleton_AnimBlueprint_C::Futterman_Speaking' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, IsIdleBreaker) == 0x003425, "Member 'UFutterman_Skeleton_AnimBlueprint_C::IsIdleBreaker' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, Gooseberry_Anim_BP) == 0x003428, "Member 'UFutterman_Skeleton_AnimBlueprint_C::Gooseberry_Anim_BP' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, Enemy_Face_BP) == 0x003430, "Member 'UFutterman_Skeleton_AnimBlueprint_C::Enemy_Face_BP' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, TimeToPlayNextIdleBreaker) == 0x003438, "Member 'UFutterman_Skeleton_AnimBlueprint_C::TimeToPlayNextIdleBreaker' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, IsDrilling) == 0x00343C, "Member 'UFutterman_Skeleton_AnimBlueprint_C::IsDrilling' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, DrillRotating) == 0x003440, "Member 'UFutterman_Skeleton_AnimBlueprint_C::DrillRotating' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, DrillRotationRate) == 0x00344C, "Member 'UFutterman_Skeleton_AnimBlueprint_C::DrillRotationRate' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, ManualDrill) == 0x003450, "Member 'UFutterman_Skeleton_AnimBlueprint_C::ManualDrill' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, WhichFace) == 0x003451, "Member 'UFutterman_Skeleton_AnimBlueprint_C::WhichFace' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, WhichExpression) == 0x003452, "Member 'UFutterman_Skeleton_AnimBlueprint_C::WhichExpression' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, ExpressionList) == 0x003458, "Member 'UFutterman_Skeleton_AnimBlueprint_C::ExpressionList' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, BaseEmotionList) == 0x003958, "Member 'UFutterman_Skeleton_AnimBlueprint_C::BaseEmotionList' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, WhichBaseEmotion) == 0x003C78, "Member 'UFutterman_Skeleton_AnimBlueprint_C::WhichBaseEmotion' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, IsExpressing) == 0x003C79, "Member 'UFutterman_Skeleton_AnimBlueprint_C::IsExpressing' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, LipSyncAnim) == 0x003C80, "Member 'UFutterman_Skeleton_AnimBlueprint_C::LipSyncAnim' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, ScriptedAnim) == 0x003C88, "Member 'UFutterman_Skeleton_AnimBlueprint_C::ScriptedAnim' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, SlotAnim) == 0x003C90, "Member 'UFutterman_Skeleton_AnimBlueprint_C::SlotAnim' has a wrong offset!");
static_assert(offsetof(UFutterman_Skeleton_AnimBlueprint_C, Curve) == 0x003C98, "Member 'UFutterman_Skeleton_AnimBlueprint_C::Curve' has a wrong offset!");

}
