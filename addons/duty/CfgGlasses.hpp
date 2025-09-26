class CfgGlasses {

    // Vanilla
    class G_bandanna_blk;
	class GVAR(G_bandanna_black): G_bandanna_blk
	{
		displayName = "[Duty] Bandana";
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
	class GVAR(G_balaclava_1_black): rhs_balaclava {
		displayName = "[Duty] Balaclava (Single)";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\rhs_bala2_duty_co.paa)
		};
		author = "RHS, Rad";
	};

	class GVAR(G_balaclava_2_black): rhs_balaclava1_olive {
		displayName = "[Duty] Balaclava (Double)";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\rhs_bala1_duty_co.paa)
		};
		author = "RHS, Rad";
	};
};
