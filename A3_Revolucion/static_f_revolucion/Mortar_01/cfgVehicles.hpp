class CfgVehicles
{
	/* Inheritance Tree */
	class StaticMortar;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo{};
	};

    /* Bases */
	class I_Mortar_01_F;
	class B_W_Mortar_01_F;

	/* Factions */
	#include "cfgBDF.hpp"		// Baracan Defence Force
    #include "cfgFASR.hpp"		// FASR
    #include "cfgVenezuela.hpp" //Venezuela
};