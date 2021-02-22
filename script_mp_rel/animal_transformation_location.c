#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 1;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = -1;
	var uLocal_36 = -1;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uScriptParam_0 = -1;
#endregion

void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (func_1(&uLocal_19))
	{
		func_2(&uLocal_19, &uScriptParam_0);
		BUILTIN::WAIT(0);
	}
	func_3(&uLocal_19, &uScriptParam_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1(var uParam0)
{
	struct<2> Var0;

	if (func_4(0, 0))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if (func_5(Var0, 0, 0))
	{
		return false;
	}
	if (uParam0->f_2.f_5 & 1 != 0)
	{
		return false;
	}
	return true;
}

void func_2(var uParam0, var uParam1)
{
	func_6(uParam0);
	switch (*uParam0)
	{
		case 0:
			func_7(uParam0, uParam1);
			break;
		case 1:
			func_8(uParam0, uParam1);
			break;
		case 2:
			func_9(uParam0, uParam1);
			break;
		case 3:
			func_10(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3(var uParam0, var uParam1)
{
	func_11(uParam0, uParam1);
	func_12(&(uParam0->f_37));
	func_13(&(uParam0->f_37));
	func_14(&(uParam0->f_38));
	func_15(*uParam1, &(uParam0->f_49));
	func_16();
}

bool func_4(bool bParam0, bool bParam1)
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

bool func_5(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377.f_124517.f_135 & 8 != 0)
	{
		Global_1071686.f_28351 = 1;
		return true;
	}
	if (func_17(Global_1051213) && !func_18(Global_1051213, Param0))
	{
		Global_1071686.f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_19(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_20(iParam3, 255))
	{
		Global_1071686.f_28351 = 4;
		return true;
	}
	if (Global_263042[Global_1296859 /*70*/] > 2)
	{
		Global_1071686.f_28351 = 5;
		return true;
	}
	if (Global_262155 >= 1)
	{
		Global_1071686.f_28351 = 6;
		return true;
	}
	if (func_21())
	{
		Global_1071686.f_28351 = 7;
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_17(Global_1051213))
		{
			Global_1071686.f_28351 = 8;
			return true;
		}
	}
	if (Global_265377.f_124675 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265377.f_124675))
	{
		Global_1071686.f_28351 = 9;
		return true;
	}
	Global_1071686.f_28351 = 0;
	return false;
}

void func_6(var uParam0)
{
	int iVar0;
	float fVar1;

	if (uParam0->f_2.f_5 & 1073741824 == 0)
	{
		return;
	}
	if (uParam0->f_2.f_5 & 1 != 0)
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = func_22(Global_35, uParam0->f_2);
	if (uParam0->f_2.f_5 & 2 != 0)
	{
		if (fVar1 <= (uParam0->f_2.f_3 + 15f))
		{
			uParam0->f_2.f_5 = (uParam0->f_2.f_5 - uParam0->f_2.f_5 & 2);
		}
		else if ((iVar0 - uParam0->f_2.f_4) >= 5000)
		{
			uParam0->f_2.f_5 |= 1;
		}
	}
	else if (fVar1 > (uParam0->f_2.f_3 + 15f))
	{
		uParam0->f_2.f_4 = iVar0;
		uParam0->f_2.f_5 |= 2;
	}
}

void func_7(var uParam0, var uParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (!func_24(func_23(*uParam1), &(uParam0->f_2)))
			{
				return;
			}
			func_25(uParam0, uParam1, 1);
			break;
		case 1:
			if (!func_26(*uParam1, &(uParam0->f_49)))
			{
				return;
			}
			func_25(uParam0, uParam1, 2);
			break;
		case 2:
			if (!func_28(func_27(*uParam1), &(uParam0->f_14)))
			{
				return;
			}
			func_25(uParam0, uParam1, 3);
			break;
		case 3:
			uParam0->f_38.f_10 = func_29(*uParam1);
			func_25(uParam0, uParam1, 4);
			break;
		case 4:
			func_30(uParam0, uParam1, 1);
			break;
		default:
			break;
	}
}

void func_8(var uParam0, var uParam1)
{
	func_30(uParam0, uParam1, 2);
}

void func_9(var uParam0, var uParam1)
{
	if (!func_31(*uParam1, &(uParam0->f_49)))
	{
		return;
	}
	func_30(uParam0, uParam1, 3);
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;

	func_32(&(uParam0->f_33));
	func_33(*uParam1, &(uParam0->f_38));
	func_34(uParam0, uParam1);
	if (func_35(&(uParam0->f_16), &iVar0))
	{
		if (iVar0 == joaat("TRANSFORMATION"))
		{
			func_36(MISC::GET_GAME_TIMER());
		}
	}
}

int func_11(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 0)
	{
		iVar1 = func_37(iVar0, 1);
		if (func_38(uParam0, uParam1, iVar1))
		{
		}
		iVar0++;
	}
	uParam0->f_8.f_3 = (uParam0->f_8.f_3 - uParam0->f_8.f_3 & 1);
	return 1;
}

void func_12(var uParam0)
{
	if (!func_39(uParam0, 1))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
	func_40(uParam0, 1);
}

void func_13(var uParam0)
{
	if (!func_39(uParam0, 2))
	{
		return;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	func_40(uParam0, 2);
}

void func_14(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_10 - 1))
	{
		func_41(uParam0, iVar0);
		iVar0++;
	}
}

void func_15(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam1->f_17 - 1))
	{
		func_42(iParam0, uParam1, iVar0);
		iVar0++;
	}
}

void func_16()
{
	AUDIO::_0x531A78D6BF27014B("Animal_Control_Screen_Overlay_Sounds");
}

bool func_17(struct<2> Param0)
{
	if (!func_43(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_44(Param0))
	{
		return false;
	}
	return true;
}

bool func_18(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_19(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_20(int iParam0, int iParam1)
{
	if (!Global_1071686.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1197355[iParam1 /*12*/] && iParam0) != 0;
}

bool func_21()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_2883584)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (!func_17(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_22(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_23(int iParam0)
{
	return Global_1301323.f_1[iParam0 /*10*/].f_4;
}

bool func_24(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return false;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 16, iParam0, 0, 1))
	{
		return false;
	}
	*uParam1 = { func_47(Var0) };
	uParam1->f_3 = func_48(Var0);
	uParam1->f_5 |= 1073741824;
	return true;
}

void func_25(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_1 = iParam2;
}

bool func_26(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	uParam1->f_17 = func_49(iParam0);
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_17 - 1))
	{
		iVar1 = func_50(iParam0, iVar0);
		STREAMING::REQUEST_MODEL(iVar1, false);
		if (iVar1 != 0)
		{
			func_51(uParam1, iVar0, 1);
		}
		iVar0++;
	}
	return true;
}

int func_27(int iParam0)
{
	return Global_1301323.f_1[iParam0 /*10*/].f_7;
}

bool func_28(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return false;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 37, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 38, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 45, 0, 0, 1))
	{
		return false;
	}
	*uParam1 = func_52(Var0);
	uParam1->f_1 = func_53(Var0);
	return true;
}

var func_29(int iParam0)
{
	var uVar0;

	if (!func_45(&uVar0))
	{
		return 0;
	}
	if (!func_46(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 15, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 48, 0, 0, 0))
	{
		return 0;
	}
	return func_54(&uVar0, 9);
}

void func_30(var uParam0, var uParam1, int iParam2)
{
	*uParam0 = iParam2;
}

bool func_31(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (uParam1->f_17 <= 0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_17 - 1))
	{
		iVar1 = func_55(iParam0, iVar0, uParam1);
		if (iVar1 == 2)
		{
		}
		else
		{
			iVar0++;
		}
	}
	return uParam1->f_17 == uParam1->f_18;
}

void func_32(var uParam0)
{
	if (uParam0->f_3 == 0)
	{
		func_56(uParam0);
	}
	else
	{
		func_57(uParam0);
	}
}

void func_33(int iParam0, var uParam1)
{
	int iVar0;

	if (uParam1->f_10 == uParam1->f_9)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_10 - 1))
	{
		func_58(iParam0, uParam1, iVar0);
		iVar0++;
	}
}

void func_34(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	switch (uParam0->f_8)
	{
		case 0:
			if (func_59(uParam0, uParam1))
			{
				func_60(uParam0, uParam1, 1);
			}
			break;
		case 1:
			iVar1 = func_61(uParam0);
			iVar0 = func_62(uParam0, uParam1, iVar1);
			if (func_63(iVar0))
			{
				func_64(uParam0, joaat("INSPECT"));
			}
			else
			{
				func_65(uParam0, joaat("INSPECT"));
			}
			if (func_66(iVar0))
			{
				func_67(uParam0, joaat("INSPECT"));
			}
			else
			{
				if (iVar0 == 16)
				{
					if (uParam0->f_8.f_3 & 4 != 0)
					{
					}
					else
					{
						func_68(&(uParam0->f_33), 64);
					}
				}
				func_69(uParam0, joaat("INSPECT"));
			}
			if (func_70(uParam0, joaat("INSPECT")))
			{
				func_60(uParam0, uParam1, 2);
				func_71();
				func_72(&(uParam0->f_37));
				func_73(&(uParam0->f_37));
				func_74(1);
				uParam0->f_8.f_3 |= 2;
				uParam0->f_8.f_4 = MISC::GET_GAME_TIMER();
				func_75(&(uParam0->f_33), 64);
				func_76(&(uParam0->f_33), 64);
			}
			break;
		case 2:
			func_65(uParam0, joaat("INSPECT"));
			func_69(uParam0, joaat("INSPECT"));
			func_77(uParam0, joaat("INSPECT"));
			if (func_78(uParam0->f_14, 1, uParam0->f_14.f_1, 0))
			{
				func_79();
				func_80(uParam0->f_14, uParam0->f_14.f_1, 1, 0);
				func_74(2);
				uParam0->f_8.f_5 = MISC::GET_GAME_TIMER();
				func_60(uParam0, uParam1, 3);
			}
			else
			{
				func_82(&(uParam0->f_16), -1813292386, func_23(*uParam1), func_81(*uParam1));
				func_83(1);
				func_60(uParam0, uParam1, 7);
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_8.f_5) < 200)
			{
			}
			else if (!func_84())
			{
			}
			else
			{
				func_60(uParam0, uParam1, 4);
				Jump @951; //curOff = 509
				func_82(&(uParam0->f_16), joaat("TRANSFORMATION"), func_23(*uParam1), func_81(*uParam1));
				func_60(uParam0, uParam1, 5);
				Jump @951; //curOff = 549
				func_65(uParam0, joaat("INSPECT"));
				func_69(uParam0, joaat("INSPECT"));
				uParam0->f_8.f_3 = (uParam0->f_8.f_3 - uParam0->f_8.f_3 & 4);
				if (uParam0->f_16 != -1)
				{
					func_60(uParam0, uParam1, 6);
				}
				Jump @951; //curOff = 612
				func_65(uParam0, joaat("INSPECT"));
				func_69(uParam0, joaat("INSPECT"));
				if (uParam0->f_16 == -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID())))
					{
						func_85();
					}
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID())))
					{
						func_86();
					}
					func_60(uParam0, uParam1, 9);
				}
				Jump @951; //curOff = 693
				func_65(uParam0, joaat("INSPECT"));
				func_69(uParam0, joaat("INSPECT"));
				uParam0->f_8.f_3 |= 4;
				if (uParam0->f_16 != -1)
				{
					func_68(&(uParam0->f_33), 1);
					func_60(uParam0, uParam1, 8);
				}
				Jump @951; //curOff = 759
				func_65(uParam0, joaat("INSPECT"));
				func_69(uParam0, joaat("INSPECT"));
				if (uParam0->f_16 == -1)
				{
					func_76(&(uParam0->f_33), 1);
					func_60(uParam0, uParam1, 11);
				}
				Jump @951; //curOff = 811
				func_65(uParam0, joaat("INSPECT"));
				func_69(uParam0, joaat("INSPECT"));
				func_87(*uParam1);
				func_60(uParam0, uParam1, 10);
				Jump @951; //curOff = 853
				func_65(uParam0, joaat("INSPECT"));
				func_69(uParam0, joaat("INSPECT"));
				if (func_88())
				{
					func_60(uParam0, uParam1, 11);
				}
				Jump @951; //curOff = 895
				func_65(uParam0, joaat("INSPECT"));
				func_69(uParam0, joaat("INSPECT"));
				func_12(&(uParam0->f_37));
				func_13(&(uParam0->f_37));
				func_60(uParam0, uParam1, 1);
			}
			default:
				break;
	}
}

