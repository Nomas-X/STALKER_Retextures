class CfgVehicles
{

	class rhs_sidor;
	class GVAR(B_sidor_olive): rhs_sidor
	{
		displayName = "[Military] Sidor";
		hiddenSelections[] = { "Camo" };
		hiddenSelectionsTextures[]= { QPATHTOF(data\gearpack3_ranets_mili.paa) };
	};

	class rhs_assault_umbts;
	class GVAR(B_assault_umbts_olive): rhs_assault_umbts
	{
		displayName = "[Military] UMBTS Backpack";
		hiddenSelections[] = { "Camo" };
		hiddenSelectionsTextures[]= { QPATHTOF(data\gearpack3_ranets_mili.paa) };
	};
	class rhs_assault_umbts_engineer_empty;
	class GVAR(B_assault_umbts_engineer_empty_olive): rhs_assault_umbts_engineer_empty {
		displayName = "[Military] UMBTS Backpack (Engineer)";

		hiddenSelections[] = { "Camo" };
		hiddenSelectionsTextures[] = { QPATHTOF(data\gearpack3_ranets_mili.paa) };
	};
	class rhs_6sh122_gloves_v1_base;
	class GVAR(6sh122_gloves_surpat_green): rhs_6sh122_gloves_v1_base {
		scope = 1;
		uniformClass = QGVAR(U_6sh122_gloves_surpat_green);
		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\122_vest_mili_1.paa),
			QPATHTOF(data\122_pant_mili_1.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(6sh122_gloves_emr_green): rhs_6sh122_gloves_v1_base
	{
		scope = 1;
		uniformClass = QGVAR(U_6sh122_gloves_emr_green);
		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\122_vest_mili_2.paa),
			QPATHTOF(data\122_pant_mili_2.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(6sh122_gloves_ttsko_olive): rhs_6sh122_gloves_v1_base
	{
		scope = 1;
		uniformClass = QGVAR(U_6sh122_gloves_ttsko_olive);
		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\122_vest_mili_3.paa),
			QPATHTOF(data\122_pant_mili_3.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class rhs_afghanka_boots_base;
	class GVAR(model2010_surpat_green): rhs_afghanka_boots_base
	{
		scope = 1;
		uniformClass = QGVAR(U_model2010_surpat_green);

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
	class GVAR(model2010_emr_green): rhs_afghanka_boots_base
	{
		scope = 1;
		uniformClass = QGVAR(U_model2010_emr_green);
		
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
	class GVAR(model2010_ttsko_olive): rhs_afghanka_boots_base
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
		uniformClass = QGVAR(U_model2010_ttsko_olive);
	};
	class rhs_vkpo_gloves_base;
	class GVAR(vkpo_gloves_surpat_green): rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves_surpat_green);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_1.paa),
			QPATHTOF(data\vkpo_mili_pant_1.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(vkpo_gloves_emr_green): rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves_emr_green);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_2.paa),
			QPATHTOF(data\vkpo_mili_pant_2.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(vkpo_gloves_ttsko_olive): rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves_ttsko_olive);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_3.paa),
			QPATHTOF(data\vkpo_mili_pant_3.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(vkpo_gloves_worn_surpat_green): rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves_worn_surpat_green);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_1w.paa),
			QPATHTOF(data\vkpo_mili_pant_1w.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(vkpo_gloves_worn_emr_green): rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves_worn_emr_green);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_2w.paa),
			QPATHTOF(data\vkpo_mili_pant_2w.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(vkpo_gloves_worn_ttsko_olive): rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_gloves_worn_ttsko_olive);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_3w.paa),
			QPATHTOF(data\vkpo_mili_pant_3w.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};

	class rhs_vkpo_base;
	class GVAR(vkpo_surpat_green): rhs_vkpo_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_surpat_green);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_1.paa),
			QPATHTOF(data\vkpo_mili_pant_1.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(vkpo_emr_green): rhs_vkpo_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_emr_green);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_2.paa),
			QPATHTOF(data\vkpo_mili_pant_2.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(vkpo_ttsko_olive): rhs_vkpo_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_ttsko_olive);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_3.paa),
			QPATHTOF(data\vkpo_mili_pant_3.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(vkpo_worn_surpat_green): rhs_vkpo_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_worn_surpat_green);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_1w.paa),
			QPATHTOF(data\vkpo_mili_pant_1w.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(vkpo_worn_emr_green): rhs_vkpo_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_worn_emr_green);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_2w.paa),
			QPATHTOF(data\vkpo_mili_pant_2w.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class GVAR(vkpo_worn_ttsko_olive): rhs_vkpo_base
	{
		scope = 1;
		uniformClass = QGVAR(U_vkpo_worn_ttsko_olive);
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\vkpo_mili_vest_3w.paa),
			QPATHTOF(data\vkpo_mili_pant_3w.paa),
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
};
