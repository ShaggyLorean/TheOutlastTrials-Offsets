﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XPProgressBar

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function XPProgressBar.XPProgressBar_C.ExecuteUbergraph_XPProgressBar
// 0x0038 (0x0038 - 0x0000)
struct XPProgressBar_C_ExecuteUbergraph_XPProgressBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(XPProgressBar_C_ExecuteUbergraph_XPProgressBar) == 0x000008, "Wrong alignment on XPProgressBar_C_ExecuteUbergraph_XPProgressBar");
static_assert(sizeof(XPProgressBar_C_ExecuteUbergraph_XPProgressBar) == 0x000038, "Wrong size on XPProgressBar_C_ExecuteUbergraph_XPProgressBar");
static_assert(offsetof(XPProgressBar_C_ExecuteUbergraph_XPProgressBar, EntryPoint) == 0x000000, "Member 'XPProgressBar_C_ExecuteUbergraph_XPProgressBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_ExecuteUbergraph_XPProgressBar, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'XPProgressBar_C_ExecuteUbergraph_XPProgressBar::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_ExecuteUbergraph_XPProgressBar, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000018, "Member 'XPProgressBar_C_ExecuteUbergraph_XPProgressBar::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_ExecuteUbergraph_XPProgressBar, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000020, "Member 'XPProgressBar_C_ExecuteUbergraph_XPProgressBar::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_ExecuteUbergraph_XPProgressBar, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000028, "Member 'XPProgressBar_C_ExecuteUbergraph_XPProgressBar::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_ExecuteUbergraph_XPProgressBar, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'XPProgressBar_C_ExecuteUbergraph_XPProgressBar::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function XPProgressBar.XPProgressBar_C.Init
// 0x000C (0x000C - 0x0000)
struct XPProgressBar_C_Init final
{
public:
	int32                                         PlayerLevel_0;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StartXp_0;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentXp_0;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(XPProgressBar_C_Init) == 0x000004, "Wrong alignment on XPProgressBar_C_Init");
static_assert(sizeof(XPProgressBar_C_Init) == 0x00000C, "Wrong size on XPProgressBar_C_Init");
static_assert(offsetof(XPProgressBar_C_Init, PlayerLevel_0) == 0x000000, "Member 'XPProgressBar_C_Init::PlayerLevel_0' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_Init, StartXp_0) == 0x000004, "Member 'XPProgressBar_C_Init::StartXp_0' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_Init, CurrentXp_0) == 0x000008, "Member 'XPProgressBar_C_Init::CurrentXp_0' has a wrong offset!");

// Function XPProgressBar.XPProgressBar_C.Refresh
// 0x0058 (0x0058 - 0x0000)
struct XPProgressBar_C_Refresh final
{
public:
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBPlayerState*                         CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBPlayerProgressionData*               CallFunc_GetPlayerProgressionData_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxPlayerLevel_ReturnValue;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0044(0x0010)(NoDestructor)
};
static_assert(alignof(XPProgressBar_C_Refresh) == 0x000008, "Wrong alignment on XPProgressBar_C_Refresh");
static_assert(sizeof(XPProgressBar_C_Refresh) == 0x000058, "Wrong size on XPProgressBar_C_Refresh");
static_assert(offsetof(XPProgressBar_C_Refresh, K2Node_MakeStruct_Margin) == 0x000000, "Member 'XPProgressBar_C_Refresh::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_Refresh, CallFunc_MakeVector2D_ReturnValue) == 0x000010, "Member 'XPProgressBar_C_Refresh::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_Refresh, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000018, "Member 'XPProgressBar_C_Refresh::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_Refresh, CallFunc_GetPlayerProgressionData_ReturnValue) == 0x000020, "Member 'XPProgressBar_C_Refresh::CallFunc_GetPlayerProgressionData_ReturnValue' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_Refresh, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000028, "Member 'XPProgressBar_C_Refresh::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_Refresh, CallFunc_GetMaxPlayerLevel_ReturnValue) == 0x000030, "Member 'XPProgressBar_C_Refresh::CallFunc_GetMaxPlayerLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_Refresh, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000034, "Member 'XPProgressBar_C_Refresh::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_Refresh, CallFunc_FMax_ReturnValue) == 0x000038, "Member 'XPProgressBar_C_Refresh::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_Refresh, CallFunc_MakeVector2D_ReturnValue_1) == 0x00003C, "Member 'XPProgressBar_C_Refresh::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_Refresh, K2Node_MakeStruct_Anchors) == 0x000044, "Member 'XPProgressBar_C_Refresh::K2Node_MakeStruct_Anchors' has a wrong offset!");

// Function XPProgressBar.XPProgressBar_C.InitProgressBar
// 0x0038 (0x0038 - 0x0000)
struct XPProgressBar_C_InitProgressBar final
{
public:
	class UProgressBar*                           ProgressBar;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Xp;                                                // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBPlayerState*                         CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBPlayerProgressionData*               CallFunc_GetPlayerProgressionData_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerLevelRequiredXP_ReturnValue;     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(XPProgressBar_C_InitProgressBar) == 0x000008, "Wrong alignment on XPProgressBar_C_InitProgressBar");
static_assert(sizeof(XPProgressBar_C_InitProgressBar) == 0x000038, "Wrong size on XPProgressBar_C_InitProgressBar");
static_assert(offsetof(XPProgressBar_C_InitProgressBar, ProgressBar) == 0x000000, "Member 'XPProgressBar_C_InitProgressBar::ProgressBar' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_InitProgressBar, Xp) == 0x000008, "Member 'XPProgressBar_C_InitProgressBar::Xp' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_InitProgressBar, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00000C, "Member 'XPProgressBar_C_InitProgressBar::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_InitProgressBar, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'XPProgressBar_C_InitProgressBar::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_InitProgressBar, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000018, "Member 'XPProgressBar_C_InitProgressBar::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_InitProgressBar, CallFunc_GetPlayerProgressionData_ReturnValue) == 0x000020, "Member 'XPProgressBar_C_InitProgressBar::CallFunc_GetPlayerProgressionData_ReturnValue' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_InitProgressBar, CallFunc_GetPlayerLevelRequiredXP_ReturnValue) == 0x000028, "Member 'XPProgressBar_C_InitProgressBar::CallFunc_GetPlayerLevelRequiredXP_ReturnValue' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_InitProgressBar, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00002C, "Member 'XPProgressBar_C_InitProgressBar::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_InitProgressBar, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'XPProgressBar_C_InitProgressBar::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_InitProgressBar, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000034, "Member 'XPProgressBar_C_InitProgressBar::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

// Function XPProgressBar.XPProgressBar_C.Update
// 0x000C (0x000C - 0x0000)
struct XPProgressBar_C_Update final
{
public:
	int32                                         PlayerLevel_0;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StartXp_0;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentXp_0;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(XPProgressBar_C_Update) == 0x000004, "Wrong alignment on XPProgressBar_C_Update");
static_assert(sizeof(XPProgressBar_C_Update) == 0x00000C, "Wrong size on XPProgressBar_C_Update");
static_assert(offsetof(XPProgressBar_C_Update, PlayerLevel_0) == 0x000000, "Member 'XPProgressBar_C_Update::PlayerLevel_0' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_Update, StartXp_0) == 0x000004, "Member 'XPProgressBar_C_Update::StartXp_0' has a wrong offset!");
static_assert(offsetof(XPProgressBar_C_Update, CurrentXp_0) == 0x000008, "Member 'XPProgressBar_C_Update::CurrentXp_0' has a wrong offset!");

}

