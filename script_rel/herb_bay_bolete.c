#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	bool bLocal_22 = false;
	vector3 vLocal_23[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_36[4] = { 0, 0, 0, 0 };
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	struct<39> Var0;
	float fVar39;
	bool bVar40;
	int iVar41;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Var0.f_9 = 3;
	Var0.f_13 = 4;
	Var0.f_20 = 1;
	Var0.f_21 = 1;
	Var0.f_22 = 4;
	Var0.f_28 = 4;
	Var0.f_33 = 4;
	Var0.f_5 = ScriptParam_0;
	Var0.f_6 = ScriptParam_0.f_1;
	func_1(&Var0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&Var0);
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_2(&Var0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_2(&Var0);
	}
	Var0 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, 1) };
	Var0.f_3 = TASK::_GET_SCENARIO_POINT_HEADING(ScriptParam_0.f_1, 1);
	Var0.f_4 = TASK::_0x6718F40313A2B5A6(ScriptParam_0.f_1);
	Global_43838[Var0.f_18] = &Global_43838[Var0.f_18] + 1;
	if (func_3() == 0)
	{
	}
	else if (!func_4(10))
	{
		func_2(&Var0);
	}
	Var0.f_24 = func_5(Var0.f_18, Var0);
	if (Var0.f_24 <= -1)
	{
		Var0.f_24 = func_6(Var0.f_18, Var0);
		if (func_7(&Var0))
		{
			func_8(&Var0);
		}
		else
		{
			func_9(&Var0);
		}
	}
	while (func_10(&Var0))
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			func_2(&Var0);
		}
		BUILTIN::WAIT(0);
	}
	iLocal_14 = 0;
	while (func_11(&Var0))
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			func_2(&Var0);
		}
		func_12(&Var0);
		func_13(&Var0);
		if (iLocal_14 <= 0)
		{
			fVar39 = BUILTIN::VDIST2(Var0, Global_36);
			switch (func_14(&Var0))
			{
				case 0:
					Var0.f_24 = func_5(Var0.f_18, Var0);
					if (Var0.f_24 <= -1)
					{
						Var0.f_24 = func_6(Var0.f_18, Var0);
						if (func_7(&Var0))
						{
							func_8(&Var0);
						}
						else
						{
							func_9(&Var0);
						}
					}
					func_15(&Var0, 1);
					break;
				case 1:
					if (fVar39 < 4900f)
					{
						func_15(&Var0, 2);
					}
					break;
				case 2:
					if (func_16(Var0.f_24, Var0.f_4))
					{
						func_17(Var0.f_24, 0);
					}
					bVar40 = func_18(Var0.f_24);
					if (bVar40)
					{
						func_15(&Var0, 3);
					}
					else
					{
						func_15(&Var0, 4);
					}
					func_19(&Var0);
					break;
				case 4:
					if (func_20(&Var0))
					{
						iVar41 = func_21(&Var0);
						if (iVar41 != 1)
						{
							if (iVar41 != 0)
							{
								func_2(&Var0);
							}
							else
							{
								iLocal_14 = 1000;
							}
						}
						else
						{
							func_15(&Var0, 5);
						}
					}
					break;
				case 3:
					if (func_20(&Var0))
					{
						iVar41 = func_21(&Var0);
						if (iVar41 != 1)
						{
							if (iVar41 == 0)
							{
								iLocal_14 = 1000;
							}
							else
							{
								func_2(&Var0);
							}
						}
						else
						{
							func_15(&Var0, 6);
						}
					}
					break;
				case 5:
					if (func_22(&Var0))
					{
						func_15(&Var0, 10);
					}
					break;
				case 6:
					if (func_22(&Var0))
					{
						func_15(&Var0, 7);
					}
					break;
				case 7:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 174961811))
					{
						if (func_24(Var0.f_18, func_23(PLAYER::GET_PLAYER_INDEX()), &(Var0.f_24), &iLocal_21, 1))
						{
							func_15(&Var0, 9);
						}
					}
					else if (!func_18(Var0.f_24))
					{
						func_15(&Var0, 9);
					}
					if (!bLocal_22)
					{
						if (func_25(4))
						{
							if (fVar39 < 625f && !PED::IS_PED_ON_MOUNT(Global_35))
							{
								func_26(602, 0);
								bLocal_22 = true;
							}
						}
						else
						{
							bLocal_22 = true;
						}
					}
					if (fVar39 > 8100f || func_27(Var0.f_24, 1))
					{
						func_28(Var0.f_24, 1);
						func_15(&Var0, 8);
					}
					break;
				case 9:
					func_29(Var0.f_24);
					func_30(Var0.f_24, iLocal_21);
					if (func_31(Var0.f_18))
					{
						func_32(COLLECTION::_0x126CBEBBA46693CF(BUILTIN::FLOOR(Var0.f_4), 1777389635, 0));
					}
					Global_1935496->f_127 = 1;
					func_15(&Var0, 10);
					break;
				case 10:
					if (func_33(Var0.f_18))
					{
						func_34(Var0, &uLocal_16, &uLocal_17, &uLocal_18);
					}
					if (fVar39 > 8100f || func_27(Var0.f_24, 1))
					{
						func_28(Var0.f_24, 1);
						func_15(&Var0, 8);
					}
					break;
				case 8:
					func_35(&Var0);
					func_15(&Var0, 1);
					break;
			}
		}
		if (func_37(func_36(&Var0)))
		{
			if (func_38(&Var0) == func_36(&Var0))
			{
			}
			else
			{
				func_39(&Var0, func_36(&Var0));
			}
		}
		else if (func_38(&Var0) != Global_36579)
		{
			func_39(&Var0, Global_36579);
		}
		func_40(&Var0);
		iLocal_14 = (iLocal_14 - 1);
		if (iLocal_14 < 0)
		{
			iLocal_14 = 0;
		}
		BUILTIN::WAIT(0);
	}
	func_2(&Var0);
}

void func_1(var uParam0)
{
	func_41(uParam0, 4);
}

void func_2(var uParam0)
{
	Global_43838[uParam0->f_18] = (&Global_43838[uParam0->f_18] - 1);
	SCRIPTS::_0xE7282390542F570D(uParam0->f_5);
	if (func_38(uParam0) == 1 && TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_6))
	{
		Global_1913813 = uParam0->f_6;
	}
	func_35(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3()
{
	return Global_1572887->f_12;
}

int func_4(int iParam0)
{
	if (!func_42(iParam0))
	{
		return 0;
	}
	return func_43(iParam0);
}

int func_5(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_44(vParam1))
	{
		return -1;
	}
	fVar1 = 25f;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < 500)
	{
		if (!func_45(iVar3))
		{
			return iVar2;
		}
		else if (func_46(iVar3) != iParam0)
		{
			Jump @108; //curOff = 70
		}
		else
		{
			fVar0 = func_48(vParam1, func_47(iVar3));
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_6(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return -1;
	}
	if (func_44(vParam1))
	{
		return -1;
	}
	if (Global_40.f_9273 >= 500)
	{
		Global_40.f_9273 = 0;
	}
	iVar0 = Global_40.f_9273;
	func_49(Global_27572[iVar0 /*9*/], iParam0, vParam1, -15);
	Global_40.f_9273++;
	return iVar0;
}

bool func_7(var uParam0)
{
	return uParam0->f_20 != 3;
}

void func_8(var uParam0)
{
	var uVar0[6];
	var uVar7[3];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	func_50(uParam0->f_20, &uVar0, &uVar7);
	if (uParam0->f_22 > 4)
	{
		uParam0->f_22 = 4;
	}
	if (uParam0->f_21 <= 0)
	{
		uParam0->f_21 = 1;
	}
	iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_21, uParam0->f_22 + 1);
	iVar12 = 0;
	while (iVar12 <= (iVar11 - 1))
	{
		if (&uVar0[iVar12] == 0)
		{
			iVar13 = 0;
		}
		else
		{
			iVar13 = &uVar7[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)];
		}
		if (uParam0->f_23 > 0)
		{
			iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_23);
		}
		iVar15 = ((uVar0[iVar12] || BUILTIN::SHIFT_LEFT(iVar13, 9)) || BUILTIN::SHIFT_LEFT(iVar14, 13)) | 1073741824;
		func_51(uParam0->f_24, iVar12, iVar15);
		iVar12++;
	}
}

void func_9(var uParam0)
{
	var uVar0[6];
	var uVar7;
	int iVar11;
	int iVar12;

	uVar7 = 3;
	func_50(uParam0->f_20, &uVar0, &uVar7);
	if (uParam0->f_23 > 0)
	{
		iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_23);
	}
	iVar12 = ((uVar0[0] || BUILTIN::SHIFT_LEFT(0, 9)) || BUILTIN::SHIFT_LEFT(iVar11, 13)) | 1073741824;
	func_51(uParam0->f_24, 0, iVar12);
}

