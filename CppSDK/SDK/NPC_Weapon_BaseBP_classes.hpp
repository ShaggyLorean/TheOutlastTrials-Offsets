﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Weapon_BaseBP

#include "Basic.hpp"

#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPC_Weapon_BaseBP.NPC_Weapon_BaseBP_C
// 0x0008 (0x0430 - 0x0428)
class ANPC_Weapon_BaseBP_C final : public ARBNPCWeapon
{
public:
	class USceneComponent*                        BloodEffectLocator;                                // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_Weapon_BaseBP_C">();
	}
	static class ANPC_Weapon_BaseBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_Weapon_BaseBP_C>();
	}
};
static_assert(alignof(ANPC_Weapon_BaseBP_C) == 0x000008, "Wrong alignment on ANPC_Weapon_BaseBP_C");
static_assert(sizeof(ANPC_Weapon_BaseBP_C) == 0x000430, "Wrong size on ANPC_Weapon_BaseBP_C");
static_assert(offsetof(ANPC_Weapon_BaseBP_C, BloodEffectLocator) == 0x000428, "Member 'ANPC_Weapon_BaseBP_C::BloodEffectLocator' has a wrong offset!");

}
