/* Rifle Presets */

// AKU-12 5.45 mm + ACO AK
class arifle_AK12U_545_ACO_AK_F: arifle_AK12U_545_F
{
    author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn_AK_F;
		};
    };
};

// AK-12 5.45 mm + ACO AK + Flashlight
class arifle_AK12_545_ACO_AK_FL_F: arifle_AK12_545_F
{
    author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn_AK_F;
		};
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
    };
};

// AK-15 7.62 mm + ACO AK + Flashlight
class arifle_AK12_ACO_AK_FL_F: arifle_AK12_F
{
    author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn_AK_F;
		};
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
    };
};

// AK-15U 7.62 mm + ACO AK + Flashlight
class arifle_AK12U_ACO_AK_FL_F: arifle_AK12U_F
{
    author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn_AK_F;
		};
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
    };
};

// AK-15 GL 7.62 mm + ACO AK + Flashlight
class arifle_AK12_GL_ACO_AK_FL_F: arifle_AK12_GL_F
{
    author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn_AK_F;
		};
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
    };
};

// AK-15 GL 7.62 mm + ARCO AK + Flashlight
class arifle_AK12_GL_ARCO_AK_FL_F: arifle_AK12_GL_F
{
    author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ARCO_AK_blk_F;
		};
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
    };
};

// NCAR-15B 5.8 mm + ACO
class arifle_NCAR15B_ACO_grn_F: arifle_NCAR15B_F
{
    author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn;
		};
    };
};
// NCAR-15B 5.8 mm + ARCO + Silencer
class arifle_NCAR15B_ARCO_snds_F: arifle_NCAR15B_F
{
    author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ARCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_58_blk_F;
		};
    };
};
class arifle_NCAR15_ARCO_snds_F: arifle_NCAR15_F
{
    author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ARCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_58_blk_F;
		};
    };
};
class arifle_NCAR15_GL_ARCO_snds_F: arifle_NCAR15_GL_F
{
    author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ARCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_58_blk_F;
		};
    };
};
// NCAR-15 5.8 mm + ACO
class arifle_NCAR15_ACO_grn_F: arifle_NCAR15_F
{
    author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn;
		};
    };
};

// NCAR-15 5.8 mm + ACO + Flashlight
class arifle_NCAR15_ACO_grn_FL_F: arifle_NCAR15_F
{
    author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn;
		};
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
    };
};
class arifle_NCAR15_MG_DMS_snds_F: arifle_NCAR15_MG_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_DMS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_58_blk_F;
		};
    };
};
class arifle_NCAR15_MG_ARCO_blk_snds_F: arifle_NCAR15_MG_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ARCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_58_blk_F;
		};
    };
};

// NCAR-15 5.8 mm + MRCO + Flashlight
class arifle_NCAR15_MRCO_FL_F: arifle_NCAR15_F
{
    author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
    };
};

// NCAR-15 5.8 mm + RCO + Suppressor (GHex) + Laser + Bipod
class rev_arifle_NCAR15_RCO_IR_snds_ghex_bi_F: arifle_NCAR15_F
{
    author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Hamr;
		};
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_58_ghex_F;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_02_F_blk;
		};
    };
};

// NCAR-15 GL 5.8 mm + ACO + Flashlight
class arifle_NCAR15_GL_ACO_grn_FL_F: arifle_NCAR15_GL_F
{
    author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn;
		};
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
    };
};

// CAR-95 GL 5.8 mm + MRCO + Flashlight
class arifle_CTAR_GL_blk_MRCO_grn_FL_F: arifle_CTAR_GL_blk_F
{
    author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
    };
};

// SPAR-16 5.56mm (Black) + MRCO
class rev_arifle_SPAR_01_blk_MRCO_F : arifle_SPAR_01_blk_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
	};
};

// SPAR-16 5.56mm (Black) + ACO (Green)
class rev_arifle_SPAR_01_blk_ACO_grn_F : arifle_SPAR_01_blk_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn;
		};
	};
};

// SPAR-16 GL 5.56mm (Black) + MRCO
class rev_arifle_SPAR_01_GL_blk_ACO_grn_F : arifle_SPAR_01_GL_blk_F
{
	author = $STR_A3_A_AveryTheKitty;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn;
		};
	};
};

// L85A3 5.56 mm (Black) + ARCO + IR Pointer + Silencer
class arifle_SA80_blk_ARCO_IR_snds_F: arifle_SA80_blk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ARCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H;
		};
    };
};

