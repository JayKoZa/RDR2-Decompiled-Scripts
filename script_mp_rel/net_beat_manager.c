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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	func_1();
	while (!func_2())
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4();
	func_5();
}

void func_1()
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	func_6(32, -1);
	func_7();
	if (func_8())
	{
		func_5();
	}
	func_9();
	func_10(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

int func_2()
{
	if (func_11(0, 0))
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	if (!func_12())
	{
		return;
	}
	if ((func_13() || Global_1048585) // PointerArith)
	{
		return;
	}
	if (func_14())
	{
		func_15();
	}
	else
	{
		Global_1245803->f_2004 = 1;
		Global_1245803->f_2005 = 0;
	}
	func_16();
}

void func_4()
{
}

void func_5()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_7()
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
			func_5();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_5();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_5();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_5();
		}
		if (func_17() == 0)
		{
			if (func_18())
			{
				func_5();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	return 1;
}

int func_8()
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

void func_9()
{
	func_19();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1242505, 1505, 45);
	func_20(NETWORK::_0xBA24095EA96DFE17(Global_1242505), 1505, "g_mpBeatManagerHostData");
	func_21();
	func_22();
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1244010, 1793, 46);
	func_23(NETWORK::_0x690806BC83BC8CA2((*Global_1244010)[0 /*56*/]), 1793, "g_mpBeatManagerPlayerData");
	if (!func_24())
	{
		func_25();
	}
}

void func_10(bool bParam0)
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
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
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
			func_5();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

int func_11(bool bParam0, bool bParam1)
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

int func_12()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

int func_13()
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
	if (!func_26(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_14()
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(&(Global_1051202->f_16[15]), false))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_beat_manager", -1, true, 0))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::_0xB4A25351D79B444C(&(Global_1051202->f_16[15]));
}

void func_15()
{
	switch (Global_1245803->f_2004)
	{
		case 0:
			func_27();
			break;
		case 1:
			func_28();
			break;
		case 2:
			func_29();
			break;
		case 3:
			func_30();
			break;
	}
}

void func_16()
{
	switch (Global_1245803->f_2001)
	{
		case 0:
			func_31();
			break;
		case 1:
			func_32();
			break;
		case 2:
			func_33();
			break;
		case 3:
			func_34();
			break;
	}
}

int func_17()
{
	return Global_1572887->f_13;
}

bool func_18()
{
	return Global_1051202->f_8;
}

void func_19()
{
	func_35();
	func_36();
}

int func_20(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_21()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_37(iVar0);
		iVar0++;
	}
}

void func_22()
{
	int iVar0;

	iVar0 = 1;
	while (iVar0 <= 15)
	{
		((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_36[iVar0] = func_38(iVar0);
		iVar0++;
	}
}

int func_23(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_24()
{
	return !Global_1572887->f_9;
}

void func_25()
{
	struct<2102> Var0;

	Var0 = 500;
	Var0.f_2006 = 32;
	Var0.f_2039 = 32;
	Var0.f_2073 = 24;
	Var0.f_2101 = -1;
	MISC::_COPY_MEMORY(Global_1245803, &Var0, 2103);
	Global_1245803->f_2001 = 0;
	func_39();
}

int func_26(struct<2> Param0)
{
	if (!func_40(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_41(Param0))
	{
		return 0;
	}
	return 1;
}

void func_27()
{
	if (Global_1245803->f_2001 > 0)
	{
		func_42(1);
	}
}

void func_28()
{
	if (func_43())
	{
		func_44();
		func_45();
		Global_1245803->f_2005 = 0;
		func_46();
		func_47(2, 0);
		func_42(2);
	}
}

void func_29()
{
	struct<12> Var0;
	int iVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	var uVar21;
	int iVar22;
	int iVar23;
	var uVar24;

	Var0.f_10 = 1106247680;
	if (!func_48(2))
	{
		func_49(0, Global_1245803->f_2005);
		func_50(2, 0);
	}
	if (!func_51())
	{
		return;
	}
	if (!func_52(&iVar17, &uVar18, &iVar19, &iVar20))
	{
		func_42(1);
		return;
	}
	func_53(&Var0, iVar17, iVar19, -1, 255);
	if (func_54(Var0.f_11, 1084227584 /* Float: 5f */, 70f))
	{
		func_42(1);
		return;
	}
	if (Var0.f_6 == 2)
	{
		uVar21 = func_55(iVar17);
		func_56(uVar21, iVar19, 32);
	}
	else if (Var0.f_6 == 1)
	{
		iVar22 = PLAYER::INT_TO_PLAYERINDEX(iVar20);
		iVar23 = func_57(iVar17, iVar19, &Var0, iVar22);
		uVar24 = func_58(iVar17, iVar19, iVar23);
		func_59(iVar17, iVar19, iVar23, uVar24, iVar22);
	}
	func_42(3);
}

void func_30()
{
	if (!func_60(Global_1242505->f_1501.f_3))
	{
		func_61(&(Global_1242505->f_1501.f_3));
		return;
	}
	if (func_62(Global_1242505->f_1501.f_3) >= Global_1901929->f_230.f_61)
	{
		func_63(&(Global_1242505->f_1501.f_3));
		func_42(1);
	}
}

void func_31()
{
	if (Global_1234391->f_8111 != 2)
	{
		return;
	}
	func_64();
	func_65(1);
}

void func_32()
{
	if (Global_1234391->f_8111 != 2)
	{
		return;
	}
	if (Global_1245803->f_2002 == 0)
	{
		Global_1245803->f_2002 = func_66();
	}
	func_67(1);
	func_65(2);
}

void func_33()
{
	bool bVar0;

	if (func_60(Global_1242505->f_1501.f_3))
	{
		func_68(1, 0);
		func_65(3);
		return;
	}
	if (func_60(Global_1245803->f_2003))
	{
		if (func_62(Global_1245803->f_2003) < Global_1901929->f_230.f_53)
		{
			func_67(1);
			func_68(1, 1);
			return;
		}
		else
		{
			func_63(&(Global_1245803->f_2003));
		}
	}
	if (func_69(&bVar0))
	{
		if (!bVar0)
		{
			func_70(1, 0);
		}
		else
		{
			func_68(1, 0);
		}
	}
}

void func_34()
{
	if (!func_60(Global_1242505->f_1501.f_3))
	{
		func_65(1);
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_42(1);
		}
	}
	else
	{
		func_42(3);
	}
}

void func_35()
{
	vector3 vVar0;
	int iVar3;

	vVar0.f_2 = -15;
	iVar3 = 0;
	while (iVar3 <= 499)
	{
		*((*Global_1242505)[iVar3 /*3*/]) = { vVar0 };
		iVar3++;
	}
}

void func_36()
{
	struct<4> Var0;

	Global_1242505->f_1501 = { Var0 };
}

void func_37(int iParam0)
{
	struct<56> Var0;

	Var0 = 17;
	Var0.f_18 = 17;
	Var0.f_36 = 16;
	Var0.f_53 = -1;
	*((*Global_1244010)[iParam0 /*56*/]) = { Var0 };
}

int func_38(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { func_71(iParam0, 1346578557) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

void func_39()
{
	struct<4> Var0;
	int iVar4;

	iVar4 = 0;
	while (iVar4 <= 499)
	{
		*((*Global_1245803)[iVar4 /*4*/]) = { Var0 };
		iVar4++;
	}
}

int func_40(int iParam0)
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

int func_41(int iParam0)
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

void func_42(int iParam0)
{
	if (Global_1245803->f_2004 != iParam0)
	{
		Global_1245803->f_2004 = iParam0;
	}
}

bool func_43()
{
	return func_72(1);
}

void func_44()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1245803->f_2006[iVar0] != -1)
		{
			Global_1245803->f_2006[iVar0] = -1;
			Global_1245803->f_2039[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_45()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1245803->f_2002 - 1))
	{
		if (((*Global_1242505)[iVar0 /*3*/])->f_1 != 0)
		{
			((*Global_1242505)[iVar0 /*3*/])->f_1 = 0;
		}
		iVar0++;
	}
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar1 = ((*Global_1244010)[iVar0 /*56*/])->f_53;
			if (!func_73(iVar1))
			{
				Global_1245803->f_2006[iVar2] = iVar1;
				Global_1245803->f_2039[iVar2] = ((*Global_1244010)[iVar0 /*56*/])->f_54;
				iVar2++;
			}
		}
		iVar0++;
	}
}

void func_47(int iParam0, bool bParam1)
{
	if (func_48(iParam0))
	{
		if (bParam1)
		{
		}
		func_74(&(Global_1242505->f_1501.f_1), iParam0);
	}
}

bool func_48(int iParam0)
{
	return func_75(Global_1242505->f_1501.f_1, iParam0);
}

void func_49(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam0 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam1)))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1245803->f_2006[iVar1] == -1)
		{
		}
		else
		{
			iVar2 = &Global_1245803->f_2006[iVar1];
			if (iVar2 >= 0)
			{
				if (bParam0)
				{
					func_76(&iVar0, iVar2, iParam1);
				}
				else
				{
					func_77(&iVar0, iVar2);
				}
				if (iVar0 != 0)
				{
					Global_1245803->f_2006[iVar1] = -2;
				}
			}
			iVar1++;
		}
	}
}

void func_50(int iParam0, bool bParam1)
{
	if (!func_48(iParam0))
	{
		if (bParam1)
		{
		}
		func_78(&(Global_1242505->f_1501.f_1), iParam0);
	}
}

int func_51()
{
	int iVar0;

	while (iVar0 < 1)
	{
		func_49(1, Global_1245803->f_2005);
		iVar0++;
		Global_1245803->f_2005++;
		if (Global_1245803->f_2005 >= 32)
		{
		}
	else
	{
		}
	}
	if (Global_1245803->f_2005 < 32)
	{
		return 0;
	}
	else
	{
		Global_1245803->f_2005 = 0;
	}
	return 1;
}