int func_10(var uParam0)
{
	if (func_52(Global_35) && func_53())
	{
		return 1;
	}
	func_13(uParam0);
	if (func_37(func_36(uParam0)))
	{
		if (func_38(uParam0) != func_36(uParam0))
		{
			func_39(uParam0, func_36(uParam0));
		}
	}
	else if (func_38(uParam0) != Global_36579)
	{
		func_39(uParam0, Global_36579);
	}
	if (func_38(uParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0)
{
	if (func_54(1))
	{
		return 0;
	}
	if (func_38(uParam0) == 1)
	{
		if (&Global_1913813 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_12(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4) && func_55()) && func_56(PLAYER::PLAYER_ID(), 1, 0)) && func_57(0) == 1177534031)
	{
		bVar0 = true;
	}
	if (!bVar0 && !(uParam0->f_18 == 11 || uParam0->f_18 == 26))
	{
		return;
	}
	if (func_58(uParam0->f_18) || uParam0->f_8 == 1)
	{
		bVar0 = true;
	}
	if (func_38(uParam0) == 2)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_22)
		{
			if (func_59(&(uParam0->f_13[iVar1])))
			{
				MISC::_0x40D72189F46D2E15(&(uParam0->f_13[iVar1]), 0);
			}
			iVar1++;
		}
	}
}

void func_13(var uParam0)
{
	int iVar0;

	if (!func_60(&(uParam0->f_25)))
	{
		func_61(&(uParam0->f_25), 1f, 0);
	}
	if (func_62(&(uParam0->f_25)) >= 1f)
	{
		func_63(&(uParam0->f_25));
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_64(&(Global_36580[iVar0 /*2*/]), *uParam0))
			{
				func_65(uParam0, (Global_36580[iVar0 /*2*/])->f_1);
			}
			iVar0++;
		}
		if (func_31(uParam0->f_18) && !func_66(uParam0->f_18))
		{
			if (func_68(func_67(uParam0->f_18)) >= (func_70(func_69(uParam0->f_18)) - 1))
			{
				func_65(uParam0, 1);
			}
		}
	}
}

int func_14(var uParam0)
{
	return uParam0->f_11;
}

void func_15(var uParam0, int iParam1)
{
	uParam0->f_11 = iParam1;
}

int func_16(int iParam0, float fParam1)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return 0;
	}
	if (!func_71(iParam0))
	{
		return 0;
	}
	if (func_72(iParam0, fParam1))
	{
		return 0;
	}
	iVar0 = func_73(iParam0);
	func_74(&iVar0, 0, 0, 0, 0, 3, 0, 0);
	if (func_75(iVar0, 1))
	{
		return 1;
	}
	return 0;
}

void func_17(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_76(iParam0, iVar0))
		{
			func_77(iParam0, iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_78(iParam0, 1);
	}
}

int func_18(int iParam0)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_76(iParam0, iVar0))
		{
		}
		else if (!func_79(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_19(var uParam0)
{
	TASK::_0x73F0D0327BFA0812(uParam0->f_38);
}

int func_20(var uParam0)
{
	if (!TASK::_0x5E5D96BE25E9DF68(uParam0->f_38))
	{
		return 0;
	}
	return 1;
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;

	uVar4 = uParam0->f_2;
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, (uParam0->f_2 + 2f), &uVar4, 0))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, (uParam0->f_2 + 10f), &uVar4, 0))
		{
			uParam0->f_12++;
			if (uParam0->f_12 >= 50)
			{
				uParam0->f_12 = 0;
				return -1;
			}
			else
			{
				return 0;
			}
		}
	}
	uParam0->f_2 = uVar4;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_76(uParam0->f_24, iVar0))
		{
		}
		else
		{
			func_80(uParam0->f_24, iVar0, &iVar1, &iVar2, &uVar3);
			vLocal_23[iVar0 /*3*/] = (*uParam0 + (IntToFloat(iVar1) * BUILTIN::COS(BUILTIN::TO_FLOAT(iVar2))));
			(vLocal_23[iVar0 /*3*/])->f_1 = (uParam0->f_1 + (IntToFloat(iVar1) * BUILTIN::SIN(BUILTIN::TO_FLOAT(iVar2))));
			(vLocal_23[iVar0 /*3*/])->f_2 = uParam0->f_2;
			if (uParam0->f_23 > 0)
			{
				iLocal_36[iVar0] = uVar3;
			}
			else
			{
				iLocal_36[iVar0] = -1;
			}
			if (!MISC::GET_GROUND_Z_FOR_3D_COORD(&(vLocal_23[iVar0 /*3*/]), (vLocal_23[iVar0 /*3*/])->f_1, ((vLocal_23[iVar0 /*3*/])->f_2 + 10f), &((vLocal_23[iVar0 /*3*/])->f_2), 0))
			{
				uParam0->f_12 = 0;
				return -1;
			}
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	return 1;
}

int func_22(var uParam0)
{
	var uVar0;
	int iVar1;

	if (iLocal_15 < 4)
	{
		if (!func_44(*(vLocal_23[iLocal_15 /*3*/])))
		{
			if (!&Global_1913812)
			{
				iVar1 = 0;
				if (((((((uParam0->f_18 == 1 || uParam0->f_18 == 9) || uParam0->f_18 == 10) || uParam0->f_18 == 17) || uParam0->f_18 == 21) || uParam0->f_18 == 25) || uParam0->f_18 == 32) || uParam0->f_18 == 36)
				{
					iVar1 |= 2;
					*(vLocal_23[iLocal_15 /*3*/]) = { *(vLocal_23[iLocal_15 /*3*/]) + func_81(0f, 0.737008f, 1.81999f, uParam0->f_3) };
				}
				if (uParam0->f_18 == 37)
				{
					iVar1 |= 2;
					*(vLocal_23[iLocal_15 /*3*/]) = { *(vLocal_23[iLocal_15 /*3*/]) + func_81(0f, 0.5f, 1.81999f, uParam0->f_3) };
				}
				if (func_79(uParam0->f_24, iLocal_15))
				{
					iVar1 |= 1;
				}
				uParam0->f_13[iLocal_15] = TASK::_0x5B4BBE80AD5972DC(uParam0->f_38, *(vLocal_23[iLocal_15 /*3*/]), func_82((uParam0->f_3 + (IntToFloat(iLocal_15) * MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f)))), iVar1, &uVar0, &(iLocal_36[iLocal_15]));
				if (func_83(uParam0->f_18))
				{
					uParam0->f_28[iLocal_15] = GRAPHICS::_0xFA50F79257745E74(*(vLocal_23[iLocal_15 /*3*/]), 0.37f, 4, 27, 0);
				}
				if (uParam0->f_18 == 38)
				{
					func_84(uParam0->f_33[iLocal_15], *(vLocal_23[iLocal_15 /*3*/]), 0.15f);
				}
				iLocal_15++;
				Global_1913812 = 1;
			}
		}
		else
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

Vector3 func_23(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_24(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	float fVar15;

	if (func_44(vParam1))
	{
		return 0;
	}
	if (*iParam4 <= -1)
	{
		*iParam4 = func_5(iParam0, vParam1);
	}
	if (*iParam4 <= -1)
	{
		return 0;
	}
	fVar14 = -1f;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_76(*iParam4, iVar0))
		{
			if (bParam6 && func_79(*iParam4, iVar0))
			{
			}
			else
			{
				vVar8 = { func_47(*iParam4) };
				func_80(*iParam4, iVar0, &iVar1, &iVar2, &uVar3);
				vVar5.x = (vVar8.x + (IntToFloat(iVar1) * BUILTIN::COS(BUILTIN::TO_FLOAT(iVar2))));
				vVar5.f_1 = (vVar8.y + (IntToFloat(iVar1) * BUILTIN::SIN(BUILTIN::TO_FLOAT(iVar2))));
				fVar15 = func_48(vParam1, vVar5);
				if (fVar14 < 0f || (fVar14 >= 0f && fVar15 < fVar14))
				{
					fVar14 = fVar15;
					iVar4 = iVar0;
					vVar11 = { vVar5 };
				}
			}
		}
		iVar0++;
	}
	if (func_48(vParam1, vVar11) < 25f)
	{
		*iParam5 = iVar4;
		return 1;
	}
	return 0;
}

bool func_25(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_85(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

void func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_86(iParam0, &iVar0, &iVar1);
	if (!func_87(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_88(iVar0, iVar1);
}

bool func_27(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_3() != -1)
	{
		return ((Global_38104[iParam0 /*9*/])->f_3 && iParam1) != 0;
	}
	return ((Global_27572[iParam0 /*9*/])->f_3 && iParam1) != 0;
}

void func_28(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_3() != -1)
	{
		(Global_38104[iParam0 /*9*/])->f_3 = ((Global_38104[iParam0 /*9*/])->f_3 - ((Global_38104[iParam0 /*9*/])->f_3 && iParam1));
		return;
	}
	(Global_27572[iParam0 /*9*/])->f_3 = ((Global_27572[iParam0 /*9*/])->f_3 - ((Global_27572[iParam0 /*9*/])->f_3 && iParam1));
}

void func_29(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 500)
	{
		return;
	}
	if (func_3() != -1)
	{
		(Global_38104[iParam0 /*9*/])->f_2 = func_89();
		return;
	}
	(Global_27572[iParam0 /*9*/])->f_2 = func_89();
}

void func_30(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_3() != -1)
	{
		(Global_38104[iParam0 /*9*/])->f_4[iParam1] |= 4096;
		return;
	}
	(Global_27572[iParam0 /*9*/])->f_4[iParam1] |= 4096;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_32(var uParam0)
{
	COLLECTION::_0x3EA62E56F386C997(uParam0, 1);
}

bool func_33(int iParam0)
{
	return !func_31(iParam0);
}

