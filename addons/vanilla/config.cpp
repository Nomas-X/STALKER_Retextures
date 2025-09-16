class CfgPatches
{
	class rhs_vanilla
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgGlasses
{
	class G_Sport_BlackWhite;
	class G_bandanna_blk;
	class G_bandanna_aviator;
	class G_Bandanna_sport;
	class G_bandanna_duty: G_bandanna_blk
	{
		displayName="Scarf [Duty]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\vanilla\data\bandana_duty.paa"
		};
	};
	class G_bandanna_mili: G_bandanna_blk
	{
		displayName="Scarf [Military]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\vanilla\data\bandana_olive.paa"
		};
	};
};
class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class HeadgearItem;
	class H_Beret_02;
	class H_Cap_blk;
	class H_Cap_Headphones;
	class H_beret_01_duty: H_Beret_02
	{
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		displayName="Beret (Red) [Duty]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"\vanilla\data\beret.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\vanilla\data\beret_duty_red.paa"
		};
		allowedslots[]={801,901,701};
	};
	class H_beret_02_duty: H_Beret_02
	{
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		displayName="Beret (Black) [Duty]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"\vanilla\data\beret.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\vanilla\data\beret_duty_blk.paa"
		};
		allowedslots[]={801,901,701};
	};
	class H_beret_01_mili: H_Beret_02
	{
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		displayName="Beret (Grey) [Military]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"\vanilla\data\beret.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\vanilla\data\beret_mili_gry.paa"
		};
		allowedslots[]={801,901,701};
	};
	class H_beret_02_mili: H_Beret_02
	{
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		displayName="Beret (Green) [Military]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"\vanilla\data\beret.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\vanilla\data\beret_mili_grn.paa"
		};
		allowedslots[]={801,901,701};
	};
};
class cfgMods
{
	author="Rad";
	timepacked="1750963545";
};