// L85A3 GL 5.56 mm (Black) + ARCO + IR Pointer + Silencer
class arifle_SA80_GL_blk_ARCO_IR_snds_F: arifle_SA80_GL_blk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ARCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H;
		};
    };
};

// Fort 652 6.5 mm + ARCO + IR Pointer + Silencer
class arifle_Fort652_blk_ARCO_IR_snds_F: arifle_Fort652_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ARCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H;
		};
    };
};

//  Fort 652 GL 6.5 mm (Black) + ARCO + IR Pointer + Silencer
class arifle_Fort652_GL_blk_ARCO_IR_snds_F: arifle_Fort652_GL_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ARCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H;
		};
    };
};

// Velko R4 5.56 mm + ACO (red)
class rev_arifle_Velko_lxWS_ACO_F: arifle_Velko_lxWS
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO;
		};
    };
};

// Velko R4 5.56 mm + LRCO (black)
class rev_arifle_Velko_lxWS_LRCO_blk_F: arifle_Velko_lxWS
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_LRCO_blk_F;
		};
    };
};

// Velko R5 5.56 mm + ACO (red)
class rev_arifle_VelkoR5_lxWS_ACO_F: arifle_VelkoR5_lxWS
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO;
		};
    };
};

// Velko R5 5.56 mm + LRCO (black)
class rev_arifle_VelkoR5_lxWS_LRCO_blk_F: arifle_VelkoR5_lxWS
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_LRCO_blk_F;
		};
    };
};
// Velko R5 GL 5.56 mm + ACO (red)
class rev_arifle_VelkoR5_GL_lxWS_ACO_F: arifle_VelkoR5_GL_lxWS
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO;
		};
    };
};

// Velko R5 GL 5.56 mm + LRCO (black)
class rev_arifle_VelkoR5_GL_lxWS_LRCO_blk_F: arifle_VelkoR5_GL_lxWS
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_LRCO_blk_F;
		};
    };
};


// SLR 7.62 mm + DMS
class rev_arifle_SLR_V_lxWS_DMS_F: arifle_SLR_V_lxWS
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_DMS;
		};
    };
};

// SLR GL 7.62 mm + LRCO (Black)
class rev_arifle_SLR_V_GL_lxWS_LRCO_blk_F: arifle_SLR_V_GL_lxWS
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_LRCO_blk_F;
		};
    };
};

// Galat ARM 7.62 mm + MRCO
class rev_arifle_Galat_lxWS_MRCO_F: arifle_Galat_lxWS
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
    };
};

// SLR 7.62 mm (Wood) + Kahlia (Old)
class rev_arifle_SLR_lxWS_KHS_old_F: arifle_SLR_lxWS
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_KHS_old;
		};
    };
};

/* LMG Presets */

// RPK-12 7.62 mm + ACO AK + Flashlight
class arifle_RPK12_ACO_AK_FL_F: arifle_RPK12_F
{
    author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn_AK_F;
		};
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
    };
};

// CAR-95-1 (black) 5.8 mm + ACO (Green) + Flashlight
class arifle_CTARS_blk_ACO_grn_FL_F: arifle_CTARS_blk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn;
		};
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
    };
};
class arifle_CTARS_blk_ARCO_snds_F: arifle_CTARS_blk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ACO_grn;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_58_blk_F;
		};
    };
};

// NCAR-15-1 5.8 mm + DMS (Old) - Actually used as a DMR variant
class arifle_NCAR15_MG_DMS_Old_F: arifle_NCAR15_MG_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_DMS_weathered_F;
		};
    };
};

// Type 115 6.5 mm + ARCO (Black) + IR Pointer + Suppressor
class Rev_arifle_ARX_ARCO_Laser_Snds_blk_F: arifle_ARX_blk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ARCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H;
		};
    };
};

// Type 115 6.5 mm + MRCO + IR Pointer + Suppressor
class Rev_arifle_ARX_MRCO_Laser_Snds_blk_F: arifle_ARX_blk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H;
		};
    };
};

// Katiba 6.5 mm GL + ARCO (Black) + IR Pointer + Suppressor
class Rev_arifle_Katiba_GL_ARCO_Laser_Snds_blk_F: arifle_Katiba_GL_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ARCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_H;
		};
    };
};

// TNG-7 7.62 mm (Black) + Flashlight
class LMG_Negev_FL_F: Atlas_LMG_Negev_black_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
    };
};

// TNG-7 7.62 mm (Black) + ARCO + IR Pointer + Silencer Black
class LMG_Negev_ARCO_IR_Snds_F: Atlas_LMG_Negev_black_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ARCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
    };
};

