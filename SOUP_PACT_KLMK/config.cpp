class CfgPatches
{
	class SOUP_PACT_KLMK
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

// KLMK	

	class SOUP_KLMK_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_KLMK_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_KLMK_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_KLMK_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (KLMK BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_1.paa"};
		linkedItems[]= {SOUP_Boonie_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_KLMK_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (KLMK BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_2.paa"};
		linkedItems[]= {SOUP_Boonie_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_KLMK_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_KLMK";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\JUMPER_PACT_KLMK.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_KLMK, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_KLMK: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (KLMK)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\CARRYALL_KLMK.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_KLMK: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (KLMK)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\KITBAG_KLMK.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_KLMK: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (KLMK)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\ASSAULT_PACK_KLMK.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
	// KLMK Desert	

	class SOUP_KLMK_DESERT_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Desert)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_DESERT_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_DESERT_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_KLMK_DESERT_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Desert)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_DESERT_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_DESERT_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_DESERT_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Desert)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_DESERT_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_DESERT_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_DESERT_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Desert)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_DESERT_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_DESERT_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_KLMK_DESERT_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Desert)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_DESERT_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_DESERT_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_DESERT_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Desert)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_DESERT_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_DESERT_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_KLMK_DESERT_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (KLMK Desert BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_DESERT.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_DESERT_1.paa"};
		linkedItems[]= {SOUP_Boonie_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_KLMK_DESERT_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (KLMK Desert BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_DESERT.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_2.paa"};
		linkedItems[]= {SOUP_Boonie_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_KLMK_DESERT_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Desert Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_KLMK_DESERT";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\JUMPER_PACT_KLMK_DESERT.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_KLMK_DESERT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_KLMK_DESERT: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (KLMK Desert)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\CARRYALL_KLMK_DESERT.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_KLMK_DESERT: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (KLMK Desert)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\KITBAG_KLMK_DESERT.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_KLMK_DESERT: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (KLMK Desert)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\ASSAULT_PACK_KLMK_DESERT.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
	// KLMK Europe	

	class SOUP_KLMK_EUROPE_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Europe)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_EUROPE_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_KLMK_EUROPE_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Europe)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_EUROPE_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_EUROPE_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Europe)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_EUROPE_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_EUROPE_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Europe)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_EUROPE_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_KLMK_EUROPE_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Europe)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_EUROPE_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_EUROPE_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Europe)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_EUROPE_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_KLMK_EUROPE_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (KLMK Europe BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_EUROPE.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_1.paa"};
		linkedItems[]= {SOUP_Boonie_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_KLMK_EUROPE_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (KLMK Europe BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_EUROPE.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_2.paa"};
		linkedItems[]= {SOUP_Boonie_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_KLMK_EUROPE_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Europe Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_KLMK_EUROPE";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\JUMPER_PACT_KLMK_EUROPE.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_KLMK_EUROPE: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (KLMK Europe)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\CARRYALL_KLMK_EUROPE.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_KLMK_EUROPE: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (KLMK Europe)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\KITBAG_KLMK_EUROPE.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_KLMK_EUROPE: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (KLMK Europe)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\ASSAULT_PACK_KLMK_EUROPE.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
	// KLMK Europe	

	class SOUP_KLMK_MOUNTAIN_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Mountain)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_EUROPE_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_KLMK_EUROPE_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Europe)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_EUROPE_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_EUROPE_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Europe)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_EUROPE_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_EUROPE_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Europe)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_EUROPE_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_KLMK_EUROPE_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Europe)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_EUROPE_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_EUROPE_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Europe)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_EUROPE_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_KLMK_EUROPE_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (KLMK Europe BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_EUROPE.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_1.paa"};
		linkedItems[]= {SOUP_Boonie_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_KLMK_EUROPE_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (KLMK Europe BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_EUROPE.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_2.paa"};
		linkedItems[]= {SOUP_Boonie_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_KLMK_EUROPE_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Europe Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_KLMK_EUROPE";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\JUMPER_PACT_KLMK_EUROPE.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_KLMK_EUROPE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_KLMK_EUROPE: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (KLMK Europe)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\CARRYALL_KLMK_EUROPE.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_KLMK_EUROPE: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (KLMK Europe)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\KITBAG_KLMK_EUROPE.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_KLMK_EUROPE: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (KLMK Europe)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\ASSAULT_PACK_KLMK_EUROPE.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
// KLMK Mountain	

	class SOUP_KLMK_MOUNTAIN_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Mountain)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_MOUNTAIN_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_KLMK_MOUNTAIN_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Mountain)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_MOUNTAIN_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_MOUNTAIN_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Mountain)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_MOUNTAIN_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_MOUNTAIN_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Mountain)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_MOUNTAIN_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_KLMK_MOUNTAIN_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Mountain)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_MOUNTAIN_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_MOUNTAIN_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Mountain)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_MOUNTAIN_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_KLMK_MOUNTAIN_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (KLMK Mountain BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_MOUNTAIN.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_1.paa"};
		linkedItems[]= {SOUP_Boonie_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_KLMK_MOUNTAIN_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (KLMK Mountain BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_MOUNTAIN.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_2.paa"};
		linkedItems[]= {SOUP_Boonie_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_KLMK_MOUNTAIN_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Mountain Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_KLMK_MOUNTAIN";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\JUMPER_PACT_KLMK_MOUNTAIN.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_KLMK_MOUNTAIN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_KLMK_MOUNTAIN: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (KLMK Mountain)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\CARRYALL_KLMK_MOUNTAIN.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_KLMK_MOUNTAIN: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (KLMK Mountain)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\KITBAG_KLMK_MOUNTAIN.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_KLMK_MOUNTAIN: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (KLMK Mountain)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\ASSAULT_PACK_KLMK_MOUNTAIN.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
	// KLMK Reverse	

	class SOUP_KLMK_REVERSE_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Reverse)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_REVERSE_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_KLMK_REVERSE_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Reverse)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_REVERSE_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_REVERSE_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Reverse)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_REVERSE_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_REVERSE_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Reverse)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_REVERSE_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_KLMK_REVERSE_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Reverse)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_REVERSE_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_KLMK_REVERSE_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Reverse)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_KLMK_REVERSE_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_KLMK_REVERSE_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (KLMK Reverse BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_REVERSE.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_1.paa"};
		linkedItems[]= {SOUP_Boonie_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_KLMK_REVERSE_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (KLMK Reverse BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_REVERSE.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_2.paa"};
		linkedItems[]= {SOUP_Boonie_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_KLMK_REVERSE_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (KLMK Reverse Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_KLMK_REVERSE";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\JUMPER_PACT_KLMK_REVERSE.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_KLMK_REVERSE, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_KLMK_REVERSE: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (KLMK Reverse)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\CARRYALL_KLMK_REVERSE.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_KLMK_REVERSE: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (KLMK Reverse)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\KITBAG_KLMK_REVERSE.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_KLMK_REVERSE: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (KLMK Reverse)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\ASSAULT_PACK_KLMK_REVERSE.paa"
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
	class VestItem;
	class U_I_CombatUniform;
	class U_I_CombatUniform_tshirt;
	class U_I_OfficerUniform;
	class U_IG_Guerrilla_6_1;
	class H_Booniehat_khk;
	class H_HelmetIA;

// KLMK

	class SOUP_CombatUniform_KLMK_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_KLMK_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_KLMK_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_KLMK_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_KLMK_1: Uniform_Base
	{
		scope=2;
		displayName="KLMK BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_KLMK_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_KLMK_2: Uniform_Base
	{
		scope=2;
		displayName="KLMK BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_KLMK_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_KLMK: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\JUMPER_PACT_KLMK.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_KLMK: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (KLMK)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\HELMET_KLMK.paa"
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
	class SOUP_Boonie_KLMK: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (KLMK)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\BOONIE_KLMK.paa"
		};
	};
	
	// KLMK Desert

	class SOUP_CombatUniform_KLMK_DESERT_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Desert Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_DESERT_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_DESERT_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_DESERT_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Desert Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_DESERT_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_KLMK_DESERT_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_DESERT_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Desert Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_DESERT_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_DESERT_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_DESERT_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Desert Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_DESERT_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_KLMK_DESERT_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_DESERT_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Desert Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_DESERT_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_DESERT_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_DESERT_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Desert Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_DESERT_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_KLMK_DESERT_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_KLMK_DESERT_1: Uniform_Base
	{
		scope=2;
		displayName="KLMK Desert BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_DESERT.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_DESERT_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_KLMK_DESERT_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_KLMK_DESERT_2: Uniform_Base
	{
		scope=2;
		displayName="KLMK Desert BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_DESERT.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_KLMK_DESERT_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_KLMK_DESERT: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Desert Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\JUMPER_PACT_KLMK_DESERT.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_DESERT_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_KLMK_DESERT: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (KLMK Desert)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\HELMET_KLMK_DESERT.paa"
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
	class SOUP_Boonie_KLMK_DESERT: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (KLMK Desert)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\BOONIE_KLMK_DESERT.paa"
		};
	};
	
	// KLMK Europe

	class SOUP_CombatUniform_KLMK_EUROPE_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Europe Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_EUROPE_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_EUROPE_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Europe Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_KLMK_EUROPE_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_EUROPE_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Europe Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_EUROPE_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_EUROPE_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Europe Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_KLMK_EUROPE_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_EUROPE_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Europe Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_EUROPE_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_EUROPE_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Europe Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_KLMK_EUROPE_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_KLMK_EUROPE_1: Uniform_Base
	{
		scope=2;
		displayName="KLMK Europe BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_EUROPE.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_KLMK_EUROPE_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_KLMK_EUROPE_2: Uniform_Base
	{
		scope=2;
		displayName="KLMK Europe BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_EUROPE.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_EUROPE_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_KLMK_EUROPE_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_KLMK_EUROPE: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Europe Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\JUMPER_PACT_KLMK_EUROPE.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_EUROPE_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_KLMK_EUROPE: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (KLMK Europe)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\HELMET_KLMK_EUROPE.paa"
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
	class SOUP_Boonie_KLMK_EUROPE: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (KLMK Europe)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\BOONIE_KLMK_EUROPE.paa"
		};
	};
	
	// KLMK Mountain

	class SOUP_CombatUniform_KLMK_MOUNTAIN_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Mountain Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_MOUNTAIN_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_MOUNTAIN_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Mountain Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_KLMK_MOUNTAIN_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_MOUNTAIN_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Mountain Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_MOUNTAIN_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_MOUNTAIN_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Mountain Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_KLMK_MOUNTAIN_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_MOUNTAIN_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Mountain Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_MOUNTAIN_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_MOUNTAIN_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Mountain Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_KLMK_MOUNTAIN_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_KLMK_MOUNTAIN_1: Uniform_Base
	{
		scope=2;
		displayName="KLMK Mountain BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_MOUNTAIN.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_KLMK_MOUNTAIN_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_KLMK_MOUNTAIN_2: Uniform_Base
	{
		scope=2;
		displayName="KLMK Mountain BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_MOUNTAIN.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_MOUNTAIN_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_KLMK_MOUNTAIN_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_KLMK_MOUNTAIN: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Mountain Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\JUMPER_PACT_KLMK_MOUNTAIN.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_MOUNTAIN_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_KLMK_MOUNTAIN: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (KLMK Mountain)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\HELMET_KLMK_MOUNTAIN.paa"
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
	class SOUP_Boonie_KLMK_MOUNTAIN: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (KLMK Mountain)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\BOONIE_KLMK_MOUNTAIN.paa"
		};
	};
	
	// KLMK Reverse

	class SOUP_CombatUniform_KLMK_REVERSE_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Reverse Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_REVERSE_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_REVERSE_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Reverse Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_KLMK_REVERSE_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_REVERSE_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Reverse Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_REVERSE_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_REVERSE_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Reverse Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_KLMK_REVERSE_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_REVERSE_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Reverse Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_REVERSE_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_KLMK_REVERSE_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Reverse Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_KLMK_REVERSE_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_KLMK_REVERSE_1: Uniform_Base
	{
		scope=2;
		displayName="KLMK Reverse BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_REVERSE.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_KLMK_REVERSE_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_KLMK_REVERSE_2: Uniform_Base
	{
		scope=2;
		displayName="KLMK Reverse BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_KLMK\Data\BDU_PACT_KLMK_REVERSE.paa","\SOUP_PACT_KLMK\Data\UNIFORM_PACT_KLMK_REVERSE_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_KLMK_REVERSE_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_KLMK_REVERSE: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="KLMK Reverse Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\JUMPER_PACT_KLMK_REVERSE.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_KLMK_REVERSE_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_KLMK_REVERSE: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (KLMK Reverse)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\HELMET_KLMK_REVERSE.paa"
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
	class SOUP_Boonie_KLMK_REVERSE: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (KLMK Reverse)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_KLMK\Data\BOONIE_KLMK_REVERSE.paa"
		};
	};
};
class cfgMods
{
	author="76561197991084278";
	timepacked="1472949429";
};
