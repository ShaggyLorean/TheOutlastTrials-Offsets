﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IntermediateObjectiveTextWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function IntermediateObjectiveTextWidget.IntermediateObjectiveTextWidget_C.UpdateStatusAndText
// 0x0078 (0x0078 - 0x0000)
struct IntermediateObjectiveTextWidget_C_UpdateStatusAndText final
{
public:
	bool                                          status;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_FormatTextForDecorator_ReturnValue;       // 0x0028(0x0018)()
	class UTexture2D*                             Temp_object_Variable;                              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0058(0x0018)()
	bool                                          CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue; // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(IntermediateObjectiveTextWidget_C_UpdateStatusAndText) == 0x000008, "Wrong alignment on IntermediateObjectiveTextWidget_C_UpdateStatusAndText");
static_assert(sizeof(IntermediateObjectiveTextWidget_C_UpdateStatusAndText) == 0x000078, "Wrong size on IntermediateObjectiveTextWidget_C_UpdateStatusAndText");
static_assert(offsetof(IntermediateObjectiveTextWidget_C_UpdateStatusAndText, status) == 0x000000, "Member 'IntermediateObjectiveTextWidget_C_UpdateStatusAndText::status' has a wrong offset!");
static_assert(offsetof(IntermediateObjectiveTextWidget_C_UpdateStatusAndText, Text) == 0x000008, "Member 'IntermediateObjectiveTextWidget_C_UpdateStatusAndText::Text' has a wrong offset!");
static_assert(offsetof(IntermediateObjectiveTextWidget_C_UpdateStatusAndText, Temp_bool_Variable) == 0x000020, "Member 'IntermediateObjectiveTextWidget_C_UpdateStatusAndText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IntermediateObjectiveTextWidget_C_UpdateStatusAndText, CallFunc_FormatTextForDecorator_ReturnValue) == 0x000028, "Member 'IntermediateObjectiveTextWidget_C_UpdateStatusAndText::CallFunc_FormatTextForDecorator_ReturnValue' has a wrong offset!");
static_assert(offsetof(IntermediateObjectiveTextWidget_C_UpdateStatusAndText, Temp_object_Variable) == 0x000040, "Member 'IntermediateObjectiveTextWidget_C_UpdateStatusAndText::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(IntermediateObjectiveTextWidget_C_UpdateStatusAndText, Temp_object_Variable_1) == 0x000048, "Member 'IntermediateObjectiveTextWidget_C_UpdateStatusAndText::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(IntermediateObjectiveTextWidget_C_UpdateStatusAndText, K2Node_Select_Default) == 0x000050, "Member 'IntermediateObjectiveTextWidget_C_UpdateStatusAndText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(IntermediateObjectiveTextWidget_C_UpdateStatusAndText, CallFunc_GetText_ReturnValue) == 0x000058, "Member 'IntermediateObjectiveTextWidget_C_UpdateStatusAndText::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(IntermediateObjectiveTextWidget_C_UpdateStatusAndText, CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue) == 0x000070, "Member 'IntermediateObjectiveTextWidget_C_UpdateStatusAndText::CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(IntermediateObjectiveTextWidget_C_UpdateStatusAndText, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000071, "Member 'IntermediateObjectiveTextWidget_C_UpdateStatusAndText::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

}
