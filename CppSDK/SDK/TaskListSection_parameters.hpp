﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TaskListSection

#include "Basic.hpp"


namespace SDK::Params
{

// Function TaskListSection.TaskListSection_C.Init
// 0x0018 (0x0018 - 0x0000)
struct TaskListSection_C_Init final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(TaskListSection_C_Init) == 0x000008, "Wrong alignment on TaskListSection_C_Init");
static_assert(sizeof(TaskListSection_C_Init) == 0x000018, "Wrong size on TaskListSection_C_Init");
static_assert(offsetof(TaskListSection_C_Init, Text) == 0x000000, "Member 'TaskListSection_C_Init::Text' has a wrong offset!");

}

