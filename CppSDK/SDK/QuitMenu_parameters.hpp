﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuitMenu

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function QuitMenu.QuitMenu_C.ExecuteUbergraph_QuitMenu
// 0x0078 (0x0078 - 0x0000)
struct QuitMenu_C_ExecuteUbergraph_QuitMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsUsingGamepad_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B[0x5];                                       // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class URBMenuButton_C*                        K2Node_ComponentBoundEvent_Button_1;               // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBMenuButton_C*                        K2Node_ComponentBoundEvent_Button;                 // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInTutorialStage_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0058(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuitMenu_C_ExecuteUbergraph_QuitMenu) == 0x000008, "Wrong alignment on QuitMenu_C_ExecuteUbergraph_QuitMenu");
static_assert(sizeof(QuitMenu_C_ExecuteUbergraph_QuitMenu) == 0x000078, "Wrong size on QuitMenu_C_ExecuteUbergraph_QuitMenu");
static_assert(offsetof(QuitMenu_C_ExecuteUbergraph_QuitMenu, EntryPoint) == 0x000000, "Member 'QuitMenu_C_ExecuteUbergraph_QuitMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_ExecuteUbergraph_QuitMenu, CallFunc_BP_IsUsingGamepad_ReturnValue) == 0x000004, "Member 'QuitMenu_C_ExecuteUbergraph_QuitMenu::CallFunc_BP_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_ExecuteUbergraph_QuitMenu, Temp_bool_Variable) == 0x000005, "Member 'QuitMenu_C_ExecuteUbergraph_QuitMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_ExecuteUbergraph_QuitMenu, Temp_text_Variable) == 0x000008, "Member 'QuitMenu_C_ExecuteUbergraph_QuitMenu::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_ExecuteUbergraph_QuitMenu, Temp_text_Variable_1) == 0x000020, "Member 'QuitMenu_C_ExecuteUbergraph_QuitMenu::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_ExecuteUbergraph_QuitMenu, Temp_bool_Variable_1) == 0x000038, "Member 'QuitMenu_C_ExecuteUbergraph_QuitMenu::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_ExecuteUbergraph_QuitMenu, Temp_byte_Variable) == 0x000039, "Member 'QuitMenu_C_ExecuteUbergraph_QuitMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_ExecuteUbergraph_QuitMenu, Temp_byte_Variable_1) == 0x00003A, "Member 'QuitMenu_C_ExecuteUbergraph_QuitMenu::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_ExecuteUbergraph_QuitMenu, K2Node_ComponentBoundEvent_Button_1) == 0x000040, "Member 'QuitMenu_C_ExecuteUbergraph_QuitMenu::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_ExecuteUbergraph_QuitMenu, K2Node_ComponentBoundEvent_Button) == 0x000048, "Member 'QuitMenu_C_ExecuteUbergraph_QuitMenu::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_ExecuteUbergraph_QuitMenu, CallFunc_IsInTutorialStage_ReturnValue) == 0x000050, "Member 'QuitMenu_C_ExecuteUbergraph_QuitMenu::CallFunc_IsInTutorialStage_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_ExecuteUbergraph_QuitMenu, K2Node_Select_Default) == 0x000058, "Member 'QuitMenu_C_ExecuteUbergraph_QuitMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_ExecuteUbergraph_QuitMenu, K2Node_Select_Default_1) == 0x000070, "Member 'QuitMenu_C_ExecuteUbergraph_QuitMenu::K2Node_Select_Default_1' has a wrong offset!");

// Function QuitMenu.QuitMenu_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct QuitMenu_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature final
{
public:
	class URBMenuButton_C*                        Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuitMenu_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on QuitMenu_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
static_assert(sizeof(QuitMenu_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature) == 0x000008, "Wrong size on QuitMenu_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
static_assert(offsetof(QuitMenu_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature, Button) == 0x000000, "Member 'QuitMenu_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function QuitMenu.QuitMenu_C.BndEvt__QuitGameBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct QuitMenu_C_BndEvt__QuitGameBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature final
{
public:
	class URBMenuButton_C*                        Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuitMenu_C_BndEvt__QuitGameBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on QuitMenu_C_BndEvt__QuitGameBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
static_assert(sizeof(QuitMenu_C_BndEvt__QuitGameBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature) == 0x000008, "Wrong size on QuitMenu_C_BndEvt__QuitGameBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
static_assert(offsetof(QuitMenu_C_BndEvt__QuitGameBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature, Button) == 0x000000, "Member 'QuitMenu_C_BndEvt__QuitGameBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function QuitMenu.QuitMenu_C.OnPreviewMouseButtonDown
// 0x02D8 (0x02D8 - 0x0000)
struct QuitMenu_C_OnPreviewMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_BP_IsUsingGamepad_ReturnValue;            // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0168(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0220(0x00B8)()
};
static_assert(alignof(QuitMenu_C_OnPreviewMouseButtonDown) == 0x000008, "Wrong alignment on QuitMenu_C_OnPreviewMouseButtonDown");
static_assert(sizeof(QuitMenu_C_OnPreviewMouseButtonDown) == 0x0002D8, "Wrong size on QuitMenu_C_OnPreviewMouseButtonDown");
static_assert(offsetof(QuitMenu_C_OnPreviewMouseButtonDown, MyGeometry) == 0x000000, "Member 'QuitMenu_C_OnPreviewMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_OnPreviewMouseButtonDown, MouseEvent) == 0x000038, "Member 'QuitMenu_C_OnPreviewMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_OnPreviewMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'QuitMenu_C_OnPreviewMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_OnPreviewMouseButtonDown, CallFunc_BP_IsUsingGamepad_ReturnValue) == 0x000160, "Member 'QuitMenu_C_OnPreviewMouseButtonDown::CallFunc_BP_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_OnPreviewMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000168, "Member 'QuitMenu_C_OnPreviewMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuitMenu_C_OnPreviewMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000220, "Member 'QuitMenu_C_OnPreviewMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

}

