#region Local Var
	int iLocal_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_33[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_66[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	vector3 vLocal_166[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_263[5] = { 0, 0, 0, 0, 0 };
	int iLocal_269[5] = { 0, 0, 0, 0, 0 };
	int iLocal_275[5] = { 0, 0, 0, 0, 0 };
	int iLocal_281 = 0;
	int iLocal_282[5] = { 0, 0, 0, 0, 0 };
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_323 = 0;
	int iLocal_324 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_2())
	{
		switch (iLocal_324)
		{
			case 0:
				func_3();
				iLocal_324 = 1;
				break;
			case 1:
				func_4();
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	int iVar0;

	func_5();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_6(iVar0, 1);
		iVar0++;
	}
	if (func_7(1))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			AUDIO::RELEASE_SOUND_ID(iLocal_275[iVar0]);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			AUDIO::RELEASE_SOUND_ID(iLocal_282[iVar0]);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			AUDIO::RELEASE_SOUND_ID(iLocal_263[iVar0]);
			iVar0++;
		}
		AUDIO::_0x531A78D6BF27014B(func_8());
	}
	if (func_7(2))
	{
		STREAMING::REMOVE_ANIM_DICT(func_9());
	}
	if (func_7(4))
	{
		STREAMING::REMOVE_PTFX_ASSET();
	}
	func_10();
}

bool func_2()
{
	if (func_11(1, 1))
	{
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return true;
	}
	if (func_7(32))
	{
		return true;
	}
	return false;
}

void func_3()
{
	int iVar0;

	iLocal_289 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		vLocal_166[iVar0 /*3*/] = { 0f, 0f, 0f };
		func_12(4, iVar0);
		iVar0++;
	}
}

void func_4()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	int iVar18;
	int iVar19;

	if (func_7(16))
	{
		func_13(16);
	}
	bVar8 = false;
	iVar3 = 0;
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		if (!Global_1296859.f_22[iVar4])
		{
			func_6(iVar4, 0);
		}
		else
		{
			iVar18 = Global_1296859.f_154[iVar4];
			iVar19 = PLAYER::GET_PLAYER_PED(iVar18);
			if (iVar19 == Global_34)
			{
				bVar5 = true;
				vVar12 = { Global_35 };
			}
			else
			{
				bVar5 = false;
				vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar19, true, false) };
				fVar2 = BUILTIN::VDIST2(Global_35, vVar12);
				if (fVar2 > 2500f)
				{
					func_6(iVar4, 0);
				}
				else
				{
					vVar9 = { func_14(iVar19, iVar4, bVar5) };
					vVar15 = { vVar12 };
					vVar15.f_2 = (vVar15.z - 1f);
					fVar0 = BUILTIN::VDIST(vVar15, vVar9);
					fVar1 = ((80f - fVar0) / 80f);
					fVar1 = func_15(fVar1, 0f, 1f);
					bVar7 = false;
					bVar6 = false;
					if (!bVar5)
					{
						if (func_16(vVar9))
						{
							func_6(iVar4, 0);
						}
						else
						{
							iVar3++;
							func_17(iVar19, iVar4, bVar5, &bVar7);
							if (!bVar7)
							{
								func_6(iVar4, bVar5);
								if (bVar5)
								{
									func_5();
								}
							}
							else if (ENTITY::DOES_ENTITY_EXIST(iLocal_0[iVar4]))
							{
								if (!func_18(256, iVar4))
								{
									func_12(256, iVar4);
								}
								if (bVar5)
								{
									if (!func_7(512))
									{
										func_19(817, 0);
										func_20(512);
									}
									iVar3++;
									if (func_16(vVar9) || fVar0 > 80f)
									{
										func_21();
										func_5();
										func_22(iVar4);
									}
									else
									{
										func_23(fVar0, fVar1);
										func_24();
										if (!func_7(256))
										{
											bVar8 = true;
										}
										else
										{
											if (!bVar5)
											{
												if (fVar2 < 225f)
												{
													if (!func_18(128, iVar4))
													{
														func_12(128, iVar4);
													}
												}
												else if (func_18(128, iVar4))
												{
													func_25(128, iVar4);
												}
											}
											if (func_18(4, iVar4))
											{
												func_25(4, iVar4);
											}
											func_26(iVar4, bVar5, fVar0, fVar1, &bVar6);
											func_27(iVar4, fVar1);
											if (bVar6)
											{
												func_28(bVar5, iVar4);
											}
											else
											{
												func_29(iVar4);
											}
										}
									}
									iVar4++;
									if (bVar8)
									{
										if ((func_30() && func_31()) && func_32())
										{
											func_20(256);
										}
									}
									iLocal_289++;
									if (iLocal_289 >= 32)
									{
										iLocal_289 = 0;
										if (!func_7(128))
										{
											func_20(128);
										}
									}
									if (iVar3 == 0 && func_7(128))
									{
										func_20(32);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_5()
{
	if (func_7(8))
	{
		DECORATOR::DECOR_REMOVE(Global_34, "DigSiteX");
		DECORATOR::DECOR_REMOVE(Global_34, "DigSiteY");
		DECORATOR::DECOR_REMOVE(Global_34, "DigSiteZ");
		func_13(8);
	}
}

void func_6(int iParam0, bool bParam1)
{
	if (!func_18(256, iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_10();
	}
	func_22(iParam0);
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_0[iParam0]));
	iLocal_0[iParam0] = 0;
	func_25(256, iParam0);
}

bool func_7(int iParam0)
{
	return func_33(uLocal_323, iParam0);
}

char* func_8()
{
	return "RDRO_Metal_Detector_Sounds";
}

char* func_9()
{
	return "mech_weapons_dual@metaldetector@operate";
}

void func_10()
{
	if (func_7(64))
	{
		PAD::_0xA0CEFCEA390AAB9B(0);
		func_13(64);
	}
}

bool func_11(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_12)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_12(int iParam0, int iParam1)
{
	func_34(&(uLocal_290[iParam1]), iParam0);
}

void func_13(int iParam0)
{
	func_35(&uLocal_323, iParam0);
}

Vector3 func_14(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_1212889;
	}
	return func_36(iParam0, iParam1);
}

float func_15(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_16(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_17(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	if (bParam2)
	{
		if (Global_1940258.f_38 == joaat("WEAPON_KIT_METAL_DETECTOR"))
		{
			*iParam3 = 1;
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_0[iParam1]))
			{
				iLocal_0[iParam1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0, 0));
			}
		}
	}
	else if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false))
	{
		if (iVar0 == joaat("WEAPON_KIT_METAL_DETECTOR"))
		{
			*iParam3 = 1;
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_0[iParam1]))
			{
				iLocal_0[iParam1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0, 0));
			}
		}
	}
	if (!*iParam3)
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 1, false))
		{
			if (iVar0 == joaat("WEAPON_KIT_METAL_DETECTOR"))
			{
				*iParam3 = 1;
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_0[iParam1]))
				{
					iLocal_0[iParam1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0, 1));
				}
			}
		}
	}
}

