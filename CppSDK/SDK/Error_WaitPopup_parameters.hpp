﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Error_WaitPopup

#include "Basic.hpp"


namespace SDK::Params
{

// Function Error_WaitPopup.Error_WaitPopup_C.ExecuteUbergraph_Error_WaitPopup
// 0x0040 (0x0040 - 0x0000)
struct Error_WaitPopup_C_ExecuteUbergraph_Error_WaitPopup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_TitleText;                            // 0x0008(0x0018)(ConstParm)
	class FText                                   K2Node_Event_MainText;                             // 0x0020(0x0018)(ConstParm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Error_WaitPopup_C_ExecuteUbergraph_Error_WaitPopup) == 0x000008, "Wrong alignment on Error_WaitPopup_C_ExecuteUbergraph_Error_WaitPopup");
static_assert(sizeof(Error_WaitPopup_C_ExecuteUbergraph_Error_WaitPopup) == 0x000040, "Wrong size on Error_WaitPopup_C_ExecuteUbergraph_Error_WaitPopup");
static_assert(offsetof(Error_WaitPopup_C_ExecuteUbergraph_Error_WaitPopup, EntryPoint) == 0x000000, "Member 'Error_WaitPopup_C_ExecuteUbergraph_Error_WaitPopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(Error_WaitPopup_C_ExecuteUbergraph_Error_WaitPopup, K2Node_Event_TitleText) == 0x000008, "Member 'Error_WaitPopup_C_ExecuteUbergraph_Error_WaitPopup::K2Node_Event_TitleText' has a wrong offset!");
static_assert(offsetof(Error_WaitPopup_C_ExecuteUbergraph_Error_WaitPopup, K2Node_Event_MainText) == 0x000020, "Member 'Error_WaitPopup_C_ExecuteUbergraph_Error_WaitPopup::K2Node_Event_MainText' has a wrong offset!");
static_assert(offsetof(Error_WaitPopup_C_ExecuteUbergraph_Error_WaitPopup, CallFunc_TextIsEmpty_ReturnValue) == 0x000038, "Member 'Error_WaitPopup_C_ExecuteUbergraph_Error_WaitPopup::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

// Function Error_WaitPopup.Error_WaitPopup_C.Event_InitializePopup
// 0x0030 (0x0030 - 0x0000)
struct Error_WaitPopup_C_Event_InitializePopup final
{
public:
	class FText                                   TitleText;                                         // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   MainText;                                          // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Error_WaitPopup_C_Event_InitializePopup) == 0x000008, "Wrong alignment on Error_WaitPopup_C_Event_InitializePopup");
static_assert(sizeof(Error_WaitPopup_C_Event_InitializePopup) == 0x000030, "Wrong size on Error_WaitPopup_C_Event_InitializePopup");
static_assert(offsetof(Error_WaitPopup_C_Event_InitializePopup, TitleText) == 0x000000, "Member 'Error_WaitPopup_C_Event_InitializePopup::TitleText' has a wrong offset!");
static_assert(offsetof(Error_WaitPopup_C_Event_InitializePopup, MainText) == 0x000018, "Member 'Error_WaitPopup_C_Event_InitializePopup::MainText' has a wrong offset!");

}