void func_34(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = Param0.f_18;
	iVar1 = Param0.f_24;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (iVar1 != -1)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1027129856))
		{
			if (func_90(iVar0, Global_35, 0, 1, func_23(PLAYER::GET_PLAYER_INDEX())))
			{
				if (func_91() && PED::IS_PED_ON_FOOT(Global_35))
				{
					if (iVar0 == 26 || iVar0 == 11)
					{
						bVar2 = true;
					}
					else if (iVar0 == 29)
					{
						iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
						if (iVar3 == 3)
						{
							bVar2 = true;
						}
					}
				}
				func_92(iVar0, 1, 1);
				func_93(func_69(iVar0), !bVar2);
				func_94(func_69(iVar0), 1, 0, 0, 0);
				func_95(iVar0, 1);
			}
		}
		func_96(uParam39, uParam40, bVar2, uParam41);
	}
}

void func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (func_76(uParam0->f_24, iVar1) && &uParam0->f_13[iVar1] != iVar0)
		{
			TASK::_0x5758B1EE0C3FD4AC(&(uParam0->f_13[iVar1]), 0);
			uParam0->f_13[iVar1] = 0;
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (func_97(uParam0->f_28[iVar2]))
		{
			GRAPHICS::_0x9CF1836C03FB67A2(uParam0->f_28[iVar2], 1);
			uParam0->f_28[iVar2] = -1;
		}
		if (func_97(uParam0->f_33[iVar2]))
		{
			GRAPHICS::_0x9CF1836C03FB67A2(uParam0->f_33[iVar2], 1);
			uParam0->f_33[iVar2] = -1;
		}
		iVar2++;
	}
	iLocal_15 = 0;
}

int func_36(var uParam0)
{
	return uParam0->f_9;
}

bool func_37(int iParam0)
{
	return iParam0 != 3;
}

int func_38(var uParam0)
{
	return uParam0->f_8;
}

void func_39(var uParam0, int iParam1)
{
	if (!func_37(iParam1))
	{
		return;
	}
	if (func_38(uParam0) == iParam1)
	{
		return;
	}
	uParam0->f_8 = iParam1;
}

void func_40(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (func_98(&Global_1935630, 2097152))
	{
		bVar0 = true;
	}
	if (func_38(uParam0) == 2)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_22)
	{
		if (func_59(&(uParam0->f_13[iVar1])))
		{
			MISC::_0x082C043C7AFC3747(&(uParam0->f_13[iVar1]), 1);
			MISC::_0x40D72189F46D2E15(&(uParam0->f_13[iVar1]), 1);
		}
		iVar1++;
	}
}

void func_41(var uParam0, int iParam1)
{
	uParam0->f_18 = func_99(iParam1);
	uParam0->f_19 = func_69(uParam0->f_18);
	uParam0->f_20 = func_100(uParam0->f_18);
	uParam0->f_23 = func_101(uParam0->f_18);
	uParam0->f_21 = func_102(uParam0->f_18);
	uParam0->f_22 = func_103(uParam0->f_18);
	uParam0->f_38 = func_104(uParam0->f_18);
}

int func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_44(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_45(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_3() != -1)
	{
		return &Global_38104[iParam0 /*9*/] > 0;
	}
	return &Global_27572[iParam0 /*9*/] > 0;
}

int func_46(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_3() != -1)
	{
		return &(Global_38104[iParam0 /*9*/]);
	}
	else
	{
		return &(Global_27572[iParam0 /*9*/]);
	}
	return 0;
}

Vector3 func_47(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1f, -1f, -1f;
	}
	if (func_3() != -1)
	{
		return func_105((Global_38104[iParam0 /*9*/])->f_1);
	}
	return func_105((Global_27572[iParam0 /*9*/])->f_1);
}

float func_48(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_49(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	struct<5> Var0;

	Var0.f_2 = -15;
	Var0.f_4 = 4;
	MISC::_COPY_MEMORY(uParam0, &Var0, 9);
	*uParam0 = iParam1;
	uParam0->f_1 = func_106(vParam2);
	uParam0->f_2 = iParam5;
}

void func_50(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	switch (iParam0)
	{
		case 0:
			(*uParam2)[0] = 1;
			(*uParam2)[1] = 2;
			(*uParam2)[2] = 3;
			break;
		case 1:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
		case 2:
			(*uParam2)[0] = 3;
			(*uParam2)[1] = 4;
			(*uParam2)[2] = 5;
			break;
		case 3:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
		default:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
	}
	(*uParam1)[0] = 0;
	(*uParam1)[1] = 67;
	(*uParam1)[2] = 139;
	(*uParam1)[3] = 223;
	(*uParam1)[4] = 293;
	(*uParam1)[5] = 359;
	iVar0 = 5;
	while (iVar0 >= 1)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0 + 1);
		uVar2 = uParam1[iVar1];
		(*uParam1)[iVar1] = uParam1[iVar0];
		(*uParam1)[iVar0] = uVar2;
		iVar0 = (iVar0 + -1);
	}
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > 500)
	{
		return;
	}
	if (func_3() != -1)
	{
		(Global_38104[iParam0 /*9*/])->f_4[iParam1] = iParam2;
	}
	(Global_27572[iParam0 /*9*/])->f_4[iParam1] = iParam2;
}

int func_52(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

bool func_53()
{
	return (Global_1894899 & 1 != 0 && func_107() != -1);
}

int func_54(bool bParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	return 0;
}

bool func_55()
{
	return func_108(Global_1572887->f_6, 1);
}

int func_56(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam1 != -1)
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			if ((Global_1146441->f_1[iVar1 /*11*/])->f_1 == iParam1 && func_109(iVar1, 128, iVar0))
			{
				if (bParam2)
				{
					if (&Global_1146748->f_20[iVar1 /*16*/] >= 2)
					{
						return 1;
					}
				}
				else if (&Global_1146748->f_20[iVar1 /*16*/] >= 6)
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_57(int iParam0)
{
	return (Global_1146441->f_1[iParam0 /*11*/])->f_3;
}

int func_58(int iParam0)
{
	if (!func_110(iParam0))
	{
		return 0;
	}
	return func_111(iParam0, 4, 1);
}

bool func_59(int iParam0)
{
	return iParam0 != -1;
}

bool func_60(var uParam0)
{
	return func_112(*uParam0, 1);
}

void func_61(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_60(uParam0))
	{
		func_113(uParam0, fParam1);
	}
}

float func_62(var uParam0)
{
	if (!func_60(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_114(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_115() - uParam0->f_1);
}

void func_63(var uParam0)
{
	func_113(uParam0, 0f);
}

int func_64(var uParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0))
	{
		return 0;
	}
	return VOLUME::_0xF256A75210C5C0EB(uParam0, vParam1);
}

void func_65(var uParam0, int iParam1)
{
	if (!func_37(iParam1))
	{
		return;
	}
	if (func_36(uParam0) == iParam1)
	{
		return;
	}
	uParam0->f_9 = iParam1;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 21:
			return func_116(43);
		case 22:
		case 24:
			return func_117() >= 1;
		case 1:
		case 9:
		case 17:
			return func_117() >= 2;
		case 25:
		case 32:
		case 36:
			return func_117() >= 3;
		case 10:
		case 14:
		case 30:
		case 35:
			return func_117() >= 4;
		default:
			break;
	}
	return 0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1112589856;
		case 9:
			return 270657460;
		case 10:
			return 1485944635;
		case 14:
			return 767056202;
		case 17:
			return -1064869901;
		case 21:
			return -16133028;
		case 22:
			return -1268393363;
		case 24:
			return 5452285;
		case 25:
			return -491162917;
		case 30:
			return 1819699601;
		case 32:
			return 1077382670;
		case 35:
			return 1298182602;
		case 36:
			return -345586569;
		default:
			break;
	}
	return 0;
}

