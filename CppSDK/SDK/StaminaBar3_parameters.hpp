﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StaminaBar3

#include "Basic.hpp"

#include "OPP_structs.hpp"


namespace SDK::Params
{

// Function StaminaBar3.StaminaBar3_C.ExecuteUbergraph_StaminaBar3
// 0x0098 (0x0098 - 0x0000)
struct StaminaBar3_C_ExecuteUbergraph_StaminaBar3 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float newStamina, bool bIsExhausted)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBPlayer*                              K2Node_Event_oldPlayer;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBPlayer*                              K2Node_Event_newPlayer;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxStamina_MaxStamina;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BP_GetCurrentStamina_ReturnValue;         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(float maxStamina)>             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	class ARBPlayer*                              CallFunc_GetWatchedPlayer_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(float newStamina, bool bIsExhausted)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(float maxStamina)>             K2Node_CreateDelegate_OutputDelegate_3;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
	float                                         K2Node_CustomEvent_newStamina;                     // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsExhausted;                   // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_maxStamina;                     // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3) == 0x000008, "Wrong alignment on StaminaBar3_C_ExecuteUbergraph_StaminaBar3");
static_assert(sizeof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3) == 0x000098, "Wrong size on StaminaBar3_C_ExecuteUbergraph_StaminaBar3");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, EntryPoint) == 0x000000, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::EntryPoint' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, K2Node_Event_IsDesignTime) == 0x000014, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000018, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, K2Node_Event_oldPlayer) == 0x000020, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::K2Node_Event_oldPlayer' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, K2Node_Event_newPlayer) == 0x000028, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::K2Node_Event_newPlayer' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, CallFunc_GetMaxStamina_MaxStamina) == 0x000034, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::CallFunc_GetMaxStamina_MaxStamina' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, CallFunc_BP_GetCurrentStamina_ReturnValue) == 0x000038, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::CallFunc_BP_GetCurrentStamina_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, CallFunc_IsValid_ReturnValue_2) == 0x00003C, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, CallFunc_GetWatchedPlayer_ReturnValue) == 0x000050, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::CallFunc_GetWatchedPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, CallFunc_IsValid_ReturnValue_3) == 0x000058, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, K2Node_CreateDelegate_OutputDelegate_2) == 0x00005C, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, K2Node_CreateDelegate_OutputDelegate_3) == 0x00006C, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, K2Node_CustomEvent_newStamina) == 0x00007C, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::K2Node_CustomEvent_newStamina' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, K2Node_CustomEvent_bIsExhausted) == 0x000080, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::K2Node_CustomEvent_bIsExhausted' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, K2Node_CustomEvent_maxStamina) == 0x000084, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::K2Node_CustomEvent_maxStamina' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000088, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ExecuteUbergraph_StaminaBar3, CallFunc_PlayAnimationForward_ReturnValue) == 0x000090, "Member 'StaminaBar3_C_ExecuteUbergraph_StaminaBar3::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function StaminaBar3.StaminaBar3_C.OnMaxStaminaChanged
// 0x0004 (0x0004 - 0x0000)
struct StaminaBar3_C_OnMaxStaminaChanged final
{
public:
	float                                         maxStamina;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StaminaBar3_C_OnMaxStaminaChanged) == 0x000004, "Wrong alignment on StaminaBar3_C_OnMaxStaminaChanged");
static_assert(sizeof(StaminaBar3_C_OnMaxStaminaChanged) == 0x000004, "Wrong size on StaminaBar3_C_OnMaxStaminaChanged");
static_assert(offsetof(StaminaBar3_C_OnMaxStaminaChanged, maxStamina) == 0x000000, "Member 'StaminaBar3_C_OnMaxStaminaChanged::maxStamina' has a wrong offset!");

