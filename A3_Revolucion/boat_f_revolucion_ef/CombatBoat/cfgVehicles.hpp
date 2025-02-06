class CfgVehicles
{
	/* Arma 3 Bases */
	class Boat_F;

	/* Expeditionary Forces Bases */
	class EF_CombatBoat_Base: Boat_F
    {
        /* Liveries */
		class TextureSources
		{
			class FDB
			{
				displayName = $STR_A3_R_CfgFactionClasses_BLU_BDF_F0;
				author = $STR_A3_A_Branflakes;
				textures[] =
				{
        			"\A3_Revolucion\boat_f_revolucion_ef\CombatBoat\data\combatboat_hull_1_fdb_co.paa",
        			"\A3_Revolucion\boat_f_revolucion_ef\CombatBoat\data\combatboat_hull_2_fdb_co.paa",
        			"ef\ef_combatboat_t\data\combatboat_hull_3_MJTF_co.paa",
        			"\A3_Revolucion\boat_f_revolucion_ef\CombatBoat\data\combatboat_armor_1_fdb_co.paa",
        			"\A3_Revolucion\boat_f_revolucion_ef\CombatBoat\data\combatboat_hmg_1_fdb_co.paa",
        			"\A3_Revolucion\boat_f_revolucion_ef\CombatBoat\data\combatboat_atgm_1_fdb_co.paa",
        			"#(rgb,1024,1024,1)ui(EF_GPSScreen,EF_GPSScreen)"
    			};
				factions[] = {};
			};
		};
	};
	class EF_CombatBoat_HMG_West_Base;
	class EF_CombatBoat_Unarmed_Base;
    /* Factions */
    #include "cfgFDB.hpp"       // FDB
};