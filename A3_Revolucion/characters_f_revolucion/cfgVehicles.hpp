class CfgVehicles
{
    /* Definitions */
    #include "\A3_Aegis\macros_smokeShells.hpp"

    /* Bases */
    class SoldierGB;

    /* Factions */
    class I_Soldier_base_F: SoldierGB
    {
        class EventHandlers;
    };
    class B_Soldier_F;
    class I_soldier_F: I_Soldier_base_F{};
    class I_L_Soldier_Base_F: I_Soldier_base_F{};
    class O_G_Soldier_F;
    class I_Soldier_lite_F;
    class I_officer_F: I_Soldier_base_F{};
    class I_G_Soldier_base_F: SoldierGB
    {
        class EventHandlers;
    };
    
    #include "cfgBDF.hpp"      // Baracan Defence Force
    #include "cfgFRR.hpp"   // FRR
    #include "cfgCartels.hpp"  // Cartels
    #include "cfgFASR.hpp"   // FASR
    #include "cfgVenezuela.hpp" // CSAT Venezuela

    /* Uniforms */
    #include "cfgUniforms.hpp"
};