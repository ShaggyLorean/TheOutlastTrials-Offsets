﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TutorialPopUp

#include "Basic.hpp"


namespace SDK::Params
{

// Function TutorialPopUp.TutorialPopUp_C.ExecuteUbergraph_TutorialPopUp
// 0x0010 (0x0010 - 0x0000)
struct TutorialPopUp_C_ExecuteUbergraph_TutorialPopUp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URBMenuButton_C*                        K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TutorialPopUp_C_ExecuteUbergraph_TutorialPopUp) == 0x000008, "Wrong alignment on TutorialPopUp_C_ExecuteUbergraph_TutorialPopUp");
static_assert(sizeof(TutorialPopUp_C_ExecuteUbergraph_TutorialPopUp) == 0x000010, "Wrong size on TutorialPopUp_C_ExecuteUbergraph_TutorialPopUp");
static_assert(offsetof(TutorialPopUp_C_ExecuteUbergraph_TutorialPopUp, EntryPoint) == 0x000000, "Member 'TutorialPopUp_C_ExecuteUbergraph_TutorialPopUp::EntryPoint' has a wrong offset!");
static_assert(offsetof(TutorialPopUp_C_ExecuteUbergraph_TutorialPopUp, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'TutorialPopUp_C_ExecuteUbergraph_TutorialPopUp::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function TutorialPopUp.TutorialPopUp_C.BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct TutorialPopUp_C_BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature final
{
public:
	class URBMenuButton_C*                        Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TutorialPopUp_C_BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on TutorialPopUp_C_BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(sizeof(TutorialPopUp_C_BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong size on TutorialPopUp_C_BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(offsetof(TutorialPopUp_C_BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, Button) == 0x000000, "Member 'TutorialPopUp_C_BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function TutorialPopUp.TutorialPopUp_C.Initialize
// 0x0030 (0x0030 - 0x0000)
struct TutorialPopUp_C_Initialize final
{
public:
	class FText                                   Text_0;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_FormatTextForDecorator_ReturnValue;       // 0x0018(0x0018)()
};
static_assert(alignof(TutorialPopUp_C_Initialize) == 0x000008, "Wrong alignment on TutorialPopUp_C_Initialize");
static_assert(sizeof(TutorialPopUp_C_Initialize) == 0x000030, "Wrong size on TutorialPopUp_C_Initialize");
static_assert(offsetof(TutorialPopUp_C_Initialize, Text_0) == 0x000000, "Member 'TutorialPopUp_C_Initialize::Text_0' has a wrong offset!");
static_assert(offsetof(TutorialPopUp_C_Initialize, CallFunc_FormatTextForDecorator_ReturnValue) == 0x000018, "Member 'TutorialPopUp_C_Initialize::CallFunc_FormatTextForDecorator_ReturnValue' has a wrong offset!");

}

