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
	class Aegis_V_CarrierRigKBT_01_recon_base_F;
	
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
	class Rev_V_CarrierRigKBT_01_recon_CTRG_trp_F: Aegis_V_CarrierRigKBT_01_recon_base_F
	{
		author = $STR_A3_A_Grave;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_recon_CTRG_G9_F0;
		picture = "\A3_Aegis\characters_f_aegis\Vests\Data\UI\Icon_CarrierRigKBT_01_recon_CTRGJ_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"A3_Revolucion\characters_f_revolucion\Vests\Data\CarrierRigKBT_01_CTRG9_CO.paa",
			""
		};
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
	class Aegis_V_CarrierRigKBT_01_recon_base_F;
	class Rev_V_CarrierRigKBT_01_recon_FDB_F: Aegis_V_CarrierRigKBT_01_recon_base_F
	{
		author = $STR_A3_A_Grave;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_recon_EAF_F0;
		picture = "\A3_Aegis\characters_f_aegis\Vests\Data\UI\Icon_CarrierRigKBT_01_recon_EAF_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"A3_Revolucion\Characters_F_Revolucion\vests\data\CarrierRigKBT_01_FDB_CO.paa",
			""
		};
	};
};