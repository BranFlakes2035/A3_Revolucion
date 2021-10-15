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

/* Handgun Presets */