// Function StaminaBar3.StaminaBar3_C.OnStaminaChanged
// 0x0008 (0x0008 - 0x0000)
struct StaminaBar3_C_OnStaminaChanged final
{
public:
	float                                         newStamina;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsExhausted;                                      // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StaminaBar3_C_OnStaminaChanged) == 0x000004, "Wrong alignment on StaminaBar3_C_OnStaminaChanged");
static_assert(sizeof(StaminaBar3_C_OnStaminaChanged) == 0x000008, "Wrong size on StaminaBar3_C_OnStaminaChanged");
static_assert(offsetof(StaminaBar3_C_OnStaminaChanged, newStamina) == 0x000000, "Member 'StaminaBar3_C_OnStaminaChanged::newStamina' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_OnStaminaChanged, bIsExhausted) == 0x000004, "Member 'StaminaBar3_C_OnStaminaChanged::bIsExhausted' has a wrong offset!");

// Function StaminaBar3.StaminaBar3_C.Event_OnWatchedPlayerChanged
// 0x0010 (0x0010 - 0x0000)
struct StaminaBar3_C_Event_OnWatchedPlayerChanged final
{
public:
	class ARBPlayer*                              oldPlayer;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBPlayer*                              NewPlayer;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StaminaBar3_C_Event_OnWatchedPlayerChanged) == 0x000008, "Wrong alignment on StaminaBar3_C_Event_OnWatchedPlayerChanged");
static_assert(sizeof(StaminaBar3_C_Event_OnWatchedPlayerChanged) == 0x000010, "Wrong size on StaminaBar3_C_Event_OnWatchedPlayerChanged");
static_assert(offsetof(StaminaBar3_C_Event_OnWatchedPlayerChanged, oldPlayer) == 0x000000, "Member 'StaminaBar3_C_Event_OnWatchedPlayerChanged::oldPlayer' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_Event_OnWatchedPlayerChanged, NewPlayer) == 0x000008, "Member 'StaminaBar3_C_Event_OnWatchedPlayerChanged::NewPlayer' has a wrong offset!");

// Function StaminaBar3.StaminaBar3_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct StaminaBar3_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StaminaBar3_C_PreConstruct) == 0x000001, "Wrong alignment on StaminaBar3_C_PreConstruct");
static_assert(sizeof(StaminaBar3_C_PreConstruct) == 0x000001, "Wrong size on StaminaBar3_C_PreConstruct");
static_assert(offsetof(StaminaBar3_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'StaminaBar3_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function StaminaBar3.StaminaBar3_C.HandleStaminaChanged
// 0x0068 (0x0068 - 0x0000)
struct StaminaBar3_C_HandleStaminaChanged final
{
public:
	float                                         newStamina;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StaminaRatio;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BoostRatio;                                        // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetStaminaBoosterValue_StaminaBoosterValue; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBPlayer*                              CallFunc_GetWatchedPlayer_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxStamina_MaxStamina;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MapRangeClamped_ReturnValue;              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StaminaBar3_C_HandleStaminaChanged) == 0x000008, "Wrong alignment on StaminaBar3_C_HandleStaminaChanged");
static_assert(sizeof(StaminaBar3_C_HandleStaminaChanged) == 0x000068, "Wrong size on StaminaBar3_C_HandleStaminaChanged");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, newStamina) == 0x000000, "Member 'StaminaBar3_C_HandleStaminaChanged::newStamina' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, StaminaRatio) == 0x000004, "Member 'StaminaBar3_C_HandleStaminaChanged::StaminaRatio' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, BoostRatio) == 0x000008, "Member 'StaminaBar3_C_HandleStaminaChanged::BoostRatio' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, Temp_bool_Variable) == 0x00000C, "Member 'StaminaBar3_C_HandleStaminaChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, Temp_float_Variable) == 0x000010, "Member 'StaminaBar3_C_HandleStaminaChanged::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, Temp_bool_Variable_1) == 0x000014, "Member 'StaminaBar3_C_HandleStaminaChanged::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, Temp_float_Variable_1) == 0x000018, "Member 'StaminaBar3_C_HandleStaminaChanged::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, CallFunc_IsAnimationPlaying_ReturnValue) == 0x00001C, "Member 'StaminaBar3_C_HandleStaminaChanged::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00001D, "Member 'StaminaBar3_C_HandleStaminaChanged::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, CallFunc_GetStaminaBoosterValue_StaminaBoosterValue) == 0x000020, "Member 'StaminaBar3_C_HandleStaminaChanged::CallFunc_GetStaminaBoosterValue_StaminaBoosterValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, CallFunc_GetWatchedPlayer_ReturnValue) == 0x000028, "Member 'StaminaBar3_C_HandleStaminaChanged::CallFunc_GetWatchedPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'StaminaBar3_C_HandleStaminaChanged::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000038, "Member 'StaminaBar3_C_HandleStaminaChanged::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'StaminaBar3_C_HandleStaminaChanged::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, CallFunc_GetMaxStamina_MaxStamina) == 0x000044, "Member 'StaminaBar3_C_HandleStaminaChanged::CallFunc_GetMaxStamina_MaxStamina' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000048, "Member 'StaminaBar3_C_HandleStaminaChanged::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00004C, "Member 'StaminaBar3_C_HandleStaminaChanged::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000050, "Member 'StaminaBar3_C_HandleStaminaChanged::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, K2Node_Select_Default) == 0x000054, "Member 'StaminaBar3_C_HandleStaminaChanged::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000058, "Member 'StaminaBar3_C_HandleStaminaChanged::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, CallFunc_MapRangeClamped_ReturnValue) == 0x00005C, "Member 'StaminaBar3_C_HandleStaminaChanged::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000060, "Member 'StaminaBar3_C_HandleStaminaChanged::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleStaminaChanged, K2Node_Select_Default_1) == 0x000064, "Member 'StaminaBar3_C_HandleStaminaChanged::K2Node_Select_Default_1' has a wrong offset!");

