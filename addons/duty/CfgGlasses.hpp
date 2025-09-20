class CfgGlasses {

    // Vanilla
    class G_bandanna_blk;
	class GVAR(G_bandanna): G_bandanna_blk
	{
		displayName = "Bandana [Duty]";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\bandana_duty.paa)
		};
	};


    // RHS
	class rhs_balaclava;
	class rhs_balaclava1_olive;
	class GVAR(G_balaclava_1_BLK): rhs_balaclava {
		displayName = "Balaclava 1 [Duty]";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\rhs_bala2_duty_co.paa)
		};
		author = "RHS, Rad";
	};

	class GVAR(G_balaclava_2_BLK): rhs_balaclava1_olive {
		displayName = "Balaclava 2 [Duty]";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\rhs_bala1_duty_co.paa)
		};
		author = "RHS, Rad";
	};
};