bool func_35(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	*uParam1 = uParam0->f_5;
	while (bVar0)
	{
		bVar0 = false;
		switch (func_89(uParam0))
		{
			case -1:
				break;
			case 0:
				func_90(uParam0, 1);
				break;
			case 1:
				func_91(uParam0);
				break;
			case 2:
				func_92(uParam0);
				break;
			case 3:
				func_93(uParam0);
				break;
			case 4:
				func_94(uParam0);
				break;
			case 5:
				func_95(uParam0);
				break;
			case 6:
				func_96(uParam0);
				break;
			case 7:
				func_97(uParam0);
				break;
			case 8:
				func_98(uParam0);
				break;
			case 9:
				func_99(uParam0);
				break;
			case 10:
				func_100(uParam0);
				iVar1 = 1;
				func_100(uParam0);
				break;
			default:
				break;
		}
		bVar0 = func_101(uParam0);
	}
	return iVar1;
}

void func_36(int iParam0)
{
	Global_1301323.f_295 = iParam0;
}

int func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("INSPECT");
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_38(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_102(iParam2, 1);
	if (!func_103(uParam0->f_8.f_1[iVar0]))
	{
		return false;
	}
	func_104(&(uParam0->f_8.f_1[iVar0]), 1, 1);
	return true;
}

bool func_39(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_41(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam1]))
	{
		return;
	}
	PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), (*uParam0)[iParam1]);
	PLAYER::_0xDC5E09D012D759C4((*uParam0)[iParam1], (*uParam0)[iParam1], 0);
	uParam0->f_9 = (uParam0->f_9 - 1);
	(*uParam0)[iParam1] = 0;
}

void func_42(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	switch ((uParam1[iParam2 /*2*/])->f_1)
	{
		case 0:
			break;
		case 1:
		case 2:
			iVar0 = func_50(iParam0, iParam2);
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iParam2 /*2*/]))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL((*uParam1)[iParam2 /*2*/]);
				OBJECT::DELETE_OBJECT(uParam1[iParam2 /*2*/]);
				(*uParam1)[iParam2 /*2*/] = 0;
				uParam1->f_18 = (uParam1->f_18 - 1);
			}
			else
			{
				iVar0 = func_50(iParam0, iParam2);
			}
			break;
		default:
			break;
	}
	if (iVar0 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	}
	func_51(uParam1, iParam2, 0);
}

bool func_43(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686.f_636.f_601;
		case 3:
			return Global_1071686.f_636.f_2103;
		case 4:
			return Global_1071686.f_636.f_12605;
		case 5:
			return Global_1071686.f_636.f_12907;
		case 6:
			return Global_1071686.f_636.f_15909;
		case 7:
			return Global_1071686.f_636.f_16511;
		case 8:
			return Global_1071686.f_636.f_18913;
		default:
			break;
	}
	return -1;
}

bool func_45(var uParam0)
{
	var uVar0;

	MISC::_COPY_MEMORY(uParam0, &uVar0, 5);
	if (!func_105(1))
	{
		return false;
	}
	*uParam0 = Global_1071686.f_28448[51 /*4*/].f_3;
	return true;
}

bool func_46(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	uVar0 = uParam0->f_1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

Vector3 func_47(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_106(&uParam0, 62, 1);
}

var func_48(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_107(&uParam0, 63, 1);
}

var func_49(int iParam0)
{
	var uVar0;

	if (!func_45(&uVar0))
	{
		return 0;
	}
	if (!func_46(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 15, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 49, 0, 0, 0))
	{
		return 0;
	}
	return func_54(&uVar0, 9);
}

int func_50(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return 0;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 15, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 49, 0, 0, 0))
	{
		return 0;
	}
	if (!func_46(&Var0, 50, iParam1, 0, 1))
	{
		return 0;
	}
	return func_108(Var0);
}

void func_51(var uParam0, int iParam1, int iParam2)
{
	(uParam0[iParam1 /*2*/])->f_1 = iParam2;
}

var func_52(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 80, 1);
}

var func_53(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 81, 1);
}

int func_54(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
}

int func_55(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	switch ((uParam2[iParam1 /*2*/])->f_1)
	{
		case 0:
			Var0 = func_50(iParam0, iParam1);
			if (Var0 == 0)
			{
				return 5;
			}
			STREAMING::REQUEST_MODEL(Var0, false);
			func_51(uParam2, iParam1, 1);
			return 4;
		case 1:
			Var0 = func_50(iParam0, iParam1);
			if (Var0 == 0)
			{
				return 5;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Var0))
			{
				return 3;
			}
			func_51(uParam2, iParam1, 2);
			return 4;
		case 2:
			if (!func_110(iParam0, iParam1, &Var0))
			{
				return 5;
			}
			(*uParam2)[iParam1 /*2*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Var0, Var0.f_1, false, false, false, true);
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iParam1 /*2*/]))
			{
				return 5;
			}
			ENTITY::SET_ENTITY_ROTATION((*uParam2)[iParam1 /*2*/], Var0.f_4, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION((*uParam2)[iParam1 /*2*/], true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED((*uParam2)[iParam1 /*2*/], false);
			ENTITY::SET_ENTITY_PROOFS((*uParam2)[iParam1 /*2*/], 4, false);
			uParam2->f_18++;
			func_51(uParam2, iParam1, 3);
			return 2;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_56(var uParam0)
{
	int iVar0;
	int iVar1;

	if (*uParam0 == 0)
	{
		return;
	}
	if (!func_111())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!MISC::IS_BIT_SET(*uParam0, iVar0))
		{
		}
		else
		{
			iVar1 = BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar0)));
			if (!func_112(uParam0, iVar1))
			{
			}
			else
			{
				func_75(uParam0, iVar1);
				func_113(uParam0, iVar1);
			}
		}
		iVar0++;
	}
}

void func_57(var uParam0)
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 == 0 || iVar0 != uParam0->f_3)
	{
		if (func_114(uParam0->f_1))
		{
			func_115(uParam0, uParam0->f_1);
		}
		func_116(uParam0, 0);
		func_117(uParam0, 0);
	}
}

void func_58(int iParam0, var uParam1, int iParam2)
{
	struct<8> Var0;
	int iVar8;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iParam2]))
	{
		return;
	}
	if (!func_118(iParam0, iParam2, &Var0))
	{
		return;
	}
	iVar8 = func_119(Var0.f_4, Var0.f_7, Var0.f_3);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
	{
		return;
	}
	(*uParam1)[iParam2] = iVar8;
	PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), (*uParam1)[iParam2], 0);
	PLAYER::_0x6ECFC621A168424C((*uParam1)[iParam2], (*uParam1)[iParam2], 0, 0);
	uParam1->f_9++;
	if ((Var0 != -1 && Var0.f_1 != -1) && Var0.f_2 != -1)
	{
		PLAYER::_0xBC02B3D151D3859F((*uParam1)[iParam2], 1);
		PLAYER::_0x62ED71E133B6C9F1((*uParam1)[iParam2], Var0, Var0.f_1, Var0.f_2);
	}
}

bool func_59(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = func_120(func_23(*uParam1));
	func_121();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = func_122(func_23(*uParam1), iVar0);
		if (func_123(uParam0, uParam1, iVar2))
		{
		}
		iVar0++;
	}
	uParam0->f_8.f_3 |= 1;
	return true;
}

void func_60(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_8 = iParam2;
}

var func_61(var uParam0)
{
	var uVar0;

	return uVar0;
}

