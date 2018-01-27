class CfgPatches
{
	class SOUP_PMC
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR", "A3_Characters_F_OPFOR", "A3_Characters_F_Common", "A3_Characters_F", "A3_Weapons_F_Ammoboxes"};
	};
};

class CfgVehicles
{
	class B_Soldier_base_F;
	
 class SOUP_PMC_Operator_BLK_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (Black)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_BLK_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_BLACK.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_BLK_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_BLK_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_PMC_Operator_BLK_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (Black)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_BLK_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_BLACK.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_BLK_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_BLK_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
 class SOUP_PMC_Operator_BLK_BLU_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (Black/Blue)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_BLK_BLU_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_BLACK_BLUE.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_BLK_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_BLK_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_PMC_Operator_BLK_BLU_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (Black/Blue)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_BLK_BLU_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_BLACK_BLUE.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_BLK_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_BLK_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
 
 class SOUP_PMC_Operator_BLK_OD_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (Black/OD)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_BLK_OD_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_BLACK_OD.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_BLK_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_BLK_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_PMC_Operator_BLK_OD_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (Black/OD)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_BLK_OD_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_BLACK_OD.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_BLK_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_BLK_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	

 class SOUP_PMC_Operator_OD_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (OD)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_OD_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_OD.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_OD_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_OD_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_PMC_Operator_OD_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (OD)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_OD_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_OD.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_OD_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_OD_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
 class SOUP_PMC_Operator_OD_M81_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (OD/M81)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_OD_M81_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_OD_M81.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_BLK_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_BLK_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_PMC_Operator_OD_M81_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (OD/M81)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_OD_M81_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_OD_M81.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_OD_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_OD_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
 
 class SOUP_PMC_Operator_OD_SAND_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (OD/Sand)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_OD_SAND_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_OD_SAND.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_OD_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_OD_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_PMC_Operator_OD_SAND_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (OD/Sand)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_OD_SAND_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_OD_SAND.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_OD_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_OD_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	

 class SOUP_PMC_Operator_SAND_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (Sand)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_SAND_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_SAND.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_SAND_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_SAND_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_PMC_Operator_SAND_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (Sand)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_SAND_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_SAND.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_SAND_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_SAND_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
 class SOUP_PMC_Operator_SAND_BLK_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (Sand/Black)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_SAND_BLK_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_SAND_BLACK.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_SAND_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_SAND_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_PMC_Operator_SAND_BLK_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (Sand/Black)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_SAND_BLK_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_SAND_BLACK.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_SAND_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_SAND_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
 
 class SOUP_PMC_Operator_SAND_OD_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (Sand/OD)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_SAND_OD_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_SAND_OD.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_SAND_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_SAND_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_PMC_Operator_SAND_OD_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator (Sand/OD)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PMC_SAND_OD_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_SAND_OD.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_SAND_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_SAND_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	

  class SOUP_PMC_OperatorG3_GREY_BLU_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator G3 (Grey/Blue)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_G3_PMC_GREY_BLU_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_GREY_BLUE.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_BLK_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_BLK_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_PMC_OperatorG3_GREY_BLU_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator G3 (Grey/Blue)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_G3_PMC_GREY_BLU_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_GREY_BLUE.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_BLK_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_BLK_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
  class SOUP_PMC_OperatorG3_GREY_OD_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator G3 (Grey/OD)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_G3_PMC_GREY_OD_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_GREY_OD.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_BLK_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_BLK_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_PMC_OperatorG3_GREY_OD_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator G3 (Grey/OD)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_G3_PMC_GREY_OD_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_GREY_OD.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_BLK_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_BLK_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		

  class SOUP_PMC_OperatorG3_OD_GREY_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator G3 (OD/Grey)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_G3_PMC_OD_GREY_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_OD_GREY.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_OD_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_OD_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_PMC_OperatorG3_OD_GREY_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator G3 (OD/Grey)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_G3_PMC_OD_GREY_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_OD_GREY.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_OD_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_OD_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	

  class SOUP_PMC_OperatorG3_OD_SAND_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator G3 (OD/Sand)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_G3_PMC_OD_SAND_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_OD_SAND.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_OD_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_OD_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_PMC_OperatorG3_OD_SAND_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator G3 (OD/Sand)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_G3_PMC_OD_SAND_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_OD_SAND.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_OD_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_OD_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	

