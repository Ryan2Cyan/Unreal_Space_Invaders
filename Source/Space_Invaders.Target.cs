using UnrealBuildTool;
using System.Collections.Generic;

public class Space_InvadersTarget : TargetRules
{
	public Space_InvadersTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Space_Invaders" } );
	}
}
