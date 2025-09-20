class CfgWeapons
{
	// class InventoryItem_Base_F;
	// class ItemCore;
	// class HeadgearItem;
	// class H_Cap_blk;
	// class H_Cap_Headphones;
	
    class H_Beret_02;
	class sr_vanilla_H_beret_duty_01: H_Beret_02
	{
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName="Beret (Red) [Duty]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"\z\stalker_retextures\addons\vanilla\data\beret.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\z\stalker_retextures\addons\vanilla\data\beret_duty_red.paa"
		};
		allowedslots[]={801,901,701};
	};
	class sr_vanilla_H_beret_duty_02: H_Beret_02
	{
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName="Beret (Black) [Duty]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"\z\stalker_retextures\addons\vanilla\data\beret.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\z\stalker_retextures\addons\vanilla\data\beret_duty_blk.paa"
		};
		allowedslots[]={801,901,701};
	};
	class sr_vanilla_H_beret_military_01: H_Beret_02
	{
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName="Beret (Grey) [Military]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"\z\stalker_retextures\addons\vanilla\data\beret.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\z\stalker_retextures\addons\vanilla\data\beret_mili_gry.paa"
		};
		allowedslots[]={801,901,701};
	};
	class sr_vanilla_H_beret_military_02: H_Beret_02
	{
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName="Beret (Green) [Military]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"\z\stalker_retextures\addons\vanilla\data\beret.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\z\stalker_retextures\addons\vanilla\data\beret_mili_grn.paa"
		};
		allowedslots[]={801,901,701};
	};
};
