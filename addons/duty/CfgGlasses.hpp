class CfgGlasses {

    class G_bandanna_blk;
	class GVAR(G_bandanna): G_bandanna_blk
	{
		displayName="Bandana [Duty]";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\z\stalker_retextures\addons\vanilla\data\bandana_duty.paa"
		};
	};

	class rhs_balaclava;
	class rhs_balaclava1_olive;

	class GVAR(G_balaclava_1_BLK): rhs_balaclava {
		displayName="Balaclava [Duty 1]";
		hiddenSelectionsTextures[] = {
			"z\stalker_retextures\addons\rhs\data\rhs_bala2_duty_co.paa"
		};
		author="RHS, Rad";
	};

	class GVAR(G_balaclava_2_BLK): rhs_balaclava1_olive {
		displayName="Balaclava [Duty 2]";
		hiddenSelectionsTextures[] = {
			"z\stalker_retextures\addons\rhs\data\rhs_bala1_duty_co.paa"
		};
		author="RHS, Rad";
	};
};
