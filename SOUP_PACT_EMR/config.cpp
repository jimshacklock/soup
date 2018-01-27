class CfgPatches
{
	class SOUP_PACT_EMR
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

// EMR WINTER 1	

	class SOUP_EMR_WINTER1_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 1)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER1_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_EMR_WINTER1_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 1)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER1_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR_WINTER1_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 1)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER1_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR_WINTER1_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 1)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER1_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_EMR_WINTER1_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 1)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER1_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR_WINTER1_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 1)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER1_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_EMR_WINTER1_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR Winter 1 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER1.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_1.paa"};
		linkedItems[]= {SOUP_Boonie_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_EMR_WINTER1_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR Winter 1 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER1.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_3.paa"};
		linkedItems[]= {SOUP_Boonie_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_EMR_WINTER1_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 1 Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_EMR_WINTER1";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR_WINTER1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_EMR_WINTER1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_EMR_WINTER1: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (EMR Winter 1)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\CARRYALL_EMR_WINTER1.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_EMR_WINTER1: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (EMR Winter 1)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\KITBAG_EMR_WINTER1.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_EMR_WINTER1: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (EMR Winter 1)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\ASSAULT_PACK_EMR_WINTER1.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
	// EMR Winter 2	

	class SOUP_EMR_WINTER2_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 2)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER2_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_EMR_WINTER2_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 2)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER2_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR_WINTER2_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 2)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER2_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR_WINTER2_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 2)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER2_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_EMR_WINTER2_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 2)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER2_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR_WINTER2_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 2)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER2_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_EMR_WINTER2_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR Winter 2 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER2.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_1.paa"};
		linkedItems[]= {SOUP_Boonie_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_EMR_WINTER2_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR Winter 2 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER2.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_3.paa"};
		linkedItems[]= {SOUP_Boonie_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_EMR_WINTER2_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 2 Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_EMR_WINTER2";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR_WINTER2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_EMR_WINTER2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_EMR_WINTER2: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (EMR Winter 2)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\CARRYALL_EMR_WINTER2.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_EMR_WINTER2: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (EMR Winter 2)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\KITBAG_EMR_WINTER2.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_EMR_WINTER2: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (EMR Winter 2)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\ASSAULT_PACK_EMR_WINTER2.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
	// EMR Winter 3	

	class SOUP_EMR_WINTER3_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 3)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER3_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_EMR_WINTER3_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 3)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER3_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR_WINTER3_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 3)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER3_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR_WINTER3_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 3)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER3_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_EMR_WINTER3_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 3)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER3_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR_WINTER3_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 3)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER3_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_EMR_WINTER3_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR Winter 3 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER3.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_1.paa"};
		linkedItems[]= {SOUP_Boonie_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_EMR_WINTER3_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR Winter 3 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER3.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_3.paa"};
		linkedItems[]= {SOUP_Boonie_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_EMR_WINTER3_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 3 Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_EMR_WINTER3";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR_WINTER3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_EMR_WINTER3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_EMR_WINTER3: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (EMR Winter 3)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\CARRYALL_EMR_WINTER3.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_EMR_WINTER3: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (EMR Winter 3)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\KITBAG_EMR_WINTER3.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_EMR_WINTER3: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (EMR Winter 3)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\ASSAULT_PACK_EMR_WINTER3.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
// EMR Winter 4	

	class SOUP_EMR_WINTER4_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 4)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER4_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_EMR_WINTER4_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 4)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER4_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR_WINTER4_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 4)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER4_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR_WINTER4_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 4)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER4_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_EMR_WINTER4_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 4)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER4_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR_WINTER4_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 4)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER4_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_EMR_WINTER4_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR Winter 4 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER4.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_1.paa"};
		linkedItems[]= {SOUP_Boonie_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_EMR_WINTER4_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR Winter 4 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER4.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_2.paa"};
		linkedItems[]= {SOUP_Boonie_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_EMR_WINTER4_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 4 Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_EMR_WINTER4";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR_WINTER4.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_EMR_WINTER4, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_EMR_WINTER4: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (EMR Winter 4)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\CARRYALL_EMR_WINTER4.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_EMR_WINTER4: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (EMR Winter 4)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\KITBAG_EMR_WINTER4.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_EMR_WINTER4: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (EMR Winter 4)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\ASSAULT_PACK_EMR_WINTER4.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
	// EMR Winter 5	

	class SOUP_EMR_WINTER5_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 5)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER5_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_EMR_WINTER5_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 5)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER5_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR_WINTER5_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 5)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER5_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR_WINTER5_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 5)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER5_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_EMR_WINTER5_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 5)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER5_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR_WINTER5_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 5)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR_WINTER5_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_EMR_WINTER5_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR Winter 5 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER5.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_1.paa"};
		linkedItems[]= {SOUP_Boonie_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_EMR_WINTER5_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR Winter 5 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER5.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_2.paa"};
		linkedItems[]= {SOUP_Boonie_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_EMR_WINTER5_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR Winter 5 Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_EMR_WINTER5";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR_WINTER5.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_EMR_WINTER5, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_EMR_WINTER5: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (EMR Winter 5)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\CARRYALL_EMR_WINTER5.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_EMR_WINTER5: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (EMR Winter 5)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\KITBAG_EMR_WINTER5.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_EMR_WINTER5: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (EMR Winter 5)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\ASSAULT_PACK_EMR_WINTER5.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
	// EMR 1	

	class SOUP_EMR1_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 1)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR1_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_EMR1_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 1)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR1_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR1_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 1)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR1_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR1_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 1)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR1_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_EMR1_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 1)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR1_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR1_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 1)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR1_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_EMR1_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR 1 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR1.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_1.paa"};
		linkedItems[]= {SOUP_Boonie_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_EMR1_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR 1 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR1.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_3.paa"};
		linkedItems[]= {SOUP_Boonie_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_EMR1_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 1 Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_EMR1";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_EMR1, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_EMR1: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (EMR 1)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\CARRYALL_EMR1.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_EMR1: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (EMR 1)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\KITBAG_EMR1.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_EMR1: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (EMR 1)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\ASSAULT_PACK_EMR1.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
	// EMR 2	

	class SOUP_EMR2_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 2)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR2_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_EMR2_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 2)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR2_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR2_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 2)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR2_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR2_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 2)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR2_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_EMR2_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 2)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR2_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR2_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 2)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR2_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_EMR2_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR 2 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR2.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_1.paa"};
		linkedItems[]= {SOUP_Boonie_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_EMR2_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR 2 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR2.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_2.paa"};
		linkedItems[]= {SOUP_Boonie_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_EMR2_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 2 Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_EMR2";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_EMR2, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_EMR2: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (EMR 2)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\CARRYALL_EMR2.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_EMR2: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (EMR 2)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\KITBAG_EMR2.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_EMR2: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (EMR 2)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\ASSAULT_PACK_EMR2.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
	// EMR 3	

	class SOUP_EMR3_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 3)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR3_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_EMR3_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 3)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR3_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR3_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 3)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR3_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR3_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 3)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR3_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_EMR3_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 3)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR3_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_EMR3_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 3)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_EMR3_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_EMR3_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR 3 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR3.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_1.paa"};
		linkedItems[]= {SOUP_Boonie_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_EMR3_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (EMR 3 BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_EMR\Data\BDU_PACT_EMR3.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_2.paa"};
		linkedItems[]= {SOUP_Boonie_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_EMR3_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (EMR 3 Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_EMR3";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_EMR3, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_EMR3: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (EMR 3)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\CARRYALL_EMR3.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_EMR3: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (EMR 3)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\KITBAG_EMR3.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_EMR3: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (EMR 3)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\ASSAULT_PACK_EMR3.paa"
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

// EMR WINTER 1

	class SOUP_CombatUniform_EMR_WINTER1_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 1 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER1_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER1_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 1 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR_WINTER1_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER1_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 1 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER1_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER1_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 1 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR_WINTER1_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER1_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 1 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER1_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER1_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 1 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR_WINTER1_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_EMR_WINTER1_1: Uniform_Base
	{
		scope=2;
		displayName="EMR Winter 1 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER1.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR_WINTER1_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_EMR_WINTER1_2: Uniform_Base
	{
		scope=2;
		displayName="EMR Winter 1 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER1.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER1_3.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR_WINTER1_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_EMR_WINTER1: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 1 Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR_WINTER1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER1_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_EMR_WINTER1: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (EMR Winter 1)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\HELMET_EMR_WINTER1.paa"
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
	class SOUP_Boonie_EMR_WINTER1: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (EMR Winter 1)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\BOONIE_EMR_WINTER1.paa"
		};
	};
	
	// EMR Winter 2

	class SOUP_CombatUniform_EMR_WINTER2_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 2 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER2_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER2_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 2 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR_WINTER2_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER2_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 2 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER2_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER2_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 2 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR_WINTER2_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER2_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 2 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER2_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER2_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 2 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR_WINTER2_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_EMR_WINTER2_1: Uniform_Base
	{
		scope=2;
		displayName="EMR Winter 2 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER2.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR_WINTER2_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_EMR_WINTER2_2: Uniform_Base
	{
		scope=2;
		displayName="EMR Winter 2 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER2.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER2_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR_WINTER2_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_EMR_WINTER2: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 2 Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR_WINTER2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER2_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_EMR_WINTER2: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (EMR Winter 2)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\HELMET_EMR_WINTER2.paa"
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
	class SOUP_Boonie_EMR_WINTER2: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (EMR Winter 2)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\BOONIE_EMR_WINTER2.paa"
		};
	};
	
	// EMR Winter 3

	class SOUP_CombatUniform_EMR_WINTER3_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 3 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER3_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER3_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 3 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR_WINTER3_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER3_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 3 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER3_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER3_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 3 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR_WINTER3_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER3_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 3 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER3_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER3_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 3 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR_WINTER3_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_EMR_WINTER3_1: Uniform_Base
	{
		scope=2;
		displayName="EMR Winter 3 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER3.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR_WINTER3_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_EMR_WINTER3_2: Uniform_Base
	{
		scope=2;
		displayName="EMR Winter 3 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER3.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER3_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR_WINTER3_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_EMR_WINTER3: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 3 Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR_WINTER3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER3_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_EMR_WINTER3: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (EMR Winter 3)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\HELMET_EMR_WINTER3.paa"
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
	class SOUP_Boonie_EMR_WINTER3: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (EMR Winter 3)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\BOONIE_EMR_WINTER3.paa"
		};
	};
	
	// EMR Winter 4

	class SOUP_CombatUniform_EMR_WINTER4_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 4 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER4_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER4_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 4 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR_WINTER4_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER4_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 4 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER4_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER4_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 4 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR_WINTER4_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER4_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 4 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER4_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER4_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 4 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR_WINTER4_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_EMR_WINTER4_1: Uniform_Base
	{
		scope=2;
		displayName="EMR Winter 4 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER4.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR_WINTER4_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_EMR_WINTER4_2: Uniform_Base
	{
		scope=2;
		displayName="EMR Winter 4 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER4.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER4_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR_WINTER4_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_EMR_WINTER4: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 4 Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR_WINTER4.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER4_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_EMR_WINTER4: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (EMR Winter 4)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\HELMET_EMR_WINTER4.paa"
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
	class SOUP_Boonie_EMR_WINTER4: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (EMR Winter 4)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\BOONIE_EMR_WINTER4.paa"
		};
	};
	
	// EMR Winter 5

	class SOUP_CombatUniform_EMR_WINTER5_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 5 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER5_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER5_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 5 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR_WINTER5_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER5_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 5 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER5_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER5_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 5 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR_WINTER5_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER5_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 5 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER5_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR_WINTER5_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 5 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR_WINTER5_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_EMR_WINTER5_1: Uniform_Base
	{
		scope=2;
		displayName="EMR Winter 5 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER5.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR_WINTER5_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_EMR_WINTER5_2: Uniform_Base
	{
		scope=2;
		displayName="EMR Winter 5 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR_WINTER5.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR_WINTER5_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR_WINTER5_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_EMR_WINTER5: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="EMR Winter 5 Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR_WINTER5.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR_WINTER5_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_EMR_WINTER5: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (EMR Winter 5)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\HELMET_EMR_WINTER5.paa"
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
	class SOUP_Boonie_EMR_WINTER5: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (EMR Winter 5)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\BOONIE_EMR_WINTER5.paa"
		};
	};
	
	// EMR 1

	class SOUP_CombatUniform_EMR1_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 1 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR1_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR1_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 1 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR1_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR1_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 1 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR1_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR1_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 1 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR1_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR1_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 1 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR1_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR1_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 1 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR1_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_EMR1_1: Uniform_Base
	{
		scope=2;
		displayName="EMR 1 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR1.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR1_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_EMR1_2: Uniform_Base
	{
		scope=2;
		displayName="EMR 1 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR1.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR1_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR1_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_EMR1: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 1 Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR1_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_EMR1: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (EMR 1)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\HELMET_EMR1.paa"
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
	class SOUP_Boonie_EMR1: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (EMR 1)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\BOONIE_EMR1.paa"
		};
	};
	
	// EMR 2

	class SOUP_CombatUniform_EMR2_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 2 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR2_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR2_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 2 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR2_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR2_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 2 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR2_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR2_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 2 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR2_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR2_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 2 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR2_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR2_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 2 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR2_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_EMR2_1: Uniform_Base
	{
		scope=2;
		displayName="EMR 2 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR2.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR2_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_EMR2_2: Uniform_Base
	{
		scope=2;
		displayName="EMR 2 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR2.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR2_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR2_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_EMR2: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 2 Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR2_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_EMR2: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (EMR 2)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\HELMET_EMR2.paa"
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
	class SOUP_Boonie_EMR2: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (EMR 2)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\BOONIE_EMR2.paa"
		};
	};
	
	// EMR 3

	class SOUP_CombatUniform_EMR3_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 3 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR3_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR3_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 3 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR3_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR3_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 3 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR3_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR3_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 3 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR3_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR3_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 3 Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR3_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_EMR3_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 3 Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_EMR3_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_EMR3_1: Uniform_Base
	{
		scope=2;
		displayName="EMR 3 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR3.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR3_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_EMR3_2: Uniform_Base
	{
		scope=2;
		displayName="EMR 3 BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_EMR\Data\BDU_PACT_EMR3.paa","\SOUP_PACT_EMR\Data\UNIFORM_PACT_EMR3_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_EMR3_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_EMR3: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="EMR 3 Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\JUMPER_PACT_EMR3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_EMR3_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_EMR3: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (EMR 3)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\HELMET_EMR3.paa"
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
	class SOUP_Boonie_EMR3: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (EMR 3)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_EMR\Data\BOONIE_EMR3.paa"
		};
	};
};
class cfgMods
{
	author="76561197991084278";
	timepacked="1472949429";
};
