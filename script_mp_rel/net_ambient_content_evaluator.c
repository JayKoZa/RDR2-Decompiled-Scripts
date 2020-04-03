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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iVar0 = MISC::GET_GAME_TIMER();
	func_1();
	iVar1 = (MISC::GET_GAME_TIMER() - iVar0);
	while (!func_2(0, 0) && func_3())
	{
		Global_1198382->f_1.f_718 = (1 + Global_1198382->f_1.f_718);
		if (Global_1198382->f_1.f_718 >= 3)
		{
			Global_1198382->f_1.f_718 = 0;
		}
		switch (Global_1198382->f_1.f_718)
		{
			case 0:
				func_4();
				break;
			case 1:
				func_5();
				break;
			case 2:
				func_6();
				break;
		}
		BUILTIN::WAIT(0);
	}
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = 0;
	while (iVar3 < 71)
	{
		if (func_7(iVar3, iVar2, 0) && func_7(iVar3, iVar2, 1))
		{
			func_8(iVar3);
		}
		iVar3++;
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	func_9();
}

void func_1()
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_10();
	if (func_11())
	{
		func_9();
	}
	func_12();
	func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
}

int func_2(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887->f_12)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
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
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_3()
{
	return !func_15(func_14(), 0, 0);
}

void func_4()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1198382->f_1.f_715++;
		if (Global_1198382->f_1.f_715 < 0 || Global_1198382->f_1.f_715 >= Global_1186267->f_2505.f_499)
		{
			Global_1198382->f_1.f_715 = 0;
		}
		if (Global_1198382->f_1.f_715 >= Global_1186267->f_2505.f_499)
		{
			return;
		}
		if (!func_16(&(Global_1186267->f_2505.f_427[Global_1198382->f_1.f_715])))
		{
			return;
		}
		if (MISC::IS_BIT_SET(iVar1, Global_1198382->f_1.f_715))
		{
			return;
		}
		MISC::SET_BIT(&iVar1, Global_1198382->f_1.f_715);
		func_17(&(Global_1186267->f_2505.f_427[Global_1198382->f_1.f_715]), -1);
		iVar0++;
	}
}

void func_5()
{
	if (func_18())
	{
		func_19();
	}
	if (&Global_1186267 < 1)
	{
		return;
	}
	func_20();
}

void func_6()
{
	if (&Global_1186267 < 1)
	{
		return;
	}
	func_21((*Global_1189272)[&Global_1275573 /*204*/], &(Global_1198382->f_1.f_719));
	func_22();
	if (!func_18())
	{
		return;
	}
	func_23(&(Global_1186267->f_28), Global_1198382->f_1.f_717, 5, Global_1198382->f_1.f_716);
}

bool func_7(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1196005)[iParam1 /*72*/][iParam0], iParam2);
}

void func_8(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_7;
	if (iVar1 > 1)
	{
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_24(iParam0, iVar0);
		func_25(iParam0, iVar0);
		iVar0++;
	}
	func_26(iParam0, 0);
	func_27(iParam0);
	func_28(iParam0);
}

void func_9()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_9();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_9();
					break;
				case 2:
					func_9();
					break;
				case 4:
					func_9();
					break;
				case 3:
					func_9();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_9();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_9();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_9();
		}
		if (func_29() == 0)
		{
			if (func_30())
			{
				func_9();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_9();
	}
	return 1;
}

int func_11()
{
	if (Global_1572887->f_9)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	return 0;
}

void func_12()
{
	func_31(Global_1186267);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1186267, 3005, 27);
	func_32(NETWORK::_0xBA24095EA96DFE17(Global_1186267), 3005, "g_mpACEHostData");
	func_33(&(Global_1198382->f_1));
	if (func_34())
	{
		func_35(Global_1189272);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1189272, 6529, 28);
		func_36(NETWORK::_0x690806BC83BC8CA2((*Global_1189272)[0 /*204*/]), 6529, "g_mpACEPlayerData");
		func_37(Global_1196005);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1196005, 2305, 29);
		func_36(NETWORK::_0x690806BC83BC8CA2((*Global_1196005)[0 /*72*/]), 2305, "g_mpACELauncherPlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1189272, 6529, 28);
		func_36(NETWORK::_0x690806BC83BC8CA2((*Global_1189272)[0 /*204*/]), 6529, "g_mpACEPlayerData");
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1196005, 2305, 29);
		func_36(NETWORK::_0x690806BC83BC8CA2((*Global_1196005)[0 /*72*/]), 2305, "g_mpACELauncherPlayerData");
	}
}

void func_13(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::_GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::_0x236905C700FDB54D();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_9();
					break;
				case 2:
					func_9();
					break;
				case 4:
					func_9();
					break;
				case 3:
					func_9();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return;
		}
		if (MISC::_GET_SYSTEM_TIME() >= iVar0)
		{
			func_9();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

struct<2> func_14()
{
	return Global_1124790->f_5.f_3;
}

int func_15(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_38(*Global_1051163) && !func_39(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_40(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_41(iParam3, 255))
	{
		Global_1070356->f_26837 = 4;
		return 1;
	}
	if (Global_262996[&Global_1275573 /*70*/] > 2)
	{
		Global_1070356->f_26837 = 5;
		return 1;
	}
	if (&Global_262155 >= 1)
	{
		Global_1070356->f_26837 = 6;
		return 1;
	}
	if (func_42())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_38(*Global_1051163))
		{
			Global_1070356->f_26837 = 8;
			return 1;
		}
	}
	if (Global_265331->f_124602 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265331->f_124602))
	{
		Global_1070356->f_26837 = 9;
		return 1;
	}
	Global_1070356->f_26837 = 0;
	return 0;
}

bool func_16(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

void func_17(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_43(iParam0, 1))
	{
		return;
	}
	bVar0 = func_18();
	func_44(iParam0);
	if (iParam1 == -1)
	{
		iVar1 = (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_7;
		if (iVar1 > 1)
		{
			iVar1 = 1;
		}
		iParam1 = 0;
		while (iParam1 < iVar1)
		{
			func_45(iParam0, iParam1, bVar0);
			iParam1++;
		}
	}
	else
	{
		func_45(iParam0, iParam1, bVar0);
	}
	if (bVar0)
	{
		func_46(iParam0);
	}
}

bool func_18()
{
	if (!Global_1070356->f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION() || func_30())
	{
		return false;
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(&Global_1198382, false))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_ambient_content_evaluator", -1, true, 0))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::_0xB4A25351D79B444C(&Global_1198382);
}

void func_19()
{
	switch (&Global_1186267)
	{
		case -1:
			Global_1186267 = 0;
			return;
		case 0:
			Global_1186267->f_3[0] = 3;
			Global_1186267->f_3[1] = 10;
			Global_1186267->f_3[2] = 10;
			Global_1186267->f_3[3] = 16;
			Global_1186267->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			Global_1186267 = 1;
			return;
		case 1:
			func_23(&(Global_1186267->f_28), Global_1198382->f_1.f_714, Global_1198382->f_1.f_711, -1);
			func_47(Global_1198382->f_1.f_713);
			func_48();
			break;
	}
}

void func_20()
{
	int iVar0;

	iVar0 = Global_1198382->f_1.f_711;
	iVar0++;
	if (iVar0 >= 8)
	{
		iVar0 = 0;
	}
	Global_1198382->f_1.f_711 = iVar0;
	Global_1198382->f_1.f_713++;
	if (!func_16(Global_1198382->f_1.f_713))
	{
		Global_1198382->f_1.f_713 = 0;
	}
	if (!func_18() && func_49(&((Global_1198382->f_1[Global_1198382->f_1.f_713 /*10*/])->f_7)))
	{
		func_50(&((Global_1198382->f_1[Global_1198382->f_1.f_713 /*10*/])->f_7));
	}
	Global_1198382->f_1.f_714++;
	if (Global_1198382->f_1.f_714 < 0 || Global_1198382->f_1.f_714 >= 5)
	{
		Global_1198382->f_1.f_714 = 0;
	}
}

void func_21(var uParam0, var uParam1)
{
	int iVar0;
	struct<40> Var1;

	if (*uParam0 == 0)
	{
		return;
	}
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	iVar0 = ((uParam0->f_1 + *uParam1) % uParam0->f_2);
	Var1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = 255;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_8 = 2;
	Var1.f_8.f_1 = -1;
	Var1.f_8.f_5 = -1;
	Var1.f_8.f_5.f_1 = -1;
	Var1.f_8.f_5.f_3 = -1;
	Var1.f_8.f_5.f_4 = -1;
	Var1.f_8.f_5.f_5 = -1;
	Var1.f_8.f_5.f_6 = -1;
	Var1.f_8.f_5.f_6.f_1 = -1;
	Var1.f_8.f_5.f_9 = 2;
	Var1.f_23.f_1 = 1024;
	Var1.f_23.f_4 = -15;
	Var1.f_23.f_5 = 255;
	Var1.f_23.f_8 = 1;
	Var1.f_23.f_8.f_1.f_1 = 2147483647;
	Var1.f_23.f_13 = -1;
	if ((uParam0->f_3[iVar0 /*40*/])->f_2 != -1)
	{
		Var1 = { func_51(&(Global_1186267->f_28), *(uParam0->f_3[iVar0 /*40*/])) };
		func_52(Var1, uParam0, uParam0->f_3[iVar0 /*40*/]);
	}
}

void func_22()
{
	Global_1198382->f_1.f_716++;
	if (Global_1198382->f_1.f_716 < 0 || Global_1198382->f_1.f_716 >= 32)
	{
		Global_1198382->f_1.f_716 = 0;
	}
	Global_1198382->f_1.f_717++;
	if (Global_1198382->f_1.f_717 < 0 || Global_1198382->f_1.f_717 >= 5)
	{
		Global_1198382->f_1.f_717 = 0;
	}
}

void func_23(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<40> Var0;

	if (!func_53(uParam0))
	{
		if (iParam2 == 5 && iParam3 == -1)
		{
			return;
		}
		func_54(uParam0, iParam2, iParam3);
	}
	if (func_55(uParam0))
	{
		return;
	}
	if ((uParam0->f_2[iParam1 /*40*/])->f_2 != -1)
	{
		Var0 = { func_56(uParam0->f_2[iParam1 /*40*/]) };
		if (Var0.f_2 == -1)
		{
			func_57(uParam0, iParam1);
		}
		else
		{
			func_58(uParam0, uParam0->f_2[iParam1 /*40*/], Var0);
		}
	}
}

void func_24(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_59(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_60(iParam0, iParam1);
	if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		return;
	}
	SCRIPTS::_0x7DE4643157AD646C(iVar0);
}

void func_25(int iParam0, int iParam1)
{
	func_61(iParam0, iParam1);
	func_62(iParam0, iParam1, -1);
}

void func_26(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_63(iParam0) };
	if (!func_38(Var0))
	{
		return;
	}
	if (!func_64(Var0) && !func_65(Var0))
	{
		return;
	}
	func_66(iParam0, 2);
	func_66(iParam0, 3);
	func_67(iParam0, 6);
	func_68(Var0, 0, 2, iParam1);
}

void func_27(int iParam0)
{
	func_69(&((Global_1198382->f_1[iParam0 /*10*/])->f_4));
	(Global_1198382->f_1[iParam0 /*10*/])->f_6 = 0;
}

void func_28(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	(*(*Global_1196005)[iVar0 /*72*/])[iParam0] = 0;
}

int func_29()
{
	return Global_1572887->f_13;
}

bool func_30()
{
	return Global_1051202->f_8;
}

void func_31(var uParam0)
{
	func_70(uParam0);
	func_71(&(uParam0->f_231));
	func_72(&(uParam0->f_2505));
}

int func_32(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_33(var uParam0)
{
	struct<10> Var0;
	int iVar10;
	var uVar11;

	Var0 = 1;
	Var0.f_1 = -1;
	Var0.f_4 = -1;
	Var0.f_4.f_1 = -1;
	iVar10 = 0;
	while (iVar10 < 71)
	{
		*((*uParam0)[iVar10 /*10*/]) = { Var0 };
		iVar10++;
	}
	uParam0->f_711 = 0;
	uParam0->f_712 = 0;
	uParam0->f_713 = 0;
	uParam0->f_714 = 0;
	uParam0->f_715 = 0;
	uParam0->f_716 = 0;
	uParam0->f_717 = 0;
	uParam0->f_718 = 0;
	uParam0->f_719 = uVar11;
}

bool func_34()
{
	return !Global_1572887->f_9;
}

void func_35(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_73((*uParam0)[iVar0 /*204*/]);
		iVar0++;
	}
}

int func_36(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_37(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_74((*uParam0)[iVar0 /*72*/]);
		iVar0++;
	}
}

