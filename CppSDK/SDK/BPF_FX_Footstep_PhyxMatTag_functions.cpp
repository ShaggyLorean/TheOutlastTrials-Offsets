﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_FX_Footstep_PhyxMatTag

#include "Basic.hpp"

#include "BPF_FX_Footstep_PhyxMatTag_classes.hpp"
#include "BPF_FX_Footstep_PhyxMatTag_parameters.hpp"


namespace SDK
{

// Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.Footstep FX
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFootstepData                    FootstepData                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_FX_Footstep_PhyxMatTag_C::Footstep_FX(const struct FFootstepData& FootstepData, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_FX_Footstep_PhyxMatTag_C", "Footstep FX");

	Params::BPF_FX_Footstep_PhyxMatTag_C_Footstep_FX Parms{};

	Parms.FootstepData = std::move(FootstepData);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.Footstep FX Landing
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARBPawn*                          Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_FX_Footstep_PhyxMatTag_C::Footstep_FX_Landing(class ARBPawn* Pawn, class UObject* __WorldContext, int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_FX_Footstep_PhyxMatTag_C", "Footstep FX Landing");

	Params::BPF_FX_Footstep_PhyxMatTag_C_Footstep_FX_Landing Parms{};

	Parms.Pawn = Pawn;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}


// Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.tmpPlayVFX
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          TestPosition                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class UPhysicalMaterial*, class UNiagaraSystem*>PhysicsMaterialsToSystems                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UNiagaraSystem*                   DefaultSystem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_FX_Footstep_PhyxMatTag_C::tmpPlayVFX(struct FVector& TestPosition, TMap<class UPhysicalMaterial*, class UNiagaraSystem*>& PhysicsMaterialsToSystems, class UNiagaraSystem* DefaultSystem, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_FX_Footstep_PhyxMatTag_C", "tmpPlayVFX");

	Params::BPF_FX_Footstep_PhyxMatTag_C_tmpPlayVFX Parms{};

	Parms.TestPosition = std::move(TestPosition);
	Parms.PhysicsMaterialsToSystems = std::move(PhysicsMaterialsToSystems);
	Parms.DefaultSystem = DefaultSystem;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	TestPosition = std::move(Parms.TestPosition);
	PhysicsMaterialsToSystems = std::move(Parms.PhysicsMaterialsToSystems);
}


// Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.tmpPlayFootstepFX
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLeftFoot                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_FX_Footstep_PhyxMatTag_C::tmpPlayFootstepFX(bool& IsLeftFoot, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_FX_Footstep_PhyxMatTag_C", "tmpPlayFootstepFX");

	Params::BPF_FX_Footstep_PhyxMatTag_C_tmpPlayFootstepFX Parms{};

	Parms.IsLeftFoot = IsLeftFoot;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	IsLeftFoot = Parms.IsLeftFoot;
}


// Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.tmpPlayLandingFX
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_FX_Footstep_PhyxMatTag_C::tmpPlayLandingFX(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_FX_Footstep_PhyxMatTag_C", "tmpPlayLandingFX");

	Params::BPF_FX_Footstep_PhyxMatTag_C_tmpPlayLandingFX Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

