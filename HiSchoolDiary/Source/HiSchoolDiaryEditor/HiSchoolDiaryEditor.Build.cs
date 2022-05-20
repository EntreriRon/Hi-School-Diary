// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class HiSchoolDiaryEditor : ModuleRules
{
	public HiSchoolDiaryEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicIncludePaths.AddRange(
            new string[]
            {
                "HiSchoolDiaryEditor/Public"
            });

        PrivateIncludePaths.AddRange(
            new string[] 
            {
        "HiSchoolDiaryEditor/Private"
        });
		PublicDependencyModuleNames.AddRange(new string[] { "HiSchoolDiary", "ComboGraphEditor", "UnrealEd" });

		PrivateDependencyModuleNames.AddRange(new string[] {"Core"});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
		PrivateIncludePathModuleNames.AddRange(
            new string[]
            {
            });

        DynamicallyLoadedModuleNames.AddRange(
            new string[] 
            {
            });
	}
}
