class CfgVehicles
{
    
	class rhs_sidor;
	class GVAR(B_sidor): rhs_sidor
	{
		displayName = "Sidor [Military]";
		hiddenSelections[] = { "Camo" };
		hiddenSelectionsTextures[]= { QPATHTOF(data\gearpack3_ranets_mili.paa) };
	};

	class rhs_assault_umbts;
	class GVAR(B_assault_umbts): rhs_assault_umbts
	{
		displayName = "UMBTS Backpack [Military]";
		hiddenSelections[] = { "Camo" };
		hiddenSelectionsTextures[]= { QPATHTOF(data\gearpack3_ranets_mili.paa) };
	};
	class rhs_6sh122_gloves_v1_base;
	class GVAR(6sh122_gloves_1): rhs_6sh122_gloves_v1_base {
		scope = 1;
		uniformClass = QGVAR(U_6sh122_gloves_1);
		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\122_vest_mili_1.paa),
			QPATHTOF(data\122_pant_mili_1.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(6sh122_gloves_2): rhs_6sh122_gloves_v1_base
	{
		scope = 1;
		uniformClass = QGVAR(U_6sh122_gloves_2);
		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\122_vest_mili_2.paa),
			QPATHTOF(data\122_pant_mili_2.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(6sh122_gloves_3): rhs_6sh122_gloves_v1_base
	{
		scope = 1;
		uniformClass = QGVAR(U_6sh122_gloves_3);
		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\122_vest_mili_3.paa),
			QPATHTOF(data\122_pant_mili_3.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class rhs_afghanka_boots_base;
	class GVAR(m88_1): rhs_afghanka_boots_base
	{
		scope = 1;
		uniformClass = QGVAR(U_m88_1);

		model = "\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\flora_m88_mili_1.paa)
		};
	};
	class GVAR(m88_2): rhs_afghanka_boots_base
	{
		scope = 1;
		uniformClass = QGVAR(U_m88_2);
		
        model = "\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\flora_m88_mili_2.paa)
		};
	};
	class GVAR(m88_3): rhs_afghanka_boots_base
	{
		scope = 1;
		model = "\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\flora_m88_mili_3.paa)
		};
		uniformClass = QGVAR(U_m88_3);
	};
	class rhs_vkpo_gloves_base;
	class GVAR(vkpo_gloves_1): rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves_1);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_1.paa),
			QPATHTOF(data\vkpo_mili_pant_1.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(vkpo_gloves_2): rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves_2);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_2.paa),
			QPATHTOF(data\vkpo_mili_pant_2.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(vkpo_gloves_3): rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves_3);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_3.paa),
			QPATHTOF(data\vkpo_mili_pant_3.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(vkpo_gloves_worn_1): rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves_worn_1);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_1w.paa),
			QPATHTOF(data\vkpo_mili_pant_1w.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(vkpo_gloves_worn_2): rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves_worn_2);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_2w.paa),
			QPATHTOF(data\vkpo_mili_pant_2w.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(vkpo_gloves_worn_3): rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves_worn_3);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_3w.paa),
			QPATHTOF(data\vkpo_mili_pant_3w.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
};
