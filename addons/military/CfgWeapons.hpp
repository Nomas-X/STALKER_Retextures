class CfgWeapons
{
    class H_Beret_02;
	class GVAR(H_beret_gry): H_Beret_02 {
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;

		displayName = "Beret (Grey) [Military]";

		hiddenSelections[] = { "camo" };
		hiddenSelectionsMaterials[] = { QPATHTOF(data\beret.rvmat) };
		hiddenSelectionsTextures[] = { QPATHTOF(data\beret_mili_gry.paa) };
		
        allowedslots[] = { 801, 901, 701 };
	};
	class GVAR(H_beret_2_grn): H_Beret_02 {
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		
        displayName = "Beret (Green) [Military]";

		hiddenSelections[] = { "camo" };
		hiddenSelectionsMaterials[] = { QPATHTOF(data\beret.rvmat) };
		hiddenSelectionsTextures[] = { QPATHTOF(data\beret_mili_grn.paa) };
		
        allowedslots[] = { 801, 901, 701 };
	};

    class UniformItem;
    class rhs_6b23_vydra_3m;
    class rhs_vydra_3m;
    class rhs_6sh92_digi;
    class rhs_6b23_digi_6sh92_vog;
    class rhs_uniform_flora_patchless;
    class rhs_uniform_vkpo_gloves;
    class GVAR(U_m88_1): rhs_uniform_flora_patchless
    {
        displayName = "Model 2010 [Military 1]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(m88_1);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_m88_2): rhs_uniform_flora_patchless
    {
        displayName = "Model 2010 [Military 2]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(m88_2);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_m88_3): rhs_uniform_flora_patchless
    {
        displayName = "Model 2010 [Military 3]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(m88_3);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_1): rhs_uniform_vkpo_gloves
    {
        displayName = "VKPO (Gloves) [Military 1]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_1);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_2): rhs_uniform_vkpo_gloves
    {
        displayName = "VKPO (Gloves) [Military 2]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_2);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_3): rhs_uniform_vkpo_gloves
    {
        displayName = "VKPO (Gloves) [Military 3]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_3);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_worn_1): rhs_uniform_vkpo_gloves
    {
        displayName = "VKPO (Gloves, Worn) [Military 1]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_worn_1);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_worn_2): rhs_uniform_vkpo_gloves
    {
        displayName = "VKPO (Gloves, Worn) [Military 2]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_worn_2);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_worn_3): rhs_uniform_vkpo_gloves
    {
        displayName = "VKPO (Gloves, Worn) [Military 3]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_worn_3);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class rhs_uniform_6sh122_gloves_v1;
    class GVAR(U_6sh122_gloves_1): rhs_uniform_6sh122_gloves_v1
    {
        displayName = "6sh122 (Gloves) [Military 1]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(6sh122_gloves_1);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_6sh122_gloves_2): rhs_uniform_6sh122_gloves_v1
    {
        displayName = "6sh122 (Gloves) [Military 2]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(6sh122_gloves_2);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_6sh122_gloves_3): rhs_uniform_6sh122_gloves_v1
    {
        displayName = "6sh122 (Gloves) [Military 3]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(6sh122_gloves_3);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // VESTS
    class GVAR(V_6b23_vydra_3m): rhs_6b23_vydra_3m
    {
        displayName = "6B23 (Vydra-3M) [Military]";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa),
            QPATHTOF(data\crew_equip_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_6sh92_vog): rhs_6b23_digi_6sh92_vog
    {
        displayName = "6B23 (6Sh92/VOG) [Military]";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa),
            QPATHTOF(data\crew_equip_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_vydra_3m): rhs_vydra_3m
    {
        displayName = "Vydra-3M [Military]";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\crew_equip_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6sh92): rhs_6sh92_digi
    {
        displayName = "6Sh92 [Military]";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };

    // HEADGEAR

    class rhs_6b26_green;
    class rhs_6b26_digi;
    class rhs_6b26_digi_bala;
    class rhs_6b26_digi_ess;
    class rhs_6b26_digi_ess_bala;
    class GVAR(H_6b26_01): rhs_6b26_digi {
        author = "RHS, Rad";
        displayName = "6B26 [Military 1]";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili_co.paa)
        };
    };
    class GVAR(H_6b26_bala_01): rhs_6b26_digi_bala {
        author = "RHS, Rad";
        displayName = "6B26 (Balaclava) [Military 1]";
        hiddenSelections[]=
        {
            "Camo1",
            "Camo2"
        };
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili_co.paa),
            QPATHTOF(data\rhs_bala2_duty_co.paa)
        };
    };
    class GVAR(H_6b26_ess_01): rhs_6b26_digi_ess {
        author = "RHS, Rad";
        displayName = "6B26 (ESS) [Military 1]";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili_co.paa)
        };
    };
    class GVAR(H_6b26_ess_bala_01): rhs_6b26_digi_ess_bala
    {
        author = "RHS, Rad";
        displayName = "6B26 (ESS/Balaclava) [Military 1]";
        hiddenSelections[]=
        {
            "Camo1",
            "Camo2"
        };
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili_co.paa),
            QPATHTOF(data\rhs_bala1_duty_co.paa)
        };
    };
    class GVAR(H_6b26_02): rhs_6b26_digi
    {
        author = "RHS, Rad";
        displayName = "6B26 [Military 2]";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili2_co.paa)
        };
    };
    class GVAR(H_6b26_noCover): rhs_6b26_green
    {
        author = "RHS, Rad";
        displayName = "6B26 (No Cover) [Military]";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili2_co.paa)
        };
    };
    class GVAR(H_6b26_bala_02): rhs_6b26_digi_bala
    {
        author = "RHS, Rad";
        displayName = "6B26 (Balaclava) [Military 2]";
        hiddenSelections[]=
        {
            "Camo1",
            "Camo2"
        };
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili2_co.paa),
            QPATHTOF(data\rhs_bala2_duty_co.paa)
        };
    };
    class GVAR(H_6b26_ess_02): rhs_6b26_digi_ess
    {
        author = "RHS, Rad";
        displayName = "6B26 (ESS) [Military 2]";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili2_co.paa)
        };
    };
    class GVAR(H_6b26_ess_bala_02): rhs_6b26_digi_ess_bala
    {
        author = "RHS, Rad";
        displayName = "6B26 (ESS/Balaclava) [Military 2]";
        hiddenSelections[]=
        {
            "Camo1",
            "Camo2"
        };
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili2_co.paa),
            QPATHTOF(data\rhs_bala1_duty_co.paa)
        };
    };
};
