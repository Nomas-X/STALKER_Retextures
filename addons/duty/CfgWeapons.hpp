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
	class rhs_uniform_vkpo;
	class rhs_6b23;
	class rhs_6b23_6sh92_headset;
	class rhs_6b23_6sh92_headset_mapcase;
	class rhs_6b23_6sh92_radio;
	class rhs_6b23_6sh92_vog_headset;
	class rhs_6b23_crewofficer;
	class rhs_6b23_crew;
	class rhs_6b23_engineer;
	class rhs_6b23_medic;
	class rhs_6b23_rifleman;
	class rhs_6b23_sniper;
	class rhs_6sh92_headset;
	class rhs_6sh92_radio;
	class rhs_6sh92_vog;
	class rhs_6sh92_vog_headset;

	class GVAR(U_afghanka_boots_black): rhs_uniform_afghanka_boots_spetsodezhda
	{
		displayName = "[Duty] M88 Sapogi";
		class ItemInfo: UniformItem
		{
			uniformClass = QGVAR(afghanka_boots_black);
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class GVAR(U_model2010_black): rhs_uniform_flora_patchless
	{
		displayName = "[Duty] Model 2010";
		class ItemInfo: UniformItem
		{
			uniformClass = QGVAR(model2010_black);
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class GVAR(U_vkpo_gloves_black): rhs_uniform_vkpo_gloves
	{
		displayName = "[Duty] VKPO (Gloves)";
		class ItemInfo: UniformItem
		{
			uniformClass = QGVAR(vkpo_gloves_black);
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class GVAR(U_vkpo_gloves_worn_black): rhs_uniform_vkpo_gloves
	{
		displayName = "[Duty] VKPO (Worn, Gloves)";
		class ItemInfo: UniformItem
		{
			uniformClass = QGVAR(vkpo_gloves_worn_black);
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class GVAR(U_vkpo_black): rhs_uniform_vkpo
	{
		displayName = "[Duty] VKPO";
		class ItemInfo: UniformItem
		{
			uniformClass = QGVAR(vkpo_black);
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class GVAR(U_vkpo_worn_black): rhs_uniform_vkpo
	{
		displayName = "[Duty] VKPO (Worn)";
		class ItemInfo: UniformItem
		{
			uniformClass = QGVAR(vkpo_worn_black);
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class GVAR(V_6b23_vydra_3m_black): rhs_6b23_vydra_3m
	{
		displayName = "[Duty] 6B23 (Vydra-3M)";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b23_duty_co.paa),
			QPATHTOF(data\gearpack1_6sh92_duty_co.paa),
			QPATHTOF(data\crew_equip_duty_co.paa)
		};
		author = "RHS, Rad";
	};
	class GVAR(V_6b23_6sh92_vog_camo_black): rhs_6b23_digi_6sh92_vog
	{
		displayName = "[Duty] 6B23 (Camo, 6Sh92/VOG)";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b23_duty_co.paa),
			QPATHTOF(data\gearpack1_6sh92_duty_co.paa),
			QPATHTOF(data\crew_equip_duty_co.paa)
		};
		author = "RHS, Rad";
	};
	class GVAR(V_6b23_6sh92_vog_black): rhs_6b23_digi_6sh92_vog
	{
		displayName = "[Duty] 6B23 (6Sh92/VOG)";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b23_duty_co.paa),
			QPATHTOF(data\gearpack1_6sh92_duty2_co.paa),
			QPATHTOF(data\crew_equip_duty_co.paa)
		};
		author = "RHS, Rad";
	};
	class GVAR(V_vydra_3m_black): rhs_vydra_3m
	{
		displayName = "[Duty] Vydra-3M";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\crew_equip_duty_co.paa)
		};
		author = "RHS, Rad";
	};
	class GVAR(V_6sh92_camo_black): rhs_6sh92_digi
	{
		displayName = "[Duty] 6Sh92 (Camo)";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b23_duty_co.paa),
			QPATHTOF(data\gearpack1_6sh92_duty_co.paa)
		};
		author = "RHS, Rad";
	};
	class GVAR(V_6sh92_black): rhs_6sh92_digi
	{
		displayName = "[Duty] 6Sh92";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b23_duty_co.paa),
			QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
		};
		author = "RHS, Rad";
	};
    class GVAR(V_6b23_olive): rhs_6b23
    {
        displayName = "[Duty] 6B23";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_duty_co.paa),
            QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_6sh92_headset_olive): rhs_6b23_6sh92_headset
    {
        displayName = "[Duty] 6B23 (6Sh92/Headset)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_duty_co.paa),
            QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_6sh92_headset_mapcase_olive): rhs_6b23_6sh92_headset_mapcase
    {
        displayName = "[Duty] 6B23 (6Sh92/Headset/Mapcase)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_duty_co.paa),
            QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_6sh92_radio_olive): rhs_6b23_6sh92_radio
    {
        displayName = "[Duty] 6B23 (6Sh92/Radio)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_duty_co.paa),
            QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_6sh92_vog_headset_olive): rhs_6b23_6sh92_vog_headset
    {
        displayName = "[Duty] 6B23 (6Sh92/VOG/Headset)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_duty_co.paa),
            QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_crewofficer_olive): rhs_6b23_crewofficer
    {
        displayName = "[Duty] 6B23 (Crew Officer)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_duty_co.paa),
            QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_crew_olive): rhs_6b23_crew
    {
        displayName = "[Duty] 6B23 (Crew)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_duty_co.paa),
            QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_engineer_olive): rhs_6b23_engineer
    {
        displayName = "[Duty] 6B23 (Engineer)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_duty_co.paa),
            QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_medic_olive): rhs_6b23_medic
    {
        displayName = "[Duty] 6B23 (Medic)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_duty_co.paa),
            QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_rifleman_olive): rhs_6b23_rifleman
    {
        displayName = "[Duty] 6B23 (Rifleman)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_duty_co.paa),
            QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_sniper_olive): rhs_6b23_sniper
    {
        displayName = "[Duty] 6B23 (Sniper)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_duty_co.paa),
            QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6sh92_headset_olive): rhs_6sh92_headset
    {
        displayName = "[Duty] 6Sh92 (Headset)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_duty_co.paa),
            QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6sh92_radio_olive): rhs_6sh92_radio
    {
        displayName = "[Duty] 6Sh92 (Radio)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_duty_co.paa),
            QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6sh92_vog_olive): rhs_6sh92_vog
    {
        displayName = "[Duty] 6Sh92 (VOG)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_duty_co.paa),
            QPATHTOF(data\gearpack1_6sh92_duty2_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6sh92_vog_headset_olive): rhs_6sh92_vog_headset
    {
        displayName = "[Duty] 6Sh92 (VOG/Headset)";
        hiddenSelectionsTextures[]=
        {
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
	class rhs_6b26_bala_green;
	class rhs_6b26_ess_green;
	class rhs_6b26_ess_bala_green;
	class rhs_6b26_green;
	class GVAR(H_6b26_black): rhs_6b26_digi
	{
		author = "RHS, Rad";
		displayName = "[Duty] 6B26";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b27_duty_co.paa)
		};
	};
	class GVAR(H_6b26_noCover_black): rhs_6b26_green
	{
		author = "RHS, Rad";
		displayName = "[Duty] 6B26 (No Cover)";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b27_duty_co.paa)
		};
	};
	class GVAR(H_6b26_noCover_bala_black): rhs_6b26_bala_green
	{
		author = "RHS, Rad";
		displayName = "[Duty] 6B26 (No Cover, Balaclava)";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b27_duty_co.paa)
		};
	};
	class GVAR(H_6b26_noCover_ess_black): rhs_6b26_ess_green
	{
		author = "RHS, Rad";
		displayName = "[Duty] 6B26 (No Cover, ESS)";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b27_duty_co.paa)
		};
	};
	class GVAR(H_6b26_noCover_ess_bala_black): rhs_6b26_ess_bala_green
	{
		author = "RHS, Rad";
		displayName = "[Duty] 6B26 (No Cover, ESS/Balaclava)";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b27_duty_co.paa)
		};
	};
	class GVAR(H_6b26_bala_black): rhs_6b26_digi_bala {
		author = "RHS, Rad";
		displayName = "[Duty] 6B26 (Balaclava)";
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
		displayName = "[Duty] 6B26 (ESS)";
		hiddenSelectionsTextures[] = {
			QPATHTOF(data\6b27_duty_co.paa)
		};
	};
	class GVAR(H_6b26_ess_bala_black): rhs_6b26_digi_ess_bala
	{
		author = "RHS, Rad";
		displayName = "[Duty] 6B26 (ESS/Balaclava)";
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
		displayName = "[Duty] Beret (Red)";
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
		displayName = "[Duty] Beret (Black)";
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
