class CfgPatches
{
	class SOUP_CADPAT
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"A3_Characters_F_Common",
			"A3_Characters_F",
			"A3_Weapons_F_Ammoboxes"
		};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class Bag_Base;
	class B_AssaultPack_Base;
	class B_Carryall_Base;
	class B_Kitbag_Base;
	class SOUP_CAN_Soldier_F: B_Soldier_base_F
	{
		author="Starvolt";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_NATO_default"
		};
		displayName="Canadian Soldier";
		cost=200000;
		camouflage=1.5;
		sensitivity=2.5;
		threat[]={1,1,0.80000001};
		model="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		uniformClass="SOUP_CombatUniform_CAN_A";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_CADPAT\Data\UNIFORM_CADPAT.paa"
		};
		canDeactivateMines="true";
		engineer="true";
		attendant=1;
		icon="iconManEngineer";
		picture="pictureRepair";
		backpack="SOUP_Kitbag_CADPAT";
		linkedItems[]=
		{
			"SOUP_Vest_CAN_1",
			"SOUP_Boonie_CAN",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"SOUP_Vest_CAN_1",
			"SOUP_Boonie_CAN",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
	};
	class SOUP_CAN_Soldier_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_NATO_default"
		};
		displayName="Canadian Soldier";
		cost=200000;
		camouflage=1.5;
		sensitivity=2.5;
		threat[]={1,1,0.80000001};
		model="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		uniformClass="SOUP_CombatUniform_CAN_B";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_CADPAT\Data\UNIFORM_CADPAT.paa"
		};
		canDeactivateMines="true";
		engineer="true";
		attendant=1;
		icon="iconManEngineer";
		picture="pictureRepair";
		backpack="SOUP_Kitbag_CADPAT";
		linkedItems[]=
		{
			"SOUP_Vest_CAN_2",
			"SOUP_Helmet_CAN",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"SOUP_Vest_CAN_2",
			"SOUP_Helmet_CAN",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
	};
	class SOUP_Carryall_CADPAT: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (CADPAT)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_CADPAT\Data\CARRYALL_CADPAT.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_CADPAT: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (CADPAT)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_CADPAT\Data\KITBAG_CADPAT.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_CADPAT: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (CADPAT)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_CADPAT\Data\ASSAULT_PACK_CADPAT.paa"
		};
		maximumLoad=120;
		mass=20;
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemCore;
	class HeadgearItem;
	class Vest_Base;
	class VestItem;
	class U_I_CombatUniform;
	class U_I_CombatUniform_tshirt;
	class V_PlateCarrier2_rgr;
	class V_PlateCarrier3_rgr;
	class H_Booniehat_khk;
	class H_HelmetIA;
	class V_TacVest_oli;
	class SOUP_CombatUniform_CAN_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="CADPAT Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_CADPAT\Data\UNIFORM_CADPAT.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_CAN_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo"
			};
		};
	};
	class SOUP_CombatUniform_CAN_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="CADPAT Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_CADPAT\Data\UNIFORM_CADPAT.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_CAN_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo"
			};
		};
	};
	class SOUP_Vest_CAN_1: V_PlateCarrier3_rgr
	{
		author="Starvolt";
		scope=2;
		displayName="Plate Carrier (CADPAT)";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_CADPAT\Data\PLATE_CARRIER_CADPAT.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class SOUP_Vest_CAN_2: V_PlateCarrier3_rgr
	{
		author="Starvolt";
		scope=2;
		displayName="Plate Carrier (CADPAT)";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_CADPAT\Data\PLATE_CARRIER_CADPAT.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class SOUP_Tac_Vest_CAN: ItemCore
	{
		author="Starvolt";
		scope=2;
		displayName="Tac Vest (CADPAT)";
		model="\A3\Characters_F\common\equip_tacticalvest";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_CADPAT\Data\TAC_VEST_CADPAT.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\common\equip_tacticalvest";
			containerClass="Supply100";
			mass=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class SOUP_Helmet_CAN: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (CADPAT)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_CADPAT\Data\HELMET_CADPAT.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class SOUP_Boonie_CAN: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (CADPAT)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_CADPAT\Data\BOONIE_CADPAT.paa"
		};
	};
};
class cfgMods
{
	author="76561197991084278";
	timepacked="1472949429";
};
