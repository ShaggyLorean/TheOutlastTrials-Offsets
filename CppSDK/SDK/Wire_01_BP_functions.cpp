﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wire_01_BP

#include "Basic.hpp"

#include "Wire_01_BP_classes.hpp"
#include "Wire_01_BP_parameters.hpp"


namespace SDK
{

// Function Wire-01_BP.Wire-01_BP_C.ExecuteUbergraph_Wire-01_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_01_BP_C::ExecuteUbergraph_Wire_01_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wire-01_BP_C", "ExecuteUbergraph_Wire-01_BP");

	Params::Wire_01_BP_C_ExecuteUbergraph_Wire_01_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Wire-01_BP.Wire-01_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWire_01_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wire-01_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Wire-01_BP.Wire-01_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWire_01_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wire-01_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