  class SOUP_PMC_OperatorG3_SAND_BLU_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator G3 (Sand/Blue)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_G3_PMC_SAND_BLU_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_SAND_BLUE.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_SAND_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_SAND_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_PMC_OperatorG3_SAND_BLU_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator G3 (Sand/Blue)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_G3_PMC_SAND_BLU_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_SAND_BLUE.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_SAND_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_SAND_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
  class SOUP_PMC_OperatorG3_SAND_OD_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator G3 (Sand/OD)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_G3_PMC_SAND_OD_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_SAND_OD.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_SAND_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_SAND_A, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	
	 class SOUP_PMC_OperatorG3_SAND_OD_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "PMC Operator G3 (Sand/OD)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_G3_PMC_SAND_OD_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_SAND_OD.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        linkedItems[] = {SOUP_Vest_PMC_SAND_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Vest_PMC_SAND_B, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
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
	class U_B_CombatUniform_mcam;
	class U_B_CombatUniform_mcam_tshirt;
 	
	class SOUP_CombatUniform_PMC_BLK_A : U_I_CombatUniform
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_BLACK.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "SOUP_PMC_Operator_BLK_F"; //would be same as our made soldier class			
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class SOUP_CombatUniform_PMC_BLK_B : U_I_CombatUniform_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_BLACK.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "SOUP_PMC_Operator_BLK_O"; //would be same as our made soldier class			
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
  	
	class SOUP_CombatUniform_PMC_BLK_BLU_A : U_I_CombatUniform
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_BLACK_BLUE.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "SOUP_PMC_Operator_BLK_BLU_F"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class SOUP_CombatUniform_PMC_BLK_BLU_B : U_I_CombatUniform_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_BLACK_BLUE.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "SOUP_PMC_Operator_BLK_BLU_O"; //would be same as our made soldier class	
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	class SOUP_CombatUniform_PMC_BLK_OD_A : U_I_CombatUniform
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_BLACK_OD.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "SOUP_PMC_Operator_BLK_OD_F"; //would be same as our made soldier class	
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class SOUP_CombatUniform_PMC_BLK_OD_B : U_I_CombatUniform_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_BLACK_OD.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "SOUP_PMC_Operator_BLK_OD_O"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	class SOUP_CombatUniform_PMC_OD_A : U_I_CombatUniform
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_OD.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "SOUP_PMC_Operator_OD_F"; //would be same as our made soldier class					
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class SOUP_CombatUniform_PMC_OD_B : U_I_CombatUniform_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_OD.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "SOUP_PMC_Operator_OD_O"; //would be same as our made soldier class					
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	class SOUP_CombatUniform_PMC_OD_M81_A : U_I_CombatUniform
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_OD_M81.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "SOUP_PMC_Operator_OD_M81_F"; //would be same as our made soldier class					
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class SOUP_CombatUniform_PMC_OD_M81_B : U_I_CombatUniform_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_OD_M81.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "SOUP_PMC_Operator_OD_M81_O"; //would be same as our made soldier class					
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	class SOUP_CombatUniform_PMC_OD_SAND_A : U_I_CombatUniform
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_OD_SAND.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "SOUP_PMC_Operator_OD_SAND_F"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class SOUP_CombatUniform_PMC_OD_SAND_B : U_I_CombatUniform_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_OD_SAND.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "SOUP_PMC_Operator_OD_SAND_O"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	class SOUP_CombatUniform_PMC_SAND_A : U_I_CombatUniform
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_SAND.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "SOUP_PMC_Operator_SAND_F"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class SOUP_CombatUniform_PMC_SAND_B : U_I_CombatUniform_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_SAND.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "SOUP_PMC_Operator_SAND_O"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	class SOUP_CombatUniform_PMC_SAND_BLK_A : U_I_CombatUniform
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_SAND_BLACK.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "SOUP_PMC_Operator_SAND_BLK_F"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class SOUP_CombatUniform_PMC_SAND_BLK_B : U_I_CombatUniform_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_SAND_BLACK.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "SOUP_PMC_Operator_SAND_BLK_O"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	class SOUP_CombatUniform_PMC_SAND_OD_A : U_I_CombatUniform
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_SAND_OD.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "SOUP_PMC_Operator_SAND_OD_F"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class SOUP_CombatUniform_PMC_SAND_OD_B : U_I_CombatUniform_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Fatigues (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\UNIFORM_PMC_SAND_OD.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "SOUP_PMC_Operator_SAND_OD_O"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};	
	
