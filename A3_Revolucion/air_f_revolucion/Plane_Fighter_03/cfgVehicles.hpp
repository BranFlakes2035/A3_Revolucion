class CfgVehicles
{
    /* Inheritance Tree */
	class Plane_Base_F;

    /* Bases */
	class Ejection_Seat_Plane_Fighter_03_base_F;
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
        /* Liveries */
		class TextureSources
		{
			class BDF
			{
				displayName = "FDB";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_revolucion\Air_F_revolucion\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_FDB_CO.paa",
        			"\A3_revolucion\Air_F_revolucion\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_FDB_CO.paa",
				};
				factions[] = {};
			};
		};

        class Components;
		class EjectionSystem;
	};
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
    {
        class AnimationSources;

        /* Sensors & Components */
		class Components: Components
		{
			class TransportPylonsComponent
			{
                class Pylons
				{
					class Pylons1;
					class Pylons2;
					class Pylons3;
					class Pylons4;
					class Pylons5;
					class Pylons6;
					class Pylons7;
				};
				class Presets
				{
					class Default;
					class AA;
					class AT;
					class CAS;
					class Cluster;
				};
			};
		};
	};
	#include "cfgBDF.hpp"     // BDF
};