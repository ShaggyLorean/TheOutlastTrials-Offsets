﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WorkInProgressOverlay

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WorkInProgressOverlay.WorkInProgressOverlay_C.ExecuteUbergraph_WorkInProgressOverlay
// 0x0210 (0x0210 - 0x0000)
struct WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetServerAddressUrl_ReturnValue;          // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FString                                 Temp_string_Variable;                              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable_1;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A0(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA[0x6];                                       // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameVersionString_ReturnValue;         // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ARBGameStateBase*                       CallFunc_GetRBGameStateBase_ReturnValue;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetGameSessionRegion_ReturnValue;         // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMatchmakingRegionName_ReturnValue;     // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ToUpper_ReturnValue;                      // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0130(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0148(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0160(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x01A0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x01E0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01F0(0x0018)()
	bool                                          CallFunc_CheckFeatureSwitch_ReturnValue;           // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay) == 0x000008, "Wrong alignment on WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay");
static_assert(sizeof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay) == 0x000210, "Wrong size on WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, EntryPoint) == 0x000000, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::EntryPoint' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, CallFunc_GetServerAddressUrl_ReturnValue) == 0x000008, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::CallFunc_GetServerAddressUrl_ReturnValue' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, Temp_bool_Variable) == 0x000018, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, Temp_string_Variable) == 0x000038, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, K2Node_MakeArray_Array) == 0x000088, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, Temp_bool_Variable_1) == 0x000098, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, CallFunc_Format_ReturnValue) == 0x0000A0, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, Temp_byte_Variable) == 0x0000B8, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, Temp_byte_Variable_1) == 0x0000B9, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, CallFunc_GetGameVersionString_ReturnValue) == 0x0000C0, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::CallFunc_GetGameVersionString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, CallFunc_GetRBGameStateBase_ReturnValue) == 0x0000D0, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::CallFunc_GetRBGameStateBase_ReturnValue' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, CallFunc_Concat_StrStr_ReturnValue) == 0x0000D8, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, CallFunc_GetGameSessionRegion_ReturnValue) == 0x0000E8, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::CallFunc_GetGameSessionRegion_ReturnValue' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0000F8, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, CallFunc_GetMatchmakingRegionName_ReturnValue) == 0x000100, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::CallFunc_GetMatchmakingRegionName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, CallFunc_ToUpper_ReturnValue) == 0x000110, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::CallFunc_ToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, K2Node_Select_Default) == 0x000120, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000130, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000148, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, K2Node_MakeStruct_FormatArgumentData_1) == 0x000160, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, K2Node_MakeStruct_FormatArgumentData_2) == 0x0001A0, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, K2Node_MakeArray_Array_1) == 0x0001E0, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, CallFunc_Format_ReturnValue_1) == 0x0001F0, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, CallFunc_CheckFeatureSwitch_ReturnValue) == 0x000208, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::CallFunc_CheckFeatureSwitch_ReturnValue' has a wrong offset!");
static_assert(offsetof(WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay, K2Node_Select_Default_1) == 0x000209, "Member 'WorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay::K2Node_Select_Default_1' has a wrong offset!");

}

