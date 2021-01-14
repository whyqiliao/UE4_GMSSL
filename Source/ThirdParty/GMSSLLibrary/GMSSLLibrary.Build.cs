// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class GMSSLLibrary : ModuleRules
{
    public GMSSLLibrary(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            // Add the import library
            PublicLibraryPaths.Add(Path.Combine(ModuleDirectory, "x64", "Release"));

            // Delay-load the DLL, so we can load it from the right place first
            PublicDelayLoadDLLs.Add("libcryptAPIsm_64.dll");
            PublicDelayLoadDLLs.Add("BouncyCastle.Crypto.dll");

            RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "x64", "Release", "libcryptAPIsm_64.dll"));
            RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "x64", "Release", "BouncyCastle.Crypto.dll"));

            CopyFileToProjectBinariesPath(Path.Combine(ModuleDirectory, "x64", "Release", "libcryptAPIsm_64.dll"), Target);
            CopyFileToProjectBinariesPath(Path.Combine(ModuleDirectory, "x64", "Release", "BouncyCastle.Crypto.dll"), Target);
        }
    }
    private string GetProjectDirectory
    {
        get
        {
            return Path.GetFullPath(
                    Path.Combine(ModuleDirectory, "../../../../../")
                );
        }
    }
    private void CopyFileToProjectBinariesPath(string Filepath, ReadOnlyTargetRules Target)
    {
        string BinariesDirectory = Path.Combine(GetProjectDirectory, "Binaries", Target.Platform.ToString());
        string FileName = Path.GetFileName(Filepath);
        if (!Directory.Exists(BinariesDirectory))
        {
            Directory.CreateDirectory(BinariesDirectory);
        }
        if (!File.Exists(Path.Combine(BinariesDirectory, FileName)))
        {
            File.Copy(Filepath, Path.Combine(BinariesDirectory, FileName), true);
        }

        RuntimeDependencies.Add(Path.Combine(BinariesDirectory, FileName));
    }
}
