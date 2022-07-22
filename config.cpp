class CfgPatches
{
	class OBF_EA_Clothing_Script
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgMods
{
    class OBF_EA_Clothing
    {
        dir = "OBF_EA_Clothing";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "OBF_EA_Clothing";
        credits = "";
        author = "ТДАX";
        authorID = ""; 
        version = "1.0"; 
        extra = 0;
        type = "mod";
		tooltip="OBF_EA_Clothing";
		overview="OBF_EA_Clothing";
        
        dependencies[] = {"World"};
        
        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = {};
			};
		};
    };
};
class CfgVehicles{};