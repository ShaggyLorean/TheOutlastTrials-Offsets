﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TaskProgressionHudWidget

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "OPP_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function TaskProgressionHudWidget.TaskProgressionHudWidget_C.ExecuteUbergraph_TaskProgressionHudWidget
// 0x0328 (0x0328 - 0x0000)
struct TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	struct FRBTaskHudProgressDisplayDetails       K2Node_CustomEvent_details;                        // 0x0048(0x0010)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E[0x2];                                       // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class URBTasksConfig*                         CallFunc_GetTasksConfig_ReturnValue;               // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRBTaskDataRow                         CallFunc_GetTaskData_ReturnValue;                  // 0x0068(0x01C0)(ConstParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0228(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0238(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_PostEventGlobal_ReturnValue;              // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0280(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0290(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x02A8(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x02C0(0x0018)(ConstParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x02D8(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x02E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_3;            // 0x02F0(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget) == 0x000008, "Wrong alignment on TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget");
static_assert(sizeof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget) == 0x000328, "Wrong size on TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, EntryPoint) == 0x000000, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, Temp_object_Variable) == 0x000010, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, Temp_bool_Variable) == 0x000021, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, Temp_byte_Variable) == 0x000022, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, Temp_byte_Variable_1) == 0x000023, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, Temp_bool_Variable_1) == 0x000024, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, K2Node_CustomEvent_details) == 0x000048, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::K2Node_CustomEvent_details' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, CallFunc_Greater_IntInt_ReturnValue) == 0x00005C, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, K2Node_Select_Default) == 0x00005D, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, CallFunc_GetTasksConfig_ReturnValue) == 0x000060, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::CallFunc_GetTasksConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, CallFunc_GetTaskData_ReturnValue) == 0x000068, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::CallFunc_GetTaskData_ReturnValue' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, Temp_delegate_Variable) == 0x000228, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, K2Node_MakeStruct_FormatArgumentData) == 0x000238, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, CallFunc_PostEventGlobal_ReturnValue) == 0x000278, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::CallFunc_PostEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, K2Node_MakeArray_Array) == 0x000280, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, CallFunc_Format_ReturnValue) == 0x000290, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, CallFunc_MakeLiteralText_ReturnValue) == 0x0002A8, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, K2Node_Select_Default_1) == 0x0002C0, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, K2Node_CreateDelegate_OutputDelegate_2) == 0x0002D8, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0002E8, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, K2Node_CreateDelegate_OutputDelegate_3) == 0x0002F0, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000300, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000308, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x000310, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x000318, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, CallFunc_IsValid_ReturnValue) == 0x000320, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget, CallFunc_IsValid_ReturnValue_1) == 0x000321, "Member 'TaskProgressionHudWidget_C_ExecuteUbergraph_TaskProgressionHudWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function TaskProgressionHudWidget.TaskProgressionHudWidget_C.Show
// 0x0010 (0x0010 - 0x0000)
struct TaskProgressionHudWidget_C_Show final
{
public:
	struct FRBTaskHudProgressDisplayDetails       details_0;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(TaskProgressionHudWidget_C_Show) == 0x000008, "Wrong alignment on TaskProgressionHudWidget_C_Show");
static_assert(sizeof(TaskProgressionHudWidget_C_Show) == 0x000010, "Wrong size on TaskProgressionHudWidget_C_Show");
static_assert(offsetof(TaskProgressionHudWidget_C_Show, details_0) == 0x000000, "Member 'TaskProgressionHudWidget_C_Show::details_0' has a wrong offset!");

// Function TaskProgressionHudWidget.TaskProgressionHudWidget_C.OnLoaded_225EBAA349307E17F6FD5792DBFB9AEE
// 0x0008 (0x0008 - 0x0000)
struct TaskProgressionHudWidget_C_OnLoaded_225EBAA349307E17F6FD5792DBFB9AEE final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TaskProgressionHudWidget_C_OnLoaded_225EBAA349307E17F6FD5792DBFB9AEE) == 0x000008, "Wrong alignment on TaskProgressionHudWidget_C_OnLoaded_225EBAA349307E17F6FD5792DBFB9AEE");
static_assert(sizeof(TaskProgressionHudWidget_C_OnLoaded_225EBAA349307E17F6FD5792DBFB9AEE) == 0x000008, "Wrong size on TaskProgressionHudWidget_C_OnLoaded_225EBAA349307E17F6FD5792DBFB9AEE");
static_assert(offsetof(TaskProgressionHudWidget_C_OnLoaded_225EBAA349307E17F6FD5792DBFB9AEE, Loaded) == 0x000000, "Member 'TaskProgressionHudWidget_C_OnLoaded_225EBAA349307E17F6FD5792DBFB9AEE::Loaded' has a wrong offset!");

}
