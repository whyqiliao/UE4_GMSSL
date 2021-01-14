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
	 * 单例模式对模块进行访问，非常方便
	 * 注意不要在shutdown生命周期进行访问，这个时候很可能模块已经卸载了
	 * @return 返回模块单例
	 */
	static inline FGMSSLModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FGMSSLModule>("GMSSL");
	}

	/**
	 * 检查模块是否已经加载
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("GMSSL");
	}

	void* DLLHandle;
	void* BouncyCastleDllHandle;
};
