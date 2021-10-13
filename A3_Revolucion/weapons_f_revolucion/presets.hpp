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