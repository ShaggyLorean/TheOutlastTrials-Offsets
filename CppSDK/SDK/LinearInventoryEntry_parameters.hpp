﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LinearInventoryEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "OPP_structs.hpp"


namespace SDK::Params
{

// Function LinearInventoryEntry.LinearInventoryEntry_C.ExecuteUbergraph_LinearInventoryEntry
// 0x0008 (0x0008 - 0x0000)
struct LinearInventoryEntry_C_ExecuteUbergraph_LinearInventoryEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsGamepad;                           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LinearInventoryEntry_C_ExecuteUbergraph_LinearInventoryEntry) == 0x000004, "Wrong alignment on LinearInventoryEntry_C_ExecuteUbergraph_LinearInventoryEntry");
static_assert(sizeof(LinearInventoryEntry_C_ExecuteUbergraph_LinearInventoryEntry) == 0x000008, "Wrong size on LinearInventoryEntry_C_ExecuteUbergraph_LinearInventoryEntry");
static_assert(offsetof(LinearInventoryEntry_C_ExecuteUbergraph_LinearInventoryEntry, EntryPoint) == 0x000000, "Member 'LinearInventoryEntry_C_ExecuteUbergraph_LinearInventoryEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_ExecuteUbergraph_LinearInventoryEntry, K2Node_Event_IsDesignTime) == 0x000004, "Member 'LinearInventoryEntry_C_ExecuteUbergraph_LinearInventoryEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_ExecuteUbergraph_LinearInventoryEntry, K2Node_Event_bIsGamepad) == 0x000005, "Member 'LinearInventoryEntry_C_ExecuteUbergraph_LinearInventoryEntry::K2Node_Event_bIsGamepad' has a wrong offset!");

// Function LinearInventoryEntry.LinearInventoryEntry_C.Event_InputSourceChanged
// 0x0001 (0x0001 - 0x0000)
struct LinearInventoryEntry_C_Event_InputSourceChanged final
{
public:
	bool                                          bIsGamepad;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LinearInventoryEntry_C_Event_InputSourceChanged) == 0x000001, "Wrong alignment on LinearInventoryEntry_C_Event_InputSourceChanged");
static_assert(sizeof(LinearInventoryEntry_C_Event_InputSourceChanged) == 0x000001, "Wrong size on LinearInventoryEntry_C_Event_InputSourceChanged");
static_assert(offsetof(LinearInventoryEntry_C_Event_InputSourceChanged, bIsGamepad) == 0x000000, "Member 'LinearInventoryEntry_C_Event_InputSourceChanged::bIsGamepad' has a wrong offset!");

// Function LinearInventoryEntry.LinearInventoryEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct LinearInventoryEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LinearInventoryEntry_C_PreConstruct) == 0x000001, "Wrong alignment on LinearInventoryEntry_C_PreConstruct");
static_assert(sizeof(LinearInventoryEntry_C_PreConstruct) == 0x000001, "Wrong size on LinearInventoryEntry_C_PreConstruct");
static_assert(offsetof(LinearInventoryEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'LinearInventoryEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function LinearInventoryEntry.LinearInventoryEntry_C.Init
// 0x0018 (0x0018 - 0x0000)
struct LinearInventoryEntry_C_Init final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LinearInventoryEntry_C_Init) == 0x000008, "Wrong alignment on LinearInventoryEntry_C_Init");
static_assert(sizeof(LinearInventoryEntry_C_Init) == 0x000018, "Wrong size on LinearInventoryEntry_C_Init");
static_assert(offsetof(LinearInventoryEntry_C_Init, Temp_bool_Variable) == 0x000000, "Member 'LinearInventoryEntry_C_Init::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_Init, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'LinearInventoryEntry_C_Init::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_Init, CallFunc_TextIsEmpty_ReturnValue) == 0x000002, "Member 'LinearInventoryEntry_C_Init::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_Init, K2Node_Select_Default) == 0x000008, "Member 'LinearInventoryEntry_C_Init::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_Init, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'LinearInventoryEntry_C_Init::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function LinearInventoryEntry.LinearInventoryEntry_C.SetSelected
// 0x0010 (0x0010 - 0x0000)
struct LinearInventoryEntry_C_SetSelected final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LinearInventoryEntry_C_SetSelected) == 0x000008, "Wrong alignment on LinearInventoryEntry_C_SetSelected");
static_assert(sizeof(LinearInventoryEntry_C_SetSelected) == 0x000010, "Wrong size on LinearInventoryEntry_C_SetSelected");
static_assert(offsetof(LinearInventoryEntry_C_SetSelected, IsSelected) == 0x000000, "Member 'LinearInventoryEntry_C_SetSelected::IsSelected' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_SetSelected, Temp_bool_Variable) == 0x000001, "Member 'LinearInventoryEntry_C_SetSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_SetSelected, Temp_byte_Variable) == 0x000002, "Member 'LinearInventoryEntry_C_SetSelected::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_SetSelected, Temp_byte_Variable_1) == 0x000003, "Member 'LinearInventoryEntry_C_SetSelected::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_SetSelected, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000004, "Member 'LinearInventoryEntry_C_SetSelected::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_SetSelected, K2Node_Select_Default) == 0x000005, "Member 'LinearInventoryEntry_C_SetSelected::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_SetSelected, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'LinearInventoryEntry_C_SetSelected::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function LinearInventoryEntry.LinearInventoryEntry_C.UpdateInfo
// 0x0088 (0x0088 - 0x0000)
struct LinearInventoryEntry_C_UpdateInfo final
{
public:
	struct FUILinearInventoryItem                 itemInfo_0;                                        // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LinearInventoryEntry_C_UpdateInfo) == 0x000008, "Wrong alignment on LinearInventoryEntry_C_UpdateInfo");
static_assert(sizeof(LinearInventoryEntry_C_UpdateInfo) == 0x000088, "Wrong size on LinearInventoryEntry_C_UpdateInfo");
static_assert(offsetof(LinearInventoryEntry_C_UpdateInfo, itemInfo_0) == 0x000000, "Member 'LinearInventoryEntry_C_UpdateInfo::itemInfo_0' has a wrong offset!");

// Function LinearInventoryEntry.LinearInventoryEntry_C.UpdatePrompt
// 0x0018 (0x0018 - 0x0000)
struct LinearInventoryEntry_C_UpdatePrompt final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsUsingGamepad_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LinearInventoryEntry_C_UpdatePrompt) == 0x000004, "Wrong alignment on LinearInventoryEntry_C_UpdatePrompt");
static_assert(sizeof(LinearInventoryEntry_C_UpdatePrompt) == 0x000018, "Wrong size on LinearInventoryEntry_C_UpdatePrompt");
static_assert(offsetof(LinearInventoryEntry_C_UpdatePrompt, Temp_bool_Variable) == 0x000000, "Member 'LinearInventoryEntry_C_UpdatePrompt::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_UpdatePrompt, Temp_name_Variable) == 0x000004, "Member 'LinearInventoryEntry_C_UpdatePrompt::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_UpdatePrompt, CallFunc_BP_IsUsingGamepad_ReturnValue) == 0x00000C, "Member 'LinearInventoryEntry_C_UpdatePrompt::CallFunc_BP_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_UpdatePrompt, K2Node_Select_Default) == 0x000010, "Member 'LinearInventoryEntry_C_UpdatePrompt::K2Node_Select_Default' has a wrong offset!");