int func_62(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (func_88())
	{
		return 12;
	}
	if (uParam0->f_8.f_3 & 2 != 0)
	{
		if (uParam0->f_8.f_4 + 20000 > MISC::GET_GAME_TIMER())
		{
			return 16;
		}
	}
	if (iParam2 & 1 == 0 && uParam0->f_8 != 1)
	{
		return 1;
	}
	if (func_17(func_124()))
	{
		return 2;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (TASK::_0xEC7E480FF8BD0BED(iVar0) || TASK::PED_HAS_USE_SCENARIO_TASK(iVar0))
	{
		return 6;
	}
	if (PED::_0x1D46B417F926D34D(PLAYER::PLAYER_PED_ID()))
	{
		return 15;
	}
	if (((((func_125(iVar0, 0) || FIRE::IS_ENTITY_ON_FIRE(iVar0)) || PED::_IS_PED_LASSOED(iVar0)) || PED::_IS_PED_HOGTIED(iVar0)) || PED::_GET_LASSOER_OF_PED(iVar0)) || PED::_IS_PED_HOGTYING(iVar0))
	{
		return 13;
	}
	if (func_126(Global_34))
	{
		return 14;
	}
	if (func_127())
	{
		return 7;
	}
	if (func_128())
	{
		return 8;
	}
	if (func_129())
	{
		return 9;
	}
	if (func_130())
	{
		return 10;
	}
	if (func_131(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 4;
	}
	if (PED::_IS_PED_CARRYING(iVar0) || func_132(iVar0))
	{
		return 11;
	}
	if (func_133(Global_34, -2017877118))
	{
		return 17;
	}
	if (TASK::IS_PED_GETTING_UP(Global_34))
	{
		return 18;
	}
	return 0;
}

bool func_63(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
			return false;
		default:
			break;
	}
	return true;
}

void func_64(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_102(iParam1, 1);
	if (!func_103(uParam0->f_8.f_1[iVar0]))
	{
		return;
	}
	if (func_134(uParam0->f_8.f_1[iVar0], 1))
	{
		return;
	}
	func_135(uParam0->f_8.f_1[iVar0], 1, 1);
}

void func_65(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_102(iParam1, 1);
	if (!func_103(uParam0->f_8.f_1[iVar0]))
	{
		return;
	}
	if (!func_134(uParam0->f_8.f_1[iVar0], 1))
	{
		return;
	}
	func_135(uParam0->f_8.f_1[iVar0], 0, 1);
}

bool func_66(int iParam0)
{
	return iParam0 == 0;
}

void func_67(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_102(iParam1, 1);
	if (!func_103(uParam0->f_8.f_1[iVar0]))
	{
		return;
	}
	if (func_136(uParam0->f_8.f_1[iVar0], 0))
	{
		return;
	}
	func_137(uParam0->f_8.f_1[iVar0], 1, 1, 1);
}

void func_68(var uParam0, int iParam1)
{
	if (func_138(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 || iParam1);
}

void func_69(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_102(iParam1, 1);
	if (!func_103(uParam0->f_8.f_1[iVar0]))
	{
		return;
	}
	if (!func_136(uParam0->f_8.f_1[iVar0], 0))
	{
		return;
	}
	func_137(uParam0->f_8.f_1[iVar0], 0, 1, 1);
}

bool func_70(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_102(iParam1, 1);
	return func_139(uParam0->f_8.f_1[iVar0], 1);
}

void func_71()
{
	NETWORK::_0x4B05B97BA46F419D(0);
}

void func_72(var uParam0)
{
	if (func_39(uParam0, 1))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(1, 0, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
	func_140(uParam0, 1);
}

void func_73(var uParam0)
{
	if (func_39(uParam0, 2))
	{
		return;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	func_140(uParam0, 2);
}

void func_74(int iParam0)
{
	Global_1301323.f_288.f_2 = (Global_1301323.f_288.f_2 || iParam0);
}

void func_75(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_77(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_102(iParam1, 1);
	func_141(uParam0->f_8.f_1[iVar0], 1);
}

bool func_78(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar2;

	return func_142(iParam0, iParam1, iParam2, &uVar0, &uVar2, 0, bParam3, 0);
}

void func_79()
{
	Global_1913504 = 1;
}

int func_80(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	struct<5> Var2;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<12> Var19;
	struct<12> Var36;
	struct<17> Var52;

	if (!func_143(iParam0, 0))
	{
		return -1;
	}
	if (func_144(iParam0))
	{
		if (!func_146(func_145(iParam0), iParam1, &uVar0, 0, 0))
		{
			return -1;
		}
	}
	else if (func_147(iParam0, iParam1, 0, 0) < iParam2)
	{
		return -1;
	}
	Var2 = { func_148(iParam0, 1, 0) };
	if (func_149(iParam0, &Var2, iParam2, 0, 1, -1, 0))
	{
		return -1;
	}
	iVar7 = -1;
	iVar8 = func_150(iParam0);
	if (iVar8 == 1388422710)
	{
		iVar7 = func_151(iParam0, "SPEND STEW FEE", 1, 1, 0, iParam1);
	}
	else
	{
		Var9 = -1;
		Var9.f_1 = -1;
		if (func_144(iParam0))
		{
			Var19.f_9 = 1;
			Var19.f_11 = -1591664384;
			if (!func_152(&Var9, func_145(iParam0), &Var19, 1, iParam1, -1, 0, 0))
			{
				return -1;
			}
		}
		else
		{
			Var36.f_9 = 1;
			Var36.f_11 = -1591664384;
			if (!func_153(&Var9, iParam0, Var2, Var2.f_4, iParam2, &Var36, 1, iParam1, -1, 1))
			{
				return -1;
			}
		}
		iVar7 = Var9.f_1;
	}
	if (iVar7 == -1)
	{
		return -1;
	}
	Var52.f_7 = -142743235;
	Var52.f_16 = -1;
	Var52.f_1 = 1;
	if (iParam0 == -1283929968)
	{
		Var52.f_1 = 0;
	}
	if (func_144(iParam0))
	{
		if (func_154(func_145(iParam0), iParam1) == 1400824947)
		{
			Var52.f_1 = 0;
		}
	}
	else if (func_155(iParam0, iParam1) == 1400824947)
	{
		Var52.f_1 = 0;
	}
	func_156(iVar7, Var52);
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(iParam0, iParam1, iParam3);
	return iVar7;
}

int func_81(int iParam0)
{
	return Global_1301323.f_1[iParam0 /*10*/].f_5;
}

int func_82(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	struct<8> Var1;
	int iVar9;

	if (func_89(uParam0) != -1)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (iParam1 == -238690612)
	{
		if (iParam3 == 0)
		{
			return 0;
		}
	}
	Var1 = { func_157(iParam2, iParam1, &uVar0) };
	if (MISC::_IS_STRING_SPACE(&Var1))
	{
		return 0;
	}
	iVar9 = func_158(iParam2, iParam1);
	if (iVar9 == 0)
	{
		return 0;
	}
	func_159(uParam0, iParam1);
	func_160(uParam0, iVar9);
	func_161(uParam0, iParam2);
	func_162(uParam0, iParam3);
	func_163(uParam0, uVar0);
	func_164(uParam0, Var1);
	func_90(uParam0, 0);
	return 1;
}

void func_83(int iParam0)
{
	Global_1301323.f_288.f_2 = (Global_1301323.f_288.f_2 - (Global_1301323.f_288.f_2 && iParam0));
}

bool func_84()
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (PED::_0x0E99E3BF11BB6367(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		return false;
	}
	return true;
}

void func_85()
{
	if (func_165(2, 255))
	{
		return;
	}
	func_166(2);
}

void func_86()
{
	if (func_167(8, 255))
	{
		return;
	}
	func_168(3);
}

void func_87(int iParam0)
{
	if (func_169() != 0)
	{
		return;
	}
	func_170(iParam0);
	func_171(func_23(iParam0));
	func_172(func_81(iParam0));
}

bool func_88()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

int func_89(var uParam0)
{
	return *uParam0;
}

void func_90(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_91(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;
	int iVar17;
	int iVar18;

	iVar18 = func_173(uParam0);
	Var9 = { func_174(iVar18) };
	iVar17 = func_175(iVar18);
	Var1 = { func_176(uParam0) };
	iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var9, iVar17, &Var1, false, true);
	if (iVar0 == -1)
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(iVar0);
	GRAPHICS::_0xB958D97A0DFAA0C2(func_178(func_177(uParam0->f_6, uParam0->f_7)));
	func_179(uParam0, iVar0);
	func_90(uParam0, 2);
}

void func_92(var uParam0)
{
	if (func_180(Global_34, 0) || func_180(Global_34, 1))
	{
		if (!func_181(Global_34, 716706914))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), false, 1, false, false);
			WEAPON::_0x94A3C1B804D291EC(Global_34, 0, 0, 0, 0);
			TASK::TASK_SWAP_WEAPON(Global_34, 0, 0, 0, 0);
		}
		return;
	}
	func_90(uParam0, 3);
}

void func_93(var uParam0)
{
	int iVar0;

	iVar0 = func_182(uParam0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar0, true, false))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iVar0, false))
	{
		return;
	}
	func_90(uParam0, 4);
}

void func_94(var uParam0)
{
	switch (func_183(uParam0))
	{
		case joaat("TRANSFORMATION"):
			break;
		case -956768978:
		case -238690612:
			if (func_184(255))
			{
				return;
			}
			break;
	}
	switch (uParam0->f_5)
	{
		case -956768978:
		case -238690612:
			func_90(uParam0, 5);
			break;
		default:
			func_90(uParam0, 6);
			break;
	}
}

void func_95(var uParam0)
{
	if ((MISC::GET_GAME_TIMER() - func_185()) < 3000)
	{
		return;
	}
	func_90(uParam0, 6);
}

void func_96(var uParam0)
{
	struct<9> Var0;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	var uVar21;
	int iVar22;
	int iVar23;

	if (!func_187(func_186(uParam0), func_183(uParam0), &Var0))
	{
		return;
	}
	switch (Var0)
	{
		case joaat("PLAYER"):
			MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), &uVar21, false);
			vVar9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false) };
			vVar9.f_2 = uVar21;
			vVar12 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) };
			break;
		case joaat("OBJECT"):
			iVar22 = func_188(Var0.f_1, Var0.f_7, Var0.f_8);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar22))
			{
				return;
			}
			vVar9 = { ENTITY::GET_ENTITY_COORDS(iVar22, true, false) };
			vVar12.f_2 = ENTITY::GET_ENTITY_HEADING(iVar22);
			break;
		case joaat("POSITION"):
			vVar9 = { Var0.f_1 };
			vVar12 = { Var0.f_4 };
			break;
		case -2135825642:
			vVar9 = { Var0.f_1 };
			vVar15 = { vVar9 - ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false) };
			vVar18 = { func_189(vVar15) };
			vVar12 = { 0f, 0f, MISC::GET_HEADING_FROM_VECTOR_2D(vVar18.x, vVar18.y) };
			break;
		default:
			break;
	}
	if (func_190(vVar9))
	{
		return;
	}
	iVar23 = func_182(uParam0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar23, vVar9, vVar12, 2);
	func_90(uParam0, 7);
}

void func_97(var uParam0)
{
	func_191(uParam0);
	func_90(uParam0, 8);
}

void func_98(var uParam0)
{
	int iVar0;

	iVar0 = func_182(uParam0);
	ANIMSCENE::START_ANIM_SCENE(iVar0);
	func_90(uParam0, 9);
}

void func_99(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	var uVar7;

	iVar0 = func_182(uParam0);
	fVar5 = ANIMSCENE::_GET_ANIM_SCENE_TIME(iVar0);
	fVar4 = ANIMSCENE::_GET_ANIM_SCENE_DURATION(iVar0);
	fVar6 = (fVar4 - fVar5);
	switch (uParam0->f_5)
	{
		case -956768978:
		case -238690612:
			if (!func_192(uParam0, 4))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("MP_NaturalistAnimalTransformEnd");
				func_193(uParam0, 4);
			}
			if ((func_192(uParam0, 4) && !func_192(uParam0, 1)) && fVar5 > 1f)
			{
				CAM::DO_SCREEN_FADE_IN(1);
				func_193(uParam0, 1);
			}
			if (func_192(uParam0, 1))
			{
				GRAPHICS::ANIMPOSTFX_STOP("MP_NaturalistAnimalTransformStart");
				AUDIO::_STOP_SOUND_WITH_NAME("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds");
				AUDIO::_0x6339C1EA3979B5F7("NATAC_Screen_Overlay_Fade_From_Black", "MP007_NATAC_Sceneset");
				AUDIO::PLAY_SOUND_FRONTEND("Animal_Control_Exit", "Animal_Control_Screen_Overlay_Sounds", true, 0);
			}
			if (!func_192(uParam0, 1))
			{
				if (fVar6 < (fVar4 / 2f))
				{
					CAM::DO_SCREEN_FADE_IN(1);
					func_193(uParam0, 1);
				}
			}
			break;
		case joaat("TRANSFORMATION"):
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, joaat("EAT")))
			{
				if (!func_192(uParam0, 4) && !func_192(uParam0, 8))
				{
					AUDIO::_0x6339C1EA3979B5F7("NATAC_Screen_Overlay_Fade_To_Black", "MP007_NATAC_Sceneset");
					AUDIO::PLAY_SOUND_FRONTEND("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds", true, 0);
					uParam0->f_2 = fVar5;
					func_193(uParam0, 4);
				}
			}
			break;
	}
	HUD::_0xC9CAEAEEC1256E54(-1679307491);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	func_194();
	func_195(0, 0, 1);
	if (!func_192(uParam0, 16))
	{
		if (GRAPHICS::_0xFBF161FCFEC8589E(func_178(func_177(uParam0->f_6, uParam0->f_7)), 2, false, &uVar7))
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds");
			AUDIO::PLAY_SOUND_FRONTEND("Animal_Control_Enter_Whoosh", "Animal_Control_Screen_Overlay_Sounds", true, 0);
			func_193(uParam0, 16);
		}
	}
	bVar1 = ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iVar0, false);
	bVar2 = ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iVar0);
	bVar3 = ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false);
	if ((bVar1 || bVar2) || !bVar3)
	{
		switch (uParam0->f_5)
		{
			case -956768978:
			case -238690612:
				if (func_192(uParam0, 4))
				{
					AUDIO::_0x9428447DED71FC7E("MP007_NATAC_Sceneset");
					func_193(uParam0, 8);
					func_196(uParam0, 4);
				}
				break;
			case joaat("TRANSFORMATION"):
				CAM::DO_SCREEN_FADE_OUT(1);
				AUDIO::_0x9428447DED71FC7E("MP007_NATAC_Sceneset");
				func_193(uParam0, 2);
				func_193(uParam0, 8);
				func_196(uParam0, 4);
				break;
		}
		if (CAM::_0xA24C1D341C6E0D53(1, 1, 0))
		{
			func_197(0, 0);
		}
		func_90(uParam0, 10);
	}
}

