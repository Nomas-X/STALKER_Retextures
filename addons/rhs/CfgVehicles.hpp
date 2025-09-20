class CfgVehicles
{
	//class rhs_afghanka_boots_spetsodezhda_base;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		// class assembleInfo;
	};
    
	class rhs_sidor;
	class sr_rhs_sidor_military: rhs_sidor
	{
		displayName="Sidor [Military]";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\gearpack3_ranets_mili.paa"
		};
	};
	class rhs_assault_umbts;
	class sr_rhs_assault_umbts_military: rhs_assault_umbts
	{
		displayName="UMBTS Backpack [Military]";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\gearpack3_ranets_mili.paa"
		};
	};
	class rhs_6sh122_gloves_v1_base;
	class sr_rhs_6sh122_gloves_military_01: rhs_6sh122_gloves_v1_base
	{
		scope = 1;
		uniformClass="sr_rhs_uniform_6sh122_gloves_military_01";
		model="\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\122_vest_mili_1.paa",
			"z\stalker_retextures\addons\rhs\data\122_pant_mili_1.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_6sh122_gloves_military_02: rhs_6sh122_gloves_v1_base
	{
		scope = 1;
		uniformClass="sr_rhs_uniform_6sh122_gloves_military_02";
		model="\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\122_vest_mili_2.paa",
			"z\stalker_retextures\addons\rhs\data\122_pant_mili_2.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_6sh122_gloves_military_03: rhs_6sh122_gloves_v1_base
	{
		scope = 1;
		uniformClass="sr_rhs_uniform_6sh122_gloves_military_03";
		model="\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\122_vest_mili_3.paa",
			"z\stalker_retextures\addons\rhs\data\122_pant_mili_3.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class rhs_afghanka_boots_base;
	class sr_rhs_m88_military_01: rhs_afghanka_boots_base
	{
		scope = 1;
		model="\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\flora_m88_mili_1.paa"
		};
		uniformClass="sr_rhs_uniform_m88_military_01";
	};
	class sr_rhs_m88_military_02: rhs_afghanka_boots_base
	{
		scope = 1;
		model="\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\flora_m88_mili_2.paa"
		};
		uniformClass="sr_rhs_uniform_m88_military_02";
	};
	class sr_rhs_m88_military_03: rhs_afghanka_boots_base
	{
		scope = 1;
		model="\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\flora_m88_mili_3.paa"
		};
		uniformClass="sr_rhs_uniform_m88_military_03";
	};
	class rhs_vkpo_gloves_base;
	class sr_rhs_vkpo_gloves_military_01: rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass="sr_rhs_uniform_vkpo_gloves_military_01";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\vkpo_mili_vest_1.paa",
			"z\stalker_retextures\addons\rhs\data\vkpo_mili_pant_1.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_vkpo_gloves_military_02: rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass="sr_rhs_uniform_vkpo_gloves_military_02";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\vkpo_mili_vest_2.paa",
			"z\stalker_retextures\addons\rhs\data\vkpo_mili_pant_2.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_vkpo_gloves_military_03: rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass="sr_rhs_uniform_vkpo_gloves_military_03";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\vkpo_mili_vest_3.paa",
			"z\stalker_retextures\addons\rhs\data\vkpo_mili_pant_3.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_vkpo_gloves_worn_military_01: rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass="sr_rhs_uniform_vkpo_gloves_worn_military_01";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\vkpo_mili_vest_1w.paa",
			"z\stalker_retextures\addons\rhs\data\vkpo_mili_pant_1w.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_vkpo_gloves_worn_military_02: rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass="sr_rhs_uniform_vkpo_gloves_worn_military_02";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\vkpo_mili_vest_2w.paa",
			"z\stalker_retextures\addons\rhs\data\vkpo_mili_pant_2w.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_vkpo_gloves_worn_military_03: rhs_vkpo_gloves_base
	{
		scope = 1;
		uniformClass="sr_rhs_uniform_vkpo_gloves_worn_military_03";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\vkpo_mili_vest_3w.paa",
			"z\stalker_retextures\addons\rhs\data\vkpo_mili_pant_3w.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
};