bool func_18(int iParam0, int iParam1)
{
	return func_33(uLocal_290[iParam1], iParam0);
}

void func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_37(iParam0, &iVar0, &iVar1);
	if (!func_38(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_39(iVar0, iVar1);
}

void func_20(int iParam0)
{
	func_34(&uLocal_323, iParam0);
}

void func_21()
{
	if (!func_7(64))
	{
		PAD::_0xF239400E16C23E08(0, 0);
		func_20(64);
	}
}

void func_22(int iParam0)
{
	if (func_18(4, iParam0))
	{
		return;
	}
	if (func_18(2, iParam0))
	{
		OBJECT::_0xF49574E2332A8F06(iLocal_0[iParam0], 0f);
		func_25(2, iParam0);
	}
	if (func_18(32, iParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_33[iParam0], true);
		func_25(32, iParam0);
	}
	if (func_18(16, iParam0))
	{
		ENTITY::STOP_ENTITY_ANIM(iLocal_0[iParam0], func_40(), func_9(), -1000f);
		func_25(16, iParam0);
	}
	func_29(iParam0);
	func_12(4, iParam0);
}

void func_23(float fParam0, float fParam1)
{
	PED::_SET_PED_BLACKBOARD_FLOAT(Global_34, "MetalDetectorDistanceToDigSite", fParam0, 10);
	PED::_SET_PED_BLACKBOARD_FLOAT(Global_34, "MetalDetectorDetectionValue", fParam1, 10);
}

void func_24()
{
	if (!func_7(8))
	{
		DECORATOR::DECOR_SET_FLOAT(Global_34, "DigSiteX", Global_1212889);
		DECORATOR::DECOR_SET_FLOAT(Global_34, "DigSiteY", Global_1212889.f_1);
		DECORATOR::DECOR_SET_FLOAT(Global_34, "DigSiteZ", Global_1212889.f_2);
		func_20(8);
	}
}

void func_25(int iParam0, int iParam1)
{
	func_35(&(uLocal_290[iParam1]), iParam0);
}

void func_26(int iParam0, bool bParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	bool bVar3;

	iVar0 = BUILTIN::FLOOR(func_41(BUILTIN::TO_FLOAT(3000), BUILTIN::TO_FLOAT(30), fParam3));
	fVar1 = func_41(1400f, 2000f, fParam3);
	iVar2 = (iVar0 / 6);
	bVar3 = false;
	if (fParam2 < 1.6f)
	{
		*iParam4 = 1;
		bVar3 = true;
	}
	else if (!func_18(1, iParam0))
	{
		if (!func_42(&(vLocal_66[iParam0 /*3*/])) || func_43(&(vLocal_66[iParam0 /*3*/])) > iVar0)
		{
			func_44(&(vLocal_66[iParam0 /*3*/]));
			func_12(1, iParam0);
			bVar3 = true;
		}
	}
	else if (func_43(&(vLocal_66[iParam0 /*3*/])) < iVar2)
	{
		bVar3 = true;
	}
	else
	{
		func_25(1, iParam0);
	}
	if (bVar3)
	{
		func_45(bParam1, iParam0);
		if (bParam1)
		{
			func_10();
			if (!func_42(&uLocal_163))
			{
				func_44(&uLocal_163);
			}
			if (func_43(&uLocal_163) < 5000)
			{
				PAD::SET_PAD_SHAKE(0, 68, 110);
			}
			else if (func_43(&uLocal_163) >= 7000)
			{
				func_44(&uLocal_163);
			}
		}
		if (!func_18(32, iParam0))
		{
			iLocal_33[iParam0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(func_46(), iLocal_0[iParam0], func_47(), func_48(), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_0[iParam0], func_49()), 1f, false, false, false);
			func_12(32, iParam0);
		}
		if (!func_18(2, iParam0))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_33[iParam0], func_50(), fParam3, true);
			func_12(2, iParam0);
		}
		OBJECT::_0xF49574E2332A8F06(iLocal_0[iParam0], (fVar1 * func_51()));
	}
	else
	{
		if (bParam1)
		{
			if (func_42(&uLocal_163))
			{
				func_52(&uLocal_163);
			}
			func_21();
		}
		if (func_18(2, iParam0))
		{
			OBJECT::_0xF49574E2332A8F06(iLocal_0[iParam0], 0f);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_33[iParam0], func_50(), 0f, true);
			func_25(2, iParam0);
		}
	}
}

