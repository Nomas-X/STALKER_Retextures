class CfgPatches
{
	class rhs
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgGlasses
{
	class rhs_balaclava;
	class rhs_balaclava1_olive;
	class sr_rhs_balaclava1_black: rhs_balaclava1_olive
	{
		displayName="[Duty] Balaclava (Double)";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\rhs_bala1_duty_co.paa"
		};
		author="RHS, Rad";
	};
	class sr_rhs_balaclava_black: rhs_balaclava
	{
		displayName="[Duty] Balaclava (Single)";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\rhs_bala2_duty_co.paa"
		};
		author="RHS, Rad";
	};
};
class CfgVehicles
{
	class rhs_afghanka_boots_spetsodezhda_base;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class rhs_sidor;
	class sr_rhs_sidor_duty: rhs_sidor
	{
		displayName="Sidor [Duty]";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhs\data\gearpack3_ranets_duty.paa"
		};
	};
	class sr_rhs_sidor_military: rhs_sidor
	{
		displayName="Sidor [Military]";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhs\data\gearpack3_ranets_mili.paa"
		};
	};
	class rhs_assault_umbts;
	class sr_rhs_assault_umbts_duty: rhs_assault_umbts
	{
		displayName="UMBTS Backpack [Duty]";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhs\data\gearpack3_ranets_duty.paa"
		};
	};
	class sr_rhs_assault_umbts_military: rhs_assault_umbts
	{
		displayName="UMBTS Backpack [Military]";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhs\data\gearpack3_ranets_mili.paa"
		};
	};
	class rhs_6sh122_gloves_v1_base;
	class sr_rhs_6sh122_gloves_military_01: rhs_6sh122_gloves_v1_base
	{
		scope=1;
		uniformClass="sr_rhs_uniform_6sh122_gloves_military_01";
		model="\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\122_vest_mili_1.paa",
			"rhs\data\122_pant_mili_1.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_6sh122_gloves_military_02: rhs_6sh122_gloves_v1_base
	{
		scope=1;
		uniformClass="sr_rhs_uniform_6sh122_gloves_military_02";
		model="\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\122_vest_mili_2.paa",
			"rhs\data\122_pant_mili_2.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_6sh122_gloves_military_03: rhs_6sh122_gloves_v1_base
	{
		scope=1;
		uniformClass="sr_rhs_uniform_6sh122_gloves_military_03";
		model="\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\122_vest_mili_3.paa",
			"rhs\data\122_pant_mili_3.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class rhs_afghanka_boots_base;
	class sr_rhs_afghanka_boots_duty: rhs_afghanka_boots_base
	{
		scope=1;
		uniformClass="sr_rhs_uniform_afghanka_boots_duty";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\afghanka01_vest_co.paa",
			"rhs\data\afghanka_pant_boots_co.paa"
		};
	};
	class sr_rhs_m88_duty: rhs_afghanka_boots_base
	{
		scope=1;
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
			"rhs\data\flora_m88_duty.paa"
		};
		uniformClass="sr_rhs_uniform_m88_duty";
	};
	class sr_rhs_m88_military_01: rhs_afghanka_boots_base
	{
		scope=1;
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
			"rhs\data\flora_m88_mili_1.paa"
		};
		uniformClass="sr_rhs_uniform_m88_military_01";
	};
	class sr_rhs_m88_military_02: rhs_afghanka_boots_base
	{
		scope=1;
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
			"rhs\data\flora_m88_mili_2.paa"
		};
		uniformClass="sr_rhs_uniform_m88_military_02";
	};
	class sr_rhs_m88_military_03: rhs_afghanka_boots_base
	{
		scope=1;
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
			"rhs\data\flora_m88_mili_3.paa"
		};
		uniformClass="sr_rhs_uniform_m88_military_03";
	};
	class rhs_vkpo_gloves_base;
	class sr_rhs_vkpo_gloves_duty: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sr_rhs_uniform_vkpo_gloves_duty";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\vkpo_duty_vest.paa",
			"rhs\data\vkpo_duty_pant.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_vkpo_gloves_military_01: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sr_rhs_uniform_vkpo_gloves_military_01";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\vkpo_mili_vest_1.paa",
			"rhs\data\vkpo_mili_pant_1.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_vkpo_gloves_military_02: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sr_rhs_uniform_vkpo_gloves_military_02";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\vkpo_mili_vest_2.paa",
			"rhs\data\vkpo_mili_pant_2.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_vkpo_gloves_military_03: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sr_rhs_uniform_vkpo_gloves_military_03";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\vkpo_mili_vest_3.paa",
			"rhs\data\vkpo_mili_pant_3.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_vkpo_gloves_worn_duty: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sr_rhs_uniform_vkpo_gloves_worn_duty";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\vkpo_duty_vest.paa",
			"rhs\data\vkpo_duty_pantw.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_vkpo_gloves_worn_military_01: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sr_rhs_uniform_vkpo_gloves_worn_military_01";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\vkpo_mili_vest_1w.paa",
			"rhs\data\vkpo_mili_pant_1w.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_vkpo_gloves_worn_military_02: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sr_rhs_uniform_vkpo_gloves_worn_military_02";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\vkpo_mili_vest_2w.paa",
			"rhs\data\vkpo_mili_pant_2w.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sr_rhs_vkpo_gloves_worn_military_03: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sr_rhs_uniform_vkpo_gloves_worn_military_03";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\vkpo_mili_vest_3w.paa",
			"rhs\data\vkpo_mili_pant_3w.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class HeadgearItem;
	class rhs_6b23_vydra_3m;
	class rhs_vydra_3m;
	class rhs_6sh92_digi;
	class rhs_6b23_digi_6sh92_vog;
	class rhs_uniform_afghanka_boots_spetsodezhda;
	class rhs_uniform_flora_patchless;
	class rhs_uniform_vkpo_gloves;
	class sr_rhs_uniform_afghanka_boots_duty: rhs_uniform_afghanka_boots_spetsodezhda
	{
		displayName="Afghanka [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_afghanka_boots_duty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sr_rhs_uniform_m88_duty: rhs_uniform_flora_patchless
	{
		displayName="M88 uniform [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_m88_duty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sr_rhs_uniform_m88_military_01: rhs_uniform_flora_patchless
	{
		displayName="M88 uniform v1 [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_m88_military_01";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sr_rhs_uniform_m88_military_02: rhs_uniform_flora_patchless
	{
		displayName="M88 uniform v2 [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_m88_military_02";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sr_rhs_uniform_m88_military_03: rhs_uniform_flora_patchless
	{
		displayName="M88 uniform v3 [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_m88_military_03";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sr_rhs_uniform_vkpo_gloves_duty: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves) [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_vkpo_gloves_duty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sr_rhs_uniform_vkpo_gloves_military_01: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves, V1) [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_vkpo_gloves_military_01";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sr_rhs_uniform_vkpo_gloves_military_02: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves, V2) [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_vkpo_gloves_military_02";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sr_rhs_uniform_vkpo_gloves_military_03: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves, V3) [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_vkpo_gloves_military_03";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sr_rhs_uniform_vkpo_gloves_worn_duty: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves) worn [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_vkpo_gloves_worn_duty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sr_rhs_uniform_vkpo_gloves_worn_military_01: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves, V1) worn [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_vkpo_gloves_worn_military_01";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sr_rhs_uniform_vkpo_gloves_worn_military_02: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves, V2) worn [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_vkpo_gloves_worn_military_02";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sr_rhs_uniform_vkpo_gloves_worn_military_03: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves, V3) worn [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_vkpo_gloves_worn_military_03";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_6sh122_gloves_v1;
	class sr_rhs_uniform_6sh122_gloves_military_01: rhs_uniform_6sh122_gloves_v1
	{
		displayName="6sh122 (Gloves, V1) [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_6sh122_gloves_military_01";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sr_rhs_uniform_6sh122_gloves_military_02: rhs_uniform_6sh122_gloves_v1
	{
		displayName="6sh122 (Gloves, V2) [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_6sh122_gloves_military_02";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sr_rhs_uniform_6sh122_gloves_military_03: rhs_uniform_6sh122_gloves_v1
	{
		displayName="6sh122 (Gloves, V3) [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_6sh122_gloves_military_03";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sr_rhs_6b23_vydra_3m_duty: rhs_6b23_vydra_3m
	{
		displayName="6b23 (Vydra-3M) [Duty]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b23_duty_co.paa",
			"rhs\data\gearpack1_6sh92_duty_co.paa",
			"rhs\data\crew_equip_duty_co.paa"
		};
		author="RHS, Rad";
	};
	class sr_rhs_6b23_6sh92_vog_camo_duty: rhs_6b23_digi_6sh92_vog
	{
		displayName="6b23 (6sh92 VOG, Camo) [Duty]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b23_duty_co.paa",
			"rhs\data\gearpack1_6sh92_duty_co.paa",
			"rhs\data\crew_equip_duty_co.paa"
		};
		author="RHS, Rad";
	};
	class sr_rhs_6b23_6sh92_vog_duty: rhs_6b23_digi_6sh92_vog
	{
		displayName="6b23 (6sh92 VOG) [Duty]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b23_duty_co.paa",
			"rhs\data\gearpack1_6sh92_duty2_co.paa",
			"rhs\data\crew_equip_duty_co.paa"
		};
		author="RHS, Rad";
	};
	class sc_vydra_3m_duty: rhs_vydra_3m
	{
		displayName="Vydra-3M [Duty]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\crew_equip_duty_co.paa"
		};
		author="RHS, Rad";
	};
	class sr_rhs_6sh92_camo_duty: rhs_6sh92_digi
	{
		displayName="6sh92 (Camo) [Duty]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b23_duty_co.paa",
			"rhs\data\gearpack1_6sh92_duty_co.paa"
		};
		author="RHS, Rad";
	};
	class sr_rhs_6sh92_duty2: rhs_6sh92_digi
	{
		displayName="6sh92 [Duty]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b23_duty_co.paa",
			"rhs\data\gearpack1_6sh92_duty2_co.paa"
		};
		author="RHS, Rad";
	};
	class sr_rhs_6b23_vydra_3m_military: rhs_6b23_vydra_3m
	{
		displayName="6b23 (Vydra-3M) [Military]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b23_mili_co.paa",
			"rhs\data\gearpack1_6sh92_mili_co.paa",
			"rhs\data\crew_equip_mili_co.paa"
		};
		author="RHS, Rad";
	};
	class sr_rhs_6b23_6sh92_vog_military: rhs_6b23_digi_6sh92_vog
	{
		displayName="6b23 (6sh92 VOG) [Military]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b23_mili_co.paa",
			"rhs\data\gearpack1_6sh92_mili_co.paa",
			"rhs\data\crew_equip_mili_co.paa"
		};
		author="RHS, Rad";
	};
	class sc_vydra_3m_mili: rhs_vydra_3m
	{
		displayName="Vydra-3M [Military]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\crew_equip_mili_co.paa"
		};
		author="RHS, Rad";
	};
	class sr_rhs_6sh92_military: rhs_6sh92_digi
	{
		displayName="6sh92 [Military]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b23_mili_co.paa",
			"rhs\data\gearpack1_6sh92_mili_co.paa"
		};
		author="RHS, Rad";
	};
	class rhsusf_spc_patchless;
	class sr_rhs_spc_patchless_clearSky: rhsusf_spc_patchless
	{
		displayName="SPC (Patchless) [Clearsky]";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhs\data\rhs_spc02_csky_co.paa",
			"rhs\data\rhs_spc_gear1_csky_co.paa",
			"rhs\data\rhs_spc_gear2_csky_co.paa",
			"rhs\data\rhs_usmc_camelbak_csky_co.paa"
		};
		author="RHS, Rad";
	};
	class rhs_6b26_digi;
	class rhs_6b26_digi_bala;
	class rhs_6b26_digi_ess;
	class rhs_6b26_digi_ess_bala;
	class rhs_altyn_novisor_ess;
	class rhs_6b26_green;
	class sr_rhs_altyn_novisor_ess_clearSky: rhs_altyn_novisor_ess
	{
		author="RHS, Rad";
		displayName="Altyn (No visor, ESS) [Clearsky]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\rhs_altyn_black_co.paa"
		};
	};
	class sr_rhs_6b26_duty: rhs_6b26_digi
	{
		author="RHS, Rad";
		displayName="6b26 Helmet";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_duty_co.paa"
		};
	};
	class sr_rhs_6b26_noCover_duty: rhs_6b26_green
	{
		author="RHS, Rad";
		displayName="6b26 Helmet (No cover) [Duty]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_duty_co.paa"
		};
	};
	class sr_rhs_6b26_bala_duty: rhs_6b26_digi_bala
	{
		author="RHS, Rad";
		displayName="6b26 Helmet (Balaclava) [Duty]";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_duty_co.paa",
			"rhs\data\rhs_bala2_duty_co.paa"
		};
	};
	class sr_rhs_6b26_ess_duty: rhs_6b26_digi_ess
	{
		author="RHS, Rad";
		displayName="6b26 Helmet (Goggles) [Duty]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_duty_co.paa"
		};
	};
	class sr_rhs_6b26_ess_bala_duty: rhs_6b26_digi_ess_bala
	{
		author="RHS, Rad";
		displayName="6b26 Helmet (Balaclava, Goggles) [Duty]";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_duty_co.paa",
			"rhs\data\rhs_bala1_duty_co.paa"
		};
	};
	class sr_rhs_6b26_military_01: rhs_6b26_digi
	{
		author="RHS, Rad";
		displayName="6b26 Helmet [Military]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_mili_co.paa"
		};
	};
	class sr_rhs_6b26_bala_military_01: rhs_6b26_digi_bala
	{
		author="RHS, Rad";
		displayName="6b26 Helmet (Balaclava) [Military]";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_mili_co.paa",
			"rhs\data\rhs_bala2_duty_co.paa"
		};
	};
	class sr_rhs_6b26_ess_military_01: rhs_6b26_digi_ess
	{
		author="RHS, Rad";
		displayName="6b26 Helmet (Goggles) [Military]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_mili_co.paa"
		};
	};
	class sr_rhs_6b26_ess_bala_military_01: rhs_6b26_digi_ess_bala
	{
		author="RHS, Rad";
		displayName="6b26 Helmet (Balaclava, Goggles) [Military]";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_mili_co.paa",
			"rhs\data\rhs_bala1_duty_co.paa"
		};
	};
	class sr_rhs_6b26_military_02: rhs_6b26_digi
	{
		author="RHS, Rad";
		displayName="6b26 Helmet v2 [Military]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_mili2_co.paa"
		};
	};
	class sr_rhs_6b26_noCover_military: rhs_6b26_green
	{
		author="RHS, Rad";
		displayName="6b26 Helmet v2 (No cover) [Military]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_mili2_co.paa"
		};
	};
	class sr_rhs_6b26_bala_military_02: rhs_6b26_digi_bala
	{
		author="RHS, Rad";
		displayName="6b26 Helmet v2(Balaclava) [Military]";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_mili2_co.paa",
			"rhs\data\rhs_bala2_duty_co.paa"
		};
	};
	class sr_rhs_6b26_ess_military_02: rhs_6b26_digi_ess
	{
		author="RHS, Rad";
		displayName="6b26 Helmet v2(Goggles) [Military]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_mili2_co.paa"
		};
	};
	class sr_rhs_6b26_ess_bala_military_02: rhs_6b26_digi_ess_bala
	{
		author="RHS, Rad";
		displayName="6b26 Helmet v2(Balaclava, Goggles) [Military]";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_mili2_co.paa",
			"rhs\data\rhs_bala1_duty_co.paa"
		};
	};
};
class cfgMods
{
	author="Rad";
	timepacked="1757945312";
};
