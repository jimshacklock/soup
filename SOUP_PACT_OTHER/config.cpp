class CfgPatches
{
	class SOUP_PACT_OTHER
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

// Partizan	

	class SOUP_PARTIZAN_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Partizan)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PARTIZAN_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_PARTIZAN_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Partizan)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PARTIZAN_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_PARTIZAN_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Partizan)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PARTIZAN_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_PARTIZAN_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Partizan)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PARTIZAN_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_PARTIZAN_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Partizan)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PARTIZAN_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_PARTIZAN_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Partizan)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PARTIZAN_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_PARTIZAN_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (Partizan BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_OTHER\Data\BDU_PACT_PARTIZAN.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_1.paa"};
		linkedItems[]= {SOUP_Boonie_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_PARTIZAN_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (Partizan BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_OTHER\Data\BDU_PACT_PARTIZAN.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_2.paa"};
		linkedItems[]= {SOUP_Boonie_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_PARTIZAN_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Partizan Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_PARTIZAN";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\JUMPER_PACT_PARTIZAN.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_PARTIZAN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_PARTIZAN: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (Partizan)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\CARRYALL_PARTIZAN.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_PARTIZAN: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (Partizan)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\KITBAG_PARTIZAN.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_PARTIZAN: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (Partizan)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\ASSAULT_PACK_PARTIZAN.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
	// Partizan Autumn	

	class SOUP_PARTIZAN_AUTUMN_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Partizan Autumn)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PARTIZAN_AUTUMN_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_PARTIZAN_AUTUMN_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Partizan Autumn)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PARTIZAN_AUTUMN_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_PARTIZAN_AUTUMN_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Partizan Autumn)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PARTIZAN_AUTUMN_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_PARTIZAN_AUTUMN_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Partizan Autumn)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PARTIZAN_AUTUMN_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_PARTIZAN_AUTUMN_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Partizan Autumn)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PARTIZAN_AUTUMN_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_PARTIZAN_AUTUMN_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Partizan Autumn)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_PARTIZAN_AUTUMN_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_PARTIZAN_AUTUMN_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (Partizan Autumn BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_OTHER\Data\BDU_PACT_PARTIZAN_AUTUMN.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_1.paa"};
		linkedItems[]= {SOUP_Boonie_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_PARTIZAN_AUTUMN_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (Partizan Autumn BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_OTHER\Data\BDU_PACT_PARTIZAN_AUTUMN.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_2.paa"};
		linkedItems[]= {SOUP_Boonie_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_PARTIZAN_AUTUMN_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Partizan Autumn Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_PARTIZAN_AUTUMN";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\JUMPER_PACT_PARTIZAN_AUTUMN.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_PARTIZAN_AUTUMN, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_PARTIZAN_AUTUMN: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (Partizan Autumn)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\CARRYALL_PARTIZAN_AUTUMN.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_PARTIZAN_AUTUMN: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (Partizan Autumn)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\KITBAG_PARTIZAN_AUTUMN.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_PARTIZAN_AUTUMN: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (Partizan Autumn)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\ASSAULT_PACK_PARTIZAN_AUTUMN.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
	// Tigr	

	class SOUP_TIGR_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Tigr)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_TIGR_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_TIGR_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Tigr)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_TIGR_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_TIGR_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Tigr)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_TIGR_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_TIGR_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Tigr)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_TIGR_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_TIGR_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Tigr)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_TIGR_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_TIGR_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Tigr)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_TIGR_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_TIGR_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (Tigr BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_OTHER\Data\BDU_PACT_TIGR.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_1.paa"};
		linkedItems[]= {SOUP_Boonie_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_TIGR_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (Tigr BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_OTHER\Data\BDU_PACT_TIGR.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_2.paa"};
		linkedItems[]= {SOUP_Boonie_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_TIGR_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Tigr Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_TIGR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\JUMPER_PACT_TIGR.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_TIGR: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (Tigr)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\CARRYALL_TIGR.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_TIGR: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (Tigr)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\KITBAG_TIGR.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_TIGR: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (Tigr)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\ASSAULT_PACK_TIGR.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
	// Tigr	

	class SOUP_SHADOW_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Shadow)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_TIGR_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_TIGR_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Tigr)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_TIGR_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_TIGR_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Tigr)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_TIGR_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_TIGR_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Tigr)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_TIGR_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_TIGR_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Tigr)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_TIGR_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_TIGR_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Tigr)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_TIGR_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_TIGR_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (Tigr BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_OTHER\Data\BDU_PACT_TIGR.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_1.paa"};
		linkedItems[]= {SOUP_Boonie_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_TIGR_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (Tigr BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_OTHER\Data\BDU_PACT_TIGR.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_2.paa"};
		linkedItems[]= {SOUP_Boonie_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_TIGR_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Tigr Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_TIGR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\JUMPER_PACT_TIGR.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_TIGR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_TIGR: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (Tigr)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\CARRYALL_TIGR.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_TIGR: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (Tigr)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\KITBAG_TIGR.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_TIGR: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (Tigr)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\ASSAULT_PACK_TIGR.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
// Shadow	

	class SOUP_SHADOW_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Shadow)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_SHADOW_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_SHADOW_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Shadow)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_SHADOW_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_SHADOW_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Shadow)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_SHADOW_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_SHADOW_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Shadow)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_SHADOW_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_SHADOW_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Shadow)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_SHADOW_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_SHADOW_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Shadow)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_SHADOW_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_SHADOW_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (Shadow BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_OTHER\Data\BDU_PACT_SHADOW.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_1.paa"};
		linkedItems[]= {SOUP_Boonie_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_SHADOW_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (Shadow BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_OTHER\Data\BDU_PACT_SHADOW.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_3.paa"};
		linkedItems[]= {SOUP_Boonie_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_SHADOW_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (Shadow Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_SHADOW";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\JUMPER_PACT_SHADOW.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_SHADOW, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_SHADOW: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (Shadow)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\CARRYALL_SHADOW.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_SHADOW: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (Shadow)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\KITBAG_SHADOW.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_SHADOW: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (Shadow)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\ASSAULT_PACK_SHADOW.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
	// SURPAT	

	class SOUP_SURPAT_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (SURPAT)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_SURPAT_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_SURPAT_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (SURPAT)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_SURPAT_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_SURPAT_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (SURPAT)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_SURPAT_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_SURPAT_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (SURPAT)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_SURPAT_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_SURPAT_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (SURPAT)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_SURPAT_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_SURPAT_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (SURPAT)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_SURPAT_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_SURPAT_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (SURPAT BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_OTHER\Data\BDU_PACT_SURPAT.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_1.paa"};
		linkedItems[]= {SOUP_Boonie_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_SURPAT_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (SURPAT BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_OTHER\Data\BDU_PACT_SURPAT.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_2.paa"};
		linkedItems[]= {SOUP_Boonie_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_SURPAT_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (SURPAT Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_SURPAT";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\JUMPER_PACT_SURPAT.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_SURPAT, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_SURPAT: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (SURPAT)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\CARRYALL_SURPAT.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_SURPAT: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (SURPAT)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\KITBAG_SURPAT.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_SURPAT: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (SURPAT)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\ASSAULT_PACK_SURPAT.paa"
		};
		maximumLoad=120;
		mass=20;
	};
	
	// VSR	

	class SOUP_VSR_1_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (VSR)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_VSR_1_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	class SOUP_VSR_1_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (VSR)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_VSR_1_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_VSR_2_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (VSR)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_VSR_2_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_VSR_2_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (VSR)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_VSR_2_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_2.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };
	class SOUP_VSR_3_Soldier_F: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (VSR)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_VSR_3_A";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };	
	class SOUP_VSR_3_Soldier_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (VSR)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_VSR_3_B";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_3.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Helmet_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Helmet_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
  	class SOUP_VSR_1_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (VSR BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_OTHER\Data\BDU_PACT_VSR.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_1.paa"};
		linkedItems[]= {SOUP_Boonie_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
 	class SOUP_VSR_2_SoldierBDU_O: B_Soldier_base_F
	{
		author="Starvolt";
		scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName="Soldier (VSR BDU)";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass="SOUP_CombatUniform_BDU_PACT";
		hiddenSelections[]= {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[]={"\SOUP_PACT_OTHER\Data\BDU_PACT_VSR.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_2.paa"};
		linkedItems[]= {SOUP_Boonie_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[]= {SOUP_Boonie_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class SOUP_VSR_SoldierJumper_O: B_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Starvolt";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldier (VSR Jumper)";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";        // The path to the model this character uses.
        uniformClass = "SOUP_CombatUniform_JUMPER_PACT_VSR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\JUMPER_PACT_VSR.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        linkedItems[] = {SOUP_Boonie_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {SOUP_Boonie_VSR, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };		
	
	class SOUP_Carryall_PACT_VSR: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayName="Carryall (VSR)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\CARRYALL_VSR.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SOUP_Kitbag_PACT_VSR: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Kitbag (VSR)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\KITBAG_VSR.paa"
		};
		maximumLoad=240;
		mass=30;
	};
	class SOUP_Assault_Pack_PACT_VSR: Bag_Base
	{
		author="Starvolt";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName="Assault Pack (VSR)";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\ASSAULT_PACK_VSR.paa"
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

// Partizan

	class SOUP_CombatUniform_PARTIZAN_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="Partizan Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_PARTIZAN_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_PARTIZAN_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="Partizan Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_PARTIZAN_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_PARTIZAN_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="Partizan Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_PARTIZAN_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_PARTIZAN_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="Partizan Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_PARTIZAN_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_PARTIZAN_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="Partizan Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_PARTIZAN_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_PARTIZAN_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="Partizan Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_PARTIZAN_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_PARTIZAN_1: Uniform_Base
	{
		scope=2;
		displayName="Partizan BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\BDU_PACT_PARTIZAN.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_PARTIZAN_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_PARTIZAN_2: Uniform_Base
	{
		scope=2;
		displayName="Partizan BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\BDU_PACT_PARTIZAN.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_PARTIZAN_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_PARTIZAN: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="Partizan Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\JUMPER_PACT_PARTIZAN.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_PARTIZAN_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_PARTIZAN: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (Partizan)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\HELMET_PARTIZAN.paa"
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
	class SOUP_Boonie_PARTIZAN: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (Partizan)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\BOONIE_PARTIZAN.paa"
		};
	};
	
	// Partizan Autumn

	class SOUP_CombatUniform_PARTIZAN_AUTUMN_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="Partizan Autumn Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_PARTIZAN_AUTUMN_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_PARTIZAN_AUTUMN_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="Partizan Autumn Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_PARTIZAN_AUTUMN_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_PARTIZAN_AUTUMN_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="Partizan Autumn Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_PARTIZAN_AUTUMN_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_PARTIZAN_AUTUMN_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="Partizan Autumn Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_PARTIZAN_AUTUMN_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_PARTIZAN_AUTUMN_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="Partizan Autumn Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_PARTIZAN_AUTUMN_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_PARTIZAN_AUTUMN_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="Partizan Autumn Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_PARTIZAN_AUTUMN_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_PARTIZAN_AUTUMN_1: Uniform_Base
	{
		scope=2;
		displayName="Partizan Autumn BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\BDU_PACT_PARTIZAN_AUTUMN.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_PARTIZAN_AUTUMN_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_PARTIZAN_AUTUMN_2: Uniform_Base
	{
		scope=2;
		displayName="Partizan Autumn BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\BDU_PACT_PARTIZAN_AUTUMN.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_PARTIZAN_AUTUMN_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_PARTIZAN_AUTUMN_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_PARTIZAN_AUTUMN: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="Partizan Autumn Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\JUMPER_PACT_PARTIZAN_AUTUMN.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_PARTIZAN_AUTUMN_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_PARTIZAN_AUTUMN: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (Partizan Autumn)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\HELMET_PARTIZAN_AUTUMN.paa"
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
	class SOUP_Boonie_PARTIZAN_AUTUMN: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (Partizan Autumn)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\BOONIE_PARTIZAN_AUTUMN.paa"
		};
	};
	
	// Tigr

	class SOUP_CombatUniform_TIGR_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="Tigr Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_TIGR_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_TIGR_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="Tigr Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_TIGR_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_TIGR_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="Tigr Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_TIGR_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_TIGR_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="Tigr Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_TIGR_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_TIGR_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="Tigr Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_TIGR_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_TIGR_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="Tigr Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_TIGR_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_TIGR_1: Uniform_Base
	{
		scope=2;
		displayName="Tigr BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\BDU_PACT_TIGR.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_TIGR_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_TIGR_2: Uniform_Base
	{
		scope=2;
		displayName="Tigr BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\BDU_PACT_TIGR.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_TIGR_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_TIGR_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_TIGR: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="Tigr Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\JUMPER_PACT_TIGR.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_TIGR_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_TIGR: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (Tigr)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\HELMET_TIGR.paa"
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
	class SOUP_Boonie_TIGR: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (Tigr)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\BOONIE_TIGR.paa"
		};
	};
	
	// Shadow

	class SOUP_CombatUniform_SHADOW_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="Shadow Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_SHADOW_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_SHADOW_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="Shadow Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_SHADOW_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_SHADOW_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="Shadow Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_SHADOW_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_SHADOW_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="Shadow Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_SHADOW_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_SHADOW_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="Shadow Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_SHADOW_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_SHADOW_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="Shadow Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_SHADOW_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_SHADOW_1: Uniform_Base
	{
		scope=2;
		displayName="Shadow BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\BDU_PACT_SHADOW.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_SHADOW_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_SHADOW_2: Uniform_Base
	{
		scope=2;
		displayName="Shadow BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\BDU_PACT_SHADOW.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SHADOW_3.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_SHADOW_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_SHADOW: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="Shadow Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\JUMPER_PACT_SHADOW.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_SHADOW_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_SHADOW: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (Shadow)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\HELMET_SHADOW.paa"
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
	class SOUP_Boonie_SHADOW: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (Shadow)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\BOONIE_SHADOW.paa"
		};
	};
	
	// SURPAT

	class SOUP_CombatUniform_SURPAT_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="SURPAT Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_SURPAT_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_SURPAT_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="SURPAT Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_SURPAT_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_SURPAT_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="SURPAT Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_SURPAT_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_SURPAT_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="SURPAT Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_SURPAT_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_SURPAT_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="SURPAT Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_SURPAT_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_SURPAT_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="SURPAT Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_SURPAT_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_SURPAT_1: Uniform_Base
	{
		scope=2;
		displayName="SURPAT BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\BDU_PACT_SURPAT.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_SURPAT_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_SURPAT_2: Uniform_Base
	{
		scope=2;
		displayName="SURPAT BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\BDU_PACT_SURPAT.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_SURPAT_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_SURPAT_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_SURPAT: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="SURPAT Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\JUMPER_PACT_SURPAT.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_SURPAT_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_SURPAT: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (SURPAT)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\HELMET_SURPAT.paa"
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
	class SOUP_Boonie_SURPAT: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (SURPAT)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\BOONIE_SURPAT.paa"
		};
	};
	
	// VSR

	class SOUP_CombatUniform_VSR_1_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="VSR Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_VSR_1_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_VSR_1_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="VSR Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_1.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_VSR_1_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_VSR_2_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="VSR Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_VSR_2_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_VSR_2_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="VSR Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_2.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_VSR_2_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_VSR_3_A: U_I_CombatUniform
	{
		author="Starvolt";
		scope=2;
		displayName="VSR Fatigues";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_VSR_3_Soldier_F";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};
	class SOUP_CombatUniform_VSR_3_B: U_I_CombatUniform_tshirt
	{
		author="Starvolt";
		scope=2;
		displayName="VSR Fatigues (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_3.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass="SOUP_VSR_3_Soldier_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	
	class SOUP_CombatUniform_BDU_PACT_VSR_1: Uniform_Base
	{
		scope=2;
		displayName="VSR BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\BDU_PACT_VSR.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_1.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_VSR_1_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_BDU_PACT_VSR_2: Uniform_Base
	{
		scope=2;
		displayName="VSR BDU";
		author="Starvolt";
		picture= "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[] = {"Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\SOUP_PACT_OTHER\Data\BDU_PACT_VSR.paa","\SOUP_PACT_OTHER\Data\UNIFORM_PACT_VSR_2.paa"};

		class ItemInfo: UniformItem
		{
			uniformClass="SOUP_VSR_2_SoldierBDU_O";
			containerClass="Supply40";
			mass=20;
		};
	};
	class SOUP_CombatUniform_JUMPER_PACT_VSR: U_IG_Guerrilla_6_1
	{
		author="Starvolt";
		scope=2;
		displayName="VSR Jumper";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\JUMPER_PACT_VSR.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass="SOUP_VSR_SoldierJumper_O";
			containerClass="Supply40";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
		};
	};	

	class SOUP_Helmet_VSR: ItemCore
	{
		author="Starvolt";
		scope=2;
		weaponPoolAvailable=1;
		displayName="MICH (VSR)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\HELMET_VSR.paa"
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
	class SOUP_Boonie_VSR: H_Booniehat_khk
	{
		author="Starvolt";
		displayName="Boonie Hat (VSR)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\SOUP_PACT_OTHER\Data\BOONIE_VSR.paa"
		};
	};
};
class cfgMods
{
	author="76561197991084278";
	timepacked="1472949429";
};
