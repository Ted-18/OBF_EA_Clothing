class CfgPatches
{
	class DZ_Characters_Pants_EA
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


	//EA_Police_Pants
	class EA_Police_Pants: Clothing
	{
		scope=2;
		displayName="Pantalon de police";
		descriptionShort="Surement le pantalon d'un gradé.";
		model="\DZ\characters\pants\PolicePants_g.p3d";
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		inventorySlot[]=
		{
			"Legs"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		itemSize[]={3,2};
		itemsCargoSize[]={5,4};
		weight=510;
		ragQuantity=3;
		varWetMax=1;
		heatIsolation=0.5;
		visibilityModifier=0.89999998;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"OBF_EA_Clothing\pants\data\PolicePantsBlack\EA_PolicePantsBlack_co.paa",
			"OBF_EA_Clothing\pants\data\PolicePantsBlack\EA_PolicePantsBlack_co.paa",
			"OBF_EA_Clothing\pants\data\PolicePantsBlack\EA_PolicePantsBlack_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\pants\PolicePants_m.p3d";
			female="\DZ\characters\pants\PolicePants_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\pants\Data\PolicePants.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\pants\Data\PolicePants.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\pants\Data\PolicePants_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\pants\Data\PolicePants_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\pants\Data\PolicePants_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
			};
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


	//EA_Prisoner_Pants
	class EA_Prisoner_Pants: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_PrisonUniformPants0";
		descriptionShort="Une odeur à attirer des mouches!";
		model="\DZ\characters\pants\prison_pants_g.p3d";
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		inventorySlot[]=
		{
			"Legs"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		itemSize[]={3,2};
		itemsCargoSize[]={6,5};
		weight=310;
		ragQuantity=3;
		varWetMax=1;
		heatIsolation=0.5;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\prison_pants_g_co.paa",
			"\dz\characters\pants\data\prison_pants_co.paa",
			"\dz\characters\pants\data\prison_pants_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\pants\prison_pants_m.p3d";
			female="\DZ\characters\pants\prison_pants_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\pants\Data\prison_pants.rvmat",
								"DZ\characters\pants\Data\prison_pants_g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\pants\Data\prison_pants.rvmat",
								"DZ\characters\pants\Data\prison_pants_g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\pants\Data\prison_pants_damage.rvmat",
								"DZ\characters\pants\Data\prison_pants_g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\pants\Data\prison_pants_damage.rvmat",
								"DZ\characters\pants\Data\prison_pants_g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\pants\Data\prison_pants_destruct.rvmat",
								"DZ\characters\pants\Data\prison_pants_g_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
			};
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