void func_27(int iParam0, float fParam1)
{
	if (!func_18(16, iParam0))
	{
		if (ENTITY::PLAY_ENTITY_ANIM(iLocal_0[iParam0], func_40(), func_9(), 1000f, true, false, false, 0f, 0))
		{
			func_12(16, iParam0);
			if (!func_18(64, iParam0))
			{
				func_12(64, iParam0);
			}
		}
	}
	else if (iLocal_289 == iParam0 || func_18(64, iParam0))
	{
		ENTITY::_SET_ENTITY_ANIM_SPEED(iLocal_0[iParam0], func_9(), func_40(), (fParam1 * 2f));
		if (func_18(64, iParam0))
		{
			func_25(64, iParam0);
		}
	}
}

void func_28(bool bParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	var uVar3;

	if (func_18(8, iParam1))
	{
		return;
	}
	if (!bParam0 && !func_18(128, iParam1))
	{
		return;
	}
	iVar0 = func_53(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	sVar1 = func_8();
	sVar2 = func_54();
	if (bParam0)
	{
		uVar3 = Global_34;
	}
	else
	{
		uVar3 = iLocal_0[iParam1];
	}
	AUDIO::_0xF1C5310FEAA36B48(iVar0, sVar2, uVar3, sVar1, 0, 0);
	func_12(8, iParam1);
}

void func_29(int iParam0)
{
	int iVar0;

	if (!func_18(8, iParam0))
	{
		return;
	}
	iVar0 = func_55(iParam0, 1);
	if (iVar0 != -1)
	{
		AUDIO::_0x3210BCB36AF7621B(iVar0);
	}
	func_25(8, iParam0);
}

int func_30()
{
	int iVar0;

	if (func_7(1))
	{
		return 1;
	}
	if (AUDIO::_0xD9130842D7226045(func_8(), 0))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iLocal_275[iVar0] = AUDIO::GET_SOUND_ID();
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iLocal_282[iVar0] = AUDIO::GET_SOUND_ID();
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iLocal_263[iVar0] = AUDIO::GET_SOUND_ID();
			iLocal_269[iVar0] = -1;
			iVar0++;
		}
		func_20(1);
		return 1;
	}
	return 0;
}

int func_31()
{
	if (func_7(2))
	{
		return 1;
	}
	STREAMING::REQUEST_ANIM_DICT(func_9());
	if (STREAMING::HAS_ANIM_DICT_LOADED(func_9()))
	{
		func_20(2);
		return 1;
	}
	return 0;
}

int func_32()
{
	if (func_7(4))
	{
		return 1;
	}
	STREAMING::REQUEST_PTFX_ASSET();
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		func_20(4);
		return 1;
	}
	return 0;
}

