// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class TelegrammAPI : ModuleRules
{
    private string ModulePath
    {
        get { return ModuleDirectory; }
    }

    private string ThirdPartyPath
    {
        get { return Path.GetFullPath(Path.Combine(ModulePath, "..", "..", "ThirdParty")); }
    }

    private string BinFolder(ReadOnlyTargetRules Target)
    {
        if (Target.Platform == UnrealTargetPlatform.Mac)
            return Path.GetFullPath(Path.Combine(ModulePath, "..", "..", "..", "..", "Binaries", "Mac"));
        else if (Target.Platform == UnrealTargetPlatform.IOS)
            return Path.GetFullPath(Path.Combine(ModulePath, "..", "..", "..", "..", "Binaries", "IOS"));
        if (Target.Platform == UnrealTargetPlatform.Win64)
            return Path.GetFullPath(Path.Combine(ModulePath, "..", "..", "..", "..", "Binaries", "Win64"));
        if (Target.Platform == UnrealTargetPlatform.Android)
            return Path.GetFullPath(Path.Combine(ModulePath, "..", "..", "..", "..", "Binaries", "Android"));
        return "";
    }

    public TelegrammAPI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
                
        PublicIncludePaths.AddRange(
			new string[] {
                Path.Combine(ModuleDirectory, "Public"),
                Path.Combine(ThirdPartyPath, "tdlib", "include")

				// ... add public include paths required here ...
			}
            );
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

        string[] libs = new string[]
            {
                "UETdApi.lib",
                "memprof.lib",
                "tdactor.lib",
                "tdc.lib",
                "tdclient.lib",
                "tdcore.lib",
                "tddb.lib",
                "tdjson.lib",
                "tdjson_private.lib",
                "tdjson_static.lib",
                "tdnet.lib",
                "tdsqlite.lib",
                "tdtl.lib",
                "tdutils.lib",
                "tdcore.lib",
                "tdjson.lib",
                "tdclient.lib",

            };

        string[] dlls = new string[]
            {
                "UETdApi.dll",
                "zlib1.dll",
                "tdjson.dll",
                "LIBEAY32.dll",
                "SSLEAY32.dll"
            };

        if ((Target.Platform == UnrealTargetPlatform.Win64) || (Target.Platform == UnrealTargetPlatform.Win32))
        {
            System.Console.WriteLine(" === Telegramm API Plugin building === ");
            string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "x64" : "x86";

            System.Console.WriteLine(" === TD lib's === ");
            for (int i = 0; i < libs.Length; i++)
            {
                string PathToLib = Path.Combine(ThirdPartyPath, "TdLib", "lib", PlatformString, libs[i]);
                System.Console.WriteLine("Set dependency for: " + PathToLib);

                PublicAdditionalLibraries.Add(PathToLib);
            }
            
            
            System.Console.WriteLine(" === TD dll's === ");
            for (int i = 0; i < dlls.Length; i++)
            {
                //string PathToDll = Path.Combine(ThirdPartyPath, "tdlib", "bin", PlatformString, dlls[i]);
                //System.Console.WriteLine("Set dependency for: " + PathToDll);

                //RuntimeDependencies.Add(new RuntimeDependency(PathToDll));

                //PublicDelayLoadDLLs.Add(PathToDll);

                ////string AssimpDll = Path.Combine(ThirdPartyPath, "tdlib", "bin", PlatformString, dlls[i]);

                //string thp = BinFolder(Target) + "\\" + dlls[i];

                //CopyFile(PathToDll, thp);

                ////thp = "E:\\WORK_PRJ\\TelegrammTest\\Plugins\\TelegrammAPI\\Binaries\\Win64\\" + dlls[i];

                ////CopyFile(PathToDll, thp);
                ///               , 
                ///               
                string PathToDll = Path.Combine(ThirdPartyPath, "tdlib", "bin", PlatformString, dlls[i]);
                System.Console.WriteLine("Set dependency for: " + PathToDll);

                string destinationPath = Path.Combine(BinFolder(Target), dlls[i]);

                CopyFile(PathToDll, destinationPath);

                RuntimeDependencies.Add(destinationPath);

            }
        }
    }

    public void CopyFile(string Source, string Dest)
    {
        System.Console.WriteLine("Copying {0} to {1}", Source, Dest);
        if (System.IO.File.Exists(Dest))
        {
            System.IO.File.SetAttributes(Dest, System.IO.File.GetAttributes(Dest) & ~System.IO.FileAttributes.ReadOnly);
        }
        try
        {
            System.IO.File.Copy(Source, Dest, true);
        }
        catch (System.Exception ex)
        {
            System.Console.WriteLine("Failed to copy file: {0}", ex.Message);
        }
    }
}

//RuntimeDependencies.Add(new RuntimeDependency(Path.Combine(ThirdPartyPath, "tdlib", "bin", PlatformString, "tdjson.dll")));

//System.Console.WriteLine(Path.Combine(ThirdPartyPath, "TdLib", "bin", PlatformString, "some.bin"));

//PublicAdditionalLibraries.Add(Path.Combine(ThirdPartyPath, "assimp", "lib", PlatformString, "assimp-vc140-mt.lib"));

//RuntimeDependencies.Add(new RuntimeDependency(Path.Combine(ThirdPartyPath, "assimp", "bin", PlatformString, "assimp-vc140-mt.dll")));

//string AssimpDll = Path.Combine(ThirdPartyPath, "assimp", "bin", PlatformString, "assimp-vc140-mt.dll");

//string thp = BinFolder(Target) + "/assimp-vc140-mt.dll";

//CopyFile(AssimpDll, thp);



//"tdcore.lib",
//"tddb.lib",
//"tdjson_static.lib",
//"tdnet.lib",
//"tdutils.lib",
//"ssleay32.lib",
//"libeay32.lib",
//"zlib.lib"

//"UETdApiDll.lib"