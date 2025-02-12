﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WorkInProgressOverlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WorkInProgressOverlay.WorkInProgressOverlay_C
// 0x0018 (0x0280 - 0x0268)
class UWorkInProgressOverlay_C final : public URBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ClosedBetaOverlay;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ServerAddressText;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WorkInProgressOverlay(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WorkInProgressOverlay_C">();
	}
	static class UWorkInProgressOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWorkInProgressOverlay_C>();
	}
};
static_assert(alignof(UWorkInProgressOverlay_C) == 0x000008, "Wrong alignment on UWorkInProgressOverlay_C");
static_assert(sizeof(UWorkInProgressOverlay_C) == 0x000280, "Wrong size on UWorkInProgressOverlay_C");
static_assert(offsetof(UWorkInProgressOverlay_C, UberGraphFrame) == 0x000268, "Member 'UWorkInProgressOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWorkInProgressOverlay_C, ClosedBetaOverlay) == 0x000270, "Member 'UWorkInProgressOverlay_C::ClosedBetaOverlay' has a wrong offset!");
static_assert(offsetof(UWorkInProgressOverlay_C, ServerAddressText) == 0x000278, "Member 'UWorkInProgressOverlay_C::ServerAddressText' has a wrong offset!");

}

