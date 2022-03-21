#define HEADGEAR_HOLDER(a,b,c) \
	class Headgear_##a##: Headgear_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_BranFlakes; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = ##c##; \
		vehicleClass = ItemsHeadgear; \
		model = "\A3\Weapons_F\DummyCap.p3d"; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

class CfgVehicles
{
	class Headgear_Base_F;

	// Arma 3 Revolucion
	HEADGEAR_HOLDER(H_MK7_atacsfg_F,$STR_A3_R_CfgWeapons_H_mk7_atacsfg0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_Booniehat_atacs_F,"Booniehat [BDF]",EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_m81_F,"Booniehat (M81)",EdSubcat_Hats)
	HEADGEAR_HOLDER(H_milcap_atacs_F,"Military Cap [BDF]",EdSubcat_Hats)
	HEADGEAR_HOLDER(H_milcap_m81_F,"Military Cap (M81)",EdSubcat_Hats)
	HEADGEAR_HOLDER(rev_H_HelmetSpecter_cover_whex_CO,$STR_A3_A_CfgWeapons_rev_H_HelmetSpecter_cover_whex_F0,EdSubcat_Helmets)



	////////////////////////////////////////////////////////
	/// CTRG OPSCOREs
	////////////////////////////////////////////////////////

	//// Dazzle #1 ////
	HEADGEAR_HOLDER(Rev_H_OPSCORE_01_dazzle_01,"CTRG Light Combat Helmet (Dark Tropic)",EdSubcat_Helmets)
	HEADGEAR_HOLDER(Rev_H_OPSCORE_02_dazzle_01,"CTRG Light Combat Helmet (Dark Tropic, Enhanced)",EdSubcat_Helmets)

	//// Dazzle #2 ////
	HEADGEAR_HOLDER(Rev_H_OPSCORE_01_dazzle_02,"CTRG Light Combat Helmet (Light Tropic)",EdSubcat_Helmets)
	HEADGEAR_HOLDER(Rev_H_OPSCORE_02_dazzle_02,"CTRG Light Combat Helmet (Light Tropic, Enhanced)",EdSubcat_Helmets)

	//// Dazzle #3 ////
	HEADGEAR_HOLDER(Rev_H_OPSCORE_01_dazzle_03,"CTRG Light Combat Helmet (Urban)",EdSubcat_Helmets)
	HEADGEAR_HOLDER(Rev_H_OPSCORE_02_dazzle_03,"CTRG Light Combat Helmet (Urban, Enhanced)",EdSubcat_Helmets)
};