﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Spinner

#include "Basic.hpp"


namespace SDK::Params
{

// Function Spinner.Spinner_C.ExecuteUbergraph_Spinner
// 0x0018 (0x0018 - 0x0000)
struct Spinner_C_ExecuteUbergraph_Spinner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Spinner_C_ExecuteUbergraph_Spinner) == 0x000008, "Wrong alignment on Spinner_C_ExecuteUbergraph_Spinner");
static_assert(sizeof(Spinner_C_ExecuteUbergraph_Spinner) == 0x000018, "Wrong size on Spinner_C_ExecuteUbergraph_Spinner");
static_assert(offsetof(Spinner_C_ExecuteUbergraph_Spinner, EntryPoint) == 0x000000, "Member 'Spinner_C_ExecuteUbergraph_Spinner::EntryPoint' has a wrong offset!");
static_assert(offsetof(Spinner_C_ExecuteUbergraph_Spinner, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'Spinner_C_ExecuteUbergraph_Spinner::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spinner_C_ExecuteUbergraph_Spinner, K2Node_Event_IsDesignTime) == 0x000010, "Member 'Spinner_C_ExecuteUbergraph_Spinner::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Spinner_C_ExecuteUbergraph_Spinner, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'Spinner_C_ExecuteUbergraph_Spinner::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Spinner.Spinner_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Spinner_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Spinner_C_PreConstruct) == 0x000001, "Wrong alignment on Spinner_C_PreConstruct");
static_assert(sizeof(Spinner_C_PreConstruct) == 0x000001, "Wrong size on Spinner_C_PreConstruct");
static_assert(offsetof(Spinner_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Spinner_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

