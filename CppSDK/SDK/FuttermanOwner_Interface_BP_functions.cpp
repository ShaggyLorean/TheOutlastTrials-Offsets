﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FuttermanOwner_Interface_BP

#include "Basic.hpp"

#include "FuttermanOwner_Interface_BP_classes.hpp"
#include "FuttermanOwner_Interface_BP_parameters.hpp"


namespace SDK
{

// Function FuttermanOwner_Interface_BP.FuttermanOwner_Interface_BP_C.SetFuttermanDrillValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    DrillValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    DrillManual                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IFuttermanOwner_Interface_BP_C::SetFuttermanDrillValue(bool DrillValue, bool DrillManual, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FuttermanOwner_Interface_BP_C", "SetFuttermanDrillValue");

	Params::FuttermanOwner_Interface_BP_C_SetFuttermanDrillValue Parms{};

	Parms.DrillValue = DrillValue;
	Parms.DrillManual = DrillManual;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}

}

