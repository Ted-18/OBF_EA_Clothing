class CfgPatches
{
	class DZ_Characters_Pants
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
	class Clothing: Clothing_Base
	{
	};
	class EA_Police_Pants: Clothing
	{
		scope=2;
		displayName="Un super pantalon fashion de nels";
		descriptionShort="y'a que les arabes qui porte ça mon reuf on va se le dire honnetement";
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
			"OBF_EA_Clothing\data\policepants\policepants_co.paa",
			"OBF_EA_Clothing\data\policepants\policepants_co.paa",
			"OBF_EA_Clothing\data\policepants\policepants_co.paa"
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
};
