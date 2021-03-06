// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class HiSchoolDiaryTarget : TargetRules
{
	public HiSchoolDiaryTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "HiSchoolDiary", "ComboGraph" } );
		
		if (bBuildEditor) //this will include UnrealEd and will throw errors when packaging
        //if (Target.Type == TargetType.Editor)//4.16+
        {
            ExtraModuleNames.AddRange( 
                new string[]
                {
                    "HiSchoolDiaryEditor", "ComboGraphEditor"
                });
        }
	}
}