int func_68(var uParam0)
{
	return COLLECTION::_0x5461C821D00FE15A(1777389635, uParam0);
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1433048902 /* GXTEntry: "Ginseng" */;
		case 3:
			return 1433048902 /* GXTEntry: "Ginseng" */;
		case 4:
			return -1602657245 /* GXTEntry: "Bay Bolete" */;
		case 5:
			return -1991037110 /* GXTEntry: "Blackberry" */;
		case 6:
			return 1047281747 /* GXTEntry: "Currant" */;
		case 7:
			return -398744080 /* GXTEntry: "Burdock Root" */;
		case 8:
			return -1066874997 /* GXTEntry: "Chanterelle" */;
		case 11:
			return -2085219828 /* GXTEntry: "Common Bulrush" */;
		case 12:
			return 2064962445 /* GXTEntry: "Creeping Thyme" */;
		case 13:
			return -1781387050 /* GXTEntry: "Sage" */;
		case 15:
			return -1620920647 /* GXTEntry: "English Mace" */;
		case 16:
			return -1664530975 /* GXTEntry: "Evergreen Huckleberry" */;
		case 18:
			return 1047281747 /* GXTEntry: "Currant" */;
		case 19:
			return -1781387050 /* GXTEntry: "Sage" */;
		case 20:
			return -597058368 /* GXTEntry: "Indian Tobacco" */;
		case 23:
			return 128702355 /* GXTEntry: "Milkweed" */;
		case 26:
			return -2051332199 /* GXTEntry: "Oleander Sage" */;
		case 27:
			return 546981776 /* GXTEntry: "Oregano" */;
		case 28:
			return -2013384490 /* GXTEntry: "Parasol Mushroom" */;
		case 29:
			return 228922461 /* GXTEntry: "Prairie Poppy" */;
		case 31:
			return -746674788 /* GXTEntry: "Ram\'s Head" */;
		case 33:
			return 599861917 /* GXTEntry: "Raspberry" */;
		case 34:
			return -1781387050 /* GXTEntry: "Sage" */;
		case 37:
			return 2006811763 /* GXTEntry: "Vanilla Flower" */;
		case 38:
			return -90546043 /* GXTEntry: "Violet Snowdrop" */;
		case 39:
			return 1216456215 /* GXTEntry: "Wild Carrot" */;
		case 40:
			return 746300881 /* GXTEntry: "Wild Feverfew" */;
		case 41:
			return -435006002 /* GXTEntry: "Wild Mint" */;
		case 42:
			return -624139784 /* GXTEntry: "Wintergreen Berry" */;
		case 43:
			return -529638012 /* GXTEntry: "Yarrow" */;
		case 1:
			return -651064726 /* GXTEntry: "Acuna\'s Star Orchid" */;
		case 9:
			return -404270094 /* GXTEntry: "Cigar Orchid" */;
		case 10:
			return -1521783510 /* GXTEntry: "Clamshell Orchid" */;
		case 14:
			return 1714875242 /* GXTEntry: "Dragon\'s Mouth Orchid" */;
		case 17:
			return 2093126853 /* GXTEntry: "Ghost Orchid" */;
		case 21:
			return 728781265 /* GXTEntry: "Lady of the Night Orchid" */;
		case 22:
			return 1794857344 /* GXTEntry: "Lady Slipper Orchid" */;
		case 24:
			return 1952409553 /* GXTEntry: "Moccasin Flower Orchid" */;
		case 25:
			return -150591160 /* GXTEntry: "Night Scented Orchid" */;
		case 30:
			return 1019229063 /* GXTEntry: "Queen\'s Orchid" */;
		case 32:
			return -323969289 /* GXTEntry: "Rat Tail Orchid" */;
		case 35:
			return 927763737 /* GXTEntry: "Sparrow\'s Egg Orchid" */;
		case 36:
			return 1504361882 /* GXTEntry: "Spider Orchid" */;
		default:
			break;
	}
	return 0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 281887510: /* GXTEntry: "Little Egret Plume" */
			return 5;
		case -164081697: /* GXTEntry: "Reddish Egret Plume" */
			return 5;
		case -1161319399: /* GXTEntry: "Snowy Egret Plume" */
			return 5;
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return 15;
		case -222563712: /* GXTEntry: "Heron Plume" */
			return 20;
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return 7;
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return 10;
		case 2116770557:
			return 25;
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return 3;
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return 7;
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return 5;
		case 2085530337: /* GXTEntry: "Spoonbill Plume" */
			return 30;
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return 5;
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return 10;
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return 5;
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return 5;
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return 5;
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return 5;
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return 10;
		default:
			break;
	}
	return 0;
}

bool func_71(int iParam0)
{
	if (func_3() != -1)
	{
		return (Global_38104[iParam0 /*9*/])->f_2 != -15;
	}
	return (Global_27572[iParam0 /*9*/])->f_2 != -15;
}

int func_72(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = func_46(iParam0);
	if (!func_31(iVar0) || func_3() != -1)
	{
		return 0;
	}
	if (!func_66(iVar0) && func_118(COLLECTION::_0x126CBEBBA46693CF(BUILTIN::FLOOR(fParam1), 1777389635, 0)))
	{
		return 1;
	}
	return 0;
}

var func_73(int iParam0)
{
	if (func_3() != -1)
	{
		return (Global_38104[iParam0 /*9*/])->f_2;
	}
	return (Global_27572[iParam0 /*9*/])->f_2;
}

void func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_119(*iParam0);
	iVar1 = func_120(*iParam0);
	iVar2 = func_121(*iParam0);
	iVar3 = func_122(*iParam0);
	iVar4 = func_123(*iParam0);
	iVar5 = func_124(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_125(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_125(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_126(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_75(int iParam0, bool bParam1)
{
	return func_127(func_89(), iParam0, bParam1);
}

bool func_76(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_3() != -1)
	{
		return (Global_38104[iParam0 /*9*/])->f_4[iParam1] & 1073741824 != 0;
	}
	return (Global_27572[iParam0 /*9*/])->f_4[iParam1] & 1073741824 != 0;
}

void func_77(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_3() != -1)
	{
		(Global_38104[iParam0 /*9*/])->f_4[iParam1] = (&(Global_38104[iParam0 /*9*/])->f_4[iParam1] - (Global_38104[iParam0 /*9*/])->f_4[iParam1] & 4096);
		return;
	}
	(Global_27572[iParam0 /*9*/])->f_4[iParam1] = (&(Global_27572[iParam0 /*9*/])->f_4[iParam1] - (Global_27572[iParam0 /*9*/])->f_4[iParam1] & 4096);
}

void func_78(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_3() != -1)
	{
		(Global_38104[iParam0 /*9*/])->f_3 = ((Global_38104[iParam0 /*9*/])->f_3 || iParam1);
		return;
	}
	(Global_27572[iParam0 /*9*/])->f_3 = ((Global_27572[iParam0 /*9*/])->f_3 || iParam1);
}

bool func_79(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return false;
	}
	if (func_3() != -1)
	{
		return (Global_38104[iParam0 /*9*/])->f_4[iParam1] & 4096 != 0;
	}
	return (Global_27572[iParam0 /*9*/])->f_4[iParam1] & 4096 != 0;
}

void func_80(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_3() != -1)
	{
		func_128(Global_38104[iParam0 /*9*/], iParam1, iParam2, iParam3, uParam4);
		return;
	}
	func_129(Global_27572[iParam0 /*9*/], iParam1, iParam2, iParam3, uParam4);
}

