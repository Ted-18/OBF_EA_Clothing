class CfgPatches
{
	class DZ_Characters_Headgear
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
    class EA_Police_Cap: Clothing
	{
		scope=2;
		displayName="Casquette de Police";
		descriptionShort="Surement une casquette de gradé.";
		model="\DZ\characters\headgear\PoliceCap_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=16;
		weight=320;
		itemSize[]={3,2};
		varWetMax=0.79000002;
		heatIsolation=0.2;
		visibilityModifier=0.98000002;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_Policecap"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"OBF_EA_Clothing\data\policecap\policecap_co.paa",
			"OBF_EA_Clothing\data\policecap\policecap_co.paa",
			"OBF_EA_Clothing\data\policecap\policecap_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\PoliceCap.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\PoliceCap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\PoliceCap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\PoliceCap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\PoliceCap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\PoliceCap_m.p3d";
			female="\DZ\characters\headgear\PoliceCap_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
		class EA_Prisoner_Cap: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_PrisonerCap0";
		descriptionShort="$STR_CfgVehicles_PrisonerCap1";
		model="\DZ\characters\headgear\prison_cap_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=17;
		weight=80;
		itemSize[]={3,2};
		varWetMax=1;
		heatIsolation=0.1;
		headSelectionsToHide[]=
		{
			"Clipping_prison_cap"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\prison_cap_co.paa",
			"\DZ\characters\headgear\data\prison_cap_co.paa",
			"\DZ\characters\headgear\data\prison_cap_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\prison_cap.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\prison_cap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\prison_cap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\prison_cap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\prison_cap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\prison_cap_m.p3d";
			female="\DZ\characters\headgear\prison_cap_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};