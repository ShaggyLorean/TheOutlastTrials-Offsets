﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CompleteStamp

#include "Basic.hpp"

#include "CompleteStamp_classes.hpp"
#include "CompleteStamp_parameters.hpp"


namespace SDK
{

// Function CompleteStamp.CompleteStamp_C.ExecuteUbergraph_CompleteStamp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompleteStamp_C::ExecuteUbergraph_CompleteStamp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompleteStamp_C", "ExecuteUbergraph_CompleteStamp");

	Params::CompleteStamp_C_ExecuteUbergraph_CompleteStamp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CompleteStamp.CompleteStamp_C.PlayStampAnim
// (BlueprintCallable, BlueprintEvent)

void UCompleteStamp_C::PlayStampAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompleteStamp_C", "PlayStampAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

