class CfgVehicles
{

	class rhs_sidor;
	class rhs_assault_umbts;
	class rhs_afghanka_boots_base;
	class rhs_vkpo_gloves_base;

	class GVAR(sidor): rhs_sidor {
		displayName = "Sidor [Duty]";
		hiddenSelections[] = {
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"z\stalker_retextures\addons\rhs\data\gearpack3_ranets_duty.paa"
		};
	};

	class GVAR(assault_umbts): rhs_assault_umbts {
		displayName="UMBTS Backpack [Duty]";
		hiddenSelections[] = {
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"z\stalker_retextures\addons\rhs\data\gearpack3_ranets_duty.paa"
		};
	};

	class GVAR(afghanka_boots): rhs_afghanka_boots_base {
		scope = 1;
		uniformClass="sr_rhs_uniform_afghanka_boots_duty";
		hiddenSelectionsTextures[]= {
			"z\stalker_retextures\addons\rhs\data\afghanka01_vest_co.paa",
			"z\stalker_retextures\addons\rhs\data\afghanka_pant_boots_co.paa"
		};
	};

	class GVAR(m88): rhs_afghanka_boots_base {
		scope = 1;
		model="\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]= {
			"z\stalker_retextures\addons\rhs\data\flora_m88_duty.paa"
		};
		uniformClass="sr_rhs_uniform_m88_duty";
	};

	class GVAR(vkpo_gloves): rhs_vkpo_gloves_base {
		scope = 1;
		uniformClass = "sr_rhs_uniform_vkpo_gloves_duty";
		hiddenSelectionsTextures[]= {
			"z\stalker_retextures\addons\rhs\data\vkpo_duty_vest.paa",
			"z\stalker_retextures\addons\rhs\data\vkpo_duty_pant.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};

	class GVAR(vkpo_gloves_worn): rhs_vkpo_gloves_base {
		scope = 1;
		uniformClass="sr_rhs_uniform_vkpo_gloves_worn_duty";
		hiddenSelectionsTextures[]= {
			"z\stalker_retextures\addons\rhs\data\vkpo_duty_vest.paa",
			"z\stalker_retextures\addons\rhs\data\vkpo_duty_pantw.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
};