// SA-77 Compact 7.62 mm (Black) + LRCO
class LMG_S77_Compact_lxWS_LRCO_FL_F: LMG_S77_Compact_lxWS
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_LRCO_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
    };
};


/* Sniper Rifle/DMR Presets */

// MK-1 EMR 7.62 mm + ARCO + Flashlight + Bipod [NATO] (Black)
class srifle_DMR_03_ARCO_FL_BI_F: srifle_DMR_03_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_ARCO_blk_F;
		};
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
    };
};

// MK17 7.62 mm (Black) + DMS + IR Pointer + Bipod [NATO] (Black) + Silencer
class arifle_SCAR_black_DMS_IR_BI_Snds_F: arifle_SCAR_black_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_DMS;
		};
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_B;
		};
    };
};

// SPAR-17 7.62 mm (Black) + MRCO + Bipod [NATO] Black
class Rev_arifle_SPAR_03_blk_MRCO_BI_F: arifle_SPAR_03_blk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
    };
};

// Cyrus 9.3 mm (Black) + Kahlia + IR Pointer + Bipod + Silencer
class Rev_srifle_DMR_05_Kahlia_IR_Snds_BI_F: srifle_DMR_05_blk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_KHS_blk;
		};
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_02_F_blk;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_93mmg;
		};
    };
};
/* Handgun Presets */
class Rev_hgun_P07_blk_snds_F: hgun_P07_blk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_L;
		};
	};
};

class Rev_hgun_P07_blk_fl_snds_F: hgun_P07_blk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_L;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight_pistol;
		};
	};
};
/* CTRG */
/* SPAR-16S RCO */
class arifle_spar_02_blk_F;
class arifle_spar_02_HAMR_blk_F: arifle_spar_02_blk_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Hamr;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
    };
};
/* SCAR-L RCO */
class rev_arifle_scar_L_grip_hamr_black_F: arifle_scar_L_grip_black_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Hamr;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
/* SCAR-H GL RCO */
class rev_arifle_scar_GL_hamr_black_F: arifle_SCAR_GL_black_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Hamr;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
/* SPAR-17 MOS */
class Rev_arifle_SPAR_03_blk_MOS_F: arifle_SPAR_03_blk_F
{
	author = $STR_A3_A_Ravenholme;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_SOS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
    };
};
class arifle_SPAR_01_blk_rco_F: arifle_SPAR_01_blk_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Hamr;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};
/* SCAR-L GL RCO Supressor */
class rev_arifle_scar_L_GL_hamr_black_F: arifle_SCAR_L_GL_black_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Hamr;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};

/* SCAR-L Short RCO Laser */
class rev_arifle_SCAR_L_short_hamr_black_F: arifle_SCAR_L_short_black_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Hamr;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
	};
};

/* G17 (Black) + Suppressor */
class rev_hgun_G17_blk_snds_F: hgun_G17_black_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_L;
		};
	};
};

class SMG_03C_TR_black;
class SMG_03C_TR_black_ACO_snds: SMG_03C_TR_black
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Aco_smg;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_570;
		};
	};
};
class Rev_arifle_SCAR_blk_arco_snds_F: arifle_SCAR_black_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Arco_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_B;
		};
    };
};
class Rev_arifle_SCAR_blk_erco_snds_F: arifle_SCAR_black_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Erco_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_B;
		};
    };
};
class Rev_arifle_SPAR_03_blk_RCO_bpd_F: arifle_SPAR_03_blk_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Hamr;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_B;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_blk;
		};
    };
};
class Rev_arifle_SPAR_03_blk_RCO_F: arifle_SPAR_03_blk_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Hamr;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_B;
		};
    };
};
class arifle_SPAR_01_blk_holo_F: arifle_SPAR_01_blk_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Holosight_blk_F;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
class rev_arifle_Velko_lxWS_mrco_snds_F: arifle_Velko_lxWS
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
        class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_MRCO;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
    };
};
class arifle_SPAR_01_khk_F;
class arifle_SPAR_01_khk_RCO_snds_F: arifle_SPAR_01_khk_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Hamr;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
class rev_arifle_SPAR_01_GL_blk_Hamr_snds_F : arifle_SPAR_01_GL_blk_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Hamr;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
	};
};
class SMG_04_khk_F;
class rev_SMG_04_khk_holo_snds_F : SMG_04_khk_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_Holosight_smg_khk_F;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_460;
		};
	};
};
class hgun_ACPC2_black_F;
class hgun_ACPC2_black_snds_F: hgun_ACPC2_black_F
{
	author = $STR_A3_A_BranFlakes;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_acp;
		};
	};
};