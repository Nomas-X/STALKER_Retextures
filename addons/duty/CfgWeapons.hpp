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

	class GVAR(U_afghanka_boots_black): rhs_uniform_afghanka_boots_spetsodezhda
	{
		displayName = "M88 Sapogi [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass = QGVAR(afghanka_boots_black);
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class GVAR(U_model2010_black): rhs_uniform_flora_patchless
	{
		displayName = "Model 2010 [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass = QGVAR(model2010_black);
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class GVAR(U_vkpo_gloves_black): rhs_uniform_vkpo_gloves
	{
		displayName = "VKPO (Gloves) [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass = QGVAR(vkpo_gloves_black);
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class GVAR(U_vkpo_gloves_worn_black): rhs_uniform_vkpo_gloves
	{
		displayName = "VKPO (Gloves, Worn) [Duty]";
		class ItemInfo: UniformItem
		{
			uniformClass = QGVAR(vkpo_gloves_worn_black);
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class GVAR(V_6b23_vydra_3m_black): rhs_6b23_vydra_3m
	{
		displayName = "6B23 (Vydra-3M) [Duty]";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b23_duty_co.paa),
			QPATHTOF(data\gearpack1_6sh92_duty_co.paa),
			QPATHTOF(data\crew_equip_duty_co.paa)
		};
		author = "RHS, Rad";
	};
	class GVAR(V_6b23_6sh92_vog_camo_black): rhs_6b23_digi_6sh92_vog
	{
		displayName = "6B23 (6Sh92/VOG/Camo) [Duty]";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b23_duty_co.paa),
			QPATHTOF(data\gearpack1_6sh92_duty_co.paa),
			QPATHTOF(data\crew_equip_duty_co.paa)
		};
		author = "RHS, Rad";
	};
	class GVAR(V_6b23_6sh92_vog_black): rhs_6b23_digi_6sh92_vog
	{
		displayName = "6B23 (6Sh92/VOG) [Duty]";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b23_duty_co.paa),
			QPATHTOF(data\gearpack1_6sh92_duty2_co.paa),
			QPATHTOF(data\crew_equip_duty_co.paa)
		};
		author = "RHS, Rad";
	};
	class GVAR(V_vydra_3m_black): rhs_vydra_3m
	{
		displayName = "Vydra-3M [Duty]";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\crew_equip_duty_co.paa)
		};
		author = "RHS, Rad";
	};
	class GVAR(V_6sh92_camo_black): rhs_6sh92_digi
	{
		displayName = "6Sh92 (Camo) [Duty]";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b23_duty_co.paa),
			QPATHTOF(data\gearpack1_6sh92_duty_co.paa)
		};
		author = "RHS, Rad";
	};
	class GVAR(V_6sh92_black): rhs_6sh92_digi
	{
		displayName = "6Sh92 [Duty]";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b23_duty_co.paa),
			QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
		};
		author = "RHS, Rad";
	};


    // HEADGEAR
	class rhs_6b26_digi;
	class rhs_6b26_digi_bala;
	class rhs_6b26_digi_ess;
	class rhs_6b26_digi_ess_bala;
	class rhs_6b26_green;
	class GVAR(H_6b26_black): rhs_6b26_digi
	{
		author = "RHS, Rad";
		displayName = "6B26 [Duty]";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b27_duty_co.paa)
		};
	};
	class GVAR(H_6b26_noCover_black): rhs_6b26_green
	{
		author = "RHS, Rad";
		displayName = "6B26 (No cover) [Duty]";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b27_duty_co.paa)
		};
	};
	class GVAR(H_6b26_bala_black): rhs_6b26_digi_bala {
		author = "RHS, Rad";
		displayName = "6B26 (Balaclava) [Duty]";
		hiddenSelections[] = {
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b27_duty_co.paa),
			QPATHTOF(data\rhs_bala2_duty_co.paa)
		};
	};
	class GVAR(H_6b26_ess_black): rhs_6b26_digi_ess
	{
		author = "RHS, Rad";
		displayName = "6B26 (ESS) [Duty]";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b27_duty_co.paa)
		};
	};
	class GVAR(H_6b26_ess_bala_black): rhs_6b26_digi_ess_bala
	{
		author = "RHS, Rad";
		displayName = "6B26 (ESS/Balaclava) [Duty]";
		hiddenSelections[] = {
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b27_duty_co.paa),
			QPATHTOF(data\rhs_bala1_duty_co.paa)
		};
	};

    class H_Beret_02;

	class GVAR(H_beret_red): H_Beret_02 {
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (Red) [Duty]";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsMaterials[] = {
			QPATHTOF(data\beret.rvmat)
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\beret_duty_red.paa)
		};
		allowedslots[] = {801,901,701};
	};

	class GVAR(H_beret_black): H_Beret_02 {
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (Black) [Duty]";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsMaterials[] = {
			QPATHTOF(data\beret.rvmat)
		};
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\beret_duty_blk.paa)
		};
		allowedslots[] = {801,901,701};
	};
};