int func_38(struct<2> Param0)
{
	if (!func_75(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_76(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_39(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_40(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_41(int iParam0, int iParam1)
{
	if (!Global_1070356->f_3)
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
	return (Global_1185577[iParam1 /*12*/] && iParam0) != 0;
}

int func_42()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_2883584)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (!func_38(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_43(int iParam0, int iParam1)
{
	return ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_6 && iParam1) != 0;
}

void func_44(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = PLAYER::PLAYER_ID();
	Var1 = { func_77(iParam0) };
	if (func_78(iParam0) <= 0)
	{
		Var1 = { func_63(iParam0) };
		if (func_38(Var1))
		{
			func_8(iParam0);
			return;
		}
		return;
	}
	if (!func_38(Var1))
	{
		Var1 = { func_63(iParam0) };
		if (func_38(Var1))
		{
			func_8(iParam0);
			return;
		}
	}
	if (func_38(Var1))
	{
		if (!func_7(iParam0, iVar0, 0))
		{
			func_79(iParam0, Var1);
			func_67(iParam0, 0);
			if (func_43(iParam0, 256))
			{
				func_67(iParam0, 1);
			}
		}
		if (func_65(Var1))
		{
			if (func_80(iParam0, 4))
			{
				func_81(iParam0, 0, 0);
				return;
			}
			else if (func_80(iParam0, 5))
			{
				func_82(iParam0, 0);
				return;
			}
		}
	}
	switch (func_83(iParam0))
	{
		case 1:
			break;
		case 2:
			if (!func_43(iParam0, 2))
			{
				return;
			}
			if (!func_84(iParam0))
			{
				func_26(iParam0, 0);
				return;
			}
			if (!func_64(Var1) && !func_65(Var1))
			{
				if (!func_7(iParam0, iVar0, 2) && !func_7(iParam0, iVar0, 3))
				{
					if (func_80(iParam0, 3) || func_85(iParam0) == Global_1275573->f_15)
					{
						func_86(iParam0);
					}
				}
			}
			else if (!func_80(iParam0, 3) && func_85(iParam0) != Global_1275573->f_15)
			{
				func_26(iParam0, 0);
			}
			break;
		case 4:
			if (!func_43(iParam0, 2))
			{
				if (func_43(iParam0, 2048))
				{
					func_28(iParam0);
				}
				return;
			}
			if (func_64(Var1))
			{
				if (func_80(iParam0, 4))
				{
					func_87(iParam0, 0, 1, 1);
					func_81(iParam0, 0, 0);
				}
				else
				{
					func_87(iParam0, 0, 1, 1);
					func_82(iParam0, 0);
				}
			}
			else if (func_65(Var1))
			{
				func_82(iParam0, 0);
			}
			else
			{
				func_67(iParam0, 6);
			}
			if (func_88(iParam0))
			{
				func_28(iParam0);
			}
			break;
		case 5:
		case 6:
			if (func_7(iParam0, iVar0, 0))
			{
				func_8(iParam0);
			}
			break;
	}
}

void func_45(int iParam0, int iParam1, bool bParam2)
{
	func_89(iParam0, iParam1);
	if (!bParam2)
	{
		func_90(iParam0, iParam1);
	}
	else
	{
		func_91(iParam0, iParam1);
		func_92(iParam0, iParam1);
	}
}

void func_46(int iParam0)
{
	int iVar0;

	iVar0 = func_83(iParam0);
	if (iVar0 > -1 && iVar0 < 5)
	{
		if (!func_38(func_77(iParam0)))
		{
			func_93(iParam0, 5);
			return;
		}
	}
	if (!func_94(iParam0) && iVar0 < 5)
	{
		func_95(iParam0);
		func_93(iParam0, 5);
		return;
	}
	switch (iVar0)
	{
		case -1:
			if (!func_38(func_77(iParam0)))
			{
				return;
			}
			if (func_43(iParam0, 32))
			{
				((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[0 /*4*/])->f_1 = iParam0;
			}
			if ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_5 != 255)
			{
				func_96(iParam0, (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_5);
				func_93(iParam0, 2);
			}
			else
			{
				func_93(iParam0, 1);
			}
			break;
		case 0:
			break;
		case 1:
			if (func_97(iParam0) != 255)
			{
				func_93(iParam0, 2);
				return;
			}
			if (func_98(iParam0, 3))
			{
				func_93(iParam0, 2);
				return;
			}
			if (func_99(iParam0))
			{
				func_93(iParam0, 5);
				return;
			}
			break;
		case 2:
			if (func_97(iParam0) == 255 && !func_98(iParam0, 3))
			{
				func_93(iParam0, 4);
				return;
			}
			if (func_100(iParam0))
			{
				func_93(iParam0, 5);
				return;
			}
			if (func_98(iParam0, 4) || func_98(iParam0, 5))
			{
				func_93(iParam0, 3);
				return;
			}
			func_101(iParam0);
			break;
		case 3:
			if (func_102(iParam0))
			{
				return;
			}
			func_93(iParam0, 4);
			break;
		case 4:
			if (!func_100(iParam0))
			{
				return;
			}
			func_93(iParam0, 5);
			break;
		case 5:
			if (!func_100(iParam0))
			{
				return;
			}
			if (func_78(iParam0) > 1)
			{
				func_103(iParam0, 1);
			}
			func_93(iParam0, 6);
			break;
		case 6:
			break;
	}
}

void func_47(int iParam0)
{
	struct<6> Var0;
	struct<17> Var6;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	bool bVar29;
	bool bVar30;
	int iVar31;

	if ((Global_1186267->f_231[iParam0 /*15*/])->f_1 == -1)
	{
		return;
	}
	if ((Global_1186267->f_231[iParam0 /*15*/])->f_1 == 0)
	{
		if (func_100(iParam0))
		{
			func_104(iParam0);
			Var0 = 1;
			Var0.f_1 = -1;
			Var0.f_1.f_1 = -1;
			Var0.f_5 = 255;
			Var6.f_1 = 1024;
			Var6.f_4 = -15;
			Var6.f_5 = 255;
			Var6.f_8 = 1;
			Var6.f_8.f_1.f_1 = 2147483647;
			Var6.f_13 = -1;
			*(Global_1186267->f_2505[iParam0 /*6*/]) = { Var0 };
			*(Global_1186267->f_231.f_1066[iParam0 /*17*/]) = { Var6 };
			(Global_1186267->f_231[iParam0 /*15*/])->f_1 = -1;
		}
		return;
	}
	if ((Global_1186267->f_231[iParam0 /*15*/])->f_5.f_8 != 0)
	{
		if (func_40((Global_1186267->f_231[iParam0 /*15*/])->f_5.f_8))
		{
			func_95(iParam0);
			return;
		}
	}
	if ((Global_1186267->f_231[iParam0 /*15*/])->f_5.f_2 != 0 && (Global_1186267->f_231[iParam0 /*15*/])->f_5.f_3 != -1)
	{
		iVar23 = func_105((Global_1186267->f_231[iParam0 /*15*/])->f_5.f_3);
		iVar24 = func_106((Global_1186267->f_231[iParam0 /*15*/])->f_5.f_3);
		if (iVar23 < 1 || iVar23 >= 4)
		{
			func_95(iParam0);
			return;
		}
		else if (iVar24 != (Global_1186267->f_231[iParam0 /*15*/])->f_5.f_2)
		{
			func_95(iParam0);
			return;
		}
		else if (iVar23 == 1)
		{
			if (!_NAMESPACE26::_0x93A91A351A07360E(iVar24))
			{
				func_95(iParam0);
				return;
			}
			iVar25 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar24);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar25))
			{
				func_95(iParam0);
				return;
			}
		}
	}
	if ((Global_1186267->f_231[iParam0 /*15*/])->f_5.f_2 != 0 && (Global_1186267->f_231[iParam0 /*15*/])->f_5.f_4 != -1)
	{
		iVar26 = (Global_1186267->f_231[iParam0 /*15*/])->f_5.f_4;
		if (!NETWORK::_0x1B89BC43B6E69107(894914127, iVar26, 0, 0))
		{
			func_95(iParam0);
			return;
		}
		if (!_NAMESPACE26::_0x93A91A351A07360E((Global_1186267->f_231[iParam0 /*15*/])->f_5.f_2))
		{
			func_95(iParam0);
			return;
		}
	}
	if ((Global_1186267->f_231[iParam0 /*15*/])->f_5.f_2 != 0 && (Global_1186267->f_231[iParam0 /*15*/])->f_5.f_5 != -1)
	{
	}
	if (func_43(iParam0, 2048))
	{
		iVar28 = (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_7;
		iVar27 = 0;
		while (iVar27 < iVar28)
		{
			if (NETWORK::_0x1B89BC43B6E69107(func_107(iParam0), func_108(iParam0, iVar27), 0, 0))
			{
				bVar29 = true;
			}
			iVar27++;
		}
		if (!bVar29)
		{
			if (func_83(iParam0) == 6)
			{
				func_95(iParam0);
				return;
			}
			if (func_83(iParam0) == 2)
			{
				bVar30 = true;
			}
		}
		if (bVar30)
		{
			if (!func_49(&((Global_1198382->f_1[iParam0 /*10*/])->f_7)))
			{
				func_109(&((Global_1198382->f_1[iParam0 /*10*/])->f_7), 0);
			}
			iVar31 = Global_1901929->f_230.f_62;
			if (iVar31 > 0 && func_110(&((Global_1198382->f_1[iParam0 /*10*/])->f_7)) > iVar31)
			{
				func_95(iParam0);
				return;
			}
		}
		else if (func_49(&((Global_1198382->f_1[iParam0 /*10*/])->f_7)))
		{
			func_50(&((Global_1198382->f_1[iParam0 /*10*/])->f_7));
		}
	}
}

void func_48()
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (NETWORK::GET_TIME_DIFFERENCE(Global_1186267->f_1, iVar0) < 30000)
	{
		return;
	}
	func_111(Global_1186267->f_2);
	Global_1186267->f_1 = iVar0;
	iVar1 = Global_1186267->f_2;
	iVar1++;
	if (iVar1 < 0 || iVar1 >= 4)
	{
		iVar1 = 0;
	}
	Global_1186267->f_2 = iVar1;
}

bool func_49(var uParam0)
{
	return func_112(*uParam0, 1);
}

void func_50(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

struct<40> func_51(var uParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40)
{
	struct<40> Var0;
	int iVar40;
	int iVar41;

	if (Param1.f_1 != -1)
	{
		return *(uParam0->f_2[Param1.f_1 /*40*/]);
	}
	Var0 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	iVar40 = 0;
	while (iVar40 < *uParam0)
	{
		iVar41 = ((uParam0->f_1 + iVar40) % 5);
		if ((uParam0->f_2[iVar41 /*40*/])->f_2 != Param1.f_2)
		{
		}
		else if ((uParam0->f_2[iVar41 /*40*/])->f_3 != Param1.f_3)
		{
		}
		else if ((uParam0->f_2[iVar41 /*40*/])->f_4 != Param1.f_4)
		{
		}
		else
		{
			return *(uParam0->f_2[iVar41 /*40*/]);
		}
		iVar40++;
	}
	return Var0;
}

void func_52(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	switch (func_113(uParam41))
	{
		case -1:
			func_114(uParam40, uParam41->f_4);
			break;
		case 0:
			if (!func_115(&Param0, uParam41))
			{
				if ((NETWORK::GET_NETWORK_TIME_ACCURATE() - uParam41->f_7) > 120000)
				{
					uParam41->f_6 = 2;
					func_116(uParam41, 3);
				}
				return;
			}
			if (func_117(&Param0) < 0)
			{
				return;
			}
			uParam41->f_1 = Param0.f_1;
			func_116(uParam41, 1);
			break;
		case 1:
			if (!func_115(&Param0, uParam41))
			{
				uParam41->f_6 = 2;
				func_116(uParam41, 3);
				return;
			}
			if (func_117(&Param0) < 1)
			{
				return;
			}
			uParam41->f_6 = Param0.f_6;
			func_116(uParam41, 2);
			break;
		case 2:
			if (!func_115(&Param0, uParam41))
			{
				if (uParam41->f_6 == -1)
				{
					uParam41->f_6 = 2;
				}
				func_116(uParam41, 3);
				return;
			}
			if (func_117(&Param0) < 3)
			{
				return;
			}
			func_116(uParam41, 3);
			break;
		case 3:
			func_116(uParam41, -1);
			break;
	}
}

bool func_53(var uParam0)
{
	return *uParam0 == 5;
}

void func_54(var uParam0, int iParam1, int iParam2)
{
	struct<40> Var0;
	struct<24> Var40;

	Var0 = { func_118(uParam0, &iParam1, iParam2) };
	if (Var0.f_2 == -1)
	{
		return;
	}
	Var40 = -1;
	Var40.f_2 = -1;
	Var40.f_3 = 255;
	Var40.f_4 = -1;
	Var40.f_5 = -1;
	Var40.f_6 = -1;
	Var40.f_8 = 2;
	Var40.f_8.f_1 = -1;
	Var40.f_8.f_5 = -1;
	Var40.f_8.f_5.f_1 = -1;
	Var40.f_8.f_5.f_3 = -1;
	Var40.f_8.f_5.f_4 = -1;
	Var40.f_8.f_5.f_5 = -1;
	Var40.f_8.f_5.f_6 = -1;
	Var40.f_8.f_5.f_6.f_1 = -1;
	Var40.f_8.f_5.f_9 = 2;
	Var40.f_23.f_1 = 1024;
	Var40.f_23.f_4 = -15;
	Var40.f_23.f_5 = 255;
	Var40.f_23.f_8 = 1;
	Var40.f_23.f_8.f_1.f_1 = 2147483647;
	Var40.f_23.f_13 = -1;
	Var40.f_2 = Var0.f_2;
	Var40.f_3 = Var0.f_3;
	Var40.f_5 = Var0.f_5;
	Var40.f_4 = Var0.f_4;
	Var40.f_7 = Var0.f_7;
	Var40.f_8 = { Var0.f_8 };
	Var40.f_23 = { Var0.f_23 };
	func_119(uParam0, &Var40);
}

bool func_55(var uParam0)
{
	return *uParam0 == 0;
}

struct<40> func_56(var uParam0)
{
	struct<40> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	switch (uParam0->f_2)
	{
		case 0:
			return func_120(uParam0, &(Global_1100950->f_33.f_513));
		case 2:
			return func_120(uParam0, &(Global_1214482->f_367));
		case 5:
			if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_3))
			{
				return Var0;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_3))
			{
				return Var0;
			}
			return func_120(uParam0, (*Global_1189272)[uParam0->f_3 /*204*/]);
		default:
			break;
	}
	return Var0;
}

struct<40> func_57(var uParam0, int iParam1)
{
	struct<40> Var0;

	Var0 = { func_121(uParam0, iParam1) };
	func_122(uParam0, iParam1);
	return Var0;
}

void func_58(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	switch (func_117(uParam1))
	{
		case -1:
			func_57(uParam0, uParam1->f_1);
			break;
		case 0:
			if (!func_115(uParam1, &uParam2))
			{
				func_123(uParam1, 2);
				return;
			}
			if (func_113(&uParam2) < 1)
			{
				return;
			}
			uParam1->f_6 = func_124(&uParam2);
			func_123(uParam1, 1);
			break;
		case 1:
			if (!func_115(uParam1, &uParam2))
			{
				func_123(uParam1, 2);
				return;
			}
			if (func_113(&uParam2) < 2)
			{
				return;
			}
			func_123(uParam1, 3);
			break;
		case 2:
			func_123(uParam1, -1);
			break;
		case 3:
			if (!func_115(uParam1, &uParam2))
			{
				func_123(uParam1, -1);
				return;
			}
			if (func_113(&uParam2) < 3)
			{
				return;
			}
			func_123(uParam1, -1);
			break;
	}
}

bool func_59(int iParam0, int iParam1)
{
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_2);
}

int func_60(int iParam0, int iParam1)
{
	return ((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_2;
}

void func_61(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_125(iParam0, iParam1, iVar0);
		iVar0++;
	}
}

void func_62(int iParam0, int iParam1, int iParam2)
{
	(*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/] = iParam2;
}

struct<2> func_63(int iParam0)
{
	return (Global_1198382->f_1[iParam0 /*10*/])->f_4;
}

bool func_64(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_126(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_65(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_126(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_66(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	MISC::CLEAR_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_67(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_7(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_68(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!func_38(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_65(Param0) && !func_64(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_127(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_126(Param0) == 3)
		{
			func_128(1, -1706799532);
		}
		else if (func_126(Param0) == 4)
		{
			func_128(0, -1706799532);
		}
	}
	if (func_126(Param0) == 3 || (func_126(Param0) == 1 && STATS::_0x01F4D242765C6B24(func_127(Param0))))
	{
		if (iParam3 != -1)
		{
			func_129(Param0, iParam3, iParam4);
		}
		else
		{
			func_129(Param0, 2, iParam4);
		}
	}
	func_130(Param0, 0);
	if (func_39(func_131(0), Param0))
	{
		func_132(1);
		func_133(0);
		func_134(0);
		func_135(1);
	}
	func_136(Param0);
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_137(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_69(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_70(var uParam0)
{
	int iVar0;
	struct<40> Var1;
	int iVar41;

	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_3[iVar0] = 0;
		uParam0->f_8[iVar0] = 0;
		uParam0->f_13[iVar0] = 0;
		uParam0->f_18[iVar0] = 0;
		uParam0->f_23[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_28 = 0;
	uParam0->f_28.f_1 = 0;
	Var1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = 255;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_8 = 2;
	Var1.f_8.f_1 = -1;
	Var1.f_8.f_5 = -1;
	Var1.f_8.f_5.f_1 = -1;
	Var1.f_8.f_5.f_3 = -1;
	Var1.f_8.f_5.f_4 = -1;
	Var1.f_8.f_5.f_5 = -1;
	Var1.f_8.f_5.f_6 = -1;
	Var1.f_8.f_5.f_6.f_1 = -1;
	Var1.f_8.f_5.f_9 = 2;
	Var1.f_23.f_1 = 1024;
	Var1.f_23.f_4 = -15;
	Var1.f_23.f_5 = 255;
	Var1.f_23.f_8 = 1;
	Var1.f_23.f_8.f_1.f_1 = 2147483647;
	Var1.f_23.f_13 = -1;
	iVar41 = 0;
	while (iVar41 < 5)
	{
		*(uParam0->f_28.f_2[iVar41 /*40*/]) = { Var1 };
		iVar41++;
	}
}

void func_71(var uParam0)
{
	struct<15> Var0;
	struct<17> Var15;
	int iVar32;

	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	Var15.f_1 = 1024;
	Var15.f_4 = -15;
	Var15.f_5 = 255;
	Var15.f_8 = 1;
	Var15.f_8.f_1.f_1 = 2147483647;
	Var15.f_13 = -1;
	iVar32 = 0;
	while (iVar32 < 71)
	{
		*((*uParam0)[iVar32 /*15*/]) = { Var0 };
		*(uParam0->f_1066[iVar32 /*17*/]) = { Var15 };
		iVar32++;
	}
}

void func_72(var uParam0)
{
	struct<6> Var0;
	int iVar6;

	Var0 = 1;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_5 = 255;
	iVar6 = 0;
	while (iVar6 < 71)
	{
		*((*uParam0)[iVar6 /*6*/]) = { Var0 };
		uParam0->f_427[iVar6] = 0;
		iVar6++;
	}
	uParam0->f_499 = 0;
}

void func_73(var uParam0)
{
	struct<40> Var0;
	int iVar40;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	iVar40 = 0;
	iVar40 = 0;
	while (iVar40 < 5)
	{
		*(uParam0->f_3[iVar40 /*40*/]) = { Var0 };
		iVar40++;
	}
}

void func_74(var uParam0)
{
	struct<72> Var0;

	Var0 = 71;
	*uParam0 = { Var0 };
}

int func_75(int iParam0)
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
			return 1;
		default:
			break;
	}
	return 0;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1070356->f_634.f_601;
		case 3:
			return Global_1070356->f_634.f_2103;
		case 4:
			return Global_1070356->f_634.f_12605;
		case 5:
			return Global_1070356->f_634.f_12907;
		case 6:
			return Global_1070356->f_634.f_15909;
		case 7:
			return Global_1070356->f_634.f_15980;
		case 8:
			return Global_1070356->f_634.f_17182;
		default:
			break;
	}
	return -1;
}

struct<2> func_77(int iParam0)
{
	if (iParam0 < 0)
	{
		return func_138();
	}
	return (Global_1186267->f_231[iParam0 /*15*/])->f_5;
}

int func_78(int iParam0)
{
	if (!func_16(iParam0))
	{
		return -1;
	}
	return (Global_1186267->f_231[iParam0 /*15*/])->f_1;
}

void func_79(int iParam0, struct<2> Param1)
{
	(Global_1198382->f_1[iParam0 /*10*/])->f_4 = { Param1 };
	(Global_1198382->f_1[iParam0 /*10*/])->f_6 = func_139(Param1);
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_140())
	{
		iVar0 = func_141(iVar1);
		if (func_7(iParam0, iVar0, iParam1))
		{
			return 1;
		}
		iVar1++;
	}
	return func_7(iParam0, PLAYER::PLAYER_ID(), iParam1);
}

void func_81(int iParam0, bool bParam1, int iParam2)
{
	struct<2> Var0;
	bool bVar2;

	Var0 = { func_63(iParam0) };
	if (!func_38(Var0))
	{
		return;
	}
	if (func_64(Var0))
	{
		return;
	}
	if (!func_65(Var0))
	{
		return;
	}
	if (func_7(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	if (bParam1)
	{
		bVar2 = 4;
	}
	else
	{
		bVar2 = false;
	}
	func_68(Var0, 0, bVar2, iParam2);
	func_67(iParam0, 4);
}

void func_82(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_63(iParam0) };
	if (!func_38(Var0))
	{
		return;
	}
	if (func_64(Var0))
	{
		return;
	}
	if (!func_65(Var0))
	{
		return;
	}
	if (func_7(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	func_68(Var0, 0, 1, iParam1);
	func_67(iParam0, 5);
}

int func_83(int iParam0)
{
	return (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_13;
}

int func_84(int iParam0)
{
	if (!func_94(iParam0))
	{
		return 0;
	}
	if (func_83(iParam0) >= 5)
	{
		return 0;
	}
	if (func_83(iParam0) <= 0)
	{
		return 0;
	}
	if (!func_7(iParam0, PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)
{
	return (Global_1186267->f_2505[iParam0 /*6*/])->f_4;
}

void func_86(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_63(iParam0) };
	if (!func_38(Var0))
	{
		return;
	}
	if (func_64(Var0))
	{
		return;
	}
	if (func_65(Var0))
	{
		return;
	}
	func_67(iParam0, 2);
	func_66(iParam0, 3);
	func_66(iParam0, 6);
	func_142(Var0);
}

void func_87(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0;

	Var0 = { func_63(iParam0) };
	if (!func_38(Var0))
	{
		return;
	}
	if (!func_64(Var0))
	{
		return;
	}
	if (func_65(Var0))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	}
	if (bParam1)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	func_67(iParam0, 3);
	func_143(Var0, 1, bParam2, bParam3);
}

bool func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	iVar1 = 0;
	while (iVar1 < func_140())
	{
		iVar0 = func_141(iVar1);
		if (func_7(iParam0, iVar0, 2) && !((func_7(iParam0, iVar0, 4) || func_7(iParam0, iVar0, 5)) || func_7(iParam0, iVar0, 6)))
		{
			return false;
		}
		iVar1++;
	}
	Var2 = { func_63(iParam0) };
	return !(func_64(Var2) || func_65(Var2));
}

void func_89(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_107(iParam0);
	iVar1 = func_108(iParam0, iParam1);
	iVar2 = func_144(iParam0, iParam1);
	iVar3 = func_83(iParam0);
	switch (func_145(iParam0, iParam1))
	{
		case -1:
			if (!func_84(iParam0))
			{
				return;
			}
			func_62(iParam0, iParam1, 1);
			break;
		case 0:
			if (!func_84(iParam0))
			{
				return;
			}
			func_62(iParam0, iParam1, 1);
			break;
		case 1:
			if (!func_84(iParam0))
			{
				func_61(iParam0, iParam1);
				func_62(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				return;
			}
			if (iVar2 >= 3)
			{
				return;
			}
			func_62(iParam0, iParam1, 2);
			break;
		case 2:
			if (!func_84(iParam0))
			{
				func_61(iParam0, iParam1);
				func_62(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_62(iParam0, iParam1, 1);
				return;
			}
			if (iVar2 >= 3)
			{
				func_62(iParam0, iParam1, 6);
				return;
			}
			if (!func_146(iParam0, iParam1))
			{
				return;
			}
			func_147(iParam0, iParam1, 0);
			func_62(iParam0, iParam1, 3);
			break;
		case 3:
			if (!func_84(iParam0))
			{
				func_61(iParam0, iParam1);
				func_62(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_62(iParam0, iParam1, 7);
				return;
			}
			if (iVar2 >= 3)
			{
				func_62(iParam0, iParam1, 6);
				return;
			}
			if (!func_148(iParam0, iParam1))
			{
				return;
			}
			func_62(iParam0, iParam1, 4);
			break;
		case 4:
			if (!NETWORK::_0x1B89BC43B6E69107(iVar0, iVar1, 1, 0))
			{
				if (!func_59(iParam0, iParam1))
				{
					func_149(iParam0, iParam1, 0);
					func_125(iParam0, iParam1, 0);
					func_62(iParam0, iParam1, 2);
				}
				return;
			}
			func_62(iParam0, iParam1, 5);
			break;
		case 5:
			if ((func_78(iParam0) <= 0 || iVar3 >= 5) || iVar3 < 1)
			{
				func_24(iParam0, iParam1);
			}
			if (func_150(iParam0, iParam1))
			{
				func_24(iParam0, iParam1);
			}
			if (NETWORK::_0x1B89BC43B6E69107(iVar0, iVar1, 1, 0))
			{
				return;
			}
			if (func_59(iParam0, iParam1))
			{
				return;
			}
			func_149(iParam0, iParam1, 0);
			if ((func_98(iParam0, 4) || func_98(iParam0, 5)) || (func_83(iParam0) > 2 && iVar2 == 3))
			{
				func_62(iParam0, iParam1, 6);
			}
			else
			{
				func_125(iParam0, iParam1, 0);
				func_62(iParam0, iParam1, 8);
			}
			break;
		case 6:
			if (!func_88(iParam0))
			{
				return;
			}
			func_62(iParam0, iParam1, 7);
			break;
		case 7:
			func_61(iParam0, iParam1);
			func_62(iParam0, iParam1, 8);
			break;
		case 8:
			func_67(iParam0, 7);
			if (iVar2 == 3)
			{
				return;
			}
			func_62(iParam0, iParam1, 1);
			func_66(iParam0, 7);
			break;
	}
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_151(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 1;
	}
	if (!VOLUME::_0xA4A4359320345B34(iVar0))
	{
		func_152(iParam0, iParam1, 0);
		return 1;
	}
	func_152(iParam0, iParam1, 0);
	return 1;
}

void func_91(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_43(iParam0, 8))
	{
		return;
	}
	iVar0 = func_153(iParam0, iParam1);
	iVar1 = func_78(iParam0);
	if (!func_94(iParam0) || func_83(iParam0) >= 5)
	{
		if (iVar0 != 1)
		{
			func_154(iParam0, iParam1);
			func_155(iParam0, iParam1, 1);
		}
		return;
	}
	switch (iVar0)
	{
		case -2:
			break;
		case -1:
			if (!func_38(func_77(iParam0)))
			{
				return;
			}
			if (func_156(iParam0, iParam1) <= 0)
			{
				func_155(iParam0, iParam1, 0);
				return;
			}
			else
			{
				if (iVar1 == 1)
				{
					func_155(iParam0, iParam1, 5);
				}
				else
				{
					func_155(iParam0, iParam1, 2);
				}
				return;
			}
			break;
		case 0:
			if (func_156(iParam0, iParam1) > 0)
			{
				func_155(iParam0, iParam1, 2);
				return;
			}
			break;
		case 1:
			func_155(iParam0, iParam1, -1);
			break;
		case 2:
			if (func_157(iParam0, iParam1) != 0)
			{
				func_155(iParam0, iParam1, 4);
				return;
			}
			func_158(iParam0, iParam1, 0);
			func_155(iParam0, iParam1, 3);
			break;
		case 3:
			if (func_151(iParam0, iParam1) == 0)
			{
				func_155(iParam0, iParam1, 2);
				return;
			}
			if (func_159(iParam0, iParam1))
			{
				func_155(iParam0, iParam1, 4);
				return;
			}
			break;
		case 4:
			if (iVar1 == 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_157(iParam0, iParam1), 160);
				func_155(iParam0, iParam1, 7);
				return;
			}
			if (!VOLUME::_0xF6A8A652A6B186CD(func_157(iParam0, iParam1)))
			{
				func_160(iParam0, iParam1);
				func_155(iParam0, iParam1, 2);
				return;
			}
			break;
		case 5:
			if ((func_144(iParam0, iParam1) == 2 || func_83(iParam0) == 2) || iVar1 > 1)
			{
				func_155(iParam0, iParam1, 2);
				return;
			}
			break;
		case 6:
			if (func_151(iParam0, iParam1) == 0)
			{
				func_155(iParam0, iParam1, 5);
				return;
			}
			if ((func_144(iParam0, iParam1) == 2 || func_83(iParam0) == 2) || iVar1 > 1)
			{
				func_90(iParam0, iParam1);
				func_155(iParam0, iParam1, 2);
				return;
			}
			if (func_159(iParam0, iParam1))
			{
				func_155(iParam0, iParam1, 7);
				return;
			}
			break;
		case 7:
			if ((func_144(iParam0, iParam1) == 2 || func_83(iParam0) == 2) || iVar1 > 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_157(iParam0, iParam1), 32);
				func_155(iParam0, iParam1, 4);
				return;
			}
			if (!VOLUME::_0xF6A8A652A6B186CD(func_157(iParam0, iParam1)))
			{
				func_160(iParam0, iParam1);
				func_155(iParam0, iParam1, 5);
				return;
			}
			break;
	}
}

void func_92(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_43(iParam0, 16))
	{
		return;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_108(iParam0, iParam1);
	iVar3 = func_144(iParam0, iParam1);
	if (iVar3 > 0)
	{
		if (!func_94(iParam0))
		{
			func_161(iParam0, iParam1, 0);
			return;
		}
	}
	switch (iVar3)
	{
		case -1:
			if (!func_38(func_77(iParam0)))
			{
				return;
			}
			if (func_162(iParam0, iParam1) <= 0)
			{
				func_161(iParam0, iParam1, 0);
				return;
			}
			else
			{
				func_161(iParam0, iParam1, 1);
				return;
			}
			break;
		case 0:
			if (!func_94(iParam0))
			{
				return;
			}
			if (func_162(iParam0, iParam1) <= 0)
			{
				return;
			}
			iVar2 = func_163(iParam0);
			if (iVar2 != -15 && func_164(iVar2))
			{
				return;
			}
			func_161(iParam0, iParam1, 1);
			break;
		case 1:
			if (func_165(iParam0, iParam1, 0))
			{
				func_161(iParam0, iParam1, 2);
				func_103(iParam0, 3);
				return;
			}
			break;
		case 2:
			if (!func_165(iParam0, iParam1, 0) && !NETWORK::_0x1B89BC43B6E69107(iVar0, iVar1, 0, 0))
			{
				func_161(iParam0, iParam1, 3);
				return;
			}
			if (func_83(iParam0) >= 3)
			{
				func_161(iParam0, iParam1, 3);
				return;
			}
			break;
		case 3:
			if (func_83(iParam0) >= 3)
			{
				return;
			}
			if (!func_166(iParam0, iParam1))
			{
				func_161(iParam0, iParam1, 2);
				return;
			}
			if (func_97(iParam0) != 255)
			{
				func_103(iParam0, 2);
			}
			else
			{
				func_103(iParam0, 1);
			}
			iVar2 = func_163(iParam0);
			if (iVar2 != -15 && func_164(iVar2))
			{
				func_161(iParam0, iParam1, 0);
				return;
			}
			if (func_83(iParam0) >= 4)
			{
				return;
			}
			if (func_167(iParam0, 7))
			{
				return;
			}
			func_161(iParam0, iParam1, 1);
			break;
	}
}

void func_93(int iParam0, int iParam1)
{
	(Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_13 = iParam1;
}

bool func_94(int iParam0)
{
	bool bVar0;

	bVar0 = !func_15(func_63(iParam0), func_168(iParam0), 0);
	return bVar0;
}

int func_95(int iParam0)
{
	struct<15> Var0;
	struct<15> Var15;
	int iVar30;
	int iVar31;

	if (!func_16(iParam0))
	{
		return 0;
	}
	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	Var15 = { *(Global_1186267->f_231[iParam0 /*15*/]) };
	Var0.f_1 = 0;
	*(Global_1186267->f_231[iParam0 /*15*/]) = { Var0 };
	iVar30 = Var15;
	iVar31 = Var15.f_5.f_9;
	Global_1186267->f_13[iVar31] = (&Global_1186267->f_13[iVar31] - 1);
	Global_1186267->f_8[iVar30] = (&Global_1186267->f_8[iVar30] - 1);
	if (iVar30 != iVar31)
	{
		Global_1186267->f_18[iVar30] = (&Global_1186267->f_18[iVar30] - 1);
	}
	if (func_169(iParam0))
	{
		Global_1186267->f_23[iVar30] = (&Global_1186267->f_23[iVar30] - 1);
	}
	return 1;
}

void func_96(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	(Global_1186267->f_2505[iParam0 /*6*/])->f_4 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam1);
	(Global_1186267->f_2505[iParam0 /*6*/])->f_5 = iParam1;
}

int func_97(int iParam0)
{
	return (Global_1186267->f_2505[iParam0 /*6*/])->f_5;
}

int func_98(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (func_7(iParam0, iVar0, iParam1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_99(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!func_43(iParam0, 512))
	{
		return false;
	}
	iVar0 = func_170(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	uVar1 = func_172(func_171(iParam0, 0), 0f, 0f, 0f, IntToFloat(iVar0), IntToFloat(iVar0), IntToFloat(iVar0 * 2), -432403087, 0, 8);
	return SCRIPTS::COUNT_PLAYER_BITS(&uVar1) <= 0;
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (!func_173(iParam0, iVar0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (Global_1186267->f_2505[iParam0 /*6*/])->f_5;
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar2 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
		if ((Global_1186267->f_2505[iParam0 /*6*/])->f_4 != iVar2)
		{
			if ((_NAMESPACE26::_0xD6F6ACF4392187FB((Global_1186267->f_2505[iParam0 /*6*/])->f_4) && _NAMESPACE26::_0x93A91A351A07360E((Global_1186267->f_2505[iParam0 /*6*/])->f_4)) && _NAMESPACE26::_0x149A2751AB66AC02((Global_1186267->f_2505[iParam0 /*6*/])->f_4) > 0)
			{
				iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC((Global_1186267->f_2505[iParam0 /*6*/])->f_4);
				func_96(iParam0, iVar1);
			}
			else if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar2) == iVar0)
			{
				(Global_1186267->f_2505[iParam0 /*6*/])->f_4 = iVar2;
			}
			else
			{
				func_174(iParam0);
			}
		}
		return;
	}
	if ((Global_1186267->f_2505[iParam0 /*6*/])->f_4 == 0)
	{
		func_174(iParam0);
		return;
	}
	if (!_NAMESPACE26::_0x93A91A351A07360E((Global_1186267->f_2505[iParam0 /*6*/])->f_4))
	{
		func_174(iParam0);
		return;
	}
	iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC((Global_1186267->f_2505[iParam0 /*6*/])->f_4);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
	{
		func_174(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		func_174(iParam0);
		return;
	}
	func_96(iParam0, iVar1);
}

int func_102(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if ((*Global_1196005)[iVar0 /*72*/][iParam0] > 127)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_103(int iParam0, int iParam1)
{
	(Global_1186267->f_231[iParam0 /*15*/])->f_1 = iParam1;
}

void func_104(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_160(iParam0, iVar0);
		iVar0++;
	}
}

int func_105(int iParam0)
{
	return &(Global_1100950->f_752[iParam0 /*6*/]);
}

int func_106(int iParam0)
{
	return (Global_1100950->f_752[iParam0 /*6*/])->f_1;
}

int func_107(int iParam0)
{
	return &(Global_1186267->f_231.f_1066[iParam0 /*17*/]);
}

int func_108(int iParam0, int iParam1)
{
	return ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[iParam1 /*4*/])->f_1;
}

void func_109(var uParam0, bool bParam1)
{
	if (bParam1 || !func_49(uParam0))
	{
		func_175(uParam0);
	}
}

int func_110(var uParam0)
{
	if (!func_49(uParam0))
	{
		return 0;
	}
	if (func_176(uParam0))
	{
		return uParam0->f_2;
	}
	return func_177(uParam0->f_1);
}

void func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = func_178(iParam0);
	iVar1 = ((func_178(iParam0) + func_179(iParam0)) - 1);
	iVar2 = ((func_178(iParam0) + func_179(iParam0)) - 1);
	iVar3 = &Global_1186267->f_8[iParam0];
	iVar4 = &Global_1186267->f_18[iParam0];
	iVar5 = &Global_1186267->f_23[iParam0];
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	iVar9 = iVar0;
	while (iVar9 <= iVar2)
	{
		if ((Global_1186267->f_231[iVar9 /*15*/])->f_1 <= 0)
		{
		}
		else
		{
			iVar6++;
			if (iParam0 != (Global_1186267->f_231[iVar9 /*15*/])->f_5.f_9)
			{
				iVar7++;
			}
			if (iVar9 >= iVar1)
			{
				iVar8++;
			}
		}
		iVar9++;
	}
	if (iVar3 != iVar6)
	{
		Global_1186267->f_8[iParam0] = iVar6;
	}
	if (iVar4 != iVar7)
	{
		Global_1186267->f_18[iParam0] = iVar7;
	}
	if (iVar5 != iVar8)
	{
		Global_1186267->f_23[iParam0] = iVar8;
	}
}

bool func_112(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_113(var uParam0)
{
	return *uParam0;
}

struct<40> func_114(var uParam0, int iParam1)
{
	struct<40> Var0;

	Var0 = { func_180(uParam0, iParam1) };
	func_181(uParam0, iParam1);
	return Var0;
}

int func_115(var uParam0, var uParam1)
{
	if (uParam0->f_2 == -1)
	{
		return 0;
	}
	if (uParam1->f_2 == -1)
	{
		return 0;
	}
	if (uParam0->f_2 != uParam1->f_2)
	{
		return 0;
	}
	if (uParam0->f_3 != uParam1->f_3)
	{
		return 0;
	}
	if (uParam0->f_4 != -1 && uParam1->f_1 != -1)
	{
		if (uParam0->f_1 == uParam1->f_1 && uParam0->f_4 == uParam1->f_4)
		{
			return 1;
		}
		return 0;
	}
	if (uParam0->f_5 == -1)
	{
		return 0;
	}
	if (uParam1->f_5 == -1)
	{
		return 0;
	}
	if (uParam0->f_5 != uParam1->f_5)
	{
		return 0;
	}
	if (uParam0->f_7 != uParam1->f_7)
	{
		return 0;
	}
	if (uParam0->f_8 != uParam1->f_8)
	{
		return 0;
	}
	if (uParam0->f_8.f_1 != uParam1->f_8.f_1)
	{
		return 0;
	}
	if (!func_39(uParam0->f_8.f_5, uParam1->f_8.f_5))
	{
		return 0;
	}
	if (uParam0->f_8.f_5.f_2 != uParam1->f_8.f_5.f_2)
	{
		return 0;
	}
	if (uParam0->f_8.f_5.f_3 != uParam1->f_8.f_5.f_3)
	{
		return 0;
	}
	if (uParam0->f_8.f_5.f_4 != uParam1->f_8.f_5.f_4)
	{
		return 0;
	}
	if (uParam0->f_8.f_5.f_5 != uParam1->f_8.f_5.f_5)
	{
		return 0;
	}
	if (!func_39(uParam0->f_8.f_5.f_6, uParam1->f_8.f_5.f_6))
	{
		return 0;
	}
	if (uParam0->f_8.f_5.f_8 != uParam1->f_8.f_5.f_8)
	{
		return 0;
	}
	if (uParam0->f_8.f_5.f_9 != uParam1->f_8.f_5.f_9)
	{
		return 0;
	}
	return 1;
}

void func_116(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_117(var uParam0)
{
	return *uParam0;
}

struct<40> func_118(var uParam0, int iParam1, int iParam2)
{
	struct<40> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	switch (*iParam1)
	{
		case 0:
			return func_182(&(Global_1100950->f_33.f_513));
		case 2:
			return func_182(&(Global_1214482->f_367));
		case 5:
			if (iParam2 == -1)
			{
				return Var0;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iParam2])))
			{
				return Var0;
			}
			return func_182((*Global_1189272)[iParam2 /*204*/]);
		default:
			break;
	}
	return Var0;
}

int func_119(var uParam0, var uParam1)
{
	int iVar0;

	if (func_53(uParam0))
	{
		return 0;
	}
	iVar0 = ((uParam0->f_1 + *uParam0) % 5);
	uParam1->f_1 = iVar0;
	*(uParam0->f_2[iVar0 /*40*/]) = { *uParam1 };
	func_123(uParam0->f_2[iVar0 /*40*/], 0);
	*uParam0++;
	return 1;
}

struct<40> func_120(var uParam0, var uParam1)
{
	struct<40> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	if (uParam0->f_4 == -1)
	{
		return Var0;
	}
	if (func_115(uParam0, uParam1->f_3[uParam0->f_4 /*40*/]))
	{
		return *(uParam1->f_3[uParam0->f_4 /*40*/]);
	}
	return Var0;
}

struct<40> func_121(var uParam0, int iParam1)
{
	struct<40> Var0;
	struct<40> Var40;

	Var0 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	if (!func_183(iParam1))
	{
		return Var0;
	}
	Var40 = { *(uParam0->f_2[iParam1 /*40*/]) };
	*(uParam0->f_2[iParam1 /*40*/]) = { Var0 };
	return Var40;
}

void func_122(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = (((uParam0->f_1 + *uParam0) - 1) % 5);
	if (uParam0->f_1 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar3 = ((uParam0->f_1 + iVar1) % 5);
			if (&uParam0->f_2[iVar3 /*40*/] != -1)
			{
			}
			else
			{
				if ((uParam0->f_2[iVar3 /*40*/])->f_1 != -1)
				{
					func_121(uParam0, iVar3);
				}
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		uParam0->f_1 = iVar3;
		*uParam0 = iVar2;
	}
	else if (iVar0 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar4 = ((iVar0 - iVar1) + 5 % 5);
			if (&uParam0->f_2[iVar4 /*40*/] != -1)
			{
			}
			else
			{
				func_121(uParam0, iVar4);
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		*uParam0 = iVar2;
	}
}

void func_123(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_124(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_184(&(uParam0->f_8)))
	{
		return 2;
	}
	iVar0 = func_185(&(uParam0->f_8.f_5));
	switch (uParam0->f_5)
	{
		case 0:
			if (func_16(iVar0))
			{
				return 0;
			}
			if (uParam0->f_8.f_5.f_8 != 0)
			{
				if (func_40(uParam0->f_8.f_5.f_8))
				{
					return 1;
				}
			}
			if (func_186(&(uParam0->f_8), &(uParam0->f_23), uParam0->f_8))
			{
				return 0;
			}
			if (uParam0->f_8.f_1 > 1)
			{
				if (func_187(&(uParam0->f_8), &(uParam0->f_23), uParam0->f_8))
				{
					return 0;
				}
			}
			if (uParam0->f_8.f_1 > 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (func_188(iVar1))
					{
					}
					else if (iVar1 == uParam0->f_8)
					{
					}
					else if (func_186(&(uParam0->f_8), &(uParam0->f_23), iVar1))
					{
						return 0;
					}
					iVar1++;
				}
				if (func_189(&(uParam0->f_8), &(uParam0->f_23), uParam0->f_8))
				{
					return 0;
				}
			}
			return 1;
		case 1:
			if (!func_16(iVar0))
			{
				return 1;
			}
			func_103(iVar0, uParam0->f_8.f_1);
			func_190(iVar0, &(uParam0->f_8.f_5), &(uParam0->f_23));
			return 0;
		case 2:
			if (!func_16(iVar0))
			{
				return 1;
			}
			func_103(iVar0, uParam0->f_8.f_1);
			return 0;
		case 4:
			if (!func_16(iVar0))
			{
				return 1;
			}
			func_191(iVar0, uParam0->f_8.f_5.f_6);
			func_190(iVar0, &(uParam0->f_8.f_5), &(uParam0->f_23));
			return 0;
		case 5:
			if (!func_16(iVar0))
			{
				return 1;
			}
			func_192(iVar0, uParam0->f_23.f_6);
			return 0;
		case 6:
			if (!func_16(iVar0))
			{
				return 1;
			}
			if (!func_38(uParam0->f_8.f_5))
			{
				return 1;
			}
			if (func_193(&(uParam0->f_8.f_5)))
			{
				func_190(iVar0, &(uParam0->f_8.f_5), &(uParam0->f_23));
				return 0;
			}
			return 1;
		case 3:
			if (!func_16(iVar0))
			{
				return 1;
			}
			func_194(iVar0, uParam0->f_8);
			return 0;
		case 7:
			if (!func_16(iVar0))
			{
				return 0;
			}
			func_95(iVar0);
			return 0;
		default:
			break;
	}
	return 2;
}

void func_125(int iParam0, int iParam1, int iParam2)
{
	func_66(iParam0, func_195(iParam1, iParam2));
}

int func_126(struct<2> Param0)
{
	int iVar0;

	if (!func_38(Param0))
	{
		return -1;
	}
	iVar0 = func_196(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070356->f_17817.f_1[iVar0 /*3*/])->f_2;
}

int func_127(struct<2> Param0)
{
	return func_139(Param0);
}

int func_128(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_34())
	{
		return 0;
	}
	if (!func_197())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_198(&Global_0, 8);
	}
	func_198(&Global_0, 1);
	return 1;
}

void func_129(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_199(func_137(Param0));
	iVar1 = func_127(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_29() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_200(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_130(struct<2> Param0, int iParam2)
{
	if (!func_38(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_201(Param0);
	}
	else
	{
		func_202(Param0, iParam2);
	}
	func_203();
}

struct<2> func_131(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

void func_132(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_204(Global_1939178, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_205(Global_1939178, 8388608);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

void func_133(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_206(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_207(cVar2);
			}
			else
			{
				func_208();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_134(bool bParam0)
{
	if (!bParam0 && func_209(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_135(int iParam0)
{
	Global_1900718 = (Global_1900718 || iParam0);
}

int func_136(struct<2> Param0)
{
	return func_211(func_210(Param0));
}

int func_137(var uParam0, var uParam1)
{
	return uParam0;
}

struct<2> func_138()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_139(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_212(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_140()
{
	return Global_1099294->f_340;
}

int func_141(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return &(Global_1099294->f_342[iParam0]);
}

int func_142(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (&Global_1900788 == 15)
	{
		return -1;
	}
	if (!func_213(Param0))
	{
		return -1;
	}
	iVar1 = func_214(Param0);
	if (iVar1 >= 0)
	{
		func_215(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900788;
		*((*Global_1900789)[iVar0 /*2*/]) = { Param0 };
		*((*Global_1900820)[iVar0 /*2*/]) = { Var2 };
		func_215(Param0, 1);
		Global_1900788 = &Global_1900788 + 1;
		if (&Global_1900788 > 15)
		{
			Global_1900788 = 15;
		}
		return iVar0;
	}
	return -1;
}

void func_143(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_38(Param0))
	{
		return;
	}
	if (!func_64(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_216(Param0);
	}
	if (!func_38(func_131(0)))
	{
		func_130(Param0, 3);
		func_132(bParam3);
		func_133(!bParam4);
		func_217(Param0, -1);
		if (bParam2 && !func_218(2))
		{
			func_198(&Global_0, 1024);
		}
		func_135(1);
	}
	else
	{
		func_217(Param0, -1);
		func_130(Param0, 4);
		func_219(Param0, 0);
	}
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_137(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_220(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

int func_144(int iParam0, int iParam1)
{
	return Global_1186267->f_2505[iParam0 /*6*/][iParam1 /*3*/];
}

int func_145(int iParam0, int iParam1)
{
	return Global_1198382->f_1[iParam0 /*10*/][iParam1 /*3*/];
}

bool func_146(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_162(iParam0, iParam1);
	if (iVar0 == 2147483647)
	{
		return true;
	}
	vVar1 = { func_221(PLAYER::PLAYER_ID()) };
	if (func_222(vVar1))
	{
		return false;
	}
	return func_223(vVar1, func_171(iParam0, iParam1)) < IntToFloat(iVar0);
}

void func_147(int iParam0, int iParam1, int iParam2)
{
	func_67(iParam0, func_195(iParam1, iParam2));
}

int func_148(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	struct<5> Var13;
	var uVar18;

	iVar0 = func_108(iParam0, iParam1);
	iVar1 = func_107(iParam0);
	if (func_59(iParam0, iParam1))
	{
		return 0;
	}
	if (NETWORK::_0x1B89BC43B6E69107(iVar1, iVar0, 1, 0))
	{
		return 0;
	}
	if (func_43(iParam0, 8))
	{
		if (func_153(iParam0, iParam1) != 4)
		{
			return 0;
		}
	}
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar1);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar1))
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(func_224(iParam0)) <= 0)
		{
			return 0;
		}
		if (func_43(iParam0, 64))
		{
			Var3.f_7 = -1;
			Var3.f_7.f_1 = -1;
			Var3.f_9 = 255;
			Var3 = iVar0;
			Var3.f_9 = func_97(iParam0);
			Var3.f_1 = { func_171(iParam0, iParam1) };
			Var3.f_5 = iParam0;
			Var3.f_7 = { func_63(iParam0) };
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &Var3, 10, func_224(iParam0));
		}
		else if (func_43(iParam0, 128))
		{
			Var13 = iVar0;
			Var13.f_1 = func_225(iVar1);
			Var13.f_2 = (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_14;
			Var13.f_3 = (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_15;
			Var13.f_4 = (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_16;
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &Var13, 5, func_224(iParam0));
		}
		else
		{
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &uVar18, 1, func_224(iParam0));
		}
		func_149(iParam0, iParam1, iVar2);
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar1);
		func_226(iVar1, iVar0);
		return 1;
	}
	return 0;
}

void func_149(int iParam0, int iParam1, int iParam2)
{
	((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_2 = iParam2;
}

bool func_150(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_43(iParam0, 1024))
	{
		return false;
	}
	iVar0 = func_170(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	return func_223(Global_35, func_171(iParam0, iParam1)) > IntToFloat(iVar0);
}

int func_151(int iParam0, int iParam1)
{
	return ((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_1;
}

void func_152(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_0xA4A4359320345B34(iParam2))
	{
		((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_1 = 0;
		return;
	}
	((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_1 = iParam2;
}

int func_153(int iParam0, int iParam1)
{
	return ((*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/])->f_1;
}

void func_154(int iParam0, int iParam1)
{
	func_160(iParam0, iParam1);
	func_90(iParam0, iParam1);
}

void func_155(int iParam0, int iParam1, int iParam2)
{
	((*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/])->f_1 = iParam2;
}

int func_156(int iParam0, int iParam1)
{
	return ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[iParam1 /*4*/])->f_2;
}

int func_157(int iParam0, int iParam1)
{
	return ((*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/])->f_2;
}

void func_158(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var10;
	int iVar12;

	if (func_151(iParam0, iParam1) != 0 && !func_227(func_151(iParam0, iParam1)))
	{
		return;
	}
	iVar0 = 96;
	if (!bParam2)
	{
		iVar0 += 128;
	}
	if (func_90(iParam0, iParam1))
	{
		Var1 = { func_171(iParam0, iParam1) };
		Var1.f_4 = BUILTIN::TO_FLOAT(func_156(iParam0, iParam1));
		Var1.f_5 = iVar0;
		Var1.f_6 = func_228(iParam0);
		Var10 = { func_63(iParam0) };
		iVar12 = 0;
		if (func_38(Var10))
		{
			iVar12 = func_139(Var10);
		}
		if (iVar12 != 0)
		{
			Var1.f_7 = iVar12;
		}
		else
		{
			Var1.f_7 = -1546799264;
		}
		func_152(iParam0, iParam1, VOLUME::_0x183C0B6CFEFFCAE4(&Var1));
	}
}

int func_159(int iParam0, int iParam1)
{
	int iVar0;

	if (func_157(iParam0, iParam1) != 0)
	{
		return 1;
	}
	func_229(iParam0, iParam1);
	func_158(iParam0, iParam1, 1);
	iVar0 = func_151(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_230(iVar0))
	{
		return 0;
	}
	func_231(iParam0, iParam1, VOLUME::_0x351D71B8B72B858B(func_151(iParam0, iParam1)));
	return 1;
}

void func_160(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_157(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iVar0))
	{
		func_231(iParam0, iParam1, 0);
		return;
	}
	VOLUME::_0xFDFECC6EE4491E11(iVar0);
	func_231(iParam0, iParam1, 0);
	func_90(iParam0, iParam1);
}

void func_161(int iParam0, int iParam1, int iParam2)
{
	(*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/] = iParam2;
}

int func_162(int iParam0, int iParam1)
{
	return ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[iParam1 /*4*/])->f_3;
}

int func_163(int iParam0)
{
	return (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_4;
}

bool func_164(int iParam0)
{
	return &Global_1902689 > iParam0;
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (func_232(iParam0, iParam1, iVar0, iParam2))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_166(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (!func_233(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_167(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (!func_7(iParam0, iVar0, 2))
		{
		}
		else if (!func_7(iParam0, iVar0, iParam1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_168(int iParam0)
{
	if (!func_16(iParam0))
	{
		return 0;
	}
	return (Global_1186267->f_231[iParam0 /*15*/])->f_5.f_8;
}

int func_169(int iParam0)
{
	if (iParam0 < 3)
	{
		return 0;
	}
	if (iParam0 < (&Global_1186267->f_3[1] + 3))
	{
		return 0;
	}
	if (iParam0 < 35)
	{
		return 1;
	}
	if (iParam0 < (&Global_1186267->f_3[2] + 35))
	{
		return 0;
	}
	if (iParam0 < (&Global_1186267->f_3[2] + 35) + 16)
	{
		return 0;
	}
	return 1;
}

int func_170(int iParam0)
{
	return (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_2;
}

Vector3 func_171(int iParam0, int iParam1)
{
	return func_234(&((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[iParam1 /*4*/]));
}

var func_172(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_235() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1275573->f_10;
	iVar6 = Global_1275573->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_236());
				break;
			case -432403087:
				iVar8 = VOLUME::_0x10157BC3247FF3BA(vParam0, vParam3, vParam6, func_236());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_236());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_237(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar2])))
		{
			iVar10 = &Global_1275573->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_238(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1275573->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_239(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_240(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_0xF256A75210C5C0EB(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_0x43F867EF5C463A53(iVar8);
	}
	return uVar0;
}

bool func_173(int iParam0, int iParam1)
{
	return (*Global_1196005)[iParam1 /*72*/][iParam0] == 0;
}

void func_174(int iParam0)
{
	(Global_1186267->f_2505[iParam0 /*6*/])->f_4 = 0;
	(Global_1186267->f_2505[iParam0 /*6*/])->f_5 = 255;
}

void func_175(var uParam0)
{
	func_241(uParam0, 0);
}

bool func_176(var uParam0)
{
	return func_112(*uParam0, 2);
}

int func_177(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (&Global_1186267->f_3[iParam0] * 2 <= 32)
			{
				return &Global_1186267->f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (&Global_1186267->f_3[iParam0] * 2 <= 20)
			{
				return &Global_1186267->f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (&Global_1186267->f_3[iParam0] * 2 <= 16)
			{
				return &Global_1186267->f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

struct<40> func_180(var uParam0, int iParam1)
{
	struct<40> Var0;
	struct<40> Var40;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	if (!func_242(uParam0, iParam1))
	{
		return Var0;
	}
	Var40 = { *(uParam0->f_3[iParam1 /*40*/]) };
	*(uParam0->f_3[iParam1 /*40*/]) = { Var0 };
	return Var40;
}

void func_181(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = (((uParam0->f_1 + *uParam0) - 1) % uParam0->f_2);
	if (uParam0->f_1 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar3 = ((uParam0->f_1 + iVar1) % uParam0->f_2);
			if (&uParam0->f_3[iVar3 /*40*/] != -1)
			{
			}
			else
			{
				if ((uParam0->f_3[iVar3 /*40*/])->f_4 != -1)
				{
					func_180(uParam0, iVar3);
				}
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		uParam0->f_1 = iVar3;
		*uParam0 = iVar2;
	}
	else if (iVar0 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar4 = ((iVar0 - iVar1) + 5 % uParam0->f_2);
			if (&uParam0->f_3[iVar4 /*40*/] != -1)
			{
			}
			else
			{
				func_180(uParam0, iVar4);
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		*uParam0 = iVar2;
	}
}

struct<40> func_182(var uParam0)
{
	struct<40> Var0;
	int iVar40;
	int iVar41;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	iVar40 = 0;
	while (iVar40 < *uParam0)
	{
		iVar41 = ((uParam0->f_1 + iVar40) % uParam0->f_2);
		if (!func_243(*(uParam0->f_3[iVar41 /*40*/])))
		{
			return *(uParam0->f_3[iVar41 /*40*/]);
		}
		iVar40++;
	}
	return Var0;
}

bool func_183(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 5);
}

int func_184(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return 0;
	}
	if (!func_244(&(uParam0->f_5)))
	{
		return 0;
	}
	return 1;
}

int func_185(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_244(uParam0))
	{
		return -1;
	}
	iVar0 = func_245(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_245(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_186(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((Global_1186267->f_23[iParam2] - Global_1186267->f_8[iParam2]) // PointerArith >= &Global_1186267->f_3[iParam2])
	{
		return 0;
	}
	if (&Global_1186267->f_13[iParam2] >= &Global_1186267->f_3[iParam2])
	{
		return 0;
	}
	iVar0 = func_178(iParam2);
	iVar1 = ((&Global_1186267->f_3[iParam2] + iVar0) - 1);
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if ((Global_1186267->f_231[iVar2 /*15*/])->f_1 == -1)
		{
			func_246(*uParam0, *uParam1, iParam2, iVar2);
			return 1;
		}
		iVar2++;
	}
	return 0;
}

int func_187(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_178(iParam2);
	iVar1 = ((&Global_1186267->f_3[iParam2] + iVar0) - 1);
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if ((Global_1186267->f_231[iVar2 /*15*/])->f_1 == -1 || (Global_1186267->f_231[iVar2 /*15*/])->f_1 == 1)
		{
			func_246(*uParam0, *uParam1, iParam2, iVar2);
			return 1;
		}
		iVar2++;
	}
	return 0;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		case 2:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_189(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = (&Global_1186267->f_3[iParam2] + func_178(iParam2));
	iVar1 = ((func_178(iParam2) + func_179(iParam2)) - 1);
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		if ((Global_1186267->f_231[iVar2 /*15*/])->f_1 == -1)
		{
			func_246(*uParam0, *uParam1, iParam2, iVar2);
			return 1;
		}
		iVar2++;
	}
	return 0;
}

void func_190(int iParam0, var uParam1, var uParam2)
{
	struct<6> Var0;

	if (func_43(iParam0, 1))
	{
		func_247(iParam0);
	}
	if (!func_38((Global_1186267->f_231[iParam0 /*15*/])->f_5))
	{
		(Global_1186267->f_231[iParam0 /*15*/])->f_5 = { *uParam1 };
	}
	*(Global_1186267->f_231.f_1066[iParam0 /*17*/]) = { *uParam2 };
	Var0 = 1;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_5 = 255;
	*(Global_1186267->f_2505[iParam0 /*6*/]) = { Var0 };
	if (func_43(iParam0, 1))
	{
		func_248(iParam0);
	}
}

void func_191(int iParam0, struct<2> Param1)
{
	(Global_1186267->f_231[iParam0 /*15*/])->f_5.f_6 = { Param1 };
}

void func_192(int iParam0, var uParam1)
{
	(Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_6 = uParam1;
}

int func_193(var uParam0)
{
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = -1;
	Var10.f_1 = -1;
	Var10.f_3 = -1;
	Var10.f_4 = -1;
	Var10.f_5 = -1;
	Var10.f_6 = -1;
	Var10.f_6.f_1 = -1;
	Var10.f_9 = 2;
	Var0 = { Var10 };
	Var0 = { *uParam0 };
	iVar20 = func_185(&Var0);
	Var0 = { Var10 };
	Var0.f_2 = uParam0->f_2;
	Var0.f_3 = uParam0->f_3;
	iVar21 = func_185(&Var0);
	Var0 = { Var10 };
	Var0.f_2 = uParam0->f_2;
	Var0.f_4 = uParam0->f_4;
	iVar22 = func_185(&Var0);
	Var0 = { Var10 };
	Var0.f_2 = uParam0->f_2;
	Var0.f_5 = uParam0->f_5;
	iVar23 = func_185(&Var0);
	if ((!func_16(iVar21) && !func_16(iVar22)) && !func_16(iVar23))
	{
		return 0;
	}
	iVar24 = -1;
	if (func_16(iVar21))
	{
		iVar24 = iVar21;
	}
	else if (func_16(iVar23))
	{
		iVar24 = iVar23;
	}
	else
	{
		iVar24 = iVar22;
	}
	if (!func_16(iVar20))
	{
		if (!func_16(iVar24))
		{
			return 0;
		}
	}
	else
	{
		if (func_16(iVar24))
		{
			func_95(iVar24);
		}
		iVar24 = iVar20;
	}
	(Global_1186267->f_231[iVar24 /*15*/])->f_5 = { *uParam0 };
	(Global_1186267->f_231[iVar24 /*15*/])->f_5.f_2 = 0;
	(Global_1186267->f_231[iVar24 /*15*/])->f_5.f_3 = -1;
	(Global_1186267->f_231[iVar24 /*15*/])->f_5.f_4 = -1;
	(Global_1186267->f_231[iVar24 /*15*/])->f_5.f_5 = -1;
	return 1;
}

void func_194(int iParam0, int iParam1)
{
	if ((Global_1186267->f_231[iParam0 /*15*/])->f_5.f_9 == iParam1)
	{
		return;
	}
	if ((Global_1186267->f_231[iParam0 /*15*/])->f_5.f_9 == &Global_1186267->f_231[iParam0 /*15*/] && &Global_1186267->f_231[iParam0 /*15*/] != iParam1)
	{
		Global_1186267->f_18[&Global_1186267->f_231[iParam0 /*15*/]] = &Global_1186267->f_18[&Global_1186267->f_231[iParam0 /*15*/]] + 1;
	}
	if ((Global_1186267->f_231[iParam0 /*15*/])->f_5.f_9 != &Global_1186267->f_231[iParam0 /*15*/] && &Global_1186267->f_231[iParam0 /*15*/] == iParam1)
	{
		Global_1186267->f_18[&Global_1186267->f_231[iParam0 /*15*/]] = (&Global_1186267->f_18[&Global_1186267->f_231[iParam0 /*15*/]] - 1);
	}
	Global_1186267->f_13[(Global_1186267->f_231[iParam0 /*15*/])->f_5.f_9] = (&Global_1186267->f_13[(Global_1186267->f_231[iParam0 /*15*/])->f_5.f_9] - 1);
	Global_1186267->f_13[iParam1] = &Global_1186267->f_13[iParam1] + 1;
	(Global_1186267->f_231[iParam0 /*15*/])->f_5.f_9 = iParam1;
}

int func_195(int iParam0, int iParam1)
{
	return (8 + (iParam0 * 2 + iParam1));
}

int func_196(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1070356->f_17817 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_212(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1070356->f_17817 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_212(*(Global_1070356->f_17817.f_1[iVar8 /*3*/]), &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

int func_197()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

void func_198(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

void func_200(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_137(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_250(func_249(Param0));
			iVar5 = func_251(iVar4);
			if (!func_252(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1100950->f_33[iVar1 /*16*/] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = (Global_1100950->f_33[iVar2 /*16*/])->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1111121[iVar0 /*42*/];
}

int func_201(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_196(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_253(iVar0);
}

int func_202(struct<2> Param0, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (Global_1070356->f_17817 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_212(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1070356->f_17817 == 0)
	{
		*(Global_1070356->f_17817.f_1[Global_1070356->f_17817 /*3*/]) = { vVar6 };
		Global_1070356->f_17817++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1070356->f_17817)
	{
		func_212(*(Global_1070356->f_17817.f_1[iVar9 /*3*/]), &vVar3);
		if (vVar0.x == vVar3.x)
		{
			*(Global_1070356->f_17817.f_1[iVar9 /*3*/]) = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_254(iVar9);
			*(Global_1070356->f_17817.f_1[iVar9 /*3*/]) = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1070356->f_17817 < 31)
	{
		iVar9 = Global_1070356->f_17817;
		*(Global_1070356->f_17817.f_1[iVar9 /*3*/]) = { vVar6 };
		Global_1070356->f_17817++;
		if (Global_1070356->f_17817 > 32)
		{
			Global_1070356->f_17817 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_203()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1070356->f_17817)
	{
		if (func_212(*(Global_1070356->f_17817.f_1[iVar0 /*3*/]), &vVar1))
		{
		}
		iVar0++;
	}
}

void func_204(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_205(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_206(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1746095559 /* GXTEntry: "Arson" */;
		case 1:
			return 195938434 /* GXTEntry: "Assault" */;
		case 2:
			return 416962030 /* GXTEntry: "Animal Cruelty" */;
		case 3:
			return 1314857970 /* GXTEntry: "Disturbing the Peace" */;
		case 4:
			return -999071359 /* GXTEntry: "Animal Cruelty" */;
		case 5:
			return -683250308 /* GXTEntry: "Assault" */;
		case 6:
			return -857617219 /* GXTEntry: "Animal Cruelty" */;
		case 7:
			return 1780145725 /* GXTEntry: "Bank Robbery" */;
		case 8:
			return -1521715232 /* GXTEntry: "Trespassing" */;
		case 9:
			return -1560342203 /* GXTEntry: "Cheating" */;
		case 10:
			return 1343354387 /* GXTEntry: "Disturbing the Peace" */;
		case 11:
			return 1052408375 /* GXTEntry: "Disturbing the Peace" */;
		case 12:
			return -1759599185 /* GXTEntry: "Grave Robbery" */;
		case 13:
			return joaat("crime_hassle");
		case 14:
			return -16106300 /* GXTEntry: "Unarmed Assault" */;
		case 15:
			return 105387183 /* GXTEntry: "Unarmed Assault" */;
		case 16:
			return -2095449173 /* GXTEntry: "Intimidation" */;
		case 17:
			return -2097683294 /* GXTEntry: "Horse Theft" */;
		case 18:
			return 1805131596 /* GXTEntry: "Vehicle Theft" */;
		case 19:
			return 314693001 /* GXTEntry: "Jail Break" */;
		case 20:
			return -1728509733 /* GXTEntry: "Kidnapping" */;
		case 21:
			return -42817558 /* GXTEntry: "Kidnapping" */;
		case 22:
			return 1458462042 /* GXTEntry: "Assault" */;
		case 23:
			return 481893872 /* GXTEntry: "Disturbing the Peace" */;
		case 24:
			return 1714017012 /* GXTEntry: "Disturbing the Peace" */;
		case 25:
			return 1437412331 /* GXTEntry: "Looting" */;
		case 26:
			return -493957506 /* GXTEntry: "Murder" */;
		case 27:
			return 1224055398 /* GXTEntry: "Animal Cruelty" */;
		case 28:
			return -953803399 /* GXTEntry: "Animal Cruelty" */;
		case 29:
			return 2006449383 /* GXTEntry: "Murder" */;
		case 30:
			return -1788230330 /* GXTEntry: "Animal Cruelty" */;
		case 31:
			return 1396375613 /* GXTEntry: "Vandalism" */;
		case 32:
			return joaat("crime_resist_arrest");
		case 33:
			return -1547772340 /* GXTEntry: "Robbery" */;
		case 34:
			return -59535775 /* GXTEntry: "Robbery" */;
		case 35:
			return -1701536647 /* GXTEntry: "Theft" */;
		case 36:
			return 1923998736 /* GXTEntry: "Theft" */;
		case 37:
			return -1103472584 /* GXTEntry: "Horse Theft" */;
		case 38:
			return -2051405571 /* GXTEntry: "Rustling" */;
		case 39:
			return 1135209633 /* GXTEntry: "Vehicle Theft" */;
		case 40:
			return -1810065318 /* GXTEntry: "Disturbing the Peace" */;
		case 41:
			return 2140177766;
		case 42:
			return 1685924442 /* GXTEntry: "Train Robbery" */;
		case 43:
			return 1171995096 /* GXTEntry: "Murder" */;
		case 44:
			return -267442581 /* GXTEntry: "Murder" */;
		case 45:
			return -1361146315 /* GXTEntry: "Trespassing" */;
		case 46:
			return 1352191066 /* GXTEntry: "Unarmed Assault" */;
		case 47:
			return -2130852007 /* GXTEntry: "Vandalism" */;
		case 48:
			return -102241052 /* GXTEntry: "Vandalism" */;
		case 49:
			return 1420320220 /* GXTEntry: "Vandalism" */;
		case 50:
			return -1715130379 /* GXTEntry: "Felony" */;
		case 51:
			return -661550833 /* GXTEntry: "Misdemeanor" */;
		case 52:
			return -1358475411 /* GXTEntry: "Accomplice" */;
		case 53:
			return -1848598303;
		case 54:
			return -173287735 /* GXTEntry: "Murder" */;
		case 55:
			return -715363719 /* GXTEntry: "Animal Cruelty" */;
		case 56:
			return -1117123933 /* GXTEntry: "Disturbing the Peace" */;
		case 57:
			return 1972833301 /* GXTEntry: "Murder" */;
		case 58:
			return 0;
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

void func_207(char[12] cParam0)
{
	Global_1938085->f_75.f_67 = { cParam0 };
}

void func_208()
{
	StringCopy(&(Global_1938085->f_75.f_67), "", 24);
}

bool func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_255(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_256(iVar1))
	{
		if (Global_1070356->f_17915.f_24 && !func_257(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(&(Global_1070356->f_17915[iVar1]), iVar2) || MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2));
	}
	return MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2);
}

int func_210(struct<2> Param0)
{
	int iVar0;

	if (!func_38(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_39(*(Global_1900718->f_1[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_211(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900718->f_66 == 0)
	{
		return 0;
	}
	if (Global_1900718->f_66 == 1)
	{
		Global_1900718->f_66 = 0;
		func_69(Global_1900718->f_1[0 /*2*/]);
		return 1;
	}
	func_69(Global_1900718->f_1[iParam0 /*2*/]);
	Global_1900718->f_66 = (Global_1900718->f_66 - 1);
	func_258(iParam0, Global_1900718->f_66);
	return 1;
}

int func_212(struct<2> Param0, var uParam2)
{
	if (!func_38(Param0))
	{
		return 0;
	}
	func_259(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634[Param0.f_1 /*3*/], 3);
			return 1;
		case 3:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_602[Param0.f_1 /*3*/], 3);
			return 1;
		case 4:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_2104[Param0.f_1 /*3*/], 3);
			return 1;
		case 5:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_12606[Param0.f_1 /*3*/], 3);
			return 1;
		case 6:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_12908[Param0.f_1 /*3*/], 3);
			return 1;
		case 7:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_15910[Param0.f_1 /*3*/], 3);
			return 1;
		case 8:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_15981[Param0.f_1 /*3*/], 3);
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_213(struct<2> Param0)
{
	return func_126(Param0) == 0;
}

int func_214(struct<2> Param0)
{
	int iVar0;

	if (&Global_1900788 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900788 - 1))
	{
		if (func_39(*((*Global_1900789)[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_215(struct<2> Param0, bool bParam2)
{
	if (!func_38(Param0))
	{
		return;
	}
	if (!func_213(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_260(Param0);
	}
	func_130(Param0, 1);
	bParam2 = bParam2;
}

void func_216(struct<2> Param0)
{
	struct<32> Var0;

	if (func_127(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_127(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_127(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_220(Param0, &Var0))
		{
			if (Var0.f_29 == -681494152)
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, joaat("race"));
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

int func_217(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_210(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900718->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900718->f_66;
	func_261(Param0, iVar0);
	Global_1900718->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900718->f_66)
	{
		return iVar0;
	}
	func_258(iVar0, iParam2);
	return iParam2;
}

bool func_218(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_219(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_38(Param0))
	{
		return 0;
	}
	iVar0 = func_210(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_262(Param0, func_131(0), iParam2))
	{
		func_130(func_131(0), 3);
		func_130(func_131(iVar0), 4);
		return 0;
	}
	func_258(iVar0, 0);
	func_130(func_131(0), 3);
	func_130(func_131(1), 4);
	return 1;
}

int func_220(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_212(Param0, &vVar0);
	if (func_263(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

Vector3 func_221(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_222(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_223(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

var func_224(int iParam0)
{
	return (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_1;
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1881122909:
			return 1;
		case 1746254613:
			return 2;
		case -210940392:
			return 3;
		case -337883659:
			return 4;
		case -2127851115:
			return 6;
		case -1515832348:
			return 7;
		case -392050235:
			return 5;
		case -16753530:
			return 11;
		case -1210919694:
			return 8;
		case -1628357986:
			return 9;
		case -1054322328:
			return 10;
		case -1488065830:
			return 12;
		case 1903114091:
			return 13;
		case 1623440542:
			return 14;
		case -726533106:
			return 15;
		default:
			break;
	}
	return 0;
}

void func_226(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1051202->f_79.f_101 >= 10)
	{
		return;
	}
	iVar0 = func_264(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return;
	}
	StringCopy(Global_1051202->f_79[Global_1051202->f_79.f_101 /*10*/], "HashOnlyScript", 64);
	(Global_1051202->f_79[Global_1051202->f_79.f_101 /*10*/])->f_8 = iParam0;
	(Global_1051202->f_79[Global_1051202->f_79.f_101 /*10*/])->f_9 = iParam1;
	Global_1051202->f_79.f_101++;
	Global_1051202->f_44.f_1 = 1;
}

int func_227(int iParam0)
{
	if (!VOLUME::_0xA4A4359320345B34(iParam0))
	{
		return 1;
	}
	if (VOLUME::_0xB33A604345F58202(iParam0) == 4)
	{
		return 1;
	}
	return 0;
}

var func_228(int iParam0)
{
	return (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_3;
}

void func_229(int iParam0, int iParam1)
{
	if (func_151(iParam0, iParam1) != 0)
	{
		if (func_227(func_151(iParam0, iParam1)))
		{
			func_160(iParam0, iParam1);
			func_90(iParam0, iParam1);
		}
	}
}

int func_230(int iParam0)
{
	int iVar0;

	if (!VOLUME::_0xA4A4359320345B34(iParam0))
	{
		return 0;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(iParam0);
	if (iVar0 == 3)
	{
		return 1;
	}
	return 0;
}

void func_231(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam2))
	{
		((*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/])->f_2 = 0;
		return;
	}
	((*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/])->f_2 = iParam2;
}

bool func_232(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return func_7(iParam0, iParam2, func_195(iParam1, iParam3));
}

int func_233(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_232(iParam0, iParam1, iParam2, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

Vector3 func_234(int iParam0)
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

int func_235()
{
	return Global_1051202->f_12;
}

char* func_236()
{
	return "unnamed";
}

int func_237(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

int func_238(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_265(35, iParam0);
}

int func_239(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1275573->f_22[iParam0])
	{
		return ((*Global_1097610)[iParam0 /*51*/])->f_1;
	}
	return 26;
}

bool func_240(int iParam0)
{
	if (func_266(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_267(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

void func_241(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_268(uParam0, 1);
	func_269(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_242(var uParam0, int iParam1)
{
	return (iParam1 >= 0 && iParam1 < uParam0->f_2);
}

int func_243(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39)
{
	int iVar0;
	int iVar1;

	if (Param0.f_1 != -1)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1186267->f_28)
	{
		iVar1 = ((Global_1186267->f_28.f_1 + iVar0) % 5);
		if ((Global_1186267->f_28.f_2[iVar1 /*40*/])->f_2 != Param0.f_2)
		{
		}
		else if ((Global_1186267->f_28.f_2[iVar1 /*40*/])->f_4 != Param0.f_4)
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_244(var uParam0)
{
	if (func_38(*uParam0))
	{
		return 1;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return 1;
		}
		if (uParam0->f_4 != -1)
		{
			return 1;
		}
		if (uParam0->f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_245(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_178(iParam1);
	iVar1 = ((&Global_1186267->f_3[iParam1] + iVar0) - 1);
	if (&Global_1186267->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_179(iParam1)) - 1);
	}
	bVar2 = func_38(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_39((Global_1186267->f_231[iVar6 /*15*/])->f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if ((Global_1186267->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1186267->f_231[iVar6 /*15*/])->f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if ((Global_1186267->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1186267->f_231[iVar6 /*15*/])->f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if ((Global_1186267->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1186267->f_231[iVar6 /*15*/])->f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

void func_246(struct<15> Param0, struct<17> Param15, int iParam32, int iParam33)
{
	*(Global_1186267->f_231[iParam33 /*15*/]) = { Param0 };
	Global_1186267->f_231[iParam33 /*15*/] = iParam32;
	*(Global_1186267->f_231.f_1066[iParam33 /*17*/]) = { Param15 };
	if (iParam32 != Param0.f_5.f_9)
	{
		Global_1186267->f_18[iParam32] = &Global_1186267->f_18[iParam32] + 1;
	}
	if (func_169(iParam33))
	{
		Global_1186267->f_23[iParam32] = &Global_1186267->f_23[iParam32] + 1;
	}
	Global_1186267->f_8[iParam32] = &Global_1186267->f_8[iParam32] + 1;
	Global_1186267->f_13[Param0.f_5.f_9] = &Global_1186267->f_13[Param0.f_5.f_9] + 1;
	if (func_43(iParam33, 1))
	{
		func_248(iParam33);
	}
}

void func_247(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_16(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1186267->f_2505.f_499)
	{
		if (&Global_1186267->f_2505.f_427[iVar0] == iParam0)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == -1)
	{
		return;
	}
	if (Global_1186267->f_2505.f_499 == 1)
	{
		Global_1186267->f_2505.f_499 = 0;
		return;
	}
	iVar0 = iVar1;
	while (iVar0 <= (Global_1186267->f_2505.f_499 - 2))
	{
		Global_1186267->f_2505.f_427[iVar0] = &Global_1186267->f_2505.f_427[iVar0 + 1];
		iVar0++;
	}
	Global_1186267->f_2505.f_499 = (Global_1186267->f_2505.f_499 - 1);
}

int func_248(int iParam0)
{
	int iVar0;

	if (Global_1186267->f_2505.f_499 >= 71)
	{
		return 0;
	}
	if (!func_16(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1186267->f_2505.f_499)
	{
		if (&Global_1186267->f_2505.f_427[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	Global_1186267->f_2505.f_427[Global_1186267->f_2505.f_499] = iParam0;
	Global_1186267->f_2505.f_499++;
	return 1;
}

int func_249(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_212(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_250(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_270(&Var1, uParam0))
	{
		iVar0 = ((func_271() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_251(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_252(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -260420884:
		case -232478158:
		case 78055447:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return 1;
		case joaat("dynamic"):
			return iParam1;
		default:
			break;
	}
	return 0;
}

int func_253(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1070356->f_17817)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1070356->f_17817.f_1[iVar0 /*3*/]) = { *(Global_1070356->f_17817.f_1[iVar0 + 1 /*3*/]) };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1070356->f_17817 < 32)
	{
		*(Global_1070356->f_17817.f_1[Global_1070356->f_17817 /*3*/]) = { vVar1 };
	}
	Global_1070356->f_17817 = (Global_1070356->f_17817 - 1);
	if (Global_1070356->f_17817 < 0)
	{
		Global_1070356->f_17817 = 0;
	}
	return 1;
}

int func_254(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = (Global_1070356->f_17817 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1070356->f_17817.f_1[iVar0 + 1 /*3*/]) = { *(Global_1070356->f_17817.f_1[iVar0 /*3*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1070356->f_17817.f_1[iParam0 /*3*/]) = { vVar1 };
	Global_1070356->f_17817++;
	if (Global_1070356->f_17817 > 32)
	{
		Global_1070356->f_17817 = 32;
	}
	return 1;
}

int func_255(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 522;
		case -2141419899:
			return 405;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 471;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 395;
		case -2058120606:
			return 194;
		case -2056579774:
			return 465;
		case -2043909922:
			return 339;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 388;
		case -1943021821:
			return 336;
		case -1939389836:
			return 417;
		case -1932919229:
			return 429;
		case -1925798111:
			return 41;
		case -1914141706:
			return 440;
		case -1906892166:
			return 404;
		case -1882707460:
			return 464;
		case -1861414976:
			return 381;
		case -1852605133:
			return 10;
		case -1848799275:
			return 410;
		case -1847672446:
			return 312;
		case -1842033327:
			return 505;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 447;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 412;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 399;
		case -1749433374:
			return 480;
		case -1749043433:
			return 525;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 520;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 422;
		case -1700452710:
			return 317;
		case -1684974589:
			return 467;
		case -1674179981:
			return 53;
		case -1673998598:
			return 528;
		case -1666278201:
			return 33;
		case -1664435783:
			return 487;
		case -1624627591:
			return 439;
		case -1612662716:
			return 198;
		case -1610966108:
			return 355;
		case -1608141409:
			return 539;
		case -1585840296:
			return 337;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 435;
		case -1573753524:
			return 504;
		case -1558439474:
			return 286;
		case -1556041029:
			return 411;
		case -1547280108:
			return 519;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 524;
		case -1462313959:
			return 463;
		case -1455998786:
			return 371;
		case -1447311849:
			return 321;
		case -1445041595:
			return 529;
		case -1442844448:
			return 466;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 473;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 479;
		case -1387772214:
			return 408;
		case -1378911044:
			return 476;
		case -1369678628:
			return 488;
		case -1344601768:
			return 348;
		case -1341750998:
			return 477;
		case -1340339190:
			return 363;
		case -1339871203:
			return 533;
		case -1329135070:
			return 138;
		case -1319875891:
			return 438;
		case -1311865656:
			return 37;
		case -1296807958:
			return 353;
		case -1290997627:
			return 462;
		case -1287894233:
			return 427;
		case -1283202000:
			return 354;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 424;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 366;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 401;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 392;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 340;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 444;
		case -1095341658:
			return 409;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 383;
		case -1029225159:
			return 104;
		case -1023919011:
			return 432;
		case -1014145132:
			return 273;
		case -1004266677:
			return 461;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 400;
		case -941648233:
			return 512;
		case -939420910:
			return 44;
		case -931337253:
			return 425;
		case -925071604:
			return 542;
		case -919512195:
			return 40;
		case -911126844:
			return 369;
		case -897750037:
			return 367;
		case -895307590:
			return 501;
		case -895073533:
			return 394;
		case -889906510:
			return 390;
		case -888632790:
			return 506;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 433;
		case -851626677:
			return 372;
		case -839820438:
			return 420;
		case -828139293:
			return 246;
		case -812641169:
			return 535;
		case -811637947:
			return 232;
		case -800891377:
			return 494;
		case -797689456:
			return 515;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 373;
		case -729679654:
			return 531;
		case -699277634:
			return 4;
		case -693828600:
			return 356;
		case -683458244:
			return 78;
		case -677920206:
			return 459;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 513;
		case -632127260:
			return 343;
		case -630295963:
			return 495;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 472;
		case -591815673:
			return 384;
		case -583127403:
			return 507;
		case -574190021:
			return 493;
		case -554519756:
			return 536;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 380;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 338;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 516;
		case -492731190:
			return 419;
		case -491981251:
			return 184;
		case -489737721:
			return 402;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 350;
		case -448554447:
			return 532;
		case -441204543:
			return 534;
		case -434590080:
			return 212;
		case -414883443:
			return 460;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 374;
		case -389056691:
			return 257;
		case -381925743:
			return 508;
		case -371827125:
			return 389;
		case -364475655:
			return 430;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 370;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 492;
		case -311373772:
			return 540;
		case -306246697:
			return 311;
			return 319;
			return 434;
			return 346;
			return 253;
			return 30;
			return 231;
			return 130;
			return 418;
			return 119;
			return 258;
			return 523;
			return 201;
			return 137;
			return 517;
			return 345;
			return 483;
			return 147;
			return 175;
			return 294;
			return 95;
			return 11;
			return 431;
			return 351;
			return 28;
			return 403;
			return 499;
			return 165;
			return 491;
			return 423;
			return 143;
			return 152;
			return 309;
			return 509;
			return 244;
			return 441;
			return 453;
			return 87;
			return 358;
			return 468;
			return 24;
			return 275;
			return 127;
			return 0;
			return 1;
			return 151;
			return 282;
			return 406;
			return 323;
			return 224;
			return 72;
			return 230;
			return 74;
			return 541;
			return 391;
			return 331;
			return 454;
			return 396;
			return 276;
			return 99;
			return 112;
			return 530;
			return 84;
			return 181;
			return 268;
			return 16;
			return 14;
			return 228;
			return 60;
			return 490;
			return 140;
			return 180;
			return 327;
			return 271;
			return 518;
			return 162;
			return 52;
			return 79;
			return 93;
			return 117;
			return 260;
			return 136;
			return 322;
			return 195;
			return 131;
			return 510;
			return 64;
			return 272;
			return 47;
			return 266;
			return 186;
			return 88;
			return 485;
			return 34;
			return 171;
			return 278;
			return 17;
			return 288;
			return 42;
			return 545;
			return 15;
			return 196;
			return 106;
			return 31;
			return 287;
			return 214;
			return 316;
			return 342;
			return 218;
			return 2;
			return 219;
			return 146;
			return 290;
			return 378;
			return 233;
			return 264;
			return 393;
			return 157;
			return 113;
			return 238;
			return 456;
			return 448;
			return 359;
			return 177;
			return 341;
			return 75;
			return 376;
			return 126;
			return 470;
			return 482;
			return 279;
			return 297;
			return 281;
			return 500;
			return 132;
			return 204;
			return 176;
			return 484;
			return 250;
			return 475;
			return 382;
			return 48;
			return 107;
			return 362;
			return 18;
			return 455;
			return 469;
			return 503;
			return 227;
			return 474;
			return 407;
			return 451;
			return 537;
			return 270;
			return 385;
			return 315;
			return 379;
			return 375;
			return 511;
			return 368;
			return 211;
			return 283;
			return 416;
			return 234;
			return 344;
			return 19;
			return 295;
			return 443;
			return 7;
			return 120;
			return 446;
			return 502;
			return 269;
			return 108;
			return 142;
			return 538;
			return 486;
			return 27;
			return 242;
			return 452;
			return 514;
			return 361;
			return 133;
			return 156;
			return 330;
			return 292;
			return 38;
			return 217;
			return 182;
			return 543;
			return 259;
			return 83;
			return 167;
			return 158;
			return 310;
			return 481;
			return 347;
			return 415;
			return 245;
			return 449;
			return 442;
			return 387;
			return 349;
			return 199;
			return 357;
			return 421;
			return 526;
			return 20;
			return 73;
			return 256;
			return 249;
			return 80;
			return 497;
			return 210;
			return 207;
			return 209;
			return 414;
			return 164;
			return 208;
			return 123;
			return 118;
			return 303;
			return 450;
			return 50;
			return 100;
			return 280;
			return 318;
			return 426;
			return 5;
			return 70;
			return 35;
			return 166;
			return 203;
			return 436;
			return 458;
			return 265;
			return 325;
			return 161;
			return 386;
			return 332;
			return 289;
			return 301;
			return 521;
			return 9;
			return 105;
			return 116;
			return 125;
			return 179;
			return 148;
			return 91;
			return 527;
			return 66;
			return 352;
			return 365;
			return 43;
			return 329;
			return 135;
			return 213;
			return 377;
			return 92;
			return 544;
			return 299;
			return 445;
			return 398;
			return 197;
			return 97;
			return 193;
			return 413;
			return 68;
			return 364;
			return 51;
			return 437;
			return 335;
			return 94;
			return 360;
			return 159;
			return 216;
			return 200;
			return 307;
			return 89;
			return 178;
			return 489;
			return 6;
			return 187;
			return 190;
			return 305;
			return 293;
			return 61;
			return 498;
			return 284;
			return 428;
			return 478;
			return 291;
			return 457;
			return 267;
			return 39;
			return 397;
			return 189;
			return 324;
			return 496;
			return 241;
			return 85;
			if (iParam1 >= 1)
			{
			}
			return -1;
			if (iParam1 >= 1)
			{
			}
			return -1;
		}

int func_256(int iParam0)
{
	int iVar0;

	iVar0 = func_272(iParam0);
	if (iVar0 < 337)
	{
		return 0;
	}
	return 1;
}

int func_257(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return 1;
	}
	return 0;
}

void func_258(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_273((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_273(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_38(*(Global_1900718->f_1[0 /*2*/])))
	{
		func_130(*(Global_1900718->f_1[0 /*2*/]), 3);
	}
}

void func_259(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

void func_260(struct<2> Param0)
{
	if (func_127(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_127(Param0)))
	{
		STATS::_0x99230691875FC218(func_137(Param0), func_127(Param0), Global_35);
	}
}

void func_261(struct<2> Param0, int iParam2)
{
	if (!func_38(Param0))
	{
		func_69(Global_1900718->f_1[iParam2 /*2*/]);
	}
	else
	{
		*(Global_1900718->f_1[iParam2 /*2*/]) = { Param0 };
	}
	func_274(Param0, 0, 1, -1);
}

int func_262(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_38(Param0))
	{
		return 0;
	}
	if (!func_38(Param2))
	{
		return 1;
	}
	iVar0 = func_137(Param0);
	iVar1 = func_137(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return 1;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return 1;
	}
	if (iVar1 == 6)
	{
		return 0;
	}
	if (iVar0 == 6)
	{
		return 1;
	}
	if (iVar1 == 5)
	{
		return 0;
	}
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == 3)
	{
		return 1;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_263(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_275(iParam0))
	{
		return 0;
	}
	if (func_276(iParam0, uParam1, &uVar0))
	{
		func_277(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_264(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1051202->f_79.f_101 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1051202->f_79.f_101 - 1))
	{
		if ((Global_1051202->f_79[iVar0 /*10*/])->f_8 == iParam0 && (Global_1051202->f_79[iVar0 /*10*/])->f_9 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_265(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_278(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_279())
	{
		return func_278(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_278(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_266(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_267(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1275573->f_22[iVar0])
	{
		func_280(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_281(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

void func_268(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_269(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_270(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_271()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1234391->f_8113;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_272(int iParam0)
{
	return func_282(iParam0) + 30;
}

void func_273(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *(Global_1900718->f_1[iParam0 /*2*/]) };
	*(Global_1900718->f_1[iParam0 /*2*/]) = { *(Global_1900718->f_1[iParam1 /*2*/]) };
	*(Global_1900718->f_1[iParam1 /*2*/]) = { Var0 };
}

int func_274(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_283(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_139(Param0);
	Var0.f_3 = iParam3;
	func_284(&Var0, bParam2, iParam4);
	return 1;
}

int func_275(int iParam0)
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
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_276(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_285(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_277(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_286(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_287(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_288(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_289(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_290(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_291(iVar0);
	uParam1->f_2 = 1060782978;
	DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
}

bool func_278(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_279()
{
	return Global_1099294->f_339;
}

void func_280(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_281(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_281(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_282(int iParam0)
{
	return iParam0 * 31;
}

int func_283(struct<2> Param0)
{
	int iVar0;

	if (Global_1184439->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1184439->f_129)
	{
		if (func_39(((*Global_1184439)[iVar0 /*4*/])->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_284(var uParam0, bool bParam1, int iParam2)
{
	func_292(uParam0, iParam2);
	if (Global_1184439->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_293(func_283(uParam0->f_1));
	}
	else
	{
		func_294();
	}
}

int func_285(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("challenge");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = joaat("gold");
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = joaat("property");
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = joaat("title");
			break;
		case 12:
			iVar0 = joaat("shop");
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_286(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_295(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case -66250361:
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case -1261475678:
			return 10;
		case -621956193:
			return 11;
		case 1081776803:
			return 12;
		case -218697175:
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case 1724417419:
			return 16;
		case -728200180:
			return 17;
		case 1404415665:
			return 18;
		case 339077182:
			return 20;
		case 650120418:
			return 21;
		case 1695693301:
			return 28;
		case -1809176396:
			return 19;
		case 349772825:
			return 22;
		case 1657045547:
			return 23;
		case -590482787:
			return 24;
		case -1711308722:
			return 25;
		case -409129282:
			return 26;
		case -1790985606:
			return 27;
		default:
			break;
	}
	return -1;
}

int func_288(int iParam0)
{
	switch (iParam0)
	{
		case -747096482:
			return 0;
		case 390152599:
			return 1;
		case 348001928:
			return 2;
		case 687137831:
			return 3;
		case 1221273613:
			return 4;
		case -669486032:
			return 5;
		case -1044132584:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_289(int iParam0)
{
	switch (iParam0)
	{
		case 1697883736:
			return 0;
		case 1927192818:
			return 1;
		case -1363591469:
			return 2;
		case 1635448909:
			return 3;
		case -604494871:
			return 4;
		case -993281498:
			return 5;
		case -1871525158:
			return 6;
		case -596286663:
			return 12;
		case 923956646:
			return 13;
		case 1459450644:
			return 14;
		case -2071675432:
			return 15;
		case -552339597:
			return 7;
		case 2144670272:
			return 9;
		case 996459079:
			return 8;
		case 1996177174:
			return 10;
		case -1702168032:
			return 11;
		default:
			break;
	}
	return -1;
}

int func_290(int iParam0)
{
	switch (iParam0)
	{
		case 2049341823:
			return 0;
		case 1655635003:
			return 1;
		case -435635781:
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case -568832219:
			return 8;
		case -1103026985:
			return 9;
		default:
			break;
	}
	return 0;
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case joaat("null"):
			return -1;
		case joaat("normal"):
			return 0;
		case -640677282:
			return 1;
		case -1950303839:
			return 2;
		case 1322114923:
			return 3;
		case -525004462:
			return 4;
		case 1419735597:
			return 5;
		case 1004744465:
			return 6;
		case joaat("bountyhunter"):
			return 7;
		case 1777227915:
			return 8;
		case 408825843:
			return 9;
		case joaat("hunter"):
			return 10;
		case 64621749:
			return 11;
		case -1346830927:
			return 12;
		case -218234180:
			return 13;
		case 751663875:
			return 14;
		case 1766283257:
			return 15;
		case -269943670:
			return 16;
		case 522313648:
			return 17;
		default:
			break;
	}
	return -1;
}

void func_292(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (Global_1184439->f_129 >= 32)
	{
		Global_1184439->f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1184439->f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		*((*Global_1184439)[Global_1184439->f_129 /*4*/]) = { *uParam0 };
		Global_1184439->f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1184439->f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { *((*Global_1184439)[iVar1 /*4*/]) };
		*((*Global_1184439)[iVar1 /*4*/]) = { *((*Global_1184439)[iVar1 + 1 /*4*/]) };
		*((*Global_1184439)[iVar1 + 1 /*4*/]) = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	*((*Global_1184439)[iParam1 /*4*/]) = { *uParam0 };
	Global_1184439->f_129++;
}

void func_293(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1184439->f_129)
	{
		return;
	}
	Global_1184439->f_130 = iParam0;
	Global_1184439->f_131 = Global_1184439[iParam0 /*4*/];
}

void func_294()
{
	if (Global_1184439->f_131 == 0)
	{
		return;
	}
	Global_1184439->f_130 = func_296(Global_1184439->f_131);
	if (Global_1184439->f_130 < 0)
	{
		Global_1184439->f_131 = 0;
	}
}

int func_295(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_297(iParam0, uParam1, &uVar0))
	{
		func_298(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_296(int iParam0)
{
	int iVar0;

	if (Global_1184439->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1184439->f_129)
	{
		if (Global_1184439[iVar0 /*4*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_297(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_285(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_298(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_3), uParam0);
}

