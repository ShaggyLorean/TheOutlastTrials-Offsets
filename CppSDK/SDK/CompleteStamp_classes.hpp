﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CompleteStamp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CompleteStamp.CompleteStamp_C
// 0x0020 (0x0280 - 0x0260)
class UCompleteStamp_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       STAMP;                                             // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Border;                                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CompleteStamp(int32 EntryPoint);
	void PlayStampAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CompleteStamp_C">();
	}
	static class UCompleteStamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompleteStamp_C>();
	}
};
static_assert(alignof(UCompleteStamp_C) == 0x000008, "Wrong alignment on UCompleteStamp_C");
static_assert(sizeof(UCompleteStamp_C) == 0x000280, "Wrong size on UCompleteStamp_C");
static_assert(offsetof(UCompleteStamp_C, UberGraphFrame) == 0x000260, "Member 'UCompleteStamp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCompleteStamp_C, STAMP) == 0x000268, "Member 'UCompleteStamp_C::STAMP' has a wrong offset!");
static_assert(offsetof(UCompleteStamp_C, Border) == 0x000270, "Member 'UCompleteStamp_C::Border' has a wrong offset!");
static_assert(offsetof(UCompleteStamp_C, Text) == 0x000278, "Member 'UCompleteStamp_C::Text' has a wrong offset!");

}

