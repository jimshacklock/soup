class CfgPatches
{
	class SOUP_PACT
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

// PACT Mixed	

	class SOUP_MIX_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_MIX_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_MIX_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_MIX_4_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_4_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_4.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_4_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_4_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_4.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_MIX_5_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_5_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_5.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_5_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_5_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_5.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_MIX_6_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_6_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_6.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_6_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_6_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_6.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_MIX_7_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_7_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_7.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_7_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_7_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_7.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_MIX_8_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_8_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_8.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_8_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_8_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_8.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_MIX_9_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_9_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_9.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_9_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_9_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_9.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_MIX_10_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_10_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_10.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_10_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_10_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_10.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_MIX_11_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_11_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_11.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_11_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_11_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_11.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_MIX_12_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_12_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_12.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_12_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_12_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_12.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_MIX_13_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_13_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_13.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_13_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_13_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_13.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_MIX_14_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_14_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_14.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_14_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_14_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_14.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_MIX_15_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_15_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_15.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_15_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_15_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_15.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_MIX_16_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_16_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_16.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_16_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_16_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_16.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_MIX_17_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_17_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_17.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_17_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_17_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_17.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_MIX_18_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_18_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_18.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_18_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_18_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_18.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_MIX_19_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_19_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_19.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_19_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_19_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_19.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_MIX_20_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_20_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_20.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_MIX_20_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (PACT Mixed)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_MIX_20_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_20.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PACT_MIX, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
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

	class SOUP_CombatUniform_MIX_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_4_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_4.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_4_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_4_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_4.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_4_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_5_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_5.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_5_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_5_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_5.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_5_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_6_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_6.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_6_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_6_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_6.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_6_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_7_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_7.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_7_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_7_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_7.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_7_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_8_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_8.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_8_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_8_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_8.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_8_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_9_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_9.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_9_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_9_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_9.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_9_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_10_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_10.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_10_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_10_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_10.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_10_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_11_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_11.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_11_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_11_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_11.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_11_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_12_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_12.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_12_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_12_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_12.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_12_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_13_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_13.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_13_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_13_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_13.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_13_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_14_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_14.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_14_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_14_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_14.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_14_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_15_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_15.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_15_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_15_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_15.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_15_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_16_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_16.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_16_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_16_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_16.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_16_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_17_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_17.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_17_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_17_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_17.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_17_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_18_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_18.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_18_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_18_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_18.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_18_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_19_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_19.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_19_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_19_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_19.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_19_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_20_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_20.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_MIX_20_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_MIX_20_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="PACT Mixed Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_MIX\Data\UNIFORM_PACT_MIX_20.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_MIX_20_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
};
class cfgMods
{
	author="76561197991084278";
	timepacked="1472949429";
};
