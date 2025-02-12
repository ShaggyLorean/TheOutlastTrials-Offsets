﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUDTutorial

#include "Basic.hpp"

#include "OPP_structs.hpp"


namespace SDK::Params
{

// Function HUDTutorial.HUDTutorial_C.ExecuteUbergraph_HUDTutorial
// 0x0088 (0x0088 - 0x0000)
struct HUDTutorial_C_ExecuteUbergraph_HUDTutorial final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FHUDTutorialTextData& tutorialData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBHUD*                                 CallFunc_GetHUD_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHUDTutorialTextData                   K2Node_CustomEvent_tutorialData;                   // 0x0030(0x0040)(ConstParm)
	class FText                                   CallFunc_FormatTextForDecorator_ReturnValue;       // 0x0070(0x0018)()
};
static_assert(alignof(HUDTutorial_C_ExecuteUbergraph_HUDTutorial) == 0x000008, "Wrong alignment on HUDTutorial_C_ExecuteUbergraph_HUDTutorial");
static_assert(sizeof(HUDTutorial_C_ExecuteUbergraph_HUDTutorial) == 0x000088, "Wrong size on HUDTutorial_C_ExecuteUbergraph_HUDTutorial");
static_assert(offsetof(HUDTutorial_C_ExecuteUbergraph_HUDTutorial, EntryPoint) == 0x000000, "Member 'HUDTutorial_C_ExecuteUbergraph_HUDTutorial::EntryPoint' has a wrong offset!");
static_assert(offsetof(HUDTutorial_C_ExecuteUbergraph_HUDTutorial, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'HUDTutorial_C_ExecuteUbergraph_HUDTutorial::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HUDTutorial_C_ExecuteUbergraph_HUDTutorial, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'HUDTutorial_C_ExecuteUbergraph_HUDTutorial::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(HUDTutorial_C_ExecuteUbergraph_HUDTutorial, CallFunc_GetHUD_ReturnValue) == 0x000028, "Member 'HUDTutorial_C_ExecuteUbergraph_HUDTutorial::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDTutorial_C_ExecuteUbergraph_HUDTutorial, K2Node_CustomEvent_tutorialData) == 0x000030, "Member 'HUDTutorial_C_ExecuteUbergraph_HUDTutorial::K2Node_CustomEvent_tutorialData' has a wrong offset!");
static_assert(offsetof(HUDTutorial_C_ExecuteUbergraph_HUDTutorial, CallFunc_FormatTextForDecorator_ReturnValue) == 0x000070, "Member 'HUDTutorial_C_ExecuteUbergraph_HUDTutorial::CallFunc_FormatTextForDecorator_ReturnValue' has a wrong offset!");

// Function HUDTutorial.HUDTutorial_C.OnShowHUDTutorial_Event_0
// 0x0040 (0x0040 - 0x0000)
struct HUDTutorial_C_OnShowHUDTutorial_Event_0 final
{
public:
	struct FHUDTutorialTextData                   tutorialData;                                      // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(HUDTutorial_C_OnShowHUDTutorial_Event_0) == 0x000008, "Wrong alignment on HUDTutorial_C_OnShowHUDTutorial_Event_0");
static_assert(sizeof(HUDTutorial_C_OnShowHUDTutorial_Event_0) == 0x000040, "Wrong size on HUDTutorial_C_OnShowHUDTutorial_Event_0");
static_assert(offsetof(HUDTutorial_C_OnShowHUDTutorial_Event_0, tutorialData) == 0x000000, "Member 'HUDTutorial_C_OnShowHUDTutorial_Event_0::tutorialData' has a wrong offset!");

// Function HUDTutorial.HUDTutorial_C.ShouldShow
// 0x0001 (0x0001 - 0x0000)
struct HUDTutorial_C_ShouldShow final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUDTutorial_C_ShouldShow) == 0x000001, "Wrong alignment on HUDTutorial_C_ShouldShow");
static_assert(sizeof(HUDTutorial_C_ShouldShow) == 0x000001, "Wrong size on HUDTutorial_C_ShouldShow");
static_assert(offsetof(HUDTutorial_C_ShouldShow, ReturnValue) == 0x000000, "Member 'HUDTutorial_C_ShouldShow::ReturnValue' has a wrong offset!");

}

