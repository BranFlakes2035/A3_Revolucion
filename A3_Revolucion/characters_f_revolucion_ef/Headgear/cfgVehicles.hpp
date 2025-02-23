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
	HEADGEAR_HOLDER(Rev_H_MCH_BasicNet_FDB_Marine_EF,$STR_A3_R_CfgWeapons_rev_Headgear_EF_H_MCH_BasicNet_fdbmarine0,EdSubcat_Helmets)
};