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

// Zafir 7.62 mm (Black) + Flashlight
class LMG_Zafir_black_FL_F: LMG_Zafir_black_F
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

// Zafir 7.62 mm (Black) + ARCO + IR Pointer + Silencer Black
class LMG_Zafir_black_ARCO_IR_Snds_F: LMG_Zafir_black_F
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