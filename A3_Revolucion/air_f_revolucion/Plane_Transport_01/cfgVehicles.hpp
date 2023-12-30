class CfgVehicles
{
    /* Inheritance Tree */
    #include "\A3_Aegis\cfgPlanes.hpp"

    /* Bases */
	class Plane_Transport_01_base_F: Plane_Base_F
	{
		class TextureSources
		{
			class BDF
			{
				displayName = "BDF";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_revolucion\Air_F_revolucion\Plane_Transport_01\Data\Plane_Transport_01_body_BDF_CO.paa",
					"\A3_revolucion\Air_F_revolucion\Plane_Transport_01\Data\Plane_Transport_01_wings_BDF_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa",
					"\A3_revolucion\Air_F_revolucion\Plane_Transport_01\Data\Plane_Transport_01_decal_BDF_CO.paa"
				};
				factions[] = {};
			};
		};
		animationList[] = {};
		textureList[] =
		{
			BDF,1,
		};
	};

    /* Factions */
    #include "cfgBDF.hpp"    // BDF
};