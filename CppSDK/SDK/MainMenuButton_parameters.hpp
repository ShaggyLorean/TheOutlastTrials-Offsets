﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenuButton

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MainMenuButton.MainMenuButton_C.ExecuteUbergraph_MainMenuButton
// 0x0048 (0x0048 - 0x0000)
struct MainMenuButton_C_ExecuteUbergraph_MainMenuButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0018(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBMenuManager*                         CallFunc_GetMenuManager_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsUsingGamepad_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton) == 0x000008, "Wrong alignment on MainMenuButton_C_ExecuteUbergraph_MainMenuButton");
static_assert(sizeof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton) == 0x000048, "Wrong size on MainMenuButton_C_ExecuteUbergraph_MainMenuButton");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, EntryPoint) == 0x000000, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, CallFunc_MakeLiteralName_ReturnValue) == 0x000010, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, CallFunc_MakeLiteralText_ReturnValue) == 0x000018, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000030, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, CallFunc_GetMenuManager_ReturnValue) == 0x000038, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::CallFunc_GetMenuManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_ExecuteUbergraph_MainMenuButton, CallFunc_BP_IsUsingGamepad_ReturnValue) == 0x000040, "Member 'MainMenuButton_C_ExecuteUbergraph_MainMenuButton::CallFunc_BP_IsUsingGamepad_ReturnValue' has a wrong offset!");

// Function MainMenuButton.MainMenuButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MainMenuButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MainMenuButton_C_PreConstruct) == 0x000001, "Wrong alignment on MainMenuButton_C_PreConstruct");
static_assert(sizeof(MainMenuButton_C_PreConstruct) == 0x000001, "Wrong size on MainMenuButton_C_PreConstruct");
static_assert(offsetof(MainMenuButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MainMenuButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MainMenuButton.MainMenuButton_C.Set Button Enabled
// 0x0014 (0x0014 - 0x0000)
struct MainMenuButton_C_Set_Button_Enabled final
{
public:
	bool                                          IsEnabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainMenuButton_C_Set_Button_Enabled) == 0x000004, "Wrong alignment on MainMenuButton_C_Set_Button_Enabled");
static_assert(sizeof(MainMenuButton_C_Set_Button_Enabled) == 0x000014, "Wrong size on MainMenuButton_C_Set_Button_Enabled");
static_assert(offsetof(MainMenuButton_C_Set_Button_Enabled, IsEnabled) == 0x000000, "Member 'MainMenuButton_C_Set_Button_Enabled::IsEnabled' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_Set_Button_Enabled, Temp_bool_Variable) == 0x000001, "Member 'MainMenuButton_C_Set_Button_Enabled::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_Set_Button_Enabled, Temp_byte_Variable) == 0x000002, "Member 'MainMenuButton_C_Set_Button_Enabled::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_Set_Button_Enabled, Temp_byte_Variable_1) == 0x000003, "Member 'MainMenuButton_C_Set_Button_Enabled::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_Set_Button_Enabled, Temp_bool_Variable_1) == 0x000004, "Member 'MainMenuButton_C_Set_Button_Enabled::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_Set_Button_Enabled, K2Node_Select_Default) == 0x000005, "Member 'MainMenuButton_C_Set_Button_Enabled::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_Set_Button_Enabled, Temp_float_Variable) == 0x000008, "Member 'MainMenuButton_C_Set_Button_Enabled::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_Set_Button_Enabled, Temp_float_Variable_1) == 0x00000C, "Member 'MainMenuButton_C_Set_Button_Enabled::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_Set_Button_Enabled, K2Node_Select_Default_1) == 0x000010, "Member 'MainMenuButton_C_Set_Button_Enabled::K2Node_Select_Default_1' has a wrong offset!");

// Function MainMenuButton.MainMenuButton_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct MainMenuButton_C_SetText final
{
public:
	class FText                                   Text_0;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MainMenuButton_C_SetText) == 0x000008, "Wrong alignment on MainMenuButton_C_SetText");
static_assert(sizeof(MainMenuButton_C_SetText) == 0x000018, "Wrong size on MainMenuButton_C_SetText");
static_assert(offsetof(MainMenuButton_C_SetText, Text_0) == 0x000000, "Member 'MainMenuButton_C_SetText::Text_0' has a wrong offset!");

// Function MainMenuButton.MainMenuButton_C.Get Button Enabled
// 0x0002 (0x0002 - 0x0000)
struct MainMenuButton_C_Get_Button_Enabled final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MainMenuButton_C_Get_Button_Enabled) == 0x000001, "Wrong alignment on MainMenuButton_C_Get_Button_Enabled");
static_assert(sizeof(MainMenuButton_C_Get_Button_Enabled) == 0x000002, "Wrong size on MainMenuButton_C_Get_Button_Enabled");
static_assert(offsetof(MainMenuButton_C_Get_Button_Enabled, Enabled) == 0x000000, "Member 'MainMenuButton_C_Get_Button_Enabled::Enabled' has a wrong offset!");
static_assert(offsetof(MainMenuButton_C_Get_Button_Enabled, CallFunc_GetIsEnabled_ReturnValue) == 0x000001, "Member 'MainMenuButton_C_Get_Button_Enabled::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");

}
