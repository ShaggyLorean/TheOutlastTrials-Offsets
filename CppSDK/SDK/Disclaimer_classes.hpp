﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Disclaimer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Disclaimer.Disclaimer_C
// 0x0020 (0x0328 - 0x0308)
class UDisclaimer_C final : public URBMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UActionIconWidget_C*                    buttonPrompt;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                disclaimerBtn;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         PushTimestamp;                                     // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Disclaimer(int32 EntryPoint);
	void Event_OnPush();
	void Event_OnPop();
	void BndEvt__Disclaimer_disclaimerBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_MenuConfirm_Pressed();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Disclaimer_C">();
	}
	static class UDisclaimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDisclaimer_C>();
	}
};
static_assert(alignof(UDisclaimer_C) == 0x000008, "Wrong alignment on UDisclaimer_C");
static_assert(sizeof(UDisclaimer_C) == 0x000328, "Wrong size on UDisclaimer_C");
static_assert(offsetof(UDisclaimer_C, UberGraphFrame) == 0x000308, "Member 'UDisclaimer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDisclaimer_C, buttonPrompt) == 0x000310, "Member 'UDisclaimer_C::buttonPrompt' has a wrong offset!");
static_assert(offsetof(UDisclaimer_C, disclaimerBtn) == 0x000318, "Member 'UDisclaimer_C::disclaimerBtn' has a wrong offset!");
static_assert(offsetof(UDisclaimer_C, PushTimestamp) == 0x000320, "Member 'UDisclaimer_C::PushTimestamp' has a wrong offset!");

}

