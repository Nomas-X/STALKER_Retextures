class cfgWeapons
{
	class rhsusf_spc_patchless;
	class GVAR(V_spc_patchless): rhsusf_spc_patchless
	{
		author = "RHS, Rad";
		displayName = "SPC (Patchless) [Clearsky]";
		
        hiddenSelections[] = {
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\rhs_spc02_csky_co.paa),
			QPATHTOF(data\rhs_spc_gear1_csky_co.paa),
			QPATHTOF(data\rhs_spc_gear2_csky_co.paa),
			QPATHTOF(data\rhs_usmc_camelbak_csky_co.paa)
		};
	};

	class rhs_altyn_novisor_ess;
	class GVAR(H_altyn_novisor_ess_black): rhs_altyn_novisor_ess {
		author = "RHS, Rad";
		displayName = "Altyn (ESS) [Clearsky]";

		hiddenSelectionsTextures[] = { QPATHTOF(data\rhs_altyn_black_co.paa) };
	};

	class rhs_altyn_novisor;
	class GVAR(H_altyn_novisor_black): rhs_altyn_novisor {
		author = "RHS, Rad";
		displayName = "Altyn [Clearsky]";

		hiddenSelectionsTextures[] = { QPATHTOF(data\rhs_altyn_black_co.paa) };
	};

	class rhs_altyn_novisor_bala;
	class GVAR(H_altyn_novisor_bala_black): rhs_altyn_novisor_bala {
		author = "RHS, Rad";
		displayName = "Altyn (Balaclava) [Clearsky]";

		hiddenSelectionsTextures[] = { QPATHTOF(data\rhs_altyn_black_co.paa) };
	};

	class rhs_altyn_novisor_ess_bala;
	class GVAR(H_altyn_novisor_ess_bala_black): rhs_altyn_novisor_ess_bala {
		author = "RHS, Rad";
		displayName = "Altyn (ESS/Balaclava) [Clearsky]";

		hiddenSelectionsTextures[] = { QPATHTOF(data\rhs_altyn_black_co.paa) };
	};

	class rhs_altyn_visordown;
	class GVAR(H_altyn_visordown_black): rhs_altyn_visordown {
		author = "RHS, Rad";
		displayName = "Altyn (Visor Down) [Clearsky]";

		hiddenSelectionsTextures[] = { QPATHTOF(data\rhs_altyn_black_co.paa) };
	};

	class rhs_altyn;
	class GVAR(H_altyn_black): rhs_altyn {
		author = "RHS, Rad";
		displayName = "Altyn (Visor Up) [Clearsky]";

		hiddenSelectionsTextures[] = { QPATHTOF(data\rhs_altyn_black_co.paa) };
	};

	class rhs_altyn_bala;
	class GVAR(H_altyn_bala_black): rhs_altyn_bala {
		author = "RHS, Rad";
		displayName = "Altyn (Visor Up/Balaclava) [Clearsky]";

		hiddenSelectionsTextures[] = { QPATHTOF(data\rhs_altyn_black_co.paa) };
	};

};
