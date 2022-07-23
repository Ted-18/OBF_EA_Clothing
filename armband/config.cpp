class CfgPatches
{
	class DZ_Characters_Tops
	{
		units[]=
		{
			"Shirt_CheckRed",
			"Hoodie_Blue",
			"Hoodie_Black",
			"Hoodie_Brown",
			"Hoodie_Green",
			"Hoodie_Grey",
			"Hoodie_Red",
			"MaleTorso",
			"FemaleTorso"
		};
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
	class Armband_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_Armband_ColorBase0";
		descriptionShort="$STR_CfgVehicles_Armband_ColorBase1";
		model="\DZ\characters\tops\armbend_g.p3d";
		inventorySlot[]=
		{
			"Armband"
		};
		itemInfo[]=
		{
			"Clothing",
			"Armband"
		};
		rotationFlags=34;
		weight=80;
		itemSize[]={1,2};
		ragQuantity=1;
		varWetMax=1;
		absorbency=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoFemale_big_a",
			"camoFemale_big_b",
			"camoFemale_small_a",
			"camoFemale_small_b",
			"camoMale_big_a",
			"camoMale_big_b",
			"camoMale_small_a",
			"camoMale_small_b"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\tops\Data\armbend_g.rvmat",
								"DZ\characters\tops\Data\armband_big_a.rvmat",
								"DZ\characters\tops\Data\armband_big_b.rvmat",
								"DZ\characters\tops\Data\armband_small_a.rvmat",
								"DZ\characters\tops\Data\armband_small_b.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\tops\Data\armbend_g.rvmat",
								"DZ\characters\tops\Data\armband_big_a.rvmat",
								"DZ\characters\tops\Data\armband_big_b.rvmat",
								"DZ\characters\tops\Data\armband_small_a.rvmat",
								"DZ\characters\tops\Data\armband_small_b.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\tops\Data\armbend_g_damage.rvmat",
								"DZ\characters\tops\Data\armband_big_a_damage.rvmat",
								"DZ\characters\tops\Data\armband_big_b_damage.rvmat",
								"DZ\characters\tops\Data\armband_small_a_damage.rvmat",
								"DZ\characters\tops\Data\armband_small_b_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\tops\Data\armbend_g_damage.rvmat",
								"DZ\characters\tops\Data\armband_big_a_damage.rvmat",
								"DZ\characters\tops\Data\armband_big_b_damage.rvmat",
								"DZ\characters\tops\Data\armband_small_a_damage.rvmat",
								"DZ\characters\tops\Data\armband_small_b_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\tops\Data\armbend_g_destruct.rvmat",
								"DZ\characters\tops\Data\armband_big_a_destruct.rvmat",
								"DZ\characters\tops\Data\armband_big_b_destruct.rvmat",
								"DZ\characters\tops\Data\armband_small_a_destruct.rvmat",
								"DZ\characters\tops\Data\armband_small_b_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\tops\armbend_dynamic_m.p3d";
			female="\DZ\characters\tops\armbend_dynamic_f.p3d";
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
	class EA_Armband_Veritas: Armband_ColorBase
	{
		scope=2;
		color="Veritas";
		hiddenSelectionsTextures[]=
		{
			"OBF_EA_Clothing\armband\data\ArmbandVeritas\EA_Armband_Veritas_g_co.paa",
			"OBF_EA_Clothing\armband\data\ArmbandVeritas\EA_Armband_Veritas_co.paa",
			"OBF_EA_Clothing\armband\data\ArmbandVeritas\EA_Armband_Veritas_co.paa",
			"OBF_EA_Clothing\armband\data\ArmbandVeritas\EA_Armband_Veritas_co.paa",
			"OBF_EA_Clothing\armband\data\ArmbandVeritas\EA_Armband_Veritas_co.paa",
			"OBF_EA_Clothing\armband\data\ArmbandVeritas\EA_Armband_Veritas_co.paa",
			"OBF_EA_Clothing\armband\data\ArmbandVeritas\EA_Armband_Veritas_co.paa",
			"OBF_EA_Clothing\armband\data\ArmbandVeritas\EA_Armband_Veritas_co.paa",
			"OBF_EA_Clothing\armband\data\ArmbandVeritas\EA_Armband_Veritas_co.paa"
		};
	};
};