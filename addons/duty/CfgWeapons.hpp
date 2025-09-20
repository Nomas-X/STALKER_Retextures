class cfgWeapons
{
	// class ItemCore;
	// class HeadgearItem;
	
    class UniformItem;
	class rhs_6b23_vydra_3m;
	class rhs_vydra_3m;
	class rhs_6sh92_digi;
	class rhs_6b23_digi_6sh92_vog;
	class rhs_uniform_afghanka_boots_spetsodezhda;
	class rhs_uniform_flora_patchless;
	class rhs_uniform_vkpo_gloves;

	class GVAR(U_afghanka_boots): rhs_uniform_afghanka_boots_spetsodezhda
	{
		displayName = "M88 Sapogi [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass = "sr_rhs_afghanka_boots_duty";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class GVAR(U_m88): rhs_uniform_flora_patchless
	{
		displayName = "Model 2010 [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass = "sr_rhs_m88_duty";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class GVAR(U_vkpo_gloves): rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves) [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_vkpo_gloves_duty";
			containerClass="Supply40";
			mass = 40;
		};
	};

	class GVAR(U_vkpo_gloves_worn): rhs_uniform_vkpo_gloves
	{
		displayName="VKPO (Gloves, Worn) [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass="sr_rhs_vkpo_gloves_worn_duty";
			containerClass="Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_6sh122_gloves_v1;
	class GVAR(V_6b23_vydra_3m): rhs_6b23_vydra_3m
	{
		displayName="6B23 (Vydra-3M) [Duty]";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\6b23_duty_co.paa",
			"z\stalker_retextures\addons\rhs\data\gearpack1_6sh92_duty_co.paa",
			"z\stalker_retextures\addons\rhs\data\crew_equip_duty_co.paa"
		};
		author="RHS, Rad";
	};
	class GVAR(V_6b23_6sh92_vog_camo): rhs_6b23_digi_6sh92_vog
	{
		displayName="6B23 (6Sh92/VOG/Camo) [Duty]";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\6b23_duty_co.paa",
			"z\stalker_retextures\addons\rhs\data\gearpack1_6sh92_duty_co.paa",
			"z\stalker_retextures\addons\rhs\data\crew_equip_duty_co.paa"
		};
		author="RHS, Rad";
	};
	class GVAR(V_6b23_6sh92_vog): rhs_6b23_digi_6sh92_vog
	{
		displayName="6B23 (6Sh92/VOG) [Duty]";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\6b23_duty_co.paa",
			"z\stalker_retextures\addons\rhs\data\gearpack1_6sh92_duty2_co.paa",
			"z\stalker_retextures\addons\rhs\data\crew_equip_duty_co.paa"
		};
		author="RHS, Rad";
	};
	class GVAR(V_vydra_3m): rhs_vydra_3m
	{
		displayName="Vydra-3M [Duty]";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\crew_equip_duty_co.paa"
		};
		author="RHS, Rad";
	};
	class GVAR(V_6sh92_camo): rhs_6sh92_digi
	{
		displayName="6Sh92 (Camo) [Duty]";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\6b23_duty_co.paa",
			"z\stalker_retextures\addons\rhs\data\gearpack1_6sh92_duty_co.paa"
		};
		author="RHS, Rad";
	};
	class GVAR(V_6sh92): rhs_6sh92_digi
	{
		displayName="6Sh92 [Duty]";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\6b23_duty_co.paa",
			"z\stalker_retextures\addons\rhs\data\gearpack1_6sh92_duty2_co.paa"
		};
		author="RHS, Rad";
	};

	class rhs_6b26_digi;
	class rhs_6b26_digi_bala;
	class rhs_6b26_digi_ess;
	class rhs_6b26_digi_ess_bala;
	class rhs_altyn_novisor_ess;
	class rhs_6b26_green;
	class GVAR(H_6b26): rhs_6b26_digi
	{
		author="RHS, Rad";
		displayName="6B26 [Duty]";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\6b27_duty_co.paa"
		};
	};
	class GVAR(H_6b26_noCover): rhs_6b26_green
	{
		author="RHS, Rad";
		displayName="6B26 (No cover) [Duty]";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\6b27_duty_co.paa"
		};
	};
	class GVAR(H_6b26_bala): rhs_6b26_digi_bala {
		author="RHS, Rad";
		displayName="6B26 (Balaclava) [Duty]";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\6b27_duty_co.paa",
			"z\stalker_retextures\addons\rhs\data\rhs_bala2_duty_co.paa"
		};
	};
	class GVAR(H_6b26_ess): rhs_6b26_digi_ess
	{
		author="RHS, Rad";
		displayName="6B26 (ESS) [Duty]";
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\6b27_duty_co.paa"
		};
	};
	class GVAR(H_6b26_ess_bala): rhs_6b26_digi_ess_bala
	{
		author="RHS, Rad";
		displayName="6B26 (ESS/Balaclava) [Duty]";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"z\stalker_retextures\addons\rhs\data\6b27_duty_co.paa",
			"z\stalker_retextures\addons\rhs\data\rhs_bala1_duty_co.paa"
		};
	};
};
