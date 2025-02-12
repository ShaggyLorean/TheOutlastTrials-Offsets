﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBGameInstance_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RBGameInstance_BP.RBGameInstance_BP_C
// 0x0008 (0x0408 - 0x0400)
class URBGameInstance_BP_C final : public URBGameInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_RBGameInstance_BP(int32 EntryPoint);
	void TravelToMap(const class FString& Map);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RBGameInstance_BP_C">();
	}
	static class URBGameInstance_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URBGameInstance_BP_C>();
	}
};
static_assert(alignof(URBGameInstance_BP_C) == 0x000008, "Wrong alignment on URBGameInstance_BP_C");
static_assert(sizeof(URBGameInstance_BP_C) == 0x000408, "Wrong size on URBGameInstance_BP_C");
static_assert(offsetof(URBGameInstance_BP_C, UberGraphFrame) == 0x000400, "Member 'URBGameInstance_BP_C::UberGraphFrame' has a wrong offset!");

}

