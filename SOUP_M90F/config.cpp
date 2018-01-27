class CfgPatches
{
	class SOUP_M90F
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
	class SOUP_SWE_Soldier_F: B_Soldier_base_F
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
		displayName="Swedish Soldier";
		cost=200000;
		camouflage=1.5;
		sensitivity=2.5;
		threat[]={1,1,0.80000001};
		model="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		uniformClass="SOUP_CombatUniform_SWE_A";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M90F\Data\UNIFORM_M90F.paa"
		};
		SWEDeactivateMines="true";
		engineer="true";
		attendant=1;
		icon="iconManEngineer";
		picture="pictureRepair";
		backpack="SOUP_Kitbag_M90F";
		linkedItems[]=
		{
			"SOUP_Vest_SWE_1",
			"SOUP_Boonie_SWE",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"SOUP_Vest_SWE_1",
			"SOUP_Boonie_SWE",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
	};
	class SOUP_SWE_Soldier_O: B_Soldier_base_F
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
		displayName="Swedish Soldier";
		cost=200000;
		camouflage=1.5;
		sensitivity=2.5;
		threat[]={1,1,0.80000001};
		model="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		uniformClass="SOUP_CombatUniform_SWE_B";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M90F\Data\UNIFORM_M90F.paa"
		};
		SWEDeactivateMines="true";
		engineer="true";
		attendant=1;
		icon="iconManEngineer";
		picture="pictureRepair";
		backpack="SOUP_Kitbag_M90F";
		linkedItems[]=
		{
			"SOUP_Vest_SWE_2",
			"SOUP_Helmet_SWE",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"SOUP_Vest_SWE_2",
			"SOUP_Helmet_SWE",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
	};
	class SOUP_Carryall_M90F: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (Swedish Green)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M90F\Data\CARRYALL_M90F.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_M90F: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (Swedish Green)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M90F\Data\KITBAG_M90F.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_M90F: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (Swedish Green)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M90F\Data\ASSAULT_PACK_M90F.paa"
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
	class V_PlateCarrierIA1_dgtl;
	class V_PlateCarrierIA2_dgtl;	
	class H_Booniehat_khk;
	class H_HelmetIA;
	class SOUP_CombatUniform_SWE_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="M90F Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M90F\Data\UNIFORM_M90F.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_SWE_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo"
			};
		};
	};
	class SOUP_CombatUniform_SWE_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="M90F Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M90F\Data\UNIFORM_M90F.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_SWE_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo"
			};
		};
	};
	class SOUP_Vest_SWE_1: V_PlateCarrier3_rgr
	{
		author="Starvolt";
		scope=2;
		displayName="Plate Carrier (Swedish Green)";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M90F\Data\PLATE_CARRIER_M90F.paa"
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
	class SOUP_Vest_SWE_2: V_PlateCarrier3_rgr
	{
		author="Starvolt";
		scope=2;
		displayName="Plate Carrier (Swedish Green)";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M90F\Data\PLATE_CARRIER_M90F.paa"
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
	class SOUP_Flak_Vest_SWE_1: V_PlateCarrierIA2_dgtl
	{
		author="Starvolt";
		scope=2;
		displayName="Flak Vest (Swedish Green)";
		model="\A3\Characters_F_beta\indep\equip_ia_vest01";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M90F\Data\FLAK_VEST_M90F.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_beta\indep\equip_ia_vest01";
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
	class SOUP_Flak_Vest_SWE_2: V_PlateCarrierIA2_dgtl
	{
		author="Starvolt";
		scope=2;
		displayName="Flak Vest (Swedish Green)";
		model="\A3\Characters_F_beta\indep\equip_ia_vest02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M90F\Data\FLAK_VEST_M90F.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_beta\indep\equip_ia_vest02";
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
	class SOUP_Helmet_SWE: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (M90F)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M90F\Data\HELMET_M90F.paa"
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
	class SOUP_Boonie_SWE: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (M90F)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M90F\Data\BOONIE_M90F.paa"
		};
	};
};
