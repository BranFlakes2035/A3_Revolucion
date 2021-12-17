class B_AssaultPack_blk_PNB_AT_F: B_AssaultPack_blk
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportMagazines
	{
		mag_xx(RPG7_F,3);
	};
};
class B_AssaultPack_blk_PNB_EOD_F: B_AssaultPack_blk
{
    author = $STR_A3_A_Ravenholme;
	scope = protected;
    class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};