bool func_33(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_35(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

Vector3 func_36(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (func_56(iParam1))
	{
		vVar0 = { 0f, 0f, 0f };
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "DigSiteX"))
		{
			vVar0.x = DECORATOR::DECOR_GET_FLOAT(iParam0, "DigSiteX");
			vVar0.f_1 = DECORATOR::DECOR_GET_FLOAT(iParam0, "DigSiteY");
			vVar0.f_2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "DigSiteZ");
		}
		vLocal_166[iParam1 /*3*/] = { vVar0 };
	}
	return vLocal_166[iParam1 /*3*/];
}

void func_37(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_38(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_57(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_58(iParam0))
	{
		return false;
	}
	if (func_59(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_60(iParam0, 1)) || func_61(32768))
	{
		if (!func_60(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_62())
	{
		return false;
	}
	return true;
}

void func_39(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

char* func_40()
{
	return "spin_dial";
}

float func_41(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_42(var uParam0)
{
	return func_63(*uParam0, 1);
}

int func_43(var uParam0)
{
	if (!func_42(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_64(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_65() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_44(var uParam0)
{
	func_66(uParam0, 0f);
}

void func_45(bool bParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;

	if (func_18(2, iParam1))
	{
		return;
	}
	if (!bParam0)
	{
		if (!func_18(128, iParam1) || func_7(16))
		{
			return;
		}
	}
	sVar0 = func_8();
	sVar1 = func_67();
	if (bParam0)
	{
		AUDIO::_0xF1C5310FEAA36B48(iLocal_275[iLocal_281], sVar1, Global_34, sVar0, 0, 0);
		iLocal_281++;
		if (iLocal_281 >= 5)
		{
			iLocal_281 = 0;
		}
	}
	else
	{
		AUDIO::_0xF1C5310FEAA36B48(iLocal_282[iLocal_288], sVar1, iLocal_0[iParam1], sVar0, 0, 0);
		iLocal_288++;
		if (iLocal_288 >= 5)
		{
			iLocal_288 = 0;
		}
		func_20(16);
	}
}

char* func_46()
{
	return "scr_mp_metal_detector_sparks";
}

Vector3 func_47()
{
	return 0f, -0.09f, 0f;
}

Vector3 func_48()
{
	return 0f, 0f, 0f;
}

char* func_49()
{
	return "Detector_Spin_Bone";
}

char* func_50()
{
	return "intensity";
}

float func_51()
{
	int iVar0;
	int iVar1;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	if ((iVar0 == 5 && iVar1 >= 30) || (iVar0 == 6 && iVar1 < 30))
	{
		return func_68(0, 5, 30, 3600);
	}
	if ((iVar0 == 19 && iVar1 >= 45) || (iVar0 == 20 && iVar1 < 20))
	{
		return func_68(1, 19, 45, 2100);
	}
	if (((iVar0 > 6 && iVar0 < 19) || (iVar0 == 6 && iVar1 >= 30)) || (iVar0 == 19 && iVar1 < 45))
	{
		return 1000f;
	}
	return 1f;
}

void func_52(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iLocal_269[iVar1] == -1 || iLocal_269[iVar1] == iParam0)
		{
			iVar0 = iLocal_263[iVar1];
			if (iLocal_269[iVar1] != iParam0)
			{
				iLocal_269[iVar1] = iParam0;
			}
			return iVar0;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_54()
{
	return "Metal_Detector_Spin";
}

int func_55(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iLocal_269[iVar1] == iParam0)
		{
			iVar0 = iLocal_263[iVar1];
			if (bParam1)
			{
				iLocal_269[iVar1] = -1;
			}
			return iVar0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_56(int iParam0)
{
	return (iLocal_289 % 8) == (iParam0 / 4);
}

bool func_57(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_58(int iParam0)
{
	if (func_60(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (iVar1 - Global_39.f_3534[iVar0 /*3*/]);
			if (Global_39.f_3534[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_60(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_61(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_62()
{
	if (!func_69())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

bool func_63(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_64(var uParam0)
{
	return func_63(*uParam0, 2);
}

int func_65()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_66(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_70() - fParam1);
	func_71(uParam0, 1);
	func_72(uParam0, 2);
	uParam0->f_2 = 0f;
}

char* func_67()
{
	return "Metal_Detector";
}

float func_68(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar0 = (CLOCK::GET_CLOCK_HOURS() - iParam1);
	iVar1 = (CLOCK::GET_CLOCK_MINUTES() - iParam2);
	iVar2 = ((CLOCK::GET_CLOCK_SECONDS() + iVar1 * 60) + iVar0 * 3600);
	fVar3 = (BUILTIN::TO_FLOAT(iVar2) / IntToFloat(iParam3));
	fVar3 = func_15(fVar3, 0f, 1f);
	if (bParam0)
	{
		return func_41(1000f, 1f, fVar3);
	}
	return func_41(1f, 1000f, fVar3);
}

bool func_69()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

float func_70()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_71(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_72(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

