#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = ADDON_NAME;
        
        author = "$STR_stalker_retextures_author";
        authors[] = {"Nomas / Redwan S."};
        
        url = "$STR_stalker_retextures_author_URL";
        
        VERSION_CONFIG;
        
        // Addon Specific Information
        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
		requiredVersion = 2.16;

        // Required addons, used for setting load order.
        // When any of the addons is missing, pop-up warning will appear when launching the game.
        requiredAddons[] = {};

        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups)
        units[] = {};

        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};

    };
};

/*
class CfgPatches
{
	class rhs_vanilla   // wtf?
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
*/

#include "CfgGlasses.hpp"
#include "CfgWeapons.hpp"
