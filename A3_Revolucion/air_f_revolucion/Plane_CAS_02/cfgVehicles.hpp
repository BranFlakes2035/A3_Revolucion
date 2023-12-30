class CfgVehicles
{
    /* Inheritance Tree */
    class Plane;
    class Plane_Base_F: Plane
    {
        class Components;
    };

    /* Bases */
	class Ejection_Seat_Plane_CAS_02_base_F;
	class Plane_CAS_02_base_F: Plane_Base_F
	{
        /* Sensors & Components */
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
                    {
                        /*
                        - Let's equip the To-199 Neophron with passive radar capability
                        - Source: https://en.wikipedia.org/wiki/Yakovlev_Yak-130#Variants
                        */
                    };
				};
			};
		};
        
        /* Liveries */
		class TextureSources
		{
			class VZHex
			{
				displayName = $STR_A3_R_TextureSources_VZHex0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Revolucion\air_f_revolucion\Plane_CAS_02\Data\Rev_Fighter02_ext01_VZ_CO.paa",
					"\A3_Revolucion\air_f_revolucion\Plane_CAS_02\Data\Rev_Fighter02_ext02_VZ_CO.paa"
				};
				factions[] = {};
			};
		};

		class EjectionSystem;
	};
	class Plane_CAS_02_dynamicLoadout_base_F: Plane_CAS_02_base_F{};

	/* Factions */
	#include "cfgVenezuela.hpp"     // Venezuela
};