class CfgPatches
{
	class neko_zerocal_magazines
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
		version="1.1";
		ammo[]=
		{
			"neko_ammo_zerocal"
		};
		magazines[]=
		{
			"neko_mag_neko_zerocal"
		};
	};
};

class CfgAmmo
{
	class B_127x99_Ball;
	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball
	{
	};
	class neko_ammo_zerocal: rhsusf_ammo_127x99_M33_Ball
	{
		caliber=0;
		airFriction=0;
		initSpeed=853;
		typicalSpeed=853;
		tracersevery=1;
	};
}


class CfgMagazines
{
	class CA_Magazine;
	class 10Rnd_RHS_50BMG_Box: CA_Magazine
	{
	};
	class rhsusf_mag_10Rnd_STD_50BMG_M33: 10Rnd_RHS_50BMG_Box
	{
	};
	class neko_mag_zerocal: rhsusf_mag_10Rnd_STD_50BMG_M33
	{
		mass=0;
		count=10000;
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="zero cal";
		displayNameShort="zero cal";
		descriptionShort="zero cal";
		ammo="neko_ammo_zerocal";
	};
}

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
	};
	class GM6_base_F: Rifle_Long_Base_F
	{
	};
	class rhs_weap_M107_Base_F: GM6_base_F
	{
		recoil="";
		maxRecoilSway=0;
		class Single: Mode_SemiAuto
		{
			dispersion=0;
		};
		magazines[]=
		{
			"rhsusf_mag_10Rnd_STD_50BMG_M33",
			"rhsusf_mag_10Rnd_STD_50BMG_mk211",
			"neko_mag_zerocal"
		};
	};
};