// Function StaminaBar3.StaminaBar3_C.HandleMaxStaminaChanged
// 0x0038 (0x0038 - 0x0000)
struct StaminaBar3_C_HandleMaxStaminaChanged final
{
public:
	float                                         NewMaxStamina;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetStaminaBoosterValue_StaminaBoosterValue; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetStaminaBoosterValue_StaminaBoosterValue_1; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StaminaBar3_C_HandleMaxStaminaChanged) == 0x000008, "Wrong alignment on StaminaBar3_C_HandleMaxStaminaChanged");
static_assert(sizeof(StaminaBar3_C_HandleMaxStaminaChanged) == 0x000038, "Wrong size on StaminaBar3_C_HandleMaxStaminaChanged");
static_assert(offsetof(StaminaBar3_C_HandleMaxStaminaChanged, NewMaxStamina) == 0x000000, "Member 'StaminaBar3_C_HandleMaxStaminaChanged::NewMaxStamina' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleMaxStaminaChanged, CallFunc_GetStaminaBoosterValue_StaminaBoosterValue) == 0x000004, "Member 'StaminaBar3_C_HandleMaxStaminaChanged::CallFunc_GetStaminaBoosterValue_StaminaBoosterValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleMaxStaminaChanged, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'StaminaBar3_C_HandleMaxStaminaChanged::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleMaxStaminaChanged, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'StaminaBar3_C_HandleMaxStaminaChanged::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleMaxStaminaChanged, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'StaminaBar3_C_HandleMaxStaminaChanged::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleMaxStaminaChanged, CallFunc_GetStaminaBoosterValue_StaminaBoosterValue_1) == 0x000020, "Member 'StaminaBar3_C_HandleMaxStaminaChanged::CallFunc_GetStaminaBoosterValue_StaminaBoosterValue_1' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleMaxStaminaChanged, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000024, "Member 'StaminaBar3_C_HandleMaxStaminaChanged::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleMaxStaminaChanged, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000028, "Member 'StaminaBar3_C_HandleMaxStaminaChanged::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_HandleMaxStaminaChanged, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'StaminaBar3_C_HandleMaxStaminaChanged::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function StaminaBar3.StaminaBar3_C.GetStaminaBoosterValue
// 0x0030 (0x0030 - 0x0000)
struct StaminaBar3_C_GetStaminaBoosterValue final
{
public:
	float                                         StaminaBoosterValue;                               // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBPlayer*                              CallFunc_GetWatchedPlayer_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRBGameplayAttributeModifier           CallFunc_GetStaminaBoostItemModifier_ReturnValue;  // 0x0018(0x000C)(ConstParm, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StaminaBar3_C_GetStaminaBoosterValue) == 0x000008, "Wrong alignment on StaminaBar3_C_GetStaminaBoosterValue");
static_assert(sizeof(StaminaBar3_C_GetStaminaBoosterValue) == 0x000030, "Wrong size on StaminaBar3_C_GetStaminaBoosterValue");
static_assert(offsetof(StaminaBar3_C_GetStaminaBoosterValue, StaminaBoosterValue) == 0x000000, "Member 'StaminaBar3_C_GetStaminaBoosterValue::StaminaBoosterValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_GetStaminaBoosterValue, Temp_float_Variable) == 0x000004, "Member 'StaminaBar3_C_GetStaminaBoosterValue::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_GetStaminaBoosterValue, Temp_bool_Variable) == 0x000008, "Member 'StaminaBar3_C_GetStaminaBoosterValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_GetStaminaBoosterValue, CallFunc_GetWatchedPlayer_ReturnValue) == 0x000010, "Member 'StaminaBar3_C_GetStaminaBoosterValue::CallFunc_GetWatchedPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_GetStaminaBoosterValue, CallFunc_GetStaminaBoostItemModifier_ReturnValue) == 0x000018, "Member 'StaminaBar3_C_GetStaminaBoosterValue::CallFunc_GetStaminaBoostItemModifier_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_GetStaminaBoosterValue, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'StaminaBar3_C_GetStaminaBoosterValue::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_GetStaminaBoosterValue, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000025, "Member 'StaminaBar3_C_GetStaminaBoosterValue::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_GetStaminaBoosterValue, K2Node_Select_Default) == 0x000028, "Member 'StaminaBar3_C_GetStaminaBoosterValue::K2Node_Select_Default' has a wrong offset!");

// Function StaminaBar3.StaminaBar3_C.GetMaxStamina
// 0x0010 (0x0010 - 0x0000)
struct StaminaBar3_C_GetMaxStamina final
{
public:
	class ARBPlayer*                              Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         maxStamina;                                        // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StaminaBar3_C_GetMaxStamina) == 0x000008, "Wrong alignment on StaminaBar3_C_GetMaxStamina");
static_assert(sizeof(StaminaBar3_C_GetMaxStamina) == 0x000010, "Wrong size on StaminaBar3_C_GetMaxStamina");
static_assert(offsetof(StaminaBar3_C_GetMaxStamina, Player) == 0x000000, "Member 'StaminaBar3_C_GetMaxStamina::Player' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_GetMaxStamina, maxStamina) == 0x000008, "Member 'StaminaBar3_C_GetMaxStamina::maxStamina' has a wrong offset!");

// Function StaminaBar3.StaminaBar3_C.ShouldShow
// 0x0038 (0x0038 - 0x0000)
struct StaminaBar3_C_ShouldShow final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URBGameUserPreferences*                 CallFunc_GetRBGameUserPreferences_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBGameUserPreferences*                 CallFunc_GetRBGameUserPreferences_ReturnValue_1;   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStaminaDisplay_ReturnValue;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStaminaDisplay_ReturnValue_1;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBPlayer*                              CallFunc_GetWatchedPlayer_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_ShouldShowStamina_ReturnValue;         // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StaminaBar3_C_ShouldShow) == 0x000008, "Wrong alignment on StaminaBar3_C_ShouldShow");
static_assert(sizeof(StaminaBar3_C_ShouldShow) == 0x000038, "Wrong size on StaminaBar3_C_ShouldShow");
static_assert(offsetof(StaminaBar3_C_ShouldShow, ReturnValue) == 0x000000, "Member 'StaminaBar3_C_ShouldShow::ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ShouldShow, CallFunc_GetRBGameUserPreferences_ReturnValue) == 0x000008, "Member 'StaminaBar3_C_ShouldShow::CallFunc_GetRBGameUserPreferences_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ShouldShow, CallFunc_GetRBGameUserPreferences_ReturnValue_1) == 0x000010, "Member 'StaminaBar3_C_ShouldShow::CallFunc_GetRBGameUserPreferences_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ShouldShow, CallFunc_GetStaminaDisplay_ReturnValue) == 0x000018, "Member 'StaminaBar3_C_ShouldShow::CallFunc_GetStaminaDisplay_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ShouldShow, CallFunc_GetStaminaDisplay_ReturnValue_1) == 0x00001C, "Member 'StaminaBar3_C_ShouldShow::CallFunc_GetStaminaDisplay_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ShouldShow, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'StaminaBar3_C_ShouldShow::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ShouldShow, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000021, "Member 'StaminaBar3_C_ShouldShow::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ShouldShow, CallFunc_GetWatchedPlayer_ReturnValue) == 0x000028, "Member 'StaminaBar3_C_ShouldShow::CallFunc_GetWatchedPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ShouldShow, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'StaminaBar3_C_ShouldShow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StaminaBar3_C_ShouldShow, CallFunc_BP_ShouldShowStamina_ReturnValue) == 0x000031, "Member 'StaminaBar3_C_ShouldShow::CallFunc_BP_ShouldShowStamina_ReturnValue' has a wrong offset!");

}