void func_100(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	Var1 = -1;
	Var1.f_1 = -1;
	func_90(uParam0, -1);
	iVar0 = func_182(uParam0);
	GRAPHICS::_0xA201A3D0AC087C37(func_178(func_177(uParam0->f_6, uParam0->f_7)));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iVar0);
	}
	MISC::_COPY_MEMORY(uParam0, &Var1, 17);
}

int func_101(var uParam0)
{
	switch (func_89(uParam0))
	{
		case 0:
		case 6:
		case 7:
		case 8:
		case 10:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_102(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("INSPECT"):
			return 0;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_103(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (Global_1951255[iParam0 /*23*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3);
}

void func_104(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_103(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_198(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_199(iVar0);
	*uParam0 = 0;
}

bool func_105(int iParam0)
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1071686.f_28448[51 /*4*/].f_3))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(Global_1071686.f_28448[51 /*4*/].f_3))
	{
		return false;
	}
	return true;
}

Vector3 func_106(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, uParam0))
	{
	}
	return vVar0;
}

var func_107(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_FLOAT(&uVar0, uParam0))
	{
	}
	return uVar0;
}

var func_108(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 67, 1);
}

var func_109(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
	}
	return uVar0;
}

bool func_110(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return false;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 15, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 49, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 50, iParam1, 0, 1))
	{
		return false;
	}
	*iParam2 = func_108(Var0);
	iParam2->f_1 = { func_47(Var0) };
	iParam2->f_4 = { func_200(Var0) };
	return true;
}

bool func_111()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return false;
	}
	return true;
}

bool func_112(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 8:
			if (!func_201(uParam0->f_2, 4))
			{
				return false;
			}
			break;
	}
	if (MISC::_IS_STRING_SPACE(func_202(iParam1)))
	{
		return false;
	}
	return true;
}

void func_113(var uParam0, int iParam1)
{
	var uVar0;

	uVar0 = func_203(func_202(iParam1), 10000, 0, 0, 0, 1);
	func_116(uParam0, iParam1);
	func_117(uParam0, uVar0);
}

bool func_114(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return false;
		default:
			break;
	}
	return true;
}

void func_115(var uParam0, var uParam1)
{
	uParam0->f_2 = (uParam0->f_2 || uParam1);
}

void func_116(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_117(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

bool func_118(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return false;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 15, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 48, 0, 0, 0))
	{
		return false;
	}
	if (!func_46(&Var0, 50, iParam1, 0, 1))
	{
		return false;
	}
	uParam2->f_3 = func_108(Var0);
	uParam2->f_7 = func_48(Var0);
	uParam2->f_4 = { func_47(Var0) };
	*uParam2 = func_204(Var0);
	uParam2->f_1 = func_205(Var0);
	uParam2->f_2 = func_206(Var0);
	return true;
}

int func_119(vector3 vParam0, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = ENTITY::_0x59B57C4B06531E1E(vParam0, uParam3, iVar2, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar2);
		iVar5 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
		}
		else
		{
			iVar6 = ENTITY::GET_ENTITY_MODEL(iVar5);
			if (iVar6 != iParam4)
			{
			}
			else
			{
				iVar4 = iVar5;
			}
			else
			{
				iVar0++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar2);
			return iVar4;
		}
	}
}

var func_120(int iParam0)
{
	var uVar0;

	if (!func_45(&uVar0))
	{
		return 0;
	}
	if (!func_46(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 16, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 34, 0, 0, 1))
	{
		return 0;
	}
	return func_54(&uVar0, 5);
}

void func_121()
{
	AUDIO::_0xD9130842D7226045("Animal_Control_Screen_Overlay_Sounds", 0);
}

var func_122(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return 0;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 16, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 34, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 36, iParam1, 0, 1))
	{
		return 0;
	}
	return func_207(Var0);
}

bool func_123(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<13> Var1;

	iVar0 = func_102(iParam2, 1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_103(uParam0->f_8.f_1[iVar0]))
	{
		return false;
	}
	if (!func_208(func_23(*uParam1), iParam2, &Var1))
	{
		return false;
	}
	uParam0->f_8.f_1[iVar0] = func_209(&Var1, Var1.f_12, Var1.f_8, Var1.f_11, 0, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
	func_69(uParam0, iParam2);
	func_65(uParam0, iParam2);
	return true;
}

struct<2> func_124()
{
	if (Global_1196205.f_129 <= 0)
	{
		return func_210(0);
	}
	if (Global_1196205.f_130 < 0 || Global_1196205.f_131 == 0)
	{
		return func_210(0);
	}
	return Global_1196205[Global_1196205.f_130 /*4*/].f_1;
}

bool func_125(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_126(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return true;
	}
	return false;
}

bool func_127()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");
	}
	return false;
}

bool func_128()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("NET_ADVANCED_CAMERA")) > 0)
	{
		return true;
	}
	return false;
}

bool func_129()
{
	if (Global_1071686.f_28662.f_65.f_42 >= 9)
	{
		return true;
	}
	return false;
}

bool func_130()
{
	return Global_1071686.f_28662.f_65.f_42 != 0;
}