	class SOUP_CombatUniform_G3_PMC_GREY_BLU_A : U_B_CombatUniform_mcam
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Combat Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_GREY_BLUE.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
			uniformClass = "SOUP_PMC_OperatorG3_GREY_BLU_F"; //would be same as our made soldier class					
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class SOUP_CombatUniform_G3_PMC_GREY_BLU_B : U_B_CombatUniform_mcam_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Combat Uniform (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_GREY_BLUE.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
			uniformClass = "SOUP_PMC_OperatorG3_GREY_BLU_O"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	class SOUP_CombatUniform_G3_PMC_GREY_OD_A : U_B_CombatUniform_mcam
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Combat Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_GREY_OD.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
			uniformClass = "SOUP_PMC_OperatorG3_GREY_OD_F"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class SOUP_CombatUniform_G3_PMC_GREY_OD_B : U_B_CombatUniform_mcam_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Combat Uniform (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_GREY_OD.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
			uniformClass = "SOUP_PMC_OperatorG3_GREY_OD_O"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	class SOUP_CombatUniform_G3_PMC_OD_GREY_A : U_B_CombatUniform_mcam
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Combat Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_OD_GREY.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
			uniformClass = "SOUP_PMC_OperatorG3_OD_GREY_F"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class SOUP_CombatUniform_G3_PMC_OD_GREY_B : U_B_CombatUniform_mcam_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Combat Uniform (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_OD_GREY.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
			uniformClass = "SOUP_PMC_OperatorG3_OD_GREY_O"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};


	class SOUP_CombatUniform_G3_PMC_OD_SAND_A : U_B_CombatUniform_mcam
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Combat Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_OD_SAND.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
			uniformClass = "SOUP_PMC_OperatorG3_OD_SAND_F"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class SOUP_CombatUniform_G3_PMC_OD_SAND_B : U_B_CombatUniform_mcam_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Combat Uniform (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_OD_SAND.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
			uniformClass = "SOUP_PMC_OperatorG3_OD_SAND_O"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	class SOUP_CombatUniform_G3_PMC_SAND_BLU_A : U_B_CombatUniform_mcam
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Combat Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_SAND_BLUE.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
			uniformClass = "SOUP_PMC_OperatorG3_SAND_BLU_F"; //would be same as our made soldier class				
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class SOUP_CombatUniform_G3_PMC_SAND_BLU_B : U_B_CombatUniform_mcam_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Combat Uniform (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_SAND_BLUE.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
			uniformClass = "SOUP_PMC_OperatorG3_SAND_BLU_O"; //would be same as our made soldier class					
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	class SOUP_CombatUniform_G3_PMC_SAND_OD_A : U_B_CombatUniform_mcam
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Combat Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_SAND_OD.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
			uniformClass = "SOUP_PMC_OperatorG3_SAND_OD_F"; //would be same as our made soldier class					
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class SOUP_CombatUniform_G3_PMC_SAND_OD_B : U_B_CombatUniform_mcam_tshirt
	{
		author = "Starvolt";
		scope = 2;
		displayName = "PMC Combat Uniform (Rolled)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\G3_PMC_SAND_OD.paa"};

		class ItemInfo : UniformItem 
		{
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
			uniformClass = "SOUP_PMC_OperatorG3_SAND_OD_O"; //would be same as our made soldier class					
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
				
	class SOUP_Vest_PMC_BLK_A : V_PlateCarrier3_rgr 
	{
		author = "Starvolt";
		scope = 2;
		displayName = "Plate Carrier (Black)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\PLATE_CARRIER_PMC_BLACK.paa"};
		
		class ItemInfo : VestItem 
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	class SOUP_Vest_PMC_BLK_B : V_PlateCarrier3_rgr 
	{
		author = "Starvolt";
		scope = 2;
		displayName = "Plate Carrier (Black)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\PLATE_CARRIER_PMC_BLACK.paa"};
		
		class ItemInfo : VestItem 
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
				
	class SOUP_Vest_PMC_OD_A : V_PlateCarrier3_rgr 
	{
		author = "Starvolt";
		scope = 2;
		displayName = "Plate Carrier (Olive Drab)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\PLATE_CARRIER_PMC_OD.paa"};
		
		class ItemInfo : VestItem 
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	class SOUP_Vest_PMC_OD_B : V_PlateCarrier3_rgr 
	{
		author = "Starvolt";
		scope = 2;
		displayName = "Plate Carrier (Olive Drab)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\PLATE_CARRIER_PMC_OD.paa"};
		
		class ItemInfo : VestItem 
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};	
				
	class SOUP_Vest_PMC_SAND_A : V_PlateCarrier3_rgr 
	{
		author = "Starvolt";
		scope = 2;
		displayName = "Plate Carrier (Sand)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\PLATE_CARRIER_PMC_SAND.paa"};
		
		class ItemInfo : VestItem 
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	class SOUP_Vest_PMC_SAND_B : V_PlateCarrier3_rgr 
	{
		author = "Starvolt";
		scope = 2;
		displayName = "Plate Carrier (Sand)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SOUP_PMC\Data\PLATE_CARRIER_PMC_SAND.paa"};
		
		class ItemInfo : VestItem 
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};	
	
};	