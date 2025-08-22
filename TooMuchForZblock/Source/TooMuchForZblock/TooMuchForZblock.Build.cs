// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TooMuchForZblock : ModuleRules
{
	public TooMuchForZblock(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"TooMuchForZblock",
			"TooMuchForZblock/Variant_Horror",
			"TooMuchForZblock/Variant_Horror/UI",
			"TooMuchForZblock/Variant_Shooter",
			"TooMuchForZblock/Variant_Shooter/AI",
			"TooMuchForZblock/Variant_Shooter/UI",
			"TooMuchForZblock/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
