class CfgVehicles
{

	class rhs_sidor;
	class rhs_assault_umbts;
	class rhs_afghanka_boots_base;
	class rhs_vkpo_gloves_base;

    // BACKPACKS
	class GVAR(B_sidor): rhs_sidor {
		displayName = "Sidor [Duty]";

		hiddenSelections[] = { "Camo" };
		hiddenSelectionsTextures[] = { QPATHTOF(data\gearpack3_ranets_duty.paa) };
	};

	class GVAR(B_assault_umbts): rhs_assault_umbts {
		displayName = "UMBTS Backpack [Duty]";

		hiddenSelections[] = { "Camo" };
		hiddenSelectionsTextures[] = { QPATHTOF(data\gearpack3_ranets_duty.paa) };
	};

    // UNIFORMS Weaponholders
	class GVAR(afghanka_boots): rhs_afghanka_boots_base {
		scope = 1;
		
        uniformClass = QGVAR(U_afghanka_boots);
		
        hiddenSelectionsTextures[]= {
			QPATHTOF(data\afghanka01_vest_co.paa),
			QPATHTOF(data\afghanka_pant_boots_co.paa)
		};
	};

	class GVAR(m88): rhs_afghanka_boots_base {
		scope = 1;
		
        uniformClass = QGVAR(U_m88);
		
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

	class GVAR(vkpo_gloves): rhs_vkpo_gloves_base {
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves);

		hiddenSelectionsTextures[]= {
			QPATHTOF(data\vkpo_duty_vest.paa),
			QPATHTOF(data\vkpo_duty_pant.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};

	class GVAR(vkpo_gloves_worn): rhs_vkpo_gloves_base {
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves_worn);

		hiddenSelectionsTextures[]= {
			QPATHTOF(data\vkpo_duty_vest.paa),
			QPATHTOF(data\vkpo_duty_pantw.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
};
