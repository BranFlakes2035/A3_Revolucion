class B_Carryall_oli_BDF_Ammo_F: B_Carryall_oli
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_stanag,6);
		mag_xx(200Rnd_556x45_Box_F,1);
		mag_xx(MRAWS_HEAT55_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(20rnd_762x51_Mag,2);
	};
    class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_Carryall_oli_BDF_Eng_F: B_Carryall_oli
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
class B_Carryall_oli_BDF_Exp_F: B_Carryall_oli
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
class B_Carryall_oli_BDF_AAA_F: B_Carryall_oli
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,3);
	};
};
class B_AssaultPack_khk_BDF_Medic_F: B_AssaultPack_khk
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_AssaultPack_khk_BDF_AA_F: B_AssaultPack_khk
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(Titan_AA,1);
	};
};
class B_AssaultPack_khk_BDF_AT_F: B_AssaultPack_khk
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(MRAWS_HEAT55_F,3);
	};
};
class B_AssaultPack_khk_BDF_AAR_F: B_AssaultPack_khk
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(200Rnd_556x45_Box_F,2);
		mag_xx(200Rnd_556x45_Box_Tracer_F,1);
	};
};
class B_AssaultPack_khk_BDF_ReconMedic_F: B_AssaultPack_khk
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		SMOKESHELLS_BAG_MEDIC;
	};
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,5);
	};
};
class B_AssaultPack_khk_BDF_ReconAT_F: B_AssaultPack_khk
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(NLAW_F,2);
	};
};
class B_AssaultPack_khk_BDF_ReconLAT_F: B_AssaultPack_khk
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(MRAWS_HEAT_F,2);
	};
};
class B_Kitbag_rgr_BDF_ReconExp_F: B_Kitbag_rgr
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(APERSBoundingMine_Range_Mag,3);
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
		mag_xx(SLAMDirectionalMine_Wire_Mag,2);
		mag_xx(DemoCharge_Remote_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};