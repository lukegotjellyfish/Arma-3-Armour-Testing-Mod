class CfgPatches
{
	class neko_kinetic_typicalSpeed_test_missile
	{
		addonrootclass="rhsusf_c_heavyweapons";
		requiredversion=1.7;
		requiredaddons[]=
		{
			"rhsusf_c_heavyweapons"
		};
		version="1.0";
		projectname="Neko's Missile TypicalSpeed Test Mod";
		author="Discord: Lukegotjellyfish#0473";
		ammo[]=
		{
			"neko_kinetic_typicalSpeed_test_missile"
		};
		magazines[]=
		{
			"neko_mag_kinetic_typicalSpeed_test_missile"
		};
	};
};

class CfgAmmo
{
	class Default;
	class MissileCore: Default
	{};
	class MissileBase: MissileCore
	{}
	class M_Titan_AT: MissileBase
	{};
	class rhs_ammo_TOW_AT: M_Titan_AT
	{};
	class rhs_ammo_TOWB_AT: rhs_ammo_TOW_AT
	{};
	class rhs_ammo_TOW2_AT: rhs_ammo_TOWB_AT
	{};
	class rhs_ammo_TOW2A_AT: rhs_ammo_TOW2_AT
	{};
	class neko_kinetic_typicalSpeed_test_missile: rhs_ammo_TOW2A_AT
	{
		hit=400000;
		explosive=0;
		indirectHit=0;
		submunitionAmmo="";
		maxSpeed=100;
		typicalSpeed=99999999;
	}
}
class CfgMagazines
{
	class VehicleMagazine;
	class rhs_mag_2Rnd_TOW: VehicleMagazine
	{};
	class rhs_mag_2Rnd_TOW2A: rhs_mag_2Rnd_TOW
	{};
	class neko_mag_kinetic_typicalSpeed_test_missile: rhs_mag_2Rnd_TOW2A
	{
		count=1000;
		initSpeed=100;
		ammo="neko_kinetic_typicalSpeed_test_missile";
		displayname="Neko Kinetic TypicalSpeed Test";
		displaynameshort = "Neko Kinetic TypicalSpeed Test";
	}
}

class CfgWeapons
{

	class missiles_titan;
	class rhs_weap_TOW_Launcher: missiles_titan
	{
		magazines[]=
		{
			"rhs_mag_2Rnd_TOW",
			"rhs_mag_2Rnd_TOWB",
			"rhs_mag_2Rnd_ITOW",
			"rhs_mag_2Rnd_TOW2",
			"rhs_mag_2Rnd_TOW2A",
			"rhs_mag_2Rnd_TOW2B",
			"rhs_mag_2Rnd_TOW2B_AERO",
			"rhs_mag_2Rnd_TOW2BB",
			"neko_mag_kinetic_typicalSpeed_test_missile"
		};
	}
};
