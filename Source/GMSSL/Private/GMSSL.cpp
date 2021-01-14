// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GMSSL.h"
#include "Core.h"

#define LOCTEXT_NAMESPACE "FGMSSLModule"
void FGMSSLModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	//FString BaseDir = IPluginManager::Get().FindPlugin("GMSSL")->GetBaseDir();
	//FString LibraryPath = FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/GMSSLLibrary/Win64/libcryptAPIsm_64.dll"));;
	FString ProjectBinariesDir = FPaths::Combine(*FPaths::ProjectDir(), TEXT("Binaries/Win64/"));

	DLLHandle = !ProjectBinariesDir.IsEmpty() ? FPlatformProcess::GetDllHandle(*FPaths::Combine(ProjectBinariesDir, TEXT("libcryptAPIsm_64.dll"))) : nullptr;
	if (DLLHandle == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Fail to import libcryptAPIsm_64.dll"));
	}

	BouncyCastleDllHandle = !ProjectBinariesDir.IsEmpty() ? FPlatformProcess::GetDllHandle(*FPaths::Combine(ProjectBinariesDir, TEXT("BouncyCastle.Crypto.dll"))) : nullptr;
	if (BouncyCastleDllHandle == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Fail to import BouncyCastle.Crypto.dll"));
	}


	//简易获取我们插件的信息并打印出来显示，这里为显示版本
	TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(FString("GMSSL"));
	const FPluginDescriptor& PluginDescriptor = Plugin->GetDescriptor();
	UE_LOG(LogTemp, Log, TEXT("GMSSL Started v%s"), *PluginDescriptor.VersionName);
}

void FGMSSLModule::ShutdownModule()
{
	UE_LOG(LogTemp, Log, TEXT("GMSSL Plugin shutdown."));
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if (DLLHandle)
	{
		FPlatformProcess::FreeDllHandle(DLLHandle);
		DLLHandle = nullptr;
	}
	if (BouncyCastleDllHandle)
	{
		FPlatformProcess::FreeDllHandle(BouncyCastleDllHandle);
		BouncyCastleDllHandle = nullptr;
	}
}

void* FGMSSLModule::GetDllHandle()
{
	void* NewDLLHandle = nullptr;
#if PLATFORM_WINDOWS
#if PLATFORM_64BITS
	FString BinariesPath = FPaths::EngineDir() / FString(TEXT("Binaries/ThirdParty/GMSSLLibrary/Win64"));
#endif
	FPlatformProcess::PushDllDirectory(*BinariesPath);
	NewDLLHandle = FPlatformProcess::GetDllHandle(*(BinariesPath / "libcryptAPIsm_64.dll"));
	FPlatformProcess::PopDllDirectory(*BinariesPath);
#endif

	if (NewDLLHandle != nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("Engine plugin DLL found at %s"), *FPaths::ConvertRelativePathToFull(BinariesPath / "libcryptAPIsm_64.dll"));
	}
	return NewDLLHandle;
}
#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FGMSSLModule, GMSSL)
