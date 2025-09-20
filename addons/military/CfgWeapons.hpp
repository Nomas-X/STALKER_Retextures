class CfgWeapons
{
    class H_Beret_02;
	class GVAR(H_beret_grey): H_Beret_02 {
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;

		displayName = "Beret (Grey) [Military]";

		hiddenSelections[] = { "camo" };
		hiddenSelectionsMaterials[] = { QPATHTOF(data\beret.rvmat) };
		hiddenSelectionsTextures[] = { QPATHTOF(data\beret_mili_gry.paa) };
		
        allowedslots[] = { 801, 901, 701 };
	};
	class GVAR(H_beret_green): H_Beret_02 {
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
    class GVAR(U_model2010_surpat_green): rhs_uniform_flora_patchless
    {
        displayName = "Model 2010 (SURPAT) [Military]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(model2010_surpat_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_model2010_emr_green): rhs_uniform_flora_patchless
    {
        displayName = "Model 2010 (EMR) [Military]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(model2010_emr_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_model2010_ttsko_olive): rhs_uniform_flora_patchless
    {
        displayName = "Model 2010 (TTsKO) [Military]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(model2010_ttsko_olive);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_surpat_green): rhs_uniform_vkpo_gloves
    {
        displayName = "VKPO (Gloves, SURPAT) [Military]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_surpat_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_emr_green): rhs_uniform_vkpo_gloves
    {
        displayName = "VKPO (Gloves, EMR) [Military]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_emr_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_ttsko_olive): rhs_uniform_vkpo_gloves
    {
        displayName = "VKPO (Gloves, TTsKO) [Military]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_ttsko_olive);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_worn_surpat_green): rhs_uniform_vkpo_gloves
    {
        displayName = "VKPO (Gloves, Worn, SURPAT) [Military]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_worn_surpat_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_worn_emr_green): rhs_uniform_vkpo_gloves
    {
        displayName = "VKPO (Gloves, Worn, EMR) [Military]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_worn_emr_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_worn_ttsko_olive): rhs_uniform_vkpo_gloves
    {
        displayName = "VKPO (Gloves, Worn, TTsKO) [Military]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_worn_ttsko_olive);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class rhs_uniform_6sh122_gloves_v1;
    class GVAR(U_6sh122_gloves_surpat_green): rhs_uniform_6sh122_gloves_v1
    {
        displayName = "6sh122 (Gloves, SURPAT) [Military]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(6sh122_gloves_surpat_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_6sh122_gloves_emr_green): rhs_uniform_6sh122_gloves_v1
    {
        displayName = "6sh122 (Gloves, EMR) [Military]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(6sh122_gloves_emr_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_6sh122_gloves_ttsko_olive): rhs_uniform_6sh122_gloves_v1
    {
        displayName = "6sh122 (Gloves, TTsKO) [Military]";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(6sh122_gloves_ttsko_olive);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // VESTS
    class GVAR(V_6b23_vydra_3m_olive): rhs_6b23_vydra_3m
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
    class GVAR(V_6b23_6sh92_vog_olive): rhs_6b23_digi_6sh92_vog
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
    class GVAR(V_vydra_3m_olive): rhs_vydra_3m
    {
        displayName = "Vydra-3M [Military]";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\crew_equip_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6sh92_olive): rhs_6sh92_digi
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
    class GVAR(H_6b26_coyote): rhs_6b26_digi {
        author = "RHS, Rad";
        displayName = "6B26 (Coyote) [Military]";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili_co.paa)
        };
    };
    class GVAR(H_6b26_bala_coyote): rhs_6b26_digi_bala {
        author = "RHS, Rad";
        displayName = "6B26 (Balaclava, Coyote) [Military]";
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
    class GVAR(H_6b26_ess_coyote): rhs_6b26_digi_ess {
        author = "RHS, Rad";
        displayName = "6B26 (ESS, Coyote) [Military]";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili_co.paa)
        };
    };
    class GVAR(H_6b26_ess_bala_coyote): rhs_6b26_digi_ess_bala
    {
        author = "RHS, Rad";
        displayName = "6B26 (ESS/Balaclava, Green) [Military]";
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
    class GVAR(H_6b26_olive): rhs_6b26_digi
    {
        author = "RHS, Rad";
        displayName = "6B26 (Olive) [Military]";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili2_co.paa)
        };
    };
    class GVAR(H_6b26_noCover_olive): rhs_6b26_green
    {
        author = "RHS, Rad";
        displayName = "6B26 (No Cover) [Military]";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili2_co.paa)
        };
    };
    class GVAR(H_6b26_bala_olive): rhs_6b26_digi_bala
    {
        author = "RHS, Rad";
        displayName = "6B26 (Balaclava, Olive) [Military]";
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
    class GVAR(H_6b26_ess_olive): rhs_6b26_digi_ess
    {
        author = "RHS, Rad";
        displayName = "6B26 (ESS, Olive) [Military]";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili2_co.paa)
        };
    };
    class GVAR(H_6b26_ess_bala_olive): rhs_6b26_digi_ess_bala
    {
        author = "RHS, Rad";
        displayName = "6B26 (ESS/Balaclava, Olive) [Military]";
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
