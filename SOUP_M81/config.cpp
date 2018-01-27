class CfgPatches
{
	class SOUP_M81
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
	class SOUP_M81_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (M81)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_M81_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_M81\Data\UNIFORM_M81.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Vest_M81_1, SOUP_Helmet_M81, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_M81_1, SOUP_Helmet_M81, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_M81_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (M81)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_M81_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_M81\Data\UNIFORM_M81.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Vest_M81_2, SOUP_Helmet_M81, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_M81_2, SOUP_Helmet_M81, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
 
  class SOUP_M81_OperatorG3_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Operator (M81)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_G3_M81_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_M81\Data\G3_M81.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Vest_M81_1, SOUP_Boonie_M81, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_M81_1, SOUP_Boonie_M81, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_M81_OperatorG3_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Operator (M81)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_G3_M81_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_M81\Data\G3_M81.paa"};        // The textures for the selections defined above. If empty, no texture is used.                       // Can this character repair vehicles?
        linkedItems[] = {SOUP_Vest_M81_2, SOUP_Boonie_M81, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_M81_2, SOUP_Boonie_M81, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
  	class SOUP_M81_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (M81 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_M81";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_M81\Data\BDU_M81.paa","\SOUP_M81\Data\UNIFORM_M81.paa"};
		linkedItems[]= {SOUP_Flak_Vest_M81_1, SOUP_Boonie_M81, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Flak_Vest_M81_1, SOUP_Boonie_M81, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};	
	class SOUP_Carryall_M81: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (M81)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M81\Data\CARRYALL_M81.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_M81: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (M81)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M81\Data\KITBAG_M81.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_M81: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (M81)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M81\Data\ASSAULT_PACK_M81.paa"
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
	class U_B_CombatUniform_mcam;
	class U_B_CombatUniform_mcam_tshirt;
	class U_I_OfficerUniform;
	class V_PlateCarrier2_rgr;
	class V_PlateCarrier3_rgr;
	class V_PlateCarrierIA1_dgtl;
	class V_PlateCarrierIA2_dgtl;	
	class H_Booniehat_khk;
	class H_HelmetIA;
	class SOUP_CombatUniform_M81_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="M81 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M81\Data\UNIFORM_M81.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_M81_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_M81_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="M81 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M81\Data\UNIFORM_M81.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_M81_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_G3_M81_B : U_B_CombatUniform_mcam_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "M81 Combat Uniform (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_M81\Data\G3_M81.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
			uniformClass = "SOUP_M81_OperatorG3_O"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo","Insignia"};

		};
	};

	class SOUP_CombatUniform_G3_M81_A : U_B_CombatUniform_mcam
	{
		author = "Starvolt";
		scope = 2;
		displayName = "M81 Combat Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_M81\Data\G3_M81.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
			uniformClass = "SOUP_M81_OperatorG3_F"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo","Insignia"};

		};
	};			
		class SOUP_CombatUniform_BDU_M81: Uniform_Base
	{
		scope=2;
		displayName="M81 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_M81\Data\BDU_M81.paa","\SOUP_M81\Data\UNIFORM_M81.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_M81_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	
	class SOUP_Vest_M81_1: V_PlateCarrier3_rgr
	{
		author="Starvolt";
		scope=2;
		displayName="Plate Carrier (M81)";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M81\Data\PLATE_CARRIER_M81.paa"
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
	class SOUP_Vest_M81_2: V_PlateCarrier3_rgr
	{
		author="Starvolt";
		scope=2;
		displayName="Plate Carrier (M81)";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M81\Data\PLATE_CARRIER_M81.paa"
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
	class SOUP_Flak_Vest_M81_1: V_PlateCarrierIA2_dgtl
	{
		author="Starvolt";
		scope=2;
		displayName="Flak Vest (M81)";
		model="\A3\Characters_F_beta\indep\equip_ia_vest01";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M81\Data\FLAK_VEST_M81.paa"
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
	class SOUP_Flak_Vest_M81_2: V_PlateCarrierIA2_dgtl
	{
		author="Starvolt";
		scope=2;
		displayName="Flak Vest (M81)";
		model="\A3\Characters_F_beta\indep\equip_ia_vest02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M81\Data\FLAK_VEST_M81.paa"
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
	class SOUP_Helmet_M81: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (M81)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M81\Data\HELMET_M81.paa"
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
	class SOUP_Boonie_M81: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (M81)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_M81\Data\BOONIE_M81.paa"
		};
	};
};
class cfgMods
{
	author="76561197991084278";
	timepacked="1472949429";
};
