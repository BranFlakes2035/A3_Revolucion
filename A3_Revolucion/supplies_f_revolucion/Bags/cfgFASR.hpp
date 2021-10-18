class B_Carryall_oli_FASR_Ammo_F: B_Carryall_oli
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
        mag_xx(30Rnd_580x42_Mag_F,10);
        mag_xx(100Rnd_580x42_Mag_F,2);
		mag_xx(RPG32_F,1);
        mag_xx(HandGrenade_Guer,2);
        mag_xx(1Rnd_HE_Grenade_shell,6);
	};
    class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_Carryall_oli_FASR_Eng_F: B_Carryall_oli
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,2);
        mag_xx(SatchelCharge_Remote_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};
class B_Carryall_oli_FASR_Exp_F: B_Carryall_oli
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,1);
        mag_xx(APERSBoundingMine_Range_Mag,2);
        mag_xx(SLAMDirectionalMine_Wire_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};
class B_Kitbag_rgr_FASR_Medic_F: B_Kitbag_rgr
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_Kitbag_rgr_FASR_AT_F: B_Kitbag_rgr
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(RPG32_F,3);
	};
};
class B_Kitbag_rgr_FASR_HAT_F: B_Kitbag_rgr
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(Vorona_HEAT,2);
	};
};