int func_52(var uParam0, var uParam1, var uParam2, var uParam3)
{
	float fVar0;
	int iVar1;

	*uParam2 = -1;
	*uParam1 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1245803->f_2006[iVar1] >= 0)
		{
			if (&Global_1245803->f_2039[iVar1] > fVar0)
			{
				*uParam1 = &Global_1245803->f_2006[iVar1];
				fVar0 = &Global_1245803->f_2039[iVar1];
				*uParam3 = iVar1;
			}
		}
		else if (&Global_1245803->f_2006[iVar1] == -1)
		{
		}
		else
		{
			iVar1++;
		}
	}
	if (*uParam1 >= 0 && *uParam1 < (Global_1245803->f_2002 - 1))
	{
		func_79(*uParam1, uParam0, uParam2);
		if (*uParam0 != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_53(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<11> Var0;
	int iVar17;

	Var0.f_10 = 1106247680;
	MISC::_COPY_MEMORY(uParam0, &Var0, 17);
	if (iParam4 == 255)
	{
		iParam4 = PLAYER::PLAYER_ID();
	}
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			uParam0->f_1 = 0;
			uParam0->f_2 = 0;
			break;
		case 1:
			uParam0->f_6 = 1;
			*uParam0 = 10;
			uParam0->f_1 = 4;
			uParam0->f_2 = 7;
			func_80(uParam0, iParam2);
			switch (iParam2)
			{
				case 0:
					uParam0->f_5 = -1808627090;
					uParam0->f_11 = { 2150.374f, 1728.215f, 125.2313f };
					break;
				case 1:
					uParam0->f_5 = -1563711584;
					uParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
					break;
				case 2:
					uParam0->f_5 = -717510681;
					uParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
					break;
				case 3:
					uParam0->f_5 = -2044065371;
					uParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
					break;
				case 4:
					uParam0->f_5 = -1209537248;
					uParam0->f_11 = { -1370.712f, -515.7384f, 125.267f };
					break;
				case 5:
					uParam0->f_5 = 1714342319;
					uParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
					break;
				case 6:
					uParam0->f_5 = 1269971654;
					uParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
					break;
				case 7:
					uParam0->f_5 = 720927063;
					uParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
					break;
				case 8:
					uParam0->f_5 = 1499128142;
					uParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
					break;
				case 9:
					uParam0->f_5 = -1539691586;
					uParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
					break;
			}
			break;
		case 2:
			uParam0->f_6 = 1;
			*uParam0 = 20;
			uParam0->f_1 = 2;
			uParam0->f_2 = 1;
			func_81(uParam0);
			switch (iParam2)
			{
				case 0:
					func_82(uParam0);
					uParam0->f_5 = 277430601;
					uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
					break;
				case 1:
					func_82(uParam0);
					uParam0->f_5 = 1659133778;
					uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
					break;
				case 2:
					func_82(uParam0);
					uParam0->f_5 = 1296650927;
					uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
					break;
				case 3:
					func_82(uParam0);
					uParam0->f_5 = 2115437634;
					uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
					break;
				case 4:
					func_82(uParam0);
					uParam0->f_5 = 1098622970;
					uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
					break;
				case 5:
					func_82(uParam0);
					uParam0->f_5 = 393263596;
					uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
					break;
				case 6:
					func_82(uParam0);
					uParam0->f_5 = 189453630;
					uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
					break;
				case 7:
					func_82(uParam0);
					uParam0->f_5 = -98921343;
					uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
					break;
				case 8:
					func_82(uParam0);
					uParam0->f_5 = 6025033;
					uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
					break;
				case 9:
					func_82(uParam0);
					uParam0->f_5 = -1060299979;
					uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
					break;
				case 10:
					func_82(uParam0);
					uParam0->f_5 = 682088681;
					uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
					break;
				case 11:
					func_82(uParam0);
					uParam0->f_5 = 1705841922;
					uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
					break;
				case 12:
					func_82(uParam0);
					uParam0->f_5 = -301205165;
					uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
					break;
				case 13:
					func_82(uParam0);
					uParam0->f_5 = 1906160715;
					uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
					break;
				case 14:
					func_82(uParam0);
					uParam0->f_5 = -1129906020;
					uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
					break;
				case 15:
					func_82(uParam0);
					uParam0->f_5 = 1592980994;
					uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
					break;
				case 16:
					func_82(uParam0);
					uParam0->f_5 = 686459378;
					uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
					break;
				case 17:
					func_82(uParam0);
					uParam0->f_5 = -259262381;
					uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
					break;
				case 18:
					func_82(uParam0);
					uParam0->f_5 = 1289806844;
					uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
					break;
				case 19:
					func_82(uParam0);
					uParam0->f_5 = 347656238;
					uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
					break;
			}
			break;
		case 3:
			uParam0->f_6 = 1;
			*uParam0 = 21;
			uParam0->f_1 = 8;
			uParam0->f_2 = 1;
			func_81(uParam0);
			switch (iParam2)
			{
				case 0:
					func_83(uParam0, 2);
					func_83(uParam0, 3);
					func_83(uParam0, 5);
					uParam0->f_5 = 1454566440;
					uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
					break;
				case 1:
					func_83(uParam0, 2);
					func_83(uParam0, 3);
					func_83(uParam0, 5);
					uParam0->f_5 = 1141360338;
					uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
					break;
				case 2:
					func_83(uParam0, 0);
					func_83(uParam0, 1);
					func_83(uParam0, 2);
					func_83(uParam0, 3);
					func_83(uParam0, 5);
					uParam0->f_5 = 844768119;
					uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
					break;
				case 3:
					func_83(uParam0, 0);
					func_83(uParam0, 2);
					func_83(uParam0, 3);
					func_83(uParam0, 4);
					func_83(uParam0, 5);
					func_83(uParam0, 7);
					uParam0->f_5 = -1601993562;
					uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
					break;
				case 4:
					func_83(uParam0, 0);
					func_83(uParam0, 2);
					func_83(uParam0, 3);
					func_83(uParam0, 5);
					func_83(uParam0, 7);
					uParam0->f_5 = -901588956;
					uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
					break;
				case 5:
					func_83(uParam0, 0);
					func_83(uParam0, 2);
					func_83(uParam0, 3);
					func_83(uParam0, 5);
					func_83(uParam0, 7);
					uParam0->f_5 = 2129019244;
					uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
					break;
				case 6:
					func_83(uParam0, 0);
					func_83(uParam0, 2);
					func_83(uParam0, 4);
					func_83(uParam0, 5);
					func_83(uParam0, 6);
					uParam0->f_5 = 1227099802;
					uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
					break;
				case 7:
					func_83(uParam0, 0);
					func_83(uParam0, 2);
					func_83(uParam0, 4);
					func_83(uParam0, 5);
					func_83(uParam0, 6);
					uParam0->f_5 = -940471213;
					uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
					break;
				case 8:
					func_83(uParam0, 0);
					func_83(uParam0, 2);
					func_83(uParam0, 4);
					func_83(uParam0, 5);
					func_83(uParam0, 6);
					uParam0->f_5 = -700569364;
					uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
					break;
				case 9:
					func_83(uParam0, 0);
					func_83(uParam0, 1);
					uParam0->f_5 = 412376369;
					uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
					break;
				case 10:
					func_83(uParam0, 0);
					func_83(uParam0, 2);
					func_83(uParam0, 5);
					func_83(uParam0, 7);
					uParam0->f_5 = -364052317;
					uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
					break;
				case 11:
					func_83(uParam0, 0);
					func_83(uParam0, 1);
					uParam0->f_5 = -989186530;
					uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
					break;
				case 12:
					func_83(uParam0, 0);
					func_83(uParam0, 2);
					func_83(uParam0, 3);
					func_83(uParam0, 4);
					func_83(uParam0, 5);
					func_83(uParam0, 6);
					uParam0->f_5 = 333858683;
					uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
					break;
				case 13:
					func_83(uParam0, 0);
					func_83(uParam0, 1);
					uParam0->f_5 = -39511303;
					uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
					break;
				case 14:
					func_83(uParam0, 3);
					func_83(uParam0, 4);
					func_83(uParam0, 5);
					func_83(uParam0, 6);
					uParam0->f_5 = 813662381;
					uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
					break;
				case 15:
					func_83(uParam0, 2);
					func_83(uParam0, 3);
					func_83(uParam0, 5);
					func_83(uParam0, 7);
					uParam0->f_5 = -1114006686;
					uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
					break;
				case 16:
					func_83(uParam0, 0);
					func_83(uParam0, 1);
					func_83(uParam0, 3);
					func_83(uParam0, 5);
					func_83(uParam0, 7);
					uParam0->f_5 = 1049238845;
					uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
					break;
				case 17:
					func_83(uParam0, 0);
					func_83(uParam0, 1);
					func_83(uParam0, 3);
					func_83(uParam0, 5);
					func_83(uParam0, 7);
					uParam0->f_5 = 1363886783;
					uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
					break;
				case 18:
					func_83(uParam0, 0);
					func_83(uParam0, 1);
					func_83(uParam0, 2);
					func_83(uParam0, 3);
					func_83(uParam0, 5);
					uParam0->f_5 = -1215674354;
					uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
					break;
				case 19:
					func_83(uParam0, 0);
					func_83(uParam0, 1);
					uParam0->f_5 = 1902132155;
					uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
					break;
				case 20:
					func_83(uParam0, 0);
					func_83(uParam0, 1);
					func_83(uParam0, 2);
					func_83(uParam0, 3);
					func_83(uParam0, 5);
					uParam0->f_5 = 1661312774;
					uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
					break;
			}
			break;
		case 4:
			uParam0->f_6 = 1;
			*uParam0 = 11;
			uParam0->f_1 = 1;
			uParam0->f_2 = 2;
			func_81(uParam0);
			uParam0->f_15 = -2090512547;
			switch (iParam2)
			{
				case 0:
					func_82(uParam0);
					uParam0->f_5 = 1382777618;
					uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
					break;
				case 1:
					func_82(uParam0);
					uParam0->f_5 = -2000681184;
					uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
					break;
				case 2:
					func_82(uParam0);
					uParam0->f_5 = 886884092;
					uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
					break;
				case 3:
					func_82(uParam0);
					uParam0->f_5 = -1277120723;
					uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
					break;
				case 4:
					func_82(uParam0);
					uParam0->f_5 = 1577436816;
					uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
					break;
				case 5:
					func_82(uParam0);
					uParam0->f_5 = -234749781;
					uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
					break;
				case 6:
					func_82(uParam0);
					uParam0->f_5 = -1607623039;
					uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
					break;
				case 7:
					func_82(uParam0);
					uParam0->f_5 = -1943295936;
					uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
					break;
				case 8:
					func_82(uParam0);
					uParam0->f_5 = -397730168;
					uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
					break;
				case 9:
					func_82(uParam0);
					uParam0->f_5 = -392659534;
					uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
					break;
				case 10:
					func_82(uParam0);
					uParam0->f_5 = 146267878;
					uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
					break;
			}
			break;
		case 12:
			uParam0->f_6 = 1;
			*uParam0 = 15;
			uParam0->f_1 = 3;
			uParam0->f_2 = 1;
			func_81(uParam0);
			switch (iParam2)
			{
				case 0:
					func_82(uParam0);
					uParam0->f_5 = 1247886914;
					uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
					break;
				case 1:
					func_82(uParam0);
					uParam0->f_5 = 1926100410;
					uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
					break;
				case 2:
					func_82(uParam0);
					uParam0->f_5 = 603340011;
					uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
					break;
				case 3:
					func_82(uParam0);
					uParam0->f_5 = -1253915394;
					uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
					break;
				case 4:
					func_82(uParam0);
					uParam0->f_5 = 1281783573;
					uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
					break;
				case 5:
					func_82(uParam0);
					uParam0->f_5 = -1384936716;
					uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
					break;
				case 6:
					func_82(uParam0);
					uParam0->f_5 = 636669604;
					uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
					break;
				case 7:
					func_82(uParam0);
					uParam0->f_5 = 1410575087;
					uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
					break;
				case 8:
					func_82(uParam0);
					uParam0->f_5 = -736919321;
					uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
					break;
				case 9:
					func_82(uParam0);
					uParam0->f_5 = 1755496218;
					uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
					break;
				case 10:
					func_82(uParam0);
					uParam0->f_5 = -1810033095;
					uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
					break;
				case 11:
					func_82(uParam0);
					uParam0->f_5 = 99707271;
					uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
					break;
				case 12:
					func_82(uParam0);
					uParam0->f_5 = 2145033839;
					uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
					break;
				case 13:
					func_82(uParam0);
					uParam0->f_5 = -994111457;
					uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
					break;
				case 14:
					func_82(uParam0);
					uParam0->f_5 = 702836385;
					uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
					break;
			}
			break;
		case 6:
			uParam0->f_6 = 1;
			*uParam0 = 16;
			uParam0->f_1 = 2;
			uParam0->f_2 = 8;
			switch (iParam3)
			{
				case 0:
					func_84(uParam0, 0);
					func_84(uParam0, 1);
					func_84(uParam0, 4);
					func_84(uParam0, 5);
					break;
				case 1:
					func_84(uParam0, 2);
					func_84(uParam0, 3);
					func_84(uParam0, 6);
					func_84(uParam0, 7);
					func_85(uParam0, 2);
					break;
			}
			switch (iParam2)
			{
				case 0:
					func_83(uParam0, 0);
					uParam0->f_5 = -88606612;
					uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
					break;
				case 1:
					func_83(uParam0, 1);
					uParam0->f_5 = -1507537085;
					uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
					break;
				case 2:
					func_83(uParam0, 0);
					uParam0->f_5 = 150331424;
					uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
					break;
				case 3:
					func_83(uParam0, 1);
					uParam0->f_5 = -74168995;
					uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
					break;
				case 4:
					func_83(uParam0, 0);
					uParam0->f_5 = -1303456769;
					uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
					break;
				case 5:
					func_83(uParam0, 1);
					uParam0->f_5 = 2080696176;
					uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
					break;
				case 6:
					func_83(uParam0, 0);
					uParam0->f_5 = -801880493;
					uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
					break;
				case 7:
					func_83(uParam0, 1);
					uParam0->f_5 = -2098877513;
					uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
					break;
				case 8:
					func_83(uParam0, 0);
					uParam0->f_5 = -985131289;
					uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
					break;
				case 9:
					func_83(uParam0, 1);
					uParam0->f_5 = 171385032;
					uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
					break;
				case 10:
					func_83(uParam0, 0);
					uParam0->f_5 = -690365399;
					uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
					break;
				case 11:
					func_83(uParam0, 1);
					uParam0->f_5 = -393773180;
					uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
					break;
				case 12:
					func_83(uParam0, 0);
					uParam0->f_5 = 1783045643;
					uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
					break;
				case 13:
					func_83(uParam0, 1);
					uParam0->f_5 = -1841828372;
					uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
					break;
				case 14:
					func_83(uParam0, 0);
					uParam0->f_5 = -1926357119;
					uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
					break;
				case 15:
					func_83(uParam0, 1);
					uParam0->f_5 = -1904926193;
					uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
					break;
			}
			break;
		case 7:
			uParam0->f_6 = 1;
			*uParam0 = 10;
			uParam0->f_1 = 12;
			uParam0->f_2 = 3;
			switch (iParam2)
			{
				case 0:
					func_83(uParam0, 0);
					func_83(uParam0, 1);
					func_83(uParam0, 2);
					func_83(uParam0, 9);
					func_83(uParam0, 10);
					func_83(uParam0, 11);
					func_86(uParam0, iParam3);
					uParam0->f_5 = 666420762;
					uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
					break;
				case 1:
					func_83(uParam0, 1);
					func_83(uParam0, 2);
					func_83(uParam0, 8);
					func_83(uParam0, 9);
					func_83(uParam0, 10);
					func_83(uParam0, 11);
					func_86(uParam0, iParam3);
					uParam0->f_5 = 1145423923;
					uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
					break;
				case 2:
					func_83(uParam0, 1);
					func_83(uParam0, 2);
					func_83(uParam0, 3);
					func_83(uParam0, 4);
					func_83(uParam0, 5);
					func_83(uParam0, 6);
					func_83(uParam0, 9);
					func_83(uParam0, 10);
					func_83(uParam0, 11);
					func_86(uParam0, iParam3);
					uParam0->f_5 = -1176575305;
					uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
					break;
				case 3:
					func_83(uParam0, 0);
					func_83(uParam0, 1);
					func_83(uParam0, 2);
					func_83(uParam0, 9);
					func_83(uParam0, 10);
					func_83(uParam0, 11);
					func_86(uParam0, iParam3);
					uParam0->f_5 = -888961792;
					uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
					break;
				case 4:
					func_83(uParam0, 0);
					func_83(uParam0, 1);
					func_83(uParam0, 2);
					func_83(uParam0, 9);
					func_83(uParam0, 10);
					func_83(uParam0, 11);
					func_86(uParam0, iParam3);
					uParam0->f_5 = -1145898130;
					uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
					break;
				case 5:
					func_83(uParam0, 1);
					func_83(uParam0, 2);
					func_83(uParam0, 3);
					func_83(uParam0, 4);
					func_83(uParam0, 7);
					func_83(uParam0, 8);
					func_83(uParam0, 9);
					func_83(uParam0, 10);
					func_83(uParam0, 11);
					func_86(uParam0, iParam3);
					uParam0->f_5 = -264936334;
					uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
					break;
				case 6:
					func_83(uParam0, 1);
					func_83(uParam0, 2);
					func_83(uParam0, 3);
					func_83(uParam0, 6);
					func_83(uParam0, 7);
					func_83(uParam0, 9);
					func_83(uParam0, 10);
					func_83(uParam0, 11);
					func_86(uParam0, iParam3);
					uParam0->f_5 = -562839313;
					uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
					break;
				case 7:
					func_83(uParam0, 1);
					func_83(uParam0, 2);
					func_83(uParam0, 4);
					func_83(uParam0, 5);
					func_83(uParam0, 6);
					func_83(uParam0, 9);
					func_83(uParam0, 10);
					func_83(uParam0, 11);
					func_86(uParam0, iParam3);
					uParam0->f_5 = -819926700;
					uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
					break;
				case 8:
					func_83(uParam0, 0);
					func_83(uParam0, 1);
					func_83(uParam0, 2);
					func_83(uParam0, 9);
					func_83(uParam0, 10);
					func_83(uParam0, 11);
					func_86(uParam0, iParam3);
					uParam0->f_5 = -100890882;
					uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
					break;
				case 9:
					func_83(uParam0, 1);
					func_83(uParam0, 2);
					func_83(uParam0, 5);
					func_83(uParam0, 9);
					func_83(uParam0, 10);
					func_83(uParam0, 11);
					func_86(uParam0, iParam3);
					uParam0->f_5 = 373607510;
					uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
					break;
			}
			break;
		case 5:
			uParam0->f_6 = 1;
			*uParam0 = 21;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			func_81(uParam0);
			switch (iParam2)
			{
				case 0:
					func_82(uParam0);
					uParam0->f_5 = -1562903685;
					uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
					break;
				case 1:
					func_82(uParam0);
					uParam0->f_5 = 442262250;
					uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
					break;
				case 2:
					func_82(uParam0);
					uParam0->f_5 = 2113001754;
					uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
					break;
				case 3:
					func_82(uParam0);
					uParam0->f_5 = 222101843;
					uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
					break;
				case 4:
					func_82(uParam0);
					uParam0->f_5 = 862535295;
					uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
					break;
				case 5:
					func_82(uParam0);
					uParam0->f_5 = 267494763;
					uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
					break;
				case 6:
					func_82(uParam0);
					uParam0->f_5 = 492498900;
					uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
					break;
				case 7:
					func_82(uParam0);
					uParam0->f_5 = -735417347;
					uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
					break;
				case 8:
					func_82(uParam0);
					uParam0->f_5 = 2000289900;
					uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
					break;
				case 9:
					func_82(uParam0);
					uParam0->f_5 = 1820563970;
					uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
					break;
				case 10:
					func_82(uParam0);
					uParam0->f_5 = 1501808210;
					uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
					break;
				case 11:
					func_82(uParam0);
					uParam0->f_5 = -1103422576;
					uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
					break;
				case 12:
					func_82(uParam0);
					uParam0->f_5 = -375108461;
					uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
					break;
				case 13:
					func_82(uParam0);
					uParam0->f_5 = 1074344160;
					uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
					break;
				case 14:
					func_82(uParam0);
					uParam0->f_5 = 1375567406;
					uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
					break;
				case 15:
					func_82(uParam0);
					uParam0->f_5 = 1695022182;
					uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
					break;
				case 16:
					func_82(uParam0);
					uParam0->f_5 = 1773241795;
					uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
					break;
				case 17:
					func_82(uParam0);
					uParam0->f_5 = 1650499101;
					uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
					break;
				case 18:
					func_82(uParam0);
					uParam0->f_5 = 149116609;
					uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
					break;
				case 19:
					func_82(uParam0);
					uParam0->f_5 = 1486166046;
					uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
					break;
				case 20:
					func_82(uParam0);
					uParam0->f_5 = 58739626;
					uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
					break;
			}
			break;
		case 11:
			uParam0->f_6 = 1;
			*uParam0 = 10;
			uParam0->f_1 = 4;
			uParam0->f_2 = 1;
			func_81(uParam0);
			func_85(uParam0, 2);
			switch (iParam2)
			{
				case 0:
					func_82(uParam0);
					uParam0->f_5 = -1657923088;
					uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
					break;
				case 1:
					func_82(uParam0);
					uParam0->f_5 = -1268232386;
					uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
					break;
				case 2:
					func_82(uParam0);
					uParam0->f_5 = 1926851120;
					uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
					break;
				case 3:
					func_82(uParam0);
					uParam0->f_5 = -66052340;
					uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
					break;
				case 4:
					func_82(uParam0);
					uParam0->f_5 = 1738334804;
					uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
					break;
				case 5:
					func_82(uParam0);
					uParam0->f_5 = 1009780912;
					uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
					break;
				case 6:
					func_82(uParam0);
					uParam0->f_5 = -1560771476;
					uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
					break;
				case 7:
					func_82(uParam0);
					uParam0->f_5 = 453813335;
					uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
					break;
				case 8:
					func_82(uParam0);
					uParam0->f_5 = 786924542;
					uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
					break;
				case 9:
					func_82(uParam0);
					uParam0->f_5 = 1656593925;
					uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
					break;
			}
			break;
		case 9:
			uParam0->f_6 = 1;
			*uParam0 = 12;
			uParam0->f_1 = 4;
			uParam0->f_2 = 5;
			switch (iParam2)
			{
				case 0:
					func_87(uParam0, iParam3);
					uParam0->f_5 = 1323108111;
					uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
					break;
				case 1:
					func_87(uParam0, iParam3);
					uParam0->f_5 = -1505479200;
					uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
					break;
				case 2:
					func_87(uParam0, iParam3);
					uParam0->f_5 = -1283075997;
					uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
					break;
				case 3:
					func_87(uParam0, iParam3);
					uParam0->f_5 = -2100531475;
					uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
					break;
				case 4:
					func_87(uParam0, iParam3);
					uParam0->f_5 = 269617530;
					uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
					break;
				case 5:
					func_87(uParam0, iParam3);
					uParam0->f_5 = 1592829750;
					uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
					break;
				case 6:
					func_87(uParam0, iParam3);
					uParam0->f_5 = 1817985549;
					uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
					break;
				case 7:
					func_87(uParam0, iParam3);
					uParam0->f_5 = 1945424739;
					uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
					break;
				case 8:
					func_87(uParam0, iParam3);
					uParam0->f_5 = 1787314318;
					uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
					break;
				case 9:
					func_87(uParam0, iParam3);
					uParam0->f_5 = 542354442;
					uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
					break;
				case 10:
					func_87(uParam0, iParam3);
					uParam0->f_5 = 1510776727;
					uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
					break;
				case 11:
					func_87(uParam0, iParam3);
					uParam0->f_5 = -2017297662;
					uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
					break;
			}
			break;
		case 10:
			uParam0->f_6 = 1;
			*uParam0 = 20;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			func_81(uParam0);
			switch (iParam2)
			{
				case 0:
					func_82(uParam0);
					uParam0->f_5 = -377638420;
					uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
					break;
				case 1:
					func_82(uParam0);
					uParam0->f_5 = 1308799438;
					uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
					break;
				case 2:
					func_82(uParam0);
					uParam0->f_5 = -1030922940;
					uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
					break;
				case 3:
					func_82(uParam0);
					uParam0->f_5 = 1750043358;
					uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
					break;
				case 4:
					func_82(uParam0);
					uParam0->f_5 = -1330609910;
					uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
					break;
				case 5:
					func_82(uParam0);
					uParam0->f_5 = 223942444;
					uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
					break;
				case 6:
					func_82(uParam0);
					uParam0->f_5 = 1067547121;
					uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
					break;
				case 7:
					func_82(uParam0);
					uParam0->f_5 = -450732096;
					uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
					break;
				case 8:
					func_82(uParam0);
					uParam0->f_5 = -1701940764;
					uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
					break;
				case 9:
					func_82(uParam0);
					uParam0->f_5 = 1584258975;
					uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
					break;
				case 10:
					func_82(uParam0);
					uParam0->f_5 = -98183174;
					uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
					break;
				case 11:
					func_82(uParam0);
					uParam0->f_5 = -90261849;
					uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
					break;
				case 12:
					func_82(uParam0);
					uParam0->f_5 = 754522971;
					uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
					break;
				case 13:
					func_82(uParam0);
					uParam0->f_5 = 974542513;
					uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
					break;
				case 14:
					func_82(uParam0);
					uParam0->f_5 = -790885273;
					uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
					break;
				case 15:
					func_82(uParam0);
					uParam0->f_5 = -1447045452;
					uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
					break;
				case 16:
					func_82(uParam0);
					uParam0->f_5 = -586115209;
					uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
					break;
				case 17:
					func_82(uParam0);
					uParam0->f_5 = 224941020;
					uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
					break;
				case 18:
					func_82(uParam0);
					uParam0->f_5 = -1179654578;
					uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
					break;
				case 19:
					func_82(uParam0);
					uParam0->f_5 = 1247197458;
					uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
					break;
			}
			break;
		case 8:
			uParam0->f_6 = 1;
			*uParam0 = 9;
			uParam0->f_1 = 2;
			uParam0->f_2 = 1;
			func_81(uParam0);
			uParam0->f_10 = 60f;
			switch (iParam2)
			{
				case 0:
					func_82(uParam0);
					uParam0->f_5 = 974582605;
					uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
					break;
				case 1:
					func_82(uParam0);
					uParam0->f_5 = -964359125;
					uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
					break;
				case 2:
					func_82(uParam0);
					uParam0->f_5 = -700339292;
					uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
					break;
				case 3:
					func_82(uParam0);
					uParam0->f_5 = -470300912;
					uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
					break;
				case 4:
					func_82(uParam0);
					uParam0->f_5 = -241343909;
					uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
					break;
				case 5:
					func_82(uParam0);
					uParam0->f_5 = 1944053474;
					uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
					break;
				case 6:
					func_82(uParam0);
					uParam0->f_5 = -2120646059;
					uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
					break;
				case 7:
					func_82(uParam0);
					uParam0->f_5 = -1656440405;
					uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
					break;
				case 8:
					func_82(uParam0);
					uParam0->f_5 = -1422404207;
					uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
					break;
			}
			break;
		case 13:
			uParam0->f_6 = 1;
			*uParam0 = 1;
			uParam0->f_1 = 6;
			uParam0->f_2 = 1;
			func_81(uParam0);
			func_85(uParam0, 1);
			func_85(uParam0, 4);
			func_85(uParam0, 8);
			func_85(uParam0, 16);
			switch (iParam2)
			{
				case 0:
					func_82(uParam0);
					uParam0->f_5 = -1623035253;
					uParam0->f_11 = { func_89(func_88(iParam4)) };
					break;
			}
			break;
		case 14:
			uParam0->f_6 = 1;
			*uParam0 = 10;
			uParam0->f_1 = 5;
			uParam0->f_2 = 6;
			switch (iParam2)
			{
				case 0:
					func_90(uParam0, iParam3);
					uParam0->f_5 = -1957221189;
					uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
					break;
				case 1:
					func_90(uParam0, iParam3);
					uParam0->f_5 = 871956008;
					uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
					break;
				case 2:
					func_90(uParam0, iParam3);
					uParam0->f_5 = -718829908;
					uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
					break;
				case 3:
					func_90(uParam0, iParam3);
					uParam0->f_5 = -478076065;
					uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
					break;
				case 4:
					func_90(uParam0, iParam3);
					uParam0->f_5 = 158131441;
					uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
					break;
				case 5:
					func_90(uParam0, iParam3);
					uParam0->f_5 = 575051428;
					uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
					break;
				case 6:
					func_90(uParam0, iParam3);
					uParam0->f_5 = -861587350;
					uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
					break;
				case 7:
					func_90(uParam0, iParam3);
					uParam0->f_5 = -616671844;
					uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
					break;
				case 8:
					func_90(uParam0, iParam3);
					uParam0->f_5 = -828875274;
					uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
					break;
				case 9:
					func_90(uParam0, iParam3);
					uParam0->f_5 = -598017669;
					uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
					break;
			}
			break;
		case 15:
			uParam0->f_6 = 1;
			uParam0->f_7 = 1;
			*uParam0 = 12;
			uParam0->f_1 = 2;
			uParam0->f_2 = 1;
			func_81(uParam0);
			switch (iParam2)
			{
				case 0:
					func_82(uParam0);
					uParam0->f_5 = 2136361638;
					uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
					break;
				case 1:
					func_82(uParam0);
					uParam0->f_5 = 1948005426;
					uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
					break;
				case 2:
					func_82(uParam0);
					uParam0->f_5 = 462368629;
					uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
					break;
				case 3:
					func_82(uParam0);
					uParam0->f_5 = -172629291;
					uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
					break;
				case 4:
					func_82(uParam0);
					uParam0->f_5 = 1063777848;
					uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
					break;
				case 5:
					func_82(uParam0);
					uParam0->f_5 = -267241827;
					uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
					break;
				case 6:
					func_82(uParam0);
					uParam0->f_5 = -1183266453;
					uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
					break;
				case 7:
					func_82(uParam0);
					uParam0->f_5 = -877826604;
					uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
					break;
				case 8:
					func_82(uParam0);
					uParam0->f_5 = 1527533302;
					uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
					break;
				case 9:
					func_82(uParam0);
					uParam0->f_5 = -865586768;
					uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
					break;
				case 10:
					func_82(uParam0);
					uParam0->f_5 = 294379466;
					uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
					break;
				case 11:
					func_82(uParam0);
					uParam0->f_5 = 452588198;
					uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
					break;
			}
			break;
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			switch (iParam1)
			{
				case 16:
					uParam0->f_8 = -468635158;
					break;
				case 17:
					uParam0->f_8 = 1112069699;
					break;
				case 18:
					uParam0->f_8 = 661147828;
					break;
				case 19:
					uParam0->f_8 = 899082205;
					break;
				case 20:
					uParam0->f_8 = 987333815;
					break;
				case 21:
					uParam0->f_8 = -315961129;
					break;
				case 22:
					uParam0->f_8 = -139081918;
					break;
				case 23:
					uParam0->f_8 = 1604238189;
					break;
			}
			iVar17 = func_55(iParam1);
			if (iVar17 == -1)
			{
				return;
			}
			if ((iParam1 == 22 || iParam1 == 23) || iParam1 == 21)
			{
				uParam0->f_7 = 1;
			}
			*uParam0 = func_91(iVar17);
			uParam0->f_1 = 0;
			uParam0->f_6 = 2;
			func_85(uParam0, 32);
			if (iParam2 != -1)
			{
				uParam0->f_9 = func_93(func_92(iVar17), iParam2);
				uParam0->f_15 = func_94(func_92(iVar17), iParam2);
				uParam0->f_5 = func_95(iVar17, iParam2);
				uParam0->f_11 = { func_96(iVar17, iParam2) };
			}
			break;
	}
}

bool func_54(vector3 vParam0, float fParam3, float fParam4)
{
	bool bVar0;

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_97(PLAYER::PLAYER_ID()), vParam0, true) <= (fParam4 + fParam3))
	{
		bVar0 = CAM::IS_SPHERE_VISIBLE(vParam0, fParam3);
	}
	if (!bVar0)
	{
		bVar0 = NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam0, fParam3, (fParam4 + fParam3));
	}
	return bVar0;
}

