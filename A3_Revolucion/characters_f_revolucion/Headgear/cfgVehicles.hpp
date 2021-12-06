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
    class Headgear_H_HelmetCrew_I;
    class Headgear_H_PilotHelmetHeli_O;
    class Headgear_H_PilotHelmetHeli_B;
    class Headgear_H_CrewHelmetHeli_O;
    class Headgear_H_CrewHelmetHeli_B;
	// Arma 3 Atlas
	HEADGEAR_HOLDER(H_HelmetB_green,$STR_A3_A_CfgWeapons_H_HelmetB_green0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecB_green,$STR_A3_A_CfgWeapons_H_HelmetSpecB_green0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetB_light_green,$STR_A3_A_CfgWeapons_H_HelmetB_light_green0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecB_light_green,$STR_A3_A_CfgWeapons_H_HelmetSpecB_light_green0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_O_Helmet_canvas_owcamo,$STR_A3_A_CfgWeapons_H_O_Helmet_canvas_owcamo0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_O_Helmet_canvas_semiarid,$STR_A3_A_CfgWeapons_H_O_Helmet_canvas_semiarid0,EdSubcat_Helmets)
	// Arma 3 Revolucion
	HEADGEAR_HOLDER(H_MK7_atacsfg_F,$STR_A3_R_CfgWeapons_H_mk7_atacsfg0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_Booniehat_atacs_F,"Booniehat [BDF]",EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_Booniehat_m81_F,"Booniehat (M81)",EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_milcap_atacs_F,"Military Cap [BDF]",EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_milcap_m81_F,"Military Cap (M81)",EdSubcat_Helmets)
	HEADGEAR_HOLDER(rev_H_HelmetSpecter_cover_whex_CO,$STR_A3_A_CfgWeapons_rev_H_HelmetSpecter_cover_whex_F0,EdSubcat_Helmets)
};