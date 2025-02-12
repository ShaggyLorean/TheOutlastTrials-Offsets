﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReportPlayerMenu

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "AkAudio_structs.hpp"
#include "OPP_structs.hpp"


namespace SDK::Params
{

// Function ReportPlayerMenu.ReportPlayerMenu_C.ExecuteUbergraph_ReportPlayerMenu
// 0x0170 (0x0170 - 0x0000)
struct ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0008(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_FilterDetailsText_ReturnValue;            // 0x0028(0x0018)()
	int32                                         Temp_int_Variable;                                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetPlayerReportReasonText_ReturnValue;    // 0x0058(0x0018)(ConstParm)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0090(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PostEventGlobal_ReturnValue;              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x00A8(0x0018)()
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerDisplayName_ReturnValue;         // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_FormatPlayerName_ReturnValue;             // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0100(0x0018)()
	class URBMenuButton_C*                        K2Node_ComponentBoundEvent_Button;                 // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProfilePlatform                              CallFunc_GetPlayerPlatform_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x3];                                      // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0124(0x0008)(NoDestructor)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetPlatformIconTexture_texture;           // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOpen_ReturnValue;                       // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0140(0x0018)(ConstParm)
	class FText                                   CallFunc_FilterDetailsText_ReturnValue_1;          // 0x0158(0x0018)()
};
static_assert(alignof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu) == 0x000008, "Wrong alignment on ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu");
static_assert(sizeof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu) == 0x000170, "Wrong size on ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, EntryPoint) == 0x000000, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, K2Node_ComponentBoundEvent_Text) == 0x000008, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, K2Node_ComponentBoundEvent_CommitMethod) == 0x000020, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_MakeLiteralInt_ReturnValue) == 0x000024, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_FilterDetailsText_ReturnValue) == 0x000028, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_FilterDetailsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, Temp_int_Variable) == 0x000040, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, Temp_int_Variable_1) == 0x000044, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_Conv_IntToByte_ReturnValue) == 0x000048, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_GetValidValue_ReturnValue) == 0x000050, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000051, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_GetPlayerReportReasonText_ReturnValue) == 0x000058, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_GetPlayerReportReasonText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000070, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_Conv_TextToString_ReturnValue) == 0x000078, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000088, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_Less_IntInt_ReturnValue) == 0x00008C, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, Temp_delegate_Variable) == 0x000090, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_PostEventGlobal_ReturnValue) == 0x0000A0, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_PostEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_GetText_ReturnValue) == 0x0000A8, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_GetSelectedIndex_ReturnValue) == 0x0000C0, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000C8, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_Conv_IntToByte_ReturnValue_2) == 0x0000D8, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_Conv_IntToByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_GetValidValue_ReturnValue_1) == 0x0000D9, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_GetPlayerDisplayName_ReturnValue) == 0x0000E0, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_GetPlayerDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_FormatPlayerName_ReturnValue) == 0x0000F0, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_FormatPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000100, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, K2Node_ComponentBoundEvent_Button) == 0x000118, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_GetPlayerPlatform_ReturnValue) == 0x000120, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_GetPlayerPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, K2Node_Event_InFocusEvent) == 0x000124, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_GetPlatformIconTexture_texture) == 0x000130, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_GetPlatformIconTexture_texture' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_IsOpen_ReturnValue) == 0x000138, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_IsOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, K2Node_ComponentBoundEvent_Text_1) == 0x000140, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu, CallFunc_FilterDetailsText_ReturnValue_1) == 0x000158, "Member 'ReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu::CallFunc_FilterDetailsText_ReturnValue_1' has a wrong offset!");

// Function ReportPlayerMenu.ReportPlayerMenu_C.BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function ReportPlayerMenu.ReportPlayerMenu_C.BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function ReportPlayerMenu.ReportPlayerMenu_C.OnFocusLost
// 0x0008 (0x0008 - 0x0000)
struct ReportPlayerMenu_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(ReportPlayerMenu_C_OnFocusLost) == 0x000004, "Wrong alignment on ReportPlayerMenu_C_OnFocusLost");
static_assert(sizeof(ReportPlayerMenu_C_OnFocusLost) == 0x000008, "Wrong size on ReportPlayerMenu_C_OnFocusLost");
static_assert(offsetof(ReportPlayerMenu_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'ReportPlayerMenu_C_OnFocusLost::InFocusEvent' has a wrong offset!");

// Function ReportPlayerMenu.ReportPlayerMenu_C.BndEvt__ReportPlayerMenu_ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature final
{
public:
	class URBMenuButton_C*                        Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
static_assert(sizeof(ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature) == 0x000008, "Wrong size on ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
static_assert(offsetof(ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature, Button) == 0x000000, "Member 'ReportPlayerMenu_C_BndEvt__ReportPlayerMenu_ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function ReportPlayerMenu.ReportPlayerMenu_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct ReportPlayerMenu_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(ReportPlayerMenu_C_OnFocusReceived) == 0x000008, "Wrong alignment on ReportPlayerMenu_C_OnFocusReceived");
static_assert(sizeof(ReportPlayerMenu_C_OnFocusReceived) == 0x0001B0, "Wrong size on ReportPlayerMenu_C_OnFocusReceived");
static_assert(offsetof(ReportPlayerMenu_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'ReportPlayerMenu_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'ReportPlayerMenu_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'ReportPlayerMenu_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportPlayerMenu_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'ReportPlayerMenu_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

}

