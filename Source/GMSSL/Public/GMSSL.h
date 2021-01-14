// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Core/Public/Misc/Base64.h"
#include "Runtime/Core/Public/Misc/SecureHash.h"
#include "Runtime/Core/Public/HAL/FileManager.h"
#include "Runtime/Core/Public/Containers/UnrealString.h"
#include "Runtime/Core/Public/HAL/PlatformFilemanager.h"
#include "Interfaces/IPluginManager.h"
#include "Runtime/Core//Public/Misc/CString.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Modules/ModuleManager.h"

class FGMSSLModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void* GetDllHandle();

	/**
	 * ����ģʽ��ģ����з��ʣ��ǳ�����
	 * ע�ⲻҪ��shutdown�������ڽ��з��ʣ����ʱ��ܿ���ģ���Ѿ�ж����
	 * @return ����ģ�鵥��
	 */
	static inline FGMSSLModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FGMSSLModule>("GMSSL");
	}

	/**
	 * ���ģ���Ƿ��Ѿ�����
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("GMSSL");
	}

	void* DLLHandle;
	void* BouncyCastleDllHandle;
};
