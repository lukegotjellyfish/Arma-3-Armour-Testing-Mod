ammoTypicalSpeed = 838.20001
ammoCaliber=1.0253299
ammoPenetration = ammoTypicalSpeed * ammoCaliber * 0.015
#12.89147298649949mm


#1.0253299 * 23.27119641907275 = 23.86065349724822
#838.20001 * 23.86065349724822 * 0.015 = 299.9999999999999

with open("ammoClasses.txt", "w") as _a, open("magClasses.txt", "w") as _m, open("CfgPatchesAmmo.txt", "w") as CfgPatchesAmmo, open("CfgPatchesMag.txt", "w") as CfgPatchesMag, open("CfgPatchesSubmunitionAmmo.txt","w") as CfgPatchesSubmunitionAmmo:
	_ammo        = ""
	_ammoInherit = "rhsusf_ammo_127x99_M33_Ball"
	_mag         = ""
	_magInherit  = "rhsusf_mag_10Rnd_STD_50BMG_M33"
	_submunitionAmmo = ""
	_submunitionAmmoInherit = "rhs_ammo_M830A1_penetrator"
	_ammoParameters    = "	airFriction=0;\n	hit=0;\n	initSpeed=853;\n	typicalSpeed=853;\n	tracersevery=1;\n"
	_submunitionParameters = "	airFriction=0;\n	submunitionAmmo=\"\";\n	hit=0;\n	initSpeed=853;\n	typicalSpeed=853;\n"
	ammoDict     = ""
	magDict      = ""
	submunitionAmmoDict = ""
	for t in range(1,1501):
		if t == 2:
			_ammoInherit = "neko_ammo_1mm_rha"
			_magInherit  = "neko_mag_1mm_rha"
			_submunitionAmmoInherit = "neko_submunitionammo_1mm_rha"
			_ammoParameters = ""
			_submunitionParameters = ""
		newCaliber = (t/ammoPenetration) * ammoCaliber

		submunitionAmmoName = f"neko_submunitionAmmo_{str(t)}mm_rha"
		_submunitionAmmo += ((((((f"class {submunitionAmmoName}: {_submunitionAmmoInherit}" + "\n" + "{") + "\n") + "	caliber=") + str(newCaliber) + ";") + "\n") + _submunitionParameters) + "};\n"


		ammoName = f"neko_ammo_{str(t)}mm_rha"
		_ammo += (((((((f"class {ammoName}: {_ammoInherit}" + "\n" + "{") + "\n") + "	submunitionAmmo=\"") + submunitionAmmoName) + "\";") + "\n") + _ammoParameters) + "};\n"


		magName = f"neko_mag_{str(t)}mm_rha"
		_mag += ((((((((((((((f"class {magName}: {_magInherit}" + "\n" + "{") + "\n") + "	author=\"$STR_RHSUSF_AUTHOR_FULL + Neko\";") + "\n") + "	displayName=\"") + str(t) + "mm RHA\";") + "\n") + "	displayNameShort=\"") + str(t) + "mm RHA\";") + "\n") + "	descriptionShort=\"") + str(t) + "mm RHA\";") + "\n") + "	ammo=\"neko_ammo_") + str(t) + "mm_rha\";\n};\n"


		ammoDict += "\"" + ammoName + "\",\n"
		magDict += "\"" + magName + "\",\n"
		submunitionAmmoDict += "\"" + submunitionAmmoName + "\",\n"
	_a.write(_submunitionAmmo)
	_a.write(_ammo)
	_m.write(_mag)
	CfgPatchesAmmo.write(ammoDict[:-2])
	CfgPatchesMag.write(magDict[:-2])
	CfgPatchesSubmunitionAmmo.write(submunitionAmmoDict[:-2])