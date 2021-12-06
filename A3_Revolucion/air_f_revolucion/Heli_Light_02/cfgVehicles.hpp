class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter_Base_H;

    /* Bases */
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
        /* Weapons & Ammunition
        - Let's replace its 6.5 mm rounds with 7.62 mm rounds
        */
		magazines[] =
		{
			2000Rnd_762x51_Belt_T_Green,
			12Rnd_PG_missiles,
			168Rnd_CMFlare_Chaff_Magazine
		};

		class Components;

        /* Liveries */
		class TextureSources
		{
			class GreenHex
			{
				displayName = $STR_A3_TextureSources_GreenHex0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_ghex_CO.paa"};
				faction[] = {};
			};
		};

		class EventHandlers;
	};
	class Heli_Light_02_unarmed_base_F: Heli_Light_02_base_F
	{
		weapons[] = {/* This model doesn't have countermeasures */};
		magazines[] = {/* This model doesn't have countermeasures */};
	};
	class Heli_Light_02_dynamicLoadout_base_F: Heli_Light_02_base_F
	{
        /* Sensors & Components */
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
                    /*
                    - Let's replace its 6.5 mm rounds with 7.62 mm rounds
                    */
					class PylonLeft1
					{
						attachment = PylonWeapon_2000Rnd_762x51_Belt_T_Green;
						hardpoints[] =
						{
							O_SKYFIRE,
							DAGR,
							DAR,
							O_S5,
							O_ORCA_RIGHT_PYLON,
							20MM_TWIN_CANNON,
							SCALPEL_1RND_EJECTOR,
							B_ASRRAM_EJECTOR
						};
					};
					class PylonRight1
					{
						hardpoints[] =
						{
							O_SKYFIRE,
							DAGR,
							DAR,
							O_S5,
							20MM_TWIN_CANNON,
							SCALPEL_1RND_EJECTOR,
							B_ASRRAM_EJECTOR
						};
					};
				};
                class Presets
                {
                    class Default;
                    class AT;
                    class CAS;
                };
			};
		};
	};

    /* Factions */
	#include "cfgVenezuela.hpp"		// Venezuela
};