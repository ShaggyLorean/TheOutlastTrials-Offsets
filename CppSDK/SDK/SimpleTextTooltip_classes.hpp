﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleTextTooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SimpleTextTooltip.SimpleTextTooltip_C
// 0x0028 (0x0288 - 0x0260)
class USimpleTextTooltip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             SimpleText;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   DesiredText;                                       // 0x0270(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_SimpleTextTooltip(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SimpleTextTooltip_C">();
	}
	static class USimpleTextTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleTextTooltip_C>();
	}
};
static_assert(alignof(USimpleTextTooltip_C) == 0x000008, "Wrong alignment on USimpleTextTooltip_C");
static_assert(sizeof(USimpleTextTooltip_C) == 0x000288, "Wrong size on USimpleTextTooltip_C");
static_assert(offsetof(USimpleTextTooltip_C, UberGraphFrame) == 0x000260, "Member 'USimpleTextTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USimpleTextTooltip_C, SimpleText) == 0x000268, "Member 'USimpleTextTooltip_C::SimpleText' has a wrong offset!");
static_assert(offsetof(USimpleTextTooltip_C, DesiredText) == 0x000270, "Member 'USimpleTextTooltip_C::DesiredText' has a wrong offset!");

}
