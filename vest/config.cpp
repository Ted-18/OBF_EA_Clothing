class CfgPatches
{
	class DZ_Characters_Vests_EA
	{
		units[]=
        {
			"TacticalVest",
			"UKAssVest"
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
	class EA_Police_Plate_Carrier: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_PlateCarrierBlank0";
		descriptionShort="$STR_CfgVehicles_PlateCarrierBlank1";
		model="\DZ\characters\vests\plate_carrier_g.p3d";
		inventorySlot[]=
		{
			"Vest"
		};
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
		weight=12000;
		itemSize[]={5,5};
		varWetMax=0.49000001;
		heatIsolation=0.80000001;
		repairableWithKits[]={3,8};
		repairCosts[]={75,50};
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"OBF_EA_Clothing\vest\data\PolicePlateCarrier\PolicePlateCarrier_co.paa",
			"OBF_EA_Clothing\vest\data\PolicePlateCarrier\PolicePlateCarrier_co.paa",
			"OBF_EA_Clothing\vest\data\PolicePlateCarrier\PolicePlateCarrier_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\vests\plate_carrier_m.p3d";
			female="\DZ\characters\vests\plate_carrier_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=225;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0,
							
							{
								""
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.60000002;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
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
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PressVest_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_PressVest_ColorBase0";
		descriptionShort="$STR_CfgVehicles_PressVest_ColorBase1";
		model="\DZ\characters\vests\pressVest_g.p3d";
		inventorySlot[]=
		{
			"Vest"
		};
		attachments[]=
		{
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=7000;
		itemSize[]={4,4};
		itemsCargoSize[]={6,4};
		quickBarBonus=2;
		varWetMax=0.49000001;
		heatIsolation=0.69999999;
		visibilityModifier=0.94999999;
		repairableWithKits[]={3,8};
		repairCosts[]={25,25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\vests\pressVest_m.p3d";
			female="\DZ\characters\vests\pressVest_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=170;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\vests\Data\PressVest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\vests\Data\PressVest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\vests\Data\PressVest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\vests\Data\PressVest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\vests\Data\PressVest_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
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
	class EA_Press_Vest_Veritas: PressVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"OBF_EA_Clothing\vest\data\PressVestVeritas\EA_Press_Vest_Veritas_co.paa",
			"OBF_EA_Clothing\vest\data\PressVestVeritas\EA_Press_Vest_Veritas_co.paa",
			"OBF_EA_Clothing\vest\data\PressVestVeritas\EA_Press_Vest_Veritas_co.paa"
		};
	};
};