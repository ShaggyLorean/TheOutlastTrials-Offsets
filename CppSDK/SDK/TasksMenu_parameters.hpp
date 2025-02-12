﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TasksMenu

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function TasksMenu.TasksMenu_C.ExecuteUbergraph_TasksMenu
// 0x0010 (0x0010 - 0x0000)
struct TasksMenu_C_ExecuteUbergraph_TasksMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URBMenuButton_C*                        K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TasksMenu_C_ExecuteUbergraph_TasksMenu) == 0x000008, "Wrong alignment on TasksMenu_C_ExecuteUbergraph_TasksMenu");
static_assert(sizeof(TasksMenu_C_ExecuteUbergraph_TasksMenu) == 0x000010, "Wrong size on TasksMenu_C_ExecuteUbergraph_TasksMenu");
static_assert(offsetof(TasksMenu_C_ExecuteUbergraph_TasksMenu, EntryPoint) == 0x000000, "Member 'TasksMenu_C_ExecuteUbergraph_TasksMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(TasksMenu_C_ExecuteUbergraph_TasksMenu, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'TasksMenu_C_ExecuteUbergraph_TasksMenu::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function TasksMenu.TasksMenu_C.BndEvt__TasksMenu_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct TasksMenu_C_BndEvt__TasksMenu_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature final
{
public:
	class URBMenuButton_C*                        Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TasksMenu_C_BndEvt__TasksMenu_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on TasksMenu_C_BndEvt__TasksMenu_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(sizeof(TasksMenu_C_BndEvt__TasksMenu_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong size on TasksMenu_C_BndEvt__TasksMenu_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(offsetof(TasksMenu_C_BndEvt__TasksMenu_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, Button) == 0x000000, "Member 'TasksMenu_C_BndEvt__TasksMenu_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function TasksMenu.TasksMenu_C.Event_OnFocusMenu
// 0x0020 (0x0020 - 0x0000)
struct TasksMenu_C_Event_OnFocusMenu final
{
public:
	class ARBGameStateLobby*                      CallFunc_GetRBGameStateLobby_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TasksMenu_C_Event_OnFocusMenu) == 0x000008, "Wrong alignment on TasksMenu_C_Event_OnFocusMenu");
static_assert(sizeof(TasksMenu_C_Event_OnFocusMenu) == 0x000020, "Wrong size on TasksMenu_C_Event_OnFocusMenu");
static_assert(offsetof(TasksMenu_C_Event_OnFocusMenu, CallFunc_GetRBGameStateLobby_ReturnValue) == 0x000000, "Member 'TasksMenu_C_Event_OnFocusMenu::CallFunc_GetRBGameStateLobby_ReturnValue' has a wrong offset!");
static_assert(offsetof(TasksMenu_C_Event_OnFocusMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'TasksMenu_C_Event_OnFocusMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TasksMenu_C_Event_OnFocusMenu, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'TasksMenu_C_Event_OnFocusMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function TasksMenu.TasksMenu_C.Event_OnUnfocusMenu
// 0x0018 (0x0018 - 0x0000)
struct TasksMenu_C_Event_OnUnfocusMenu final
{
public:
	bool                                          bShouldHide;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBGameStateLobby*                      CallFunc_GetRBGameStateLobby_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TasksMenu_C_Event_OnUnfocusMenu) == 0x000008, "Wrong alignment on TasksMenu_C_Event_OnUnfocusMenu");
static_assert(sizeof(TasksMenu_C_Event_OnUnfocusMenu) == 0x000018, "Wrong size on TasksMenu_C_Event_OnUnfocusMenu");
static_assert(offsetof(TasksMenu_C_Event_OnUnfocusMenu, bShouldHide) == 0x000000, "Member 'TasksMenu_C_Event_OnUnfocusMenu::bShouldHide' has a wrong offset!");
static_assert(offsetof(TasksMenu_C_Event_OnUnfocusMenu, CallFunc_GetRBGameStateLobby_ReturnValue) == 0x000008, "Member 'TasksMenu_C_Event_OnUnfocusMenu::CallFunc_GetRBGameStateLobby_ReturnValue' has a wrong offset!");
static_assert(offsetof(TasksMenu_C_Event_OnUnfocusMenu, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'TasksMenu_C_Event_OnUnfocusMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function TasksMenu.TasksMenu_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct TasksMenu_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(TasksMenu_C_OnFocusReceived) == 0x000008, "Wrong alignment on TasksMenu_C_OnFocusReceived");
static_assert(sizeof(TasksMenu_C_OnFocusReceived) == 0x0001B0, "Wrong size on TasksMenu_C_OnFocusReceived");
static_assert(offsetof(TasksMenu_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'TasksMenu_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(TasksMenu_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'TasksMenu_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(TasksMenu_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'TasksMenu_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(TasksMenu_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'TasksMenu_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

}