int func_55(int iParam0)
{
	return &(Global_1245803->f_2073[iParam0]);
}

void func_56(var uParam0, int iParam1, int iParam2)
{
	struct<22> Var0;

	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	func_98(&Var0, uParam0, iParam1, iParam2, -1);
	func_99(&Var0);
}

int func_57(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_100(uParam2, 16))
	{
		return func_101(iParam0, uParam2, iParam3);
	}
	return func_102(iParam0, iParam1, uParam2);
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	struct<11> Var0;

	Var0.f_10 = 1106247680;
	func_53(&Var0, iParam0, iParam1, iParam2, 255);
	return func_103(Var0.f_4, Var0.f_2, 1, 0);
}

void func_59(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	struct<24> Var0;
	struct<17> Var40;

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
	Var40.f_10 = 1106247680;
	func_53(&Var40, iParam0, iParam1, -1, 255);
	func_104(&(Var0.f_8.f_5), Var40);
	Var0.f_2 = 7;
	Var0.f_5 = 0;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = 2;
	Var0.f_8.f_2 = { Var40.f_11 };
	Var0.f_23 = func_105(iParam0);
	Var0.f_23.f_1 = func_106(iParam0);
	Var0.f_23.f_5 = iParam4;
	Var0.f_23.f_14 = iParam1;
	Var0.f_23.f_15 = iParam2;
	Var0.f_23.f_16 = uParam3;
	Var0.f_23.f_7 = 1;
	(Var0.f_23.f_8[0 /*4*/])->f_3 = BUILTIN::FLOOR(Global_1901929->f_230.f_57);
	Var0.f_23.f_2 = BUILTIN::FLOOR(Global_1901929->f_230.f_58);
	Var0.f_23.f_8[0 /*4*/] = func_107(Var40.f_11);
	Var0.f_23.f_6 = 3505;
	func_108((*Global_1189272)[&Global_1275573 /*204*/], &Var0, 0, 0, 0, 0, 0);
	func_109(&Var0);
}

