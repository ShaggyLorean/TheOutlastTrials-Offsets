﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Basic file containing function-implementations from Basic.hpp

#include <Windows.h>
#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{
uintptr_t InSDKUtils::GetImageBase()
{
	return reinterpret_cast<uintptr_t>(GetModuleHandle(0));
}

class UClass* BasicFilesImpleUtils::FindClassByName(const std::string& Name)
{
	return UObject::FindClassFast(Name);
}

class UClass* BasicFilesImpleUtils::FindClassByFullName(const std::string& Name)
{
	return UObject::FindClass(Name);
}

std::string BasicFilesImpleUtils::GetObjectName(class UClass* Class)
{
	return Class->GetName();
}

int32 BasicFilesImpleUtils::GetObjectIndex(class UClass* Class)
{
	return Class->Index;
}

uint64 BasicFilesImpleUtils::GetObjFNameAsUInt64(class UClass* Class)
{
	return *reinterpret_cast<uint64*>(&Class->Name);
}

class UObject* BasicFilesImpleUtils::GetObjectByIndex(int32 Index)
{
	return UObject::GObjects->GetByIndex(Index);
}

UFunction* BasicFilesImpleUtils::FindFunctionByFName(const FName* Name)
{
	for (int i = 0; i < UObject::GObjects->Num(); ++i)
	{
		UObject* Object = UObject::GObjects->GetByIndex(i);

		if (!Object)
			continue;

		if (Object->Name == *Name)
			return static_cast<UFunction*>(Object);
	}

	return nullptr;
}


// Predefined Function

class UObject* FWeakObjectPtr::Get() const
{
	return UObject::GObjects->GetByIndex(ObjectIndex);
}


// Predefined Function

class UObject* FWeakObjectPtr::operator->() const
{
	return UObject::GObjects->GetByIndex(ObjectIndex);
}


// Predefined Function

bool FWeakObjectPtr::operator==(const FWeakObjectPtr& Other) const
{
	return ObjectIndex == Other.ObjectIndex;
}


// Predefined Function

bool FWeakObjectPtr::operator!=(const FWeakObjectPtr& Other) const
{
	return ObjectIndex != Other.ObjectIndex;
}


// Predefined Function

bool FWeakObjectPtr::operator==(const class UObject* Other) const
{
	return ObjectIndex == Other->Index;
}


// Predefined Function

bool FWeakObjectPtr::operator!=(const class UObject* Other) const
{
	return ObjectIndex != Other->Index;
}


}
