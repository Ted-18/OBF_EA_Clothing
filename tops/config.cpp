class CfgPatches
{
	class DZ_Characters_Vests
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
	class EA_Police_Jacket: Clothing
	{
		scope=2;
		displayName="Veste de police";
		descriptionShort="Surement une veste appartenant à un gradé...";
		model="\DZ\characters\tops\PoliceJacket_g.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=2100;
		itemSize[]={4,3};
		itemsCargoSize[]={6,5};
		quickBarBonus=1;
		ragQuantity=3;
		varWetMax=1;
		absorbency=0.2;
		visibilityModifier=0.89999998;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="HeavyJacket";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"OBF_EA_Clothing\data\policejacket\policejacket_co.paa",
			"OBF_EA_Clothing\data\policejacket\policejacket_co.paa",
			"OBF_EA_Clothing\data\policejacket\policejacket_co.paa"
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
								"DZ\characters\tops\Data\PoliceJacket.rvmat",
								"DZ\characters\tops\Data\PoliceJacket_g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\tops\Data\PoliceJacket.rvmat",
								"DZ\characters\tops\Data\PoliceJacket_g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\tops\Data\PoliceJacket.rvmat",
								"DZ\characters\tops\Data\PoliceJacket_g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\tops\Data\PoliceJacket.rvmat",
								"DZ\characters\tops\Data\PoliceJacket_g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\tops\Data\PoliceJacket.rvmat",
								"DZ\characters\tops\Data\PoliceJacket_g_destruct.rvmat"
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
		class ClothingTypes
		{
			male="\DZ\characters\tops\PoliceJacket_m.p3d";
			female="\DZ\characters\tops\PoliceJacket_f.p3d";
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