int func_131(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_211(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_13 != -1)
	{
		if (iParam0 == Global_1296859.f_10)
		{
			if (!Global_1296859.f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_132(int iParam0)
{
	return (func_212(iParam0, 4) || func_212(iParam0, 5));
}

bool func_133(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_134(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_103(iParam0))
	{
		return false;
	}
	iVar0 = func_198(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(Global_1951255[iVar0 /*23*/].f_3);
}

void func_135(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_103(iParam0))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	func_213(iVar0, bParam1);
}

bool func_136(int iParam0, bool bParam1)
{
	if (bParam1 && !func_103(iParam0))
	{
		return false;
	}
	return !func_214(iParam0, 4);
}

void func_137(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_103(iParam0))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	if (bParam1)
	{
		func_215(iParam0, 4);
		if (bParam3)
		{
			func_213(iVar0, 1);
		}
		func_216(iVar0, 1);
	}
	else
	{
		func_217(iParam0, 4);
		func_216(iVar0, 0);
	}
}

bool func_138(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_139(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_103(iParam0))
	{
		return false;
	}
	iVar0 = func_198(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		if (Global_1951255[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(Global_1951255[iVar0 /*23*/].f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(Global_1951255[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1951255[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1951255[iVar0 /*23*/].f_18) * (1f - Global_1951255[iVar0 /*23*/].f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1951255[iVar0 /*23*/].f_21 = iVar1;
			Global_1951255[iVar0 /*23*/].f_22 = uVar2;
		}
	}
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
}

void func_140(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_141(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_103(iParam0))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_142(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;

	if (func_218(iParam0))
	{
		return func_146(func_219(iParam0, 1), iParam2, uParam3, 1, 0);
	}
	if (!func_220(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_221(0)) && !func_222());
	iVar37 = -1;
	if (Global_1915715.f_20638)
	{
		iVar37 = Global_1915715.f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * iParam1);
			if (Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && (bParam7 || func_223(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && (bParam7 || func_224(iVar32)))
			{
			}
			else
			{
				iVar36 = func_225(iVar37, Var0[iVar34 /*2*/]);
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_226(Var0[iVar34 /*2*/], iVar36);
				}
				else
				{
					iVar33 = func_227(Var0[iVar34 /*2*/], 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_228(Var0[iVar34 /*2*/]) || func_229(Var0[iVar34 /*2*/]))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_230(7, Var0[iVar34 /*2*/], &iVar38);
						}
						iVar40 = func_231(Var0[iVar34 /*2*/], iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar38))
							{
								*uParam4 = iVar38;
							}
						}
						else
						{
							Jump @466; //curOff = 422
							if (bParam5 && ((iVar33 + func_232(7, Var0[iVar34 /*2*/])) + func_233(Var0[iVar34 /*2*/])) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { Var0[iVar34 /*2*/] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

bool func_143(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_144(int iParam0)
{
	return (func_234(iParam0) && func_235(iParam0, 1584357097));
}

int func_145(int iParam0)
{
	if (!func_144(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 731907282:
			return 195889874;
		case 1561454517:
			return 465087209;
		case 1254834984:
			return -311177636;
		case 1829957287:
			return 857944907;
		case 919634467:
			return -1729036567;
		case -28339930:
			return -2035393948;
		case 507515628:
			return -284580868;
		case -1975194892:
			return 73453226;
		case 2039957913:
			return 329215271;
		case 1502511939:
			return 1942551232;
		case 1809065934:
			return 518344954;
		case -997271222:
			return 1353200767;
		case -878058438:
			return -668553641;
		case -1617589234:
			return -431273312;
		case -1042952050:
			return -1111852673;
		case -2050900874:
			return -856521084;
		case -1815586685:
			return -412238982;
		case -51500315:
			return -260158053;
		case 1348094862:
			return 863949896;
		case 1646522145:
			return 1693169437;
		case 1156363443:
			return 387193715;
		case 1952092069:
			return -1816797957;
		case -2109461640:
			return -1533903180;
		case -1806184545:
			return 1874334976;
		case -1053842899:
			return -2015093177;
		case -755677768:
			return -1841483015;
		case 767294276:
			return -600422706;
		case 1311814185:
			return -229245945;
		case -840486512:
			return -526428006;
		case -1029170414:
			return 1651235889;
		case -831411723:
			return -882484202;
		case -429434400:
			return 1973137538;
		case -131203731:
			return -1830556910;
		case 1800445393:
			return 596295460;
		case 2047228732:
			return 290265769;
		case -2027203194:
			return 2081091619;
		case -609641686:
			return 516107635;
		case 154924622:
			return 207980728;
		case -142781743:
			return -99130340;
		case -533360838:
			return 1220617347;
		case -464283790:
			return -553725692;
		case -186533746:
			return -1123513064;
		case -1593520704:
			return -769187178;
		case 1260724738:
			return -1889559288;
		case -297375678:
			return 2100623539;
		case 1701653225:
			return -1303234828;
		case 1386939749:
			return 2105724242;
		case 1103717282:
			return 1767482612;
		case 1332088703:
			return 1366042262;
		case 1034120186:
			return 2091613460;
		case 532885562:
			return 1728467402;
		case -452048774:
			return 974561281;
		case -1085571851:
			return 1934791288;
		case -862677113:
			return -1633818354;
		case 1890828381:
			return -1707282708;
		case 1864875333:
			return 1682604808;
		case -320325540:
			return 1029354793;
		case -1278925815:
			return 1640403026;
		case -80071950:
			return -1229833684;
		case -781656240:
			return -2040374903;
		case 525029001:
			return 463034341;
		case 1717296181:
			return 149336704;
		case 1894117705:
			return 1146825064;
		case 1464921218:
			return -979751655;
		case 550403966:
			return -1219424121;
		case 856007660:
			return 1019812717;
		case -1617179117:
			return 862573726;
		case 1784374159:
			return 1100771587;
		case 2081818376:
			return 1455922005;
		case -1615607679:
			return 1686296029;
		case -1894668475:
			return 1957000738;
		case 2095710966:
			return 1656345167;
		case -260985198:
			return -354862110;
		case -1179959034:
			return -146516808;
		case -873142887:
			return -337101316;
		case 245915270:
			return 518337236;
		case 844146134:
			return 966617156;
		case 538640747:
			return 677332424;
		case 560856018:
			return 9691481;
		case -1382149068:
			return -240893062;
		case -188079477:
			return -547676440;
		case 1578729681:
			return 526083803;
		case 1879581870:
			return -1364982418;
		case 948647349:
			return -1058723344;
		default:
			break;
	}
	return 0;
}

bool func_146(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_236(iParam0, iParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915715.f_20638)
	{
		iVar34 = Global_1915715.f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH"))
			{
				if (!bParam4 && !func_223(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
			{
				if (!bParam4 && !func_224(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_225(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_226(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_227(Var0[iVar32 /*2*/], 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32 /*2*/].f_1)
				{
					*uParam2 = { Var0[iVar32 /*2*/] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

int func_147(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	if (!func_220(iParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar33 = ((!bParam3 && func_221(0)) && !func_222());
	iVar34 = -1;
	iVar35 = -1;
	if (Global_1915715.f_20638)
	{
		iVar35 = Global_1915715.f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
			Jump @338; //curOff = 103
		}
		else
		{
			iVar36 = func_225(iVar35, Var0[iVar32 /*2*/]);
			if (iVar36 != 0)
			{
				bParam2 = false;
				iVar37 = func_226(Var0[iVar32 /*2*/], iVar36);
			}
			else
			{
				iVar37 = func_227(Var0[iVar32 /*2*/], 0, !bVar33, 1);
			}
			if (bVar33)
			{
				if (func_228(Var0[iVar32 /*2*/]) || func_229(Var0[iVar32 /*2*/]))
				{
					iVar37 = (iVar37 + func_231(Var0[iVar32 /*2*/], 0));
					if (bParam2)
					{
						iVar38 = 0;
						iVar37 = (iVar37 + func_230(7, Var0[iVar32 /*2*/], &iVar38));
					}
				}
				else if (bParam2)
				{
					iVar37 = (iVar37 + (func_232(7, Var0[iVar32 /*2*/]) + func_233(Var0[iVar32 /*2*/])));
				}
			}
			if (iVar37 < Var0[iVar32 /*2*/].f_1)
			{
				return 0;
			}
			iVar37 = (iVar37 / Var0[iVar32 /*2*/].f_1);
			if (iVar34 == -1 || iVar37 < iVar34)
			{
				iVar34 = iVar37;
			}
		}
		iVar32++;
	}
	return iVar34;
}

struct<5> func_148(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_237(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_238(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_239(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_240(bParam1) };
			if (bParam2 && func_241(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_242(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_242(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_243(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -1591664384;
			Var0 = { func_244(bParam1) };
			switch (func_150(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_245(iParam0, -1823706425))
			{
				Var0 = { func_239(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_245(iParam0, -1483207246))
			{
				Var0 = { func_239(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_239(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_245(iParam0, -1653629781))
			{
				Var0 = { func_239(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_246(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_245(iParam0, -1653629781))
			{
				Var0 = { func_239(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

bool func_149(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_247(&iParam0);
	if (!func_143(iParam0, 0) && !func_249(func_248(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_250(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam3 = true;
	}
	if (func_251(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_240(0) };
		Var4.f_9 = -1591664384;
		if (!func_242(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return false;
		}
		else if (func_243(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return false;
		}
		if (func_241(iParam0, 1))
		{
			if (!func_242(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return false;
			}
			else if (func_243(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_252(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_253(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

int func_150(int iParam0)
{
	struct<2> Var0;

	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_151(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	int iVar35;
	struct<14> Var36;
	int iVar52;
	struct<17> Var53;

	if (!func_143(iParam0, 0))
	{
		return -1;
	}
	if (func_238(iParam0) != joaat("FEE"))
	{
		return -1;
	}
	if (func_222())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_254(iParam0, iParam5, 1, 0, 1, joaat("CURRENCY_CASH")) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_254(iParam0, iParam5, 1, 0, 1, joaat("CURRENCY_GOLD_BAR")) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_220(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
			if (!func_227(Var2[iVar35 /*2*/], 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_221(0))
	{
		if (iVar0 > 0)
		{
			func_255(joaat("CURRENCY_CASH"), iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_255(joaat("CURRENCY_GOLD_BAR"), iVar1, -142743235, 0, 0);
		}
		else if (func_256(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
				func_255(Var2[iVar35 /*2*/], iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = iParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_257(joaat("SPEND"), &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_156(iVar52, Var53);
	}
	return iVar52;
}

bool func_152(int* iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	if (!func_258(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_259(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_260(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	iVar0 = 541670136;
	if (bParam7)
	{
		iVar0 = joaat("BATCH");
	}
	if (!func_261(iParam0, uParam2, iVar0, iParam4, bParam3))
	{
		return false;
	}
	return true;
}

bool func_153(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12)
{
	struct<16> Var0;

	if (!func_258(iParam0, 0))
	{
		return false;
	}
	if (!func_262(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, iParam11, iParam12))
	{
		return false;
	}
	Var0 = { func_263(iParam1, Param2, iParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (!func_264(iParam0, &Var0, 2113164098, bParam9, iParam11))
	{
		return false;
	}
	return true;
}

int func_154(int iParam0, int iParam1)
{
	struct<37> Var0;
	int iVar47;
	int iVar48;

	Var0.f_4 = 15;
	Var0.f_36 = 10;
	iVar47 = ITEMDATABASE::_0x12DF9C58201DD19A(iParam0);
	if (iVar47 == 0)
	{
		return 0;
	}
	iVar48 = 0;
	while (iVar48 < iVar47)
	{
		if (ITEMDATABASE::_0x1FC25AEB5F76B38D(iParam0, iVar48, &Var0) && Var0 == iParam1)
		{
			return Var0.f_2;
		}
		iVar48++;
	}
	return 0;
}

int func_155(int iParam0, int iParam1)
{
	struct<37> Var0;

	if (func_218(iParam0))
	{
		return func_154(func_219(iParam0, 1), iParam1);
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	return Var0.f_2;
}

void func_156(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

struct<8> func_157(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	int iVar19;

	if (!func_45(&Var0))
	{
		return Var9;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return Var9;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return Var9;
	}
	if (!func_46(&Var0, 16, iParam0, 0, 1))
	{
		return Var9;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return Var9;
	}
	if (!func_46(&Var0, 23, iParam1, 0, 1))
	{
		return Var9;
	}
	if (!func_46(&Var0, 25, 0, 0, 1))
	{
		return Var9;
	}
	iVar6 = func_54(&Var0, 1);
	iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6);
	iVar19 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (PED::IS_PED_MALE(iVar19))
	{
		iVar18 |= 1;
	}
	else
	{
		iVar18 |= 2;
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(iVar19))
	{
		iVar18 |= 8;
	}
	else
	{
		iVar18 |= 4;
	}
	iVar5 = 0;
	while (iVar5 <= (iVar6 - 1))
	{
		iVar7 = ((iVar8 + iVar5) % iVar6);
		iVar17 = func_265(iParam0, iParam1, iVar7);
		if ((iVar18 && iVar17) != iVar18)
		{
		}
		else if (!func_46(&Var0, 26, iVar7, 0, 1))
		{
		}
		else
		{
			*uParam2 = func_266(Var0);
			return func_267(Var0);
		}
		iVar5++;
	}
	return Var9;
}

var func_158(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return 0;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 16, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	return func_268(Var0);
}

void func_159(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_160(var uParam0, int iParam1)
{
	uParam0->f_6 = iParam1;
}

void func_161(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_162(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_163(var uParam0, var uParam1)
{
	uParam0->f_7 = uParam1;
}

void func_164(var uParam0, struct<8> Param1)
{
	uParam0->f_8 = { Param1 };
}

bool func_165(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1291106[iParam1 /*19*/].f_1 && iParam0) != 0;
}

void func_166(int iParam0)
{
	func_269(0, iParam0);
}

bool func_167(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1291106[iParam1 /*19*/].f_2 && iParam0) != 0;
}

void func_168(int iParam0)
{
	func_269(2, iParam0);
}

int func_169()
{
	return Global_1301323.f_150;
}

void func_170(var uParam0)
{
	Global_1301323.f_150.f_1 = uParam0;
}

void func_171(int iParam0)
{
	Global_1301323.f_150.f_2 = iParam0;
}

void func_172(int iParam0)
{
	Global_1301323.f_150.f_3 = iParam0;
}

var func_173(var uParam0)
{
	return uParam0->f_6;
}

struct<8> func_174(int iParam0)
{
	struct<5> Var0;
	struct<8> Var5;

	if (!func_45(&Var0))
	{
		return Var5;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_46(&Var0, 23, iParam0, 0, 1))
	{
		return Var5;
	}
	return func_270(Var0);
}

int func_175(int iParam0)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return 0;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 23, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 27, 0, 0, 1))
	{
		return 0;
	}
	return func_271(Var0, joaat("ANIM_SCENE"));
}

struct<8> func_176(var uParam0)
{
	return uParam0->f_8;
}

struct<8> func_177(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<8> Var5;

	if (!func_45(&Var0))
	{
		return Var5;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_46(&Var0, 23, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_46(&Var0, 56, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_46(&Var0, 57, iParam1, 0, 1))
	{
		return Var5;
	}
	return func_272(Var0);
}

var func_178(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_179(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

bool func_180(int iParam0, int iParam1)
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, iParam1, false);
	return func_273(iVar0);
}

bool func_181(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_182(var uParam0)
{
	return uParam0->f_1;
}

int func_183(var uParam0)
{
	return uParam0->f_5;
}

bool func_184(int iParam0)
{
	return func_274(1, iParam0);
}

int func_185()
{
	return Global_1301323.f_296;
}

int func_186(var uParam0)
{
	return uParam0->f_3;
}

bool func_187(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return false;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 16, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 23, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 24, 0, 0, 1))
	{
		return false;
	}
	*uParam2 = func_275(Var0);
	switch (*uParam2)
	{
		case joaat("PLAYER"):
			break;
		case joaat("OBJECT"):
			uParam2->f_1 = { func_47(Var0) };
			uParam2->f_7 = func_48(Var0);
			uParam2->f_8 = func_108(Var0);
			break;
		case joaat("POSITION"):
			uParam2->f_1 = { func_47(Var0) };
			uParam2->f_4 = { func_200(Var0) };
			break;
		case -2135825642:
			uParam2->f_1 = { func_47(Var0) };
			break;
		default:
			break;
	}
	return true;
}

int func_188(vector3 vParam0, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = ENTITY::_0x59B57C4B06531E1E(vParam0, uParam3, iVar2, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar2);
		iVar5 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
		}
		else
		{
			iVar6 = ENTITY::GET_ENTITY_MODEL(iVar5);
			if (iVar6 != iParam4)
			{
			}
			else
			{
				iVar4 = iVar5;
			}
			else
			{
				iVar0++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar2);
			return iVar4;
		}
	}
}

Vector3 func_189(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_190(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_191(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	int iVar12;

	iVar2 = func_182(uParam0);
	iVar12 = func_173(uParam0);
	iVar1 = func_276(iVar12, joaat("PLAYER"));
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!func_277(iVar12, joaat("PLAYER"), iVar0, &Var3))
		{
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar2, &Var3, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Var3.f_8);
		}
		iVar0++;
	}
}

bool func_192(var uParam0, int iParam1)
{
	return (uParam0->f_16 && iParam1) != 0;
}

void func_193(var uParam0, int iParam1)
{
	uParam0->f_16 = (uParam0->f_16 || iParam1);
}

void func_194()
{
	func_278(0);
}

void func_195(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1071686.f_7 = 1;
	if ((Global_1296859.f_21 - Global_1071686.f_9) > 2)
	{
		if (bParam2)
		{
			func_279(20f);
		}
	}
	Global_1071686.f_9 = Global_1296859.f_21;
	if (bParam0)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				PED::SET_PED_RESET_FLAG(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_280())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
	CAM::_0x3C8F74E8FE751614();
	CAM::_0x634F4A0562CF19B8();
	func_281(250);
	if (bParam1)
	{
		HUD::_0x5651516D947ABC53();
	}
}

void func_196(var uParam0, int iParam1)
{
	uParam0->f_16 = (uParam0->f_16 - (uParam0->f_16 && iParam1));
}

void func_197(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

int func_198(int iParam0)
{
	return iParam0;
}

void func_199(int iParam0)
{
	if (!func_282(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1951255[iParam0 /*23*/].f_3);
	}
	Global_1951255[iParam0 /*23*/].f_4 = 0;
	Global_1951255[iParam0 /*23*/] = 1;
	Global_1951255[iParam0 /*23*/].f_16 = 0;
	Global_1951255[iParam0 /*23*/].f_1 = 0;
	Global_1951255[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_9 = 0f;
	Global_1951255[iParam0 /*23*/].f_10 = 0;
	Global_1951255[iParam0 /*23*/].f_11 = 0;
	Global_1951255[iParam0 /*23*/].f_2 = 1;
	Global_1951255[iParam0 /*23*/].f_15 = -1f;
}

Vector3 func_200(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_106(&uParam0, 68, 1);
}

bool func_201(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

char* func_202(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "ANIMAL_TRANSFORMATION_NOT_ENOUGH_HERBS";
		case 2:
			return "ANIMAL_TRANSFORMATION_EXIT_HELP";
		case 4:
			return "ANIMAL_TRANSFORMATION_ENTER_PART_1";
		case 8:
			return "ANIMAL_TRANSFORMATION_ENTER_PART_2";
		case 16:
			return "ANIMAL_TRANSFORMATION_TIME_RUNNING_OUT";
		case 32:
			return "ANIMAL_TRANSFORMATION_ABORT";
		case 64:
			return "ANIMAL_TRANSFORMATION_COOLDOWN";
		default:
			break;
	}
	return "";
}

var func_203(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

var func_204(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_283(&uParam0, 83, 0, -1);
}

var func_205(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_283(&uParam0, 84, 0, -1);
}

var func_206(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_283(&uParam0, 85, 0, -1);
}

var func_207(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 61, 1);
}

bool func_208(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return false;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 16, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 34, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 35, iParam1, 0, 1))
	{
		return false;
	}
	*uParam2 = { func_270(Var0) };
	uParam2->f_8 = { func_47(Var0) };
	uParam2->f_11 = func_48(Var0);
	uParam2->f_12 = func_284(Var0);
	return true;
}

int func_209(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_190(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_214(iVar0, 2))
		{
			if (func_285(vParam2, Global_1951255[iVar0 /*23*/].f_6, 0.01f, 1) && iParam1 == Global_1951255[iVar0 /*23*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_286(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

struct<2> func_210(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

int func_211(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258.f_12)
	{
		if ((bParam2 || Global_1940258.f_13 > 0) || Global_1940258.f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258.f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258.f_14 > 0 || (bParam2 && Global_1940258.f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258.f_7)
		{
			if (bParam2 || Global_1940258.f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_212(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

void func_213(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_214(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

bool func_214(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_215(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_216(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_217(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

bool func_218(int iParam0)
{
	if (func_235(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_219(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_143(iParam0, 0))
	{
		return func_287(func_248(iParam0), bParam1);
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && NETWORK::_0xFBE782B3165AC8EC(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

bool func_220(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_143(iParam0, 0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_288(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_221(bool bParam0)
{
	if (func_289() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_290(bParam0));
}

bool func_222()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

bool func_223(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_289() == 0)
	{
		return func_291(iParam0);
	}
	return iParam0 <= func_292();
}

bool func_224(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

int func_225(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_235(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_237(0) };
	Var0.f_4 = func_293(iParam1);
	Var5 = { func_239(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_0xC97E0D2302382211(func_290(0), &Var5, 0);
	return iVar9;
}

int func_227(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_238(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_294(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_295(iParam0, 0);
	}
	if (func_250(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_290(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_296(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_290(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_228(int iParam0)
{
	if (!func_143(iParam0, 0))
	{
		return false;
	}
	if (func_235(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")))
	{
		return true;
	}
	return func_229(iParam0);
}

bool func_229(int iParam0)
{
	if (!func_143(iParam0, 0))
	{
		return false;
	}
	if (func_235(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_230(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	iParam0 = func_297(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_143(iParam1, 0))
	{
		return 0;
	}
	if (!func_298(iParam0))
	{
		return 0;
	}
	iVar0 = func_299(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
		if (!func_300(iVar28))
		{
		}
		else
		{
			MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
					{
						*iParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

int func_231(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	if (!func_228(iParam0) && !func_229(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_301(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_302(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_303(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_304(iVar15, iVar1);
			if (func_143(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_305(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_226(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_307(iVar16, func_306(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_308(iVar1);
	}
	return iVar0;
}

int func_232(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_297(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_143(iParam1, 0))
	{
		return 0;
	}
	if (!func_298(iParam0))
	{
		return 0;
	}
	iVar0 = func_299(iParam0);
	iVar1 = iParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_233(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (iParam0 == ENTITY::_0x31FEF6A20F00B963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

bool func_234(int iParam0)
{
	return func_150(iParam0) == 1868067663;
}

bool func_235(int iParam0, int iParam1)
{
	if (!func_143(iParam0, 0))
	{
		return func_309(func_248(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

bool func_236(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_310(iParam0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_311(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

struct<4> func_237(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_290(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_239(joaat("CHARACTER"), func_312(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_239(joaat("CHARACTER"), func_312(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_239(joaat("CHARACTER"), func_312(), -1591664384, bParam0);
}

int func_238(int iParam0)
{
	vector3 vVar0;

	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_239(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_143(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_290(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_240(bool bParam0)
{
	int iVar0;

	iVar0 = func_290(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_239(923904168, func_237(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_239(923904168, func_237(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_239(923904168, func_237(bParam0), -740156546, 0);
}

bool func_241(int iParam0, bool bParam1)
{
	if (func_150(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_313();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_242(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_253(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_243(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_314(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_244(bool bParam0)
{
	int iVar0;

	iVar0 = func_290(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_239(271701509, func_237(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_239(271701509, func_237(bParam0), 12999093, 0);
}

bool func_245(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_150(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_315(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_246(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_316(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_247(int iParam0)
{
	if (!func_143(*iParam0, 0))
	{
		return 0;
	}
	if (!func_317(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			return 0;
	}
	return 1;
}

int func_248(int iParam0)
{
	return iParam0;
}

bool func_249(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

int func_250(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

bool func_251(int iParam0)
{
	return func_238(iParam0) == joaat("WEAPON");
}

int func_252(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_143(iParam0, 0) && !func_249(func_248(iParam0), 2))
	{
		return 0;
	}
	if (func_238(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_250(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_290(bParam3), iParam0);
}

int func_253(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_250(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_239(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_290(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_290(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_254(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_318(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_218(iParam0))
	{
		return func_319(func_219(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_220(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			if (iParam5 != 0 && Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32 /*2*/].f_1;
				Jump @204; //curOff = 188
				if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

bool func_255(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_143(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_250(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_320(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_148(iParam0, bParam4, 0) };
	Var6 = { func_239(iParam0, Var1, Var1.f_4, bParam4) };
	return func_321(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

bool func_256(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_257(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_322(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_324(func_323(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_325(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

bool func_258(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_326(iParam0))
		{
			return false;
		}
	}
	if (func_327(&(iParam0->f_6)))
	{
		if (NETWORK::_0xE10F2D7715ABABEC(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("SELL")))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("UPDATE")))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("USE")))
	{
		return false;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return false;
	}
	if (NETSHOPPING::_CASHINVENTORY_IS_CONNECTION_FAULTED())
	{
		return false;
	}
	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
	{
		return false;
	}
	return true;
}

int func_259(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_310(iParam0))
	{
		return 0;
	}
	bVar1 = func_201(iParam3, 2);
	bVar2 = func_328(iParam0, -570078785, bVar1);
	bVar3 = func_328(iParam0, -915411861, bVar1);
	if (func_328(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_329(iParam0, &iVar0) || func_330(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_331())
		{
			iParam1 = -570078785;
		}
		else
		{
			iParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		iParam1 = -915411861;
	}
	else if (func_332(15) && func_328(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

int func_260(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_328(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_201(iParam2, 2))
	{
		if (func_333(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 0;
	}
	if (func_201(iParam2, 8))
	{
		return func_334(iParam0, iParam1);
	}
	return 1;
}

bool func_261(int* iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_236(uParam1->f_16, iParam3, &uVar0, &iVar31, 0, 1))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_335(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 2:
			return func_336(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 3:
			return func_337(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 4:
			return func_338(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 5:
			return func_339(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 6:
			return func_340(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 7:
			return func_341(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 8:
			return func_342(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 9:
			return func_343(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 10:
			return func_344(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 11:
			return func_345(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 12:
			return func_346(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 13:
			return func_347(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 14:
			return func_348(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 15:
			return func_349(iParam0, uParam1, iParam2, &uVar0, bParam4);
		default:
			break;
	}
	return false;
}

int func_262(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	struct<10> Var0;
	struct<4> Var14;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (func_201(iParam9, 32))
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_246(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_315(iParam1, func_150(Var0.f_4), iParam6))
		{
			return 0;
		}
	}
	if (func_201(iParam9, 1))
	{
		if (!func_350(iParam1))
		{
			return 0;
		}
	}
	if (func_201(iParam9, 2))
	{
		if (func_351(iParam1, iParam7, 1))
		{
			return 0;
		}
	}
	if (func_201(iParam9, 4))
	{
		if (!bParam10 && !INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = iParam6;
		Var14 = { Param2 };
		iVar19 = func_253(iParam1, Param2, iParam6, 1, !bParam10, 0);
		iVar20 = func_252(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_352(iParam1, iParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_353(iParam0, iParam1) * iVar21);
		if (iVar22 > 0)
		{
		}
		if (iVar20 >= 0)
		{
			iVar23 = (iVar20 - (iVar19 + iVar22));
			iVar24 = (iParam8 * iVar21);
			if (iVar24 > iVar20)
			{
				iVar24 = iVar20;
			}
			if (iVar23 <= 0)
			{
				return 0;
			}
			else if ((iVar24 - iVar23) >= iVar21)
			{
				return 0;
			}
		}
	}
	if (func_201(iParam9, 8))
	{
		return func_354(iParam0, iParam1, iParam7, iParam8);
	}
	return 1;
}

struct<16> func_263(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_239(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_250(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_312() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_264(int* iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_220(uParam1->f_8, uParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_355(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 2:
			return func_356(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 3:
			return func_357(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 4:
			return func_358(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 5:
			return func_359(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 6:
			return func_360(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 7:
			return func_361(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 8:
			return func_362(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 9:
			return func_363(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 10:
			return func_364(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 11:
			return func_365(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 12:
			return func_366(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 13:
			return func_367(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 14:
			return func_368(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 15:
			return func_369(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		default:
			break;
	}
	return false;
}

int func_265(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return 0;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 16, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 25, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 26, iParam2, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 27, 0, 0, 0))
	{
		return -1;
	}
	return func_271(Var0, joaat("PLAYLIST"));
}

var func_266(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 61, 1);
}

struct<8> func_267(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_370(&uParam0, 61, 1);
}

var func_268(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 66, 1);
}

void func_269(int iParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;
	int iVar7;
	int iVar8;

	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = PLAYER::INT_TO_PLAYERINDEX(iVar8);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7))
			{
			}
			else
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		SCRIPTS::_0x31010318BA9897AC(&uVar6, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, 0, &uVar6);
}

struct<8> func_270(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_370(&uParam0, 69, 1);
}

int func_271(struct<5> Param0, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (!func_46(&Param0, 28, iParam5, 0, 1))
	{
		return 0;
	}
	iVar1 = func_54(&Param0, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		iVar3 = 0;
		iVar2 = func_371(Param0, iVar0);
		switch (iParam5)
		{
			case joaat("ANIM_SCENE"):
				iVar3 = func_373(func_372(iVar2));
				break;
			case -952694274:
				iVar3 = func_373(func_374(iVar2));
				break;
			case joaat("PARTICLE"):
				iVar3 = func_373(func_375(iVar2));
				break;
			case joaat("PLAYLIST"):
				iVar3 = func_373(func_376(iVar2));
				break;
			default:
				break;
		}
		uVar4 = (uVar4 || iVar3);
		iVar0++;
	}
	return uVar4;
}

struct<8> func_272(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_370(&uParam0, 95, 1);
}

bool func_273(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_274(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_377(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_378())
	{
		return func_377(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_377(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

var func_275(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 73, 1);
}

var func_276(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_45(&uVar0))
	{
		return 0;
	}
	if (!func_46(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 23, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 31, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 32, iParam1, 0, 1))
	{
		return 0;
	}
	return func_54(&uVar0, 4);
}

bool func_277(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<5> Var0;
	int iVar5;

	if (!func_45(&Var0))
	{
		return false;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 23, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 31, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 32, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 33, iParam2, 0, 1))
	{
		return false;
	}
	switch (iParam1)
	{
		case joaat("PLAYER"):
			if (PED::IS_PED_MALE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				iVar5 = 70;
			}
			else
			{
				iVar5 = 71;
			}
			break;
		default:
			iVar5 = 69;
			break;
	}
	*uParam3 = { func_370(&Var0, iVar5, 1) };
	if (func_46(&Var0, 27, 0, 0, 0))
	{
		uParam3->f_8 = func_271(Var0, -952694274);
	}
	return true;
}

void func_278(int iParam0)
{
	Global_1956200.f_1431.f_2 = 0f;
	Global_1956200.f_1431.f_1 = iParam0;
}

void func_279(float fParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	MISC::CLEAR_AREA(vVar1, fParam0, 65536);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vVar1, fParam0);
}

bool func_280()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

void func_281(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738.f_3948 = MISC::GET_GAME_TIMER();
	Global_1896738.f_3948.f_1 = iParam0;
}

bool func_282(int iParam0)
{
	return func_214(iParam0, 2);
}

int func_283(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_INT(&iVar0, uParam0))
	{
		iVar0 = iParam3;
	}
	return iVar0;
}

var func_284(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 74, 1);
}

bool func_285(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_286(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	int iVar0;

	Global_1951255[iParam0 /*23*/].f_4 = iParam1;
	Global_1951255[iParam0 /*23*/] = iParam4;
	Global_1951255[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951255[iParam0 /*23*/].f_2 = iParam5;
	Global_1951255[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951255[iParam0 /*23*/].f_9 = fParam9;
	Global_1951255[iParam0 /*23*/].f_10 = iParam10;
	Global_1951255[iParam0 /*23*/].f_11 = iParam11;
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_5 = iParam12;
	Global_1951255[iParam0 /*23*/].f_1 = 2;
	Global_1951255[iParam0 /*23*/].f_17 = -1;
	Global_1951255[iParam0 /*23*/].f_18 = iParam16;
	Global_1951255[iParam0 /*23*/].f_19 = iParam15;
	Global_1951255[iParam0 /*23*/].f_20 = bParam25;
	Global_1951255[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::_GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1951255[iParam0 /*23*/].f_3 = iVar0;
	func_213(iParam0, 1);
	func_216(iParam0, 1);
	func_217(iParam0, 128);
}

int func_287(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_249(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		return 0;
	}
	return iVar0;
}

void func_288(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_150((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_289()
{
	return Global_1572887.f_13;
}

int func_290(bool bParam0)
{
	if (func_289() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_291(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_292()
{
	if (func_289() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		default:
			break;
	}
	return 1084182731;
}

int func_294(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_238(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_235(iParam0, 1399091007))
	{
		func_379(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_295(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_380(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_381(&Var0, func_240(0));
	}
	if (!func_382(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_383(iVar14);
	return uVar15;
}

struct<4> func_296(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_148(iParam0, bParam1, 0) };
	return func_239(iParam0, Var0, Var0.f_4, bParam1);
}

int func_297(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_298(int iParam0)
{
	iParam0 = func_297(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1903136[iParam0 /*43*/]))
	{
		return true;
	}
	return false;
}

int func_299(int iParam0)
{
	iParam0 = func_297(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[iParam0 /*43*/];
}

bool func_300(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::_0x9A100F1CF4546629(iVar0))
	{
		return false;
	}
	if (FLOCK::_0xF8B48A361DC388AE(iVar0) == 2)
	{
		return false;
	}
	if (ENTITY::_0x8DE41E9902E85756(iParam0))
	{
		return false;
	}
	if (FIRE::_0xCDC25355C0D65963(iParam0))
	{
		return false;
	}
	return true;
}

int func_301(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_302(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_303(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_304(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_305(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			iVar0 = joaat("A_C_FISHBLUEGIL_01_SM");
			break;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			iVar0 = joaat("A_C_FISHBULLHEADCAT_01_SM");
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHCHAINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			iVar0 = joaat("A_C_FISHCHANNELCATFISH_01_LG");
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			iVar0 = joaat("A_C_FISHLAKESTURGEON_01_LG");
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			iVar0 = joaat("A_C_FISHLARGEMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			iVar0 = joaat("A_C_FISHLONGNOSEGAR_01_LG");
			break;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			iVar0 = joaat("A_C_FISHMUSKIE_01_LG");
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			iVar0 = joaat("A_C_FISHNORTHERNPIKE_01_LG");
			break;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			iVar0 = joaat("A_C_FISHPERCH_01_SM");
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHREDFINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			iVar0 = joaat("A_C_FISHROCKBASS_01_SM");
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			iVar0 = joaat("A_C_FISHSMALLMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			iVar0 = joaat("A_C_FISHSALMONSOCKEYE_01_MS");
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			iVar0 = joaat("A_C_FISHRAINBOWTROUT_01_MS");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			iVar0 = joaat("A_C_BAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			iVar0 = joaat("A_C_BLUEJAY_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			iVar0 = joaat("A_C_FROGBULL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			iVar0 = joaat("A_C_CARDINAL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			iVar0 = joaat("A_C_CEDARWAXWING_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CHIPMUNK_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			iVar0 = joaat("A_C_CRAB_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			iVar0 = joaat("A_C_CROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ORIOLE_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CAROLINAPARAKEET_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			iVar0 = joaat("A_C_PIGEON");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			iVar0 = joaat("A_C_QUAIL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			iVar0 = joaat("A_C_RAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ROBIN_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			iVar0 = joaat("A_C_SONGBIRD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			iVar0 = joaat("A_C_SPARROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			iVar0 = joaat("A_C_SQUIRREL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			iVar0 = joaat("A_C_TOAD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			iVar0 = joaat("A_C_WOODPECKER_01");
			break;
	}
	return iVar0;
}

int func_306(int iParam0)
{
	if (func_235(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_235(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_235(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_307(int iParam0, int iParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_143(uVar0[iVar17], 0) && iParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_308(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_309(int iParam0, int iParam1)
{
	if (!func_249(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_310(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

void func_311(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xE81D0378A384E755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_150((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

struct<4> func_312()
{
	struct<4> Var0;

	return Var0;
}

bool func_313()
{
	return (func_384(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_385(func_239(joaat("WARDROBE"), func_237(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_314(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_290(0);
	*uParam1 = { func_239(iParam0, func_240(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_315(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return false;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

bool func_316(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_290(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_317(int iParam0)
{
	return func_235(iParam0, 1279601681);
}

bool func_318(int iParam0, int iParam1)
{
	if (!func_143(iParam0, 0))
	{
		return false;
	}
	if (func_218(iParam0))
	{
		return func_328(func_219(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

int func_319(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_236(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR")) || Var0[iVar32 /*2*/] == joaat("CHARACTER_ROLE_TOKEN"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

int func_320(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<16> Var65;
	struct<17> Var81;

	if (func_386(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_250(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_221(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_387(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_388(iParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_257(joaat("USE"), &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = iParam3;
			Var81.f_7 = iParam2;
			func_156(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_290(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_321(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_386(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_246(*uParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_221(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_289() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_257(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_156(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_290(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_322(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_389(uParam1->f_8, iParam0, uVar0, 2048) || func_389(uParam1->f_8, iParam0, uVar0, 32768)) || func_389(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_389(uParam1->f_8, iParam0, uVar0, 4) || func_389(uParam1->f_8, iParam0, uVar0, 256)) || func_389(uParam1->f_8, iParam0, uVar0, 65536)) || func_389(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_389(uParam1->f_8, iParam0, uVar0, 1) || func_389(uParam1->f_8, iParam0, uVar0, 8)) || func_389(uParam1->f_8, iParam0, uVar0, 65536)) || func_389(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_389(uParam1->f_8, iParam0, uVar0, 1) || func_389(uParam1->f_8, iParam0, uVar0, 16)) || func_389(uParam1->f_8, iParam0, uVar0, 2)) || func_389(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_389(uParam1->f_8, iParam0, uVar0, 8) || func_389(uParam1->f_8, iParam0, uVar0, 4096)) || func_389(uParam1->f_8, iParam0, uVar0, 256)) || func_389(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_323(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_324(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_390(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_390(iParam1, 2, 0, 0);
	return -1;
}

int func_325(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_390(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_326(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_391(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_327(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_328(int iParam0, int iParam1, bool bParam2)
{
	if (!func_310(iParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_333(iParam0, iParam1);
	}
	return true;
}

bool func_329(int iParam0, int iParam1)
{
	*iParam1 = func_392(iParam0, 1);
	return *iParam1 != 0;
}

bool func_330(int iParam0, int iParam1)
{
	*iParam1 = func_393(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_331()
{
	return Global_1915715.f_22477;
}

bool func_332(int iParam0)
{
	if (iParam0 == 34 && Global_1915715.f_22504.f_1)
	{
		return true;
	}
	if (func_394(1))
	{
		if (Global_1915715.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_333(int iParam0, int iParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = Var0[iVar474 /*47*/].f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = Var0[iVar474 /*47*/].f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return true;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return false;
}

int func_334(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam1 == -570078785)
	{
		iVar0 = func_319(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_224(iVar0))
		{
			if (Global_1915715.f_20644)
			{
				func_396(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_395(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_319(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_223(iVar1))
		{
			if (Global_1915715.f_20644)
			{
				func_396("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_146(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_335(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_397(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_336(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_397(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_337(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_397(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_338(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_397(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_339(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_397(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_340(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_397(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_341(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_397(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_342(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_397(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_343(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_397(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_344(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_397(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_345(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_397(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_346(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_397(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_347(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_397(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_348(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_397(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_349(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_397(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_350(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_289() == -1)
	{
		if (func_251(iParam0))
		{
			iVar1 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
			bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
	}
	return bVar0;
}

bool func_351(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_143(iParam0, 0))
	{
		return func_398(func_248(iParam0), iParam1, bParam2);
	}
	if (func_218(iParam0))
	{
		return func_333(func_219(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_289() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return true;
	}
	if (!func_399(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

bool func_352(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_143(iParam0, 0) && !func_249(func_248(iParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

int func_353(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<12> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != iParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_354(int* iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar6;

	if (func_400(iParam1, 1) && !func_401(iParam1, 1))
	{
		if (Global_1915715.f_20644)
		{
			func_396(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (iParam2 == -570078785)
	{
		iVar0 = func_254(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * iParam3);
		if (!func_224((iVar1 + func_402(iParam0, iParam2))))
		{
			if (Global_1915715.f_20644)
			{
				func_396(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (iParam2 == -915411861)
	{
		iVar2 = func_254(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * iParam3);
		if (!func_223((iVar3 + func_402(iParam0, iParam2))))
		{
			if (Global_1915715.f_20644)
			{
				func_396("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam2 == 997808187)
	{
		return 1;
	}
	if (func_249(func_248(iParam1), 2))
	{
		if (!func_403(func_248(iParam1), iParam3, iParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_143(iParam1, 0))
	{
		if (!func_142(iParam1, iParam3, iParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_355(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_404(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_356(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_404(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_357(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_404(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_358(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_404(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_359(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_404(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_360(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_404(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_361(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_404(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_362(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_404(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_363(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_404(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_364(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_404(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_365(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_404(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_366(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_404(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_367(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_404(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_368(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_404(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_369(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_404(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

struct<8> func_370(var uParam0, int iParam1, int iParam2)
{
	struct<8> Var0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_STRING(&Var0, uParam0))
	{
	}
	return Var0;
}

var func_371(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (!func_46(&uParam0, 30, iParam5, 0, 1))
	{
		return 0;
	}
	return func_109(&uParam0, 61, 1);
}

int func_372(int iParam0)
{
	switch (iParam0)
	{
		case -1813649426:
			return 1;
		case -1728078503:
			return 2;
		case 664704845:
			return 4;
		case -656485570:
			return 8;
		case 856889675:
			return 16;
		case -40729341:
			return 32;
		case 513761045:
			return 64;
		case -608370326:
			return 128;
		case joaat("ASF_BLOCK_SKIPPING"):
			return 256;
		case -1138842803:
			return 512;
		case 1959327570:
			return 1024;
		case joaat("ASF_ENABLE_LETTER_BOX"):
			return 2048;
		case -1303182884:
			return 4096;
		case 1317645850:
			return 8192;
		case 2020911072:
			return 16384;
		case 1930555512:
			return 32768;
		default:
			break;
	}
	return 0;
}

int func_373(int iParam0)
{
	return iParam0;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ASSE_GIVE_OWNERSHIP"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case -1420685820:
			return 1;
		case -445480404:
			return 2;
		case -138533181:
			return 4;
		case 675169979:
			return 16;
		case 1324736666:
			return 8;
		case 74623641:
			return 64;
		default:
			break;
	}
	return 0;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MALE"):
			return 1;
		case joaat("FEMALE"):
			return 2;
		case joaat("STANDING"):
			return 4;
		case joaat("CROUCHING"):
			return 8;
		default:
			break;
	}
	return 0;
}

bool func_377(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_378()
{
	return Global_1102219.f_3672;
}

void func_379(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<14> func_380(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

void func_381(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_382(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_290(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_383(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_384(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_405(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_290(bParam1), iParam0, iParam3);
}

int func_385(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_406(&uParam0, iParam4, bParam5, iParam6);
}

bool func_386(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_387(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_250(iParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_407(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_388(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_239(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_389(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_408(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_390(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_409(iParam0, iParam1, iParam2, iParam3);
}

int func_391(int* iParam0)
{
	return func_410(iParam0->f_1);
}

int func_392(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_411(iVar0, 1, 0);
		if (!func_236(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_412(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_227(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_393(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_411(iVar0, 0, 1);
		if (!func_236(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_413(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_227(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH") || Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH")) || (!bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR")))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41 /*2*/].f_1;
						iVar7 = 0;
					}
				}
				else if (Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_394(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

int func_395(int iParam0)
{
	return (iParam0 / 100);
}

void func_396(char* sParam0)
{
	Global_1915715.f_22470 = func_203(sParam0, 10000, 0, 0, 0, 1);
}

bool func_397(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6)
{
	int iVar0;

	if (*uParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @101; //curOff = 54
		}
		else if (!func_414((*uParam3)[iVar0 /*2*/], (uParam3[iVar0 /*2*/])->f_1, uParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_415(iParam0, uParam1, uParam5, iParam2, bParam6);
}

int func_398(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_249(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_289() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_416(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_399(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_143(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_400(int iParam0, bool bParam1)
{
	if (!func_235(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_235(iParam0, -1090933859))
		{
			return func_219(iParam0, 1) != 0;
		}
		if ((func_351(iParam0, -915411861, 0) || func_351(iParam0, 600942249, 0)) || func_351(iParam0, -570078785, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_401(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = func_417(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_333(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_146(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_402(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (iParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_254(Var3.f_8, iParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_403(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;

	if (!func_418(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_221(0)) && !func_222());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * iParam1);
			if (Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && func_223(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && func_224(iVar32))
			{
			}
			else
			{
				iVar33 = func_227(Var0[iVar34 /*2*/], 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { Var0[iVar34 /*2*/] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_404(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (*uParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @106; //curOff = 54
		}
		else if (!func_414((*uParam3)[iVar0 /*2*/], ((uParam3[iVar0 /*2*/])->f_1 * uParam1->f_9), uParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_419(iParam0, uParam1, uParam5, iParam2, bParam6, iParam7);
}

bool func_405(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_406(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_420(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_407(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_421(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_312() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

bool func_408(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_409(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346.f_20 < 20)
	{
		Global_1293346.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_20.f_1[iVar0 /*21*/] = { Global_1293346.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_422(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_410(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_423(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_390(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_390(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_411(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_412(int iParam0)
{
	return func_150(iParam0) == 1946043663;
}

bool func_413(int iParam0)
{
	return func_150(iParam0) == -126813555;
}

bool func_414(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<6> Var7[10];
	int iVar68;
	int iVar69;

	*uParam2 = iParam0;
	if (func_394(0))
	{
		iVar5 = func_225(func_424(), iParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_237(1) };
			Var0.f_4 = func_293(iVar5);
			uParam2->f_1[0 /*4*/] = { func_239(iParam0, Var0, Var0.f_4, 1) };
			if (INVENTORY::_0xB881CA836CC4B6D4(&(uParam2->f_1[0 /*4*/])))
			{
				return true;
			}
		}
	}
	iVar6 = func_250(iParam0, joaat("DEFAULT"));
	if (iVar6 != 0)
	{
		if (!func_387(&Var7, &iVar68, iParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			uParam2->f_1[iVar69 /*4*/] = { func_239(iParam0, Var7[iVar69 /*6*/], Var7[iVar69 /*6*/].f_4, 1) };
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(uParam2->f_1[iVar69 /*4*/])))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_148(iParam0, 1, 0) };
	uParam2->f_1[0 /*4*/] = { func_239(iParam0, Var0, Var0.f_4, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&(uParam2->f_1[0 /*4*/])))
	{
		return false;
	}
	return true;
}

bool func_415(int* iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (iParam3 != 541670136 && iParam3 != joaat("BATCH"))
	{
		return false;
	}
	if (!func_425(*uParam1))
	{
		return false;
	}
	if (!func_426(iParam0, iParam3))
	{
		return false;
	}
	if (NETSHOPPING::_0xA3B8D31C13CB4239(*iParam0, 541670136, uParam1, 17, uParam2, *uParam2))
	{
	}
	else
	{
		return false;
	}
	return func_427(iParam0, bParam4);
}

bool func_416(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_249(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_428(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_417(int iParam0, bool bParam1)
{
	if (!func_400(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PAMPHLET_TRACKING_ARROW"))
	{
		return func_219(joaat("AMMO_ARROW_TRACKING"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_POISON_BOTTLE"))
	{
		return func_219(joaat("AMMO_POISONBOTTLE"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_ANIMAL_REVIVER"))
	{
		return func_219(joaat("CONSUMABLE_TONIC_ANIMAL_REVIVER"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_AMMO_22_TRANQUILIZER"))
	{
		return func_219(joaat("AMMO_22_TRANQUILIZER"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_LEGENDARY_PHEROMONES"))
	{
		return func_219(joaat("CONSUMABLE_ROLE_NATURALIST_LEGENDARY_ANIMAL_PHEROMONE"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_TONIC_BLENDING"))
	{
		return func_219(joaat("CONSUMABLE_TONIC_BLENDING"), 1);
	}
	return func_219(iParam0, 1);
}

bool func_418(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_249(iParam0, 2))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0x388088BFF3681189(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xB542632693D53408(iParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_429(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_419(int* iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	if ((iParam3 != 2113164098 && iParam3 != joaat("SELL")) && iParam3 != joaat("USE"))
	{
		return false;
	}
	if (!func_430(iParam3, uParam1, iParam5))
	{
		return false;
	}
	if (!func_426(iParam0, iParam3))
	{
		return false;
	}
	if (func_431(*iParam0, iParam3, uParam1, uParam2))
	{
	}
	else
	{
		return false;
	}
	return func_427(iParam0, bParam4);
}

bool func_420(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_290(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_316(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_421(var uParam0)
{
	if (!func_432(uParam0))
	{
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

void func_422(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_433(&(uParam0->f_4));
}

int func_423(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			return Global_1293346.f_20.f_1[iVar0 /*21*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_424()
{
	return Global_1915715.f_20241;
}

bool func_425(struct<17> Param0)
{
	if (!func_310(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_426(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_434(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_435(iParam0))
		{
			return false;
		}
		if (!func_434(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_427(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_435(iParam0);
	}
	return true;
}

bool func_428(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_429(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xA97EE5E4589FCF5A(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_150((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_430(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_143(uParam1->f_8, 0) && !func_249(func_248(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_201(iParam2, 128))
	{
		if (func_150(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_201(iParam2, 16))
	{
		if (!func_322(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_431(int iParam0, int iParam1, var uParam2, var uParam3)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam3, *uParam3);
}

bool func_432(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_433(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

bool func_434(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, joaat("BASKET"), iParam1))
	{
		return false;
	}
	return true;
}

bool func_435(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_390(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_390(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_390(*iParam0, 2, 0, 0);
		return false;
	}
	func_390(*iParam0, 1, 0, 0);
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

