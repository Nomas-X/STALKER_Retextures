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
	class sc_balaclava1_black: rhs_balaclava1_olive
	{
		displayName="[Duty] Balaclava (Double)";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\rhs_bala1_duty_co.paa"
		};
		author="RHS, Rad";
	};
	class sc_balaclava2_black: rhs_balaclava
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
	class sc_sidor_duty: rhs_sidor
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
	class sc_sidor_mili: rhs_sidor
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
	class sc_umbts_duty: rhs_assault_umbts
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
	class sc_umbts_mili: rhs_assault_umbts
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
	class sc_6sh122_mili1: rhs_6sh122_gloves_v1_base
	{
		scope=1;
		uniformClass="sc_uniform_6sh122_mili1";
		model="\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\122_vest_mili_1.paa",
			"rhs\data\122_pant_mili_1.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sc_6sh122_mili2: rhs_6sh122_gloves_v1_base
	{
		scope=1;
		uniformClass="sc_uniform_6sh122_mili2";
		model="\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\122_vest_mili_2.paa",
			"rhs\data\122_pant_mili_2.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sc_6sh122_mili3: rhs_6sh122_gloves_v1_base
	{
		scope=1;
		uniformClass="sc_uniform_6sh122_mili3";
		model="\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\122_vest_mili_3.paa",
			"rhs\data\122_pant_mili_3.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class rhs_afghanka_boots_base;
	class sc_afghanka_duty: rhs_afghanka_boots_base
	{
		scope=1;
		uniformClass="sc_uniform_afghanka_duty";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\afghanka01_vest_co.paa",
			"rhs\data\afghanka_pant_boots_co.paa"
		};
	};
	class sc_flora_duty: rhs_afghanka_boots_base
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
		uniformClass="sc_uniform_flora_duty";
	};
	class sc_flora_mili1: rhs_afghanka_boots_base
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
		uniformClass="sc_uniform_flora_mili1";
	};
	class sc_flora_mili2: rhs_afghanka_boots_base
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
		uniformClass="sc_uniform_flora_mili2";
	};
	class sc_flora_mili3: rhs_afghanka_boots_base
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
		uniformClass="sc_uniform_flora_mili3";
	};
	class rhs_vkpo_gloves_base;
	class sc_vkpo_duty: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sc_uniform_vkpo_duty";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\vkpo_duty_vest.paa",
			"rhs\data\vkpo_duty_pant.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sc_vkpo_mili1: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sc_uniform_vkpo_mili1";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\vkpo_mili_vest_1.paa",
			"rhs\data\vkpo_mili_pant_1.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sc_vkpo_mili2: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sc_uniform_vkpo_mili2";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\vkpo_mili_vest_2.paa",
			"rhs\data\vkpo_mili_pant_2.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sc_vkpo_mili3: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sc_uniform_vkpo_mili3";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\vkpo_mili_vest_3.paa",
			"rhs\data\vkpo_mili_pant_3.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sc_vkpo_dutyw: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sc_uniform_vkpo_dutyw";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\vkpo_duty_vest.paa",
			"rhs\data\vkpo_duty_pantw.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sc_vkpo_mili1w: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sc_uniform_vkpo_mili1w";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\vkpo_mili_vest_1w.paa",
			"rhs\data\vkpo_mili_pant_1w.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sc_vkpo_mili2w: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sc_uniform_vkpo_mili2w";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\vkpo_mili_vest_2w.paa",
			"rhs\data\vkpo_mili_pant_2w.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class sc_vkpo_mili3w: rhs_vkpo_gloves_base
	{
		scope=1;
		uniformClass="sc_uniform_vkpo_mili3w";
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
	class sc_uniform_afghanka_duty: rhs_uniform_afghanka_boots_spetsodezhda
	{
		displayName="Afghanka [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_afghanka_duty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sc_uniform_flora_duty: rhs_uniform_flora_patchless
	{
		displayName="M88 uniform [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_flora_duty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sc_uniform_flora_mili1: rhs_uniform_flora_patchless
	{
		displayName="M88 uniform v1 [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_flora_mili1";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sc_uniform_flora_mili2: rhs_uniform_flora_patchless
	{
		displayName="M88 uniform v2 [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_flora_mili2";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sc_uniform_flora_mili3: rhs_uniform_flora_patchless
	{
		displayName="M88 uniform v3 [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_flora_mili3";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sc_uniform_vkpo_duty: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves) [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_vkpo_duty";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sc_uniform_vkpo_mili1: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves, V1) [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_vkpo_mili1";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sc_uniform_vkpo_mili2: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves, V2) [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_vkpo_mili2";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sc_uniform_vkpo_mili3: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves, V3) [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_vkpo_mili3";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sc_uniform_vkpo_dutyw: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves) worn [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_vkpo_dutyw";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sc_uniform_vkpo_mili1w: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves, V1) worn [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_vkpo_mili1w";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sc_uniform_vkpo_mili2w: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves, V2) worn [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_vkpo_mili2w";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sc_uniform_vkpo_mili3w: rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves, V3) worn [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_vkpo_mili3w";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_6sh122_gloves_v1;
	class sc_uniform_6sh122_mili1: rhs_uniform_6sh122_gloves_v1
	{
		displayName="6sh122 (Gloves, V1) [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_6sh122_mili1";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sc_uniform_6sh122_mili2: rhs_uniform_6sh122_gloves_v1
	{
		displayName="6sh122 (Gloves, V2) [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_6sh122_mili2";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sc_uniform_6sh122_mili3: rhs_uniform_6sh122_gloves_v1
	{
		displayName="6sh122 (Gloves, V3) [Military]";
		class ItemInfo: UniformItem
		{
			uniformClass="sc_6sh122_mili3";
			containerClass="Supply40";
			mass=40;
		};
	};
	class sc_6b23_vydra_3m_duty: rhs_6b23_vydra_3m
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
	class sc_6b23_6sh92_vog_duty: rhs_6b23_digi_6sh92_vog
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
	class sc_6b23_6sh92_vog_duty2: rhs_6b23_digi_6sh92_vog
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
	class sc_6sh92_duty: rhs_6sh92_digi
	{
		displayName="6sh92 (Camo) [Duty]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b23_duty_co.paa",
			"rhs\data\gearpack1_6sh92_duty_co.paa"
		};
		author="RHS, Rad";
	};
	class sc_6sh92_duty2: rhs_6sh92_digi
	{
		displayName="6sh92 [Duty]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b23_duty_co.paa",
			"rhs\data\gearpack1_6sh92_duty2_co.paa"
		};
		author="RHS, Rad";
	};
	class sc_6b23_vydra_3m_mili: rhs_6b23_vydra_3m
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
	class sc_6b23_6sh92_vog_mili: rhs_6b23_digi_6sh92_vog
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
	class sc_6sh92_mili: rhs_6sh92_digi
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
	class sc_spc_patchless: rhsusf_spc_patchless
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
	class sc_altyn_novisor_ess_black: rhs_altyn_novisor_ess
	{
		author="RHS, Rad";
		displayName="Altyn (No visor, ESS) [Clearsky]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\rhs_altyn_black_co.paa"
		};
	};
	class sc_6b26_duty: rhs_6b26_digi
	{
		author="RHS, Rad";
		displayName="6b26 Helmet";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_duty_co.paa"
		};
	};
	class sc_6b26_duty_nc: rhs_6b26_green
	{
		author="RHS, Rad";
		displayName="6b26 Helmet (No cover) [Duty]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_duty_co.paa"
		};
	};
	class sc_6b26_duty_bala: rhs_6b26_digi_bala
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
	class sc_6b26_duty_ess: rhs_6b26_digi_ess
	{
		author="RHS, Rad";
		displayName="6b26 Helmet (Goggles) [Duty]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_duty_co.paa"
		};
	};
	class sc_6b26_duty_ess_bala: rhs_6b26_digi_ess_bala
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
	class sc_6b26_mili: rhs_6b26_digi
	{
		author="RHS, Rad";
		displayName="6b26 Helmet [Military]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_mili_co.paa"
		};
	};
	class sc_6b26_mili_bala: rhs_6b26_digi_bala
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
	class sc_6b26_mili_ess: rhs_6b26_digi_ess
	{
		author="RHS, Rad";
		displayName="6b26 Helmet (Goggles) [Military]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_mili_co.paa"
		};
	};
	class sc_6b26_mili_ess_bala: rhs_6b26_digi_ess_bala
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
	class sc_6b26_mili2: rhs_6b26_digi
	{
		author="RHS, Rad";
		displayName="6b26 Helmet v2 [Military]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_mili2_co.paa"
		};
	};
	class sc_6b26_mili2_nc: rhs_6b26_green
	{
		author="RHS, Rad";
		displayName="6b26 Helmet v2 (No cover) [Military]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_mili2_co.paa"
		};
	};
	class sc_6b26_mili2_bala: rhs_6b26_digi_bala
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
	class sc_6b26_mili2_ess: rhs_6b26_digi_ess
	{
		author="RHS, Rad";
		displayName="6b26 Helmet v2(Goggles) [Military]";
		hiddenSelectionsTextures[]=
		{
			"rhs\data\6b27_mili2_co.paa"
		};
	};
	class sc_6b26_mili2_ess_bala: rhs_6b26_digi_ess_bala
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
