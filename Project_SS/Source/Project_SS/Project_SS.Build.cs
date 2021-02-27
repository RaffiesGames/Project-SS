// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_SS : ModuleRules
{
	public Project_SS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
