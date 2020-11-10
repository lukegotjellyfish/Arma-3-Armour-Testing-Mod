ammoTypicalSpeed = 838.20001
ammoCaliber=1.0253299
ammoPenetration = ammoTypicalSpeed * ammoCaliber * 0.015
#12.89147298649949mm


#1.0253299 * 23.27119641907275 = 23.86065349724822
#838.20001 * 23.86065349724822 * 0.015 = 299.9999999999999

with open("ammoClasses.txt", "w") as _a, open("magClasses.txt", "w") as _m, open("CfgPatchesAmmo.txt", "w") as CfgPatchesAmmo, open("CfgPatchesMag.txt", "w") as CfgPatchesMag:
	_ammo        = ""
	_ammoInherit = "rhsusf_ammo_127x99_M33_Ball"
	_mag         = ""
	_magInherit  = "rhsusf_mag_10Rnd_STD_50BMG_M33"
	_friction    = "	airFriction=0;\n"
	ammoDict     = ""
	magDict      = ""
	for t in range(1,1501):
		if t == 2:
			_ammoInherit = "neko_ammo_1mm_rha"
			_magInherit  = "neko_mag_1mm_rha"
			_friction = ""
		newCaliber = (t/ammoPenetration) * ammoCaliber

		ammoName = "neko_ammo_" + str(t) + "mm_rha"
		_ammo += ("class " + ammoName + ": " + _ammoInherit + "\n" +
		"{" + "\n" + "	caliber=" + str(newCaliber) + ";" + "\n" +
		_friction +
		"};\n")

		magName = "neko_mag_" + str(t) + "mm_rha"
		_mag  += ("class " + magName + ": " + _magInherit + "\n" +
			"{" + "\n" + "	author=\"$STR_RHSUSF_AUTHOR_FULL + Neko\";" + "\n" +
				"	displayName=\"" + str(t) + "mm RHA\";" + "\n" +
				"	displayNameShort=\"" + str(t) + "mm RHA\";" + "\n" +
				"	descriptionShort=\"" + str(t) + "mm RHA\";" + "\n" +
				"	ammo=\"neko_ammo_" + str(t) + "mm_rha\";\n};\n")

		ammoDict += "\"" + ammoName + "\",\n"
		magDict += "\"" + magName + "\",\n"
	_a.write(_ammo)
	_m.write(_mag)
	CfgPatchesAmmo.write(ammoDict[:-2])
	CfgPatchesMag.write(magDict[:-2])