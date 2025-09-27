class CfgWeapons
{
    class H_Beret_02;
	class GVAR(H_beret_grey): H_Beret_02 {
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;

		displayName = "[Military] Beret (Grey)";

		hiddenSelections[] = { "camo" };
		hiddenSelectionsMaterials[] = { QPATHTOF(data\beret.rvmat) };
		hiddenSelectionsTextures[] = { QPATHTOF(data\beret_mili_gry.paa) };
		
        allowedslots[] = { 801, 901, 701 };
	};
	class GVAR(H_beret_green): H_Beret_02 {
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		
        displayName = "[Military] Beret (Green)";

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
    class GVAR(U_model2010_surpat_green): rhs_uniform_flora_patchless
    {
        displayName = "[Military] Model 2010 (SURPAT)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(model2010_surpat_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_model2010_emr_green): rhs_uniform_flora_patchless
    {
        displayName = "[Military] Model 2010 (EMR)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(model2010_emr_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_model2010_ttsko_olive): rhs_uniform_flora_patchless
    {
        displayName = "[Military] Model 2010 (TTsKO)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(model2010_ttsko_olive);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_surpat_green): rhs_uniform_vkpo_gloves
    {
        displayName = "[Military] VKPO (SURPAT, Gloves)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_surpat_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_emr_green): rhs_uniform_vkpo_gloves
    {
        displayName = "[Military] VKPO (EMR, Gloves)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_emr_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_ttsko_olive): rhs_uniform_vkpo_gloves
    {
        displayName = "[Military] VKPO (TTsKO, Gloves)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_ttsko_olive);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_worn_surpat_green): rhs_uniform_vkpo_gloves
    {
        displayName = "[Military] VKPO (SURPAT, Worn, Gloves)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_worn_surpat_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_worn_emr_green): rhs_uniform_vkpo_gloves
    {
        displayName = "[Military] VKPO (EMR, Worn, Gloves)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_worn_emr_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_gloves_worn_ttsko_olive): rhs_uniform_vkpo_gloves
    {
        displayName = "[Military] VKPO (TTsKO, Worn, Gloves)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_gloves_worn_ttsko_olive);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class GVAR(U_vkpo_surpat_green): rhs_uniform_vkpo
    {
        displayName = "[Military] VKPO (SURPAT)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_surpat_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_emr_green): rhs_uniform_vkpo
    {
        displayName = "[Military] VKPO (EMR)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_emr_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_ttsko_olive): rhs_uniform_vkpo
    {
        displayName = "[Military] VKPO (TTsKO)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_ttsko_olive);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_worn_surpat_green): rhs_uniform_vkpo
    {
        displayName = "[Military] VKPO (SURPAT, Worn)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_worn_surpat_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_worn_emr_green): rhs_uniform_vkpo
    {
        displayName = "[Military] VKPO (EMR, Worn)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_worn_emr_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_vkpo_worn_ttsko_olive): rhs_uniform_vkpo
    {
        displayName = "[Military] VKPO (TTsKO, Worn)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(vkpo_worn_ttsko_olive);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class rhs_uniform_6sh122_gloves_v1;
    class GVAR(U_6sh122_gloves_surpat_green): rhs_uniform_6sh122_gloves_v1
    {
        displayName = "[Military] 6Sh122 (SURPAT, Gloves)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(6sh122_gloves_surpat_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_6sh122_gloves_emr_green): rhs_uniform_6sh122_gloves_v1
    {
        displayName = "[Military] 6Sh122 (EMR, Gloves)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(6sh122_gloves_emr_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_6sh122_gloves_ttsko_olive): rhs_uniform_6sh122_gloves_v1
    {
        displayName = "[Military] 6Sh122 (TTsKO, Gloves)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(6sh122_gloves_ttsko_olive);
            containerClass = "Supply40";
            mass = 40;
        };
    };

	class rhs_uniform_6sh122_v1;
    class GVAR(U_6sh122_surpat_green): rhs_uniform_6sh122_v1
    {
        displayName = "[Military] 6Sh122 (SURPAT)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(6sh122_surpat_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_6sh122_emr_green): rhs_uniform_6sh122_v1
    {
        displayName = "[Military] 6Sh122 (EMR)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(6sh122_emr_green);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class GVAR(U_6sh122_ttsko_olive): rhs_uniform_6sh122_v1
    {
        displayName = "[Military] 6Sh122 (TTsKO)";
        class ItemInfo: UniformItem
        {
            uniformClass = QGVAR(6sh122_ttsko_olive);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // VESTS
    class GVAR(V_6b23_vydra_3m_olive): rhs_6b23_vydra_3m
    {
        displayName = "[Military] 6B23 (Vydra-3M)";
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
        displayName = "[Military] 6B23 (6Sh92/VOG)";
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
        displayName = "[Military] Vydra-3M";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\crew_equip_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6sh92_olive): rhs_6sh92_digi
    {
        displayName = "[Military] 6Sh92";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_olive): rhs_6b23
    {
        displayName = "[Military] 6B23";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_6sh92_headset_olive): rhs_6b23_6sh92_headset
    {
        displayName = "[Military] 6B23 (6Sh92/Headset)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_6sh92_headset_mapcase_olive): rhs_6b23_6sh92_headset_mapcase
    {
        displayName = "[Military] 6B23 (6Sh92/Headset/Mapcase)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_6sh92_radio_olive): rhs_6b23_6sh92_radio
    {
        displayName = "[Military] 6B23 (6Sh92/Radio)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_6sh92_vog_headset_olive): rhs_6b23_6sh92_vog_headset
    {
        displayName = "[Military] 6B23 (6Sh92/VOG/Headset)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_crewofficer_olive): rhs_6b23_crewofficer
    {
        displayName = "[Military] 6B23 (Crew Officer)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_crew_olive): rhs_6b23_crew
    {
        displayName = "[Military] 6B23 (Crew)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_engineer_olive): rhs_6b23_engineer
    {
        displayName = "[Military] 6B23 (Engineer)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_medic_olive): rhs_6b23_medic
    {
        displayName = "[Military] 6B23 (Medic)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_rifleman_olive): rhs_6b23_rifleman
    {
        displayName = "[Military] 6B23 (Rifleman)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6b23_sniper_olive): rhs_6b23_sniper
    {
        displayName = "[Military] 6B23 (Sniper)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6sh92_headset_olive): rhs_6sh92_headset
    {
        displayName = "[Military] 6Sh92 (Headset)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6sh92_radio_olive): rhs_6sh92_radio
    {
        displayName = "[Military] 6Sh92 (Radio)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6sh92_vog_olive): rhs_6sh92_vog
    {
        displayName = "[Military] 6Sh92 (VOG)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b23_mili_co.paa),
            QPATHTOF(data\gearpack1_6sh92_mili_co.paa)
        };
        author = "RHS, Rad";
    };
    class GVAR(V_6sh92_vog_headset_olive): rhs_6sh92_vog_headset
    {
        displayName = "[Military] 6Sh92 (VOG/Headset)";
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
	class rhs_6b26_bala_green;
	class rhs_6b26_ess_green;
	class rhs_6b26_ess_bala_green;
    class GVAR(H_6b26_coyote): rhs_6b26_digi {
        author = "RHS, Rad";
        displayName = "[Military] 6B26 (Coyote)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili_co.paa)
        };
    };
    class GVAR(H_6b26_bala_coyote): rhs_6b26_digi_bala {
        author = "RHS, Rad";
        displayName = "[Military] 6B26 (Coyote, Balaclava)";
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
        displayName = "[Military] 6B26 (Coyote, ESS)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili_co.paa)
        };
    };
    class GVAR(H_6b26_ess_bala_coyote): rhs_6b26_digi_ess_bala
    {
        author = "RHS, Rad";
        displayName = "[Military] 6B26 (Coyote, ESS/Balaclava)";
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
        displayName = "[Military] 6B26 (Olive)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili2_co.paa)
        };
    };
    class GVAR(H_6b26_noCover_olive): rhs_6b26_green
    {
        author = "RHS, Rad";
        displayName = "[Military] 6B26 (No Cover)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili2_co.paa)
        };
    };
    class GVAR(H_6b26_noCover_bala_olive): rhs_6b26_bala_green
    {
        author = "RHS, Rad";
        displayName = "[Military] 6B26 (No Cover, Balaclava)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili2_co.paa)
        };
    };
    class GVAR(H_6b26_noCover_ess_olive): rhs_6b26_ess_green
    {
        author = "RHS, Rad";
        displayName = "[Military] 6B26 (No Cover, ESS)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili2_co.paa)
        };
    };
    class GVAR(H_6b26_noCover_ess_bala_olive): rhs_6b26_ess_bala_green
    {
        author = "RHS, Rad";
        displayName = "[Military] 6B26 (No Cover, ESS/Balaclava)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili2_co.paa)
        };
    };
    class GVAR(H_6b26_bala_olive): rhs_6b26_digi_bala
    {
        author = "RHS, Rad";
        displayName = "[Military] 6B26 (Olive, Balaclava)";
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
        displayName = "[Military] 6B26 (Olive, ESS)";
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\6b27_mili2_co.paa)
        };
    };
    class GVAR(H_6b26_ess_bala_olive): rhs_6b26_digi_ess_bala
    {
        author = "RHS, Rad";
        displayName = "[Military] 6B26 (Olive, ESS/Balaclava)";
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