bool func_60(int iParam0)
{
	return iParam0 != 0;
}

void func_61(var uParam0)
{
	*uParam0 = Global_1275573->f_21;
}

int func_62(int iParam0)
{
	return (Global_1275573->f_21 - iParam0) * 1000;
}

void func_63(var uParam0)
{
	*uParam0 = 0;
}

void func_64()
{
	var uVar0;
	struct<11> Var1;
	int iVar18;

	Var1.f_10 = 1106247680;
	iVar18 = 0;
	while (iVar18 <= 23)
	{
		func_53(&Var1, iVar18, -1, -1, 255);
		if (Var1.f_6 == 2)
		{
			func_110(Var1.f_8);
			uVar0 = func_110(Var1.f_8);
			Global_1245803->f_2073[iVar18] = uVar0;
		}
		iVar18++;
	}
}

void func_65(int iParam0)
{
	if (Global_1245803->f_2001 != iParam0)
	{
		Global_1245803->f_2001 = iParam0;
	}
}

int func_66()
{
	struct<11> Var0;
	int iVar17;
	int iVar18;
	int iVar19;

	Var0.f_10 = 1106247680;
	iVar19 = 1;
	while (iVar19 <= 23)
	{
		iVar17 = iVar19;
		func_53(&Var0, iVar17, -1, -1, 255);
		iVar18 = (iVar18 + Var0);
		iVar19++;
	}
	return iVar18;
}