Vector3 func_81(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = BUILTIN::SIN(fParam3);
	fVar4 = BUILTIN::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

float func_82(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

int func_83(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 28:
		case 31:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_84(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;

	iVar0 = -1;
	func_130(uParam0, vParam1, fParam4, 4, iVar0, 0);
}

int func_85(int iParam0, bool bParam1)
{
	switch (func_131(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_86(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_87(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_132(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_133(iParam0))
	{
		return 0;
	}
	if (func_134(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_135(iParam0, 1)) || func_136(32768))
	{
		if (!func_135(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_137())
	{
		return 0;
	}
	return 1;
}

void func_88(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_89()
{
	return &Global_1899515;
}

int func_90(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	iVar0 = -1;
	if (func_24(iParam0, vParam4, &iVar0, &iVar1, 0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1)) && iParam1 == Global_35)
		{
			uVar2 = func_138(iParam0);
			TELEMETRY::_0xAE693EC3A178F6C2(uVar2);
			COMPENDIUM::COMPENDIUM_HERB_PICKED(uVar2, vParam4);
			if (!func_139(iParam0))
			{
				func_140(iParam0, 0, 1);
			}
			if (func_3() == -1)
			{
				if (func_85(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					iVar3 = func_141(iParam0);
					if (iVar3 != -1)
					{
						func_26(iVar3, 1);
					}
				}
			}
			func_143(func_142(joaat("pick"), uVar2), iParam3);
			func_143(func_144(-1358198738), iParam3);
			if (func_145(iParam0))
			{
				func_143(func_144(339698375), iParam3);
			}
		}
		func_29(iVar0);
		func_30(iVar0, iVar1);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_91()
{
	return func_146(1);
}

void func_92(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_69(iParam0);
	iVar1 = func_147(&iVar0);
	if (iVar1 != iParam0)
	{
		func_148(iVar1, 4);
	}
	if (!func_110(iParam0))
	{
		return;
	}
	if (func_58(iParam0))
	{
		return;
	}
	func_148(iParam0, 4);
	func_149(iParam0, bParam1);
	if (!func_139(iParam0))
	{
		func_140(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_150(0, 0, 1))
		{
			func_151(1, 6);
		}
	}
}

void func_93(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	var uVar38;
	var uVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;

	Var0.f_1 = 20;
	if ((func_152(iParam0, 1573112293) || func_152(iParam0, 672467738)) || func_152(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_153(iParam0) == 2085633299)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_154(0, Var22.f_2);
				func_155(Var22.f_2, 1);
				func_156(0, 7000);
				bVar41 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_154(2, Var22.f_2);
				func_157(Var22.f_2);
				func_156(2, 7000);
				bVar40 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_154(1, Var22.f_2);
				func_158(Var22.f_2);
				func_156(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_159(Var22.f_2, Var22.f_5);
				if (func_160(&uVar38, &uVar39, fVar33))
				{
					func_161(fVar33, 1, bVar37, bParam1);
					func_156(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_159(Var22.f_2, Var22.f_5);
				if (func_160(&uVar38, &uVar39, fVar34))
				{
					func_162(fVar34, 1, bVar37, bParam1);
					func_156(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_159(Var22.f_2, Var22.f_5);
				if (func_160(&uVar38, &uVar39, fVar35))
				{
					func_163(fVar35, 1, bVar37, bParam1);
					func_156(1, 7000);
				}
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_164(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_165(19, fVar36);
				bVar41 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_164(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_165(20, fVar36);
				bVar40 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_164(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_165(18, fVar36);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_164(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_165(0, fVar36);
				bVar41 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_164(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_165(2, fVar36);
				bVar40 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_164(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_165(1, fVar36);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_166(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0f || fVar30 > 0f)
			{
				bVar42 = true;
			}
		}
		if (bVar42 || func_152(iParam0, -537818634))
		{
			func_143(func_167(-704089207), 1);
		}
		if (func_152(iParam0, -1457797660))
		{
			func_143(func_167(-1909697259), 1);
		}
		if (bVar40)
		{
			func_143(func_167(704570463), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

void func_94(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_168(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_169())
	{
		func_170(iParam0, iParam1, bParam2, iParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_171(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (iParam3 || iParam4)
		{
			StringCopy(&cVar2, func_171(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_172(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_153(iParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if ((iVar6 == joaat("ammo") && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_173(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_175(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_174(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_152(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_174(iParam0));
	}
	func_176(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_95(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_142(-372368982, func_138(iParam0)) };
	STATS::_0x6A0184E904CDF25E(&Var0, iParam1);
	func_143(func_144(106002964), iParam1);
}

int func_96(var uParam0, var uParam1, bool bParam2, var uParam3)
{
	if (*uParam0 < 5)
	{
		if (((func_177() || (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, *uParam1))) || !func_91()) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			if (ANIMSCENE::_0x25557E324489393C(*uParam1))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(*uParam1);
			}
			return 1;
		}
		else
		{
			Global_1935496->f_127 = 1;
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (bParam2)
			{
				func_178(uParam3, 0);
			}
			if (func_60(uParam3) && func_62(uParam3) > 2f)
			{
				func_179(uParam0, 1);
				func_180(uParam3);
			}
			break;
		case 1:
			*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@sal1@ig@sal1_ig12_wake_up@sal1_ig12_wake_up", 0, "Herb_PL", false, true);
			func_179(uParam0, 2);
			break;
		case 2:
			if (ANIMSCENE::_0x25557E324489393C(*uParam1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				func_179(uParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_0x477122B8D05E7968(*uParam1, 1, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
				func_179(uParam0, 5);
			}
			break;
		case 5:
			if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam1, 0))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35);
				func_179(uParam0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_97(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_98(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_99(int iParam0)
{
	var uVar0;
	int iVar45;
	bool bVar46;

	if (Global_1913678->f_133)
	{
		uVar0 = 44;
		iVar45 = 0;
		while (iVar45 <= 1)
		{
			if ((*Global_1913678)[iParam0 /*3*/][iVar45] != 0)
			{
				bVar46 = true;
			}
			else
			{
				iVar45++;
			}
		}
		if (!bVar46)
		{
			return iParam0;
		}
		func_181(&uVar0, 44, 1);
		iVar45 = 0;
		while (iVar45 <= 43)
		{
			if (iVar45 == iParam0)
			{
			}
			else if (func_182((*Global_1913678)[iParam0 /*3*/], iVar45, 44))
			{
				return iVar45;
			}
			iVar45++;
		}
		return iParam0;
	}
	return iParam0;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 3;
		case 3:
			return 3;
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 15:
			return 0;
		case 16:
			return 1;
		case 18:
			return 0;
		case 19:
			return 0;
		case 20:
			return 0;
		case 23:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 31:
			return 0;
		case 33:
			return 1;
		case 34:
			return 0;
		case 37:
			return 3;
		case 38:
			return 0;
		case 39:
			return 0;
		case 40:
			return 0;
		case 41:
			return 0;
		case 42:
			return 1;
		case 43:
			return 0;
		case 1:
			return 3;
		case 9:
			return 3;
		case 10:
			return 3;
		case 14:
			return 3;
		case 17:
			return 3;
		case 21:
			return 3;
		case 22:
			return 3;
		case 24:
			return 3;
		case 25:
			return 3;
		case 30:
			return 3;
		case 32:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 15:
			return 0;
		case 16:
			return 0;
		case 18:
			return 0;
		case 19:
			return 0;
		case 20:
			return 0;
		case 23:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 31:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 37:
			return 0;
		case 38:
			return 0;
		case 39:
			return 0;
		case 40:
			return 0;
		case 41:
			return 0;
		case 42:
			return 0;
		case 43:
			return 4;
		case 1:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 14:
			return 0;
		case 17:
			return 0;
		case 21:
			return 0;
		case 22:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 30:
			return 0;
		case 32:
			return 0;
		case 35:
			return 0;
		case 36:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 2;
		case 5:
			return 1;
		case 6:
			return 2;
		case 7:
			return 2;
		case 8:
			return 2;
		case 11:
			return 3;
		case 12:
			return 3;
		case 13:
			return 2;
		case 15:
			return 2;
		case 16:
			return 1;
		case 18:
			return 2;
		case 19:
			return 2;
		case 20:
			return 2;
		case 23:
			return 2;
		case 26:
			return 2;
		case 27:
			return 3;
		case 28:
			return 2;
		case 29:
			return 2;
		case 31:
			return 2;
		case 33:
			return 1;
		case 34:
			return 2;
		case 37:
			return 1;
		case 38:
			return 2;
		case 39:
			return 2;
		case 40:
			return 2;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 2;
		case 1:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 14:
			return 1;
		case 17:
			return 1;
		case 21:
			return 1;
		case 22:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 30:
			return 1;
		case 32:
			return 1;
		case 35:
			return 1;
		case 36:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 4;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 3;
		case 8:
			return 4;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 3;
		case 15:
			return 3;
		case 16:
			return 2;
		case 18:
			return 3;
		case 19:
			return 3;
		case 20:
			return 3;
		case 23:
			return 3;
		case 26:
			return 3;
		case 27:
			return 4;
		case 28:
			return 4;
		case 29:
			return 3;
		case 31:
			return 4;
		case 33:
			return 2;
		case 34:
			return 3;
		case 37:
			return 1;
		case 38:
			return 3;
		case 39:
			return 3;
		case 40:
			return 3;
		case 41:
			return 4;
		case 42:
			return 2;
		case 43:
			return 3;
		case 1:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 14:
			return 1;
		case 17:
			return 1;
		case 21:
			return 1;
		case 22:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 30:
			return 1;
		case 32:
			return 1;
		case 35:
			return 1;
		case 36:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2031923296;
		case 3:
			return -1463255066;
		case 4:
			return -789686969;
		case 5:
			return 562744432;
		case 6:
			return -1972221473;
		case 7:
			return -1322398468;
		case 8:
			return 1379047799;
		case 11:
			return 234917363;
		case 12:
			return 1492680355;
		case 13:
			return -1823678637;
		case 15:
			return 320711698;
		case 16:
			return -811212590;
		case 18:
			return -927981753;
		case 19:
			return 662828546;
		case 20:
			return 2089953477;
		case 23:
			return 2117062718;
		case 26:
			return -1426023109;
		case 27:
			return 1385180495;
		case 28:
			return -1223237435;
		case 29:
			return 581542901;
		case 31:
			return -606245978;
		case 33:
			return 459842164;
		case 34:
			return -741218937;
		case 37:
			return 1088368560;
		case 38:
			return 524167849;
		case 39:
			return 583169388;
		case 40:
			return -987217809;
		case 41:
			return 1802561068;
		case 42:
			return 191320559;
		case 43:
			return 398926792;
		case 1:
			return -1233158166;
		case 9:
			return 657059996;
		case 10:
			return -1070577058;
		case 14:
			return 1619258285;
		case 17:
			return -417641706;
		case 21:
			return 1384785626;
		case 22:
			return 305447424;
		case 24:
			return 1084478585;
		case 25:
			return -762699413;
		case 30:
			return -1287860651;
		case 32:
			return 741109552;
		case 35:
			return -861723224;
		case 36:
			return 2009971116;
		default:
			break;
	}
	return 0;
}

Vector3 func_105(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar3 = iParam0 & 32767;
	iVar4 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_106(struct<2> Param0, var uParam2)
{
	int iVar0;

	iVar0 = (BUILTIN::ROUND(MISC::ABSF(Param0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		iVar0 |= 1073741824;
	}
	if (Param0.f_1 > 0f)
	{
		iVar0 |= -2147483648;
	}
	return iVar0;
}

int func_107()
{
	return Global_1894899->f_2;
}

bool func_108(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_109(int iParam0, int iParam1, int iParam2)
{
	return func_183((*Global_1146516)[iParam2 /*7*/][iParam0], iParam1);
}

bool func_110(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_111(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_110(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_12 != -1)
	{
		return (Global_36637[iParam0] && iParam1) != 0;
	}
	return (Global_40.f_9274[iParam0] && iParam1) != 0;
}

bool func_112(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_113(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_115() - fParam1);
	func_184(uParam0, 1);
	func_185(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_114(var uParam0)
{
	return func_112(*uParam0, 2);
}

float func_115()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_116(int iParam0)
{
	if (func_3() != -1)
	{
		return 0;
	}
	return func_85(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_117()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_186(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_118(var uParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(uParam0) > 0;
}

int func_119(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_187(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_120(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_121(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_122(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_123(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_124(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_125(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_126(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_188(iParam0, iParam6);
	func_189(iParam0, iParam5);
	func_190(iParam0, iParam4);
	func_191(iParam0, iParam3);
	func_192(iParam0, iParam2);
	func_193(iParam0, iParam1);
}

bool func_127(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_194(iParam1) || !func_194(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_128(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam3 = uParam0->f_4[iParam1] & 511;
	*iParam2 = BUILTIN::SHIFT_RIGHT(uParam0->f_4[iParam1] & 3584, 9);
	*uParam4 = BUILTIN::SHIFT_RIGHT(uParam0->f_4[iParam1] & 57344, 13);
}

void func_129(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam3 = uParam0->f_4[iParam1] & 511;
	*iParam2 = BUILTIN::SHIFT_RIGHT(uParam0->f_4[iParam1] & 3584, 9);
	*uParam4 = BUILTIN::SHIFT_RIGHT(uParam0->f_4[iParam1] & 57344, 13);
}

void func_130(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_97(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_97(uParam0))
		{
		}
	}
}

int func_131(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_196(iParam0);
}

bool func_132(int iParam0, int iParam1)
{
	if (func_3() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_133(int iParam0)
{
	if (func_3() != -1)
	{
		if (func_135(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_135(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_135(iParam0, 65536) && !func_135(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_135(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_135(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_135(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_136(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_137()
{
	return Global_1905944->f_5694;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -932875117 /* GXTEntry: "Alaskan Ginseng" */;
		case 3:
			return 1660962977 /* GXTEntry: "American Ginseng" */;
		case 4:
			return -131409450 /* GXTEntry: "Bay Bolete" */;
		case 5:
			return -1487527516 /* GXTEntry: "Blackberry" */;
		case 6:
			return 561629573 /* GXTEntry: "Blackcurrant" */;
		case 7:
			return 1829679323 /* GXTEntry: "Burdock Root" */;
		case 8:
			return -618617794 /* GXTEntry: "Chanterelles" */;
		case 11:
			return 653458791 /* GXTEntry: "Common Bulrush" */;
		case 12:
			return 437319607 /* GXTEntry: "Creeping Thyme" */;
		case 13:
			return -1519488075 /* GXTEntry: "Desert Sage" */;
		case 15:
			return 1014445254 /* GXTEntry: "English Mace" */;
		case 16:
			return 224814421 /* GXTEntry: "Evergreen Huckleberry" */;
		case 18:
			return 1012187868 /* GXTEntry: "Golden Currant" */;
		case 19:
			return -1040706491 /* GXTEntry: "Hummingbird Sage" */;
		case 20:
			return -1910627346 /* GXTEntry: "Indian Tobacco" */;
		case 23:
			return -1812487593 /* GXTEntry: "Milkweed" */;
		case 26:
			return 1983971282 /* GXTEntry: "Oleander Sage" */;
		case 27:
			return 1561519041 /* GXTEntry: "Oregano" */;
		case 28:
			return -980496853 /* GXTEntry: "Parasol Mushroom" */;
		case 29:
			return -1738887126 /* GXTEntry: "Prairie Poppy" */;
		case 31:
			return 424771379 /* GXTEntry: "Ram\'s Head" */;
		case 33:
			return 787316814 /* GXTEntry: "Red Raspberry" */;
		case 34:
			return 984616481 /* GXTEntry: "Red Sage" */;
		case 37:
			return 1078285403 /* GXTEntry: "Vanilla Flower" */;
		case 38:
			return -262897007 /* GXTEntry: "Violet Snowdrop" */;
		case 39:
			return -1727702531 /* GXTEntry: "Wild Carrot" */;
		case 40:
			return 1783324404 /* GXTEntry: "Wild Feverfew" */;
		case 41:
			return 1288848815 /* GXTEntry: "Wild Mint" */;
		case 42:
			return 918090738 /* GXTEntry: "Wintergreen Berry" */;
		case 43:
			return 170272501 /* GXTEntry: "Yarrow" */;
		case 1:
			return 2056650000 /* GXTEntry: "Acuna\'s Star Orchid" */;
		case 9:
			return -1195354638 /* GXTEntry: "Cigar Orchid" */;
		case 10:
			return 1077596967 /* GXTEntry: "Clamshell Orchid" */;
		case 14:
			return -2145199848 /* GXTEntry: "Dragon\'s Mouth Orchid" */;
		case 17:
			return 752824478 /* GXTEntry: "Ghost Orchid" */;
		case 21:
			return -819513569 /* GXTEntry: "Lady of the Night Orchid" */;
		case 22:
			return 1906968775 /* GXTEntry: "Lady Slipper Orchid" */;
		case 24:
			return -135434663 /* GXTEntry: "Moccasin Flower Orchid" */;
		case 25:
			return 920123680 /* GXTEntry: "Night Scented Orchid" */;
		case 30:
			return 150470908 /* GXTEntry: "Queen\'s Orchid" */;
		case 32:
			return -1665125257 /* GXTEntry: "Rat Tail Orchid" */;
		case 35:
			return 1587928307 /* GXTEntry: "Sparrow\'s Egg Orchid" */;
		case 36:
			return -1738925422 /* GXTEntry: "Spider Orchid" */;
	}
	return 0;
}

int func_139(int iParam0)
{
	if (!func_110(iParam0))
	{
		return 0;
	}
	return func_111(iParam0, 1, 1);
}

void func_140(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_110(iParam0))
	{
		return;
	}
	if (func_139(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_31(iParam0);
	}
	if (!bParam1)
	{
		if (func_3() != -1)
		{
		}
		else
		{
			func_197(iParam0);
		}
	}
	func_148(iParam0, 1);
	if (func_3() == -1)
	{
		func_199(iParam0, func_198());
	}
	func_149(iParam0, 1);
	if (bParam2)
	{
		if (!func_150(0, 0, 1))
		{
			func_151(1, 6);
		}
	}
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return 100;
		case 13:
		case 19:
		case 34:
			return 101;
		case 20:
			return 102;
		case 43:
			return 103;
		case 39:
			return 104;
		case 11:
			return 105;
		case 26:
			return 106;
		case 5:
		case 33:
		case 42:
			return 107;
	}
	return -1;
}

struct<2> func_142(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	return Var0;
}

void func_143(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

struct<2> func_144(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 28:
		case 31:
			return 1;
	}
	return 0;
}

bool func_146(int iParam0)
{
	return func_200(iParam0);
}

int func_147(int iParam0)
{
	switch (*iParam0)
	{
		case 1433048902: /* GXTEntry: "Ginseng" */
			return 2;
		case -1602657245: /* GXTEntry: "Bay Bolete" */
			return 4;
		case -1991037110: /* GXTEntry: "Blackberry" */
			return 5;
		case 1047281747: /* GXTEntry: "Currant" */
			return 6;
		case -398744080: /* GXTEntry: "Burdock Root" */
			return 7;
		case -1066874997: /* GXTEntry: "Chanterelle" */
			return 8;
		case -2085219828: /* GXTEntry: "Common Bulrush" */
			return 11;
		case 2064962445: /* GXTEntry: "Creeping Thyme" */
			return 12;
		case -1620920647: /* GXTEntry: "English Mace" */
			return 15;
		case -1664530975: /* GXTEntry: "Evergreen Huckleberry" */
			return 16;
		case -597058368: /* GXTEntry: "Indian Tobacco" */
			return 20;
		case 128702355: /* GXTEntry: "Milkweed" */
			return 23;
		case -2051332199: /* GXTEntry: "Oleander Sage" */
			return 26;
		case 546981776: /* GXTEntry: "Oregano" */
			return 27;
		case -2013384490: /* GXTEntry: "Parasol Mushroom" */
			return 28;
		case 228922461: /* GXTEntry: "Prairie Poppy" */
			return 29;
		case -746674788: /* GXTEntry: "Ram\'s Head" */
			return 31;
		case 599861917: /* GXTEntry: "Raspberry" */
			return 33;
		case -1781387050: /* GXTEntry: "Sage" */
			return 34;
		case 2006811763: /* GXTEntry: "Vanilla Flower" */
			return 37;
		case -90546043: /* GXTEntry: "Violet Snowdrop" */
			return 38;
		case 1216456215: /* GXTEntry: "Wild Carrot" */
			return 39;
		case 746300881: /* GXTEntry: "Wild Feverfew" */
			return 40;
		case -435006002: /* GXTEntry: "Wild Mint" */
			return 41;
		case -624139784: /* GXTEntry: "Wintergreen Berry" */
			return 42;
		case -529638012: /* GXTEntry: "Yarrow" */
			return 43;
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return 1;
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return 9;
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return 10;
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return 14;
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return 17;
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return 21;
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return 22;
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return 24;
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return 25;
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return 30;
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return 32;
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return 35;
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return 36;
	}
	return 0;
}

void func_148(int iParam0, int iParam1)
{
	if (!func_110(iParam0))
	{
		return;
	}
	if (func_3() != -1)
	{
		Global_36637[iParam0] = (Global_36637[iParam0] || iParam1);
		return;
	}
	Global_40.f_9274[iParam0] = (Global_40.f_9274[iParam0] || iParam1);
}

void func_149(int iParam0, bool bParam1)
{
	if (!func_110(iParam0))
	{
		return;
	}
	if (func_201(iParam0))
	{
		return;
	}
	func_148(iParam0, 2);
	if (bParam1)
	{
		if (!func_150(0, 0, 1))
		{
			func_151(1, 6);
		}
	}
}

int func_150(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_202())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_203(&(Global_1898164->f_1[0 /*5*/]));
		if (func_204(iVar0) && func_205(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_195(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

void func_151(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_206(&Global_0, 8);
	}
	if (!func_207() || func_3() != -1)
	{
		return;
	}
	func_206(&Global_0, 1);
}

int func_152(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0)
{
	vector3 vVar0;

	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

float func_154(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_35);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_35);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_155(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_156(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_157(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

void func_158(int iParam0)
{
	int iVar0;

	if (func_3() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_CHARGE_PED_STAMINA(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

float func_159(int iParam0, float fParam1)
{
	return func_208(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

int func_160(var uParam0, var uParam1, float fParam2)
{
	if (func_3() != -1)
	{
		return 1;
	}
	if (!func_209(0))
	{
		return 1;
	}
	if (fParam2 <= 0f)
	{
		return 1;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477->f_191.f_3)
	{
		func_210(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477->f_191.f_3 = 1;
	}
	if (Global_1347477->f_191 < MISC::GET_GAME_TIMER())
	{
		Global_1347477->f_191.f_1 = 0;
	}
	Global_1347477->f_191.f_1++;
	if (Global_1347477->f_191.f_1 > 3)
	{
		if (Global_1347477->f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_26(0, 1);
			Global_1347477->f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		func_210(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return 0;
	}
	Global_1347477->f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return 1;
}

void func_161(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_3() == 0)
	{
		func_211(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_212(0);
	if (bParam1)
	{
		func_213(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_214();
	}
	if (bParam2)
	{
		fParam0 = func_215(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_217(0, func_216(fParam0, -100f, 100f), bParam1);
}

void func_162(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_3() == 0)
	{
		func_211(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_212(2);
	if (bParam1)
	{
		func_213(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_215(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_217(2, func_216(fParam0, -100f, 100f), bParam1);
}

void func_163(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_3() == 0)
	{
		func_211(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_212(1);
	if (bParam1)
	{
		func_213(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_215(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_217(1, func_216(fParam0, -100f, 100f), bParam1);
}

float func_164(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

void func_165(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_218(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return;
	}
	fParam1 = (fParam1 * (1f + Global_40.f_11095.f_70));
	switch (iParam0)
	{
		case 0:
			sVar1 = func_219(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_220(-1);
			func_221(0);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		case 1:
			sVar1 = func_219(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_222(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		case 2:
			sVar1 = func_219(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_223(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		case 19:
			func_224(0, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_224(1, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_224(2, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_166(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_225(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_4(17))
	{
		return;
	}
	if (func_226())
	{
		iVar1 = func_227(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_227(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_89();
			func_74(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_228(&fVar3, &fVar4);
		func_229(13, func_216(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_26(94, 0);
		}
	}
}

struct<2> func_167(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_168(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_169()
{
	return !&Global_1911774;
}

void func_170(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = iParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = bParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = iParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_171(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_172(int iParam0, int iParam1)
{
	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_173(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_174(int iParam0)
{
	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_175(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_176(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_230(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_177()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

void func_178(var uParam0, bool bParam1)
{
	if (bParam1 || !func_60(uParam0))
	{
		func_63(uParam0);
	}
}

void func_179(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_180(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_181(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		uVar0 = uParam0[iVar2];
		(*uParam0)[iVar2] = uParam0[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 = (iVar2 + -1);
	}
}

bool func_182(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

bool func_183(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_184(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_185(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_186(var uParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(uParam0) > 0;
}

int func_187(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_188(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_189(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_190(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_120(*iParam0);
	iVar1 = func_119(*iParam0);
	if (iParam1 < 1 || iParam1 > func_125(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_191(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_192(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_193(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_194(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_124(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_123(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_122(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_119(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_120(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_121(iParam0);
	if (iVar5 < 1 || iVar5 > func_125(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_195(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_196(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_231(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_197(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_26(210, 0);
			break;
		case 16:
			func_26(211, 0);
			break;
		case 33:
			func_26(212, 0);
			break;
		case 42:
			func_26(213, 0);
			break;
		case 2:
			func_26(214, 0);
			break;
		case 3:
			func_26(215, 0);
			break;
		case 43:
			func_26(216, 0);
			break;
		case 15:
			func_26(217, 0);
			break;
		case 23:
			func_26(218, 0);
			break;
		case 37:
			func_26(219, 0);
			break;
		case 26:
			func_26(220, 0);
			break;
		case 13:
			func_26(221, 0);
			break;
		case 19:
			func_26(222, 0);
			break;
		case 34:
			func_26(223, 0);
			break;
		case 38:
			func_26(224, 0);
			break;
		case 40:
			func_26(225, 0);
			break;
		case 7:
			func_26(226, 0);
			break;
		case 20:
			func_26(227, 0);
			break;
		case 18:
			func_26(228, 0);
			break;
		case 6:
			func_26(229, 0);
			break;
		case 29:
			func_26(230, 0);
			break;
		case 39:
			func_26(231, 0);
			break;
		case 11:
			break;
		case 4:
			func_26(233, 0);
			break;
		case 8:
			func_26(234, 0);
			break;
		case 28:
			func_26(235, 0);
			break;
		case 31:
			func_26(236, 0);
			break;
		case 12:
			func_26(237, 0);
			break;
		case 27:
			func_26(238, 0);
			break;
		case 41:
			func_26(239, 0);
			break;
	}
}

int func_198()
{
	if (func_3() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_199(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 1)
			{
				func_232(1849379570, 0);
			}
			else
			{
				func_232(961286348, 0);
			}
			break;
		case 2:
			if (iParam1 == 1)
			{
				func_232(-837750081, 0);
			}
			else
			{
				func_232(340939753, 0);
			}
			break;
		case 3:
			if (iParam1 == 1)
			{
				func_232(-342875345, 0);
			}
			else
			{
				func_232(-1349311606, 0);
			}
			break;
		case 4:
			if (iParam1 == 1)
			{
				func_232(-1083564345, 0);
			}
			else
			{
				func_232(833225684, 0);
			}
			break;
		case 5:
			if (iParam1 == 1)
			{
				func_232(-363984637, 0);
			}
			else
			{
				func_232(1254542371, 0);
			}
			break;
		case 6:
			if (iParam1 == 1)
			{
				func_232(205335377, 0);
			}
			else
			{
				func_232(637367741, 0);
			}
			break;
		case 11:
			if (iParam1 == 1)
			{
				func_232(-1389317844, 0);
			}
			else
			{
				func_232(-556895345, 0);
			}
			break;
		case 7:
			if (iParam1 == 1)
			{
				func_232(-1907629529, 0);
			}
			else
			{
				func_232(1599606732, 0);
			}
			break;
		case 39:
			if (iParam1 == 1)
			{
				func_232(240007023, 0);
			}
			else
			{
				func_232(-1520210138, 0);
			}
			break;
		case 8:
			if (iParam1 == 1)
			{
				func_232(1312152388, 0);
			}
			else
			{
				func_232(-9418953, 0);
			}
			break;
		case 9:
			if (iParam1 == 1)
			{
				func_232(545314598, 0);
			}
			else
			{
				func_232(1529839790, 0);
			}
			break;
		case 10:
			if (iParam1 == 1)
			{
				func_232(1230485961, 0);
			}
			else
			{
				func_232(-1579920715, 0);
			}
			break;
		case 12:
			if (iParam1 == 1)
			{
				func_232(-201902289, 0);
			}
			else
			{
				func_232(1415616009, 0);
			}
			break;
		case 13:
			if (iParam1 == 1)
			{
				func_232(-564622057, 0);
			}
			else
			{
				func_232(-1442109431, 0);
			}
			break;
		case 14:
			if (iParam1 == 1)
			{
				func_232(-1303190422, 0);
			}
			else
			{
				func_232(-1299326860, 0);
			}
			break;
		case 15:
			if (iParam1 == 1)
			{
				func_232(-88060354, 0);
			}
			else
			{
				func_232(-366222423, 0);
			}
			break;
		case 40:
			if (iParam1 == 1)
			{
				func_232(1312248008, 0);
			}
			else
			{
				func_232(621868532, 0);
			}
			break;
		case 17:
			if (iParam1 == 1)
			{
				func_232(428446588, 0);
			}
			else
			{
				func_232(-1730302202, 0);
			}
			break;
		case 18:
			if (iParam1 == 1)
			{
				func_232(37692363, 0);
			}
			else
			{
				func_232(629404512, 0);
			}
			break;
		case 16:
			if (iParam1 == 1)
			{
				func_232(877023893, 0);
			}
			else
			{
				func_232(122486811, 0);
			}
			break;
		case 19:
			if (iParam1 == 1)
			{
				func_232(-706642783, 0);
			}
			else
			{
				func_232(621155065, 0);
			}
			break;
		case 20:
			if (iParam1 == 1)
			{
				func_232(-918250703, 0);
			}
			else
			{
				func_232(1945953943, 0);
			}
			break;
		case 21:
			if (iParam1 == 1)
			{
				func_232(722815515, 0);
			}
			else
			{
				func_232(-80758135, 0);
			}
			break;
		case 22:
			if (iParam1 == 1)
			{
				func_232(1053305061, 0);
			}
			else
			{
				func_232(1789349782, 0);
			}
			break;
		case 23:
			if (iParam1 == 1)
			{
				func_232(1024520106, 0);
			}
			else
			{
				func_232(1105521253, 0);
			}
			break;
		case 41:
			if (iParam1 == 1)
			{
				func_232(1140872184, 0);
			}
			else
			{
				func_232(-237709193, 0);
			}
			break;
		case 24:
			if (iParam1 == 1)
			{
				func_232(-1590595690, 0);
			}
			else
			{
				func_232(1836601784, 0);
			}
			break;
		case 25:
			if (iParam1 == 1)
			{
				func_232(1164380735, 0);
			}
			else
			{
				func_232(-1984992129, 0);
			}
			break;
		case 26:
			if (iParam1 == 1)
			{
				func_232(301696279, 0);
			}
			else
			{
				func_232(152181092, 0);
			}
			break;
		case 27:
			if (iParam1 == 1)
			{
				func_232(-415970359, 0);
			}
			else
			{
				func_232(839837681, 0);
			}
			break;
		case 28:
			if (iParam1 == 1)
			{
				func_232(1669531798, 0);
			}
			else
			{
				func_232(1602454819, 0);
			}
			break;
		case 29:
			if (iParam1 == 1)
			{
				func_232(-977383775, 0);
			}
			else
			{
				func_232(-1875435665, 0);
			}
			break;
		case 30:
			if (iParam1 == 1)
			{
				func_232(1183317680, 0);
			}
			else
			{
				func_232(-247145433, 0);
			}
			break;
		case 31:
			if (iParam1 == 1)
			{
				func_232(667332266, 0);
			}
			else
			{
				func_232(-368365640, 0);
			}
			break;
		case 33:
			if (iParam1 == 1)
			{
				func_232(-1578905205, 0);
			}
			else
			{
				func_232(946087658, 0);
			}
			break;
		case 32:
			if (iParam1 == 1)
			{
				func_232(-448931053, 0);
			}
			else
			{
				func_232(-421010414, 0);
			}
			break;
		case 34:
			if (iParam1 == 1)
			{
				func_232(-1162930163, 0);
			}
			else
			{
				func_232(-1228311530, 0);
			}
			break;
		case 35:
			if (iParam1 == 1)
			{
				func_232(1004123602, 0);
			}
			else
			{
				func_232(1321329534, 0);
			}
			break;
		case 36:
			if (iParam1 == 1)
			{
				func_232(281748406, 0);
			}
			else
			{
				func_232(-173822042, 0);
			}
			break;
		case 37:
			if (iParam1 == 1)
			{
				func_232(-1351305881, 0);
			}
			else
			{
				func_232(-1650817073, 0);
			}
			break;
		case 38:
			if (iParam1 == 1)
			{
				func_232(-1644190131, 0);
			}
			else
			{
				func_232(844678349, 0);
			}
			break;
		case 42:
			if (iParam1 == 1)
			{
				func_232(-926127573, 0);
			}
			else
			{
				func_232(-1260559150, 0);
			}
			break;
		case 43:
			if (iParam1 == 1)
			{
				func_232(758690400, 0);
			}
			else
			{
				func_232(1430679359, 0);
			}
			break;
		default:
			break;
	}
}

bool func_200(int iParam0)
{
	return func_183(Global_1935496->f_27, iParam0);
}

int func_201(int iParam0)
{
	if (!func_110(iParam0))
	{
		return 0;
	}
	return func_111(iParam0, 2, 1);
}

int func_202()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_234(func_233(iParam0));
}

bool func_204(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_205(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_206(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_207()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

float func_208(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

int func_209(int iParam0)
{
	if (func_235())
	{
		return 0;
	}
	return func_85(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

var func_210(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_236(uParam0, &Var0);
}

void func_211(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_215(iParam0, fParam1, 1);
	}
	func_238(iParam0, (func_237(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_212(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_213(float fParam0)
{
	if (fParam0 >= (100f - 1f))
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_214()
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_215(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_89();
	func_239(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_240(iParam0, 2);
	if (func_127(iVar0, func_241(iParam0, 2), 1))
	{
		func_242(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_26(88, bParam2);
		return 0f;
	}
	func_243(iParam0, func_89(), 2);
	func_242(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_216(float fParam0, float fParam1, float fParam2)
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

void func_217(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_3() != -1)
	{
		return;
	}
	if (!func_4(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_244(BUILTIN::CEIL(&(Global_40.f_11095[iParam0])));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_245(iParam0), iVar0);
	func_247(func_246(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_248(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_26(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_26(func_249(iParam0), 1);
	}
	sVar1 = func_250(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_220(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_251(2);
	func_252(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_221(bool bParam0)
{
	if (func_3() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_26(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_26(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_253(1, bParam0, 1);
	func_254();
	Global_40.f_11095.f_43 = bParam0;
}

void func_222(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_255(2);
	func_256(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_223(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PLAYER::_0x57D9991DC1334151(iVar0);
	}
	iVar1 = func_257(2);
	func_258(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_224(int iParam0, bool bParam1, bool bParam2)
{
	func_238(iParam0, 100f, bParam1, bParam2, 1, 2);
}

float func_225(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_226()
{
	if (func_3() != -1)
	{
		return 0;
	}
	if (Global_1347477->f_200)
	{
		return 0;
	}
	if (Global_1347477->f_195 == -15)
	{
		return 1;
	}
	return func_75(Global_1347477->f_195, 0);
}

int func_227(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

void func_228(float fParam0, float fParam1)
{
	if (!func_207())
	{
		*fParam0 = -100f;
		*fParam1 = 100f;
		return;
	}
	*fParam0 = Global_40.f_11095.f_40;
	*fParam1 = Global_40.f_11095.f_41;
}

void func_229(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_171(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_259(1, bVar1, 1, sVar2);
		func_260(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_244(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_254();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_244(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_244(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_230(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_231(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

void func_232(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_261(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_262(1);
		Global_40.f_11922[0] = iParam0;
	}
}

int func_233(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_234(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_235()
{
	if (func_3() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

var func_236(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

float func_237(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_263();
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1955569->f_753.f_5[iParam0 /*3*/]);
		case 1:
			return &(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

int func_238(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_263();
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (bParam2)
	{
		if (fParam1 >= 100f)
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
		}
	}
	if (bParam3)
	{
		func_264(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_265(iVar0, iParam0, fParam1);
	func_266(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar0, func_245(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_239(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_119(*iParam0);
	iVar1 = func_120(*iParam0);
	iVar2 = func_121(*iParam0);
	iVar3 = func_122(*iParam0);
	iVar4 = func_123(*iParam0);
	iVar5 = func_124(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_125(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_126(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_240(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_263();
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1955569->f_753.f_5[iParam0 /*3*/])->f_2;
		case 1:
			return (Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_2;
		default:
			break;
	}
	return -1;
}

int func_241(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_263();
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1955569->f_753.f_5[iParam0 /*3*/])->f_1;
		case 1:
			return (Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_1;
		default:
			break;
	}
	return -15;
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_263();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_5[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_243(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_263();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_5[iParam0 /*3*/])->f_1 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_244(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_247(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_267(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[0]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[0]), bParam2);
}

float func_248(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_250(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

int func_251(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_263();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850;
		case 1:
			return Global_1955569->f_866.f_115;
		default:
			break;
	}
	return -1;
}

void func_252(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = PLAYER::PLAYER_PED_ID();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

void func_253(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, bParam2);
}

void func_254()
{
	func_268();
	func_269();
	func_270();
}

int func_255(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_263();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_2;
		case 1:
			return Global_1955569->f_866.f_115.f_2;
		default:
			break;
	}
	return -1;
}

void func_256(float fParam0)
{
	int iVar0;

	if (fParam0 == 0f)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_CHARGE_PED_STAMINA(iVar0, fParam0);
}

int func_257(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_263();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_1;
		case 1:
			return Global_1955569->f_866.f_115.f_1;
		default:
			break;
	}
	return -1;
}

void func_258(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 0);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

void func_259(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_9, sParam3);
}

void func_260(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_267(0, 1, bParam0, bParam1);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[1]), bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), true);
	}
}

void func_261(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_271(1);
	}
}

void func_262(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_261(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_271(1);
	}
}

int func_263()
{
	if (func_272())
	{
		return 1;
	}
	return 0;
}

void func_264(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_263();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_265(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_250(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_273(iParam1), fParam2, -1);
	}
}

void func_266(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_263();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_274(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_275(iParam0, iVar0, iParam3);
	}
}

char* func_267(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_171(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_171(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

float func_268()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_276())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_212(2);
	}
	if (Global_1347477->f_119)
	{
		return func_212(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_277();
	fVar2 = func_278();
	fVar3 = func_279();
	fVar4 = func_280();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_281()));
	fVar7 = (func_212(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_282(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_283(3, fVar9, fVar9 > 100f);
	return func_216(fVar7, -100f, 100f);
}

float func_269()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_276())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_212(1);
	}
	if (Global_1347477->f_119)
	{
		return func_212(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_277();
	fVar2 = func_278();
	fVar3 = func_279();
	fVar4 = func_280();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_281()));
	fVar7 = (func_212(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_282(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_283(2, fVar9, fVar9 > 100f);
	return func_216(fVar7, -100f, 100f);
}

float func_270()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_276())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_212(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_284())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_285())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_212(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_277();
	fVar2 = func_278();
	fVar3 = func_279();
	fVar4 = func_280();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_281()));
	fVar7 = (func_212(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_282(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_283(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_212(0);
	}
	return func_216(fVar7, -100f, 100f);
}

void func_271(bool bParam0)
{
	if (bParam0)
	{
		func_286(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_287(&(Global_40.f_12018.f_42), 1);
	}
}

bool func_272()
{
	return Global_1955569->f_866;
}

char* func_273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_274(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_263();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_275(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_263();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_15[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_15[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

int func_276()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_277()
{
	float fVar0;
	int iVar1;

	fVar0 = func_225(13);
	iVar1 = func_227(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_278()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_279()
{
	if (func_288())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_280()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_281()
{
	return Global_1955565->f_3;
}

void func_282(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_267(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), bParam2);
}

void func_283(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_267(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), false);
	}
}

bool func_284()
{
	return func_225(12) <= -99f;
}

bool func_285()
{
	return func_225(12) >= 99f;
}

void func_286(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_287(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_288()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

