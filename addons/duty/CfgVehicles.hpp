class CfgVehicles
{

	class rhs_sidor;
	class rhs_assault_umbts;
	class rhs_assault_umbts_engineer_empty;
	class rhs_afghanka_boots_base;
	class rhs_vkpo_gloves_base;
	class rhs_vkpo_base;

    // BACKPACKS
	class GVAR(B_sidor_black): rhs_sidor {
		displayName = "[Duty] Sidor";

		hiddenSelections[] = { "Camo" };
		hiddenSelectionsTextures[] = { QPATHTOF(data\gearpack3_ranets_duty.paa) };
	};

	class GVAR(B_assault_umbts_black): rhs_assault_umbts {
		displayName = "[Duty] UMBTS Backpack";

		hiddenSelections[] = { "Camo" };
		hiddenSelectionsTextures[] = { QPATHTOF(data\gearpack3_ranets_duty.paa) };
	};

	class GVAR(B_assault_umbts_engineer_empty_black): rhs_assault_umbts_engineer_empty {
		displayName = "[Duty] UMBTS Backpack (Engineer)";

		hiddenSelections[] = { "Camo" };
		hiddenSelectionsTextures[] = { QPATHTOF(data\gearpack3_ranets_duty.paa) };
	};

    // UNIFORMS Weaponholders
	class GVAR(afghanka_boots_black): rhs_afghanka_boots_base {
		scope = 1;
		
        uniformClass = QGVAR(U_afghanka_boots_black);
		
        hiddenSelectionsTextures[]= {
			QPATHTOF(data\afghanka01_vest_co.paa),
			QPATHTOF(data\afghanka_pant_boots_co.paa)
		};
	};

	class GVAR(model2010_black): rhs_afghanka_boots_base {
		scope = 1;
		
        uniformClass = QGVAR(U_model2010_black);
		
        model = "\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]= {
			QPATHTOF(data\flora_m88_duty.paa)
		};
	};

	class GVAR(vkpo_gloves_black): rhs_vkpo_gloves_base {
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves_black);

		hiddenSelectionsTextures[]= {
			QPATHTOF(data\vkpo_duty_vest.paa),
			QPATHTOF(data\vkpo_duty_pant.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};

	class GVAR(vkpo_gloves_worn_black): rhs_vkpo_gloves_base {
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves_worn_black);

		hiddenSelectionsTextures[]= {
			QPATHTOF(data\vkpo_duty_vest.paa),
			QPATHTOF(data\vkpo_duty_pantw.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};

	class GVAR(vkpo_black): rhs_vkpo_base {
		scope = 1;
		uniformClass = QGVAR(U_vkpo_black);

		hiddenSelectionsTextures[]= {
			QPATHTOF(data\vkpo_duty_vest.paa),
			QPATHTOF(data\vkpo_duty_pant.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};

	class GVAR(vkpo_worn_black): rhs_vkpo_base {
		scope = 1;
		uniformClass = QGVAR(U_vkpo_worn_black);

		hiddenSelectionsTextures[]= {
			QPATHTOF(data\vkpo_duty_vest.paa),
			QPATHTOF(data\vkpo_duty_pantw.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
};