void func_67(bool bParam0)
{
	Global_1245803->f_2100 = 0;
	Global_1245803->f_2099 = 0;
	Global_1245803->f_2098 = 1;
	Global_1245803->f_2101 = -1;
	Global_1245803->f_2102 = 0f;
	if (bParam0)
	{
		((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_53 = -1;
		((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_54 = 0f;
	}
}

void func_68(int iParam0, bool bParam1)
{
	if (func_111(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_74(&(((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_55), iParam0);
	}
}

int func_69(var uParam0)
{
	int iVar0;
	struct<11> Var1;
	bool bVar18;

	Var1.f_10 = 1106247680;
	while (iVar0 < 3)
	{
		func_53(&Var1, Global_1245803->f_2098, Global_1245803->f_2099, -1, 255);
		if (Var1 <= 0)
		{
			func_112(&bVar18);
		}
		else
		{
			func_113(Global_1245803->f_2098, Global_1245803->f_2099, Global_1245803->f_2100, &Var1);
			iVar0++;
			Global_1245803->f_2099++;
			Global_1245803->f_2100++;
			if (Global_1245803->f_2100 == 499)
			{
				bVar18 = true;
			}
			else
			{
				if (Var1 == Global_1245803->f_2099)
				{
					func_112(&bVar18);
				}
			}
		}
	}
	if (!bVar18)
	{
		return 0;
	}
	if (Global_1245803->f_2101 != -1)
	{
		((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_53 = Global_1245803->f_2101;
		((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_54 = Global_1245803->f_2102;
	}
	else
	{
		((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_53 = -1;
		((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_54 = 0f;
		*uParam0 = 1;
	}
	func_67(0);
	return 1;
}

void func_70(int iParam0, bool bParam1)
{
	if (!func_111(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_78(&(((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_55), iParam0);
	}
}

struct<2> func_71(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_114(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_115(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

int func_72(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_111(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_73(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1245803->f_2006[iVar0] == iParam0)
		{
			return 1;
		}
		else if (&Global_1245803->f_2006[iVar0] == -1)
		{
			return 0;
		}
		iVar0++;
	}
	return 0;
}

void func_74(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_75(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_76(var uParam0, int iParam1, int iParam2)
{
	func_116(uParam0, iParam1, iParam2);
	func_117(uParam0, iParam1, iParam2);
}

void func_77(var uParam0, int iParam1)
{
	func_118(uParam0, iParam1);
}

void func_78(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_79(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;

	Var2.f_10 = 1106247680;
	iVar1 = 1;
	while (iVar1 <= 23)
	{
		*uParam1 = iVar1;
		func_53(&Var2, *uParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*uParam2 = 0;
			while (*uParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0 = (iVar0 + 1);
				*uParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_80(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_119(uParam0);
			break;
		case 1:
			func_119(uParam0);
			break;
		case 2:
			func_119(uParam0);
			break;
		case 3:
			func_120(uParam0);
			break;
		case 4:
			func_119(uParam0);
			break;
		case 5:
			func_119(uParam0);
			break;
		case 6:
			func_120(uParam0);
			break;
		case 7:
			func_120(uParam0);
			break;
		case 8:
			func_120(uParam0);
			break;
		case 9:
			func_119(uParam0);
			break;
		default:
			func_82(uParam0);
			func_81(uParam0);
			break;
	}
}

void func_81(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_84(uParam0, iVar0);
		iVar0++;
	}
}

void func_82(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_83(uParam0, iVar0);
		iVar0++;
	}
}

void func_83(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_3), iParam1);
}

void func_84(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_4), iParam1);
}

void func_85(var uParam0, int iParam1)
{
	func_121(&(uParam0->f_16), iParam1);
}

void func_86(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_84(uParam0, 0);
			break;
		case 1:
		case 2:
			func_84(uParam0, 1);
			func_84(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_84(uParam0, 0);
			func_84(uParam0, 2);
			break;
		case 8:
			func_84(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_84(uParam0, 1);
			break;
		default:
			func_81(uParam0);
			break;
	}
}

void func_87(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_122(uParam0);
			break;
		case 1:
			func_123(uParam0);
			break;
		case 2:
			func_124(uParam0);
			break;
		case 3:
			func_125(uParam0);
			break;
		default:
			func_82(uParam0);
			func_81(uParam0);
			break;
	}
}

int func_88(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

Vector3 func_89(int iParam0)
{
	if (!func_126(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_20;
}

void func_90(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_127(uParam0);
			break;
		case 1:
		case 2:
			func_128(uParam0);
			break;
		case 3:
		case 4:
			func_129(uParam0);
			break;
		default:
			func_81(uParam0);
			break;
	}
	func_82(uParam0);
}

int func_91(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_3;
}

int func_92(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1234391[iParam0 /*5*/];
}

var func_93(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_130(&Var1, uParam0) && func_131(&Var1, iParam1))
	{
		func_132(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_94(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_130(&Var1, uParam0) && func_131(&Var1, iParam1))
	{
		func_132(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_95(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_133(iParam0, iParam1);
	return &(Global_1234391->f_401[iVar0 /*7*/]);
}

Vector3 func_96(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_133(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_3;
}

Vector3 func_97(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_98(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = 1;
	uParam0->f_6 = uParam1;
	uParam0->f_10 = iParam2;
	uParam0->f_11 = iParam4;
	uParam0->f_13 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	*(uParam0->f_21[0 /*3*/]) = { Global_35 };
	uParam0->f_7 = iParam3;
}

void func_99(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (&Global_1051202->f_16[12] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[12])))
	{
		return;
	}
	*uParam0 = 172;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 40, 5, &(Global_1051202->f_16[12]));
	func_134(uParam0, uParam0->f_1);
}

bool func_100(int iParam0, int iParam1)
{
	return func_135(iParam0->f_16, iParam1);
}

int func_101(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = uParam0;
	iVar1 = func_136(uParam1->f_3, &(((*Global_1244010)[iParam2 /*56*/])->f_36[iVar0]));
	if (iVar1 == 0)
	{
		iVar2 = (uParam1->f_1 - 1);
		while (iVar2 >= 0)
		{
			if (MISC::IS_BIT_SET(uParam1->f_3, iVar2))
			{
				return iVar2;
			}
			iVar2 = (iVar2 + -1);
		}
		return 0;
	}
	return func_137(iVar1);
}

int func_102(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	var uVar1[16];
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	var uVar23;
	int iVar24;
	int iVar25;

	iVar0 = iParam0;
	iVar19 = -1;
	iVar20 = 0;
	while (iVar20 <= 31)
	{
		iVar22 = PLAYER::INT_TO_PLAYERINDEX(iVar20);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar22))
		{
		}
		else if (func_138(func_97(iVar22), uParam2->f_11) > Global_1901929->f_230.f_57)
		{
		}
		else
		{
			iVar21 = func_136(uParam2->f_3, &(((*Global_1244010)[iVar20 /*56*/])->f_36[iVar0]));
			iVar19 = (iVar19 && iVar21);
			iVar18 = func_139(iVar21, 0);
			if (iVar18 != -1)
			{
				uVar1[iVar18] = &uVar1[iVar18] + 1;
			}
		}
		iVar20++;
	}
	if (func_140(iVar19) > 0)
	{
		uVar23 = func_103(iVar19, uParam2->f_1, 1, 0);
		return uVar23;
	}
	else
	{
		iVar24 = -1;
		iVar25 = -1;
		iVar18 = 0;
		while (iVar18 <= 15)
		{
			if (&uVar1[iVar18] == 0)
			{
			}
			else if (&uVar1[iVar18] > iVar25)
			{
				iVar24 = iVar18;
				iVar25 = &uVar1[iVar18];
			}
			iVar18++;
		}
		if (iVar24 != -1)
		{
			return iVar24;
		}
	}
	return func_141(iParam0, iParam1);
}

int func_103(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[32];

	if (iParam1 > 32)
	{
	}
	iVar1 = func_142(iParam3);
	if (iParam2 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar1, iParam1);
		return iVar0;
	}
	iVar2 = iVar1;
	while (iVar2 <= ((iVar1 + iParam1) - 1))
	{
		if ((iParam2 == 1 && MISC::IS_BIT_SET(iParam0, iVar2)) || (iParam2 == 2 && !MISC::IS_BIT_SET(iParam0, iVar2)))
		{
			iVar4[iVar3] = iVar2;
			iVar3++;
		}
		iVar2++;
	}
	if (iVar3 == 0)
	{
		return -1;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3);
	return &(iVar4[iVar0]);
}

void func_104(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_143(Param1.f_5, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1881122909;
		case 2:
			return 1746254613;
		case 3:
			return -210940392;
		case 4:
			return -337883659;
		case 6:
			return -2127851115;
		case 7:
			return -1515832348;
		case 5:
			return -392050235;
		case 11:
			return -16753530;
		case 8:
			return -1210919694;
		case 9:
			return -1628357986;
		case 10:
			return -1054322328;
		case 12:
			return -1488065830;
		case 13:
			return 1903114091;
		case 14:
			return 1623440542;
		case 15:
			return -726533106;
		default:
			break;
	}
	return 0;
}

int func_106(int iParam0)
{
	return 2452;
}

int func_107(struct<2> Param0, var uParam2)
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

int func_108(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (func_144(uParam0))
	{
		return 0;
	}
	if (!func_145(&(uParam1->f_8)))
	{
		return 0;
	}
	if (uParam1->f_2 == -1)
	{
		return 0;
	}
	if (uParam1->f_2 == 5)
	{
		uParam1->f_3 = PLAYER::PLAYER_ID();
	}
	if (uParam1->f_5 == -1)
	{
		return 0;
	}
	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
	{
		return 0;
	}
	iVar0 = func_146(uParam0, uParam1);
	if (iVar0 >= 0)
	{
		return 0;
	}
	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
		default:
			break;
			if (!func_147(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
			{
				return 0;
			}
			break;
	}
	uParam1->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iVar1 = ((uParam0->f_1 + *uParam0) % uParam0->f_2);
	uParam1->f_4 = iVar1;
	*(uParam0->f_3[iVar1 /*40*/]) = { *uParam1 };
	func_148(uParam0->f_3[iVar1 /*40*/], 0);
	*uParam0++;
	return 1;
}

void func_109(var uParam0)
{
	struct<6> Var0;

	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_2 = -1;
	Var0.f_5.f_3 = 255;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_8 = 2;
	Var0.f_5.f_8.f_1 = -1;
	Var0.f_5.f_8.f_5 = -1;
	Var0.f_5.f_8.f_5.f_1 = -1;
	Var0.f_5.f_8.f_5.f_3 = -1;
	Var0.f_5.f_8.f_5.f_4 = -1;
	Var0.f_5.f_8.f_5.f_5 = -1;
	Var0.f_5.f_8.f_5.f_6 = -1;
	Var0.f_5.f_8.f_5.f_6.f_1 = -1;
	Var0.f_5.f_8.f_5.f_9 = 2;
	Var0.f_5.f_23.f_1 = 1024;
	Var0.f_5.f_23.f_4 = -15;
	Var0.f_5.f_23.f_5 = 255;
	Var0.f_5.f_23.f_8 = 1;
	Var0.f_5.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_5.f_23.f_13 = -1;
	Var0.f_5 = { *uParam0 };
	Var0.f_4 = 0;
	func_150(&Var0, func_149(0, 8));
}

int func_110(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_130(&Var1, uParam0))
	{
		iVar0 = ((func_151() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

bool func_111(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return func_75(((*Global_1244010)[iParam1 /*56*/])->f_55, iParam0);
}

void func_112(int iParam0)
{
	int iVar0;

	Global_1245803->f_2099 = 0;
	iVar0 = Global_1245803->f_2098;
	iVar0++;
	if (iVar0 == 24)
	{
		*iParam0 = 1;
	}
	else
	{
		Global_1245803->f_2098 = iVar0;
	}
}

void func_113(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar1 = iVar2;
	fVar0 = (fVar0 + func_152(&iVar1, iParam0, iParam1, iParam2, iParam3));
	if (iVar1 != 0)
	{
		fVar0 = -1f;
	}
	else if (fVar0 > Global_1245803->f_2102)
	{
		Global_1245803->f_2102 = fVar0;
		Global_1245803->f_2101 = iParam2;
	}
	((*Global_1245803)[iParam2 /*4*/])->f_3 = iVar1;
	if (((*Global_1245803)[iParam2 /*4*/])->f_1 < Global_1275573->f_21)
	{
		func_153(iParam2);
		((*Global_1245803)[iParam2 /*4*/])->f_1 = 0;
		((*Global_1245803)[iParam2 /*4*/])->f_2 = 0;
	}
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -88129556;
		case 2:
			return 1285278823;
		case 14:
			return 1990184729;
		case 4:
			return 1374143159;
		case 5:
			return 1983508419;
		case 6:
			return -174599426;
		case 7:
			return -1565506973;
		case 8:
			return 1332057400;
		case 9:
			return 725557162;
		case 10:
			return 9860771;
		case 11:
			return -189356331;
		case 12:
			return -1552492203;
		case 13:
			return 1780085540;
		case 3:
			return 1067005312;
		case 15:
			return -765620960;
		default:
			break;
	}
	return 0;
}

struct<2> func_115(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_116(var uParam0, int iParam1, int iParam2)
{
	if (func_154(iParam1, iParam2))
	{
		func_155(uParam0, iParam1, 8192, "host");
	}
}

void func_117(var uParam0, int iParam1, int iParam2)
{
	if (func_156(iParam1, iParam2))
	{
		((*Global_1242505)[iParam1 /*3*/])->f_1++;
	}
	if (((*Global_1242505)[iParam1 /*3*/])->f_1 > 7)
	{
		func_155(uParam0, iParam1, 4096, "host");
	}
}

void func_118(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = Global_1901929->f_230.f_55;
	if (fVar0 < 1f)
	{
		if (func_60(Global_1242505[iParam1 /*3*/]) && func_62(Global_1242505[iParam1 /*3*/]) < Global_1901929->f_230.f_54)
		{
			func_155(uParam0, iParam1, 32, "host");
			func_61((*Global_1242505)[iParam1 /*3*/]);
			return;
		}
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar1 > fVar0)
		{
			Global_1242505->f_1501.f_2++;
			if (Global_1242505->f_1501.f_2 < 10)
			{
				func_155(uParam0, iParam1, 32, "host");
				func_61((*Global_1242505)[iParam1 /*3*/]);
			}
			else
			{
				func_63((*Global_1242505)[iParam1 /*3*/]);
				Global_1242505->f_1501.f_2 = 0;
			}
		}
		else
		{
			func_63((*Global_1242505)[iParam1 /*3*/]);
			Global_1242505->f_1501.f_2 = 0;
		}
	}
}

void func_119(var uParam0)
{
	func_83(uParam0, 0);
	func_83(uParam0, 1);
	func_83(uParam0, 3);
	func_81(uParam0);
}

void func_120(var uParam0)
{
	func_82(uParam0);
	func_157(uParam0, 0, 3);
}

void func_121(var uParam0, int iParam1)
{
	func_158(uParam0, iParam1);
}

void func_122(var uParam0)
{
	func_83(uParam0, 0);
	func_84(uParam0, 0);
	func_84(uParam0, 1);
	func_84(uParam0, 2);
}

void func_123(var uParam0)
{
	func_83(uParam0, 1);
	func_81(uParam0);
}

void func_124(var uParam0)
{
	func_83(uParam0, 2);
	func_84(uParam0, 3);
}

void func_125(var uParam0)
{
	func_83(uParam0, 3);
	func_84(uParam0, 4);
}

int func_126(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

void func_127(var uParam0)
{
	func_84(uParam0, 0);
	func_84(uParam0, 1);
}

void func_128(var uParam0)
{
	func_84(uParam0, 2);
	func_84(uParam0, 3);
}

void func_129(var uParam0)
{
	func_84(uParam0, 4);
	func_84(uParam0, 5);
}

bool func_130(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_131(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_132(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_133(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1234391)[iParam0 /*5*/])->f_4 + iParam1);
}

void func_134(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_159(iVar0);
		if (func_75(uParam0->f_7, iVar1))
		{
		}
		iVar0++;
	}
}

bool func_135(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_136(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = (uParam1 && iParam0);
	return iVar0 ^ iParam0;
}

int func_137(int iParam0)
{
	iParam0 = (iParam0 && -iParam0);
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 0;
		case 2:
			return 1;
		case 4:
			return 2;
		case 8:
			return 3;
		case 16:
			return 4;
		case 32:
			return 5;
		case 64:
			return 6;
		case 128:
			return 7;
		case 256:
			return 8;
		case 512:
			return 9;
		case 1024:
			return 10;
		case 2048:
			return 11;
		case 4096:
			return 12;
		case 8192:
			return 13;
		case 16384:
			return 14;
		case 32768:
			return 15;
		case 65536:
			return 16;
		case 131072:
			return 17;
		case 262144:
			return 18;
		case 524288:
			return 19;
		case 1048576:
			return 20;
		case 2097152:
			return 21;
		case 4194304:
			return 22;
		case 8388608:
			return 23;
		case 16777216:
			return 24;
		case 33554432:
			return 25;
		case 67108864:
			return 26;
		case 134217728:
			return 27;
		case 268435456:
			return 28;
		case 536870912:
			return 29;
		case 1073741824:
			return 30;
	}
	return -1;
}

float func_138(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	while (iVar0 <= 31)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_140(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_141(int iParam0, int iParam1)
{
	struct<11> Var0;

	Var0.f_10 = 1106247680;
	func_53(&Var0, iParam0, iParam1, -1, 255);
	return func_103(Var0.f_3, Var0.f_1, 1, 0);
}

int func_142(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	uVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

struct<2> func_143(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_160(iParam0, &(Global_1070356->f_634), func_41(iParam1));
			break;
		case 3:
			Var0.f_1 = func_160(iParam0, &(Global_1070356->f_634.f_602), func_41(iParam1));
			break;
		case 4:
			Var0.f_1 = func_160(iParam0, &(Global_1070356->f_634.f_2104), func_41(iParam1));
			break;
		case 5:
			Var0.f_1 = func_160(iParam0, &(Global_1070356->f_634.f_12606), func_41(iParam1));
			break;
		case 6:
			Var0.f_1 = func_160(iParam0, &(Global_1070356->f_634.f_12908), func_41(iParam1));
			break;
		case 7:
			Var0.f_1 = func_160(iParam0, &(Global_1070356->f_634.f_15910), func_41(iParam1));
			break;
		case 8:
			Var0.f_1 = func_160(iParam0, &(Global_1070356->f_634.f_15981), func_41(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_161();
	}
	return Var0;
}

bool func_144(var uParam0)
{
	return *uParam0 == uParam0->f_2;
}

int func_145(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return 0;
	}
	if (!func_162(&(uParam0->f_5)))
	{
		return 0;
	}
	return 1;
}

int func_146(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = ((uParam0->f_1 + iVar0) % uParam0->f_2);
		if (func_163(uParam1, uParam0->f_3[iVar1 /*40*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_147(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<29> Var0;
	struct<2> Var32;
	bool bVar34;
	int iVar35[4];
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;

	Var32 = -1;
	Var32.f_1 = -1;
	if (func_26(uParam0->f_8.f_5))
	{
		Var32 = { uParam0->f_8.f_5 };
	}
	else if (func_26(uParam0->f_8.f_5.f_6))
	{
		Var32 = { uParam0->f_8.f_5.f_6 };
	}
	else
	{
		return 1;
	}
	bVar34 = false;
	if (func_164(uParam0->f_8.f_2))
	{
		bVar34 = true;
	}
	else
	{
		bVar34 = false;
	}
	if (bParam1)
	{
		Var0.f_25 = iParam2;
		Var0.f_26 = iParam3;
		Var0.f_27 = iParam4;
		Var0.f_28 = iParam5;
	}
	else if (!func_166(func_165(Var32), &Var0))
	{
		return 0;
	}
	if (Var0.f_25 <= 0 || Var0.f_25 > 50)
	{
		if (Var0.f_25 != 0)
		{
		}
		iVar35[0] = 0;
	}
	else
	{
		iVar35[0] = 1;
	}
	if (Var0.f_26 <= 0 || Var0.f_26 > 10)
	{
		if (Var0.f_26 != 0)
		{
		}
		iVar35[1] = 0;
	}
	else
	{
		iVar35[1] = 1;
	}
	if (Var0.f_27 <= 0 || Var0.f_27 > 25)
	{
		if (Var0.f_27 != 0)
		{
		}
		iVar35[2] = 0;
	}
	else
	{
		iVar35[2] = 1;
	}
	if (Var0.f_28 <= 0 || Var0.f_28 > 10)
	{
		if (Var0.f_28 != 0)
		{
		}
		iVar35[3] = 0;
	}
	else
	{
		iVar35[3] = 1;
	}
	if (bVar34)
	{
		iVar42 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(1);
		iVar43 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(1);
		iVar44 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(1);
		iVar45 = NETWORK::_0x62BE3ECC79FBD004(1);
	}
	else
	{
		NETWORK::_0x5E71E72A94985214(uParam0->f_8.f_2, 0, &iVar42, &iVar43, &iVar44, &iVar45);
	}
	iVar40 = 0;
	while (iVar40 < 4)
	{
		iVar46 = iVar40;
		if (iVar46 == -1)
		{
		}
		else if (!&iVar35[iVar40])
		{
		}
		else
		{
			switch (iVar46)
			{
				case 0:
					iVar41 = (NETWORK::GET_MAX_NUM_NETWORK_PEDS() - iVar42);
					if (iVar41 < Var0.f_25)
					{
						return 0;
					}
					break;
					break;
				case 1:
					iVar41 = (NETWORK::GET_MAX_NUM_NETWORK_VEHICLES() - iVar43);
					if (iVar41 < Var0.f_26)
					{
						return 0;
					}
					break;
					break;
				case 2:
					iVar41 = (NETWORK::GET_MAX_NUM_NETWORK_OBJECTS() - iVar44);
					if (iVar41 < Var0.f_27)
					{
						return 0;
					}
					break;
					break;
				case 3:
					iVar41 = (NETWORK::GET_MAX_NUM_NETWORK_PICKUPS() - iVar45);
					if (iVar41 < Var0.f_28)
					{
						return 0;
					}
					break;
					break;
			}
		}
		iVar40++;
	}
	return 1;
}

void func_148(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

var func_149(int iParam0, int iParam1)
{
	return func_167(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_150(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 4;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 45, 36, &uParam1);
}

int func_151()
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

float func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;

	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar1 = (fVar1 + func_168(iParam0, iParam1, iParam2, iParam3, iParam4, iVar0));
		if (!func_169(iParam0))
		{
		}
		else
		{
			iVar0++;
		}
	}
	func_170(iParam0, iParam3, iParam1, iParam4);
	return fVar1;
}

void func_153(int iParam0)
{
	func_171(&(((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_18), iParam0, 17);
}

bool func_154(int iParam0, int iParam1)
{
	return func_172(&(((*Global_1244010)[iParam1 /*56*/])->f_18), iParam0, 17);
}

void func_155(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!func_75(*iParam0, iParam2))
	{
		func_173(iParam1, iParam2);
		func_78(iParam0, iParam2);
	}
}

bool func_156(int iParam0, int iParam1)
{
	return func_172(&(((*Global_1244010)[iParam1 /*56*/])->f_18), iParam0, 17);
}

void func_157(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 < iParam1)
	{
		iParam2 = (uParam0->f_2 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_84(uParam0, iVar0);
		iVar0++;
	}
}

void func_158(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_159(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

int func_160(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2 /*3*/] < iParam0)
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

struct<2> func_161()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_162(var uParam0)
{
	if (func_26(*uParam0))
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

int func_163(var uParam0, var uParam1)
{
	if (uParam1->f_2 == -1)
	{
		return 0;
	}
	if (uParam0->f_2 == -1)
	{
		return 0;
	}
	if (uParam1->f_2 != uParam0->f_2)
	{
		return 0;
	}
	if (uParam1->f_5 == -1)
	{
		return 0;
	}
	if (uParam0->f_5 == -1)
	{
		return 0;
	}
	if (uParam1->f_5 != uParam0->f_5)
	{
		return 0;
	}
	if (uParam1->f_8 != uParam0->f_8)
	{
		return 0;
	}
	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
	{
		return 0;
	}
	if (!func_174(uParam1->f_8.f_5, uParam0->f_8.f_5))
	{
		return 0;
	}
	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
	{
		return 0;
	}
	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
	{
		return 0;
	}
	return 1;
}

int func_164(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_165(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_175(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_166(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = { func_176(iParam0) };
	if (!func_26(Var0))
	{
		return 0;
	}
	func_177(Var0, iParam0, uParam1);
	return 1;
}

var func_167(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_178() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_179());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_179());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_179());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_180(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_181(iVar2))
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
				if (iVar9 & 8192 != 0 && func_182(iVar2) != 1)
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
					if (!func_183(iVar10))
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
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

float func_168(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam5)
	{
		case 0:
			return func_184(iParam0, iParam1, iParam2, iParam3, iParam4);
		case 1:
			return func_185(iParam0, iParam3);
		case 2:
			return func_186(iParam0, iParam3, iParam4);
		case 3:
			return func_187(iParam0, iParam1, iParam2, iParam3, iParam4);
		case 4:
			return func_188(iParam0, iParam3, iParam4);
		case 5:
			return func_189(iParam0, iParam3, iParam4);
		case 6:
			return func_190(iParam0, iParam1, iParam3, iParam4);
		case 8:
			return func_191(iParam0, iParam3);
		case 14:
			return func_192(iParam0, iParam1, iParam3, iParam4);
		case 9:
			return func_193(iParam0, iParam3, iParam4);
		case 10:
			return func_194(iParam0, iParam3, iParam4);
		case 11:
			return func_195(iParam0, iParam1, iParam3, iParam4);
		case 12:
			return func_196(iParam0, iParam3);
		case 13:
			return func_197(iParam0, iParam1, iParam3, iParam4);
		default:
			break;
	}
	return 0f;
}

bool func_169(int iParam0)
{
	return *iParam0 == 0;
}

void func_170(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (*iParam0 == 0)
	{
		return;
	}
	iVar0 = 417341510;
	if (func_75(*iParam0, iVar0))
	{
		return;
	}
	if (*iParam0 == ((*Global_1245803)[iParam1 /*4*/])->f_3)
	{
		return;
	}
	TELEMETRY::_0x6571E4327390EC0B(iParam3->f_5, iParam2, Global_35, *iParam0);
}

bool func_171(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::CLEAR_BIT((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_172(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

void func_173(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam1)
	{
		case 2:
			if (((*Global_1245803)[iParam0 /*4*/])->f_2 == 1)
			{
				func_153(iParam0);
				((*Global_1245803)[iParam0 /*4*/])->f_1 = 0;
				((*Global_1245803)[iParam0 /*4*/])->f_2 = 0;
			}
			break;
	}
	iVar0 = func_198(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = (Global_1275573->f_21 + (iVar0 / 1000));
		if (((*Global_1245803)[iParam0 /*4*/])->f_1 == 0 || ((*Global_1245803)[iParam0 /*4*/])->f_1 < iVar1)
		{
			func_199(iParam0);
			((*Global_1245803)[iParam0 /*4*/])->f_1 = iVar1;
			((*Global_1245803)[iParam0 /*4*/])->f_2 = iParam1;
		}
	}
}

bool func_174(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

int func_175(struct<2> Param0, var uParam2)
{
	if (!func_26(Param0))
	{
		return 0;
	}
	func_200(uParam2);
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

struct<2> func_176(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_143(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_143(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_143(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_143(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_143(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_143(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_143(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_161();
}

int func_177(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (!func_201(iParam0))
	{
		return 0;
	}
	if (func_202(iParam0, iParam1, &uVar0))
	{
		func_203(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_178()
{
	return Global_1051202->f_12;
}

char* func_179()
{
	return "unnamed";
}

int func_180(int iParam0)
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

int func_181(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_204(35, iParam0);
}

int func_182(int iParam0)
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

bool func_183(int iParam0)
{
	if (func_205(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_206(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

float func_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	vVar0 = { iParam4->f_11 };
	if (func_100(iParam4, 1) && func_164(vVar0))
	{
		func_155(iParam0, iParam3, 256, 0);
		return -1f;
	}
	if (func_207(vVar0, &bVar3))
	{
		func_208(iParam3);
		if (bVar3)
		{
			func_155(iParam0, iParam3, 1, 0);
			return -1f;
		}
		bVar4 = true;
	}
	if (iParam4->f_6 == 2)
	{
		iVar5 = func_55(iParam1);
		iVar6 = func_209(iVar5, iParam2);
		if (iVar6 > 0)
		{
			iVar7 = 0;
			while (iVar7 <= (iVar6 - 1))
			{
				vVar0 = { func_210(func_92(iVar5), iParam2, iVar7) };
				if (func_207(vVar0, &bVar3))
				{
					func_208(iParam3);
					if (bVar3)
					{
						func_155(iParam0, iParam3, 1, 0);
						return -1f;
					}
					bVar4 = true;
				}
				iVar7++;
			}
		}
	}
	if (bVar4)
	{
		return (0.25f + func_211());
	}
	func_212(iParam3);
	func_155(iParam0, iParam3, 2, 0);
	return -1f;
}

float func_185(int iParam0, int iParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_155(iParam0, iParam1, 131072, 0);
		return 0f;
	}
	return 0f;
}

float func_186(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_100(iParam2, 1))
	{
		return 0f;
	}
	iVar0 = func_88(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
	if (!func_126(iVar0))
	{
		func_155(iParam0, iParam1, 256, 0);
		return 0f;
	}
	if (func_213(iVar0))
	{
		func_155(iParam0, iParam1, 524288, 0);
		return 0f;
	}
	return 0f;
}

float func_187(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	vVar1 = { iParam4->f_11 };
	iVar5 = 0;
	while (iVar5 <= 12)
	{
		if (((*Global_1214482)[iVar5 /*27*/])->f_2 != -1)
		{
			fVar0 = func_138(vVar1, func_214(iVar5));
			if (fVar0 < Global_1901929->f_230.f_59)
			{
				func_155(iParam0, iParam3, 64, 0);
				return 0f;
			}
			if (iParam4->f_6 == 2)
			{
				iVar4 = func_55(iParam1);
				iVar6 = func_209(iVar4, iParam2);
				if (iVar6 > 0)
				{
					iVar7 = 0;
					while (iVar7 <= (iVar6 - 1))
					{
						vVar1 = { func_210(func_92(iVar4), iParam2, iVar7) };
						fVar0 = func_138(vVar1, *(((*Global_1225057)[iVar5 /*686*/])->f_609[iVar7 /*3*/]));
						if (fVar0 < Global_1901929->f_230.f_59)
						{
							func_155(iParam0, iParam3, 64, 0);
							return 0f;
						}
						iVar7++;
					}
				}
			}
		}
		iVar5++;
	}
	if (func_215(vVar1, 2, Global_1901929->f_230.f_59))
	{
		func_155(iParam0, iParam3, 64, 0);
		return 0f;
	}
	return 0f;
}

float func_188(int iParam0, int iParam1, int iParam2)
{
	if (func_216(iParam2->f_7))
	{
		func_155(iParam0, iParam1, 2097152, 0);
		return 0f;
	}
	return 0f;
}

float func_189(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_217(iParam2);
	if (iVar0 == -1)
	{
		return 0f;
	}
	if (func_60(Global_1245803[iParam1 /*4*/]) && func_62(Global_1245803[iParam1 /*4*/]) < iVar0)
	{
		func_155(iParam0, iParam1, 8, 0);
		return 0f;
	}
	iVar1 = func_219(func_218(153786159));
	if (iVar1 == iParam2->f_5)
	{
		iVar2 = func_219(func_218(217123284));
		if (iVar2 != 0 && (Global_1275573->f_21 - iVar2) < (iVar0 / 1000))
		{
			func_155(iParam0, iParam1, 8, 0);
			return 0f;
		}
	}
	iVar3 = func_219(func_218(945205875));
	if (iParam2->f_9 == iVar3)
	{
		iVar4 = func_219(func_218(890183498));
		if (iVar4 != 0 && (Global_1275573->f_21 - iVar4) < (iVar0 / 1000))
		{
			func_155(iParam0, iParam1, 262144, 0);
			return 0f;
		}
	}
	return 0f;
}

float func_190(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_100(iParam3, 32))
	{
		return 0f;
	}
	iVar0 = func_220(iParam1);
	if (func_221(iParam1, iVar0))
	{
		func_155(iParam0, iParam2, 16, 0);
		return 0f;
	}
	return 0f;
}

float func_191(int iParam0, int iParam1)
{
	if (func_60(Global_1242505[iParam1 /*3*/]) && func_62(Global_1242505[iParam1 /*3*/]) < Global_1901929->f_230.f_54)
	{
		func_155(iParam0, iParam1, 32, 0);
		return 0f;
	}
	return 0f;
}

float func_192(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam3->f_6 == 2)
	{
		iVar0 = func_55(iParam1);
		iVar1 = func_222(iVar0);
		if (iVar1 == -1261475678 && PLAYER::_0xFB6EB8785F808551(PLAYER::PLAYER_ID(), Global_1901929->f_230.f_29, false))
		{
			func_155(iParam0, iParam2, 65536, 0);
			return 0f;
		}
	}
	return 0f;
}

float func_193(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	func_223(iParam2->f_15, &iVar0, &iVar1);
	if (iVar0 == -1 || iVar1 == -1)
	{
		return 0f;
	}
	if (func_224(iVar0, iVar1))
	{
		return 0.25f;
	}
	func_155(iParam0, iParam1, 128, 0);
	return 0f;
}

float func_194(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_14 == 0)
	{
		return 0f;
	}
	if (func_225(0) == iParam2->f_14)
	{
		return 0.25f;
	}
	func_155(iParam0, iParam1, 512, 0);
	return 0f;
}

float func_195(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3->f_6 == 2)
	{
		iVar0 = func_55(iParam1);
		if (func_226(iVar0))
		{
			func_155(iParam0, iParam2, 16384, 0);
		}
	}
	return 0f;
}

float func_196(int iParam0, int iParam1)
{
	if (func_227(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		func_155(iParam0, iParam1, 32768, 0);
	}
	return 0f;
}

float func_197(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (((*Global_1242505)[iParam2 /*3*/])->f_2 != -15 && !func_229(func_228(), ((*Global_1242505)[iParam2 /*3*/])->f_2, 1))
	{
		func_155(iParam0, iParam2, 1024, 0);
		return 0f;
	}
	if (!func_230(iParam3->f_7))
	{
		func_155(iParam0, iParam2, 268435456, 0);
		return 0f;
	}
	if (iParam3->f_6 == 2)
	{
		iVar2 = func_55(iParam1);
		iVar3 = func_222(iVar2);
		iVar0 = func_231(iVar2, iParam3->f_5, iVar3, Global_35, 1, 0, 0, -1082130432 /* Float: -1f */);
		iVar1 = func_232(iVar0);
		if (iVar1 != 0)
		{
			func_155(iParam0, iParam2, iVar1, 0);
			return 0f;
		}
	}
	else if (iParam3->f_6 == 1)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iParam3->f_5))
		{
			func_155(iParam0, iParam2, 268435456, 0);
			return 0f;
		}
		if (func_100(iParam3, 8) && !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_155(iParam0, iParam2, 1048576, 0);
			return 0f;
		}
	}
	return 0f;
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1901929->f_230;
		case 2:
			return Global_1901929->f_230.f_1;
		case 4:
			return Global_1901929->f_230.f_2;
		case 8:
			return Global_1901929->f_230.f_3;
		case 16:
			return Global_1901929->f_230.f_4;
		case 32:
			return Global_1901929->f_230.f_5;
		case 64:
			return Global_1901929->f_230.f_13;
		case 128:
			return Global_1901929->f_230.f_14;
		case 256:
			return Global_1901929->f_230.f_15;
		case 512:
			return Global_1901929->f_230.f_16;
		case 1024:
			return Global_1901929->f_230.f_17;
		case 2048:
			return Global_1901929->f_230.f_18;
		case 4096:
			return Global_1901929->f_230.f_19;
		case 8192:
			return Global_1901929->f_230.f_20;
		case 16384:
			return Global_1901929->f_230.f_22;
		case 32768:
			return Global_1901929->f_230.f_23;
		case 65536:
			return Global_1901929->f_230.f_24;
		case 131072:
			return Global_1901929->f_230.f_25;
		case 524288:
			return Global_1901929->f_230.f_26;
		case 1048576:
			return Global_1901929->f_230.f_27;
		case 268435456:
			return Global_1901929->f_230.f_12;
		case 2097152:
			return Global_1901929->f_230.f_28;
		case 4194304:
			return Global_1901929->f_230.f_6;
		case 8388608:
			return Global_1901929->f_230.f_7;
		case 16777216:
			return Global_1901929->f_230.f_8;
		case 33554432:
			return Global_1901929->f_230.f_9;
		case 67108864:
			return Global_1901929->f_230.f_10;
		case 134217728:
			return Global_1901929->f_230.f_11;
		case 536870912:
			return Global_1901929->f_230.f_21;
		default:
			break;
	}
	return 0;
}

void func_199(int iParam0)
{
	func_233(&(((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_18), iParam0, 17);
}

void func_200(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_201(int iParam0)
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

bool func_202(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_234(iParam0);
	uParam2->f_4 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_203(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_235(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_236(iVar0);
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
			uParam2->f_5 = func_237(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_238(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_239(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_240(iVar0);
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

int func_204(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_172(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_241())
	{
		return func_172(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_172(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_205(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_206(int iParam0)
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
		func_242(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_243(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_207(vector3 vParam0, bool bParam3)
{
	float fVar0;

	fVar0 = func_138(Global_35, vParam0);
	if (fVar0 < Global_1901929->f_230.f_56)
	{
		*bParam3 = 1;
		return 1;
	}
	if (fVar0 < Global_1901929->f_230.f_57)
	{
		return 1;
	}
	return 0;
}

void func_208(int iParam0)
{
	func_233((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/], iParam0, 17);
}

int func_209(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = func_133(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_6;
}

Vector3 func_210(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_130(&Var3, uParam0) && func_131(&Var3, iParam1)) && func_244(&Var3, iParam2))
	{
		func_245(Var3, 1702777600, &vVar0, 0);
	}
	return vVar0;
}

float func_211()
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.1f);
}

void func_212(int iParam0)
{
	func_171((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/], iParam0, 17);
}

bool func_213(int iParam0)
{
	if (!func_126(iParam0))
	{
		return false;
	}
	return (func_246(iParam0) && ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != 0);
}

Vector3 func_214(int iParam0)
{
	return ((*Global_1225057)[iParam0 /*686*/])->f_606;
}

int func_215(vector3 vParam0, int iParam3, float fParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;

	iVar1 = func_247(iParam3);
	iVar2 = ((&Global_1186267->f_3[iParam3] + iVar1) - 1);
	iVar6 = iVar1;
	while (iVar6 <= iVar2)
	{
		if ((Global_1186267->f_231.f_1066[iVar6 /*17*/])->f_13 != 1 && (Global_1186267->f_231.f_1066[iVar6 /*17*/])->f_13 != 2)
		{
		}
		else
		{
			iVar7 = 0;
			while (iVar7 <= ((Global_1186267->f_231.f_1066[iVar6 /*17*/])->f_7 - 1))
			{
				vVar3 = { func_248(iVar6, iVar7) };
				if (func_164(vVar3))
				{
				}
				else
				{
					if (fParam4 == -1f)
					{
						fVar0 = BUILTIN::TO_FLOAT(func_249(iVar6, iVar7));
						if (fVar0 == BUILTIN::TO_FLOAT(2147483647))
						{
							return 1;
						}
					}
					else
					{
						fVar0 = fParam4;
					}
					if (func_138(vParam0, vVar3) < fVar0)
					{
						return 1;
					}
				}
				iVar7++;
			}
		}
		iVar6++;
	}
	return 0;
}

int func_216(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_250(iParam0) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return 0;
	}
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return 0;
	}
	if (iVar2 == 0)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
			if ((Global_1275573->f_21 - iVar2) < Global_1901929->f_230.f_51)
			{
				return 1;
			}
			break;
		case 2:
			if ((Global_1275573->f_21 - iVar2) < Global_1901929->f_230.f_52)
			{
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_217(int iParam0)
{
	switch (iParam0->f_6)
	{
		case 2:
			return Global_1901929->f_230.f_48;
		case 1:
			return Global_1901929->f_230.f_49;
	}
	return -1;
}

struct<2> func_218(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_219(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

int func_220(int iParam0)
{
	int iVar0;

	iVar0 = (Global_1901929->f_230.f_50 / 1000);
	return BUILTIN::CEIL((IntToFloat(iVar0) * func_251(iParam0)));
}

int func_221(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_71(iParam0, 2087069356) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return 0;
	}
	if (iVar2 != 0 && (Global_1275573->f_21 - iVar2) < iParam1)
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

void func_223(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -2094060557:
			*iParam1 = 6;
			*iParam2 = 10;
			break;
		case 328288820:
			*iParam1 = 10;
			*iParam2 = 14;
			break;
		case -1575618003:
			*iParam1 = 14;
			*iParam2 = 18;
			break;
		case -1205003059:
			*iParam1 = 18;
			*iParam2 = 22;
			break;
		case -281953142:
			*iParam1 = 0;
			*iParam2 = 6;
			break;
		case 390845486:
			*iParam1 = 6;
			*iParam2 = 12;
			break;
		case 495559496:
			*iParam1 = 12;
			*iParam2 = 18;
			break;
		case 48904803:
			*iParam1 = 18;
			*iParam2 = 0;
			break;
		case -2090512547:
			*iParam1 = 22;
			*iParam2 = 4;
			break;
		case -1142645407:
			*iParam1 = 6;
			*iParam2 = 14;
			break;
		case 2059113913:
			*iParam1 = 14;
			*iParam2 = 22;
			break;
		case 272045896:
			*iParam1 = 0;
			*iParam2 = 12;
			break;
		case -184283233:
			*iParam1 = 6;
			*iParam2 = 18;
			break;
		case -1602081438:
			*iParam1 = 12;
			*iParam2 = 0;
			break;
		case 1781467359:
			*iParam1 = 18;
			*iParam2 = 6;
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
}

int func_224(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iParam0 < iParam1)
	{
		if (iVar0 >= iParam0 && iVar0 < iParam1)
		{
			return 1;
		}
	}
	else if (iParam0 > iParam1)
	{
		if (iVar0 >= iParam1 && iVar0 < iParam0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_225(int iParam0)
{
	return (Global_1131895->f_2[iParam0 /*17*/])->f_1;
}

int func_226(int iParam0)
{
	return 0;
}

int func_227(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_252(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1275573->f_10)
		{
			if (!Global_1275573->f_11)
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

int func_228()
{
	return &Global_1902689;
}

bool func_229(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_253(iParam1) || !func_253(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (!UNLOCK::_UNLOCK_IS_UNLOCKED(160441867))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_231(int iParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, int iParam8, float fParam9)
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	vector3 vVar8;
	int iVar11;
	int iVar12;
	int iVar13;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 79)
	{
		return 11;
	}
	if (!func_254())
	{
		return 2;
	}
	uVar1 = func_92(iParam0);
	iVar2 = func_255(uVar1, uParam1);
	if (iVar2 < 0 || iVar2 >= 55)
	{
		return 11;
	}
	if (!bParam7 && func_256(iParam0, iVar2, iParam8, &bVar3))
	{
		if (bVar3)
		{
			return 1;
		}
		else
		{
			return 4;
		}
	}
	if (func_257(uVar1, uParam1))
	{
		vVar4 = { func_258(uVar1, uParam1) };
		iVar7 = func_259(uVar1, iVar2);
		if (!func_260(iVar7, vVar4))
		{
			return 5;
		}
	}
	if (func_261(iParam2) == -1)
	{
		return 6;
	}
	if (fParam9 >= 0f && !func_164(vParam3))
	{
		vVar8 = { func_96(iParam0, iVar2) };
		if (BUILTIN::VDIST(vParam3, vVar8) > fParam9)
		{
			return 12;
		}
	}
	if (func_262(iParam2))
	{
		iVar11 = func_88(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		if (!func_126(iVar11))
		{
			return 13;
		}
		if (func_213(iVar11))
		{
			return 14;
		}
	}
	if (func_263(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
	{
		return 15;
	}
	if (bParam6)
	{
		if (iParam2 != 1717788883 && func_264(func_161(), func_161(), 0, bParam7))
		{
			return 3;
		}
		iVar12 = func_95(iParam0, iVar2);
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar12))
		{
			return 8;
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar12))
		{
			return 7;
		}
		iVar13 = func_265(iParam0, iVar2);
		if (iVar13 != 0)
		{
			if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
			{
				return 10;
			}
			if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar13))
			{
				return 9;
			}
		}
	}
	return 0;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 4194304;
		case 3:
			return 8388608;
		case 4:
			return 16777216;
		case 5:
			return 33554432;
		case 6:
			return 67108864;
		case 7:
		case 9:
			return 134217728;
		case 8:
		case 10:
			return 268435456;
		case 11:
			return 536870912;
		case 12:
			return 1073741824 /* Float: 2f */;
		case 13:
			return 256;
		case 14:
			return 524288;
		case 15:
			return 32768;
		default:
			break;
	}
	return 0;
}

bool func_233(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::SET_BIT((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

int func_234(int iParam0)
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

int func_235(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_266(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_236(int iParam0)
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

int func_237(int iParam0)
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

int func_238(int iParam0)
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

int func_239(int iParam0)
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

int func_240(int iParam0)
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

int func_241()
{
	return Global_1099294->f_339;
}

void func_242(int iParam0)
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
	func_243(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_243(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

bool func_244(var uParam0, int iParam1)
{
	uParam0->f_2 = 1700129460;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_245(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_246(int iParam0)
{
	int iVar0;

	if (!func_126(iParam0))
	{
		return false;
	}
	iVar0 = func_267(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

int func_247(int iParam0)
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

Vector3 func_248(int iParam0, int iParam1)
{
	return func_268(&((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[iParam1 /*4*/]));
}

var func_249(int iParam0, int iParam1)
{
	return ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[iParam1 /*4*/])->f_3;
}

struct<2> func_250(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 1:
			return func_218(-495896359);
	}
	return Var0;
}

float func_251(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return Global_1901929->f_230.f_30;
		default:
			break;
	}
	return 1f;
}

int func_252(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1939178->f_12)
	{
		if ((bParam2 || Global_1939178->f_13 > 0) || Global_1939178->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1939178->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1939178->f_14 > 0 || (bParam2 && Global_1939178->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1939178->f_7)
		{
			if (bParam2 || Global_1939178->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_253(int iParam0)
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
	iVar0 = func_269(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_270(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_271(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_272(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_273(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_274(iParam0);
	if (iVar5 < 1 || iVar5 > func_275(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_254()
{
	if (func_13())
	{
		return 0;
	}
	return 1;
}

int func_255(var uParam0, var uParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_130(&Var1, uParam0) && func_276(&Var1, uParam1))
	{
		iVar0 = ((func_277(uParam0) - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_256(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;

	uVar0 = func_278(iParam0, iParam1, 2);
	if (func_279(iParam0, iParam1, uVar0))
	{
		return 1;
	}
	vVar1 = { func_96(iParam0, iParam1) };
	if (func_164(vVar1))
	{
		return 0;
	}
	uVar4 = func_280(func_92(iParam0), iParam1);
	if ((iParam2 && func_278(iParam0, iParam1, 1)) && func_281(vVar1, uVar4))
	{
		*bParam3 = 1;
		return 1;
	}
	return func_282(vVar1, uVar4, uVar0);
}

int func_257(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_130(&Var1, uParam0) && func_276(&Var1, uParam1))
	{
		func_283(Var1, -528314399, &iVar0, 0);
	}
	return iVar0;
}

Vector3 func_258(var uParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_130(&Var3, uParam0) && func_276(&Var3, uParam1))
	{
		func_245(Var3, -370006557, &vVar0, 1);
	}
	return vVar0;
}

int func_259(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;

	iVar0 = 0;
	if (func_130(&Var1, uParam0))
	{
		if (func_131(&Var1, iParam1))
		{
			func_132(Var1, 1342438652, &iVar0, 0);
		}
	}
	iVar6 = 0;
	if (iVar0 != 0)
	{
		iVar6 = func_284(iVar0);
	}
	return iVar6;
}

int func_260(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;

	if (func_164(vParam1))
	{
		return 0;
	}
	if (func_285(iParam0))
	{
		return 0;
	}
	fVar0 = 5f;
	fVar1 = func_286(iParam0);
	if (fVar1 > 300f)
	{
		fVar1 = 300f;
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vParam1, fVar0, fVar1))
	{
		return 0;
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam1, fVar0, fVar1))
	{
		return 0;
	}
	fVar1 = (fVar1 * 0.75f);
	if (fVar1 < 150f)
	{
		fVar1 = 150f;
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar5);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vParam1);
				if (fVar4 < fVar1 && !func_287(iParam0))
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return 1;
}

int func_261(int iParam0)
{
	int iVar0;

	if (!func_288(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (func_289(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case -260420884:
		case 850213441:
		case 1884341302:
		case 1918154385:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_263(int iParam0)
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	int iVar52;

	if (!_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(iParam0))
	{
		return 0;
	}
	iVar51 = _NAMESPACE26::_0xD1BF325C8252A982(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var0[iVar50 /*7*/]);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar52) || PLAYER::IS_PLAYER_DEAD(iVar52))
		{
		}
		else if (func_290(1048576, iVar52))
		{
			return 1;
		}
		iVar50++;
	}
	return 0;
}

int func_264(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!bParam4)
	{
		if (func_13())
		{
			return 1;
		}
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if (!func_26(Param2))
	{
		Var0 = { func_291() };
	}
	else
	{
		Var0 = { Param2 };
	}
	if ((!bParam5 && func_26(Var0)) && !func_174(Var0, Param0))
	{
		return 1;
	}
	Var2 = { func_292() };
	if (func_26(Var2) && (!func_26(Var2) || !func_174(Param0, Var2)))
	{
		return 1;
	}
	return 0;
}

int func_265(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_133(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_1;
}

int func_266(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_293(iParam0, uParam1, &uVar0))
	{
		func_294(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_267(int iParam0)
{
	if (!func_126(iParam0))
	{
		return 0;
	}
	return (Global_1126368->f_1[iParam0 /*62*/])->f_3;
}

Vector3 func_268(int iParam0)
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

int func_269(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_270(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_271(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_272(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_295(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_273(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_274(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_275(int iParam0, int iParam1)
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

bool func_276(var uParam0, var uParam1)
{
	uParam0->f_2 = 775488648;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_277(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	if (func_130(&vVar1, uParam0))
	{
		vVar1.f_2 = 866900867;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
		{
			iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

int func_278(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_133(iParam0, iParam1);
	return func_135((Global_1234391->f_401[iVar0 /*7*/])->f_2, iParam2);
}

int func_279(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;

	iVar0 = 0;
	while (iVar0 <= (func_209(iParam0, iParam1) - 1))
	{
		vVar1 = { func_210(func_92(iParam0), iParam1, iVar0) };
		uVar4 = func_296(func_92(iParam0), iParam1, iVar0);
		if (func_164(vVar1))
		{
		}
		else
		{
			if (func_282(vVar1, uVar4, uParam2))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_280(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	uVar0 = Global_1901929->f_160.f_34;
	if (func_130(&Var1, uParam0) && func_131(&Var1, iParam1))
	{
		func_297(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

int func_281(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false, false), vParam0) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_282(vector3 vParam0, var uParam3, bool bParam4)
{
	int iVar0;

	if (!bParam4)
	{
		iVar0 = 575122756;
	}
	return VOLUME::_0x397769175A7DBB30(vParam0, uParam3, 0, 0, iVar0);
}

int func_283(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_BOOL(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_284(int iParam0)
{
	switch (iParam0)
	{
		case joaat("primary"):
			return 0;
		case joaat("secondary"):
			return 1;
		case -177397452:
			return 2;
	}
	return 0;
}

bool func_285(int iParam0)
{
	return func_298(iParam0, 4);
}

float func_286(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 450f;
		case 1:
			return 450f;
		case 2:
			return 250f;
		default:
			break;
	}
	return 450f;
}

int func_287(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if ((Global_1132418->f_2[iParam0 /*41*/])->f_9 == iVar0 || (Global_1132418->f_2[iParam0 /*41*/])->f_9 == (iVar0 - 1))
	{
		return 1;
	}
	return 0;
}

int func_288(int iParam0)
{
	int iVar0;

	iVar0 = func_299(iParam0);
	if (iVar0 != 0 && func_300(iVar0))
	{
		return 0;
	}
	if (iParam0 == 1717788883)
	{
		return func_301();
	}
	return 1;
}

bool func_289(int iParam0)
{
	return Global_1214482[iParam0 /*27*/] == -1;
}

bool func_290(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

struct<2> func_291()
{
	return *Global_1051163;
}

struct<2> func_292()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_302(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_302(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

bool func_293(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_234(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_294(var uParam0, int iParam1, var uParam2)
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

int func_295(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

var func_296(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	uVar0 = Global_1901929->f_160.f_35;
	if ((func_130(&Var1, uParam0) && func_131(&Var1, iParam1)) && func_244(&Var1, iParam2))
	{
		func_297(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

int func_297(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_FLOAT(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_298(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_135((*Global_1132001)[iVar0 /*13*/][iParam0 /*4*/], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_299(int iParam0)
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
		case 1427578635:
		case 1532822440:
		case joaat("dynamic"):
		case 1884341302:
		case 1918154385:
			return 1;
		case -1261475678:
		case -669677371:
		case -468635158:
			return 8;
		default:
			break;
	}
	return 0;
}

bool func_300(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_301()
{
	return func_303(func_302(0));
}

struct<2> func_302(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

bool func_303(struct<2> Param0)
{
	return func_304(Param0, 1, 4);
}

bool func_304(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_26(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_305(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_305(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_306(Param0);
	}
	return -1;
}

int func_306(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_175(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

