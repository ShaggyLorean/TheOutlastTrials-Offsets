﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpectatorInfoHudWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.ExecuteUbergraph_SpectatorInfoHudWidget
// 0x00C0 (0x00C0 - 0x0000)
struct SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0010(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBPlayer*                              K2Node_Event_newSpectatedlPlayer;                  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBPlayerState*                         K2Node_DynamicCast_AsRB_Player_State;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_FormatPlayerDisplayName_formatedDisplayName; // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
	int32                                         CallFunc_GetNumberOfAlivePlayer_ReturnValue;       // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget) == 0x000008, "Wrong alignment on SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget");
static_assert(sizeof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget) == 0x0000C0, "Wrong size on SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, EntryPoint) == 0x000000, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, Temp_bool_Variable) == 0x000004, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, Temp_byte_Variable) == 0x000005, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, Temp_byte_Variable_1) == 0x000006, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, K2Node_Event_MyGeometry) == 0x000010, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, K2Node_Event_InDeltaTime) == 0x000048, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000050, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, K2Node_Event_newSpectatedlPlayer) == 0x000058, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::K2Node_Event_newSpectatedlPlayer' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, K2Node_DynamicCast_AsRB_Player_State) == 0x000068, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::K2Node_DynamicCast_AsRB_Player_State' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, CallFunc_GetPlayerName_ReturnValue) == 0x000078, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, CallFunc_FormatPlayerDisplayName_formatedDisplayName) == 0x000088, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::CallFunc_FormatPlayerDisplayName_formatedDisplayName' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, K2Node_Event_IsDesignTime) == 0x000098, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, CallFunc_GetNumberOfAlivePlayer_ReturnValue) == 0x0000B8, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::CallFunc_GetNumberOfAlivePlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, CallFunc_Greater_IntInt_ReturnValue) == 0x0000BC, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget, K2Node_Select_Default) == 0x0000BD, "Member 'SpectatorInfoHudWidget_C_ExecuteUbergraph_SpectatorInfoHudWidget::K2Node_Select_Default' has a wrong offset!");

// Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SpectatorInfoHudWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SpectatorInfoHudWidget_C_PreConstruct) == 0x000001, "Wrong alignment on SpectatorInfoHudWidget_C_PreConstruct");
static_assert(sizeof(SpectatorInfoHudWidget_C_PreConstruct) == 0x000001, "Wrong size on SpectatorInfoHudWidget_C_PreConstruct");
static_assert(offsetof(SpectatorInfoHudWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SpectatorInfoHudWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Event_OnSpectatedPlayerChanged
// 0x0008 (0x0008 - 0x0000)
struct SpectatorInfoHudWidget_C_Event_OnSpectatedPlayerChanged final
{
public:
	class ARBPlayer*                              newSpectatedlPlayer;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpectatorInfoHudWidget_C_Event_OnSpectatedPlayerChanged) == 0x000008, "Wrong alignment on SpectatorInfoHudWidget_C_Event_OnSpectatedPlayerChanged");
static_assert(sizeof(SpectatorInfoHudWidget_C_Event_OnSpectatedPlayerChanged) == 0x000008, "Wrong size on SpectatorInfoHudWidget_C_Event_OnSpectatedPlayerChanged");
static_assert(offsetof(SpectatorInfoHudWidget_C_Event_OnSpectatedPlayerChanged, newSpectatedlPlayer) == 0x000000, "Member 'SpectatorInfoHudWidget_C_Event_OnSpectatedPlayerChanged::newSpectatedlPlayer' has a wrong offset!");

// Function SpectatorInfoHudWidget.SpectatorInfoHudWidget_C.Tick
// 0x003C (0x003C - 0x0000)
struct SpectatorInfoHudWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpectatorInfoHudWidget_C_Tick) == 0x000004, "Wrong alignment on SpectatorInfoHudWidget_C_Tick");
static_assert(sizeof(SpectatorInfoHudWidget_C_Tick) == 0x00003C, "Wrong size on SpectatorInfoHudWidget_C_Tick");
static_assert(offsetof(SpectatorInfoHudWidget_C_Tick, MyGeometry) == 0x000000, "Member 'SpectatorInfoHudWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(SpectatorInfoHudWidget_C_Tick, InDeltaTime) == 0x000038, "Member 'SpectatorInfoHudWidget_C_Tick::InDeltaTime' has a wrong offset!");

}

