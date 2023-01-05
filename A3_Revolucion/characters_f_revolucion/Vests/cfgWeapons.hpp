class CfgWeapons
{
    /* Inheritance */
    class VestItem;
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier2_rgr;
    class V_CarrierRigKBT_01_base_F;
    class V_CarrierRigKBT_01_light_base_F;
    class V_CarrierRigKBT_01_heavy_base_F;
	class V_PlateCarrier_CTRG_lxWS;

    /* Items */  
    
    class V_PlateCarrierL_cartel_F: V_PlateCarrier1_rgr
	{
		author = $STR_A3_A_BranFlakes;
		displayName = $STR_A3_R_CfgWeapons_V_PlateCarrierL_cartel_F0;
		picture = "\A3_Revolucion\Characters_F_Revolucion\Vests\Data\UI\V_PlateCarrierL_cartel_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Vests\Data\vest_cartel_CO.paa"};
	};
	class V_PlateCarrierH_cartel_F: V_PlateCarrier2_rgr
	{
		author = $STR_A3_A_BranFlakes;
		displayName = $STR_A3_R_CfgWeapons_V_PlateCarrierH_cartel_F0;
		picture = "\A3_Revolucion\Characters_F_Revolucion\Vests\Data\UI\V_PlateCarrierH_cartel_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Vests\Data\vest_cartel_CO.paa"};
    };
	class Rev_V_PlateCarrier2_alt_Cartel: V_PlateCarrier_CTRG_lxWS
    {
        scope = public; 
        picture = "\A3_Revolucion\Characters_F_Revolucion\Vests\Data\UI\V_PlateCarrierH_cartel_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier2_alt_Cartel0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Revolucion\Characters_F_Revolucion\Vests\Data\vest_cartel_CO.paa"
		};
    };
    class V_CarrierRigKBT_01_ctrg_F: V_CarrierRigKBT_01_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_ctrg_F0;
		picture = "\A3_Revolucion\Characters_F_Revolucion\Vests\Data\UI\V_CarrierRigKBT_01_ctrg_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Vests\Data\CarrierRigKBT_01_CTRG_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Revolucion\Characters_F_Revolucion\Vests\Data\CarrierRigKBT_01_CTRG.rvmat"};
    };
    class V_CarrierRigKBT_01_light_ctrg_F: V_CarrierRigKBT_01_light_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_light_ctrg_F0;
		picture = "\A3_Revolucion\Characters_F_Revolucion\Vests\Data\UI\V_CarrierRigKBT_01_light_ctrg_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Vests\Data\CarrierRigKBT_01_CTRG_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Revolucion\Characters_F_Revolucion\Vests\Data\CarrierRigKBT_01_CTRG.rvmat"};
    };
    class V_CarrierRigKBT_01_heavy_ctrg_F: V_CarrierRigKBT_01_heavy_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_heavy_ctrg_F0;
		picture = "\A3_Revolucion\Characters_F_Revolucion\Vests\Data\UI\V_CarrierRigKBT_01_heavy_ctrg_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Vests\Data\CarrierRigKBT_01_CTRG_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Revolucion\Characters_F_Revolucion\Vests\Data\CarrierRigKBT_01_CTRG.rvmat"};
    };
    class V_lxWS_UN_Vest_F;
	/*class v_lxWS_VZ_Vest_F: V_lxWS_UN_Vest_F
	{
		author = $STR_A3_A_BranFlakes;
		displayName = "VZ Infantry Vest (Woodland Hex)";
		picture = "\A3_Revolucion\Characters_F_Revolucion\Vests\Data\UI\icon_V_PlateCarrierIA2_whex_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Revolucion\Characters_F_Revolucion\Vests\Data\equip_IA_Vest01_whex_CO.paa",
			"\A3_Revolucion\Characters_F_Revolucion\Vests\Data\GA_Carrier_GL_Rig_whex_CO.paa"
		};
	};
	class V_PlateCarrierIA1_dgtl;
	class Rev_V_PlateCarrierIA1_whex: V_PlateCarrierIA1_dgtl
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = "VZ Light Vest (Woodland Hex)";
		picture = "\A3_Revolucion\Characters_F_Revolucion\Vests\Data\UI\icon_V_PlateCarrierIA1_whex_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Vests\Data\equip_IA_Vest01_whex_CO.paa"};
	};
	class V_PlateCarrierIAGL_dgtl;
	class Rev_V_PlateCarrierIAGL_whex: V_PlateCarrierIAGL_dgtl
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = "VZ Infantry GL Vest (Woodland Hex)";
		picture = "\A3_Revolucion\Characters_F_Revolucion\Vests\Data\UI\icon_V_PlateCarrierIAGL_whex_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Revolucion\Characters_F_Revolucion\Vests\Data\equip_IA_Vest01_whex_CO.paa",
			"\A3_Revolucion\Characters_F_Revolucion\Vests\Data\GA_Carrier_GL_Rig_whex_CO.paa"
		};
	};*/
	class V_Press_F;
	class Rev_V_Press_bnp_F: V_Press_F
	{
		author = $STR_A3_A_BranFlakes;
		displayName = "Flak Vest [Policía]";
		picture = "\A3_Revolucion\Characters_F_Revolucion\Vests\Data\UI\rev_V_Press_bnp_F_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Revolucion\Characters_F_Revolucion\Vests\Data\FlakVest_bnp_CO.paa"};
	};
	/*class V_VZ_CarrierRig_F: V_PlateCarrier1_rgr 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = "Punisher Rig (Woodland Hex)";
		//picture = "\jam_cdf_core\data\icon_ca.paa";
        hiddenSelections[] = {camo}; 
		hiddenSelectionsTextures[] = { "\A3_Revolucion\Characters_F_Revolucion\Vests\data\VZ_6B43_CO.paa"};
		model = "\A3_Revolucion\Characters_F_Revolucion\Vests\v_bel_vest_6b43_empty.p3d"; 
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Revolucion\Characters_F_Revolucion\Vests\v_bel_vest_6b43_empty.p3d";
			hiddenSelections[] = {camo};
			hiddenSelectionsTextures[] = { "\A3_Revolucion\Characters_F_Revolucion\Vests\data\VZ_6B43_CO.paa"};
			containerClass = Supply60;
			mass = 25;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class V_VZ_CarrierRig_Lite_F: V_PlateCarrier1_rgr 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = "Punisher Lite Rig (Woodland Hex)";
		//picture = "\jam_cdf_core\data\icon_ca.paa";
        hiddenSelections[] = {camo,camo1}; 
		hiddenSelectionsTextures[] = 
		{
			"\A3_Revolucion\Characters_F_Revolucion\Vests\data\VZ_6B43_CO.paa",
			"\A3_Revolucion\Characters_F_Revolucion\Vests\data\VZ_Pouches_CO.paa"
		};
		model = "\A3_Revolucion\Characters_F_Revolucion\Vests\v_bel_vest_6b43_rifleman.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Revolucion\Characters_F_Revolucion\Vests\v_bel_vest_6b43_rifleman.p3d";
			hiddenSelections[] = {camo,camo1};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\VZ_6B43_CO.paa",
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\VZ_Pouches_CO.paa"
			};
			containerClass = Supply140;
			mass = 35;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class V_VZ_CarrierRig_MG_F : V_PlateCarrier1_rgr 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = "Punisher MG Rig (Woodland Hex)";
		//picture = "\jam_cdf_core\data\icon_ca.paa";
        hiddenSelections[] = {camo,camo1}; 
		hiddenSelectionsTextures[] = 
		{
			"\A3_Revolucion\Characters_F_Revolucion\Vests\data\VZ_6B43_CO.paa",
			"\A3_Revolucion\Characters_F_Revolucion\Vests\data\VZ_Pouches_CO.paa"
		};
		model = "\A3_Revolucion\Characters_F_Revolucion\Vests\v_bel_vest_6b43_autorifleman.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Revolucion\Characters_F_Revolucion\Vests\v_bel_vest_6b43_autorifleman.p3d";
			hiddenSelections[] = {camo,camo1};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\VZ_6B43_CO.paa",
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\VZ_Pouches_CO.paa"
			};
			containerClass = Supply160;
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class V_VZ_CarrierRig_GL_F: V_PlateCarrier1_rgr 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = "Punisher GL Rig (Woodland Hex)";
		//picture = "\jam_cdf_core\data\icon_ca.paa";
        hiddenSelections[] = {camo,camo1}; 
		hiddenSelectionsTextures[] = 
		{
			"\A3_Revolucion\Characters_F_Revolucion\Vests\data\VZ_6B43_CO.paa",
			"\A3_Revolucion\Characters_F_Revolucion\Vests\data\VZ_Pouches_CO.paa"
		};
		model = "\A3_Revolucion\Characters_F_Revolucion\Vests\v_bel_vest_6b43_rifleman_gl.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Revolucion\Characters_F_Revolucion\Vests\v_bel_vest_6b43_rifleman_gl.p3d";
			hiddenSelections[] = {camo,camo1};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\VZ_6B43_CO.paa",
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\VZ_Pouches_CO.paa"
			};
			containerClass = Supply140;
			mass = 35;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};*/
    class Rev_V_BlindajeRig_CQB_F: V_PlateCarrier1_rgr 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = "Blindaje Armor CQC Rig [ATACS FG]";
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_CQB_Hex_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Revolucion\Characters_F_Revolucion\Vests\data\OCarrierRig_FDB_CO.paa",
			"\A3_Revolucion\Characters_F_Revolucion\Vests\data\ORigLBV_FDB_CO.paa",
			"\A3_Revolucion\Characters_F_Revolucion\Vests\data\OCarrierRig_GL_FDB_CO.paa"
		};
		model = "\A3_Revolucion\Characters_F_Revolucion\Vests\V_ProtectorRig_CQB_F.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Revolucion\Characters_F_Revolucion\Vests\V_ProtectorRig_CQB_F.p3d";
			hiddenSelections[] = {camo,camo1,camo2};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\OCarrierRig_FDB_CO.paa",
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\ORigLBV_FDB_CO.paa",
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\OCarrierRig_GL_FDB_CO.paa"
			};
			containerClass = Supply140;
			mass = 35;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class Rev_V_BlindajeRig_Vest_F: V_PlateCarrier1_rgr 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = "Blindaje Armor Vest [ATACS FG]";
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_Hex_F_ca.paa";
        hiddenSelections[] = {camo,camo1};
		hiddenSelectionsTextures[] = 
		{
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\OCarrierRig_FDB_CO.paa",
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\ORigLBV_FDB_CO.paa"
		};
		model = "\A3_Revolucion\Characters_F_Revolucion\Vests\V_ProtectorRig_F.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Revolucion\Characters_F_Revolucion\Vests\V_ProtectorRig_F.p3d";
			hiddenSelections[] = {camo,camo1};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\OCarrierRig_FDB_CO.paa",
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\ORigLBV_FDB_CO.paa"
			};
			containerClass = Supply60;
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class Rev_V_BlindajeRig_GL_F: V_PlateCarrier1_rgr 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = "Blindaje Armor GL Rig [ATACS FG]";
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_CQB_Hex_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Revolucion\Characters_F_Revolucion\Vests\data\OCarrierRig_FDB_CO.paa",
			"\A3_Revolucion\Characters_F_Revolucion\Vests\data\ORigLBV_FDB_CO.paa",
			"\A3_Revolucion\Characters_F_Revolucion\Vests\data\OCarrierRig_GL_FDB_CO.paa"
		};
		model = "\A3_Revolucion\Characters_F_Revolucion\Vests\V_ProtectorRig_GL_F.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Revolucion\Characters_F_Revolucion\Vests\V_ProtectorRig_GL_F.p3d";
			hiddenSelections[] = {camo,camo1,camo2};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\OCarrierRig_FDB_CO.paa",
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\ORigLBV_FDB_CO.paa",
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\OCarrierRig_GL_FDB_CO.paa"
			};
			containerClass = Supply140;
			mass = 35;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class Rev_V_BlindajeRig_Lite_F: V_PlateCarrier1_rgr 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = "Blindaje Carrier Lite Rig [ATACS FG]";
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_Hex_F_ca.paa";
        hiddenSelections[] = {camo,camo1};
		hiddenSelectionsTextures[] = 
		{
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\OCarrierRig_FDB_CO.paa",
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\ORigLBV_FDB_CO.paa"
		};
		model = "\A3_Revolucion\Characters_F_Revolucion\Vests\V_ProtectorRig_Lite_F.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Revolucion\Characters_F_Revolucion\Vests\V_ProtectorRig_Lite_F.p3d";
			hiddenSelections[] = {camo,camo1};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\OCarrierRig_FDB_CO.paa",
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\ORigLBV_FDB_CO.paa"
			};
			containerClass = Supply140;
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class Rev_V_BlindajeRig_crew_F: V_PlateCarrier1_rgr 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = "Blindaje Carrier Crew Rig [ATACS FG]";
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_Hex_F_ca.paa";
        hiddenSelections[] = {camo,camo1};
		hiddenSelectionsTextures[] = 
		{
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\OCarrierRig_FDB_CO.paa",
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\ORigLBV_FDB_CO.paa"
		};
		model = "\A3_Revolucion\Characters_F_Revolucion\Vests\V_ProtectorRig_Crew_F_V1.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Revolucion\Characters_F_Revolucion\Vests\V_ProtectorRig_Crew_F_V1.p3d";
			hiddenSelections[] = {camo,camo1};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\OCarrierRig_FDB_CO.paa",
				"\A3_Revolucion\Characters_F_Revolucion\Vests\data\ORigLBV_FDB_CO.paa"
			};
			containerClass = Supply140;
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
};