// Function LinearInventoryEntry.LinearInventoryEntry_C.UpdateSpecialColor
// 0x0038 (0x0038 - 0x0000)
struct LinearInventoryEntry_C_UpdateSpecialColor final
{
public:
	struct FLinearColor                           SpecialColor;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
};
static_assert(alignof(LinearInventoryEntry_C_UpdateSpecialColor) == 0x000008, "Wrong alignment on LinearInventoryEntry_C_UpdateSpecialColor");
static_assert(sizeof(LinearInventoryEntry_C_UpdateSpecialColor) == 0x000038, "Wrong size on LinearInventoryEntry_C_UpdateSpecialColor");
static_assert(offsetof(LinearInventoryEntry_C_UpdateSpecialColor, SpecialColor) == 0x000000, "Member 'LinearInventoryEntry_C_UpdateSpecialColor::SpecialColor' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_UpdateSpecialColor, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'LinearInventoryEntry_C_UpdateSpecialColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function LinearInventoryEntry.LinearInventoryEntry_C.UpdateSwapIconVisibility
// 0x0006 (0x0006 - 0x0000)
struct LinearInventoryEntry_C_UpdateSwapIconVisibility final
{
public:
	bool                                          Swap;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LinearInventoryEntry_C_UpdateSwapIconVisibility) == 0x000001, "Wrong alignment on LinearInventoryEntry_C_UpdateSwapIconVisibility");
static_assert(sizeof(LinearInventoryEntry_C_UpdateSwapIconVisibility) == 0x000006, "Wrong size on LinearInventoryEntry_C_UpdateSwapIconVisibility");
static_assert(offsetof(LinearInventoryEntry_C_UpdateSwapIconVisibility, Swap) == 0x000000, "Member 'LinearInventoryEntry_C_UpdateSwapIconVisibility::Swap' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_UpdateSwapIconVisibility, Temp_bool_Variable) == 0x000001, "Member 'LinearInventoryEntry_C_UpdateSwapIconVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_UpdateSwapIconVisibility, Temp_byte_Variable) == 0x000002, "Member 'LinearInventoryEntry_C_UpdateSwapIconVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_UpdateSwapIconVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'LinearInventoryEntry_C_UpdateSwapIconVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_UpdateSwapIconVisibility, K2Node_Select_Default) == 0x000004, "Member 'LinearInventoryEntry_C_UpdateSwapIconVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LinearInventoryEntry_C_UpdateSwapIconVisibility, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000005, "Member 'LinearInventoryEntry_C_UpdateSwapIconVisibility::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function LinearInventoryEntry.LinearInventoryEntry_C.ShouldShow
// 0x0001 (0x0001 - 0x0000)
struct LinearInventoryEntry_C_ShouldShow final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LinearInventoryEntry_C_ShouldShow) == 0x000001, "Wrong alignment on LinearInventoryEntry_C_ShouldShow");
static_assert(sizeof(LinearInventoryEntry_C_ShouldShow) == 0x000001, "Wrong size on LinearInventoryEntry_C_ShouldShow");
static_assert(offsetof(LinearInventoryEntry_C_ShouldShow, ReturnValue) == 0x000000, "Member 'LinearInventoryEntry_C_ShouldShow::ReturnValue' has a wrong offset!");

}

