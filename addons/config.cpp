class CfgPatches
{
	class neko_magazines
	{
		units[]={};
		weapons[]={};
		addonrootclass="rhsusf_c_weapons";
		requiredversion=1.6;
		requiredaddons[]=
		{
			"a3_sounds_f",
			"a3_weapons_f",
			"a3_sounds_f_exp",
			"a3_weapons_f_exp",
			"rhsusf_c_weapons",
			"rhsusf_c_heavyweapons",
			"rhsusf_c_airweapons",
			"rhsusf_sounds",
			"rhsusf_c_weaponsounds"
		};
		version="1";
		projectname="Neko's armour testing ammo";
		author="Lukegotjellyfish#0473";
		ammo[]=
		{
			"neko_ammo_300mm_rha",
			"neko_ammo_400mm_rha",
			"neko_ammo_500mm_rha",
			"neko_ammo_600mm_rha",
			"neko_ammo_700mm_rha",
			"neko_ammo_800mm_rha",
			"neko_ammo_900mm_rha",
			"neko_ammo_1000mm_rha",
			"neko_ammo_1100mm_rha",
			"neko_ammo_1200mm_rha",
			"neko_ammo_1300mm_rha",
			"neko_ammo_1400mm_rha",
			"neko_ammo_1500mm_rha",
			"neko_ammo_1600mm_rha"
		};
		magazines[]=
		{
			"neko_mag_300mm_rha",
			"neko_mag_400mm_rha",
			"neko_mag_500mm_rha",
			"neko_mag_600mm_rha",
			"neko_mag_700mm_rha",
			"neko_mag_800mm_rha",
			"neko_mag_900mm_rha",
			"neko_mag_1000mm_rha",
			"neko_mag_1100mm_rha",
			"neko_mag_1200mm_rha",
			"neko_mag_1300mm_rha",
			"neko_mag_1400mm_rha",
			"neko_mag_1500mm_rha",
			"neko_mag_1600mm_rha"
		};
	};
};


class CfgAmmo
{
	class B_127x99_Ball;
	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball;
	class neko_magXmm_rha
	{

	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 10Rnd_RHS_50BMG_Box: CA_Magazine;
	class rhsusf_mag_10Rnd_STD_50BMG_M33: 10Rnd_RHS_50BMG_Box;
	class neko_mag_Xmm_rha: rhsusf_mag_10Rnd_STD_50BMG_M33
	{
		author="$STR_RHSUSF_AUTHOR_FULL + Neko";
		displayName="mm RHA";
		displayNameShort="mm RHA";
		descriptionShort="mm RHA";
		ammo="";
	};

};



class CfgWeapons
{
	class Rifle
	{

	};
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
		class Eventhandlers;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class GM6_base_F: Rifle_Long_Base_F
	{
	};
	class rhs_weap_M107_Base_F: GM6_base_F
	{
		magazines[]=
		{
			"rhsusf_mag_10Rnd_STD_50BMG_M33",
			"rhsusf_mag_10Rnd_STD_50BMG_mk211"
			"neko_mag_300mm_rha",
			"neko_mag_400mm_rha",
			"neko_mag_500mm_rha",
			"neko_mag_600mm_rha",
			"neko_mag_700mm_rha",
			"neko_mag_800mm_rha",
			"neko_mag_900mm_rha",
			"neko_mag_1000mm_rha",
			"neko_mag_1100mm_rha",
			"neko_mag_1200mm_rha",
			"neko_mag_1300mm_rha",
			"neko_mag_1400mm_rha",
			"neko_mag_1500mm_rha",
			"neko_mag_1600mm_rha"
		};
	};
};